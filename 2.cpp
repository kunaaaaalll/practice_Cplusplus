#include<iostream>  
  
using namespace std; 

int main() {
   cout<<"Hello World"<< endl;
   cout<<"thats it!!"<<endl
;
    int a;
    a=1; 
    cout<< "size of int "<< sizeof(a)<<endl;

    float b;
    b=3.14;
    cout<< "size of float "<< sizeof(b)<<endl;
    
    bool c;
    cout<<"size of boolean "<< sizeof(c)<<endl;
    short int d;
    cout<<"size of short int "<< sizeof(d)<<endl;
    long int e;
    cout<<"size of long int "<< sizeof(e)<<endl;
    return 0;
}