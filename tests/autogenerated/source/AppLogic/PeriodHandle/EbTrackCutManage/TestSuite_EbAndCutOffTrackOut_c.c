#include "cpptest.h"

CPPTEST_CONTEXT("ATP_UT/ATP_UT/source/AppLogic/PeriodHandle/EbTrackCutManage/EbAndCutOffTrackOut.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("ATP_UT/ATP_UT/source/AppLogic/PeriodHandle/EbTrackCutManage/EbAndCutOffTrackOut.c");

CPPTEST_TEST_SUITE(TestSuite_EbAndCutOffTrackOut);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_RecordEbReasonLow_0);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_RecordEbReasonHigh_0);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_RecordEbFaoReasonLow_0);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_RecordEbFaoReasonHigh_0);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_RecordEbFaoReasonLow_1);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_RecordEbFaoReasonHigh_1);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_RelieveTractionCutoffReason_0);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_OutputEbReason);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_OutputEbReason_0);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_0);

CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_SetEbReason);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_RecordEbSyncActReasonLow);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_RecordEbSyncActReasonHigh);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_RecordEbSyncActFaoReasonLow);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_RecordEbSyncActFaoReasonHigh);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_InitEbReason);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_GetEbSyncActReasonLow);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_GetEbSyncActReasonHigh);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_GetEbSyncActFaoReasonLow);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_GetEbSyncActFaoReasonHigh);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_GetEbReasonLow);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_GetEbReasonHigh);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_GetEbReason);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_GetEbFaoReasonLow);
CPPTEST_TEST(TestSuite_EbAndCutOffTrackOut_test_GetEbFaoReasonHigh);
CPPTEST_TEST_SUITE_END();
        

void TestSuite_EbAndCutOffTrackOut_test_RecordEbReasonLow_0();
void TestSuite_EbAndCutOffTrackOut_test_RecordEbReasonHigh_0();
void TestSuite_EbAndCutOffTrackOut_test_RecordEbFaoReasonLow_0();
void TestSuite_EbAndCutOffTrackOut_test_RecordEbFaoReasonHigh_0();
void TestSuite_EbAndCutOffTrackOut_test_RecordEbFaoReasonLow_1();
void TestSuite_EbAndCutOffTrackOut_test_RecordEbFaoReasonHigh_1();
void TestSuite_EbAndCutOffTrackOut_test_RelieveTractionCutoffReason_0();
void TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason();
void TestSuite_EbAndCutOffTrackOut_test_OutputEbReason();
void TestSuite_EbAndCutOffTrackOut_test_OutputEbReason_0();
void TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_0();

void TestSuite_EbAndCutOffTrackOut_test_SetEbReason();
void TestSuite_EbAndCutOffTrackOut_test_RecordEbSyncActReasonLow();
void TestSuite_EbAndCutOffTrackOut_test_RecordEbSyncActReasonHigh();
void TestSuite_EbAndCutOffTrackOut_test_RecordEbSyncActFaoReasonLow();
void TestSuite_EbAndCutOffTrackOut_test_RecordEbSyncActFaoReasonHigh();
void TestSuite_EbAndCutOffTrackOut_test_InitEbReason();
void TestSuite_EbAndCutOffTrackOut_test_GetEbSyncActReasonLow();
void TestSuite_EbAndCutOffTrackOut_test_GetEbSyncActReasonHigh();
void TestSuite_EbAndCutOffTrackOut_test_GetEbSyncActFaoReasonLow();
void TestSuite_EbAndCutOffTrackOut_test_GetEbSyncActFaoReasonHigh();
void TestSuite_EbAndCutOffTrackOut_test_GetEbReasonLow();
void TestSuite_EbAndCutOffTrackOut_test_GetEbReasonHigh();
void TestSuite_EbAndCutOffTrackOut_test_GetEbReason();
void TestSuite_EbAndCutOffTrackOut_test_GetEbFaoReasonLow();
void TestSuite_EbAndCutOffTrackOut_test_GetEbFaoReasonHigh();
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_EbAndCutOffTrackOut);

void TestSuite_EbAndCutOffTrackOut_setUp()
{
}

void TestSuite_EbAndCutOffTrackOut_tearDown()
{
}


