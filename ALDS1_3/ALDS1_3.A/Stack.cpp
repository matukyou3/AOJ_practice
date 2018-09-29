#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
class MyStack
{
	int S[1000] = { 0 };
	int top = 0;

public:
	int pop()
	{
		top = top - 1;
		return S[top+1];
	}
	void push(int x)
	{
		top = top + 1;
		S[top] = x;		
	}
	void display() {
		for (int i = top; i > 0; i--)
			std::cout << S[i] << std::endl;
	}
};
int main()
{
	MyStack Stack;
	int a, b;
	char s[1000];

	while (scanf("%s",s)!=EOF)
	{
		if (s[0] == '+')
		{
			a = Stack.pop();
			b = Stack.pop();
			Stack.push(a + b);
		}
		else if (s[0] == '-')
		{
			a = Stack.pop();
			b = Stack.pop();
			Stack.push(b - a);
		}
		else if (s[0] == '*')
		{
			a = Stack.pop();
			b = Stack.pop();
			Stack.push(a*b);
		}
		else if (s[0] == 'c')
			break;
		else if (s[0] == 'd')
			Stack.display();
		else
		{
			Stack.push(atoi(s));
		}
	}
	std::cout << Stack.pop() << std::endl;
	return 0;

}