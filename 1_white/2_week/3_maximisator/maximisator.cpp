//============================================================================
// Name        : maximizator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void UpdateIfGreater(const int& a, int& b){
	if (a > b){
		b = a;
	}
}

int main() {
	int a = 8;
	int b = 4;
	UpdateIfGreater(a,b);
	cout << b << endl; // prints !!!Hello World!!!
	return 0;
}
