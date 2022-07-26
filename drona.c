#include<stdio.h>
int main()
{
int a,b,sum=0,t=1,num;
scanf("%d %d",&a,&b);
sum=b;
while(sum<a)
 {
scanf("%d",&num);
   sum=sum+num;
   t=t+1;
 }
printf("the number of terns is %d",t);
return 0;
}