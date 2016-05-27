#include "connected_component_analysis.h"

namespace algorithm_fundamental
{
	void connected_component_analysis(int **data, int **label, int rows, int cols)
	{
		int component=0;

		for (int i=0; i < rows; i++)
		{
			for (int j=0; j < cols; j++)
			{
				if (label[i][j] == 0 && data[i][j] == 1)
				{
					ccg(data, label, i, rows, j, cols, ++component);
				}
			}
		}

		std::cout << "number of labels=" << component << std::endl;
		std::cout << "input data matrix: " << std::endl;
		show_matrix(data, rows, cols);

		std::cout << "output label matrix: " << std::endl;
		show_matrix(label, rows, cols);
	}

	void ccg(int **data, int **label, int r, int rn, int c, int cn, int current_label)
	{
		// Return if one of the following conditions is true:
		// 1) Either row or column index is out of bound,
		// 2) There is alreay a label assigned  to the coordinate, (r,c) of interest, or data matrix is empty 
		if (is_out_of_bound(r, rn)) return;
		if (is_out_of_bound(c, cn)) return;
		if ( label[r][c] || !data[r][c] ) return;

		label[r][c] = current_label;
		int num_neighbors = 4;

		for ( int neighbor=0; neighbor < num_neighbors; neighbor++ )
		{
			ccg(data, label, r+dx[neighbor], rn, c+dy[neighbor], cn, current_label);
		}
	}

	bool is_out_of_bound(int k, int kn)
	{
		if ( k < 0 || k == kn)
		{
			return true;
		} else
		{
			return false;
		}
	}

	void show_matrix(int **matrix, int rows, int cols)
	{
		for (int i=0; i < rows; i++)
		{
			for (int j=0; j < cols; j++)
			{
				std::cout << matrix[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}


}