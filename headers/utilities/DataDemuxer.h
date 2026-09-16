#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 28 member(s).
class DataDemuxer {
public:
    class SinkData;
    class SubgroupEntry;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextsAdded@DataDemuxer@@UEAAJKPEBUDemuxerContextData@@K@Z
    virtual long ContextsAdded(unsigned long, DemuxerContextData const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextsDeleted@DataDemuxer@@UEAAJKPEBUDemuxerContext@@K@Z
    virtual long ContextsDeleted(unsigned long, DemuxerContext const *, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataDemuxer@@QEAA@XZ
    DataDemuxer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@DataDemuxer@@QEAAXXZ
    void Disconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotificationsAdded@DataDemuxer@@UEAAJKPEBUNOC_REFINED_NOTIFICATION@@K@Z
    virtual long NotificationsAdded(unsigned long, NOC_REFINED_NOTIFICATION const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotificationsDeleted@DataDemuxer@@UEAAJKPEBUNOC_DELETED_NOTIFICATION@@K@Z
    virtual long NotificationsDeleted(unsigned long, NOC_DELETED_NOTIFICATION const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotificationsUpdated@DataDemuxer@@UEAAJKPEBUNOC_UPDATED_NOTIFICATION@@K@Z
    virtual long NotificationsUpdated(unsigned long, NOC_UPDATED_NOTIFICATION const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySinksAllNotifications@DataDemuxer@@UEAAX$$QEAV?$WrappedNotificationList@UNOC_REFINED_NOTIFICATION@@VRefinedNotification@@@@K@Z
    virtual void NotifySinksAllNotifications(WindissectOpaque &&, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySinksThatNotificationsAdded@DataDemuxer@@UEAAX$$QEAV?$WrappedNotificationList@UNOC_REFINED_NOTIFICATION@@VRefinedNotification@@@@@Z
    virtual void NotifySinksThatNotificationsAdded(WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySinksThatNotificationsDeleted@DataDemuxer@@UEAAX$$QEAV?$WrappedNotificationList@UNOC_DELETED_NOTIFICATION@@VDeletedNotification@@@@@Z
    virtual void NotifySinksThatNotificationsDeleted(WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySinksThatNotificationsUpdated@DataDemuxer@@UEAAX$$QEAV?$WrappedNotificationList@UNOC_UPDATED_NOTIFICATION@@VUpdatedNotification@@@@@Z
    virtual void NotifySinksThatNotificationsUpdated(WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterContextProvider@DataDemuxer@@QEAAXPEAUINotificationContextSinkRegistrar@@@Z
    void RegisterContextProvider(INotificationContextSinkRegistrar *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDataSink@DataDemuxer@@QEAAJPEAUINotificationControllerDataSink@@PEAK@Z
    long RegisterDataSink(INotificationControllerDataSink *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DataDemuxer@@QEAAJW4__MIDL___MIDL_itf_notificationcontroller_0000_0003_0001@@@Z
    long RuntimeClassInitialize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUnregisterFailedSink@DataDemuxer@@UEAA_NK@Z
    virtual bool TryUnregisterFailedSink(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUnregisterSink@DataDemuxer@@UEAA_NK@Z
    virtual bool TryUnregisterSink(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNotificationToContextData@DataDemuxer@@AEAAXAEBUNOC_REFINED_NOTIFICATION@@AEAUContextData@1@@Z
    void AddNotificationToContextData(NOC_REFINED_NOTIFICATION const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDataStructuresIfNotificationsEmpty@DataDemuxer@@AEAAXXZ
    void ClearDataStructuresIfNotificationsEmpty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextAdded@DataDemuxer@@AEAAXAEBUDemuxerContextData@@@Z
    void ContextAdded(DemuxerContextData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextDeleted@DataDemuxer@@AEAAXAEBVDemuxerContextWrapper@@@Z
    void ContextDeleted(DemuxerContextWrapper const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSubgroupAdded@DataDemuxer@@AEAA_NAEBUNOC_REFINED_NOTIFICATION@@@Z
    bool HandleSubgroupAdded(NOC_REFINED_NOTIFICATION const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSubgroupDeleted@DataDemuxer@@AEAAXAEBUNOC_DELETED_NOTIFICATION@@AEAV?$WrappedNotificationList@UNOC_REFINED_NOTIFICATION@@VRefinedNotification@@@@@Z
    void HandleSubgroupDeleted(NOC_DELETED_NOTIFICATION const &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSubgroupUpdated@DataDemuxer@@AEAA_NAEBUNOC_UPDATED_NOTIFICATION@@@Z
    bool HandleSubgroupUpdated(NOC_UPDATED_NOTIFICATION const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifySinkThatNotificationsAdded@DataDemuxer@@AEAAXAEBUSinkData@1@AEAV?$WrappedNotificationList@UNOC_REFINED_NOTIFICATION@@VRefinedNotification@@@@@Z
    void NotifySinkThatNotificationsAdded(WindissectOpaque const &, WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataDemuxer@@EEAA@XZ
    virtual ~DataDemuxer();
};
