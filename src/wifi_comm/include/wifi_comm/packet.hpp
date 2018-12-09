#ifndef _PACKET_HPP_
#define _PACKET_HPP_

#include <wifi_comm/olsr_msg.hpp>
#include <list>

namespace olsr
{
    class packet
    {
    private:
        int _packetLength;
        int _seqNum;
        std::list<olsr_msg> _messages;

        void updateMsgSeqNums();

    public:
        packet()
        {
            _packetLength = sizeof(int)*2;  // Size of an empty packet.
        }

        void addMessage(olsr_msg);
        void removeMessage(int);
        olsr_msg getMessage(int);
    };
}

#endif
