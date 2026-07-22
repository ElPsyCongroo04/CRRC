
#include "cpptest_driver.c.h"

#include "cpptest_transport.h"
#include "cpptest_memory_analysis.h"





#if defined(CPPTEST_MS_SETERROR_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)
unsigned int __stdcall SetErrorMode(unsigned int);
#endif


#if defined(CPPTEST_MS_SETERROR_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)
int __cdecl _set_error_mode(int);
#endif


#if defined(CPPTEST_MS_DEBUG_REPORT_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)
#undef _CrtSetReportMode
int __cdecl _CrtSetReportMode(int, int);
#endif


#if defined(CPPTEST_MS_DEBUG_REPORT_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)
#undef _CrtSetReportFile
void* __cdecl _CrtSetReportFile(int, void*);
#endif



static void __CPTR_Initialize_Properties(void)
{

    cpptestAddProperty("testlog.enabled", "true");
    cpptestAddProperty("testlog.file", "D:\\CRRC\\ATP-UT1-2607-copy\\ATP\\ATP\\test\\UT1\\.cpptest\\ATP_UT\\unit-data\\current_tubf179707/cpptest_results.tlog");
    cpptestAddProperty("testlog.append", "true");
    cpptestAddProperty("covlog.enabled", "true");
    cpptestAddProperty("covlog.file", "D:\\CRRC\\ATP-UT1-2607-copy\\ATP\\ATP\\test\\UT1\\.cpptest\\ATP_UT\\unit-data\\current_tubf179707/cpptest_results.clog");
    cpptestAddProperty("covlog.append", "true");
    cpptestAddProperty("coverage.optimize_statements", "false");
    cpptestAddProperty("coverage.trace_function_calls", "true");
    cpptestAddProperty("coverage.use_func_def_records", "true");
    cpptestAddProperty("testcases.timeout", "5000");
    cpptestAddProperty("testcases.max_messages", "100");
    cpptestAddProperty("send.post.conditions", "1");
    cpptestAddProperty("send.reports", "1");
    cpptestAddProperty("send.passed.asserts", "0");
    cpptestAddProperty("test.app_mode", "0");

#ifdef CPPTEST_MAX_MESSAGES_NUMBER
    cpptestAddProperty("testcases.max_messages", CPPTEST_QUOTE(CPPTEST_MAX_MESSAGES_NUMBER));
#endif
#ifdef CPPTEST_TIMEOUT_PER_TEST_CASE
    cpptestAddProperty("testcases.timeout", CPPTEST_QUOTE(CPPTEST_TIMEOUT_PER_TEST_CASE));
#endif
#ifdef CPPTEST_MAX_ALLOWED_STACK_TRACE_DEPTH
    cpptestAddProperty("test.max_st_depth", CPPTEST_QUOTE(CPPTEST_MAX_ALLOWED_STACK_TRACE_DEPTH));
#endif
#if defined(CPPTEST_THREADS)
    cpptestAddProperty("threads.enabled", CPPTEST_QUOTE(CPPTEST_THREADS));
#endif

}

#if CPPTEST_DATA_SOURCES_ENABLED


extern CppTest_GetDataSourceFPtr CppTest_getDSFPtr;

EXTERN_C_LINKAGE_START
static CppTest_DataSource* __CPTR_Get_Data_Source(const char* dataSource, const char* testSuite)
{
    

    return 0;
}
EXTERN_C_LINKAGE_END
#endif /* CPPTEST_DATA_SOURCES_ENABLED */

static int __CPTR_runtimeInitialized = 0;

EXTERN_C_LINKAGE void CppTest_InitializeRuntime(void)
{
    if (!__CPTR_runtimeInitialized) {
        __CPTR_runtimeInitialized = 1;
        
        
#if defined(CPPTEST_MS_SETERROR_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)
SetErrorMode(2);
#endif

        
#if defined(CPPTEST_MS_SETERROR_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)
_set_error_mode(1);
#endif

        
#if defined(CPPTEST_MS_DEBUG_REPORT_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)
_CrtSetReportMode(0, 1); _CrtSetReportMode(1, 1); _CrtSetReportMode(2, 1);
#endif

        
#if defined(CPPTEST_MS_DEBUG_REPORT_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)
_CrtSetReportFile(0, (void *) -5); _CrtSetReportFile(1, (void *) -5); _CrtSetReportFile(2, (void *) -5);
#endif

        cpptestInitializeRuntime(
                (CppTestPropertiesInitCallback)&__CPTR_Initialize_Properties,
                (CppTestThreadInitCallback)&threadInitializer,
                CPPTEST_TARGET_SYSTEM_PTR);
    }
}


