#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;cin>>t;
  long long n;
  while(t--)
  {
      cin>>n;
      
     float p=sqrt(n);
    if(abs(p-int(p))>0)	
    cout<<"NO"<<endl;
    else if(n==1)
    cout<<"NO"<<endl;
    else
    {
        int q=0;
        for(int i=2;i*i<sqrt(n);i=i+1)
        {
            if(n%i==0)
            {
                q=1;
                break;
            }
        }
        if(q==0)cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
        
    }
    
	
    }
  
 
