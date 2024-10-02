/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:44:08 by Ahussein          #+#    #+#             */
/*   Updated: 2024/03/06 19:51:20 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
# include "AForm.hpp"

class AForm;
class Bureaucrat
{
	private:
		const std::string Name;
		int			Grade;
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		
	public:
		Bureaucrat();
		Bureaucrat(void *name, int Grade);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &object);
		Bureaucrat & operator=(Bureaucrat const &rhs);
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade() const;
		void		gradeIncreament();
		void		gradeDecreament();
		void		signForm(AForm &form);
		void		executeForm(AForm const &Aform);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs);

#endif