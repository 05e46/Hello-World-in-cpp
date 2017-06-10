#include<iostream>
#include<string>
using namespace std;

void input(string your_input);

int main() {
	cout << "Hello World" << endl;
	string userInput;
	cout << "Enter your input" << endl;
	cin >> userInput;
	cout << endl;
	cout << "User input: " << userInput << "\n";
	system("pause");
	return 0;
}