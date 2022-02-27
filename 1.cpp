#include <iostream>
using namespace std;
int main()
{
	const int n = 20;
	float arr[n], middle, temp;
	int *stackl = new int [n], *stackr = new int [n], sp = 0;
	int i, j, left, right;
	cout << "Введите элементы массива: ";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sp = 1;
	stackl[1] = 0;
	stackr[1] = n - 1;
	while (sp > 0)
	{
		left = stackl[sp];
		right = stackr[sp];
		sp--;
		while (left < right)
		{
			i = left;
			j = right;
			middle = arr[(left + right / 2)];
			while (i < j)
			{
				while (arr[i] < middle)
				{
					i++;
				}
				while (middle < arr[j])
				{
					j--;
				}
				if (i <= j)
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
					i++;
					j--;
				}
			}
			if (i < right)
			{
				sp++;
				stackl[sp] = i;
				stackr[sp] = right;
			}
			right = j;
		}
	}
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
		cout << endl;
	}
}