#include <stdio.h>
int main(){
    int year_of_birth;
    printf("Nhap nam sinh:");
    scanf("%d",&year_of_birth);
    int age;
    age = 2023 - year_of_birth;
    printf("Tuoi cua toi: %d\n",age);
	(age%2 == 0)?printf("chan or le: %s\n","chan") : printf("chan or le: %s\n","le");
}