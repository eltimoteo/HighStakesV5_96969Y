#pragma once

namespace samplemech {
	void startThread();
	
	void preauton();
	
	void setState(int, double = 0);
	
	void switchState();
	
	void control(int);
	
	bool canControl();

	extern int _taskState;
	extern double _taskDelay;
}
