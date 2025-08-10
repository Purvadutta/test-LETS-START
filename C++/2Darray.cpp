
#include <iostream>
using namespace std;
void printcol(int arr[][4],int row,int col)
{
    //column wise
    for(int j=0;j<col;j++)
  for (int i=0;i<row;i++)
  cout<<arr[i][j]<<" ";
}
void printsumdiag(int matrix[][4],int row,int col)
{
    int first=0;
    int sec=0;
    //first diagonal sum
    int i=0;
    while(i<row)
    {
        first+=matrix[i][i];
        i++;
    }
    //second diagonal
    i=0;
     int j=col-1;
    while(j>=0)
    {
        sec+=matrix[i][j];
       i++;j--;
    }
    cout<<first<<" "<<sec<<" ";
}
int main()
{
    //create 2D array
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr2[3][4]={0,2,4,6,8,9,4,8,3,1,0,17};
    // int ans[3][4];
    // //print all the values in array
    // for(int row=0;row<3;row++)
    // for(int col=0;col<4;col++)
    // {
    //     cout<<arr[row][col]<<" ";
    // }
    // //print all the values in array col wise,function call
    // printcol(arr,3,4);
    //find an element in an array
//     int x=8;
//     for(int row=0;row<3;row++)
//     for(int col=0;col<4;col++)
//     {
//         if(arr[row][col]==x)
//         cout<<"yes";
        
        
//     }
//     return 0;
//     cout<<"No";
// }
// for(int row=0;row<3;row++)
// for(int col=0;col<4;col++)
// {
//     ans[row][col]=arr[row][col]+arr2[row][col];
// }
// for(int row=0;row<3;row++)
// for(int col=0;col<4;col++)
// cout<<ans[row][col]<<" ";

//print diagonal sum
int matrix[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
printsumdiag(matrix,3,4);
}