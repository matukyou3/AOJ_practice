#include<iostream>
#include<vector>
#include<algorithm>

int binarySearch(int *S,int size, int key)
{
	int left =0;
	int right =size;
	while(left <right)
	{
		int mid = (left + right) /2;
		if(*(S+mid) == key)
		{
			
			return 1;
		}
		else if(key < *(S+mid))
		{
			right =mid;
		}
		else left =mid +1;
	}
	return 0;


}
int main()
{
	int n, q;
	int S[100010];
	int k;
	int res=0;
	std::cin>>n;
	for(int i=0;i<n;++i)
	{
		std::cin>>S[i];
	}
	std::sort(S, S+n);
	std::cin>>q;
	for(int i=0;i<q;++i)
	{
		std::cin>>k;
		res = res + binarySearch(S, n, k);
	}
	std::cout<<res<<std::endl;
}
