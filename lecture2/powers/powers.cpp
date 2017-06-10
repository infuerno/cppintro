#include <iostream>

using namespace std;

int main() {
    int x, n;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter the power to raise " << x << " to: ";
    cin >> n;

    int result = 1;
    for(int i = 0; i < n; i++) {
	result *= x;
    }

    cout << x << " to the power " << n << " is " << result << endl;
    return 0;
}
