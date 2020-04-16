#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

//Default Constructor
Point::Point()
{
  cout << "Constructing Point object, default: \n";
  cout << "Initializing to zero" << endl; 
  xCoord = 0.0;
  yCoord = 0.0;
}
//Parmeterized Constructor
Point::Point(double x, double y)
{
  //input parameters x,y 
  cout << "constructinf Point object, parameteruized \n" << endl; 
  cout << "input parameers: " << x << " " << y << endl;

  xCoord = x;
  yCoord = y;
}

//Distance Formula
double Point::operator -(const Point& rhs) const
{
    double t1, t2, d;
    t1 = rhs.xCoord - xCoord; //(x2-x1)
    t2 = rhs.yCoord - yCoord; //(y2-y1)
    d = sqrt(pow(t1,2) + pow(t2,2));
    return d;
}
bool Point::operator == (const Point& rhs) const
{
  if(rhs.xCoord == xCoord && rhs.yCoord == yCoord)
  {
    return true;
  }
  else
    return false; 
}

void Point::setX(double xVal)
{
  xCoord = xVal;
}
void Point::setY(double yVal)
{
  yCoord = yVal;
}
int main() {

  Point p1;
  p1.setX(2.3); 
  p1.setY(1.5);
  cout << "p1.x is:" << p1.getX() << endl; 
  cout << "p1.y is:" << p1.getY() << endl;

  
  /*
  Point p1(2.3, -7.1); //modify x and y values 
  cout << p1.getX() << p1.getY() << endl; //return the x

 p1.setX(9.3);
 cout << p1.getX();

  //Declare and initialize objects 
  cout <<"In main, declare p1..." << endl;
  Point p1; 

  cout << "\nIn main, declare p2..." << endl;
  Point p2(1.5,-4.7);

  cout << "\nIn main, declare ORIGIN..." << endl; 
  const Point ORIGIN(0.0, 0.0);
*/
  return 0; 
}