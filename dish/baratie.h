#ifndef BARATIE_H
#define BARATIE_H
#define MAX_CUST 40
#define MAX_DISH 20
typedef struct{
	char customer[MAX_CUST];
	char dish[MAX_DISH];
	int arrivalOrder;

} Order;
int compareOrders(const void*x, const void* y);
#endif 
