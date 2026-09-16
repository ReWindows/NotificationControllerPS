#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 8 member(s).
class NotificationIdentifier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Matches@NotificationIdentifier@@QEBA_NPEBG0@Z
    bool Matches(unsigned short const *, unsigned short const *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NotificationIdentifier@@QEAA@$$QEAV0@@Z
    NotificationIdentifier(NotificationIdentifier &&);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NotificationIdentifier@@QEAA@AEBUNOC_REFINED_NOTIFICATION@@@Z
    NotificationIdentifier(NOC_REFINED_NOTIFICATION const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NotificationIdentifier@@QEAA@AEBV0@@Z
    NotificationIdentifier(NotificationIdentifier const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotificationIdentifier@@QEAA@XZ
    ~NotificationIdentifier();
};
