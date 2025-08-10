#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    double celsius,fahrenheit;
    cout<<"enter temp in celsius:";
    cin>>celsius;
    fahrenheit=(1.8)*celsius+32;
    cout<<"temperature in fahrenheit: "<<fahrenheit<<endl;
    
    return 0;
}
