#include<stdio.h>
int gcd(int m,int n)
{
    if (n==0)
    {
        return m;

    }
    else if(n>m)
    {
        return(gcd(n,m));
    }
    else
    {
        return(gcd(n,m%n));
    }
}
int main(){
    int k,n,m;
    printf("enter 3 numbers\n");
    scanf("%d%d%d",&k,&n,&m);
    printf("GCD is %d",gcd(n,m));
    return 0;
}