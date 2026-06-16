#include "piratas.h"
#include "sorting.h"
#include <string.h>
int bountyComparator(const void* x, const void* y){
	Pirate* a = (Pirate*)x;
	Pirate* b = (Pirate*)y;
	if(a->bounty < b->bounty) return 1;
	if(a->bounty > b->bounty) return -1;
	return 0;
}
int ageComparator(const void* x, const void* y){
	Pirate* a = (Pirate*)x;
	Pirate* b = (Pirate*)y;
	if(a->age < b->age) return -1;
	if(a->age > b-> age) return 1;
	return 0;
}
int nameComparator(const void* x, const void* y){
	Pirate* a = (Pirate*)x;
	Pirate* b = (Pirate*)y;
	int n = strcmp(a->name, b->name);
	if(n < 0) return -1;
	if(n > 0) return 1;
	return 0;
}
int crewComparator(const void* x, const void* y){
	Pirate* a = (Pirate*)x;
	Pirate* b = (Pirate*)y;
	int n = strcmp(a->crew, b->crew);
	if(n < 0) return -1;
	if(n > 0) return 1;
	return 0;
}
int comparePirates(const void* x, const void* y){
	Pirate* a = (Pirate*)x;
	Pirate* b = (Pirate*)y;
	
	int r = bountyComparator(a, b);
	if(r != 0) return r;	
	r = ageComparator(a, b);
	if(r != 0) return r;
	r = nameComparator(a, b);
	if(r != 0) return r;
	return crewComparator(a, b);
}


