#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 4
void print_arr(int *p,int n)//这种方法相当于把二维数组当成一维数组来处理注意第一个形参类型，思考为什么可以这样
{
	int i;
	    for(i = 0;i<n;i++)
        {
            printf("%d",p[i]);
            
        }
    
    	printf("\n");
}
int main()
{
	int a[M][N]={1,2,3,4,5,6,7,8,9,10,11,12};
	print_arr(&a[0][0],M*N);
    
	exit(0);
}
