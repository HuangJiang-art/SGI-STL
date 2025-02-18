#include <iostream>
using namespace std;
class alloc
{

};

template <class T,class Allco=alloc>
class vector
{
public:
	typedef T value_type;
	typedef value_type* iterator;

	template <class I>
	void insert(iterator position, I first, I last)
	{
		cout << "insert()" << endl;
	}
};
#if 0
int main()
{
	int ia[5] = { 0,1,2,3,4 };
	vector<int> x;
	vector<int>::iterator ite;
	x.insert(ite, ia, ia + 5);
	return 0;
}
#endif