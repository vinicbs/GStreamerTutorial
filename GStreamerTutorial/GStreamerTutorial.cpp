// GStreamerTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Tutorials.h"

int main(int argc, char **argv)
{
	Tutorials *tutorials = new Tutorials(argc, argv);
	
	tutorials->tutorial_8();
}

