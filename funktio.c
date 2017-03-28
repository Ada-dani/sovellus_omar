/* Copyright Polytechnical University of Vaasa 2004                  */
/*********************************************************************
*
*      O H J E L M A K U V A U S
*
*---------------------------------------------------------------------
*
* 1.  NIMI
*		Nelilaskin
*
* 2.  TEHTAVA
*		Nelilaskin, jolle annetaan pilkulla erottuna operaattori ja 
*		kaksi lukua 
*		Toteutettu funktioilla 
*
* 3.  KAYTTOYMPARISTO
*		DOS,linux
*
* 4.  KAYTTOLIITTYMA
*		Komentorivi
*
* 5.  TOTEUTUS
*		Laskenta suoritettu aliohjelmissa
*
* 6.  VERSIOT
*       Alkuperainen:
*         14.4.2003 / juma
*
*       Versiot:
*         $log$
*
**********************************************************************/

/*-------------------------------------------------------------------*
*    HEADER TIEDOSTOT                                                *
*--------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>
/*-------------------------------------------------------------------*
*    GLOBAALIT MUUTTUJAT                                             *
*--------------------------------------------------------------------*/
/* Ohjaus liput */
#define DEBUG

/* Globaalit vakiot */
#define SUMMA '+'
#define KERTO '*'
#define JAKO '/'
#define MIINUS '-'

/* Globaalit muuttujat */

/* Globaalit tietorakenteet */

/*-------------------------------------------------------------------*
*                                                                    *
*    FUNKTIOIDEN PROTOTYYPIT                                         *
*                                                                    *
*--------------------------------------------------------------------*/
double plus_miinus (double luku1, double luku2);
double kerto (double luku1, double luku2);
double jako (double luku1, double luku2);
/*********************************************************************
*                                                                    *
*    PAAOHJELMA                                                      *
*                                                                    *
**********************************************************************/

int main (void)
{
	char operaatio = '0';
	double luku1, luku2;
	luku1 = 0;
	luku2 = 0;

	printf ("Anna laskutoimitus(*, /, +, -) muodossa 3 * 4 \n");
	scanf ("%f %c %f", &luku1, &operaatio,  &luku2);
#ifdef DEBUG
	printf ("%d%c%d", luku1, operaatio, luku2);
#endif

	switch (operaatio)	/* Valitaan toiminta operaation mukaan */
	{
	case SUMMA:
		printf ("%.f + %.2f = %.2f", luku1, luku2,
			plus_miinus (luku1, luku2);
		break;
	case MIINUS:
		printf ("%.2f - %.2f = %.2f", luku1, luku2,
			plus_miinus (luku1, -luku2);
		break;
	case KERTO:
		printf ("%.2f * %.2f = %.2f", luku1, luku2,
			kerto (luku1, luku2);
		break;
	case JAKO:
		printf ("%.2f / %.2f = %.2f", luku1, luku2,
			jako (luku1, luku2);
		break;
	default:
		printf ("\n Operaatio virheellinen");
		printf (" Paina jotain nppint");
	}			/* end of switch */
	return 0;
}				/* end of main */



/*********************************************************************
*                                                                    *
*    ALIOHJELMAT                                                     *
*                                                                    *
**********************************************************************/

/*********************************************************************
;
;	P R O C E D U R E   D E S C R I P T I O N
;
;---------------------------------------------------------------------
;
; NIMI:
;
; TEHTAVA:
;        Yhteenlaskun suorittava funktio 
;
;	Input: Summattavat luvut
;			double luku1	
;			double luku2
;
;	Output:
;			Lukujen summa
;
;  Kaytetyt globaalit muuttujat:
;
; Huomioitavaa:
;	Miinus lasku suoritetaan negatiivisella parametrilla
;
;*********************************************************************/
double plus_miinus (double luku1, double luku2)
{
	double tulos;
	tulos = luku1 + luku2;
#ifdef DEBUG
	printf ("%d%c%d=%d", luku1, SUMMA, luku2, tulos);
#endif
	return tulos;
}



/*********************************************************************
;
;	P R O C E D U R E   D E S C R I P T I O N
;
;---------------------------------------------------------------------
;
; NIMI: kerto
;
; TEHTAVA:
;        Kertolaskun suorittava funktio 
;
;	Input: Kerrottavat luvut
;			double luku1	
;			double luku2
;
;	Output:
;			Kertolaskun tulos
;
;  Kaytetyt globaalit muuttujat:
;
; Huomioitavaa:
;
;*********************************************************************/
double kerto (double luku1, double luku2)
{
	double tulos;
	tulos = luku1 * luku2;
#ifdef DEBUG
	printf ("%d%c%d=%d", luku1, KERTO, luku2, tulos);
#endif
	return tulos;
}


/*********************************************************************
;
;	P R O C E D U R E   D E S C R I P T I O N
;
;---------------------------------------------------------------------
;
; NIMI: jako
;
; TEHTAVA:
;        Jakolaskun suorittava funktio 
;
;	Input: jaettavat luvut
;			double luku1	
;			double luku2
;
;	Output:
;			Jakolaskun tulos
;
;  Kaytetyt globaalit muuttujat:
;
; Huomioitavaa:
;
;*********************************************************************/
double jako (double luku1, double luku2)
{
	double tulos;
	tulos = luku1 / luku2;
#ifdef DEBUG
	printf ("%d%c%d=%d", luku1, JAKO, luku2, tulos);
#endif
	return tulos;
}

