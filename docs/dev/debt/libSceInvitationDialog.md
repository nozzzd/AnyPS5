# libSceInvitationDialog technical debt

### Unknown function info

- [libSceInvitationDialog pending exports](../../../core/libs/prx/libSceInvitationDialog/PendingExports.cpp) - 3 named callable exports are listed in the [PS5 3.20 export table](https://github.com/DNNDHH/PS5-3.20_Libs/blob/b2a77c09cd71c01f34c790cfbe98c751a13262ad/libSceInvitationDialog.c). Their signatures and behavior are unverified; the no-parameter declarations exist for import resolution and throw through `NotImplemented_nid_no_patch`.

- [sceInvitationDialogClose](../../../core/libs/prx/libSceInvitationDialog/Export.cpp) (libSceInvitationDialog) - imported by PS4 titles, which do not load without it, and added without an implementation: declared without parameters, every call throws
