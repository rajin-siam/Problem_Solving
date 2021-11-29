#include<stdio.h>

int main()

{    

    long long int n,i,j,sum=0,rem,vagfol;

        for(;;){

        scanf("%lld",&n);

        if(n==0)return 0;

        sum=0;

        vagfol=n;

        for(;;)

                {

                rem=vagfol%10;

                sum=sum+rem;

                vagfol=vagfol/10;

                if(vagfol==0&&(sum/10)>0)

                    {

                        vagfol=sum;sum=0;

                    }

                if(vagfol==0&&(sum/10)==0)break;

                }

        printf("%lld\n",sum);

                }

return 0;

}
