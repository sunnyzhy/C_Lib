// Console_Lib.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "..\\C_Lib\\Student.h" //����ͷ�ļ�
#pragma comment(lib,"..\\Release\\C_Lib.lib") //���þ�̬���ӿ��ļ�

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

