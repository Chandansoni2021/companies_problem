#include<stdio.h>
int main()
{
int dig,sum=0,sum1=0,num;
scanf("%d",&num);
while(num!=0){
    dig=num%10;
    if(dig%2==0){
        sum=sum+dig;
    }
    else{
        sum1=sum1+dig;
    }
    num=num/10;
}
if(sum==sum1){
    printf("yes");
}
else{
    printf("No");
}
return 0;
}