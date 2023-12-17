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

// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B;
// System.Action`1<easyar.OutputFrame>
struct Action_1_t51C09D97035A969C5BE8AD3814D3435DFCBC7D36;
// System.Action`1<easyar.ARSession/SessionState>
struct Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4;
// System.Action`3<easyar.ImageTargetController,easyar.Target,System.Boolean>
struct Action_3_t0DC67ABCE6073BEE491A6230123FE12606C4D6CE;
// System.Collections.Generic.Dictionary`2<System.Int32,easyar.TargetController>
struct Dictionary_2_tDA9BDCAD90AB624680FE8388C5681B4D692FEFFC;
// System.Collections.Generic.IReadOnlyList`1<easyar.ARSession/ARCenterMode>
struct IReadOnlyList_1_t9AB3615049907C1504F1427696C3B8E984BF4244;
// System.Collections.Generic.List`1<System.Tuple`2<easyar.TargetController,UnityEngine.Pose>>
struct List_1_t47AF7A21A7E23F1FB8146739E4B3E8A1D1390177;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<easyar.FrameFilter>
struct List_1_t158A784F818ED74D8CBDE0E1C08AF2A6BA10BBDA;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Tuple`2<System.Boolean,easyar.Optional`1<System.Tuple`2<easyar.MotionTrackingStatus,UnityEngine.Pose>>>
struct Tuple_2_tD39566EEAAD3069AEF6436718B3A118344EF7CA6;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// easyar.ARAssembly
struct ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB;
// easyar.ARSession
struct ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// easyar.CameraDevice
struct CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE;
// easyar.CameraImageRenderer
struct CameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078;
// easyar.CameraParameters
struct CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// easyar.FeedbackFrameFork
struct FeedbackFrameFork_tBE1A8F042C98AE909C59B64B0F725B5045A92276;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// easyar.FramePlayer
struct FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52;
// easyar.FrameRecorder
struct FrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72;
// easyar.FrameSource
struct FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// easyar.ImageTracker
struct ImageTracker_t936EBB4B806DF339985DABBA2473BC1E6B533813;
// easyar.ImageTrackerFrameFilter
struct ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E;
// easyar.InputFrameFork
struct InputFrameFork_t2D1FE0BD3FE1C53ABC6BA0A41009156D8F69B486;
// easyar.InputFrameSink
struct InputFrameSink_tA6E249222893426FDB034E5CE860F0037DAE4F95;
// easyar.InputFrameThrottler
struct InputFrameThrottler_tA57E96AFCF65AFA62930F09485AB4919BE8CC714;
// easyar.InputFrameToFeedbackFrameAdapter
struct InputFrameToFeedbackFrameAdapter_tEA715356AB9DD6A39C7D0FAEE0EC3480E1CB9379;
// easyar.InputFrameToOutputFrameAdapter
struct InputFrameToOutputFrameAdapter_tB10AD4D1BF1C4F5A0B628D0EFCF45C8CB5BA65F2;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// easyar.OutputFrameBuffer
struct OutputFrameBuffer_t9636FA51588819DCE62366622F1374365AF22F72;
// easyar.OutputFrameFork
struct OutputFrameFork_t9A4919DC9013B229393DD0D8E68690363DB81542;
// easyar.OutputFrameJoin
struct OutputFrameJoin_t0F4FDAA442E8021FEC5229D5800A574C131D5AC0;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// easyar.RenderCameraController
struct RenderCameraController_t9D339F375620BCA2966E655CB4BA18AFF9F43C58;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Sample.Sample
struct Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// easyar.ARSession/FrameChangeAction
struct FrameChangeAction_t22915014AF19BCD5BA244E1A821751FAC6A2C2B3;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// easyar.ImageTrackerFrameFilter/ResultParameters
struct ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Sample.Sample/<>c
struct U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4;
// Sample.Sample/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t4856C80B707C1E630D80DF9D886DCC32C654E6B5;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t4856C80B707C1E630D80DF9D886DCC32C654E6B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral106D190BFD0D61EC615BCF5283156C5869FDD7FC;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral255FBDA0A6F231C9011577CD61755542A4D386E9;
IL2CPP_EXTERN_C String_t* _stringLiteral2857526C6CA87F5E42495CA8FC55534F69207042;
IL2CPP_EXTERN_C String_t* _stringLiteral2A834884703A6AB00E3817C747001A08D297762B;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3DF22942163DC77B0DAEE048614E29D96E4493DC;
IL2CPP_EXTERN_C String_t* _stringLiteral4A25544E6922FB90F714C62E18485457D83197D5;
IL2CPP_EXTERN_C String_t* _stringLiteral58B4B6B5AB41667F374F84DEC54D10B8267FFF0E;
IL2CPP_EXTERN_C String_t* _stringLiteral6F1E5AFA37BE0B34A61DFCF1B63F29E41A216350;
IL2CPP_EXTERN_C String_t* _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
IL2CPP_EXTERN_C String_t* _stringLiteral985274B190C603F91B8ED3BCF5FE459BF5F8F9F4;
IL2CPP_EXTERN_C String_t* _stringLiteral9C6E68B6E8E368C75DADF822A111011B6FD07448;
IL2CPP_EXTERN_C String_t* _stringLiteralACD717DDDF2C8663A15B4500F2ADA2603CDDF470;
IL2CPP_EXTERN_C String_t* _stringLiteralADD3B5F2D67647A225CB10788BB728D4EA24E40B;
IL2CPP_EXTERN_C String_t* _stringLiteralAEB85D990701A225F98E51C045C556F4A16E8801;
IL2CPP_EXTERN_C String_t* _stringLiteralB387B4CA2FBB682A7B5403AC7170A349FC9FB2D6;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB7AC609EB421E90A3C71B212DE15CE2DDA7C5902;
IL2CPP_EXTERN_C String_t* _stringLiteralC7A477AA5F811EB830AA1D85ED9CB56D3FAC5377;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDCBA8E8A78BF9FA09D32F01B85DE5AA10992BB11;
IL2CPP_EXTERN_C String_t* _stringLiteralE25D50F078B99F92E24BE93168F2B42D0F4D08C7;
IL2CPP_EXTERN_C String_t* _stringLiteralEABF62C859B1F7A2BC2CF23ECAE0A046C8FC0657;
IL2CPP_EXTERN_C String_t* _stringLiteralF4E7425B0A1E0A6DA2A915FE5B4C11356D77B0C5;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_mE53A3FFA4ABE459947ED065249FDD6795BECAB97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_ToString_m1BDCF86EB40EA7486C9CDB80F4492E170391A75E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_OnNone_mAC3CD47FCD451FCD2BAEC17A2FF077861D17393C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_OnSome_m94E6F012A0194B4B6360DBEA5BA2DD4B99539808_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_Value_m84B4FB73B1A5FC605298D7A12EC51DD054829C19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_op_Implicit_m8B9C76B073F94CC04B85F71EE841616A211F883D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__7_0_mD0EDE7CD982D42250FD8CF78CC69F2E016DA8D51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CAwakeU3Eb__1_mDBE31A3BC6C82AC7AAF87BD19C37C10D9C5DE0A7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t176ABD2C0694A0373C37D26FB63C502DFC361F1E 
{
};

// easyar.ARAssembly
struct ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB  : public RuntimeObject
{
	// easyar.InputFrameThrottler easyar.ARAssembly::iFrameThrottler
	InputFrameThrottler_tA57E96AFCF65AFA62930F09485AB4919BE8CC714* ___iFrameThrottler_0;
	// easyar.InputFrameFork easyar.ARAssembly::iFrameFork
	InputFrameFork_t2D1FE0BD3FE1C53ABC6BA0A41009156D8F69B486* ___iFrameFork_1;
	// easyar.InputFrameToOutputFrameAdapter easyar.ARAssembly::i2OAdapter
	InputFrameToOutputFrameAdapter_tB10AD4D1BF1C4F5A0B628D0EFCF45C8CB5BA65F2* ___i2OAdapter_2;
	// easyar.InputFrameToFeedbackFrameAdapter easyar.ARAssembly::i2FAdapter
	InputFrameToFeedbackFrameAdapter_tEA715356AB9DD6A39C7D0FAEE0EC3480E1CB9379* ___i2FAdapter_3;
	// easyar.FeedbackFrameFork easyar.ARAssembly::fbFrameFork
	FeedbackFrameFork_tBE1A8F042C98AE909C59B64B0F725B5045A92276* ___fbFrameFork_4;
	// easyar.OutputFrameJoin easyar.ARAssembly::oFrameJoin
	OutputFrameJoin_t0F4FDAA442E8021FEC5229D5800A574C131D5AC0* ___oFrameJoin_5;
	// easyar.OutputFrameFork easyar.ARAssembly::oFrameFork
	OutputFrameFork_t9A4919DC9013B229393DD0D8E68690363DB81542* ___oFrameFork_6;
	// easyar.OutputFrameBuffer easyar.ARAssembly::oFrameBuffer
	OutputFrameBuffer_t9636FA51588819DCE62366622F1374365AF22F72* ___oFrameBuffer_7;
	// easyar.FramePlayer easyar.ARAssembly::framePlayer
	FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* ___framePlayer_8;
	// System.Int32 easyar.ARAssembly::extraBufferCapacity
	int32_t ___extraBufferCapacity_9;
	// easyar.FrameSource easyar.ARAssembly::<FrameSource>k__BackingField
	FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD* ___U3CFrameSourceU3Ek__BackingField_10;
	// easyar.FrameRecorder easyar.ARAssembly::<FrameRecorder>k__BackingField
	FrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72* ___U3CFrameRecorderU3Ek__BackingField_11;
	// System.Collections.Generic.List`1<easyar.FrameFilter> easyar.ARAssembly::<FrameFilters>k__BackingField
	List_1_t158A784F818ED74D8CBDE0E1C08AF2A6BA10BBDA* ___U3CFrameFiltersU3Ek__BackingField_12;
	// UnityEngine.Camera easyar.ARAssembly::<Camera>k__BackingField
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___U3CCameraU3Ek__BackingField_13;
	// System.Boolean easyar.ARAssembly::<Ready>k__BackingField
	bool ___U3CReadyU3Ek__BackingField_14;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

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

