#include "baratie.h"
#include "sorting.h"
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	Order ordenes[n];

	for(int i = 0; i < n; i++){
		scanf("%s %s", ordenes[i].customer, ordenes[i].dish);
		ordenes[i].arrivalOrder = i + 1;
	}
	insertionSort(ordenes, n, sizeof(Order), compareOrders);
	for(int i = 0; i < n; i++){
		printf("%s\n", ordenes[i].customer);
	}
	printf("\n");
}
