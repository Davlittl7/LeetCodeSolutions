#include <iostream>
#include<string>

using namespace std;



int main() {
	string originalStr, reversedStr;
	cout << "Enter a string to be reversed: "; cin >> originalStr;
	reversedStr = originalStr;
	for (int i = 0; i < originalStr.length(); ++i) {
		reversedStr[i] = originalStr[originalStr.length() - (i + 1)];
	}
	cout << "Original String: " << originalStr << endl;
	cout << "Reversed String: " << reversedStr << endl;

}
