//============================================================================
// Name        : moveString.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include<vector>
using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination){
	for (auto word : source){
		destination.push_back(word);
	}
	source.clear();
}

