#include <stdio.h>

//switch case : cáu trúc rẽ nhánh, lựa chọn và chọn đúng case đó
//break để thoát khỏi switch case, nếu không có break sẽ tiếp tục thực hiện các case tiếp theo

int main() {
    int t, n;
    scanf("%d %d", &t, &n);

    if (t<1 || t>12 || n<=0) {
        printf("INVALID");
    } else {
        switch (t) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                printf("31\n");
                break;
            case 4: case 6: case 9: case 11:
                printf("10\n");
                break;
            case 2:
                if (n%4==0 && n%100!=0) {
                    printf("29\n");
                } else {
                    printf("28\n");
                }
                break;
        }
    }

    return 0;
}

/*int main() {
    int n, t;
    scanf("%d %d", &t, &n);
    //test expression, condition
    if (t<1 || t>12 || n<=0){
        printf("INVALID");
    } else if (t==1 || t==3 || t==5 || t==7 || t==8 ||t == 10 || t==12){
        printf("31\n");
    } else if (t==4 || t==6 || t==9 || t==11){
        printf("30\n");
    } else if (t==2){
        if ((n%400==0) || (n%4==0 && n%100!=0)){
            printf("29\n");
        } else {
            printf("28\n");
        }
    }
    return 0;
}
*/