#include "cpptest.h"

CPPTEST_CONTEXT("ATP_UT/ATP_UT/source/AppLogic/PeriodHandle/StopEnsureManage/StopEnsureHandle.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("ATP_UT/ATP_UT/source/AppLogic/PeriodHandle/StopEnsureManage/StopEnsureHandle.c");

CPPTEST_TEST_SUITE(TestSuite_StopEnsureHandle);
CPPTEST_TEST(TestSuite_StopEnsureHandle_test_StopEnsureProcess_0);
CPPTEST_TEST(TestSuite_StopEnsureHandle_test_StopEnsureProcess_1);
CPPTEST_TEST(TestSuite_StopEnsureHandle_test_StopEnsureProcess_2);
CPPTEST_TEST(TestSuite_StopEnsureHandle_test_StopEnsureProcess_3);
CPPTEST_TEST(TestSuite_StopEnsureHandle_test_StopEnsureProcess_4);
CPPTEST_TEST(TestSuite_StopEnsureHandle_test_StopEnsureProcess_5);
CPPTEST_TEST(TestSuite_StopEnsureHandle_test_StopEnsureProcess_6);
CPPTEST_TEST(TestSuite_StopEnsureHandle_test_GetStopEnsureSta);
CPPTEST_TEST_SUITE_END();
        

void TestSuite_StopEnsureHandle_test_StopEnsureProcess_0();
void TestSuite_StopEnsureHandle_test_StopEnsureProcess_1();
void TestSuite_StopEnsureHandle_test_StopEnsureProcess_2();
void TestSuite_StopEnsureHandle_test_StopEnsureProcess_3();
void TestSuite_StopEnsureHandle_test_StopEnsureProcess_4();
void TestSuite_StopEnsureHandle_test_StopEnsureProcess_5();
void TestSuite_StopEnsureHandle_test_StopEnsureProcess_6();
void TestSuite_StopEnsureHandle_test_GetStopEnsureSta();
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_StopEnsureHandle);

void TestSuite_StopEnsureHandle_setUp()
{
}

void TestSuite_StopEnsureHandle_tearDown()
{
}


/* CPPTEST_TEST_CASE_BEGIN test_StopEnsureProcess_0 */
/* CPPTEST_TEST_CASE_CONTEXT void StopEnsureProcess(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足if(CBTC_LEVEL == ctlLevel)
 *
 * =被测函数=
 *   StopEnsureProcess
 *
 * =初始条件=
 *   初始化全局变量
 *   gStopEnsureSta  = 0;
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 0
 */
void TestSuite_StopEnsureHandle_test_StopEnsureProcess_0()
{
    /* Pre-condition initialization */
    /* Initializing global variable gStopEnsureSta */ 
    {
         gStopEnsureSta  = 0;
    }
    {
        /* Tested function call */
        StopEnsureProcess();
        /* Post-condition check */
    	CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( gStopEnsureSta ));
    }
}
/* CPPTEST_TEST_CASE_END test_StopEnsureProcess_0 */

/* CPPTEST_TEST_CASE_BEGIN test_StopEnsureProcess_1 */
/* CPPTEST_TEST_CASE_CONTEXT void StopEnsureProcess(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足if(CBTC_LEVEL == ctlLevel)
 *   满足if(1U == chkFlag) 
 *   满足if(ZC_VOBC_STOP_REQ_OK == stopReq)
 *
 * =被测函数=
 *   StopEnsureProcess
 *
 * =初始条件=
 *   初始化全局变量
 *   gStopEnsureSta  = 0;
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 0
 */
void TestSuite_StopEnsureHandle_test_StopEnsureProcess_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable gStopEnsureSta */ 
    {
         gStopEnsureSta  = 0;
    }
    {
        /* Tested function call */
        StopEnsureProcess();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( gStopEnsureSta ));
    }
}
/* CPPTEST_TEST_CASE_END test_StopEnsureProcess_1 */

/* CPPTEST_TEST_CASE_BEGIN test_StopEnsureProcess_2 */
/* CPPTEST_TEST_CASE_CONTEXT void StopEnsureProcess(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足if(CBTC_LEVEL == ctlLevel)
 *   满足if(1U == chkFlag) 
 *   满足if(DEFAULT_ZERO == curSpeed)
 *
 * =被测函数=
 *   StopEnsureProcess
 *
 * =初始条件=
 *   初始化全局变量
 *   gStopEnsureSta  = 0;
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 0
 */
void TestSuite_StopEnsureHandle_test_StopEnsureProcess_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable gStopEnsureSta */ 
    {
         gStopEnsureSta  = 0;
    }
    {
        /* Tested function call */
        StopEnsureProcess();
        /* Post-condition check */
    	CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( gStopEnsureSta ));
    }
}
/* CPPTEST_TEST_CASE_END test_StopEnsureProcess_2 */

