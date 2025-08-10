
#include <iostream>
#include <vector>
using namespace std;

// void subseq(int arr[],int index,int n,vector<vector<int> >& ans,vector<int>temp)
// {   if(index==n)
//     {
//         ans.push_back(temp);
//         return;
//     }
//     //not included
//     subseq(arr,index+1,n,ans,temp);
//     //included
//     temp.push_back(arr[index]);
//     subseq(arr,index+1,n,ans,temp);
// }
// int main()
// {
//     int arr[]={1,2,3};
//     vector<vector<int> > ans;
//     vector<int> temp;
//     subseq(arr,0,3,ans,temp);
//     for(int i=0;i<ans.size();i++)
//     {
//         for(int j=0;j<ans[i].size();j++)
//         {
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

void subset(string &s,int index,int n,vector<string>&ans,string temp)
{
    if(index==n)
    {
        ans.push_back(temp);
        return;
    }
    //not included
    subset(s,index+1,n,ans,temp);
    //included
    temp.push_back(s[index]);
    subset(s,index+1,n,ans,temp);
    temp.pop_back();
}
int main()
{
    string s="abcd";
    vector<string> ans;
    string temp;
    subset(s,0,s.size(),ans,temp);
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<endl;
}