#include <stdio.h>
int main() {
	int a[] = {2,4,6,8,10};
	int *p = a;
	for(int i=0;i<5;i++) 
		printf("Element %d: %d\n",(i+1),*(p+i));
	return 0;
}
