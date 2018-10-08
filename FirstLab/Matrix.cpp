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

Matrix::Matrix(std::string filePath)
{
	std::ifstream file(filePath);

	if(!file.is_open())
	{
		std::cerr << "Error opening file" << std::endl;
		return;
	}

	std::cout<<"Reading matrix from a file " << filePath << "." << std::endl;

	std::string line;

	noOfRows = 0;
	noOfColumns = 0;
	matrix = new std::vector<std::vector<double>>();

	int rowCounter = 0;

	while(std::getline(file, line)){

		std::cout<<"Reading row " << ( rowCounter + 1 ) << "." <<std::endl;

		std::istringstream lineStream(line);
		std::string token;
		std::vector<double> row = std::vector<double>();


		while( lineStream >> token ){

			std::cout<<"Splitting elements from row "<< ( rowCounter + 1 ) << "." << std::endl;

			double element = std::stod(token);

			row.push_back(element);

		}

		if(noOfColumns == 0){

			noOfColumns = row.size();

			std::cout<<"No. of columns set to " << noOfColumns << "." << std::endl;

		}

		else if( noOfColumns != row.size() ){

			std::cerr << "Matrix wrongly defined in file!" << std::endl;
			return;

		}

		matrix.push_back(row);

	}

	noOfRows = matrix.size();

	std::cout<<"No. of rows set to "<< noOfRows << "." << std::endl;

}

Matrix::~Matrix() {
	// TODO Auto-generated destructor stub
}

int Matrix::getNoOfRows(){

	return this->noOfRows;

}

int Matrix::getNoOfColumns(){

	return this->noOfColumns;

}

void Matrix::setNoOfColumns(int noOfColumns){

	this->noOfColumns = noOfColumns;

}

void Matrix::setNoOfRows(int noOfRows){

	this->noOfRows = noOfRows;

}

std::vector<std::vector<double>> Matrix::getMatrix(){

	return this->matrix;

}

