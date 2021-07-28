#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & src );
		Fixed( int const n );
		Fixed( float const f );
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;

		Fixed &		operator=( Fixed const & rhs );

		bool operator>(Fixed const &operand) const;
		bool operator<(Fixed const &operand) const;
		bool operator>=(Fixed const &operand) const;
		bool operator<=(Fixed const &operand) const;
		bool operator==(Fixed const &operand) const;
		bool operator!=(Fixed const &operand) const;

		Fixed operator+(Fixed const &operand);
		Fixed operator-(Fixed const &operand);
		Fixed operator*(Fixed const &operand);
		Fixed operator/(Fixed const &operand);

		Fixed operator++(int);
		Fixed operator++();
		Fixed operator--(int);
		Fixed operator--();

		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);

	private:
		int fixed_point;
		static const int nb_fractionnals = 8;

};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif /* *********************************************************** FIXED_H */
