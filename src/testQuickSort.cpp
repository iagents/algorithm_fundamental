#include <iostream>
#include <vector>

#include "sort.h"

int main()
{
	int arr[] = { 1, 12, 5, 25, 7, 14, 3, 7, 2 };
	int n = sizeof(arr)/sizeof(arr[0]);
	//std::vector<int> vec(n, 0);
	//copy(arr, arr+n, vec.begin());

	algorithm_fundamental::quick_sort(arr, 0, n);

	for (int i=0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	return 0;
}