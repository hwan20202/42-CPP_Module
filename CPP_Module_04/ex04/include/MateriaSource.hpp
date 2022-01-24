#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

class MateriaSource: public IMateriaSource
{
private:
	AMateria	*materias[4];
	int			ptr;

	static const int maxMateriasSize = 4;
public:
	void		learnMateria(AMateria* mat);
	AMateria*	createMateria(std::string const & type);

	MateriaSource(void);
	MateriaSource(MateriaSource const & obj);
	MateriaSource	&operator=(MateriaSource const & obj);
	~MateriaSource(void);
};

#endif