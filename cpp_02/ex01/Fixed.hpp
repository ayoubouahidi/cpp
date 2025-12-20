#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int fixed_point;
        static const int fraction = 8;
    
    public:
        Fixed();
        Fixed(const int fixed_point);
        Fixed(const float fixed_point);
        Fixed(Fixed& other);
        int   toInt( void ) const;
        float toFloat( void ) const;
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        int getRawBits(void);
        void setRawBits(int const raw );
};


