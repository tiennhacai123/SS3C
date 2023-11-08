#include <stdio.h>
int main(){
    //khai bao bien luu tru diem toan, van, anh
    float math_point, literature_point, english_point;
    //thong bao nhap va nhap gia tri
    printf("Nhap gia tri math_point, literature_point, english_point");
    //gan gia tri
    scanf("%f %f %f",&math_point, &literature_point, &english_point);
    //tinh tong diem
    float tongdiem = math_point + literature_point + english_point;
    //tinh diem trung binh
    float diemtrungbinh = ((math_point + literature_point + english_point) / 3);
    //in ket qua
    printf("Tong diem:%.2f va diem trung binh:%.2f", tongdiem, diemtrungbinh);
}