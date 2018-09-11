#include<iostream>

int main()
{
    int n;
    unsigned int R[200000];
    unsigned int Min=0;
    int res=0;
    int temp=0;
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        std::cin>>R[i];
    }
    res=R[1]-R[0];
    Min =R[0];
    for(int j=1;j<n;j++)
    {
        temp=R[j]-Min;
        if(temp>res)
        {
            res=temp;
        }
         if(Min>R[j])
        {
            Min=R[j];
        }

    }
    std::cout<<res<<std::endl;
}