#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream in_stream;
    in_stream.open("ownsource.cpp");
    if (in_stream.fail()) {
	cout << "Failed to open file.\n" << endl;
	return 1;
    }
    char c;
    while(!in_stream.eof()) {
	in_stream.get(c);
	cout << c;
    }
    in_stream.close();
    return 0;
}
