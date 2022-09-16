#pragma once
#include <iostream>
using namespace std;

class MatricesAdyacencia {
private:
	int dimension;
public:
	MatricesAdyacencia() {}
	~MatricesAdyacencia(){}
	void setDimension(int d) { this->dimension = d; }
};