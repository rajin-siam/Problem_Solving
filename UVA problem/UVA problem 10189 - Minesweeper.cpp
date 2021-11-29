#include<stdio.h>

int main()

{

    int row,col,i,j,test;

    test =1;

    while(1)

    {

        scanf("%d%d",&row,&col);

         if((row!=0 && col!=0) && test!=1)

         {

             printf("\n");

         }

        if(row==0&&col==0)return 0;

        int box[row+2][col+2];

        char string[col+2];

        for(i=1;i<=row;i++)

        {

            scanf("%s",string);

            for(j=1;j<=col;j++)

            {

                box[i][j]=string[j-1];

            }

        }

        for(i=1;i<=row;i++)

        {

            for(j=1;j<=col;j++)

            {

                if(box[i][j]=='.')box[i][j]=48;

            }

        }

        for(i=1;i<=row;i++)

        {

            for(j=1;j<=col;j++)

            {

            if(box[i][j]=='*'&&box[i][j+1]!='*')box[i][j+1]++;

            if(box[i][j]=='*'&&box[i][j-1]!='*')box[i][j-1]++;

            if(box[i][j]=='*'&&box[i-1][j]!='*')box[i-1][j]++;

            if(box[i][j]=='*'&&box[i+1][j]!='*')box[i+1][j]++;

            if(box[i][j]=='*'&&box[i-1][j+1]!='*')box[i-1][j+1]++;

            if(box[i][j]=='*'&&box[i-1][j-1]!='*')box[i-1][j-1]++;

            if(box[i][j]=='*'&&box[i+1][j+1]!='*')box[i+1][j+1]++;

            if(box[i][j]=='*'&&box[i+1][j-1]!='*')box[i+1][j-1]++;

            }

        }

        printf("Field #%d:\n",test++);

        for(i=1;i<=row;i++)

        {

            for(j=1;j<=col;j++)

            {

                printf("%c",box[i][j]);

            }printf("\n");

        }

    }

}