/**
 * =测试目的=
 *   测试函数RecordEbReasonLow能否按照预期执行
 *   满足if (ebReasonLow != DEFAULT_ZERO)[0=0]
 *
 * =被测函数=
 *   RecordEbReasonLow
 *
 * =初始条件=
 *   初始化全局变量
 * - UINT32_T _ebReasonLow  = DEFAULT_ZERO;
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
/* CPPTEST_TEST_CASE_BEGIN test_RecordEbReasonLow_0 */
/* CPPTEST_TEST_CASE_CONTEXT void RecordEbReasonLow(const UINT32_T) */
void TestSuite_EbAndCutOffTrackOut_test_RecordEbReasonLow_0()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ebReasonLow) */ 
    UINT32_T _ebReasonLow  = DEFAULT_ZERO;
    /* Initializing global variable EbReasonStru */ 

    {
        /* Tested function call */
        RecordEbReasonLow(_ebReasonLow);
        /* Post-condition check */   
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetEbReasonLow() ));
		
    }
}
/* CPPTEST_TEST_CASE_END test_RecordEbReasonLow_0 */
/**
 * =测试目的=
 *   测试函数RecordEbReasonHigh能否按照预期执行
 *   满足if (ebReasonHigh != DEFAULT_ZERO)[0=0]
 *
 * =被测函数=
 *   RecordEbReasonHigh
 *
 * =初始条件=
 *   初始化全局变量
 * - UINT32_T _ebReasonLow  = DEFAULT_ZERO;
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
/* CPPTEST_TEST_CASE_BEGIN test_RecordEbReasonHigh_0 */
/* CPPTEST_TEST_CASE_CONTEXT void RecordEbReasonHigh(const UINT32_T) */
void TestSuite_EbAndCutOffTrackOut_test_RecordEbReasonHigh_0()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ebReasonHigh) */ 
    UINT32_T _ebReasonHigh  = DEFAULT_ZERO;
   
    {
        /* Tested function call */
        RecordEbReasonHigh(_ebReasonHigh);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetEbReasonHigh() ));
		
    }
}
/* CPPTEST_TEST_CASE_END test_RecordEbReasonHigh_0 */
/**
 * =测试目的=
 *   测试函数RecordEbFaoReasonLow能否按照预期执行
 *   满足if (ebReasonHigh != DEFAULT_ZERO)[0=0]
 *
 * =被测函数=
 *   RecordEbFaoReasonLow
 *
 * =初始条件=
 *   初始化全局变量
 * - UINT32_T _ebReasonLow  = DEFAULT_ZERO;
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
/* CPPTEST_TEST_CASE_BEGIN test_RecordEbFaoReasonLow_0 */
/* CPPTEST_TEST_CASE_CONTEXT void RecordEbFaoReasonLow(const UINT32_T) */
void TestSuite_EbAndCutOffTrackOut_test_RecordEbFaoReasonLow_0()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ebReasonLow) */ 
    UINT32_T _ebReasonLow  = DEFAULT_ZERO;
   
    {
        /* Tested function call */
        RecordEbFaoReasonLow(_ebReasonLow);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetEbFaoReasonLow() ));
    }
}
/* CPPTEST_TEST_CASE_END test_RecordEbFaoReasonLow_0 */
/**
 * =测试目的=
 *   测试函数RecordEbFaoReasonHigh能否按照预期执行
 *   满足if (ebReasonHigh != DEFAULT_ZERO)[0=0]
 *
 * =被测函数=
 *   RecordEbFaoReasonHigh
 *
 * =初始条件=
 *   初始化全局变量
 *   UINT32_T _ebReasonLow  = DEFAULT_ZERO;
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
/* CPPTEST_TEST_CASE_BEGIN test_RecordEbFaoReasonHigh_0 */
/* CPPTEST_TEST_CASE_CONTEXT void RecordEbFaoReasonHigh(const UINT32_T) */
void TestSuite_EbAndCutOffTrackOut_test_RecordEbFaoReasonHigh_0()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ebReasonHigh) */ 
    UINT32_T _ebReasonHigh  = DEFAULT_ZERO;
   
    {
        /* Tested function call */
        RecordEbFaoReasonHigh(_ebReasonHigh);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetEbFaoReasonHigh() ));
    }
}
/* CPPTEST_TEST_CASE_END test_RecordEbFaoReasonHigh_0 */
/**
 * =测试目的=
 *   测试函数RecordEbFaoReasonLow能否按照预期执行
 *   满足if (ebReasonHigh != DEFAULT_ZERO)[1=1]
 *
 * =被测函数=
 *   RecordEbFaoReasonLow
 *
 * =初始条件=
 *   初始化全局变量
 *   UINT32_T _ebReasonLow  = 1;
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
/* CPPTEST_TEST_CASE_BEGIN test_RecordEbFaoReasonLow_1 */
/* CPPTEST_TEST_CASE_CONTEXT void RecordEbFaoReasonLow(const UINT32_T) */
void TestSuite_EbAndCutOffTrackOut_test_RecordEbFaoReasonLow_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ebReasonLow) */ 
    UINT32_T _ebReasonLow  = 1;
  
    {
        /* Tested function call */
        RecordEbFaoReasonLow(_ebReasonLow);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetEbFaoReasonLow() ));
    }
}
/* CPPTEST_TEST_CASE_END test_RecordEbFaoReasonLow_1 */
/**
 * =测试目的=
 *   测试函数RecordEbFaoReasonHigh能否按照预期执行
 *   满足if (ebReasonHigh != DEFAULT_ZERO)[1=1]
 *
 * =被测函数=
 *   RecordEbFaoReasonHigh
 *
 * =初始条件=
 *   初始化全局变量
 *   UINT32_T _ebReasonLow  = 1;
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
/* CPPTEST_TEST_CASE_BEGIN test_RecordEbFaoReasonHigh_1 */
/* CPPTEST_TEST_CASE_CONTEXT void RecordEbFaoReasonHigh(const UINT32_T) */
void TestSuite_EbAndCutOffTrackOut_test_RecordEbFaoReasonHigh_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ebReasonHigh) */ 
    UINT32_T _ebReasonHigh  = 1;
   
    {
        /* Tested function call */
        RecordEbFaoReasonHigh(_ebReasonHigh);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetEbFaoReasonHigh() ));
    }
}
/* CPPTEST_TEST_CASE_END test_RecordEbFaoReasonHigh_1 */

