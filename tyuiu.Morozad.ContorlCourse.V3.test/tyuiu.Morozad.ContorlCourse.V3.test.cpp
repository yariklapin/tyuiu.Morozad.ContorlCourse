#include "pch.h"
#include "CppUnitTest.h"
#include "..//tyuiu.Morozad.ContorlCourse.V3.lib/tyuiu.Morozad.ContorlCourse.V3.lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tyuiuMorozadContorlCourseV3test
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V3* date = new Service;
			float a = 1;
			float b = 1;
			float c = 1;
			Assert::AreEqual(5.25, date->Proizved(a, b, c));
		}
	};
}
