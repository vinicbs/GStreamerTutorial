#include "pch.h"
#include "Tutorials.h"
#include "Tutorial2.h"
#include "Tutorial3.h"
#include "Tutorial4.h"
#include "Tutorial5.h"
#include "Tutorial6.h"
#include "Tutorial7.h"
#include "Tutorial8.h"

Tutorials::Tutorials(int argc, char *argv[])
{
	this->argc = argc;
	this->argv = argv;
}

Tutorials::~Tutorials()
{
}

void Tutorials::tutorial_2()
{
	Tutorial2 *tutorial2 = new Tutorial2(argc, argv);
	tutorial2->init();
}


/*Comment nº1: In this tutorial i'm trying to play both video and audio. I separated both audio and video converter and sink in
the CustomData struct, maybe there is a better way for doing that, all in the same convert and sink attribute*/
void Tutorials::tutorial_3()
{
	Tutorial3 *tutorial3 = new Tutorial3(argc, argv);
	tutorial3->init();
}


/*This tutorial is for managing time in video streams*/
void Tutorials::tutorial_4()
{
	Tutorial4 *tutorial4 = new Tutorial4(argc, argv);
	tutorial4->init();
}


/*This tutorial is for learning the GTK+, which is a toolkit for creating graphical user interface. We are not going to 
implement this tutorial right now because we use Qt for all GUIs in Multipresenca*/
void Tutorials::tutorial_5()
{
	Tutorial5 *tutorial5 = new Tutorial5(argc, argv);
	//tutorial5->init();
}

/*Media formats and Pad Capabilities*/
/*Print Media formats and Pad information of a test-audio*/
void Tutorials::tutorial_6()
{
	Tutorial6 *tutorial6 = new Tutorial6(argc, argv);
	tutorial6->init();
}


void Tutorials::tutorial_7()
{
	Tutorial7 *tutorial7 = new Tutorial7(argc, argv);
	tutorial7->init();
}

void Tutorials::tutorial_8()
{
	Tutorial8 *tutorial8 = new Tutorial8(argc, argv);
	tutorial8->init();
}
