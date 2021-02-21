# basic-data-types-challange

Inputs: integer, long, char, float and double
Note: the floating point value should be correct up to 3 decimal places and the double to 9 decimal places 
```cpp
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
```
