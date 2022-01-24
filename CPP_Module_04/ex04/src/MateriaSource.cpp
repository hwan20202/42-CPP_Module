#include "MateriaSource.hpp"
#include <iostream>

void		MateriaSource::learnMateria(AMateria* mat) {
	if (ptr >= maxMateriasSize) {
		std::cout << "MateriaSource is full" << std::endl;
	} else {
		std::cout << "MateriaSource learn <<" << mat->getType() << ">> and store "
		<< ptr << "'s" << std::endl;
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
	std::cout << "MateriaSource don't have type <" << type << ">" << std::endl;
	return 0;
}

MateriaSource::MateriaSource(void) {
	std::cout << "MateriaSource default constructor called" << std::endl;
	memset(materias, 0, sizeof(AMateria*) * 4);
	ptr = 0;
}

MateriaSource::MateriaSource(MateriaSource const & obj) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = obj;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const & obj) {
	std::cout << "MateriaSource assignation operator called" << std::endl;
	if (this != &obj) {
		//deep copy AMateria*[];
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (materias[i])
			delete materias[i];
	}
}
