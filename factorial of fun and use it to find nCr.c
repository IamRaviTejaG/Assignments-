//factorial of fun and use it to find nCr
#include<stdio.h>
int fact(int k)
{
    int i,p=1;
    for(i=1;i<=k;i++)
    {
       if(k==0)
        return 1;
       else
        p*=i;
    }
    return p;
}
main()
{

    int n,r;
    printf("Enter  n and r a to find ncr\n");
    scanf("%d%d",&n,&r);


    int ncr=0;
    ncr = fact(n)/((fact(n-r))*fact(r));
    printf("%d",ncr);
}
