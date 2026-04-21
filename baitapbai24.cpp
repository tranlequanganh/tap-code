#include <stdio.h>
/*Một con ếch hiện đang ở điểm 0 trên trục tọa độ Ox. Nó nhảy theo thuật toán sau:
bước nhảy thứ nhất là a đơn vị về bên phải, bước nhảy thứ hai là b đơn vị về bên
trái, bước nhảy thứ ba là a đơn vị bên phải, bước nhảy thứ tư là b đơn vị bên trái,
v.v. .Nếu con ếch đã nhảy một số lần chẵn (trước lần nhảy hiện tại), nó nhảy từ vị
trí hiện tại x sang vị trí x + a, mặt khác, nó nhảy từ vị trí hiện tại x sang vị trí x − b.
Nhiệm vụ của bạn là tính toán vị trí của ếch sau k bước nhảy
Input
3 số trên cùng một dòng tương ứng a,b,k (1<=a,b,k<=10^9), tương ứng với khoảng
cách nhảy sang phải, sang trái và số lượng bước nhảy.
Output
Vị trí của con ếch sau k bước nhảy.*/
int main(){
    int a, b, k;
    start:
    scanf("%d %d %d", &a, &b, &k);

    if ((a<0 || a>1e9) || (b<0 || b>1e9) || (k<0 || k>1e9)){
        printf("INVALID, INPUT AGAIN: ");
        goto start;
    } else {
        long long t=1ll*(k/2);
        long long p=1ll*(k/2)+1ll*(k%2);
        long long x=p*a-t*b;
        printf("%lld\n", x);
    }
    return 0;
}