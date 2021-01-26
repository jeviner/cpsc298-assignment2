/*
Jessica Viner
2345566
viner@chapman.edu
CPSC 298 - 09
Programming Assignment 2: Loops, Arrays & Functions
zeroboth.cpp
*/

#include <iostream>

using namespace std;

//call by reference paramters a and b to set referenced variables to 0
void zeroBoth(int* a, int* b){
  *a = 0;
  *b = 0;
}



int main(){
  int x = 10;
  int y = 7;
  int* xp = &x;
  int* yp = &y;
  zeroBoth(xp, yp);
  cout << x << " " << y << endl;
  return 0;
}
