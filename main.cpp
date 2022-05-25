#include <iostream>
#include <list>


/*
 * OUTPUT: 5 5 3 3 7 7 1 1 21 21 87 87
 * */

using namespace std;

int main()
{

	list<int> ilist{ 2, 5, 4, 3, 7, 8, 1, 6, 12, 21, 87, 10 };
	list<int>::iterator it = ilist.begin();

	while ( it!= ilist.end())
	{
		for (it=ilist.begin(); it != ilist.end(); it++)
		{
			if (*it %2 ==0){
				break;
			}
		}
		ilist.remove(*it);
	}

	for (it=ilist.begin(); it != ilist.end(); it++)
	{
		ilist.insert(it,*it);
	}

	for (int i : ilist) {
		cout << i << " ";
	}
	cout << endl;

	return 0;

}


