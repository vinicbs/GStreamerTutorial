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

private:
	int argc;
	char **argv;

};

