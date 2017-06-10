#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int lower_bound, upper_bound, step_size;

    cout << "Program to print a table of temperatures in farenheit, celsius and absolute for the required range.\n\n";
    
    cout << "Lowest farenheit value? ";
    cin >> lower_bound;
    cout << "Highest farenheit value? ";
    cin >> upper_bound;
    cout << "Step size? ";
    cin >> step_size;

    cout << "\nPrinting table for farenheit values from " << lower_bound << " to " << upper_bound << ", in increments of " << step_size << ".\n\n";
    
    cout << setiosflags (ios::left);
    cout.width(20);
    cout << "Farenheit";
    cout.width(20);
    cout << "Celsius" << "Absolute Value\n\n";

    cout.setf(ios::fixed);
    cout.precision(2);
    for (int farenheit = lower_bound; farenheit <= upper_bound; farenheit += step_size) {
	float celsius = (farenheit - 32) * 9 / 5;
	float absolute = celsius + 273.15;
	cout.width(20);
	cout << farenheit;
	cout.width(20);
	cout << celsius << absolute << "\n";
    }

    return 0;
}
