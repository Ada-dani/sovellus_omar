
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
#
/*-------------------------------------------------------------------*
*    HEADER TIEDOSTOT                                                *
*--------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>
/*-------------------------------------------------------------------*
*    GLOBAALIT MUUTTUJAT                                             *
*--------------------------------------------------------------------*/
/* Ohjaus liput */
//#define DEBUG

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
float plus_miinus (float luku1, float luku2);
float kerto (float luku1, float luku2);
float jako (float luku1, float luku2);
