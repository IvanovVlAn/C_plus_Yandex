
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsPalindrom(string str){
	int len = str.size();
	for(int i = 0; i < len/2; i++ ){
		if (str[i] != str[len-i -1]){
			return false;
		}
	}
	return true;
}

vector<string> PalindromFilter(vector<string> words, int minLength){
	vector<string> answer;
	for (string word : words){
		if ((IsPalindrom(word) == true) && (word.size() >= minLength)){
			answer.push_back(word);
		}
	}
	return answer;
}

int main() {
	cout << IsPalindrom ("madam") <<endl;
	cout << IsPalindrom ("gentleman") <<endl;
	cout << IsPalindrom ("x") <<endl;
	return 0;
}
