#include <stdio.h>
void mikado(int * bah,int * pooh);

int main(void){
	int pooh = 2,bah = 5;
	printf("In main(),pooh = %d and &pooh = %p\n",pooh,&pooh);
	// In main(),pooh = 2 and &pooh = bah的内存地址
	printf("In main(),bah = %d and &bah = %p\n",bah,&bah);
	// In main(),bah = 5 and &bah = 变量bah的内存地址
	
	// 把变量bah的内存地址传给mikado函数作为第一个参数
	// pooh的内存变量地址作为第二个参数
	mikado(&bah,&pooh);
	
	return 0;
}

void mikado(int * bah,int * pooh){
	// bah 和 pooh是指针变量，打印 * bah 将输出 内存地址中的值，bah表示是内置地址
	// 上面的调用中，bah的值就是 main方法中的 &bah ，即 bah的内存地址
	// In mikado() ,pooh = 2 and &pooh = pooh的内存地址
	printf("In mikado() ,pooh = %d and &pooh = %p\n",*pooh,pooh);
	printf("In mikado(),bah = %d and &bah = %p\n",*bah,bah);
}
/*
stdout copy
In main(),pooh = 2 and &pooh = 0xbfda6e98
In main(),bah = 5 and &bah = 0xbfda6e9c
In mikado() ,pooh = 2 and &pooh = 0xbfda6e98
In mikado(),bah = 5 and &bah = 0xbfda6e9c
*/
