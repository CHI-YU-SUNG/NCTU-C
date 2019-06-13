#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	int pos;
	int C(int n, int k);
	int find_AtPos(int n, int m);
	scanf("%d %d",&n,&m);
	pos=find_AtPos(n,m);
	printf("%d",pos);
	return 0;
} 
int C(int n, int k)
{
	int c,pu=1,pd=1;
	int i;
	for(i=n;i>=n-k+1;i--)
		pu*=i;
	for(i=1;i<=k;i++)
		pd*=i;
	return (pu/pd);
}
int find_AtPos(int n, int m)
{
	int sum,i;
	sum=C(m,2)*n*2+C(n,2)*m*2;
	sum+=C(((m>n)?(n):(m)),2)*(abs(m-n)+1)*2*2;
	for(i=2;i<((m>n)?(n):(m));i++)
		sum+=C(i,2)*2*2*2;
	return sum; 
}
