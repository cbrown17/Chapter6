#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

  //Declare objects 
  unsigned int seed;

  //Get seed value from the user. 
  cout << "Enter the postivie seed number: \n ";
  cin>>seed;
  srand(seed);

  //Generate and print ten random numbers
  cout<<"Random numbers: \n";
  for(int k =1; k<=10; ++k)
  {
    cout << rand() << ' '; //Print a random number
  } 
  cout << endl;
  return 0;
}