/* CPPTEST_TEST_CASE_BEGIN test_StopEnsureProcess_3 */
/* CPPTEST_TEST_CASE_CONTEXT void StopEnsureProcess(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足if(CBTC_LEVEL == ctlLevel)
 *   满足if(1U == chkFlag) 
 *   满足if(ZC_VOBC_STOP_REQ_OK == stopReq)
 *   不满足if(0u == curSpeed)
 *   不满if(curSpeed < ebCal)
 *
 * =被测函数=
 *   StopEnsureProcess
 *
 * =初始条件=
 *   初始化全局变量
 *   gStopEnsureSta  = 0;
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值  0
 */
void TestSuite_StopEnsureHandle_test_StopEnsureProcess_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable gStopEnsureSta */ 
    {
         gStopEnsureSta  = 0;
    }
    {
        /* Tested function call */
        StopEnsureProcess();
        /* Post-condition check */
    	CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( gStopEnsureSta ));
    }
}
/* CPPTEST_TEST_CASE_END test_StopEnsureProcess_3 */

/* CPPTEST_TEST_CASE_BEGIN test_StopEnsureProcess_4 */
/* CPPTEST_TEST_CASE_CONTEXT void StopEnsureProcess(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   不满足if(CBTC_LEVEL == ctlLevel)
 *
 * =被测函数=
 *   StopEnsureProcess
 *
 * =初始条件=
 *   初始化全局变量
 *   gStopEnsureSta  = 0;
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 0
 */
void TestSuite_StopEnsureHandle_test_StopEnsureProcess_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable gStopEnsureSta */ 
    {
         gStopEnsureSta  = 0;
    }
    {
        /* Tested function call */
        StopEnsureProcess();
        /* Post-condition check */
    	CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( gStopEnsureSta ));
    }
}
/* CPPTEST_TEST_CASE_END test_StopEnsureProcess_4 */

/* CPPTEST_TEST_CASE_BEGIN test_StopEnsureProcess_5 */
/* CPPTEST_TEST_CASE_CONTEXT void StopEnsureProcess(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足if(CBTC_LEVEL == ctlLevel)
 *   满足if(1U == chkFlag) 
 *   满足if(ZC_VOBC_STOP_REQ_OK == stopReq)
 *   不满足if(0u == curSpeed)
 *   满足if(curSpeed < ebCal)
 *
 * =被测函数=
 *   StopEnsureProcess
 *
 * =初始条件=
 *   初始化全局变量
 *   gStopEnsureSta  = 0;
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 0
 */
void TestSuite_StopEnsureHandle_test_StopEnsureProcess_5()
{
    /* Pre-condition initialization */
    /* Initializing global variable gStopEnsureSta */ 
    {
         gStopEnsureSta  = 0;
    }
    {
        /* Tested function call */
        StopEnsureProcess();
        /* Post-condition check */
    	CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( gStopEnsureSta ));
    }
}
/* CPPTEST_TEST_CASE_END test_StopEnsureProcess_5 */

/* CPPTEST_TEST_CASE_BEGIN test_StopEnsureProcess_6 */
/* CPPTEST_TEST_CASE_CONTEXT void StopEnsureProcess(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足if(CBTC_LEVEL == ctlLevel)
 *   满足if(1U == chkFlag) 
 *   满足if(ZC_VOBC_STOP_REQ_OK == stopReq)
 *   不满足if(0u == curSpeed)
 *   不满足if(curSpeed < ebCal)
 *
 * =被测函数=
 *   StopEnsureProcess
 *
 * =初始条件=
 *   初始化全局变量
 *   gStopEnsureSta  = 0;
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数GetRunningLevelCtrlLevel，GetRcvTacStopReq，GetTrainCurSpeed，GetTrainEbBurstSpeed打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 0
 */
void TestSuite_StopEnsureHandle_test_StopEnsureProcess_6()
{
    /* Pre-condition initialization */
    /* Initializing global variable gStopEnsureSta */ 
    {
         gStopEnsureSta  = 0;
    }
    {
        /* Tested function call */
        StopEnsureProcess();
        /* Post-condition check */
    	CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( gStopEnsureSta ));
    }
}
/* CPPTEST_TEST_CASE_END test_StopEnsureProcess_6 */


/* CPPTEST_TEST_CASE_BEGIN test_GetStopEnsureSta */
/* CPPTEST_TEST_CASE_CONTEXT UINT8_T GetStopEnsureSta(void) */
/**
 * =测试目的=
 *   测试函数GetStopEnsureSta能否按照预期执行
 *
 * =被测函数=
 *   GetStopEnsureSta
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - 函数不打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 0
 */
void TestSuite_StopEnsureHandle_test_GetStopEnsureSta()
{
    /* Pre-condition initialization */
    /* Initializing global variable gStopEnsureSta */ 
    {
         gStopEnsureSta  = 0;
    }
    {
        /* Tested function call */
        UINT8_T _return  = GetStopEnsureSta();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_GetStopEnsureSta */
