#include <bits/stdc++.h>
using namespace std;

void find(int arr[],int n)
{
    vector<int> v;
    stack<int> st;
    
    for(int i=n-1;i>=0;i--)
    {
        if(st.empty())
            v.push_back(1);
        else if(st.top() == arr[i])
            v.push_back(1);
        else if(st.top() != arr[i])
            v.push_back(v.back()+1);
        st.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        arr[i]>0?arr[i]=1:arr[i]=0;
	    }
	    find(arr,n);
	}
	return 0;
}
