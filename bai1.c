#include <stdio.h>

int main(){

    // Khai báo biến
    float diem;
    printf("Nhap diem cua sinh vien (0 - 10): ");
    scanf("%f", &diem);

    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le!\n");
    }
    else if (diem >= 9) {
        printf("Hoc luc xuat sac\n");
    }
    else if (diem >= 8) {
        printf("Hoc luc gioi\n");
    }
    else if (diem >= 6.5) {
        printf("Hoc luc kha\n");
    }
    else if (diem >= 5) {
        printf("Hoc luc trung binh\n");
    }
    else if (diem >= 3.5) {
        printf("Hoc luc yeu\n");
    }
    else {
        printf("Hoc luc kem\n");
    }

    return 0;
}
