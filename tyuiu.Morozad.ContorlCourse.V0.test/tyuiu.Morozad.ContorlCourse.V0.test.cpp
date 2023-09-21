#include "pch.h"
#include "CppUnitTest.h"
#include "..//tyuiu.Morozad.ContorlCourse.V0.lib/tyuiu.Morozad.ContorlCourse.V0.lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace tyuiuMorozadContorlCourseV0test
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V0* date = new Service;
			int a = 231;
			Assert::AreEqual(6, date->Control(a));

		}
	};
}
