// Console_Lib.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "..\\C_Lib\\Student.h" //引用头文件
#pragma comment(lib,"..\\Release\\C_Lib.lib") //引用静态链接库文件

int _tmain(int argc, _TCHAR* argv[])
{
	char name[20];
	cin>>name;
	Student *stu=new Student(name);
	stu->Print();
	delete stu;

	system("PAUSE");
	return 0;
}

