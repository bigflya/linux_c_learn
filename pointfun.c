#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 4

int *find_num(int (*p)[N] ,int num)
{
    if(num>M-1)
        return NULL;
    
    return *(p+num);
}
int main()
{
    int i,j;
    int a[M][N]={1,2,3,4,5,6,7,8,9,10,11,12};
    int *res;
    int num =0;
    res = find_num(a,num);
    if(res !=NULL)
    {
        for(i=0;i<N;i++)
            printf("%d",res[i]);
        printf("\n");
    }
    else
    {
         printf("error! can not find\n");
    }
   
    
}