EXTERN_C_LINKAGE void CppTest_FinalizeRuntime(void)
{
    if (__CPTR_runtimeInitialized) {
        __CPTR_runtimeInitialized = 0;
        cpptestFinalizeRuntime();
        
    }
}


static int __CPTR_initializations = 0;

/* Routine called very early. In c++ mode this is called from constructor
   of global object. In c mode this is called at beginning of CppTest_Main
   method. */
EXTERN_C_LINKAGE void __CPTR_Initialize(void)
{
    if (__CPTR_initializations == 0) {
        CppTest_InitializeRuntime();
    }
    ++__CPTR_initializations;
}

EXTERN_C_LINKAGE void __CPTR_Finalize(void)
{
    --__CPTR_initializations;
    if (__CPTR_initializations == 0) {
        CppTest_FinalizeRuntime();
    }
}

#ifdef __cplusplus
struct __CPTR_Initializer_TestRunner {
    __CPTR_Initializer_TestRunner()
    {
        CPPTEST_INITIALIZE_RUNTIME();
    }
    ~__CPTR_Initializer_TestRunner()
    {
        CPPTEST_FINALIZE_RUNTIME();
    }
};

#if CPPTEST_USE_GLOBAL_OBJECTS_TO_INIT_RUNTIME
static struct __CPTR_Initializer_TestRunner __CPTR_initializer;
#endif

#define CPPTEST_ENTER_MAIN_ROUTINE() \
    __CPTR_Initializer_TestRunner __CPTR_main_initializer

#define CPPTEST_EXIT_MAIN_ROUTINE()

#else

#define CPPTEST_ENTER_MAIN_ROUTINE() \
    CPPTEST_INITIALIZE_RUNTIME()

#define CPPTEST_EXIT_MAIN_ROUTINE() \
    CPPTEST_FINALIZE_RUNTIME()

#endif




static CPPTEST_INTEGER __CPTR_Test_Manager_Count = 0;
static CPPTEST_INTEGER __CPTR_Test_Manager_Start_Id = 0;
static const char* __CPTR_Test_Manager_TestSuite = 0;
static const char* __CPTR_Test_Manager_TestCase = 0;

static int __CPTR_Test_Manager_Test(const char* testSuite, const char* testCase)
{
    __CPTR_Test_Manager_Count++;
    if (__CPTR_Test_Manager_TestSuite && cpptestStrCmp(__CPTR_Test_Manager_TestSuite, testSuite) != 0) {
        return 0;
    }
    if (__CPTR_Test_Manager_TestCase && cpptestStrCmp(__CPTR_Test_Manager_TestCase, testCase) != 0) {
        return 0;
    }
    return __CPTR_Test_Manager_Count > __CPTR_Test_Manager_Start_Id;
}

EXTERN_C_LINKAGE void TestSuite_ModeControl_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_ModeControl_callTest(const char*);
EXTERN_C_LINKAGE void TestSuite_ModeHandle_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_ModeHandle_callTest(const char*);
EXTERN_C_LINKAGE void TestSuite_ModeInit_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_ModeInit_callTest(const char*);

