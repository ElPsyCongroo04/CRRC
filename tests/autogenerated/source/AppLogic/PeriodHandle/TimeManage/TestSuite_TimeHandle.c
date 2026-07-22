#include "cpptest.h"

CPPTEST_CONTEXT("ATP_UT/ATP_UT/source/AppLogic/PeriodHandle/TimeManage/TimeHandle.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("ATP_UT/ATP_UT/source/AppLogic/PeriodHandle/TimeManage/TimeHandle.c");

CPPTEST_TEST_SUITE(TestSuite_TimeHandle);
CPPTEST_TEST(test_CalendarToSeconds_0);
CPPTEST_TEST(test_CalendarToSeconds_1);
CPPTEST_TEST(test_CalendarToSeconds_2);
CPPTEST_TEST(test_InitSysTimeInfo_0);
CPPTEST_TEST(test_Seconds2Calendar_0);
CPPTEST_TEST(test_Seconds2Calendar_1);
CPPTEST_TEST(test_Seconds2Calendar_2);

CPPTEST_TEST(TestSuite_TimeHandle_test_TimeManage_11);
CPPTEST_TEST(TestSuite_TimeHandle_test_Seconds2Calendar_6);
CPPTEST_TEST(TestSuite_TimeHandle_test_InitSysTimeInfo);
CPPTEST_TEST(TestSuite_TimeHandle_test_Seconds2Calendar);
CPPTEST_TEST(TestSuite_TimeHandle_test_InitSysTimeInfo_1);
CPPTEST_TEST(TestSuite_TimeHandle_test_TimeManage);
CPPTEST_TEST(TestSuite_TimeHandle_test_TimeManage_12);
CPPTEST_TEST(TestSuite_TimeHandle_test_TimeManage_13);
CPPTEST_TEST(TestSuite_TimeHandle_test_TimeManage_14);
CPPTEST_TEST(TestSuite_TimeHandle_test_TimeManage_15);
CPPTEST_TEST(TestSuite_TimeHandle_test_TimeManage_16);
CPPTEST_TEST(TestSuite_TimeHandle_test_TimeManage_17);
CPPTEST_TEST(TestSuite_TimeHandle_test_Seconds2Calendar_3);
CPPTEST_TEST(TestSuite_TimeHandle_test_Seconds2Calendar_7);
CPPTEST_TEST(TestSuite_TimeHandle_test_CalendarToSeconds);
CPPTEST_TEST(TestSuite_TimeHandle_test_CalendarToSeconds_5);
CPPTEST_TEST(TestSuite_TimeHandle_test_TimeManage_18);
CPPTEST_TEST(TestSuite_TimeHandle_test_Seconds2Calendar_4);
CPPTEST_TEST(TestSuite_TimeHandle_test_TimeManage_0);
CPPTEST_TEST(TestSuite_TimeHandle_test_TimeManage_19);
CPPTEST_TEST(TestSuite_TimeHandle_test_TimeManage_20);
CPPTEST_TEST_SUITE_END();
        
/* CPPTEST_TEST_CASE_DECLARATION test_CalendarToSeconds_0 */
void test_CalendarToSeconds_0();
/* CPPTEST_TEST_CASE_DECLARATION test_CalendarToSeconds_1 */
void test_CalendarToSeconds_1();
/* CPPTEST_TEST_CASE_DECLARATION test_CalendarToSeconds_2 */
void test_CalendarToSeconds_2();
/* CPPTEST_TEST_CASE_DECLARATION test_InitSysTimeInfo_0 */
void test_InitSysTimeInfo_0();
/* CPPTEST_TEST_CASE_DECLARATION test_Seconds2Calendar_0 */
void test_Seconds2Calendar_0();
/* CPPTEST_TEST_CASE_DECLARATION test_Seconds2Calendar_1 */
void test_Seconds2Calendar_1();
/* CPPTEST_TEST_CASE_DECLARATION test_Seconds2Calendar_2 */
void test_Seconds2Calendar_2();

void TestSuite_TimeHandle_test_TimeManage_11();
void TestSuite_TimeHandle_test_Seconds2Calendar_6();
void TestSuite_TimeHandle_test_InitSysTimeInfo();
void TestSuite_TimeHandle_test_Seconds2Calendar();
void TestSuite_TimeHandle_test_InitSysTimeInfo_1();
void TestSuite_TimeHandle_test_TimeManage();
void TestSuite_TimeHandle_test_TimeManage_12();
void TestSuite_TimeHandle_test_TimeManage_13();
void TestSuite_TimeHandle_test_TimeManage_14();
void TestSuite_TimeHandle_test_TimeManage_15();
void TestSuite_TimeHandle_test_TimeManage_16();
void TestSuite_TimeHandle_test_TimeManage_17();
void TestSuite_TimeHandle_test_Seconds2Calendar_3();
void TestSuite_TimeHandle_test_Seconds2Calendar_7();
void TestSuite_TimeHandle_test_CalendarToSeconds();
void TestSuite_TimeHandle_test_CalendarToSeconds_5();
void TestSuite_TimeHandle_test_TimeManage_18();
void TestSuite_TimeHandle_test_Seconds2Calendar_4();
void TestSuite_TimeHandle_test_TimeManage_0();
void TestSuite_TimeHandle_test_TimeManage_19();
void TestSuite_TimeHandle_test_TimeManage_20();
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_TimeHandle);

