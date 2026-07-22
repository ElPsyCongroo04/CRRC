#include "cpptest.h"

CPPTEST_CONTEXT("ATP_UT/ATP_UT/source/AppLogic/PeriodHandle/DailyInspectionManage/DailyInspectionHandle.c");

CPPTEST_TEST_SUITE(TestSuite_DailyInspectionManage);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_DailyInspectionManage);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_DailyInspectionManage_0);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_DailyInspectionManage_1);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_DailyInspectionManage_2);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_EBTest);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_EBTest_0);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_EBTest_1);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_EBTest_2);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_EBTest_3);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_RadioTestManage);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_RadioTestManage_0);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_RadioTestManage_1);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_RadioTestManage_2);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_RadioTestManage_3);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_RadioTestManage_4);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_RadioTestManage_5);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_RadioTestManage_6);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_RadioTestManage_7);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_RadioTestManage_8);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_RadioTestManage_9);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_RadioTestManage_10);
CPPTEST_TEST(TestSuite_DailyInspectionManage_test_RadioTestManage_11);
CPPTEST_TEST_SUITE_END();
        

void TestSuite_DailyInspectionManage_test_DailyInspectionManage();
void TestSuite_DailyInspectionManage_test_DailyInspectionManage_0();
void TestSuite_DailyInspectionManage_test_DailyInspectionManage_1();
void TestSuite_DailyInspectionManage_test_DailyInspectionManage_2();
void TestSuite_DailyInspectionManage_test_EBTest();
void TestSuite_DailyInspectionManage_test_EBTest_0();
void TestSuite_DailyInspectionManage_test_EBTest_1();
void TestSuite_DailyInspectionManage_test_EBTest_2();
void TestSuite_DailyInspectionManage_test_EBTest_3();
void TestSuite_DailyInspectionManage_test_RadioTestManage();
void TestSuite_DailyInspectionManage_test_RadioTestManage_0();
void TestSuite_DailyInspectionManage_test_RadioTestManage_1();
void TestSuite_DailyInspectionManage_test_RadioTestManage_2();
void TestSuite_DailyInspectionManage_test_RadioTestManage_3();
void TestSuite_DailyInspectionManage_test_RadioTestManage_4();
void TestSuite_DailyInspectionManage_test_RadioTestManage_5();
void TestSuite_DailyInspectionManage_test_RadioTestManage_6();
void TestSuite_DailyInspectionManage_test_RadioTestManage_7();
void TestSuite_DailyInspectionManage_test_RadioTestManage_8();
void TestSuite_DailyInspectionManage_test_RadioTestManage_9();
void TestSuite_DailyInspectionManage_test_RadioTestManage_10();
void TestSuite_DailyInspectionManage_test_RadioTestManage_11();
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_DailyInspectionManage);

extern EbTag ;
extern RadioTestTimer;
extern gLastRcvRadioCmdCyc;
void TestSuite_DailyInspectionManage_setUp()
{
}

void TestSuite_DailyInspectionManage_tearDown()
{
}

