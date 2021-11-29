#include<stdio.h>

#include<math.h>

int main()

{

    int x1=-5,x2=100,X,i,low_count=0,high_count=0;

    char string1[50],string2[50];

    for(i=0;;i++)

    {

        scanf("%d",&X);

        if(X==0)return 0;

        scanf("%s%s",string1,string2);

         if(string2[0]=='h'&&X<x2){x2=X;high_count++;}

    else if(string2[0]=='l'&&X>x1){x1=X;low_count++;}

        if(string2[0]=='o')

        {

            if(x1<X&&X<x2)printf("Stan may be honest\n");

            else printf("Stan is dishonest\n");

            x2=100;

            x1=-5;

        }

    }

}

