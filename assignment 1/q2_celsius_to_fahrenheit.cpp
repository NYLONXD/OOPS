/*
 * Q2. WAP that asks for a temperature in Celsius and displays it in Fahrenheit.
 *     Formula:  F = 9C/5 + 32
 */
#include <iostream>
using namespace std;

int main()
{
    float celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (9 * celsius) / 5 + 32;

    cout << celsius << " degree Celsius = " << fahrenheit
         << " degree Fahrenheit" << endl;

    return 0;
}