void TestSuite_TimeHandle_setUp()
{
}

void TestSuite_TimeHandle_tearDown()
{
}

/* CPPTEST_TEST_CASE_BEGIN test_CalendarToSeconds_0 */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足if(years < 1970U)
 *
 * =被测函数=
 *   CalendarToSeconds
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - UINT32_T * _CalenderBuff[100]  = 0;
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 0
 */
void test_CalendarToSeconds_0()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (CalenderBuff) */ 
	UINT32_T * _CalenderBuff[100]  = {0};
    {
        /* Tested function call */
        UINT32_T _return  = CalendarToSeconds(_CalenderBuff);
        /* Post-condition check */
         CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_CalendarToSeconds_0 */

/* CPPTEST_TEST_CASE_BEGIN test_CalendarToSeconds_1 */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足if(years < 1970U)
 *
 * =被测函数=
 *   CalendarToSeconds
 *
 * =初始条件=
 *   初始化全局变量
 *   unsigned long _CalenderBuff_0[6];
 *   UINT32_T * _CalenderBuff  = _CalenderBuff_0;
 *   _CalenderBuff_0[0] = 1969;
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
void test_CalendarToSeconds_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (CalenderBuff) */ 
    unsigned long _CalenderBuff_0[6];
    UINT32_T * _CalenderBuff  = _CalenderBuff_0;
    _CalenderBuff_0[0] = 1969;
    {
        /* Tested function call */
        UINT32_T _return  = CalendarToSeconds(_CalenderBuff);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_CalendarToSeconds_1 */

/* CPPTEST_TEST_CASE_BEGIN test_CalendarToSeconds_2 */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   不满足if(years < 1970U)
 *   不满足for (i = 1970U; i < years; i++)
 *   不满足if ((years & 3u) == 0u)
 *   不满足for (i = 0U; i < month; i++)
 *
 * =被测函数=
 *   CalendarToSeconds
 *
 * =初始条件=
 *   初始化全局变量
 *   unsigned long _CalenderBuff_0[6];
 *   UINT32_T * _CalenderBuff  = _CalenderBuff_0;
 *   _CalenderBuff_0[0] = 1970;
 *   _CalenderBuff_0[1] = 2;
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
void test_CalendarToSeconds_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (CalenderBuff) */ 
    unsigned long _CalenderBuff_0[6];
    UINT32_T * _CalenderBuff  = _CalenderBuff_0;
    _CalenderBuff_0[0] = 1970;
    _CalenderBuff_0[1] = 2;
    {
        /* Tested function call */
        UINT32_T _return  = CalendarToSeconds(_CalenderBuff);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ))
    }
}
/* CPPTEST_TEST_CASE_END test_CalendarToSeconds_2 */

