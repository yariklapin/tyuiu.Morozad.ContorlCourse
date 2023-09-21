// tyuiu.Morozad.ContorlCourse.V3.lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "..//Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

// TODO: This is an example of a library function
class Service : public ISprint0Task8V3 
{
	double Proizved(float a, float b, float c) override
	{
		return (5 + (2 * a - b) / (3 + c * c));
	}
};
