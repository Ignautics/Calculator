#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorUnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			Calculator* calc = new Calculator();
			string ret = calc -> Solve("11+22/2+1");
			Assert::AreEqual(ret, (string)"11+22/2+1=23");
		}

	};
}