#include<stdio.h>
#include<locale.h>
void compress1() {
	unsigned int stan;
	short int d, r, a;
	printf("\n������ ������ �������� - � ������ (0) / � ���'��� (1): "); scanf_s("%hd", &d);
	printf("\n������ - 1-� ������� - ������: "); scanf_s("%hd", &r);
	printf("\n������ - ������ ������ 2-�� ��������: "); scanf_s("%hd", &a);
	stan = ((unsigned int)d & 1) << 8;
	stan |= ((unsigned int)r & 31) << 5;
	stan |= ((unsigned int)a & 31);
	printf("stan=%d", stan);
}
int main() {
	setlocale(LC_ALL, "ukr");
	// ������ 1
	compress1();
}