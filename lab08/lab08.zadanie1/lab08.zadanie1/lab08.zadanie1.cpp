#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

	string text;
	int letters{};

	cout << "Enter your phrase: ";
	getline(cin, text);


	for (char c : text) {

		if (isalpha(c)) {

			letters++;

		}

	}
	cout << "Number of phrase: " << text.length() << endl;
	cout << "Number of letters: " << letters << endl;
	
	
	return 0;
}