/* CPPTEST_TEST_CASE_BEGIN test_InitSysTimeInfo_0 */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   InitSysTimeInfo
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
void test_InitSysTimeInfo_0()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        InitSysTimeInfo();
        /* Post-condition check */
    	 CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetSysRunTime()  ));
    }

}
/* CPPTEST_TEST_CASE_END test_InitSysTimeInfo_0 */

/* CPPTEST_TEST_CASE_BEGIN test_Seconds2Calendar_0 */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   不满足while(1)
 *
 * =被测函数=
 *   Seconds2Calendar
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
void test_Seconds2Calendar_0()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (seconds) */ 
    UINT32_T _seconds  = 220896000;
    /* Initializing argument 2 (pCalenderBuff) */ 
    UINT32_T  _pCalenderBuff_0[6];
    UINT32_T * _pCalenderBuff = _pCalenderBuff_0;
    {
        /* Tested function call */
        UINT8_T _return  = Seconds2Calendar(_seconds, _pCalenderBuff);
        /* Post-condition check */
         CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
    }

}
/* CPPTEST_TEST_CASE_END test_Seconds2Calendar_0 */

/* CPPTEST_TEST_CASE_BEGIN test_Seconds2Calendar_1 */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   while(1)中的if全覆盖
 *   不满足if ((yearsCal & 3u) == 0u)
 *   满足if(secondsTemp <= days[month])
 *   满足if(yearsCal < 2000U)
 *
 * =被测函数=
 *   Seconds2Calendar
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
void test_Seconds2Calendar_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (seconds) */ 
    UINT32_T _seconds  = 220896000;//1977/1/1 0:0:0
    /* Initializing argument 2 (pCalenderBuff) */ 
    UINT32_T  _pCalenderBuff_0[6];
    UINT32_T * _pCalenderBuff = _pCalenderBuff_0;
    {
        /* Tested function call */
        UINT8_T _return  = Seconds2Calendar(_seconds, _pCalenderBuff);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_Seconds2Calendar_1 */

/* CPPTEST_TEST_CASE_BEGIN test_Seconds2Calendar_2 */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   while(1)中的if全覆盖
 *   满足if ((yearsCal & 3u) == 0u)
 *   不满足if (seconds > 60U)
 *   不满足else if (seconds == 60U)
 *   满足if(yearsCal < 2000U)
 *   满足if(secondsTemp <= days[month])
 *
 * =被测函数=
 *   Seconds2Calendar
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
void test_Seconds2Calendar_2()
{
    /* Pre-condition initialization */

    /* Initializing argument 1 (seconds) */ 
    UINT32_T _seconds  = 315504000;//1980/1/1 0:0:0
    /* Initializing argument 2 (pCalenderBuff) */ 
    UINT32_T  _pCalenderBuff_0[6];
    UINT32_T * _pCalenderBuff = _pCalenderBuff_0;
    {
        /* Tested function call */
        UINT8_T _return  = Seconds2Calendar(_seconds, _pCalenderBuff);
       /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_Seconds2Calendar_2 */

/* CPPTEST_TEST_CASE_BEGIN test_TimeManage_11 */
/* CPPTEST_TEST_CASE_CONTEXT void TimeManage(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   满足if((atpTimeStru != NULL)&&(atpTimeStru->sec != 0))
 *   满足if((CONTROL_ATP == GetModeAtpAttri()) && (EUM_MODE != GetModeDrvMode()))
 *   不满足if(((GetSysRunPeriodCount()* GetConfigCycleTime()) % (GetAtpNtptimeReviseCycle() * 1000) == 0) &&(0 != GetSysRunPeriodCount()))
 *   满足if((ATP_TRUE == GetNtpreceivedfromATSTimeServer())&&(ATP_TRUE == GetNtptimeCaliTag()))
 *   满足if(1u == retVal)
 *   满足if (Abs(updateTimeDiff) > GetAtpNtpTimeReviseAllowRange())
 *
 * =被测函数=
 *   TimeManage
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
void TestSuite_TimeHandle_test_TimeManage_11()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TimeManage();
        /* Post-condition check */
 	    CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetRcvTacTimeValidTag() ));
    }
}
/* CPPTEST_TEST_CASE_END test_TimeManage_11 */

