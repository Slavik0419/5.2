#include "pch.h"
#include "CppUnitTest.h"
#include "../5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double a = 1.0;
			A(1, 2, a);


			Assert::AreEqual(a, 15.0);
		}
	}
	;
}
