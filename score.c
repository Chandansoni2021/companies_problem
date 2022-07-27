int main()
{
	int num;
	float res=0;
    int c=3,d=0;
	while(c>0 &&d==0)
	{
		scanf("%d",&num);
		if(num>0){
			if(num%2==0)
			 	res = res - 0.5;
			if(num%2!=0){
                c=c-1;
				res = res + 1;
            }
        }
        else{
            res=res-1.0;
            d=d+1;
        }
	}
	printf("%0.1f\n",res);
	
	return 0;
}
