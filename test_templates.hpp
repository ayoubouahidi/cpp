#include <iostream>


template <typename T> class Box{
    private:
        T x;
        T y;
    public:
        Box(T v1 , T v2);
        void getValue();
};