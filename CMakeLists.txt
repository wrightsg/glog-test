project(glog-test)
cmake_minimum_required(VERSION 3.6.2)

add_subdirectory(lib)

add_executable(hello_world hello_world.cpp)

target_link_libraries(hello_world glog)

# glog seems to require imagehlp library when compiling with GCC under Windows (MinGW)
if(WIN32)
	if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
		target_link_libraries(hello_world imagehlp)
	endif()
endif()