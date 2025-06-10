#include <iostream>
using namespace std;
#include "Identity.h"
#include <fstream>
#include "string"
#include "globalFile.h"

//��¼����   ����1 �����ļ���  ����2 �����������
void LoginIn(string fileName, int type)
{
	//����ָ��,����ָ���������
	Identity* person = NULL;

	//���ļ�
	ifstream ifs;
	ifs.open(fileName, ios::in);

	//�ж��ļ��Ƿ����
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	//׼�������û�����Ϣ
	int id = 0;
	string name;
	string pwd;


	//�ж����
	if (type == 1)	//ѧ�����
	{
		cout << "���������ѧ��: " << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "���������ְ����: " << endl;
		cin >> id;
	}

	cout << "�������û���: " << endl;
	cin >> name;

	cout << "������`����: " << endl;
	cin >> pwd;

	if (type == 1)
	{
		//ѧ�������֤
	}
	else if (type == 2)
	{
		//��ʦ�����֤
	}
	else if (type == 3)
	{
		//����Ա�����֤
	}

	cout << "��֤��¼ʧ��! " << endl;
	system("pause");
	system("cls");

	return;
}

int main()
{
	int select = 0;	//���ڽ����û���ѡ��

	while (true)
	{
		cout << "***********  ��ӭ�����ȿ˻���ԤԼϵͳ  ***************" << endl;

		cout << endl << "�������������" << endl;
		cout << "\t\t ------------------------------------\n" << endl;
		cout << "\t\t|                                     |\n" << endl;
		cout << "\t\t|            1.ѧ������               |\n" << endl;
		cout << "\t\t|                                     |\n" << endl;
		cout << "\t\t|            2.��    ʦ               |\n" << endl;
		cout << "\t\t|                                     |\n" << endl;
		cout << "\t\t|            3.�� �� Ա               |\n" << endl;
		cout << "\t\t|                                     |\n" << endl;
		cout << "\t\t|            0.��    ��               |\n" << endl;
		cout << "\t\t|                                     |\n" << endl;
		cout << "\t\t ------------------------------------\n" << endl;
		cout << "����������ѡ��: ";

		cin >> select;	//�����û�ѡ��

		switch (select)	//�����û�ѡ�� ʵ�ֲ�ͬ�ӿ�
		{
		case 1:	//ѧ�����
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2:	//��ʦ���
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3:	//����Ա
			LoginIn(ADMIN_FILE, 3);
			break;
		case 0:	//�˳�ϵͳ
			cout << "��ӭ��һ��ʹ��";
			system("pause");
			return 0;
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}

	}

	

	system("pause");
	return 0;
}