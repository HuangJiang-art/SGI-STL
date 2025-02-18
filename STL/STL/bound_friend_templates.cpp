#include <iostream>
#include <cstddef>
using namespace std;
class alloc
{

};
//µ×²ãÈÝÆ÷
template <class T,class Alloc=alloc,size_t BufSize=0>
class deque
{
public:
	deque()
	{
		cout << "deque()" << endl;
	}
};

template <class T,class Sequence>
class stack;

template <class T,class Sequence>
bool operator==(const stack<T, Sequence>& x, const stack<T, Sequence>& y);

template <class T, class Sequence>
bool operator<(const stack<T, Sequence>& x, const stack<T, Sequence>& y);

template <class T,class Sequence=deque<T> >
class stack
{
	//private
	//OK
	friend bool operator==<T>(const stack<T>&, const stack<T>&);
	friend bool operator< <T>(const stack<T>&, const stack<T>&);
	//OK
	friend bool operator==<T>(const stack&, const stack&);
	friend bool operator< <T>(const stack&, const stack&);

	//OK
	friend bool operator==<>(const stack&, const stack&);
	friend bool operator< <>(const stack&, const stack&);

	//NO
	//friend bool operator==(const stack&, const stack&);
	//friend bool operator< (const stack&, const stack&);

public:
	stack()
	{
		cout << "stack" << endl;
	}
private:
	Sequence c;
};

template <class T, class Sequence>
bool operator==(const stack<T, Sequence>& x, const stack<T, Sequence>& y)
{
	cout << "operator==" << endl;
	return true;
}

template <class T, class Sequence>
bool operator<(const stack<T, Sequence>& x, const stack<T, Sequence>& y)
{
	
	cout << "operator<" << endl;
	return true;
}

#if 0
int main()
{
	stack<int> x;
	stack<int> y;
	cout << (x == y) << endl;
	cout << (x < y) << endl;

	stack<char> y1;
	//no match
	//cout << (x == y1) << endl;
	//cout << (x < y1) << endl;
}
#endif