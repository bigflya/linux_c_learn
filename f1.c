/*
//上面代码的第二种实现方式

*/
#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 4
void print_arr1(int (*p)[N],int m ,int n)//第一个形参的本质其实是一个数组指针所以可以这样写
{		
    	int i,j;
	    for(i = 0;i<m;i++)
        {
            for(j=0;j<n;j++)
                printf("%4d",p[i][j]);//或者*(*(p+i)+j)
            printf("\n");
            
            
        }
    
    	printf("\n");
}
int main()
{
	int a[M][N]={1,2,3,4,5,6,7,8,9,10,11,12};
	print_arr1(a,M,N);
    
	exit(0);
}
