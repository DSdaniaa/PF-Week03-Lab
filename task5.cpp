#include <iostream>
using namespace std;
main(){
float charge;
int time;
float current;
cout << "Enter the Charge: ";
cin >> charge;
cout << "Enter the Time: ";
cin >> time;
current = charge / time;
cout << "current is:" << current;
}
