#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
	setlocale(LC_CTYPE, ".UTF-8");

	double x1, y1, r1;
	double x2, y2, r2;
	double d;

	printf("Введите x1 и y1 первой окружности и радиус:\n");
	scanf("%lf %lf %lf", &x1, &y1, &r1);

	printf("Введите x2 и y2 второй окружности и радиус : \n");
	scanf("%lf %lf %lf", &x2, &y2, &r2);

	d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	
	if (d <= r1 + r2 && d >= fabs(r1 - r2))
	{
		printf("Окружности пересекаются\n");
	}
	else
	{
		printf("Окружности не пересекаются\n");
	}
	return 0;
}