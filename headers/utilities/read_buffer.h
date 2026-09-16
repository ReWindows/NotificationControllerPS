#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 3 member(s).
namespace tson {
class read_buffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?advance@read_buffer@tson@@QEAAPEAEXZ
    unsigned char * advance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z
    bool consume_n(void *, uint64_t);
};
} // namespace tson
