#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        double sq_root=sqrt(n);
        if(ceil(sq_root)==floor(sq_root))printf("Yes\n");
        else printf("No\n");
    }
}
