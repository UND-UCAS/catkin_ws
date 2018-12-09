#ifndef _OLSR_MSG_
#define _OLSR_MSG_

#include <string>

namespace olsr
{
    struct olsr_msg
    {
        int msgType;            // TODO: Change to enumeration.
        int vTime;              // validity time = C*(1+a/16)* 2^b  [in seconds]
        int msgSize;            // Size of message in bytes
        std::string oaddr;      // Originator Address
        int timeToLive;
        int hopCount;
        int sequenceNumber;     // Message Sequence Number
        std::string message;
    };
}

#endif
