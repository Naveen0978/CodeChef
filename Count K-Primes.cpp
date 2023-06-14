#include <bits/stdc++.h>
using namespace std;

void find(vector<int>& v,int n)
{
    vector<int> factor(n+1,0);
    factor[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(factor[i]==0)
        {
            factor[i]=1;
            for(int j=2*i;j<=n;j+=i)
                factor[j]+=1;
        }
    }
    v = factor;
}

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	vector<int> allfact;
	find(allfact,100000);
	while(t--)
	{
	    int a,b,k;
	    cin>>a>>b>>k;
	    int count=0;
	    for(int i=a;i<=b;i++)
	    {
	        if(allfact[i] == k)
	            count++;
	    }
        cout<<count<<endl;
	}
	
	return 0;
}



