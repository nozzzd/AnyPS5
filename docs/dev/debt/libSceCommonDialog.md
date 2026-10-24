# libSceCommonDialog technical debt

### Silent stubs

- [libSceCommonDialog](../../../core/libs/prx/libSceCommonDialog/Export.cpp)

### Unknown function info

- [libSceCommonDialog pending exports](../../../core/libs/prx/libSceCommonDialog/PendingExports.cpp) - 14 named callable exports are listed in the [PS5 3.20 export table](https://github.com/DNNDHH/PS5-3.20_Libs/blob/b2a77c09cd71c01f34c790cfbe98c751a13262ad/libSceCommonDialog.c). Their signatures and behavior are unverified; the no-parameter declarations exist for import resolution and throw through `NotImplemented_nid_no_patch`.

### Functional

- [sceCommonDialogInitialize](../../../core/libs/prx/libSceCommonDialog/Export.cpp) (libSceCommonDialog) - returning `ALREADY_SYSTEM_INITIALIZED` (`0x80B80002`) from a repeated call is not measured on a console by the project. A third-party PS5 log ([obSCEne](https://github.com/project-oops/obSCEne/blob/67b4c529eb3c271184117e26bb54330531ef2cf6/reports/hardware/report-20261014-004800.log#L260-L261), firmware 12.40) records two calls, `0x0` and then `0x80b80002`; a third call is not covered. The SDK error names, shadPS4 (a PS4 emulator) and SharpProspero give the same value; PPSA09695 compares the result with `0x80b80002` (call site 0x5F7BD0) and PPSA06327 stops on `0x80b80004`. Closes when: measured on a PS5, including a third call.