static void __CPTR_Do_Tests_TestSuite_ModeControl()
{
    CPPTEST_RUN_TEST_SUITE_BEGIN(TestSuite_ModeControl, "ATP_UT/ATP_UT/source/AppLogic/PeriodHandle/ModeManage/ModeControl.c", 61)
        CPPTEST_RUN_TEST_SUITE_SETUP(TestSuite_ModeControl)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_ModeControlJudge)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_ModeMagFunc)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PeriodInitAfterModeConv)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_18)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_19)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_20)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_21)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_22)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_23)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_24)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_25)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_26)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_27)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_28)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_29)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_30)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_31)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_32)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_33)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_34)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_35)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_36)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_37)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_38)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_39)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_40)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_41)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_42)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_43)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_44)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_45)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_46)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_47)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_48)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_49)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_50)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_51)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_52)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_53)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_54)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_55)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_56)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeControl, TestSuite_ModeControl_test_PreSetHighestMode_9)
        CPPTEST_RUN_TEST_SUITE_TEARDOWN(TestSuite_ModeControl)
    CPPTEST_RUN_TEST_SUITE_END(TestSuite_ModeControl, 61)
}
static void __CPTR_Do_Tests_TestSuite_ModeHandle()
{
    CPPTEST_RUN_TEST_SUITE_BEGIN(TestSuite_ModeHandle, "ATP_UT/ATP_UT/source/AppLogic/PeriodHandle/ModeManage/ModeHandle.c", 806)
        CPPTEST_RUN_TEST_SUITE_SETUP(TestSuite_ModeHandle)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_01)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_02)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_03)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_04)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_05)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_06)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_18)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_19)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_20)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_21)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_22)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_23)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_24)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_25)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_26)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_27)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_28)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_29)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_30)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_31)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_32)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_33)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_34)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_35)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_36)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_37)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_38)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_39)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_40)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_41)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_42)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_43)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_44)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_45)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_46)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_47)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_48)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_49)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_50)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_51)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_52)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_53)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_54)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_55)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_56)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_57)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_58)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_59)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_60)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_61)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_62)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_63)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_64)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_65)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_66)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_67)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_68)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_69)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_70)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_71)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_72)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_73)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_74)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_75)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_76)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_77)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_78)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_79)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_80)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_81)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_83)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_84)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_85)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_86)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_87)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_88)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_89)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_90)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_91)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_92)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_93)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_94)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_95)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_96)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AMModeProcess_97)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_18)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_19)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_20)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_21)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_22)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_23)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_24)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_25)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_26)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_27)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_28)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_29)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_30)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_31)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_32)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_33)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_34)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ARModeProcess_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_01)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_18)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_19)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_20)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_21)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_22)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_23)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ActiveProcess_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AmCmToRmCovert)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AmCmToRmCovert_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AmCmToRmCovert_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AmCmToRmCovert_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AmCmToRmCovert_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AmCmToRmCovert_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AmCmToRmCovert_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_AmCmToRmCovert_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAMToARModeProcess)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAMToARModeProcess_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAMToARModeProcess_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAMToARModeProcess_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAMToARModeProcess_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAMToARModeProcess_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAMToARModeProcess_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAMToARModeProcess_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAMToARModeProcess_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAMToARModeProcess_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAMToARModeProcess_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAMToARModeProcess_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAMToARModeProcess_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAMToARModeProcess_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAMToARModeProcess_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAMToARModeProcess_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_18)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_19)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_20)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_21)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_22)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_23)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMAndAMModeCheck_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_01)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_100)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_101)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_102)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_103)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_104)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_105)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_106)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_107)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_108)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_109)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_110)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_111)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_112)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_113)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_114)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_115)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_116)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_117)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_118)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_119)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_120)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_121)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_122)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_123)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_124)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_125)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_126)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_18)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_19)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_20)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_21)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_22)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_23)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_24)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_25)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_26)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_27)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_28)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_29)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_30)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_31)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_32)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_33)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_34)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_35)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_36)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_37)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_38)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_39)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_40)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_41)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_42)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_43)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_44)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_45)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_46)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_47)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_48)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_49)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_50)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_51)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_52)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_53)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_54)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_55)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_56)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_57)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_58)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_59)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_60)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_61)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_62)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_63)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_64)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_65)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_66)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_67)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_68)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_69)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_70)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_71)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_72)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_73)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_74)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_75)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_76)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_77)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_78)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_79)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_80)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_81)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_82)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_83)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_84)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_85)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_86)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_87)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_88)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_89)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_90)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_91)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_92)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_93)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_94)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_95)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_96)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_97)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_98)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CMModeProcess_99)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitCmCheck_01)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitCmCheck_02)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitCmCheck_03)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitCmCheck_04)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitCmCheck_05)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitCmCheck_06)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitCmCheck_07)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitCmCheck_08)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitRdCheck)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitRmCheck)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitRmCheck_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitRmCheck_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitRmCheck_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitRmCheck_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitRmCheck_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitRmCheck_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitRmCheck_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitRmCheck_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitRmCheck_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitRmCheck_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitRmCheck_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitRmCheck_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitRmCheck_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamExitRmCheck_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_18)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_19)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_20)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_21)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_22)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_23)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_24)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_25)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_26)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_27)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_28)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_29)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_30)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_CamModeProcess_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_01)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_18)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_EUMModeprocess_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_01)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_02)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_18)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_19)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_20)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_21)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_22)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_23)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_24)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_25)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_26)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_27)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_28)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_29)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_30)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_31)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_32)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_33)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_34)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_35)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_36)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_37)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_38)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_39)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_40)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOInCheck_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_100)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_101)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_18)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_19)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_191)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_192)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_193)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_194)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_195)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_196)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_20)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_21)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_22)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_23)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_24)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_25)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_26)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_27)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_28)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_29)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_30)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_31)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_32)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_33)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_34)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_35)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_36)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_37)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_38)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_39)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_40)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_41)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_42)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_43)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_44)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_45)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_46)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_47)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_48)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_49)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_50)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_51)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_52)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_53)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_54)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_55)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_56)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_57)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_58)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_59)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_60)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_61)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_62)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_63)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_64)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_65)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_66)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_67)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_68)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_69)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_70)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_71)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_72)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_73)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_74)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_75)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_76)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_77)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_78)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_79)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_80)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_81)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_82)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_83)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_84)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_85)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_86)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_87)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_88)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_89)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_90)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_91)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_92)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_93)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_94)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_95)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_96)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_97)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_98)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FAOModeProcess_99)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_18)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_19)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_20)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_21)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_22)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_23)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_24)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_25)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_26)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_27)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_28)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_29)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_30)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_31)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCamCheck_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_01)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_02)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_18)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_19)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_20)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_21)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_22)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_23)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_24)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_25)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_26)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_27)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_28)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_29)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_30)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_31)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_32)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_33)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_34)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_35)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_36)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitCmCheck_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitProcess_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRdCheck_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRdCheck_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_18)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_19)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_20)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_21)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_22)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_23)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_24)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_25)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_FamExitRmCheck_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_ModeConversion)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_19)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_20)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_21)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_NonActiveProcess_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_01)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_18)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_19)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_20)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_21)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_22)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_23)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_24)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_25)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_26)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_27)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_28)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_29)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_30)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_31)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RDModeProcess_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_01)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_18)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_19)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_20)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_21)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_22)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_23)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_24)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_25)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_26)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_27)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_28)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_29)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_30)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_31)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_32)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_33)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_34)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_35)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_36)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_37)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_38)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_39)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_40)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_41)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_42)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_43)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_44)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_45)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_46)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_47)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_48)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_49)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_50)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_51)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_52)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_53)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_54)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeHandle, TestSuite_ModeHandle_test_RMModeProcess_9)
        CPPTEST_RUN_TEST_SUITE_TEARDOWN(TestSuite_ModeHandle)
    CPPTEST_RUN_TEST_SUITE_END(TestSuite_ModeHandle, 806)
}
static void __CPTR_Do_Tests_TestSuite_ModeInit()
{
    CPPTEST_RUN_TEST_SUITE_BEGIN(TestSuite_ModeInit, "ATP_UT/ATP_UT/source/AppLogic/PeriodHandle/ModeManage/ModeInit.c", 99)
        CPPTEST_RUN_TEST_SUITE_SETUP(TestSuite_ModeInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_AmToRmInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_ArToCmInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_BlocToCbtcInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_CMAMToFAOInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_CamToCmInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_CamToCmInit_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_CamToRmInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_CbtcToArInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_CmToRmInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_CmToRmInit_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_CmToRmInit_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_CmToRmInit_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_EumInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_EumInit_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_EumToRmInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2CMJuge)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2CMJuge_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2CMJuge_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2CMJuge_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2CMJuge_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2CMJuge_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2CMJuge_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2CMJuge_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2CMJuge_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2CMJuge_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2CMJuge_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2CMJuge_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2CMJuge_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_01)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_14)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_15)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_16)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_17)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_18)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_19)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_20)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_21)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_22)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_23)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_24)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOExit2RMJuge_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Revers)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Revers_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Revers_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Revers_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Revers_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Revers_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Revers_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Revers_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Revers_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Station)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Station_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Station_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Station_10)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Station_11)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Station_12)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Station_13)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Station_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Station_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Station_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Station_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Station_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Station_7)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Station_8)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHold2Station_9)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHoldStill)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHoldStill_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHoldStill_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHoldStill_2)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHoldStill_3)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHoldStill_4)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHoldStill_5)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOHoldStill_6)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOToCmInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_FAOToRmInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_RDInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_RDInit_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_RdToArInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_RdToBlocCmInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_RdToCbtcCmInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_RdToFAOInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_RdToRmInit)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_RdToRmInit_0)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_RdToRmInit_1)
        CPPTEST_RUN_TEST_CASE(TestSuite_ModeInit, TestSuite_ModeInit_test_RmToCmInit)
        CPPTEST_RUN_TEST_SUITE_TEARDOWN(TestSuite_ModeInit)
    CPPTEST_RUN_TEST_SUITE_END(TestSuite_ModeInit, 99)
}

