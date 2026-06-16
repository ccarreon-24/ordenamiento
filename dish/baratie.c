#include "baratie.h"
#include "sorting.h"
#include <string.h>

int numDish(const void* x){
	Order* a = (Order*)x;
	if(strcmp(a->dish, "MEAT") == 0) return 1;
	if(strcmp(a->dish, "FISH") == 0) return 2;
	if(strcmp(a->dish, "DESSERT") == 0) return 3;
	return 4;
}

int numOrder(const void* x, const void* y){
	Order* a = (Order*)x;
	Order* b = (Order*)y;
	if(a->arrivalOrder < b->arrivalOrder) return 1;
	return -1;
}
int compareOrders(const void* x, const void* y){
	Order* a = (Order*)x;
	Order* b = (Order*)y;

	if(numDish(a) < numDish(b)) return -1;
	if(numDish(a) > numDish(b)) return 1;
	return 0;
}
