#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 50 member(s).
class ToastController {
public:
    class SinkData;
    class SlotIndex;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastAllSlots@ToastController@@UEAAXXZ
    virtual void BroadcastAllSlots();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecayAllToasts@ToastController@@UEAAXXZ
    virtual void DecayAllToasts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@ToastController@@QEAAXXZ
    void Disconnect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSlotsAvailable@ToastController@@UEBAKXZ
    virtual unsigned long GetSlotsAvailable() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetToastSinkFlags@ToastController@@UEBA?AW4__MIDL___MIDL_itf_notificationcontroller_0000_0003_0002@@XZ
    virtual int GetToastSinkFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonEmptySlots@ToastController@@QEAA_NXZ
    bool HasNonEmptySlots();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSinksRegistered@ToastController@@QEBA_NXZ
    bool HasSinksRegistered() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsQueueEmpty@ToastController@@UEBA_NXZ
    virtual bool IsQueueEmpty() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotificationsAdded@ToastController@@UEAAJKPEBUNOC_REFINED_NOTIFICATION@@K@Z
    virtual long NotificationsAdded(unsigned long, NOC_REFINED_NOTIFICATION const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotificationsDeleted@ToastController@@UEAAJKPEBUNOC_DELETED_NOTIFICATION@@K@Z
    virtual long NotificationsDeleted(unsigned long, NOC_DELETED_NOTIFICATION const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotificationsUpdated@ToastController@@UEAAJKPEBUNOC_UPDATED_NOTIFICATION@@K@Z
    virtual long NotificationsUpdated(unsigned long, NOC_UPDATED_NOTIFICATION const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterToastSink@ToastController@@QEAAJPEAUINotificationControllerToastSink@@PEAK@Z
    long RegisterToastSink(INotificationControllerToastSink *, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ToastController@@QEAA@XZ
    ToastController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRemoveToast@ToastController@@UEAA_NAEBVNotificationIdentifier@@@Z
    virtual bool TryRemoveToast(NotificationIdentifier const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUnregisterFailedSink@ToastController@@UEAA_NK@Z
    virtual bool TryUnregisterFailedSink(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUnregisterSink@ToastController@@UEAA_NK@Z
    virtual bool TryUnregisterSink(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ToastController@@UEAA@XZ
    virtual ~ToastController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionCenterProcessChanged@ToastController@@AEAAXK@Z
    void ActionCenterProcessChanged(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastAllSlotsEmpty@ToastController@@AEAAXXZ
    void BroadcastAllSlotsEmpty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSlot@ToastController@@AEAA_NAEBUSinkData@1@VSlotIndex@1@@Z
    bool BroadcastSlot(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSlotEmpty@ToastController@@AEAAXAEBUSinkData@1@VSlotIndex@1@@Z
    void BroadcastSlotEmpty(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSlotNew@ToastController@@AEAAXAEBUSinkData@1@VSlotIndex@1@$$QEAV?$WrappedNotificationList@UNOC_REFINED_NOTIFICATION@@VRefinedNotification@@@@@Z
    void BroadcastSlotNew(WindissectOpaque const &, WindissectOpaque, WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastSlotUpdated@ToastController@@AEAAXAEBUSinkData@1@VSlotIndex@1@$$QEAV?$WrappedNotificationList@UNOC_UPDATED_NOTIFICATION@@VUpdatedNotification@@@@@Z
    void BroadcastSlotUpdated(WindissectOpaque const &, WindissectOpaque, WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecayAllToasts@ToastController@@AEAAX_N@Z
    void DecayAllToasts(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillAdditionalHighPrioritySlot@ToastController@@AEAAXVSlotIndex@1@@Z
    void FillAdditionalHighPrioritySlot(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAndRemoveToastInternal@ToastController@@AEAA?AUFindAndRemoveToastResult@1@PEBG0@Z
    WindissectOpaque FindAndRemoveToastInternal(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindToast@ToastController@@AEAA?AUFindToastResult@1@PEBG0@Z
    WindissectOpaque FindToast(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerProcessId@ToastController@@AEAAKXZ
    unsigned long GetCallerProcessId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstSinkSession@ToastController@@AEBAKXZ
    unsigned long GetFirstSinkSession() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHighPriorityToastsCount@ToastController@@AEAA_KXZ
    uint64_t GetHighPriorityToastsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePowerNotification@ToastController@@CAKPEAXK0@Z
    static unsigned long HandlePowerNotification(void *, unsigned long, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInLowPowerState@ToastController@@AEAA_NXZ
    bool IsInLowPowerState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LowPowerStateChanged@ToastController@@AEAAX_N@Z
    void LowPowerStateChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorStateChanged@ToastController@@AEAAX_N@Z
    void MonitorStateChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishSignalToWakeUpClients@ToastController@@AEAAXXZ
    void PublishSignalToWakeUpClients();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishTelemetryEventIfApplicable@ToastController@@AEAAXAEBVNotificationIdentifier@@_N11K@Z
    void PublishTelemetryEventIfApplicable(NotificationIdentifier const &, bool, bool, bool, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortDirtySlot@ToastController@@AEAA_NAEAUToastSlot@@@Z
    bool SortDirtySlot(ToastSlot &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopLifetimeManagerIfNecessary@ToastController@@AEAAXXZ
    void StopLifetimeManagerIfNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToActionCenterEvents@ToastController@@AEAAXXZ
    void SubscribeToActionCenterEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToLockEvents@ToastController@@AEAAXXZ
    void SubscribeToLockEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeSnapshotOfCurrentSlots@ToastController@@AEAAXXZ
    void TakeSnapshotOfCurrentSlots();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToastQueueDirtyTimerCallback@ToastController@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void ToastQueueDirtyTimerCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToastSortComparer@ToastController@@CA_NAEBUToastSlotEntry@@0@Z
    static bool ToastSortComparer(ToastSlotEntry const &, ToastSlotEntry const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStartLifetimeManagerIfNecessary@ToastController@@AEAA_NXZ
    bool TryStartLifetimeManagerIfNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNotificationInSlot@ToastController@@AEAA?AW4UpdateResult@1@AEAUFindToastResult@1@AEBUNOC_UPDATED_NOTIFICATION@@@Z
    int UpdateNotificationInSlot(WindissectOpaque &, NOC_UPDATED_NOTIFICATION const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WereHighPriorityToastsEffectivelyDistributed@ToastController@@AEAA_N_K@Z
    bool WereHighPriorityToastsEffectivelyDistributed(uint64_t);
};
