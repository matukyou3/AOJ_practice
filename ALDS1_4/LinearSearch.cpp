#include<iostream>

int main()
{
	int n;
	int S[10010];
	int q;
	int T[510];
	int res =0;
	std::cin>>n;
	for(int i=0;i<n;++i)
	{
		std::cin>>S[i];
	}
	std::cin>>q;
	for(int i=0;i<q;++i)
	{
		std::cin>>T[i];
	}
	for(int i=0;i<q;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(T[i]==S[j])
			{
				res =res +1;
				break;
			}
		}
	}
	std::cout<<res<<std::endl;
	return 0;

}
