#include<stdio.h>

int main()

{

    while(1)

    {

        int north=2,south=5,east=4,west=3,top=1,down=6,temp,i;

         char string[100];

         int test;

        scanf("%d",&test);

        if(test==0)return 0;

        for(i=0;i<test;i++)

         {

             scanf("%s",string);



             if(string[0]=='s')

                {

                temp=north;

                north=down;

                down=south;

                south=top;

                top=temp;



                }

             if(string[0]=='n')

             {

                temp=south;

                south=down;

                down=north;

                north=top;

                top=temp;

             }

             if(string[0]=='e')

             {

                 temp=west;

                 west=down;

                 down=east;

                 east=top;

                 top=temp;

             }

             if(string[0]=='w')

             {

                 temp=east;

                 east=down;

                 down=west;

                 west=top;

                 top=temp;

             }

         }

         printf("%d\n",top);



    }

}

