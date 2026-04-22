#include <stdio.h>
#include <stdlib.h>
/*Bài 5. 515A
Một ngày nào đó, Drazil muốn hẹn hò với Varda. Drazil và Varda sống trên máy
bay của Cartesian. Nhà của Drazil nằm ở điểm (0, 0) và nhà của Varda nằm ở điểm
(a, b). Trong mỗi bước, anh ta có thể di chuyển trong một khoảng cách 1 đơn vị
theo hướng ngang hoặc dọc. Nói cách khác, từ vị trí (x, y) anh ta có thể đi đến các
vị trí (x + 1, y), (x - 1, y), (x, y + 1) hoặc (x, y - 1).
Thật không may, Drazil không có ý thức về hướng di chuyển. Vì vậy, anh ta chọn
ngẫu nhiên hướng đi mà anh ta sẽ đi trong mỗi bước. Anh ta có thể vô tình trở về
nhà trong chuyến đi của mình. Drazil thậm chí có thể không nhận thấy rằng anh ấy
đã đến (a, b) và tiếp tục đi.
May mắn thay, Drazil đã đến vị trí (a, b) thành công. Drazil nói với Varda: "Tôi
phải mất chính xác một số để đi từ nhà tôi đến nhà bạn". Nhưng Varda bối rối về
lời nói của mình, cô không chắc chắn rằng có thể đi từ (0, 0) đến (a, b) trong các
bước cho trước. Bạn có thể tìm ra?
Input
Bạn được cung cấp ba số nguyên a, b và s (- 10^9 ≤ a, b <=10^9, 1 ≤ s ≤ 2.10^9)
trong một dòng.
Output
Nếu bạn nghĩ Drazil đã phạm sai lầm và không thể thực hiện chính xác các bước và
đi từ nhà của anh ấy đến nhà của Varda, hãy in "No" (không có dấu ngoặc kép).
Nếu không, hãy in "Yes".*/

int main(){
    int a, b, s;

    do{
        scanf("%d %d %d", &a, &b, &s);
        if (s<1 || s>2e9) printf("INVALID, INPUT AGAIN: ");
    } while (s<1 || s>2e9);

    long long d=1ll*abs(a)+1ll*abs(b);

    if (s>=d && (s-d)%2==0){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}