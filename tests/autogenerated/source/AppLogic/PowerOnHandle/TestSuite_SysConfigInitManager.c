#include "cpptest.h"

CPPTEST_CONTEXT("ATP_UT/ATP_UT/Source/AppLogic/PowerOnHandle/SysConfigInitManager.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("ATP_UT/ATP_UT/Source/AppLogic/PowerOnHandle/SysConfigInitManager.c");

CPPTEST_TEST_SUITE(TestSuite_SysConfigInitManager);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_WriteAtpConfigFile);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_WriteAtpConfigFile_0);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_WriteAtpConfigFile_1);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_WriteAtpConfigFile_2);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_InitLocalAtpConfigConfigData);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_InitLocalAtpConfigConfigData_0);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_InitLocalAtpConfigConfigData_1);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_InitLocalAtpConfigConfigData_2);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin_0);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin_1);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin_2);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin_3);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin_4);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_GetWriteAtpFileFlag);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_GetSystemAtpConfigData);
CPPTEST_TEST(TestSuite_SysConfigInitManager_test_GetAtpBinFileOpErrCode);

CPPTEST_TEST(test_SetAtpBinFileOpErrCode_0);
CPPTEST_TEST(test_SetWriteAtpFileFlag_0);
CPPTEST_TEST_SUITE_END();


void TestSuite_SysConfigInitManager_test_WriteAtpConfigFile();
void TestSuite_SysConfigInitManager_test_WriteAtpConfigFile_0();
void TestSuite_SysConfigInitManager_test_WriteAtpConfigFile_1();
void TestSuite_SysConfigInitManager_test_WriteAtpConfigFile_2();
void TestSuite_SysConfigInitManager_test_InitLocalAtpConfigConfigData();
void TestSuite_SysConfigInitManager_test_InitLocalAtpConfigConfigData_0();
void TestSuite_SysConfigInitManager_test_InitLocalAtpConfigConfigData_1();
void TestSuite_SysConfigInitManager_test_InitLocalAtpConfigConfigData_2();
void TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin();
void TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin_0();
void TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin_1();
void TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin_2();
void TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin_3();
void TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin_4();
void TestSuite_SysConfigInitManager_test_GetWriteAtpFileFlag();
void TestSuite_SysConfigInitManager_test_GetSystemAtpConfigData();
void TestSuite_SysConfigInitManager_test_GetAtpBinFileOpErrCode();

void test_SetAtpBinFileOpErrCode_0();
void test_SetWriteAtpFileFlag_0();

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_SysConfigInitManager);

void TestSuite_SysConfigInitManager_setUp()
{
}

void TestSuite_SysConfigInitManager_tearDown()
{
}


/* CPPTEST_TEST_CASE_BEGIN test_WriteAtpConfigFile */
/* CPPTEST_TEST_CASE_CONTEXT void WriteAtpConfigFile(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   WriteAtpConfigFile
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
 * - 返回值 无
 */
void TestSuite_SysConfigInitManager_test_WriteAtpConfigFile()
{
    /* Pre-condition initialization */
    /* Initializing global variable FileOpError */ 
    {
        FileOpError  = 0u;
    }
    /* Initializing global variable writeFlag */ 
    {
        writeFlag  = 0;
    }
    {
        /* Tested function call */
        WriteAtpConfigFile();
        /* Post-condition check */
        CPPTEST_ASSERT_EQUAL( 0, ( writeFlag ) )
    }
}
/* CPPTEST_TEST_CASE_END test_WriteAtpConfigFile */

/* CPPTEST_TEST_CASE_BEGIN test_WriteAtpConfigFile_0 */
/* CPPTEST_TEST_CASE_CONTEXT void WriteAtpConfigFile(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   WriteAtpConfigFile
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
 * - 返回值 无
 */
void TestSuite_SysConfigInitManager_test_WriteAtpConfigFile_0()
{
    /* Pre-condition initialization */
    /* Initializing global variable FileOpError */ 
    {
        FileOpError  = 0u;
    }
    /* Initializing global variable writeFlag */ 
    {
        writeFlag  = 0;
    }
    {
        /* Tested function call */
        WriteAtpConfigFile();
        /* Post-condition check */
        CPPTEST_ASSERT_EQUAL( 0, ( writeFlag ) );
    }
}
/* CPPTEST_TEST_CASE_END test_WriteAtpConfigFile_0 */

