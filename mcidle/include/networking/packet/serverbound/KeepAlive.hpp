#pragma once

#include <networking/game/GameState.hpp>
#include <networking/packet/Packet.hpp>

namespace mcidle {
namespace packet {
namespace serverbound {

class KeepAlive : public Packet
{
public:
    KeepAlive();
    KeepAlive(s64);

    Packet &Serialize() override;
    void Deserialize(ByteBuffer &) override;

private:
	s64 m_Id;
};

} // ns serverbound
} // ns packet
} // ns mcidle
