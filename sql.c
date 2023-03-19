#include <stdio.h>
#include <stdlib.h>
#define NAMESIZE	32
#include<string.h>
struct student_st
{
    int id;
    char name[NAMESIZE];
    int math;
    int chinese;
};

void stu_set(struct student_st *p,const struct student_st *q)
{
    //可以 p->id = q->id;
    *p = *q;
}
void stu_show(struct student_st *p)
{
    printf("%d %s %d %d/n",p->id,p->name,p->math,p->chinese);
    
}
int main()
{
    struct student_st stu,tmp;
    printf("Please enter for the stu[id name math math chinese]:");
    scanf("%d%s%d%d",&tmp.id,tmp.name,&tmp.math,&tmp.chinese);
    stu_set(&stu,&tmp);
    stu_show(&stu);
  //  stu_changename();
    exit(0);
}
