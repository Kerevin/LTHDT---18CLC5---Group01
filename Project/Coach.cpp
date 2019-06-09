#include "Coach.h"

Coach::Coach(void)
{
	this->mucLuong=0;
	this->kinhNghiem=0;
	this->soDoiBong=0;
	this->soThanhTich=0;
	this->hoSoCacDoiBong.resize(0);
	this->thanhTich.resize(0);
	doi=new Team;
}

Coach::Coach(string hoten,string ngaysinh,string noisinh,string quoctich,string id,string tongiao,const Team &t,double luong,int knghiem,int thtich,int sodoibong)
	:	Person(hoten,ngaysinh,noisinh,quoctich)
{
	this->mucLuong=luong;
	this->kinhNghiem=knghiem;
	this->soThanhTich=thtich;
	this->soDoiBong=sodoibong;
	this->hoSoCacDoiBong.resize(sodoibong);
	this->thanhTich.resize(soThanhTich);
	doi=new Team;
	doi=t;
}

Coach::Coach(Coach &c) : Person(c)
{
	this->mucLuong=c.mucLuong;
	this->kinhNghiem=c.kinhNghiem;
	this->soDoiBong=c.soDoiBong;
	this->soThanhTich=c.soThanhTich;

	for(int i=0; i< soDoiBong; i++)
		hoSoCacDoiBong[i].push_back(c.hoSoCacDoiBong[i]);
	for(int i=0; i< soThanhTich; i++)
		thanhTich[i].push_back(c.thanhTich[i]);
}

Coach& Coach::operator = (const Coach &c)
{
	if(this== &c);
		return *this;
	Person::operator = (c);
	this->mucLuong=c.mucLuong;
	this->kinhNghiem=c.kinhNghiem;
	this->soDoiBong=c.soDoiBong;
	this->soThanhTich=c.soThanhTich;

	for(int i=0;i< soDoiBong; i++)
		this->hoSoCacDoiBong[i]=c.hoSoCacDoiBong[i];
	for(int i=0;i< soThanhTich; i++)
		this->thanhTich[i]=c.thanhTich[i];
	return *this;
}

Coach::~Coach()
{
	delete doi;
}

void Coach::setDoiTuyen(const Team &t)
{
	delete doi;
	doi=new Team;
	doi=t;
}

void Coach::setKinhNghiem(int knghiem)
{
	kinhNghiem=knghiem;
}

void Coach::setMucLuong(double luong)
{
	mucLuong=luong;
}

void Coach::setSoDoiBong(int sodoibong)
{
	soDoiBong=sodoibong;
}
void Coach::Nhap()
{
	double luong;
	int thtich,knghiem,sodoibong;
	Team t;
	Person::Nhap();
	cout<<"Nhap doi bong hlv do dang lam viec:";
	t.Nhap();
	delete doi;
	this->doi=new Team;
	doi=t;
	cout<<"Nhap muc luong cua hlv:";
	cin>>luong;
	this->setMucLuong(luong);
	cout<<"Nhap so nam kinh nghiem cua hlv:";
	cin>>knghiem;
	this->setKinhNghiem(knghiem);
	cout<<"Nhap so doi bong hlv da lam viec:";
	cin>>sodoibong;
	cout<<"Nhap thong tin cac doi bong hlv da lam viec:"<<endl;
	for(int i=0; i<sodoibong; i++)
	{
		cout<<"--------------------------------------"<<endl;
		cout<<"			Thong tin doi bong thu "<<i+1<<":"<<endl;
		hoSoCacDoiBong[i].Nhap();
	}
	cout<<"Nhap so thanh tich cua hlv:";
	cin>>thtich;
	string temp;
	for(int i=0;i< thtich; i++)
	{
		cout<<"Thanh tich "<<i+1<<":";
		getline(cin,temp);
		this->thanhTich[i]=temp;
		temp="";
	}

}

void Coach::Xuat()
{
	cout<<"------------------------------------------"<<endl;
	Person::output();
	cout<<"			Thong tin HLV			";
	cout<<"Doi bong hlv dang lam viec: ";
	doi->Nhap();
	cout<<"Muc luong: "<<this->mucLuong;
	cout<<"Kinh nghiem: "<<this->kinhNghiem;
	cout<<"Thong tin cac doi bong da lam viec: "<<endl;
	for (int i = 0; i < soDoiBong; i++)
		hoSoCacDoiBong[i].output();
	cout<<"Thong tin cac thanh tich:"<<endl;
	for(int i=0;i< soThanhTich; i++)
		cout<<"Thanh tich "<<i+1<<":"<<thanhTich[i];
}