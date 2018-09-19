#include<iostream>
#include<cmath>
int main()
{
	int n;
	int A[10110];
	bool bf = true;
	int res = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> A[i];
	}
	for (int k = 0; k < n; k++)
	{
		bf = true;
		if (A[k] <= 1)
		{
			bf = false;
			continue;
		}
		for (int j = 2; j <= std::sqrt(A[k]); j++)
		{
			if (A[k] % j == 0)
				bf = false;
				continue;
		}
		if(bf)
			res++;
	}
	std::cout << res << std::endl;
}