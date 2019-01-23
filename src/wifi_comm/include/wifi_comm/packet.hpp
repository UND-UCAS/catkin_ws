#ifndef _OLSR_MSG_
#define _OLSR_MSG_

#include <list>

namespace olsr
{
    struct packet
    {
        size_t _packetLength;
        int _packetSeqNum;

        std::list<message> _messages;
    };
}

#endif
