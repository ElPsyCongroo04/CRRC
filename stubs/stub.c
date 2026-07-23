#include "cpptest.h"
#include "ReverseHandle.h"
#include "EbAndCutOffTrackOut.h"

int IsCheckJumpProtectionCoverageTestCase(void)
{
    return CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_48")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_49")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_50")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_51")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_52")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_53")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_54")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_55")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_56")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_57")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_58")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_59")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_60")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_61");
}

UINT32_T g_CheckJumpProtection61_GetRunDrvModeCalls;

void ResetCheckJumpProtection61StubSpy(void)
{
    g_CheckJumpProtection61_GetRunDrvModeCalls = 0U;
}

EXTERN_C_LINKAGE UINT8_T CheckStopPointDistance(void);
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_CheckStopPointDistance(void)
{
    if (CppTest_IsCurrentTestCase(
            "TestSuite_ProtectionHandle_test_CheckJumpProtection_58"))
    {
        return ATP_FALSE;
    }
    if (IsCheckJumpProtectionCoverageTestCase())
    {
        return ATP_TRUE;
    }
    return ATP_FALSE;
}

EXTERN_C_LINKAGE UINT8_T GetInMeaSpksBtn(void);
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaSpksBtn(void)
{
    if (CppTest_IsCurrentTestCase(
            "TestSuite_ProtectionHandle_test_SpksPrtFunc_2"))
    {
        return ATP_TRUE;
    }
    if (CppTest_IsCurrentTestCase(
            "TestSuite_ProtectionHandle_test_CheckJumpProtection_56"))
    {
        return ATP_TRUE;
    }
    if (IsCheckJumpProtectionCoverageTestCase())
    {
        return ATP_FALSE;
    }
    return DEFAULT_ZERO;
}

UINT32_T g_SpksPrtFunc2_OutputEbReasonCalls;
UINT8_T g_SpksPrtFunc2_OutputEbReasonType;
UINT32_T g_SpksPrtFunc2_OutputEbReasonValue;

void ResetSpksPrtFunc2StubSpy(void)
{
    g_SpksPrtFunc2_OutputEbReasonCalls = 0U;
    g_SpksPrtFunc2_OutputEbReasonType = DEFAULT_ZERO;
    g_SpksPrtFunc2_OutputEbReasonValue = 0U;
}

/** User stub definition for function: void OutputEbReason(const UINT8_T, const UINT32_T) */
EXTERN_C_LINKAGE void OutputEbReason (const UINT8_T ebType, const UINT32_T ebReason) ;
EXTERN_C_LINKAGE void CppTest_Stub_OutputEbReason (const UINT8_T ebType, const UINT32_T ebReason)
{
    if (CppTest_IsCurrentTestCase(
            "TestSuite_ProtectionHandle_test_SpksPrtFunc_2"))
    {
        ++g_SpksPrtFunc2_OutputEbReasonCalls;
        g_SpksPrtFunc2_OutputEbReasonType = ebType;
        g_SpksPrtFunc2_OutputEbReasonValue = ebReason;
    }
}

/* Short-circuit Getter counter and branch-output spy for EBProcFunc_15. */
UINT32_T g_EBProcFunc15_GetAomComuStatusCalls;
UINT32_T g_EBProcFunc15_RelieveEbReasonCalls;
UINT8_T g_EBProcFunc15_RelieveEbType;
UINT32_T g_EBProcFunc15_RelieveEbReason;

void ResetEBProcFunc15StubSpy(void)
{
    g_EBProcFunc15_GetAomComuStatusCalls = 0U;
    g_EBProcFunc15_RelieveEbReasonCalls = 0U;
    g_EBProcFunc15_RelieveEbType = 0U;
    g_EBProcFunc15_RelieveEbReason = 0U;
}

EXTERN_C_LINKAGE void RelieveEbReason(
    const UINT8_T ebType,
    const UINT32_T ebReason);
EXTERN_C_LINKAGE void CppTest_Stub_RelieveEbReason(
    const UINT8_T ebType,
    const UINT32_T ebReason)
{
    if (CppTest_IsCurrentTestCase(
            "TestSuite_TractionBrakeHandle_test_EBProcFunc_15"))
    {
        ++g_EBProcFunc15_RelieveEbReasonCalls;
        g_EBProcFunc15_RelieveEbType = ebType;
        g_EBProcFunc15_RelieveEbReason = ebReason;
    }
}

/* Short-circuit input counters and output spies for CtrlVOBCEnterAR_75..83. */
UINT32_T g_CtrlVOBCEnterAR_Target_GetCurAtpCtrlStateCalls;
UINT32_T g_CtrlVOBCEnterAR_Target_GetOppoAtpComuStatusCalls;
UINT32_T g_CtrlVOBCEnterAR_Target_AddSysAutoReverseErrNoCalls;
UINT32_T g_CtrlVOBCEnterAR_Target_AddSysAutoReverseErrNoValue;
UINT32_T g_CtrlVOBCEnterAR_Target_ReverseEnterArInitCalls;

int IsCtrlVOBCEnterARTargetTestCase(void)
{
    return CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_75")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_76")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_77")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_78")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_79")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_80")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_81")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_82")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_83");
}

void ResetCtrlVOBCEnterARTargetStubSpy(void)
{
    g_CtrlVOBCEnterAR_Target_GetCurAtpCtrlStateCalls = 0U;
    g_CtrlVOBCEnterAR_Target_GetOppoAtpComuStatusCalls = 0U;
    g_CtrlVOBCEnterAR_Target_AddSysAutoReverseErrNoCalls = 0U;
    g_CtrlVOBCEnterAR_Target_AddSysAutoReverseErrNoValue = 0U;
    g_CtrlVOBCEnterAR_Target_ReverseEnterArInitCalls = 0U;
}

/* Direct-call spies for CtrlRevFunc_44..56. */
UINT32_T g_CtrlRevFunc_ReverseTypeChkCalls;
UINT32_T g_CtrlRevFunc_FamAutoReverseCalls;
UINT32_T g_CtrlRevFunc_FamAnyLocReverseCalls;
UINT32_T g_CtrlRevFunc_AmAutoReverseCalls;
UINT32_T g_CtrlRevFunc_AmCmManReverseCalls;
UINT32_T g_CtrlRevFunc_EnterAmAutoReverseCalls;
UINT32_T g_CtrlRevFunc_ReverseEnterArInitCalls;
UINT32_T g_CtrlRevFunc_ReverseCBTCInitCalls;
UINT32_T g_CtrlRevFunc_SetReversingIdleReverseStepCalls;
UINT8_T g_CtrlRevFunc_SetReversingIdleReverseStepValue;
UINT32_T g_CtrlRevFunc_SetReverseIdleReverseTimerCalls;
UINT16_T g_CtrlRevFunc_SetReverseIdleReverseTimerValue;

int IsCtrlRevFuncSpyTestCase(void)
{
    return CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_44")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_45")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_46")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_47")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_48")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_49")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_50")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_51")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_52")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_53")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_54")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_55")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_56");
}

void ResetCtrlRevFuncStubSpy(void)
{
    g_CtrlRevFunc_ReverseTypeChkCalls = 0U;
    g_CtrlRevFunc_FamAutoReverseCalls = 0U;
    g_CtrlRevFunc_FamAnyLocReverseCalls = 0U;
    g_CtrlRevFunc_AmAutoReverseCalls = 0U;
    g_CtrlRevFunc_AmCmManReverseCalls = 0U;
    g_CtrlRevFunc_EnterAmAutoReverseCalls = 0U;
    g_CtrlRevFunc_ReverseEnterArInitCalls = 0U;
    g_CtrlRevFunc_ReverseCBTCInitCalls = 0U;
    g_CtrlRevFunc_SetReversingIdleReverseStepCalls = 0U;
    g_CtrlRevFunc_SetReversingIdleReverseStepValue = 0U;
    g_CtrlRevFunc_SetReverseIdleReverseTimerCalls = 0U;
    g_CtrlRevFunc_SetReverseIdleReverseTimerValue = 0U;
}

EXTERN_C_LINKAGE void ReverseTypeChk(void);
EXTERN_C_LINKAGE void CppTest_Stub_ReverseTypeChk(void)
{
    if (IsCtrlRevFuncSpyTestCase())
    {
        ++g_CtrlRevFunc_ReverseTypeChkCalls;
    }
}

EXTERN_C_LINKAGE UINT8_T GetReverseInChkType(void);
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetReverseInChkType(void)
{
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_52"))
    {
        return REVERSE_TYPE_STA_B;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_53"))
    {
        return REVERSE_TYPE_STA_A;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_54"))
    {
        return REVERSE_TYPE_STA_AR;
    }
    return DEFAULT_ZERO;
}

EXTERN_C_LINKAGE void FamAutoReverse(void);
EXTERN_C_LINKAGE void CppTest_Stub_FamAutoReverse(void)
{
    if (IsCtrlRevFuncSpyTestCase())
    {
        ++g_CtrlRevFunc_FamAutoReverseCalls;
    }
}

EXTERN_C_LINKAGE void FamAnyLocReverse(void);
EXTERN_C_LINKAGE void CppTest_Stub_FamAnyLocReverse(void)
{
    if (IsCtrlRevFuncSpyTestCase())
    {
        ++g_CtrlRevFunc_FamAnyLocReverseCalls;
    }
}

EXTERN_C_LINKAGE void AmAutoReverse(void);
EXTERN_C_LINKAGE void CppTest_Stub_AmAutoReverse(void)
{
    if (IsCtrlRevFuncSpyTestCase())
    {
        ++g_CtrlRevFunc_AmAutoReverseCalls;
    }
}

EXTERN_C_LINKAGE void AmCmManReverse(void);
EXTERN_C_LINKAGE void CppTest_Stub_AmCmManReverse(void)
{
    if (IsCtrlRevFuncSpyTestCase())
    {
        ++g_CtrlRevFunc_AmCmManReverseCalls;
    }
}

EXTERN_C_LINKAGE void EnterAmAutoReverse(void);
EXTERN_C_LINKAGE void CppTest_Stub_EnterAmAutoReverse(void)
{
    if (IsCtrlRevFuncSpyTestCase())
    {
        ++g_CtrlRevFunc_EnterAmAutoReverseCalls;
    }
}

EXTERN_C_LINKAGE void SetReversingIdleReverseStep(const UINT8_T idleReverseStep);
EXTERN_C_LINKAGE void CppTest_Stub_SetReversingIdleReverseStep(const UINT8_T idleReverseStep)
{
    if (IsCtrlRevFuncSpyTestCase())
    {
        ++g_CtrlRevFunc_SetReversingIdleReverseStepCalls;
        g_CtrlRevFunc_SetReversingIdleReverseStepValue = idleReverseStep;
    }
}

EXTERN_C_LINKAGE void SetReverseIdleReverseTimer(const UINT16_T idleReverseTimer);
EXTERN_C_LINKAGE void CppTest_Stub_SetReverseIdleReverseTimer(const UINT16_T idleReverseTimer)
{
    if (IsCtrlRevFuncSpyTestCase())
    {
        ++g_CtrlRevFunc_SetReverseIdleReverseTimerCalls;
        g_CtrlRevFunc_SetReverseIdleReverseTimerValue = idleReverseTimer;
    }
}

/* Getter and output spies for EnterAmAutoReverse_0..1. */
UINT32_T g_EnterAmAutoReverse_AddSysAutoReverseErrNoCalls;
UINT32_T g_EnterAmAutoReverse_AddSysAutoReverseErrNoValue;
UINT32_T g_EnterAmAutoReverse_ReverseEnterArInitCalls;
UINT32_T g_EnterAmAutoReverse_ReverseCBTCInitCalls;
UINT32_T g_EnterAmAutoReverse_SetFamModelInstructCalls;
UINT8_T g_EnterAmAutoReverse_SetFamModelInstructValue;
static int IsEnterAmAutoReverseSpyTestCase(void)
{
    return CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_EnterAmAutoReverse_0")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_EnterAmAutoReverse_1");
}

void ResetEnterAmAutoReverseStubSpy(void)
{
    g_EnterAmAutoReverse_AddSysAutoReverseErrNoCalls = 0U;
    g_EnterAmAutoReverse_AddSysAutoReverseErrNoValue = 0U;
    g_EnterAmAutoReverse_ReverseEnterArInitCalls = 0U;
    g_EnterAmAutoReverse_ReverseCBTCInitCalls = 0U;
    g_EnterAmAutoReverse_SetFamModelInstructCalls = 0U;
    g_EnterAmAutoReverse_SetFamModelInstructValue = 0U;
}

UINT32_T g_ReverseTypeChk_AddSysAutoReverseErrNoCalls;
UINT32_T g_ReverseTypeChk_AddSysAutoReverseErrNoValue;
UINT32_T g_ReverseTypeChk_ReverseEnterArInitCalls;
UINT32_T g_ReverseTypeChk_ReverseCBTCInitCalls;

static int IsReverseTypeChkSpyTestCase(void)
{
    return CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_0")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_1")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_2")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_3")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_4")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_5")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_6")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_7")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_8");
}

void ResetReverseTypeChkStubSpy(void)
{
    g_ReverseTypeChk_AddSysAutoReverseErrNoCalls = 0U;
    g_ReverseTypeChk_AddSysAutoReverseErrNoValue = 0U;
    g_ReverseTypeChk_ReverseEnterArInitCalls = 0U;
    g_ReverseTypeChk_ReverseCBTCInitCalls = 0U;
}

/* Shared Getter call counters and Setter spies for AmAutoReverse_0..16. */
UINT32_T g_AmAutoReverse_GetCurAtpCtrlStateCalls;
UINT32_T g_AmAutoReverse_GetReversePointCalls;
UINT32_T g_AmAutoReverse_GetReversePointTypeCalls;
UINT32_T g_AmAutoReverse_GetStopPointIdCalls;
UINT32_T g_AmAutoReverse_GetReverseStopPointIdCalls;
UINT32_T g_AmAutoReverse_GetMaEndMaTypeCalls;
UINT32_T g_AmAutoReverse_GetArReversingFirstTagCalls;
UINT32_T g_AmAutoReverse_GetIdleToCtlNoticeCalls;
UINT32_T g_AmAutoReverse_GetOppoAtpComuStatusCalls;
UINT32_T g_AmAutoReverse_GetInMeaDoorStatusCalls;
UINT32_T g_AmAutoReverse_GetRunAtpModeCalls;

UINT32_T g_AmAutoReverse_SetArReversingTagCalls;
UINT8_T g_AmAutoReverse_SetArReversingTagValue;
UINT32_T g_AmAutoReverse_SetStopActToSaftyFlagCalls;
UINT8_T g_AmAutoReverse_SetStopActToSaftyFlagValue;
UINT32_T g_AmAutoReverse_SetArReversingFirstTagCalls;
UINT8_T g_AmAutoReverse_SetArReversingFirstTagValue;
UINT32_T g_AmAutoReverse_SetRunModeConverseCalls;
UINT8_T g_AmAutoReverse_SetRunModeConverseValue;
UINT32_T g_AmAutoReverse_SetLocalArRelayCalls;
UINT8_T g_AmAutoReverse_SetLocalArRelayValue;
UINT32_T g_AmAutoReverse_SetOppoArRelayCalls;
UINT8_T g_AmAutoReverse_SetOppoArRelayValue;
UINT32_T g_AmAutoReverse_SetOutRunForwardCalls;
UINT8_T g_AmAutoReverse_SetOutRunForwardValue;
UINT32_T g_AmAutoReverse_SetOutRunForBackwardCalls;
UINT8_T g_AmAutoReverse_SetOutRunForBackwardValue;

extern UINT32_T g_CtrlAutoChangeEnd_GetOppoAtpComuStatusCalls;
extern UINT32_T g_CtrlAutoChangeEnd_SetCtlToIdleNoticeCalls;
extern UINT8_T g_CtrlAutoChangeEnd_SetCtlToIdleNoticeValue;
extern UINT32_T g_CtrlAutoChangeEnd_SetLocalArRelayCalls;
extern UINT8_T g_CtrlAutoChangeEnd_SetLocalArRelayValue;
extern UINT32_T g_CtrlAutoChangeEnd_SetOppoArRelayCalls;
extern UINT8_T g_CtrlAutoChangeEnd_SetOppoArRelayValue;
extern UINT32_T g_CtrlAutoChangeEnd_SetStopActToSaftyFlagCalls;
extern UINT8_T g_CtrlAutoChangeEnd_SetStopActToSaftyFlagValue;
static int IsCtrlAutoChangeEndSpyTestCase(void);
static int IsFamAnyLocReverseSpyTestCase(void);
int IsFamAutoReverseSpyTestCase(void);

/* Getter counters and Setter spies for FamAutoReverse_0..13.
 * Definitions stay before the first user stub that references them because
 * C++test can prepare individual stub functions as instrumentation fragments. */
UINT32_T g_FamAutoReverse_GetInMeaDoorStatusCalls;
UINT32_T g_FamAutoReverse_GetOppoAtpComuStatusCalls;
UINT32_T g_FamAutoReverse_GetRunAtpModeCalls;
UINT32_T g_FamAutoReverse_SetDoorRevOpenDoorTimerCalls;
UINT32_T g_FamAutoReverse_SetDoorRevOpenDoorTimerValue;
UINT32_T g_FamAutoReverse_AddSysAutoReverseErrNoCalls;
UINT32_T g_FamAutoReverse_AddSysAutoReverseErrNoValue;
UINT32_T g_FamAutoReverse_SetCtlToIdleNoticeCalls;
UINT8_T g_FamAutoReverse_SetCtlToIdleNoticeValue;
UINT32_T g_FamAutoReverse_SetArReversingFirstTagCalls;
UINT8_T g_FamAutoReverse_SetArReversingFirstTagValue;
UINT32_T g_FamAutoReverse_SetStopActToSaftyFlagCalls;
UINT8_T g_FamAutoReverse_SetStopActToSaftyFlagValue;
UINT32_T g_FamAutoReverse_SetLocalArRelayCalls;
UINT8_T g_FamAutoReverse_SetLocalArRelayValue;
UINT32_T g_FamAutoReverse_SetOppoArRelayCalls;
UINT8_T g_FamAutoReverse_SetOppoArRelayValue;
UINT32_T g_FamAutoReverse_SetOutRunForwardCalls;
UINT8_T g_FamAutoReverse_SetOutRunForwardValue;
UINT32_T g_FamAutoReverse_SetOutRunForBackwardCalls;
UINT8_T g_FamAutoReverse_SetOutRunForBackwardValue;

/* Getter counters and Setter spies for FamAnyLocReverse_0..10.
 * Keep the definitions before every stub that uses them because C++test may
 * prepare individual user stubs as separate instrumentation fragments. */
UINT32_T g_FamAnyLocReverse_GetOppoAtpComuStatusCalls;
UINT32_T g_FamAnyLocReverse_GetRunAtpModeCalls;
UINT32_T g_FamAnyLocReverse_SetArReversingFirstTagCalls;
UINT8_T g_FamAnyLocReverse_SetArReversingFirstTagValue;
UINT32_T g_FamAnyLocReverse_SetStopActToSaftyFlagCalls;
UINT8_T g_FamAnyLocReverse_SetStopActToSaftyFlagValue;
UINT32_T g_FamAnyLocReverse_SetCtlToIdleNoticeCalls;
UINT8_T g_FamAnyLocReverse_SetCtlToIdleNoticeValue;
UINT32_T g_FamAnyLocReverse_SetLocalArRelayCalls;
UINT8_T g_FamAnyLocReverse_SetLocalArRelayValue;
UINT32_T g_FamAnyLocReverse_SetOppoArRelayCalls;
UINT8_T g_FamAnyLocReverse_SetOppoArRelayValue;
UINT32_T g_FamAnyLocReverse_SetOutRunForwardCalls;
UINT8_T g_FamAnyLocReverse_SetOutRunForwardValue;
UINT32_T g_FamAnyLocReverse_SetOutRunForBackwardCalls;
UINT8_T g_FamAnyLocReverse_SetOutRunForBackwardValue;

static int IsAmAutoReverseSpyTestCase(void)
{
    return CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_0")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_1")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_2")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_3")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_4")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_5")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_6")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_7")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_8")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_9")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_10")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_11")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_12")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_13")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_14")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_15")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_16");
}

void ResetAmAutoReverseStubSpy(void)
{
    g_AmAutoReverse_GetCurAtpCtrlStateCalls = 0U;
    g_AmAutoReverse_GetReversePointCalls = 0U;
    g_AmAutoReverse_GetReversePointTypeCalls = 0U;
    g_AmAutoReverse_GetStopPointIdCalls = 0U;
    g_AmAutoReverse_GetReverseStopPointIdCalls = 0U;
    g_AmAutoReverse_GetMaEndMaTypeCalls = 0U;
    g_AmAutoReverse_GetArReversingFirstTagCalls = 0U;
    g_AmAutoReverse_GetIdleToCtlNoticeCalls = 0U;
    g_AmAutoReverse_GetOppoAtpComuStatusCalls = 0U;
    g_AmAutoReverse_GetInMeaDoorStatusCalls = 0U;
    g_AmAutoReverse_GetRunAtpModeCalls = 0U;
    g_AmAutoReverse_SetArReversingTagCalls = 0U;
    g_AmAutoReverse_SetArReversingTagValue = 0U;
    g_AmAutoReverse_SetStopActToSaftyFlagCalls = 0U;
    g_AmAutoReverse_SetStopActToSaftyFlagValue = 0U;
    g_AmAutoReverse_SetArReversingFirstTagCalls = 0U;
    g_AmAutoReverse_SetArReversingFirstTagValue = 0U;
    g_AmAutoReverse_SetRunModeConverseCalls = 0U;
    g_AmAutoReverse_SetRunModeConverseValue = 0U;
    g_AmAutoReverse_SetLocalArRelayCalls = 0U;
    g_AmAutoReverse_SetLocalArRelayValue = 0U;
    g_AmAutoReverse_SetOppoArRelayCalls = 0U;
    g_AmAutoReverse_SetOppoArRelayValue = 0U;
    g_AmAutoReverse_SetOutRunForwardCalls = 0U;
    g_AmAutoReverse_SetOutRunForwardValue = 0U;
    g_AmAutoReverse_SetOutRunForBackwardCalls = 0U;
    g_AmAutoReverse_SetOutRunForBackwardValue = 0U;
}

EXTERN_C_LINKAGE void SetArReversingTag(const UINT8_T value);
EXTERN_C_LINKAGE void CppTest_Stub_SetArReversingTag(const UINT8_T value)
{
    if (IsAmAutoReverseSpyTestCase())
    {
        ++g_AmAutoReverse_SetArReversingTagCalls;
        g_AmAutoReverse_SetArReversingTagValue = value;
    }
}

EXTERN_C_LINKAGE void SetStopActToSaftyFlag(UINT8_T value);
EXTERN_C_LINKAGE void CppTest_Stub_SetStopActToSaftyFlag(UINT8_T value)
{
    if (IsAmAutoReverseSpyTestCase())
    {
        ++g_AmAutoReverse_SetStopActToSaftyFlagCalls;
        g_AmAutoReverse_SetStopActToSaftyFlagValue = value;
    }
    if (IsCtrlAutoChangeEndSpyTestCase())
    {
        ++g_CtrlAutoChangeEnd_SetStopActToSaftyFlagCalls;
        g_CtrlAutoChangeEnd_SetStopActToSaftyFlagValue = value;
    }
    if (IsFamAnyLocReverseSpyTestCase())
    {
        ++g_FamAnyLocReverse_SetStopActToSaftyFlagCalls;
        g_FamAnyLocReverse_SetStopActToSaftyFlagValue = value;
    }
    if (IsFamAutoReverseSpyTestCase())
    {
        ++g_FamAutoReverse_SetStopActToSaftyFlagCalls;
        g_FamAutoReverse_SetStopActToSaftyFlagValue = value;
    }
}

EXTERN_C_LINKAGE void SetArReversingFirstTag(const UINT8_T value);
EXTERN_C_LINKAGE void CppTest_Stub_SetArReversingFirstTag(const UINT8_T value)
{
    if (IsAmAutoReverseSpyTestCase())
    {
        ++g_AmAutoReverse_SetArReversingFirstTagCalls;
        g_AmAutoReverse_SetArReversingFirstTagValue = value;
    }
    if (IsFamAnyLocReverseSpyTestCase())
    {
        ++g_FamAnyLocReverse_SetArReversingFirstTagCalls;
        g_FamAnyLocReverse_SetArReversingFirstTagValue = value;
    }
    if (IsFamAutoReverseSpyTestCase())
    {
        ++g_FamAutoReverse_SetArReversingFirstTagCalls;
        g_FamAutoReverse_SetArReversingFirstTagValue = value;
    }
}

EXTERN_C_LINKAGE void SetRunModeConverse(const UINT8_T value);
EXTERN_C_LINKAGE void CppTest_Stub_SetRunModeConverse(const UINT8_T value)
{
    if (IsAmAutoReverseSpyTestCase())
    {
        ++g_AmAutoReverse_SetRunModeConverseCalls;
        g_AmAutoReverse_SetRunModeConverseValue = value;
    }
}

EXTERN_C_LINKAGE void SetLocalArRelay(const UINT8_T value);
EXTERN_C_LINKAGE void CppTest_Stub_SetLocalArRelay(const UINT8_T value)
{
    if (IsAmAutoReverseSpyTestCase())
    {
        ++g_AmAutoReverse_SetLocalArRelayCalls;
        g_AmAutoReverse_SetLocalArRelayValue = value;
    }
    if (IsCtrlAutoChangeEndSpyTestCase())
    {
        ++g_CtrlAutoChangeEnd_SetLocalArRelayCalls;
        g_CtrlAutoChangeEnd_SetLocalArRelayValue = value;
    }
    if (IsFamAnyLocReverseSpyTestCase())
    {
        ++g_FamAnyLocReverse_SetLocalArRelayCalls;
        g_FamAnyLocReverse_SetLocalArRelayValue = value;
    }
    if (IsFamAutoReverseSpyTestCase())
    {
        ++g_FamAutoReverse_SetLocalArRelayCalls;
        g_FamAutoReverse_SetLocalArRelayValue = value;
    }
}

EXTERN_C_LINKAGE void SetOppoArRelay(const UINT8_T value);
EXTERN_C_LINKAGE void CppTest_Stub_SetOppoArRelay(const UINT8_T value)
{
    if (IsAmAutoReverseSpyTestCase())
    {
        ++g_AmAutoReverse_SetOppoArRelayCalls;
        g_AmAutoReverse_SetOppoArRelayValue = value;
    }
    if (IsCtrlAutoChangeEndSpyTestCase())
    {
        ++g_CtrlAutoChangeEnd_SetOppoArRelayCalls;
        g_CtrlAutoChangeEnd_SetOppoArRelayValue = value;
    }
    if (IsFamAnyLocReverseSpyTestCase())
    {
        ++g_FamAnyLocReverse_SetOppoArRelayCalls;
        g_FamAnyLocReverse_SetOppoArRelayValue = value;
    }
    if (IsFamAutoReverseSpyTestCase())
    {
        ++g_FamAutoReverse_SetOppoArRelayCalls;
        g_FamAutoReverse_SetOppoArRelayValue = value;
    }
}

EXTERN_C_LINKAGE UINT8_T GetOppoAtpComuStatus(void);
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetOppoAtpComuStatus(void)
{
    if (IsCtrlVOBCEnterARTargetTestCase())
    {
        ++g_CtrlVOBCEnterAR_Target_GetOppoAtpComuStatusCalls;
        if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_77")
            || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_80")
            || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_82"))
        {
            return ATP_COM_FAULT;
        }
        return ATP_COM_NORMAL;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_5"))
    {
        ++g_FamAutoReverse_GetOppoAtpComuStatusCalls;
        return ATP_COM_NORMAL;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_11"))
    {
        ++g_FamAutoReverse_GetOppoAtpComuStatusCalls;
        return ATP_COM_FAULT;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_15")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_17"))
    {
        ++g_FamAutoReverse_GetOppoAtpComuStatusCalls;
        return ATP_COM_NORMAL;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_7"))
    {
        ++g_FamAnyLocReverse_GetOppoAtpComuStatusCalls;
        return ATP_COM_NORMAL;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_9"))
    {
        ++g_FamAnyLocReverse_GetOppoAtpComuStatusCalls;
        return ATP_COM_FAULT;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlAutoChangeEnd_1"))
    {
        ++g_CtrlAutoChangeEnd_GetOppoAtpComuStatusCalls;
        return ATP_COM_NORMAL;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlAutoChangeEnd_3"))
    {
        ++g_CtrlAutoChangeEnd_GetOppoAtpComuStatusCalls;
        return ATP_COM_FAULT;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_56")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_62")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_63")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_64")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_65"))
    {
        return ATP_COM_FAULT;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_52")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_53")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_54")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_55")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_57")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_58")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_59")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_60")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_61")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_66")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_67")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_EnterAmAutoReverse_0"))
    {
        return ATP_COM_NORMAL;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_10")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_11"))
    {
        ++g_AmAutoReverse_GetOppoAtpComuStatusCalls;
        return ATP_COM_FAULT;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_5")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_6")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_7")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_12"))
    {
        ++g_AmAutoReverse_GetOppoAtpComuStatusCalls;
        return ATP_COM_NORMAL;
    }
    return (UINT8_T)0U;
}

/* Shared Getter call counters and output spies for AmCmManReverse_0..12. */
UINT32_T g_AmCmManReverse_GetReversingCbtcReverseStepCalls;
UINT32_T g_AmCmManReverse_GetIdleToCtlCmpVerCalls;
UINT32_T g_AmCmManReverse_GetObcConfigCrcCalls;
UINT32_T g_AmCmManReverse_GetIdleToCtlPreSetModeCalls;
UINT32_T g_AmCmManReverse_GetIdleToCtlZeroSpeedTagCalls;
UINT32_T g_AmCmManReverse_GetInMeaArBtnCalls;
UINT32_T g_AmCmManReverse_GetInMeaArBtnLastCalls;
UINT32_T g_AmCmManReverse_GetIdleToCtlNoticeCalls;

UINT32_T g_AmCmManReverse_SetReversingCbtcReverseStepCalls;
UINT8_T g_AmCmManReverse_SetReversingCbtcReverseStepValue;
UINT32_T g_AmCmManReverse_SetSendMmiTrainShuttleInfoCalls;
UINT8_T g_AmCmManReverse_SetSendMmiTrainShuttleInfoValue;
UINT32_T g_AmCmManReverse_SetReversingFalgCalls;
UINT8_T g_AmCmManReverse_SetReversingFalgValue;
UINT32_T g_AmCmManReverse_SetCtlToIdleNoticeCalls;
UINT8_T g_AmCmManReverse_SetCtlToIdleNoticeValue;
UINT32_T g_AmCmManReverse_AddSysAutoReverseErrNoCalls;
UINT32_T g_AmCmManReverse_AddSysAutoReverseErrNoValue;
UINT32_T g_AmCmManReverse_ReverseCBTCInitCalls;

static int IsAmCmManReverseSpyTestCase(void)
{
    return CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_0")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_1")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_2")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_3")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_4")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_5")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_6")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_7")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_8")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_9")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_10")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_11")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_12");
}

