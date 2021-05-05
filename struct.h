#pragma once
#include <iostream>
#define MAX 100
using namespace std;

struct PhanSo
{
	int TuSo;
	int MauSo;
};
typedef struct PhanSo ps;
void NhapPhanSo(ps& x);
void NhapDayPhanSo(ps ds[], int n);
void XuatPhanSo(ps x);
void XuatDayPhanSo(ps ds[], int n);
void RutGonPhanSo(ps& x);
int UCLN(int a, int b);
ps SoSanh2PhanSo(ps a, ps b);
ps TimPhanSoLonNhat(ps ds[], int n);
ps TongHaiPhanSo(ps a, ps b);
ps TongDayPhanSo(ps ds[], int n);
void ThemPhanTu(ps ds[], int& n, int vt, ps val);
void XoaPhanTu(ps ds[], int& n, int vt);