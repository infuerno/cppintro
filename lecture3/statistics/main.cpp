#include <iostream>
#include "statistics.h"

using namespace std;

int main() {
    int n;
    float r1, r2, r3, r4;
    float a, sd;
    
    cout << "This program tests the functions in the 'statistics.h' header file.\n\n";
    
    cout << "Do you wish to test 1, 2, 3 or 4 numbers (enter 0 to end the program): ";
    cin >> n;
    while (n > 0) {
	if (n > 4) {
	    cout << "Sorry, the program can only test 1, 2, 3 or 4 values.\n\n";
	} else {
	    cout << "\nEnter first value: ";
	    cin >> r1;
	    if (n >= 2) {
		cout << "Enter second value: ";
		cin >> r2;
		if (n >= 3) {
		    cout << "Enter third value: ";
		    cin >> r3;
		    if (n >= 4) {
			cout << "Enter fourth value: ";
			cin >> r4;
			a = average(r1, r2, r3, r4);
			sd = standard_deviation(r1, r2, r3, r4);
		    } else {
			a = average(r1, r2, r3);
			sd = standard_deviation(r1, r2, r3);
		    }
		} else {
		    a = average(r1, r2);
		    sd = standard_deviation(r1, r2);
		}
	    } else {
		a = average(r1);
		sd = standard_deviation(r1);
	    }
	    cout << "Average: " << a << ". Standard Deviation: " << sd << ".\n\n";
	}
	cout << "Do you wish to test 1, 2, 3 or 4 numbers (enter 0 to end the program): ";
	cin >> n;
    }
    cout << "Finished testing 'statistics.h' header file." << endl; 
    return 0;
}
