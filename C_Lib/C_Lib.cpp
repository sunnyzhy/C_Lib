// C_Lib.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "Student.h"

Student::Student(char *name):name(name)
{}

Student::~Student()
{}

void Student::Print()
{
	cout<<"called print:"<<this->name<<endl;
}