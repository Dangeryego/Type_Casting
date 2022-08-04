#include <iostream>

using namespace std;

int main()
{
    int num1{}, num2{}, num3{}, num4{};
    cout << "Enter 4 integers separated by space " << endl;
    cin >> num1 >> num2>> num3 >> num4;
    int divident = num1 + num2 + num3 + num4;
    const int divisor {4};
    double average{};
    average = divident / divisor;
    cout << "The average without Typecasting is: " << average << endl;
    average = static_cast <double> (divident) / divisor;
    cout << "\nThe average with Typecasting is: " << average;


    return 0;
}
