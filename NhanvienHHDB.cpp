#include "NhanVienHHDB.h"


NhanVienHHDB::NhanVienHHDB()
{}
NhanVienHHDB::~NhanVienHHDB(string id, string name, string tax,double doanhthu,double thuong,double salary):NhanVienHH(id,name,tax,doanhthu,thuong),base_salary(salary)
{
}
void NhanVienHHDB::setBasesalary(double salary){
    this ->base_salary=salary;
}
double NhanVienHHDB::getbasesalary()const{
    return this->base_salary;
}
double NhanVienHHDB::getSalary()const
{
	return this->tongdoanhthu * this->mucthuong / 100 + this -> base_salary *0.1;
}