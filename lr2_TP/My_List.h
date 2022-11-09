#pragma once
#include "Price.h"
using namespace std;

typedef struct Elem
{
	Price* m_data;
	Elem* next;
	Elem* prev;
} Elem;

class My_List //���������� ������
{
private:
	int m_size = 0;
	Elem* head = NULL;
	Elem* tail = NULL;

public:
	My_List();
	My_List(int size);
	~My_List();

	Price* operator[] (int index);

	int get_size();
	void insert(Price* n_data); //�������� ������� � ������ ������ - ������������� ��������
	void insert(int index); //������� ������� �� ������ - ������������� ��������
	void sort(); //����������� ���������� ��������� �� ��������
	void finding(string name); //����� ��������� ������ �� ��������� � ����������
};