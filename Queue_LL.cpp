#include<iostream>
using namespace std;

struct QNode
{
	int data;
	QNode* next;
	
	QNode(int d)
	{
		data = d;
		next = NULL;
	}
};

class Queue
{
	QNode *front, *rear;

public:
	
	Queue()
	{
		front = rear = NULL;
	}
	
	void Enqueue(int x)
	{
		QNode* temp = new QNode(x);
		
		if(front == NULL && rear == NULL) 
		{
			front = rear = temp;
			return;
		}
		
		rear->next = temp;
		rear = temp;
	}
	
	void Dequeue()
	{
		if(front == NULL) return;
		
		QNode* temp = front;
		front = front->next;
		
		if(front == NULL) { rear = NULL; }
		
		delete(temp);
	}
	
	void Display()
	{
		QNode* t_front = front;
		
		while(t_front != NULL)
		{
			cout << t_front->data;
			if(t_front->next != NULL) cout << ", ";
			t_front = t_front->next;
		}
		
		cout << endl;
	}
};

int main()
{
	Queue q;
	q.Enqueue(10);
	q.Enqueue(20);
	q.Enqueue(30);
	q.Enqueue(40);
	q.Display();
	q.Dequeue();
	q.Display();
}
