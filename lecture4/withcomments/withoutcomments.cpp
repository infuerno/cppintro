

// a regular one line comment - this should still be output
#include <iostream>
#include <fstream>


using namespace std;

int main() {
    cout << "Testing: " << 16/2 << " = " << 4*2 << ".\n\n";
    ifstream in_stream;
    ofstream out_stream;
    in_stream.open("withcomments.cpp");
    if (in_stream.fail()) {
	cout << "Failed to open file." << endl;
	return 1;
    }
    out_stream.open("withoutcomments.cpp");
    if (out_stream.fail()) {
	cout << "Failed to open file." << endl;
	return 1;
    }
    char c;
    bool in_comment = false;
    while(!in_stream.eof()) {
	in_stream.get(c);
	if (!in_comment) {
	    if (c == '/') {
		in_stream.get(c);
		if (c == '*')
		    in_comment = true;
		else {
		    in_stream.putback(c);
		    cout << '/';
		    out_stream << '/';
		}
	    } else {
		cout << c;
		out_stream << c;
	    }
	} else {
	    if (c == '*') {
		in_stream.get(c);
		if (c == '/')
		    in_comment = false;
		else {
		    in_stream.putback(c);
		}
	    }
	    // in comment don't output anything
	}
    }
    in_stream.close();
    out_stream.close();

    return 0;
}

