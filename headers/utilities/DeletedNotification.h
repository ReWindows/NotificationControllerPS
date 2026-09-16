#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 3 member(s).
class DeletedNotification {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyStruct@DeletedNotification@@SAXAEAUNOC_DELETED_NOTIFICATION@@AEBU2@@Z
    static void CopyStruct(NOC_DELETED_NOTIFICATION &, NOC_DELETED_NOTIFICATION const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeStruct@DeletedNotification@@SAXAEAUNOC_DELETED_NOTIFICATION@@@Z
    static void FreeStruct(NOC_DELETED_NOTIFICATION &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetId@DeletedNotification@@QEAAXPEBG@Z
    void SetId(unsigned short const *);
};
