#include <stdio.h>
#define MIN_RESISTANCE 1
#define MAX_RESISTANCE 10000
#define MIN_VOLTAGE 0
#define MAX_VOLTAGE 48
int main(void)
{
int resistance;
int voltage;
float current;
float powerloss;
	printf("Give me the resistance between %d and %d:\n",MIN_RESISTANCE, MAX_RESISTANCE);
	scanf("%d",&resistance);

while(resistance < MIN_RESISTANCE ||resistance >  MAX_RESISTANCE )
{
	printf("error\n");
	printf("Give me the resistance between %d and %d:\n",MIN_RESISTANCE, MAX_RESISTANCE);
	scanf("%d",&resistance);
}

	printf("Give me the voltage  between %d and %d:\n",MIN_VOLTAGE, MAX_VOLTAGE);
	scanf("%d",&voltage);

while(voltage < MIN_VOLTAGE ||voltage > MAX_VOLTAGE)
{
	printf("error\n");
	printf("Give me the  voltage between %d and %d:\n",MIN_VOLTAGE, MAX_VOLTAGE);
	scanf("%d",&voltage);
}
current = (float)voltage / resistance;
powerloss = voltage * current;
	printf("%.2f",current);
	printf("%.2f",powerloss);
printf("resistance with %d ohm and voltage with %d V, current is %f A and powerloss is %f W's\n", resistance, voltage, current, powerloss);

return 0;
}

