#pragma once

class Queue
{
	struct Node {
		int data;
		Node * link;
	};
private:
	Node *front;	//������ �� ������ �������
	Node *rear;		//������ �� ��������� �������

protected:
	int count;

public:
	void initialization();					//���������������� �������(initialization);
	void deleteQueue();						//�������� �������(deleteQueue);
	void push(int value);					//�������� ������� � ����� �������(push);
	int pop();								//������� ������ ������� �� �������(pop);
	bool isEmpty();							//��������� ������� �� �������(isEmpty).
	int getLenght();						//������ ����� �������(lenght).
	void print();							//����� ������� �� �����(print);
	Queue copy();							//���������� �������(copy);
	Queue join(Queue q1, Queue q2);			//������� ���� ��������(join);

};







