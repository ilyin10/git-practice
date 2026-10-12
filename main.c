#include <stdio.h>

int main() {
	int a, b;
	
	printf("Введите два числа: ");
	scanf("%d %d", &a, &b);
	int sum = a-b; //ошибка - неверная операция
	printf("Сумма равна %d\n", sum);
}