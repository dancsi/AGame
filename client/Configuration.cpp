#include "Configuration.h"

/// Format configuration fajla:
///		svaki red predstavlja 1 zid:
///		x y w h is_dangerous
///		(is_dangerous je + ili -)
///		poslednji red ima w = h = 0
Configuration::Configuration(std::string fileName)
{
	std::ifstream fs(fileName);
	if(!fs.good())
	{
		std::cerr << "Error: cannot open file " << fileName << std::endl;
		return;
	}
	while(!fs.eof())
	{
		double x, y, w, h;
		char d;
		fs >> x >> y >> w >> h >> d;
		if(w == 0 && h == 0) break;
		walls.push_back(Wall(x, y, w, h, d == '+'));
	}
}

const Wall &Configuration::operator[](int i)
{
	if(i >= size() || i < 0)
	{
		std::cerr << "Warning: tried to access nonexistent configuration member at position " << i << std::endl;
		return walls[0]; // ako ne postoji, crash
	}
	return walls[i];
}