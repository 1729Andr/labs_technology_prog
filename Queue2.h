#pragma once
#include "Queue.h"

class Queue2 : protected Queue
{
private:
	Queue queue;

public:
	void initialization();					//���������������� �������(initialization);
	void deleteQueue();						//�������� �������(deleteQueue);
	void push(int value);					//�������� ������� � ����� �������(push);
	int pop();								//������� ������ ������� �� �������(pop);
	bool isEmpty();							//��������� ������� �� �������(isEmpty).
	int getLenght();						//������ ����� �������(lenght).
	void print();							//����� ������� �� �����(print);
	Queue2 copy();							//���������� �������(copy);
	Queue2 join(Queue2 q1, Queue2 q2);			//������� ���� ��������(join);
	double getHarmonicMean();					//������� �������� �������������� ��� ��������� � ������ ���������� �������.
};
