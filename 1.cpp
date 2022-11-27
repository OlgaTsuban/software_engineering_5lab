#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Users\User\ConsoleApplication1\ConsoleApplication1\ConsoleApplication1.cpp"
 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My1
{
	TEST_CLASS(My1)
	{
	public:
		
		TEST_METHOD(result1)
		{
			double x1 = 5;
			static double x, y, y1;
			 
			double x2 = 12;
			int n = 3;
			double k = 1;
			double expected = -3;
			double actual = result(x1, x2, k, n, x, y, y1) ;
			Assert::AreEqual(expected, actual);
		}
	public:
 		TEST_METHOD(result2)
		{
			double x1 = -5;
			double x=0, y1=0,y=0;
			double x2 = -1;
			int n = 3;
			double k = 1;
			double expected = -11;
			double actual = result(x1, x2, k, n, x, y, y1);
			Assert::AreEqual(expected, actual);

		}
	};
	TEST_CLASS(FUNC)
	{
	public:
		TEST_METHOD(F1)
		{
			//double x1 = 5;
			//double x2 = 12;
			//double n = 2;
			double k = 1;
			try
			{
				check1(  );
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}

		}
		TEST_METHOD(F2)
		{
			double x1 = 4;
			double x2 = 12;
			try
			{
				check2(x1, x2);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
		TEST_METHOD(F3)
		{
			int n = 5;
			try
			{
				check3(n);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
		TEST_METHOD(F4)
		{
			double k = 2;
			try
			{
				check4(k);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
		TEST_METHOD(F5)
		{
			 int n = 5;
			double x2 = 10;
			try
			{
				check5(n, x2);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
		TEST_METHOD(F6)
		{
			double x1 = 6;
			double x2 = 11;
			try
			{
				check6(x1, x2);
				Assert::IsTrue(true);
			}
			catch(...)
			{
				Assert::Fail();
			}
		}
	};
}
