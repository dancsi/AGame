#pragma once

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include "Wall.h"

class Configuration
{
public:
	Configuration(std::string);
	const Wall &operator[](int);
	int size() const { return walls.size(); }
	
private:
	std::vector<Wall> walls;
};