/* CPPTEST_TEST_CASE_BEGIN test_RelieveTractionCutoffReason_0 */
/* CPPTEST_TEST_CASE_CONTEXT void RelieveTractionCutoffReason(const UINT32_T) */
/**
 * =测试目的=
 *   测试函数RelieveTractionCutoffReason能否按照预期执行
 *   满足if (cutReason == (tmpRsn & cutReason))[1=1]
 *
 * =被测函数=
 *   RelieveTractionCutoffReason
 *
 * =初始条件=
 *   初始化全局变量
 *   UINT32_T _cutReason  = 1u;
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数GetTractBrakeCutOffTratcReason打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值1
 */
void TestSuite_EbAndCutOffTrackOut_test_RelieveTractionCutoffReason_0()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (cutReason) */ 
    UINT32_T _cutReason  = 1u;
    {
        /* Tested function call */
        RelieveTractionCutoffReason(_cutReason);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(1, ( GetTractBrakeCutOffTratcReason() ));
		
    }
}
/* CPPTEST_TEST_CASE_END test_RelieveTractionCutoffReason_0 */

/* CPPTEST_TEST_CASE_BEGIN test_RelieveEbReason */
/* CPPTEST_TEST_CASE_CONTEXT void RelieveEbReason(const UINT8_T, const UINT32_T) */
/**
 * =测试目的=
 *   测试函数RelieveEbReason能否按照预期执行
 *   满足if (ebReason == (tmpEbRsn & ebReason))
 *
 * =被测函数=
 *   RelieveEbReason
 *
 * =初始条件=
 *   初始化全局变量
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
void TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ebType) */ 
    UINT8_T _ebType  = 0;
    /* Initializing argument 2 (ebReason) */ 
    UINT32_T _ebReason  = 0u;
    {
        /* Tested function call */
        RelieveEbReason(_ebType, _ebReason);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetSysEbLowRsn() ));
    }
}
/* CPPTEST_TEST_CASE_END test_RelieveEbReason */

