#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        int lFreq[26],rFreq[26];
        for(int i=0;i<26;i++)
        {
            lFreq[i]=0;
            rFreq[i]=0;
        }
        for(int i=0;i<s.length()/2;i++)
        {
            char cur=s[i];
            lFreq[cur-'a']++;
        }
        for(int i=(s.length()+1)/2;i<s.length();i++)
        {
            char cur=s[i];
            rFreq[cur-'a']++;
        }
        bool IsSame=true;
        for(int i=0;i<26;i++)
        {
            if(lFreq[i]!=rFreq[i])
            {
                IsSame=false;
                break;
            }
        }
        if(IsSame)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
