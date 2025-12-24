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
        Fixed(const Fixed& other);
        int   toInt( void ) const;
        float toFloat( void ) const;
        Fixed& operator=(const Fixed& other);
        bool operator>(const Fixed& other) const;
        bool operator<(const Fixed& other) const;
        bool operator==(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        Fixed operator*(const Fixed& Other) const;
        Fixed operator/(const Fixed& Other) const;
        static Fixed& min(Fixed& a, Fixed& b);
        const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        Fixed operator+(const Fixed& other) const;
        Fixed operator-(const Fixed& other) const;
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw );
};


