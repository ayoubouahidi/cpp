#include <iostream>

class Fixed
{
    private:
        int fixed_point;
        static const int store;
    
    public:
        Fixed(int fixed_point, const int store);
        ~Fixed();
        int getRawBits(void);
        void setRawBits(int const raw );
};


