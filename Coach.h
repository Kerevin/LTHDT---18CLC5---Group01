#include <iostream>
#include <string.h>
#include <string>
#include <vector>
using namespace std;

class Coach: public Person
{
private:
	Team *doi;
	double mucLuong;
	int kinhNghiem;//so nam kinh nghiem
	vector <string> hoSoCacDoiBong;//The Hien cac doi bong da lam viec
	int soDoiBong;//so luong doi bong da lam viec
	vector <string> thanhTich;//cac thanh tich dat dc
	int soThanhTich;
public:
//Phan constructor va destructor
	Coach();
	Coach(string hoten,string ngaysinh,string noisinh,string quoctich,string id,string tongiao,double luong,int knghiem,int thtich,int sodoibong);
	Coach(Coach &);
	Coach& operator = (Coach &);
	~Coach();
	void Nhap();//Nhap thong tin
	void Xuat();//Xuat thong tin
//Phan set
	void setDoiTuyen(Team &);//Gan doi tuyen
	void setKinhNghiem(int knghiem);//Gan Kinh nghiem
	void setMucLuong(double luong);//Gan muc luong
	void setSoDoiBong(int sodoibong);
	
}