#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;

    cout<< "Evaluate the following equation: x^2 + y^2 + 2xy + 30."<<endl;
    cout<< ""<<endl;

    cout<< "Please input the value for x."<<endl;
    cin>> x;

    cout<< "Please input the value for y."<<endl;
    cin>> y;

    double  result = pow(x, 2) + pow(y, 2) + 2 * x*y + 30;

    cout<< "Your result is " <<result<< "."<<endl;

    return 0;



}
