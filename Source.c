#include<stdio.h>
#include<locale.h>
void compress1() {
	unsigned int stan;
	short int d, r, a;
	printf("\nВведіть напрям передачі - в регістр (0) / в пам'ять (1): "); scanf_s("%hd", &d);
	printf("\nВведіть - 1-й операнд - регістр: "); scanf_s("%hd", &r);
	printf("\nВведіть - регістр адреси 2-го операнда: "); scanf_s("%hd", &a);
	stan = ((unsigned int)d & 1) << 8;
	stan |= ((unsigned int)r & 31) << 5;
	stan |= ((unsigned int)a & 31);
	printf("stan=%d", stan);
}
int main() {
	setlocale(LC_ALL, "ukr");
	// Задача 1
	compress1();
}