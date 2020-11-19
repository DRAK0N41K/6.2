#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
void arrSum(int n, int summ = 0)
{
	
	int* a = new int[n];
	srand((unsigned)time(NULL));
	for (int j = 0;j < n;j++)
	{


		a[j] = rand();

	}
	for (int j = 0;j < n;j++)
	{
		if (j % 2 != 0)
		{
			summ += a[j];
		}
	}
	for (int i = 0; i < n; ++i)
		cout << a[i] << ", ";
	cout << endl;
	cout << summ;
}
int main()
{
	arrSum(15);
	
	
	
	
}



