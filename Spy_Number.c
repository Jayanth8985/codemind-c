#include<stdio.h>
int main()
{
    int num,s=0,p=1,d,temp;
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        d=temp%10;
        s=s+d;
        p=p*d;
        temp=temp/10;
    }
    if(s==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}