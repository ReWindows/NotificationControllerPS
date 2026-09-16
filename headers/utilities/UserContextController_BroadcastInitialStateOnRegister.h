#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 7 member(s).
namespace NotificationControllerTelemetry {
class UserContextController_BroadcastInitialStateOnRegister {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UserContextController_BroadcastInitialStateOnRegister@NotificationControllerTelemetry@@QEAAXK@Z
    void StartActivity(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserContextController_BroadcastInitialStateOnRegister@NotificationControllerTelemetry@@QEAA@XZ
    ~UserContextController_BroadcastInitialStateOnRegister();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UserContextController_BroadcastInitialStateOnRegister@NotificationControllerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UserContextController_BroadcastInitialStateOnRegister@NotificationControllerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotificationControllerTelemetry
