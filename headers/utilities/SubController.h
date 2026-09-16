#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 6 member(s).
class SubController {
public:
    class RunningTaskCountGuard;
    class SinkEntry;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SubController@@QEAA@XZ
    SubController();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SubController@@UEAA@XZ
    virtual ~SubController();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRpcDisconnectError@SubController@@KA_NJ@Z
    static bool IsRpcDisconnectError(long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateNewUniqueSession@SubController@@CAKXZ
    static unsigned long GenerateNewUniqueSession();
};
