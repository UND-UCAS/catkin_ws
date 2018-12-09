#include "wifi_comm/packet.hpp"
#include <iterator>

namespace olsr
{
    void packet::updateMsgSeqNums()
    {
        int currSeqNum = 0;

        std::list<olsr_msg>::iterator it;
        for (it = _messages.begin(); it != _messages.end(); ++it, ++currSeqNum)
        {
            it->sequenceNumber = currSeqNum;
        }
    }

    void packet::addMessage(olsr_msg message)
    {
        // TODO: Calculate size of message and add to total packet length.
        message.sequenceNumber = _messages.size();
        _messages.push_back(message);
    }

    void packet::removeMessage(int index)
    {
        // TODO: Calculate size of removed message and subtract from packet length.
        if (index < _messages.size() && index > 0)
        {
            std::list<olsr_msg>::iterator it = _messages.begin();
            std::advance(it, index);
            _messages.erase(it);
        }
        else
        {
            throw "Index out of range";
        }
    }

    olsr_msg packet::getMessage(int index)
    {
        if (index < _messages.size() && index > 0)
        {
            std::list<olsr_msg>::iterator it = _messages.begin();
            std::advance(it, index);

            return *it;
        }

        throw "Index out of range";
    }
}
