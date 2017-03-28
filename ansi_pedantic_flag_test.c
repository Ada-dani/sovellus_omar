#include <stdio.h>
#include <limits.h>             /* needed for getting maximum integer value */

#define MIN_RES 1
#define MAX_RES 10000
#define MIN_VOLTAGE 0
#define MAX_VOLTAGE 48
#define INFINITE_NUMBER INT_MAX /* biggest number there is */

int ask_integer_number (int min, int max);
void print_numbers(int voltage, int resistance);

int
main (void)
{
  int resistance, voltage;
  float current, power;

  /* ask the voltage from user */
  printf ("Give me voltage between %d and %d >", MIN_VOLTAGE, MAX_VOLTAGE);
  voltage = ask_integer_number (MIN_VOLTAGE, MAX_VOLTAGE);

/* Same thing with resistancnce */
  printf ("give me resistance between %d and %d >", MIN_RES, MAX_RES);
  resistance = ask_integer_number (MIN_RES, MAX_RES);


/* print it out */

  print_numbers(voltage,resistance);


}				/* end of main */

/****************************************************************************/
int
ask_integer_number (int min, int max)
{
  int number_asked_from_user = INFINITE_NUMBER; /* initialized to biggest number there is */

  scanf ("%d", &number_asked_from_user);

  /* do no accept numbers that are not in range */
  while (number_asked_from_user < min || number_asked_from_user > max)
    {
      printf ("The number You gave was not in rage %d,%d, give it again >",
	      min, max);
      scanf ("%d", &number_asked_from_user);
    }				/* end of while */
  return number_asked_from_user;
}				/* end of ask_integer_number */

/**************************************************************************************/

void print_numbers(int voltage, int resistance)
{
float current,power;


  current = (float) voltage / resistance;
  power = voltage * current;

/* print it out */

  printf ("Current with %d ohm resistance and %d volt voltage is ", voltage, resistance);
  printf ("%.2f A and powerloss is %.2f W's.\n", current, power);

} /* end of print_numbers */