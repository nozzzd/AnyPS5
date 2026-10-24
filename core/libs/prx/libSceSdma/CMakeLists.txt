add_library(libSceSdma SHARED EXCLUDE_FROM_ALL Export.cpp PendingExports.cpp)
target_include_directories(libSceSdma PRIVATE ${LIBS_INCLUDE_DIR})
configure_windows_unwind(libSceSdma)
