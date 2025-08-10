
#include <iostream>
using namespace std;
//INSERTION SORT
int main()
{
    int n,arr[100];
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=1;i<n;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            else 
            break;
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}