void ResetAmCmManReverseStubSpy(void)
{
    g_AmCmManReverse_GetReversingCbtcReverseStepCalls = 0U;
    g_AmCmManReverse_GetIdleToCtlCmpVerCalls = 0U;
    g_AmCmManReverse_GetObcConfigCrcCalls = 0U;
    g_AmCmManReverse_GetIdleToCtlPreSetModeCalls = 0U;
    g_AmCmManReverse_GetIdleToCtlZeroSpeedTagCalls = 0U;
    g_AmCmManReverse_GetInMeaArBtnCalls = 0U;
    g_AmCmManReverse_GetInMeaArBtnLastCalls = 0U;
    g_AmCmManReverse_GetIdleToCtlNoticeCalls = 0U;
    g_AmCmManReverse_SetReversingCbtcReverseStepCalls = 0U;
    g_AmCmManReverse_SetReversingCbtcReverseStepValue = 0U;
    g_AmCmManReverse_SetSendMmiTrainShuttleInfoCalls = 0U;
    g_AmCmManReverse_SetSendMmiTrainShuttleInfoValue = 0U;
    g_AmCmManReverse_SetReversingFalgCalls = 0U;
    g_AmCmManReverse_SetReversingFalgValue = 0U;
    g_AmCmManReverse_SetCtlToIdleNoticeCalls = 0U;
    g_AmCmManReverse_SetCtlToIdleNoticeValue = 0U;
    g_AmCmManReverse_AddSysAutoReverseErrNoCalls = 0U;
    g_AmCmManReverse_AddSysAutoReverseErrNoValue = 0U;
    g_AmCmManReverse_ReverseCBTCInitCalls = 0U;
}

EXTERN_C_LINKAGE void SetReversingCbtcReverseStep(const UINT8_T value);
EXTERN_C_LINKAGE void CppTest_Stub_SetReversingCbtcReverseStep(const UINT8_T value)
{
    if (IsAmCmManReverseSpyTestCase())
    {
        ++g_AmCmManReverse_SetReversingCbtcReverseStepCalls;
        g_AmCmManReverse_SetReversingCbtcReverseStepValue = value;
    }
}

EXTERN_C_LINKAGE void SetSendMmiTrainShuttleInfo(const UINT8_T value);
EXTERN_C_LINKAGE void CppTest_Stub_SetSendMmiTrainShuttleInfo(const UINT8_T value)
{
    if (IsAmCmManReverseSpyTestCase())
    {
        ++g_AmCmManReverse_SetSendMmiTrainShuttleInfoCalls;
        g_AmCmManReverse_SetSendMmiTrainShuttleInfoValue = value;
    }
}

EXTERN_C_LINKAGE void SetReversingFalg(UINT8_T value);
EXTERN_C_LINKAGE void CppTest_Stub_SetReversingFalg(UINT8_T value)
{
    if (IsAmCmManReverseSpyTestCase())
    {
        ++g_AmCmManReverse_SetReversingFalgCalls;
        g_AmCmManReverse_SetReversingFalgValue = value;
    }
}

EXTERN_C_LINKAGE void SetCtlToIdleNotice(const UINT8_T value);
EXTERN_C_LINKAGE void CppTest_Stub_SetCtlToIdleNotice(const UINT8_T value)
{
    if (IsAmCmManReverseSpyTestCase())
    {
        ++g_AmCmManReverse_SetCtlToIdleNoticeCalls;
        g_AmCmManReverse_SetCtlToIdleNoticeValue = value;
    }
    if (IsCtrlAutoChangeEndSpyTestCase())
    {
        ++g_CtrlAutoChangeEnd_SetCtlToIdleNoticeCalls;
        g_CtrlAutoChangeEnd_SetCtlToIdleNoticeValue = value;
    }
    if (IsFamAnyLocReverseSpyTestCase())
    {
        ++g_FamAnyLocReverse_SetCtlToIdleNoticeCalls;
        g_FamAnyLocReverse_SetCtlToIdleNoticeValue = value;
    }
    if (IsFamAutoReverseSpyTestCase())
    {
        ++g_FamAutoReverse_SetCtlToIdleNoticeCalls;
        g_FamAutoReverse_SetCtlToIdleNoticeValue = value;
    }
}

EXTERN_C_LINKAGE void AddSysAutoReverseErrNo(const UINT32_T value);
EXTERN_C_LINKAGE void CppTest_Stub_AddSysAutoReverseErrNo(const UINT32_T value)
{
    if (IsCtrlVOBCEnterARTargetTestCase())
    {
        ++g_CtrlVOBCEnterAR_Target_AddSysAutoReverseErrNoCalls;
        g_CtrlVOBCEnterAR_Target_AddSysAutoReverseErrNoValue = value;
    }
    if (IsReverseTypeChkSpyTestCase())
    {
        ++g_ReverseTypeChk_AddSysAutoReverseErrNoCalls;
        g_ReverseTypeChk_AddSysAutoReverseErrNoValue = value;
    }
    if (IsEnterAmAutoReverseSpyTestCase())
    {
        ++g_EnterAmAutoReverse_AddSysAutoReverseErrNoCalls;
        g_EnterAmAutoReverse_AddSysAutoReverseErrNoValue = value;
    }
    if (IsAmCmManReverseSpyTestCase())
    {
        ++g_AmCmManReverse_AddSysAutoReverseErrNoCalls;
        g_AmCmManReverse_AddSysAutoReverseErrNoValue = value;
    }
    if (IsFamAutoReverseSpyTestCase())
    {
        ++g_FamAutoReverse_AddSysAutoReverseErrNoCalls;
        g_FamAutoReverse_AddSysAutoReverseErrNoValue = value;
    }
}

EXTERN_C_LINKAGE void ReverseCBTCInit(void);
EXTERN_C_LINKAGE void CppTest_Stub_ReverseCBTCInit(void)
{
    if (IsCtrlRevFuncSpyTestCase())
    {
        ++g_CtrlRevFunc_ReverseCBTCInitCalls;
    }
    if (IsReverseTypeChkSpyTestCase())
    {
        ++g_ReverseTypeChk_ReverseCBTCInitCalls;
    }
    if (IsEnterAmAutoReverseSpyTestCase())
    {
        ++g_EnterAmAutoReverse_ReverseCBTCInitCalls;
    }
    if (IsAmCmManReverseSpyTestCase())
    {
        ++g_AmCmManReverse_ReverseCBTCInitCalls;
    }
}

EXTERN_C_LINKAGE void ReverseEnterArInit(void);
EXTERN_C_LINKAGE void CppTest_Stub_ReverseEnterArInit(void)
{
    if (IsCtrlVOBCEnterARTargetTestCase())
    {
        ++g_CtrlVOBCEnterAR_Target_ReverseEnterArInitCalls;
    }
    if (IsCtrlRevFuncSpyTestCase())
    {
        ++g_CtrlRevFunc_ReverseEnterArInitCalls;
    }
    if (IsReverseTypeChkSpyTestCase())
    {
        ++g_ReverseTypeChk_ReverseEnterArInitCalls;
    }
    if (IsEnterAmAutoReverseSpyTestCase())
    {
        ++g_EnterAmAutoReverse_ReverseEnterArInitCalls;
    }
}
/* Direct-expression Getter counter for CtrlARConditionChk_52..65. */
UINT32_T g_CtrlARConditionChk_GetAtpCtrlStatBetterCalls;

void ResetCtrlARConditionChkStubSpy(void)
{
    g_CtrlARConditionChk_GetAtpCtrlStatBetterCalls = 0U;
}

/* Getter counters and Setter spies for CtrlAutoChangeEnd_0..4. */
UINT32_T g_CtrlAutoChangeEnd_GetCurAtpCtrlStateCalls;
UINT32_T g_CtrlAutoChangeEnd_GetIdleToCtlNoticeCalls;
UINT32_T g_CtrlAutoChangeEnd_GetOppoAtpComuStatusCalls;
UINT32_T g_CtrlAutoChangeEnd_GetRunAtpModeCalls;
UINT32_T g_CtrlAutoChangeEnd_SetCtlToIdleNoticeCalls;
UINT8_T g_CtrlAutoChangeEnd_SetCtlToIdleNoticeValue;
UINT32_T g_CtrlAutoChangeEnd_SetLocalArRelayCalls;
UINT8_T g_CtrlAutoChangeEnd_SetLocalArRelayValue;
UINT32_T g_CtrlAutoChangeEnd_SetOppoArRelayCalls;
UINT8_T g_CtrlAutoChangeEnd_SetOppoArRelayValue;
UINT32_T g_CtrlAutoChangeEnd_SetOutRunForwardCalls;
UINT8_T g_CtrlAutoChangeEnd_SetOutRunForwardValue;
UINT32_T g_CtrlAutoChangeEnd_SetOutRunForBackwardCalls;
UINT8_T g_CtrlAutoChangeEnd_SetOutRunForBackwardValue;
UINT32_T g_CtrlAutoChangeEnd_SetStopActToSaftyFlagCalls;
UINT8_T g_CtrlAutoChangeEnd_SetStopActToSaftyFlagValue;

static int IsCtrlAutoChangeEndSpyTestCase(void)
{
    return CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlAutoChangeEnd_0")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlAutoChangeEnd_1")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlAutoChangeEnd_2")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlAutoChangeEnd_3")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlAutoChangeEnd_4");
}

void ResetCtrlAutoChangeEndStubSpy(void)
{
    g_CtrlAutoChangeEnd_GetCurAtpCtrlStateCalls = 0U;
    g_CtrlAutoChangeEnd_GetIdleToCtlNoticeCalls = 0U;
    g_CtrlAutoChangeEnd_GetOppoAtpComuStatusCalls = 0U;
    g_CtrlAutoChangeEnd_GetRunAtpModeCalls = 0U;
    g_CtrlAutoChangeEnd_SetCtlToIdleNoticeCalls = 0U;
    g_CtrlAutoChangeEnd_SetCtlToIdleNoticeValue = 0U;
    g_CtrlAutoChangeEnd_SetLocalArRelayCalls = 0U;
    g_CtrlAutoChangeEnd_SetLocalArRelayValue = 0U;
    g_CtrlAutoChangeEnd_SetOppoArRelayCalls = 0U;
    g_CtrlAutoChangeEnd_SetOppoArRelayValue = 0U;
    g_CtrlAutoChangeEnd_SetOutRunForwardCalls = 0U;
    g_CtrlAutoChangeEnd_SetOutRunForwardValue = 0U;
    g_CtrlAutoChangeEnd_SetOutRunForBackwardCalls = 0U;
    g_CtrlAutoChangeEnd_SetOutRunForBackwardValue = 0U;
    g_CtrlAutoChangeEnd_SetStopActToSaftyFlagCalls = 0U;
    g_CtrlAutoChangeEnd_SetStopActToSaftyFlagValue = 0U;
}

static int IsFamAnyLocReverseSpyTestCase(void)
{
    return CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_0")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_1")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_2")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_3")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_4")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_5")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_6")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_7")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_8")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_9")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_10");
}

void ResetFamAnyLocReverseStubSpy(void)
{
    g_FamAnyLocReverse_GetOppoAtpComuStatusCalls = 0U;
    g_FamAnyLocReverse_GetRunAtpModeCalls = 0U;
    g_FamAnyLocReverse_SetArReversingFirstTagCalls = 0U;
    g_FamAnyLocReverse_SetArReversingFirstTagValue = 0U;
    g_FamAnyLocReverse_SetStopActToSaftyFlagCalls = 0U;
    g_FamAnyLocReverse_SetStopActToSaftyFlagValue = 0U;
    g_FamAnyLocReverse_SetCtlToIdleNoticeCalls = 0U;
    g_FamAnyLocReverse_SetCtlToIdleNoticeValue = 0U;
    g_FamAnyLocReverse_SetLocalArRelayCalls = 0U;
    g_FamAnyLocReverse_SetLocalArRelayValue = 0U;
    g_FamAnyLocReverse_SetOppoArRelayCalls = 0U;
    g_FamAnyLocReverse_SetOppoArRelayValue = 0U;
    g_FamAnyLocReverse_SetOutRunForwardCalls = 0U;
    g_FamAnyLocReverse_SetOutRunForwardValue = 0U;
    g_FamAnyLocReverse_SetOutRunForBackwardCalls = 0U;
    g_FamAnyLocReverse_SetOutRunForBackwardValue = 0U;
}

int IsFamAutoReverseSpyTestCase(void)
{
    return CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_0")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_1")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_2")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_3")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_4")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_5")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_6")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_7")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_8")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_9")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_10")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_11")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_12")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_13")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_14")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_15")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_16")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_17");
}

void ResetFamAutoReverseStubSpy(void)
{
    g_FamAutoReverse_GetInMeaDoorStatusCalls = 0U;
    g_FamAutoReverse_GetOppoAtpComuStatusCalls = 0U;
    g_FamAutoReverse_GetRunAtpModeCalls = 0U;
    g_FamAutoReverse_SetDoorRevOpenDoorTimerCalls = 0U;
    g_FamAutoReverse_SetDoorRevOpenDoorTimerValue = 0U;
    g_FamAutoReverse_AddSysAutoReverseErrNoCalls = 0U;
    g_FamAutoReverse_AddSysAutoReverseErrNoValue = 0U;
    g_FamAutoReverse_SetCtlToIdleNoticeCalls = 0U;
    g_FamAutoReverse_SetCtlToIdleNoticeValue = 0U;
    g_FamAutoReverse_SetArReversingFirstTagCalls = 0U;
    g_FamAutoReverse_SetArReversingFirstTagValue = 0U;
    g_FamAutoReverse_SetStopActToSaftyFlagCalls = 0U;
    g_FamAutoReverse_SetStopActToSaftyFlagValue = 0U;
    g_FamAutoReverse_SetLocalArRelayCalls = 0U;
    g_FamAutoReverse_SetLocalArRelayValue = 0U;
    g_FamAutoReverse_SetOppoArRelayCalls = 0U;
    g_FamAutoReverse_SetOppoArRelayValue = 0U;
    g_FamAutoReverse_SetOutRunForwardCalls = 0U;
    g_FamAutoReverse_SetOutRunForwardValue = 0U;
    g_FamAutoReverse_SetOutRunForBackwardCalls = 0U;
    g_FamAutoReverse_SetOutRunForBackwardValue = 0U;
}

EXTERN_C_LINKAGE void SetDoorRevOpenDoorTimer(const UINT32_T openDoorTimer);
EXTERN_C_LINKAGE void CppTest_Stub_SetDoorRevOpenDoorTimer(const UINT32_T openDoorTimer)
{
    if (IsFamAutoReverseSpyTestCase())
    {
        ++g_FamAutoReverse_SetDoorRevOpenDoorTimerCalls;
        g_FamAutoReverse_SetDoorRevOpenDoorTimerValue = openDoorTimer;
    }
}

/**
 * This file contains user stub definitions.
 *
 * To create a user stub:
 * 1. Open stub template list:
 *    - Eclipse IDE: type 'stub' and press <Ctrl> <Space>
 *    - Microsoft Visual Studio IDE: use context menu C++test->Insert Snippet...
 * 2. Choose the stub template from the list.
 * 3. #include the header file where the function you want to stub is originally 
 *    declared as well as any supporting header files as necessary.
 * 4. Fill out the stub signature to match that of the original function, 
 *    while keeping the CppTest_Stub prefix when it applies.
 *    Note: for C++ operators, use appropriate stub names - e.g.:
 *        CppTest_Stub_operator_new    for operator new
 *        CppTest_Stub_operator_delete for operator delete
 *        CppTest_Stub_operator_plus   for operator +
 *    Refer to C++test User's Guide for a complete list of stub names for operators. 
 * 5. Fill out the body of the stub according to intent.
 *
 * Available C++test API functions (see C++test Users Guide for details):
 *     void CppTest_Assert(bool test, const char * message)
 *     void CppTest_Break()
 *     const char* CppTest_GetCurrentTestCaseName()
 *     const char* CppTest_GetCurrentTestSuiteName()
 *     bool CppTest_IsCurrentTestCase(const char* testCaseName)
 */

/** 
 * Header files where the stubbed functions are originally declared.
 * Verify #include directives and add any additional header files as necessary.
 */
#include "InputDigitalMeasureData.h"
#include "TrainData.h"
#include "ProtectionData.h"
#include "DataInterfaceHandle.h"
#include "DevCommProData.h"
#include "GalInfo.h"
#include "AtpSleepAwakeConfigData.h"
#include "CiData.h"
#include "StopPointData.h"
#include "SegData.h"
#include "AtpMeaSpeedConfigData.h"
#include "CirQueueStruct.h"
#include "CommonHandle.h"
#include "DmuAtpDataHandle.h"
#include "StopSectionData.h"
#include "VobcData.h"
#include "VobcIdConfigData.h"
#include "SysRunData.h"
#include "PackParseAtoData.h"
#include "ProtectionHandle.h"
#include "PackParseTacInfoData.h"
#include "MarshallingData.h"
#include "SysRunErrorData.h"
#include "PackParseCamData.h"
#include "TrainLocManage.h"
#include "AppInterface.h"
#include "AtpBackRunConfigData.h"
#include "AtpDoorConfigData.h"
#include "AtpEbConfigData.h"
#include "AtpFunConfigData.h"
#include "AtpWheelConfigData.h"
#include "ModeInit.h"
#include "ScpLog.h"
#include "SleepAwakeData.h"
#include "SleepFunc.h"
#include "SystemConfigData.h"
#include "AtpLocConfigData.h"
#include "Endian.h"
#include "MaInfoData.h"
#include "PackParseAomData.h"
#include "StopAreaData.h"
#include "DoorInfoData.h"
#include "AtpFlexFormationConfig.h"
#include "FlexMarshAreaData.h"
#include "ReadBinData.h"
#include "SpksData.h"






/** User stub definition for function: int MmiIdInquire(void) */
EXTERN_C_LINKAGE int MmiIdInquire () ;
EXTERN_C_LINKAGE int CppTest_Stub_MmiIdInquire (void) 
{
    return 0;
}

/** User stub definition for function: UINT32_T GetHealFailTime(const UINT8_T, const UINT8_T) */
EXTERN_C_LINKAGE UINT32_T GetHealFailTime (const UINT8_T SendDevType, const UINT8_T RcvDevType) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetHealFailTime (const UINT8_T SendDevType, const UINT8_T RcvDevType) 
{
    return 0U;
}

/** User stub definition for function: int SetMmiDevLongId(void) */
EXTERN_C_LINKAGE int SetMmiDevLongId () ;
EXTERN_C_LINKAGE int CppTest_Stub_SetMmiDevLongId (void) 
{
    return 0;
}

/** User stub definition for function: int GetMmiDevLongId(void) */
EXTERN_C_LINKAGE int GetMmiDevLongId () ;
EXTERN_C_LINKAGE int CppTest_Stub_GetMmiDevLongId (void) 
{
    return 0;
}

/** User stub definition for function: UINT32_T GAL_InitDevData(UINT32_T) */
EXTERN_C_LINKAGE UINT32_T GAL_InitDevData (UINT32_T devId) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GAL_InitDevData (UINT32_T devId) 
{
    return 0U;
}

/** User stub definition for function: void LOG_WriteTxt(const char *) */
EXTERN_C_LINKAGE void LOG_WriteTxt (const char * buffer) ;
EXTERN_C_LINKAGE void CppTest_Stub_LOG_WriteTxt (const char * buffer) 
{
}

