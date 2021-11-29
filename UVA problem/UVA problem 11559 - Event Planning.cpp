#include<stdio.h>

int main()

{    

    long long int n,b,h,w,i,j,p,L=1,H,W;

    while(scanf("%lld%lld%lld%lld",&n,&b,&h,&w)==4)

        {                

            long long int cost=999999999;

    for(i=0;i<h;i++)

        {

            scanf("%lld",&H);

            for(j=0;j<w;j++)

                {                

                    scanf("%lld",&W);                

                    p=0;

            if(W>=n)

                {

                p=H*n;

                if(cost>p)cost=p;

                }

                }

        }

        if(cost>b)printf("stay home\n");

    else printf("%lld\n",cost);

        }

return 0;

}
