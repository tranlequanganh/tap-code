#include <stdio.h>
#include <math.h>

/*Phương trình bậc 2 là phương trình dạng ax^2 + bx + c = 0.
Viết chương trình C cho phép nhập vào a,b,c và thực hiện giải phương trình bậc 2.
Nếu vô nghiệm thì in ra dòng NO, nếu vô số nghiệm thì in ra INF
Nếu có nghiệm thì in các nghiệm (luôn lấy 2 chữ số thập phân sau dấu chấm phẩy)
cách nhau một khoảng trắng.*/

int main(){
    double a, b, c, x, x1, x2, Z;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a==0){
        if (b==0 && c==0){
            printf("INF");
        } else if (b==0 && c!=0){
                   printf("NO");
        } else if (b!=0){
                   x=-c/b;
                   printf("%.2lf", x);
        }
    } else if (a!=0){
               Z=b*b-4*a*c;
               if (Z<0){
                   printf("NO");
               } else if (Z==0){
                          x=-b/(2*a);
                          printf("%.2lf %.2lf", x, x);
               } else if (Z>0){
                          x1=(-b+sqrt(Z))/(2*a);
                          x2=(-b-sqrt(Z))/(2*a);
                          printf("%.2lf %.2lf", x1, x2);
               }
    }

    return 0;
}