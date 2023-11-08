#include <stdio.h>
int main(){
    const PI = 3.14;
    int r;
    float diameter_of_a_circle, circle_area;
    printf("Nhap ban kinh r:");
    scanf("%d",&r);
    diameter_of_a_circle = 2 * PI * r;
    circle_area = PI * r * r;
    printf("Chu vi hinh tron la: %f\n", diameter_of_a_circle);
    printf("Dien tich hinh tron la: %f", circle_area);
    }
