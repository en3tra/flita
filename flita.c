#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Rus");
	int i, k = 1, dvch = 0, n, z, x;
	printf("������� ���-�� ��������� � ���������: \n");
	scanf("%d", &n);
	int a10[n], a2[n];
	printf("��������� ��������� ������� \n");
	for (i = 0; i < n; i++) {
		printf("a10[%d] = ", i);
		scanf("%d", &z);
		a10[i] = z;
	}
	printf("�������� ����� �� ��������� (������� ��� ������� � ���������): \n");
	scanf("%d", &x);
	while (a10[x] > 0) {
		dvch += (a10[x] % 2) * k;
		k *= 10;
		a10[x] /= 2;
	}
	int dvch1 = dvch;
	printf("����� � �������� ��: \n");
	printf("%d\n", dvch);
	printf("����� ���� ��������� � �������� ��: \n");
	for (i = 0; i < n; i++) {
		k = 1;
		dvch = 0;
		while (a10[i] > 0) {
			dvch += (a10[i] % 2) * k;
			k *= 10;
			a10[i] /= 2;
		}
		a2[i] = dvch;
		if (x == i) {
			printf("a2[%d] = %d\n", i, dvch1);
		}
		else {
			printf("a2[%d] = %d\n", i, a2[i]);
		}
	}
	return 0;
}