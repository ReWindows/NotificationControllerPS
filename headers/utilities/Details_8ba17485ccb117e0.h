#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 18 member(s).
namespace Microsoft::WRL {
class Details {
public:
    class ModuleBase;
    class WeakReferenceImpl;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z
    WindissectOpaque * CreateWeakReference(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z
    unsigned long SafeUnknownDecrementReference(long volatile &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z
    unsigned long SafeUnknownIncrementReference(long volatile &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z
    bool TerminateMap(WindissectOpaque *, unsigned short const *, bool);
};
} // namespace Microsoft::WRL
