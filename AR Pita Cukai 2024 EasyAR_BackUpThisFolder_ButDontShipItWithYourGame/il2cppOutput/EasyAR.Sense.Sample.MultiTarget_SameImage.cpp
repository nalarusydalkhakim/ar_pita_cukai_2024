#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<easyar.Buffer>
struct Action_1_t1FE3A1AE62AE447DF533658E8E8F95603B6246D4;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915;
// System.Action`2<easyar.Target,System.Boolean>
struct Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416;
// System.Action`3<easyar.ImageTargetController,easyar.Target,System.Boolean>
struct Action_3_t0DC67ABCE6073BEE491A6230123FE12606C4D6CE;
// System.Collections.Generic.Dictionary`2<System.Int32,easyar.TargetController>
struct Dictionary_2_tDA9BDCAD90AB624680FE8388C5681B4D692FEFFC;
// System.Collections.Generic.List`1<System.Tuple`2<easyar.TargetController,UnityEngine.Pose>>
struct List_1_t47AF7A21A7E23F1FB8146739E4B3E8A1D1390177;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// easyar.Buffer
struct Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// easyar.DelayedCallbackScheduler
struct DelayedCallbackScheduler_t7250FB4EE6119AFDCFBAC0DEADD337F1E576FD97;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// easyar.Display
struct Display_tB1D5BF85C3C9D5D143CF2406E5676281CC8C3FEE;
// easyar.EasyARController
struct EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// easyar.Image
struct Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43;
// easyar.ImageTarget
struct ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB;
// easyar.ImageTargetController
struct ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633;
// easyar.ImageTargetParameters
struct ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC;
// easyar.ImageTracker
struct ImageTracker_t936EBB4B806DF339985DABBA2473BC1E6B533813;
// easyar.ImageTrackerFrameFilter
struct ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MultiTarget_SameImage.MultiTargetSameImageSample
struct MultiTargetSameImageSample_t066AB4E08B50ED10C413006CBF31D81C29A6B8C4;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// easyar.Target
struct Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836;
// easyar.TargetController
struct TargetController_t8B3D4F1410E51D042DF5E9C689F5C0499E43410A;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// easyar.ThreadWorker
struct ThreadWorker_t1ADEDA9DB0A15609FBEFE467B9CC337BF57D6D36;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// easyar.ImageTargetController/ImageFileSourceData
struct ImageFileSourceData_t6253D5079E28B45E9A0C1A7A8CFBF74267364C2B;
// easyar.ImageTargetController/TargetDataFileSourceData
struct TargetDataFileSourceData_t8A1E6462041EA1563F8FAD0E8DD979416E605C4B;
// easyar.ImageTrackerFrameFilter/ResultParameters
struct ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8;
// MultiTarget_SameImage.MultiTargetSameImageSample/<>c
struct U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6;
// MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F;
// MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t9848FDAEDFB1BB65CFF35346EE2F3E1D2B1A10BD;
// MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass4_1
struct U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9;
// MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D;
// MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4
struct U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8;
// easyar.RefBase/Retainer
struct Retainer_t21E37A78A5C591A4A1DB7494A454CCADF411A77A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t1FE3A1AE62AE447DF533658E8E8F95603B6246D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t9848FDAEDFB1BB65CFF35346EE2F3E1D2B1A10BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3927EA6F55D709E3DC560DAEE392928B0592AEC9;
IL2CPP_EXTERN_C String_t* _stringLiteral59636FF208330A81542D52F7D396A4BCF66DD78B;
IL2CPP_EXTERN_C String_t* _stringLiteral5D49EC77A90117182261FF3C70616604F150A543;
IL2CPP_EXTERN_C String_t* _stringLiteral5E3F345A25DD79391E7D2F5A1FB17A6998C39DDC;
IL2CPP_EXTERN_C String_t* _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
IL2CPP_EXTERN_C String_t* _stringLiteral7E892D89E76900AA0C9D21D4E503234EAADD3377;
IL2CPP_EXTERN_C String_t* _stringLiteralB0410D7021B5FCF2EF5873BC8F8101B9AE4FEB04;
IL2CPP_EXTERN_C String_t* _stringLiteralEDEC07FD2FE1170778B26F3FC113D3EFF1C6FFED;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF38B9EB6C0B0798F01AD8688743F443EF94B58FE;
IL2CPP_EXTERN_C String_t* _stringLiteralF716B0D4627FA118D23A0EBFC6830217C9CC2C23;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_mA7E7AB396A6A9F6F74D39DA1733325F12C1D8784_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiTargetSameImageSample_CreateMultipleTargetsFromOneImage_m320FE9D580743CDA65F432DD11F5FAE4804276B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_OnNone_m2B39DBB26CB1AB0BD202F66A2E5CE4E6C4AEE646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_OnSome_m6D6DC92913DB3CFD8FDC06D73452516217946020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_Value_m1B40EB1F1CB42848B8DECF2B684225B3CACF2FB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_Value_m459F33FD3971F5E725032D66DAF86C653CBEC83F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_op_Implicit_m8A0D18A63624246F93D789CEFFB399C334309DCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadImageBufferU3Ed__4_MoveNext_m57FCDAE9EA49B4E8C2110B08FACA84E67FC8EC8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadImageBufferU3Ed__4_System_Collections_IEnumerator_Reset_m8D965857E6BD77F092EF4083C8EF25CA6BDDAA78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAddTargetControllerEventsU3Eb__6_3_m48B13F911F231E7FB558723A8C2A105AD6B84B12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CStartU3Eb__0_mA63898C1826BC47F7C7C58D6587CBFF2433037E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CStartU3Eb__1_mA72AD29D91760314259EDBAF85A0C382CA8DF00E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_1_U3CLoadImageBufferU3Eb__0_m89824E69A712986F7E09A176D231CF6463ADF844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CAddTargetControllerEventsU3Eb__0_m65711C65FE567AC897D840A879D699AC1958EEC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CAddTargetControllerEventsU3Eb__1_m07C353FB93CB88EFF491F2719C0DC22583566C7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CAddTargetControllerEventsU3Eb__2_m252A19FEDC9812363786B9D8E8C8A2422C06EFBE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD52DAFA5F8CED112CF78EC91A0E25A278F94CA68 
{
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// easyar.ThreadWorker
struct ThreadWorker_t1ADEDA9DB0A15609FBEFE467B9CC337BF57D6D36  : public RuntimeObject
{
	// System.Threading.Thread easyar.ThreadWorker::thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___thread_0;
	// System.Boolean easyar.ThreadWorker::finished
	bool ___finished_1;
	// System.Collections.Generic.Queue`1<System.Action> easyar.ThreadWorker::queue
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* ___queue_2;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// MultiTarget_SameImage.MultiTargetSameImageSample/<>c
struct U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6  : public RuntimeObject
{
};

struct U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_StaticFields
{
	// MultiTarget_SameImage.MultiTargetSameImageSample/<>c MultiTarget_SameImage.MultiTargetSameImageSample/<>c::<>9
	U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6* ___U3CU3E9_0;
	// System.Action`2<easyar.Target,System.Boolean> MultiTarget_SameImage.MultiTargetSameImageSample/<>c::<>9__6_3
	Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* ___U3CU3E9__6_3_1;
};

// MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F  : public RuntimeObject
{
	// MultiTarget_SameImage.MultiTargetSameImageSample MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass3_0::<>4__this
	MultiTargetSameImageSample_t066AB4E08B50ED10C413006CBF31D81C29A6B8C4* ___U3CU3E4__this_0;
	// System.String MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass3_0::launcher
	String_t* ___launcher_1;
};

// MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t9848FDAEDFB1BB65CFF35346EE2F3E1D2B1A10BD  : public RuntimeObject
{
	// easyar.Buffer MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass4_0::buffer
	Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* ___buffer_0;
};

// MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D  : public RuntimeObject
{
	// easyar.ImageTargetController MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass6_0::controller
	ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* ___controller_0;
};

// MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4
struct U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8  : public RuntimeObject
{
	// System.Int32 MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// easyar.Buffer MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::buffer
	Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* ___buffer_2;
	// System.String MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::name
	String_t* ___name_3;
	// System.Single MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::scale
	float ___scale_4;
	// MultiTarget_SameImage.MultiTargetSameImageSample MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::<>4__this
	MultiTargetSameImageSample_t066AB4E08B50ED10C413006CBF31D81C29A6B8C4* ___U3CU3E4__this_5;
	// MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass4_0 MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::<>8__1
	U3CU3Ec__DisplayClass4_0_t9848FDAEDFB1BB65CFF35346EE2F3E1D2B1A10BD* ___U3CU3E8__1_6;
	// easyar.Buffer MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::<>s__2
	Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* ___U3CU3Es__2_7;
	// MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass4_1 MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::<>8__3
	U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9* ___U3CU3E8__3_8;
	// easyar.Image MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::<image>5__4
	Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43* ___U3CimageU3E5__4_9;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// easyar.Unit
struct Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 
{
	union
	{
		struct
		{
		};
		uint8_t Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185__padding[1];
	};
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// easyar.Optional`1<System.Collections.Generic.List`1<System.Tuple`2<easyar.TargetController,UnityEngine.Pose>>>
struct Optional_1_t5AF2475D02CCAD63B40183BFA862E1BC1E764B11 
{
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 ___None_1;
	// T easyar.Optional`1::Some
	List_1_t47AF7A21A7E23F1FB8146739E4B3E8A1D1390177* ___Some_2;
};

// easyar.Optional`1<easyar.Image>
struct Optional_1_t5B6B0C0045FAE98F843037DDDF9FD8F793FE4741 
{
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 ___None_1;
	// T easyar.Optional`1::Some
	Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43* ___Some_2;
};

// easyar.Optional`1<easyar.ImageTarget>
struct Optional_1_tF42B2C54CA65016EF2B9D8901BA94188C401B6FE 
{
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 ___None_1;
	// T easyar.Optional`1::Some
	ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* ___Some_2;
};

// easyar.Optional`1<System.Object>
struct Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22 
{
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 ___None_1;
	// T easyar.Optional`1::Some
	RuntimeObject* ___Some_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// easyar.RefBase
struct RefBase_tD2A748D10CECAAD8DD367977128D0B22A01F604E  : public RuntimeObject
{
	// System.IntPtr easyar.RefBase::cdata_
	intptr_t ___cdata__0;
	// System.Action`1<System.IntPtr> easyar.RefBase::deleter_
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter__1;
	// easyar.RefBase/Retainer easyar.RefBase::retainer_
	Retainer_t21E37A78A5C591A4A1DB7494A454CCADF411A77A* ___retainer__2;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// easyar.Buffer
struct Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54  : public RefBase_tD2A748D10CECAAD8DD367977128D0B22A01F604E
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// easyar.Image
struct Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43  : public RefBase_tD2A748D10CECAAD8DD367977128D0B22A01F604E
{
};

// easyar.ImageTargetParameters
struct ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC  : public RefBase_tD2A748D10CECAAD8DD367977128D0B22A01F604E
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// easyar.Target
struct Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836  : public RefBase_tD2A748D10CECAAD8DD367977128D0B22A01F604E
{
};

// MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass4_1
struct U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9  : public RuntimeObject
{
	// easyar.Optional`1<easyar.Image> MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass4_1::imageOptional
	Optional_1_t5B6B0C0045FAE98F843037DDDF9FD8F793FE4741 ___imageOptional_0;
	// System.Boolean MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass4_1::taskFinished
	bool ___taskFinished_1;
	// MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass4_0 MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass4_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass4_0_t9848FDAEDFB1BB65CFF35346EE2F3E1D2B1A10BD* ___CSU24U3CU3E8__locals1_2;
};

// System.Action`1<easyar.Buffer>
struct Action_1_t1FE3A1AE62AE447DF533658E8E8F95603B6246D4  : public MulticastDelegate_t
{
};

// System.Action`2<easyar.Target,System.Boolean>
struct Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// easyar.ImageTarget
struct ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB  : public Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// easyar.EasyARController
struct EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean easyar.EasyARController::ShowPopupMessage
	bool ___ShowPopupMessage_4;
	// System.Boolean easyar.EasyARController::hasError
	bool ___hasError_7;
	// System.Action easyar.EasyARController::PostUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___PostUpdate_8;
	// easyar.ThreadWorker easyar.EasyARController::<Worker>k__BackingField
	ThreadWorker_t1ADEDA9DB0A15609FBEFE467B9CC337BF57D6D36* ___U3CWorkerU3Ek__BackingField_12;
	// easyar.Display easyar.EasyARController::<Display>k__BackingField
	Display_tB1D5BF85C3C9D5D143CF2406E5676281CC8C3FEE* ___U3CDisplayU3Ek__BackingField_13;
};

struct EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177_StaticFields
{
	// System.String easyar.EasyARController::exceptionMessage
	String_t* ___exceptionMessage_5;
	// System.Boolean easyar.EasyARController::initializeCalled
	bool ___initializeCalled_6;
	// easyar.EasyARController easyar.EasyARController::<Instance>k__BackingField
	EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177* ___U3CInstanceU3Ek__BackingField_9;
	// System.Boolean easyar.EasyARController::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_10;
	// easyar.DelayedCallbackScheduler easyar.EasyARController::<Scheduler>k__BackingField
	DelayedCallbackScheduler_t7250FB4EE6119AFDCFBAC0DEADD337F1E576FD97* ___U3CSchedulerU3Ek__BackingField_11;
};

// easyar.FrameFilter
struct FrameFilter_tEF74686432B3C28E888F223945B0BF3FC58AD214  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean easyar.FrameFilter::horizontalFlip
	bool ___horizontalFlip_4;
	// easyar.Optional`1<System.Collections.Generic.List`1<System.Tuple`2<easyar.TargetController,UnityEngine.Pose>>> easyar.FrameFilter::targetResults
	Optional_1_t5AF2475D02CCAD63B40183BFA862E1BC1E764B11 ___targetResults_5;
};

// MultiTarget_SameImage.MultiTargetSameImageSample
struct MultiTargetSameImageSample_t066AB4E08B50ED10C413006CBF31D81C29A6B8C4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// easyar.ImageTrackerFrameFilter MultiTarget_SameImage.MultiTargetSameImageSample::ImageTracker
	ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* ___ImageTracker_4;
	// UnityEngine.GameObject MultiTarget_SameImage.MultiTargetSameImageSample::Cube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Cube_5;
	// UnityEngine.UI.Button MultiTarget_SameImage.MultiTargetSameImageSample::BackButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___BackButton_6;
};

// easyar.TargetController
struct TargetController_t8B3D4F1410E51D042DF5E9C689F5C0499E43410A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// easyar.TargetController/ActiveControlStrategy easyar.TargetController::ActiveControl
	int32_t ___ActiveControl_4;
	// System.Boolean easyar.TargetController::HorizontalFlip
	bool ___HorizontalFlip_5;
	// System.Boolean easyar.TargetController::firstFound
	bool ___firstFound_6;
	// System.Action easyar.TargetController::TargetFound
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___TargetFound_7;
	// System.Action easyar.TargetController::TargetLost
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___TargetLost_8;
	// System.Boolean easyar.TargetController::<IsTracked>k__BackingField
	bool ___U3CIsTrackedU3Ek__BackingField_9;
	// System.Boolean easyar.TargetController::<IsLoaded>k__BackingField
	bool ___U3CIsLoadedU3Ek__BackingField_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// easyar.ImageTargetController
struct ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633  : public TargetController_t8B3D4F1410E51D042DF5E9C689F5C0499E43410A
{
	// easyar.ImageTarget easyar.ImageTargetController::<Target>k__BackingField
	ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* ___U3CTargetU3Ek__BackingField_11;
	// easyar.ImageTargetController/DataSource easyar.ImageTargetController::SourceType
	int32_t ___SourceType_12;
	// easyar.ImageTargetController/ImageFileSourceData easyar.ImageTargetController::ImageFileSource
	ImageFileSourceData_t6253D5079E28B45E9A0C1A7A8CFBF74267364C2B* ___ImageFileSource_13;
	// easyar.ImageTargetController/TargetDataFileSourceData easyar.ImageTargetController::TargetDataFileSource
	TargetDataFileSourceData_t8A1E6462041EA1563F8FAD0E8DD979416E605C4B* ___TargetDataFileSource_14;
	// easyar.ImageTarget easyar.ImageTargetController::TargetSource
	ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* ___TargetSource_15;
	// System.Boolean easyar.ImageTargetController::trackerHasSet
	bool ___trackerHasSet_16;
	// easyar.ImageTrackerFrameFilter easyar.ImageTargetController::tracker
	ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* ___tracker_17;
	// easyar.ImageTrackerFrameFilter easyar.ImageTargetController::loader
	ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* ___loader_18;
	// System.Single easyar.ImageTargetController::scale
	float ___scale_19;
	// System.Single easyar.ImageTargetController::scaleX
	float ___scaleX_20;
	// System.Boolean easyar.ImageTargetController::preHFlip
	bool ___preHFlip_21;
	// System.Action easyar.ImageTargetController::TargetAvailable
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___TargetAvailable_22;
	// System.Action`2<easyar.Target,System.Boolean> easyar.ImageTargetController::TargetLoad
	Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* ___TargetLoad_23;
	// System.Action`2<easyar.Target,System.Boolean> easyar.ImageTargetController::TargetUnload
	Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* ___TargetUnload_24;
};

// easyar.ImageTrackerFrameFilter
struct ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E  : public FrameFilter_tEF74686432B3C28E888F223945B0BF3FC58AD214
{
	// easyar.ImageTracker easyar.ImageTrackerFrameFilter::<Tracker>k__BackingField
	ImageTracker_t936EBB4B806DF339985DABBA2473BC1E6B533813* ___U3CTrackerU3Ek__BackingField_6;
	// easyar.ImageTrackerMode easyar.ImageTrackerFrameFilter::TrackerMode
	int32_t ___TrackerMode_7;
	// System.Int32 easyar.ImageTrackerFrameFilter::simultaneousNum
	int32_t ___simultaneousNum_8;
	// System.Collections.Generic.List`1<System.Int32> easyar.ImageTrackerFrameFilter::previousTargetIDs
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___previousTargetIDs_9;
	// System.Collections.Generic.Dictionary`2<System.Int32,easyar.TargetController> easyar.ImageTrackerFrameFilter::allTargetController
	Dictionary_2_tDA9BDCAD90AB624680FE8388C5681B4D692FEFFC* ___allTargetController_10;
	// System.Boolean easyar.ImageTrackerFrameFilter::isStarted
	bool ___isStarted_11;
	// easyar.ImageTrackerFrameFilter/ResultParameters easyar.ImageTrackerFrameFilter::resultType
	ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8* ___resultType_12;
	// System.Action`3<easyar.ImageTargetController,easyar.Target,System.Boolean> easyar.ImageTrackerFrameFilter::TargetLoad
	Action_3_t0DC67ABCE6073BEE491A6230123FE12606C4D6CE* ___TargetLoad_13;
	// System.Action`3<easyar.ImageTargetController,easyar.Target,System.Boolean> easyar.ImageTrackerFrameFilter::TargetUnload
	Action_3_t0DC67ABCE6073BEE491A6230123FE12606C4D6CE* ___TargetUnload_14;
	// System.Action easyar.ImageTrackerFrameFilter::SimultaneousNumChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___SimultaneousNumChanged_15;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean easyar.Optional`1<System.Object>::get_OnSome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Optional_1_get_OnSome_m6A4180C85633C2D06A1EBEFA7383BD23DF86EB04_gshared (Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* __this, const RuntimeMethod* method) ;
// T easyar.Optional`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Optional_1_get_Value_m1E8149EB196B88B62B9737096E20FAC8F90304E3_gshared (Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m460C72FDDE5FF8033C7BD19A07CF4E3F473F7414_gshared (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// easyar.Optional`1<T> easyar.Optional`1<System.Object>::op_Implicit(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22 Optional_1_op_Implicit_mDACBD94DFA24E606D67BC9DE9487B9D648C8A998_gshared (RuntimeObject* ___v0, const RuntimeMethod* method) ;
// System.Boolean easyar.Optional`1<System.Object>::get_OnNone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Optional_1_get_OnNone_m3DBA09648553D54F8E4D17AF64D4CE5511BB2365_gshared (Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* __this, const RuntimeMethod* method) ;

// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mD270CEA73624EFDB27257959077EF77BB7946F46 (U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<easyar.Buffer>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA68C1834FFDBC7C5D28D99B99A08B4A0C2EEFBF5 (Action_1_t1FE3A1AE62AE447DF533658E8E8F95603B6246D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t1FE3A1AE62AE447DF533658E8E8F95603B6246D4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.IEnumerator easyar.FileUtil::LoadFile(System.String,easyar.PathType,System.Action`1<easyar.Buffer>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileUtil_LoadFile_m610E1F14E43803D915077BB5C0E2CE4BD0481703 (String_t* ___filePath0, int32_t ___filePathType1, Action_1_t1FE3A1AE62AE447DF533658E8E8F95603B6246D4* ___onLoad2, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::CanStreamedLevelBeLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_CanStreamedLevelBeLoaded_mA1BAA60593E8679BAFA6A16595166774AE172ADC (String_t* ___levelName0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageBufferU3Ed__4__ctor_mBE962DC8CA8C0E8F46F4683BB16221E76A08B530 (U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void easyar.ImageTargetParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetParameters__ctor_m51DAFFAA165CEA8ED16F7D23D24AC3A69D4D45A0 (ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC* __this, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903 (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// easyar.Optional`1<easyar.ImageTarget> easyar.ImageTarget::createFromParameters(easyar.ImageTargetParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Optional_1_tF42B2C54CA65016EF2B9D8901BA94188C401B6FE ImageTarget_createFromParameters_m4926D38420ABE721B7B27DE0E9621BDC7098C3DC (ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC* ___parameters0, const RuntimeMethod* method) ;
// System.Boolean easyar.Optional`1<easyar.ImageTarget>::get_OnSome()
inline bool Optional_1_get_OnSome_m6D6DC92913DB3CFD8FDC06D73452516217946020 (Optional_1_tF42B2C54CA65016EF2B9D8901BA94188C401B6FE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Optional_1_tF42B2C54CA65016EF2B9D8901BA94188C401B6FE*, const RuntimeMethod*))Optional_1_get_OnSome_m6A4180C85633C2D06A1EBEFA7383BD23DF86EB04_gshared)(__this, method);
}
// T easyar.Optional`1<easyar.ImageTarget>::get_Value()
inline ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* Optional_1_get_Value_m1B40EB1F1CB42848B8DECF2B684225B3CACF2FB1 (Optional_1_tF42B2C54CA65016EF2B9D8901BA94188C401B6FE* __this, const RuntimeMethod* method)
{
	return ((  ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* (*) (Optional_1_tF42B2C54CA65016EF2B9D8901BA94188C401B6FE*, const RuntimeMethod*))Optional_1_get_Value_m1E8149EB196B88B62B9737096E20FAC8F90304E3_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<easyar.ImageTargetController>()
inline ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* GameObject_AddComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_mA7E7AB396A6A9F6F74D39DA1733325F12C1D8784 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample::AddTargetControllerEvents(easyar.ImageTargetController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiTargetSameImageSample_AddTargetControllerEvents_mC1D8747D8253A313618AD05BEC45478905C344E9 (MultiTargetSameImageSample_t066AB4E08B50ED10C413006CBF31D81C29A6B8C4* __this, ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* ___controller0, const RuntimeMethod* method) ;
// System.Void easyar.ImageTargetController::set_Tracker(easyar.ImageTrackerFrameFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetController_set_Tracker_mA9CCBB114C5479A0679FEF22A74B67DB9D1AD26B (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m1E45743149EFDF6FD0ED5979CB4A9FFAC0A143EE (U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void easyar.TargetController::add_TargetFound(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetController_add_TargetFound_mD4B9C4D3662E282B491F617E22AA14D3775AB57B (TargetController_t8B3D4F1410E51D042DF5E9C689F5C0499E43410A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void easyar.TargetController::add_TargetLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetController_add_TargetLost_mB6790A7172B5C303E3143155672D27F4BF6E4ECC (TargetController_t8B3D4F1410E51D042DF5E9C689F5C0499E43410A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`2<easyar.Target,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m0D18FC0D2E5634CBDC24690398EE59D4F1EB1101 (Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m460C72FDDE5FF8033C7BD19A07CF4E3F473F7414_gshared)(__this, ___object0, ___method1, method);
}
// System.Void easyar.ImageTargetController::add_TargetLoad(System.Action`2<easyar.Target,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetController_add_TargetLoad_m91633BAF45092ADF09E6F663EF292B891ACC505C (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* ___value0, const RuntimeMethod* method) ;
// System.Void easyar.ImageTargetController::add_TargetUnload(System.Action`2<easyar.Target,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetController_add_TargetUnload_m118D9AE2DAB3F7F26C90A3D4B3F7E647503CDCF9 (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// easyar.Buffer easyar.Buffer::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* Buffer_Clone_m5FE5FFB21CD5BFF7A659CFF2CABA0615E8594CEC (Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MultiTarget_SameImage.MultiTargetSameImageSample::LoadImageBuffer(easyar.Buffer,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultiTargetSameImageSample_LoadImageBuffer_m2169311B30BBB32A2119992CE097564CBE5166AB (MultiTargetSameImageSample_t066AB4E08B50ED10C413006CBF31D81C29A6B8C4* __this, Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* ___buffer0, String_t* ___name1, float ___scale2, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// easyar.Optional`1<easyar.Image> easyar.ImageHelper::decode(easyar.Buffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Optional_1_t5B6B0C0045FAE98F843037DDDF9FD8F793FE4741 ImageHelper_decode_m360429BACE4313236CAA6C2088FEF800D76A928D (Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* ___buffer0, const RuntimeMethod* method) ;
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageBufferU3Ed__4_U3CU3Em__Finally1_m202A93251C658E2F08D9490B3CCF31F830F0CA8C (U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8* __this, const RuntimeMethod* method) ;
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageBufferU3Ed__4_System_IDisposable_Dispose_mD432475726CC6DB9C2512241CE3F4C3626153DC4 (U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8* __this, const RuntimeMethod* method) ;
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mAF238CAD497AD6714828B7E6770656682D4B66DF (U3CU3Ec__DisplayClass4_0_t9848FDAEDFB1BB65CFF35346EE2F3E1D2B1A10BD* __this, const RuntimeMethod* method) ;
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass4_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1__ctor_m6DE80DB3449E76C52993AB24B347EDF8199F00D7 (U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9* __this, const RuntimeMethod* method) ;
// easyar.Optional`1<T> easyar.Optional`1<easyar.Image>::op_Implicit(T)
inline Optional_1_t5B6B0C0045FAE98F843037DDDF9FD8F793FE4741 Optional_1_op_Implicit_m8A0D18A63624246F93D789CEFFB399C334309DCA (Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43* ___v0, const RuntimeMethod* method)
{
	return ((  Optional_1_t5B6B0C0045FAE98F843037DDDF9FD8F793FE4741 (*) (Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43*, const RuntimeMethod*))Optional_1_op_Implicit_mDACBD94DFA24E606D67BC9DE9487B9D648C8A998_gshared)(___v0, method);
}
// easyar.EasyARController easyar.EasyARController::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177* EasyARController_get_Instance_mFD49136A56B9212987C8989B045D463D2841C295_inline (const RuntimeMethod* method) ;
// easyar.ThreadWorker easyar.EasyARController::get_Worker()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ThreadWorker_t1ADEDA9DB0A15609FBEFE467B9CC337BF57D6D36* EasyARController_get_Worker_mC0CE2BCBC0B1A9D6DCFAAE303EED4615168DD253_inline (EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177* __this, const RuntimeMethod* method) ;
// System.Void easyar.ThreadWorker::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadWorker_Run_mE19FF9BF70FEBC298AB58494630216F2FB775F03 (ThreadWorker_t1ADEDA9DB0A15609FBEFE467B9CC337BF57D6D36* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___task0, const RuntimeMethod* method) ;
// System.Boolean easyar.Optional`1<easyar.Image>::get_OnNone()
inline bool Optional_1_get_OnNone_m2B39DBB26CB1AB0BD202F66A2E5CE4E6C4AEE646 (Optional_1_t5B6B0C0045FAE98F843037DDDF9FD8F793FE4741* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Optional_1_t5B6B0C0045FAE98F843037DDDF9FD8F793FE4741*, const RuntimeMethod*))Optional_1_get_OnNone_m3DBA09648553D54F8E4D17AF64D4CE5511BB2365_gshared)(__this, method);
}
// T easyar.Optional`1<easyar.Image>::get_Value()
inline Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43* Optional_1_get_Value_m459F33FD3971F5E725032D66DAF86C653CBEC83F (Optional_1_t5B6B0C0045FAE98F843037DDDF9FD8F793FE4741* __this, const RuntimeMethod* method)
{
	return ((  Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43* (*) (Optional_1_t5B6B0C0045FAE98F843037DDDF9FD8F793FE4741*, const RuntimeMethod*))Optional_1_get_Value_m1E8149EB196B88B62B9737096E20FAC8F90304E3_gshared)(__this, method);
}
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample::CreateMultipleTargetsFromOneImage(easyar.Image,System.Int32,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiTargetSameImageSample_CreateMultipleTargetsFromOneImage_m320FE9D580743CDA65F432DD11F5FAE4804276B2 (MultiTargetSameImageSample_t066AB4E08B50ED10C413006CBF31D81C29A6B8C4* __this, Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43* ___image0, int32_t ___count1, String_t* ___name2, float ___scale3, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// easyar.ImageTarget easyar.ImageTargetController::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* ImageTargetController_get_Target_m51F32E8D1467745044F011BE80719C022258BC95_inline (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 easyar.ImageTargetController::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ImageTargetController_get_Size_m81B778F198A8854934002A378CB53FF3A6D50225 (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, const RuntimeMethod* method) ;
// easyar.ImageTrackerFrameFilter easyar.ImageTargetController::get_Tracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* ImageTargetController_get_Tracker_mC362601661B2A96E13FAC68FF2B09E0946BF9E73 (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2D73E81761C7722F36A578D4E6CFDBD9DDB296E3 (U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiTargetSameImageSample_Start_m81F5D8E8F18A6F1EA8061429B1D85BC883153CCF (MultiTargetSameImageSample_t066AB4E08B50ED10C413006CBF31D81C29A6B8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t1FE3A1AE62AE447DF533658E8E8F95603B6246D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CStartU3Eb__0_mA63898C1826BC47F7C7C58D6587CBFF2433037E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CStartU3Eb__1_mA72AD29D91760314259EDBAF85A0C382CA8DF00E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59636FF208330A81542D52F7D396A4BCF66DD78B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F* V_0 = NULL;
	bool V_1 = false;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F* L_0 = (U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_mD270CEA73624EFDB27257959077EF77BB7946F46(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// StartCoroutine(FileUtil.LoadFile("namecard.jpg", PathType.StreamingAssets, (buffer) =>
		// {
		//     StartCoroutine(LoadImageBuffer(buffer.Clone(), "namecard", 0.09f));
		// }));
		U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F* L_2 = V_0;
		Action_1_t1FE3A1AE62AE447DF533658E8E8F95603B6246D4* L_3 = (Action_1_t1FE3A1AE62AE447DF533658E8E8F95603B6246D4*)il2cpp_codegen_object_new(Action_1_t1FE3A1AE62AE447DF533658E8E8F95603B6246D4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA68C1834FFDBC7C5D28D99B99A08B4A0C2EEFBF5(L_3, L_2, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CStartU3Eb__0_mA63898C1826BC47F7C7C58D6587CBFF2433037E9_RuntimeMethod_var), NULL);
		RuntimeObject* L_4;
		L_4 = FileUtil_LoadFile_m610E1F14E43803D915077BB5C0E2CE4BD0481703(_stringLiteral59636FF208330A81542D52F7D396A4BCF66DD78B, 1, L_3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// var launcher = "AllSamplesLauncher";
		U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F* L_6 = V_0;
		NullCheck(L_6);
		L_6->___launcher_1 = _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___launcher_1), (void*)_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		// if (Application.CanStreamedLevelBeLoaded(launcher))
		U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->___launcher_1;
		bool L_9;
		L_9 = Application_CanStreamedLevelBeLoaded_mA1BAA60593E8679BAFA6A16595166774AE172ADC(L_8, NULL);
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_006e;
		}
	}
	{
		// var button = BackButton.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___BackButton_6;
		NullCheck(L_11);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12;
		L_12 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_11, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		V_2 = L_12;
		// button.onClick.AddListener(() => { UnityEngine.SceneManagement.SceneManager.LoadScene(launcher); });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13 = V_2;
		NullCheck(L_13);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_14;
		L_14 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_13, NULL);
		U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F* L_15 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_16 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CStartU3Eb__1_mA72AD29D91760314259EDBAF85A0C382CA8DF00E_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_14, L_16, NULL);
		goto IL_0082;
	}

