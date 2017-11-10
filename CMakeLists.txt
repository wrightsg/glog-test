project(glog-test)
cmake_minimum_required(VERSION 3.6.2)

add_subdirectory(lib)

foreach(exe
	hello_world
	use_gflags
)

add_executable(${exe} ${exe}.cpp)

target_link_libraries(${exe} glog)

# glog seems to require imagehlp library when compiling with GCC under Windows (MinGW)
if(WIN32)
	if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
		target_link_libraries(${exe} imagehlp)
	endif()
endif()

endforeach()