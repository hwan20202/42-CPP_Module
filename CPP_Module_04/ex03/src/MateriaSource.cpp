#include "MateriaSource.hpp"
#include <iostream>

#define GRN	"\e[0;32m"
#define RED	"\033[31m"
#define NC	"\e[0m"

void		MateriaSource::learnMateria(AMateria* mat) {
	if (ptr >= maxMateriasSize) {
		std::cout << RED << "MateriaSource is full" << NC << std::endl;
	} else {
		std::cout << GRN << "MateriaSource learn <<" << mat->getType() << ">> and store "
		<< ptr << "'s" << NC << std::endl;
		materias[ptr] = mat;
		ptr++;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int idx = 0; idx < ptr && idx < maxMateriasSize; idx++) {
		if (materias[idx]->getType() == type) {
			return materias[idx]->clone();
		}
	}
	std::cout << RED << "MateriaSource doesn't have type <" << type << ">" << NC << std::endl;
	return 0;
}

MateriaSource::MateriaSource(void) {
	std::cout << "MateriaSource default constructor called" << std::endl;
	memset(materias, 0, sizeof(AMateria*) * maxMateriasSize);
	ptr = 0;
}

MateriaSource::MateriaSource(MateriaSource const & obj) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = obj;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const & obj) {
	std::cout << "MateriaSource assignation operator called" << std::endl;
	if (this != &obj) {
		ptr = obj.ptr;
		for (int idx = 0; idx < ptr; idx++) {
			materias[idx] = (obj.materias)[idx]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < maxMateriasSize; i++) {
		if (materias[i])
			delete materias[i];
	}
}
