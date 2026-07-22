#include "cpptest.h"

CPPTEST_CONTEXT("ATP_UT/ATP_UT/source/AppLogic/PeriodHandle/PowerOffManage/PowerOffHandle.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("ATP_UT/ATP_UT/source/AppLogic/PeriodHandle/PowerOffManage/PowerOffHandle.c");

CPPTEST_TEST_SUITE(TestSuite_PowerOffHandle);
CPPTEST_TEST(TestSuite_PowerOffHandle_test_SelfPowerOffExe);
CPPTEST_TEST(TestSuite_PowerOffHandle_test_SelfPowerOffExe_0);
CPPTEST_TEST(TestSuite_PowerOffHandle_test_SelfPowerOffExe_1);
CPPTEST_TEST(TestSuite_PowerOffHandle_test_SelfPowerOffExe_2);
CPPTEST_TEST(TestSuite_PowerOffHandle_test_SelfPowerOffExe_3);
CPPTEST_TEST(TestSuite_PowerOffHandle_test_SelfPowerOffExe_4);
CPPTEST_TEST(TestSuite_PowerOffHandle_test_SelfPowerOffExe_5);
CPPTEST_TEST(TestSuite_PowerOffHandle_test_SelfPowerOffExe_6);
CPPTEST_TEST(TestSuite_PowerOffHandle_test_SelfPowerOffExe_7);
CPPTEST_TEST(TestSuite_PowerOffHandle_test_SelfPowerOffExe_8);
CPPTEST_TEST(TestSuite_PowerOffHandle_test_SelfPowerOffHint);
CPPTEST_TEST(TestSuite_PowerOffHandle_test_SelfPowerOffExe_9);
CPPTEST_TEST(TestSuite_PowerOffHandle_test_SelfPowerOffHint_0);
CPPTEST_TEST(TestSuite_PowerOffHandle_test_SelfPowerOff);
CPPTEST_TEST_SUITE_END();
        


void TestSuite_PowerOffHandle_test_SelfPowerOffExe();
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_0();
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_1();
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_2();
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_3();
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_4();
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_5();
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_6();
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_7();
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_8();
void TestSuite_PowerOffHandle_test_SelfPowerOffHint();

void TestSuite_PowerOffHandle_test_SelfPowerOffExe_9();
void TestSuite_PowerOffHandle_test_SelfPowerOffHint_0();
void TestSuite_PowerOffHandle_test_SelfPowerOff();
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_PowerOffHandle);

void TestSuite_PowerOffHandle_setUp()
{
}

void TestSuite_PowerOffHandle_tearDown()
{
}


/* CPPTEST_TEST_CASE_BEGIN test_SelfPowerOffExe */
/* CPPTEST_TEST_CASE_CONTEXT void SelfPowerOffExe(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足 if(SCP_GetCycleNum() > GetAtpSelfPowerOffExeTime())
 *
 * =被测函数=
 *   SelfPowerOffState
 *
 * =初始条件=
 *   初始化全局变量
 *   SelfPowerOffState  = POWEROFF_NORMAL;
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
void TestSuite_PowerOffHandle_test_SelfPowerOffExe()
{
    /* Pre-condition initialization */
    /* Initializing global variable SelfPowerOffState */ 
    {
         SelfPowerOffState  = POWEROFF_NORMAL;
    }
    {
        /* Tested function call */
        SelfPowerOffExe();
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( SelfPowerOffState ));
    }
}
/* CPPTEST_TEST_CASE_END test_SelfPowerOffExe */

/* CPPTEST_TEST_CASE_BEGIN test_SelfPowerOffExe_0 */
/* CPPTEST_TEST_CASE_CONTEXT void SelfPowerOffExe(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足 if(SCP_GetCycleNum() > GetAtpSelfPowerOffExeTime())
 *   满足if((((UINT8_T)CONTROL_LOCAL_ATP == GetModeAtpAttri()) 
 *
 * =被测函数=
 *   SelfPowerOffExe
 *
 * =初始条件=
 *   初始化全局变量
 *   SelfPowerOffState  = POWEROFF_NORMAL;
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
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_0()
{
    /* Pre-condition initialization */
    /* Initializing global variable SelfPowerOffState */ 
    {
         SelfPowerOffState  = POWEROFF_NORMAL;
    }
    {
        /* Tested function call */
        SelfPowerOffExe();
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( SelfPowerOffState ));
    }
}
/* CPPTEST_TEST_CASE_END test_SelfPowerOffExe_0 */