// easyar.ImageTrackerFrameFilter/ResultParameters
struct ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8  : public RuntimeObject
{
	// System.Boolean easyar.ImageTrackerFrameFilter/ResultParameters::EnablePersistentTargetInstance
	bool ___EnablePersistentTargetInstance_0;
	// System.Boolean easyar.ImageTrackerFrameFilter/ResultParameters::EnableMotionFusion
	bool ___EnableMotionFusion_1;
};

// Sample.Sample/<>c
struct U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4  : public RuntimeObject
{
};

struct U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_StaticFields
{
	// Sample.Sample/<>c Sample.Sample/<>c::<>9
	U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4* ___U3CU3E9_0;
	// System.Action`1<easyar.ARSession/SessionState> Sample.Sample/<>c::<>9__7_0
	Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* ___U3CU3E9__7_0_1;
};

// Sample.Sample/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t4856C80B707C1E630D80DF9D886DCC32C654E6B5  : public RuntimeObject
{
	// System.String Sample.Sample/<>c__DisplayClass7_0::launcher
	String_t* ___launcher_0;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// easyar.Optional`1<easyar.CameraParameters>
struct Optional_1_tDDCD90151BF622BB5577511BDAC1116BAF12870F 
{
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 ___None_1;
	// T easyar.Optional`1::Some
	CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* ___Some_2;
};

// easyar.Optional`1<System.DateTime>
struct Optional_1_t54E6FAC254FB39D5298CE6100EC7CEF74FD5E800 
{
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 ___None_1;
	// T easyar.Optional`1::Some
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___Some_2;
};

// easyar.Optional`1<System.Int32Enum>
struct Optional_1_t626F228AEB26A37FE7C4FE47FB91EE5C9F809B30 
{
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 ___None_1;
	// T easyar.Optional`1::Some
	int32_t ___Some_2;
};

// easyar.Optional`1<easyar.MotionTrackingStatus>
struct Optional_1_tAC7AFE052BECEC66709ECEB4359F18E2AAF181A4 
{
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 ___None_1;
	// T easyar.Optional`1::Some
	int32_t ___Some_2;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<easyar.ARSession/SessionState>
struct Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// easyar.ARSession
struct ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// easyar.ARSession/ARCenterMode easyar.ARSession::CenterMode
	int32_t ___CenterMode_4;
	// easyar.ARSession/ARHorizontalFlipMode easyar.ARSession::HorizontalFlipNormal
	int32_t ___HorizontalFlipNormal_5;
	// easyar.ARSession/ARHorizontalFlipMode easyar.ARSession::HorizontalFlipFront
	int32_t ___HorizontalFlipFront_6;
	// UnityEngine.GameObject easyar.ARSession::specificTargetCenter
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___specificTargetCenter_7;
	// System.Int32 easyar.ARSession::frameIndex
	int32_t ___frameIndex_8;
	// System.Tuple`2<System.Boolean,easyar.Optional`1<System.Tuple`2<easyar.MotionTrackingStatus,UnityEngine.Pose>>> easyar.ARSession::frameStatus
	Tuple_2_tD39566EEAAD3069AEF6436718B3A118344EF7CA6* ___frameStatus_9;
	// easyar.ARSession/SessionState easyar.ARSession::state
	int32_t ___state_10;
	// easyar.ARSession/FrameChangeAction easyar.ARSession::FrameChange
	FrameChangeAction_t22915014AF19BCD5BA244E1A821751FAC6A2C2B3* ___FrameChange_11;
	// System.Action`1<easyar.OutputFrame> easyar.ARSession::FrameUpdate
	Action_1_t51C09D97035A969C5BE8AD3814D3435DFCBC7D36* ___FrameUpdate_12;
	// System.Action`1<easyar.ARSession/SessionState> easyar.ARSession::StateChanged
	Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* ___StateChanged_13;
	// UnityEngine.GameObject easyar.ARSession::<CenterObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CCenterObjectU3Ek__BackingField_14;
	// easyar.ARAssembly easyar.ARSession::<Assembly>k__BackingField
	ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* ___U3CAssemblyU3Ek__BackingField_15;
	// easyar.Optional`1<easyar.CameraParameters> easyar.ARSession::<FrameCameraParameters>k__BackingField
	Optional_1_tDDCD90151BF622BB5577511BDAC1116BAF12870F ___U3CFrameCameraParametersU3Ek__BackingField_16;
};

// easyar.FrameFilter
struct FrameFilter_tEF74686432B3C28E888F223945B0BF3FC58AD214  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean easyar.FrameFilter::horizontalFlip
	bool ___horizontalFlip_4;
	// easyar.Optional`1<System.Collections.Generic.List`1<System.Tuple`2<easyar.TargetController,UnityEngine.Pose>>> easyar.FrameFilter::targetResults
	Optional_1_t5AF2475D02CCAD63B40183BFA862E1BC1E764B11 ___targetResults_5;
};

