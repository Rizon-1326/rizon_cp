#include <bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
   return (a.second < b.second);
}


int main() {
	
	int n,a,b,c,d,q;cin>>n>>q;
	vector<pair<int,int>>v,v1,v2;
	pair<int,int>p,p1,p2;
	
	    for(int i=0;i<n;i++)
	    {
	        cin>>a>>b;
	        p=make_pair(a,b);
	        v.push_back(p);
	    }
	    for(int i=0;i<q;i++)
	    {
	        cin>>c>>d;
	        p1=make_pair(c,d);
	       v1.push_back(p1);
	    }
	    
	    sort(v.begin(), v.end(), sortbysec);
	    for(int i=0;i<n;i++)cout<<v[i].first<<" "<<v[i].second<<endl;
	    
	    cout<<endl;
	    //cout<<v[0].first<<" "<<v[0].second<<endl;
        v2.push_back(make_pair(v[0].first,v[0].second));
	    for(int i=0;i<n-1;i++)
	    {
	        if(v[i].second<=v[i+1].first)
	        {
	           // cout<<v[i+1].first<<" "<<v[i+1].second<<endl;
	            p2=make_pair(v[i+1].first,v[i+1].second);
	            v2.push_back(p2);
	        }
	    }
	     //for(int j=0;j<v1.size();j++)
	     //cout<<v1[j].first<<" "<<v1[j].second<<endl;
	    
	    int co=0;
	    for(int i=0;i<q;i++)
	    {
	        for(int j=0;j<v2.size();j++)
	        {
	            if((v1[i].first<=v2[j].first)&&(v1[i].second>=v2[j].second))
	            co++;
	        }
	        cout<<co<<endl;
	        co=0;
	    }
	
}
