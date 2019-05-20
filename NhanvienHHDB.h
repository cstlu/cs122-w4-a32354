#pragma once
#include "NhanVienHH.h"
class NhanVienHHDB: public NhanVienHH
{
private:
	double base_salary;
public:
	NhanVienHHDB();
	NhanVienHHDB(string, string, string,double, double, double);
	//setter;
    void setBasesalary(double);
	//getter;
    double getbasesalary()const;
	//methods
	double getSalary()const;
	~NhanVienHHDB();
};