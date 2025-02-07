#include "Mechanics/sampleMechanics.h"
#include "main.h"

namespace {
    bool controlState = true;
}

namespace samplemech {
	void startThread() {
		while (true) {
			// Thread code here

			task::sleep(20);
		}
	}

	void preauton() {

	}

	void setState(int state, double delaySec) {
		// Set global variables
		_taskState = state;
		_taskDelay = delaySec;

		task setState([] () -> int {
			// Get global variables
			int taskState = _taskState;
			double taskDelay = _taskDelay;

			// Delay setting state
			if (taskDelay > 1e-9) {
				task::sleep(taskDelay * 1000);
			}

			// Set state here

			return 1;
		});
	}

	void switchState() {
		
	}

	void control(int state) {
		if (canControl()) {
			// Control code here
		}
	}

	bool canControl() {
		return controlState;
	}

	int _taskState;
	double _taskDelay;
}

namespace {
}