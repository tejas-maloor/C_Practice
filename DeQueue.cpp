#include<iostream>
using namespace std;

class DeQueue
{
	int front, rear, size;
	int* Q;
	
public:
	
	DeQueue(int size)
	{
		front = rear = -1;
		this->size = size;
		Q = new int[size];
	}
	
	void EnqueueFront(int x)
	{
		if((rear+1)%size == front)
		{
			cout << "Queue is Full";
		}
		else if(front == -1 && rear == -1)
		{
			front = rear = 0;
			Q[front] = x;
		}
		else if(front == 0)
		{
			front = size - 1;
			Q[front] = x;
		}
		else
		{
			front--;
			Q[front] = x;
		}
	}
	
	void EnqueueRear(int x)
	{
		if((rear+1)%size == front)
		{
			cout << "Queue is Full";
		}
		else if(front == -1 && rear == -1)
		{
			front = rear = 0;
			Q[rear] = x;
		}
		else if(rear == size - 1)
		{
			rear = 0;
			Q[rear] = x;
		}
		else
		{
			rear++;
			Q[rear] = x;
		}
	}
	
	void DeQueueFront()
	{
		if(front == -1 && rear == -1)
		{
			cout << "Queue is empty";
		}
		else if(front == rear)
		{
			front = rear = -1;
		}
		else if(front == size - 1)
		{
			front = 0;
		}
		else
		{
			front++;
		}
	}
	
	void DeQueueRear()
	{
		if(front == -1 && rear == -1)
		{
			cout << "Queue is empty";
		}
		else if(front == rear)
		{
			front = rear = -1;
		}
		else if(rear == 0)
		{
			rear = size - 1;
		}
		else
		{
			rear--;
		}
	}
	
	void Display()
	{
		int i = front;
		
		if(front == -1 && rear == -1)
		{
			cout << "Queue is Empty" << endl;
		}
		else
		{
			while(i != rear)
			{
				cout << Q[i] << "\t";
				i = (i+1) % size;
			}
			
			cout << Q[rear];
		}
		
		cout << endl;
	}
};

int main()
{
	DeQueue q(5);
	
	q.EnqueueRear(10);
	q.EnqueueRear(20);
	q.EnqueueRear(30);
	q.EnqueueFront(80);
	q.EnqueueFront(90);
	q.Display();
	q.DeQueueRear();
	q.Display();
	q.DeQueueFront();
	q.Display();
}
