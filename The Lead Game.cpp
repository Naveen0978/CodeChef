#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a,b,p=0,q=0,maxi=0,w;
	for(int i=0;i<n;i++)
	{
	    cin>>a>>b;
	    p+=a;
	    q+=b;
	    if(p>q)
	    {
	       if(maxi<(p-q))
	       {
	           maxi=p-q;
	           w=1;
	       }

	    }
	    else
	    {
	       if(maxi<(q-p))
	       {
	           maxi=q-p;
	           w=2;
	       }
	    }
	       
	}
	
	cout<<w<<" "<<maxi;
	return 0;
}
