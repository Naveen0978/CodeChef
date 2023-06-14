#include <bits/stdc++.h>
using namespace std;
constexpr int mod = 998244353;
void find(string s)
{
     
    int n = s.length();
    int arr[n+1];
    arr[0] = 1;
    for(int i=1;i<=n;i++)
    {
        arr[i] = arr[i-1];
        if(i>=2 && s[i-1] != s[i-2])
            (arr[i]+=arr[i-2])%=mod;
    }
    cout<<arr[n]<<endl;
}

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{   string s;
	    cin>>s;
	    find(s);
	}
	
	return 0;
}
