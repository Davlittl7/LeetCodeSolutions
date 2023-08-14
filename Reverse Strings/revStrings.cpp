#include <iostream>
#include<string>

using namespace std;

int main() {
	//Declaring variables for the original string inputted and the reversed strings
	string originalStr, reversedStr;

	//Taking in a string value 
	cout << "Enter a string to be reversed: "; cin >> originalStr;

	//Setting reversedStr equal to original so that the length is the same
	reversedStr = originalStr;

	//Continues for as long as the original inputted string is and reverses it
	for (int i = 0; i < originalStr.length(); ++i) {
		reversedStr[i] = originalStr[originalStr.length() - (i + 1)];
	}

	//Outputs original and reversed string
	cout << "Original String: " << originalStr << endl;
	cout << "Reversed String: " << reversedStr << endl;

}
