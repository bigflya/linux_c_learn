#include <stdio.h>
#include <stdlib.h>
#define NAMESIZE	32
struct simp_st
{
    int i;
    float f;
    char ch;
};
int main()
{
    //TYPE NAME = VALUE
    struct simp_st a = {123,12.4,'a'};//结构体初始化。  TYPE 是struct simp_st
    a.i=256;
    
    printf("%d\n%f\n%c\n",a.i,a.f,a.ch);
    exit(0);
    
}