/* CPPTEST_TEST_CASE_BEGIN test_OutputEbReason */
/* CPPTEST_TEST_CASE_CONTEXT void OutputEbReason(const UINT8_T, const UINT32_T) */
/**
 * =测试目的=
 *   测试函数OutputEbReason能否按照预期执行
 *   满足 case EB_TYPE_FAO_HIGH
 *
 * =被测函数=
 *   OutputEbReason
 *
 * =初始条件=
 *   初始化全局变量
 *   UINT8_T _ebType  = EB_TYPE_FAO_HIGH;
 *
 * =操作步骤=
 * - 初始化入参
 * - 桩函数不打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 !0
 */
void TestSuite_EbAndCutOffTrackOut_test_OutputEbReason()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ebType) */ 
    UINT8_T _ebType  = EB_TYPE_FAO_HIGH;
    /* Initializing argument 2 (ebReason) */ 
    UINT32_T _ebReason  = 0u;
    {
        /* Tested function call */
        OutputEbReason(_ebType, _ebReason);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, (GetSysEbLowRsn() ));
    }
}
/* CPPTEST_TEST_CASE_END test_OutputEbReason */

/* CPPTEST_TEST_CASE_BEGIN test_OutputEbReason_0 */
/* CPPTEST_TEST_CASE_CONTEXT void OutputEbReason(const UINT8_T, const UINT32_T) */
/**
 * =测试目的=
 *   测试函数OutputEbReason能否按照预期执行
 *   满足 break
 *
 * =被测函数=
 *   OutputEbReason
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - 桩函数不打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 !0
 */
void TestSuite_EbAndCutOffTrackOut_test_OutputEbReason_0()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ebType) */ 
    UINT8_T _ebType  = 0;
    /* Initializing argument 2 (ebReason) */ 
    UINT32_T _ebReason  = 5u;
    {
        /* Tested function call */
        OutputEbReason(_ebType, _ebReason);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, (GetSysEbLowRsn() ));
    }
}
/* CPPTEST_TEST_CASE_END test_OutputEbReason_0 */

/* CPPTEST_TEST_CASE_BEGIN test_RelieveEbReason_0 */
/* CPPTEST_TEST_CASE_CONTEXT void RelieveEbReason(const UINT8_T, const UINT32_T) */
/**
 * =测试目的=
 *   测试函数RelieveEbReason能否按照预期执行
 *   满足 case EB_TYPE_FAO_HIGH
 *
 * =被测函数=
 *   RelieveEbReason
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - 桩函数不打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 0
 */
void TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_0()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ebType) */ 
    UINT8_T _ebType  = EB_TYPE_FAO_HIGH;
    /* Initializing argument 2 (ebReason) */ 
    UINT32_T _ebReason  = 0u;
    {
        /* Tested function call */
        RelieveEbReason(_ebType, _ebReason);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetSysEbLowRsn() ));
    }
}
/* CPPTEST_TEST_CASE_END test_RelieveEbReason_0 */

/* CPPTEST_TEST_CASE_BEGIN test_SetEbReason */
/* CPPTEST_TEST_CASE_CONTEXT void SetEbReason(const UINT8_T) */
/**
 * =测试目的=
 *   测试函数SetEbReason能否按照预期执行
 *   满足SetEbReason
 * 
 * =被测函数=
 *   SetEbReason
 *
 * =初始条件=
 *   初始化全局变量
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
void TestSuite_EbAndCutOffTrackOut_test_SetEbReason()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (reason) */ 
    UINT8_T _reason  = 0;
    /* Initializing global variable gEbReasonNum */ 
    {
         
    }
    {
        /* Tested function call */
        SetEbReason(_reason);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, (SetEbReason(_reason) ));
    }
}
/* CPPTEST_TEST_CASE_END test_SetEbReason */

/* CPPTEST_TEST_CASE_BEGIN test_RecordEbSyncActReasonLow */
/* CPPTEST_TEST_CASE_CONTEXT void RecordEbSyncActReasonLow(const UINT32_T) */
/**
 * =测试目的=
 *   测试函数RecordEbSyncActReasonLow能否按照预期执行
 *   满足RecordEbSyncActReasonLow
 * 
 * =被测函数=
 *   RecordEbSyncActReasonLow
 *
 * =初始条件=
 *   初始化全局变量
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
void TestSuite_EbAndCutOffTrackOut_test_RecordEbSyncActReasonLow()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ebReasonLow) */ 
    UINT32_T _ebReasonLow  = 0u;
    /* Initializing global variable EbReasonStru */ 
    {
         
         
         
         
         
         
         
         
    }
    {
        /* Tested function call */
        RecordEbSyncActReasonLow(_ebReasonLow);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( RecordEbSyncActReasonLow(_ebReasonLow) ));

    }
}
/* CPPTEST_TEST_CASE_END test_RecordEbSyncActReasonLow */

