#include <stdio.h>
#include <stdlib.h>

void swap(int *p, int *q)
{
    
    int tmp;
    tmp = *p;
    *p =*q;
    *q = tmp;
    
}

int main()
{
	int i = 3,j = 5;
    int tmp;
    swap(&i,&j);
    printf("i=%d\nj = %d\n",i,j);
    
    
}
