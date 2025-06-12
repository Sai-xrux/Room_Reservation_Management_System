#pragma once
#include "manager.h"

//Ĭ�Ϲ���
Manager::Manager()
{

}

//�вι���
Manager::Manager(string name, string pwd)
{
	//��ʼ������Ա��Ϣ
	this->m_Name = name;
	this->m_Pwd = pwd;
}

//�˵�����
void Manager::operMenu()
{
	cout << "��ӭ����Ա: " << this->m_Name << "��¼!" << endl;
	cout << "\t\t ------------------------------------\n" << endl;
	cout << "\t\t|                                     |\n" << endl;
	cout << "\t\t|            1.����˺�               |\n" << endl;
	cout << "\t\t|                                     |\n" << endl;
	cout << "\t\t|            2.�鿴�˺�               |\n" << endl;
	cout << "\t\t|                                     |\n" << endl;
	cout << "\t\t|            3.�鿴����               |\n" << endl;
	cout << "\t\t|                                     |\n" << endl;
	cout << "\t\t|            4.���ԤԼ               |\n" << endl;
	cout << "\t\t|                                     |\n" << endl;
	cout << "\t\t|            0.ע����¼               |\n" << endl;
	cout << "\t\t|                                     |\n" << endl;
	cout << "\t\t ------------------------------------\n" << endl;
	cout << "��ѡ�����Ĳ���: ";
}

//����˺�
void Manager::addPerson()
{
	cout << "����������˺�����" << endl;
	cout << "1�����ѧ��" << endl;
	cout << "2�������ʦ" << endl;

	string fileName;	//�����ļ���
	string tip;		//��ʾid��

	ofstream ofs;	//�ļ���������

	int select = 0;
	cin >> select;	//�����û���ѡ��

	if (select == 1)
	{
		//��ӵ���ѧ��
		fileName = STUDENT_FILE;
		tip = "������ѧ��: ";
	}
	else
	{
		fileName = TEACHER_FILE;
		tip = "������ְ�����: ";
	}

	//����׷�ӵķ�ʽ д�ļ�
	ofs.open(fileName, ios::out | ios::app);

	int id;	//ѧ��/ְ����
	string name; //����
	string pwd;	//����

	cout << tip << endl;
	cin >> id;

	cout << "����������: " << endl;
	cin >> name;

	cout << "����������: " << endl;
	cin >> pwd;

	//���ļ����������
	ofs << id << " " << name << " " << pwd << " " << endl;
	cout << "��ӳɹ�!" << endl;

	system("pause");
	system("cls");

	ofs.close();

}

//�鿴�˺�
void Manager::showPerson()
{

}

//�鿴������Ϣ
void Manager::showComputer()
{

}

//���ԤԼ��¼
void Manager::cleanFile()
{

}