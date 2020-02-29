#include <iostream>
using namespace std;



int Factorial(int x){
	int y = 1;
	while (x > 0){
		y *= x;
		x--;
	}
	return y;
}

int main() {
	int x;
	cin >> x;
	cout << Factorial(x);
	return 0;
}
