#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

#define DLL_EXPORT _declspec(dllexport)

class DLL_EXPORT Student
{
public:
	Student(char *name);
	void Print();
	~Student();
public:
	char *name;
};