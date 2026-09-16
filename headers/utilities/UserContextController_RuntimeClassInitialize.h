#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 4 member(s).
namespace NotificationControllerTelemetry {
class UserContextController_RuntimeClassInitialize {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UserContextController_RuntimeClassInitialize@NotificationControllerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserContextController_RuntimeClassInitialize@NotificationControllerTelemetry@@QEAA@XZ
    ~UserContextController_RuntimeClassInitialize();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UserContextController_RuntimeClassInitialize@NotificationControllerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UserContextController_RuntimeClassInitialize@NotificationControllerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationControllerTelemetry
