#include "pch.h"
#include "Tutorials.h"
#include "Tutorial2.h"
#include "Tutorial3.h"
#include "Tutorial4.h"

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
