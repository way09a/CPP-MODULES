/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:59:51 by ahussein          #+#    #+#             */
/*   Updated: 2024/03/06 19:21:58 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): Name(""), _isSigned(false), _signGrade(0), _execGrade(0) 
{
	std::cout << "AForm Default Constructor called" << std::endl;
}

AForm::AForm(std::string name, int _signGrade, int _execGrade):
	Name(name), _isSigned(false), _signGrade(_signGrade),
	_execGrade(_execGrade)
{
	std::cout << "AForm Name Constructor called" << std::endl;
	if (Name != "")
    {
        try
        {
            if (this->_execGrade > 150 || this->_signGrade > 150)
                throw AForm::GradeTooLowException();
            else if (this->_execGrade < 1 || this->_signGrade < 1)
                throw AForm::GradeTooHighException();			
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else
    {
        std::cerr << "Error: Name not provided for the form." << std::endl;
    }
}

AForm::AForm(AForm const &object):
	Name(object.Name), _isSigned(object._isSigned),
	_signGrade(object._signGrade), _execGrade(object._execGrade)
{
	std::cout << "AForm Copy Constructor called" << std::endl;
}

AForm & AForm::operator=(AForm const &rhs)
{
	std::cout << "AForm Copy Assignment Operator = called" << std::endl;
	if (this != &rhs)
	{
		const_cast<std::string&>(this->Name) = rhs.getName();
		const_cast<int&>(this->_signGrade) = rhs.getSignGrade();
		const_cast<int&>(this->_execGrade) = rhs.getExecGrade();
		this->_isSigned= rhs.getSigned();
	}
	return(*this);
}


AForm::~AForm()
{
	std::cout << "AForm Destructor called" << std::endl;
}

void	AForm::beSigned(Bureaucrat const &rhs)
{
	if (Name != "")
    {
        if (rhs.getGrade() <= this->_signGrade)
            this->_isSigned = true;
        else
            throw AForm::GradeTooLowException();
    }
    else
    {
        std::cerr << "Error: Form cannot be signed as the form doesn't have a name!" << std::endl;
    }
}

bool	AForm::getSigned() const
{
	return (this->_isSigned);
}

int	AForm::getSignGrade() const
{
	return (this->_signGrade);
}

int	AForm::getExecGrade() const
{
	return (this->_execGrade);
}

std::string AForm::getName() const
{
	return (this->Name);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return("Grade Too High");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return("Grade Too Low");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("Form not signed");
}

std::ostream &operator<<(std::ostream &out, AForm const &rhs)
{
    if (rhs.getName() != "")
    {
        std::cout << "AForm Copy Assignment Operator << called" << std::endl;
        out << "AForm name: " << rhs.getName() << std::endl;
        out << "Grade to sign: " << rhs.getSignGrade() << std::endl;
        out << "Grade to execute: " << rhs.getExecGrade() << std::endl;
        out << "Signed: " << rhs.getSigned() << std::endl;
    }
    else
    {
        out << "Error: Can't print details. Name not provided for the form." << std::endl;
    }
	return (out);
}