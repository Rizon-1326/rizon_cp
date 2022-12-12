#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;cin>>t;
    while(t--)
    {
        long long n,c=0;cin>>n;
        string s,q;cin>>s;
        map<string,int>m;
      
       // string r = s.substr(0,2);
        //cout<<r<<endl;
        for(int i=0;i<s.size();i++)
        {
           q=s.substr(i,2);
           i++;
       // cout<<q<<endl;
           m[q]++;
           if(i>s.size())break;
        }
       if(n==1)cout<<"NO"<<endl;
        else{
       for(auto u:m){
           if(u.second>1)c++;
       }
       if(c>=1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
        
    }
}
