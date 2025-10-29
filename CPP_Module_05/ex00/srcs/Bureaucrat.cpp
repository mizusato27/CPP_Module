#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(LOWEST_GRADE)
{
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < HIGHEST_GRADE)
		throw GradeTooHighException();
	if (this->_grade > LOWEST_GRADE)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		// _name is const, so we don't assign it
		this->_grade = other._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade <= HIGHEST_GRADE)
		throw GradeTooHighException();
	--(this->_grade);
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade >= LOWEST_GRADE)
		throw GradeTooLowException();
	++(this->_grade);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error: Grade is too high!";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error: Grade is too low!";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return os;
}
