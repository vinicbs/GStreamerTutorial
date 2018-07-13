#pragma once
#include <gst/gst.h>
class Tutorials
{
public:
	/*Used in tutorial 3*/
	typedef struct _CustomData {
		GstElement *pipeline;
		GstElement *source;
		GstElement *videoConvert;
		GstElement *videoSink;
		GstElement *audioConvert;
		GstElement *audioSink;
	} CustomData;


	Tutorials(int argc, char *argv[]);
	~Tutorials();

	int tutorial_2();
	int tutorial_3();
	static void pad_added_handler(GstElement *src, GstPad *pad, CustomData *data);
	int tutorial_4();

private:
	int argc;
	char **argv;

};

