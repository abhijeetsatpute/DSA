//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

#include<algorithm>
//User function Template for C++

// User function to complete
// arr[]: input array
// n: size of array
// k: find element smaller and closest to it.
int immediateSmaller(int arr[], int n, int x)
{
    sort(arr,arr+n);
    if(x<=arr[0])
        return -1;
    int i=0;
    while(arr[i]<x)
    {
        i++;
    }
    return arr[i-1];
}


// { Driver Code Starts.

int main() {

	int t;
	cin>>t;

	while(t--)
	{

            int n;
        	cin >> n;

        	int arr[n];

        	for(int i = 0;i<n;i++){
        	    cin >> arr[i];
        	}

        	int x;
        	cin >> x;

        	cout << immediateSmaller(arr, n, x) << endl;
	}


	return 0;
}
  // } Driver Code Ends
