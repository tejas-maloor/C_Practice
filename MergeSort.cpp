#include<iostream>
using namespace std;

MergeSort(int a[], int lb, int ub)
{
	if(lb < ub)
	{
		int mid = (lb + ub / 2;
		MergeSort(a, lb, mid)
		MergeSort(a, mid+1, ub);
		Merge(a, lb, mid, ub);
	}
}

int main()
{
	
}
