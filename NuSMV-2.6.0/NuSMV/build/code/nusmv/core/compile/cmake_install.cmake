# Install script for directory: /root/research/NuSMV-2.6.0/NuSMV/code/nusmv/core/compile

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

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/compile" TYPE FILE FILES "/root/research/NuSMV-2.6.0/NuSMV/code/nusmv/core/compile/compile.h")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/compile" TYPE FILE FILES "/root/research/NuSMV-2.6.0/NuSMV/code/nusmv/core/compile/FlatHierarchy.h")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/compile" TYPE FILE FILES "/root/research/NuSMV-2.6.0/NuSMV/code/nusmv/core/compile/PredicateExtractor.h")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/compile" TYPE FILE FILES "/root/research/NuSMV-2.6.0/NuSMV/code/nusmv/core/compile/PredicateNormaliser.h")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/code/nusmv/core/compile" TYPE FILE FILES "/root/research/NuSMV-2.6.0/NuSMV/code/nusmv/core/compile/compileUtil.h")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/compile/dependency/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/compile/flattening/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/compile/symb_table/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/compile/type_checking/cmake_install.cmake")

endif()

