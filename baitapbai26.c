#include <stdio.h>

/*Bài 6. Mua nước
Polycarp muốn nấu một món súp. Để làm điều đó, anh ta cần mua chính xác n lít
nước.
Chỉ có hai loại chai nước trong cửa hàng gần đó - chai 1 lít và chai 2 lít. Có vô số
chai của hai loại này trong cửa hàng.
Chai loại thứ nhất có gía a burles và chai loại thứ hai có giá tương ứng b burles.
Polycarp muốn chi càng ít tiền càng tốt. Nhiệm vụ của bạn là tìm ra số tiền tối thiểu
(bằng burles) Polycarp cần mua chính xác n lít nước ở cửa hàng gần đó nếu chai
loại thứ nhất có giá a burles và chai loại thứ hai có giá b burles.
Input
3 số n,a,b (1<=n<=10^12, 1<=a,b<=1000) tương ứng với số lit nước cần mua, a và
b.
Output
Số tiền ít nhất để mua được n lit nước.*/

int main(){
    int a=0 , b=0;
    long long n=0;
    
    do{
        scanf("%lld %d %d", &n, &a, &b);
        if (n<1 || n>1e12 || a<1 || a>1e4 || b<1 || b>1e4) printf("INVALID, INPUT AGAIN: ");
    } while (n<1 || n>1e12 || a<1 || a>1e4 || b<1 || b>1e4);

    if (2*a<=b) printf("%lld", n*a);
    else if (2*a>b){
             if (n%2==0) printf("%lld", (n/2)*b);
             else printf("%lld", ((n/2)*b)+(n%2)*a);
    }
    return 0;
}