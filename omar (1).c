
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
void print_products(int table[]);
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
        printf("Jatketaanko (y/n)?\n");
        scanf("%c",&jatko );
    }
    while(jatko!='n');
    
        print_products(product);  /*tässä puuttui s-kirjain sanasta products*/
    
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

void ask_product(int table[])  /*tässä oli lopussa puolipiste,ei saa olla...*/
{
    int tuotenro;
    int kpl;
    printf("Anna tuotenro:");
    tuotenro=ask_integer_number(MIN_TABLE, MAX_TABLE); /*tässä tein muutoksen*/
    printf("Anna tuoteen %d kappalemaara:",tuotenro);
    kpl=ask_integer_number(MIN_TABLE, MAX_TABLE);   /*samoin kuin tässä*/
    table[tuotenro] = kpl;

}


int ask_integer_number(int min, int max)
{
    int number;
    int ok;
    char no;
    char vika;


    ok = scanf("%d%c", &number,&vika);
    if(ok == 0)
        scanf("%c%c",&no,&vika);
    while (number < min || number > max ||ok < 0)
    {
        printf("The number not found %d,%d, try again >",min, max);
        ok = scanf("%d%c",&number,&vika);
        if(ok == 0)
            scanf("%c%c",&no,&vika);
    }
    return number;
}

void print_products(int table[])   /*tässä puuttui s-kirjain sanasta products*/
{
    int i;
    for(i=0 ; i<MAX_TABLE; i++)
    {
        printf("tuoteen %d on %d kpl\n",i,table[i]);
    }

}

