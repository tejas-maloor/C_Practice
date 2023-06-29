#include<iostream>
using namespace std;

class CQueue
{
	int rear, front;
	int size;
	int* Q;
	
public:
	
	CQueue(int s)
	{
		front = rear = -1;
		size = s;
		Q = new int[s];
	}
	
	void EnQueue(int val)
	{
		if((rear+1)%size == front)
		{
			cout << "Queue is Full" << endl;
			return;
		}
		else if(front == -1 && rear == -1)
		{
			front = rear = 0;
			Q[rear] = val;
		}
		else
		{
			rear = (rear+1) % size;
			Q[rear] = val;
		}
	}
	
	int Dequeue()
	{
		if(front == -1)
		{
			cout << "Queue is empty";
			return INT_MIN;
		}
		
		int data = Q[front];
		Q[front] = -1;
		
		if(front == rear) 
		{ 
			front = rear = -1; 
		}
		else
		{
			front = (front + 1) % size;
		}
		
		return data;	
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
				i = (i+1)%size;
			}
			
			cout << Q[rear];
		}
		
		
		cout << endl;
	}
};

int main()
{
	CQueue q(6);
	
	q.EnQueue(14);
	q.EnQueue(22);
	q.EnQueue(13);
	q.EnQueue(-6);
	q.Display();
	q.Dequeue();
	q.EnQueue(69);
	q.Display();
	q.EnQueue(34);
}