/* CPPTEST_TEST_CASE_BEGIN test_RecordEbSyncActReasonHigh */
/* CPPTEST_TEST_CASE_CONTEXT void RecordEbSyncActReasonHigh(const UINT32_T) */
/**
 * =测试目的=
 *   测试函数RecordEbSyncActReasonHigh能否按照预期执行
 *   满足RecordEbSyncActReasonHigh
 * 
 * =被测函数=
 *   RecordEbSyncActReasonHigh
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值! 0
 */
void TestSuite_EbAndCutOffTrackOut_test_RecordEbSyncActReasonHigh()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ebReasonHigh) */ 
    UINT32_T _ebReasonHigh  = 0u;
    /* Initializing global variable EbReasonStru */ 
    {
         
         
         
         
         
         
         
         
    }
    {
        /* Tested function call */
        RecordEbSyncActReasonHigh(_ebReasonHigh);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( RecordEbSyncActReasonHigh(_ebReasonHigh) ));

     
    }
}
/* CPPTEST_TEST_CASE_END test_RecordEbSyncActReasonHigh */

/* CPPTEST_TEST_CASE_BEGIN test_RecordEbSyncActFaoReasonLow */
/* CPPTEST_TEST_CASE_CONTEXT void RecordEbSyncActFaoReasonLow(const UINT32_T) */
/**
 * =测试目的=
 *   测试函数RecordEbSyncActFaoReasonLow能否按照预期执行
 *   满足RecordEbSyncActFaoReasonLow
 * 
 * =被测函数=
 *   RecordEbSyncActFaoReasonLow
 *
 * =初始条件=
 *   初始化全局变量
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
void TestSuite_EbAndCutOffTrackOut_test_RecordEbSyncActFaoReasonLow()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ebReasonLow) */ 
    UINT32_T _ebReasonLow  = 0u;
    /* Initializing global variable EbReasonStru */ 
    {
         
         
         
         
         
         
         
         
    }
    {
        /* Tested function call */
        RecordEbSyncActFaoReasonLow(_ebReasonLow);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, (RecordEbSyncActFaoReasonLow(_ebReasonLow) ));

       
    }
}
/* CPPTEST_TEST_CASE_END test_RecordEbSyncActFaoReasonLow */

/* CPPTEST_TEST_CASE_BEGIN test_RecordEbSyncActFaoReasonHigh */
/* CPPTEST_TEST_CASE_CONTEXT void RecordEbSyncActFaoReasonHigh(const UINT32_T) */
/**
 * =测试目的=
 *   测试函数RecordEbSyncActFaoReasonHigh能否按照预期执行
 *   满足RecordEbSyncActFaoReasonHigh
 * 
 * =被测函数=
 *   RecordEbSyncActFaoReasonHigh
 *
 * =初始条件=
 *   初始化全局变量
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
void TestSuite_EbAndCutOffTrackOut_test_RecordEbSyncActFaoReasonHigh()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (ebReasonHigh) */ 
    UINT32_T _ebReasonHigh  = 0u;
    /* Initializing global variable EbReasonStru */ 
    {
         
         
         
    }
    {
        /* Tested function call */
        RecordEbSyncActFaoReasonHigh(_ebReasonHigh);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( RecordEbSyncActFaoReasonHigh(_ebReasonHigh) ));

        
    }
}
/* CPPTEST_TEST_CASE_END test_RecordEbSyncActFaoReasonHigh */

/* CPPTEST_TEST_CASE_BEGIN test_InitEbReason */
/* CPPTEST_TEST_CASE_CONTEXT void InitEbReason(const UINT8_T) */
/**
 * =测试目的=
 *   测试函数InitEbReason能否按照预期执行
 *   满足InitEbReason
 * 
 * =被测函数=
 *   InitEbReason
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值! 0
 */
