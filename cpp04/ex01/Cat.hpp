#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		void	makeSound() const;
		~Cat();

		Cat &		operator=( Cat const & rhs );

	private:
		Brain	*br;

};


#endif /* ************************************************************* CAT_H */