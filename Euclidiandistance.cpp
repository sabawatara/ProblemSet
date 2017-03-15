#include <iostream>
# include <cmath>

using namespace std;

int main()
{
    cout<< "This program calculates the distance between two Cartesian coordinates."<<endl<<endl;

    double x1,y1, x2, y2, cix, ciy;

    cout<< "Please input the x coordinate's value for the first coordinate: "<<endl;
    cin>> x1;
    cout<< ""<<endl;
    cout<< "Please input the y coordinate's value for the first coordinate: "<<endl;
    cin>> y1;
    cout<< ""<<endl;
    cout<< "Please input the x coordinate's value for the second coordinate: "<<endl;
    cin>> x2;
    cout<< ""<<endl;
    cout<< "Please input the x coordinate's value for the first coordinate: "<<endl;
    cin>> y2;
    cout<< ""<<endl;

    cix = x2 - x1;
    ciy = y2 - y1;

    double sq_x, sq_y;

    sq_x = pow(cix,2);
    sq_y = pow(ciy,2);

    double distance;

    distance = pow(sq_x+ sq_y, 0.5);

    cout<< "The distance between the two coordinates is " <<distance<< "."<<endl;

    return 0;



}
