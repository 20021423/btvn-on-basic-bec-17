// đệ quy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
// bai1 tính 1+2+3+...+n
/*
	cho n=5;
	Tong_n_so_dau_tien(5) = 5+4+3+2+1
	Tong_n_so_dau_tien(4) = 4+3+2+1
	Tong_n_so_dau_tien(3) = 3+2+1
	=> Tong_n_so_dau_tien(n) = n + Tong_n_so_dau_tien(n-1);
*/
int Tong_n_so_dau_tien(int n) //bai1
{
	if (n == 1) return 1;
	return n + Tong_n_so_dau_tien(n - 1);
}

// bai 3
/*
	cho n=5;
	bai2(5) = 1/(2*5+1) +1/(2*4+1) + 1/(2*3+1) + 1/(2*2+1) + 1/(2*1+1) +1/(2*0+1);
	bai2(4)= 1/(2*4+1) + 1/(2*3+1) + 1/(2*2+1) + 1/(2*1+1) +1/(2*0+1);
	bai2(3) = 1/(2*3+1) + 1/(2*2+1) + 1/(2*1+1) +1/(2*0+1);
	=> bai2(n) = 1/(2*n+1) + bai2(n-1);
*/

double Bai3(int n)
{
	if (n == 0) return 1;
	return (1.0 / (2 * n + 1)) + Bai3(n - 1);
}

/*
* bai 4:
	dem so luong chu so nguyen duong n
	vd n=1234 => ouput: 4;
	1234 = 123*10 + 4;
	123 = 12*10 + 3;
	12 = 1*10 + 2;
	1
	=> n = (n/10)*10 + n%10;
		
*/
int Bai4(long long n)
{
	if (n ==0) return 0;
	return 1 + Bai4(n / 10);
}

/*
	bai5: tim so nhi phan cua n
	
*/

string Bai5(int n)
{
	if (n == 0) return "";
	return Bai5(n / 2) + to_string(n % 2);
}

// bai 6;

/*
	tim UCLN cua a,b;
*/
//int UCLN(int a, int b)
//{
//	while (b != 0)
//	{
//		int c = a;
//		a = b;
//		b = c % a;
//	}
//	return a;
//}
int UCLN(int a, int b) //bai6
{
	if (b == 0) return a;
	return UCLN(b, a%b);
}

void InSo(int n) // bai7
{
	if (n == 1)
	{
		cout << 1<<endl;
		return;
	}
	InSo(n - 1);
	cout << n<<endl;
}
int main()
{
	/*int n;
	cout << "Nhap so n: ";
	cin >> n;*/
	//cout << Tong_n_so_dau_tien(n); //bai1
	//cout << Bai3(n);
	//cout << Bai4(n);
	//InSo(n); // bai7
	//cout << Bai5(n);
	int a, b;
	cin >> a >> b;
	cout<<UCLN(a, b);
	return 0;
}
