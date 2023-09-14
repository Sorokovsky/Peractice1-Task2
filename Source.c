#include<stdio.h>
#include<locale.h>
int main() {
	// Задача 1
	compress1();
}
void compress1() {
	unsigned int stan;
	char d, r, a;
	printf("\nВведіть напрям передачі - в регістр (0) / в пам'ять (1): "); scanf("%hd", &d);
	printf("\nВведіть - 1-й операнд - регістр: "); scanf("%hd", &r);
	printf("\nВведіть - регістр адреси 2-го операнда: "); scanf("%hd", &a);
	stan = ((unsigned int)d & 1) << 8;
	stan |= ((unsigned int)r&)
}