/* CPPTEST_TEST_CASE_BEGIN test_WriteAtpConfigFile_1 */
/* CPPTEST_TEST_CASE_CONTEXT void WriteAtpConfigFile(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   WriteAtpConfigFile
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
 * - 返回值 无
 */
void TestSuite_SysConfigInitManager_test_WriteAtpConfigFile_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable FileOpError */ 
    {
        FileOpError  = 0u;
    }
    /* Initializing global variable writeFlag */ 
    {
        writeFlag  = 0;
    }
    {
        /* Tested function call */
        WriteAtpConfigFile();
        /* Post-condition check */
        CPPTEST_ASSERT_EQUAL( 0, ( writeFlag ) );
    }
}
/* CPPTEST_TEST_CASE_END test_WriteAtpConfigFile_1 */

/* CPPTEST_TEST_CASE_BEGIN test_WriteAtpConfigFile_2 */
/* CPPTEST_TEST_CASE_CONTEXT void WriteAtpConfigFile(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   WriteAtpConfigFile
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
 * - 返回值 无
 */
void TestSuite_SysConfigInitManager_test_WriteAtpConfigFile_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable FileOpError */ 
    {
        FileOpError  = 0u;
    }
    /* Initializing global variable writeFlag */ 
    {
        writeFlag  = 0;
    }
    {
        /* Tested function call */
        WriteAtpConfigFile();
        /* Post-condition check */
        CPPTEST_ASSERT_EQUAL( 0, ( writeFlag ) );
    }
}
/* CPPTEST_TEST_CASE_END test_WriteAtpConfigFile_2 */

/* CPPTEST_TEST_CASE_BEGIN test_InitLocalAtpConfigConfigData */
/* CPPTEST_TEST_CASE_CONTEXT INT8_T InitLocalAtpConfigConfigData(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   InitLocalAtpConfigConfigData
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
 * - 返回值 -1
 */
