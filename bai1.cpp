// ?? bài: https://paste.ubuntu.com/p/hFNjfC3Zf7/
#include <iostream>
using namespace std;

// in ra so dao 
int SoDao(int n)
{
	int nDao=0;
	while (n > 0)
	{
		int du = n % 10;
		nDao = nDao * 10 + du;
		n /= 10;
	}
	return nDao;
}

int main()
{
	int n;
	do
	{
		cout << "Nhap n khong am: ";
		cin >> n;
	} while (n < 0);
	cout << SoDao(n);
	return 0;
}