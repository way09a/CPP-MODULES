/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:44:32 by Ahussein          #+#    #+#             */
/*   Updated: 2024/03/06 19:21:58 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		const std::string	Name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;

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
		Form();
		Form(std::string name, int _signGrade, int _execGrade);
		Form(Form const &object);
		Form & operator=(Form const &rhs);
		~Form();
		std::string	getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		void		beSigned(Bureaucrat const &rhs);
		
};

std::ostream &operator<<(std::ostream &out, Form const &rhs);

#endif