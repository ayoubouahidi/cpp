#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1;
    std::vector<int> v2(10, 90);

    // for (int x : v2)
    // {
        // std::cout << x << " " << std::endl;
    // }

    std::vector<int> v3 {100, 120, 140};

    for (int x : v3)
    {
        std::cout << x << " " << std::endl;
    }

    
}