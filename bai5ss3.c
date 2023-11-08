#include <stdio.h>
int main(){
    int thousandDigit, hundredDigit, dozenDigit, unitDigit;
    printf("Nhap vao mot so nguyen co 4 chu so abcd:");
    scanf("%d %d %d %d",&thousandDigit, &hundredDigit, &dozenDigit, &unitDigit);
    int sum_of_digits = thousandDigit + hundredDigit + dozenDigit + unitDigit;
    int reverse = unitDigit*1000 + dozenDigit*100+hundredDigit*10+thousandDigit;
    printf("Tong cac chu so: %d\n", sum_of_digits);
    printf("So dao nguoc: %d", reverse);
}