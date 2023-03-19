#include <stdio.h>
#include <stdlib.h>

void print_arr(int *p,int n)
{
	int i;
	printf("%s:%d\n",__FUNCTION__,sizeof(p));
	for(i = 0; i<n; i++)
		printf("%d",*(p+i));
	printf("\n");


}


int main()
{
	int a[] = {1,3,5,7,9};
	printf("%s:%d\n",__FUNCTION__,sizeof(a));
	print_arr(a,sizeof(a)/sizeof(*a));


}
