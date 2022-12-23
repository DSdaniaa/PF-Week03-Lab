#include <iostream>
using namespace std;
main(){
float Ecat;
string Name;
float Intermediate;
float matric;
float Aggregate;
float getE;
float getI;
float getM;



cout << "Enter your Ecat score: ";
cin >> Ecat;
cout << "Enter your Matric score:";
cin >> matric;
cout << "Enter your Name: ";
cin >> Name;
cout << "Enter your Intermediate score:";
cin >> Intermediate;

getE= (((Ecat/400) * 100) * 50) / 100;
getM= (((matric/1100) * 100) * 10) / 100;
getI= (((Intermediate/550) * 100) * 40) / 100;
Aggregate= getE + getM + getE;

cout << "Name: " << Name << endl;

cout << "Aggregate: " << Aggregate;
}
