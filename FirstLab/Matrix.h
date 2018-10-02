/*
 * Matrix.h
 *
 *  Created on: Oct 2, 2018
 *      Author: fgolubic
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include<vector>

class Matrix {
public:
	int noOfRows;
	int noOfColumns;
	std::vector<std::vector<double>> matrix;
	Matrix();
	Matrix(int noOfRows, int noOfColumns, std::vector<std::vector<double>> matrix);
	virtual ~Matrix();
};

#endif /* MATRIX_H_ */
