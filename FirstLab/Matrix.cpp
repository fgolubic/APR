/*
 * Matrix.cpp
 *
 *  Created on: Oct 2, 2018
 *      Author: fgolubic
 */

#include "Matrix.h"

Matrix::Matrix() {

	noOfRows = 0;
	noOfColumns = 0;

}

Matrix::Matrix(int noOfRows, int noOfColumns, std::vector<std::vector<double>> matrix)
{
	this->noOfRows = noOfRows;
	this->noOfColumns = noOfColumns;

	for(int i = 0; i < this->noOfColumns; i++){

		for(int j = 0; j < this->noOfRows; j++){

			this->matrix[i][j] = matrix[i][j];
		}
	}
}

Matrix::~Matrix() {
	// TODO Auto-generated destructor stub
}

