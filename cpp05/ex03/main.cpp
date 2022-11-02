/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:47:48 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/02 14:37:57 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        delete rrf;
    }
    std::cout << "----------------------------------------" << std::endl;
    
    {
        Intern intern2;
        Form* scf;
        scf = intern2.makeForm("shrubbery creation", "jdnk");
        delete scf;
    }

   std::cout << "----------------------------------------" << std::endl;
    {
        Intern intern3;
        Form* ppf;
        ppf = intern3.makeForm("presidential pardon", "hdhhdh");
        delete ppf;
    }
    system("leaks coffee-making");
    return (0);
}
