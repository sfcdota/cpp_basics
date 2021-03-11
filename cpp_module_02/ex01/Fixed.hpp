#ifndef _FIXED_HPP_
#define _FIXED_HPP_
#include <iostream>

class Fixed {
 public:
  Fixed();
  Fixed(Fixed const &f);
  Fixed& operator=(Fixed const &f);
  int getRawBits( void ) const;
  void setRawBits( int const raw );
  Fixed(const int in);
  Fixed(const float in);
  float toFloat( void ) const;
  int toInt( void ) const;
  ~Fixed();
 private:
  int fixed_point_value_;
  static const int bits_ = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed &f);
#endif

