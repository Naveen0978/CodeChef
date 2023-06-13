#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int goal[n];
	    for(int i=0;i<n;i++)
	        cin>>goal[i];
	    int maxi=0,mini=goal[0];
	    for(int i=0;i<n;i++)
	    {
	        if(mini < goal[i])
	            maxi = max(maxi,goal[i] - mini);
	        else
	            mini = goal[i];
	    }
	    maxi>0?cout<<maxi<<endl:cout<<"UNFIT"<<endl;
	}
	return 0;
}
