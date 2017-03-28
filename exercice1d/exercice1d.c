#include <stdio.h>
#define MIN_RESISTANCE 1
#define MAX_RESISTANCE 10000
#define MIN_VOLTAGE 0
#define MAX_VOLTAGE 48

int ask_integer_number(int min, int max);
void print_number(int voltage, int resistance);

int main ()
{
int resistance;
int voltage;
printf("Give the resistance between %d and %d:\n,", MIN_RESISTANCE, MAX_RESISTANCE);
printf("Give the voltage between %d and %d:\n,", MIN_VOLTAGE, MAX_VOLTAGE);

resistance = ask_integer_number(MIN_RESISTANCE, MAX_RESISTANCE);
voltage = ask_integer_number(MIN_VOLTAGE, MAX_VOLTAGE);
print_number(resistance,voltage);
}

void print_number(int voltage, int resistance)
{
float current;
float powerloss;

current = (float)(voltage / resistance);
powerloss = current * voltage;
	printf("%.2f",current);
	printf("%.2f",powerloss);
printf("resistance with %d ohm  and voltage with %d V, current is %f A and pwerloss is %f W's\n", resistance, voltage, current, powerloss);
}

int ask_integer_number(int min, int max)
{
int number;
int accede;
char basket;
char trouble;

	accede = scanf("%d",&number);
if(accede == 0)
	scanf("%c%c",&basket,&trouble);
while (number < min || number > max || accede < 0)
{
printf("The number must be between %d,%d, give it again >",min, max);
	accede = scanf("%d",&number);

	if(accede == 0)
	scanf("%c%c",&basket,&trouble);
}
return number;
}

