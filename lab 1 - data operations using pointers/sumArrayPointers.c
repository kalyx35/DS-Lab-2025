#include <stdio.h>
int sumOfArray(int arr[], int size) {
	int *p = arr;
	int sum=0;
	for(int i=0;i<size;i++) 
		sum+=*(p+i);
	return sum;
}
int main() {
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of the array: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Sum of elements of array = %d",sumOfArray(a,n));
	return 0;
}
