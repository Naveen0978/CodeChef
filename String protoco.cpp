#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    string s;
	    cin>>n>>s;
	    int cost=0;
	    int i=0;
	    while(i<n)
	    {
	        if(s[i]==s[i+1]) i+=2;
	        else i+=1;
	        
	        cost++;
	    }
	    cout<<cost<<endl;
	}
	return 0;
}
