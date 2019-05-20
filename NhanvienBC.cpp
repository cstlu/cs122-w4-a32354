#include"NhanVienBC.h"

NhanVienBC::NhanVienBC()
{}
NhanVienBC::NhanVienBC(string id,string name,string tax,double salary):NhanVien(id,name,tax),fixed_salary(salary)
{}
void NhanVienHH::setFixedsalary(double salary){
    this->fixed_salary=salary;
}
double NhanVienHH::getFixedsalary()const{
    return this->fixed_salary;
}