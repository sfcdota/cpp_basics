#include "Form.hpp"

Form::Form(std::string const & name, int grade_to_sign, int grade_to_exec)
	: name(name), grade_to_sign(grade_to_sign), grade_to_exec(grade_to_exec)
{
	is_signed = false;
	if (grade_to_exec < 1 || grade_to_sign < 1)
		throw Form::GradeTooHighException();
	if (grade_to_exec > 150 || grade_to_sign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & in): name(in.getName()), grade_to_sign(in.getGradeToSign()),
	grade_to_exec(in.getGradeToExec())
{
	is_signed = in.getIsSigned();
	if (grade_to_exec < 1 || grade_to_sign < 1)
		throw Form::GradeTooHighException();
	if (grade_to_exec > 150 || grade_to_sign > 150)
		throw Form::GradeTooLowException();
}

Form const & Form::operator=(Form const & in)
{
	if (&in == this)
		return *this;
	this->is_signed = in.getIsSigned();
	return *this;
}

Form::~Form()
{

}

std::string const & Form::getName(void) const
{
	return name;
}

bool Form::getIsSigned(void) const
{
	return is_signed;
}

int Form::getGradeToSign(void) const
{
	return grade_to_sign;
}

int Form::getGradeToExec(void) const
{
	return grade_to_exec;
}

void Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > grade_to_sign)
		throw Form::GradeTooLowException();
	is_signed = true;
}

std::ostream & operator<<(std::ostream & os, Form const & form)
{
	os << form.getName() << ", form grade to sign " << form.getGradeToSign()
	<< " , form grade to exec " << form.getGradeToExec() << ", form is signed status "
	<< form.getIsSigned() << std::endl;
	return os;
}