/**
 * =被测函数=
 *  DailyInspectionManage
 *  
 * =测试目的=
 *   if(RM_MODE == runMode)条件为假
 *  
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 if(CppTest_IsCurrentTestCase("TestSuite_DailyInspectionHandle_test_DailyInspectionManage"))
 {
 return 0;
 }
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_DailyInspectionManage */
/* CPPTEST_TEST_CASE_CONTEXT void DailyInspectionManage(void) */
void TestSuite_DailyInspectionManage_test_DailyInspectionManage()
{
    /* Pre-condition initialization */
    /* Initializing global variable gLastRcvRadioCmdCyc */ 
    {
         DailyInspectionManage();
    }
    /* Initializing global variable EbTag */ 

}
/* CPPTEST_TEST_CASE_END test_DailyInspectionManage */
/**
 * =被测函数=
 *  DailyInspectionManage
 *  
 * =测试目的=
 *   if(RM_MODE == runMode)条件为真
 *   if(LOC_LOCALIZED == trainLocValidFlag)条件为假
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 if(CppTest_IsCurrentTestCase("TestSuite_DailyInspectionHandle_test_DailyInspectionManage"))
 {
 return 0;
 }
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_DailyInspectionManage_0 */
/* CPPTEST_TEST_CASE_CONTEXT void DailyInspectionManage(void) */
void TestSuite_DailyInspectionManage_test_DailyInspectionManage_0()
{
	/* Pre-condition initialization */
	/* Initializing global variable gLastRcvRadioCmdCyc */ 
	{
		DailyInspectionManage();
	}
	/* Initializing global variable EbTag */ 

}
/* CPPTEST_TEST_CASE_END test_DailyInspectionManage_0 */
/**
 * =被测函数=
 *  DailyInspectionManage
 *  
 * =测试目的=
 *   if(RM_MODE == runMode)条件为真
 *   if(LOC_LOCALIZED == trainLocValidFlag)条件为真
 *   if(CI_TRAIN_DEPOT_TYPE == ciType)为假
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 if(CppTest_IsCurrentTestCase("TestSuite_DailyInspectionHandle_test_DailyInspectionManage"))
 {
 return 0;
 }
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_DailyInspectionManage_1 */
/* CPPTEST_TEST_CASE_CONTEXT void DailyInspectionManage(void) */
void TestSuite_DailyInspectionManage_test_DailyInspectionManage_1()
{
	/* Pre-condition initialization */
	/* Initializing global variable gLastRcvRadioCmdCyc */ 
	{
		DailyInspectionManage();
	}
	/* Initializing global variable EbTag */ 

}
/* CPPTEST_TEST_CASE_END test_DailyInspectionManage_1 */
/**
 * =被测函数=
 *  DailyInspectionManage
 *  
 * =测试目的=
 *   if(RM_MODE == runMode)条件为真
 *   if(LOC_LOCALIZED == trainLocValidFlag)条件为真
 *   if(CI_TRAIN_DEPOT_TYPE == ciType)为真
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 if(CppTest_IsCurrentTestCase("TestSuite_DailyInspectionHandle_test_DailyInspectionManage"))
 {
 return 0;
 }
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_DailyInspectionManage_2 */
/* CPPTEST_TEST_CASE_CONTEXT void DailyInspectionManage(void) */
void TestSuite_DailyInspectionManage_test_DailyInspectionManage_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable gLastRcvRadioCmdCyc */ 
    {
         DailyInspectionManage();
    }
    /* Initializing global variable EbTag */ 

}
/* CPPTEST_TEST_CASE_END test_DailyInspectionManage_2 */
/**
 * =被测函数=
 *  EBTest
 *  
 * =测试目的=
 *  if(DAILY_INSPEC_ALLOW_YES == GetDlySpcAllowFlag())条件为假
 *  
 *  
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 if(CppTest_IsCurrentTestCase("TestSuite_DailyInspectionHandle_test_DailyInspectionManage"))
 {
 return 0;
 }
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_EBTest */
/* CPPTEST_TEST_CASE_CONTEXT void EBTest(void) */
void TestSuite_DailyInspectionManage_test_EBTest()
{
    /* Pre-condition initialization */
    /* Initializing global variable EbTag */ 

    {
        /* Tested function call */ 
		EbTag  = 0;
        EBTest();
        /* Post-condition check */
        
    }
}
/* CPPTEST_TEST_CASE_END test_EBTest */
/**
 * =被测函数=
 *  EBTest
 *  
 * =测试目的=
 *  if(DAILY_INSPEC_ALLOW_YES == GetDlySpcAllowFlag())条件为真
 *  if (ATP_RCV_MMI_BTNTEST_EB == dmiCmd)为假
 *  else if(ATP_RCV_MMI_BTNTEST_UNEB == dmiCmd )为假
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 if(CppTest_IsCurrentTestCase("TestSuite_DailyInspectionHandle_test_DailyInspectionManage"))
 {
 return 0;
 }
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_EBTest_0 */
/* CPPTEST_TEST_CASE_CONTEXT void EBTest(void) */
void TestSuite_DailyInspectionManage_test_EBTest_0()
{
    /* Pre-condition initialization */
    /* Initializing global variable EbTag */ 

    {
        /* Tested function call */
        EBTest();
        /* Post-condition check */
       
    }
}
/* CPPTEST_TEST_CASE_END test_EBTest_0 */
/**
 * =被测函数=
 *  EBTest
 *  
 * =测试目的=
 *  if(DAILY_INSPEC_ALLOW_YES == GetDlySpcAllowFlag())条件为真
 *  if (ATP_RCV_MMI_BTNTEST_EB == dmiCmd)为假
 *  else if(ATP_RCV_MMI_BTNTEST_UNEB == dmiCmd )为真
 *  if( ATP_TRUE == EbTag)为真
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 if(CppTest_IsCurrentTestCase("TestSuite_DailyInspectionHandle_test_DailyInspectionManage"))
 {
 return 0;
 }
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_EBTest_1 */
/* CPPTEST_TEST_CASE_CONTEXT void EBTest(void) */
void TestSuite_DailyInspectionManage_test_EBTest_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable EbTag */ 
    
    {
         EbTag  =  0x55u;
    }
    {
        /* Tested function call */
        EBTest();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("UINT8_T EbTag", ( EbTag ));
    }
}
/* CPPTEST_TEST_CASE_END test_EBTest_1 */
/**
 * =被测函数=
 *  EBTest
 *  
 * =测试目的=
 *  if(DAILY_INSPEC_ALLOW_YES == GetDlySpcAllowFlag())条件为真
 *  if (ATP_RCV_MMI_BTNTEST_EB == dmiCmd)为真
 *  
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 if(CppTest_IsCurrentTestCase("TestSuite_DailyInspectionHandle_test_DailyInspectionManage"))
 {
 return 0;
 }
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_EBTest_2 */
/* CPPTEST_TEST_CASE_CONTEXT void EBTest(void) */
void TestSuite_DailyInspectionManage_test_EBTest_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable EbTag */ 
    {
         EbTag  = 0;
    }
    {
        /* Tested function call */
        EBTest();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("UINT8_T EbTag", ( EbTag ));
    }
}
/* CPPTEST_TEST_CASE_END test_EBTest_2 */
/**
 * =被测函数=
 *  EBTest
 *  
 * =测试目的=
 *  if(DAILY_INSPEC_ALLOW_YES == GetDlySpcAllowFlag())条件为真
 *  if (ATP_RCV_MMI_BTNTEST_EB == dmiCmd)为假
 *  else if(ATP_RCV_MMI_BTNTEST_UNEB == dmiCmd )为真
 *  if( ATP_TRUE == EbTag)为假
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 if(CppTest_IsCurrentTestCase("TestSuite_DailyInspectionHandle_test_DailyInspectionManage"))
 {
 return 0;
 }
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_EBTest_3 */
/* CPPTEST_TEST_CASE_CONTEXT void EBTest(void) */
void TestSuite_DailyInspectionManage_test_EBTest_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable EbTag */ 
    {
         EbTag  = 0xAAu;
    }
    {
        /* Tested function call */
        EBTest();
        /* Post-condition check */
     
    }
}
/* CPPTEST_TEST_CASE_END test_EBTest_3 */
/**
 * =被测函数=
 * RadioTestManage
 *  
 * =测试目的=
 * if(((RADIO_TEST_STA_INIT == GetRadioTestWorkSta()) || (RADIO_TEST_STA_END == GetRadioTestWorkSta())) &&(DAILY_INSPEC_ALLOW_YES == GetDlySpcAllowFlag()))条件为真((1:0):1)
 * if(( ATP_RCV_MMI_BTNTEST_RADIO == dmiCmd) && (radioCmdRcvCyc - gLastRcvRadioCmdCyc > RADIO_TEST_RCVCMD_INTERVAL))为真(1:1)
 * if( ATP_RCV_MMI_BTNTEST_RADIO == dmiCmd)为真
 * 
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 if(CppTest_IsCurrentTestCase("TestSuite_DailyInspectionHandle_test_DailyInspectionManage"))
 {
 return 0;
 }
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_RadioTestManage */
/* CPPTEST_TEST_CASE_CONTEXT void RadioTestManage(void) */
void TestSuite_DailyInspectionManage_test_RadioTestManage()
{
    /* Pre-condition initialization */
    /* Initializing global variable gLastRcvRadioCmdCyc */ 
    {
         gLastRcvRadioCmdCyc  = 2u;
    }
    /* Initializing global variable RadioTestTimer */ 
    {
         RadioTestTimer  = 0u;
    }
    {
        /* Tested function call */
        RadioTestManage();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("UINT32_T gLastRcvRadioCmdCyc", ( gLastRcvRadioCmdCyc ));
        CPPTEST_POST_CONDITION_UINTEGER("UINT16_T RadioTestTimer", ( RadioTestTimer ));
    }
}
/* CPPTEST_TEST_CASE_END test_RadioTestManage */
/**
 * =被测函数=
 * RadioTestManage
 *  
 * =测试目的=
 * if(((RADIO_TEST_STA_INIT == GetRadioTestWorkSta()) || (RADIO_TEST_STA_END == GetRadioTestWorkSta())) &&(DAILY_INSPEC_ALLOW_YES == GetDlySpcAllowFlag()))条件为真((0:1):1)
 * if(( ATP_RCV_MMI_BTNTEST_RADIO == dmiCmd) && (radioCmdRcvCyc - gLastRcvRadioCmdCyc > RADIO_TEST_RCVCMD_INTERVAL))为假(1:0)
 * if( ATP_RCV_MMI_BTNTEST_RADIO == dmiCmd)为假
 * 
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 if(CppTest_IsCurrentTestCase("TestSuite_DailyInspectionHandle_test_DailyInspectionManage"))
 {
 return 0;
 }
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_RadioTestManage_0 */
/* CPPTEST_TEST_CASE_CONTEXT void RadioTestManage(void) */
void TestSuite_DailyInspectionManage_test_RadioTestManage_0()
{
    /* Pre-condition initialization */
    /* Initializing global variable gLastRcvRadioCmdCyc */ 
    {
         gLastRcvRadioCmdCyc  = 3u;
    }
    /* Initializing global variable RadioTestTimer */ 
    {
         RadioTestTimer  = 0u;
    }
    {
        /* Tested function call */
        RadioTestManage();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("UINT32_T gLastRcvRadioCmdCyc", ( gLastRcvRadioCmdCyc ));
        CPPTEST_POST_CONDITION_UINTEGER("UINT16_T RadioTestTimer", ( RadioTestTimer ));
    }
}
/* CPPTEST_TEST_CASE_END test_RadioTestManage_0 */
/**
 * =被测函数=
 * RadioTestManage
 *  
 * =测试目的=
 * if(((RADIO_TEST_STA_INIT == GetRadioTestWorkSta()) || (RADIO_TEST_STA_END == GetRadioTestWorkSta())) &&(DAILY_INSPEC_ALLOW_YES == GetDlySpcAllowFlag()))条件为真((0:1):1)
 * if(( ATP_RCV_MMI_BTNTEST_RADIO == dmiCmd) && (radioCmdRcvCyc - gLastRcvRadioCmdCyc > RADIO_TEST_RCVCMD_INTERVAL))为假(0:X)
 * 
 * 
 *
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 if(CppTest_IsCurrentTestCase("TestSuite_DailyInspectionHandle_test_DailyInspectionManage"))
 {
 return 0;
 }
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_RadioTestManage_1 */
/* CPPTEST_TEST_CASE_CONTEXT void RadioTestManage(void) */
void TestSuite_DailyInspectionManage_test_RadioTestManage_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable gLastRcvRadioCmdCyc */ 
    {
         gLastRcvRadioCmdCyc  = 0u;
    }
    /* Initializing global variable RadioTestTimer */ 
    {
         RadioTestTimer  = 0u;
    }
    {
        /* Tested function call */
        RadioTestManage();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("UINT32_T gLastRcvRadioCmdCyc", ( gLastRcvRadioCmdCyc ));
        CPPTEST_POST_CONDITION_UINTEGER("UINT16_T RadioTestTimer", ( RadioTestTimer ));
    }
}
/* CPPTEST_TEST_CASE_END test_RadioTestManage_1 */
/**
 * =被测函数=
 * RadioTestManage
 *  
 * =测试目的=
 * if(((RADIO_TEST_STA_INIT == GetRadioTestWorkSta()) || (RADIO_TEST_STA_END == GetRadioTestWorkSta())) &&(DAILY_INSPEC_ALLOW_YES == GetDlySpcAllowFlag()))条件为假((0:0):1)
 * if(( ATP_RCV_MMI_BTNTEST_RADIO == dmiCmd) && (radioCmdRcvCyc - gLastRcvRadioCmdCyc > RADIO_TEST_RCVCMD_INTERVAL))为假(0:X)
 * if(ATP_COM_NORMAL == GetAtoComuStatus())为真
 * if((RCV_ATO_BRACAST_SUCC == rcvAtoBoardCastRe) || (RCV_ATO_BRACAST_FAIL == rcvAtoBoardCastRe))为假
 * else if(RCV_ATO_BRACAST_UNKNOW == rcvAtoBoardCastRe)为真
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 if(CppTest_IsCurrentTestCase("TestSuite_DailyInspectionHandle_test_DailyInspectionManage"))
 {
 return 0;
 }
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_RadioTestManage_2 */
/* CPPTEST_TEST_CASE_CONTEXT void RadioTestManage(void) */
void TestSuite_DailyInspectionManage_test_RadioTestManage_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable gLastRcvRadioCmdCyc */ 
    {
         gLastRcvRadioCmdCyc  = 0u;
    }
    /* Initializing global variable RadioTestTimer */ 
    {
         RadioTestTimer  = 0u;
    }
    {
        /* Tested function call */
        RadioTestManage();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("UINT32_T gLastRcvRadioCmdCyc", ( gLastRcvRadioCmdCyc ));
        CPPTEST_POST_CONDITION_UINTEGER("UINT16_T RadioTestTimer", ( RadioTestTimer ));
    }
}
/* CPPTEST_TEST_CASE_END test_RadioTestManage_2 */
/**
 * =被测函数=
 * RadioTestManage
 *  
 * =测试目的=
 * if(((RADIO_TEST_STA_INIT == GetRadioTestWorkSta()) || (RADIO_TEST_STA_END == GetRadioTestWorkSta())) &&(DAILY_INSPEC_ALLOW_YES == GetDlySpcAllowFlag()))条件为假((1:0):0)
 * if(( ATP_RCV_MMI_BTNTEST_RADIO == dmiCmd) && (radioCmdRcvCyc - gLastRcvRadioCmdCyc > RADIO_TEST_RCVCMD_INTERVAL))为假(0:X)
 * 
 *
 *
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 if(CppTest_IsCurrentTestCase("TestSuite_DailyInspectionHandle_test_DailyInspectionManage"))
 {
 return 0;
 }
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_RadioTestManage_3 */
/* CPPTEST_TEST_CASE_CONTEXT void RadioTestManage(void) */
void TestSuite_DailyInspectionManage_test_RadioTestManage_3()
{
    /* Pre-condition initialization */
    /* Initializing global variable gLastRcvRadioCmdCyc */ 
    {
         gLastRcvRadioCmdCyc  = 0u;
    }
    /* Initializing global variable RadioTestTimer */ 
    {
         RadioTestTimer  = 0u;
    }
    {
        /* Tested function call */
        RadioTestManage();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("UINT32_T gLastRcvRadioCmdCyc", ( gLastRcvRadioCmdCyc ));
        CPPTEST_POST_CONDITION_UINTEGER("UINT16_T RadioTestTimer", ( RadioTestTimer ));
    }
}
/* CPPTEST_TEST_CASE_END test_RadioTestManage_3 */
/**
 * =被测函数=
 * RadioTestManage
 *  
 * =测试目的=
 * if(((RADIO_TEST_STA_INIT == GetRadioTestWorkSta()) || (RADIO_TEST_STA_END == GetRadioTestWorkSta())) &&(DAILY_INSPEC_ALLOW_YES == GetDlySpcAllowFlag()))条件为假((0:1):0)
 * 
 * 
 *
 *
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 if(CppTest_IsCurrentTestCase("TestSuite_DailyInspectionHandle_test_DailyInspectionManage"))
 {
 return 0;
 }
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_RadioTestManage_4 */
/* CPPTEST_TEST_CASE_CONTEXT void RadioTestManage(void) */
void TestSuite_DailyInspectionManage_test_RadioTestManage_4()
{
    /* Pre-condition initialization */
    /* Initializing global variable gLastRcvRadioCmdCyc */ 
    {
         gLastRcvRadioCmdCyc  = 0u;
    }
    /* Initializing global variable RadioTestTimer */ 
    {
         RadioTestTimer  = 0u;
    }
    {
        /* Tested function call */
        RadioTestManage();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("UINT32_T gLastRcvRadioCmdCyc", ( gLastRcvRadioCmdCyc ));
        CPPTEST_POST_CONDITION_UINTEGER("UINT16_T RadioTestTimer", ( RadioTestTimer ));
    }
}
/* CPPTEST_TEST_CASE_END test_RadioTestManage_4 */
/**
 * =被测函数=
 * RadioTestManage
 *  
 * =测试目的=
 * if(((RADIO_TEST_STA_INIT == GetRadioTestWorkSta()) || (RADIO_TEST_STA_END == GetRadioTestWorkSta())) &&(DAILY_INSPEC_ALLOW_YES == GetDlySpcAllowFlag()))条件为假((0:0):1)
 * 
 * 
 * 
 *
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 if(CppTest_IsCurrentTestCase("TestSuite_DailyInspectionHandle_test_DailyInspectionManage"))
 {
 return 0;
 }
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_RadioTestManage_5 */
/* CPPTEST_TEST_CASE_CONTEXT void RadioTestManage(void) */
void TestSuite_DailyInspectionManage_test_RadioTestManage_5()
{
    /* Pre-condition initialization */
    /* Initializing global variable gLastRcvRadioCmdCyc */ 
    {
         gLastRcvRadioCmdCyc  = 0u;
    }
    /* Initializing global variable RadioTestTimer */ 
    {
         RadioTestTimer  = 0u;
    }
    {
        /* Tested function call */
        RadioTestManage();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("UINT32_T gLastRcvRadioCmdCyc", ( gLastRcvRadioCmdCyc ));
        CPPTEST_POST_CONDITION_UINTEGER("UINT16_T RadioTestTimer", ( RadioTestTimer ));
    }
}
/* CPPTEST_TEST_CASE_END test_RadioTestManage_5 */
/**
 * =被测函数=
 * RadioTestManage
 *  
 * =测试目的=
 * if(RADIO_TEST_STA_ING == GetRadioTestWorkSta())为真
 *  if(ATP_COM_NORMAL == GetAtoComuStatus())为假
 * 
 * 
 *
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_RadioTestManage_6 */
/* CPPTEST_TEST_CASE_CONTEXT void RadioTestManage(void) */
void TestSuite_DailyInspectionManage_test_RadioTestManage_6()
{
    /* Pre-condition initialization */
    /* Initializing global variable gLastRcvRadioCmdCyc */ 
    {
         gLastRcvRadioCmdCyc  = 0u;
    }
    /* Initializing global variable RadioTestTimer */ 
    {
         RadioTestTimer  = 0u;
    }
    {
        /* Tested function call */
        RadioTestManage();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("UINT32_T gLastRcvRadioCmdCyc", ( gLastRcvRadioCmdCyc ));
        CPPTEST_POST_CONDITION_UINTEGER("UINT16_T RadioTestTimer", ( RadioTestTimer ));
    }
}
/* CPPTEST_TEST_CASE_END test_RadioTestManage_6 */
/**
 * =被测函数=
 * RadioTestManage
 *  
 * =测试目的=
 * if(RADIO_TEST_STA_ING == GetRadioTestWorkSta())为真
 *  if(ATP_COM_NORMAL == GetAtoComuStatus())为真
 * if((RCV_ATO_BRACAST_SUCC == rcvAtoBoardCastRe) || (RCV_ATO_BRACAST_FAIL == rcvAtoBoardCastRe))为假（0:0）
 * else if(RCV_ATO_BRACAST_UNKNOW == rcvAtoBoardCastRe)为假
 *
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_RadioTestManage_7 */
/* CPPTEST_TEST_CASE_CONTEXT void RadioTestManage(void) */
void TestSuite_DailyInspectionManage_test_RadioTestManage_7()
{
    /* Pre-condition initialization */
    /* Initializing global variable gLastRcvRadioCmdCyc */ 
    {
         gLastRcvRadioCmdCyc  = 0u;
    }
    /* Initializing global variable RadioTestTimer */ 
    {
         RadioTestTimer  = 0u;
    }
    {
        /* Tested function call */
        RadioTestManage();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("UINT32_T gLastRcvRadioCmdCyc", ( gLastRcvRadioCmdCyc ));
        CPPTEST_POST_CONDITION_UINTEGER("UINT16_T RadioTestTimer", ( RadioTestTimer ));
    }
}
/* CPPTEST_TEST_CASE_END test_RadioTestManage_7 */
/**
 * =被测函数=
 * RadioTestManage
 *  
 * =测试目的=
 * if(RADIO_TEST_STA_ING == GetRadioTestWorkSta())为真
 *  if(ATP_COM_NORMAL == GetAtoComuStatus())为真
 * if((RCV_ATO_BRACAST_SUCC == rcvAtoBoardCastRe) || (RCV_ATO_BRACAST_FAIL == rcvAtoBoardCastRe))为假（0:0）
 * else if(RCV_ATO_BRACAST_UNKNOW == rcvAtoBoardCastRe)为真，且 if(RadioTestTimer >= GetAtpNetradioTestLastTime() * 1000u)为假
 *
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_RadioTestManage_8 */
/* CPPTEST_TEST_CASE_CONTEXT void RadioTestManage(void) */
void TestSuite_DailyInspectionManage_test_RadioTestManage_8()
{
    /* Pre-condition initialization */
    /* Initializing global variable gLastRcvRadioCmdCyc */ 
    {
         gLastRcvRadioCmdCyc  = 0u;
    }
    /* Initializing global variable RadioTestTimer */ 
    {
         RadioTestTimer  = 1u;
    }
    {
        /* Tested function call */
        RadioTestManage();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("UINT32_T gLastRcvRadioCmdCyc", ( gLastRcvRadioCmdCyc ));
        CPPTEST_POST_CONDITION_UINTEGER("UINT16_T RadioTestTimer", ( RadioTestTimer ));
    }
}
/* CPPTEST_TEST_CASE_END test_RadioTestManage_8 */
/**
 * =被测函数=
 * RadioTestManage
 *  
 * =测试目的=
 * if(RADIO_TEST_STA_ING == GetRadioTestWorkSta())为真
 *  if(ATP_COM_NORMAL == GetAtoComuStatus())为真
 * if((RCV_ATO_BRACAST_SUCC == rcvAtoBoardCastRe) || (RCV_ATO_BRACAST_FAIL == rcvAtoBoardCastRe))为假（0:0）
 * else if(RCV_ATO_BRACAST_UNKNOW == rcvAtoBoardCastRe)为真，且 if(RadioTestTimer >= GetAtpNetradioTestLastTime() * 1000u)为真
 *
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_RadioTestManage_9 */
/* CPPTEST_TEST_CASE_CONTEXT void RadioTestManage(void) */
void TestSuite_DailyInspectionManage_test_RadioTestManage_9()
{
    /* Pre-condition initialization */
    /* Initializing global variable gLastRcvRadioCmdCyc */ 
    {
         gLastRcvRadioCmdCyc  = 0u;
    }
    /* Initializing global variable RadioTestTimer */ 
    {
         RadioTestTimer  = 2000u;
    }
    {
        /* Tested function call */
        RadioTestManage();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("UINT32_T gLastRcvRadioCmdCyc", ( gLastRcvRadioCmdCyc ));
        CPPTEST_POST_CONDITION_UINTEGER("UINT16_T RadioTestTimer", ( RadioTestTimer ));
    }
}
/* CPPTEST_TEST_CASE_END test_RadioTestManage_9 */
/**
 * =被测函数=
 * RadioTestManage
 *  
 * =测试目的=
 * if(RADIO_TEST_STA_ING == GetRadioTestWorkSta())为真
 *  if(ATP_COM_NORMAL == GetAtoComuStatus())为真
 * if((RCV_ATO_BRACAST_SUCC == rcvAtoBoardCastRe) || (RCV_ATO_BRACAST_FAIL == rcvAtoBoardCastRe))为真（1:0）
 * if(RCV_ATO_BRACAST_SUCC == rcvAtoBoardCastRe)为假
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_RadioTestManage_10 */
/* CPPTEST_TEST_CASE_CONTEXT void RadioTestManage(void) */
void TestSuite_DailyInspectionManage_test_RadioTestManage_10()
{
    /* Pre-condition initialization */
    /* Initializing global variable gLastRcvRadioCmdCyc */ 
    {
         gLastRcvRadioCmdCyc  = 0u;
    }
    /* Initializing global variable RadioTestTimer */ 
    {
         RadioTestTimer  = 0u;
    }
    {
        /* Tested function call */
        RadioTestManage();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("UINT32_T gLastRcvRadioCmdCyc", ( gLastRcvRadioCmdCyc ));
        CPPTEST_POST_CONDITION_UINTEGER("UINT16_T RadioTestTimer", ( RadioTestTimer ));
    }
}
/* CPPTEST_TEST_CASE_END test_RadioTestManage_10 */
/**
 * =被测函数=
 * RadioTestManage
 *  
 * =测试目的=
 * if(RADIO_TEST_STA_ING == GetRadioTestWorkSta())为真
 *  if(ATP_COM_NORMAL == GetAtoComuStatus())为真
 * if((RCV_ATO_BRACAST_SUCC == rcvAtoBoardCastRe) || (RCV_ATO_BRACAST_FAIL == rcvAtoBoardCastRe))为真（0:1）
 * if(RCV_ATO_BRACAST_SUCC == rcvAtoBoardCastRe)为真
 * =初始条件=
 * - 初始化全局变量
 * - 
 * - 
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - xxxxxx 无返回值填 无
 */
/* CPPTEST_TEST_CASE_BEGIN test_RadioTestManage_11 */
/* CPPTEST_TEST_CASE_CONTEXT void RadioTestManage(void) */
void TestSuite_DailyInspectionManage_test_RadioTestManage_11()
{
    /* Pre-condition initialization */
    /* Initializing global variable gLastRcvRadioCmdCyc */ 
    {
         gLastRcvRadioCmdCyc  = 0u;
    }
    /* Initializing global variable RadioTestTimer */ 
    {
         RadioTestTimer  = 0u;
    }
    {
        /* Tested function call */
        RadioTestManage();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_UINTEGER("UINT32_T gLastRcvRadioCmdCyc", ( gLastRcvRadioCmdCyc ));
        CPPTEST_POST_CONDITION_UINTEGER("UINT16_T RadioTestTimer", ( RadioTestTimer ));
    }
}
/* CPPTEST_TEST_CASE_END test_RadioTestManage_11 */
