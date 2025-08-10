
#include<iostream>
using namespace std;

int subset(int arr[],int index,int sum,int n)
{
  if(index==n)
  {
    return sum==0;
  }
  return subset(arr,index+1,sum,n)+subset(arr,index+1,sum-arr[index],n);
}

int main()
{
  int arr[]={3,7,6,8};
  int sum=10;
  cout<<subset(arr,0,sum,4)<<endl;
}