# Install script for directory: /root/research/NuSMV-2.6.0/cudd-2.4.1.1

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cudd" TYPE FILE FILES "/root/research/NuSMV-2.6.0/cudd-2.4.1.1/st/st.h")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cudd" TYPE FILE FILES "/root/research/NuSMV-2.6.0/cudd-2.4.1.1/cudd/cudd.h")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cudd" TYPE FILE FILES "/root/research/NuSMV-2.6.0/cudd-2.4.1.1/cudd/cuddInt.h")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cudd" TYPE FILE FILES "/root/research/NuSMV-2.6.0/cudd-2.4.1.1/epd/epd.h")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cudd" TYPE FILE FILES "/root/research/NuSMV-2.6.0/cudd-2.4.1.1/mtr/mtr.h")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cudd" TYPE FILE FILES "/root/research/NuSMV-2.6.0/cudd-2.4.1.1/util/util.h")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/root/research/NuSMV-2.6.0/NuSMV/build/build-cudd/st/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/build-cudd/cudd/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/build-cudd/epd/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/build-cudd/mtr/cmake_install.cmake")
  include("/root/research/NuSMV-2.6.0/NuSMV/build/build-cudd/util/cmake_install.cmake")

endif()

