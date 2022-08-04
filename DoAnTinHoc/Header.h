#include<iostream>
#include<iomanip>
using namespace std;
const int Max = 100;
const int stop = -99;
struct SinhVien
{
	char masv[10];
	char tensv[30];
	char lop[10];
	char gioiTinh[5];
	int namHoc;
};

struct DanhSachSinhVien
{
	SinhVien ds[Max];
	int soLuongSV;
};

void nhapSinhVien(SinhVien& sv);
void xuatSinhVien(SinhVien sv);
void nhapDanhSachSinhVien(DanhSachSinhVien &dssv);
void xuatDanhSachSinhVien(DanhSachSinhVien dssv);
void themSinhVien(DanhSachSinhVien& dssv);
void timSV_maSV(DanhSachSinhVien dssv);
void xoaSV_maSV(DanhSachSinhVien& dssv);
void suaThongTinSV(DanhSachSinhVien& dssv);
void sapXepSV_NamHocGiamDan(DanhSachSinhVien& dssv);