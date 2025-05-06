#pragma once
#include "Initializer.h"

// function class
class Manager
{
public:
	Student* findBestStudents(Student* list, int count, int& bestCount);
	Student* findWorstStudents(Student* list, int count, int& worstCount);

};

