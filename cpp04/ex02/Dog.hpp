#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		void	makeSound() const;
		~Dog();

		Dog &		operator=( Dog const & rhs );

	private:
		Brain	*br;

};


#endif /* ************************************************************* DOG_H */