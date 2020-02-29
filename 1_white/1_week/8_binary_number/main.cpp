#include <iostream>
#include <vector>
using namespace std;

int main() {
	int x;
	vector<int> bin;

	cin >> x;

	while (x != 0){
		bin.push_back(x % 2);
		x = x / 2;
	}

	for (int i = bin.size() - 1; i >= 0; i-- ){
		cout << bin[i];
	}
	return 0;
}
