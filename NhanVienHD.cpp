#include"NhanVienHD"

NhanVienHD::NhanVienHD()
{}
NhanVienHD::NhanVienHD(string id,string name,string tax,int hour,double luong):NhanVien(id,name,tax),Hour(hour),luong(luong)
{}
void NhanVienHD::setHour(int hour){
    this->Hour=hour;
}
void NhanVienHD::setLuong(double luong){
    this->luong=luong;
}
int NhanVienHD::getHour()const{
    return this->Hour;
}
double NhanVienHD::getLuong()const{
    return this->luong;
}
double NhanVienHD::getSalary()const{
    return this->hour*this->luong;
}
