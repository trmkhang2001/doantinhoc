#include"Header.h"

void nhapSinhVien(SinhVien& sv)
{
	cin.ignore();
	cout << "\n Nhap ma Sinh Vien : ";
	cin.getline(sv.masv, 10);
	cout << "\n Nhap ten Sinh Vien : ";
	cin.getline(sv.tensv, 30);
	cout << "\n Nhap lop :";
	cin.getline(sv.lop, 10);
	cout << "\n Nhap gioi tinh : ";
	cin.getline(sv.gioiTinh, 5);
	cout << "\n Nhap Nam Hoc : ";
	cin >> sv.namHoc;
}
void xuatSinhVien(SinhVien sv)
{
	cout << setw(10) << sv.masv << setw(30) << sv.tensv << setw(10) << sv.lop << setw(10) << sv.gioiTinh << setw(10)<<sv.namHoc<<endl;
}
void nhapDanhSachSinhVien(DanhSachSinhVien& dssv)
{
	cout << "Nhap so luong Sinh Vien : ";
	cin >> dssv.soLuongSV;
	for (int i = 0; i < dssv.soLuongSV; i++)
	{
		cout << "Nhap Thong Tin Sinh Vien Thu " << i + 1 << " : " << endl;
		nhapSinhVien(dssv.ds[i]);
	}
}
void xuatDanhSachSinhVien(DanhSachSinhVien dssv)
{
	cout << setw(10) << "maSV" << setw(30) << "tenSV" << setw(10) << "Lop" << setw(10) << "gioiTinh" << setw(10) << "namHoc"<<endl;
	for (int i = 0; i < dssv.soLuongSV; i++)
	{
		xuatSinhVien(dssv.ds[i]);
	}
}
void themSinhVien(DanhSachSinhVien& dssv)
{
	SinhVien x;
	cout << "Nhap thong tin Sinh Vien can Them : "<<endl;
	nhapSinhVien(x);
	dssv.ds[dssv.soLuongSV++] = x;
}
void timSV_maSV(DanhSachSinhVien dssv)
{
	char  maCanTim[10];
	cin.ignore();
	cout << "Nhap Ma Sinh Vien can tim : ";
	cin.getline(maCanTim, 10);
	for (int i = 0; i < dssv.soLuongSV; i++)
	{
		if (strcmp(dssv.ds[i].masv, maCanTim) == 0)
		{
			xuatSinhVien(dssv.ds[i]);
		}
	}
}
void xoaSV_maSV(DanhSachSinhVien& dssv)
{
	char  maCanXoa[10];
	cin.ignore();
	cout << "Nhap Ma Sinh Vien can xoa : ";
	cin.getline(maCanXoa, 10);
	for (int i = 0; i < dssv.soLuongSV; i++)
	{
		if (strcmp(dssv.ds[i].masv, maCanXoa) == 0)
		{
			for (int j = i; j < dssv.soLuongSV; j++)
			{
				dssv.ds[j] = dssv.ds[j + 1];
			}
			dssv.soLuongSV--;
		}
		
	}
}
void suaThongTinSV(DanhSachSinhVien& dssv)
{
	char maCanSua[10];
	cin.ignore();
	cout << "Nhap ma sinh vien can sua : ";
	cin.getline(maCanSua, 10);
	for (int i = 0; i < dssv.soLuongSV; i++)
	{
		if (strcmp(dssv.ds[i].masv, maCanSua) == 0)
		{
			cout << "\n Nhap Ten Sinh Vien : ";
			cin.getline(dssv.ds[i].tensv, 10);
			cout << "\n Nhap Lop :";
			cin.getline(dssv.ds[i].lop,10);
			cout << "\n Nhap gioi tinh : ";
			cin.getline(dssv.ds[i].gioiTinh, 5);
			cout << "\n Nhap Nam Hoc : ";
			cin >> dssv.ds[i].namHoc;
		}
	}
}
void sapXepSV_NamHocGiamDan(DanhSachSinhVien& dssv)
{
	for (int i = 0; i < dssv.soLuongSV-1; i++)
	{
		for (int j = i + 1; j < dssv.soLuongSV; j++)
		{
			if (dssv.ds[i].namHoc < dssv.ds[j].namHoc)
			{
				swap(dssv.ds[i], dssv.ds[j]);
			}
		}
	}
}