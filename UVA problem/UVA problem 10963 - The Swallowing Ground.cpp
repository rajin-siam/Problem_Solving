#include<stdio.h>

int main()

{    

    int t,col,i,j,k,compare;

    scanf("%d",&t);

    while(t--)

        {

            scanf("%d",&col);

            k=1;

            int y1[col],y2[col],Y[col];

            for(j=0;j<col;j++)

                {

                    scanf("%d%d",&y1[j],&y2[j]);

                    Y[j]=(y1[j]-y2[j]);

                    Y[j]=abs(Y[j]);

                }

            compare=Y[0];

    for(j=1;j<col;j++)

        {

            if(Y[j]!=compare)

                {

                    printf("no\n");k=5;break;

                }        

        }

        if(k==1)printf("yes\n");

        if(t)printf("\n");

        }

        return 0;

}
