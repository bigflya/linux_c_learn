#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define NAMESIZE	32
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
    printf("%d %s %d %d\n",p->id,p->name,p->math,p->chinese);
    
}
void stu_changename(struct student_st *p,const char *newname)
{
    //错误示范    
    strcpy(p->name,newname);
    
}
void menu(void)
{
    printf("\n1 set\n2 change name\n3 show\n");
    printf("Please enter the num of you want to choice(q for quit):\n");
}
int main()
{
    struct student_st stu,tmp;
    char newname[NAMESIZE];
    int choice;
    int ret;
    do{
        menu();
        ret = scanf("%d",&choice);//按理来说每个scanf和printf都有可能出错，要设置出错推出选项
        if(ret !=1)
            break;
        switch(choice)
            {
                case 1:
                    printf("Please enter for the stu[id name math math chinese]:\n");
                    scanf("%d%s%d%d",&tmp.id,tmp.name,&tmp.math,&tmp.chinese);
                    stu_set(&stu,&tmp);
                    break;
                case 2:
                    printf("Please enter the new name: ");
                    scanf("%s",newname);
                    stu_changename(&stu,newname);
                    break;
                case 3:
                    stu_show(&stu);
                default:
                    exit(1);

            }
        	sleep(1);
        
        
        
    	}while(1);
    

    exit(0);
}
