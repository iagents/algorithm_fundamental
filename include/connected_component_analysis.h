#ifndef _CONNECTED_COMPONENT_ANALYSIS_H__
#define _CONNECTED_COMPONENT_ANALYSIS_H__

#include <iostream>

namespace algorithm_fundamental
{
	/// \brief Define the connectivity of neighboring cells
	enum Connectivity { FIRST_ORDER=4, SECOND_ORDER=8 };

	/// \todo{Need to generalize this}
	const int dx[] = { 1, 0, -1, 0 };
	const int dy[] = { 0, 1, 0, -1 };

	/// \brief An implementation of the connected component analysis (or grouping) based on depth-
	/// \first search.
	/// \param[in] data Pointer to the input 2-d data matrix. The data matrix is a binary matrix.
	/// \param[in] label Pointer to the input 2-d label matrix. The label matrix is zeros(rows, cols)
	/// \param[in] rows Number of rows
	/// \param[in] cols Number of columns
	void connected_component_analysis(int **data, int **label, int rows, int cols);

	/// \brief A recursive version of connected component grouping.
	void ccg(int **data, int **label_matrix, int r, int rn, int c, int cn, int label);

	/// \brief Check whether an index, k, is out of bound given its maximum value, kn
	bool is_out_of_bound(int k, int kn);

	/// \brief Show the elements of a 2-D matrix.
	void show_matrix(int **matrix, int rows, int cols);
} // algorithm_fundamental

#endif // _CONNECTED_COMPONENT_ANALYSIS_H__