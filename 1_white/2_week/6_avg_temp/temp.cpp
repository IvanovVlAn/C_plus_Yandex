//============================================================================
// Name        : temp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

double GetAverageTemp(const vector<int>& temp){
	double sum = 0;
	for (auto x: temp){
		sum +=x;
	}
	return sum/temp.size();
}

vector<int> GetIndex(const vector<int>& temp, double x){
	vector<int> res;
	for (int i = 0; i < temp.size(); i++){
		if (temp[i] > x){
			res.push_back(i);
		}
	}
	return res;
}


int main() {
	int n;
	cin >> n;
	vector<int> temperatures;
	for(int i = 0 ; i < n; i++){
		int x;
		cin >> x;
		temperatures.push_back(x);
	}


	vector<int> res = GetIndex(temperatures, GetAverageTemp(temperatures));

	cout << res.size() << endl;

	for (auto i: res){
		cout << i <<' ';
	}

	return 0;
}