void TestSuite_SysConfigInitManager_test_InitLocalAtpConfigConfigData()
{
    /* Pre-condition initialization */
    /* Initializing global variable FileOpError */ 
    {
        FileOpError  = 0u;
    }
    {
        /* Tested function call */
        INT8_T _return  = InitLocalAtpConfigConfigData();
        /* Post-condition check */
        CPPTEST_ASSERT_EQUAL(-1, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_InitLocalAtpConfigConfigData */

/* CPPTEST_TEST_CASE_BEGIN test_InitLocalAtpConfigConfigData_0 */
/* CPPTEST_TEST_CASE_CONTEXT INT8_T InitLocalAtpConfigConfigData(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   InitLocalAtpConfigConfigData
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
 * - 返回值 -
 */
void TestSuite_SysConfigInitManager_test_InitLocalAtpConfigConfigData_0()
{
    /* Pre-condition initialization */
    /* Initializing global variable FileOpError */ 
    {
        FileOpError  = 0u;
    }
    {
        /* Tested function call */
        INT8_T _return  = InitLocalAtpConfigConfigData();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_InitLocalAtpConfigConfigData_0 */

/* CPPTEST_TEST_CASE_BEGIN test_InitLocalAtpConfigConfigData_1 */
/* CPPTEST_TEST_CASE_CONTEXT INT8_T InitLocalAtpConfigConfigData(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   InitLocalAtpConfigConfigData
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
void TestSuite_SysConfigInitManager_test_InitLocalAtpConfigConfigData_1()
{
    /* Pre-condition initialization */
    /* Initializing global variable FileOpError */ 
    {
        FileOpError  = 0u;
    }
    {
        /* Tested function call */
        INT8_T _return  = InitLocalAtpConfigConfigData();
        /* Post-condition check */
        CPPTEST_ASSERT_EQUAL(0, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_InitLocalAtpConfigConfigData_1 */

/* CPPTEST_TEST_CASE_BEGIN test_InitLocalAtpConfigConfigData_2 */
/* CPPTEST_TEST_CASE_CONTEXT INT8_T InitLocalAtpConfigConfigData(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   InitLocalAtpConfigConfigData
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
 * - 返回值 -1
 */
void TestSuite_SysConfigInitManager_test_InitLocalAtpConfigConfigData_2()
{
    /* Pre-condition initialization */
    /* Initializing global variable FileOpError */ 
    {
        FileOpError  = 0u;
    }
    {
        /* Tested function call */
        INT8_T _return  = InitLocalAtpConfigConfigData();
        /* Post-condition check */
        CPPTEST_ASSERT_EQUAL(-1, ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_InitLocalAtpConfigConfigData_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ParseAtpSysConfogDataBin */
/* CPPTEST_TEST_CASE_CONTEXT UINT8_T ParseAtpSysConfogDataBin(const UINT8_T *, const UINT32_T) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   ParseAtpSysConfogDataBin
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
void TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin()
{
    UINT32_T _dataLen  = 7u;
    UINT8_T _dataBuff_0[7]  = {5,4};
    /* Initializing argument 2 (dataLen) */ 
   
    {
        /* Tested function call */
        UINT8_T _return  = ParseAtpSysConfogDataBin(_dataBuff_0, _dataLen);
        /* Post-condition check */
       CPPTEST_ASSERT_UINTEGER_EQUAL(0, _return);
    }
}
/* CPPTEST_TEST_CASE_END test_ParseAtpSysConfogDataBin */

/* CPPTEST_TEST_CASE_BEGIN test_ParseAtpSysConfogDataBin_0 */
/* CPPTEST_TEST_CASE_CONTEXT UINT8_T ParseAtpSysConfogDataBin(const UINT8_T *, const UINT32_T) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   ParseAtpSysConfogDataBin
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
 * - 返回值 1
 */
void TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin_0()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dataBuff) */ 
    /* Initializing argument 2 (dataLen) */ 
    UINT32_T _dataLen  = 7u;
    UINT8_T _dataBuff_0[7]  = {5,4};
    {
        /* Tested function call */
        UINT8_T _return  = ParseAtpSysConfogDataBin(_dataBuff_0, _dataLen);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(1, _return);
    }
}
/* CPPTEST_TEST_CASE_END test_ParseAtpSysConfogDataBin_0 */

/* CPPTEST_TEST_CASE_BEGIN test_ParseAtpSysConfogDataBin_1 */
/* CPPTEST_TEST_CASE_CONTEXT UINT8_T ParseAtpSysConfogDataBin(const UINT8_T *, const UINT32_T) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   ParseAtpSysConfogDataBin
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
void TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dataBuff) */ 
    UINT8_T _dataBuff[7]  = {5,4};
    /* Initializing argument 2 (dataLen) */ 
    UINT32_T _dataLen  = 7u;
    {
        /* Tested function call */
        UINT8_T _return  = ParseAtpSysConfogDataBin(_dataBuff, _dataLen);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, _return);
    }
}
/* CPPTEST_TEST_CASE_END test_ParseAtpSysConfogDataBin_1 */

/* CPPTEST_TEST_CASE_BEGIN test_ParseAtpSysConfogDataBin_2 */
/* CPPTEST_TEST_CASE_CONTEXT UINT8_T ParseAtpSysConfogDataBin(const UINT8_T *, const UINT32_T) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   ParseAtpSysConfogDataBin
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
void TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dataBuff) */ 
     UINT8_T _dataBuff[7]  = {5,6};
    /* Initializing argument 2 (dataLen) */ 
    UINT32_T _dataLen  = 7u;
    {
        /* Tested function call */
        UINT8_T _return  = ParseAtpSysConfogDataBin(_dataBuff, _dataLen);
        /* Post-condition check */
         CPPTEST_ASSERT_UINTEGER_EQUAL(0, _return);
    }
}
/* CPPTEST_TEST_CASE_END test_ParseAtpSysConfogDataBin_2 */

/* CPPTEST_TEST_CASE_BEGIN test_ParseAtpSysConfogDataBin_3 */
/* CPPTEST_TEST_CASE_CONTEXT UINT8_T ParseAtpSysConfogDataBin(const UINT8_T *, const UINT32_T) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   ParseAtpSysConfogDataBin
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
void TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dataBuff) */ 
     UINT8_T _dataBuff[7]  = {5,6};
    /* Initializing argument 2 (dataLen) */ 
    UINT32_T _dataLen  = 3u;
    {
        /* Tested function call */
        UINT8_T _return  = ParseAtpSysConfogDataBin(_dataBuff, _dataLen);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, _return);
    }
}
/* CPPTEST_TEST_CASE_END test_ParseAtpSysConfogDataBin_3 */

/* CPPTEST_TEST_CASE_BEGIN test_ParseAtpSysConfogDataBin_4 */
/* CPPTEST_TEST_CASE_CONTEXT UINT8_T ParseAtpSysConfogDataBin(const UINT8_T *, const UINT32_T) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   ParseAtpSysConfogDataBin
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
void TestSuite_SysConfigInitManager_test_ParseAtpSysConfogDataBin_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (dataBuff) */ 
    const UINT8_T * _dataBuff  = 0 ;
    /* Initializing argument 2 (dataLen) */ 
    UINT32_T _dataLen  = 0u;
    {
        /* Tested function call */
        UINT8_T _return  = ParseAtpSysConfogDataBin(_dataBuff, _dataLen);
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, _return);
    }
}
/* CPPTEST_TEST_CASE_END test_ParseAtpSysConfogDataBin_4 */

