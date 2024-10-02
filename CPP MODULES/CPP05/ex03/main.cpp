/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 21:01:22 by ahussein          #+#    #+#             */
/*   Updated: 2024/03/04 21:04:13 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
  std::string formName = "shrubbery Creation"; 
  std::string formTarget = "Tree";
  Intern intern;
  Bureaucrat bureaucrat("Ayoob", 1);
  AForm *f = intern.makeForm(formName, formTarget);
  std::cout << *f;
  bureaucrat.signForm(*f);
  std::cout << (*f).getSigned() << std::endl;
  bureaucrat.executeForm(*f);
  delete f;
  return 0;
}
