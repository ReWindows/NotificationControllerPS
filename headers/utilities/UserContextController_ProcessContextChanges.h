#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 14 member(s).
namespace NotificationControllerTelemetry {
class UserContextController_ProcessContextChanges {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UserContextController_ProcessContextChanges@NotificationControllerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserContextController_ProcessContextChanges@NotificationControllerTelemetry@@QEAA@XZ
    ~UserContextController_ProcessContextChanges();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UserContextController_ProcessContextChanges@NotificationControllerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UserContextController_ProcessContextChanges@NotificationControllerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationControllerTelemetry
