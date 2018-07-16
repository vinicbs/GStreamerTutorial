#pragma once
#include <gst/gst.h>
class Tutorials
{
public:
	Tutorials(int argc, char *argv[]);
	~Tutorials();

	void tutorial_2();
	void tutorial_3();
	void tutorial_4();
	void tutorial_5();
	void tutorial_6();
	void tutorial_7();
	void tutorial_8();

private:
	int argc;
	char **argv;

};

