#include <iostream>
#include <cstdlib>

using namespace std;
//function prototype 

//int rand_int(int a, int b);
double rand_float(double a, double b);

int main() {
  //Declare objects 
  unsigned int seed; 
  int a,b; 

  //Get seed value and intervals from the keyboard
  cout << "Enter the postivie seed number: \n ";
  cin>>seed;  
  srand(seed); //has to be used before using rand() in your code
  cout << "Enter Integer limits a and b (a < b): \n ";
  cin >> a >> b ;

 //Generate and print ten random numbers
  cout<<"Random numbers: \n";
  for(int k =1; k<=10; ++k)
  {
    cout << rand_float(a, b) << ' '; 
  } 
  cout << endl;
  return 0;
}
//Floating points
double rand_float(double a, double b)
{
  return ((double)rand()/RAND_MAX)*(b-a) + a;
}
/*
int rand_int(int a, int b)
{
  return rand()%(b-a+1) + a; 
}
*/



//- 5 , 5 limits
// seed 82 
//output: 3.64335 -1.51118 2.9090 2.21546 -4.537439 -4.23526 
//0.709869 -3.41159 -4.86308 -0.958863 
