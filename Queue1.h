#pragma once
#include "Queue.h"

class Queue1 : public Queue
{
private:
	Queue queue;

public:
	void initialization();					//инициализировать очередь(initialization);
	void deleteQueue();						//удалить очередь(deleteQueue);
	void push(int value);					//добавить элемент в конец очереди(push);
	int pop();								//извлечь первый элемент из очереди(pop);
	bool isEmpty();							//проверить очередь на пустоту(isEmpty).
	int getLenght();						//вывеси длину очереди(lenght).
	void print();							//вывод очереди на экран(print);
	Queue1 copy();							//копировать очередь(copy);
	Queue1 join(Queue1 q1, Queue1 q2);			//слияния двух очередей(join);
	double getHarmonicMean();					//Подсчет среднего гармонического для элементов с четным порядковым номером.
};
