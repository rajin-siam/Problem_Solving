#include<stdio.h>

#include<math.h>

int main()

{



    unsigned long long T,n,t,row1,row2,col1,col2,difference1,difference2,i,j,chess;

    scanf("%llu",&T);

    for(i=0;i<T;i++)

    {

        scanf("%llu",&t);

        scanf("%llu",&chess);

        for(j=0;j<t;j++)

        {

            scanf("%llu%llu%llu%llu",&row1,&col1,&row2,&col2);

            difference1=abs(row1-row2);

            difference2=abs(col1-col2);

            if(difference1==difference2&&difference1==0&&difference2==0)printf("0\n");

            else if(difference1==difference2)printf("1\n");

            else if(row1%2==row2%2&&col1%2==col2%2)printf("2\n");

            else if(row1%2!=row2%2&&col1%2!=col2%2)printf("2\n");

            else printf("no move\n");



        }

    }

}