// easyar.FrameSource
struct FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// easyar.InputFrameSink easyar.FrameSource::sink
	InputFrameSink_tA6E249222893426FDB034E5CE860F0037DAE4F95* ___sink_4;
	// easyar.ARSession easyar.FrameSource::arSession
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* ___arSession_5;
	// System.Int32 easyar.FrameSource::bufferCapacity
	int32_t ___bufferCapacity_6;
	// easyar.CameraImageRenderer easyar.FrameSource::cameraRenderer
	CameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078* ___cameraRenderer_8;
	// easyar.RenderCameraController easyar.FrameSource::renderCamera
	RenderCameraController_t9D339F375620BCA2966E655CB4BA18AFF9F43C58* ___renderCamera_9;
	// UnityEngine.Camera easyar.FrameSource::arCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___arCamera_10;
};

struct FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD_StaticFields
{
	// System.Collections.Generic.IReadOnlyList`1<easyar.ARSession/ARCenterMode> easyar.FrameSource::allCenterMode
	RuntimeObject* ___allCenterMode_7;
};

// Sample.Sample
struct Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button Sample.Sample::BackButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___BackButton_4;
	// UnityEngine.UI.Text Sample.Sample::Status
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Status_5;
	// easyar.ARSession Sample.Sample::Session
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* ___Session_6;
	// UnityEngine.Camera Sample.Sample::MainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___MainCamera_7;
	// System.String Sample.Sample::deviceModel
	String_t* ___deviceModel_8;
	// easyar.ImageTrackerFrameFilter Sample.Sample::tracker
	ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* ___tracker_9;
};

