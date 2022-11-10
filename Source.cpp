#include <iostream>
#include <stack>
#include <list>
#include <queue>


int main()
{
	std::stack<int> le;
	std::list<int> copa;

	std::queue<int> my;
	std::list<int>::iterator it;
	le.push(1);
	le.push(2);
	le.push(3);
	le.push(4);
	le.push(5);
	le.push(6);

	while (!le.empty())
	{
		copa.push_back(le.top());
		le.pop();
	}
	//copa.sort();

	for (it = copa.begin(); it != copa.end(); it++)
	{
		le.push(*it);
		std::cout << *it << std::endl;
	}


}