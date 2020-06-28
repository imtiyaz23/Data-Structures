#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    for(int i=0;i<t;i++)  
    {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       int ans=0;
       int previous=arr[0];
       for(int i=0;i<n;i++)
       {
           if(previous>=arr[i])
           {
               ans++;
               previous=arr[i];
           }
           else{
            //   do nothing
           }
       }
       cout<<ans<<endl;
    }
    
    return 0;
    
}