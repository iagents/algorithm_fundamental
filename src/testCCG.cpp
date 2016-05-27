#include "geometric_algorithms.h"

// Define a map of obstacles and free space
/*
int data[5][5] = {
	{ 1, 0, 0, 0, 1 },
	{ 1, 1, 0, 1, 1 },
	{ 0, 1, 0, 0, 1 },
	{ 1, 1, 1, 1, 0 },
	{ 0, 0, 0, 1, 0 }	
};

int label[5][5] = {
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 }	
};
*/
int main()
{
	int num_cells = 5;
	int **data;
	data = new int *[num_cells];
	int **label;
	label = new int *[num_cells];

	for (int i=0; i < num_cells; i++) 
	{
		data[i] = new int[num_cells];
		label[i] = new int[num_cells];
	}

	data[0][0] = 1;
	data[0][4] = 1;
	data[1][0] = 1;
	data[1][1] = 1;
	data[1][3] = 1;
	data[1][4] = 1;
	data[2][1] = 1;
	data[2][4] = 1;
	data[3][0] = 1;
	data[3][1] = 1;
	data[3][2] = 1;
	data[3][3] = 1;
	data[4][3] = 1;

	for (int i=0; i < num_cells; i++)
	{
		for (int j=0; j < num_cells; j++)
		{
			label[i][j] = 0;
		}
	}

	algorithm_fundamental::geometric_algorithms::connected_component_analysis(data, label, 5, 5);
}