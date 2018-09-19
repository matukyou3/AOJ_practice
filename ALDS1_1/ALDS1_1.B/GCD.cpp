#include<iostream>

int my_gcd(int x, int y)
{
    if(x < y)
    {
        int temp = x;
        x =y;
        y =temp;
    }
    while(y > 0)
    {
        int r = x % y;
        x =y;
        y =r;
    }
    return x;
}
int main()
{
    int x, y;
    std::cin>>x>>y;
    std::cout<<my_gcd(x,y)<<std::endl;
}