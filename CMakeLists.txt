# An implementation of fundamental algorithms
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(FA)

INCLUDE_DIRECTORIES(BEFORE ${PROJECT_SOURCE_DIR}/include)

#ADD_EXECUTABLE(fa_demo src/main.cpp src/search.cpp)
#ADD_EXECUTABLE(find_min_diff src/findMinDifference.cpp src/fundamental_algorithms.cpp)
#ADD_EXECUTABLE(rearrange_array_max_min src/rearrangeArrayMaxMin.cpp src/fundamental_algorithms.cpp)
#ADD_EXECUTABLE(find_increasing_subarrays src/findIncreasingSubarray.cpp src/fundamental_algorithms.cpp)
ADD_EXECUTABLE(merge_two_subarrays src/mergeTwoArrays.cpp src/fundamental_algorithms.cpp)