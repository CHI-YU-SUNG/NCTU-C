#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1(3,1);
	for(int i=0;i<3;i++)
		v1[i]=i;
	for(int i=0;i<v1.size();i++)
		printf("%2d",v1[i]);
	printf("\n");
	printf("%2d\n",v1.operator[](2));
	printf("%2d\n",v1.empty());
	vector<int> v2(4);
	printf("%2d\n",v2.empty());
	vector<int> v3;
	printf("%2d\n",v3.empty());
	v1.pop_back();
	for(int i=0;i<v1.size();i++)
		printf("%2d",v1[i]);
	printf("%2d",v2.max_size());
	return 0;
}
