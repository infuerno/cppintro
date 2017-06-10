#include <iostream>

using namespace std;

int main() {
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    if (letter >= 'a' && letter <= 'z') {
	char upper = letter - ('a' - 'A');
	cout << "The upper case character corresponding to " << letter << " is " << upper << endl;
    } else if (letter >= 'A' && letter <= 'Z') {
	char lower = letter + ('a' - 'A');
	cout << "The lower case character corresponding to " << letter << " is " << lower << endl;
    } else {
	cout << letter << " is not a letter\n";
    }
    return 0;
}

