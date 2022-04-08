# Install script for directory: /root/research/NuSMV-2.6.0/NuSMV/contrib

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nusmv/contrib" TYPE FILE FILES
    "/root/research/NuSMV-2.6.0/NuSMV/contrib/README"
    "/root/research/NuSMV-2.6.0/NuSMV/contrib/iscas89-2smv"
    "/root/research/NuSMV-2.6.0/NuSMV/contrib/kiss2-2smv"
    "/root/research/NuSMV-2.6.0/NuSMV/contrib/smv2table.awk"
    "/root/research/NuSMV-2.6.0/NuSMV/contrib/smv-mode.el"
    "/root/research/NuSMV-2.6.0/NuSMV/contrib/order_bits.pl"
    "/root/research/NuSMV-2.6.0/NuSMV/contrib/nusmv-mode.el"
    "/root/research/NuSMV-2.6.0/NuSMV/contrib/NuSMV.m4"
    "/root/research/NuSMV-2.6.0/NuSMV/contrib/emacs-gdb-macros.el"
    "/root/research/NuSMV-2.6.0/NuSMV/contrib/remove_string.pl"
    )
endif()
