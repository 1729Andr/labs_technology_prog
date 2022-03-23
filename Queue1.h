#pragma once
#include "Queue.h"

class Queue1 : public Queue
{
private:
	Queue queue;

public:
	void initialization();					//���������������� �������(initialization);
	void deleteQueue();						//������� �������(deleteQueue);
	void push(int value);					//�������� ������� � ����� �������(push);
	int pop();								//������� ������ ������� �� �������(pop);
	bool isEmpty();							//��������� ������� �� �������(isEmpty).
	int getLenght();						//������ ����� �������(lenght).
	void print();							//����� ������� �� �����(print);
	Queue1 copy();							//���������� �������(copy);
	Queue1 join(Queue1 q1, Queue1 q2);			//������� ���� ��������(join);
	double getHarmonicMean();					//������� �������� �������������� ��� ��������� � ������ ���������� �������.
};
