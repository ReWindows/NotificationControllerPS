#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 4 member(s).
namespace NotificationControllerTelemetry {
class UserContextController_Destructor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UserContextController_Destructor@NotificationControllerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserContextController_Destructor@NotificationControllerTelemetry@@QEAA@XZ
    ~UserContextController_Destructor();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UserContextController_Destructor@NotificationControllerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UserContextController_Destructor@NotificationControllerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationControllerTelemetry
