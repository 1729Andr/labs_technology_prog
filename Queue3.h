#pragma once
#include "Queue.h"

class Queue3 : private Queue
{
private:
	Queue queue;

public:
	void initialization();					//инициализировать очередь(initialization);
	void deleteQueue();						//очистить очередь(deleteQueue);
	void push(int value);					//добавить элемент в конец очереди(push);
	int pop();								//извлечь первый элемент из очереди(pop);
	bool isEmpty();							//проверить очередь на пустоту(isEmpty).
	int getLenght();						//вывеси длину очереди(lenght).
	void print();							//вывод очереди на экран(print);
	Queue3 copy();							//копировать очередь(copy);
	Queue3 join(Queue3 q1, Queue3 q2);			//слияния двух очередей(join);
	double getHarmonicMean();					//Подсчет среднего гармонического для элементов с четным порядковым номером.
};
