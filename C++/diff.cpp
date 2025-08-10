#include <bits/stdc++.h> //this can be used for including all library functions
// C++ program to find Maximum difference
// between two elements such that larger
// element appears after the smaller number
#include <bits/stdc++.h>
using namespace std;

int maxDiff(vector<int> &arr) {
    int n = arr.size();

	int ans = -1;
	for (int i=0; i<n; i++) {
	    for (int j=i+1; j<n; j++) {
	        
	        // If arr[j] > arr[i]
	        if (arr[j] > arr[i]) {
	            ans = max(ans, arr[j] - arr[i]);
	        }
	    }
	}
	
	return ans;
}

int main() {
	vector<int> arr = {2, 3, 10, 6, 4, 8, 1};
	cout << maxDiff(arr);
	return 0;
}
