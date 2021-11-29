#include<stdio.h>

int main(){    

    long long int t,n,i,j;

    while(scanf("%lld",&t)!=EOF)

    {

        for(j=0;j<t;j++)

            {

            scanf("%lld",&n);

            long long int a[n],b[n],c[n],sum=0; 

           for(i=0;i<n;i++)

                scanf("%lld%lld%lld",&a[i],&b[i],&c[i]);

                sum=0;

                for(i=0;i<n;i++)sum+=(a[i]*c[i]);

                printf("%lld\n",sum);

            }

    }

    return 0;

}
