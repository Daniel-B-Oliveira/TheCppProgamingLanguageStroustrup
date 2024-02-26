#include <iostream>
#include <math.h>
#include <algorithm>

int main()
{
    int n_in;
    std::cin >> n_in;
    
    int len_arr = std::pow(n_in, 2);
    int number_arr[len_arr];                // Cria uma lista com n x n elementos

    int c = 0;
    for (int i=0; i < n_in; i++)
    {
        for (int j=0; j < n_in; j++,c++)
        {
            number_arr[c] = std::pow(2,i)*std::pow(5,int(j));
        } 
    }

    std::sort(number_arr, number_arr + len_arr);

    for (int i=0; i<len_arr; ++i)
    {
        std::cout<<number_arr[i]<<'\n';
    }

    
}
