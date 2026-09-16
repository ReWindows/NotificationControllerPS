#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 22 member(s).
class ToastDemuxer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextsAdded@ToastDemuxer@@UEAAJKPEBUDemuxerContextData@@K@Z
    virtual long ContextsAdded(unsigned long, DemuxerContextData const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextsDeleted@ToastDemuxer@@UEAAJKPEBUDemuxerContext@@K@Z
    virtual long ContextsDeleted(unsigned long, DemuxerContext const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@ToastDemuxer@@QEAAXXZ
    void Disconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotificationToastSlotEmpty@ToastDemuxer@@UEAAJKK@Z
    virtual long NotificationToastSlotEmpty(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotificationToastSlotNew@ToastDemuxer@@UEAAJKPEBUNOC_REFINED_NOTIFICATION@@K@Z
    virtual long NotificationToastSlotNew(unsigned long, NOC_REFINED_NOTIFICATION const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotificationToastSlotUpdate@ToastDemuxer@@UEAAJKPEBUNOC_UPDATED_NOTIFICATION@@K@Z
    virtual long NotificationToastSlotUpdate(unsigned long, NOC_UPDATED_NOTIFICATION const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterContextProvider@ToastDemuxer@@QEAAXPEAUINotificationContextSinkRegistrar@@@Z
    void RegisterContextProvider(INotificationContextSinkRegistrar *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterToastSink@ToastDemuxer@@QEAAJPEAUINotificationControllerToastSink@@PEAK@Z
    long RegisterToastSink(INotificationControllerToastSink *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ToastDemuxer@@QEAAJAEBUToastSinkParams@@@Z
    long RuntimeClassInitialize(ToastSinkParams const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ToastDemuxer@@QEAA@XZ
    ToastDemuxer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetNotificationData@ToastDemuxer@@UEAA?AV?$WrappedNotificationList@UNOC_REFINED_NOTIFICATION@@VRefinedNotification@@@@AEBVNotificationIdentifier@@@Z
    virtual WindissectOpaque TryGetNotificationData(NotificationIdentifier const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUnregisterFailedSink@ToastDemuxer@@UEAA_NK@Z
    virtual bool TryUnregisterFailedSink(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUnregisterSink@ToastDemuxer@@UEAA_NK@Z
    virtual bool TryUnregisterSink(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastNotificationDeletedAndRemoveFromDataStore@ToastDemuxer@@AEAAXKAEBVNotificationIdentifier@@@Z
    void BroadcastNotificationDeletedAndRemoveFromDataStore(unsigned long, NotificationIdentifier const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextAdded@ToastDemuxer@@AEAAXAEBUDemuxerContextData@@@Z
    void ContextAdded(DemuxerContextData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextDeleted@ToastDemuxer@@AEAAXAEBVDemuxerContextWrapper@@@Z
    void ContextDeleted(DemuxerContextWrapper const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureContextDataExists@ToastDemuxer@@AEAAAEAUContextData@1@AEBVDemuxerContextWrapper@@@Z
    WindissectOpaque & EnsureContextDataExists(DemuxerContextWrapper const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ToastDemuxer@@EEAA@XZ
    virtual ~ToastDemuxer();
};
