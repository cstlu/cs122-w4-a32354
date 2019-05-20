#pragma once
#include "NhanVien.h"
class NhanVienHD: public NhanVien
{
    private:
        int Hour;
        double luong;//so luong cua 1 gio
    public:
        NhanVienHD();
        NhanVienHD(string,string,string,int,double);
        //setters
        void setHour(int);
        void setLuong(double);
        //getters
        int getHour()const;
        double getLuong()const;
        //methor
        double getSalary()const;
};