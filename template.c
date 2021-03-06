/***************************************************************************
 *   Copyright (C) $YEAR$ by $AUTHOR$   *
 *   $EMAIL$   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

/*********************************************************************
*
* 1.  NAME
*     $Source$ 
* 2.  DESCRIPTION
*
* 6.  VERSIONS
*       Original:
*         $Date$ / $Author$
*
*       Version history:
*       $Log$
*
**********************************************************************/

/*-------------------------------------------------------------------*
*    HEADER FILES                                                    *
*--------------------------------------------------------------------*/
#include <stdio.h>

/*-------------------------------------------------------------------*
*    GLOBAL VARIABLES                                                *
*--------------------------------------------------------------------*/
/* Control flags */
#define DEBUG
#define MAX_TABLE 500
#define MIN_TABLE 1

/* Globaal constants */

/* Globaal variables */

/* Globaal structures */

/*-------------------------------------------------------------------*
*    FUNCTION PROTOTYPES                                             *
*--------------------------------------------------------------------*/
int ask_integer_number(int min, int max);
void ask_product(int table[]);
void print_product(int table[]);
/*********************************************************************
*    MAIN PROGRAM                                                      *
**********************************************************************/
int main()
{
char jatko;
int product[MAX_TABLE];


do
{
ask_product(product);
printf("Jatketaanko ?");
scanf("%c",&jatko );
}
while(jatko!='n');
{
print_product(product);
}
}

/* end of main */

/*********************************************************************
*    FUNCTIONS                                                     *
**********************************************************************/


/*********************************************************************
;	F U N C T I O N    D E S C R I P T I O N
;---------------------------------------------------------------------
; NAME:
; DESCRIPTION:
;	Input:
;	Output:
;  Used global variables:
; REMARKS when using this function:
;*********************************************************************/

void ask_product(int table[])
{
int tuotenro; 
int kpl;
printf("Anna tuotenro");
scanf("%d", &tuotenro);
printf("Anna tuoteen %d numero", tuotenro);
scanf("%d", &kpl);
table[tuotenro] = kpl;

}


int ask_integer_number(int min, int max)
{
int number;
int ok;
char no;
char vika;


ok = scanf("%d", &number);
if(ok == 0)
	scanf("%c%c",&no,&vika);
while (number < min || number > max ||ok < 0)
{
printf("The number not found %d,%d, try again >",min, max);
	ok = scanf("%d",&number);
	if(ok == 0)
	scanf("%c%c",&no,&vika);
}
return number;
}

void print_product(int table[])
{
int i;
for(i=0 ; i<MAX_TABLE; i++)
{
printf("tuoteen %d on %d kpl\n",i,table[i]);
}

}
