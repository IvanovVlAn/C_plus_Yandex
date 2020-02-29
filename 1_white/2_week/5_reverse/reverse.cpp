//============================================================================
// Name        : reverse.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& v){
	int tmp;
	int len = v.size();
	for(int i = 0; i < len/2; i++){
		tmp = v[i];
		v[i] = v[len - i - 1];
		v[len - i - 1] = tmp;

	}
}

vector<int> Reversed(const vector<int>& v){
	vector<int> answ;
	for (int i = v.size()-1; i >= 0; i--){
		answ.push_back(v[i]);
	}
	return answ;
}



int main() {
	vector<int> numbers = {1, 5, 3, 4, 2};
	numbers = Reversed(numbers);
	for (int number : numbers){
		cout << number << ' ';
	}
	 // prints !!!Hello World!!!
	return 0;
}
