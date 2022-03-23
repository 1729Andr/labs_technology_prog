#pragma once

class Queue
{
	struct Node {
		int data;
		Node * link;
	};
private:
	Node *front;	//ссылка на первый элемент
	Node *rear;		//ссылка на последний элемент

protected:
	int count;

public:
	void initialization();					//инициализировать очередь(initialization);
	void deleteQueue();						//очистить очередь(deleteQueue);
	void push(int value);					//добавить элемент в конец очереди(push);
	int pop();								//извлечь первый элемент из очереди(pop);
	bool isEmpty();							//проверить очередь на пустоту(isEmpty).
	int getLenght();						//вывеси длину очереди(lenght).
	void print();							//вывод очереди на экран(print);
	Queue copy();							//копировать очередь(copy);
	Queue join(Queue q1, Queue q2);			//слияния двух очередей(join);

};







