#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab-5.5\Lab-5.5.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 10;
			int t;
			int depth{};
			t = (n, 1, depth);
			Assert::AreEqual(0, t);
		}
	};
}