/* CPPTEST_TEST_CASE_BEGIN test_GetWriteAtpFileFlag */
/* CPPTEST_TEST_CASE_CONTEXT UINT8_T GetWriteAtpFileFlag(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   GetWriteAtpFileFlag
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
void TestSuite_SysConfigInitManager_test_GetWriteAtpFileFlag()
{
    /* Pre-condition initialization */
    /* Initializing global variable writeFlag */ 
    {
         writeFlag  = 0;
    }
    {
        /* Tested function call */
        UINT8_T _return  = GetWriteAtpFileFlag();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, _return);
    }
}
/* CPPTEST_TEST_CASE_END test_GetWriteAtpFileFlag */

/* CPPTEST_TEST_CASE_BEGIN test_GetSystemAtpConfigData */
/* CPPTEST_TEST_CASE_CONTEXT SystemAtpConfig_T * GetSystemAtpConfigData(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   GetSystemAtpConfigData
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
 * - 返回值 不等于0
 */
void TestSuite_SysConfigInitManager_test_GetSystemAtpConfigData()
{
    /* Pre-condition initialization */
    SystemAtpConfig_T * _return  = 0;

    {
        /* Tested function call */
        _return  = GetSystemAtpConfigData();
        /* Post-condition check */
        CPPTEST_ASSERT(0 != ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_GetSystemAtpConfigData */

/* CPPTEST_TEST_CASE_BEGIN test_GetAtpBinFileOpErrCode */
/* CPPTEST_TEST_CASE_CONTEXT UINT32_T GetAtpBinFileOpErrCode(void) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   GetAtpBinFileOpErrCode
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
void TestSuite_SysConfigInitManager_test_GetAtpBinFileOpErrCode()
{
    /* Pre-condition initialization */
    /* Initializing global variable FileOpError */ 
    {
         FileOpError  = 0u;
    }
    {
        /* Tested function call */
        UINT32_T _return  = GetAtpBinFileOpErrCode();
        /* Post-condition check */
        CPPTEST_ASSERT_UINTEGER_EQUAL(0, _return);
    }
}
/* CPPTEST_TEST_CASE_END test_GetAtpBinFileOpErrCode */


/* CPPTEST_TEST_CASE_BEGIN test_SetAtpBinFileOpErrCode_0 */
/* CPPTEST_TEST_CASE_CONTEXT void  SetAtpBinFileOpErrCode(const UINT32_T fileOpError) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   SetAtpBinFileOpErrCode
 *
 * =初始条件=
 *   初始化全局变量
 *   FileOpError = 1;
 *
 * =操作步骤=
 * - 初始化入参
 * - UINT32_T fileOpError = 0;
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - FileOpError = 0
 */
void test_SetAtpBinFileOpErrCode_0()
{
    /* Pre-condition initialization */
    UINT32_T fileOpError = 0;
    FileOpError = 1;

    {
        /* Tested function call */
        SetAtpBinFileOpErrCode(fileOpError);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_SetAtpBinFileOpErrCode_0 */

/* CPPTEST_TEST_CASE_BEGIN test_SetWriteAtpFileFlag_0 */
/* CPPTEST_TEST_CASE_CONTEXT void SetWriteAtpFileFlag(UINT8_T fileFlag) */
/**
 * =测试目的=
 *   测试函数能否按照预期执行
 *
 * =被测函数=
 *   SetWriteAtpFileFlag
 *
 * =初始条件=
 *   初始化全局变量
 *   writeFlag = 1;
 *
 * =操作步骤=
 * - 初始化入参
 * - UINT8_T fileFlag = 0;
 * - 对桩函数打桩
 * - 调用被测函数
 * - 检查结果
 *
 * =预期结果=
 * - writeFlag = 1
 */
void test_SetWriteAtpFileFlag_0()
{
    /* Pre-condition initialization */
    UINT8_T fileFlag = 1;
    writeFlag = 0;

    {
        /* Tested function call */
        SetWriteAtpFileFlag(fileFlag);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(1, ( writeFlag ));
    }
}
/* CPPTEST_TEST_CASE_END test_SetWriteAtpFileFlag_0 */
