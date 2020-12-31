//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function Template for C++

// arr[]: input array
// n: size of array
// x: element for which you need to find smaller than x
int smallerThanX(int arr[],int n,int x)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<x)
        {
            count+=1;
        }
    }
    return count;
}


// { Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    int x;
	    cin>>x;

	    cout<<smallerThanX(arr,N,x);
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
