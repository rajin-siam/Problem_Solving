#include<bits/stdc++.h>
using namespace std;
int summation_of_digits(int n)
{
    int vagfol=n;
    int vagses,sum=0;
    while(vagfol!=0)
    {
        vagses=vagfol%10;
        sum+=vagses;
        vagfol=vagfol/10;
    }

    return sum;
}


int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {

            string s;
            getline(cin,s);
            int l,c=0,sum1=0,k=0,i,j;
            l=s.length();
            int arr1[8]={0};
            int arr2[16]={0};
            for(i=0,k=0;i<l;i++)
            {
                if(s[i]==' ')continue;
                arr2[k]=s[i]-'0';
                k++;
            }
            for(i=0,k=1;i<16;i+=2,k+=2)
            {
                sum1+=summation_of_digits(arr2[i]*2);
                sum1+=summation_of_digits(arr2[k]);
            }
            if(sum1%10==0)cout<<"Valid\n";
            else cout<<"Invalid\n";

    }
}


