#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 3 member(s).
class Uniquifier {
public:
    class UnwrappedInfo;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UniquifyNotification@Uniquifier@@YAXAEAVRefinedNotification@@AEBVDemuxerContextWrapper@@@Z
    void UniquifyNotification(RefinedNotification &, DemuxerContextWrapper const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UniquifyNotification@Uniquifier@@YAXAEAVUpdatedNotification@@AEBVDemuxerContextWrapper@@@Z
    void UniquifyNotification(UpdatedNotification &, DemuxerContextWrapper const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnwrapUniquifiedId@Uniquifier@@YA?AUUnwrappedInfo@1@PEBG@Z
    WindissectOpaque UnwrapUniquifiedId(unsigned short const *);
};
