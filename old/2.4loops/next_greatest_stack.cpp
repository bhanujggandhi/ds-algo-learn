#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void printNGE(vector<int> Arr)
{
	stack<int> st;
	int size = Arr.size();

	st.push(Arr[0]);

	for (int i = 1; i < Arr.size(); i++)
	{
		if (st.empty())
		{
			st.push(Arr[i]);
			continue;
		}

		while (!st.empty() && st.top() < Arr[i])
		{
			cout << st.top() << "-->" << Arr[i] << endl;
			st.pop();
		}

		st.push(Arr[i]);
	}

	while (!st.empty())
	{
		cout << st.top() << "-->" << -1 << endl;
		st.pop();
	}
}

int main()
{
	vector<int> arr = {13, 7, 6, 12};
	printNGE(arr);

	return 0;
}
