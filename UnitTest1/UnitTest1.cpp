#include "pch.h"
#include "CppUnitTest.h"
#include "../OOPLab 1.5/OOPLab 1.5.cpp"
#include "../OOPLab 1.5/Man.h"
#include "../OOPLab 1.5/Student.cpp"
#include "../OOPLab 1.5/Student.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student s;
			Man xin;
			s.Init(4, xin);
			Assert::AreEqual(s.Kurs(2), 2);
		}
	};
}
