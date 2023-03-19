#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


//方法二：共用体和结构体嵌套
union
{
	struct
	{
		uint16_t i;//占两个字节
		uint16_t j;//占两个字节
	}x;//占四个字节
	uint32_t y;//占四个字节
}a;//占四个字节

int main()
{
a.y = 0x11223344;
printf("%x\n",a.x.i+a.x.j);

}