struct Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5_StaticFields
{
	// easyar.Optional`1<System.DateTime> Sample.Sample::trialCounter
	Optional_1_t54E6FAC254FB39D5298CE6100EC7CEF74FD5E800 ___trialCounter_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// easyar.CameraDeviceFrameSource
struct CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92  : public FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD
{
	// easyar.CameraDevice easyar.CameraDeviceFrameSource::<Device>k__BackingField
	CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* ___U3CDeviceU3Ek__BackingField_11;
	// easyar.CameraDeviceFocusMode easyar.CameraDeviceFrameSource::FocusMode
	int32_t ___FocusMode_12;
	// UnityEngine.Vector2 easyar.CameraDeviceFrameSource::CameraSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___CameraSize_13;
	// easyar.CameraDeviceFrameSource/CameraDeviceOpenMethod easyar.CameraDeviceFrameSource::CameraOpenMethod
	int32_t ___CameraOpenMethod_14;
	// easyar.CameraDeviceType easyar.CameraDeviceFrameSource::CameraType
	int32_t ___CameraType_15;
	// System.Int32 easyar.CameraDeviceFrameSource::CameraIndex
	int32_t ___CameraIndex_16;
	// easyar.CameraDevicePreference easyar.CameraDeviceFrameSource::cameraPreference
	int32_t ___cameraPreference_18;
	// easyar.CameraParameters easyar.CameraDeviceFrameSource::parameters
	CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* ___parameters_19;
	// System.Boolean easyar.CameraDeviceFrameSource::willOpen
	bool ___willOpen_20;
	// System.Boolean easyar.CameraDeviceFrameSource::disableAutoOpen
	bool ___disableAutoOpen_21;
	// System.Action easyar.CameraDeviceFrameSource::DeviceCreated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___DeviceCreated_22;
	// System.Action easyar.CameraDeviceFrameSource::DeviceOpened
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___DeviceOpened_23;
	// System.Action easyar.CameraDeviceFrameSource::DeviceClosed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___DeviceClosed_24;
};

struct CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_StaticFields
{
	// System.Collections.Generic.IReadOnlyList`1<easyar.ARSession/ARCenterMode> easyar.CameraDeviceFrameSource::availableCenterMode
	RuntimeObject* ___availableCenterMode_17;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// easyar.ImageTrackerFrameFilter
struct ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E  : public FrameFilter_tEF74686432B3C28E888F223945B0BF3FC58AD214
{
	// UnityEngine.Events.UnityEvent easyar.ImageTrackerFrameFilter::onTargetFound
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onTargetFound_6;
	// UnityEngine.Events.UnityEvent easyar.ImageTrackerFrameFilter::onTargetLost
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onTargetLost_7;
	// easyar.ImageTracker easyar.ImageTrackerFrameFilter::<Tracker>k__BackingField
	ImageTracker_t936EBB4B806DF339985DABBA2473BC1E6B533813* ___U3CTrackerU3Ek__BackingField_8;
	// easyar.ImageTrackerMode easyar.ImageTrackerFrameFilter::TrackerMode
	int32_t ___TrackerMode_9;
	// System.Int32 easyar.ImageTrackerFrameFilter::simultaneousNum
	int32_t ___simultaneousNum_10;
	// System.Collections.Generic.List`1<System.Int32> easyar.ImageTrackerFrameFilter::previousTargetIDs
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___previousTargetIDs_11;
	// System.Collections.Generic.Dictionary`2<System.Int32,easyar.TargetController> easyar.ImageTrackerFrameFilter::allTargetController
	Dictionary_2_tDA9BDCAD90AB624680FE8388C5681B4D692FEFFC* ___allTargetController_12;
	// System.Boolean easyar.ImageTrackerFrameFilter::isStarted
	bool ___isStarted_13;
	// easyar.ImageTrackerFrameFilter/ResultParameters easyar.ImageTrackerFrameFilter::resultType
	ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8* ___resultType_14;
	// System.Action`3<easyar.ImageTargetController,easyar.Target,System.Boolean> easyar.ImageTrackerFrameFilter::TargetLoad
	Action_3_t0DC67ABCE6073BEE491A6230123FE12606C4D6CE* ___TargetLoad_15;
	// System.Action`3<easyar.ImageTargetController,easyar.Target,System.Boolean> easyar.ImageTrackerFrameFilter::TargetUnload
	Action_3_t0DC67ABCE6073BEE491A6230123FE12606C4D6CE* ___TargetUnload_16;
	// System.Action easyar.ImageTrackerFrameFilter::SimultaneousNumChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___SimultaneousNumChanged_17;
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

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.String easyar.Optional`1<System.Int32Enum>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Optional_1_ToString_mB6D22113DF291BAD9A8064D2070EB6F9305D6FFA_gshared (Optional_1_t626F228AEB26A37FE7C4FE47FB91EE5C9F809B30* __this, const RuntimeMethod* method) ;
// easyar.Optional`1<T> easyar.Optional`1<System.DateTime>::op_Implicit(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Optional_1_t54E6FAC254FB39D5298CE6100EC7CEF74FD5E800 Optional_1_op_Implicit_m8B9C76B073F94CC04B85F71EE841616A211F883D_gshared (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___v0, const RuntimeMethod* method) ;
// System.Boolean easyar.Optional`1<System.DateTime>::get_OnSome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Optional_1_get_OnSome_m94E6F012A0194B4B6360DBEA5BA2DD4B99539808_gshared (Optional_1_t54E6FAC254FB39D5298CE6100EC7CEF74FD5E800* __this, const RuntimeMethod* method) ;
// T easyar.Optional`1<System.DateTime>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Optional_1_get_Value_m84B4FB73B1A5FC605298D7A12EC51DD054829C19_gshared (Optional_1_t54E6FAC254FB39D5298CE6100EC7CEF74FD5E800* __this, const RuntimeMethod* method) ;
// System.Boolean easyar.Optional`1<System.DateTime>::get_OnNone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Optional_1_get_OnNone_mAC3CD47FCD451FCD2BAEC17A2FF077861D17393C_gshared (Optional_1_t54E6FAC254FB39D5298CE6100EC7CEF74FD5E800* __this, const RuntimeMethod* method) ;

// System.Void Sample.Sample/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m4C79359D1BEDB55DB4C43F2C5E36EA3900E8468B (U3CU3Ec__DisplayClass7_0_t4856C80B707C1E630D80DF9D886DCC32C654E6B5* __this, const RuntimeMethod* method) ;
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
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.String>(System.String)
inline String_t* AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<easyar.ImageTrackerFrameFilter>()
inline ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* Component_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_mE53A3FFA4ABE459947ED065249FDD6795BECAB97 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void System.Action`1<easyar.ARSession/SessionState>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mCA14ED46DE03E238A392A26547FC33AEA32EC333 (Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void easyar.ARSession::add_StateChanged(System.Action`1<easyar.ARSession/SessionState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSession_add_StateChanged_mB48474C43E473D3D6BE692B2304C4218DE66D16E (ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* __this, Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_deviceModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_deviceModel_m8587189FA95DA31E470F864208BC6FB6B35F6D06 (const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0 (const RuntimeMethod* method) ;
// easyar.ARAssembly easyar.ARSession::get_Assembly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* ARSession_get_Assembly_mD1EE98F79892BB336FDEB644E9E2FE68B5EF3994_inline (ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* __this, const RuntimeMethod* method) ;
// easyar.FrameSource easyar.ARAssembly::get_FrameSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD* ARAssembly_get_FrameSource_m90C2102DAB3E58792051000792948892BD1F1377_inline (ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// easyar.Optional`1<easyar.MotionTrackingStatus> easyar.ARSession::get_TrackingStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Optional_1_tAC7AFE052BECEC66709ECEB4359F18E2AAF181A4 ARSession_get_TrackingStatus_m52BB5973FA0C5433DB5DE85A2CC9EACEB394B0E7 (ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* __this, const RuntimeMethod* method) ;
// System.String easyar.Optional`1<easyar.MotionTrackingStatus>::ToString()
inline String_t* Optional_1_ToString_m1BDCF86EB40EA7486C9CDB80F4492E170391A75E (Optional_1_tAC7AFE052BECEC66709ECEB4359F18E2AAF181A4* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Optional_1_tAC7AFE052BECEC66709ECEB4359F18E2AAF181A4*, const RuntimeMethod*))Optional_1_ToString_mB6D22113DF291BAD9A8064D2070EB6F9305D6FFA_gshared)(__this, method);
}
// easyar.ARSession/SessionState easyar.ARSession::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_State_mD075FC4C3644F367D17BE26B7D6A018925655245_inline (ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// easyar.ImageTrackerFrameFilter/ResultParameters easyar.ImageTrackerFrameFilter::get_ResultType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8* ImageTrackerFrameFilter_get_ResultType_m009908762EC32B7AF980A05771FC87F5FD3D2D2C_inline (ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String easyar.Engine::errorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Engine_errorMessage_mA1399F0A71564361CBFB87A9B28ADBB9C7979589 (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// easyar.Optional`1<T> easyar.Optional`1<System.DateTime>::op_Implicit(T)
inline Optional_1_t54E6FAC254FB39D5298CE6100EC7CEF74FD5E800 Optional_1_op_Implicit_m8B9C76B073F94CC04B85F71EE841616A211F883D (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___v0, const RuntimeMethod* method)
{
	return ((  Optional_1_t54E6FAC254FB39D5298CE6100EC7CEF74FD5E800 (*) (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, const RuntimeMethod*))Optional_1_op_Implicit_m8B9C76B073F94CC04B85F71EE841616A211F883D_gshared)(___v0, method);
}
// System.Boolean easyar.Optional`1<System.DateTime>::get_OnSome()
inline bool Optional_1_get_OnSome_m94E6F012A0194B4B6360DBEA5BA2DD4B99539808 (Optional_1_t54E6FAC254FB39D5298CE6100EC7CEF74FD5E800* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Optional_1_t54E6FAC254FB39D5298CE6100EC7CEF74FD5E800*, const RuntimeMethod*))Optional_1_get_OnSome_m94E6F012A0194B4B6360DBEA5BA2DD4B99539808_gshared)(__this, method);
}
// System.Boolean easyar.FrameSource::IsCustomCamera(easyar.FrameSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FrameSource_IsCustomCamera_m90A1B2E0CD8E37E6B17838112FD472E37D9C6AE3 (FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD* ___source0, const RuntimeMethod* method) ;
// T easyar.Optional`1<System.DateTime>::get_Value()
inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Optional_1_get_Value_m84B4FB73B1A5FC605298D7A12EC51DD054829C19 (Optional_1_t54E6FAC254FB39D5298CE6100EC7CEF74FD5E800* __this, const RuntimeMethod* method)
{
	return ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*) (Optional_1_t54E6FAC254FB39D5298CE6100EC7CEF74FD5E800*, const RuntimeMethod*))Optional_1_get_Value_m84B4FB73B1A5FC605298D7A12EC51DD054829C19_gshared)(__this, method);
}
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_Equality_mFB772D884EA91082BFC51212E79B9D33A67CA66F (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void easyar.ImageTrackerFrameFilter/ResultParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultParameters__ctor_m05D095E12442A217353D8E1A64DF9659AE65D41C (ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8* __this, const RuntimeMethod* method) ;
// System.Void easyar.ImageTrackerFrameFilter::set_ResultType(easyar.ImageTrackerFrameFilter/ResultParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackerFrameFilter_set_ResultType_mAB0313C03DF9D758B5168D467257981739BD4E3F (ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* __this, ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void Sample.Sample/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA6F4DEF0E4396272DF8E085D1A2184FCF539A390 (U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4* __this, const RuntimeMethod* method) ;
// System.Boolean easyar.Optional`1<System.DateTime>::get_OnNone()
inline bool Optional_1_get_OnNone_mAC3CD47FCD451FCD2BAEC17A2FF077861D17393C (Optional_1_t54E6FAC254FB39D5298CE6100EC7CEF74FD5E800* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Optional_1_t54E6FAC254FB39D5298CE6100EC7CEF74FD5E800*, const RuntimeMethod*))Optional_1_get_OnNone_mAC3CD47FCD451FCD2BAEC17A2FF077861D17393C_gshared)(__this, method);
}
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
// System.Void Sample.Sample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_Awake_mBA2FFBADB7CD95435F2855219F85ED3ABE6EBA5D (Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_mE53A3FFA4ABE459947ED065249FDD6795BECAB97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__7_0_mD0EDE7CD982D42250FD8CF78CC69F2E016DA8D51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CAwakeU3Eb__1_mDBE31A3BC6C82AC7AAF87BD19C37C10D9C5DE0A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t4856C80B707C1E630D80DF9D886DCC32C654E6B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral255FBDA0A6F231C9011577CD61755542A4D386E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2857526C6CA87F5E42495CA8FC55534F69207042);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DF22942163DC77B0DAEE048614E29D96E4493DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A25544E6922FB90F714C62E18485457D83197D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB387B4CA2FBB682A7B5403AC7170A349FC9FB2D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t4856C80B707C1E630D80DF9D886DCC32C654E6B5* V_0 = NULL;
	bool V_1 = false;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_2 = NULL;
	bool V_3 = false;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* G_B15_0 = NULL;
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* G_B15_1 = NULL;
	Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* G_B14_0 = NULL;
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* G_B14_1 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_t4856C80B707C1E630D80DF9D886DCC32C654E6B5* L_0 = (U3CU3Ec__DisplayClass7_0_t4856C80B707C1E630D80DF9D886DCC32C654E6B5*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t4856C80B707C1E630D80DF9D886DCC32C654E6B5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_m4C79359D1BEDB55DB4C43F2C5E36EA3900E8468B(L_0, NULL);
		V_0 = L_0;
		// var launcher = "AllSamplesLauncher";
		U3CU3Ec__DisplayClass7_0_t4856C80B707C1E630D80DF9D886DCC32C654E6B5* L_1 = V_0;
		NullCheck(L_1);
		L_1->___launcher_0 = _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___launcher_0), (void*)_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		// if (Application.CanStreamedLevelBeLoaded(launcher))
		U3CU3Ec__DisplayClass7_0_t4856C80B707C1E630D80DF9D886DCC32C654E6B5* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = L_2->___launcher_0;
		bool L_4;
		L_4 = Application_CanStreamedLevelBeLoaded_mA1BAA60593E8679BAFA6A16595166774AE172ADC(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// var button = BackButton.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___BackButton_4;
		NullCheck(L_6);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7;
		L_7 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_6, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		V_2 = L_7;
		// button.onClick.AddListener(() =>
		// {
		//     UnityEngine.SceneManagement.SceneManager.LoadScene(launcher);
		// });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = V_2;
		NullCheck(L_8);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_9;
		L_9 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_8, NULL);
		U3CU3Ec__DisplayClass7_0_t4856C80B707C1E630D80DF9D886DCC32C654E6B5* L_10 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CAwakeU3Eb__1_mDBE31A3BC6C82AC7AAF87BD19C37C10D9C5DE0A7_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_9, L_11, NULL);
		goto IL_005d;
	}

