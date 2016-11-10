#include <iostream>
using namespace std;

// Function prototype
void showCupsToOunces(double);

int main()
{
	// Test the function with various arguments.
	showCupsToOunces(1.0);
	showCupsToOunces(2.5);
	showCupsToOunces(10.0);
	cin.get();
	return 0;
}

// The showCupstoOunces function accepts a number of 
// cups as an argument and displays the equivalent
// number of fluid ounces.

void showCupsToOunces(double cups)
{
	double ounces = cups * 8;
	cout << cups << " cups is equivalent to "
		<< ounces << " fluid ounces.\n";
}