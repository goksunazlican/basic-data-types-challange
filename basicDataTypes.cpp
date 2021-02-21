#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int intVal;
	long int longVal;
	char charVal;
	float floatVal;
	double doubleVal;

	scanf("%d %ld %c %f %lf", &intVal, &longVal, &charVal, &floatVal, &doubleVal );
	printf("%d\n%ld\n%c\n%.3f\n%.9lf", intVal, longVal, charVal, floatVal, doubleVal );
	return 0;
}