IL_0049:
	{
		// BackButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___BackButton_4;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
	}

IL_005d:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_14;
		L_14 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_3 = (bool)((((int32_t)L_14) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00e7;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		{
			// using (var buildClass = new AndroidJavaClass("android.os.Build"))
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_16 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
			NullCheck(L_16);
			AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_16, _stringLiteral4A25544E6922FB90F714C62E18485457D83197D5, NULL);
			V_4 = L_16;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00c3_1:
				{// begin finally (depth: 2)
					{
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_17 = V_4;
						if (!L_17)
						{
							goto IL_00cf_1;
						}
					}
					{
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_18 = V_4;
						NullCheck(L_18);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
					}

IL_00cf_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// deviceModel = $"(Device = {buildClass.GetStatic<string>("DEVICE")}, Model = {buildClass.GetStatic<string>("MODEL")})";
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
				NullCheck(L_20);
				ArrayElementTypeCheck (L_20, _stringLiteralB387B4CA2FBB682A7B5403AC7170A349FC9FB2D6);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB387B4CA2FBB682A7B5403AC7170A349FC9FB2D6);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_22 = V_4;
				NullCheck(L_22);
				String_t* L_23;
				L_23 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_22, _stringLiteral3DF22942163DC77B0DAEE048614E29D96E4493DC, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
				NullCheck(L_21);
				ArrayElementTypeCheck (L_21, L_23);
				(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_23);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_21;
				NullCheck(L_24);
				ArrayElementTypeCheck (L_24, _stringLiteral255FBDA0A6F231C9011577CD61755542A4D386E9);
				(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral255FBDA0A6F231C9011577CD61755542A4D386E9);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_26 = V_4;
				NullCheck(L_26);
				String_t* L_27;
				L_27 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_26, _stringLiteral2857526C6CA87F5E42495CA8FC55534F69207042, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
				NullCheck(L_25);
				ArrayElementTypeCheck (L_25, L_27);
				(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_27);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_25;
				NullCheck(L_28);
				ArrayElementTypeCheck (L_28, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
				(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
				String_t* L_29;
				L_29 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_28, NULL);
				__this->___deviceModel_8 = L_29;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceModel_8), (void*)L_29);
				goto IL_00d0_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00d0_1:
		{
			goto IL_00e6;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d3;
		}
		throw e;
	}

CATCH_00d3:
	{// begin catch(System.Exception)
		// catch (Exception e) { deviceModel = e.Message; }
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// catch (Exception e) { deviceModel = e.Message; }
		Exception_t* L_30 = V_5;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_30);
		__this->___deviceModel_8 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceModel_8), (void*)L_31);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e6;
	}// end catch (depth: 1)

IL_00e6:
	{
	}

IL_00e7:
	{
		// tracker = Session.GetComponentInChildren<ImageTrackerFrameFilter>();
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_32 = __this->___Session_6;
		NullCheck(L_32);
		ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* L_33;
		L_33 = Component_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_mE53A3FFA4ABE459947ED065249FDD6795BECAB97(L_32, Component_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_mE53A3FFA4ABE459947ED065249FDD6795BECAB97_RuntimeMethod_var);
		__this->___tracker_9 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tracker_9), (void*)L_33);
		// Session.StateChanged += (state) =>
		// {
		//     if (state == ARSession.SessionState.Ready)
		//     {
		//         if (trialCounter.OnNone)
		//         {
		//             trialCounter = DateTime.Now;
		//         }
		//     }
		// };
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_34 = __this->___Session_6;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_il2cpp_TypeInfo_var);
		Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* L_35 = ((U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1;
		Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* L_36 = L_35;
		G_B14_0 = L_36;
		G_B14_1 = L_34;
		if (L_36)
		{
			G_B15_0 = L_36;
			G_B15_1 = L_34;
			goto IL_011d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_il2cpp_TypeInfo_var);
		U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4* L_37 = ((U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* L_38 = (Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4*)il2cpp_codegen_object_new(Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Action_1__ctor_mCA14ED46DE03E238A392A26547FC33AEA32EC333(L_38, L_37, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__7_0_mD0EDE7CD982D42250FD8CF78CC69F2E016DA8D51_RuntimeMethod_var), NULL);
		Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* L_39 = L_38;
		((U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1), (void*)L_39);
		G_B15_0 = L_39;
		G_B15_1 = G_B14_1;
	}

IL_011d:
	{
		NullCheck(G_B15_1);
		ARSession_add_StateChanged_mB48474C43E473D3D6BE692B2304C4218DE66D16E(G_B15_1, G_B15_0, NULL);
		// }
		return;
	}
}
// System.Void Sample.Sample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_Update_m24A870ADF6FEE1588D8F121A41C51B8BD29CBAB8 (Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_ToString_m1BDCF86EB40EA7486C9CDB80F4492E170391A75E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_OnSome_m94E6F012A0194B4B6360DBEA5BA2DD4B99539808_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_Value_m84B4FB73B1A5FC605298D7A12EC51DD054829C19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_op_Implicit_m8B9C76B073F94CC04B85F71EE841616A211F883D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral106D190BFD0D61EC615BCF5283156C5869FDD7FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A834884703A6AB00E3817C747001A08D297762B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B4B6B5AB41667F374F84DEC54D10B8267FFF0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F1E5AFA37BE0B34A61DFCF1B63F29E41A216350);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral985274B190C603F91B8ED3BCF5FE459BF5F8F9F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C6E68B6E8E368C75DADF822A111011B6FD07448);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACD717DDDF2C8663A15B4500F2ADA2603CDDF470);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADD3B5F2D67647A225CB10788BB728D4EA24E40B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEB85D990701A225F98E51C045C556F4A16E8801);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7AC609EB421E90A3C71B212DE15CE2DDA7C5902);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7A477AA5F811EB830AA1D85ED9CB56D3FAC5377);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCBA8E8A78BF9FA09D32F01B85DE5AA10992BB11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE25D50F078B99F92E24BE93168F2B42D0F4D08C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEABF62C859B1F7A2BC2CF23ECAE0A046C8FC0657);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4E7425B0A1E0A6DA2A915FE5B4C11356D77B0C5);
		s_Il2CppMethodInitialized = true;
	}
	Optional_1_tAC7AFE052BECEC66709ECEB4359F18E2AAF181A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_3 = NULL;
	int32_t G_B3_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_4 = NULL;
	int32_t G_B11_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B11_3 = NULL;
	int32_t G_B10_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B12_4 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B23_0 = 0;
	{
		// Status.text = $"Device Model: {SystemInfo.deviceModel} {deviceModel}" + Environment.NewLine +
		//     "Frame Source: " + ((Session.Assembly != null && Session.Assembly.FrameSource) ? Session.Assembly.FrameSource.GetType().ToString().Replace("easyar.", "").Replace("FrameSource", "") : "-") + Environment.NewLine +
		//     "Tracking Status: " + Session.TrackingStatus + Environment.NewLine;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___Status_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral58B4B6B5AB41667F374F84DEC54D10B8267FFF0E);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral58B4B6B5AB41667F374F84DEC54D10B8267FFF0E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		String_t* L_4;
		L_4 = SystemInfo_get_deviceModel_m8587189FA95DA31E470F864208BC6FB6B35F6D06(NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_3;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7 = __this->___deviceModel_8;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		String_t* L_9;
		L_9 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralE25D50F078B99F92E24BE93168F2B42D0F4D08C7);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralE25D50F078B99F92E24BE93168F2B42D0F4D08C7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_12 = __this->___Session_6;
		NullCheck(L_12);
		ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* L_13;
		L_13 = ARSession_get_Assembly_mD1EE98F79892BB336FDEB644E9E2FE68B5EF3994_inline(L_12, NULL);
		G_B1_0 = 6;
		G_B1_1 = L_11;
		G_B1_2 = L_11;
		G_B1_3 = L_0;
		if (!L_13)
		{
			G_B2_0 = 6;
			G_B2_1 = L_11;
			G_B2_2 = L_11;
			G_B2_3 = L_0;
			goto IL_0065;
		}
	}
	{
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_14 = __this->___Session_6;
		NullCheck(L_14);
		ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* L_15;
		L_15 = ARSession_get_Assembly_mD1EE98F79892BB336FDEB644E9E2FE68B5EF3994_inline(L_14, NULL);
		NullCheck(L_15);
		FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD* L_16;
		L_16 = ARAssembly_get_FrameSource_m90C2102DAB3E58792051000792948892BD1F1377_inline(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_16, NULL);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_17)
		{
			G_B3_0 = G_B1_0;
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_006c;
		}
	}

