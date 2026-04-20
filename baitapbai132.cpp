#include <stdio.h>
#include <limits.h>
/*Bài 32. Số nhỏ thứ 2
Yêu cầu: Cho 5 số nguyên a, b, c, d, e 64 bit đôi một khác nhau. In ra số nhỏ thứ
nhì.
Dữ liệu: Một dòng gồm 5 số nguyên a, b, c, d, e .
Kết quả: In ra số nhỏ thứ nhì.*/
int main(){
    long long min1=LLONG_MAX, min2=LLONG_MAX;

    for (int i=1; i<=5; i++){
        long long x;
        scanf("%lld", &x);

        if (x<min1){
            min2=min1;
            min1=x;
        } else if (x<min2 && x!=min1){
            min2=x;
        }
    }
    printf("%lld\n", min2);
    return 0;
}