IL_006e:
	{
		// BackButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = __this->___BackButton_6;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)0, NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator MultiTarget_SameImage.MultiTargetSameImageSample::LoadImageBuffer(easyar.Buffer,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MultiTargetSameImageSample_LoadImageBuffer_m2169311B30BBB32A2119992CE097564CBE5166AB (MultiTargetSameImageSample_t066AB4E08B50ED10C413006CBF31D81C29A6B8C4* __this, Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* ___buffer0, String_t* ___name1, float ___scale2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8* L_0 = (U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8*)il2cpp_codegen_object_new(U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadImageBufferU3Ed__4__ctor_mBE962DC8CA8C0E8F46F4683BB16221E76A08B530(L_0, 0, NULL);
		U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_5), (void*)__this);
		U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8* L_2 = L_1;
		Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* L_3 = ___buffer0;
		NullCheck(L_2);
		L_2->___buffer_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___buffer_2), (void*)L_3);
		U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8* L_4 = L_2;
		String_t* L_5 = ___name1;
		NullCheck(L_4);
		L_4->___name_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___name_3), (void*)L_5);
		U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8* L_6 = L_4;
		float L_7 = ___scale2;
		NullCheck(L_6);
		L_6->___scale_4 = L_7;
		return L_6;
	}
}
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample::CreateMultipleTargetsFromOneImage(easyar.Image,System.Int32,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiTargetSameImageSample_CreateMultipleTargetsFromOneImage_m320FE9D580743CDA65F432DD11F5FAE4804276B2 (MultiTargetSameImageSample_t066AB4E08B50ED10C413006CBF31D81C29A6B8C4* __this, Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43* ___image0, int32_t ___count1, String_t* ___name2, float ___scale3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_mA7E7AB396A6A9F6F74D39DA1733325F12C1D8784_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_OnSome_m6D6DC92913DB3CFD8FDC06D73452516217946020_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_Value_m1B40EB1F1CB42848B8DECF2B684225B3CACF2FB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF38B9EB6C0B0798F01AD8688743F443EF94B58FE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC* V_1 = NULL;
	Optional_1_tF42B2C54CA65016EF2B9D8901BA94188C401B6FE V_2;
	memset((&V_2), 0, sizeof(V_2));
	Guid_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* V_5 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* V_7 = NULL;
	bool V_8 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_9 = NULL;
	bool V_10 = false;
	{
		// for (int i = 0; i < count; i++)
		V_0 = 0;
		goto IL_0115;
	}

IL_0008:
	{
		// using (var param = new ImageTargetParameters())
		ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC* L_0 = (ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC*)il2cpp_codegen_object_new(ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ImageTargetParameters__ctor_m51DAFFAA165CEA8ED16F7D23D24AC3A69D4D45A0(L_0, NULL);
		V_1 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0105:
			{// begin finally (depth: 1)
				{
					ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC* L_1 = V_1;
					if (!L_1)
					{
						goto IL_010f;
					}
				}
				{
					ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC* L_2 = V_1;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_010f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// param.setImage(image);
				ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC* L_3 = V_1;
				Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43* L_4 = ___image0;
				NullCheck(L_3);
				VirtualActionInvoker1< Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43* >::Invoke(7 /* System.Void easyar.ImageTargetParameters::setImage(easyar.Image) */, L_3, L_4);
				// param.setName(name);
				ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC* L_5 = V_1;
				String_t* L_6 = ___name2;
				NullCheck(L_5);
				VirtualActionInvoker1< String_t* >::Invoke(9 /* System.Void easyar.ImageTargetParameters::setName(System.String) */, L_5, L_6);
				// param.setScale(scale);
				ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC* L_7 = V_1;
				float L_8 = ___scale3;
				NullCheck(L_7);
				VirtualActionInvoker1< float >::Invoke(15 /* System.Void easyar.ImageTargetParameters::setScale(System.Single) */, L_7, L_8);
				// param.setUid(Guid.NewGuid().ToString());
				ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC* L_9 = V_1;
				Guid_t L_10;
				L_10 = Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903(NULL);
				V_3 = L_10;
				String_t* L_11;
				L_11 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_3), NULL);
				NullCheck(L_9);
				VirtualActionInvoker1< String_t* >::Invoke(11 /* System.Void easyar.ImageTargetParameters::setUid(System.String) */, L_9, L_11);
				// param.setMeta(string.Empty);
				ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC* L_12 = V_1;
				String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				NullCheck(L_12);
				VirtualActionInvoker1< String_t* >::Invoke(13 /* System.Void easyar.ImageTargetParameters::setMeta(System.String) */, L_12, L_13);
				// var targetOptional = ImageTarget.createFromParameters(param);
				ImageTargetParameters_t50B4BB35A88D3E3F8EF3F529A4A98102920EBCAC* L_14 = V_1;
				Optional_1_tF42B2C54CA65016EF2B9D8901BA94188C401B6FE L_15;
				L_15 = ImageTarget_createFromParameters_m4926D38420ABE721B7B27DE0E9621BDC7098C3DC(L_14, NULL);
				V_2 = L_15;
				// if (targetOptional.OnSome)
				bool L_16;
				L_16 = Optional_1_get_OnSome_m6D6DC92913DB3CFD8FDC06D73452516217946020((&V_2), Optional_1_get_OnSome_m6D6DC92913DB3CFD8FDC06D73452516217946020_RuntimeMethod_var);
				V_4 = L_16;
				bool L_17 = V_4;
				if (!L_17)
				{
					goto IL_00f6_1;
				}
			}
			{
				// var target = targetOptional.Value;
				ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_18;
				L_18 = Optional_1_get_Value_m1B40EB1F1CB42848B8DECF2B684225B3CACF2FB1((&V_2), Optional_1_get_Value_m1B40EB1F1CB42848B8DECF2B684225B3CACF2FB1_RuntimeMethod_var);
				V_5 = L_18;
				// GameObject Target = new GameObject(name + " <" + i + ">");
				String_t* L_19 = ___name2;
				String_t* L_20;
				L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
				String_t* L_21;
				L_21 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_19, _stringLiteralF38B9EB6C0B0798F01AD8688743F443EF94B58FE, L_20, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
				NullCheck(L_22);
				GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_22, L_21, NULL);
				V_6 = L_22;
				// var controller = Target.AddComponent<ImageTargetController>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_6;
				NullCheck(L_23);
				ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_24;
				L_24 = GameObject_AddComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_mA7E7AB396A6A9F6F74D39DA1733325F12C1D8784(L_23, GameObject_AddComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_mA7E7AB396A6A9F6F74D39DA1733325F12C1D8784_RuntimeMethod_var);
				V_7 = L_24;
				// AddTargetControllerEvents(controller);
				ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_25 = V_7;
				MultiTargetSameImageSample_AddTargetControllerEvents_mC1D8747D8253A313618AD05BEC45478905C344E9(__this, L_25, NULL);
				// controller.SourceType = ImageTargetController.DataSource.Target;
				ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_26 = V_7;
				NullCheck(L_26);
				L_26->___SourceType_12 = 2;
				// controller.TargetSource = target;
				ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_27 = V_7;
				ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_28 = V_5;
				NullCheck(L_27);
				L_27->___TargetSource_15 = L_28;
				Il2CppCodeGenWriteBarrier((void**)(&L_27->___TargetSource_15), (void*)L_28);
				// controller.Tracker = ImageTracker;
				ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_29 = V_7;
				ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* L_30 = __this->___ImageTracker_4;
				NullCheck(L_29);
				ImageTargetController_set_Tracker_mA9CCBB114C5479A0679FEF22A74B67DB9D1AD26B(L_29, L_30, NULL);
				// if (Cube)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___Cube_5;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_32;
				L_32 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_31, NULL);
				V_8 = L_32;
				bool L_33 = V_8;
				if (!L_33)
				{
					goto IL_00f3_1;
				}
			}
			{
				// var cube = Instantiate(Cube);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___Cube_5;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
				L_35 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_34, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
				V_9 = L_35;
				// cube.transform.parent = controller.transform;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = V_9;
				NullCheck(L_36);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
				L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
				ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_38 = V_7;
				NullCheck(L_38);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
				L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
				NullCheck(L_37);
				Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_37, L_39, NULL);
			}

