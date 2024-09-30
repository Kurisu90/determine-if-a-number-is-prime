#include<stdio.h>
#include<math.h>
int GET() {
	int a;
	printf("Please enter a number:");
	scanf_s("%d", &a);
	return a;
}//读取输入的一个数
int main() {
	int x = GET();//输入的数
	int i=2;
	while (x%i!=0) {
		i++;
	}
	if (i == x) {
		printf("Yes.");
	}
	else {
		printf("No.");
	}
}