/** User stub definition for function: UINT8_T GetMechanicalBrakTestResult(void) */
EXTERN_C_LINKAGE UINT8_T GetMechanicalBrakTestResult () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetMechanicalBrakTestResult (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT32_T GetMechanicalBrakTestTime(void) */
EXTERN_C_LINKAGE UINT32_T GetMechanicalBrakTestTime () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetMechanicalBrakTestTime (void) 
{
    return 0U;
}

/** User stub definition for function: int CtrlOppoFamReverse(void) */
EXTERN_C_LINKAGE int CtrlOppoFamReverse () ;
EXTERN_C_LINKAGE int CppTest_Stub_CtrlOppoFamReverse (void) 
{

    return 0;
}

/** User stub definition for function: int CtrlSigleAtpEnterAR(void) */
EXTERN_C_LINKAGE int CtrlSigleAtpEnterAR () ;
EXTERN_C_LINKAGE int CppTest_Stub_CtrlSigleAtpEnterAR (void) 
{

    return 0;
}

/** User stub definition for function: int CtrlVOBCReverseBLOC(void) */
EXTERN_C_LINKAGE int CtrlVOBCReverseBLOC () ;
EXTERN_C_LINKAGE int CppTest_Stub_CtrlVOBCReverseBLOC (void) 
{

    return 0;
}

/** User stub definition for function: UINT16_T GetCiAttributeById(UINT16_T) */
EXTERN_C_LINKAGE UINT16_T GetCiAttributeById (UINT16_T CiId) ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetCiAttributeById (UINT16_T CiId) 
{

    return 0;
}

/** User stub definition for function: UINT16_T GetStopPtIdBySegDirAttribute(UINT16_T, UINT8_T, UINT32_T) */
EXTERN_C_LINKAGE UINT16_T GetStopPtIdBySegDirAttribute (UINT16_T segId, UINT8_T dir, UINT32_T attribute) ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetStopPtIdBySegDirAttribute (UINT16_T segId, UINT8_T dir, UINT32_T attribute) 
{

    return 0;
}

/** User stub definition for function: int CamToRmInit(void) */
EXTERN_C_LINKAGE int CamToRmInit () ;
EXTERN_C_LINKAGE int CppTest_Stub_CamToRmInit (void) 
{

    return 0;
}

/** User stub definition for function: UINT32_T GetObcSelfCheckTestTime(void) */
EXTERN_C_LINKAGE UINT32_T GetObcSelfCheckTestTime () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetObcSelfCheckTestTime (void) 
{

    return 0;
}

/** User stub definition for function: UINT8_T GetSegEscapePlat(UINT16_T) */
EXTERN_C_LINKAGE UINT8_T GetSegEscapePlat (UINT16_T segId) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetSegEscapePlat (UINT16_T segId) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_10"))
	{ 
      	return 0x55;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_9"))
	{ 
      	return 0xaa;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_8"))
	{ 
      	return 0xaa;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_7"))
	{ 
      	return 0xaa;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_6"))
	{ 
      	return 0xaa;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_5"))
	{ 
      	return 0xaa;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_4"))
	{ 
      	return 0x55;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_3"))
	{ 
      	return 0x55;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_2"))
	{ 
      	return 0x55;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_1"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide"))
	{ 
      	return 0x55;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_0"))
	{ 
      	static int q_1=0;
		q_1++;
		if(q_1==1)
		{
		return 0x55;
		}
		else
		{
        return 0;
		}
	}
	return 0;
}

/** User stub definition for function: void TrainDoorHibProcess(void) */
EXTERN_C_LINKAGE void TrainDoorHibProcess () ;
EXTERN_C_LINKAGE void CppTest_Stub_TrainDoorHibProcess (void) 
{
    

}

/** User stub definition for function: int GetEbSyncActFaoReasonLow(void) */
EXTERN_C_LINKAGE int GetEbSyncActFaoReasonLow () ;
EXTERN_C_LINKAGE int CppTest_Stub_GetEbSyncActFaoReasonLow (void) 
{
   

    return 0;
}

/** User stub definition for function: int GetEbSyncActReasonHigh(void) */
EXTERN_C_LINKAGE int GetEbSyncActReasonHigh () ;
EXTERN_C_LINKAGE int CppTest_Stub_GetEbSyncActReasonHigh (void) 
{
    

    return 0;
}

/** User stub definition for function: int GetEbSyncActReasonLow(void) */
EXTERN_C_LINKAGE int GetEbSyncActReasonLow () ;
EXTERN_C_LINKAGE int CppTest_Stub_GetEbSyncActReasonLow (void) 
{
    

    return 0;
}

/** User stub definition for function: int GetRdInitReason(void) */
EXTERN_C_LINKAGE int GetRdInitReason () ;
EXTERN_C_LINKAGE int CppTest_Stub_GetRdInitReason (void) 
{
    return 0;
}

/** User stub definition for function: int GetSegIdByCarWashMachineId(void) */
EXTERN_C_LINKAGE int GetSegIdByCarWashMachineId () ;
EXTERN_C_LINKAGE int CppTest_Stub_GetSegIdByCarWashMachineId (void) 
{
    

    return 0;
}

/** User stub definition for function: int GetSysRunRecErrNo(void) */
EXTERN_C_LINKAGE int GetSysRunRecErrNo () ;
EXTERN_C_LINKAGE int CppTest_Stub_GetSysRunRecErrNo (void) 
{
   

    return 0;
}

/** User stub definition for function: int GetTrainBackSecLogNo(void) */
EXTERN_C_LINKAGE int GetTrainBackSecLogNo () ;
EXTERN_C_LINKAGE int CppTest_Stub_GetTrainBackSecLogNo (void) 
{

    return 0;
}

/** User stub definition for function: int IdleVOBCReverse(void) */
EXTERN_C_LINKAGE int IdleVOBCReverse () ;
EXTERN_C_LINKAGE int CppTest_Stub_IdleVOBCReverse (void) 
{
    

    return 0;
}

/** User stub definition for function: int InitEbReason(void) */
EXTERN_C_LINKAGE int InitEbReason () ;
EXTERN_C_LINKAGE int CppTest_Stub_InitEbReason (void) 
{

    return 0;
}

/** User stub definition for function: int JumpProtection(void) */
EXTERN_C_LINKAGE int JumpProtection () ;
EXTERN_C_LINKAGE int CppTest_Stub_JumpProtection (void) 
{

    return 0;
}

/** User stub definition for function: int ModeControlJudge(void) */
EXTERN_C_LINKAGE int ModeControlJudge () ;
EXTERN_C_LINKAGE int CppTest_Stub_ModeControlJudge (void) 
{
    

    return 0;
}

/** User stub definition for function: int OverSpeedProtection(void) */
EXTERN_C_LINKAGE int OverSpeedProtection () ;
EXTERN_C_LINKAGE int CppTest_Stub_OverSpeedProtection (void) 
{
    

    return 0;
}

/** User stub definition for function: int RdToArInit(void) */
EXTERN_C_LINKAGE int RdToArInit () ;
EXTERN_C_LINKAGE int CppTest_Stub_RdToArInit (void) 
{
    return 0;
}

/** User stub definition for function: int RdToBlocCmInit(void) */
EXTERN_C_LINKAGE int RdToBlocCmInit () ;
EXTERN_C_LINKAGE int CppTest_Stub_RdToBlocCmInit (void) 
{

    return 0;
}

/** User stub definition for function: int RdToFAOInit(void) */
EXTERN_C_LINKAGE int RdToFAOInit () ;
EXTERN_C_LINKAGE int CppTest_Stub_RdToFAOInit (void) 
{

    return 0;
}

/** User stub definition for function: int RecordEbFaoReasonHigh(void) */
EXTERN_C_LINKAGE int RecordEbFaoReasonHigh () ;
EXTERN_C_LINKAGE int CppTest_Stub_RecordEbFaoReasonHigh (void) 
{

    return 0;
}

/** User stub definition for function: int RecordEbFaoReasonLow(void) */
EXTERN_C_LINKAGE int RecordEbFaoReasonLow () ;
EXTERN_C_LINKAGE int CppTest_Stub_RecordEbFaoReasonLow (void) 
{
    

    return 0;
}

/** User stub definition for function: int RecordEbReasonHigh(void) */
EXTERN_C_LINKAGE int RecordEbReasonHigh () ;
EXTERN_C_LINKAGE int CppTest_Stub_RecordEbReasonHigh (void) 
{

    return 0;
}

/** User stub definition for function: int RecordEbReasonLow(void) */
EXTERN_C_LINKAGE int RecordEbReasonLow () ;
EXTERN_C_LINKAGE int CppTest_Stub_RecordEbReasonLow (void) 
{

    return 0;
}

/** User stub definition for function: int RecordEbSyncActFaoReasonHigh(void) */
EXTERN_C_LINKAGE int RecordEbSyncActFaoReasonHigh () ;
EXTERN_C_LINKAGE int CppTest_Stub_RecordEbSyncActFaoReasonHigh (void) 
{

    return 0;
}

/** User stub definition for function: int RecordEbSyncActFaoReasonLow(void) */
EXTERN_C_LINKAGE int RecordEbSyncActFaoReasonLow () ;
EXTERN_C_LINKAGE int CppTest_Stub_RecordEbSyncActFaoReasonLow (void) 
{

    return 0;
}

/** User stub definition for function: int RecordEbSyncActReasonHigh(void) */
EXTERN_C_LINKAGE int RecordEbSyncActReasonHigh () ;
EXTERN_C_LINKAGE int CppTest_Stub_RecordEbSyncActReasonHigh (void) 
{

    return 0;
}

/** User stub definition for function: int RecordEbSyncActReasonLow(void) */
EXTERN_C_LINKAGE int RecordEbSyncActReasonLow () ;
EXTERN_C_LINKAGE int CppTest_Stub_RecordEbSyncActReasonLow (void) 
{

    return 0;
}

/** User stub definition for function: int RollProtection(void) */
EXTERN_C_LINKAGE int RollProtection () ;
EXTERN_C_LINKAGE int CppTest_Stub_RollProtection (void) 
{

    return 0;
}

/** User stub definition for function: int SelfPowerOff(void) */
EXTERN_C_LINKAGE int SelfPowerOff () ;
EXTERN_C_LINKAGE int CppTest_Stub_SelfPowerOff (void) 
{
    

    return 0;
}

/** User stub definition for function: int SetEbReason(void) */
EXTERN_C_LINKAGE int SetEbReason () ;
EXTERN_C_LINKAGE int CppTest_Stub_SetEbReason (void) 
{
    

    return 0;
}

/** User stub definition for function: int SpksEbProtection(void) */
EXTERN_C_LINKAGE int SpksEbProtection () ;
EXTERN_C_LINKAGE int CppTest_Stub_SpksEbProtection (void) 
{

    return 0;
}

/** User stub definition for function: int StopEnsureProcess(void) */
EXTERN_C_LINKAGE int StopEnsureProcess () ;
EXTERN_C_LINKAGE int CppTest_Stub_StopEnsureProcess (void) 
{

    return 0;
}

/** User stub definition for function: int TimeManage(void) */
EXTERN_C_LINKAGE int TimeManage () ;
EXTERN_C_LINKAGE int CppTest_Stub_TimeManage (void) 
{
    return 0;
}

/** User stub definition for function: int TrainDoorHibProcess_A(void) */
EXTERN_C_LINKAGE int TrainDoorHibProcess_A () ;
EXTERN_C_LINKAGE int CppTest_Stub_TrainDoorHibProcess_A (void) 
{

    return 0;
}

/** User stub definition for function: INT8_T AddCirQueueData(CirQueueStruct_T *, const UINT8_T *, UINT32_T) */
EXTERN_C_LINKAGE INT8_T AddCirQueueData (CirQueueStruct_T * pCirQueueStru, const UINT8_T * pDataBuf, UINT32_T dataLen) ;
EXTERN_C_LINKAGE INT8_T CppTest_Stub_AddCirQueueData (CirQueueStruct_T * pCirQueueStru, const UINT8_T * pDataBuf, UINT32_T dataLen) 
{

    return 0;
}

/** User stub definition for function: INT8_T AddDevComQueueData(DevComCirQueueStruct_T *, const UINT8_T *, UINT32_T, UINT8_T, UINT32_T) */
EXTERN_C_LINKAGE INT8_T AddDevComQueueData (DevComCirQueueStruct_T * pCirQueueStru, const UINT8_T * pDataBuf, UINT32_T dataLen, UINT8_T destDevType, UINT32_T destDevId) ;
EXTERN_C_LINKAGE INT8_T CppTest_Stub_AddDevComQueueData (DevComCirQueueStruct_T * pCirQueueStru, const UINT8_T * pDataBuf, UINT32_T dataLen, UINT8_T destDevType, UINT32_T destDevId) 
{

    return 0;
}

/** User stub definition for function: PsdInfoStruct_T * GetPsdInfo(UINT8_T *) */
EXTERN_C_LINKAGE PsdInfoStruct_T * GetPsdInfo (UINT8_T * psdNum) ;
EXTERN_C_LINKAGE PsdInfoStruct_T * CppTest_Stub_GetPsdInfo (UINT8_T * psdNum) 
{
    


    return 0;
}

/** User stub definition for function: UINT16_T GetStopSecIdByDevId(UINT32_T) */
EXTERN_C_LINKAGE UINT16_T GetStopSecIdByDevId (UINT32_T devId) ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetStopSecIdByDevId (UINT32_T devId) 
{
    

    return 0;
}

/** User stub definition for function: UINT32_T GetAtpIdByVobcIdExt(const UINT32_T) */
EXTERN_C_LINKAGE UINT32_T GetAtpIdByVobcIdExt (const UINT32_T vobcExtDevId) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetAtpIdByVobcIdExt (const UINT32_T vobcExtDevId) 
{

    return 0;
}

/** User stub definition for function: UINT32_T GetAwakeCamTestTime(void) */
EXTERN_C_LINKAGE UINT32_T GetAwakeCamTestTime () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetAwakeCamTestTime (void) 
{
   

    return 0;
}

/** User stub definition for function: UINT32_T GetCirQueuePkgCount(const CirQueueStruct_T *) */
EXTERN_C_LINKAGE UINT32_T GetCirQueuePkgCount (const CirQueueStruct_T * pCirQueueStru) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetCirQueuePkgCount (const CirQueueStruct_T * pCirQueueStru) 
{
   

    return 0;
}

/** User stub definition for function: UINT32_T GetCirQueuePkgData(CirQueueStruct_T *, UINT8_T *, UINT32_T) */
EXTERN_C_LINKAGE UINT32_T GetCirQueuePkgData (CirQueueStruct_T * pCirQueueStru, UINT8_T * pDataBuf, UINT32_T dataLen) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetCirQueuePkgData (CirQueueStruct_T * pCirQueueStru, UINT8_T * pDataBuf, UINT32_T dataLen) 
{
    

    return 0;
}

/** User stub definition for function: UINT32_T GetVobcIdExtByAtoId(UINT32_T) */
EXTERN_C_LINKAGE UINT32_T GetVobcIdExtByAtoId (UINT32_T atoDevId) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetVobcIdExtByAtoId (UINT32_T atoDevId) 
{
    

    return 0;
}

/** User stub definition for function: UINT32_T GetVobcIdExtByAtpId(UINT32_T) */
EXTERN_C_LINKAGE UINT32_T GetVobcIdExtByAtpId (UINT32_T atpDevId) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetVobcIdExtByAtpId (UINT32_T atpDevId) 
{
   

    return 0;
}

/** User stub definition for function: UINT32_T LDB_GetSegmentStartPosOffset(const UINT16_T, const UINT8_T) */
EXTERN_C_LINKAGE UINT32_T LDB_GetSegmentStartPosOffset (const UINT16_T segId, const UINT8_T dir) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_LDB_GetSegmentStartPosOffset (const UINT16_T segId, const UINT8_T dir) 
{
   

    return 0;
}

/** User stub definition for function: UINT8_T CalcAtpAddInfo(void) */
EXTERN_C_LINKAGE UINT8_T CalcAtpAddInfo () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_CalcAtpAddInfo (void) 
{

    return 0;
}

/** User stub definition for function: UINT8_T CheckIsMAPassMinProtectSec(const UINT16_T, const UINT16_T, const UINT32_T, const UINT8_T, const UINT32_T, UINT8_T *) */
EXTERN_C_LINKAGE UINT8_T CheckIsMAPassMinProtectSec (const UINT16_T stopPointId, const UINT16_T maEndSegId, const UINT32_T maEndSegOffset, const UINT8_T maRundir, const UINT32_T maxprotectLength, UINT8_T * isMaPassProtect) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_CheckIsMAPassMinProtectSec (const UINT16_T stopPointId, const UINT16_T maEndSegId, const UINT32_T maEndSegOffset, const UINT8_T maRundir, const UINT32_T maxprotectLength, UINT8_T * isMaPassProtect) 
{


    return 0;
}

/** User stub definition for function: UINT8_T CheckTrainHeadInStopSec(const UINT16_T, UINT8_T *, UINT16_T *, UINT16_T *) */
EXTERN_C_LINKAGE UINT8_T CheckTrainHeadInStopSec (const UINT16_T segId, UINT8_T * isInStopSec, UINT16_T * stopSecId, UINT16_T * stopSecType) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_CheckTrainHeadInStopSec (const UINT16_T segId, UINT8_T * isInStopSec, UINT16_T * stopSecId, UINT16_T * stopSecType) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T CheckTrainInExitSec(const UINT16_T, const UINT32_T, const UINT16_T, const UINT32_T, const UINT8_T, UINT16_T *) */
EXTERN_C_LINKAGE UINT8_T CheckTrainInExitSec (const UINT16_T headSegId, const UINT32_T headSegOffset, const UINT16_T tailSegId, const UINT32_T tailSegOffset, const UINT8_T tailDir, UINT16_T * trainExitType) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_CheckTrainInExitSec (const UINT16_T headSegId, const UINT32_T headSegOffset, const UINT16_T tailSegId, const UINT32_T tailSegOffset, const UINT8_T tailDir, UINT16_T * trainExitType) 
{

    return 0;
}

/** User stub definition for function: UINT8_T GetAccessMaOfReverInfo(const UINT16_T, const UINT32_T, const UINT16_T, const UINT32_T, const UINT16_T, const UINT32_T, const UINT8_T, UINT16_T *, UINT8_T *) */
EXTERN_C_LINKAGE UINT8_T GetAccessMaOfReverInfo (const UINT16_T headSegId, const UINT32_T headSegOffset, const UINT16_T maStartsegId, const UINT32_T maStartsegOffset, const UINT16_T maEndsegId, const UINT32_T maEndsegOffset, const UINT8_T maEnddir, UINT16_T * stopPointId, UINT8_T * stopPointType) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAccessMaOfReverInfo (const UINT16_T headSegId, const UINT32_T headSegOffset, const UINT16_T maStartsegId, const UINT32_T maStartsegOffset, const UINT16_T maEndsegId, const UINT32_T maEndsegOffset, const UINT8_T maEnddir, UINT16_T * stopPointId, UINT8_T * stopPointType) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T GetBaliseIdLoc(const UINT32_T, UINT16_T *, UINT32_T *) */
EXTERN_C_LINKAGE UINT8_T GetBaliseIdLoc (const UINT32_T baliseId, UINT16_T * segId, UINT32_T * segOffset) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetBaliseIdLoc (const UINT32_T baliseId, UINT16_T * segId, UINT32_T * segOffset) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T GetLineLimit(const Location_T *, const Location_T *, const Location_T *, const Location_T *, UINT8_T *, LimitObjFront_T *, UINT8_T *, LimitObjBetweenStruct_T *, UINT8_T *, LimitObjFront_T *) */
EXTERN_C_LINKAGE UINT8_T GetLineLimit (const Location_T * headloc, const Location_T * tailLoc, const Location_T * maStartLoc, const Location_T * maEndLoc, UINT8_T * lmtObjectNumFront, LimitObjFront_T  pLmtObjFront[], UINT8_T * lmtObjectNumBetwn, LimitObjBetweenStruct_T * pLmtObjBtw, UINT8_T * objectNumFront, LimitObjFront_T  pObjFront[]) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetLineLimit (const Location_T * headloc, const Location_T * tailLoc, const Location_T * maStartLoc, const Location_T * maEndLoc, UINT8_T * lmtObjectNumFront, LimitObjFront_T  pLmtObjFront[], UINT8_T * lmtObjectNumBetwn, LimitObjBetweenStruct_T * pLmtObjBtw, UINT8_T * objectNumFront, LimitObjFront_T  pObjFront[]) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T GetNextPltBtwPoints(const UINT16_T, const UINT16_T, const UINT8_T, UINT16_T *) */
EXTERN_C_LINKAGE UINT8_T GetNextPltBtwPoints (const UINT16_T segStartId, const UINT16_T segEndId, const UINT8_T dir, UINT16_T * PlatId) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetNextPltBtwPoints (const UINT16_T segStartId, const UINT16_T segEndId, const UINT8_T dir, UINT16_T * PlatId) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T GetObsInfoLoc(const UINT8_T, ObstInfo_T *) */
EXTERN_C_LINKAGE UINT8_T GetObsInfoLoc (const UINT8_T obstableNum, ObstInfo_T  pObstInfo[]) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetObsInfoLoc (const UINT8_T obstableNum, ObstInfo_T  pObstInfo[]) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T GetObstInfo(const Location_T *, const Location_T *, const Location_T *, const Location_T *, const UINT8_T, UINT8_T *, LimitObjFront_T *, UINT8_T *, LimitObjBetweenStruct_T *, UINT32_T *, UINT8_T *, LimitObjFront_T *) */
EXTERN_C_LINKAGE UINT8_T GetObstInfo (const Location_T * headloc, const Location_T * tailLoc, const Location_T * maStartLoc, const Location_T * maEndLoc, const UINT8_T maEndType, UINT8_T * lmtObjectNumFront, LimitObjFront_T  pLmtObjFront[], UINT8_T * lmtObjectNumBetwn, LimitObjBetweenStruct_T  pLmtObjBtw[], UINT32_T * distToMAEndPnt, UINT8_T * objectNumFront, LimitObjFront_T  pObjFront[]) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetObstInfo (const Location_T * headloc, const Location_T * tailLoc, const Location_T * maStartLoc, const Location_T * maEndLoc, const UINT8_T maEndType, UINT8_T * lmtObjectNumFront, LimitObjFront_T  pLmtObjFront[], UINT8_T * lmtObjectNumBetwn, LimitObjBetweenStruct_T  pLmtObjBtw[], UINT32_T * distToMAEndPnt, UINT8_T * objectNumFront, LimitObjFront_T  pObjFront[]) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T GetOpgChannelNum(void) */
EXTERN_C_LINKAGE UINT8_T GetOpgChannelNum () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetOpgChannelNum (void) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T GetOpgConnectCfg(void) */
EXTERN_C_LINKAGE UINT8_T GetOpgConnectCfg () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetOpgConnectCfg (void) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T GetOpgNum(void) */
EXTERN_C_LINKAGE UINT8_T GetOpgNum () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetOpgNum (void) 
{
   

    return 0;
}

/** User stub definition for function: UINT8_T GetOpgType(void) */
EXTERN_C_LINKAGE UINT8_T GetOpgType () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetOpgType (void) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T GetReverseDir(UINT8_T) */
EXTERN_C_LINKAGE UINT8_T GetReverseDir (UINT8_T oldDir) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetReverseDir (UINT8_T oldDir) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T GetSearchDoorOpreation(void) */
EXTERN_C_LINKAGE UINT8_T GetSearchDoorOpreation () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetSearchDoorOpreation (void) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T GetStaStopAreaPsdInfo(const UINT16_T, const UINT8_T, UINT32_T *) */
EXTERN_C_LINKAGE UINT8_T GetStaStopAreaPsdInfo (const UINT16_T StopAreaId, const UINT8_T TrainHeadDir, UINT32_T * ciDevName) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetStaStopAreaPsdInfo (const UINT16_T StopAreaId, const UINT8_T TrainHeadDir, UINT32_T * ciDevName) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T GetTeethNum(void) */
EXTERN_C_LINKAGE UINT8_T GetTeethNum () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetTeethNum (void) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T GetTimeDiff(INT32_T *) */
EXTERN_C_LINKAGE UINT8_T GetTimeDiff (INT32_T * UpdatetimeDiff) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetTimeDiff (INT32_T * UpdatetimeDiff) 
{
    
    return 0;
}

/** User stub definition for function: UINT8_T GetTrainBelongCiType(void) */
EXTERN_C_LINKAGE UINT16_T GetTrainBelongCiType () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetTrainBelongCiType (void) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T InitCirQueueData(CirQueueStruct_T *, UINT8_T) */
EXTERN_C_LINKAGE UINT8_T InitCirQueueData (CirQueueStruct_T * pCirQueueStru, UINT8_T len) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_InitCirQueueData (CirQueueStruct_T * pCirQueueStru, UINT8_T len) 
{
   

    return 0;
}

/** User stub definition for function: UINT8_T LDB_GetGradient(const UINT16_T, const UINT32_T, const UINT8_T, const UINT16_T, const UINT32_T, const UINT8_T, INT32_T *) */
EXTERN_C_LINKAGE UINT8_T LDB_GetGradient (const UINT16_T headSegId, const UINT32_T headSegOffset, const UINT8_T headDir, const UINT16_T tailSegId, const UINT32_T tailsegOffset, const UINT8_T tailDir, INT32_T * Gradient) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_LDB_GetGradient (const UINT16_T headSegId, const UINT32_T headSegOffset, const UINT8_T headDir, const UINT16_T tailSegId, const UINT32_T tailsegOffset, const UINT8_T tailDir, INT32_T * Gradient) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T LDB_GetOperationDir(const UINT8_T, UINT8_T *) */
EXTERN_C_LINKAGE UINT8_T LDB_GetOperationDir (const UINT8_T dir, UINT8_T * operationDir) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_LDB_GetOperationDir (const UINT8_T dir, UINT8_T * operationDir) 
{
   

    return 0;
}

/** User stub definition for function: UINT8_T LDB_GetOspInAndDist(const UINT16_T, const UINT32_T, const UINT8_T, const UINT16_T, const UINT32_T, const UINT8_T, UINT8_T *, INT32_T *) */
EXTERN_C_LINKAGE UINT8_T LDB_GetOspInAndDist (const UINT16_T headSegId, const UINT32_T headSegOffset, const UINT8_T headDir, const UINT16_T maEndSegId, const UINT32_T maEndSegOffset, const UINT8_T maEndDir, UINT8_T * ospFront, INT32_T * distToOSP) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_LDB_GetOspInAndDist (const UINT16_T headSegId, const UINT32_T headSegOffset, const UINT8_T headDir, const UINT16_T maEndSegId, const UINT32_T maEndSegOffset, const UINT8_T maEndDir, UINT8_T * ospFront, INT32_T * distToOSP) 
{

    return 0;
}

/** User stub definition for function: UINT8_T UpdateObjAndTlsStatus(const ObstInfo_T *, const UINT8_T, const TSRInfo_T *, const UINT8_T) */
EXTERN_C_LINKAGE UINT8_T UpdateObjAndTlsStatus (const ObstInfo_T * obsInfoStru, const UINT8_T obsNum, const TSRInfo_T * tlsInfoStru, const UINT8_T tlsNum) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_UpdateObjAndTlsStatus (const ObstInfo_T * obsInfoStru, const UINT8_T obsNum, const TSRInfo_T * tlsInfoStru, const UINT8_T tlsNum) 
{
    

    return 0;
}

/** User stub definition for function: void AtpPeriodInit(void) */
EXTERN_C_LINKAGE void AtpPeriodInit () ;
EXTERN_C_LINKAGE void CppTest_Stub_AtpPeriodInit (void) 
{
    

}

/** User stub definition for function: void InitObjAndTlsStru(const UINT8_T) */
EXTERN_C_LINKAGE void InitObjAndTlsStru (const UINT8_T value) ;
EXTERN_C_LINKAGE void CppTest_Stub_InitObjAndTlsStru (const UINT8_T value) 
{
    

}

/** User stub definition for function: void InitPsdAndDoorStru(const UINT8_T) */
EXTERN_C_LINKAGE void InitPsdAndDoorStru (const UINT8_T value) ;
EXTERN_C_LINKAGE void CppTest_Stub_InitPsdAndDoorStru (const UINT8_T value) 
{
    

}

/** User stub definition for function: DmuAtpData_T GetDmuAtpData(void) */
EXTERN_C_LINKAGE DmuAtpData_T GetDmuAtpData () ;
EXTERN_C_LINKAGE DmuAtpData_T CppTest_Stub_GetDmuAtpData (void) 
{
    

   
}

/** User stub definition for function: int BackProtection(void) */
EXTERN_C_LINKAGE int BackProtection () ;
EXTERN_C_LINKAGE int CppTest_Stub_BackProtection (void) 
{
    

    return 0;
}

/** User stub definition for function: int BaliseObsProtection(void) */
EXTERN_C_LINKAGE int BaliseObsProtection () ;
EXTERN_C_LINKAGE int CppTest_Stub_BaliseObsProtection (void) 
{
    

    return 0;
}

/** User stub definition for function: int BlocToCbtcInit(void) */
EXTERN_C_LINKAGE int BlocToCbtcInit () ;
EXTERN_C_LINKAGE int CppTest_Stub_BlocToCbtcInit (void) 
{
    

    return 0;
}

/** User stub definition for function: int BrakeFailureProtection(void) */
EXTERN_C_LINKAGE int BrakeFailureProtection () ;
EXTERN_C_LINKAGE int CppTest_Stub_BrakeFailureProtection (void) 
{
   

    return 0;
}

/** User stub definition for function: int CbtcExit(void) */
EXTERN_C_LINKAGE int CbtcExit () ;
EXTERN_C_LINKAGE int CppTest_Stub_CbtcExit (void) 
{
    
    return 0;
}

/** User stub definition for function: int CtrlVobcReverseManage(void) */
EXTERN_C_LINKAGE int CtrlVobcReverseManage () ;
EXTERN_C_LINKAGE int CppTest_Stub_CtrlVobcReverseManage (void) 
{

    return 0;
}

/** User stub definition for function: int CutOffTractionProcess(void) */
EXTERN_C_LINKAGE int CutOffTractionProcess () ;
EXTERN_C_LINKAGE int CppTest_Stub_CutOffTractionProcess (void) 
{
    

    return 0;
}

/** User stub definition for function: int DerailmentProtection(void) */
EXTERN_C_LINKAGE int DerailmentProtection () ;
EXTERN_C_LINKAGE int CppTest_Stub_DerailmentProtection (void) 
{
    

    return 0;
}

/** User stub definition for function: int DoubleCtrlCheck(void) */
EXTERN_C_LINKAGE int DoubleCtrlCheck () ;
EXTERN_C_LINKAGE int CppTest_Stub_DoubleCtrlCheck (void) 
{
    

    return 0;
}

/** User stub definition for function: int EBProcess(void) */
EXTERN_C_LINKAGE int EBProcess () ;
EXTERN_C_LINKAGE int CppTest_Stub_EBProcess (void) 
{

    return 0;
}

/** User stub definition for function: int EsbEbProtection(void) */
EXTERN_C_LINKAGE int EsbEbProtection () ;
EXTERN_C_LINKAGE int CppTest_Stub_EsbEbProtection (void) 
{

    return 0;
}

/** User stub definition for function: int GetCamExitReason(void) */
EXTERN_C_LINKAGE int GetCamExitReason () ;
EXTERN_C_LINKAGE int CppTest_Stub_GetCamExitReason (void) 
{

    return 0;
}

/** User stub definition for function: int GetEbReason(void) */
EXTERN_C_LINKAGE int GetEbReason () ;
EXTERN_C_LINKAGE int CppTest_Stub_GetEbReason (void) 
{

    return 0;
}

/** User stub definition for function: int GetEbSyncActFaoReasonHigh(void) */
EXTERN_C_LINKAGE int GetEbSyncActFaoReasonHigh () ;
EXTERN_C_LINKAGE int CppTest_Stub_GetEbSyncActFaoReasonHigh (void) 
{

    return 0;
}

/** User stub definition for function: UINT32_T GetLocalDevIdByTrainID(UINT16_T, DevType_T) */
EXTERN_C_LINKAGE UINT32_T GetLocalDevIdByTrainID (UINT16_T TrainID, DevType_T devType) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetLocalDevIdByTrainID (UINT16_T TrainID, DevType_T devType) 
{

    return 0;
}

/** User stub definition for function: UINT32_T GetOtherDevIdByTrainID(UINT16_T, DevType_T) */
EXTERN_C_LINKAGE UINT32_T GetOtherDevIdByTrainID (UINT16_T TrainID, DevType_T devType) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetOtherDevIdByTrainID (UINT16_T TrainID, DevType_T devType) 
{
    

    return 0;
}

/** User stub definition for function: UINT8_T GetRunDrvMode(void) */
EXTERN_C_LINKAGE UINT8_T GetRunDrvMode () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRunDrvMode (void) 
{
    if (CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_42")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_43"))
    {
        return CM_MODE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_44")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_45"))
    {
        return AM_MODE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_46")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_47")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_48")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_49"))
    {
        return RM_MODE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_41")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_50"))
    {
        return DEFAULT_ZERO;
    }
    if (CppTest_IsCurrentTestCase(
            "TestSuite_ProtectionHandle_test_CheckJumpProtection_61"))
    {
        ++g_CheckJumpProtection61_GetRunDrvModeCalls;
        if (1U == g_CheckJumpProtection61_GetRunDrvModeCalls)
        {
            return DEFAULT_ZERO;
        }
        return CAM_MODE;
    }
    if (CppTest_IsCurrentTestCase(
            "TestSuite_ProtectionHandle_test_CheckJumpProtection_49"))
    {
        return RM_MODE;
    }
    if (CppTest_IsCurrentTestCase(
            "TestSuite_ProtectionHandle_test_CheckJumpProtection_50"))
    {
        return CAM_MODE;
    }
    if (IsCheckJumpProtectionCoverageTestCase())
    {
        return FAM_MODE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_48")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_49")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_50"))
    {
        return FAM_MODE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_51"))
    {
        return AR_MODE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_52")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_54"))
    {
        return AM_MODE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_53")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_55"))
    {
        return CM_MODE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_56"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_19"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_20"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_21"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_90"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_69"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_89"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_88"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_87"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_001"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_002"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_003"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_004"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_39"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_01"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_41"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_43"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_44"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_76"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_77"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_78"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_79"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_80"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_81"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_82"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_83"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_84"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_85"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_86"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_40"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_40"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_66"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_67"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_68"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_69"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_70"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_71"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_72"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_61"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_62"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_63"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_64"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_65"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_40"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_41"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_42"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_43"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_44"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_45"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_46"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_47"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_48"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_49"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_50"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_51"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_52"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_53"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_54"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_55"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_56"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_57"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_58"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_59"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_60"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_34"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_35"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_36"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_37"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_38"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_7"))
    {
        return RD_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_8"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_9"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_10"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_11"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_12"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_13"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_14"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_15"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_16"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_17"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_18"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_19"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_20"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_21"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_22"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_23"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_24"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_25"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_26"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_27"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_28"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_29"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_30"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_31"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_32"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_33"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_34"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_35"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_36"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_37"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_38"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_39"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_40"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_41"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_42"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_43"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_44"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_45"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_46"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_47"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_2"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_3"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_4"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_5"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_6"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_7"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_8"))
    {
        return AM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_9"))
    {
        return AM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_10"))
    {
        return AM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_11"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_12"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_13"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_14"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_15"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_16"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_17"))
    {
        return RM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_18"))
    {
        return RM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_19"))
    {
        return RM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_44"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_45"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_46"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_47"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_48"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_49"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_50"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_51"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_52"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_53"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_54"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_55"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_56"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_57"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_58"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_59"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_60"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_61"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_62"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_63"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_64"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_65"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_66"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_67"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibFunc_01"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibFunc_02"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibFunc_03"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibFunc_04"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibFunc_05"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibFunc_06"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetFunc_03"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetFunc_04"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetFunc_05"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetFunc_06"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorFunc_01"))
    {
        return RM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorFunc_02"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorFunc_03"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorFunc_04"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorFunc_05"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_12"))
    {
        return RM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_13"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_41"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_42"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_43"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_38"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_39"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_40"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_34"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_35"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_36"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_37"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_25"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_26"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_27"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_28"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_29"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_30"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_31"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_32"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_33"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_24")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_25")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_26")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_27")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_28")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_29")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_30")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_31")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_32"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_22"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_23"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_15"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_16"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_17"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_18"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_53"))
	{ 
      	return RD_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_54"))
	{ 
      	return RD_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_55"))
	{ 
      	return RD_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_56"))
	{ 
      	return RD_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibProcess_01"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_24"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_23"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_22"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_14"))
	{ 
      	return RD_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_13"))
	{ 
      	return RD_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_12"))
	{ 
      	return RD_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibProcess_11"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_10"))
	{ 
      	return CAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_23"))
	{ 
      	return RD_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_22"))
	{ 
      	return RM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_21"))
	{ 
      	return CM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_20"))
	{ 
      	return AM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_19"))
	{ 
      	return AR_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_18"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_17"))
	{ 
      	return CAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_51"))
	{ 
      	return EUM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_50"))
	{ 
      	return EUM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_49"))
	{ 
      	return EUM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_48"))
	{ 
      	return EUM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorProtectProcess_8"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorProtectProcess_7"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorProtectProcess_6"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorProtectProcess_5"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorProtectProcess"))
	{ 
      	return CAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_43"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_42"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_41"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_40"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_39"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_38"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_37"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_36"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_35"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_34"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_33"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_32"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_31"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_30"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_29"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_38"))
	{ 
      	return CM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_37"))
	{ 
      	return CM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_28"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_28"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_27"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_26"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_25"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_24"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_23"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_22"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_21"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_20"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_19"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_18"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_17"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_16"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_15"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_14"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_13"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_12"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_11"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_10"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_9"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_8"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_7"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_6"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_5"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_4"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_3"))
	{ 
      	return CAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_2"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_25"))
	{ 
      	return AR_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_7"))
	{ 
      	return CAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_6"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_5"))
	{ 
      	return CAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_4"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_3"))
	{ 
      	return CAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_2"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_1"))
	{ 
      	return AR_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibProcess_10"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibProcess_9"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibProcess_8"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibProcess_7"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibProcess_6"))
	{ 
      	return CAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibProcess_5"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibProcess"))
	{ 
      	return EUM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_37"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_36"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_35"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_34"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_33"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_32"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_31"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_30"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_29"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_28"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_27"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_26"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_25"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_24"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_23"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_22"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_21"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_20"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_19"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_18"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_17"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_16"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_15"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_14"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_13"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_12"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_11"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_10"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_9"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_8"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_7"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_6"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_5"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_4"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_3"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_2"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_1"))
	{ 
      	return CAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_0"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc"))
	{ 
      	return EUM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_01"))
	{ 
      	return EUM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_7"))
	{ 
      	return EUM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_6"))
	{ 
      	return CAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_5"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_4"))
	{ 
      	return AR_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_3"))
	{ 
      	return AM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_2"))
	{ 
      	return CM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_1"))
    {
        return RM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_vStopSupervision_5"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_vStopSupervision_4"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_vStopSupervision_3"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_30"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_28"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_26"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_25"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_24"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_23"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_22"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_21"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_17"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_27"))
    {
        return RM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_14"))
    {
        return RM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_13"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_12"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_11"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_10"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_9"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_8"))
    {
        return RM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_7"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_6"))
    {
        return AM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_3"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_2"))
    {
        return AM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_1"))
    {
        return CM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_0"))
    {
        return RM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_21"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_20"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_11"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_11"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_10"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_9"))
    {
        return RD_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_14")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_15")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_16")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_17")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_18")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_19")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_20")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_21")
		)
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_12"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_11"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_10"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_9"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_8"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_7"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_5"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_4"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_3"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_2"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_1"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_0"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_8"))
    {
        return EUM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_2"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_ExitConfirm"))
    {
        return FAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AmCmToRmCovert_6"))
    {
        return AM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_9"))
    {
        return RD_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAndAMModeCheck_18"))
    {
        return AM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_15"))
    {
        return EUM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_14"))
    {
        return EUM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_13"))
    {
        return EUM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_12"))
    {
        return EUM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_11"))
    {
        return EUM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_31"))
    {
        return AR_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_30"))
    {
        return CAM_MODE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_29"))
    {
        return FAM_MODE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRunAtpMode(void) */
EXTERN_C_LINKAGE UINT8_T GetRunAtpMode ();
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRunAtpMode (void) 
{
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_10"))
    {
        ++g_FamAutoReverse_GetRunAtpModeCalls;
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_11"))
    {
        ++g_FamAutoReverse_GetRunAtpModeCalls;
        return (UINT8_T)CONTROL_OPPO_ATP;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_12"))
    {
        ++g_FamAutoReverse_GetRunAtpModeCalls;
        return (UINT8_T)IDLE_ATP;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_8"))
    {
        ++g_FamAnyLocReverse_GetRunAtpModeCalls;
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_9"))
    {
        ++g_FamAnyLocReverse_GetRunAtpModeCalls;
        return (UINT8_T)CONTROL_OPPO_ATP;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_10"))
    {
        ++g_FamAnyLocReverse_GetRunAtpModeCalls;
        return (UINT8_T)IDLE_ATP;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlAutoChangeEnd_2"))
    {
        ++g_CtrlAutoChangeEnd_GetRunAtpModeCalls;
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlAutoChangeEnd_3"))
    {
        ++g_CtrlAutoChangeEnd_GetRunAtpModeCalls;
        return (UINT8_T)CONTROL_OPPO_ATP;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlAutoChangeEnd_4"))
    {
        ++g_CtrlAutoChangeEnd_GetRunAtpModeCalls;
        return (UINT8_T)IDLE_ATP;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_13"))
    {
        ++g_AmAutoReverse_GetRunAtpModeCalls;
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_15"))
    {
        ++g_AmAutoReverse_GetRunAtpModeCalls;
        return (UINT8_T)CONTROL_OPPO_ATP;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_8")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_10")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_14")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_16"))
    {
        ++g_AmAutoReverse_GetRunAtpModeCalls;
        return (UINT8_T)IDLE_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_42"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_43"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_31"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_32"))
    {
        return (UINT8_T)CONTROL_OPPO_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_25"))
    {
        return (UINT8_T)IDLE_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_26"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_27"))
    {
        return (UINT8_T)IDLE_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_28"))
    {
        return (UINT8_T)IDLE_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_29"))
    {
        return (UINT8_T)IDLE_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_53"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_54"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_55"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_56"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_51"))
    {
        return CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_50"))
    {
        return CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_49"))
    {
        return CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_48"))
    {
        return CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_21"))
    {
        return CONTROL_OPPO_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_20"))
    {
        return CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcFamReverse_16"))
    {
        return CONTROL_OPPO_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcFamReverse_15"))
    {
        return CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcAutoReverse_12"))
    {
        return CONTROL_OPPO_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcAutoReverse_13"))
    {
        return CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_17"))
    {
        return CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_16"))
    {
        return CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_4"))
    {
        return IDLE_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_3"))
    {
        return IDLE_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_2"))
    {
        return 2;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_0"))
    {
        return IDLE_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_46"))
    {
        return 3;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_19"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_17"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_16"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_45"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_44"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_43"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_42"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_41"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_40"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_39"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_38"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_37"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_36"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_35"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_34"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_33"))
    {
        return (UINT8_T)CONTROL_OPPO_ATP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_32"))
    {
        return (UINT8_T)CONTROL_LOCAL_ATP;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaModeUpTagLast(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaModeUpTagLast () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaModeUpTagLast (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_36"))
    {
        return 0xAAu;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_35"))
    {
        return 0xAAu;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_34"))
    {
        return 0xAAu;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaModeUpTag(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaModeUpTag () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaModeUpTag (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_36"))
    {
        return 0x55u;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_35"))
    {
        return 0x55u;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRunPreModeIndex(void) */
EXTERN_C_LINKAGE UINT8_T GetRunPreModeIndex () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRunPreModeIndex (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_19"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_45"))
    {
        return IL_RM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_39"))
    {
        return IL_RM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_36"))
    {
        return TACS_FAM;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaModeDownTagLast(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaModeDownTagLast () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaModeDownTagLast (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_39"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_38"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_37"))
    {
        return ATP_FALSE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaModeDownTag(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaModeDownTag () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaModeDownTag (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_39"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_38"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaAssureBtn(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaAssureBtn () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaAssureBtn (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_120"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_121"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_122"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_53"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_54"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_55"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_56"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_110"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_72"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_71"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_58"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_57"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_ExitConfirm_21"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_ExitConfirm"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitProcess_14"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitProcess_13"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitProcess_12"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitProcess_11"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitProcess_10"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AmCmToRmCovert_6"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AmCmToRmCovert_5"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AmCmToRmCovert_4"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AmCmToRmCovert"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_107"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_104"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_103"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_102"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_101"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_44"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_43"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_42"))
    {
        return ATP_PRESSED;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaAssureBtnLast(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaAssureBtnLast () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaAssureBtnLast (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_120"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_121"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_122"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_53"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_55"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_56"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_110"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_72"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_58"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_ExitConfirm_21"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitProcess_14"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitProcess_13"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitProcess_12"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitProcess_11"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AmCmToRmCovert_6"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AmCmToRmCovert_5"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AmCmToRmCovert_4"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AmCmToRmCovert"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_107"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_104"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_103"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_102"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_44"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_43"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeControl_test_PreSetHighestMode_42"))
    {
        return 1u;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetTrainLocalCabActive(void) */
EXTERN_C_LINKAGE UINT8_T GetTrainLocalCabActive () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetTrainLocalCabActive (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_97"))
    {
        return ATP_TRUE;
    }
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_96"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_126"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_19"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_20"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_21"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_89"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_88"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_76"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_77"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_34"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_123"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_124"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_125"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_117"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_118"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_119"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_120"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_121"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_122"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_04"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_05"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_06"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_05"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_06"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_15"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_16"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_17"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_18"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_03"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_47"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_48"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_49"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_50"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_51"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_52"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_54"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_53"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_31"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_14"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_13"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_12"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_11"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_10"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_113"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_112"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_46"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_30"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_23"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_22"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_21"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_20"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_19"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_18"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_17"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_38"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_22"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_74"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_38"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_37"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_37"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_36"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_35"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_02"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_13"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_01"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_01"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_01"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_01"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_01"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_5"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_4"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_3"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_2"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_1"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_0"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_30"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_28"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_26"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_25"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_24"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_23"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_22"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_21"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_17"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_11"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_13"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_12"))
    {
        return ATP_TRUE;
    }
	
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_10"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_9"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_111"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_110"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_109"))
    {
        static int q_1=0;
		q_1++;
		if(q_1==1)
		{
		return ATP_TRUE;
		}
		else
		{
        return ATP_FALSE;
		}
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_11"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_10"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_9"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_9"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_52"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_5"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_4"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_3"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_1"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_10"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_9"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_108"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_107"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_93"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_92"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_91"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_90"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_89"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_88"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_87"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_86"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_85"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_84"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_83"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_01"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_81"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_79"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_75"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_74"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_73"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_106"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_105"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_104"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_103"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_102"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_101"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_100"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_99"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_98"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_97"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_96"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_95"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_94"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_93"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_92"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_91"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_90"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_89"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_88"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_87"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_86"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_85"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_84"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_83"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_81"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_45"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_44"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_43"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_42"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_41"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_40"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_38"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_15"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_12"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_29"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_28"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_27"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_26"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_25"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_24"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_23"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_21"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_8"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_7"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_6"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_16"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_15"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_14"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_13"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_11"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetTrainOppoCabActive(void) */
EXTERN_C_LINKAGE UINT8_T GetTrainOppoCabActive () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetTrainOppoCabActive (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_19"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_20"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_21"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_89"))
    {
        return ARRELAY_STATUS_UP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_77"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_63"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_65"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_122"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_15"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_16"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_17"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_18"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_03"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_47"))
    {
		return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_48"))
	{
	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_49"))
    {
		return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_50"))
    {
		return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_51"))
    {
		return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_52"))
    {
		return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_54"))
    {
		return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_14"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_13"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_12"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_11"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_10"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_22"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_74"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_38"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_37"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_37"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_36"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_16"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_17"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_15"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_14"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_02"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_13"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_01"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_01"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_01"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_01"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_01"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_12"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_11"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_10"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_9"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_8"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_7"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_6"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_24"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_23"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_22"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_21"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_17"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_11"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_10"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_9"))
    {
        return ATP_FALSE;
    }
	
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_109"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_11"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_10"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_9"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_8"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_51"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_4"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_3"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_2"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_11"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_9"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_80"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_79"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_78"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_77"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_76"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_87"))
    {
        return 1u;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_86"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_82"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_39"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_14"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_13"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_22"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_8"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_7"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_16"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_15"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_14"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_12"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_26")
		||("TestSuite_ProtectionHandle_test_BackPrtFunc_27"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_13")
		||("TestSuite_ProtectionHandle_test_BackPrtFunc_14"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaEUMTag(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaEUMTag () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaEUMTag (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_19"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_20"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_21"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_18"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_17"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_16"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_15"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_16"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_17"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_18"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_14"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_13"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_12"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_23"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_22"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_21"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_20"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_19"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_18"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_17"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_01"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_11"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_11"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_9"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_9"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_10"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_9"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_8"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_7"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_16"))
    {
        return 1u;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_15"))
    {
        return 1u;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_14"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_13"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaBrakeFailure(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaBrakeFailure () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaBrakeFailure (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_23"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_22"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_21"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_20"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_19"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_18"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_17"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BrkFailFunc"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BrkFailFunc_0"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_16"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_15"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ActiveProcess_13"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRunModeConverse(void) */
EXTERN_C_LINKAGE UINT8_T GetRunModeConverse () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRunModeConverse (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_31"))
    {
		return RD_TO_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_14"))
    {
		return CM_TO_AR;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_13"))
    {
		return CM_TO_AR;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_12"))
    {
		return CM_TO_AR;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_11"))
    {
		return CM_TO_AR;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_10"))
    {
		return CM_TO_AR;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_9"))
    {
		return CM_TO_AR;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_8"))
    {
		return CM_TO_AR;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_45"))
    {
		return RM_TO_CM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_44"))
    {
		return RM_TO_CM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_43"))
    {
		return RM_TO_CM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_42"))
    {
		return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_29"))
    {
		return RD_TO_FAO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_28"))
    {
		return KEEP_RD;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_27"))
    {
		return RD_TO_AR;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_26"))
    {
		return RD_TO_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_24"))
    {
        return RD_TO_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_47"))
    {
		return RM_TO_CM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_48"))
    {
		return RM_TO_CM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_49"))
    {
		return RM_TO_CM;
    }if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_50"))
    {
		return RM_TO_CM;
    }if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_51"))
    {
		return CM_TO_AR;
    }if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_52"))
    {
		return RM_TO_CM;
    }if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_54"))
    {
		return RM_TO_CM;
    }

	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_53"))
    {
		return RM_TO_CM;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRunPreMode(void) */
EXTERN_C_LINKAGE UINT8_T GetRunPreMode () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRunPreMode (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_52")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_62")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_EnterAmAutoReverse_1"))
	{
		return DEFAULT_ZERO;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_53")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_58")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_66"))
	{
		return TACS_FAM;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_54")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_55")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_56")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_57")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_59")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_60")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_61")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_63")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_64")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_65")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_67")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_EnterAmAutoReverse_0"))
	{
		return TACS_AM;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_123"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_124"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_125"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_118"))
    {
        return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_119"))
    {
        return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_120"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_121"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_122"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_05"))
	{
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_06"))
	{
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_47"))
	{
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_48"))
	{
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_49"))
	{
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_50"))
	{
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_51"))
	{
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_52"))
	{
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_54"))
	{
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_53"))
	{
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_31"))
	{
		return TACS_CM;
    }
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_40"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_37"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_113"))
    {
		return 0x09u;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_112"))
    {
		return 0x04u;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_46"))
    {
		return 0x01u;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_30"))
    {
		return 0x01u;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_51"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_50"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_49"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_48"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_47"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_46"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_45"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_111"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_41"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_40"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_39"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_38"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_37"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_36"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_35"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_34"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_33"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_32"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_31"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_30")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_44"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_29"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_28"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_27"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_26"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_25"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_24"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_23"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_22"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_21"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_20"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_19"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_110"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_18"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_36"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_28"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_108"))
    {
		return IL_RM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_107"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_92"))
    {
		return TACS_CM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_91"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_90"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_89"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_88"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_87"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_86"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_106"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_105"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_104"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_103"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_102"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_101"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_100"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_99"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_98"))
    {
		return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_97"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_96"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_95"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_94"))
    {
		return TACS_AM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_93"))
    {
        return IL_RM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_92"))
    {
        return IL_RM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_45"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_44"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_43"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_42"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_41"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_40"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_29"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_28"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_27"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_26"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_25"))
    {
        return TACS_FAM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_24"))
    {
        return TACS_CM;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RDModeProcess_23"))
    {
        return TACS_CM;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetTrainLocalKeyActive(void) */
EXTERN_C_LINKAGE UINT8_T GetTrainLocalKeyActive () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetTrainLocalKeyActive (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_97"))
    {
        return ATP_TRUE;
    }
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_96"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_126"))
    {
        return ATP_TRUE;
    }
	/*
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_32"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_31"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_30"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_29"))
    {
        return ATP_TRUE;
    }

	*/
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_123"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_124"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_125"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_117"))
    {
        return ATP_TRUE;
    }
		if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_118"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_119"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_120"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_121"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_122"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_04"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_05"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_06"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamExitCmCheck_07"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamExitCmCheck_08"))
    {
        return ATP_FALSE;
    }
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_40"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_37"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_113"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_112"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitProcess_16"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitProcess_15"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_24"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_01"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_02"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_02"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_111"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_110"))
    {
        static int q_1=0;
		q_1++;
		if(q_1==1)
		{
		return ATP_TRUE;
		}
		else
		{
        return ATP_FALSE;
		}
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_109"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_28"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_27"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_26"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_25"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_24"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_23"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_71")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_72")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_73")
		)
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_70"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_69"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_68"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_66"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_65"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_64"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_61"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_60"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_56"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_55"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_23"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_21"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_19"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_18"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_23"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitProcess_14"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitProcess_13"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitProcess_11"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamExitRmCheck_12"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_27"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_25"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_24"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_23"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_21"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_36"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_32"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_30"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_29"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_108"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_107"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_19"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_80"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_79"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_78"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_77"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_75"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_74"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_106"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_105"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_103"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_102"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_101"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_100"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_99"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_98"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_97"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_96"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_95"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_94"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_93"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_92"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_91"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_90"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_89"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_88"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_83"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetTrainOppoKeyActive(void) */
EXTERN_C_LINKAGE UINT8_T GetTrainOppoKeyActive () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetTrainOppoKeyActive (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_120"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_121"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_122"))
    {
		static int cmmp_1=0;
		cmmp_1++;
		if(cmmp_1==1)
		{
		return ATP_TRUE;
		}
		else
		{
        return ATP_FALSE;
		}
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamExitCmCheck_08"))
    {
        return ATP_TRUE;
    }
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_40"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_37"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_110"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_109"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_28"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_27"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_26"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_25"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_24"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_23"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_71")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_72")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_73")
		)
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_70"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_69"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_66"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_65"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_61"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_56"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_23"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_21"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_20"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitProcess_14"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitProcess_12"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamExitRmCheck_13"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_25"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_22"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_36"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_32"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_107"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_22"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_21"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_20"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_80"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_79"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_78"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_75"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_104"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_103"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_84"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRunCtrlLevel(void) */
EXTERN_C_LINKAGE UINT8_T GetRunCtrlLevel () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRunCtrlLevel (void) 
{
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_47"))
    {
        return CBTC_LEVEL;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_48")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_49")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_50")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_51")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_52")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_53")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_54")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_55")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_56"))
    {
        return TACS_LEVEL;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_0"))
    {
        return CBTC_LEVEL;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_1")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_2")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_3")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_4")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_5")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_6")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_7")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_8"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_TacEbPrtFunc_01"))
    {
        return CBTC_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_TacEbPrtFunc_02"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_TacEbPrtFunc_03"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_TacEbPrtFunc_04"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_TacEbPrtFunc_05"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_TacEbPrtFunc_06"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_TacEbPrtFunc_07"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EsbPrtFunc_3"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EsbPrtFunc_4"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EsbPrtFunc_5"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_ExitAutoSecFunc_05"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_ExitAutoSecFunc_06"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_41"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_42"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_43"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_38"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_39"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_40"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_34"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_35"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_36"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_37"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_31"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_32"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_33"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_34"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_123"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_124"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_125"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_118"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_119"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_120"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_121"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_122"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_05"))
    {
		return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_06"))
    {
		return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAndAMModeCheck_22"))
    {
		return TACS_LEVEL;
    }
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_40"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_37"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_14"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_113"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_112"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_13"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EsbPrtFunc_2"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EsbPrtFunc_1"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EsbPrtFunc_0"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EsbPrtFunc"))
    {
        return BLOC_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_ZcEbProtection_9"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_ZcEbProtection_8"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_ZcEbProtection_7"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_ZcEbProtection_6"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_111"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_110"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_19"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_18"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_17"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_16"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_15"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_14"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_13"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_12"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_11"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_10"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_9"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_8"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_7"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_6"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_21"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_20"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_19"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_18"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_17"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_1"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_TrainBackSec_22"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_TrainBackSec_21"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_36"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_32"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_12"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_11"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_10"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_9"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_8"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_7"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_108"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_107"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAndAMModeCheck_17"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAndAMModeCheck_16"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAndAMModeCheck_15"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAndAMModeCheck_14"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_93"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_92"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_91"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_90"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_89"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_88"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_87"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_86"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_85"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_106"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_105"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_104"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_103"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_102"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_101"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_100"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_99"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_98"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_97"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_96"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_95"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_94"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_93"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_92"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAndAMModeCheck_20"))
    {
        return TACS_LEVEL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAndAMModeCheck_21"))
    {
        return TACS_LEVEL;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRcvAtoAMMode(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvAtoAMMode () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvAtoAMMode (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_123"))
    {
        return ATP_TRUE;
    }
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_124"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_125"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_119"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_118"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_03"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_05"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_06"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_32"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_31"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_30"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_29"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_111"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_28"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_27"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_26"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_25"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_24"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_23"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_22"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_91"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_88"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_83"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_106"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_97"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_96"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaADB(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaADB () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaADB (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_12"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_123"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_124"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_125"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_118"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_119"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_03"))
    {
        return ATP_TRUE;
    }
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_40"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_37"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_111"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_5"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_23"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_36"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_32"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_81"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_97"))
    {
        return ATP_FALSE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaArBtn(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaArBtn () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaArBtn (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_5"))
	{
		++g_AmCmManReverse_GetInMeaArBtnCalls;
		return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_6")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_7"))
	{
		++g_AmCmManReverse_GetInMeaArBtnCalls;
		return ATP_PRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_74"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_111"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_53"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_52"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_51"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_50"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCReverseCBTC_15"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCReverseCBTC_14"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlOppoAtpReverse_8"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlOppoAtpReverse_7"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_106"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_105"))
    {
        return ATP_PRESSED;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRcvAtoFaultTag(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvAtoFaultTag (void) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvAtoFaultTag (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_37"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_51"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_50"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_49"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_48"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_47"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_46"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_45"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_31"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_30")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_41")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_44"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_29"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_28"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_27"))
    {
        return ATP_FALSE;
    }if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_26"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_25"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_24"))
    {
        return ATP_FALSE;
    }if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_23"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_22"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_21"))
    {
        return ATP_FALSE;
    }if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_20"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_19"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_19"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_18"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2CMJuge_9"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_24"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_36"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_34"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_01"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_81"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRcvAtoBtnPressedAck(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvAtoBtnPressedAck () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvAtoBtnPressedAck (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_14"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_13"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_48"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_11"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_10"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_9"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetAtoStartConfirm(void) */
EXTERN_C_LINKAGE UINT8_T GetAtoStartConfirm () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtoStartConfirm (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_51"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_50"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_28"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_27"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_26"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_25"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_28"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_15"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_25"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_24"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_23"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_36"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_34"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_47"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_46"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_45"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_44"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_43"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_42"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_41"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_40"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_39"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_38"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_37"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_36"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_35"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_34"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_33"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_32"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_31"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_30"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_29"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_12"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRunCamEmpower(void) */
EXTERN_C_LINKAGE UINT8_T GetRunCamEmpower () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRunCamEmpower (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_27"))
    {
        return 0x55U;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_26"))
    {
        return 0x55U;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetVehicleFireAlarm(void) */
EXTERN_C_LINKAGE UINT8_T GetVehicleFireAlarm () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetVehicleFireAlarm (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_12"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_95"))
    {
        return 0x55U;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_76"))
    {
        return SEND_ATO_VEHICLEFIRE_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_5"))
    {
        return SEND_ATO_VEHICLEFIRE_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_28"))
    {
        return 0x55U;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRcvAtoFAMMode(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvAtoFAMMode () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvAtoFAMMode (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_98"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_99"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_100"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_101"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_81"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_82"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_83"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_84"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_85"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_86"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_87"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_88"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_89"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_90"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_91"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_97"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_92"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_93"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_73"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_72"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_71"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_70"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_69"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_68"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_67"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_66"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_65"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_64"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_63"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_62"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_61"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_60"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_59"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_58"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_57"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_56"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_55"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_54"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_53"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_52"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_51"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_50"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_47"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_46"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_45"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_44"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_43"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_42"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_41"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_40"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_39"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_38"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_37"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_36"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_35"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_34"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_33"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_32"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_31"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_30"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRunFamEmpower(void) */
EXTERN_C_LINKAGE UINT8_T GetRunFamEmpower () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRunFamEmpower (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_12"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_98"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_99"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_100"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_101"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_81"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_82"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_83"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_84"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_85"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_86"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_87"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_88"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_89"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_90"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_91"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_97"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_92"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_93"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_73"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_72"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_71"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_70"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_69"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_68"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_67"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_66"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_65"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_64"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_63"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_62"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_61"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_60"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_59"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_58"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_57"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_56"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_55"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_54"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_53"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_51"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_50"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_5"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_47"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_46"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_45"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_44"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_43"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_42"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_41"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_40"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_39"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_38"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_37"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_36"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_35"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_34"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_33"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_32"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_31"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRcvAtoLeaveTrainInfo(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvAtoLeaveTrainInfo () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvAtoLeaveTrainInfo (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_98"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_99"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_100"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_101"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorFunc_04"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorFunc_05"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_81"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_82"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_83"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_84"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_85"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_86"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_87"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_88"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_89"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_90"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_91"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_97"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_92"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_93"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_73"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_72"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_71"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_70"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_69"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_68"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_67"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_66"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_65"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_64"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_63"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_62"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_61"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_60"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_59"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_58"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_57"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_56"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_55"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_54"))
    {
        return RCV_ATO_DEPARTINF_DEDUCTION;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_32"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_30"))
    {
        return RCV_ATO_DEPARTINF_INIT;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_31"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_51"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_50"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorProtectProcess_7"))
    {
        return RCV_ATO_DEPARTINF_DEDUCTION;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorProtectProcess_6"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_28"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_27"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_26"))
    {
        return RCV_ATO_DEPARTINF_DEDUCTION;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_47"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_46"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_45"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_44"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_43"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_42"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_41"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_40"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_39"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_38"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_37"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_36"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_35"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_34"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_33"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_32"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaDoorStatus(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaDoorStatus () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaDoorStatus (void) 
{
    if (CppTest_IsCurrentTestCase(
            "TestSuite_ProtectionHandle_test_CheckJumpProtection_50"))
    {
        return ATP_OPEN;
    }
    if (IsCheckJumpProtectionCoverageTestCase())
    {
        return ATP_CLOSE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_14"))
    {
        ++g_FamAutoReverse_GetInMeaDoorStatusCalls;
        if (1U == g_FamAutoReverse_GetInMeaDoorStatusCalls)
        {
            return ATP_CLOSE;
        }
        return ATP_OPEN;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_15"))
    {
        ++g_FamAutoReverse_GetInMeaDoorStatusCalls;
        if (2U == g_FamAutoReverse_GetInMeaDoorStatusCalls)
        {
            return ATP_OPEN;
        }
        return ATP_CLOSE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_16"))
    {
        ++g_FamAutoReverse_GetInMeaDoorStatusCalls;
        if (3U == g_FamAutoReverse_GetInMeaDoorStatusCalls)
        {
            return ATP_OPEN;
        }
        return ATP_CLOSE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_17"))
    {
        ++g_FamAutoReverse_GetInMeaDoorStatusCalls;
        return ATP_CLOSE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_13"))
    {
        ++g_FamAutoReverse_GetInMeaDoorStatusCalls;
        if (1U == g_FamAutoReverse_GetInMeaDoorStatusCalls)
        {
            return ATP_CLOSE;
        }
        return ATP_OPEN;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_5")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_9")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_10")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_11")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_12"))
    {
        ++g_FamAutoReverse_GetInMeaDoorStatusCalls;
        return ATP_OPEN;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_6")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_7")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_8"))
    {
        ++g_FamAutoReverse_GetInMeaDoorStatusCalls;
        return ATP_CLOSE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_1"))
    {
        return ATP_OPEN;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_2")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_3")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_4")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_5")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_6")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_7")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_8")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_9")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_10"))
    {
        return ATP_CLOSE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_8")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_10")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_13")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_14")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_15")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_16"))
    {
        ++g_AmAutoReverse_GetInMeaDoorStatusCalls;
        return ATP_CLOSE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_9")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_11"))
    {
        ++g_AmAutoReverse_GetInMeaDoorStatusCalls;
        return ATP_OPEN;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_98"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_99"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_100"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_101"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_90"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_81"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_70"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_71"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_72"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_8"))
    {
        return ATP_OPEN;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_9"))
    {
        return ATP_OPEN;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_10"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_11"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_12"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_13"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_14"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_15"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_16"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_17"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_18"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_19"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_20"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_21"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_22"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_23"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_24"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_25"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_26"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_27"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_28"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_29"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_30"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_31"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_32"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_33"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_34"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_35"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_36"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_37"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_38"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_39"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_40"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_41"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_42"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_43"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_44"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_45"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_46"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_47"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_67"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcFamReverse_21"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcFamReverse_24"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcFamReverse_25"))
    {
        return ATP_OPEN;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_29"))
    {
        return ATP_OPEN;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_30")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_31")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_32"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_81"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_81"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_82"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_83"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_84"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_85"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_86"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_87"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_88"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_89"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_90"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_91"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_97"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_92"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_93"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_78"))
    {
        return ATP_OPEN;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_80"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_73"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_72"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_71"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_70"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_69"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_68"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_67"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_66"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_65"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_64"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_63"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_62"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_61"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_60"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_59"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_58"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_57"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_56"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_55"))
    {
        return ATP_OPEN;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_32"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_31"))
    {
        return ATP_OPEN;
    }
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_40"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_37"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_51"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_50"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_6"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_5"))
    {
        return ATP_OPEN;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_28"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_27"))
    {
        return ATP_OPEN;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_71")
	  ||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_72")
	   ||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_73")
	   ||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_18")
	    ||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_20")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_21")
		)
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_70"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_67"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcFamReverse_18"))
    {
		static int q_1=0;
		q_1++;
		if(q_1==1)
		{
		return ATP_CLOSE;
		}
		else
		{
        return 1;
		}
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcFamReverse_17"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcFamReverse_16"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcFamReverse_15"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcAutoReverse_14"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcAutoReverse_13"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcAutoReverse_12"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_66"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_61"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_60"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_59"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_57"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_0"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_36"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_32"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_47"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_46"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_45"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_44"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_43"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_42"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_41"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_40"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_39"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_38"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_37"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_36"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_35"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_34"))
    {
        return ATP_CLOSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_33"))
    {
        return ATP_CLOSE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetCarWashMode(void) */
EXTERN_C_LINKAGE UINT8_T GetCarWashMode () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetCarWashMode (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_98"))
    {
        return MODE_CARWASH_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_99"))
    {
        return MODE_CARWASH_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_100"))
    {
        return MODE_CARWASH_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_101"))
    {
        return MODE_CARWASH_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_69"))
    {
		return MODE_THROUGH;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_65"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_66"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_67"))
    {
		return MODE_THROUGH;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_84"))
    {
		return MODE_THROUGH;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_85"))
    {
		return MODE_NOT_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_86"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_87"))
    {
		return MODE_CARWASH_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_88"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_89"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_90"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_91"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_92"))
    {
		return MODE_CARWASH_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_93"))
    {
		return MODE_CARWASH_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_73"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_72"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_71"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_70"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_69"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_68"))
    {
		return MODE_NOT_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_67"))
    {
		return MODE_NOT_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_66"))
    {
		return MODE_THROUGH;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_65"))
    {
		return MODE_THROUGH;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_50"))
    {
		return MODE_CARWASH_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_43"))
    {
		return MODE_NOT_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_42"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_41"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_40"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_39"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_38"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_37"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_36"))
    {
		return MODE_NOT_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_35"))
    {
		return MODE_NOT_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_34"))
    {
		return MODE_NOT_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_33"))
    {
		return MODE_NOT_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_32"))
    {
		return MODE_THROUGH;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_31"))
    {
		return MODE_THROUGH;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_30"))
    {
		return MODE_THROUGH;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_29"))
    {
		return MODE_THROUGH;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_28"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_27"))
    {
		return MODE_NOT_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_26"))
    {
		return MODE_THROUGH;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_25"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_24"))
    {
		return MODE_NOT_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_23"))
    {
		return MODE_THROUGH;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_22"))
    {
		return MODE_CARWASH_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_47"))
    {
		return 999;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_46"))
    {
		return 999;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_45"))
    {
		return 999;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_44"))
    {
		return 999;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_43"))
    {
		return 999;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_97"))
    {
		return 999;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_42"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_41"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_40"))
    {
		return MODE_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_39"))
    {
		return MODE_NOT_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_38"))
    {
		return MODE_NOT_END_WASHING;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_33"))
    {
        return MODE_THROUGH;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_35"))
    {
        return MODE_THROUGH;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInFrontOfTheGarage(void) */
EXTERN_C_LINKAGE UINT8_T GetInFrontOfTheGarage () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInFrontOfTheGarage (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_70"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_69"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_68"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_67"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_66"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_65"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_60"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_21"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_20"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_19"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_18"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_17"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_16"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_15"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_14"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_13"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_12"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_11"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_10"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_9"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_8"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_7"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_6"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_5"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_4"))
    {
        return ATP_TRUE;
    }
	
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_44"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_41"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_39"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_33"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetAutoDepSigByPltID(const UINT32_T) */
EXTERN_C_LINKAGE UINT8_T GetAutoDepSigByPltID (const UINT32_T psdID) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAutoDepSigByPltID (const UINT32_T psdID) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_82"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_83"))
    {
        return ATP_PRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_59"))
    {
        return ATP_UNPRESSED;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_37"))
    {
        return ATP_UNPRESSED;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetIsFrontEndWashPoint(void) */
EXTERN_C_LINKAGE UINT8_T GetIsFrontEndWashPoint () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetIsFrontEndWashPoint (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_72"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_71"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_42"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_41"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetIsRearEndWashPoint(void) */
EXTERN_C_LINKAGE UINT8_T GetIsRearEndWashPoint () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetIsRearEndWashPoint (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_72"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_71"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_39"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_38"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_37"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_42"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_41"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetFrontWashFinish(void) */
EXTERN_C_LINKAGE UINT8_T GetFrontWashFinish () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetFrontWashFinish (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_88"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_89"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_72"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_71"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_39"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_38"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_37"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_42"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRearWashFinish(void) */
EXTERN_C_LINKAGE UINT8_T GetRearWashFinish () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRearWashFinish (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_90"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_91"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_72"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_71"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_42"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetMarshalTrainType(void) */
EXTERN_C_LINKAGE UINT8_T GetMarshalTrainType () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetMarshalTrainType (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_0")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_2"))
    {
        return UNKNOWN_TRAIN_TYPE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_3"))
    {
        return COUPLED_TRAIN_TYPE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_1")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_4")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_5")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_6")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_7")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_8")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_9")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_10"))
    {
        return SINGLE_TRAIN_TYPE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_19"))
    {
        return COUPLED_TRAIN_TYPE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_20"))
    {
        return COUPLED_TRAIN_TYPE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_21"))
    {
        return COUPLED_TRAIN_TYPE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_98"))
    {
        return MST_COUPLE_TRAIN_TYPE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_99"))
    {
        return MST_COUPLE_TRAIN_TYPE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_100"))
    {
        return MST_COUPLE_TRAIN_TYPE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_101"))
    {
        return MST_COUPLE_TRAIN_TYPE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_97"))
    {
        return DEFAULT_ZERO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_30"))
    {
        return UINT8_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_31"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_32"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_33"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_92"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_93"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_15"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_16"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_17"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_18"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_64"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_63"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_62"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_61"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_24"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_23"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_22"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_51"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_50"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_21"))
    {
        return UINT8_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_47"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_46"))
    {
        return 0;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_45"))
    {
        return 0;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetMarshallingSide(void) */
EXTERN_C_LINKAGE UINT8_T GetMarshallingSide () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetMarshallingSide (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_98"))
    {
        return COUPLE_SIDE_MIDDLE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_99"))
    {
        return COUPLE_SIDE_MIDDLE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_100"))
    {
        return COUPLE_SIDE_MIDDLE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_101"))
    {
        return COUPLE_SIDE_FAR;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_31"))
    {
        return INITIATIVE_COUPLE_MIDDLE_SIDE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_32"))
    {
        return PASSIVE_COUPLE_FAR_SIDE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_33"))
    {
        return INITIATIVE_COUPLE_FAR_SIDE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_92"))
    {
        return INITIATIVE_COUPLE_MIDDLE_SIDE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_93"))
    {
        return INITIATIVE_COUPLE_MIDDLE_SIDE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_64"))
    {
        return INITIATIVE_COUPLE_MIDDLE_SIDE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_63"))
    {
        return INITIATIVE_COUPLE_MIDDLE_SIDE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_62"))
    {
        return INITIATIVE_COUPLE_MIDDLE_SIDE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_61"))
    {
        return INITIATIVE_COUPLE_FAR_SIDE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_24"))
    {
        return INITIATIVE_COUPLE_FAR_SIDE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_23"))
    {
        return PASSIVE_COUPLE_FAR_SIDE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_14"))
    {
        return INITIATIVE_COUPLE_MIDDLE_SIDE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_13"))
    {
        return PASSIVE_COUPLE_MIDDLE_SIDE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_51"))
    {
        return INITIATIVE_COUPLE_MIDDLE_SIDE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_50"))
    {
        return INITIATIVE_COUPLE_MIDDLE_SIDE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_47"))
    {
        return INITIATIVE_COUPLE_MIDDLE_SIDE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_46"))
    {
        return INITIATIVE_COUPLE_MIDDLE_SIDE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetMarshallingProcess(void) */
EXTERN_C_LINKAGE UINT8_T GetMarshallingProcess () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetMarshallingProcess (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_98"))
    {
        return MARSHAL_PRCSS_BIT_1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_99"))
    {
        return MARSHAL_PRCSS_BIT_2;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_29"))
    {
        return MARSHAL_PRCSS_BIT_1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_30"))
    {
        return MARSHAL_PRCSS_INIT;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_31"))
    {
        return MARSHAL_PRCSS_BIT_1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_32"))
    {
        return MARSHAL_PRCSS_BIT_1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_33"))
    {
        return MARSHAL_PRCSS_BIT_1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_92"))
    {
        return MARSHAL_PRCSS_BIT_1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_93"))
    {
        return MARSHAL_PRCSS_BIT_2;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_64"))
    {
        return MARSHAL_PRCSS_BIT_2;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_63"))
    {
        return MARSHAL_PRCSS_BIT_1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_24"))
    {
        return MARSHAL_PRCSS_BIT_2;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_23"))
    {
        return MARSHAL_PRCSS_BIT_2;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_22"))
    {
        return MARSHAL_PRCSS_BIT_2;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_51"))
    {
        return MARSHAL_PRCSS_BIT_2;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_50"))
    {
        return MARSHAL_PRCSS_INIT;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_21"))
    {
        return MARSHAL_PRCSS_INIT;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_20"))
    {
        return 0x04u;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_47"))
    {
        return 0x04u;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT32_T GetSysEbLowRsn(void) */
EXTERN_C_LINKAGE UINT32_T GetSysEbLowRsn () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetSysEbLowRsn (void) 
{
    if (CppTest_IsCurrentTestCase("TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_1"))
    {
        return 3U;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_2"))
    {
        return 2U;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_69"))
    {
        return 0x00000020;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_2"))
    {
        return 0x00000020;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc"))
    {
        return 0x00000020;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_10"))
    {
        return 0x00000020;
    }
    return 0U;
}

/** User stub definition for function: UINT8_T GetRcvCamStartConfirm(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvCamStartConfirm () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvCamStartConfirm (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_18"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_17"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_16"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_13"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_12"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_11"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRcvCamBtnPressedAck(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvCamBtnPressedAck () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvCamBtnPressedAck (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_11"))
    {
        return ATP_PRESSED;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRcvCamAMMode(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvCamAMMode () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvCamAMMode (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_18"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_17"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_16"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_13"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_12"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRcvCamLeaveTrainInfo(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvCamLeaveTrainInfo () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvCamLeaveTrainInfo (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_13"))
    {
        return RCV_ATO_DEPARTINF_DEPART;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRcvCamParkingFlag(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvCamParkingFlag () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvCamParkingFlag (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_21"))
	{ 
      	return DEFAULT_3_VALUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_26"))
	{ 
      	return DEFAULT_3_VALUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_27"))
	{ 
      	return DEFAULT_ZERO;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaDirForwardBtn(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaDirForwardBtn () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaDirForwardBtn (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_11"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_10"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_38"))
	{ 
      	return ATP_PRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_37"))
	{ 
      	return ATP_PRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_24"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_01"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_02"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_01"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_02"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_01"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_12"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_11"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_10"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_9"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_8"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_23"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_22"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_11"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_10"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_25")||("TestSuite_ProtectionHandle_test_BackPrtFunc_27"))
	{ 
      	return ATP_PRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_13")||("TestSuite_ProtectionHandle_test_BackPrtFunc_14"))
	{ 
      	return ATP_PRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_3"))
	{ 
      	return ATP_PRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_2"))
	{ 
      	return ATP_PRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_22"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_20"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_19"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_27"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_26"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_24"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_36"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_33"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_31"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_30"))
	{ 
      	return ATP_FALSE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaDirBackBtn(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaDirBackBtn () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaDirBackBtn (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_11"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_10"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_38"))
	{ 
      	return ATP_PRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_37"))
	{ 
      	return ATP_PRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_24"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_01"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_01"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_02"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_02"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_01"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_5"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_4"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_3"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_2"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_1"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_0"))
	{ 
      	return ATP_PRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_30"))
	{ 
      	return ATP_PRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_28"))
	{ 
      	return ATP_PRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_25"))
	{ 
      	return ATP_PRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_23"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_21"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_11"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_12"))
	{ 
      	return ATP_PRESSED;
	}
	
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_9"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_1"))
	{ 
      	return ATP_PRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_22"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_27"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_26"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_36"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_33"))
	{ 
      	return ATP_FALSE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetTrainEbed(void) */
EXTERN_C_LINKAGE UINT8_T GetTrainEbed () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetTrainEbed (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_40"))
    {
        return ATP_DISABLE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_37"))
    {
        return ATP_DISABLE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_39"))
	{ 
      	return ATP_DISABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_38"))
	{ 
      	return ATP_ENABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_9"))
	{ 
      	return ATP_ENABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_8"))
	{ 
      	return ATP_ENABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_7"))
	{ 
      	return ATP_ENABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_6"))
	{ 
      	return ATP_ENABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_5"))
	{ 
      	return ATP_ENABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_2"))
	{ 
      	return ATP_ENABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_0"))
	{ 
      	return ATP_DISABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2CMJuge_10"))
	{ 
      	return ATP_ENABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_34"))
	{ 
      	return ATP_ENABLE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT32_T GetSysCutTractionRsn(void) */
EXTERN_C_LINKAGE UINT32_T GetSysCutTractionRsn () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetSysCutTractionRsn (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_40"))
    {
        return DEFAULT_ZERO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_37"))
    {
        return DEFAULT_ZERO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_0"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_36"))
	{ 
      	return DEFAULT_ZERO;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_34"))
	{ 
      	return 1;
	}
    return 0U;
}

/** User stub definition for function: UINT8_T GetTrainOutEb(void) */
EXTERN_C_LINKAGE UINT8_T GetTrainOutEb () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetTrainOutEb (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_40"))
    {
        return ATP_DISABLE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_37"))
    {
        return ATP_DISABLE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_5"))
	{ 
      	return ATP_DISABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_4"))
	{ 
      	return ATP_DISABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_2"))
	{ 
      	return ATP_DISABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_35"))
	{ 
      	return ATP_ENABLE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaTrainIntegrity(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaTrainIntegrity () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaTrainIntegrity (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_TrainInteChkHandle_test_TrainIntegrityFunc"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TrainInteChkHandle_test_TrainIntegrityFunc_0"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TrainInteChkHandle_test_TrainIntegrityCheck_1"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_23"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_18"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_17"))
	{ 
      	return ATP_TRUE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaLocalCtrlHandleZero(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaLocalCtrlHandleZero () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaLocalCtrlHandleZero (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_23"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_18"))
	{ 
      	return ATP_TRUE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT32_T GetPrtBackDist(void) */
EXTERN_C_LINKAGE UINT32_T GetPrtBackDist () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetPrtBackDist (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_40"))
	{ 
      	return 0;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_39"))
	{ 
      	return 0;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_24"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_01"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_36"))
	{ 
      	return 100;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_35"))
	{ 
      	return 100;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_34"))
	{ 
      	return 100;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_33"))
	{ 
      	return 100;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_29"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_20"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_19"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_18"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_16"))
	{ 
      	return 0;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_15"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2RMJuge_23"))
	{ 
      	return 0;
	}
    return 0U;
}

/** User stub definition for function: UINT8_T GetInMeaEbStatus(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaEbStatus () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaEbStatus (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_3"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_4"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_6"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_7"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_9"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_10"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_12"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_13"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_15"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_16"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_18"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_19"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_10"))
	{ 
      	return ATP_ENABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorProtectProcess_8"))
	{ 
      	return ATP_DISABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorProtectProcess_7"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorProtectProcess_6"))
	{ 
      	return ATP_ENABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_1"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_0"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_39"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_38"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_37"))
	{ 
      	return ATP_DISABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_7"))
	{ 
      	return ATP_DISABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_6"))
	{ 
      	return ATP_DISABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_5"))
	{ 
      	return ATP_DISABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_4"))
	{ 
      	return ATP_DISABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_3"))
	{ 
      	return ATP_DISABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_2"))
	{ 
      	return ATP_DISABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_1"))
	{ 
      	return ATP_DISABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_0"))
	{ 
      	return ATP_ENABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_5"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_4"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_3"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_2"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_1"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_0"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2CMJuge_11"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2CMJuge_10"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOExit2CMJuge_9"))
	{ 
      	return ATP_TRUE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRcvAtoDoorCtrlMode(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvAtoDoorCtrlMode () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvAtoDoorCtrlMode (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_5"))
	{ 
      	return ATO_DOORCTLMODE_AA;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT32_T GetSysAtpInputErrNo(void) */
EXTERN_C_LINKAGE UINT32_T GetSysAtpInputErrNo () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetSysAtpInputErrNo (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Revers_7"))
	{ 
      	return 0x00100000;
	}
    return 0U;
}

/** User stub definition for function: UINT8_T GetInMeaCutOffTraction(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaCutOffTraction () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaCutOffTraction (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_0"))
	{ 
      	return ATP_TRUE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetTrainOutCutOffTract(void) */
EXTERN_C_LINKAGE UINT8_T GetTrainOutCutOffTract () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetTrainOutCutOffTract (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_9"))
	{ 
      	return CUTOFF_TRACTION_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_8"))
	{ 
      	return CUTOFF_TRACTION_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_7"))
	{ 
      	return CUTOFF_TRACTION_TRUE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetPrtBackEnableTag(void) */
EXTERN_C_LINKAGE UINT8_T GetPrtBackEnableTag () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPrtBackEnableTag (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_11"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_10"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_38"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_37"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_30"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_28"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_12"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_6"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_5"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_4"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_3"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_2"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_CutTracFunc_1"))
	{ 
      	return ATP_TRUE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT32_T GetSysEbHighRsn(void) */
EXTERN_C_LINKAGE UINT32_T GetSysEbHighRsn () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetSysEbHighRsn (void) 
{
    if (CppTest_IsCurrentTestCase("TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_3"))
    {
        return 3U;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_4"))
    {
        return 2U;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_1"))
	{ 
      	return 1;
	}
    return 0U;
}

/** User stub definition for function: UINT32_T GetSysEbFaoLowRsn(void) */
EXTERN_C_LINKAGE UINT32_T GetSysEbFaoLowRsn () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetSysEbFaoLowRsn (void) 
{
    if (CppTest_IsCurrentTestCase("TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_5"))
    {
        return 3U;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_6"))
    {
        return 2U;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_3"))
	{ 
      	return 1;
	}
    return 0U;
}

/** User stub definition for function: UINT32_T GetSysEbFaoHighRsn(void) */
EXTERN_C_LINKAGE UINT32_T GetSysEbFaoHighRsn () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetSysEbFaoHighRsn (void) 
{
    if (CppTest_IsCurrentTestCase("TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_7"))
    {
        return 3U;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_8"))
    {
        return 2U;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_4"))
	{ 
      	return 1;
	}
    return 0U;
}

UINT32_T g_RelieveEbReason_SetCalls;
UINT8_T g_RelieveEbReason_SetType;
UINT32_T g_RelieveEbReason_SetValue;

void ResetRelieveEbReasonStubSpy(void)
{
    g_RelieveEbReason_SetCalls = 0U;
    g_RelieveEbReason_SetType = DEFAULT_ZERO;
    g_RelieveEbReason_SetValue = 0U;
}

EXTERN_C_LINKAGE void SetSysEbLowRsn (const UINT32_T ebLowRsn) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetSysEbLowRsn (const UINT32_T ebLowRsn)
{
    if (CppTest_IsCurrentTestCase("TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_1")
        || CppTest_IsCurrentTestCase("TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_2"))
    {
        ++g_RelieveEbReason_SetCalls;
        g_RelieveEbReason_SetType = EB_TYPE_LOW;
        g_RelieveEbReason_SetValue = ebLowRsn;
    }
}

EXTERN_C_LINKAGE void SetSysEbHighRsn (const UINT32_T ebHighRsn) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetSysEbHighRsn (const UINT32_T ebHighRsn)
{
    if (CppTest_IsCurrentTestCase("TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_3")
        || CppTest_IsCurrentTestCase("TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_4"))
    {
        ++g_RelieveEbReason_SetCalls;
        g_RelieveEbReason_SetType = EB_TYPE_HIGH;
        g_RelieveEbReason_SetValue = ebHighRsn;
    }
}

EXTERN_C_LINKAGE void SetSysEbFaoLowRsn (const UINT32_T ebFaoLowRsn) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetSysEbFaoLowRsn (const UINT32_T ebFaoLowRsn)
{
    if (CppTest_IsCurrentTestCase("TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_5")
        || CppTest_IsCurrentTestCase("TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_6"))
    {
        ++g_RelieveEbReason_SetCalls;
        g_RelieveEbReason_SetType = EB_TYPE_FAO_LOW;
        g_RelieveEbReason_SetValue = ebFaoLowRsn;
    }
}

EXTERN_C_LINKAGE void SetSysEbFaoHighRsn (const UINT32_T ebFaoHighRsn) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetSysEbFaoHighRsn (const UINT32_T ebFaoHighRsn)
{
    if (CppTest_IsCurrentTestCase("TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_7")
        || CppTest_IsCurrentTestCase("TestSuite_EbAndCutOffTrackOut_test_RelieveEbReason_8"))
    {
        ++g_RelieveEbReason_SetCalls;
        g_RelieveEbReason_SetType = EB_TYPE_FAO_HIGH;
        g_RelieveEbReason_SetValue = ebFaoHighRsn;
    }
}

/** User stub definition for function: UINT8_T GetInMeaArBtnLast(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaArBtnLast () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaArBtnLast (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_6"))
	{
		++g_AmCmManReverse_GetInMeaArBtnLastCalls;
		return ATP_PRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_7"))
	{
		++g_AmCmManReverse_GetInMeaArBtnLastCalls;
		return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_74"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_52"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_51"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCReverseCBTC_15"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlOppoAtpReverse_8"))
	{ 
      	return ATP_UNPRESSED;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaAtoRelease(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaAtoRelease () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaAtoRelease (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_67")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_68")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_69")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_70")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_71")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_72")
		||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_73")
		)
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_66"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_65"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_64"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_63"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_61"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_60"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_59"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_56"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_55"))
	{ 
      	return ATP_UNPRESSED;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVOBCEnterAR_54"))
	{ 
      	return ATP_UNPRESSED;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetCabChangeTag(void) */
EXTERN_C_LINKAGE UINT8_T GetCabChangeTag () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetCabChangeTag (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_32"))
	{ 
      	return CAB_CHANGE_START;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_33"))
	{ 
      	return CAB_CHANGE_START_FAM;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_34"))
	{ 
      	return CAB_CHANGE_START;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_27"))
	{ 
      	return CAB_CHANGE_START_FAM;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_22"))
	{ 
      	return CAB_CHANGE_START;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_SaveLocationFromAnotherVobc_0"))
	{ 
      	return CAB_CHANGE_UNKNOW;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_10"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_9"))
	{ 
      	return CAB_CHANGE_START;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_8"))
	{ 
      	return CAB_CHANGE_START;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_7"))
	{ 
      	return CAB_CHANGE_START;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_5"))
	{ 
      	return CAB_CHANGE_START;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_4"))
	{ 
      	return CAB_CHANGE_START;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_3"))
	{ 
      	return CAB_CHANGE_START;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRunOppoDrvMode(void) */
EXTERN_C_LINKAGE UINT8_T GetRunOppoDrvMode () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRunOppoDrvMode (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_38"))
	{ 
      	return AR_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_39"))
	{ 
      	return AR_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_40"))
	{ 
      	return AR_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_41"))
	{ 
      	return AR_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_42"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_43"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_44"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_45"))
	{ 
      	return CAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_46"))
	{ 
      	return CAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_32"))
	{ 
      	return AR_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_34"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_28"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_29"))
	{ 
      	return AR_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_22"))
	{ 
      	return AR_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_19"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_18"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_17"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_16"))
	{ 
      	return AR_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_15"))
	{ 
      	return AR_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_14"))
	{ 
      	return AR_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_9"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_8"))
	{ 
      	return FAM_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_7"))
	{ 
      	return AR_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_4"))
	{ 
      	return AR_MODE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_3"))
	{ 
      	return FAM_MODE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRunOppoCtrlLevel(void) */
EXTERN_C_LINKAGE UINT8_T GetRunOppoCtrlLevel () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRunOppoCtrlLevel (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_36"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_37"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_38"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_39"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_40"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_41"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_42"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_43"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_44"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_45"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_46"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_21"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_20"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_19"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_18"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_17"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_16"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_15"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_14"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_13"))
	{ 
      	return TACS_LEVEL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_12"))
	{ 
      	return TACS_LEVEL;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT32_T GetLocalDevIdByTrainDevID(UINT32_T, DevType_T) */
EXTERN_C_LINKAGE UINT32_T GetLocalDevIdByTrainDevID (UINT32_T trainDevId, DevType_T devType) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetLocalDevIdByTrainDevID (UINT32_T trainDevId, DevType_T devType) 
{
    UINT32_T __return = 0U;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, UINT32_T* __return, UINT32_T trainDevId, DevType_T devType)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("GetLocalDevIdByTrainDevID", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = GetLocalDevIdByTrainDevID(trainDevId, devType);
     */
    CPPTEST_CALL_STUB_CALLBACK("GetLocalDevIdByTrainDevID", &__return, trainDevId, devType);

    return __return;
}

/** User stub definition for function: UINT32_T GetOtherDevIdByTrainDevID(UINT32_T, DevType_T) */
EXTERN_C_LINKAGE UINT32_T GetOtherDevIdByTrainDevID (UINT32_T trainDevId, DevType_T devType) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetOtherDevIdByTrainDevID (UINT32_T trainDevId, DevType_T devType) 
{
    UINT32_T __return = 0U;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, UINT32_T* __return, UINT32_T trainDevId, DevType_T devType)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("GetOtherDevIdByTrainDevID", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = GetOtherDevIdByTrainDevID(trainDevId, devType);
     */
    CPPTEST_CALL_STUB_CALLBACK("GetOtherDevIdByTrainDevID", &__return, trainDevId, devType);

    return __return;
}

/** User stub definition for function: UINT32_T GetStopSecDevIdByIdxId(UINT16_T) */
EXTERN_C_LINKAGE UINT32_T GetStopSecDevIdByIdxId (UINT16_T id) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetStopSecDevIdByIdxId (UINT16_T id) 
{
    UINT32_T __return = 0U;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, UINT32_T* __return, UINT16_T id)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("GetStopSecDevIdByIdxId", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = GetStopSecDevIdByIdxId(id);
     */
    CPPTEST_CALL_STUB_CALLBACK("GetStopSecDevIdByIdxId", &__return, id);

    return __return;
}


/** User stub definition for function: UINT8_T GetPrtBackSpaceCpsTag(void) */
EXTERN_C_LINKAGE UINT8_T GetPrtBackSpaceCpsTag () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPrtBackSpaceCpsTag (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_39"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_38"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_37"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_34"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_33"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_32"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_31"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_29"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_30"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_28"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_27"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_26"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_25"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_24"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_23"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_22"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_21"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_17"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_11"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_20"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_19"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_18"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_16"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_15"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_14"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_13"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_12"))
	{ 
      	return ATP_TRUE;
	}
	
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_10"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_9"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_8"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_7"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_6"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_4"))
	{ 
      	return ATP_TRUE;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT32_T GetPrtBackPrtDist(void) */
EXTERN_C_LINKAGE UINT32_T GetPrtBackPrtDist () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetPrtBackPrtDist (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_40"))
	{ 
      	return 10;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_36"))
	{ 
      	return 10;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_35"))
	{ 
      	return 10;
	}
	return 0U;
}

/** User stub definition for function: UINT32_T GetTrainPeriodDis(void) */
EXTERN_C_LINKAGE UINT32_T GetTrainPeriodDis () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetTrainPeriodDis (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_39"))
	{ 
      	return 10000000000;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdJuge_12"))
	{ 
      	return 10000000000;
	}
	return 0U;
}

/** User stub definition for function: UINT32_T GetRcvAtoOpWarning(void) */
EXTERN_C_LINKAGE UINT32_T GetRcvAtoOpWarning () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetRcvAtoOpWarning (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_vStopSupervision_5"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_vStopSupervision_4"))
	{ 
      	return 0x10u;
	}
	return 0U;
}

/** User stub definition for function: UINT8_T GetInMeaEsbBtn(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaEsbBtn () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaEsbBtn (void) 
{
    if (CppTest_IsCurrentTestCase(
            "TestSuite_ProtectionHandle_test_CheckJumpProtection_55"))
    {
        return ATP_TRUE;
    }
    if (IsCheckJumpProtectionCoverageTestCase())
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_18"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_19"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_20"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_21"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_22"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_23"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_24"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_25"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_26"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_27"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_28"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_29"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_30"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_31"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_32"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_33"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_34"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_35"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_36"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_37"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_38"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_39"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_40"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_41"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_42"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_43"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_44"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_45"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_46"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_47"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EsbPrtFunc_4"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EsbPrtFunc_5"))
	{ 
      	return ATP_FALSE;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_6"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_5"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EsbPrtFunc_2"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EsbPrtFunc_1"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EsbPrtFunc_0"))
	{ 
      	return ATP_TRUE;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT16_T GetRcvAtoRecommendedSpeed(void) */
EXTERN_C_LINKAGE UINT16_T GetRcvAtoRecommendedSpeed () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetRcvAtoRecommendedSpeed (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_AtoRecommendSpeedProtect_1"))
	{ 
      	return UINT16_NULL;
	}
	return (unsigned short)0;
}

/** User stub definition for function: UINT8_T GetPrtJumpSta(void) */
EXTERN_C_LINKAGE UINT8_T GetPrtJumpSta () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPrtJumpSta (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_84"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_85"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_86"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_67"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_68"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_69"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_56"))
	{ 
      	return ATP_TRUE;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_29"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_28"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_27"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_26"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_25"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_24"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_23"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_22"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_21"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_20"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_10"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_9"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_12"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_11"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_10"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_9"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_8"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_5"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_4"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_3"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_2"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_1"))
	{ 
      	return ATP_TRUE;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT32_T GetPrtRollDist(void) */
EXTERN_C_LINKAGE UINT32_T GetPrtRollDist () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetPrtRollDist (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_11"))
	{ 
      	return 0;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_5"))
	{ 
      	return 0;
	}
	return 0U;
}

/** User stub definition for function: UINT8_T GetPrtRollStateTag(void) */
EXTERN_C_LINKAGE UINT8_T GetPrtRollStateTag () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPrtRollStateTag (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_10"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_11"))
	{ 
      	return ATP_FALSE;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_1"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_0"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_15"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_14"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_13"))
	{ 
      	return ATP_TRUE;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetPrtRollSpaceCpsTag(void) */
EXTERN_C_LINKAGE UINT8_T GetPrtRollSpaceCpsTag () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPrtRollSpaceCpsTag (void) 
{
	 if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_8"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_7"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_6"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_5"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_4"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_3"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_2"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_15"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_14"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_RollPrtFunc_13"))
	{ 
      	return ATP_TRUE;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetPrtBackStateTagLast(void) */
EXTERN_C_LINKAGE UINT8_T GetPrtBackStateTagLast () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPrtBackStateTagLast (void) 
{
    
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetPrtBackStateTag(void) */
EXTERN_C_LINKAGE UINT8_T GetPrtBackStateTag () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPrtBackStateTag (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_10"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_11"))
	{ 
      	return ATP_FALSE;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_8"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_7"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_6"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_5"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_4"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_3"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_2"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_1"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_0"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc"))
	{ 
      	return ATP_TRUE;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetPrtJumpReq(void) */
EXTERN_C_LINKAGE UINT8_T GetPrtJumpReq () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPrtJumpReq (void) 
{
    if (CppTest_IsCurrentTestCase(
            "TestSuite_ProtectionHandle_test_CheckJumpProtection_57"))
    {
        return ATP_FALSE;
    }
    if (IsCheckJumpProtectionCoverageTestCase())
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_30"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_31"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_32"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_33"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_34"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_35"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_36"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_37"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_38"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_39"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_40"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_41"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_42"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_43"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_44"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_45"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_46"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_47"))
	{ 
      	return ATP_TRUE;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_3"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_2"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_0"))
	{ 
      	return ATP_TRUE;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetPrtJumpParkingFlg(void) */
EXTERN_C_LINKAGE UINT8_T GetPrtJumpParkingFlg () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPrtJumpParkingFlg (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_89"))
    {
        return DEFAULT_3_VALUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_88"))
    {
        return DEFAULT_3_VALUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_76"))
    {
        return DEFAULT_3_VALUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_77"))
    {
        return DEFAULT_1_VALUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_46"))
    {
        return DEFAULT_3_VALUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_47"))
    {
        return DEFAULT_3_VALUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_48"))
    {
        return DEFAULT_3_VALUE;
    }

	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_49"))
    {
        return DEFAULT_ZERO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_50"))
    {
        return DEFAULT_ZERO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_51"))
    {
        return DEFAULT_ZERO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_52"))
    {
        return DEFAULT_ZERO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_53"))
    {
        return DEFAULT_ZERO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_54"))
    {
        return DEFAULT_ZERO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_55"))
    {
        return DEFAULT_ZERO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_56"))
    {
        return DEFAULT_ZERO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_57"))
    {
        return DEFAULT_ZERO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_58"))
    {
        return DEFAULT_ZERO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_59"))
    {
        return DEFAULT_ZERO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_60"))
    {
        return DEFAULT_ZERO;
    }
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_11"))
	{ 
      	return 2U;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_10"))
	{ 
      	return 2U;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_8"))
	{ 
      	return 2U;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_6"))
	{ 
      	return 3U;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaRightDoorStatus(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaRightDoorStatus () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaRightDoorStatus (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_19"))
	{ 
      	return ATP_CLOSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_18"))
	{ 
      	return ATP_CLOSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_17"))
	{ 
      	return ATP_CLOSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_16"))
	{ 
      	return ATP_CLOSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_15"))
	{ 
      	return ATP_CLOSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_14"))
	{ 
      	return ATP_CLOSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_13"))
	{ 
      	return ATP_CLOSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_12"))
	{ 
      	return ATP_OPEN;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaLeftDoorStatus(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaLeftDoorStatus () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaLeftDoorStatus (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_19"))
	{ 
      	return ATP_CLOSE;
	} 
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_18"))
	{ 
      	return ATP_CLOSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_17"))
	{ 
      	return ATP_CLOSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_16"))
	{ 
      	return ATP_CLOSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_15"))
	{ 
      	return ATP_CLOSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_14"))
	{ 
      	return ATP_CLOSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_13"))
	{ 
      	return ATP_OPEN;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetPrtJumpDir(void) */
EXTERN_C_LINKAGE UINT8_T GetPrtJumpDir () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPrtJumpDir (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_62"))
	{ 
      	return TRAIN_DIR_FORWARD;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_63"))
	{ 
      	return TRAIN_DIR_BACK;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_64"))
	{ 
      	return TRAIN_DIR_BACK;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_65"))
	{ 
      	return TRAIN_DIR_NO;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_19"))
	{ 
      	return TRAIN_DIR_BACK;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_18"))
	{ 
      	return TRAIN_DIR_NO;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_17"))
	{ 
      	return TRAIN_DIR_NO;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_16"))
	{ 
      	return TRAIN_DIR_BACK;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_15"))
	{ 
      	return TRAIN_DIR_BACK;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_14"))
	{ 
      	return TRAIN_DIR_FORWARD;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetForwardBackFlag(void) */
EXTERN_C_LINKAGE UINT8_T GetForwardBackFlag (void) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetForwardBackFlag (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_62"))
	{ 
      	return TRAIN_DIR_BACK;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_63"))
	{ 
      	return TRAIN_DIR_FORWARD;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_64"))
	{ 
      	return TRAIN_DIR_BACK;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_65"))
	{ 
      	return TRAIN_DIR_BACK;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_19"))
	{ 
      	return TRAIN_DIR_BACK;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_18"))
	{ 
      	return TRAIN_DIR_NO;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_17"))
	{ 
      	return TRAIN_DIR_BACK;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_16"))
	{ 
      	return TRAIN_DIR_NO;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_15"))
	{ 
      	return TRAIN_DIR_FORWARD;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT32_T GetPrtJumpPrtDist(void) */
EXTERN_C_LINKAGE UINT32_T GetPrtJumpPrtDist () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetPrtJumpPrtDist (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_90"))
	{ 
      	return 100;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_81"))
	{ 
      	return 4;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_78"))
	{ 
      	return 4;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_79"))
	{ 
      	return 1;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_33"))
	{ 
      	return 0;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_32"))
	{ 
      	return 10;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_31"))
	{ 
      	return 0;
	}
	return 0U;
}

/** User stub definition for function: INT32_T GetPrtJumpDist(void) */
EXTERN_C_LINKAGE INT32_T GetPrtJumpDist () ;
EXTERN_C_LINKAGE INT32_T CppTest_Stub_GetPrtJumpDist (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_90"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_81"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_78"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_79"))
	{ 
      	return 1;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_33"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_32"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_31"))
	{ 
      	return 1;
	}
	return 0;
}

/** User stub definition for function: UINT8_T GetPrtjumpTimesBack(void) */
EXTERN_C_LINKAGE UINT8_T GetPrtjumpTimesBack () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPrtjumpTimesBack (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_34"))
	{ 
      	return 10;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_80"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_81"))
	{ 
      	return 1;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetPrtJumpTimes(void) */
EXTERN_C_LINKAGE UINT8_T GetPrtJumpTimes () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPrtJumpTimes (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_34"))
	{ 
      	return 10;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_80"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_81"))
	{ 
      	return 1;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetTrainLOCHMaxDir(void) */
EXTERN_C_LINKAGE UINT8_T GetTrainLOCHMaxDir () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetTrainLOCHMaxDir (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_10"))
	{ 
      	return 0;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_9"))
	{ 
      	return 0;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_8"))
	{ 
      	return LINESEG_CONVER_DIR;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_7"))
	{ 
      	return LINESEG_CONVER_DIR;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_6"))
	{ 
      	return LINESEG_SAME_DIR;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_5"))
	{ 
      	return LINESEG_SAME_DIR;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_4"))
	{ 
      	return LINESEG_CONVER_DIR;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_3"))
	{ 
      	return LINESEG_SAME_DIR;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide_2"))
	{ 
      	return LINESEG_CONVER_DIR;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainDoorEscSide"))
	{ 
      	return LINESEG_SAME_DIR;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetCcuResetCmd(void) */
EXTERN_C_LINKAGE UINT8_T GetCcuResetCmd () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetCcuResetCmd (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetFunc_03"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetFunc_04"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetFunc_05"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetFunc_06"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetFunc_01"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetFunc_02"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_10"))
	{ 
      	return ATP_TRUE;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_8"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_7"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_6"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_5"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_4"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_3"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_2"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_1"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_0"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess"))
	{ 
      	return ATP_FALSE;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaBrakeHoldStatus(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaBrakeHoldStatus () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaBrakeHoldStatus (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_10"))
	{ 
      	return ATP_FALSE;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorProtectProcess_8"))
	{ 
      	return ATP_DISABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorProtectProcess_7"))
	{ 
      	return ATP_ENABLE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_7"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_6"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_5"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_4"))
	{ 
      	return ATP_FALSE;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetIsOutputCcuResetCmdFlag(void) */
EXTERN_C_LINKAGE UINT8_T GetIsOutputCcuResetCmdFlag (void) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetIsOutputCcuResetCmdFlag (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetFunc_07"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetFunc_08"))
	{ 
      	return ATP_TRUE;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_9"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetCmdProcess_8"))
	{ 
		return ATP_TRUE;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaDoorUnlocking(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaDoorUnlocking () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaDoorUnlocking (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_001"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_002"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_003"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_004"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_39"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_40"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_41"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_43"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_44"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_34"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_35"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_36"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_37"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_38"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_2"))
	{ 
      	return ATP_TRUE;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T JudgeTrainDoorEscSide(UINT8_T) */
EXTERN_C_LINKAGE UINT8_T JudgeTrainDoorEscSide (UINT8_T Doorside) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_JudgeTrainDoorEscSide (UINT8_T Doorside) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_001"))
	{ 
		return Doorside;
	}

	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_002"))
	{ 
		if(Doorside == ATP_TRUE)
		{
			return ATP_FALSE;
		}
		else
		{
			return ATP_TRUE;
		}
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_003"))
	{ 
		return Doorside;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_004"))
	{ 
		if(Doorside == ATP_TRUE)
		{
			return ATP_FALSE;
		}
		else
		{
			return ATP_TRUE;
		}
	}
	return (unsigned char)0;
}




/** User stub definition for function: UINT8_T GetTrainDoorHbiCmd(void) */
EXTERN_C_LINKAGE UINT8_T GetTrainDoorHbiCmd () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetTrainDoorHbiCmd (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_001"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_002"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_003"))
	{ 
		static int dr_1 = 0;
		dr_1++;
		if(dr_1 == 1)
		{
			return ATP_FALSE;
		}
		else
		{
			return ATP_TRUE;
		}
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_004"))
	{ 
		static int dr_2 = 0;
		dr_2++;
		if(dr_2 == 1)
		{
			return ATP_FALSE;
		}
		else
		{
			return ATP_TRUE;
		}
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_41"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_35"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_36"))
	{ 
      	return ATP_FALSE;
	}
	return (unsigned char)0;
}

/** User stub definition for function: FaoWashTraInfoStruct_T GetWashTrainModeInfo(void) */
FaoWashTraInfoStruct_T carwash_30={0};
FaoWashTraInfoStruct_T carwash_29={0};
FaoWashTraInfoStruct_T carwash_28={0};
FaoWashTraInfoStruct_T carwash_27={0};
FaoWashTraInfoStruct_T carwash_26={0};
FaoWashTraInfoStruct_T carwash_25={0};
FaoWashTraInfoStruct_T carwash_24={0};

FaoWashTraInfoStruct_T carwash_23={0};
FaoWashTraInfoStruct_T carwash_22={0};
FaoWashTraInfoStruct_T carwash_21={0};
FaoWashTraInfoStruct_T carwash_20={0};

FaoWashTraInfoStruct_T carwash_19={0};
FaoWashTraInfoStruct_T carwash_18={0};
FaoWashTraInfoStruct_T carwash_17={0};
FaoWashTraInfoStruct_T carwash_16={0};

FaoWashTraInfoStruct_T carwash_15={0};
FaoWashTraInfoStruct_T carwash_14={0};
FaoWashTraInfoStruct_T carwash_13={0};
FaoWashTraInfoStruct_T carwash_12={0};

FaoWashTraInfoStruct_T carwash_11={0};
FaoWashTraInfoStruct_T carwash_10={0};
FaoWashTraInfoStruct_T carwash_9={0};
FaoWashTraInfoStruct_T carwash_8={0};

FaoWashTraInfoStruct_T carwash_7={0};
FaoWashTraInfoStruct_T carwash_6={0};
FaoWashTraInfoStruct_T carwash_5={0};
FaoWashTraInfoStruct_T carwash_4={0};

FaoWashTraInfoStruct_T carwash_3={0};
FaoWashTraInfoStruct_T carwash_2={0};
FaoWashTraInfoStruct_T carwash_1={0};
FaoWashTraInfoStruct_T carwash_0={0};
FaoWashTraInfoStruct_T _MT_svar2={0};
EXTERN_C_LINKAGE FaoWashTraInfoStruct_T GetWashTrainModeInfo (void) ;
EXTERN_C_LINKAGE FaoWashTraInfoStruct_T CppTest_Stub_GetWashTrainModeInfo (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_45"))
	{ 
      	carwash_30.washTraCondition=ATP_FALSE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_46"))
	{ 
      	carwash_30.washTraCondition=ATP_TRUE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_47"))
	{ 
      	carwash_30.washTraCondition=ATP_TRUE;
		carwash_30.washTraPermit=ATP_TRUE;
		carwash_30.noEndwashTraMode=ATP_TRUE;
		carwash_30.endwashTraMode=ATP_TRUE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_48"))
	{ 
      	carwash_30.washTraCondition=ATP_TRUE;
		carwash_30.washTraPermit=ATP_TRUE;
		carwash_30.noEndwashTraMode=ATP_FALSE;
		carwash_30.endwashTraMode=ATP_TRUE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_49"))
	{ 
      	carwash_30.washTraCondition=ATP_TRUE;
		carwash_30.washTraPermit=ATP_TRUE;
		carwash_30.noEndwashTraMode=ATP_FALSE;
		carwash_30.endwashTraMode=ATP_FALSE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_51"))
	{ 
      	carwash_30.washTraCondition=ATP_FALSE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_52"))
	{ 
      	carwash_30.washTraCondition=ATP_TRUE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_53"))
	{ 
      	carwash_30.washTraCondition=ATP_TRUE;
		carwash_30.washTraPermit=ATP_TRUE;
		carwash_30.noEndwashTraMode=ATP_FALSE;
		carwash_30.endwashTraMode=ATP_FALSE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_54"))
	{ 
      	carwash_30.washTraCondition=ATP_TRUE;
		carwash_30.washTraPermit=ATP_FALSE;
		carwash_30.noEndwashTraMode=ATP_FALSE;
		carwash_30.endwashTraMode=ATP_TRUE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_55"))
	{ 
      	carwash_30.washTraCondition=ATP_TRUE;
		carwash_30.washTraPermit=ATP_FALSE;
		carwash_30.noEndwashTraMode=ATP_TRUE;
		carwash_30.endwashTraMode=ATP_TRUE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_56"))
	{ 
      	carwash_30.washTraCondition=ATP_TRUE;
		carwash_30.washTraPermit=ATP_FALSE;
		carwash_30.noEndwashTraMode=ATP_TRUE;
		carwash_30.endwashTraMode=ATP_FALSE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_58"))
	{ 
      	carwash_30.washTraCondition=ATP_FALSE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_59"))
	{ 
      	carwash_30.washTraCondition=ATP_TRUE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_60"))
	{ 
      	carwash_30.washTraCondition=ATP_TRUE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_61"))
	{ 
      	carwash_30.washTraCondition=ATP_TRUE;
		carwash_30.washTraPermit=ATP_FALSE;
		carwash_30.noEndwashTraMode=ATP_TRUE;
		carwash_30.endwashTraMode=ATP_TRUE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_62"))
	{ 
      	carwash_30.washTraCondition=ATP_TRUE;
		carwash_30.washTraPermit=ATP_FALSE;
		carwash_30.noEndwashTraMode=ATP_FALSE;
		carwash_30.endwashTraMode=ATP_FALSE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_63"))
	{ 
      	carwash_30.washTraCondition=ATP_TRUE;
		carwash_30.washTraPermit=ATP_FALSE;
		carwash_30.noEndwashTraMode=ATP_FALSE;
		carwash_30.endwashTraMode=ATP_TRUE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_64"))
	{ 
      	carwash_30.washTraCondition=ATP_TRUE;
		carwash_30.washTraPermit=ATP_TRUE;
		carwash_30.noEndwashTraMode=ATP_FALSE;
		carwash_30.endwashTraMode=ATP_TRUE;
		return carwash_30;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_43"))
	{ 
      	carwash_30.noEndwashTraMode=ATP_FALSE;
		return carwash_30;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_42"))
	{ 
      	carwash_29.frontwashing=0;
		carwash_29.endwashTraMode=ATP_FALSE;
		return carwash_29;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_41"))
	{ 
      	carwash_28.endwashTraMode=ATP_FALSE;
		return carwash_28;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_40"))
	{ 
      	carwash_24.washTraPermit=ATP_TRUE;
		carwash_24.frontwashing=0;
		return carwash_24;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_39"))
	{ 
      	carwash_25.washTraPermit=ATP_FALSE;
		carwash_25.noEndwashTraMode=ATP_TRUE;
		carwash_25.frontwashing=0x55u;
		carwash_25.endwashing=0x55u;
		carwash_25.washTrainFinished=ATP_FALSE;
		return carwash_25;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_38"))
	{ 
      	carwash_26.washTraPermit=ATP_FALSE;
		carwash_26.noEndwashTraMode=ATP_FALSE;
		carwash_26.endwashTraMode=ATP_TRUE;
		carwash_26.endwashing=0x55u;
		carwash_26.frontwashing=0x55u;
		carwash_26.washTraESB=ATP_FALSE;
		carwash_26.washTrainFinished=ATP_FALSE;
		carwash_26.errConfirm=ATP_FALSE;
		return carwash_26;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_37"))
	{ 
      	carwash_27.washTraPermit=ATP_FALSE;
		carwash_27.noEndwashTraMode=ATP_FALSE;
		carwash_27.endwashTraMode=0;
		carwash_27.endwashing=0;
		carwash_27.washTraESB=ATP_TRUE;
		carwash_27.washTrainFinished=ATP_TRUE;
		carwash_27.errConfirm=ATP_TRUE;
		return carwash_27;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_36"))
	{ 
      	carwash_20.washTraPermit=ATP_TRUE;
		return carwash_20;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_35"))
	{ 
      	carwash_21.washTraPermit=ATP_FALSE;
		carwash_21.noEndwashTraMode=0;
		return carwash_21;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_34"))
	{ 
      	carwash_22.washTraPermit=ATP_FALSE;
		carwash_22.noEndwashTraMode=ATP_TRUE;
		carwash_22.endwashTraMode=ATP_TRUE;
		return carwash_22;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_33"))
	{ 
      	carwash_23.washTraPermit=ATP_FALSE;
		carwash_23.noEndwashTraMode=ATP_TRUE;
		carwash_23.endwashTraMode=ATP_FALSE;
		return carwash_23;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_29"))
	{ 
      	carwash_19.washTraPermit=ATP_FALSE;
		return carwash_19;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_30"))
	{ 
      	carwash_16.washTraPermit=ATP_TRUE;
		carwash_16.noEndwashTraMode=ATP_TRUE;
		return carwash_16;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_31"))
	{ 
      	carwash_17.washTraPermit=ATP_TRUE;
		carwash_17.noEndwashTraMode=ATP_FALSE;
		carwash_17.endwashTraMode=ATP_TRUE;
		return carwash_17;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_32"))
	{ 
      	carwash_18.washTraPermit=ATP_TRUE;
		carwash_18.noEndwashTraMode=ATP_FALSE;
		carwash_18.endwashTraMode=ATP_FALSE;
		return carwash_18;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_20"))
	{ 
      	carwash_12.washTraPermit=ATP_TRUE;
		return carwash_12;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_19"))
	{ 
      	carwash_13.washTraPermit=ATP_FALSE;
		carwash_13.noEndwashTraMode=ATP_FALSE;
		carwash_13.endwashTraMode=ATP_FALSE;
		return carwash_13;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_18"))
	{ 
      	carwash_14.washTraPermit=ATP_FALSE;
		carwash_14.noEndwashTraMode=ATP_TRUE;
		return carwash_14;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_17"))
	{ 
      	carwash_15.washTraPermit=ATP_FALSE;
		carwash_15.noEndwashTraMode=ATP_FALSE;
		carwash_15.endwashTraMode=ATP_TRUE;
		return carwash_15;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_14"))
	{ 
      	carwash_8.washTraPermit=ATP_TRUE;
		return carwash_8;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_13"))
	{ 
      	carwash_9.washTraPermit=ATP_FALSE;
		carwash_9.noEndwashTraMode=ATP_TRUE;
		carwash_9.endwashTraMode=ATP_TRUE;
		return carwash_9;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_12"))
	{ 
      	carwash_10.washTraPermit=ATP_FALSE;
		carwash_10.noEndwashTraMode=ATP_FALSE;
		return carwash_10;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_11"))
	{ 
      	carwash_11.washTraPermit=ATP_FALSE;
		carwash_11.noEndwashTraMode=ATP_TRUE;
		carwash_11.endwashTraMode=ATP_FALSE;
		return carwash_11;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_7"))
	{ 
      	carwash_7.washTraPermit=ATP_FALSE;
		return carwash_7;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_4"))
	{ 
      	carwash_4.washTraPermit=ATP_TRUE;
		carwash_4.noEndwashTraMode=ATP_FALSE;
		carwash_4.endwashTraMode=ATP_FALSE;
		return carwash_4;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_5"))
	{ 
      	carwash_5.washTraPermit=ATP_TRUE;
		carwash_5.noEndwashTraMode=ATP_TRUE;
		return carwash_5;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_6"))
	{ 
      	carwash_6.washTraPermit=ATP_TRUE;
		carwash_6.noEndwashTraMode=ATP_FALSE;
		carwash_6.endwashTraMode=ATP_TRUE;
		return carwash_6;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_2"))
	{ 
      	carwash_0.washTraModeCmd=0;
		return carwash_0;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_1"))
	{ 
      	carwash_1.washTraModeCmd=0x55u;
		return carwash_1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_0"))
	{ 
      	carwash_2.washTraModeCmd=0xCCu;
		return carwash_2;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc"))
	{ 
      	carwash_3.washTraModeCmd=0xAAu;
		return carwash_3;
	}
	 return _MT_svar2;
}

/** User stub definition for function: UINT8_T GetWashCmd(void) */
EXTERN_C_LINKAGE UINT8_T GetWashCmd (void) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetWashCmd (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_44"))
	{ 
      	return WASHCMD_ONLY_THROUGH;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_45"))
	{ 
      	return WASHCMD_ONLY_THROUGH;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_46"))
	{ 
      	return WASHCMD_ONLY_THROUGH;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_47"))
	{ 
      	return WASHCMD_ONLY_THROUGH;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_48"))
	{ 
      	return WASHCMD_ONLY_THROUGH;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_49"))
	{ 
      	return WASHCMD_ONLY_THROUGH;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_50"))
	{ 
      	return WASHCMD_NOT_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_51"))
	{ 
      	return WASHCMD_NOT_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_52"))
	{ 
      	return WASHCMD_NOT_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_53"))
	{ 
      	return WASHCMD_NOT_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_54"))
	{ 
      	return WASHCMD_NOT_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_55"))
	{ 
      	return WASHCMD_NOT_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_56"))
	{ 
      	return WASHCMD_NOT_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_57"))
	{ 
      	return WASHCMD_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_58"))
	{ 
      	return WASHCMD_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_59"))
	{ 
      	return WASHCMD_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_60"))
	{ 
      	return WASHCMD_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_61"))
	{ 
      	return WASHCMD_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_62"))
	{ 
      	return WASHCMD_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_63"))
	{ 
      	return WASHCMD_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_63"))
	{ 
      	return WASHCMD_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_64"))
	{ 
      	return WASHCMD_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_21"))
	{ 
      	return WASHCMD_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_20"))
	{ 
      	return WASHCMD_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_19"))
	{ 
      	return WASHCMD_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_18"))
	{ 
      	return WASHCMD_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_17"))
	{ 
      	return WASHCMD_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_16"))
	{ 
      	return WASHCMD_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_15"))
	{ 
      	return WASHCMD_NOT_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_14"))
	{ 
      	return WASHCMD_NOT_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_13"))
	{ 
      	return WASHCMD_NOT_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_12"))
	{ 
      	return WASHCMD_NOT_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_11"))
	{ 
      	return WASHCMD_NOT_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_10"))
	{ 
      	return WASHCMD_NOT_END_WASHING;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_9"))
	{ 
      	return WASHCMD_ONLY_THROUGH;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_8"))
	{ 
      	return WASHCMD_ONLY_THROUGH;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_7"))
	{ 
      	return WASHCMD_ONLY_THROUGH;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_6"))
	{ 
      	return WASHCMD_ONLY_THROUGH;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_5"))
	{ 
      	return WASHCMD_ONLY_THROUGH;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_4"))
	{ 
      	return WASHCMD_ONLY_THROUGH;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT16_T GetRequestTimerCount(void) */
EXTERN_C_LINKAGE UINT16_T GetRequestTimerCount (void) ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetRequestTimerCount (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_47"))
	{ 
      	return 1000001u;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_55"))
	{ 
      	return 1000001u;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_62"))
	{ 
      	return 1000001u;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_20"))
	{ 
      	return 1u;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_19"))
	{ 
      	return 1000000u;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_14"))
	{ 
      	return 1u;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_13"))
	{ 
      	return 1000000u;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_9"))
	{ 
      	return 1000000u;
	}
	return (unsigned short)0;
}

/** User stub definition for function: UINT8_T GetWiperCenteringFeedback(void) */
EXTERN_C_LINKAGE UINT8_T GetWiperCenteringFeedback () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetWiperCenteringFeedback (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_53"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_54"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_55"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_56"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_60"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_61"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_62"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_63"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_64"))
	{ 
      	return ATP_TRUE;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_21"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_20"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_19"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_18"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_17"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_15"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_14"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_13"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_12"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_11"))
	{ 
      	return ATP_TRUE;
	}
	
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetLastFrontWashing(void) */
EXTERN_C_LINKAGE UINT8_T GetLastFrontWashing (void) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetLastFrontWashing (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_39"))
	{ 
      	return 0xAAu;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_38"))
	{ 
      	return 0;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetLastRearWashing(void) */
EXTERN_C_LINKAGE UINT8_T GetLastRearWashing (void) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetLastRearWashing (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_39"))
	{ 
      	return 0xAAu;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_38"))
	{ 
      	return 0;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaLocalKey(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaLocalKey () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaLocalKey (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_39"))
	{ 
      	return 0;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_38"))
	{ 
      	return 0;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_37"))
	{ 
      	return ATP_TRUE;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaOppoKey(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaOppoKey () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaOppoKey (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_39"))
	{ 
      	return 0;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_38"))
	{ 
      	return ATP_TRUE;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T CheckLeaveCarWashArea(const UINT32_T, const UINT8_T) */
EXTERN_C_LINKAGE UINT8_T CheckLeaveCarWashArea (const UINT32_T washDevId, const UINT8_T dir) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_CheckLeaveCarWashArea (const UINT32_T washDevId, const UINT8_T dir) 
{
     if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_39"))
	{ 
      	return DEFAULT_2_VALUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_38"))
	{ 
      	return DEFAULT_1_VALUE;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT16_T GetTrainLOCTMinSegId(void) */
EXTERN_C_LINKAGE UINT16_T GetTrainLOCTMinSegId () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetTrainLOCTMinSegId (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckLeaveCarWashArea_2"))
	{ 
      	return DEFAULT_68_VALUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckLeaveCarWashArea_1"))
	{ 
      	static int q_1=0;
		q_1++;
		if(q_1==1)
		{
		return DEFAULT_68_VALUE;
		}
		else
		{
        return INVALID_UINT16;
		}
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckLeaveCarWashArea_0"))
	{ 
      	return UINT8_NULL;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckLeaveCarWashArea"))
	{ 
      	return UINT16_NULL;
	}
	return (unsigned short)0;
}

/** User stub definition for function: UINT8_T GetNextSegId(UINT16_T, UINT8_T, UINT16_T *) */
EXTERN_C_LINKAGE UINT8_T GetNextSegId (UINT16_T segId, UINT8_T dir, UINT16_T * nextSegId) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetNextSegId (UINT16_T segId, UINT8_T dir, UINT16_T * nextSegId) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckLeaveCarWashArea_2"))
	{ 
      	return DEFAULT_1_VALUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckLeaveCarWashArea_1"))
	{ 
      	return DEFAULT_1_VALUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckLeaveCarWashArea_0"))
	{ 
      	return DEFAULT_ZERO;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRcvAtoDerailmentStatus(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvAtoDerailmentStatus () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvAtoDerailmentStatus (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_2"))
	{ 
      	return ATO_TRAIN_DERAILMENT_NOT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_3"))
	{ 
      	return ATO_TRAIN_DERAILMENT_YES;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_4"))
	{ 
      	return ATO_TRAIN_DERAILMENT_YES;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_5"))
	{ 
      	return ATO_TRAIN_DERAILMENT_NOT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_6"))
	{ 
      	return ATO_TRAIN_DERAILMENT_YES;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_7"))
	{ 
      	return ATO_TRAIN_DERAILMENT_YES;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_8"))
	{ 
      	return ATO_TRAIN_DERAILMENT_NOT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_9"))
	{ 
      	return ATO_TRAIN_DERAILMENT_YES;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_10"))
	{ 
      	return ATO_TRAIN_DERAILMENT_YES;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_11"))
	{ 
      	return ATO_TRAIN_DERAILMENT_NOT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_12"))
	{ 
      	return ATO_TRAIN_DERAILMENT_YES;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_13"))
	{ 
      	return ATO_TRAIN_DERAILMENT_YES;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_14"))
	{ 
      	return ATO_TRAIN_DERAILMENT_NOT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_15"))
	{ 
      	return ATO_TRAIN_DERAILMENT_YES;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_16"))
	{ 
      	return ATO_TRAIN_DERAILMENT_YES;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_17"))
	{ 
      	return ATO_TRAIN_DERAILMENT_NOT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_18"))
	{ 
      	return ATO_TRAIN_DERAILMENT_YES;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_19"))
	{ 
      	return ATO_TRAIN_DERAILMENT_YES;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_1"))
	{ 
      	return ATO_TRAIN_DERAILMENT_YES;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_0"))
	{ 
      	return ATO_TRAIN_DERAILMENT_YES;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DerailPrtFunc_25"))
	{ 
      	return ATO_TRAIN_DERAILMENT_NOT;
	}
	return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInInttCouplStopPnt(void) */
EXTERN_C_LINKAGE UINT8_T GetInInttCouplStopPnt () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInInttCouplStopPnt (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_64"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_63"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_51"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_50"))
	{ 
      	return ATP_TRUE;
	}
    return (unsigned char)0;
}


/** User stub definition for function: UINT8_T GetMarMidSideEHookConSttsLst(void) */
EXTERN_C_LINKAGE UINT8_T GetMarMidSideEHookConSttsLst () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetMarMidSideEHookConSttsLst (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_8"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_7"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_6"))
	{ 
      	return ATP_TRUE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetMarMidSideEHookConStts(void) */
EXTERN_C_LINKAGE UINT8_T GetMarMidSideEHookConStts () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetMarMidSideEHookConStts (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_20"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_21"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_15"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_16"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_17"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_8"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_7"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_6"))
	{ 
      	return ATP_TRUE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetIsRetainMarshalArea(void) */
EXTERN_C_LINKAGE UINT8_T GetIsRetainMarshalArea () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetIsRetainMarshalArea (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_8"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_7"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_6"))
	{ 
      	return ATP_FALSE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaLocalECoupConSta(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaLocalECoupConSta () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaLocalECoupConSta (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_11"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_14"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_13"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_12"))
	{ 
      	return ATP_TRUE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInMeaLocalECoupConStaLast(void) */
EXTERN_C_LINKAGE UINT8_T GetInMeaLocalECoupConStaLast () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInMeaLocalECoupConStaLast (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_11"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_10"))
	{ 
      	return ATP_TRUE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT16_T GetMarEHookSttsChngTimer(void) */
EXTERN_C_LINKAGE UINT16_T GetMarEHookSttsChngTimer () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetMarEHookSttsChngTimer (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCamCheck_31"))
	{ 
      	return 15001u;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCamCheck_30"))
	{ 
      	return 15001u;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCamCheck_29"))
	{ 
      	return 15001u;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCamCheck_28"))
	{ 
      	return 15001u;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCamCheck_27"))
	{ 
      	return 15001u;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCamCheck_26"))
	{ 
      	return 15001u;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_9"))
	{ 
      	return 20000;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_11"))
	{ 
      	return 20000;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_12"))
	{ 
      	return 20000;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCamCheck_20"))
	{ 
      	return 6600;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCamCheck_21"))
	{ 
      	return 6600;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCamCheck_22"))
	{ 
      	return 6600;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCamCheck_23"))
	{ 
      	return 6600;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCamCheck_24"))
	{ 
      	return 6600;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCamCheck_25"))
	{ 
      	return 6600;
	}
    return (unsigned short)0;
}

/** User stub definition for function: UINT8_T GetRcvAtoStartConfirm(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvAtoStartConfirm () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvAtoStartConfirm (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_35"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_98"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_99"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_100"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_101"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_81"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_82"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_83"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_84"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_85"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_86"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_87"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_88"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_89"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_90"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_91"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_97"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_92"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_93"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_123"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_124"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_125"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_33"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_34"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_118"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_119"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_03"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_05"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_06"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_21"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_22"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_34"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_33"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_73"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_72"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_71"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_70"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_69"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_68"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_67"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_66"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_65"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_64"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_63"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_62"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_61"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_60"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_59"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_58"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_57"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_56"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_55"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_54"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_53"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_52"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_31"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_30"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_29"))
	{ 
      	return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_32"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_31"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_30"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_ARModeProcess_29"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_18"))
	{ 
      	return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAMToARModeProcess_14"))
	{ 
      	return ATP_TRUE;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_40"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_37"))
	{ 
      	return ATP_TRUE;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetFamModelInstruct(void) */
EXTERN_C_LINKAGE UINT8_T GetFamModelInstruct () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetFamModelInstruct (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT16_T GetAtpBackRunJumpPrtDisMax(void) */
EXTERN_C_LINKAGE UINT16_T GetAtpBackRunJumpPrtDisMax () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetAtpBackRunJumpPrtDisMax (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_79"))
	{ 
      	return 4;
	}
    return (unsigned short)0;
}

/** User stub definition for function: UINT16_T GetOcIdByDevId(const UINT32_T) */
EXTERN_C_LINKAGE UINT16_T GetOcIdByDevId (const UINT32_T devId) ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetOcIdByDevId (const UINT32_T devId) 
{
    return (unsigned short)0;
}

/** User stub definition for function: void LogPrintf_T(UINT8_T, UINT32_T) */
EXTERN_C_LINKAGE void LogPrintf_T (UINT8_T logLevel, UINT32_T LogSize) ;
EXTERN_C_LINKAGE void CppTest_Stub_LogPrintf_T (UINT8_T logLevel, UINT32_T LogSize) 
{
}

/** User stub definition for function: UINT8_T GetAtpFunMarshalling(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpFunMarshalling () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpFunMarshalling (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT16_T GetAtpBackRunJumpTimeMax(void) */
EXTERN_C_LINKAGE UINT16_T GetAtpBackRunJumpTimeMax () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetAtpBackRunJumpTimeMax (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_90"))
	{ 
      	return 65534;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_80"))
	{ 
      	return 4;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_81"))
	{ 
      	return 4;
	}
    return (unsigned short)0;
}

/** User stub definition for function: UINT8_T GetOutRunForBackward(void) */
EXTERN_C_LINKAGE UINT8_T GetOutRunForBackward () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetOutRunForBackward (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetAtpFunCarWash(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpFunCarWash () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpFunCarWash (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetAtpWheelDiameterChg(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpWheelDiameterChg () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpWheelDiameterChg (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT16_T GetTeethBNum(void) */
EXTERN_C_LINKAGE UINT16_T GetTeethBNum () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetTeethBNum (void) 
{
    return (unsigned short)0;
}

/** User stub definition for function: UINT8_T GetAtpFunWhlChk(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpFunWhlChk () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpFunWhlChk (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetAtpFunEsbPrt(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpFunEsbPrt () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpFunEsbPrt (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetAtpFunSleepAwakeFun(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpFunSleepAwakeFun () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpFunSleepAwakeFun (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: int GetBlocObsDir(void) */
EXTERN_C_LINKAGE int GetBlocObsDir () ;
EXTERN_C_LINKAGE int CppTest_Stub_GetBlocObsDir (void) 
{
    return 0;
}

/** User stub definition for function: UINT16_T GetAtpWheelDiameterMin(void) */
EXTERN_C_LINKAGE UINT16_T GetAtpWheelDiameterMin () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetAtpWheelDiameterMin (void) 
{
    return (unsigned short)0;
}

/** User stub definition for function: UINT8_T GetAtpFunDoorHib(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpFunDoorHib () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpFunDoorHib (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetAtpFunTrainTSR(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpFunTrainTSR () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpFunTrainTSR (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetAtpFunArReverse(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpFunArReverse () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpFunArReverse (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T FAOHoldStill(void) */
EXTERN_C_LINKAGE UINT8_T FAOHoldStill () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_FAOHoldStill (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: int BoardingIndicatorProtectProcess(void) */
EXTERN_C_LINKAGE int BoardingIndicatorProtectProcess () ;
EXTERN_C_LINKAGE int CppTest_Stub_BoardingIndicatorProtectProcess (void) 
{
    return 0;
}

/** User stub definition for function: int ZcEbProtection(void) */
EXTERN_C_LINKAGE int ZcEbProtection () ;
EXTERN_C_LINKAGE int CppTest_Stub_ZcEbProtection (void) 
{
    return 0;
}

/** User stub definition for function: void AddSlpAwkFramLocClear(void) */
EXTERN_C_LINKAGE void AddSlpAwkFramLocClear () ;
EXTERN_C_LINKAGE void CppTest_Stub_AddSlpAwkFramLocClear (void) 
{
}

/** User stub definition for function: UINT16_T GetTeethANum(void) */
EXTERN_C_LINKAGE UINT16_T GetTeethANum () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetTeethANum (void) 
{
    return (unsigned short)0;
}

/** User stub definition for function: int SetProtectionErrorCode(void) */
EXTERN_C_LINKAGE int SetProtectionErrorCode () ;
EXTERN_C_LINKAGE int CppTest_Stub_SetProtectionErrorCode (void) 
{
    return 0;
}

/** User stub definition for function: int CcuResetCmdProcess(void) */
EXTERN_C_LINKAGE int CcuResetCmdProcess () ;
EXTERN_C_LINKAGE int CppTest_Stub_CcuResetCmdProcess (void) 
{
    return 0;
}

/** User stub definition for function: int GetIsWashFinishPoint(void) */
EXTERN_C_LINKAGE int GetIsWashFinishPoint () ;
EXTERN_C_LINKAGE int CppTest_Stub_GetIsWashFinishPoint (void) 
{
    return 0;
}

/** User stub definition for function: int InitSysTimeInfo(void) */
EXTERN_C_LINKAGE int InitSysTimeInfo () ;
EXTERN_C_LINKAGE int CppTest_Stub_InitSysTimeInfo (void) 
{
    return 0;
}

/** User stub definition for function: int vCtrlVobcFaoReverse(void) */
EXTERN_C_LINKAGE int vCtrlVobcFaoReverse () ;
EXTERN_C_LINKAGE int CppTest_Stub_vCtrlVobcFaoReverse (void) 
{
    return 0;
}

/** User stub definition for function: int GetjumpStep(void) */
EXTERN_C_LINKAGE int GetjumpStep () ;
EXTERN_C_LINKAGE int CppTest_Stub_GetjumpStep (void) 
{
    return 0;
}


StopPoint_T sp = {0};
/** User stub definition for function: const StopPoint_T * GetJumpStopPiontDataStru(UINT16_T, UINT32_T, UINT8_T) */
EXTERN_C_LINKAGE const StopPoint_T * GetJumpStopPiontDataStru (UINT16_T segID, UINT32_T segOffset, UINT8_T dir) ;
EXTERN_C_LINKAGE const StopPoint_T * CppTest_Stub_GetJumpStopPiontDataStru (UINT16_T segID, UINT32_T segOffset, UINT8_T dir) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckStopPointDistance_2")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckStopPointDistance_3")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckStopPointDistance_4"))
    {
		sp.spSeg.segId = segID;
		sp.spSeg.segOffset = segOffset;
		return &sp;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_IsInJumpWindow_4"))
    {
		sp.spSeg.segId = segID;
		sp.spSeg.segOffset = segOffset;
		return &sp;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_IsInJumpWindow_5"))
    {
		sp.spSeg.segId = segID;
		sp.spSeg.segOffset = segOffset;
		return &sp;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_IsInJumpWindow_6"))
    {
		sp.spSeg.segId = segID;
		sp.spSeg.segOffset = segOffset;
		return &sp;
    }
    return (const StopPoint_T *)0;
}

/** User stub definition for function: UINT8_T GetSystemMaxAtpCanopySpeed(void) */
EXTERN_C_LINKAGE UINT8_T GetSystemMaxAtpCanopySpeed () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetSystemMaxAtpCanopySpeed (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetAtpFunExitAutoSec(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpFunExitAutoSec () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpFunExitAutoSec (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT16_T GetSpinTimeMax(void) */
EXTERN_C_LINKAGE UINT16_T GetSpinTimeMax () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetSpinTimeMax (void) 
{
    return (unsigned short)0;
}

/** User stub definition for function: int TrainBackSec(void) */
EXTERN_C_LINKAGE int TrainBackSec () ;
EXTERN_C_LINKAGE int CppTest_Stub_TrainBackSec (void) 
{
    return 0;
}

/** User stub definition for function: UINT16_T GetTrainBelongOcType(void) */
EXTERN_C_LINKAGE UINT16_T GetTrainBelongOcType () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetTrainBelongOcType (void) 
{
    return (unsigned short)0;
}

/** User stub definition for function: void SetOutRunForward(UINT8_T) */
EXTERN_C_LINKAGE void SetOutRunForward (UINT8_T value) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetOutRunForward (UINT8_T value) 
{
    if (IsAmAutoReverseSpyTestCase())
    {
        ++g_AmAutoReverse_SetOutRunForwardCalls;
        g_AmAutoReverse_SetOutRunForwardValue = value;
    }
    if (IsCtrlAutoChangeEndSpyTestCase())
    {
        ++g_CtrlAutoChangeEnd_SetOutRunForwardCalls;
        g_CtrlAutoChangeEnd_SetOutRunForwardValue = value;
    }
    if (IsFamAnyLocReverseSpyTestCase())
    {
        ++g_FamAnyLocReverse_SetOutRunForwardCalls;
        g_FamAnyLocReverse_SetOutRunForwardValue = value;
    }
    if (IsFamAutoReverseSpyTestCase())
    {
        ++g_FamAutoReverse_SetOutRunForwardCalls;
        g_FamAutoReverse_SetOutRunForwardValue = value;
    }
}

/** User stub definition for function: void SetSlpAwkSleepStep(UINT8_T) */
EXTERN_C_LINKAGE void SetSlpAwkSleepStep (UINT8_T value) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetSlpAwkSleepStep (UINT8_T value) 
{
}

/** User stub definition for function: UINT8_T AddSlpAwkLocPowerOnInit(void) */
EXTERN_C_LINKAGE UINT8_T AddSlpAwkLocPowerOnInit () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_AddSlpAwkLocPowerOnInit (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetSlpAwkSleepFlag(void) */
EXTERN_C_LINKAGE UINT8_T GetSlpAwkSleepFlag () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetSlpAwkSleepFlag (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_42"))
    {
        return ATP_FALSE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetAtpFunEscDoorHib(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpFunEscDoorHib () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpFunEscDoorHib (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT16_T GetAtpEbSpeedCam(void) */
EXTERN_C_LINKAGE UINT16_T GetAtpEbSpeedCam () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetAtpEbSpeedCam (void) 
{
    return (unsigned short)0;
}

/** User stub definition for function: int FAOHold2Revers(void) */
EXTERN_C_LINKAGE int FAOHold2Revers () ;
EXTERN_C_LINKAGE int CppTest_Stub_FAOHold2Revers (void) 
{
    return 0;
}

/** User stub definition for function: UINT8_T GetMeaDisRateLow(void) */
EXTERN_C_LINKAGE UINT8_T GetMeaDisRateLow () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetMeaDisRateLow (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT32_T GetAwakeFailCause(UINT8_T, UINT8_T) */
EXTERN_C_LINKAGE UINT32_T GetAwakeFailCause (UINT8_T testType, UINT8_T testId) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetAwakeFailCause (UINT8_T testType, UINT8_T testId) 
{
    return 0U;
}

/** User stub definition for function: UINT8_T FramWriteData(UINT8_T *, UINT16_T, UINT16_T) */
EXTERN_C_LINKAGE UINT8_T FramWriteData (UINT8_T  data[], UINT16_T type, UINT16_T len) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_FramWriteData (UINT8_T  data[], UINT16_T type, UINT16_T len) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_18"))
    { 
        return RET_UOK;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_17"))
    { 
        return RET_UERR;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetOspInfo(const Location_T *, const Location_T *, const Location_T *, const Location_T *, UINT8_T *, LimitObjFront_T *, UINT8_T *, LimitObjBetweenStruct_T *) */
EXTERN_C_LINKAGE UINT8_T GetOspInfo (const Location_T * headloc, const Location_T * tailLoc, const Location_T * maStartLoc, const Location_T * maEndLoc, UINT8_T * lmtObjectNumFront, LimitObjFront_T  pLmtObjFront[], UINT8_T * lmtObjectNumBetwn, LimitObjBetweenStruct_T * pLmtObjBtw) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetOspInfo (const Location_T * headloc, const Location_T * tailLoc, const Location_T * maStartLoc, const Location_T * maEndLoc, UINT8_T * lmtObjectNumFront, LimitObjFront_T  pLmtObjFront[], UINT8_T * lmtObjectNumBetwn, LimitObjBetweenStruct_T * pLmtObjBtw) 
{
    return (unsigned char)0;
}

/** User stub definition for function: void SetFamModelInstruct(UINT8_T) */
EXTERN_C_LINKAGE void SetFamModelInstruct (UINT8_T value) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetFamModelInstruct (UINT8_T value) 
{
    if (IsEnterAmAutoReverseSpyTestCase())
    {
        ++g_EnterAmAutoReverse_SetFamModelInstructCalls;
        g_EnterAmAutoReverse_SetFamModelInstructValue = value;
    }
}

/** User stub definition for function: UINT8_T GetMeaDisRateInit(void) */
EXTERN_C_LINKAGE UINT8_T GetMeaDisRateInit () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetMeaDisRateInit (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: int TrainIntegrityCheck(void) */
EXTERN_C_LINKAGE int TrainIntegrityCheck () ;
EXTERN_C_LINKAGE int CppTest_Stub_TrainIntegrityCheck (void) 
{
    return 0;
}

/** User stub definition for function: void SetSlpAwkSleepFlag(const UINT8_T) */
EXTERN_C_LINKAGE void SetSlpAwkSleepFlag (const UINT8_T SleepFlag) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetSlpAwkSleepFlag (const UINT8_T SleepFlag) 
{
}

/** User stub definition for function: int GetProtectionErrorCode(void) */
EXTERN_C_LINKAGE int GetProtectionErrorCode () ;
EXTERN_C_LINKAGE int CppTest_Stub_GetProtectionErrorCode (void) 
{
    return 0;
}

/** User stub definition for function: UINT8_T FramReadData(UINT16_T, UINT16_T, UINT8_T *) */
EXTERN_C_LINKAGE UINT8_T FramReadData (UINT16_T type, UINT16_T len, UINT8_T  data[]) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_FramReadData (UINT16_T type, UINT16_T len, UINT8_T  data[]) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetAtpFunDerailPrt(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpFunDerailPrt () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpFunDerailPrt (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: int SpeedProtection(void) */
EXTERN_C_LINKAGE int SpeedProtection () ;
EXTERN_C_LINKAGE int CppTest_Stub_SpeedProtection (void) 
{
    return 0;
}

/** User stub definition for function: int AtoRecommendSpeedProtect(void) */
EXTERN_C_LINKAGE int AtoRecommendSpeedProtect () ;
EXTERN_C_LINKAGE int CppTest_Stub_AtoRecommendSpeedProtect (void) 
{
    return 0;
}

/** User stub definition for function: int Seconds2Calendar(void) */
EXTERN_C_LINKAGE int Seconds2Calendar () ;
EXTERN_C_LINKAGE int CppTest_Stub_Seconds2Calendar (void) 
{
    return 0;
}

/** User stub definition for function: int EscDoorHibProcess(void) */
EXTERN_C_LINKAGE int EscDoorHibProcess () ;
EXTERN_C_LINKAGE int CppTest_Stub_EscDoorHibProcess (void) 
{
    return 0;
}

/** User stub definition for function: UINT16_T GetAtpBackRunJumpDevDisMax(void) */
EXTERN_C_LINKAGE UINT16_T GetAtpBackRunJumpDevDisMax () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetAtpBackRunJumpDevDisMax (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_IsInJumpWindow_5"))
    {
        return 2;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_IsInJumpWindow_6"))
    {
        return 2;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainLocManage_test_TrainLocationCorrection_8"))
    {
        return -5;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainLocManage_test_TrainLocationCorrection_8"))
    {
        return -5;
    }
    return (unsigned short)0;
}

/** User stub definition for function: UINT8_T FAOExit2CMJuge(void) */
EXTERN_C_LINKAGE UINT8_T FAOExit2CMJuge () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_FAOExit2CMJuge (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: int RemoteEB(void) */
EXTERN_C_LINKAGE int RemoteEB () ;
EXTERN_C_LINKAGE int CppTest_Stub_RemoteEB (void) 
{
    return 0;
}

/** User stub definition for function: UINT16_T GetAtpAimSpdGap(void) */
EXTERN_C_LINKAGE UINT16_T GetAtpAimSpdGap () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetAtpAimSpdGap (void) 
{
    return (unsigned short)0;
}

/** User stub definition for function: UINT8_T GetAtpFunStpEnsure(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpFunStpEnsure () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpFunStpEnsure (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: void SetOutRunForBackward(UINT8_T) */
EXTERN_C_LINKAGE void SetOutRunForBackward (UINT8_T value) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetOutRunForBackward (UINT8_T value) 
{
    if (IsAmAutoReverseSpyTestCase())
    {
        ++g_AmAutoReverse_SetOutRunForBackwardCalls;
        g_AmAutoReverse_SetOutRunForBackwardValue = value;
    }
    if (IsCtrlAutoChangeEndSpyTestCase())
    {
        ++g_CtrlAutoChangeEnd_SetOutRunForBackwardCalls;
        g_CtrlAutoChangeEnd_SetOutRunForBackwardValue = value;
    }
    if (IsFamAnyLocReverseSpyTestCase())
    {
        ++g_FamAnyLocReverse_SetOutRunForBackwardCalls;
        g_FamAnyLocReverse_SetOutRunForBackwardValue = value;
    }
    if (IsFamAutoReverseSpyTestCase())
    {
        ++g_FamAutoReverse_SetOutRunForBackwardCalls;
        g_FamAutoReverse_SetOutRunForBackwardValue = value;
    }
}

/** User stub definition for function: UINT8_T GetAtpFunSpksPrt(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpFunSpksPrt () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpFunSpksPrt (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: int PeriodInitAfterModeConv(void) */
EXTERN_C_LINKAGE int PeriodInitAfterModeConv () ;
EXTERN_C_LINKAGE int CppTest_Stub_PeriodInitAfterModeConv (void) 
{
    return 0;
}

/** User stub definition for function: void LoadSlpAwkConfData(void) */
EXTERN_C_LINKAGE void LoadSlpAwkConfData () ;
EXTERN_C_LINKAGE void CppTest_Stub_LoadSlpAwkConfData (void) 
{
}

/** User stub definition for function: UINT8_T GetLocCpsSpaceMax(void) */
EXTERN_C_LINKAGE UINT8_T GetLocCpsSpaceMax () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetLocCpsSpaceMax (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetOpgDefault(void) */
EXTERN_C_LINKAGE UINT8_T GetOpgDefault () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetOpgDefault (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT16_T GetAtpCutTracSpdGap(void) */
EXTERN_C_LINKAGE UINT16_T GetAtpCutTracSpdGap () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetAtpCutTracSpdGap (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_OverSpdFunc_11"))
    {
        return DEFAULT_5_VALUE;
    }
    return (unsigned short)0;
}

/** User stub definition for function: int CalendarToSeconds(void) */
EXTERN_C_LINKAGE int CalendarToSeconds () ;
EXTERN_C_LINKAGE int CppTest_Stub_CalendarToSeconds (void) 
{
    return 0;
}

/** User stub definition for function: UINT16_T GetSpinAcc(void) */
EXTERN_C_LINKAGE UINT16_T GetSpinAcc () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetSpinAcc (void) 
{
    return (unsigned short)0;
}

/** User stub definition for function: UINT8_T GetMeaDisRateHigh(void) */
EXTERN_C_LINKAGE UINT8_T GetMeaDisRateHigh () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetMeaDisRateHigh (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: void InitSleepAwakeData(void) */
EXTERN_C_LINKAGE void InitSleepAwakeData () ;
EXTERN_C_LINKAGE void CppTest_Stub_InitSleepAwakeData (void) 
{
}

/** User stub definition for function: int SetIsWashFinishPoint(void) */
EXTERN_C_LINKAGE int SetIsWashFinishPoint () ;
EXTERN_C_LINKAGE int CppTest_Stub_SetIsWashFinishPoint (void) 
{
    return 0;
}

/** User stub definition for function: UINT8_T GetOutRunForward(void) */
EXTERN_C_LINKAGE UINT8_T GetOutRunForward () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetOutRunForward (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: int AddCarWashErrRsn(void) */
EXTERN_C_LINKAGE int AddCarWashErrRsn () ;
EXTERN_C_LINKAGE int CppTest_Stub_AddCarWashErrRsn (void) 
{
    return 0;
}

/** User stub definition for function: UINT32_T GetAtpFamOpenDoorTimeMax(void) */
EXTERN_C_LINKAGE UINT32_T GetAtpFamOpenDoorTimeMax () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetAtpFamOpenDoorTimeMax (void) 
{
    return 0U;
}

/** User stub definition for function: void AddSlpAwkTestTimerCount(UINT8_T) */
EXTERN_C_LINKAGE void AddSlpAwkTestTimerCount (UINT8_T testid) ;
EXTERN_C_LINKAGE void CppTest_Stub_AddSlpAwkTestTimerCount (UINT8_T testid) 
{
}

/** User stub definition for function: LOC_INFO * GetSlpAwkLocInfoData(void) */
EXTERN_C_LINKAGE SleepAwakeLocInfoStruct_T * GetSlpAwkLocInfoData () ;
EXTERN_C_LINKAGE SleepAwakeLocInfoStruct_T * CppTest_Stub_GetSlpAwkLocInfoData (void) 
{
    return (SleepAwakeLocInfoStruct_T *)0;
}

/** User stub definition for function: UINT32_T GetAtpRevOpenDoorTimeMax(void) */
EXTERN_C_LINKAGE UINT32_T GetAtpRevOpenDoorTimeMax () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetAtpRevOpenDoorTimeMax (void) 
{
    if (IsFamAutoReverseSpyTestCase())
    {
        return 10U;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcFamReverse_24"))
	{
		return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcFamReverse_21"))
	{
		return 2;
	}
    return 0U;
}

/** User stub definition for function: UINT8_T GetAtpFunCcuReset(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpFunCcuReset () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpFunCcuReset (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: int CPPTEST_CALL_STUB_CALLBACK(void) */
EXTERN_C_LINKAGE int CPPTEST_CALL_STUB_CALLBACK () ;
EXTERN_C_LINKAGE int CppTest_Stub_CPPTEST_CALL_STUB_CALLBACK (void) 
{
    return 0;
}

/** User stub definition for function: UINT8_T FAOExit2RMJuge(void) */
EXTERN_C_LINKAGE UINT8_T FAOExit2RMJuge () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_FAOExit2RMJuge (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: int vStopSupervision(void) */
EXTERN_C_LINKAGE int vStopSupervision () ;
EXTERN_C_LINKAGE int CppTest_Stub_vStopSupervision (void) 
{
    return 0;
}

/** User stub definition for function: UINT16_T GetPtOperatStopIdBySpSecAndDir(const UINT16_T, UINT16_T) */
EXTERN_C_LINKAGE UINT16_T GetPtOperatStopIdBySpSecAndDir (const UINT16_T stopSecId, UINT16_T Dir) ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetPtOperatStopIdBySpSecAndDir (const UINT16_T stopSecId, UINT16_T Dir) 
{
    return (unsigned short)0;
}

/** User stub definition for function: void SetSlpAwkSleepSta(UINT8_T) */
EXTERN_C_LINKAGE void SetSlpAwkSleepSta (UINT8_T sta) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetSlpAwkSleepSta (UINT8_T sta) 
{
}

/** User stub definition for function: SleepAwakeDataStruct_T * GetSleepAwakeData(void) */
EXTERN_C_LINKAGE SleepAwakeDataStruct_T * GetSleepAwakeData () ;
EXTERN_C_LINKAGE SleepAwakeDataStruct_T * CppTest_Stub_GetSleepAwakeData (void) 
{
    return (SleepAwakeDataStruct_T *)0;
}

/** User stub definition for function: UINT8_T GetSlpAwkAwakeSta(void) */
EXTERN_C_LINKAGE UINT8_T GetSlpAwkAwakeSta () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetSlpAwkAwakeSta (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_35"))
    {
        return UINT8_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_33"))
    {
        return UINT8_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_34"))
    {
        return UINT8_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_23"))
    {
        return UINT8_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_24"))
    {
        return UINT8_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_25"))
    {
        return UINT8_NULL;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_20"))
    {
        return AWAKE_STA_THR;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_21"))
    {
        return AWAKE_STA_THR;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_22"))
    {
        return AWAKE_STA_THR;
    }
    return (unsigned char)0;
}

/** User stub definition for function: void SetSlpAwkCmd(UINT8_T) */
EXTERN_C_LINKAGE void SetSlpAwkCmd (UINT8_T cmd) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetSlpAwkCmd (UINT8_T cmd) 
{
}

/** User stub definition for function: UINT8_T GetAwakeSTestContinue(UINT8_T) */
EXTERN_C_LINKAGE UINT8_T GetAwakeSTestContinue (UINT8_T testId) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAwakeSTestContinue (UINT8_T testId) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetSlpAwkLocValid(void) */
EXTERN_C_LINKAGE UINT8_T GetSlpAwkLocValid () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetSlpAwkLocValid (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetSlpAwkSleepSta(void) */
EXTERN_C_LINKAGE UINT8_T GetSlpAwkSleepSta () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetSlpAwkSleepSta (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: void SetSlpAwkSleepCond(UINT8_T) */
EXTERN_C_LINKAGE void SetSlpAwkSleepCond (UINT8_T cond) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetSlpAwkSleepCond (UINT8_T cond) 
{
}

/** User stub definition for function: UINT32_T GetLongFromBuffer(const UINT8_T *, EndianOrderType_T) */
EXTERN_C_LINKAGE UINT32_T GetLongFromBuffer (const UINT8_T  bufferPtr[], EndianOrderType_T endianOrder) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetLongFromBuffer (const UINT8_T  bufferPtr[], EndianOrderType_T endianOrder) 
{
    return 0U;
}

/** User stub definition for function: UINT8_T GetOneStopPoint(const Location_T *, const Location_T *, const Location_T *, const Location_T *, UINT8_T *, LimitObjFront_T *, UINT8_T *, LimitObjBetweenStruct_T *) */
EXTERN_C_LINKAGE UINT8_T GetOneStopPoint (const Location_T * headloc, const Location_T * tailLoc, const Location_T * maStartLoc, const Location_T * maEndLoc, UINT8_T * lmtObjectNumFront, LimitObjFront_T  pLmtObjFront[], UINT8_T * lmtObjectNumBetwn, LimitObjBetweenStruct_T * pLmtObjBtw) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetOneStopPoint (const Location_T * headloc, const Location_T * tailLoc, const Location_T * maStartLoc, const Location_T * maEndLoc, UINT8_T * lmtObjectNumFront, LimitObjFront_T  pLmtObjFront[], UINT8_T * lmtObjectNumBetwn, LimitObjBetweenStruct_T * pLmtObjBtw) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetAwakeSTestAffect(UINT8_T) */
EXTERN_C_LINKAGE UINT8_T GetAwakeSTestAffect (UINT8_T testId) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAwakeSTestAffect (UINT8_T testId) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT16_T GetAtpEbIntervalTime(void) */
EXTERN_C_LINKAGE UINT16_T GetAtpEbIntervalTime () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetAtpEbIntervalTime (void) 
{
    return (unsigned short)0;
}

/** User stub definition for function: UINT32_T GetSlpAwkLocCrc(void) */
EXTERN_C_LINKAGE UINT32_T GetSlpAwkLocCrc () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetSlpAwkLocCrc (void) 
{
    return 0U;
}

/** User stub definition for function: UINT8_T GetSlpAwkAwakeStep(void) */
EXTERN_C_LINKAGE UINT8_T GetSlpAwkAwakeStep () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetSlpAwkAwakeStep (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetAwakeLocalSTestEnable(UINT8_T) */
EXTERN_C_LINKAGE UINT8_T GetAwakeLocalSTestEnable (UINT8_T testId) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAwakeLocalSTestEnable (UINT8_T testId) 
{
    return (unsigned char)0;
}

/** User stub definition for function: void SetSlpAwkAwakeSta(UINT8_T) */
EXTERN_C_LINKAGE void SetSlpAwkAwakeSta (UINT8_T sta) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetSlpAwkAwakeSta (UINT8_T sta) 
{
}

/** User stub definition for function: UINT8_T GetSlpAwkSleepCond(void) */
EXTERN_C_LINKAGE UINT8_T GetSlpAwkSleepCond () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetSlpAwkSleepCond (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetSlpAwkCmd(void) */
EXTERN_C_LINKAGE UINT8_T GetSlpAwkCmd () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetSlpAwkCmd (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT32_T GetAtpDoorOpenCloseTime(void) */
EXTERN_C_LINKAGE UINT32_T GetAtpDoorOpenCloseTime () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetAtpDoorOpenCloseTime (void) 
{
    return 0U;
}

/** User stub definition for function: UINT8_T GetAwakeOppoSTestEnable(UINT8_T) */
EXTERN_C_LINKAGE UINT8_T GetAwakeOppoSTestEnable (UINT8_T testId) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAwakeOppoSTestEnable (UINT8_T testId) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetSpdSmoothNum(void) */
EXTERN_C_LINKAGE UINT8_T GetSpdSmoothNum () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetSpdSmoothNum (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: void SetSlpAwkLocCrc(UINT32_T) */
EXTERN_C_LINKAGE void SetSlpAwkLocCrc (UINT32_T crc) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetSlpAwkLocCrc (UINT32_T crc) 
{
}

/** User stub definition for function: UINT8_T GetAtpLocBaliRadiationRadius(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpLocBaliRadiationRadius () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpLocBaliRadiationRadius (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT32_T GetAwakeSTestTimeMax(UINT8_T) */
EXTERN_C_LINKAGE UINT32_T GetAwakeSTestTimeMax (UINT8_T testId) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetAwakeSTestTimeMax (UINT8_T testId) 
{
    return 0U;
}

/** User stub definition for function: void SetSlpAwkLocValid(UINT8_T) */
EXTERN_C_LINKAGE void SetSlpAwkLocValid (UINT8_T locValid) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetSlpAwkLocValid (UINT8_T locValid) 
{
}

/** User stub definition for function: UINT8_T GetSlpAwkSleepStep(void) */
EXTERN_C_LINKAGE UINT8_T GetSlpAwkSleepStep () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetSlpAwkSleepStep (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_21"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_22"))
    {
		return MA_VALID_YES;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetMaValid(void) */
EXTERN_C_LINKAGE UINT8_T GetMaValid () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetMaValid (void) 
{
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_46"))
    {
        return MA_VALID_NO;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_47")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_48")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_49")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_50")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_51")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_52")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_53")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_54")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_55")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_56"))
    {
        return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_ExitAutoSecFunc_01"))
    {
		return MA_VALID_NO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_ExitAutoSecFunc_02"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_ExitAutoSecFunc_03"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_ExitAutoSecFunc_04"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_ExitAutoSecFunc_05"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_ExitAutoSecFunc_06"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_InCtcExitAreaILcToCtcChk_9"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_InCtcExitAreaILcToCtcChk_10"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_39"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_40"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_41"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_42"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_43"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_34"))
    {
		return MA_VALID_NO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_35"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_36"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_37"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_25"))
    {
		return MA_VALID_NO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_26"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_27"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_28"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_29"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_30"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_31"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_32"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_33"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_39"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_40"))
    {
		return MA_VALID_NO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_41"))
    {
		return MA_VALID_NO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_43"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_45"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_46"))
    {
		return MA_VALID_NO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_44"))
    {
		return MA_VALID_NO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAndAMModeCheck_22"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_23"))
    {
		return MA_VALID_NO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_24"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_25"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_47"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_48"))
    {
		return MA_VALID_NO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_49"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_50"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_51"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_52"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_54"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_53"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamExitCmCheck_03"))
	{ 
      	return MA_VALID_NO;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamExitCmCheck_04"))
	{ 
      	return 1;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_21"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_22"))
    {
		return MA_VALID_YES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAndAMModeCheck_20"))
    {
		return MA_VALID_NO;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetAomRcvAwakeMaintainBtn(void) */
EXTERN_C_LINKAGE UINT8_T GetAomRcvAwakeMaintainBtn () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAomRcvAwakeMaintainBtn (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_13"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TractionBrakeHandle_test_EBProcFunc_14"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_73"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_117"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_04"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_32"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_24"))
    {
        return 0x55u;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_25"))
    {
        return 0xAAu;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT32_T CamExitCmCheck(void) */
EXTERN_C_LINKAGE UINT32_T CamExitCmCheck (void) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_CamExitCmCheck (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_30"))
    {
        return DEFAULT_1_VALUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_22"))
    {
        return 0U;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_23"))
    {
        return 1U;

    }
    return 0U;

}

/** User stub definition for function: UINT8_T GetMaEndMaType(void) */
EXTERN_C_LINKAGE UINT8_T GetMaEndMaType () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetMaEndMaType (void) 
{
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_48"))
    {
        return ZC_VOBC_MA_END_REVERSE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_49"))
    {
        return ZC_VOBC_MA_END_PASS;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_50"))
    {
        return ZC_VOBC_MA_END_DEFAULT;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_0")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_1")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_2")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_3"))
    {
        return ZC_VOBC_MA_END_REVERSE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_4")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_5")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_6")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_7"))
    {
        return ZC_VOBC_MA_END_DEFAULT;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseTypeChk_8"))
    {
        return DEFAULT_ZERO;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_4"))
    {
        ++g_AmAutoReverse_GetMaEndMaTypeCalls;
        return ZC_VOBC_MA_END_DEFAULT;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_5")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_6")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_7")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_8")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_9")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_10")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_11")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_12")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_13")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_14")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_15")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmAutoReverse_16"))
    {
        ++g_AmAutoReverse_GetMaEndMaTypeCalls;
        return ZC_VOBC_MA_END_REVERSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_BackSecInChk"))
	{
	return ZC_VOBC_MA_END_BACK;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_BackSecInChk_8"))
	{
	return ZC_VOBC_MA_END_DEFAULT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_TrainBackSecHandle_test_BackSecInChk_9"))
	{
	return ZC_VOBC_MA_END_BACK;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_35"))
	{
	return ZC_VOBC_MA_END_DEFAULT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_36"))
	{
	return ZC_VOBC_MA_END_REVERSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_37"))
	{
	return ZC_VOBC_MA_END_REVERSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_28"))
	{
	return ZC_VOBC_MA_END_REVERSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_29"))
	{
	return ZC_VOBC_MA_END_DEFAULT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_30"))
	{
	return ZC_VOBC_MA_END_DEFAULT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_31"))
	{
	return ZC_VOBC_MA_END_DEFAULT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_32"))
	{
	return ZC_VOBC_MA_END_DEFAULT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_33"))
	{
	return ZC_VOBC_MA_END_DEFAULT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_27"))
	{
	return ZC_VOBC_MA_END_DEFAULT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_28"))
	{
	return ZC_VOBC_MA_END_DEFAULT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_30"))
	{
	return ZC_VOBC_MA_END_DEFAULT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_31"))
	{
	return ZC_VOBC_MA_END_REVERSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_32"))
	{
	return ZC_VOBC_MA_END_REVERSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_33"))
	{
	return ZC_VOBC_MA_END_REVERSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_34"))
	{
	return ZC_VOBC_MA_END_REVERSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_24"))
	{
	return ZC_VOBC_MA_END_REVERSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_25")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_26")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_27")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_28")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_29")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_30")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_31")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_32"))
	{
	return ZC_VOBC_MA_END_DEFAULT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_22")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_23")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_24")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_25"))
	{
	return ZC_VOBC_MA_END_REVERSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_ReverseInChk_26"))
	{
	return ZC_VOBC_MA_END_DEFAULT;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_47"))
	{
	return ZC_VOBC_MA_END_REVERSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_48"))
	{
	return ZC_VOBC_MA_END_REVERSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_49"))
	{
	return ZC_VOBC_MA_END_REVERSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_50"))
	{
	return ZC_VOBC_MA_END_REVERSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_51"))
	{
	return ZC_VOBC_MA_END_REVERSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_52"))
	{
	return ZC_VOBC_MA_END_REVERSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_54"))
	{
	return ZC_VOBC_MA_END_BACK;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_RMModeProcess_53"))
	{
	return ZC_VOBC_MA_END_BACK;
	}
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRcvAtoCabDoorCtrlMode(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvAtoCabDoorCtrlMode () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvAtoCabDoorCtrlMode (void) 
{
    if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_12"))
    {
        return ATO_DOORCTLMODE_AA;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_13"))
	{
	return ATO_DOORCTLMODE_AA;
	}
    return (unsigned char)0;
}



/** User stub definition for function: UINT16_T GetMaLen(void) */
EXTERN_C_LINKAGE UINT16_T GetMaLen () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetMaLen (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAndAMModeCheck_22"))
	{
	return DEFAULT_1_VALUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMAndAMModeCheck_21"))
	{
	return DEFAULT_1_VALUE;
	}
    return (unsigned short)0;
}

/** User stub definition for function: UINT8_T GetMarMidSideMHookConSttsLst(void) */
EXTERN_C_LINKAGE UINT8_T GetMarMidSideMHookConSttsLst () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetMarMidSideMHookConSttsLst (void) 
{
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetMarMidSideMHookConStts(void) */
EXTERN_C_LINKAGE UINT8_T GetMarMidSideMHookConStts () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetMarMidSideMHookConStts (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_19"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_20"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_21"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_15"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_NonActiveProcess_16"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModSeHandle_test_NonActiveProcess_17"))
    {
        return ATP_FALSE;
    }
    return (unsigned char)0;
}

MaDataStruct_T _ma1={0};
/** User stub definition for function: MaDataStruct_T * GetMaData(void) */
EXTERN_C_LINKAGE MaDataStruct_T * GetMaData () ;
EXTERN_C_LINKAGE MaDataStruct_T * CppTest_Stub_GetMaData (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_23"))
    {
		_ma1.maLen = 0U;
        return &_ma1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_24"))
    {
		_ma1.maLen = 0U;
        return &_ma1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitRmCheck_25"))
    {
		_ma1.maLen = 1U;
        return &_ma1;
    }
}

/** User stub definition for function: UINT8_T GetStationArea(void) */
EXTERN_C_LINKAGE UINT8_T GetStationArea () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetStationArea (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_98"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_99"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_100"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_101"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_95"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_94"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_73"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_74"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_75"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainOutStation_7"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainOutStation_8"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainOutStation_9"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_81"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_82"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_83"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_84"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_85"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_86"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_87"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_88"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_89"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_90"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_91"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_97"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_92"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_93"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_74"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_75"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_76"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_77"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_78"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_79"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_80"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetFaoSpecialCtrl(void) */
EXTERN_C_LINKAGE UINT8_T GetFaoSpecialCtrl () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetFaoSpecialCtrl (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_78"))
    {
        return ATO_SPECIAL_CTRL_DOOR_OPEN;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_79"))
    {
        return ATO_FAO_NEXT_STATION;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_80"))
    {
        return ATO_SPECIAL_CTRL_DOOR_OPEN;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetFrontOfTheGaragePoint(void) */
EXTERN_C_LINKAGE UINT8_T GetFrontOfTheGaragePoint () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetFrontOfTheGaragePoint (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_98"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_99"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_100"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_101"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_44"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_45"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_46"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_47"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_48"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_49"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_50"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_51"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_52"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_53"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_54"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_55"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_56"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_57"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_58"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_59"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_60"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_61"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_62"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_63"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_63"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_64"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_84"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_85"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_86"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_87"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_97"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_92"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_93"))
    {
        return ATP_FALSE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetRearEndWashPoint(void) */
EXTERN_C_LINKAGE UINT8_T GetRearEndWashPoint () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRearEndWashPoint (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_65"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_66"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_90"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_91"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetFrontEndWashPoint(void) */
EXTERN_C_LINKAGE UINT8_T GetFrontEndWashPoint () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetFrontEndWashPoint (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_88"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_89"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetInttCouplPoint(void) */
EXTERN_C_LINKAGE UINT8_T GetInttCouplPoint () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetInttCouplPoint (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_98"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_99"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_100"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_92"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_93"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetTrainStopSteady(void) */
EXTERN_C_LINKAGE UINT8_T GetTrainStopSteady () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetTrainStopSteady (void) 
{
    if (CppTest_IsCurrentTestCase(
            "TestSuite_ProtectionHandle_test_CheckJumpProtection_48"))
    {
        return ATP_FALSE;
    }
    if (IsCheckJumpProtectionCoverageTestCase())
    {
        return ATP_TRUE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_45"))
    {
        return ATP_FALSE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_46")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_47")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_48")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_49")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_50")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_51")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_52")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_53")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_54")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_55")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_56"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_89"))
    {
        return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_88"))
    {
        return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_001"))
    {
		static int gt_1 = 0;
		gt_1++;
		if(gt_1 == 1) 
		{
			return ATP_TRUE;
		}
		else  
		{
			return ATP_FALSE;
		}
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_002"))
    {
		static int gt_2 = 0;
		gt_2++;
		if(gt_2 == 1) 
		{
			return ATP_TRUE;
		}
		else  
		{
			return ATP_FALSE;
		}
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_003"))
    {
		static int gt_3 = 0;
		gt_3++;
		if(gt_3 == 1 || gt_3 == 2) 
		{
			return ATP_TRUE;
		}
		else  
		{
			return ATP_FALSE;
		}
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_004"))
    {
		static int gt_4 = 0;
		gt_4++;
		if(gt_4 == 1 || gt_4 == 2) 
		{
			return ATP_TRUE;
		}
		else  
		{
			return ATP_FALSE;
		}
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_44"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_41"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_43"))
    {
        static int dh_1 = 0;
		dh_1++;
		if(dh_1 == 1)
		{
			return ATP_FALSE;
		}
		else
		{ 
			return ATP_TRUE;
		}
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_84"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_85"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_86"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_76"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_77"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_67"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_68"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_69"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_43"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_44"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_45"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_46"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_47"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_48"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_49"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_50"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_51"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_52"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_53"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_54"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_55"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_56"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_57"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_58"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_59"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_60"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_47"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_34"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_35"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_DoorHibFunc_36"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_7"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_8"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_9"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_10"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_11"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_12"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_13"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_14"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_15"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_16"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_17"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_18"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_19"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_20"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_21"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_22"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_23"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_24"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_25"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_26"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_27"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_28"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_29"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_30"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_31"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_32"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_33"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_34"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_35"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_36"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_37"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_38"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_39"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_40"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_41"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_42"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_43"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_44"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_45"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_46"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_47"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_44"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_45"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_46"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_47"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_48"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_49"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_50"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_51"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_52"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_53"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_54"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_55"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_56"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_57"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_58"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_59"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_60"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_61"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_62"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_63"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_64"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibFunc_02"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibFunc_04"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EscDoorHibFunc_05"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetFunc_03"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetFunc_04"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetFunc_05"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CcuResetFunc_06"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainOutStation_7"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainOutStation_8"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainOutStation_9"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorFunc_03"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorFunc_04"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BoardingIndicatorFunc_05"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_41"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_42"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_43"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_38"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_39"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_40"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_34"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_35"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_36"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_37"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_25"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_26"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_27"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_28"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_29"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_30"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_31"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_32"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlRevFunc_33"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_30"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_31"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_32"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_33"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_34"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_35"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_36"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_37"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_38"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_39"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_40"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_41"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_42"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_43"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_44"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_45"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_46"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_24")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_25")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_26")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_27")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_28")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_29")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_30")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_31")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_32"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_24"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_25"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_26"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_27"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_28"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_IdleRevFunc_29"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_22"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_23"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetMaStartDir(void) */
EXTERN_C_LINKAGE UINT8_T GetMaStartDir () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetMaStartDir (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_4"))
	{
		return DEFAULT_ZERO;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_5")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_7")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_9")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_10"))
	{
		return LINESEG_SAME_DIR;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_6")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAnyLocReverse_8"))
	{
		return LINESEG_CONVER_DIR;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_25"))
    {
        return SEG_LOGIC_DIR_DOWN;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_26"))
    {
        return SEG_LOGIC_DIR_UP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_27"))
    {
        return SEG_LOGIC_DIR_UP;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_28")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_29")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_30")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_31")||CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FaoReverseLocDirByMa_32"))
    {
        return SEG_LOGIC_DIR_DOWN;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT32_T GetDoorRevOpenDoorTimer(void) */
EXTERN_C_LINKAGE UINT32_T GetDoorRevOpenDoorTimer () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetDoorRevOpenDoorTimer (void) 
{
    if (CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_7")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_9")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_13")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_14")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_15")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_16")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_FamAutoReverse_17"))
    {
        return 5U;
    }
    if (IsFamAutoReverseSpyTestCase())
    {
        return 10U;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcFamReverse_21"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlVobcFamReverse_24"))
    {
        return 0;
    }
    return 0U;
}

/** User stub definition for function: UINT8_T GetTailInStationArea(void) */
EXTERN_C_LINKAGE UINT8_T GetTailInStationArea () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetTailInStationArea (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_73"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_74"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_75"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainOutStation_7"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainOutStation_8"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JudgeTrainOutStation_9"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetPartOfTrainInStationArea(void) */
EXTERN_C_LINKAGE UINT8_T GetPartOfTrainInStationArea () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPartOfTrainInStationArea (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_90"))
    {
        return 1;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_81"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_70"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_71"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_72"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_42"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_43"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_44"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_45"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_46"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_47"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_48"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_49"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_50"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_51"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_52"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_53"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_54"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_55"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_56"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_57"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_58"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_59"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_60"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EsbPrtFunc_3"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EsbPrtFunc_4"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_EsbPrtFunc_5"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT32_T GetSysCarWashErrNo(void) */
EXTERN_C_LINKAGE UINT32_T GetSysCarWashErrNo () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetSysCarWashErrNo (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CarWashFunc_68"))
    {
        return DEFAULT_1_VALUE;
    }
    return 0U;
}

/** User stub definition for function: UINT8_T GetPartOfTrainInSleepAwakeArea(void) */
EXTERN_C_LINKAGE UINT8_T GetPartOfTrainInSleepAwakeArea () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPartOfTrainInSleepAwakeArea (void) 
{
    if (CppTest_IsCurrentTestCase(
            "TestSuite_ProtectionHandle_test_CheckJumpProtection_52"))
    {
        return ATP_TRUE;
    }
    if (IsCheckJumpProtectionCoverageTestCase())
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_42"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_43"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_44"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_45"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_46"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_47"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_48"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_49"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_50"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_51"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_52"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_53"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_54"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_55"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_56"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_57"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_58"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_59"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_60"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_10"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_11"))
    {
        return ATP_FALSE;
    }

	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_12"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_13"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_14"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_15"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_16"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_17"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_18"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_19"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_20"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_21"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_22"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_23"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_24"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_25"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_26"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_27"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_28"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_29"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_30"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_31"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_32"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_33"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_34"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_35"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_36"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_37"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_38"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_39"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_40"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_41"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_42"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_43"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_44"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_45"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_46"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_47"))
    {
        return ATP_FALSE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetPartOfTrainInRetainMarArea(void) */
EXTERN_C_LINKAGE UINT8_T GetPartOfTrainInRetainMarArea () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPartOfTrainInRetainMarArea (void) 
{
    if (CppTest_IsCurrentTestCase(
            "TestSuite_ProtectionHandle_test_CheckJumpProtection_53"))
    {
        return ATP_TRUE;
    }
    if (IsCheckJumpProtectionCoverageTestCase())
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_42"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_43"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_44"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_45"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_46"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_47"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_48"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_49"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_50"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_51"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_52"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_53"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_54"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_55"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_56"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_57"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_58"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_59"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_60"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_10"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_11"))
    {
        return ATP_FALSE;
    }

	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_12"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_13"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_14"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_15"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_16"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_17"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_18"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_19"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_20"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_21"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_22"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_23"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_24"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_25"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_26"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_27"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_28"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_29"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_30"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_31"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_32"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_33"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_34"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_35"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_36"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_37"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_38"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_39"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_40"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_41"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_42"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_43"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_44"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_45"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_46"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_47"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetPrtJumpAllowCmd(void) */
EXTERN_C_LINKAGE UINT8_T GetPrtJumpAllowCmd () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPrtJumpAllowCmd (void) 
{
    if (CppTest_IsCurrentTestCase(
            "TestSuite_ProtectionHandle_test_CheckJumpProtection_59"))
    {
        return ATP_FALSE;
    }
    if (IsCheckJumpProtectionCoverageTestCase())
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_81"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_82"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_40"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_36"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_37"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_38"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_39"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_40"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_41"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_42"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_43"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_44"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_45"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_46"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_47"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetPrtJumpStep(void) */
EXTERN_C_LINKAGE UINT8_T GetPrtJumpStep () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetPrtJumpStep (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_90"))
    {
        return 2;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_87"))
    {
        return STEPSIX;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_78"))
    {
        return STEPSIX;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_79"))
    {
        return STEPSIX;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_80"))
    {
        return STEPSIX;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_81"))
    {
        return STEPSIX;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_82"))
    {
        return STEPSIX;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_83"))
    {
        return STEPFOUR;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_84"))
    {
        return STEPFOUR;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_85"))
    {
        return STEPFOUR;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_86"))
    {
        static int st_1 = 0;
		st_1++;
		if(st_1 == 1)
		{
			return STEPZERO;
		}
		else 
		{
			return STEPFOUR;
		}
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_70"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_71"))
    {
        return STEPSIX;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_72"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_66"))
    {
        return STEPTHREE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_67"))
    {
        return STEPTHREE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_68"))
    {
        return STEPTHREE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_69"))
    {
		static int st = 0;
		st++;
		if(st == 1)
		{
			return STEPZERO;
		}
		else 
		{
			return STEPTHREE;
		}
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_61"))
    {
        return STEPTWO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_62"))
    {
        return STEPTWO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_63"))
    {
        return STEPTWO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_64"))
    {
        return STEPTWO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_65"))
    {
        return STEPTWO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_40"))
    {
        return STEPZERO;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_41"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_42"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_43"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_44"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_45"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_46"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_47"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_48"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_49"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_50"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_51"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_52"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_53"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_54"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_55"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_56"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_57"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_58"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_59"))
    {
        return STEPONE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_60"))
    {
        return STEPONE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT8_T GetJumpAllowPoint(void) */
EXTERN_C_LINKAGE UINT8_T GetJumpAllowPoint () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetJumpAllowPoint (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_89"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_88"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_76"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_77"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_46"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_47"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_48"))
    {
        return ATP_TRUE;
    }

	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_49"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_50"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_51"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_52"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_53"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_54"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_55"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_56"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_57"))
    {
        return ATP_FALSE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_58"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_59"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_60"))
    {
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT32_T GetSysJumpErrNo(void) */
EXTERN_C_LINKAGE UINT32_T GetSysJumpErrNo () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetSysJumpErrNo (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_81"))
    {
        return JUMP_OVER_MAX_TIMES;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_JumpPrtFunc_82"))
    {
        return JUMP_OVER_MAX_TIMES;
    }
    return 0U;
}

/** User stub definition for function: void SetTrainLeftDoorHib(UINT8_T) */
EXTERN_C_LINKAGE void SetTrainLeftDoorHib (UINT8_T TrainLeftDoorHbi) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetTrainLeftDoorHib (UINT8_T TrainLeftDoorHbi) 
{
}

/** User stub definition for function: AwakeSyncTestRsnStruct_T * GetAwakeSyncTestRsnStru(void) */
EXTERN_C_LINKAGE AwakeSyncTestRsnStruct_T * GetAwakeSyncTestRsnStru () ;
EXTERN_C_LINKAGE AwakeSyncTestRsnStruct_T * CppTest_Stub_GetAwakeSyncTestRsnStru (void) 
{
    return (AwakeSyncTestRsnStruct_T *)0;
}

/** User stub definition for function: UINT8_T GetMarSaveDataChgFlag(void) */
EXTERN_C_LINKAGE UINT8_T GetMarSaveDataChgFlag () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetMarSaveDataChgFlag (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_18"))
    { 
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_EUMModeprocess_17"))
    { 
        return ATP_TRUE;
    }
    return (unsigned char)0;
}

/** User stub definition for function: UINT16_T GetAtpBackRunJumpSpeedLimit(void) */
EXTERN_C_LINKAGE UINT16_T GetAtpBackRunJumpSpeedLimit () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetAtpBackRunJumpSpeedLimit (void) 
{
    return (unsigned short)0;
}

/** User stub definition for function: UINT16_T GetSpksIdByDevId(UINT32_T) */
EXTERN_C_LINKAGE UINT16_T GetSpksIdByDevId (UINT32_T devId) ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetSpksIdByDevId (UINT32_T devId) 
{
    return (unsigned short)0;
}

/** User stub definition for function: UINT16_T GetAtpDecoupleCmdTimeout(void) */
EXTERN_C_LINKAGE UINT16_T GetAtpDecoupleCmdTimeout () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetAtpDecoupleCmdTimeout (void) 
{
    return (unsigned short)0;
}

/** User stub definition for function: int CcuResetFunc(void) */
EXTERN_C_LINKAGE int CcuResetFunc () ;
EXTERN_C_LINKAGE int CppTest_Stub_CcuResetFunc (void) 
{
    return 0;
}

/** User stub definition for function: UINT32_T GetAtpAtoConfigCrc(void) */
EXTERN_C_LINKAGE UINT32_T GetAtpAtoConfigCrc () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetAtpAtoConfigCrc (void) 
{
    return 0U;
}

/** User stub definition for function: int ReverseInChk(void) */
EXTERN_C_LINKAGE int ReverseInChk () ;
EXTERN_C_LINKAGE int CppTest_Stub_ReverseInChk (void) 
{
    return 0;
}

/** User stub definition for function: UINT8_T GetSpksObstInfo(const Location_T *, const Location_T *, const Location_T *, const Location_T *, const UINT8_T, UINT8_T *, LimitObjFront_T *, UINT8_T *, LimitObjBetweenStruct_T *) */
EXTERN_C_LINKAGE UINT8_T GetSpksObstInfo (const Location_T * headloc, const Location_T * tailLoc, const Location_T * maStartLoc, const Location_T * maEndLoc, const UINT8_T maEndType, UINT8_T * spksObsNumFront, LimitObjFront_T  pSpksObsFront[], UINT8_T * spksObsNumBetwn, LimitObjBetweenStruct_T  pSpksObsBtw[]) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetSpksObstInfo (const Location_T * headloc, const Location_T * tailLoc, const Location_T * maStartLoc, const Location_T * maEndLoc, const UINT8_T maEndType, UINT8_T * spksObsNumFront, LimitObjFront_T  pSpksObsFront[], UINT8_T * spksObsNumBetwn, LimitObjBetweenStruct_T  pSpksObsBtw[]) 
{
    return (unsigned char)0;
}

/** User stub definition for function: int FaoReverseLocDirByMa(void) */
EXTERN_C_LINKAGE int FaoReverseLocDirByMa () ;
EXTERN_C_LINKAGE int CppTest_Stub_FaoReverseLocDirByMa (void) 
{
    return 0;
}

/** User stub definition for function: UINT32_T GetAtpAomConfigCrc(void) */
EXTERN_C_LINKAGE UINT32_T GetAtpAomConfigCrc () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetAtpAomConfigCrc (void) 
{
    return 0U;
}

/** User stub definition for function: UINT8_T GetAtpBackRunRmCfg(void) */
EXTERN_C_LINKAGE UINT8_T GetAtpBackRunRmCfg () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetAtpBackRunRmCfg (void) 
{
    if (CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_46")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_49"))
    {
        return ATP_TRUE;
    }
    if (CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_47")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_48"))
    {
        return ATP_FALSE;
    }
    return (unsigned char)0;
}

UINT32_T g_BackPrtFuncTarget_SetPrtBackEnableTagCalls;
UINT8_T g_BackPrtFuncTarget_SetPrtBackEnableTagValue;

void ResetBackPrtFuncTargetStubSpy(void)
{
    g_BackPrtFuncTarget_SetPrtBackEnableTagCalls = 0U;
    g_BackPrtFuncTarget_SetPrtBackEnableTagValue = DEFAULT_ZERO;
}

/** User stub definition for function: void SetPrtBackEnableTag(const UINT8_T) */
EXTERN_C_LINKAGE void SetPrtBackEnableTag (const UINT8_T PrtBackEnableTag) ;
EXTERN_C_LINKAGE void CppTest_Stub_SetPrtBackEnableTag (const UINT8_T PrtBackEnableTag)
{
    if (CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_41")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_42")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_43")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_44")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_45")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_46")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_47")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_48")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_49")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_BackPrtFunc_50"))
    {
        ++g_BackPrtFuncTarget_SetPrtBackEnableTagCalls;
        g_BackPrtFuncTarget_SetPrtBackEnableTagValue = PrtBackEnableTag;
    }
}

/** User stub definition for function: const FLEX_MARSH_AREA_T * GetFlexMarshAreaDatabyDevId(UINT32_T) */
EXTERN_C_LINKAGE const FLEX_MARSH_AREA_T * GetFlexMarshAreaDatabyDevId (UINT32_T marshDeviceId) ;
EXTERN_C_LINKAGE const FLEX_MARSH_AREA_T * CppTest_Stub_GetFlexMarshAreaDatabyDevId (UINT32_T marshDeviceId) 
{
    return (const FLEX_MARSH_AREA_T *)0;
}

/** User stub definition for function: int CtrlVOBCReverseCBTC(void) */
EXTERN_C_LINKAGE int CtrlVOBCReverseCBTC () ;
EXTERN_C_LINKAGE int CppTest_Stub_CtrlVOBCReverseCBTC (void) 
{
    return 0;
}

/** User stub definition for function: UINT16_T GetVobcIdConfigDiamFailNum(void) */
EXTERN_C_LINKAGE UINT16_T GetVobcIdConfigDiamFailNum () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetVobcIdConfigDiamFailNum (void) 
{
    return (unsigned short)0;
}

/** User stub definition for function: UINT32_T GetVobcExternDevIdByVobcId(const UINT8_T) */
EXTERN_C_LINKAGE UINT32_T GetVobcExternDevIdByVobcId (const UINT8_T car_index) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetVobcExternDevIdByVobcId (const UINT8_T car_index) 
{
    return 0U;
}

/** User stub definition for function: UINT32_T GetFlexMarshAreaId(UINT16_T) */
EXTERN_C_LINKAGE UINT32_T GetFlexMarshAreaId (UINT16_T id) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetFlexMarshAreaId (UINT16_T id) 
{
    return 0U;
}

/** User stub definition for function: int CtrlVOBCEnterArProc(void) */
EXTERN_C_LINKAGE int CtrlVOBCEnterArProc () ;
EXTERN_C_LINKAGE int CppTest_Stub_CtrlVOBCEnterArProc (void) 
{
    return 0;
}

/** User stub definition for function: UINT16_T GetAtpBackRunStopPointDis(void) */
EXTERN_C_LINKAGE UINT16_T GetAtpBackRunStopPointDis () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetAtpBackRunStopPointDis (void) 
{
    if (CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckStopPointDistance_3")
        || CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckStopPointDistance_4"))
    {
        return 100U;
    }
    return (unsigned short)0;
}

UINT32_T g_CheckStopPointDistance_AddSysJumpErrNoCalls;
UINT32_T g_CheckStopPointDistance_AddSysJumpErrNoValue;

void ResetCheckStopPointDistanceStubSpy(void)
{
    g_CheckStopPointDistance_AddSysJumpErrNoCalls = 0U;
    g_CheckStopPointDistance_AddSysJumpErrNoValue = 0U;
}

/** User stub definition for function: void AddSysJumpErrNo(const UINT32_T) */
EXTERN_C_LINKAGE void AddSysJumpErrNo (const UINT32_T jumpErrNo) ;
EXTERN_C_LINKAGE void CppTest_Stub_AddSysJumpErrNo (const UINT32_T jumpErrNo)
{
    if (CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckStopPointDistance_3"))
    {
        ++g_CheckStopPointDistance_AddSysJumpErrNoCalls;
        g_CheckStopPointDistance_AddSysJumpErrNoValue = jumpErrNo;
    }
}

/** User stub definition for function: UINT16_T GetAtpPassiveCoupleTimeout(void) */
EXTERN_C_LINKAGE UINT16_T GetAtpPassiveCoupleTimeout () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetAtpPassiveCoupleTimeout (void) 
{
    return (unsigned short)0;
}

/** User stub definition for function: UINT32_T GetObcConfigCrc(void) */
EXTERN_C_LINKAGE UINT32_T GetObcConfigCrc () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetObcConfigCrc (void) 
{
    if (IsCtrlVOBCEnterARTargetTestCase())
    {
        return 10U;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_0"))
	{
		++g_AmCmManReverse_GetObcConfigCrcCalls;
		return 0U;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_1")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_2")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_3")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_AmCmManReverse_4"))
	{
		++g_AmCmManReverse_GetObcConfigCrcCalls;
		return 1U;
	}
    return 0U;
}

/** User stub definition for function: int CtrlVobcFamReverse(void) */
EXTERN_C_LINKAGE int CtrlVobcFamReverse () ;
EXTERN_C_LINKAGE int CppTest_Stub_CtrlVobcFamReverse (void) 
{
    return 0;
}

/** User stub definition for function: UINT8_T GetStopPointDataStrudir(const UINT16_T) */
EXTERN_C_LINKAGE UINT8_T GetStopPointDataStrudir (const UINT16_T stopPointId) ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetStopPointDataStrudir (const UINT16_T stopPointId) 
{
    return (unsigned char)0;
}

/** User stub definition for function: int CtrlVobcAutoReverse(void) */
EXTERN_C_LINKAGE int CtrlVobcAutoReverse () ;
EXTERN_C_LINKAGE int CppTest_Stub_CtrlVobcAutoReverse (void) 
{
    return 0;
}

/** User stub definition for function: UINT32_T GetAtpCamConfigCrc(void) */
EXTERN_C_LINKAGE UINT32_T GetAtpCamConfigCrc () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetAtpCamConfigCrc (void) 
{
    return 0U;
}

/** User stub definition for function: int CtrlOppoAtpReverse(void) */
EXTERN_C_LINKAGE int CtrlOppoAtpReverse () ;
EXTERN_C_LINKAGE int CppTest_Stub_CtrlOppoAtpReverse (void) 
{
    return 0;
}

/** User stub definition for function: UINT16_T GetAtpEbSpeedWash(void) */
EXTERN_C_LINKAGE UINT16_T GetAtpEbSpeedWash () ;
EXTERN_C_LINKAGE UINT16_T CppTest_Stub_GetAtpEbSpeedWash (void) 
{
    return (unsigned short)0;
}

/** User stub definition for function: UINT32_T GetStartTime(const UINT8_T, const UINT8_T) */
EXTERN_C_LINKAGE UINT32_T GetStartTime (const UINT8_T SendDevType, const UINT8_T RcvDevType) ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetStartTime (const UINT8_T SendDevType, const UINT8_T RcvDevType) 
{
    return 0U;
}

/** User stub definition for function: UINT32_T GetAtpTacConfigCrc(void) */
EXTERN_C_LINKAGE UINT32_T GetAtpTacConfigCrc () ;
EXTERN_C_LINKAGE UINT32_T CppTest_Stub_GetAtpTacConfigCrc (void) 
{
    return 0U;
}

/** User stub definition for function: SpksInfoStruct_T * GetTacSPKSStatus(void) */
EXTERN_C_LINKAGE SpksInfoStruct_T * GetTacSPKSStatus () ;
EXTERN_C_LINKAGE SpksInfoStruct_T * CppTest_Stub_GetTacSPKSStatus (void) 
{
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_24"))
	{ 
     return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_25"))
	{ 
     return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_26"))
	{ 
     return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_27"))
	{ 
     return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_28"))
	{ 
     return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_29"))
	{ 
     return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_30"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_31"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_32"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_33"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_34"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_35"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_36"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_37"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_38"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_39"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_40"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_41"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_42"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_43"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_44"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_45"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_46"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_47"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_6"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_5"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_SpksPrtFunc_1"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_SpksPrtFunc_0"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_SpksPrtFunc"))
	{ 
     return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_1"))
	{ 
     return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_2"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_3"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_4"))
	{ 
     return ATP_FALSE;
	}








	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_1"))
	{ 
     return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_2"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_3"))
	{ 
     return ATP_FALSE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_CheckJumpProtection_4"))
	{ 
     return ATP_FALSE;
	}





	if(CppTest_IsCurrentTestCase("TesstSuite_ProtectionHandle_test_SpksEbProtection"))
	{ 
     return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ProtectionHandle_test_SpksEbProtection_0"))
	{ 
     return 123;
	}

    return (SpksInfoStruct_T *)0;
}

/** User stub definition for function: UINT8_T GetRcvAomAwakeMaintainBtn(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvAomAwakeMaintainBtn () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvAomAwakeMaintainBtn (void) 
{
    if (CppTest_IsCurrentTestCase(
            "TestSuite_TractionBrakeHandle_test_EBProcFunc_15"))
    {
        return ATP_FALSE;
    }
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_97"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CamModeProcess_30"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_35"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_CMModeProcess_126"))
    {
        return ATP_TRUE;
    }
	if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOModeProcess_96"))
	{ 
		return 0x55u;
	}
    return (unsigned char)0;
}
/** User stub definition for function: UINT8_T GetRcvAtoDevFault(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvAtoDevFault () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvAtoDevFault (void)
{
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_53")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_63"))
	{
		return ATP_TRUE;
	}
	if(CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_52")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_54")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_55")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_56")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_57")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_58")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_59")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_60")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_61")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_62")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_64")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_65")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_66")
		|| CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_CtrlARConditionChk_67")
        || CppTest_IsCurrentTestCase("TestSuite_ReverseHandle_test_EnterAmAutoReverse_0"))
	{
		return ATP_FALSE;
	}
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_97"))
    {
        return ATP_FALSE;
    }
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_AMModeProcess_96"))
    {
        return ATP_TRUE;
    }
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_38") ||
       CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_40"))
    {
        return ATP_FALSE;
    }
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FamExitCmCheck_36"))
    {
        return ATP_FALSE;
    }
    return (unsigned char)0;
}
/** User stub definition for function: UINT8_T GetRcvTacAtsCommErrTag(void) */
EXTERN_C_LINKAGE UINT8_T GetRcvTacAtsCommErrTag () ;
EXTERN_C_LINKAGE UINT8_T CppTest_Stub_GetRcvTacAtsCommErrTag (void)
{
    if(CppTest_IsCurrentTestCase("TestSuite_ModeInit_test_FAOHold2Station_12"))
    {
        return 0xAAu;
    }
    if(CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_39") ||
       CppTest_IsCurrentTestCase("TestSuite_ModeHandle_test_FAOInCheck_40"))
    {
        return 0xAAU;
    }
    return (unsigned char)0;
}
