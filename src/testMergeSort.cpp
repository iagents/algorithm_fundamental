#include <iostream>
#include <vector>

#include "sorting_algorithms.h"

void print_element(int n) { std::cout << n << " "; }

int main()
{
	int arr[] = { 12, 11, 13, 5, 7, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	std::vector<int>v(n, 0);
	copy( arr, arr+n, v.begin());
	std::cout << "[info] Input array: " << std::endl;
	for_each( v.begin(), v.end(), print_element );
	std::cout << std::endl;

	algorithm_fundamental::sorting_algorithms::merge_sort(arr, 0, n-1);

	std::vector<int> v1(n, 0);
	v.clear();
	v.resize(n);
	copy( arr, arr+n, v.begin());
	std::cout << "[info] Output array: " << std::endl;
	for_each( v.begin(), v.end(), print_element );
	std::cout << std::endl;	

	return 0;		
}