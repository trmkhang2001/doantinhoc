#include"Header.h"

void main()
{
	SinhVien sv;
	DanhSachSinhVien dssv;
	int chon = 0;
	do
	{
		cout << "==================================================";
		cout << "\n 0 - Thoat Chuong Trinh ";
		cout << "\n 1 - Nhap Danh Sach Sinh Vien ";
		cout << "\n 2 - Xuat Danh Sach Sinh Vien ";
		cout << "\n 3 - Them Sinh Vien  ";
		cout << "\n 4 - Tim Sinh Vien theo ma Sinh Vien ";
		cout << "\n 5 - Xoa Sinh Vien theo ma Sinh Vien ";
		cout << "\n 6 - Sua Thong Tin Sinh Vien theo ma Sinh Vien";
		cout << "\n 7 - Sap xep Sinh Vien theo Nam Hoc Giam Dan ";
		cout << "\n Vui long chon : ";
		cin >> chon;
		cout << "==================================================="<<endl;
		switch (chon)
		{
		case 0:
			break;
		case 1:
			nhapDanhSachSinhVien(dssv);
			break;
		case 2:
			xuatDanhSachSinhVien(dssv);
			break;
		case 3:
			themSinhVien(dssv);
			break;
		case 4:
			timSV_maSV(dssv);
			break;
		case 5:
			xoaSV_maSV(dssv);
			break;
		case 6:
			suaThongTinSV(dssv);
			break;
		case 7:
			sapXepSV_NamHocGiamDan(dssv);
			break;
		default:
			cout << "Ban da nhap sai hay nhap lai !!! ";
			break;
		}
	} while (chon != 0);
}