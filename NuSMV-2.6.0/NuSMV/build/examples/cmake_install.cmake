# Install script for directory: /root/research/NuSMV-2.6.0/NuSMV/examples

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/nusmv/examples" TYPE DIRECTORY FILES
    "/root/research/NuSMV-2.6.0/NuSMV/examples/abp"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/example_irst"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/prod-cons"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/tcas"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/guidance"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/production-cell"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/brp"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/queue"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/deadlock"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/p-queue"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/reactor"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/example_cmu"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/pci"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/smv-dist"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/msi"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/bmc_tutorial"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/m4"
    "/root/research/NuSMV-2.6.0/NuSMV/examples/psl-samples"
    REGEX "/CVS$" EXCLUDE REGEX "/[^/]*\\~$" EXCLUDE REGEX "/\\.[^/]*$" EXCLUDE)
endif()