static void __CPTR_Do_Tests(void)
{
    /* If the runtime is not yet initialized do this now. */
    CppTest_InitializeRuntime();

    __CPTR_Test_Manager_Start_Id = cpptestGetIntPropertyEx("execution.start_after", __CPTR_Test_Manager_Start_Id);
    __CPTR_Test_Manager_TestSuite = cpptestGetProperty("execution.testsuite");
    __CPTR_Test_Manager_TestCase = cpptestGetProperty("execution.testcase");
#if CPPTEST_DATA_SOURCES_ENABLED
    CppTest_getDSFPtr = __CPTR_Get_Data_Source;
#endif
    cpptestTestRunnerBegin();
    __CPTR_Do_Tests_TestSuite_ModeControl();
    __CPTR_Do_Tests_TestSuite_ModeHandle();
    __CPTR_Do_Tests_TestSuite_ModeInit();
    cpptestTestRunnerEnd();
}

static int __CPTR_Parse_Int_Option(const char* arg, const char* param, CPPTEST_INTEGER* value)
{
    unsigned int argLen = cpptestStrLen(arg);
    if (cpptestStrNCmp(arg, param, argLen) == 0) {
        CPPTEST_INTEGER tmpValue = 0;
        const char* end = cpptestStrToInteger(param + argLen, &tmpValue);
        if (*end == '\0') {
            *value = tmpValue;
            return 1;
        }
    }
    return 0;
}