/* CPPTEST_TEST_CASE_BEGIN test_Seconds2Calendar_6 */
/* CPPTEST_TEST_CASE_CONTEXT UINT8_T Seconds2Calendar(UINT32_T, UINT32_T *) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   while(1)中的if全覆盖
 *   满足if ((yearsCal & 3u) == 0u)
 *   满足else if (seconds == 60U)
 *   不满足if(yearsCal < 2000U)
 *
 * =被测函数=
 *   Seconds2Calendar
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

void TestSuite_TimeHandle_test_Seconds2Calendar_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (seconds) */ 
	UINT32_T _seconds  = 1582905600;/*2021-12-02 10:48:57*/
    /* Initializing argument 2 (pCalenderBuff) */ 
        UINT32_T  _pCalenderBuff_0[6];
    UINT32_T * _pCalenderBuff = _pCalenderBuff_0;
    {
        /* Tested function call */
        UINT8_T _return  = Seconds2Calendar(_seconds, _pCalenderBuff);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_Seconds2Calendar_6 */

/* CPPTEST_TEST_CASE_BEGIN test_InitSysTimeInfo */
/* CPPTEST_TEST_CASE_CONTEXT void InitSysTimeInfo(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行if (sysCalendar != NULL)为1
 *
 * =被测函数=
 *   InitSysTimeInfo
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
void TestSuite_TimeHandle_test_InitSysTimeInfo()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        InitSysTimeInfo();
        /* Post-condition check */
		 CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetSysRunTime() ));
    }
}
/* CPPTEST_TEST_CASE_END test_InitSysTimeInfo */

/* CPPTEST_TEST_CASE_BEGIN test_Seconds2Calendar */
/* CPPTEST_TEST_CASE_CONTEXT UINT8_T Seconds2Calendar(UINT32_T, UINT32_T *) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *   不满足if(secondsTemp <= days[month])
 *
 * =被测函数=
 *   Seconds2Calendar
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
void TestSuite_TimeHandle_test_Seconds2Calendar()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (seconds) */ 
    UINT32_T _seconds  = 320601600; 
    /* Initializing argument 2 (pCalenderBuff) */ 
    UINT32_T  _pCalenderBuff_0[6];
    UINT32_T * _pCalenderBuff = _pCalenderBuff_0;
    {
        /* Tested function call */
        UINT8_T _return  = Seconds2Calendar(_seconds, _pCalenderBuff);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_Seconds2Calendar */

/* CPPTEST_TEST_CASE_BEGIN test_InitSysTimeInfo_1 */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T CalendarToSeconds(UINT32_T *) */
/**
 * =测试目的=
 *   测试函数InitSysTimeInfo能否按照预期执行
 *   满足if (sysCalendar != NULL_PTR)
 *
 * =被测函数=
 *   InitSysTimeInfo
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
 * - 返回值  0
 */
void TestSuite_TimeHandle_test_InitSysTimeInfo_1()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        InitSysTimeInfo();
        /* Post-condition check */
    	CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetSysRunTime() ));
    }
}
/* CPPTEST_TEST_CASE_END test_InitSysTimeInfo_1 */

/* CPPTEST_TEST_CASE_BEGIN test_TimeManage */
/* CPPTEST_TEST_CASE_CONTEXT void TimeManage(void) */
/**
 * =测试目的=
 *   测试函数TimeManage能否按照预期执行
 *   满足if(APP_TRUE == GetRcvTacTimeValidTag())
 *
 * =被测函数=
 *   TimeManage
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
void TestSuite_TimeHandle_test_TimeManage()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TimeManage();
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetRcvTacTimeValidTag() ));

    }
}
/* CPPTEST_TEST_CASE_END test_TimeManage */

