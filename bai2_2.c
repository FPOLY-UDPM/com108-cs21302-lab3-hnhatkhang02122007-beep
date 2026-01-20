#include <stdio.h>

int main(){
    double a, b, x;

    // Nhập hệ số
    printf("Nhap a = ");
    scanf("%lf", &a);
    printf("Nhap b = ");
    scanf("%lf", &b);

    // Xét các trường hợp
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem\n");
        } else {
            printf("Phuong trinh vo nghiem\n");
        }
    } else {
        x = -b / a;
        printf("Phuong trinh co nghiem: x = %.2lf\n", x);
    }

    return 0;
}
