#include <stdio.h>
#include <locale.h>
#define D 2.54
#define SD 2.32166
#define SL 2.7076
void main()
{
	void dym();
	{

		int dym;
		float result;
		setlocale(LC_ALL, "RUS");
		puts("������� ��������");
		scanf_s("%d", &dym);
		result = D * dym;
		printf("%d ������ � ��� %.2f ��", dym, result);
	};

	void spanish_pulgada();
	{

		int pulgada;
		float result;
		setlocale(LC_ALL, "RUS");
		puts("\n������� ��������");
		scanf_s("%d", &pulgada);
		result = SD * pulgada;
		printf("%d ������� � ��� %.2f ��", pulgada, result);

	};

	void starolitovsky();
	{

		int starolitovsky;
		float result;
		setlocale(LC_ALL, "RUS");
		puts("\n������� ��������");
		scanf_s("%d", &starolitovsky);
		result = SL * starolitovsky;
		printf("%d �������������� ������ � ��� %.2f ��", starolitovsky, result);
	};




}