/*?? bài: https://paste.ubuntu.com/p/hFNjfC3Zf7/
 */
#include <iostream>
#include <cmath>
using namespace std;

int SoChuSo(int n)
{
	n = (n > 0) ? n : -n;
	int dem = 0;
	while (n > 0)
	{
		dem++;
		n /= 10;
	}
	return dem;
}
int tong(int n)
{
	int tong = 0;
	int n_const = n;
	n = (n > 0) ? n : -n;
	while (n > 0)
	{
		int a = n % 10;
		tong += pow(a, SoChuSo(n_const));
		n /= 10;
	}
	if (n_const > 0)
		return tong;
	else
		return -tong;
}
bool KiemTraSoAmstrong(int n)
{
	if (n == tong(n))
	{
		return true;
	}
	else
		return false;
}
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (KiemTraSoAmstrong(n) == true)
		cout << "Day la so Amstrong";
	else
		cout << "Day khong phai so Amstrong";
	return 0;
}