#include<iostream>
using namespace std;

int main()
{
    int a; //declaration
    a=12; //initialization

    cout<< "size of int is "<<sizeof(a)<<" bytes"<<endl;  //size of int is 4 bytes

    float b;
    cout<< "size of float is "<<sizeof(b)<<" bytes"<<endl;  //size of float is6  4 bytes

    char c;
    cout<< "size of char is "<<sizeof(c)<<" bytes"<<endl;  //size of char is 1 bytes

    bool d;
    cout<< "size of bool is "<<sizeof(d)<<" bytes"<<endl;  //size of bool is 1 bytes

    short int si;
    long int li;
    cout<< "size of short int is "<<sizeof(si)<<" bytes"<<endl;  //size of short int is 2 bytes
    cout<< "size of long int is "<<sizeof(li)<<" bytes"<<endl;  //size of long int is 8 bytes
    
    return 0;
}