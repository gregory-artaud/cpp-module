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

	private:
		int fixed_point;
		static const int nb_fractionnals = 8;

};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif /* *********************************************************** FIXED_H */
