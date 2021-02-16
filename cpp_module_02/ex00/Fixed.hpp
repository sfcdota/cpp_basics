#ifndef _FIXED_HPP_
#define _FIXED_HPP_

class Fixed {
 public:
  Fixed();
  Fixed(Fixed &f);
  Fixed operator = (Fixed const &f);
  int getRawBits( void ) const;
  void setRawBits( int const raw );
  ~Fixed();
 private:
  int fixed_point_value;
  static const int bits = 8;
};
#endif
