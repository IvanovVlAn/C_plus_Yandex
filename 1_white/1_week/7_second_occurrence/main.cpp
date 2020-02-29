//============================================================================
// Name        : double_in.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int f = -2;
	int i = 0;

	for (auto c : str){
		if(c == 'f' && f == -2){
			f = -1;
		}
		else {
			if (c == 'f' && f == -1){
				f = i;
			}
		}
		i++;
	}
	cout << f; // prints !!!Hello World!!!
	return 0;
}
