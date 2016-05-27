# An implementation of fundamental algorithms
CMAKE_MINIMUM_REQUIRED(VERSION 2.7)

PROJECT(FA)

enable_testing()

INCLUDE_DIRECTORIES(BEFORE ${PROJECT_SOURCE_DIR}/include)
#INCLUDE_DIRECTORIES(BEFORE ${PROJECT_SOURCE_DIR}/src)

add_subdirectory(test)

#ADD_EXECUTABLE(fa_demo src/main.cpp src/search.cpp)
#ADD_EXECUTABLE(find_min_diff src/findMinDifference.cpp src/fundamental_algorithms.cpp)
#ADD_EXECUTABLE(rearrange_array_max_min src/rearrangeArrayMaxMin.cpp src/fundamental_algorithms.cpp)
#ADD_EXECUTABLE(find_increasing_subarrays src/findIncreasingSubarray.cpp src/fundamental_algorithms.cpp)
#ADD_EXECUTABLE(merge_two_subarrays src/mergeTwoArrays.cpp src/fundamental_algorithms.cpp)
#ADD_EXECUTABLE(print_combination src/printCombination.cpp src/fundamental_algorithms.cpp)
#ADD_EXECUTABLE(test_bitwise_operators src/testBitwiseOperators.cpp src/bitwise_operators.cpp)
#ADD_EXECUTABLE(test_find_min_sum_subarray src/findMinSumSubarray.cpp src/fundamental_algorithms.cpp)
#ADD_EXECUTABLE(test_anagram_generate src/testGenerateAnagram.cpp src/fundamental_algorithms.cpp)
#ADD_EXECUTABLE(test_find_biggest_number src/testFindBiggestNumber.cpp src/fundamental_algorithms.cpp)
#ADD_EXECUTABLE(test_find_min_hopping src/testFindMinHopping.cpp src/fundamental_algorithms.cpp)
#ADD_EXECUTABLE(test_bucket_sort src/testBucketSort.cpp src/sort.cpp)
ADD_EXECUTABLE(test_ccg src/testCCG.cpp src/geometric_algorithms.cpp)
#ADD_EXECUTABLE(test_quick_sort src/testQuickSort.cpp src/sort.cpp)
#ADD_EXECUTABLE(test_linear_least_square_fit src/testLinearLeastSquareFit.cpp src/numerical_algorithms.cpp)
#ADD_EXECUTABLE(test_linear_least_square_fit src/testLinearLeastSquareFit.cpp src/numerical_algorithms.cpp)
#ADD_EXECUTABLE(test_string_manipulator src/testStringManipulation.cpp src/string_manipulation_algorithms.cpp)

#add_test(findBiggestNumber find_biggest_number_test) 