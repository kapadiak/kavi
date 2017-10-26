#include <stdio.h>
typedef struct {
	double x;
	double y;
} Coor;

Coor cone1;
Coor cone2;
Coor cone3;
Coor cone4;

static Coor coneList[4];

void  setup();
int main(int argc, char const *argv[])
{
	setup();
	printf("We compiled robot! %g", coneList[0].x);
	return 0;
}

void setup() {
	cone1.x = 139.2;
	cone1.y = 93.9;
	cone2.x = 
	coneList[0] = cone1;
	coneList[1] = cone2;
	coneList[2] = cone3;
	coneList[3] = cone4;
};