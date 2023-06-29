#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp = b;
	b = a;
	a = temp;
}

int main()
{
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	
	int a[n];
	
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	} 
	
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	
	
	
	//Sorting.
	
	for(int i = 0; i < n - 1; i++)	//No of passes.
	{
		int min = i;
		
		for(int j = i+1; j < n; j++)
		{
			if(a[j] < a[min])
			{
				min = j;
			}
		}
		
		if(min != i)
		{
			swap(a[i], a[min]);
		}
	}
	
	cout << endl;
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}
