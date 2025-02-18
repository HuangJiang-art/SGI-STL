#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

template <typename T>
class print
{
public:
	print()
	{
		cout << "print()" << endl;
	}
	void operator()(const T& elem)
	{
		cout << elem << " ";
	}
};
#if 0
int main()
{
	int ia[6] = { 0,1,2,3,4,5 };
	vector<int> iv(ia, ia + 6);
	print<int>();//是一个临时对象，不是函数调用操作
	//此处可以使用lambda表达式或者函数对象(有()重载运算符的类)
	for_each(iv.begin(), iv.end(), print<int>());
	for_each(iv.begin(), iv.end(), [](const int& val)->void{
		cout << val << " ";
	});
	//当两个for_each结束时，print<int>()产生的临时对象也就结束了
	return 0;
}
#endif