#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll h,w;
    cin>>h>>w;

    std::vector<std::string> a;


    for(ll i=0;i<h;i++)
    {
            string s;
            cin>>s;
            a.push_back(s);
    }

    bool ans=true;



for(ll i=0;i<h;i++)
    {
        ll c=0;
        for(ll j=0;j<w;j++)
        {
            if(a[i][j] == '#')
            {
                ll dx[4]={1,-1,0,0};
                ll dy[4]={0,0,1,-1};
                bool found=false;
                for(ll k=0;k<4;k++)
                {
                    ll i2,j2;
                    i2=i+dx[k];
                    j2=j+dy[k];

            if(i2>=0 && i2<h && j2>=0 && j2<w && a[i2][j2]=='#')
                    {
                        found=true;
                    }   
                }
                if(found==false)ans=false;
            }
        }     
    }
    
    if(ans)cout<<"Yes\n";
    else cout<<"No\n";
}


