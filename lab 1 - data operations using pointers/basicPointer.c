#include <stdio.h>
int main() {
	int x = 30;
	int *p = &x;
	printf("Value of x = %d\n",*p);
	printf("Address of x = %p\n",p);
	return 0;
}
