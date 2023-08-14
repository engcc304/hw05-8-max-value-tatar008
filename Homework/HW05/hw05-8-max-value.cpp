/*
    ผู้ใช้กรอกตัวเลข 3 จำนวน และให้คุณระบุอันดับของแต่ละหมายเลข พร้อมกับระบุจำนวนที่มากที่สุด

    Test case:
        12 25 52

    Output:
        1st Number = 12
        2nd Number = 25
        3rd Number = 52
        The 3rd Number is the greatest among three

    Test case:
        89 54 72

    Output:
        1st Number = 89
        2nd Number = 54
        3rd Number = 72
        The 1rd Number is the greatest among three

*/
#include<stdio.h>
int main() {
    int a, b, c ;
    scanf("%d %d %d", &a, &b, &c);

    printf("1st Number = %d\n", a);
    printf("2nd Number = %d\n", b);
    printf("3rd Number = %d\n", c);

    if(a >= b && a>= c) {
        printf("The 1rd Number is the greatest among three", a);
    }else if(b >= c && b >= a){
        printf("The 2rd Number is the greatest among three", b);
    }else{
        printf("The 3rd Number is the greatest among three", c);
    }
    return 0;
}