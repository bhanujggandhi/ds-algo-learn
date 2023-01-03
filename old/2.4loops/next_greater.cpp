#include <iostream>
#include <vector>

using namespace std;

int printNGE(vector<int> Arr, int element)
{
	int next;

	cout << Arr[element] << endl;
	for (int j = element; j < Arr.size(); j++)
	{
		if (Arr[j] > Arr[element])
		{
			next = Arr[j];
			break;
		}
	}

	return next;
}

int main()
{
	vector<int> arr = {11, 13, 21, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	int greater = printNGE(arr, 0);
	cout << greater << endl;
	return 0;
}
