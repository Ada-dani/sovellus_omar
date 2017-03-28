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

/* Globaal constants */
#define X_MIN -5
#define X_MAX 9
#define YLARAJA 66
/* Globaal variables */

/* Globaal structures */

/*-------------------------------------------------------------------*
*    FUNCTION PROTOTYPES                                             *
*--------------------------------------------------------------------*/
void plot (signed int x, signed int y);
signed int f (signed x);
/*********************************************************************
*    MAIN PROGRAM                                                      *
**********************************************************************/

int
main ()
{
int y;
int x;

  printf
    (" 0....5....10...15...20...25...30...35...40...45...50...55...60...65\n");

  for (x = X_MIN; x <= X_MAX; x++)
    {
      y=f(x);
      plot (x, y);
    }

}
/* end of main */

/*********************************************************************
*    FUNCTIONS                                                     *
**********************************************************************/
void
plot (signed int x, signed int y)
{
  int a;
  printf ("%2d", x);
  for (a =1; a < y; a++)
    {
      printf (" ");

}
      printf ("*");
int b;
	for (b = 0+y ; b < YLARAJA ; b= b++)
	{
 	printf (" ");
	}
      printf ("(%2d)\n", y);
}

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

signed int
f (signed int x)
{
  int y;
  y = x * x - 3 * x + 5;
  return y;
}

