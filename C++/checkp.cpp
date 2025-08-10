
#include <iostream>
using namespace std;

// bool checkpal(string str,int start,int end)
// {  
//     if(start>=end)
//     return 1;
//     if(str[start]!=str[end])
//     return 0;
//     else
//     return checkpal(str,start+1,end-1);
// }
// int main()
// {
//     string str="naman";
//     cout<<checkpal(str,0,4);
// }
// int count(string str,int index)
// {
//     if(index==-1)
//     return 0;
//     if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u')
//     return 1+count(str,index-1);
//     else
//     return count(str,index-1);
// }
// int main()
// {
//     string str="purva";
//     cout<<count(str,4);
// }
// void rev(string &str,int start,int end)
// { if(start>=end)
//     return ;
//     char c= str[start];
//     str[start]=str[end];
//     str[end]=c;
//     rev(str,start+1,end-1);
// }
// int main()
// {
//     string str="purva";
//     rev(str,0,4);
//     cout<<str;
// }
// void lowertoupper(string &str,int index)
// {    if(index==-1)
//     return;
//     str[index]='A'+str[index]-'a';
//     lowertoupper(str,index-1);
// }
// int main()
// {
//     string str="purvadutta";
//     lowertoupper(str,9);
//     cout<<str;
// }
bool BinarySearch(int arr[],int start,int end,int X)
{if(start>end)
    return 0;
    int mid=start+(end-start)/2;
    if(arr[mid]==X)
    return 1;
    else if(arr[mid]<X)
    return BinarySearch(arr,mid+1,end,X);
    else
    return BinarySearch(arr,start,mid-1,X);
}
int main()
{
    int arr[]={2,4,6,8,10,12};
    int X=10;
    cout<<BinarySearch(arr,0,5,X);
}