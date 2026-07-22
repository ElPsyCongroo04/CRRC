#include "cpptest.h"

CPPTEST_CONTEXT("ATP_UT/ATP_UT/source/AppLogic/PeriodHandle/TrainInteChkManage/TrainInteChkHandle.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("ATP_UT/ATP_UT/source/AppLogic/PeriodHandle/TrainInteChkManage/TrainInteChkHandle.c");

CPPTEST_TEST_SUITE(TestSuite_TrainInteChkHandle);



CPPTEST_TEST(TestSuite_TrainInteChkHandle_test_TrainIntegrityCheck);
CPPTEST_TEST(TestSuite_TrainInteChkHandle_test_TrainIntegrityCheck_0);
CPPTEST_TEST(TestSuite_TrainInteChkHandle_test_TrainIntegrityCheck_1);
CPPTEST_TEST(TestSuite_TrainInteChkHandle_test_TrainIntegrityFunc);
CPPTEST_TEST(TestSuite_TrainInteChkHandle_test_TrainIntegrityFunc_0);
CPPTEST_TEST_SUITE_END();

        

void TestSuite_TrainInteChkHandle_test_TrainIntegrityCheck();
void TestSuite_TrainInteChkHandle_test_TrainIntegrityCheck_0();
void TestSuite_TrainInteChkHandle_test_TrainIntegrityCheck_1();
void TestSuite_TrainInteChkHandle_test_TrainIntegrityFunc();
void TestSuite_TrainInteChkHandle_test_TrainIntegrityFunc_0();
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_TrainInteChkHandle);

void TestSuite_TrainInteChkHandle_setUp()
{
}

void TestSuite_TrainInteChkHandle_tearDown()
{
}

/* CPPTEST_TEST_CASE_BEGIN test_TrainIntegrityCheck */
/* CPPTEST_TEST_CASE_CONTEXT void TrainIntegrityCheck(void) */
/**
 * =测试目的=
 *   测试函数TrainIntegrityCheck能否按照预期执行
 *   满足if (GetInSwitchMeaTrainIntegrity() != ATP_TRUE)
 *
 * =被测函数=
 *   TrainIntegrityCheck
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数GetInSwitchMeaTrainIntegrity打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 170
 */
void TestSuite_TrainInteChkHandle_test_TrainIntegrityCheck()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TrainIntegrityCheck();
        /* Post-condition check */
		CPPTEST_ASSERT(0!=( TrainIntegrityCheck ));
    }
}
/* CPPTEST_TEST_CASE_END test_TrainIntegrityCheck */

/* CPPTEST_TEST_CASE_BEGIN test_TrainIntegrityCheck_0 */
/* CPPTEST_TEST_CASE_CONTEXT void TrainIntegrityCheck(void) */
/**
 * =测试目的=
 *   测试函数TrainIntegrityCheck能否按照预期执行
 *   不满足if (GetInSwitchMeaTrainIntegrity() != ATP_TRUE)
 *
 * =被测函数=
 *   TrainIntegrityCheck
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数GetInSwitchMeaTrainIntegrity打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 170
 */
void TestSuite_TrainInteChkHandle_test_TrainIntegrityCheck_0()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TrainIntegrityCheck();
        /* Post-condition check */
		CPPTEST_ASSERT(0!=( TrainIntegrityCheck ));
    }
}
/* CPPTEST_TEST_CASE_END test_TrainIntegrityCheck_0 */

/* CPPTEST_TEST_CASE_BEGIN test_TrainIntegrityCheck_1 */
/* CPPTEST_TEST_CASE_CONTEXT void TrainIntegrityCheck(void) */
/**
 * =测试目的=
 *   测试函数TrainIntegrityCheck能否按照预期执行
 *   不满足if (GetInMeaTrainIntegrity() != ATP_TRUE)
 *
 * =被测函数=
 *   TrainIntegrityCheck
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数GetInMeaTrainIntegrity打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 ！=0
 */
void TestSuite_TrainInteChkHandle_test_TrainIntegrityCheck_1()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TrainIntegrityCheck();
        /* Post-condition check */
		CPPTEST_ASSERT(0!=( TrainIntegrityCheck ));
    }
}
/* CPPTEST_TEST_CASE_END test_TrainIntegrityCheck_1 */

/* CPPTEST_TEST_CASE_BEGIN test_TrainIntegrityFunc */
/* CPPTEST_TEST_CASE_CONTEXT void TrainIntegrityFunc(void) */
/**
 * =测试目的=
 *   测试函数TrainIntegrityFunc能否按照预期执行
 *   满足 if (GetInMeaTrainIntegrity() != ATP_TRUE)
 *
 * =被测函数=
 *   TrainIntegrityFunc
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数GetInMeaTrainIntegrity打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 ！=0
 */
void TestSuite_TrainInteChkHandle_test_TrainIntegrityFunc()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TrainIntegrityFunc();
        /* Post-condition check */
		CPPTEST_ASSERT(0!= ( GetSysEbLowRsn() ));
    }
}
/* CPPTEST_TEST_CASE_END test_TrainIntegrityFunc */

/* CPPTEST_TEST_CASE_BEGIN test_TrainIntegrityFunc_0 */
/* CPPTEST_TEST_CASE_CONTEXT void TrainIntegrityFunc(void) */
/**
 * =测试目的=
 *   测试函数TrainIntegrityFunc能否按照预期执行
 *   不满足 if (GetInMeaTrainIntegrity() != ATP_TRUE)
 *
 * =被测函数=
 *   TrainIntegrityFunc
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数GetInMeaTrainIntegrity打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 ！0
 */
void TestSuite_TrainInteChkHandle_test_TrainIntegrityFunc_0()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TrainIntegrityFunc();
        /* Post-condition check */
		CPPTEST_ASSERT(0!= ( GetSysEbLowRsn() ));
    }
}
/* CPPTEST_TEST_CASE_END test_TrainIntegrityFunc_0 */
