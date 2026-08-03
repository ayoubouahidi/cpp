#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    // std::vector<int> v1;
    // std::vector<int> v2(10, 90);

    // // for (int x : v2)
    // // {
    //     // std::cout << x << " " << std::endl;
    // // }

    // std::vector<int> v3 {100, 120, 140};

    // // for (int x : v3)
    // // {
    // //     std::cout << x << " " << std::endl;
    // // }
    // std::vector<int>::iterator min = std::min_element(v3.begin(), v3.end());
    // std::cout << "min elements " << *min << std::endl;

    // std::vector<int> v4 {5, 3, 100, 3, 1 ,0};
    // // std::vector<int> sorted(v4);
    // std::vector<int> temp = v4;
    // std::sort(temp.begin(), temp.end());
    // for (int x : temp)
    // {
    //     std::cout << x << " " << std::endl;
    // }


    std::vector<int> v1 {1 , 2 ,3 ,4};
    std::vector<int> v2 {5, 6};
    v1.insert(v1.begin() + 10, v2.begin(), v2.end());
    for (int x : v1)
        std::cout << x << std::endl;
    
}