/* CPPTEST_TEST_CASE_BEGIN test_SelfPowerOffExe_1 */
/* CPPTEST_TEST_CASE_CONTEXT void SelfPowerOffExe(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足 if(SCP_GetCycleNum() > GetAtpSelfPowerOffExeTime())
 *   满足((UINT8_T)CONTROL_OPPO_ATP == GetModeAtpAttri()))
 *
 * =被测函数=
 *   SelfPowerOffExe
 *
 * =初始条件=
 *   初始化全局变量
 *   SelfPowerOffState  = POWEROFF_NORMAL;
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
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable SelfPowerOffState */ 
    {
         SelfPowerOffState  = POWEROFF_NORMAL;
    }
    {
        /* Tested function call */
        SelfPowerOffExe();
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( SelfPowerOffState ));
    }
}
/* CPPTEST_TEST_CASE_END test_SelfPowerOffExe_1 */

/* CPPTEST_TEST_CASE_BEGIN test_SelfPowerOffExe_2 */
/* CPPTEST_TEST_CASE_CONTEXT void SelfPowerOffExe(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足 if(SCP_GetCycleNum() > GetAtpSelfPowerOffExeTime())
 *   满足((UINT8_T)CONTROL_OPPO_ATP == GetModeAtpAttri()))
 *   满足(ATP_CLOSE == GetInSwitchMeaDoorStatus())
 *
 * =被测函数=
 *   SelfPowerOffExe
 *
 * =初始条件=
 *   初始化全局变量
 *   SelfPowerOffState  = POWEROFF_NORMAL;
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
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable SelfPowerOffState */ 
    {
         SelfPowerOffState  = POWEROFF_NORMAL;
    }
    {
        /* Tested function call */
        SelfPowerOffExe();
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( SelfPowerOffState ));
    }
}
/* CPPTEST_TEST_CASE_END test_SelfPowerOffExe_2 */

/* CPPTEST_TEST_CASE_BEGIN test_SelfPowerOffExe_3 */
/* CPPTEST_TEST_CASE_CONTEXT void SelfPowerOffExe(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足 if(SCP_GetCycleNum() > GetAtpSelfPowerOffExeTime())
 *   满足 if(((UINT8_T)CONTROL_LOCAL_ATP == GetModeAtpAttri()) 
 *   满足 (ATP_CLOSE == GetInSwitchMeaDoorStatus())
 *
 * =被测函数=
 *   SelfPowerOffExe
 *
 * =初始条件=
 *   初始化全局变量
 *   SelfPowerOffState  = POWEROFF_NORMAL;
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
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable SelfPowerOffState */ 
    {
         SelfPowerOffState  = POWEROFF_NORMAL;
    }
    {
        /* Tested function call */
        SelfPowerOffExe();
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( SelfPowerOffState ));
    }
}
/* CPPTEST_TEST_CASE_END test_SelfPowerOffExe_3 */

/* CPPTEST_TEST_CASE_BEGIN test_SelfPowerOffExe_4 */
/* CPPTEST_TEST_CASE_CONTEXT void SelfPowerOffExe(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足 if(SCP_GetCycleNum() > GetAtpSelfPowerOffExeTime())
 *   满足 if((((UINT8_T)CONTROL_LOCAL_ATP == GetModeAtpAttri()) || ((UINT8_T)CONTROL_OPPO_ATP == GetModeAtpAttri())) && (ATP_CLOSE == GetInSwitchMeaDoorStatus()))
 *   满足 if(RM_MODE == GetModeDrvMode())
 *
 * =被测函数=
 *   SelfPowerOffExe
 *
 * =初始条件=
 *   初始化全局变量
 *   SelfPowerOffState  = POWEROFF_NORMAL;
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
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable SelfPowerOffState */ 
    {
         SelfPowerOffState  = POWEROFF_NORMAL;
    }
    {
        /* Tested function call */
        SelfPowerOffExe();
        /* Post-condition check */
    	CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( SelfPowerOffState ));
    }
}
/* CPPTEST_TEST_CASE_END test_SelfPowerOffExe_4 */

