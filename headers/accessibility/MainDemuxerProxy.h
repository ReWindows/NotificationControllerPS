#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 25 member(s).
class MainDemuxerProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateNotification@MainDemuxerProxy@@UEAAJPEBG0PEBUNOC_ITEM_ACTIVATION_DATA@@@Z
    virtual long ActivateNotification(unsigned short const *, unsigned short const *, NOC_ITEM_ACTIVATION_DATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateNotificationGroup@MainDemuxerProxy@@UEAAJPEBG@Z
    virtual long ActivateNotificationGroup(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextsAdded@MainDemuxerProxy@@UEAAJKPEBUDemuxerContextData@@K@Z
    virtual long ContextsAdded(unsigned long, DemuxerContextData const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextsDeleted@MainDemuxerProxy@@UEAAJKPEBUDemuxerContext@@K@Z
    virtual long ContextsDeleted(unsigned long, DemuxerContext const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteNotifications@MainDemuxerProxy@@UEAAJPEBUNOC_GROUP_ITEM_PAIR@@K@Z
    virtual long DeleteNotifications(NOC_GROUP_ITEM_PAIR const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeprioritizeToast@MainDemuxerProxy@@UEAAJPEBG0@Z
    virtual long DeprioritizeToast(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsForAumid@MainDemuxerProxy@@UEAAJPEBGPEAPEAUIAumidNotificationSettings@@@Z
    virtual long GetSettingsForAumid(unsigned short const *, IAumidNotificationSettings * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InformUiInteractionOccurred@MainDemuxerProxy@@UEAAJPEBG0W4NocNotificationUiSurface@@W4NocNotificationUiInteraction@@@Z
    virtual long InformUiInteractionOccurred(unsigned short const *, unsigned short const *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNamedToastSinkEmpty@MainDemuxerProxy@@UEAAJPEBGPEAH@Z
    virtual long IsNamedToastSinkEmpty(unsigned short const *, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MainDemuxerProxy@@QEAA@XZ
    MainDemuxerProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBadgeSink@MainDemuxerProxy@@UEAAJPEAUINotificationControllerBadgeSink@@PEAKKW4__MIDL___MIDL_itf_notificationcontroller_0000_0003_0003@@@Z
    virtual long RegisterBadgeSink(INotificationControllerBadgeSink *, unsigned long *, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterContextProvider@MainDemuxerProxy@@UEAAJPEAUINotificationContextSinkRegistrar@@@Z
    virtual long RegisterContextProvider(INotificationContextSinkRegistrar *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDataSink@MainDemuxerProxy@@UEAAJPEAUINotificationControllerDataSink@@PEAKW4__MIDL___MIDL_itf_notificationcontroller_0000_0003_0001@@@Z
    virtual long RegisterDataSink(INotificationControllerDataSink *, unsigned long *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterToastFilterSink@MainDemuxerProxy@@UEAAJPEAUINotificationControllerToastFilterSink@@PEAK@Z
    virtual long RegisterToastFilterSink(INotificationControllerToastFilterSink *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterToastSink@MainDemuxerProxy@@UEAAJPEAUINotificationControllerToastSink@@PEAKKPEBGW4__MIDL___MIDL_itf_notificationcontroller_0000_0003_0002@@@Z
    virtual long RegisterToastSink(INotificationControllerToastSink *, unsigned long *, unsigned long, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MainDemuxerProxy@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveNotificationDraft@MainDemuxerProxy@@UEAAJPEBG0PEBUNOC_ITEM_ACTIVATION_DATA@@@Z
    virtual long SaveNotificationDraft(unsigned short const *, unsigned short const *, NOC_ITEM_ACTIVATION_DATA const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentDisplaySettings@MainDemuxerProxy@@UEAAJPEBUNOC_VISUAL_PARAMS@@@Z
    virtual long SetCurrentDisplaySettings(NOC_VISUAL_PARAMS const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNocenterStatus@MainDemuxerProxy@@UEAAJW4__MIDL___MIDL_itf_notificationcontroller_0000_0004_0001@@@Z
    virtual long SetNocenterStatus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToastReportStatus@MainDemuxerProxy@@UEAAJPEBG0W4__MIDL___MIDL_itf_wpnplatform_0000_0007_0001@@@Z
    virtual long ToastReportStatus(unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterSink@MainDemuxerProxy@@UEAAJK@Z
    virtual long UnregisterSink(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MainDemuxerProxy@@UEAA@XZ
    virtual ~MainDemuxerProxy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMainDemuxerIfNeeded@MainDemuxerProxy@@AEAA?AV?$ComPtr@UINotificationController@@@WRL@Microsoft@@XZ
    WindissectOpaque CreateMainDemuxerIfNeeded();
};
