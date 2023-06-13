#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,n,r;
	    int nb=0,pb=0;
	    cin>>x>>y>>n>>r;
	    if(r<x*n) cout<<"-1"<<endl;
	    else
	    {
	        pb = (r-x*n)/(y-x);
	        if(pb>n) pb = n;
	        nb = n-pb;
	        cout<<nb<<" "<<pb<<endl;
	    }
	    
	}
	return 0;
}
