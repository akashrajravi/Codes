#include<stdio.h>
#include<math.h>
int main()
{
	int t,a,b;
	float max,min;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&a,&b);
		min=sqrt(pow(b,2)-pow(a,2));
		max=sqrt(pow(a,2)+pow(b,2));
		printf("%f %f\n",min,max);
	}
	return 0;
}