/* CPPTEST_TEST_CASE_BEGIN test_TimeManage_12 */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T CalendarToSeconds(UINT32_T *) */
/**
 * =测试目的=
 *   测试函数TimeManage能否按照预期执行
 *   满足if(tmpRunPeriodCnt % tmpUpdateTimeMs == DEFAULT_ZERO)
 *
 * =被测函数=
 *   TimeManage
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
void TestSuite_TimeHandle_test_TimeManage_12()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TimeManage();
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetRcvTacTimeValidTag() ));
    }
}
/* CPPTEST_TEST_CASE_END test_TimeManage_12 */

/* CPPTEST_TEST_CASE_BEGIN test_TimeManage_13 */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T CalendarToSeconds(UINT32_T *) */
/**
 * =测试目的=
 *   测试函数TimeManage能否按照预期执行
 *   不满足if (((LocTime->year-2000u) == RcvTacTime.year) && (LocTime->month == RcvTacTime.month) && (LocTime->day == RcvTacTime.day) && (LocTime->hour == RcvTacTime.hour))（1，0，x）
 *
 * =被测函数=
 *   TimeManage
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
void TestSuite_TimeHandle_test_TimeManage_13()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TimeManage();
        /* Post-condition check */
    	CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetRcvTacTimeValidTag() ));
    }
}
/* CPPTEST_TEST_CASE_END test_TimeManage_13 */

/* CPPTEST_TEST_CASE_BEGIN test_TimeManage_14 */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T CalendarToSeconds(UINT32_T *) */
/**
 * =测试目的=
 *   测试函数TimeManage能否按照预期执行
 *   不满足if (((LocTime->year-2000u) == RcvTacTime.year) && (LocTime->month == RcvTacTime.month) && (LocTime->day == RcvTacTime.day) && (LocTime->hour == RcvTacTime.hour))（1，1,0，x）
 *
 * =被测函数=
 *   TimeManage
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
void TestSuite_TimeHandle_test_TimeManage_14()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TimeManage();
        /* Post-condition check */
	    CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetRcvTacTimeValidTag() ));
    }
}
/* CPPTEST_TEST_CASE_END test_TimeManage_14 */

/* CPPTEST_TEST_CASE_BEGIN test_TimeManage_15 */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T CalendarToSeconds(UINT32_T *) */
/**
 * =测试目的=
 *   测试函数TimeManage能否按照预期执行
 *   不满足if (((LocTime->year-2000u) == RcvTacTime.year) && (LocTime->month == RcvTacTime.month) && (LocTime->day == RcvTacTime.day) && (LocTime->hour == RcvTacTime.hour))（1，1,1,0）
 *
 * =被测函数=
 *   TimeManage
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
void TestSuite_TimeHandle_test_TimeManage_15()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TimeManage();
        /* Post-condition check */
       CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetRcvTacTimeValidTag() ));
    }
}
/* CPPTEST_TEST_CASE_END test_TimeManage_15 */

/* CPPTEST_TEST_CASE_BEGIN test_TimeManage_16 */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T CalendarToSeconds(UINT32_T *) */
/**
 * =测试目的=
 *   测试函数TimeManage能否按照预期执行
 *   满足if (((LocTime->year-2000u) == RcvTacTime.year) && (LocTime->month == RcvTacTime.month) && (LocTime->day == RcvTacTime.day) && (LocTime->hour == RcvTacTime.hour))
 *
 * =被测函数=
 *   TimeManage
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
void TestSuite_TimeHandle_test_TimeManage_16()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TimeManage();
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetRcvTacTimeValidTag() ));

    }
}
/* CPPTEST_TEST_CASE_END test_TimeManage_16 */

