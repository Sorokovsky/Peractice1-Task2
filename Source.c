#include<stdio.h>
#include<locale.h>
int main() {
	// ������ 1
	compress1();
}
void compress1() {
	unsigned int stan;
	char d, r, a;
	printf("\n������ ������ �������� - � ������ (0) / � ���'��� (1): "); scanf("%hd", &d);
	printf("\n������ - 1-� ������� - ������: "); scanf("%hd", &r);
	printf("\n������ - ������ ������ 2-�� ��������: "); scanf("%hd", &a);
	stan = ((unsigned int)d & 1) << 8;
	stan |= ((unsigned int)r&)
}