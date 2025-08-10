

#include<iostream>
using namespace std;
int main()
{
   //variable ke liye heap memory
   int *ptr=new int ;
   *ptr=9;
   cout<<*ptr<<endl;
   float *ptr2=new float;
   *ptr2=9.11;
   cout<<ptr2<<endl;

   int n;
   cout<<"Enter the size of array: ";
   cin>>n;
   int *p=new int[n];
   for(int i=0;i<n;i++)
   p[i]=i+1;
   for(int i=0;i<n;i++)
   cout<<p[i]<<endl;

   delete ptr;
   delete[] p;
}