#include<stdio.h>

int main()

{ 

    int t,x[10],i,j,m,n;

    scanf("%d",&t);

    for(i=0;i<t;i++)

    {

        if(i==0)printf("Lumberjacks:\n");

        m=0;

        n=0;

    for(j=0;j<10;j++)scanf("%d",&x[j]);

    if(x[0]>=x[1])

        {

        for(j=0;j<9;j++)

        {

            if(x[j]<x[j+1])

            {

                printf("Unordered\n");

                m=1;

                break;

            }

        }

    if(m==0)printf("Ordered\n");

        }

        else

        {

            for(j=0;j<9;j++)

            {

        if(x[j]>x[j+1])

        {

        printf("Unordered\n");

        n=1;

        break;

        }

            }

    if(n==0)printf("Ordered\n");

        }

    }    

return 0;

}
