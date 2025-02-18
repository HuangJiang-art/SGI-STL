#include <iostream>
#include <cstddef>//size_t
using namespace std;

class alloc {

};

template <class T,class Alloc=alloc,size_t BufSize=0>
class deque
{
public:
	deque()
	{
		cout << "deque()" << endl;
	}
};
//ÀàÐÍ+ÈÝÆ÷
template <class T,class Sequence=deque<T>>
class stack
{
public:
	stack()
	{
		cout << "stack" << endl;
	}
private:
	Sequence c;
};
#if 0
int main()
{
	stack<int> x;
	return 0;
}
#endif
