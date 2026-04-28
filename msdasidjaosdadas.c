#include <stdio.h>
#include <string.h>

int main(){
    char ntn[11];
    fgets(ntn, sizeof(ntn), stdin);
    ntn[strcspn(ntn,"\n")]='\0';
    printf("ngay thang nam: %s\n", ntn);
    return 0;
}
