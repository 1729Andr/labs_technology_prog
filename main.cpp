#include <iostream>
#include "Queue1.h"
#include "Queue2.h"
#include "Queue3.h"

using namespace std;

void showMenu();

int main()
{
	setlocale(LC_ALL, "ru");
	int choice, flag = 1, value, mod;
	cout << "Выберите очередь с нужным модификатором\n";
	cout << "1 - public\n";
	cout << "2 - protected\n";
	cout << "3 - private\n>> ";
	cin >> mod;

	Queue1 queue1;
	queue1.initialization();
	Queue2 queue2;
	queue2.initialization();
	Queue3 queue3;
	queue3.initialization();

	Queue1 queue1_2;
	queue1_2.initialization();
	Queue2 queue2_2;
	queue2_2.initialization();
	Queue3 queue3_2;
	queue3_2.initialization();

	system("cls");
	showMenu();

	while (flag == 1)
	{
		cout << "Введите действие:\n>> ";
		cin >> choice;
		system("cls");
		showMenu();
		switch (choice)
		{
		case 1:
			cout << "Введите значение:\n>> ";
			cin >> value;
			if (mod == 1) queue1.push(value);
			else if (mod == 2) queue2.push(value);
			else if (mod == 3) queue3.push(value);
			break;
		case 2:
			if (mod == 1) queue1.pop();
			else if (mod == 2) queue2.pop();
			else if (mod == 3) queue3.pop();
			break;
		case 3:
			if (mod == 1) queue1.deleteQueue();
			else if (mod == 2) queue2.deleteQueue();
			else if (mod == 3) queue3.deleteQueue();
			break;
		case 4:
			double res;
			if (mod == 1) res = queue1.getHarmonicMean();
			else if (mod == 2) res = queue2.getHarmonicMean();
			else if (mod == 3) res = queue3.getHarmonicMean();
			if (res == 0) cout << "Ошибка!" << endl;
			else cout << res << endl;
			break;
		case 5:
			if (mod == 1)  queue1.print();
			else if (mod == 2) queue2.print();
			else if (mod == 3) queue3.print();
			break;
		case 6:
			if (mod == 1)  queue1_2 = queue1.copy();
			else if (mod == 2) queue2_2 = queue2.copy();
			else if (mod == 3) queue3_2 = queue3.copy();
			cout << "Очередь скопирована\n";
			break;
		case 7:
			if (mod == 1)  queue1 = queue1.join(queue1_2, queue1);
			else if (mod == 2) queue2 = queue2.join(queue2_2, queue2);
			else if (mod == 3) queue3 = queue3.join(queue3_2, queue3);
			break;
		case 8:
			flag = 0;
			break;
		}
	}
}

void showMenu() {
	cout << "1 - Добавить элемент в конец очереди\n";
	cout << "2 - Извлечь первый элемент из очереди\n";
	cout << "3 - Очистить очередь\n";
	cout << "4 - Вычислить среднее гармоническое для элементов с четным порядковым номером\n";
	cout << "5 - Вывод очереди на экран\n";
	cout << "6 - Cкопировать очередь\n";
	cout << "7 - Cлияния двух очередей(Скопированной и существующей)\n";
	cout << "8 - Выход из программы\n\n";
}
