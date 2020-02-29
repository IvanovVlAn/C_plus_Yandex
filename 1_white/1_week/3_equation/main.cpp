
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if ((a == 0) && (b == 0)){
		}
	else{
		if (a == 0){
			cout << -c/b;
		}
		else{
			int discr = b*b - 4*a*c;
			if (discr >= 0){
				if (discr == 0){
					cout << (-b + sqrt(discr))/(a*2);
				}
				else {
					cout << (-b + sqrt(discr))/(a*2) << ' ' << (-b - sqrt(discr))/(a*2);
				}
			}
		}
	}
	return 0;
}
