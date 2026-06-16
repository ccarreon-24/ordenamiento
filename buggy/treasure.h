#ifndef TREASURE_H
#define TREASURE_H
#define MAX_NAME 40
typedef struct{
	char name[MAX_NAME];
	long long value;
	long long weight;
	long long rareness;
} Treasure;
int compareByValue(const void* x, const void* y);
int compareByWeight(const void* x, const void* y);
int compareByRareness(const void* x, const void* y);
int compareByRatio(const void* x, const void* y);
#endif
