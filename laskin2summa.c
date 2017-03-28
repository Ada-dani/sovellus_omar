/*********************************************************************
*                                                                    *
*    ALIOHJELMAT                                                     *
*                                                                    *
**********************************************************************/
#include "laskin2.h"
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
;			float luku1	
;			float luku2
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
float plus_miinus (float luku1, float luku2)
{
	float tulos;
	tulos = luku1 + luku2;
#ifdef DEBUG
	printf ("%f%c%f=%f", luku1, SUMMA, luku2, tulos);
#endif
	return tulos;
}



