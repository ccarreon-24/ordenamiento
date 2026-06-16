#include "treasure.h"
#include "sorting.h"
#include <string.h>

int compareByValue(const void* x, const void* y){
	Treasure* a = (Treasure*)x;
	Treasure* b = (Treasure*)y;
	if(a->value > b->value) return -1;
	if(a->value < b->value) return 1;
	return 0;
}
int compareByWeight(const void* x, const void* y){
	Treasure* a = (Treasure*)x;
	Treasure* b = (Treasure*)y;
	if(a->weight < b->weight) return -1;
	if(a->weight > b->weight) return 1;
	return 0;
}
int compareByRareness(const void* x, const void* y){
	Treasure* a = (Treasure*)x;
	Treasure* b = (Treasure*)y;
	if(a->rareness > b->rareness) return -1;
	if(a->rareness < b->rareness) return 1;
	return 0;
}
int compareByRatio(const void* x, const void* y){
	Treasure* a = (Treasure*)x;
	Treasure* b = (Treasure*)y;
	long long r = a->value * b->weight;
	long long p = b->value * a->weight;
	if(r > p) return -1;
	if(r < p) return 1;
	return 0;
}

