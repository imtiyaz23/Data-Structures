#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;cin>>tc;
	for(int i=0;i<tc;i++)
	{
	    int n;
	    cin>>n;
	    int sum=0;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        sum+=arr[i];
	    }
	    int ans=sum/n;
	    if((ans*n) == sum)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
