#include<stdio.h>
int main()
{
	int t,n,a,b,ans,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d%d",&a,&b);
		ans=1;
		if(n>=2)
		{
			for(i=2;i<=n;i++)
				ans=ans^i;
		}
		printf("%d\n",ans);
	}
	return 0;
}