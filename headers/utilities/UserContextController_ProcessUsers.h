#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 7 member(s).
namespace NotificationControllerTelemetry {
class UserContextController_ProcessUsers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UserContextController_ProcessUsers@NotificationControllerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserContextController_ProcessUsers@NotificationControllerTelemetry@@QEAA@XZ
    ~UserContextController_ProcessUsers();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UserContextController_ProcessUsers@NotificationControllerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UserContextController_ProcessUsers@NotificationControllerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationControllerTelemetry
