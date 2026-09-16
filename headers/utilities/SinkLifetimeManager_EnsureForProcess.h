#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 6 member(s).
namespace NotificationControllerTelemetry {
class SinkLifetimeManager_EnsureForProcess {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivityStarted@SinkLifetimeManager_EnsureForProcess@NotificationControllerTelemetry@@QEAAXXZ
    void ActivityStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SinkLifetimeManager_EnsureForProcess@NotificationControllerTelemetry@@QEAAXKK@Z
    void StartActivity(unsigned long, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SinkLifetimeManager_EnsureForProcess@NotificationControllerTelemetry@@QEAA@XZ
    ~SinkLifetimeManager_EnsureForProcess();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SinkLifetimeManager_EnsureForProcess@NotificationControllerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SinkLifetimeManager_EnsureForProcess@NotificationControllerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationControllerTelemetry
