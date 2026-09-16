#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 6 member(s).
namespace NotificationControllerTelemetry {
class SinkLifetimeManager_Stop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BlockUntilCompletion@SinkLifetimeManager_Stop@NotificationControllerTelemetry@@QEAAXXZ
    void BlockUntilCompletion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SinkLifetimeManager_Stop@NotificationControllerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SinkLifetimeManager_Stop@NotificationControllerTelemetry@@QEAA@XZ
    ~SinkLifetimeManager_Stop();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SinkLifetimeManager_Stop@NotificationControllerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SinkLifetimeManager_Stop@NotificationControllerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationControllerTelemetry
