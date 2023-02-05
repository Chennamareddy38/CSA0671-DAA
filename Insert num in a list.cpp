#include <iostream>
#include <list> 
using namespace std;
int main()
{
	list<int> list1;
	list<int> list2;
	list<int> list3;
	int arr[10] = { 1, 2, 3, 4 };
	list1.assign(4,2);
	cout << "The list after inserting multiple elements is : ";
	for (list<int>::iterator i=list1.begin(); i!=list1.end(); i++)
	cout << *i << " ";
	cout << endl;
	list2.assign(list1.begin(),list1.end());
	cout << "The list after copying list elements is : ";
	for (list<int>::iterator i=list2.begin(); i!=list2.end(); i++)
	cout << *i << " ";
	cout << endl;
	list3.assign(arr,arr+4);
	cout << "The list after copying array elements is : ";
	for (list<int>::iterator i=list3.begin(); i!=list3.end(); i++)
	cout << *i << " ";
	cout << endl;
}
