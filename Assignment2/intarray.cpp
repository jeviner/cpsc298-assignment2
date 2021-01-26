/*
Jessica Viner
2345566
viner@chapman.edu
CPSC 298 - 09
Programming Assignment 2: Loops, Arrays & Functions
intarray.cpp
*/

#include <iostream>

using namespace std;


int main(){
  //maximum array size of 10
  const int SIZE = 10;
  int arr[SIZE];
  //placeholder variable for storage before adding input to array at given index
  int num = 0;
  //track number of values in array
  int length = 0;

  //initialize clean array
  for(int i = 0; i<SIZE; ++i){
    arr[i] = 0;
  }

  //prompt user to input a value up to 10 times
  //breaks loop when negative value is entered
  for(int i = 0; i<SIZE; ++i){
    cout << "enter non-negative integer or -1 to quit: ";
    cin >> num;
    cout << endl;
      // checks that input is non-negative
      if(num < 0){
        break;
      }
    //assigns index i with input value num
    arr[i] = num;
    //increment length as user input is added to array
    length++;

  }
  //prints out only the numbers entered by the user without the trailing zeroes
  for(int i = 0; i<length; ++i){
    cout << arr[i] << endl;
  }



  return 0;
}