IL_0065:
	{
		G_B4_0 = _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		G_B4_4 = G_B2_3;
		goto IL_00a4;
	}

IL_006c:
	{
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_18 = __this->___Session_6;
		NullCheck(L_18);
		ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* L_19;
		L_19 = ARSession_get_Assembly_mD1EE98F79892BB336FDEB644E9E2FE68B5EF3994_inline(L_18, NULL);
		NullCheck(L_19);
		FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD* L_20;
		L_20 = ARAssembly_get_FrameSource_m90C2102DAB3E58792051000792948892BD1F1377_inline(L_19, NULL);
		NullCheck(L_20);
		Type_t* L_21;
		L_21 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_20, NULL);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_22, _stringLiteralB7AC609EB421E90A3C71B212DE15CE2DDA7C5902, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_23, _stringLiteralADD3B5F2D67647A225CB10788BB728D4EA24E40B, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B4_0 = L_24;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
		G_B4_4 = G_B3_3;
	}

IL_00a4:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = G_B4_3;
		String_t* L_26;
		L_26 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_26);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_25;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralAEB85D990701A225F98E51C045C556F4A16E8801);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralAEB85D990701A225F98E51C045C556F4A16E8801);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_29 = __this->___Session_6;
		NullCheck(L_29);
		Optional_1_tAC7AFE052BECEC66709ECEB4359F18E2AAF181A4 L_30;
		L_30 = ARSession_get_TrackingStatus_m52BB5973FA0C5433DB5DE85A2CC9EACEB394B0E7(L_29, NULL);
		V_0 = L_30;
		String_t* L_31;
		L_31 = Optional_1_ToString_m1BDCF86EB40EA7486C9CDB80F4492E170391A75E((&V_0), Optional_1_ToString_m1BDCF86EB40EA7486C9CDB80F4492E170391A75E_RuntimeMethod_var);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_31);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_28;
		String_t* L_33;
		L_33 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_33);
		String_t* L_34;
		L_34 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_32, NULL);
		NullCheck(G_B4_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B4_4, L_34);
		// if (Session.State == ARSession.SessionState.Assembling)
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_35 = __this->___Session_6;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = ARSession_get_State_mD075FC4C3644F367D17BE26B7D6A018925655245_inline(L_35, NULL);
		V_1 = (bool)((((int32_t)L_36) == ((int32_t)1))? 1 : 0);
		bool L_37 = V_1;
		if (!L_37)
		{
			goto IL_0116;
		}
	}
	{
		// Status.text += "Please wait while checking all frame source availability...";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_38 = __this->___Status_5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39 = L_38;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_39);
		String_t* L_41;
		L_41 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_40, _stringLiteralACD717DDDF2C8663A15B4500F2ADA2603CDDF470, NULL);
		NullCheck(L_39);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, L_41);
	}

IL_0116:
	{
		// if (Session.State >= ARSession.SessionState.Ready)
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_42 = __this->___Session_6;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = ARSession_get_State_mD075FC4C3644F367D17BE26B7D6A018925655245_inline(L_42, NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_43) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_44 = V_2;
		if (!L_44)
		{
			goto IL_0255;
		}
	}
	{
		// if (Session.Assembly.FrameSource is CameraDeviceFrameSource)
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_45 = __this->___Session_6;
		NullCheck(L_45);
		ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* L_46;
		L_46 = ARSession_get_Assembly_mD1EE98F79892BB336FDEB644E9E2FE68B5EF3994_inline(L_45, NULL);
		NullCheck(L_46);
		FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD* L_47;
		L_47 = ARAssembly_get_FrameSource_m90C2102DAB3E58792051000792948892BD1F1377_inline(L_46, NULL);
		V_3 = (bool)((!(((RuntimeObject*)(CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92*)((CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92*)IsInstClass((RuntimeObject*)L_47, CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_48 = V_3;
		if (!L_48)
		{
			goto IL_019f;
		}
	}
	{
		// Status.text += Environment.NewLine +
		//     "Motion tracking capability not available on this device." + Environment.NewLine +
		//     "Fallback to image tracking." + Environment.NewLine;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_49 = __this->___Status_5;
		V_4 = L_49;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_50 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_51;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_53 = V_4;
		NullCheck(L_53);
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_53);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_54);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_54);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55 = L_52;
		String_t* L_56;
		L_56 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_56);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = L_55;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteralEABF62C859B1F7A2BC2CF23ECAE0A046C8FC0657);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralEABF62C859B1F7A2BC2CF23ECAE0A046C8FC0657);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_57;
		String_t* L_59;
		L_59 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_59);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = L_58;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, _stringLiteralDCBA8E8A78BF9FA09D32F01B85DE5AA10992BB11);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDCBA8E8A78BF9FA09D32F01B85DE5AA10992BB11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = L_60;
		String_t* L_62;
		L_62 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_62);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_62);
		String_t* L_63;
		L_63 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_61, NULL);
		NullCheck(L_50);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_50, L_63);
		goto IL_0254;
	}

