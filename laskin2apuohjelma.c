
#include"laskin2.h"
/*********************************************************************
*                                                                    *
*    PAAOHJELMA                                                      *
*                                                                    *
**********************************************************************/

int main (void)
{
	char operaatio = '0';
	float luku1, luku2;
	luku1 = 0;
	luku2 = 0;

	printf ("Anna laskutoimitus(*, /, +, -) muodossa 3 * 4 \n");
	scanf ("%f %c %f", &luku1, &operaatio,  &luku2);
#ifdef DEBUG
	printf ("%f%c%f", luku1, operaatio, luku2);
#endif

	switch (operaatio)	/* Valitaan toiminta operaation mukaan */
	{
	case SUMMA:
		printf ("%.f + %.2f = %.2f", luku1, luku2,
			plus_miinus (luku1, luku2));
		break;
	case MIINUS:
		printf ("%.2f - %.2f = %.2f", luku1, luku2,
			plus_miinus (luku1, -luku2));
		break;
	case KERTO:
		printf ("%.2f * %.2f = %.2f", luku1, luku2,
			kerto (luku1, luku2));
		break;
	case JAKO:
		printf ("%.2f / %.2f = %.2f", luku1, luku2,
			jako (luku1, luku2));
		break;
	default:
		printf ("\n Operaatio virheellinen");
		printf (" Paina jotain nppint");
	}			/* end of switch */
	return 0;
}				/* end of main */

