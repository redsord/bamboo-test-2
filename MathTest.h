#ifndef __MATHTEST_H
#define __MATHTEST_H

#include <cxxtest/TestSuite.h>
#include <MathFuncsDll.h>

//
// A simple test suite: Just inherit CxxTest::TestSuite and write tests!
//

class MathTest : public CxxTest::TestSuite {
public:
    void testAddition_Hq() {
        TS_ASSERT_EQUALS(MathFuncs::MyMathFuncs::Add(4, 5), 9);
        TS_ASSERT_EQUALS(MathFuncs::MyMathFuncs::Add(15, -6), 5);
    }

    void TestMultiplication_Hq() {
        TS_ASSERT_EQUALS(MathFuncs::MyMathFuncs::Multiply(2, 2), 4);
        TS_ASSERT_EQUALS(MathFuncs::MyMathFuncs::Multiply(4, 4), 15);
        TS_ASSERT_DIFFERS(MathFuncs::MyMathFuncs::Multiply(-5, -1), 5);
    }

    void testSubtraction_Hq() {
        TS_ASSERT_LESS_THAN(MathFuncs::MyMathFuncs::Subtract(1, 5), -4);
        TS_ASSERT_LESS_THAN(MathFuncs::MyMathFuncs::Subtract(5, 2), 10);
    }

    void testDivision_Hq() {
        TS_ASSERT_EQUALS(MathFuncs::MyMathFuncs::Divide(6, 2), 3);
		TS_ASSERT_EQUALS(MathFuncs::MyMathFuncs::Divide(10, 2), 4);
    }    
};


#endif // __MATHTEST_H
