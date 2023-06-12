#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int count=1;

	    for(int i=0;i<s.length()-1;i++)
	    {
	        if(s[i] != s[i+1])
	           count++;
    	        
	        
	    }
	    cout<<count/2<<endl;
	}
	return 0;
}
