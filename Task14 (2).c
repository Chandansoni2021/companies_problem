#include<stdio.h>
int main()
{
	int m,n,id,i,j,k,l;
	int sum,a,b;
	printf("Enter the val m and n \n");
	scanf("%d%d",&m,&n);
	printf("Enter the pro Id:\n");
	scanf("%d",&id);
	a=((m*n)-(n-1));
	b=m*n;
	int v=0;
		sum=0;
		for(i=1;i<=n;i++) //first row 
		{
			sum = sum+1;
			if(sum==id)
				v=v+1;
		}
		sum=1;
		for(j=1;j<=n;j++) //first column
		{
			sum=sum+6;
			if (sum==id)
				v=v+1;
		}
		sum=37;
		for(k=1;k<=6;k++)//last row
		{	
			sum=sum+1;
			if (sum==id)
				v=v+1;
		}
		sum=0;
		for(l=n;l<=b;l++)//last coloumn
		{
			sum=sum+6;
			if (sum==id)
				v=v+1;
		}
if(v!=0)
	printf("yes");

else
	printf("No");

return 0;
}
