#include <stdio.h>

int sumrange(int min, int max)  //将结果作为返回值返回
{
	static int sum=0;
	
	if(min == max){
		return -1;
	}
	sum = min + min + 1;
	sumrange(min+1, max);
	return 0;
}

void main()
{
	int ret;

	ret = sumrange(101, 200);
	
	return ;
}