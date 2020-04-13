#include<stdio.h>
void subfc (){
	int a, b;
	int sum = 0;
	a = 10;
	b = 10;
	sum = a +b;
	printf("sum = %d", &sum);
}

void prede(){
	int a = 10;
	printf("a + b = %a", &a);

}

int main (){
	printf("안녕하세요. hello world!!!!\n");
	printf("누구에게 보낼것인가?\n");

	return 0;
}
