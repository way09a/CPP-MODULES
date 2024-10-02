/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:24:38 by Ahussein          #+#    #+#             */
/*   Updated: 2024/03/06 19:45:29 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void)
{
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(void *name, int Grade) {
    std::cout << "Bureaucrat constructor called" << std::endl;
	(void)name;
	(void)Grade;
};

Bureaucrat::Bureaucrat(std::string name, int grade): Name(name), Grade(grade)
{
	std::cout << "Bureaucrat Name Constructor called" << std::endl;
    if (Name != "")
    {
        try
        {
            if (grade > 150)
                throw Bureaucrat::GradeTooLowException();
            else if (grade < 1)
                throw Bureaucrat::GradeTooHighException();
            else
                this->Grade = grade;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else 
        std::cerr << "Error: Bureacrat must have a name" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &object)
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	*this = object;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
	std::cout << "Bureaucrat Copy Assignment Operator = called" << std::endl;
	if (this != &rhs)
	{
		const_cast<std::string&>(this->Name) = rhs.getName();
		this->Grade = rhs.getGrade();
	}
	return (*this);
}


Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

int	Bureaucrat::getGrade() const
{
	return (this->Grade);
}

std::string Bureaucrat::getName() const
{
	return (this->Name);
}

void	Bureaucrat::gradeDecreament()
{
    if (Name != "")
    {
        try
        {
            if (this->Grade > 150)
                throw Bureaucrat::GradeTooLowException();
            else if (this->Grade < 1)
                throw Bureaucrat::GradeTooHighException();
            else
                this->Grade++;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else
    {
        std::cerr << "Error: Bureacrat must have a name" << std::endl;
    }
	
}

void	Bureaucrat::gradeIncreament()
{
    if (Name != "")
    {
        try
        {
            if (this->Grade > 150)
                throw Bureaucrat::GradeTooLowException();
            else if (this->Grade < 1)
                throw Bureaucrat::GradeTooHighException();
            else
                this->Grade--;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    else
    {
        std::cerr << "Error: Bureacrat must have a name" << std::endl;
    }
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Bureaucrat grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Bureaucrat grade is too Low!");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs)
{
	std::cout << "Bureaucrat Copy Assignment Operator << called" << std::endl;
    if (rhs.getName() != "")
    {
        try
        {
            if (rhs.getGrade() > 150)
                throw std::exception();
            else if (rhs.getGrade() < 1)
                throw std::exception();
            else
                out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
            
        }
        catch(const std::exception& e)
        {
            std::cerr << "Grade Not In Range" << std::endl;
        }
    }
    else
    {
        out << "Error: Bureacrat must have a name" << std::endl;
    }
	return (out);
}