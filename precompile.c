#include <stdio.h>

#define PII 3.1415
#define PHONE_NUMBER 388290993
#define SALUTE "Did You know:\n"
#define MACRO printf("This is called Macro\n");
#define PRINT_VALUES(a,b) printf("These are the values for a=%d and b=%d\n",a,b)
#define COMPLEX_CALCULATION(a,b)  a*b+(3*b)-a+b*(a-3*(b-a))

void subprogram(void);

int main(void)
{int i;
  printf (SALUTE);
  PRINT_VALUES(4,10);
  i=COMPLEX_CALCULATION(PII,5);

  printf ("and the value of PII is %f\n",PII);
  MACRO
  PRINT_VALUES(PII,PHONE_NUMBER);
    subprogram();
}

void subprogram(void)
{
int i;

  printf("Definitions work also here\n");
  printf("The area of a circle with diameter of 10 cm is %.2f\n",PII*PII*10);
  i=COMPLEX_CALCULATION(55,PII);
  }

