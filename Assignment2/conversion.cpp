/*
Jessica Viner
2345566
viner@chapman.edu
CPSC 298 - 09
Programming Assignment 2: Loops, Arrays & Functions
conversion.cpp
*/


#include <iostream>
#include <string>
using namespace std;

void inputStandard(float &varFeet, float &varInches){
  //method to take in measurements of feet and inches
  cout <<"Please enter length in feet and inches separated by a space."<<endl;
  cin >> varFeet;
  cin >> varInches;
}//end inputStandard method

void calcMetric(float feet, float inches, float &meters, float &centimeters){
  //method to convert measurements from standard to metric

  //given that here are 0.3048 meters in a foot
  //100 centimeters in a meter and 12 inches in a foot

  //total inches
  inches = inches + (12 * feet);

  //process of unit conversion from inches to centimeters
  float mPerIn = (0.3048) * (1.0/12.0);
  float cmPerIn = mPerIn * 100;
  centimeters = inches * cmPerIn;

  //initializes meters to 0
  meters = 0;
  //a meter is 100 centimeters, this loop calculates number of meters
  while(centimeters >=100){
    meters++;
    centimeters = centimeters - 100;
  }//end while loop

}//end calcMetric method

void print(float feet, float inches, float meters, float centimeters){
  cout << "Input: " << feet << "ft " << inches << "in "<< endl;
  cout << "Results: " << meters << "m "<<centimeters << "cm"<< endl;
}//end print method

int main(){

    float feet;
    float inches;

    float meters;
    float centimeters;

    //store if user wants to continue or exit
    string usr;

    do{
      inputStandard(feet, inches);
      calcMetric(feet, inches, meters, centimeters);
      print(feet, inches, meters, centimeters);

      cout << "If you would like to do a new calculation, press any key. "<<endl;
      cout << "If not, type 'exit' to exit program. " << endl;
      cin >> usr;
    }while(usr != "exit");



  return 0;
}//end main
