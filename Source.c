#include <stdio.h>
#include <conio.h>

int FPB(int Bil1, int Bil2)
{
	int sisa;
	while ((sisa = Bil1 % Bil2) != 0)
	{
		Bil1 = Bil2;
		Bil2 = sisa;
	}
	return Bil2;
}

void main(void)
{
	printf("FPB dari 60 dan 80 = %d\n", FPB(60, 80));
	printf("FPB dari 40 dan 120 = %d\n", FPB(40, 120));
	printf("FPB dari 2 dan 3 = %d\n", FPB(2, 3));

	_getch();
}