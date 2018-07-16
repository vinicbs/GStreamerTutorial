#pragma once
#include <gst/gst.h>
#include <gst/audio/audio.h>
#include <string.h>
class Tutorial8
{
public:
	typedef struct _CustomData {
		GstElement *pipeline, *app_source, *tee, *audio_queue, *audio_convert1, *audio_resample, *audio_sink;
		GstElement *video_queue, *audio_convert2, *visual, *video_convert, *video_sink;
		GstElement *app_queue, *app_sink;

		guint64 num_samples;   /* Number of samples generated so far (for timestamp generation) */
		gfloat a, b, c, d;     /* For waveform generation */

		guint sourceid;        /* To control the GSource */

		GMainLoop *main_loop;  /* GLib's Main Loop */
	} CustomData;

	Tutorial8(int argc, char **argv);
	~Tutorial8();
	int init();
	static gboolean push_data(CustomData *data);
	static void start_feed(GstElement *source, guint size, CustomData *data);
	static void stop_feed(GstElement *source, CustomData *data);
	static void new_sample(GstElement *sink, CustomData *data);
	static void error_cb(GstBus *bus, GstMessage *msg, CustomData *data);


private:
	int argc;
	char **argv;
};

