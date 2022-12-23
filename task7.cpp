#include <iostream>
using namespace std;
main(){
int megabytes;
int kilobytes;
int bytes;
int bits;

cout <<  " Enter number in  Megabytes: ";
cin >> megabytes;
bits = megabytes * 1024 * 1024 * 8;
cout << " Number of bits=" << bits;
}