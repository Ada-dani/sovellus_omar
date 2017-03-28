#include"laskin2.c"

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
;			float luku1	
;			float luku2
;
;	Output:
;			Jakolaskun tulos
;
;  Kaytetyt globaalit muuttujat:
;
; Huomioitavaa:
;
;*********************************************************************/
float jako (float luku1, float luku2)
{
	float tulos;
	tulos = luku1 / luku2;
#ifdef DEBUG
	printf ("%f%c%f=%f", luku1, JAKO, luku2, tulos);
#endif
	return tulos;
}
