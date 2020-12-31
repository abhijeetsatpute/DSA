//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

#include <algorithm>
//User function Template for C++


int immediateGreater(int arr[], int n, int x){
    sort(arr,arr+n);
    if(x>=arr[n-1])
        return -1;
    int i=n-1;
    while(arr[i]>x && i>=0)
        i--;
    return arr[i+1];
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

    	cout << immediateGreater(arr, n, x) << endl;
	}

	return 0;
}  // } Driver Code Ends
