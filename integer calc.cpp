#include <iostream>

using namespace std;

int main()
{
    int num1, num2, sum, difference, quotient, product, remainder;

    cout<< "Please enter your first number: "<<endl;
    cout<< ""<<endl;
    cin>> num1;
    cout<< "Please enter your second number: "<<endl;
    cout<< ""<<endl;
    cin>> num2;

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    remainder = num1 % num2;

    cout<< "The sum of the numbers is " <<sum<< "."<<endl;
    cout<< ""<<endl;
    cout<< "The difference of the numbers is " <<difference<< "."<<endl;
    cout<< ""<<endl;
    cout<< "The product of the numbers is " <<product<< "."<<endl;
    cout<< ""<<endl;
    cout<< "The quotient of the numbers is " <<quotient<< "."<<endl;
    cout<< ""<<endl;
    cout<< "The remainder of the numbers is " <<remainder<< "."<<endl;

    return 0;

}
