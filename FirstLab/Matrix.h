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
	unsigned int noOfRows;
	unsigned int noOfColumns;
	std::vector<std::vector<double>>* matrix;
public:
	Matrix();
	Matrix(std::string filePath);
	virtual ~Matrix();
	unsigned int getNoOfRows();
	unsigned int getNoOfColumns();
	void setNoOfRows(unsigned int noOfRows);
	void setNoOfColumns(unsigned int noOfColumns);
	std::vector<std::vector<double>>* getMatrix();
	Matrix operator=(const Matrix& secondMatrix);
	std::vector<double> operator[](int index) const;
	std::vector<double>& operator[](int index);
	Matrix operator+(const Matrix& secondMatrix);
	Matrix operator-(const Matrix& secondMatrix);
	Matrix operator+=(const Matrix& secondMatrix);
	Matrix operator-=(const Matrix& secondMatrix);
	Matrix operator*(const Matrix& secondMatrix);
	Matrix operator*(double factor) const;
};

#endif /* MATRIX_H_ */
