#include <iostream>

class Fixed
{
    private:
        int fixed_point;
        static const int fraction = 8;
    
    public:
        Fixed(int fixed_point);
        Fixed(Fixed& other);
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        int getRawBits(void);
        void setRawBits(int const raw );
};


