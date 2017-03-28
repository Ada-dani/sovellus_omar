#include <stdio.h>
#define MIN_RESISTANCE 1
#define MAX_RESISTANCE 10000
#define MIN_VOLTAGE 0
#define MAX_VOLTAGE 48

int ask_integer_number(int min, int max);
void print_number(int voltage, int resistance);

void main(void)
{
int resistance;
int voltage;
printf("Give me the resistance between %d and %d:\n,",MIN_RESISTANCE, MAX_RESISTANCE);
printf("Give me the voltage between %d and %d:\n,",MIN_VOLTAGE, MAX_VOLTAGE);

resistance = ask_integer_number(MIN_RESISTANCE,MAX_RESISTANCE);
voltage = ask_integer_number(MIN_VOLTAGE,MAX_VOLTAGE);
print_number(resistance,voltage);
}
void print_number(int resistance, int voltage)
{
float current;
float powerloss;

current = (float)voltage / resistance;
powerloss = current * voltage;
	printf("%.2f",current);
	printf("%.2f",powerloss);

printf("resistance with %d ohm and voltage with %d V, current is %f A and powerloss is %f W's\n",resistance, voltage, current, powerloss);
}
int ask_integer_number(int min, int max)
{
int number;
scanf("%d",&number);
while(number < min|| number > max)
{
printf("the number must be between %d and %d\n", min, max);
printf("Give me the number between %d and %d:\n",min, max);
scanf("%d",&number);

}

return number;
}

