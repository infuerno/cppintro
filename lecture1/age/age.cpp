#include <iostream> 
	
using namespace std; 
	
int main() 
{ 
    int year_now, month_now, age_now, month_born, another_year, another_month, another_age; //, another_age_months;
	 
    cout << "Enter the current year then press RETURN.\n"; 
    cin >> year_now; 

    cout << "Enter the current month (a number from 1 to 12).\n";
    cin >> month_now;
    
    cout << "Enter your current age in years.\n"; 
    cin >> age_now; 
	 
    cout << "Enter the month in which you were born (a number from 1 to 12).\n";
    cin >> month_born;
    
    cout << "Enter the year for which you wish to know your age.\n";
    cin >> another_year; 
	 
    cout << "Enter the month in this year.\n";
    cin >> another_month;
    
    another_age = another_year - (year_now - age_now); 
	 
    if (another_age >= 0) {
	cout << "Your age in " << another_year << ": "; 
	cout << another_age << "\n";
    } else if (another_age > 150) {
	cout << "Sorry, but you'll probably be dead by " << another_year << "!\n";
    } else { 
	cout << "You weren't even born in ";
	cout << another_year << "!\n"; 
    }
	
    return 0; 
}
