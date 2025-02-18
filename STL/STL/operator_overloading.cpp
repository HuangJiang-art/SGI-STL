#include <iostream>
using namespace std;
class INT
{
	friend ostream& operator<<(ostream& os, const INT& i);
public:
	INT(int i)
		:m_i(i)
	{}
	//前置写法
	INT& operator++()
	{
		++(this->m_i);
		return *this;
	}
	//后置写法
	const INT operator++(int)
	{
		INT temp = *this;
		++(*this);//调用上面的前置写法
		return temp;
	}

	//前置写法
	INT& operator--()
	{
		--(this->m_i);
		return *this;
	}
	const INT operator--(int)
	{
		INT temp = *this;
		--(*this);
		return temp;
	}

	int& operator*()const
	{
		return (int&)m_i;//传数据的引用类型
	}
private:
	int m_i;
};
ostream& operator<<(ostream& os, const INT& i)
{
	os << "[" << i.m_i << "]";
	return os;
}
#if 0
int main()
{
	INT I(5);
	cout << I++ << endl;//[5]
	cout << ++I << endl;//[7]
	cout << I-- << endl;//[7]
	cout << --I << endl;//[5]
	cout << *I << endl;//5
	*I = 8;
	cout << *I << endl;//8
	return 0;
}
#endif