IL_00f3_1:
			{
				goto IL_0102_1;
			}

IL_00f6_1:
			{
				// throw new Exception("invalid parameter");
				Exception_t* L_40 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_40);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_40, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D49EC77A90117182261FF3C70616604F150A543)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MultiTargetSameImageSample_CreateMultipleTargetsFromOneImage_m320FE9D580743CDA65F432DD11F5FAE4804276B2_RuntimeMethod_var)));
			}

IL_0102_1:
			{
				goto IL_0110;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0110:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_0115:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_42 = V_0;
		int32_t L_43 = ___count1;
		V_10 = (bool)((((int32_t)L_42) < ((int32_t)L_43))? 1 : 0);
		bool L_44 = V_10;
		if (L_44)
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample::AddTargetControllerEvents(easyar.ImageTargetController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiTargetSameImageSample_AddTargetControllerEvents_mC1D8747D8253A313618AD05BEC45478905C344E9 (MultiTargetSameImageSample_t066AB4E08B50ED10C413006CBF31D81C29A6B8C4* __this, ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* ___controller0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAddTargetControllerEventsU3Eb__6_3_m48B13F911F231E7FB558723A8C2A105AD6B84B12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CAddTargetControllerEventsU3Eb__0_m65711C65FE567AC897D840A879D699AC1958EEC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CAddTargetControllerEventsU3Eb__1_m07C353FB93CB88EFF491F2719C0DC22583566C7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CAddTargetControllerEventsU3Eb__2_m252A19FEDC9812363786B9D8E8C8A2422C06EFBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D* V_0 = NULL;
	bool V_1 = false;
	Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* G_B4_0 = NULL;
	ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* G_B4_1 = NULL;
	Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* G_B3_0 = NULL;
	ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* G_B3_1 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D* L_0 = (U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_m1E45743149EFDF6FD0ED5979CB4A9FFAC0A143EE(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D* L_1 = V_0;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_2 = ___controller0;
		NullCheck(L_1);
		L_1->___controller_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___controller_0), (void*)L_2);
		// if (!controller)
		U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D* L_3 = V_0;
		NullCheck(L_3);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_4 = L_3->___controller_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		// return;
		goto IL_0096;
	}

IL_0023:
	{
		// controller.TargetFound += () =>
		// {
		//     Debug.LogFormat("Found target {{id = {0}, name = {1}}}", controller.Target.runtimeID(), controller.Target.name());
		// };
		U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D* L_7 = V_0;
		NullCheck(L_7);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_8 = L_7->___controller_0;
		U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CAddTargetControllerEventsU3Eb__0_m65711C65FE567AC897D840A879D699AC1958EEC5_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		TargetController_add_TargetFound_mD4B9C4D3662E282B491F617E22AA14D3775AB57B(L_8, L_10, NULL);
		// controller.TargetLost += () =>
		// {
		//     Debug.LogFormat("Lost target {{id = {0}, name = {1}}}", controller.Target.runtimeID(), controller.Target.name());
		// };
		U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D* L_11 = V_0;
		NullCheck(L_11);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_12 = L_11->___controller_0;
		U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D* L_13 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CAddTargetControllerEventsU3Eb__1_m07C353FB93CB88EFF491F2719C0DC22583566C7E_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		TargetController_add_TargetLost_mB6790A7172B5C303E3143155672D27F4BF6E4ECC(L_12, L_14, NULL);
		// controller.TargetLoad += (Target target, bool status) =>
		// {
		//     Debug.LogFormat("Load target {{id = {0}, name = {1}, size = {2}}} into {3} => {4}", target.runtimeID(), target.name(), controller.Size, controller.Tracker.name, status);
		// };
		U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D* L_15 = V_0;
		NullCheck(L_15);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_16 = L_15->___controller_0;
		U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D* L_17 = V_0;
		Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* L_18 = (Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416*)il2cpp_codegen_object_new(Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Action_2__ctor_m0D18FC0D2E5634CBDC24690398EE59D4F1EB1101(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CAddTargetControllerEventsU3Eb__2_m252A19FEDC9812363786B9D8E8C8A2422C06EFBE_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		ImageTargetController_add_TargetLoad_m91633BAF45092ADF09E6F663EF292B891ACC505C(L_16, L_18, NULL);
		// controller.TargetUnload += (Target target, bool status) =>
		// {
		//     Debug.LogFormat("Unload target {{id = {0}, name = {1}}} => {2}", target.runtimeID(), target.name(), status);
		// };
		U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D* L_19 = V_0;
		NullCheck(L_19);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_20 = L_19->___controller_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_il2cpp_TypeInfo_var);
		Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* L_21 = ((U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_il2cpp_TypeInfo_var))->___U3CU3E9__6_3_1;
		Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* L_22 = L_21;
		G_B3_0 = L_22;
		G_B3_1 = L_20;
		if (L_22)
		{
			G_B4_0 = L_22;
			G_B4_1 = L_20;
			goto IL_0090;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_il2cpp_TypeInfo_var);
		U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6* L_23 = ((U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* L_24 = (Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416*)il2cpp_codegen_object_new(Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action_2__ctor_m0D18FC0D2E5634CBDC24690398EE59D4F1EB1101(L_24, L_23, (intptr_t)((void*)U3CU3Ec_U3CAddTargetControllerEventsU3Eb__6_3_m48B13F911F231E7FB558723A8C2A105AD6B84B12_RuntimeMethod_var), NULL);
		Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* L_25 = L_24;
		((U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_il2cpp_TypeInfo_var))->___U3CU3E9__6_3_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_il2cpp_TypeInfo_var))->___U3CU3E9__6_3_1), (void*)L_25);
		G_B4_0 = L_25;
		G_B4_1 = G_B3_1;
	}

IL_0090:
	{
		NullCheck(G_B4_1);
		ImageTargetController_add_TargetUnload_m118D9AE2DAB3F7F26C90A3D4B3F7E647503CDCF9(G_B4_1, G_B4_0, NULL);
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiTargetSameImageSample__ctor_m59A5FE8D5D57A6FC2DB90B9EF340C670F7087A6B (MultiTargetSameImageSample_t066AB4E08B50ED10C413006CBF31D81C29A6B8C4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mD270CEA73624EFDB27257959077EF77BB7946F46 (U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass3_0::<Start>b__0(easyar.Buffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CStartU3Eb__0_mA63898C1826BC47F7C7C58D6587CBFF2433037E9 (U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F* __this, Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3927EA6F55D709E3DC560DAEE392928B0592AEC9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(LoadImageBuffer(buffer.Clone(), "namecard", 0.09f));
		MultiTargetSameImageSample_t066AB4E08B50ED10C413006CBF31D81C29A6B8C4* L_0 = __this->___U3CU3E4__this_0;
		MultiTargetSameImageSample_t066AB4E08B50ED10C413006CBF31D81C29A6B8C4* L_1 = __this->___U3CU3E4__this_0;
		Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* L_2 = ___buffer0;
		NullCheck(L_2);
		Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* L_3;
		L_3 = Buffer_Clone_m5FE5FFB21CD5BFF7A659CFF2CABA0615E8594CEC(L_2, NULL);
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = MultiTargetSameImageSample_LoadImageBuffer_m2169311B30BBB32A2119992CE097564CBE5166AB(L_1, L_3, _stringLiteral3927EA6F55D709E3DC560DAEE392928B0592AEC9, (0.0900000036f), NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_4, NULL);
		// }));
		return;
	}
}
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass3_0::<Start>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CStartU3Eb__1_mA72AD29D91760314259EDBAF85A0C382CA8DF00E (U3CU3Ec__DisplayClass3_0_tE5B3AB5456AF8A12A5A7196B3628D6C4BF1A132F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// button.onClick.AddListener(() => { UnityEngine.SceneManagement.SceneManager.LoadScene(launcher); });
		String_t* L_0 = __this->___launcher_1;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_0, NULL);
		// button.onClick.AddListener(() => { UnityEngine.SceneManagement.SceneManager.LoadScene(launcher); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mAF238CAD497AD6714828B7E6770656682D4B66DF (U3CU3Ec__DisplayClass4_0_t9848FDAEDFB1BB65CFF35346EE2F3E1D2B1A10BD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass4_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1__ctor_m6DE80DB3449E76C52993AB24B347EDF8199F00D7 (U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass4_1::<LoadImageBuffer>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_1_U3CLoadImageBufferU3Eb__0_m89824E69A712986F7E09A176D231CF6463ADF844 (U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9* __this, const RuntimeMethod* method) 
{
	{
		// imageOptional = ImageHelper.decode(buffer);
		U3CU3Ec__DisplayClass4_0_t9848FDAEDFB1BB65CFF35346EE2F3E1D2B1A10BD* L_0 = __this->___CSU24U3CU3E8__locals1_2;
		NullCheck(L_0);
		Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* L_1 = L_0->___buffer_0;
		Optional_1_t5B6B0C0045FAE98F843037DDDF9FD8F793FE4741 L_2;
		L_2 = ImageHelper_decode_m360429BACE4313236CAA6C2088FEF800D76A928D(L_1, NULL);
		__this->___imageOptional_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___imageOptional_0))->___Some_2), (void*)NULL);
		// taskFinished = true;
		__this->___taskFinished_1 = (bool)1;
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageBufferU3Ed__4__ctor_mBE962DC8CA8C0E8F46F4683BB16221E76A08B530 (U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageBufferU3Ed__4_System_IDisposable_Dispose_mD432475726CC6DB9C2512241CE3F4C3626153DC4 (U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0014:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				U3CLoadImageBufferU3Ed__4_U3CU3Em__Finally1_m202A93251C658E2F08D9490B3CCF31F830F0CA8C(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		goto IL_0020;
	}

IL_0020:
	{
		return;
	}
}
// System.Boolean MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadImageBufferU3Ed__4_MoveNext_m57FCDAE9EA49B4E8C2110B08FACA84E67FC8EC8A (U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_OnNone_m2B39DBB26CB1AB0BD202F66A2E5CE4E6C4AEE646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_Value_m459F33FD3971F5E725032D66DAF86C653CBEC83F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_op_Implicit_m8A0D18A63624246F93D789CEFFB399C334309DCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t9848FDAEDFB1BB65CFF35346EE2F3E1D2B1A10BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_1_U3CLoadImageBufferU3Eb__0_m89824E69A712986F7E09A176D231CF6463ADF844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0180:
			{// begin fault (depth: 1)
				U3CLoadImageBufferU3Ed__4_System_IDisposable_Dispose_mD432475726CC6DB9C2512241CE3F4C3626153DC4(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_000c_1;
			}

IL_000c_1:
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0019_1;
			}

IL_0012_1:
			{
				goto IL_0020_1;
			}

IL_0014_1:
			{
				goto IL_00d5_1;
			}

IL_0019_1:
			{
				V_0 = (bool)0;
				goto IL_0188;
			}

IL_0020_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				U3CU3Ec__DisplayClass4_0_t9848FDAEDFB1BB65CFF35346EE2F3E1D2B1A10BD* L_3 = (U3CU3Ec__DisplayClass4_0_t9848FDAEDFB1BB65CFF35346EE2F3E1D2B1A10BD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t9848FDAEDFB1BB65CFF35346EE2F3E1D2B1A10BD_il2cpp_TypeInfo_var);
				NullCheck(L_3);
				U3CU3Ec__DisplayClass4_0__ctor_mAF238CAD497AD6714828B7E6770656682D4B66DF(L_3, NULL);
				__this->___U3CU3E8__1_6 = L_3;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_6), (void*)L_3);
				U3CU3Ec__DisplayClass4_0_t9848FDAEDFB1BB65CFF35346EE2F3E1D2B1A10BD* L_4 = __this->___U3CU3E8__1_6;
				Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* L_5 = __this->___buffer_2;
				NullCheck(L_4);
				L_4->___buffer_0 = L_5;
				Il2CppCodeGenWriteBarrier((void**)(&L_4->___buffer_0), (void*)L_5);
				// using (buffer)
				U3CU3Ec__DisplayClass4_0_t9848FDAEDFB1BB65CFF35346EE2F3E1D2B1A10BD* L_6 = __this->___U3CU3E8__1_6;
				NullCheck(L_6);
				Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* L_7 = L_6->___buffer_0;
				__this->___U3CU3Es__2_7 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_7), (void*)L_7);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9* L_8 = (U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				U3CU3Ec__DisplayClass4_1__ctor_m6DE80DB3449E76C52993AB24B347EDF8199F00D7(L_8, NULL);
				__this->___U3CU3E8__3_8 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__3_8), (void*)L_8);
				U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9* L_9 = __this->___U3CU3E8__3_8;
				U3CU3Ec__DisplayClass4_0_t9848FDAEDFB1BB65CFF35346EE2F3E1D2B1A10BD* L_10 = __this->___U3CU3E8__1_6;
				NullCheck(L_9);
				L_9->___CSU24U3CU3E8__locals1_2 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&L_9->___CSU24U3CU3E8__locals1_2), (void*)L_10);
				// Optional<easyar.Image> imageOptional = null;
				U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9* L_11 = __this->___U3CU3E8__3_8;
				Optional_1_t5B6B0C0045FAE98F843037DDDF9FD8F793FE4741 L_12;
				L_12 = Optional_1_op_Implicit_m8A0D18A63624246F93D789CEFFB399C334309DCA((Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43*)NULL, Optional_1_op_Implicit_m8A0D18A63624246F93D789CEFFB399C334309DCA_RuntimeMethod_var);
				NullCheck(L_11);
				L_11->___imageOptional_0 = L_12;
				Il2CppCodeGenWriteBarrier((void**)&(((&L_11->___imageOptional_0))->___Some_2), (void*)NULL);
				// bool taskFinished = false;
				U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9* L_13 = __this->___U3CU3E8__3_8;
				NullCheck(L_13);
				L_13->___taskFinished_1 = (bool)0;
				// EasyARController.Instance.Worker.Run(() =>
				// {
				//     imageOptional = ImageHelper.decode(buffer);
				//     taskFinished = true;
				// });
				il2cpp_codegen_runtime_class_init_inline(EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177_il2cpp_TypeInfo_var);
				EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177* L_14;
				L_14 = EasyARController_get_Instance_mFD49136A56B9212987C8989B045D463D2841C295_inline(NULL);
				NullCheck(L_14);
				ThreadWorker_t1ADEDA9DB0A15609FBEFE467B9CC337BF57D6D36* L_15;
				L_15 = EasyARController_get_Worker_mC0CE2BCBC0B1A9D6DCFAAE303EED4615168DD253_inline(L_14, NULL);
				U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9* L_16 = __this->___U3CU3E8__3_8;
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass4_1_U3CLoadImageBufferU3Eb__0_m89824E69A712986F7E09A176D231CF6463ADF844_RuntimeMethod_var), NULL);
				NullCheck(L_15);
				ThreadWorker_Run_mE19FF9BF70FEBC298AB58494630216F2FB775F03(L_15, L_17, NULL);
				goto IL_00de_1;
			}

