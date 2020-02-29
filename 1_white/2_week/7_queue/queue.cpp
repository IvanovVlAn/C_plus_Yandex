//============================================================================
// Name        : queue.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int q;
	cin >> q;
	int i;
	string operation;
	vector <int> queue; //1 - волнуются, 0 - спокойные
	vector <int> answers;
	while (q > 0){
		cin >> operation;
		if (operation == "WORRY"){
			cin >> i;
			queue[i] = 1;
		}

		if (operation == "QUIET"){
			cin >> i;
			queue[i] = 0;
		}

		if (operation == "COME"){
			cin >> i;
			if (i > 0){
				while (i != 0){
					queue.push_back(0);
					i = i - 1;
				}
			}
			if (i < 0){
				while (i != 0){
					queue.pop_back();
					i = i + 1;
				}
			}
		}

		if (operation == "WORRY_COUNT"){
			int sum = 0;
			for (auto x: queue){
				if (x == 1){
					sum += x;
				}
			}
			answers.push_back(sum);
		}

		q = q - 1 ;
	}
	for(auto x : answers){
			cout << x << endl;
		}
	return 0;

}
