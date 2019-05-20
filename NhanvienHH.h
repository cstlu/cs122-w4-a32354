#pragma once
#include "NhanVien.h"
class NhanVienHH:public NhanVien
{
protected:
	double tongdoanhthu;
	double mucthuong;//10%
public:
	NhanVienHH();
	NhanVienHH(string, string, string, double,double);
	//setters
    void setTongdoanhthu(double);
    void setMucthuong(double);
	//getters
    double getTongdoanhthu()const;
    double getMucthuong()const;
	//method
	double getSalary()const;
	~NhanVienHH();
};