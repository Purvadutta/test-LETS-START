
#include <iostream>
#include <vector>
#include <algorithm> //for sorting and searching in vector
using namespace std;
int main()
{
  //create vector,declare
    // vector<int>v;
    // vector<int>v1(5,2);
    // //size and capacity
    // cout<<"size of v: "<<v.size()<<endl;
    // cout<<"capacity of v: "<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(23);
    // v.push_back(6);
    // cout<<"size of v: "<<v.size()<<endl;
    // cout<<"capacity of v: "<<v.capacity()<<endl;
    // //update value
    // v[1]=5;
    // cout<<"size of v1: "<<v1.size()<<endl;
    // cout<<"capacity of v1: "<<v1.capacity()<<endl;
    // vector<int>v3={1,2,3,4,5};
  //delete value from a vector
//   vector<int>vnew;
//   vnew.push_back(3);
//   vnew.push_back(7);
//   vnew.push_back(5);
//   vnew.push_back(9);
//    vnew.pop_back();
//    vnew.erase(vnew.begin()+1);
//    vnew.insert(vnew.begin()+1,43);
//    vnew[2]=98;
//    vnew.clear();//remove all the elements
//    cout<<"size of vnew: "<<vnew.size()<<endl;
//   cout<<"capacity of vnew: "<<vnew.capacity()<<endl;
//   for(int i=0;i<vnew.size();i++)
//   cout<<vnew[i]<<" ";
// vector<int>arr;
// arr.push_back(2);
// arr.push_back(3);
// arr.push_back(5);
// arr.push_back(6);
// cout<<arr[0]<<endl;
// cout<<arr.front()<<endl;
// cout<<arr[arr.size()-1]<<endl;
// cout<<arr.back()<<endl;
 
// vector<int>a;
// //copy value of one vector to another
// a=arr;
// cout<<a.size()<<endl;
// for(auto i:arr)
// cout<<i<<" ";
vector<int>ans;
ans.push_back(8);
ans.push_back(4);
ans.push_back(90);
ans.push_back(65);
ans.push_back(2);
//sort in increasing order
sort(ans.begin(),ans.end());
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";
cout<<endl;
//sort in descending order
// sort(ans.begin(),ans.end(),greater<int>());
// sort(ans.rbegin(),ans.rend());


// for(int i=0;i<ans.size();i++)
// cout<<ans[i]<<" ";

//search in binary search
cout<<binary_search(ans.begin(),ans.end(),23)<<endl;
cout<<find(ans.begin(),ans.end(),65)-ans.begin()<<endl;
}