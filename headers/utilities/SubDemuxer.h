#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 8 member(s).
class SubDemuxer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SubDemuxer@@QEAA@XZ
    SubDemuxer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SubDemuxer@@QEAA@XZ
    ~SubDemuxer();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContextByIncomingSession@SubDemuxer@@IEBA?AVDemuxerContextWrapper@@K@Z
    DemuxerContextWrapper GetContextByIncomingSession(unsigned long) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterContext@SubDemuxer@@IEAAXAEBUDemuxerContextData@@@Z
    void RegisterContext(DemuxerContextData const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterContextProviderWithSession@SubDemuxer@@IEAAXPEAUINotificationContextSinkRegistrar@@K@Z
    void RegisterContextProviderWithSession(INotificationContextSinkRegistrar *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterContextWithIncomingSession@SubDemuxer@@IEAAXVDemuxerContextWrapper@@K@Z
    void RegisterContextWithIncomingSession(DemuxerContextWrapper, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterContext@SubDemuxer@@IEAAXVDemuxerContextWrapper@@@Z
    void UnregisterContext(DemuxerContextWrapper);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterSubDemuxerAll@SubDemuxer@@IEAAXXZ
    void UnregisterSubDemuxerAll();
};
