#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 22 member(s).
namespace tson {
class input_archive {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?finishNode@input_archive@tson@@QEAAXXZ
    void finishNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?startNode@input_archive@tson@@QEAAXXZ
    void startNode();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z
    bool consume_expected_marker(int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?search@input_archive@tson@@AEAA_NXZ
    bool search();
    // Category: Method | Source: PDB Internal
    // Symbol: ?upgrade_string_size@input_archive@tson@@AEAAGE@Z
    unsigned short upgrade_string_size(unsigned char);
};
} // namespace tson
