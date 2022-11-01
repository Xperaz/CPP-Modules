/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:47:48 by aouhadou          #+#    #+#             */
/*   Updated: 2022/11/01 20:07:41 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
    {
        try {
                Bureaucrat  br(15, "br_one");
                ShrubberyCreationForm p("Shrubbery");
                br.signForm(p);
                br.executeForm(p);
        }
        catch (const std::exception& myCustomException) {
            std::cout << myCustomException.what() << std::endl;
        }
    }
    
    std::cout << "---------------------------------------------" << std::endl;

    {
        try {
        Bureaucrat  br(45, "br_two");
        RobotomyRequestForm p("Robotomy");
        br.signForm(p);
        br.executeForm(p);
        }
        catch (const std::exception& myCustomException) {
            std::cout << myCustomException.what() << std::endl;
        }
    }
    
    std::cout << "---------------------------------------------" << std::endl;
    
    {
        try {
        Bureaucrat  br(5, "br_three");
        PresidentialPardonForm p("Presidential");
        br.signForm(p);
        br.executeForm(p);
        }
        catch (const std::exception& myCustomException) {
            std::cout << myCustomException.what() << std::endl;
        }
    }
    
    return (0);
}
