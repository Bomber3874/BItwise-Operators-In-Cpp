/*Sanidhya Singh
PRN- 24070123140
ENTC B2
*/


#include <iostream>
using namespace std;
int main(){
    int i=50;
    int bit_to_be_set;
    int set;
    int bit_to_be_reset;
    int reset;
    
    cout<<"Enter the bit position to be set: ";
    cin>>bit_to_be_set;
    set=i|(1<<bit_to_be_set);
    
    cout<<"Enter the bit position to be reset: ";
    cin>>bit_to_be_reset;
    reset=i&(~(1<<bit_to_be_reset));
    
    cout<<"Your number is: "<<set<<endl;
    cout<<"Your number is: "<<reset<<endl;
    return 0;
    
}

/*output
Enter the bit position to be set: 4
Enter the bit position to be reset: 5
Your number is: 50
Your number is: 34
*/
