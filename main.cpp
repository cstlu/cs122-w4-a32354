#include<iostream>
#include "NhanvienBC.h"
#include "NhanvienHH.h"
#include "NhanvienHHDB.h"
#include "NhanVienHD.h"
using namespace std;
int main(){
    NhanVienBC nv1("132391692","Nguyen Van A","123",10000000);
    cout<<nv1.getSalary()<<endl;
    return 0;
}