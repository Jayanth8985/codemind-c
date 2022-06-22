#include<stdio.h>
int main()
{
    int n,r,product=1,sum=0,result;
    scanf("%d",&n); 
    while(n>0)
    {
    r=n%10;
    n=n/10;
    product=product*r;
    sum=sum+r;
    result=product-sum;
    }
  printf("%d",result); 

}