/* CPPTEST_TEST_CASE_BEGIN test_SelfPowerOffExe_5 */
/* CPPTEST_TEST_CASE_CONTEXT void SelfPowerOffExe(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足 if(SCP_GetCycleNum() > GetAtpSelfPowerOffExeTime())
 *   不满足 if((((UINT8_T)CONTROL_LOCAL_ATP == GetModeAtpAttri()) || ((UINT8_T)CONTROL_OPPO_ATP == GetModeAtpAttri())) && (ATP_CLOSE == GetInSwitchMeaDoorStatus()))
 *   满足 if(((UINT8_T)LOC_LOCALIZED == GetTrainLocAllow())
 *
 * =被测函数=
 *   SelfPowerOffExe
 *
 * =初始条件=
 *   初始化全局变量
 *   SelfPowerOffState  = POWEROFF_NORMAL;
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
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_5()
{
    /* Pre-condition initialization */
    /* Initializing global variable SelfPowerOffState */ 
    {
         SelfPowerOffState  = POWEROFF_NORMAL;
    }
    {
        /* Tested function call */
        SelfPowerOffExe();
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( SelfPowerOffState ));
    }
}
/* CPPTEST_TEST_CASE_END test_SelfPowerOffExe_5 */

/* CPPTEST_TEST_CASE_BEGIN test_SelfPowerOffExe_6 */
/* CPPTEST_TEST_CASE_CONTEXT void SelfPowerOffExe(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足 if(SCP_GetCycleNum() > GetAtpSelfPowerOffExeTime())
 *   不满足 if((((UINT8_T)CONTROL_LOCAL_ATP == GetModeAtpAttri()) || ((UINT8_T)CONTROL_OPPO_ATP == GetModeAtpAttri())) && (ATP_CLOSE == GetInSwitchMeaDoorStatus()))
 *   满足  if(((UINT8_T)LOC_LOCALIZED == GetTrainLocAllow()) && (ZERO_SPEED_TRUE == GetTrainZeroSpeedTag()))
 *
 * =被测函数=
 *   SelfPowerOffExe
 *
 * =初始条件=
 *   初始化全局变量
 *   SelfPowerOffState  = POWEROFF_NORMAL;
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
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_6()
{
    /* Pre-condition initialization */
    /* Initializing global variable SelfPowerOffState */ 
    {
         SelfPowerOffState  = POWEROFF_NORMAL;
    }
    {
        /* Tested function call */
        SelfPowerOffExe();
        /* Post-condition check */
    	CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( SelfPowerOffState ));
    }
}
/* CPPTEST_TEST_CASE_END test_SelfPowerOffExe_6 */

/* CPPTEST_TEST_CASE_BEGIN test_SelfPowerOffExe_7 */
/* CPPTEST_TEST_CASE_CONTEXT void SelfPowerOffExe(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足 if(SCP_GetCycleNum() > GetAtpSelfPowerOffExeTime())
 *   不满足 if((((UINT8_T)CONTROL_LOCAL_ATP == GetModeAtpAttri()) || ((UINT8_T)CONTROL_OPPO_ATP == GetModeAtpAttri())) && (ATP_CLOSE == GetInSwitchMeaDoorStatus()))
 *   满足  if(((UINT8_T)LOC_LOCALIZED == GetTrainLocAllow()) && (ZERO_SPEED_TRUE == GetTrainZeroSpeedTag()))
 *   满足 if((ATP_TRUE == reversePoint)
 *
 * =被测函数=
 *   SelfPowerOffExe
 *
 * =初始条件=
 *   初始化全局变量
 *   SelfPowerOffState  = POWEROFF_NORMAL;
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
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_7()
{
    /* Pre-condition initialization */
    /* Initializing global variable SelfPowerOffState */ 
    {
         SelfPowerOffState  = POWEROFF_NORMAL;
    }
    {
        /* Tested function call */
        SelfPowerOffExe();
        /* Post-condition check */
    	CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( SelfPowerOffState ));
    }
}
/* CPPTEST_TEST_CASE_END test_SelfPowerOffExe_7 */

