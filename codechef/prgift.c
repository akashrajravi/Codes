#include<stdio.h>
int main()
{
	int t,n,k,a[55],i,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		count=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]%2==0)
				count++;
		}
		if(k==0 && count==n)
			printf("NO\n");
		else if(count>=k)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}