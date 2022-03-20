# CMake generated Testfile for 
# Source directory: /root/research/NuSMV-2.6.0/NuSMV
# Build directory: /root/research/NuSMV-2.6.0/NuSMV/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(short "/root/research/NuSMV-2.6.0/NuSMV/build/bin/NuSMV" "/root/research/NuSMV-2.6.0/NuSMV/examples/smv-dist/short.smv")
add_test(bmc "/root/research/NuSMV-2.6.0/NuSMV/build/bin/NuSMV" "-bmc" "/root/research/NuSMV-2.6.0/NuSMV/examples/bmc/barrel5.smv")
subdirs("build-cudd")
subdirs("build-MiniSat")
subdirs("code/nusmv/core")
subdirs("code/nusmv/addons_core")
subdirs("code/nusmv/shell")
subdirs("doc")
subdirs("contrib")
subdirs("examples")
