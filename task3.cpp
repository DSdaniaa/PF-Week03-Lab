#include <iostream>
using namespace std;
main(){
float pounds=0.45;
float kilogram;
float input;

cout << "Enter Amount in kilograms:";
cin >> input;
kilogram = input / pounds;
cout << " Amount in pounds is: " << kilogram;
}