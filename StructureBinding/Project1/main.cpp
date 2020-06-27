#include<iostream>
#include<utility>

using std::cout;
using std::endl;

int main()
{
	std::pair<bool, int> pair(true, 5);
	cout << pair.first << " and " << pair.second << endl;
	return 0;
}