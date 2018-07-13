#pragma once
#include <gst/gst.h>
class Tutorial2
{
public:
	Tutorial2(int argc, char **argv);
	~Tutorial2();
	int init();

private:
	int argc;
	char **argv;
};

