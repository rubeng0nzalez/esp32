# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/kalkini/esp/esp-idf/components/bootloader/subproject"
  "/home/kalkini/workspace/esp32/hello_world/build/bootloader"
  "/home/kalkini/workspace/esp32/hello_world/build/bootloader-prefix"
  "/home/kalkini/workspace/esp32/hello_world/build/bootloader-prefix/tmp"
  "/home/kalkini/workspace/esp32/hello_world/build/bootloader-prefix/src/bootloader-stamp"
  "/home/kalkini/workspace/esp32/hello_world/build/bootloader-prefix/src"
  "/home/kalkini/workspace/esp32/hello_world/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/kalkini/workspace/esp32/hello_world/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
