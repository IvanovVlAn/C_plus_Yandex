//============================================================================
// Name        : chetn.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a, b, number;
	cin >> a >> b;
	if (a % 2 == 0){
		number = a;
	}
	else{
		number = a + 1;
	}
	while (number <= b){
		cout << number << ' ';
		number += 2;
	}
	return 0;
}
