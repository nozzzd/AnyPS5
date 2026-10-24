# libSceJson technical debt

### Unknown function info

- [libSceJson pending exports](../../../core/libs/prx/libSceJson/PendingExports.cpp) - 25 named callable exports are listed in the [PS5 3.20 export table](https://github.com/DNNDHH/PS5-3.20_Libs/blob/b2a77c09cd71c01f34c790cfbe98c751a13262ad/libSceJson.c). Their signatures and behavior are unverified; the no-parameter declarations exist for import resolution and throw through `NotImplemented_nid_no_patch`.
