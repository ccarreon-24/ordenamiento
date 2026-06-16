#include "treasure.h"
#include "sorting.h"
#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d", &n);
	Treasure tesoros[n];
	for(int i = 0; i < n; i++){
		scanf("%s %lld %lld %lld", tesoros[i].name, &tesoros[i].value,
				&tesoros[i].weight, &tesoros[i].rareness);
	}
	char s[40];
	scanf("%s", s);
	if(strcmp(s, "VALUE") == 0) insertionSort(tesoros, n, sizeof(Treasure), compareByValue);
	if(strcmp(s, "WEIGHT") == 0) insertionSort(tesoros, n, sizeof(Treasure), compareByWeight);
	if(strcmp(s, "RARENESS") == 0) insertionSort(tesoros, n, sizeof(Treasure), compareByRareness);
	if(strcmp(s, "RATIO") == 0) insertionSort(tesoros, n, sizeof(Treasure), compareByRatio);
		
	for(int i = 0; i < n; i++){
		printf("%s\n", tesoros[i].name);
	}
}
