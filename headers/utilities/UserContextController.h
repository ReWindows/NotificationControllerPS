#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 18 member(s).
class UserContextController {
public:
    class SinkData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterContextSink@UserContextController@@UEAAJPEAUINotificationDemuxerContextSink@@PEAKW4__MIDL___MIDL_itf_notificationdemuxer_0000_0001_0001@@@Z
    virtual long RegisterContextSink(INotificationDemuxerContextSink *, unsigned long *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UserContextController@@QEAAJPEAUIUserStatics@System@Windows@@PEAUISignInStateManager@Internal@34@@Z
    long RuntimeClassInitialize(::Windows::System::IUserStatics *, ::Windows::System::Internal::ISignInStateManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UserContextController@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUnregisterFailedSink@UserContextController@@UEAA_NK@Z
    virtual bool TryUnregisterFailedSink(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUnregisterSink@UserContextController@@UEAA_NK@Z
    virtual bool TryUnregisterSink(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterSink@UserContextController@@UEAAJK@Z
    virtual long UnregisterSink(unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserContextController@@QEAA@XZ
    UserContextController();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserContextController@@UEAA@XZ
    virtual ~UserContextController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastInitialStateToSinkAsync@UserContextController@@AEAAXK@Z
    void BroadcastInitialStateToSinkAsync(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoCreateControllerForContext@UserContextController@@AEAAJAEAUDemuxerContextData@@@Z
    long CoCreateControllerForContext(DemuxerContextData &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextForUser@UserContextController@@AEBA?AVDemuxerContextWrapper@@PEAUIUser@System@Windows@@@Z
    DemuxerContextWrapper GetContextForUser(::Windows::System::IUser *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAuthenticationStatusChanging@UserContextController@@AEAAJPEAUIUserWatcher@System@Windows@@PEAUIUserAuthenticationStatusChangingEventArgs@34@@Z
    long OnAuthenticationStatusChanging(::Windows::System::IUserWatcher *, ::Windows::System::IUserAuthenticationStatusChangingEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUserAddedOrUpdated@UserContextController@@AEAAJPEAUIUserWatcher@System@Windows@@PEAUIUserChangedEventArgs@34@@Z
    long OnUserAddedOrUpdated(::Windows::System::IUserWatcher *, ::Windows::System::IUserChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUserRemoved@UserContextController@@AEAAJPEAUIUserWatcher@System@Windows@@PEAUIUserChangedEventArgs@34@@Z
    long OnUserRemoved(::Windows::System::IUserWatcher *, ::Windows::System::IUserChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUsers@UserContextController@@AEAAXPEAU?$IVectorView@PEAVUser@System@Windows@@@Collections@Foundation@Windows@@AEAVUserContextController_ProcessUsers@NotificationControllerTelemetry@@@Z
    void ProcessUsers(WindissectOpaque *, WindissectOpaque &);
};
