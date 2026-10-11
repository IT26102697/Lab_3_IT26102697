#include <stdio.h>
int main()

{
	double height, flowrate;
	
	printf("Enter the height of the dam in meters");
	scanf("%lf",&height);

	printf("Enter the flow rate of water in cubic meter per second:");
	scanf("%lf", &flowrate);

	double mass;
	mass = flowrate * 1000;
	
	double work;
	const double g = 9.80;
	work = mass * g * height;

	double power;
	const double efficientcy = 0.90;
	power = efficientcy * work;
	
	double powerMW;
	powerMW = power / 1000000;

	printf("Predicted power generated: %.2f megawatts\n", powerMW);

	return 0;
}



