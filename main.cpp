#include <stdio.h>
#include <time.h>
#include "E101.h"



int main() {
	init();
	MazeSolver solver;
	solver.q2();

	return 0;
}

class MazeSolver {
	Camera camera;
public:
	void q1() {
		//TODO: Move in a straight line and open gate
	}

	void q2() {
		while (true) {
			Movement m = camera.getNextDirection();
			set_motor(1, m.motorLeft);
			set_motor(2, m.motorRight);
			sleep1(0, 500)
		}
	}

	void q3() {

	}

	void q4() {

	}
};
