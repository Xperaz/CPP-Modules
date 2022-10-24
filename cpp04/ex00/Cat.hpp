#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		void	makeSound() const;
		~Cat();

		Cat &		operator=( Cat const & rhs );

	private:

};


#endif /* ************************************************************* CAT_H */