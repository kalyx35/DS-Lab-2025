#include <stdio.h>
int main() {
	int a = 10, b=20;
	printf("Before swapping: a = %d b = %d\n",a,b);
	int *p = &a, *q = &b;
	int temp = *p;
	*p = *q;
	*q = temp;
	printf("After swapping: a = %d b = %d\n",a,b);
	return 0;
}
