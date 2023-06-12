#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int occ = m%2==0?m/2:(m+1)/2;
	    int rocc = n%2==0?n/2:(n+1)/2;
	    cout<<occ*rocc<<endl;
	}
	return 0;
}
