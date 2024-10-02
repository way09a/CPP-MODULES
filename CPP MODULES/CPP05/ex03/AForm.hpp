/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:44:32 by Ahussein          #+#    #+#             */
/*   Updated: 2024/03/06 19:21:58 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	private:
		const std::string	Name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;
		
	protected:
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
		class FormNotSignedException : public std::exception
		{
			public:
				const char *what() const throw();
		};
 
		
	public:
		AForm();
		AForm(std::string name, int _signGrade, int _execGrade);
		AForm(AForm const &object);
		AForm & operator=(AForm const &rhs);
		virtual ~AForm() = 0;
		std::string	getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		void		beSigned(Bureaucrat const &rhs);
		virtual void		execute(Bureaucrat const &executor) const = 0;
		
};

std::ostream &operator<<(std::ostream &out, AForm const &rhs);

#endif