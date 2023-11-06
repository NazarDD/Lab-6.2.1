#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.2.1/Lab 6.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
    TEST_CLASS(UnitTest61)
    {
    public:
        TEST_METHOD(TestFindMax)
        {
            std::vector<int> a = { 17, 42, 5, 89, 33, 71, 12, 56, 8, 95, 27, 63, 38, 19, 74, 52, 11, 68, 31, 47, 22 };
            int max = findMax(a);
            Assert::AreEqual(max, 95);
        }

        TEST_METHOD(TestFindMin)
        {
            std::vector<int> a = { 77, 3, 61, 14, 29, 50, 91, 6, 38, 22, 57, 18, 12, 45, 83, 9, 37, 70, 25, 48, 2 };
            int min = findMin(a);
            Assert::AreEqual(min, 2);
        }
    };
}
