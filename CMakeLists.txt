cmake_minimum_required(VERSION 3.10)
project(PKG C)

set(CMAKE_C_STANDARD 99)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GLIB2 REQUIRED glib-2.0)

file(GLOB SRC "*.c")
add_executable(PKG ${SRC})
target_include_directories(PKG PUBLIC ${GLIB2_INCLUDE_DIRS})
target_link_libraries(PKG ${GLIB2_LIBRARIES})
target_compile_options(PKG PUBLIC ${GLIB2_CFLAGS_OTHER})

pkg_check_modules (FOO1 glib-2.0>=2.10)
pkg_check_modules (FOO glib-2.0>=2.10 gtk+-2.0)
message(${FOO_glib-2.0_VERSION})