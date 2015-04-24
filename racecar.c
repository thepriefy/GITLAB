/*Pittawat Jungsanguansit 
  Student no.55070503435  */

/*This program will calculate how far a racing car will travel in a given time*/

#include<stdio.h>
#include<string.h>

/*calculateDistance function*/
double calculateDistance(double speed,double time)
{
	double distance = speed*time;
	return distance;
}

int main()
{
	char inputLine[32];
	double speed;
	int time;
	double distance;
	
	/*Get speed value from user*/
	printf("Enter speed in km/second: ");
	fgets(inputLine,32,stdin);
	sscanf(inputLine,"%lf",&speed);

	/*Get time value from user*/
	printf("Enter time in sec: ");
	fgets(inputLine,32,stdin);
	sscanf(inputLine,"%d",&time);

	
	/*Call calculateDistance function*/	
	distance=calculateDistance(speed,time);
	

	/*Display the distance results */
	printf("The distance traveled in %d seconds is %f kilometers\n",
	time, distance); 
	
}
