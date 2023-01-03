#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// Initializing a vector

	vector<int> arr = {1, 2, 3, 4, 5};

	arr.push_back(16);

	cout << arr.size() << endl;

	cout << arr.capacity() << endl;
}