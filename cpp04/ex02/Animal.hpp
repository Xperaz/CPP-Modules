#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:
		Animal();
		Animal( Animal const & src );
		virtual	~Animal();
		std::string getType() const;
		void	setType(std::string	type);
		virtual void	makeSound() const = 0;

		Animal &		operator=( Animal const & rhs );

	protected:
		std::string	type;

};


#endif /* ********************************************************** ANIMAL_H */