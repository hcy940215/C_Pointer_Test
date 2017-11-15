//
// Created by dell on 2017/11/15.
//
#include <stdio.h>
int main(){
    int max(int ,int);
    int min(int,int);
    int add(int,int );

    void process(int,int,int(* fun)(int, int));

    int a,b;
    printf("enter a and b\n");
    scanf("%d,%d",&a,&b);

    printf("max=");
    process(a,b,max);

    printf("min=");
    process(a,b,min);

    printf("add=");
    process(a,b,add);
    return 0;
}

void process(int a,int b,int (*fun)(int ,int)){
    int result;
    result = (*fun)(a,b);
    printf("%d\n",result);
}
int max(int a,int b){
    return (a>b)? b:a;
}
int min(int a,int b){
    return (a>b)? a:b;
}
int add(int a,int b){
    return a+b;
}