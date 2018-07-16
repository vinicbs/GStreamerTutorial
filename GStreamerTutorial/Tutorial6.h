#pragma once
#include <gst/gst.h>
class Tutorial6
{
public:
	Tutorial6(int argc, char **argv);
	~Tutorial6();
	int init();

	static gboolean print_field(GQuark field, const GValue * value, gpointer pfx);
	static void print_caps(const GstCaps * caps, const gchar * pfx);
	static void print_pad_templates_information(GstElementFactory * factory);
	static void print_pad_capabilities(GstElement *element, gchar *pad_name);

private:
	int argc;
	char **argv;
};

