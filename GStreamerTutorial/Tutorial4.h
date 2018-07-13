#pragma once
#include <gst/gst.h>
class Tutorial4
{
public:
	/* Structure to contain all our information, so we can pass it around */
	typedef struct _CustomData {
		GstElement *playbin;  /* Our one and only element */
		gboolean playing;      /* Are we in the PLAYING state? */
		gboolean terminate;    /* Should we terminate execution? */
		gboolean seek_enabled; /* Is seeking enabled for this media? */
		gboolean seek_done;    /* Have we performed the seek already? */
		gint64 duration;       /* How long does this media last, in nanoseconds */
	} CustomData;


	Tutorial4(int argc, char **argv);
	~Tutorial4();
	int init();
	/* Forward definition of the message processing function */
	static void handle_message(CustomData *data, GstMessage *msg);

private:
	int argc;
	char **argv;
};

