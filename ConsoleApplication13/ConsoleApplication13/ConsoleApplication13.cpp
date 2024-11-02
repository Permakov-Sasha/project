// ConsoleApplication13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define _USE_MATH_DEFINES
#include "math.h"
#include <iomanip>
using namespace std;

int main(){
	double x,t,s,d,b ;
	cout << "Enter x,t,s,d\n";
	cin >> x>>t>>s>>d;
	double b1, b2;
	b1 =( 1 + tan(10)*x * x +tan(10)*x / 2 + tan(10) * 255 * M_PI / 180) / (pow(sin(x), 3) * (cos(3)*x));
	b2 = x * t * s * d;
	b = b1 * b2;
	cout << "b=" << fixed << setprecision(2) << b << endl;
	return 0;



}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
