//this program is to find if the number is positive or negative...

#include <iostream>
using namespace std;

int main(){
  int number;
  
  //prompt user for input
  cout<<"enter a number:"<<endl;
  cin>>number;
  
  //check if the number is positive or negetive
  if (number>=0){
    cout<<"The number "<<number<<" is positive.\n";
  }else{
    cout<<"The number "<<number<<" is negative.\n";
  }
  return 0;
}

STDIN: 5

OUTPUT:
The number 5 is positive.
