#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

	string text, palindrome;

	cout << "Enter your phrase: ";
	getline(cin, text);

	for (char c : text) {

		if (isalnum(c)) {

			palindrome += tolower(c);
		}
	}

	text = palindrome;

	for (int i{ 0 }; i < palindrome.length() / 2; i++) {

		char temp = palindrome[i];
		palindrome[i] = palindrome[palindrome.length() - i - 1];
		palindrome[palindrome.length() - i - 1] = temp;

	}

	if (palindrome == text) {

		cout << "Phrase is a palindrome" << endl;

	}

	else {

		cout << "Phrase is not a palindrome" << endl;

	}

	return 0;
}