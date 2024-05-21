/* Program Name: kgtolbs.cpp
* Author: Ryan Hurd
* Date last updated: 2/12/2018
* Purpose: Convert Kilograms to Pounds
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double lb, kg;

	cout << fixed << showpoint;
	cout << setprecision(2);
	
	cout << "This program converts Kilograms (Kg.) to Pounds (lb.).\n";
	cout << "Please enter weight in Kilograms: ";
	cin >> kg;
	lb = kg * 2.2046226218;
	cout << "The weight entered (Kg.): " << kg << '\n';
	cout << "The weight in Pounds (lb.) is: " << lb << '\n';

	system("pause");
	return 0;
}