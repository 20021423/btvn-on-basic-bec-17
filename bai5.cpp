/*?? bài: https://paste.ubuntu.com/p/hFNjfC3Zf7/
 */
#include <iostream>
#include <cmath>
using namespace std;

bool KiemTraSoNguyenTo(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (KiemTraSoNguyenTo(n) == true) cout << "Day la so nguyen to";
	else cout << "Day khong phai so nguyen to";
	return 0;
}