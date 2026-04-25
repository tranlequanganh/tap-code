/* Đề bài: Thống kê điểm thiMô tả: Sau kỳ thi môn Lập trình C, thầy giáo có một danh sách điểm của $n$ sinh viên (điểm được chấm theo thang 100). 
Tuy nhiên, danh sách này đang lộn xộn. 
Thầy giáo nhờ bạn viết một chương trình để sắp xếp lại bảng điểm theo thứ tự tăng dần (từ thấp đến cao) để dễ dàng thống kê phổ điểm.
Input (Đầu vào):Dòng đầu tiên chứa số nguyên dương $n$ ($1 \le n \le 1000$) là số lượng sinh viên.Dòng thứ hai chứa $n$ số nguyên, mỗi số cách nhau một khoảng trắng. Đây là điểm thi của các sinh viên ($0 \le Điểm \le 100$).
Output (Đầu ra):In ra mảng điểm thi đã được sắp xếp tăng dần, các số cách nhau một khoảng trắng.*/

#include <stdio.h>

int main(){
    int n, i, j, temp;
    scanf("%d", &n);

    int a[n];
    for (i=0;i<n;++i){
        scanf("%d", &a[i]);
    }
    
    for (i=0;i<n-1;++i){
        for (j=0;j<n-i-1;++j){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    for (i=0;i<n;++i){
        printf("%d ", a[i]);
    }

    return 0;
}