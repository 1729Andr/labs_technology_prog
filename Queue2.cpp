#include <iostream>
#include "Queue2.h"

using namespace std;

void Queue2::initialization() {
	queue.initialization();
}

void Queue2::deleteQueue() {
	queue.deleteQueue();
}

void Queue2::push(int value) {
	queue.push(value);
}

int Queue2::pop() {
	return queue.pop();
}

bool Queue2::isEmpty() {
	return queue.isEmpty();
}

int Queue2::getLenght() {
	return queue.getLenght();
}

void Queue2::print() {
	queue.print();
}

Queue2 Queue2::copy() {
	Queue queueCopy;
	queueCopy = queue.copy();

	Queue2 queue1Copy;
	queue1Copy.initialization();
	int tmp;


	for (int i = 0; i < queue.getLenght(); i++)
	{
		tmp = queueCopy.pop();
		queue1Copy.push(tmp);
	}
	return queue1Copy;
}

Queue2 Queue2::join(Queue2 q1, Queue2 q2) {
	Queue2 queue1Join = q1.copy();
	Queue2 q2Copy = q2.copy();
	int tmp;

	for (int i = 0; i < q2.getLenght(); i++)
	{
		tmp = q2Copy.pop();
		queue1Join.push(tmp);
	}
	return queue1Join;
}

double Queue2::getHarmonicMean() {
	setlocale(LC_ALL, "ru");
	Queue queueCopy = queue.copy();
	int tmp, num, numEven = 0;
	double sum = 0;
	num = queue.getLenght();
	if (num == 0 || num == 1) {
		return 0;
	}
	for (int i = 1; i <= num; i++)
	{
		tmp = queueCopy.pop();
		if (tmp == 0) {
			cout << "На 0 делить нельзя!\n";
			return 0;
		}
		if (i % 2 == 0) {
			numEven++;
			sum = sum + (double)1 / tmp;
		}
	}
	return (float)numEven / sum;
}