#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream in_stream;
    in_stream.open("countchars.cpp");
    if (in_stream.fail()) {
	cout << "Failed to open file." << endl;
	return 1;
    }
    int number_of_chars;
    char c;
    while(!in_stream.eof()) {
	in_stream.get(c);
	number_of_chars++;
    }
    
    in_stream.close();

    cout << "Number of characters in the source file is " << number_of_chars << endl;
    return 0;
}
