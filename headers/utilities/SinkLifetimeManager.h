#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 8 member(s).
class SinkLifetimeManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureForProcess@SinkLifetimeManager@@QEAAXK@Z
    void EnsureForProcess(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SinkLifetimeManager@@UEAA@XZ
    virtual ~SinkLifetimeManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HamActivityCallback@SinkLifetimeManager@@CAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z
    static void HamActivityCallback(_HAM_ACTIVITY_CALLBACK_PAYLOAD *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHamActivityInvalidated@SinkLifetimeManager@@AEAAXXZ
    void OnHamActivityInvalidated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHamActivityStopRequested@SinkLifetimeManager@@AEAAXXZ
    void OnHamActivityStopRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SinkLifetimeManager@@AEAA_N_N@Z
    bool Stop(bool);
};
