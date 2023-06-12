#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    string s;
	    cin>>n>>k;
	    cin>>s;
	    if(s[0] == '0')
	    {
	        s[0]='1';
	        k--;
	    }
	    for(int i=0;i<k;i++)
	        s+='0';
	    cout<<s<<endl;
	}
	return 0;
}
