#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\TDD\main.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestTDD
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(run)
		{
			LargestProduct test;
			Assert::AreEqual(1, test.run());
		}

	};
}