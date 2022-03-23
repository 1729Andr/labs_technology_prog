#pragma once
#include "Queue.h"

class Queue3 : private Queue
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
	Queue3 copy();							//���������� �������(copy);
	Queue3 join(Queue3 q1, Queue3 q2);			//������� ���� ��������(join);
	double getHarmonicMean();					//������� �������� �������������� ��� ��������� � ������ ���������� �������.
};
