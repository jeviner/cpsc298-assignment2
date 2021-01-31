/*
Jessica Viner
2345566
viner@chapman.edu
CPSC 298 - 09
Programming Assignment 2: Loops, Arrays & Functions
salestax.cpp
*/

#include <iostream>

using namespace std;

float addTax(float taxRate, float cost){
  //calculates total cost
  float total = cost + (taxRate*cost);
  return total;
}

int main(){
  //trial values -- expected output = 11
  cout << addTax(.10,10.0) << endl;
  return 0;
}
