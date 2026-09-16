#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 3 member(s).
class RefinedNotification {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyStruct@RefinedNotification@@SAXAEAVNotificationGroupInfoList@@AEAUNOC_REFINED_NOTIFICATION@@AEBU3@_N@Z
    static void CopyStruct(NotificationGroupInfoList &, NOC_REFINED_NOTIFICATION &, NOC_REFINED_NOTIFICATION const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeStruct@RefinedNotification@@SAXAEAUNOC_REFINED_NOTIFICATION@@@Z
    static void FreeStruct(NOC_REFINED_NOTIFICATION &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefinedNotification@@QEAA@XZ
    ~RefinedNotification();
};
