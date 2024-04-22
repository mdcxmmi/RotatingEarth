#include "pch.h"
#include "CppUnitTest.h"
#include "../RotatingEarth/RotatingEarth.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
	TEST_CLASS(Tests)
	{
	public:
		TEST_METHOD(increaseAngleTest)
		{
			angle = 5;
			increaseAngle();
			Assert::AreEqual(angle, 5.2);
		}
		TEST_METHOD(VertexCountTest)
		{
			Assert::AreEqual(VertexCount, 129600);
		}
	};
}
