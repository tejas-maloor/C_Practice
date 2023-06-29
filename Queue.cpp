#include<iostream>
using namespace std;

class Queue
{
	int front, rear, size;
	int* Q;
	
public:
	
	Queue(int size)
	{
		front = rear = 0;
		this->size = size;
		Q = new int[size];
	}
	
	void Enqueue(int data)
	{
		if(size == rear)
		{
			cout << "Queue is Full" << endl;
			return;
		}
		else
		{
			Q[rear] = data;
			rear++;
		}
		
		return;
	}
	
	void Dequeue()
	{
		if(front == rear)
		{
			cout << "Queue is empty" << endl;
			return;
		}
		else
		{
			front++;
		}
		
		return;
	}
	
	void Display()
	{
		int i;
		
		for(i = front; i < rear; i++)
		{
			cout << Q[i] << "\t";
		}
		
		cout << endl;
	}
};

int main()
{
	Queue q(6);
	q.Enqueue(10);
	q.Enqueue(20);
	q.Enqueue(30);
	q.Enqueue(40);
	q.Display();
	q.Dequeue();
	q.Dequeue();
	q.Enqueue(80);
	q.Display();
}
