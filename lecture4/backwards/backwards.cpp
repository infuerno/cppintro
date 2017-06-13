#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream in_stream;
    in_stream.open("backwards.cpp");
    if (in_stream.fail()) {
	cout << "Failed to open file." << endl;
	return 1;
    }

    // count the number of characters in the file
    char c;
    int number_of_chars = 0;
    while (!in_stream.eof()) {
	in_stream.get(c);
	number_of_chars++;
    }
    in_stream.close();
    
    for (int i = number_of_chars; i > 0; i--) {
	ifstream in_stream2;
	in_stream2.open("backwards.cpp");
	if (in_stream2.fail()) {
	    cout << "Failed to open file." << endl;
	    return 1;
	}
	for (int j = 0; j < i; j++) {
	    in_stream2.get(c);
	}
	cout << c;
	in_stream2.close();
    }

    cout << endl;
    return 0;
}
