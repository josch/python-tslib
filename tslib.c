#include <tslib.h>
#include <stdio.h>

int main()
{
	struct tsdev *ts;
	ts = ts_open("/dev/input/event2", 0)
	if (!ts) {
		fprintf(stderr, "cannot open event2");
		return 1;
	}
}
