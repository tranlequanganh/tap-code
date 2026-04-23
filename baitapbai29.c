/*Bài 9. 476A
Dreamoon muốn leo lên một cầu thang gồm n bước. Anh ta có thể leo 1 hoặc
2 bước mỗi lần di chuyển. Dreamoon muốn số lần di chuyển là bội số của một số
nguyên m.
Số lượng di chuyển tối thiểu làm cho anh ta leo lên đỉnh cầu thang thỏa mãn điều
kiện của anh ta là gì?
Input
Dòng đơn chứa hai số nguyên cách nhau n, m (0 <n ≤ 10000, 1 <m<=10).
Output
In một số nguyên duy nhất - số lượng di chuyển tối thiểu là bội số của m. Nếu
không có cách nào anh ta có thể leo lên thỏa mãn điều kiện in - 1.*/

#include <stdio.h>

int main(){
    int n=0,m=0;

    scanf("%d%d", &n,&m);
    if (n<m) {
        printf("-1");
        return 0;
    }
    
    int min=(n+1)/2, b=((min+m-1)/m)*m;
    printf("%d\n", b);

    return 0;

}