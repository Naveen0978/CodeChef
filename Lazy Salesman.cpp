#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,w;
	    cin>>n>>w;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    
	    sort(arr,arr+n);
	    int count=0;
	    int i=n-1;
	    while(w>0)
	    {
	        w-=arr[i];
	        count++;
	        i--;
	    }
	    cout<<n-count<<endl;
	}
	return 0;
}
