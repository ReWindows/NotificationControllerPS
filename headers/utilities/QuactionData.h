#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 24 member(s).
class QuactionData {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyQuactionBehavior@QuactionData@@SAJPEBUNOC_QUICK_BEHAVIOR@@PEAU2@@Z
    static long CopyQuactionBehavior(NOC_QUICK_BEHAVIOR const *, NOC_QUICK_BEHAVIOR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyQuactionData@QuactionData@@SAJPEBUNOC_QUICK_ACTIONS@@PEAU2@@Z
    static long CopyQuactionData(NOC_QUICK_ACTIONS const *, NOC_QUICK_ACTIONS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyQuactionRowVerb@QuactionData@@SAJPEBUNOC_QUICK_VERB@@PEAU2@@Z
    static long CopyQuactionRowVerb(NOC_QUICK_VERB const *, NOC_QUICK_VERB *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeQuactionBehavior@QuactionData@@SAXPEAUNOC_QUICK_BEHAVIOR@@@Z
    static void FreeQuactionBehavior(NOC_QUICK_BEHAVIOR *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeQuactionData@QuactionData@@SAXPEAUNOC_QUICK_ACTIONS@@@Z
    static void FreeQuactionData(NOC_QUICK_ACTIONS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeQuactionPropertyBag@QuactionData@@SAXPEAUNOC_RECURSIVE_BAG@@@Z
    static void FreeQuactionPropertyBag(NOC_RECURSIVE_BAG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeQuactionRowImageData@QuactionData@@SAXPEAUNOC_QUICK_ROW_IMAGE_DATA@@@Z
    static void FreeQuactionRowImageData(NOC_QUICK_ROW_IMAGE_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeQuactionRowVerb@QuactionData@@SAXPEAUNOC_QUICK_VERB@@@Z
    static void FreeQuactionRowVerb(NOC_QUICK_VERB *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyQuactionPropertyBag@QuactionData@@CAJPEBUNOC_RECURSIVE_BAG@@PEAPEAU2@@Z
    static long CopyQuactionPropertyBag(NOC_RECURSIVE_BAG const *, NOC_RECURSIVE_BAG * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyQuactionRowData@QuactionData@@CAJPEBUNOC_QUICK_ROW@@PEAU2@@Z
    static long CopyQuactionRowData(NOC_QUICK_ROW const *, NOC_QUICK_ROW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyQuactionRowEditData@QuactionData@@CAJPEBUNOC_QUICK_ROW_EDIT_DATA@@PEAU2@@Z
    static long CopyQuactionRowEditData(NOC_QUICK_ROW_EDIT_DATA const *, NOC_QUICK_ROW_EDIT_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyQuactionRowImageData@QuactionData@@CAJPEBUNOC_QUICK_ROW_IMAGE_DATA@@PEAU2@@Z
    static long CopyQuactionRowImageData(NOC_QUICK_ROW_IMAGE_DATA const *, NOC_QUICK_ROW_IMAGE_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyQuactionRowPickerData@QuactionData@@CAJPEBUNOC_QUICK_ROW_PICKER_DATA@@PEAU2@@Z
    static long CopyQuactionRowPickerData(NOC_QUICK_ROW_PICKER_DATA const *, NOC_QUICK_ROW_PICKER_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyQuactionRowProgressData@QuactionData@@CAJPEBUNOC_QUICK_ROW_PROGRESS_DATA@@PEAU2@@Z
    static long CopyQuactionRowProgressData(NOC_QUICK_ROW_PROGRESS_DATA const *, NOC_QUICK_ROW_PROGRESS_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyQuactionRowTreeData@QuactionData@@CAJPEBUNOC_QUICK_ROW_TREE_DATA@@PEAU2@@Z
    static long CopyQuactionRowTreeData(NOC_QUICK_ROW_TREE_DATA const *, NOC_QUICK_ROW_TREE_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyQuactionRowVerbData@QuactionData@@CAJPEBUNOC_QUICK_ROW_VERB_DATA@@PEAU2@@Z
    static long CopyQuactionRowVerbData(NOC_QUICK_ROW_VERB_DATA const *, NOC_QUICK_ROW_VERB_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeQuactionRowAdaptiveCardData@QuactionData@@CAXPEAUNOC_QUICK_ROW_CARD_DATA@@@Z
    static void FreeQuactionRowAdaptiveCardData(NOC_QUICK_ROW_CARD_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeQuactionRowData@QuactionData@@CAXPEAUNOC_QUICK_ROW@@@Z
    static void FreeQuactionRowData(NOC_QUICK_ROW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeQuactionRowEditData@QuactionData@@CAXPEAUNOC_QUICK_ROW_EDIT_DATA@@@Z
    static void FreeQuactionRowEditData(NOC_QUICK_ROW_EDIT_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeQuactionRowPickerData@QuactionData@@CAXPEAUNOC_QUICK_ROW_PICKER_DATA@@@Z
    static void FreeQuactionRowPickerData(NOC_QUICK_ROW_PICKER_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeQuactionRowPickerItem@QuactionData@@CAXPEAUNOC_QUICK_ROW_PICKER_ITEM_DATA@@@Z
    static void FreeQuactionRowPickerItem(NOC_QUICK_ROW_PICKER_ITEM_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeQuactionRowProgressData@QuactionData@@CAXPEAUNOC_QUICK_ROW_PROGRESS_DATA@@@Z
    static void FreeQuactionRowProgressData(NOC_QUICK_ROW_PROGRESS_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeQuactionRowTreeData@QuactionData@@CAXPEAUNOC_QUICK_ROW_TREE_DATA@@@Z
    static void FreeQuactionRowTreeData(NOC_QUICK_ROW_TREE_DATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeQuactionRowVerbData@QuactionData@@CAXPEAUNOC_QUICK_ROW_VERB_DATA@@@Z
    static void FreeQuactionRowVerbData(NOC_QUICK_ROW_VERB_DATA *);
};
