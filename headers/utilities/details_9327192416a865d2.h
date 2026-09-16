#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationControllerPS.dll by Windissect. 4 member(s).
namespace tip2 {
class details {
public:
    class test_data_interface;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z
    bool evaluate_flags(::tip2::test_state const &, ::tip2::test_requirement const *, ::tip2::test_requirement const *, ::tip2::test_requirement const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?find_flags_match@details@tip2@@YAPEBUtest_requirement@2@AEBVtest_state@2@PEBU32@_N@Z
    ::tip2::test_requirement const * find_flags_match(::tip2::test_state const &, ::tip2::test_requirement const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?reason_string@details@tip2@@YAPEBDPEBD@Z
    char const * reason_string(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?test_interface_with_exception_guard@details@tip2@@YA_NAEAUtest_data_interface@12@PEAVoutput_archive@tson@@W4serialize_options@12@PEAVinput_archive@5@PEBUTipReportingInfo@@@Z
    bool test_interface_with_exception_guard(WindissectOpaque &, WindissectOpaque *, int, WindissectOpaque *, TipReportingInfo const *);
};
} // namespace tip2