IL_00ba_1:
			{
				// yield return 0;
				int32_t L_18 = 0;
				RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
				__this->___U3CU3E2__current_1 = L_19;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_19);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0188;
			}

IL_00d5_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_00de_1:
			{
				// while (!taskFinished)
				U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9* L_20 = __this->___U3CU3E8__3_8;
				NullCheck(L_20);
				bool L_21 = L_20->___taskFinished_1;
				V_2 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
				bool L_22 = V_2;
				if (L_22)
				{
					goto IL_00ba_1;
				}
			}
			{
				// if (imageOptional.OnNone)
				U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9* L_23 = __this->___U3CU3E8__3_8;
				NullCheck(L_23);
				Optional_1_t5B6B0C0045FAE98F843037DDDF9FD8F793FE4741* L_24 = (&L_23->___imageOptional_0);
				bool L_25;
				L_25 = Optional_1_get_OnNone_m2B39DBB26CB1AB0BD202F66A2E5CE4E6C4AEE646(L_24, Optional_1_get_OnNone_m2B39DBB26CB1AB0BD202F66A2E5CE4E6C4AEE646_RuntimeMethod_var);
				V_3 = L_25;
				bool L_26 = V_3;
				if (!L_26)
				{
					goto IL_0110_1;
				}
			}
			{
				// throw new Exception("invalid buffer");
				Exception_t* L_27 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
				NullCheck(L_27);
				Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEDEC07FD2FE1170778B26F3FC113D3EFF1C6FFED)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadImageBufferU3Ed__4_MoveNext_m57FCDAE9EA49B4E8C2110B08FACA84E67FC8EC8A_RuntimeMethod_var)));
			}