/* CPPTEST_TEST_CASE_BEGIN test_SelfPowerOffExe_8 */
/* CPPTEST_TEST_CASE_CONTEXT void SelfPowerOffExe(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足 if(SCP_GetCycleNum() > GetAtpSelfPowerOffExeTime())
 *   不满足 if((((UINT8_T)CONTROL_LOCAL_ATP == GetModeAtpAttri()) || ((UINT8_T)CONTROL_OPPO_ATP == GetModeAtpAttri())) && (ATP_CLOSE == GetInSwitchMeaDoorStatus()))
 *   满足  if(((UINT8_T)LOC_LOCALIZED == GetTrainLocAllow()) && (ZERO_SPEED_TRUE == GetTrainZeroSpeedTag()))
 *   满足  if((ATP_TRUE == reversePoint) || (ATP_TRUE == atpExitPoint))
 *
 * =被测函数=
 *   SelfPowerOffExe
 *
 * =初始条件=
 *   初始化全局变量
 *   SelfPowerOffState  = POWEROFF_NORMAL;
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值0
 */
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_8()
{
    /* Pre-condition initialization */
    /* Initializing global variable SelfPowerOffState */ 
    {
         SelfPowerOffState  = POWEROFF_NORMAL;
    }
    {
        /* Tested function call */
        SelfPowerOffExe();
        /* Post-condition check */
    	CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( SelfPowerOffState ));
    }
}
/* CPPTEST_TEST_CASE_END test_SelfPowerOffExe_8 */

/* CPPTEST_TEST_CASE_BEGIN test_SelfPowerOffHint */
/* CPPTEST_TEST_CASE_CONTEXT void SelfPowerOffHint(void) */
/**
 * =测试目的=
 *   测试函数SelfPowerOffHint能否按照预期执行
 *   不满足if (((SCP_GetCycleNum() * ATP_CYC_TIME) / 1000u) > GetAtpSelfPowerOffHintTime())
 *
 * =被测函数=
 *   SelfPowerOffHint
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数SCP_GetCycleNum，GetAtpSelfPowerOffHintTime打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 2
 */
void TestSuite_PowerOffHandle_test_SelfPowerOffHint()
{
    /* Pre-condition initialization */
    {
		/* Tested function call */
        SelfPowerOffHint();
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(2, ( GetPowerOffHintFlag() ));
    }
}
/* CPPTEST_TEST_CASE_END test_SelfPowerOffHint */


/* CPPTEST_TEST_CASE_BEGIN test_SelfPowerOffExe_9 */
/* CPPTEST_TEST_CASE_CONTEXT void SelfPowerOffExe(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足 if (POWEROFF_NORMAL != GetPowerOffState())
 *
 * =被测函数=
 *   SelfPowerOffExe
 *
 * =初始条件=
 *   初始化全局变量
 *   SelfPowerOffState  = POWEROFF_NORMAL;
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
void TestSuite_PowerOffHandle_test_SelfPowerOffExe_9()
{
    /* Pre-condition initialization */
    /* Initializing global variable SelfPowerOffState */ 
    {
         SelfPowerOffState  = POWEROFF_NORMAL;
    }
    {
        /* Tested function call */
        SelfPowerOffExe();
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( SelfPowerOffState ));
    }
}
/* CPPTEST_TEST_CASE_END test_SelfPowerOffExe_9 */

/* CPPTEST_TEST_CASE_BEGIN test_SelfPowerOffHint_0 */
/* CPPTEST_TEST_CASE_CONTEXT void SelfPowerOffHint(void) */
/**
 * =测试目的=
 *   测试函数SelfPowerOffHint能否按照预期执行
 *   满足if (((SCP_GetCycleNum() * ATP_CYC_TIME) / 1000u) > GetAtpSelfPowerOffHintTime())
 *
 * =被测函数=
 *   SelfPowerOffHint
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数SCP_GetCycleNum，GetAtpSelfPowerOffHintTime打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 2
 */
void TestSuite_PowerOffHandle_test_SelfPowerOffHint_0()
{
    /* Pre-condition initialization */
    {
		/* Tested function call */
        SelfPowerOffHint();
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(2, ( GetPowerOffHintFlag() ));
    }
}
/* CPPTEST_TEST_CASE_END test_SelfPowerOffHint_0 */


/* CPPTEST_TEST_CASE_BEGIN test_SelfPowerOff */
/* CPPTEST_TEST_CASE_CONTEXT void SelfPowerOff(void) */
/**
 * =测试目的=
 *   测试函数SelfPowerOff能否按照预期执行
 *
 * =被测函数=
 *   SelfPowerOff
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
void TestSuite_PowerOffHandle_test_SelfPowerOff()
{
    /* Pre-condition initialization */
    /* Initializing global variable SelfPowerOffState */ 
    {
         SelfPowerOffState  = POWEROFF_NORMAL;
    }
    {
        /* Tested function call */
        SelfPowerOff();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( SelfPowerOffState ) )
    }
}
/* CPPTEST_TEST_CASE_END test_SelfPowerOff */