static void __CPTR_Test_Manager_Init(int argc, char* argv[])
{
    int i;
    for (i = 0; i < argc; ++i) {
        if (__CPTR_Parse_Int_Option("--start-after=", argv[i], &__CPTR_Test_Manager_Start_Id)) {
            continue;
        }
    }
}

#if CPPTEST_WCHAR_ENABLED
static int __CPTR_Parse_Int_OptionW(const CppTest_wchar_t* arg, const CppTest_wchar_t* param, CPPTEST_INTEGER* value)
{
    unsigned int argLen = cpptestWStrLen(arg);
    if (cpptestWStrNCmp(arg, param, argLen) == 0) {
        CPPTEST_INTEGER tmpValue = 0;
        const CppTest_wchar_t* end = cpptestWStrToInteger(param + argLen, &tmpValue);
        if (*end == L'\0') {
            *value = tmpValue;
            return 1;
        }
    }
    return 0;
}

static void __CPTR_Test_Manager_InitW(int argc, CppTest_wchar_t* argv[])
{
    int i;
    for (i = 0; i < argc; ++i) {
        if (__CPTR_Parse_Int_OptionW(CPPTEST_const_wchar_t_ptr_CAST L"--start-after=", argv[i], &__CPTR_Test_Manager_Start_Id)) {
            continue;
        }
    }
}
#endif /* CPPTEST_WCHAR_ENABLED */

int CppTest_Main(int argc, char* argv[])
{
    CPPTEST_ENTER_MAIN_ROUTINE();

    __CPTR_Test_Manager_Init(argc, argv);

    __CPTR_Do_Tests();

    CPPTEST_EXIT_MAIN_ROUTINE();

    return 0;
}

#if CPPTEST_WCHAR_ENABLED
int CppTest_MainW(int argc, CppTest_wchar_t* argv[])
{
    CPPTEST_ENTER_MAIN_ROUTINE();

    __CPTR_Test_Manager_InitW(argc, argv);

    __CPTR_Do_Tests();

    CPPTEST_EXIT_MAIN_ROUTINE();

    return 0;
}
#endif /* CPPTEST_WCHAR_ENABLED */

