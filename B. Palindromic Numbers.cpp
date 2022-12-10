#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        //char s;cin>>s;//s='9'-s+'1';//cout<<s;
        int n;cin>>n;
        string s;cin>>s;
        if(s[0]!='9')
        {
            for(int i=0;i<n;i++)
            {
                s[i]='9'-s[i]+'0';
            }
        }//cout<<s;
        else if(s[0]=='9'&&(s[n-1]=='0'||s[n-1]=='1'))
        {
            s[n-1]='1'-s[n-1]+'0';
            s[n-2]='9'-s[n-2]+'2';
            for(int i=0;i<n-2;i++)
            {s[i]='9'-s[i]+'1';}
        }//cout<<s;
        else if(s[0]=='9'&&(s[n-1]!='0'||s[n-1]!='1'))
        {
            s[n-1]='9'-s[n-1]+'2';
            for(int i=0;i<n-1;i++)
            s[i]='9'-s[i]+'1';
        }
        cout<<s<<endl;
    }
}
