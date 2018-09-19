#include <iostream>

int main()
{	
	int N;
	int A[110];
	int res = 0;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		std::cin >> A[i];
	}
	for (int j = 0; j < N - 1; j++)
	{
		int minj = j;
		for (int k = j; k < N; k++)
		{
			if (A[k] < A[minj])
			{
				minj = k;
			}
		}
		int temp = A[j];
		A[j] = A[minj];
		A[minj] = temp;
		if (j != minj) {
			res++;
		}
	}
	//std::cout << res << std::endl;
	for (int l = 0; l < N; l++)
	{
		if (l > 0) std::cout << " ";
		std::cout << A[l];
	}
	std::cout << std::endl;
	std::cout << res << std::endl;
}