#include <cstddef>
#include <cstdint>
#include "SceTypes.hpp"
#include "prx/libc/include/General.hpp"

extern "C" {

int APS5_VABI EVP_ecdsa(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}
int APS5_VABI SSL_SESSION_get_master_key(void) {
    NotImplemented_nid_no_patch(__func__);
    return 0;
}

}
