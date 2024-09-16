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
		puts("¬ведите значение");
		scanf_s("%d", &dym);
		result = D * dym;
		printf("%d дюймов Ц это %.2f см", dym, result);
	};

	void spanish_pulgada();
	{

		int pulgada;
		float result;
		setlocale(LC_ALL, "RUS");
		puts("\n¬ведите значение");
		scanf_s("%d", &pulgada);
		result = SD * pulgada;
		printf("%d пульгад Ц это %.2f см", pulgada, result);

	};

	void starolitovsky();
	{

		int starolitovsky;
		float result;
		setlocale(LC_ALL, "RUS");
		puts("\n¬ведите значение");
		scanf_s("%d", &starolitovsky);
		result = SL * starolitovsky;
		printf("%d старолитовских дюймов Ц это %.2f см", starolitovsky, result);
	};




}