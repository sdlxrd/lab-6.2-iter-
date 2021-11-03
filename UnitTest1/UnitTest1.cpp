#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\lab 6.2(iter)\lab 6.2(iter)\lab 6.2(iter).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int i = 5;
			int p = abs(i % 2);
			Assert::AreEqual(p, 1);
		}
	};
}
