#include "ArrayQueue.h"
#include "QueueInterface.h"
#include "PrecondViolatedExcep.h"
#include <iostream>
using namespace std;

int main()
{
	ArrayQueue<int> queue1, queue2;
	int queueFront;

	queue1.enqueue(1);
	queue1.enqueue(2);
	queue2.enqueue(3);
	queue2.enqueue(4);
	queue1.dequeue();
	queueFront = queue2.peekFront();
	queue1.enqueue(queueFront);
	queue1.enqueue(5);
	queue2.dequeue();
	queue2.enqueue(6);
	cout << "Queue 1:" << endl;
	queue1.printQueue();
	cout << "Queue 2: " << endl;
	queue2.printQueue();

	system("pause");
	return 0;
}