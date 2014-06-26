#include <stdio.h>
#include <linux/input.h>

int main()
{

	unsigned long bit[EV_CNT / (sizeof(long) * 8) + 1];
	unsigned long absbit[ABS_MAX / (sizeof(long) * 8) + 1];

	printf("EV_CNT / (sizeof(long) * 8) + 1: %d\n", EV_CNT / (sizeof(long) * 8) + 1);
	printf("ABS_MAX / (sizeof(long) * 8) + 1: %d\n", ABS_MAX / (sizeof(long) * 8) + 1);
	printf("EVIOCGVERSION: %d\n", EVIOCGVERSION);
	printf("EV_VERSION: %d\n", EV_VERSION);
	printf("EVIOCGBIT(0, sizeof(bit)): %d\n", EVIOCGBIT(0, sizeof(bit)));
	printf("EVIOCGBIT(EV_ABS, sizeof(absbit): %d\n", EVIOCGBIT(EV_ABS, sizeof(absbit)));
	printf("EV_ABS: %d\n", EV_ABS);
	printf("ABS_X: %d\n", ABS_X);
	printf("ABS_Y: %d\n", ABS_Y);
	printf("ABS_PRESSURE: %d\n", ABS_PRESSURE);
}
