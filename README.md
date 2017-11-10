# glog-test

Google logging library (glog) testing ground.

## gflags

To use glog with gflags, the gflags libary must be installed separately.

It does not seem possible to add gflags as submodule and then use add_subdirectory() because glog uses find_package() to find gflags.

### Windows with MSYS2

See `pacman -Ss gflags` for the available gflags libraries.