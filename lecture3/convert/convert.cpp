/* This program prints out a conversion table of temperatures, after
   prompting the user for upper and lower bounds of the table in
   Fahrenheit, and the temperature difference between table entries. */ 

#include <iostream>
#include <iomanip>
#include "conversions.h"

using namespace std;

void print_preliminary_message();
void input_table_specifications(int& lower, int& upper, int& step);
void print_message_echoing_input(int lower, int upper, int step);
void print_table(int lower, int upper, int step);

int main() 
{	
    int lower = 0; /* the lowest Fahrenheit entry in the table */
    int upper = 0; /* the highest Fahrenheit entry in the table */
    int step = 1;  /* difference in Fahrenheit between entries */

    /* print a message explaining what the program does: */
    print_preliminary_message();
	
    /* prompt the user for table specifications in Fahrenheit: */
    input_table_specifications(lower, upper, step);
	
    /* print appropriate message including an echo of the input: */
    print_message_echoing_input(lower, upper, step);
	
    /* Print the table (including the column headings): */
    print_table(lower, upper, step);

    return 0;
}

void print_preliminary_message()
{
    cout << "This program prints out a conversion table of temperatures." << endl;
}

void input_table_specifications(int& lower, int& upper, int& step)
{
    cout << "Enter the minimum (whole number) temperature you want in the table, in Fahrenheit: ";
    cin >> lower;
    cout << "Enter the maximum temperature you want in the table: ";
    cin >> upper;
    cout << "Enter the temperature difference you want between table entries: ";
    cin >> step;
}

void print_message_echoing_input(int lower, int upper, int step)
{
    cout << "\nTemperature conversion table from " << lower << " Farenheit to " << upper << " Farenheit in steps of " << step << " Farenheit.\n\n";
}

void print_table(int lower, int upper, int step)
{
    cout << setiosflags (ios::left);
    cout.width(20);
    cout << "Farenheit";
    cout.width(20);
    cout << "Celsius" << "Absolute Value" << "\n";

    cout.setf(ios::fixed);
    cout.precision(2);
    for (int farenheit = lower; farenheit <= upper; farenheit += step) {
	cout.width(20);
	cout << farenheit;
	cout.width(20);
	cout << celsius_of(farenheit) << absolute_value_of(farenheit) << "\n";
    }
}
