#include "piratas.h"
#include "sorting.h"

int bountyComparator(const void* x, const void* y){
	Pirate* a = (Pirate*)x;
	Pirate* b = (Pirate*)y;
	if(a->bounty < b->bounty) return -1;
	if(a->bounty > b->bounty) return 1;
	return 0;
}
