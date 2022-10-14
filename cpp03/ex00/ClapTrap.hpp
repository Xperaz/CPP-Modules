#ifndef CLPTRAP_HPP
# define CLPTRAP_HPP

# include <iostream>
# include <string>

class ClpTrap
{

	public:

		ClpTrap();
		ClpTrap( ClpTrap const & src );
		~ClpTrap();

		ClpTrap &		operator=( ClpTrap const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, ClpTrap const & i );

#endif /* ********************************************************* CLPTRAP_H */