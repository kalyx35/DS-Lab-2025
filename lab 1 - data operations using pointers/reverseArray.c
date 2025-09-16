#include <stdio.h>
void reverse(int arr[], int size) {
	int *left = arr;
	int *right = arr+size-1;
	while(left<right) {
		int temp = *left;
		*left = *right;
		*right = temp;
		*(left++);
		*(right--);
	}
}
int main() {
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements of array: ");
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	reverse(a,n);
	printf("Reverse array: ");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