void TestSuite_EbAndCutOffTrackOut_test_InitEbReason()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (value) */ 
    UINT8_T _value  = 0;
    /* Initializing global variable EbReasonStru */ 
    {
         
         
         
         
    }
    {
        /* Tested function call */
        InitEbReason(_value);
        /* Post-condition check */
        CPPTEST_ASSERT(0!= InitEbReason );

      
    }
}
/* CPPTEST_TEST_CASE_END test_InitEbReason */

/* CPPTEST_TEST_CASE_BEGIN test_GetEbSyncActReasonLow */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T GetEbSyncActReasonLow(void) */
/**
 * =测试目的=
 *   测试函数GetEbSyncActReasonLow能否按照预期执行
 *   满足GetEbSyncActReasonLow
 * 
 * =被测函数=
 *   GetEbSyncActReasonLow
 *
 * =初始条件=
 *   初始化全局变量
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
void TestSuite_EbAndCutOffTrackOut_test_GetEbSyncActReasonLow()
{
    /* Pre-condition initialization */
    /* Initializing global variable EbReasonStru */ 
    {
         
         
         
         
         
         
         
         
    }
    {
        /* Tested function call */
        UINT32_T _return  = GetEbSyncActReasonLow();
        /* Post-condition check */
       CPPTEST_ASSERT_UINTEGER_EQUAL(0,( _return ));
       
    }
}
/* CPPTEST_TEST_CASE_END test_GetEbSyncActReasonLow */

/* CPPTEST_TEST_CASE_BEGIN test_GetEbSyncActReasonHigh */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T GetEbSyncActReasonHigh(void) */
/**
 * =测试目的=
 *   测试函数GetEbSyncActReasonHigh能否按照预期执行
 *   满足GetEbSyncActReasonHigh
 * 
 * =被测函数=
 *   GetEbSyncActReasonHigh
 *
 * =初始条件=
 *   初始化全局变量
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
void TestSuite_EbAndCutOffTrackOut_test_GetEbSyncActReasonHigh()
{
    /* Pre-condition initialization */
    /* Initializing global variable EbReasonStru */ 
    {
         
         
         
         
         
         
         
         
    }
    {
        /* Tested function call */
        UINT32_T _return  = GetEbSyncActReasonHigh();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
        
    }
}
/* CPPTEST_TEST_CASE_END test_GetEbSyncActReasonHigh */

/* CPPTEST_TEST_CASE_BEGIN test_GetEbSyncActFaoReasonLow */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T GetEbSyncActFaoReasonLow(void) */
/**
 * =测试目的=
 *   测试函数GetEbSyncActFaoReasonLow能否按照预期执行
 *   满足GetEbSyncActFaoReasonLow
 * 
 * =被测函数=
 *   GetEbSyncActFaoReasonLow
 *
 * =初始条件=
 *   初始化全局变量
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
void TestSuite_EbAndCutOffTrackOut_test_GetEbSyncActFaoReasonLow()
{
    /* Pre-condition initialization */
    /* Initializing global variable EbReasonStru */ 
    {
         
         
         
         
         
         
         
         
    }
    {
        /* Tested function call */
        UINT32_T _return  = GetEbSyncActFaoReasonLow();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
       
    }
}
/* CPPTEST_TEST_CASE_END test_GetEbSyncActFaoReasonLow */

/* CPPTEST_TEST_CASE_BEGIN test_GetEbSyncActFaoReasonHigh */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T GetEbSyncActFaoReasonHigh(void) */
/**
 * =测试目的=
 *   测试函数GetEbSyncActFaoReasonHigh能否按照预期执行
 *   满足GetEbSyncActFaoReasonHigh
 * 
 * =被测函数=
 *   GetEbSyncActFaoReasonHigh
 *
 * =初始条件=
 *   初始化全局变量
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
void TestSuite_EbAndCutOffTrackOut_test_GetEbSyncActFaoReasonHigh()
{
    /* Pre-condition initialization */
    /* Initializing global variable EbReasonStru */ 
    {
         
         
         
         
         
         
         
         
    }
    {
        /* Tested function call */
        UINT32_T _return  = GetEbSyncActFaoReasonHigh();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
        
    }
}
/* CPPTEST_TEST_CASE_END test_GetEbSyncActFaoReasonHigh */

