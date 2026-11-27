#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {

	string text, text2, ntext, ntext2;
	int isEqually{ 0 };

	cout << "Enter first phrase: ";
	getline(cin, text);

	cout << "Enter second phrase: ";
	getline(cin, text2);
	
	for (char c : text) {

		if (isalnum(c)) {

			ntext += tolower(c);
		}
	}

	for (char c : text2) {

		if (isalnum(c)) {

			ntext2 += tolower(c);
		}
	}

	for (char i : ntext) {
		
		for (char j : ntext2) {

			if (j == i) {

				isEqually++;
			}
		}

	}
		
		if (isEqually == ntext.length() && isEqually == ntext2.length()) {

			cout << "Phrase is anagramm" << endl;
		}

		else {

			cout << "Phrase is not an anagramm" << endl;
		}

	return 0;
}