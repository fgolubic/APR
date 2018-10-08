/*
 * Matrix.h
 *
 *  Created on: Oct 2, 2018
 *      Author: fgolubic
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include<vector>
#include<string>
#include<fstream>
#include<sstream>
#include<iostream>

class Matrix {
private:
	int noOfRows;
	int noOfColumns;
	std::vector<std::vector<double>> matrix;
public:
	Matrix();
	Matrix(std::string filePath);
	virtual ~Matrix();
	int getNoOfRows();
	int getNoOfColumns();
	void setNoOfRows(int noOfRows);
	void setNoOfColumns(int noOfColumns);
	std::vector<std::vector<double>> getMatrix();
};

#endif /* MATRIX_H_ */