IL_019f:
	{
		// Status.text += Environment.NewLine +
		//     "Motion Fusion: " + tracker.ResultType.EnableMotionFusion + Environment.NewLine +
		//     (tracker.ResultType.EnableMotionFusion ? "Image must NOT move in real world." : "Image is free to move in real world.") + Environment.NewLine +
		// Environment.NewLine +
		// "    Image target scale must be set to physical image width." + Environment.NewLine +
		// "    Scale is preset to match long edge of A4 paper." + Environment.NewLine +
		// "    Suggest to print out images for test.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_64 = __this->___Status_5;
		V_4 = L_64;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_65 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = L_66;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_68 = V_4;
		NullCheck(L_68);
		String_t* L_69;
		L_69 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_68);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_69);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_69);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_70 = L_67;
		String_t* L_71;
		L_71 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_71);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_71);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72 = L_70;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, _stringLiteral6F1E5AFA37BE0B34A61DFCF1B63F29E41A216350);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral6F1E5AFA37BE0B34A61DFCF1B63F29E41A216350);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = L_72;
		ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* L_74 = __this->___tracker_9;
		NullCheck(L_74);
		ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8* L_75;
		L_75 = ImageTrackerFrameFilter_get_ResultType_m009908762EC32B7AF980A05771FC87F5FD3D2D2C_inline(L_74, NULL);
		NullCheck(L_75);
		bool* L_76 = (&L_75->___EnableMotionFusion_1);
		String_t* L_77;
		L_77 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_76, NULL);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_77);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_77);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = L_73;
		String_t* L_79;
		L_79 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_79);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_79);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = L_78;
		ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* L_81 = __this->___tracker_9;
		NullCheck(L_81);
		ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8* L_82;
		L_82 = ImageTrackerFrameFilter_get_ResultType_m009908762EC32B7AF980A05771FC87F5FD3D2D2C_inline(L_81, NULL);
		NullCheck(L_82);
		bool L_83 = L_82->___EnableMotionFusion_1;
		G_B10_0 = 5;
		G_B10_1 = L_80;
		G_B10_2 = L_80;
		G_B10_3 = L_65;
		if (L_83)
		{
			G_B11_0 = 5;
			G_B11_1 = L_80;
			G_B11_2 = L_80;
			G_B11_3 = L_65;
			goto IL_0206;
		}
	}
	{
		G_B12_0 = _stringLiteral9C6E68B6E8E368C75DADF822A111011B6FD07448;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		G_B12_4 = G_B10_3;
		goto IL_020b;
	}

IL_0206:
	{
		G_B12_0 = _stringLiteral985274B190C603F91B8ED3BCF5FE459BF5F8F9F4;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
		G_B12_4 = G_B11_3;
	}

IL_020b:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_84 = G_B12_3;
		String_t* L_85;
		L_85 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, L_85);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_85);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_86 = L_84;
		String_t* L_87;
		L_87 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_87);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_87);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_88 = L_86;
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, _stringLiteral2A834884703A6AB00E3817C747001A08D297762B);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral2A834884703A6AB00E3817C747001A08D297762B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89 = L_88;
		String_t* L_90;
		L_90 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_90);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_90);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_91 = L_89;
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, _stringLiteral106D190BFD0D61EC615BCF5283156C5869FDD7FC);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral106D190BFD0D61EC615BCF5283156C5869FDD7FC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_92 = L_91;
		String_t* L_93;
		L_93 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_93);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_93);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_94 = L_92;
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, _stringLiteralC7A477AA5F811EB830AA1D85ED9CB56D3FAC5377);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralC7A477AA5F811EB830AA1D85ED9CB56D3FAC5377);
		String_t* L_95;
		L_95 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_94, NULL);
		NullCheck(G_B12_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B12_4, L_95);
	}

IL_0254:
	{
	}

IL_0255:
	{
		// if (!string.IsNullOrEmpty(Engine.errorMessage()))
		String_t* L_96;
		L_96 = Engine_errorMessage_mA1399F0A71564361CBFB87A9B28ADBB9C7979589(NULL);
		bool L_97;
		L_97 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_96, NULL);
		V_5 = (bool)((((int32_t)L_97) == ((int32_t)0))? 1 : 0);
		bool L_98 = V_5;
		if (!L_98)
		{
			goto IL_028b;
		}
	}
	{
		// BackButton.GetComponent<Button>().interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_99 = __this->___BackButton_4;
		NullCheck(L_99);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_100;
		L_100 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_99, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		NullCheck(L_100);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_100, (bool)0, NULL);
		// trialCounter = DateTime.MinValue;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_101 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32;
		Optional_1_t54E6FAC254FB39D5298CE6100EC7CEF74FD5E800 L_102;
		L_102 = Optional_1_op_Implicit_m8B9C76B073F94CC04B85F71EE841616A211F883D(L_101, Optional_1_op_Implicit_m8B9C76B073F94CC04B85F71EE841616A211F883D_RuntimeMethod_var);
		((Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5_StaticFields*)il2cpp_codegen_static_fields_for(Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5_il2cpp_TypeInfo_var))->___trialCounter_10 = L_102;
	}

IL_028b:
	{
		// if (trialCounter.OnSome)
		bool L_103;
		L_103 = Optional_1_get_OnSome_m94E6F012A0194B4B6360DBEA5BA2DD4B99539808((&((Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5_StaticFields*)il2cpp_codegen_static_fields_for(Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5_il2cpp_TypeInfo_var))->___trialCounter_10), Optional_1_get_OnSome_m94E6F012A0194B4B6360DBEA5BA2DD4B99539808_RuntimeMethod_var);
		V_6 = L_103;
		bool L_104 = V_6;
		if (!L_104)
		{
			goto IL_034d;
		}
	}
	{
		// if (Session.State >= ARSession.SessionState.Ready && (FrameSource.IsCustomCamera(Session.Assembly.FrameSource) || trialCounter.Value == DateTime.MinValue))
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_105 = __this->___Session_6;
		NullCheck(L_105);
		int32_t L_106;
		L_106 = ARSession_get_State_mD075FC4C3644F367D17BE26B7D6A018925655245_inline(L_105, NULL);
		if ((((int32_t)L_106) < ((int32_t)3)))
		{
			goto IL_02dd;
		}
	}
	{
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_107 = __this->___Session_6;
		NullCheck(L_107);
		ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* L_108;
		L_108 = ARSession_get_Assembly_mD1EE98F79892BB336FDEB644E9E2FE68B5EF3994_inline(L_107, NULL);
		NullCheck(L_108);
		FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD* L_109;
		L_109 = ARAssembly_get_FrameSource_m90C2102DAB3E58792051000792948892BD1F1377_inline(L_108, NULL);
		il2cpp_codegen_runtime_class_init_inline(FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD_il2cpp_TypeInfo_var);
		bool L_110;
		L_110 = FrameSource_IsCustomCamera_m90A1B2E0CD8E37E6B17838112FD472E37D9C6AE3(L_109, NULL);
		if (L_110)
		{
			goto IL_02da;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_111;
		L_111 = Optional_1_get_Value_m84B4FB73B1A5FC605298D7A12EC51DD054829C19((&((Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5_StaticFields*)il2cpp_codegen_static_fields_for(Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5_il2cpp_TypeInfo_var))->___trialCounter_10), Optional_1_get_Value_m84B4FB73B1A5FC605298D7A12EC51DD054829C19_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_112 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32;
		bool L_113;
		L_113 = DateTime_op_Equality_mFB772D884EA91082BFC51212E79B9D33A67CA66F(L_111, L_112, NULL);
		G_B21_0 = ((int32_t)(L_113));
		goto IL_02db;
	}

IL_02da:
	{
		G_B21_0 = 1;
	}

IL_02db:
	{
		G_B23_0 = G_B21_0;
		goto IL_02de;
	}

IL_02dd:
	{
		G_B23_0 = 0;
	}

IL_02de:
	{
		V_7 = (bool)G_B23_0;
		bool L_114 = V_7;
		if (!L_114)
		{
			goto IL_034c;
		}
	}
	{
		// var time = Math.Max(0, (int)(trialCounter.Value - DateTime.Now).TotalSeconds + 100);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_115;
		L_115 = Optional_1_get_Value_m84B4FB73B1A5FC605298D7A12EC51DD054829C19((&((Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5_StaticFields*)il2cpp_codegen_static_fields_for(Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5_il2cpp_TypeInfo_var))->___trialCounter_10), Optional_1_get_Value_m84B4FB73B1A5FC605298D7A12EC51DD054829C19_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_116;
		L_116 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_117;
		L_117 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(L_115, L_116, NULL);
		V_9 = L_117;
		double L_118;
		L_118 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_9), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_119;
		L_119 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(0, ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_118), ((int32_t)100))), NULL);
		V_8 = L_119;
		// Status.text += $"\n\nEasyAR License for {Session.Assembly.FrameSource.GetType()} will timeout for current process within {time} seconds. (Personal Edition Only)";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_120 = __this->___Status_5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_121 = L_120;
		NullCheck(L_121);
		String_t* L_122;
		L_122 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_121);
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_123 = __this->___Session_6;
		NullCheck(L_123);
		ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* L_124;
		L_124 = ARSession_get_Assembly_mD1EE98F79892BB336FDEB644E9E2FE68B5EF3994_inline(L_123, NULL);
		NullCheck(L_124);
		FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD* L_125;
		L_125 = ARAssembly_get_FrameSource_m90C2102DAB3E58792051000792948892BD1F1377_inline(L_124, NULL);
		NullCheck(L_125);
		Type_t* L_126;
		L_126 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_125, NULL);
		int32_t L_127 = V_8;
		int32_t L_128 = L_127;
		RuntimeObject* L_129 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_128);
		String_t* L_130;
		L_130 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralF4E7425B0A1E0A6DA2A915FE5B4C11356D77B0C5, L_126, L_129, NULL);
		String_t* L_131;
		L_131 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_122, L_130, NULL);
		NullCheck(L_121);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_121, L_131);
	}

