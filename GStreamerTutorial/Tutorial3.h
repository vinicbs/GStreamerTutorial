#pragma once
#include <gst/gst.h>
class Tutorial3
{
public:
	typedef struct _CustomData {
		GstElement *pipeline;
		GstElement *source;
		GstElement *videoConvert;
		GstElement *videoSink;
		GstElement *audioConvert;
		GstElement *audioSink;
	} CustomData;

	Tutorial3(int argc, char **argv);
	~Tutorial3();
	int init();
	static void pad_added_handler(GstElement *src, GstPad *pad, CustomData *data);

private:
	int argc;
	char **argv;
};

