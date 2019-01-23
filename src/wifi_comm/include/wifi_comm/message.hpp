#ifndef _PACKET_HPP_
#define _PACKET_HPP_

#include <wifi_comm/packet.hpp>
#include <string>

namespace olsr
{
    struct message
    {
        std::string _msgType;  // 0-127 message types are reserved.
        int _vTime;  // Validity time: C*(1+a/16)*2^b
        size_t _msgSize;
        std::string _oAddr;
        int _timeToList;
        int _hopCount;
        int _msgSeqNum;
        std::string _message;
    };
}

#endif
