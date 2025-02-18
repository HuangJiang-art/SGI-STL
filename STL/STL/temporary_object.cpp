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
	print<int>();//��һ����ʱ���󣬲��Ǻ������ò���
	//�˴�����ʹ��lambda���ʽ���ߺ�������(��()�������������)
	for_each(iv.begin(), iv.end(), print<int>());
	for_each(iv.begin(), iv.end(), [](const int& val)->void{
		cout << val << " ";
	});
	//������for_each����ʱ��print<int>()��������ʱ����Ҳ�ͽ�����
	return 0;
}
#endif