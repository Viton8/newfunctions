#include "pch.h"
#include "CppUnitTest.h"
#include "../newfunctions/Header.h"
#include <string> 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace testapp
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestSum)
		{
			int a = 9;
			int b = -6;
			int c = 45;
			int s;
			s = Sum(a, b, c);
			Assert::AreEqual(48, s);
		}
		TEST_METHOD(TestMax)
		{
			int a = 3;
			int b = 6;
			int c = 9;
			int t;
			t = Max(a, b, c);
			Assert::AreEqual(9, t);
		}
		TEST_METHOD(TestAverage)
		{
			int a = 10, b = 9;
			double c;
			c = Average(a, b);
			Assert::AreEqual(9.5, c);
		}
		TEST_METHOD(TestIf2)
		{
			int a = 10;
			int c;
			c = If2(a);
			Assert::AreEqual(11, c);
		}
		TEST_METHOD(TestIf24)
		{
			int x = 10;
			double f;
			f = If24(x);
			std::string d = std::to_string(f);
			std::string result = "-1.088042";
			Assert::AreEqual(result, d);
		}
	};
}