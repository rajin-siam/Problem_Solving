is_prime(int n)
    {
        if(n==1)return false;
        if(n==2)return true;
        if(n%2==0)
            return false;
        if(n%3==0)
            return false;
        for(int i=2;i*i<=n;i++)
            if(n%i==0||n%(i+2)==0)
            return false;
        return true;
    }
