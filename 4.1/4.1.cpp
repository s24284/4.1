﻿// 4.1.cpp : 
//

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int rozmiartablicy;
  
    
    
    std::cout << "Stworze dla ciebie tablice liczb calkowitych. Podaj liczbe elementow, z ktorych ma sie skladac:\n";
    std::cin >> rozmiartablicy;

    std::vector<int> tabliczka (rozmiartablicy);
   
    for (int i = 0; i < rozmiartablicy; i++)
    {
        std::cout << "Podaj mi " << i + 1 << " liczbe, ktora trafi do tablicy:\n";
        std::cin >> tabliczka[i];

    }
    int max = tabliczka[0]; 

    for (int i = 1; i < rozmiartablicy; i++) 
    {
        if (max < tabliczka[i])
            max = tabliczka[i];    
    }
   std::cout << "Najwieksza liczba jest " << max << "\n";

    return 0;
}

