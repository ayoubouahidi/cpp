#include "Array.hpp"

int main(){

    try
    {
        Array<int> arr_0(3);
        arr_0[0] = 1;
        arr_0[1] = 2;
        arr_0[2] = 3;
        std::cout << arr_0[0] << std::endl;
        

        Array<std::string> arr_1(3);
        arr_1[0] = "ayoub";
        std::cout << arr_1[0] << std::endl;
    
        // arr_1[3] = "24ans"; // exception  

        Array<int> arr_2 = arr_0;
        std::cout << "this is arr_2 " << arr_2[1] << std::endl;

        Array<int> arr_3(arr_2);
        std::cout << "this is arr_3 " << arr_3[1] << std::endl;

        std::cout << "total arr_0 : " << arr_1.size() <<  std::endl;

        int * a = new int();
        std::cout << a << std::endl;
    }catch(const std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    
}