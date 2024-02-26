#include <iostream>

int main()
{
    int n;
    std::cin>>n;
    for (int i = 0; i <= 100; ++i)
    {
        std::cout<<i*n<<'\n';
    }
}