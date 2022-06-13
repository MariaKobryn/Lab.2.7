#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab.2.7/Payment.cpp"
#include "../Lab.2.7/Money.cpp"
#include "../Lab.2.7/Money.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest27
{
	TEST_CLASS(UnitTest27)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Payment g;
			g.Init(20000, 24, 10, 24, 2025);
			int test = g.³nterestt();
			Assert::AreEqual(22000, test);
		}
	};
}
