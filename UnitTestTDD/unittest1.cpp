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

		TEST_METHOD(publicCheckGreatness)
		{
			LargestProduct test;
			Assert::AreEqual(999, (int)test.publicCheckGreatness(999,998));
		}

		TEST_METHOD(publicMultiplyNumbers)
		{
			LargestProduct test;
			Assert::AreEqual(5000940, (int)test.publicMultiplyNumbers(0, 1));
		}

		TEST_METHOD(publicFollowMainLoop)
		{
			LargestProduct test;
			Assert::AreEqual((uint64_t)23514624000, test.publicFollowMainLoop());
		}

	};
}