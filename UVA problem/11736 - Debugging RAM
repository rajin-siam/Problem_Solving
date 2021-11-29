#include <bits/stdc++.h>
using namespace std;
int main() {
    int b,v,i,q,j;
  //  freopen("out.txt","w",stdout);
    while(scanf("%d%d",&b,&v)!=EOF)
    {
            string s[v],s2[v],s3[v],x,y;
            int m[v];
            for(i=0;i<v;i++)cin>>s[i]>>m[i];
            for(i=0;i<v;i++)
            {
                for(j=0;j<m[i];j++)
                {
                    cin>>x;
                    s2[i]+=x;
                }
            }
            unsigned long long ram;
            cin>>q;
            for(i=0;i<q;i++)
            {
                cin>>s3[i];
                cout<<s3[i]<<"=";
                for(j=0;j<v;j++)
                {
                    if(s3[i]==s[j])
                    {
                        ram=stoull(s2[j],0,2);
                        cout<<ram;
                    }
                }
                cout<<endl;
            }
    }
    return 0;
}
