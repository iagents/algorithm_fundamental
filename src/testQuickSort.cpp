#include <iostream>
#include <vector>

#include "sorting_algorithms.h"

void print_element(int element) { std::cout << element << " "; }

int main()
{
	int arr[] = { 1, 12, 5, 25, 7, 14, 3, 7, 2 };
	int n = sizeof(arr)/sizeof(arr[0]);
	std::vector<int> vec(n, 0);
	copy(arr, arr+n, vec.begin());

	std::cout << "[info] Input array: " << std::endl;
	for_each( vec.begin(), vec.end(), print_element );
	std::cout << std::endl;
	
	algorithm_fundamental::sorting_algorithms::quick_sort(arr, 0, n);

	std::cout << "[info] Output array: " << std::endl;
	for (int i=0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	return 0;
}