IL_0110_1:
			{
				// using (var image = imageOptional.Value)
				U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9* L_28 = __this->___U3CU3E8__3_8;
				NullCheck(L_28);
				Optional_1_t5B6B0C0045FAE98F843037DDDF9FD8F793FE4741* L_29 = (&L_28->___imageOptional_0);
				Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43* L_30;
				L_30 = Optional_1_get_Value_m459F33FD3971F5E725032D66DAF86C653CBEC83F(L_29, Optional_1_get_Value_m459F33FD3971F5E725032D66DAF86C653CBEC83F_RuntimeMethod_var);
				__this->___U3CimageU3E5__4_9 = L_30;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimageU3E5__4_9), (void*)L_30);
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_014a_1:
					{// begin finally (depth: 2)
						{
							Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43* L_31 = __this->___U3CimageU3E5__4_9;
							if (!L_31)
							{
								goto IL_015e_1;
							}
						}
						{
							Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43* L_32 = __this->___U3CimageU3E5__4_9;
							NullCheck(L_32);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_32);
						}

IL_015e_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// CreateMultipleTargetsFromOneImage(image, 10, name, scale);
					MultiTargetSameImageSample_t066AB4E08B50ED10C413006CBF31D81C29A6B8C4* L_33 = __this->___U3CU3E4__this_5;
					Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43* L_34 = __this->___U3CimageU3E5__4_9;
					String_t* L_35 = __this->___name_3;
					float L_36 = __this->___scale_4;
					NullCheck(L_33);
					MultiTargetSameImageSample_CreateMultipleTargetsFromOneImage_m320FE9D580743CDA65F432DD11F5FAE4804276B2(L_33, L_34, ((int32_t)10), L_35, L_36, NULL);
					goto IL_015f_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_015f_1:
			{
				__this->___U3CimageU3E5__4_9 = (Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CimageU3E5__4_9), (void*)(Image_tA8E8F2D58C143E9ADB13683D6BC93C8345F46A43*)NULL);
				__this->___U3CU3E8__3_8 = (U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__3_8), (void*)(U3CU3Ec__DisplayClass4_1_t764E22E6AB9C15D127AB9AE5EB81EE3B763C5AF9*)NULL);
				U3CLoadImageBufferU3Ed__4_U3CU3Em__Finally1_m202A93251C658E2F08D9490B3CCF31F830F0CA8C(__this, NULL);
				__this->___U3CU3Es__2_7 = (Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_7), (void*)(Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_0188;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0188:
	{
		bool L_37 = V_0;
		return L_37;
	}
}
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageBufferU3Ed__4_U3CU3Em__Finally1_m202A93251C658E2F08D9490B3CCF31F830F0CA8C (U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* L_0 = __this->___U3CU3Es__2_7;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Buffer_t644BF6560BDFFE92C2929A3CBF29C9B124212B54* L_1 = __this->___U3CU3Es__2_7;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// System.Object MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadImageBufferU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAC6F9FFD5BEF5058C262A53F3B062DB321361F39 (U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageBufferU3Ed__4_System_Collections_IEnumerator_Reset_m8D965857E6BD77F092EF4083C8EF25CA6BDDAA78 (U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadImageBufferU3Ed__4_System_Collections_IEnumerator_Reset_m8D965857E6BD77F092EF4083C8EF25CA6BDDAA78_RuntimeMethod_var)));
	}
}
// System.Object MultiTarget_SameImage.MultiTargetSameImageSample/<LoadImageBuffer>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadImageBufferU3Ed__4_System_Collections_IEnumerator_get_Current_m9BCEB8D11813C6DFB364CF097243DE0C09A7BEDC (U3CLoadImageBufferU3Ed__4_t0314ACB96F472525F8B798EA2F6D682C94B22EB8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m1E45743149EFDF6FD0ED5979CB4A9FFAC0A143EE (U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass6_0::<AddTargetControllerEvents>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CAddTargetControllerEventsU3Eb__0_m65711C65FE567AC897D840A879D699AC1958EEC5 (U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0410D7021B5FCF2EF5873BC8F8101B9AE4FEB04);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("Found target {{id = {0}, name = {1}}}", controller.Target.runtimeID(), controller.Target.name());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_2 = __this->___controller_0;
		NullCheck(L_2);
		ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_3;
		L_3 = ImageTargetController_get_Target_m51F32E8D1467745044F011BE80719C022258BC95_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 easyar.Target::runtimeID() */, L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_1;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_8 = __this->___controller_0;
		NullCheck(L_8);
		ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_9;
		L_9 = ImageTargetController_get_Target_m51F32E8D1467745044F011BE80719C022258BC95_inline(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String easyar.Target::name() */, L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralB0410D7021B5FCF2EF5873BC8F8101B9AE4FEB04, L_7, NULL);
		// };
		return;
	}
}
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass6_0::<AddTargetControllerEvents>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CAddTargetControllerEventsU3Eb__1_m07C353FB93CB88EFF491F2719C0DC22583566C7E (U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E3F345A25DD79391E7D2F5A1FB17A6998C39DDC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("Lost target {{id = {0}, name = {1}}}", controller.Target.runtimeID(), controller.Target.name());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_2 = __this->___controller_0;
		NullCheck(L_2);
		ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_3;
		L_3 = ImageTargetController_get_Target_m51F32E8D1467745044F011BE80719C022258BC95_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 easyar.Target::runtimeID() */, L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_1;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_8 = __this->___controller_0;
		NullCheck(L_8);
		ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_9;
		L_9 = ImageTargetController_get_Target_m51F32E8D1467745044F011BE80719C022258BC95_inline(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String easyar.Target::name() */, L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral5E3F345A25DD79391E7D2F5A1FB17A6998C39DDC, L_7, NULL);
		// };
		return;
	}
}
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c__DisplayClass6_0::<AddTargetControllerEvents>b__2(easyar.Target,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CAddTargetControllerEventsU3Eb__2_m252A19FEDC9812363786B9D8E8C8A2422C06EFBE (U3CU3Ec__DisplayClass6_0_tE52CC00688D2568EFAE870BECFC6EA65923D8D0D* __this, Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* ___target0, bool ___status1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E892D89E76900AA0C9D21D4E503234EAADD3377);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("Load target {{id = {0}, name = {1}, size = {2}}} into {3} => {4}", target.runtimeID(), target.name(), controller.Size, controller.Tracker.name, status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* L_2 = ___target0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 easyar.Target::runtimeID() */, L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_1;
		Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* L_7 = ___target0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String easyar.Target::name() */, L_7);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_6;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_10 = __this->___controller_0;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = ImageTargetController_get_Size_m81B778F198A8854934002A378CB53FF3A6D50225(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = L_11;
		RuntimeObject* L_13 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_9;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_15 = __this->___controller_0;
		NullCheck(L_15);
		ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* L_16;
		L_16 = ImageTargetController_get_Tracker_mC362601661B2A96E13FAC68FF2B09E0946BF9E73(L_15, NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_16, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_14;
		bool L_19 = ___status1;
		bool L_20 = L_19;
		RuntimeObject* L_21 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_21);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral7E892D89E76900AA0C9D21D4E503234EAADD3377, L_18, NULL);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF4EB8B606C8943205F9E7C323F855DBEEE941AF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6* L_0 = (U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6*)il2cpp_codegen_object_new(U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m2D73E81761C7722F36A578D4E6CFDBD9DDB296E3(L_0, NULL);
		((U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2D73E81761C7722F36A578D4E6CFDBD9DDB296E3 (U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MultiTarget_SameImage.MultiTargetSameImageSample/<>c::<AddTargetControllerEvents>b__6_3(easyar.Target,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAddTargetControllerEventsU3Eb__6_3_m48B13F911F231E7FB558723A8C2A105AD6B84B12 (U3CU3Ec_t24EF9BFEC98D56F91CB97DA3D654A0D34E2FD6B6* __this, Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* ___target0, bool ___status1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF716B0D4627FA118D23A0EBFC6830217C9CC2C23);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("Unload target {{id = {0}, name = {1}}} => {2}", target.runtimeID(), target.name(), status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* L_2 = ___target0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 easyar.Target::runtimeID() */, L_2);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_1;
		Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* L_7 = ___target0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String easyar.Target::name() */, L_7);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_6;
		bool L_10 = ___status1;
		bool L_11 = L_10;
		RuntimeObject* L_12 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralF716B0D4627FA118D23A0EBFC6830217C9CC2C23, L_9, NULL);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177* EasyARController_get_Instance_mFD49136A56B9212987C8989B045D463D2841C295_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static EasyARController Instance { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177_il2cpp_TypeInfo_var);
		EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177* L_0 = ((EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177_StaticFields*)il2cpp_codegen_static_fields_for(EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ThreadWorker_t1ADEDA9DB0A15609FBEFE467B9CC337BF57D6D36* EasyARController_get_Worker_mC0CE2BCBC0B1A9D6DCFAAE303EED4615168DD253_inline (EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177* __this, const RuntimeMethod* method) 
{
	{
		// public ThreadWorker Worker { get; private set; }
		ThreadWorker_t1ADEDA9DB0A15609FBEFE467B9CC337BF57D6D36* L_0 = __this->___U3CWorkerU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* ImageTargetController_get_Target_m51F32E8D1467745044F011BE80719C022258BC95_inline (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, const RuntimeMethod* method) 
{
	{
		// public ImageTarget Target { get; private set; }
		ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_0 = __this->___U3CTargetU3Ek__BackingField_11;
		return L_0;
	}
}
