#include<stdio.h>
#include<stdlib.h>
inline void fastRead(int *a)
{
	register char c=0;
	while (c<33) 
		c=getchar();
		*a=0;
	while (c>33)
	{
		*a=*a*10+c-'0';
		c=getchar();
	}
}
inline void fastWrite(int a)
{
	register char c;
	char snum[20];
	int i=0;
	do
	{
		snum[i++]=a%10+48;
		a=a/10;
	}while(a!=0);
	i=i-1;
	while(i>=0)
		putchar(snum[i--]);
		putchar('\n');
}
int main()
{
	return 0;
}