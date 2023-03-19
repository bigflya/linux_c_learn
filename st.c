#include <stdio.h>
#include <stdlib.h>
#define NAMESIZE	32
struct simp_st
{
    int i;
    float f,f1;
    char ch;
};
int main()
{
    //TYPE NAME = VALUE
    struct simp_st a={123,456.789,123.456,'w'};//结构体初始化。  TYPE 是struct simp_st
    //对指定成员赋值 struct simp_st a={.i=147,.f1=159.357,.ch='s'};
    //指定成员赋值方法2 struct simp_st *p = &a;  //引用方法 p->i  ,p->f1 等
    //指定成员赋值方法3  struct simp_st arr[2]{}
    a.i=2358784886;
    printf("%d--%f--%f",a.i,a.f,a.f1);
    exit(0);
    
}
