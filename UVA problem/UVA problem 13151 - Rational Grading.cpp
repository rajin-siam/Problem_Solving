#include<bits/stdc++.h>
using namespace std;
long long int hexadecimalToDecimal(string &hexVal)
{
    long long int  len = hexVal.size();
    long long int base = 1;
    long long int dec_val = 0,i;
    for (i = len - 1; i >= 0; i--) {
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += ((long long int)(hexVal[i]) - 48) * base;
            base = base * 16;
        }
        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (int(hexVal[i]) - 55) * base;
            base = base * 16;
        }
    }
    return dec_val;
}




long long int power_siam(long long int base,long long int m)
{
    long long int ans=1,i;
    for(i=0;i<base;i++)
    {
        ans=ans*m;
    }
    return ans;
}


long long int string_to_asci(string &s)
{
    long long int l,n=0,j=1,ans=1,i,m=10;
    l=s.length();
    if(s[0]=='0'&&s[1]=='x')
    {
        string s2=s.substr(2,l-1);
        return hexadecimalToDecimal(s2);
    }
    else if((s[0]=='0'&&s[1]>='0'&&s[1]<='9'))m=8;
    for(i=l-1,j=0;i>=0;i--,j++)
    {
        ans=power_siam(j,m);

        n=n+(s[i]-'0')*ans;
    }
    return n;
}

int main()
{
    long long int i,j,l,d,t,n,m,k=0;
    string s,s2;
  //  freopen("out.txt","w",stdout);
    while(true)
    {
        long long int counter=0;
     //   cout<<"number = "<<++k<<endl;
        cin>>s>>t;
        n=string_to_asci(s);
        if(s[0]=='0'&&t==0)return 0;
        while(t--)
        {
            cin>>s2>>m;

            if(s2.compare("i++")==0)
            {
                if(n==m)counter++;
                else
                    n=m;
                    n++;
            }
            else if(s2.compare("++i")==0)
            {
                if((n+1)==m)
                {
                    counter++;
                    n++;
                }
                else
                    n=m;
            }
            else if(s2.compare("i--")==0)
            {
                if(n==m)counter++;
                else n=m;
                n--;
            }
            else if(s2.compare("--i")==0)
            {
                if((n-1)==m)
                {
                    counter++;
                    n--;
                }
                else
                    n=m;
            }
            else if(s2.compare("i")==0)
            {
                if(n==m)
                {
                    counter++;
                }
                else n=m;
            }
        }

        cout<<counter<<endl;
    }


}
