// Main function, calling enqueue and dequeue to edit queue.

#include "stdafx.h"
using namespace std;
#include <iostream>

#include "Queue.h"

int main()
{
	Queue myqueue;
	myqueue.enqueue(7);
	myqueue.enqueue(6);
	myqueue.enqueue(2);
	myqueue.enqueue(3);
	myqueue.enqueue(9);
	myqueue.display();
	
	cout << "\nValue of " << myqueue.dequeue() << " is removed from queue.\n";
	
	myqueue.enqueue(1);

	myqueue.display();

	

	return 0;
}

