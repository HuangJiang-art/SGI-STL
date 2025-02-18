//函数的对象
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//结构体变量名称首字母大写？
template <class T>
struct Plus
{
	T operator()(const T& x, const T& y)const
	{
		return x + y;
	}
};

template <class T>
struct Minus
{
	T operator()(const T& x, const T& y)const
	{
		return x - y;
	}
};
template <typename T>
class Compare
{
public:
	bool operator()(const T& left, const T& right)
	{
		return left < right;
	}
};

int main()
{
	Plus<int> plusobj;
	Minus<int> minusobj;
	cout << plusobj(3, 5) << endl;
	cout << minusobj(3, 5) << endl;

	//临时对象Plus<int>()
	//Minus<int>() 最后一个括号是函数重载运算符
	cout << Plus<int>()(43, 50) << endl;
	cout << Minus<int>()(43,50) << endl;

	vector<int> data = { 21,24,64,14,87,9,3,78,62,58 };
	for (int& val : data)
	{
		cout << val << " ";
	}
	cout << endl;
	//函数对象
	/*sort(data.begin(), data.end(), Compare<int>());
	for (int& val : data)
	{
		cout << val << " ";
	}
	cout << endl;*/
	//lambda表达式
	//sort(data.begin(), data.end(), [](int& left, int& right)->bool {
	//	return left < right;
	//	});
	//for (int& val : data)
	//{
	//	cout << val << " ";
	//}
	//cout << endl; 
	return 0;
}