/* CPPTEST_TEST_CASE_BEGIN test_TimeManage_17 */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T CalendarToSeconds(UINT32_T *) */
/**
 * =测试目的=
 *   测试函数TimeManage能否按照预期执行
 *   满足if (updateTimeDiff > (INT32_T)GetAtpNtpTimeReviseAllowRange())
 *
 * =被测函数=
 *   TimeManage
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
void TestSuite_TimeHandle_test_TimeManage_17()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TimeManage();
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetRcvTacTimeValidTag() ));
 
    }
}
/* CPPTEST_TEST_CASE_END test_TimeManage_17 */

/* CPPTEST_TEST_CASE_BEGIN test_Seconds2Calendar_3 */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T CalendarToSeconds(UINT32_T *) */
/**
 * =测试目的=
 *   测试函数Seconds2Calendar能否按照预期执行
 *   不满足for(month = DEFAULT_ZERO;month < GetMonthPerYear(); month++)
 *
 * =被测函数=
 *   Seconds2Calendar
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
void TestSuite_TimeHandle_test_Seconds2Calendar_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (seconds) */ 
    UINT32_T _seconds  = 320601600;
    /* Initializing argument 2 (pCalenderBuff) */ 
    UINT32_T  _pCalenderBuff_0[6];
    UINT32_T * _pCalenderBuff = _pCalenderBuff_0;
    {
        /* Tested function call */
        UINT8_T _return  = Seconds2Calendar(_seconds, _pCalenderBuff);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_Seconds2Calendar_3 */

/* CPPTEST_TEST_CASE_BEGIN test_Seconds2Calendar_7 */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T CalendarToSeconds(UINT32_T *) */
/**
 * =测试目的=
 *   测试函数Seconds2Calendar能否按照预期执行
 *   满足if (seconds > 60U)
 *
 * =被测函数=
 *   Seconds2Calendar
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
void TestSuite_TimeHandle_test_Seconds2Calendar_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (seconds) */ 
    UINT32_T _seconds  = 330610033; 
    /* Initializing argument 2 (pCalenderBuff) */ 
    UINT32_T  _pCalenderBuff_0[6];
    UINT32_T * _pCalenderBuff = _pCalenderBuff_0;
    {
        /* Tested function call */
        UINT8_T _return  = Seconds2Calendar(_seconds, _pCalenderBuff);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_Seconds2Calendar_7 */

/* CPPTEST_TEST_CASE_BEGIN test_CalendarToSeconds */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T CalendarToSeconds(UINT32_T *) */
/**
 * =测试目的=
 *   测试函数CalendarToSeconds能否按照预期执行
 *   满足for (i = 1970U; i < years; i++)
 *
 * =被测函数=
 *   CalendarToSeconds
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - UINT32_T a[10];
 * - UINT32_T * _CalenderBuff  = &a ;
 * - _CalenderBuff[0]=1981;
 * - _CalenderBuff[1]=1;
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 0
 */
void TestSuite_TimeHandle_test_CalendarToSeconds()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (CalenderBuff) */ 
	UINT32_T a[10];
    UINT32_T * _CalenderBuff  = &a ;
	_CalenderBuff[0]=1981;
	_CalenderBuff[1]=1;
    {
        /* Tested function call */
        UINT32_T _return  = CalendarToSeconds(_CalenderBuff);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_CalendarToSeconds */

/* CPPTEST_TEST_CASE_BEGIN test_CalendarToSeconds_5 */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T CalendarToSeconds(UINT32_T *) */
/**
 * =测试目的=
 *   测试函数CalendarToSeconds能否按照预期执行
 *   满足if ((years & DEFAULT_3_VALUE) == DEFAULT_ZERO)
 *
 * =被测函数=
 *   CalendarToSeconds
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - UINT32_T a[10];
 *   UINT32_T * _CalenderBuff  = &a ;
 *   _CalenderBuff[0]=1972;
 *   _CalenderBuff[1]=1;
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 0
 */
void TestSuite_TimeHandle_test_CalendarToSeconds_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (CalenderBuff) */ 
	UINT32_T a[10];
    UINT32_T * _CalenderBuff  = &a ;
	_CalenderBuff[0]=1972;
	_CalenderBuff[1]=1;
    {
        /* Tested function call */
        UINT32_T _return  = CalendarToSeconds(_CalenderBuff);
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_CalendarToSeconds_5 */


/* CPPTEST_TEST_CASE_BEGIN test_TimeManage_18 */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T CalendarToSeconds(UINT32_T *) */
/**
 * =测试目的=
 *   测试函数TimeManage能否按照预期执行
 *   不满足if (((LocTime->year-2000u) == RcvTacTime.year) && (LocTime->month == RcvTacTime.month) && (LocTime->day == RcvTacTime.day) && (LocTime->hour == RcvTacTime.hour))（1，1,0，x）
 *
 * =被测函数=
 *   TimeManage
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
void TestSuite_TimeHandle_test_TimeManage_18()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TimeManage();
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetRcvTacTimeValidTag() ));

    }
}
/* CPPTEST_TEST_CASE_END test_TimeManage_18 */

/* CPPTEST_TEST_CASE_BEGIN test_Seconds2Calendar_4 */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T CalendarToSeconds(UINT32_T *) */
/**
 * =测试目的=
 *   测试函数Seconds2Calendar能否按照预期执行
 *   满足for(month = DEFAULT_ZERO;month < GetMonthPerYear(); month++)
 *
 * =被测函数=
 *   Seconds2Calendar
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
void TestSuite_TimeHandle_test_Seconds2Calendar_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (seconds) */ 
    UINT32_T _seconds  = 320601600; 
    /* Initializing argument 2 (pCalenderBuff) */ 
    UINT32_T  _pCalenderBuff_0[6];
    UINT32_T * _pCalenderBuff = _pCalenderBuff_0;
    {
        /* Tested function call */
        UINT8_T _return  = Seconds2Calendar(_seconds, _pCalenderBuff);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_Seconds2Calendar_4 */



/* CPPTEST_TEST_CASE_BEGIN test_TimeManage_0 */
/* CPPTEST_TEST_CASE_CONTEXT void TimeManage(void) */
/**
 * =测试目的=
 *   测试函数TimeManage能否按照预期执行
 *
 * =被测函数=
 *   TimeManage
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
void TestSuite_TimeHandle_test_TimeManage_0()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TimeManage();
        /* Post-condition check */
    	CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetRcvTacTimeValidTag() ));
    }
}
/* CPPTEST_TEST_CASE_END test_TimeManage_0 */

/* CPPTEST_TEST_CASE_BEGIN test_TimeManage_19 */
/* CPPTEST_TEST_CASE_CONTEXT void TimeManage(void) */
/**
 * =测试目的=
 *   测试函数TimeManage能否按照预期执行
 *   满足if(APP_TRUE == GetRcvTacTimeValidTag())
 *
 * =被测函数=
 *   TimeManage
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数GetRcvTacTimeValidTag打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 0
 */
void TestSuite_TimeHandle_test_TimeManage_19()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TimeManage();
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetRcvTacTimeValidTag() ));
    }
}
/* CPPTEST_TEST_CASE_END test_TimeManage_19 */

/* CPPTEST_TEST_CASE_BEGIN test_TimeManage_20 */
/* CPPTEST_TEST_CASE_CONTEXT void TimeManage(void) */
/**
 * =测试目的=
 *   测试函数TimeManage能否按照预期执行
 *   不满足if(APP_TRUE == GetRcvTacTimeValidTag())
 *
 * =被测函数=
 *   TimeManage
 *
 * =初始条件=
 *   初始化全局变量
 *
 * =操作步骤=
 * - 初始化入参
 * - 对桩函数GetRcvTacTimeValidTag打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - 返回值 0
 */
void TestSuite_TimeHandle_test_TimeManage_20()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        TimeManage();
        /* Post-condition check */
		CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( GetRcvTacTimeValidTag() ));

    }
}
/* CPPTEST_TEST_CASE_END test_TimeManage_20 */



