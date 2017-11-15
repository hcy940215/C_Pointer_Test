#include <stdio.h>

/*
 * 正常交换
 * @param a
 * @param b
 */
void swap(int *p1,int *p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("函数里a = %d,b=%d", *p1, *p2);
    printf(" 函数里a = %p ,  b=%p\n", p1, p2);
}
/*
 * 不能正常交换
 */
void swapNo(int *p1,int *p2){
    int *temp;
    temp = p1;
    p1 = p2;
    p2 = temp;
    printf("函数里a = %d,b=%d", *p1, *p2);
    printf(" 函数里a = %p ,  b=%p\n", p1, p2);
}
int main1() {
    //void swap(int *p1, int *p2);
    int a, b;
    int *pointer_1, *pointer_p2;
    scanf("%d,%d", &a,&b);
    pointer_1 = &a;
    pointer_p2 = &b;

    printf("a = %d,b=%d\n", a, b);
    printf("a = %p,b=%p\n", pointer_1, pointer_p2);
    if (a < b) {
        swap(pointer_1, pointer_p2);
    }
    printf("函数外a = %d,b=%d\n", a, b);
    printf("函数外a = %p,b=%p\n", pointer_1, pointer_p2);
    return 0;
}