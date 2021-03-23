// ?? bài: https://paste.ubuntu.com/p/hFNjfC3Zf7/
#include <iostream>
using namespace std;

// in ra so dao 
int So_Dao(int n)
{
	int nDao = 0;
	while (n > 0)
	{
		int du = n % 10;
		nDao = nDao * 10 + du;
		n /= 10;
	}
	return nDao;
}
bool SoDoiXung(int n)
{
	if (n == So_Dao(n))
	{
		return true;
	}
	return false;
}
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (SoDoiXung(n) == true) cout << "Day la so doi xung";
	else cout << "Day khong phai so doi xung";
	return 0;
}