#include <stdio.h>

/*Bài 3. 1A
Quảng trường Nhà hát ở thủ đô Berland có hình chữ nhật với kích thước n × m mét.
Nhân dịp kỷ niệm thành phố, một quyết định đã được đưa ra để lát Quảng trường
bằng những viên bằng đá granit vuông. Mỗi viên đá hình vuông có kích thước a ×
a.
Số lượng viên đá ít nhất cần thiết để lát Quảng trường là bao nhiêu? Nó được phép
che phủ bề mặt lớn hơn Quảng trường Nhà hát. Nó không được phép phá vỡ các
viên đá. Các cạnh của viên đá phải song song với các cạnh của Quảng trường.
Input
Đầu vào chứa ba số nguyên dương trong dòng đầu tiên: n, m và a (1 ≤ n, m, a ≤
10^9).
Output
Viết số lượng viên đá cần thiết để lát kín quảng trường.*/

int main(){
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);
    long long d, r, s;

    if ((1<=n && n<=1e9) && (1<=m && m<=1e9) && (1<=a && a<=1e9)){
        d=1ll*(n/a);
        r=1ll*(m/a);
        if (n%a!=0) d++;
        if (m%a!=0) r++;
        }
    s=d*r;
    printf("%lld", s);

    return 0;
}