#include<stdio.h>
int main(){
    int n,c;
    int end;
    scanf("%d %d",&n, &end);
    for(c=n;c<=end;c++){
        int i=c;
        int temp=i,sum=0,dig, mul=1,sum2;
        while(i!=0){
        dig=i%10;
        sum=sum+dig;
        mul=mul*dig;
        i=i/10;
        }
        sum2=sum+mul;
    if(sum2==c){
        printf("%d\n",c);
    }
    }
    return 0;
}