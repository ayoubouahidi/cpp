#include "Span.hpp"

int main()
{
    try{
        Span sp(10);
        sp.addNumber(60);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.addNumber(8);
        sp.addNumber(16);
        sp.addNumber(200);
        // sp.addNumber(250);

        int longest = sp.longestSpan();
        int shortest = sp.shortestSpan();
        std::cout << "longest : " << longest << std::endl;
        std::cout << "shortest : " << shortest << std::endl;


        std::cout << "              * test of 10 000 number *       " << std::endl;


        Span sp_10k(10000);
        srand(static_cast<unsigned int>(time(NULL)));
        for (int i = 0; i < 10000; i++)
        {
            sp_10k.addNumber(rand());
        }

        int longest_10k = sp_10k.longestSpan();
        int shortest_10k = sp_10k.shortestSpan();
        std::cout << "longest : " << longest_10k << std::endl;
        std::cout << "shortest : " << shortest_10k << std::endl;
        
    }
    catch(std::exception &e)
    {
        std::cout  << e.what() << std::endl;
    }


}