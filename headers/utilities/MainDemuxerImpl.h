#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 25 member(s).
class MainDemuxerImpl {
public:
    class ContextDeleteAccumulation;
    class DataDemuxerEntry;
    class ToastDemuxerEntry;
    class UnwrappedInfoAndController;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateNotification@MainDemuxerImpl@@UEAAJPEBG0PEBUNOC_ITEM_ACTIVATION_DATA@@@Z
    virtual long ActivateNotification(unsigned short const *, unsigned short const *, NOC_ITEM_ACTIVATION_DATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateNotificationGroup@MainDemuxerImpl@@UEAAJPEBG@Z
    virtual long ActivateNotificationGroup(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextsAdded@MainDemuxerImpl@@UEAAJKPEBUDemuxerContextData@@K@Z
    virtual long ContextsAdded(unsigned long, DemuxerContextData const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextsDeleted@MainDemuxerImpl@@UEAAJKPEBUDemuxerContext@@K@Z
    virtual long ContextsDeleted(unsigned long, DemuxerContext const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteNotifications@MainDemuxerImpl@@UEAAJPEBUNOC_GROUP_ITEM_PAIR@@K@Z
    virtual long DeleteNotifications(NOC_GROUP_ITEM_PAIR const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeprioritizeToast@MainDemuxerImpl@@UEAAJPEBG0@Z
    virtual long DeprioritizeToast(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsForAumid@MainDemuxerImpl@@UEAAJPEBGPEAPEAUIAumidNotificationSettings@@@Z
    virtual long GetSettingsForAumid(unsigned short const *, IAumidNotificationSettings * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InformUiInteractionOccurred@MainDemuxerImpl@@UEAAJPEBG0W4NocNotificationUiSurface@@W4NocNotificationUiInteraction@@@Z
    virtual long InformUiInteractionOccurred(unsigned short const *, unsigned short const *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNamedToastSinkEmpty@MainDemuxerImpl@@UEAAJPEBGPEAH@Z
    virtual long IsNamedToastSinkEmpty(unsigned short const *, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MainDemuxerImpl@@QEAA@XZ
    MainDemuxerImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBadgeSink@MainDemuxerImpl@@UEAAJPEAUINotificationControllerBadgeSink@@PEAKKW4__MIDL___MIDL_itf_notificationcontroller_0000_0003_0003@@@Z
    virtual long RegisterBadgeSink(INotificationControllerBadgeSink *, unsigned long *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterContextProvider@MainDemuxerImpl@@UEAAJPEAUINotificationContextSinkRegistrar@@@Z
    virtual long RegisterContextProvider(INotificationContextSinkRegistrar *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDataSink@MainDemuxerImpl@@UEAAJPEAUINotificationControllerDataSink@@PEAKW4__MIDL___MIDL_itf_notificationcontroller_0000_0003_0001@@@Z
    virtual long RegisterDataSink(INotificationControllerDataSink *, unsigned long *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterToastFilterSink@MainDemuxerImpl@@UEAAJPEAUINotificationControllerToastFilterSink@@PEAK@Z
    virtual long RegisterToastFilterSink(INotificationControllerToastFilterSink *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterToastSink@MainDemuxerImpl@@UEAAJPEAUINotificationControllerToastSink@@PEAKKPEBGW4__MIDL___MIDL_itf_notificationcontroller_0000_0003_0002@@@Z
    virtual long RegisterToastSink(INotificationControllerToastSink *, unsigned long *, unsigned long, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MainDemuxerImpl@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveNotificationDraft@MainDemuxerImpl@@UEAAJPEBG0PEBUNOC_ITEM_ACTIVATION_DATA@@@Z
    virtual long SaveNotificationDraft(unsigned short const *, unsigned short const *, NOC_ITEM_ACTIVATION_DATA const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentDisplaySettings@MainDemuxerImpl@@UEAAJPEBUNOC_VISUAL_PARAMS@@@Z
    virtual long SetCurrentDisplaySettings(NOC_VISUAL_PARAMS const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNocenterStatus@MainDemuxerImpl@@UEAAJW4__MIDL___MIDL_itf_notificationcontroller_0000_0004_0001@@@Z
    virtual long SetNocenterStatus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToastReportStatus@MainDemuxerImpl@@UEAAJPEBG0W4__MIDL___MIDL_itf_wpnplatform_0000_0007_0001@@@Z
    virtual long ToastReportStatus(unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterSink@MainDemuxerImpl@@UEAAJK@Z
    virtual long UnregisterSink(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MainDemuxerImpl@@UEAA@XZ
    virtual ~MainDemuxerImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnwrapUniquifiedId@MainDemuxerImpl@@AEAA?AUUnwrappedInfoAndController@1@PEBG@Z
    WindissectOpaque UnwrapUniquifiedId(unsigned short const *);
};
