#include "NhanVienHH.h"


NhanVienHH::NhanVienHH()
{
}
NhanVienHH::NhanVienHH(string id, string name, string tax,double doanhthu,double thuong):NhanVien(id,name,tax),tongdoanhthu(doanhthu),mucthuong(thuong)
{
}
//setters
void NhanvienHH::setTongdoanhthu(double doanhthu){
    this->tongdoanhthu=doanhthu;
}
void NhanvienHH::setMucthuong(double thuong){
    this->mucthuong=thuong;
}
//getters
double NhanvienHH::getTongdoanhthu()const{
    return doanhthu;
}
double NhanvienHH::getMucthuong()const{
    return thuong;
}
//method
double NhanvienHH::getSalary()const{
    {	
		return this->tongdoanhthu * this->mucthuong / 100;
	}
}