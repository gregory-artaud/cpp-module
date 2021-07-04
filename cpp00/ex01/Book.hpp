#ifndef BOOK_HPP
# define BOOK_HPP

# include <iostream>
# include "Contact.hpp"
# define SEARCH_HEADER "     Index|First name| Last name|  Nickname"
# define MAX_CONTACT_NUMBER 8
class Book
{
	private:
		Contact	contacts[MAX_CONTACT_NUMBER];
		int		no_contacts;

	public:	
		Book(void);
		virtual ~Book(void);
		void	add_contact(void);
		void	search_contact(void);
};

#endif
