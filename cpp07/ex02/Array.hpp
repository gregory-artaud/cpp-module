#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	public:
		Array(void)
		{
			this->_size = 0;
			this->_array = NULL;
		}

		Array(unsigned int n)
		{
			this->_size = n;
			this->_array = new T[n];
		}

		Array(Array const & src)
		{
			*this = src;
		}

		~Array(void)
		{
			delete [] this->_array;
		}

		Array & operator=(Array const & rhs)
		{
			if (this == &rhs)
				return (*this);
			this->_size = rhs._size;
/* 			if (this->_array)
				delete [] this->_array; */
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
			return (*this);
		}

		T & operator[](unsigned int n)
		{
			if (n >= this->_size || n < 0)
				throw std::exception();
			return (this->_array[n]);
		}

		T const & operator[](unsigned int n) const
		{
			if (n >= this->_size || n < 0)
				throw std::exception();
			return (this->_array[n]);
		}

		unsigned int size(void) const
		{
			return (this->_size);
		}

	private:
		T *_array;
		unsigned int _size;
};

#endif