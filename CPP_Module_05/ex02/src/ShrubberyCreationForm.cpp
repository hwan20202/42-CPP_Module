#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

/************************************************/
/*						OCCF					*/
/************************************************/

ShrubberyCreationForm::ShrubberyCreationForm(void)
	:	Form("ShrubberyCreationForm", 145, 137), mTarget("") {
		std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & rhs)
	:	Form("ShrubberyCreationForm", 145, 137), mTarget("") {
		std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
		*this = rhs;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	std::cout << "ShrubberyCreationForm assignation operator called" << std::endl;
	if (this != &rhs) {
		(std::string)mTarget = rhs.mTarget;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

/************************************************/
/*						others					*/
/************************************************/

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target)
	:	Form("ShrubberyCreationForm", 145, 137), mTarget(target) {
		std::cout << "ShrubberyCreationForm standard constructor called" << std::endl;
}

void		ShrubberyCreationForm::action(void) const {
	std::ofstream	ofs;

	ofs.open(mTarget + "_shrubbery");
	if (!ofs.is_open()) {
		throw FileOpenFailed();
	}

	ofs << "       ,.," << std::endl
		<< "      MMMM_    ,..," << std::endl
		<< "        \"_ \"__\"MMMMM          ,...,," << std::endl
		<< " ,..., __.\" --\"    ,.,     _-\"MMMMMMM" << std::endl
		<< "MMMMMM\"___ \"_._   MMM\"_.\"\" _ """"""" << std::endl
		<< " \"\"\"\"\"    \"\" , \\_.   \"_. .\"" << std::endl
		<< "        ,., _\"__ \\__./ .\"" << std::endl
		<< "       MMMMM_\"  \"_    ./" << std::endl
		<< "        ''''      (    )" << std::endl
		<< " ._______________.-'____\"---._." << std::endl
		<< "  \\                          /" << std::endl
		<< "   \\________________________/" << std::endl
		<< "   (_)                    (_)" << std::endl
		<< "   Corwyn Yasuo Miyagishima" << std::endl;
	std::cout << "Shrubbery at " << mTarget << std::endl;
}