IL_034c:
	{
	}

IL_034d:
	{
		// }
		return;
	}
}
// System.Void Sample.Sample::SwitchMotionFusion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_SwitchMotionFusion_m12FFBFCAEEFB20B964906FAD64E01ECC77F29359 (Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5* __this, bool ___on0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tracker.ResultType = new ImageTrackerFrameFilter.ResultParameters { EnablePersistentTargetInstance = on, EnableMotionFusion = on };
		ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* L_0 = __this->___tracker_9;
		ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8* L_1 = (ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8*)il2cpp_codegen_object_new(ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ResultParameters__ctor_m05D095E12442A217353D8E1A64DF9659AE65D41C(L_1, NULL);
		ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8* L_2 = L_1;
		bool L_3 = ___on0;
		NullCheck(L_2);
		L_2->___EnablePersistentTargetInstance_0 = L_3;
		ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8* L_4 = L_2;
		bool L_5 = ___on0;
		NullCheck(L_4);
		L_4->___EnableMotionFusion_1 = L_5;
		NullCheck(L_0);
		ImageTrackerFrameFilter_set_ResultType_mAB0313C03DF9D758B5168D467257981739BD4E3F(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void Sample.Sample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample__ctor_m9ECEEE170553D144A960A71F18CF93DA66D557A7 (Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string deviceModel = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___deviceModel_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceModel_8), (void*)L_0);
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
// System.Void Sample.Sample/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_m4C79359D1BEDB55DB4C43F2C5E36EA3900E8468B (U3CU3Ec__DisplayClass7_0_t4856C80B707C1E630D80DF9D886DCC32C654E6B5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Sample.Sample/<>c__DisplayClass7_0::<Awake>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CAwakeU3Eb__1_mDBE31A3BC6C82AC7AAF87BD19C37C10D9C5DE0A7 (U3CU3Ec__DisplayClass7_0_t4856C80B707C1E630D80DF9D886DCC32C654E6B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.SceneManagement.SceneManager.LoadScene(launcher);
		String_t* L_0 = __this->___launcher_0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_0, NULL);
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
// System.Void Sample.Sample/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB2138409005FC10B78B07DF88A5BCB642D25F4BA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4* L_0 = (U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4*)il2cpp_codegen_object_new(U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mA6F4DEF0E4396272DF8E085D1A2184FCF539A390(L_0, NULL);
		((U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Sample.Sample/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA6F4DEF0E4396272DF8E085D1A2184FCF539A390 (U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Sample.Sample/<>c::<Awake>b__7_0(easyar.ARSession/SessionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__7_0_mD0EDE7CD982D42250FD8CF78CC69F2E016DA8D51 (U3CU3Ec_t56A456F139D97D720F12EDF3B6A73CDEB4F151B4* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_OnNone_mAC3CD47FCD451FCD2BAEC17A2FF077861D17393C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_op_Implicit_m8B9C76B073F94CC04B85F71EE841616A211F883D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (state == ARSession.SessionState.Ready)
		int32_t L_0 = ___state0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// if (trialCounter.OnNone)
		bool L_2;
		L_2 = Optional_1_get_OnNone_mAC3CD47FCD451FCD2BAEC17A2FF077861D17393C((&((Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5_StaticFields*)il2cpp_codegen_static_fields_for(Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5_il2cpp_TypeInfo_var))->___trialCounter_10), Optional_1_get_OnNone_mAC3CD47FCD451FCD2BAEC17A2FF077861D17393C_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// trialCounter = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		Optional_1_t54E6FAC254FB39D5298CE6100EC7CEF74FD5E800 L_5;
		L_5 = Optional_1_op_Implicit_m8B9C76B073F94CC04B85F71EE841616A211F883D(L_4, Optional_1_op_Implicit_m8B9C76B073F94CC04B85F71EE841616A211F883D_RuntimeMethod_var);
		((Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5_StaticFields*)il2cpp_codegen_static_fields_for(Sample_t03D52EAFF0ED217FA4139A6FFEB22933AFF1D5B5_il2cpp_TypeInfo_var))->___trialCounter_10 = L_5;
	}

IL_0029:
	{
	}

IL_002a:
	{
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* ARSession_get_Assembly_mD1EE98F79892BB336FDEB644E9E2FE68B5EF3994_inline (ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* __this, const RuntimeMethod* method) 
{
	{
		// public ARAssembly Assembly { get; private set; }
		ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* L_0 = __this->___U3CAssemblyU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD* ARAssembly_get_FrameSource_m90C2102DAB3E58792051000792948892BD1F1377_inline (ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* __this, const RuntimeMethod* method) 
{
	{
		// public FrameSource FrameSource { get; private set; }
		FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD* L_0 = __this->___U3CFrameSourceU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_State_mD075FC4C3644F367D17BE26B7D6A018925655245_inline (ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* __this, const RuntimeMethod* method) 
{
	{
		// get => state;
		int32_t L_0 = __this->___state_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8* ImageTrackerFrameFilter_get_ResultType_m009908762EC32B7AF980A05771FC87F5FD3D2D2C_inline (ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* __this, const RuntimeMethod* method) 
{
	{
		// get => resultType;
		ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8* L_0 = __this->___resultType_14;
		return L_0;
	}
}
