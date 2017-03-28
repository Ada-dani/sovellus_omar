
#include"laskin2.c"
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
;			float luku1	
;			float luku2
;
;	Output:
;			Kertolaskun tulos
;
;  Kaytetyt globaalit muuttujat:
;
; Huomioitavaa:
;
;*********************************************************************/
float kerto (float luku1, float luku2)
{
	float tulos;
	tulos = luku1 * luku2;
#ifdef DEBUG
	printf ("%f%c%f=%f", luku1, KERTO, luku2, tulos);
#endif
	return tulos;
}

