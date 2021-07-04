#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
	private:
		std::string	last_name;
		std::string	first_name;
		std::string	nickname;
		std::string	phone;
		std::string	secret;

	public:
		Contact(void);
		virtual ~Contact(void);
		void	fill_informations(void);
		void	print_header_infos(int index);
		void	print_full_infos(void);
};

#endif