/* CPPTEST_TEST_CASE_BEGIN test_GetEbReasonLow */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T GetEbReasonLow(void) */
/**
 * =测试目的=
 *   测试函数GetEbReasonLow能否按照预期执行
 *   满足GetEbReasonLow
 * 
 * =被测函数=
 *   GetEbReasonLow
 *
 * =初始条件=
 *   初始化全局变量
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
void TestSuite_EbAndCutOffTrackOut_test_GetEbReasonLow()
{
    /* Pre-condition initialization */
    /* Initializing global variable EbReasonStru */ 
    {
         
         
         
         
         
         
         
         
    }
    {
        /* Tested function call */
        UINT32_T _return  = GetEbReasonLow();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
       
    }
}
/* CPPTEST_TEST_CASE_END test_GetEbReasonLow */

/* CPPTEST_TEST_CASE_BEGIN test_GetEbReasonHigh */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T GetEbReasonHigh(void) */
/**
 * =测试目的=
 *   测试函数GetEbReasonHigh能否按照预期执行
 *   满足GetEbReasonHigh
 * 
 * =被测函数=
 *   GetEbReasonHigh
 *
 * =初始条件=
 *   初始化全局变量
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
void TestSuite_EbAndCutOffTrackOut_test_GetEbReasonHigh()
{
    /* Pre-condition initialization */
    /* Initializing global variable EbReasonStru */ 
    {
         
         
         
         
         
         
         
         
    }
    {
        /* Tested function call */
        UINT32_T _return  = GetEbReasonHigh();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
       
    }
}
/* CPPTEST_TEST_CASE_END test_GetEbReasonHigh */

/* CPPTEST_TEST_CASE_BEGIN test_GetEbReason */
/* CPPTEST_TEST_CASE_CONTEXT UINT8_T GetEbReason(void) */
/**
 * =测试目的=
 *   测试函数GetEbReason能否按照预期执行
 *   满足GetEbReason
 * 
 * =被测函数=
 *   GetEbReason
 *
 * =初始条件=
 *   初始化全局变量
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
void TestSuite_EbAndCutOffTrackOut_test_GetEbReason()
{
    /* Pre-condition initialization */
    /* Initializing global variable gEbReasonNum */ 
    {
         
    }
    {
        /* Tested function call */
        UINT8_T _return  = GetEbReason();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0,( _return ));
      
    }
}
/* CPPTEST_TEST_CASE_END test_GetEbReason */

/* CPPTEST_TEST_CASE_BEGIN test_GetEbFaoReasonLow */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T GetEbFaoReasonLow(void) */
/**
 * =测试目的=
 *   测试函数GetEbFaoReasonLow能否按照预期执行
 *   满足GetEbFaoReasonLow
 * 
 * =被测函数=
 *   GetEbFaoReasonLow
 *
 * =初始条件=
 *   初始化全局变量
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
void TestSuite_EbAndCutOffTrackOut_test_GetEbFaoReasonLow()
{
    /* Pre-condition initialization */
    /* Initializing global variable EbReasonStru */ 
    {
         
        
         
    }
    {
        /* Tested function call */
        UINT32_T _return  = GetEbFaoReasonLow();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0,( _return ));
   
    }
}
/* CPPTEST_TEST_CASE_END test_GetEbFaoReasonLow */

/* CPPTEST_TEST_CASE_BEGIN test_GetEbFaoReasonHigh */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T GetEbFaoReasonHigh(void) */
/**
 * =测试目的=
 *   测试函数GetEbFaoReasonHigh能否按照预期执行
 *   满足GetEbFaoReasonHigh
 * 
 * =被测函数=
 *   GetEbFaoReasonHigh
 *
 * =初始条件=
 *   初始化全局变量
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
void TestSuite_EbAndCutOffTrackOut_test_GetEbFaoReasonHigh()
{
    /* Pre-condition initialization */
    /* Initializing global variable EbReasonStru */ 
    {
     
    }
    {
        /* Tested function call */
        UINT32_T _return  = GetEbFaoReasonHigh();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
        
    }
}
/* CPPTEST_TEST_CASE_END test_GetEbFaoReasonHigh */
