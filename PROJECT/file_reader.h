#pragma once
#ifndef FILE_READER
#define FILE_READER
#include "Stuct.h"
#include <fstream>
std::fstream in("data.txt");
Data insertData()
{
	Data data;
	in >> data.Number;
	in >> data.First_name;
	in >> data.Second_name;
	in >> data.Third_name;
	in >> data.start;
	in >> data.finish;
	in >> data.club;
	return data;
}

#endif
