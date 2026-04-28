/*Bài 1: Viết chương trình giải phương trình bậc hai: ax2 + bx + c = 0, với a, b, c là
các hệ số thực nhập vào từ bàn phím. */

#include <stdio.h>
#include <math.h>

int ptbac2(double a, double b, double c, double* x1, double* x2){
    double delta;
    if (a==0){
        if (b==0){
            if (c==0) return 3; //vo so nghiem
            else return 0; //vo nghiem
        } else {
            *x1=-c/b;
            *x2=*x1+1;
            return 1; //nghiem don
        }
    } else {
        delta=b*b - 4.*a*c;
        if (delta<0) return 0;
        else if (delta==0){
            *x1=*x2=-b/(2.*a);
            return 1;
        } else {
            double can=sqrt(delta);
            *x1=(-b+can)/(2.*a);
            *x2=(-b-can)/(2.*a);
            return 2; //2 nghiem phan biet
        }
    }
}

int main(){
    double a,b,c,x1,x2;
    int res;
    printf("\tnhap a b c:");
    scanf("%lf%lf%lf", &a,&b,&c);
    res=ptbac2(a,b,c,&x1,&x2);
    switch (res){
        case 0:
            printf("\tPhuong trinh vo nghiem\n");
            break;
        case 1:
            if (x1==x2) printf("\tPhuong trinh co nghiem kep x1=x2=%.2lf\n", x1);
            else printf("\tPhuong trinh co nghiem don x=%.2lf\n", x1);
            break;
        case 2:
            printf("\tPhuong trinh co hai nghiem phan biet x1=%.2lf x2=%.2lf\n", x1, x2);
            break;
        case 3:
            printf("\tPhuong trinh co vo so nghiem\n");
            break;
        default:
            printf("\tPhuong trinh vo nghiem\n");
    }

    return 0;
}
