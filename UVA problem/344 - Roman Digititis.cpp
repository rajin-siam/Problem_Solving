#include<bits/stdc++.h>
using namespace std;

string Roman_Number(int number)
{
	int num[] = {1,4,5,9,10,40,50,90,100};
	string sym[] = {"i","iv","v","ix","x","xl","l","xc","c"};
	string s2;
	int i=8;
	while(number>0)
	{
	int div = number/num[i];
	number = number%num[i];
	while(div--)
	{

		s2+=sym[i];
	}
	i--;
	}
	return s2;
}




main()
{
  //  freopen("out.txt","w",stdout);
  //  freopen("input.txt","r",stdin);
    for(int m=1;;m++){
    string s;
    int x,n,i,c,j;
    cin>>n;
    if(n==0)return 0;

    for(j=1;j<=n;j++)s=s+Roman_Number(j);

    int l=s.length();
    int a=0,b=0,d=0,e=0;
    c=0;
    for(i=0;i<l;i++)
    {
        if(s[i]=='i')a++;
        else if(s[i]=='v')b++;
        else if(s[i]=='x')c++;
        else if(s[i]=='l')d++;
        else if(s[i]=='c')e++;
    }
    cout<<n<<": "<<a<< " i, "<<b<<" v, "<<c<<" x, "<<d<<" l, "<<e<<" c\n";

    }
}

