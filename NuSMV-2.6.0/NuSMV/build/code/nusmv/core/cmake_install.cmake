# Install script for directory: /root/research/NuSMV-2.6.0/NuSMV/code/nusmv/core

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/parser/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/be/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/dag/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/enc/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/ltl/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/mc/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/opt/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/prop/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/sat/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/set/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/simulate/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/trans/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/trace/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/bmc/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/compile/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/dd/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/fsm/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/node/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/rbc/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/cinit/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/utils/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/sexp/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/hrc/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/wff/cmake_install.cmake")

endif()

