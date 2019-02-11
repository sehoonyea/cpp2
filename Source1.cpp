#include <iostream>
#include <vector>

using namespace std;

int main()
{

	//vector<double> scores;

	vector<int> array1;
	vector<int> array2(10);
	vector<int> array3(10, 1);
	vector<int> array4(array3);
	int data[] = { 10,20,30,40,50,60 };
	vector<int> array5(data, data + 5);
	array5.insert(array5.begin(), 99);

	vector<int>::iterator it;

	for (it = array5.begin(); it != array5.end(); it++)
		cout << *it << " ";
	array5.erase(array5.begin(), array5.begin() + 2);
	for (it = array5.begin(); it != array5.end(); it++)
		cout << *it << " ";

	return 0;
	

}