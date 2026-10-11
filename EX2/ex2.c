#include <stdio.h>
int main()
{
	double speedKmh, distance;
	
	printf("Enter the takeoff speed in Kmh:");
	scanf("%lf", &speedKmh);

	printf("Enter the distance in meters:");
	scanf("%lf", &distance);

	double speedMs;
	speedMs = speedKmh / 3.6;

	double acceleration;
	acceleration = (speedMs * speedMs) / (2 * distance);

	double time;
	time = speedMs / acceleration;

	printf("Acceleration: %.2f m/s^2\n", acceleration);
	printf("Time: %.2f seconds\n", time);

	return 0;
}



