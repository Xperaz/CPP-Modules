#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal();

		std::string getType() const;
		void	setType(std::string	type);
		virtual void	makeSound() const;

		WrongAnimal &		operator=( WrongAnimal const & rhs );

	protected:
		std::string	type;


};

#endif /* **************************************************** WRONGANIMAl_H */