#include "cpptest.h"

CPPTEST_CONTEXT("ATP_UT/ATP_UT/source/AppLogic/PeriodHandle/InitManage/RdModeInit.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("ATP_UT/ATP_UT/source/AppLogic/PeriodHandle/InitManage/RdModeInit.c");

CPPTEST_TEST_SUITE(TestSuite_RdModeInit);
CPPTEST_TEST_SUITE_END();
        

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_RdModeInit);

void TestSuite_RdModeInit_setUp()
{
}

void TestSuite_RdModeInit_tearDown()
{
}


/**
 * =测试目的=
 *   测试函数RDInit能否按照预期执行
 *   满足if (bnfBackRunConfigStru != NULL_PTR)[1=1]
 *
 * =被测函数=
 *   RDInit
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数bnfBackRunConfigStru,ReverseFaoInit打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 3
 */
/**
 * =测试目的=
 *   测试函数RDInit能否按照预期执行
 *   满足if (ATP_TRUE != GetReversingFalg())[0=0]
 *
 * =被测函数=
 *   RDInit
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数GetReversingFalg打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 3
 */
