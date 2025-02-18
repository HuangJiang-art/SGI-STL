#include <iostream>
using namespace std;
class INT
{
	friend ostream& operator<<(ostream& os, const INT& i);
public:
	INT(int i)
		:m_i(i)
	{}
	//ǰ��д��
	INT& operator++()
	{
		++(this->m_i);
		return *this;
	}
	//����д��
	const INT operator++(int)
	{
		INT temp = *this;
		++(*this);//���������ǰ��д��
		return temp;
	}

	//ǰ��д��
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
		return (int&)m_i;//�����ݵ���������
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