// #include "Array.hpp"

// int main(){

//     try
//     {
//         Array<int> arr_0(3);
//         arr_0[0] = 1;
//         arr_0[1] = 2;
//         arr_0[2] = 3;
//         std::cout << arr_0[0] << std::endl;
        

//         Array<std::string> arr_1(3);
//         arr_1[0] = "ayoub";
//         std::cout << arr_1[0] << std::endl;
    
//         // arr_1[3] = "24ans"; // exception  

//         Array<int> arr_2 = arr_0;
//         std::cout << "this is arr_2 " << arr_2[1] << std::endl;

//         Array<int> arr_3(arr_2);
//         std::cout << "this is arr_3 " << arr_3[1] << std::endl;

//         std::cout << "total arr_0 : " << arr_1.size() <<  std::endl;

//         int * a = new int();
//         std::cout << a << std::endl;
//     }catch(const std::exception &e){
//         std::cerr << e.what() << std::endl;
//     }
    
// }

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}