#include <iostream>
#include <cstdlib>

using namespace std;
void ch6_static();

//int count = 0; ///global variable 

int main() {

cout << "random numbers:" << rand() << " " << rand() << endl;
cout << "random numbers:" << rand() << " " << rand() << endl;
//int x, y, z; //local variables that can be referenced inside the main method
//cin >> x >> y >> z; 
 ch6_static();
 ch6_static();
 ch6_static();
}
void ch6_static() //function header 
{
  int x = 0; 
  static int count = 0; 
  x++;
  count++;
  cout << x << ',' << count;
  return;

}
/*
int calculate(int a, int b)
{
  int x; //local variable x that be referenced only inside of the calculate method
  count += x; //count global variable is being referenced
}
void check(int sum)
{
  count += sum; //count global variable is being referneced 
  //sum is a local object that can be referenced inside of the check method only 
  
}
*/

