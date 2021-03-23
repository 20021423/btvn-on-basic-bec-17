// ?? bài: https://paste.ubuntu.com/p/hFNjfC3Zf7/
#include <iostream>
using namespace std;

bool KiemTraSoChinhPhuong(int n)
{
	if (n <= 0)
		return false;
	for (int i = 1; i <= n/2; i++)
	{
		if (i * i == n)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (KiemTraSoChinhPhuong(n) == true) cout << "Day la so chinh phuong";
	else cout << "Day khong phai la so chinh phuong";
	return 0;
}