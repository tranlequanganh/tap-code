#include <stdio.h>

/*Bài 27. Chuyển đổi ngày sang tháng, năm, ngày
Viết chương trình C cho phép nhập vào số ngày, thực hiện chuyển số ngày sang
năm, tuần, ngày (Bỏ qua trường hợp năm nhuận)
Input
Số nguyên n không âm. (0 ≤ n ≤ 10^6)

Output
Chuyển số ngày đã cho xem số năm, số tháng, số ngày*/

int main(){
    int n, x, y;
    lap:
    scanf("%d", &n);

    if (n<0){
        printf("nhap lai n");
        goto lap;
    } else {
        x=n%365;
        y=x/30;
        printf("%d %d %d", n/365, y, x%30);
    }

    return 0;
}