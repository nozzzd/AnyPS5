add_library(libSceJson SHARED EXCLUDE_FROM_ALL Export.cpp PendingExports.cpp)
target_include_directories(libSceJson PRIVATE ${LIBS_INCLUDE_DIR})
configure_windows_unwind(libSceJson)
