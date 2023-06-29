#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp = b;
	b = a;
	a = temp;
}

int Partition(int a[], int lb, int ub)
{
	int pivot = a[lb];
	
	int start = lb;
	int end = ub;
	
	while(start < end)
	{
		while(a[start] <= pivot)
		{
			start++;
		}
		
		while(a[end] > pivot)
		{
			end--;
		}
		
		if(start < end)
		{
			swap(a[start], a[end]);
		}	
	}
	
	swap(a[lb], a[end]);
	
	return end;
}

void QuickSort(int a[], int lb, int ub)
{
	if(lb < ub)
	{
		int loc = Partition(a, lb, ub);
		QuickSort(a, lb, loc - 1);
		QuickSort(a, loc + 1, ub);
	}
}

int main()
{
	int a[] = {7,6,10,5,9,2,1,15,7};
	
	QuickSort(a, 0, 8);
	
	for(int i = 0; i < 9; i++)
	{
		cout << a[i] << "\t";
	}
}
