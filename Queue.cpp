#include <iostream>
#include "Queue.h"

using namespace std;

//���������������� �������(initialization);
void Queue::initialization() {
	front = NULL;
	rear = NULL;
	count = 0;
}

//�������� ������� � ����� �������(push);
void Queue::push(int value) {
	Node *ptr = new Node();
	ptr->data = value;
	ptr->link = NULL;
	count++;

	if (front == NULL) {
		front = ptr;
		rear = ptr;
	}
	else
	{
		rear->link = ptr;
		rear = ptr;

	}
}

//��������� ������� �� �������(isEmpty).
bool Queue::isEmpty() {
	if (count == 0) {
		return true;
	}
	else
	{
		return false;
	}
}

//������� ������ ������� �� �������(pop);
int Queue::pop() {
	setlocale(LC_ALL, "ru");
	int res;
	if (isEmpty()) {
		cout << "������� ������\n";
		return NULL;
	}
	else
	{
		if (count == 1) {
			count--;
			res = front->data;
			free(front);
			front = NULL;
			rear = NULL;
			return res;
		}
		else
		{
			count--;
			Node *ptr = front;
			front = front->link;
			res = ptr->data;
			free(ptr);
			return res;
		}
	}
}

//�������� �������(deleteQueue);
void Queue::deleteQueue() {
	while (front != NULL) {
		front = front->link;
	}
	count = 0;
}

//������ ����� �������(getLenght).
int Queue::getLenght() {
	return count;
}

void Queue::print() {
	setlocale(LC_ALL, "ru");
	if (isEmpty()) {
		cout << "������� ������\n";
	}
	else {
		Node *ptr = front;
		while (ptr != NULL) {
			cout << ptr->data << " ";
			ptr = ptr->link;
		}
		cout << " " << endl;
	}
}

//���������� �������(copy);
Queue Queue::copy() {
	setlocale(LC_ALL, "ru");
	Queue queueCopy;
	Node *ptr = front;
	queueCopy.initialization();
	if (isEmpty()) {
		cout << "������� ������\n";
	}
	else {
		while (ptr != NULL) {
			queueCopy.push(ptr->data);
			ptr = ptr->link;
		}
	}
	return queueCopy;
}

//������� ���� ��������(join);
Queue Queue::join(Queue q1, Queue q2) {
	Queue queueJoin;
	queueJoin.initialization();
	Queue q2Copy = q2.copy();
	int tmp;

	for (int i = 0; i < q2.getLenght(); i++)
	{
		tmp = q2Copy.pop();
		queueJoin.push(tmp);
	}
	return queueJoin;
}