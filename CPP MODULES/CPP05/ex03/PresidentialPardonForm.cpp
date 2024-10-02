/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:07:40 by ahussein          #+#    #+#             */
/*   Updated: 2024/03/04 19:08:10 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target): AForm("PresidentialPardonForm", 25, 5), _target(_target)
{
	std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &object): AForm(object), _target(object.getTarget())
{
	std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
	*this = object;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	std::cout << "PresidentialPardonForm Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
		AForm::operator=(rhs);
	return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned())
	{
		if (executor.getGrade() <= this->getExecGrade())
		{
			std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
		}
		else
			throw GradeTooLowException();
		}
	else
		throw FormNotSignedException();
}
