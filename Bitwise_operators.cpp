/*Sanidhya Singh
PRN- 24070123140
ENTC B2
*/

#include <iostream>

using namespace std;

int main(){
	int a=8;
	int b=5;
	int bitwise_and=a&b;
	int bitwise_or=a|b;
	int bitwise_xor=a^b;
	int bitwise_not=~a;
	int leftshift=a<<2;
	int rightshift=a>>1;

cout<<"And: "<<bitwise_and<<endl;
cout<<"Or: "<<bitwise_or<<endl;
cout<<"Xor: "<<bitwise_xor<<endl;
cout<<"Not: "<<bitwise_not<<endl;
cout<<"Leftshift: "<<leftshift<<endl;
cout<<"Rightshift: "<<rightshift<<endl;
}

/*
And: 0
Or: 13
Xor: 13
Not: -9
Leftshift: 32
Rightshift: 4
*/

