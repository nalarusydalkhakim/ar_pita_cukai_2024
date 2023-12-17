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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B;
// System.Action`1<easyar.OutputFrame>
struct Action_1_t51C09D97035A969C5BE8AD3814D3435DFCBC7D36;
// System.Action`1<easyar.ARSession/SessionState>
struct Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>
struct Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t71A46277DBD73BD4009B2B20885D2B7057593A1A;
// System.Collections.Generic.IEnumerable`1<easyar.ARSession/ARCenterMode>
struct IEnumerable_1_tF42FCD24C16A2CC4047D585496162E28334040BE;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IReadOnlyList`1<easyar.ARSession/ARCenterMode>
struct IReadOnlyList_1_t9AB3615049907C1504F1427696C3B8E984BF4244;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Vector2>
struct KeyCollection_tEFECE1C932D53BE53817AAAF0F110D507FBEFA89;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<easyar.FrameFilter>
struct List_1_t158A784F818ED74D8CBDE0E1C08AF2A6BA10BBDA;
// System.Tuple`2<System.Boolean,easyar.Optional`1<System.Tuple`2<easyar.MotionTrackingStatus,UnityEngine.Pose>>>
struct Tuple_2_tD39566EEAAD3069AEF6436718B3A118344EF7CA6;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Vector2>
struct ValueCollection_tA8054A30F9957F0712BA01D66B734953768F55CF;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Vector2>[]
struct EntryU5BU5D_tD031BD4563541FEE425219BD299C6B0323AADC6C;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
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
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
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
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
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
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
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
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
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
// Common.TouchController
struct TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// MotionTracking_ImageTarget.UIController
struct UIController_tE53801F0CB44897A9DA148380C20BC11F8C9D042;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// easyar.ARSession/FrameChangeAction
struct FrameChangeAction_t22915014AF19BCD5BA244E1A821751FAC6A2C2B3;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Common.TouchController/<OnOneMove>d__16
struct U3COnOneMoveU3Ed__16_tFDFB519A918146D33558C092EEBA7B38EC08F0DE;
// Common.TouchController/<OnTwoMove>d__17
struct U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F;
// Common.TouchController/<OnTwoRotate>d__18
struct U3COnTwoRotateU3Ed__18_tA7C67BD683F422F074BB1D5EB58C3CA9179CB57E;
// Common.TouchController/<OnTwoScale>d__19
struct U3COnTwoScaleU3Ed__19_tA3CC2AD2F51FDA718C78E4C9219375B064DE42E5;
// MotionTracking_ImageTarget.UIController/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826;

IL2CPP_EXTERN_C RuntimeClass* ARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tB4F2A14D8AB94D8492BE98245BB5E4381747D957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnOneMoveU3Ed__16_tFDFB519A918146D33558C092EEBA7B38EC08F0DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnTwoRotateU3Ed__18_tA7C67BD683F422F074BB1D5EB58C3CA9179CB57E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnTwoScaleU3Ed__19_tA3CC2AD2F51FDA718C78E4C9219375B064DE42E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral018F8D429F8AA9BA28BB3504858806F3098FCE93;
IL2CPP_EXTERN_C String_t* _stringLiteral0970CF2FD3560786B3DFD69BC3EE83E1A9521103;
IL2CPP_EXTERN_C String_t* _stringLiteral0E8CD1E34507F5A3FFA3D074EE3DF7B1F702458B;
IL2CPP_EXTERN_C String_t* _stringLiteral1EC2E3F8C2D4E0635EE4294CDA138243E2D85339;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral255FBDA0A6F231C9011577CD61755542A4D386E9;
IL2CPP_EXTERN_C String_t* _stringLiteral2857526C6CA87F5E42495CA8FC55534F69207042;
IL2CPP_EXTERN_C String_t* _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3DF22942163DC77B0DAEE048614E29D96E4493DC;
IL2CPP_EXTERN_C String_t* _stringLiteral3FD8F8AC6AC464169FFBE67A817A867D6B67538B;
IL2CPP_EXTERN_C String_t* _stringLiteral3FE426488E225C003B8620F8F6883113ABCA277F;
IL2CPP_EXTERN_C String_t* _stringLiteral46B615CC894A4048CF6469321A55D3818A977254;
IL2CPP_EXTERN_C String_t* _stringLiteral4A25544E6922FB90F714C62E18485457D83197D5;
IL2CPP_EXTERN_C String_t* _stringLiteral58B4B6B5AB41667F374F84DEC54D10B8267FFF0E;
IL2CPP_EXTERN_C String_t* _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
IL2CPP_EXTERN_C String_t* _stringLiteral7BC542217A6C9B694F7F1571EF8A3C64EB753FCD;
IL2CPP_EXTERN_C String_t* _stringLiteral8C0B334A2A36C440093673295CFEBA7D3C2CFD67;
IL2CPP_EXTERN_C String_t* _stringLiteral9264A04A31D84024600F8E9C198E657445BFEA77;
IL2CPP_EXTERN_C String_t* _stringLiteral9FC9A91C4826E22CD281F76B131A1239F939D46D;
IL2CPP_EXTERN_C String_t* _stringLiteralADD3B5F2D67647A225CB10788BB728D4EA24E40B;
IL2CPP_EXTERN_C String_t* _stringLiteralAEB85D990701A225F98E51C045C556F4A16E8801;
IL2CPP_EXTERN_C String_t* _stringLiteralB387B4CA2FBB682A7B5403AC7170A349FC9FB2D6;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB7AC609EB421E90A3C71B212DE15CE2DDA7C5902;
IL2CPP_EXTERN_C String_t* _stringLiteralC0A3E375FE5A329146EA9A18F3DCEFA022D09235;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE25D50F078B99F92E24BE93168F2B42D0F4D08C7;
IL2CPP_EXTERN_C String_t* _stringLiteralF48DBA09F852F7743E8BBD71619AFABACF894DF8;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m8AAAFC55B2438542D29F1EDCDEEE6AE631082269_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE352B1093D935D290E0B7A717D2AD2869814D5DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_mB2B48D47826C82B27386BB2CAC3100B6C99AC299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_ToString_m1BDCF86EB40EA7486C9CDB80F4492E170391A75E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnOneMoveU3Ed__16_System_Collections_IEnumerator_Reset_m9830B3F2DCDC6C372F53EB104DE139D69D08458C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnTwoMoveU3Ed__17_System_Collections_IEnumerator_Reset_m1ED6219A1E70DC8D5A684AA160488E0BC7C85600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnTwoRotateU3Ed__18_System_Collections_IEnumerator_Reset_m00C4FFD6FAA5933488D04F345017A83AD61079A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnTwoScaleU3Ed__19_System_Collections_IEnumerator_Reset_m2AB168CF545547A24D2AD58D3A7A682029B5BC04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CAwakeU3Eb__0_m42AA6C6E47744E953285A0B55910E3921F5E7FBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CAwakeU3Eb__1_mE4BACAE556AA5EE7AC9FED624B4D502F9A35FCE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t24EC7A342463B720C1228FF41B5B85A05B1D7343 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>
struct Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD031BD4563541FEE425219BD299C6B0323AADC6C* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tEFECE1C932D53BE53817AAAF0F110D507FBEFA89* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA8054A30F9957F0712BA01D66B734953768F55CF* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// MotionTracking_ImageTarget.UIController/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826  : public RuntimeObject
{
	// MotionTracking_ImageTarget.UIController MotionTracking_ImageTarget.UIController/<>c__DisplayClass5_0::<>4__this
	UIController_tE53801F0CB44897A9DA148380C20BC11F8C9D042* ___U3CU3E4__this_0;
	// System.String MotionTracking_ImageTarget.UIController/<>c__DisplayClass5_0::launcher
	String_t* ___launcher_1;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// Common.TouchController/<OnOneMove>d__16
struct U3COnOneMoveU3Ed__16_tFDFB519A918146D33558C092EEBA7B38EC08F0DE  : public RuntimeObject
{
	// System.Int32 Common.TouchController/<OnOneMove>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Common.TouchController/<OnOneMove>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Common.TouchController Common.TouchController/<OnOneMove>d__16::<>4__this
	TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* ___U3CU3E4__this_2;
	// UnityEngine.Touch[] Common.TouchController/<OnOneMove>d__16::<>s__1
	TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* ___U3CU3Es__1_3;
	// System.Int32 Common.TouchController/<OnOneMove>d__16::<>s__2
	int32_t ___U3CU3Es__2_4;
	// UnityEngine.Touch Common.TouchController/<OnOneMove>d__16::<touch>5__3
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___U3CtouchU3E5__3_5;
	// UnityEngine.Vector3 Common.TouchController/<OnOneMove>d__16::<touchV3>5__4
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CtouchV3U3E5__4_6;
	// UnityEngine.Vector3 Common.TouchController/<OnOneMove>d__16::<addV3>5__5
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaddV3U3E5__5_7;
	// UnityEngine.Vector3 Common.TouchController/<OnOneMove>d__16::<newPos>5__6
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CnewPosU3E5__6_8;
};

// Common.TouchController/<OnTwoMove>d__17
struct U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F  : public RuntimeObject
{
	// System.Int32 Common.TouchController/<OnTwoMove>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Common.TouchController/<OnTwoMove>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Common.TouchController Common.TouchController/<OnTwoMove>d__17::<>4__this
	TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Common.TouchController/<OnTwoMove>d__17::<xMovement>5__1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CxMovementU3E5__1_3;
	// UnityEngine.Vector3 Common.TouchController/<OnTwoMove>d__17::<yMovement>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CyMovementU3E5__2_4;
	// UnityEngine.Vector3 Common.TouchController/<OnTwoMove>d__17::<rawTargetPos>5__3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CrawTargetPosU3E5__3_5;
	// UnityEngine.Touch[] Common.TouchController/<OnTwoMove>d__17::<>s__4
	TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* ___U3CU3Es__4_6;
	// System.Int32 Common.TouchController/<OnTwoMove>d__17::<>s__5
	int32_t ___U3CU3Es__5_7;
	// UnityEngine.Touch Common.TouchController/<OnTwoMove>d__17::<touch>5__6
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___U3CtouchU3E5__6_8;
	// UnityEngine.Vector2 Common.TouchController/<OnTwoMove>d__17::<fixedDelta>5__7
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CfixedDeltaU3E5__7_9;
	// UnityEngine.Vector3 Common.TouchController/<OnTwoMove>d__17::<Cam_Forward>5__8
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CCam_ForwardU3E5__8_10;
	// UnityEngine.Vector3 Common.TouchController/<OnTwoMove>d__17::<Cam_Forward_XZ>5__9
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CCam_Forward_XZU3E5__9_11;
	// UnityEngine.Vector3 Common.TouchController/<OnTwoMove>d__17::<newPos>5__10
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CnewPosU3E5__10_12;
};

// Common.TouchController/<OnTwoRotate>d__18
struct U3COnTwoRotateU3Ed__18_tA7C67BD683F422F074BB1D5EB58C3CA9179CB57E  : public RuntimeObject
{
	// System.Int32 Common.TouchController/<OnTwoRotate>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Common.TouchController/<OnTwoRotate>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Common.TouchController Common.TouchController/<OnTwoRotate>d__18::<>4__this
	TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Common.TouchController/<OnTwoRotate>d__18::<xMovement>5__1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CxMovementU3E5__1_3;
	// UnityEngine.Vector3 Common.TouchController/<OnTwoRotate>d__18::<yMovement>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CyMovementU3E5__2_4;
	// UnityEngine.Quaternion Common.TouchController/<OnTwoRotate>d__18::<rawRotation>5__3
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CrawRotationU3E5__3_5;
	// UnityEngine.Touch[] Common.TouchController/<OnTwoRotate>d__18::<>s__4
	TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* ___U3CU3Es__4_6;
	// System.Int32 Common.TouchController/<OnTwoRotate>d__18::<>s__5
	int32_t ___U3CU3Es__5_7;
	// UnityEngine.Touch Common.TouchController/<OnTwoRotate>d__18::<touch>5__6
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___U3CtouchU3E5__6_8;
	// UnityEngine.Vector2 Common.TouchController/<OnTwoRotate>d__18::<fixedDelta>5__7
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CfixedDeltaU3E5__7_9;
};

// Common.TouchController/<OnTwoScale>d__19
struct U3COnTwoScaleU3Ed__19_tA3CC2AD2F51FDA718C78E4C9219375B064DE42E5  : public RuntimeObject
{
	// System.Int32 Common.TouchController/<OnTwoScale>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Common.TouchController/<OnTwoScale>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Common.TouchController Common.TouchController/<OnTwoScale>d__19::<>4__this
	TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Common.TouchController/<OnTwoScale>d__19::<rawScale>5__1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CrawScaleU3E5__1_3;
	// System.Single Common.TouchController/<OnTwoScale>d__19::<rawFingersDistance>5__2
	float ___U3CrawFingersDistanceU3E5__2_4;
	// UnityEngine.Touch[] Common.TouchController/<OnTwoScale>d__19::<>s__3
	TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* ___U3CU3Es__3_5;
	// System.Int32 Common.TouchController/<OnTwoScale>d__19::<>s__4
	int32_t ___U3CU3Es__4_6;
	// UnityEngine.Touch Common.TouchController/<OnTwoScale>d__19::<touch>5__5
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___U3CtouchU3E5__5_7;
	// System.Single Common.TouchController/<OnTwoScale>d__19::<scaleFactor>5__6
	float ___U3CscaleFactorU3E5__6_8;
};

// System.Action`1<easyar.ARSession/SessionState>
struct Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
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

// Common.TouchController
struct TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Common.TouchController::infoText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___infoText_4;
	// UnityEngine.Transform Common.TouchController::controlTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___controlTarget_7;
	// UnityEngine.Camera Common.TouchController::cameraTarget
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraTarget_8;
	// System.Boolean Common.TouchController::isOneFingerDraggable
	bool ___isOneFingerDraggable_9;
	// System.Boolean Common.TouchController::isTwoFingerDraggable
	bool ___isTwoFingerDraggable_10;
	// System.Boolean Common.TouchController::isTwoFingerScalable
	bool ___isTwoFingerScalable_11;
	// System.Boolean Common.TouchController::isTwoFingerRotatable
	bool ___isTwoFingerRotatable_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2> Common.TouchController::originalPosition
	Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* ___originalPosition_13;
	// Common.TouchController/GestureControl Common.TouchController::curGesture
	int32_t ___curGesture_14;
	// System.Single Common.TouchController::targetCamDistance
	float ___targetCamDistance_15;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MotionTracking_ImageTarget.UIController
struct UIController_tE53801F0CB44897A9DA148380C20BC11F8C9D042  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text MotionTracking_ImageTarget.UIController::Status
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Status_4;
	// easyar.ARSession MotionTracking_ImageTarget.UIController::Session
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* ___Session_5;
	// Common.TouchController MotionTracking_ImageTarget.UIController::TouchControl
	TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* ___TouchControl_6;
	// UnityEngine.UI.Button MotionTracking_ImageTarget.UIController::BackButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___BackButton_7;
	// System.String MotionTracking_ImageTarget.UIController::deviceModel
	String_t* ___deviceModel_8;
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
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// System.String easyar.Optional`1<System.Int32Enum>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Optional_1_ToString_mB6D22113DF291BAD9A8064D2070EB6F9305D6FFA_gshared (Optional_1_t626F228AEB26A37FE7C4FE47FB91EE5C9F809B30* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Int32Enum>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCF235BF6055957FECC7BC52DB8F433FB3CE7C643_gshared (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43_gshared (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* __this, int32_t ___key0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m8AAAFC55B2438542D29F1EDCDEEE6AE631082269_gshared (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_gshared (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE352B1093D935D290E0B7A717D2AD2869814D5DD_gshared (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55_gshared (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* __this, int32_t ___key0, const RuntimeMethod* method) ;

// System.Void MotionTracking_ImageTarget.UIController/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7FDD78B7708263FF85219E3666AD1650666B6AAD (U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void easyar.ARSession::set_SpecificTargetCenter(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSession_set_SpecificTargetCenter_mFF8A89316911782D564948580448B36C953EC2D2 (ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<easyar.ARSession/SessionState>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mCA14ED46DE03E238A392A26547FC33AEA32EC333 (Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void easyar.ARSession::add_StateChanged(System.Action`1<easyar.ARSession/SessionState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSession_add_StateChanged_mB48474C43E473D3D6BE692B2304C4218DE66D16E (ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* __this, Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* ___value0, const RuntimeMethod* method) ;
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
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject easyar.ARSession::get_CenterObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARSession_get_CenterObject_mBB894C35750938190298F7D5FF92758174A303D5_inline (ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<easyar.ARSession/ARCenterMode> easyar.ARSession::get_AvailableCenterMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARSession_get_AvailableCenterMode_mE27967E2CB5EA8A2D922FCEF0576EBB8646D2610 (ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<easyar.ARSession/ARCenterMode>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
inline bool Enumerable_Contains_TisARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_mB2B48D47826C82B27386BB2CAC3100B6C99AC299 (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Contains_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCF235BF6055957FECC7BC52DB8F433FB3CE7C643_gshared)(___source0, ___value1, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera easyar.ARAssembly::get_Camera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ARAssembly_get_Camera_mC6B606117E775EE115EDE9C2F99DBCE08992370A_inline (ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* __this, const RuntimeMethod* method) ;
// System.Void Common.TouchController::TurnOn(UnityEngine.Transform,UnityEngine.Camera,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_TurnOn_mD7E1BCFF31394BB0F6213B92B07F1FF80A009455 (TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam1, bool ___isOneFingerDraggable2, bool ___isTwoFingerDraggable3, bool ___isTwoFingerScalable4, bool ___isTwoFingerRotatable5, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B (const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43 (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* __this, int32_t ___key0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520*, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>::Remove(TKey)
inline bool Dictionary_2_Remove_m8AAAFC55B2438542D29F1EDCDEEE6AE631082269 (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m8AAAFC55B2438542D29F1EDCDEEE6AE631082269_gshared)(__this, ___key0, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>::get_Item(TKey)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1 (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_gshared)(__this, ___key0, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void Common.TouchController::GetRelativeTouch(UnityEngine.Vector2,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_GetRelativeTouch_m28CF8C7CFF39378F3AF52AB7961051940B21BF39 (TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___xMovement1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___yMovement2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Common.TouchController::OnTwoRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchController_OnTwoRotate_m5D6C226599068FF57CFDFC595BFC98F856651A7E (TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Common.TouchController::OnTwoMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchController_OnTwoMove_m84DB41607709FC7E80DA37769845C1836691D93F (TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Common.TouchController::OnTwoScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchController_OnTwoScale_mA23A92B57942FE77A0A1A2A1933F308D5C3C5810 (TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Common.TouchController::OnOneMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchController_OnOneMove_mC8951003C04FE5DAD807A321230E9F081293AFAA (TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void Common.TouchController/<OnOneMove>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnOneMoveU3Ed__16__ctor_m4D3E79792CFE946E6A23B8A6D5C156261E597AFC (U3COnOneMoveU3Ed__16_tFDFB519A918146D33558C092EEBA7B38EC08F0DE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Common.TouchController/<OnTwoMove>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoMoveU3Ed__17__ctor_mD1B1371D95297E03658D80A27F709ED112381485 (U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Common.TouchController/<OnTwoRotate>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoRotateU3Ed__18__ctor_mD068360929BE3C7CBF371F6D7D235419F7447793 (U3COnTwoRotateU3Ed__18_tA7C67BD683F422F074BB1D5EB58C3CA9179CB57E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Common.TouchController/<OnTwoScale>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoScaleU3Ed__19__ctor_mA395156252539B3E5027AA42CD252C71BA86059F (U3COnTwoScaleU3Ed__19_tA3CC2AD2F51FDA718C78E4C9219375B064DE42E5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Project(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Project_m47BC1C674D5732D50B6E136626FB2C53E18A706E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___onNormal1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>::.ctor()
inline void Dictionary_2__ctor_mE352B1093D935D290E0B7A717D2AD2869814D5DD (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520*, const RuntimeMethod*))Dictionary_2__ctor_mE352B1093D935D290E0B7A717D2AD2869814D5DD_gshared)(__this, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55 (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55_gshared)(__this, ___key0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
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
// System.Void MotionTracking_ImageTarget.UIController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Awake_m9D91A6ED462E9DA9DF80A02400658DB1A75BD165 (UIController_tE53801F0CB44897A9DA148380C20BC11F8C9D042* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CAwakeU3Eb__0_m42AA6C6E47744E953285A0B55910E3921F5E7FBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CAwakeU3Eb__1_mE4BACAE556AA5EE7AC9FED624B4D502F9A35FCE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral255FBDA0A6F231C9011577CD61755542A4D386E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2857526C6CA87F5E42495CA8FC55534F69207042);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DF22942163DC77B0DAEE048614E29D96E4493DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A25544E6922FB90F714C62E18485457D83197D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9264A04A31D84024600F8E9C198E657445BFEA77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB387B4CA2FBB682A7B5403AC7170A349FC9FB2D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826* V_0 = NULL;
	bool V_1 = false;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_2 = NULL;
	bool V_3 = false;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826* L_0 = (U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m7FDD78B7708263FF85219E3666AD1650666B6AAD(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// Session.SpecificTargetCenter = GameObject.Find("ImageTarget");
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_2 = __this->___Session_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral9264A04A31D84024600F8E9C198E657445BFEA77, NULL);
		NullCheck(L_2);
		ARSession_set_SpecificTargetCenter_mFF8A89316911782D564948580448B36C953EC2D2(L_2, L_3, NULL);
		// Session.StateChanged += (state) =>
		// {
		//     if (state == ARSession.SessionState.Ready)
		//     {
		//         TouchControl.TurnOn(TouchControl.gameObject.transform, Session.Assembly.Camera, true, true, true, true);
		//     }
		// };
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_4 = __this->___Session_5;
		U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826* L_5 = V_0;
		Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* L_6 = (Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4*)il2cpp_codegen_object_new(Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mCA14ED46DE03E238A392A26547FC33AEA32EC333(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CAwakeU3Eb__0_m42AA6C6E47744E953285A0B55910E3921F5E7FBA_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		ARSession_add_StateChanged_mB48474C43E473D3D6BE692B2304C4218DE66D16E(L_4, L_6, NULL);
		// var launcher = "AllSamplesLauncher";
		U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826* L_7 = V_0;
		NullCheck(L_7);
		L_7->___launcher_1 = _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___launcher_1), (void*)_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		// if (Application.CanStreamedLevelBeLoaded(launcher))
		U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___launcher_1;
		bool L_10;
		L_10 = Application_CanStreamedLevelBeLoaded_mA1BAA60593E8679BAFA6A16595166774AE172ADC(L_9, NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_007e;
		}
	}
	{
		// var button = BackButton.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___BackButton_7;
		NullCheck(L_12);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13;
		L_13 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_12, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		V_2 = L_13;
		// button.onClick.AddListener(() => { UnityEngine.SceneManagement.SceneManager.LoadScene(launcher); });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = V_2;
		NullCheck(L_14);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_15;
		L_15 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_14, NULL);
		U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826* L_16 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_17 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CAwakeU3Eb__1_mE4BACAE556AA5EE7AC9FED624B4D502F9A35FCE3_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_15, L_17, NULL);
		goto IL_0092;
	}

IL_007e:
	{
		// BackButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___BackButton_7;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
	}

IL_0092:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_20;
		L_20 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_3 = (bool)((((int32_t)L_20) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_011c;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		{
			// using (var buildClass = new AndroidJavaClass("android.os.Build"))
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_22 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
			NullCheck(L_22);
			AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_22, _stringLiteral4A25544E6922FB90F714C62E18485457D83197D5, NULL);
			V_4 = L_22;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00f8_1:
				{// begin finally (depth: 2)
					{
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_23 = V_4;
						if (!L_23)
						{
							goto IL_0104_1;
						}
					}
					{
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_24 = V_4;
						NullCheck(L_24);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_24);
					}

IL_0104_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// deviceModel = $"(Device = {buildClass.GetStatic<string>("DEVICE")}, Model = {buildClass.GetStatic<string>("MODEL")})";
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, _stringLiteralB387B4CA2FBB682A7B5403AC7170A349FC9FB2D6);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB387B4CA2FBB682A7B5403AC7170A349FC9FB2D6);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_28 = V_4;
				NullCheck(L_28);
				String_t* L_29;
				L_29 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_28, _stringLiteral3DF22942163DC77B0DAEE048614E29D96E4493DC, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
				NullCheck(L_27);
				ArrayElementTypeCheck (L_27, L_29);
				(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_29);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_27;
				NullCheck(L_30);
				ArrayElementTypeCheck (L_30, _stringLiteral255FBDA0A6F231C9011577CD61755542A4D386E9);
				(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral255FBDA0A6F231C9011577CD61755542A4D386E9);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_32 = V_4;
				NullCheck(L_32);
				String_t* L_33;
				L_33 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_32, _stringLiteral2857526C6CA87F5E42495CA8FC55534F69207042, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
				NullCheck(L_31);
				ArrayElementTypeCheck (L_31, L_33);
				(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_33);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_31;
				NullCheck(L_34);
				ArrayElementTypeCheck (L_34, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
				(L_34)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
				String_t* L_35;
				L_35 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_34, NULL);
				__this->___deviceModel_8 = L_35;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceModel_8), (void*)L_35);
				goto IL_0105_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0105_1:
		{
			goto IL_011b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0108;
		}
		throw e;
	}

CATCH_0108:
	{// begin catch(System.Exception)
		// catch (Exception e) { deviceModel = e.Message; }
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// catch (Exception e) { deviceModel = e.Message; }
		Exception_t* L_36 = V_5;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_36);
		__this->___deviceModel_8 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceModel_8), (void*)L_37);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_011b;
	}// end catch (depth: 1)

IL_011b:
	{
	}

IL_011c:
	{
		// }
		return;
	}
}
// System.Void MotionTracking_ImageTarget.UIController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Update_mB9C11D3B305942E581ABE457AB0BA51B49663C06 (UIController_tE53801F0CB44897A9DA148380C20BC11F8C9D042* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_ToString_m1BDCF86EB40EA7486C9CDB80F4492E170391A75E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E8CD1E34507F5A3FFA3D074EE3DF7B1F702458B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EC2E3F8C2D4E0635EE4294CDA138243E2D85339);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FE426488E225C003B8620F8F6883113ABCA277F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B4B6B5AB41667F374F84DEC54D10B8267FFF0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BC542217A6C9B694F7F1571EF8A3C64EB753FCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FC9A91C4826E22CD281F76B131A1239F939D46D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADD3B5F2D67647A225CB10788BB728D4EA24E40B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEB85D990701A225F98E51C045C556F4A16E8801);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7AC609EB421E90A3C71B212DE15CE2DDA7C5902);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0A3E375FE5A329146EA9A18F3DCEFA022D09235);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE25D50F078B99F92E24BE93168F2B42D0F4D08C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF48DBA09F852F7743E8BBD71619AFABACF894DF8);
		s_Il2CppMethodInitialized = true;
	}
	Optional_1_tAC7AFE052BECEC66709ECEB4359F18E2AAF181A4 V_0;
	memset((&V_0), 0, sizeof(V_0));
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
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_4 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_4 = NULL;
	String_t* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B7_4 = NULL;
	{
		// Status.text = $"Device Model: {SystemInfo.deviceModel} {deviceModel}" + Environment.NewLine +
		//     "Frame Source: " + ((Session.Assembly != null && Session.Assembly.FrameSource) ? Session.Assembly.FrameSource.GetType().ToString().Replace("easyar.", "").Replace("FrameSource", "") : "-") + Environment.NewLine +
		//     "Tracking Status: " + Session.TrackingStatus + Environment.NewLine +
		//     "CenterMode: " + Session.CenterMode + Environment.NewLine +
		//     "CenterObject: " + Session.CenterObject + Environment.NewLine +
		//     Environment.NewLine +
		//     "Gesture Instruction" + Environment.NewLine +
		//     "\tMove in View: One Finger Move" + Environment.NewLine +
		//     "\tMove Near/Far: Two Finger Vertical Move" + Environment.NewLine +
		//     "\tRotate: Two Finger Horizontal Move" + Environment.NewLine +
		//     "\tScale: Two Finger Pinch";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___Status_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)27));
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
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_12 = __this->___Session_5;
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
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_14 = __this->___Session_5;
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
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_18 = __this->___Session_5;
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
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_29 = __this->___Session_5;
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
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_32;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral0E8CD1E34507F5A3FFA3D074EE3DF7B1F702458B);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral0E8CD1E34507F5A3FFA3D074EE3DF7B1F702458B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_36 = __this->___Session_5;
		NullCheck(L_36);
		int32_t* L_37 = (&L_36->___CenterMode_4);
		Il2CppFakeBox<int32_t> L_38(ARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_il2cpp_TypeInfo_var, L_37);
		String_t* L_39;
		L_39 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_38), NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_39);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_35;
		String_t* L_41;
		L_41 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_41);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_40;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteralC0A3E375FE5A329146EA9A18F3DCEFA022D09235);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralC0A3E375FE5A329146EA9A18F3DCEFA022D09235);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_44 = __this->___Session_5;
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = ARSession_get_CenterObject_mBB894C35750938190298F7D5FF92758174A303D5_inline(L_44, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = L_45;
		G_B5_0 = L_46;
		G_B5_1 = ((int32_t)15);
		G_B5_2 = L_43;
		G_B5_3 = L_43;
		G_B5_4 = G_B4_4;
		if (L_46)
		{
			G_B6_0 = L_46;
			G_B6_1 = ((int32_t)15);
			G_B6_2 = L_43;
			G_B6_3 = L_43;
			G_B6_4 = G_B4_4;
			goto IL_0125;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		G_B7_2 = G_B5_2;
		G_B7_3 = G_B5_3;
		G_B7_4 = G_B5_4;
		goto IL_012a;
	}

IL_0125:
	{
		NullCheck(G_B6_0);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
		G_B7_0 = L_47;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		G_B7_3 = G_B6_3;
		G_B7_4 = G_B6_4;
	}

IL_012a:
	{
		NullCheck(G_B7_2);
		ArrayElementTypeCheck (G_B7_2, G_B7_0);
		(G_B7_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B7_1), (String_t*)G_B7_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = G_B7_3;
		String_t* L_49;
		L_49 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)L_49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_48;
		String_t* L_51;
		L_51 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)L_51);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_50;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteral3FE426488E225C003B8620F8F6883113ABCA277F);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral3FE426488E225C003B8620F8F6883113ABCA277F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_52;
		String_t* L_54;
		L_54 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)L_54);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55 = L_53;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, _stringLiteralF48DBA09F852F7743E8BBD71619AFABACF894DF8);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteralF48DBA09F852F7743E8BBD71619AFABACF894DF8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56 = L_55;
		String_t* L_57;
		L_57 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_57);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)L_57);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_56;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, _stringLiteral9FC9A91C4826E22CD281F76B131A1239F939D46D);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteral9FC9A91C4826E22CD281F76B131A1239F939D46D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = L_58;
		String_t* L_60;
		L_60 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_60);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)L_60);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = L_59;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, _stringLiteral1EC2E3F8C2D4E0635EE4294CDA138243E2D85339);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteral1EC2E3F8C2D4E0635EE4294CDA138243E2D85339);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
		String_t* L_63;
		L_63 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_63);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)L_63);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = L_62;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral7BC542217A6C9B694F7F1571EF8A3C64EB753FCD);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteral7BC542217A6C9B694F7F1571EF8A3C64EB753FCD);
		String_t* L_65;
		L_65 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_64, NULL);
		NullCheck(G_B7_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B7_4, L_65);
		// }
		return;
	}
}
// System.Void MotionTracking_ImageTarget.UIController::SwitchCenterMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SwitchCenterMode_m0A55539912B172E9311872E88E5A830EC74F09A7 (UIController_tE53801F0CB44897A9DA148380C20BC11F8C9D042* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_mB2B48D47826C82B27386BB2CAC3100B6C99AC299_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_tB4F2A14D8AB94D8492BE98245BB5E4381747D957_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (Session.AvailableCenterMode.Count == 0) { return; }
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_0 = __this->___Session_5;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ARSession_get_AvailableCenterMode_mE27967E2CB5EA8A2D922FCEF0576EBB8646D2610(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<easyar.ARSession/ARCenterMode>::get_Count() */, IReadOnlyCollection_1_tB4F2A14D8AB94D8492BE98245BB5E4381747D957_il2cpp_TypeInfo_var, L_1);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// if (Session.AvailableCenterMode.Count == 0) { return; }
		goto IL_0072;
	}

IL_001b:
	{
		goto IL_006e;
	}

IL_001d:
	{
		// Session.CenterMode = (ARSession.ARCenterMode)(((int)Session.CenterMode + 1) % Enum.GetValues(typeof(ARSession.ARCenterMode)).Length);
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_4 = __this->___Session_5;
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_5 = __this->___Session_5;
		NullCheck(L_5);
		int32_t L_6 = L_5->___CenterMode_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (ARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeArray* L_9;
		L_9 = Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_9, NULL);
		NullCheck(L_4);
		L_4->___CenterMode_4 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_6, 1))%L_10));
		// if (Session.AvailableCenterMode.Contains(Session.CenterMode)) { break; }
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_11 = __this->___Session_5;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = ARSession_get_AvailableCenterMode_mE27967E2CB5EA8A2D922FCEF0576EBB8646D2610(L_11, NULL);
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_13 = __this->___Session_5;
		NullCheck(L_13);
		int32_t L_14 = L_13->___CenterMode_4;
		bool L_15;
		L_15 = Enumerable_Contains_TisARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_mB2B48D47826C82B27386BB2CAC3100B6C99AC299(L_12, L_14, Enumerable_Contains_TisARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_mB2B48D47826C82B27386BB2CAC3100B6C99AC299_RuntimeMethod_var);
		V_1 = L_15;
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_006d;
		}
	}
	{
		// if (Session.AvailableCenterMode.Contains(Session.CenterMode)) { break; }
		goto IL_0072;
	}

IL_006d:
	{
	}

IL_006e:
	{
		// while (true)
		V_2 = (bool)1;
		goto IL_001d;
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void MotionTracking_ImageTarget.UIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController__ctor_mD0DA4B113F0706E42B16078ED4AF16784FE99B0F (UIController_tE53801F0CB44897A9DA148380C20BC11F8C9D042* __this, const RuntimeMethod* method) 
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
// System.Void MotionTracking_ImageTarget.UIController/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m7FDD78B7708263FF85219E3666AD1650666B6AAD (U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MotionTracking_ImageTarget.UIController/<>c__DisplayClass5_0::<Awake>b__0(easyar.ARSession/SessionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CAwakeU3Eb__0_m42AA6C6E47744E953285A0B55910E3921F5E7FBA (U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (state == ARSession.SessionState.Ready)
		int32_t L_0 = ___state0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// TouchControl.TurnOn(TouchControl.gameObject.transform, Session.Assembly.Camera, true, true, true, true);
		UIController_tE53801F0CB44897A9DA148380C20BC11F8C9D042* L_2 = __this->___U3CU3E4__this_0;
		NullCheck(L_2);
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_3 = L_2->___TouchControl_6;
		UIController_tE53801F0CB44897A9DA148380C20BC11F8C9D042* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_5 = L_4->___TouchControl_6;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		UIController_tE53801F0CB44897A9DA148380C20BC11F8C9D042* L_8 = __this->___U3CU3E4__this_0;
		NullCheck(L_8);
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_9 = L_8->___Session_5;
		NullCheck(L_9);
		ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* L_10;
		L_10 = ARSession_get_Assembly_mD1EE98F79892BB336FDEB644E9E2FE68B5EF3994_inline(L_9, NULL);
		NullCheck(L_10);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
		L_11 = ARAssembly_get_Camera_mC6B606117E775EE115EDE9C2F99DBCE08992370A_inline(L_10, NULL);
		NullCheck(L_3);
		TouchController_TurnOn_mD7E1BCFF31394BB0F6213B92B07F1FF80A009455(L_3, L_7, L_11, (bool)1, (bool)1, (bool)1, (bool)1, NULL);
	}

IL_004a:
	{
		// };
		return;
	}
}
// System.Void MotionTracking_ImageTarget.UIController/<>c__DisplayClass5_0::<Awake>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CAwakeU3Eb__1_mE4BACAE556AA5EE7AC9FED624B4D502F9A35FCE3 (U3CU3Ec__DisplayClass5_0_tA49C4F65740DE33EC72003B467475753E2BD3826* __this, const RuntimeMethod* method) 
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
// System.Void Common.TouchController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_Update_m443CF6BD9830E01E7779F9450B8C771109FFAC3A (TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m8AAAFC55B2438542D29F1EDCDEEE6AE631082269_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral018F8D429F8AA9BA28BB3504858806F3098FCE93);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0970CF2FD3560786B3DFD69BC3EE83E1A9521103);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FD8F8AC6AC464169FFBE67A817A867D6B67538B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46B615CC894A4048CF6469321A55D3818A977254);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C0B334A2A36C440093673295CFEBA7D3C2CFD67);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* V_1 = NULL;
	int32_t V_2 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_15;
	memset((&V_15), 0, sizeof(V_15));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_16;
	memset((&V_16), 0, sizeof(V_16));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_17;
	memset((&V_17), 0, sizeof(V_17));
	bool V_18 = false;
	bool V_19 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_20;
	memset((&V_20), 0, sizeof(V_20));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_21;
	memset((&V_21), 0, sizeof(V_21));
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_37;
	memset((&V_37), 0, sizeof(V_37));
	int32_t G_B23_0 = 0;
	int32_t G_B33_0 = 0;
	{
		// if (!controlTarget) { return; }
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___controlTarget_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// if (!controlTarget) { return; }
		goto IL_0477;
	}

IL_0019:
	{
		// foreach (var touch in Input.touches)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_3;
		L_3 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_00d2;
	}

IL_0027:
	{
		// foreach (var touch in Input.touches)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_8;
		L_8 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_3), NULL);
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0083;
		}
	}
	{
		// originalPosition[touch.fingerId] = touch.position;
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_10 = __this->___originalPosition_13;
		int32_t L_11;
		L_11 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_3), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_3), NULL);
		NullCheck(L_10);
		Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43(L_10, L_11, L_12, Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43_RuntimeMethod_var);
		// if (infoText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___infoText_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0080;
		}
	}
	{
		// infoText.text = "Mulai";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___infoText_4;
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, _stringLiteral46B615CC894A4048CF6469321A55D3818A977254);
	}

IL_0080:
	{
		goto IL_00cd;
	}

IL_0083:
	{
		// else if (touch.phase == TouchPhase.Ended)
		int32_t L_17;
		L_17 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_3), NULL);
		V_6 = (bool)((((int32_t)L_17) == ((int32_t)3))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00cd;
		}
	}
	{
		// originalPosition.Remove(touch.fingerId);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_19 = __this->___originalPosition_13;
		int32_t L_20;
		L_20 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_3), NULL);
		NullCheck(L_19);
		bool L_21;
		L_21 = Dictionary_2_Remove_m8AAAFC55B2438542D29F1EDCDEEE6AE631082269(L_19, L_20, Dictionary_2_Remove_m8AAAFC55B2438542D29F1EDCDEEE6AE631082269_RuntimeMethod_var);
		// if (infoText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = __this->___infoText_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_7 = L_23;
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00cc;
		}
	}
	{
		// infoText.text = "Berakhir";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___infoText_4;
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, _stringLiteral8C0B334A2A36C440093673295CFEBA7D3C2CFD67);
	}

IL_00cc:
	{
	}

IL_00cd:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00d2:
	{
		// foreach (var touch in Input.touches)
		int32_t L_27 = V_2;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0027;
		}
	}
	{
		// if (curGesture == GestureControl.OutOfControl)
		int32_t L_29 = __this->___curGesture_14;
		V_8 = (bool)((((int32_t)L_29) == ((int32_t)6))? 1 : 0);
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_0134;
		}
	}
	{
		// if (Input.touchCount == 0)
		int32_t L_31;
		L_31 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_9 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_012e;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// curGesture = GestureControl.NoTouch;
		__this->___curGesture_14 = 0;
		// if (infoText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_33 = __this->___infoText_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_33, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_10 = L_34;
		bool L_35 = V_10;
		if (!L_35)
		{
			goto IL_012d;
		}
	}
	{
		// infoText.text = "No Touch";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_36 = __this->___infoText_4;
		NullCheck(L_36);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, _stringLiteral018F8D429F8AA9BA28BB3504858806F3098FCE93);
	}

IL_012d:
	{
	}

IL_012e:
	{
		goto IL_0434;
	}

IL_0134:
	{
		// else if (curGesture == GestureControl.TwoMove || curGesture == GestureControl.TwoRotate || curGesture == GestureControl.TwoScale)
		int32_t L_37 = __this->___curGesture_14;
		if ((((int32_t)L_37) == ((int32_t)3)))
		{
			goto IL_0151;
		}
	}
	{
		int32_t L_38 = __this->___curGesture_14;
		if ((((int32_t)L_38) == ((int32_t)4)))
		{
			goto IL_0151;
		}
	}
	{
		int32_t L_39 = __this->___curGesture_14;
		G_B23_0 = ((((int32_t)L_39) == ((int32_t)5))? 1 : 0);
		goto IL_0152;
	}

IL_0151:
	{
		G_B23_0 = 1;
	}

IL_0152:
	{
		V_11 = (bool)G_B23_0;
		bool L_40 = V_11;
		if (!L_40)
		{
			goto IL_0180;
		}
	}
	{
		// if (Input.touchCount != 2)
		int32_t L_41;
		L_41 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_12 = (bool)((((int32_t)((((int32_t)L_41) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_12;
		if (!L_42)
		{
			goto IL_017a;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// curGesture = GestureControl.OutOfControl;
		__this->___curGesture_14 = 6;
	}

IL_017a:
	{
		goto IL_0434;
	}

IL_0180:
	{
		// else if (curGesture == GestureControl.TwoWait)
		int32_t L_43 = __this->___curGesture_14;
		V_13 = (bool)((((int32_t)L_43) == ((int32_t)2))? 1 : 0);
		bool L_44 = V_13;
		if (!L_44)
		{
			goto IL_0376;
		}
	}
	{
		// if (Input.touchCount != 2)
		int32_t L_45;
		L_45 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_14 = (bool)((((int32_t)((((int32_t)L_45) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_46 = V_14;
		if (!L_46)
		{
			goto IL_01b9;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// curGesture = GestureControl.OutOfControl;
		__this->___curGesture_14 = 6;
		goto IL_0370;
	}

IL_01b9:
	{
		// Vector2 touch1Delta = Input.GetTouch(0).position - originalPosition[Input.GetTouch(0).fingerId];
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_47;
		L_47 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_17 = L_47;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_17), NULL);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_49 = __this->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_50;
		L_50 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_17 = L_50;
		int32_t L_51;
		L_51 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_17), NULL);
		NullCheck(L_49);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1(L_49, L_51, Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		L_53 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_48, L_52, NULL);
		V_15 = L_53;
		// Vector2 touch2Delta = Input.GetTouch(1).position - originalPosition[Input.GetTouch(1).fingerId];
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_54;
		L_54 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_17 = L_54;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55;
		L_55 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_17), NULL);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_56 = __this->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_57;
		L_57 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_17 = L_57;
		int32_t L_58;
		L_58 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_17), NULL);
		NullCheck(L_56);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1(L_56, L_58, Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		L_60 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_55, L_59, NULL);
		V_16 = L_60;
		// if (touch1Delta.magnitude > gestureEnableDistanceThreshold && touch2Delta.magnitude > gestureEnableDistanceThreshold)
		float L_61;
		L_61 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_15), NULL);
		if ((!(((float)L_61) > ((float)(10.0f)))))
		{
			goto IL_0238;
		}
	}
	{
		float L_62;
		L_62 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_16), NULL);
		G_B33_0 = ((((float)L_62) > ((float)(10.0f)))? 1 : 0);
		goto IL_0239;
	}

IL_0238:
	{
		G_B33_0 = 0;
	}

IL_0239:
	{
		V_18 = (bool)G_B33_0;
		bool L_63 = V_18;
		if (!L_63)
		{
			goto IL_036f;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// if (Vector2.Dot(touch1Delta, touch2Delta) > 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = V_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65 = V_16;
		float L_66;
		L_66 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_64, L_65, NULL);
		V_19 = (bool)((((float)L_66) > ((float)(0.0f)))? 1 : 0);
		bool L_67 = V_19;
		if (!L_67)
		{
			goto IL_0325;
		}
	}
	{
		// GetRelativeTouch(touch1Delta + touch2Delta, out xMov, out yMov);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68 = V_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		L_70 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_68, L_69, NULL);
		TouchController_GetRelativeTouch_m28CF8C7CFF39378F3AF52AB7961051940B21BF39(__this, L_70, (&V_20), (&V_21), NULL);
		// if (xMov.sqrMagnitude > yMov.sqrMagnitude)
		float L_71;
		L_71 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_20), NULL);
		float L_72;
		L_72 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_21), NULL);
		V_22 = (bool)((((float)L_71) > ((float)L_72))? 1 : 0);
		bool L_73 = V_22;
		if (!L_73)
		{
			goto IL_02d9;
		}
	}
	{
		// curGesture = GestureControl.TwoRotate;
		__this->___curGesture_14 = 4;
		// if (isTwoFingerRotatable)
		bool L_74 = __this->___isTwoFingerRotatable_12;
		V_23 = L_74;
		bool L_75 = V_23;
		if (!L_75)
		{
			goto IL_02d6;
		}
	}
	{
		// StartCoroutine(OnTwoRotate());
		RuntimeObject* L_76;
		L_76 = TouchController_OnTwoRotate_m5D6C226599068FF57CFDFC595BFC98F856651A7E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_77;
		L_77 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_76, NULL);
		// if (infoText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_78 = __this->___infoText_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_79;
		L_79 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_78, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_24 = L_79;
		bool L_80 = V_24;
		if (!L_80)
		{
			goto IL_02d5;
		}
	}
	{
		// infoText.text = "Rotate";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_81 = __this->___infoText_4;
		NullCheck(L_81);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_81, _stringLiteral3FD8F8AC6AC464169FFBE67A817A867D6B67538B);
	}

IL_02d5:
	{
	}

IL_02d6:
	{
		goto IL_0322;
	}

IL_02d9:
	{
		// curGesture = GestureControl.TwoMove;
		__this->___curGesture_14 = 3;
		// if (isTwoFingerDraggable)
		bool L_82 = __this->___isTwoFingerDraggable_10;
		V_25 = L_82;
		bool L_83 = V_25;
		if (!L_83)
		{
			goto IL_0321;
		}
	}
	{
		// StartCoroutine(OnTwoMove());
		RuntimeObject* L_84;
		L_84 = TouchController_OnTwoMove_m84DB41607709FC7E80DA37769845C1836691D93F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_85;
		L_85 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_84, NULL);
		// if (infoText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_86 = __this->___infoText_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_87;
		L_87 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_86, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_26 = L_87;
		bool L_88 = V_26;
		if (!L_88)
		{
			goto IL_0320;
		}
	}
	{
		// infoText.text = "Move";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_89 = __this->___infoText_4;
		NullCheck(L_89);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_89, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
	}

IL_0320:
	{
	}

IL_0321:
	{
	}

IL_0322:
	{
		goto IL_036e;
	}

IL_0325:
	{
		// curGesture = GestureControl.TwoScale;
		__this->___curGesture_14 = 5;
		// if (isTwoFingerScalable)
		bool L_90 = __this->___isTwoFingerScalable_11;
		V_27 = L_90;
		bool L_91 = V_27;
		if (!L_91)
		{
			goto IL_036d;
		}
	}
	{
		// StartCoroutine(OnTwoScale());
		RuntimeObject* L_92;
		L_92 = TouchController_OnTwoScale_mA23A92B57942FE77A0A1A2A1933F308D5C3C5810(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_93;
		L_93 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_92, NULL);
		// if (infoText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_94 = __this->___infoText_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_95;
		L_95 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_94, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_28 = L_95;
		bool L_96 = V_28;
		if (!L_96)
		{
			goto IL_036c;
		}
	}
	{
		// infoText.text = "Scale";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_97 = __this->___infoText_4;
		NullCheck(L_97);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_97, _stringLiteral0970CF2FD3560786B3DFD69BC3EE83E1A9521103);
	}

IL_036c:
	{
	}

IL_036d:
	{
	}

IL_036e:
	{
	}

IL_036f:
	{
	}

IL_0370:
	{
		goto IL_0434;
	}

IL_0376:
	{
		// else if (curGesture == GestureControl.OneMove)
		int32_t L_98 = __this->___curGesture_14;
		V_29 = (bool)((((int32_t)L_98) == ((int32_t)1))? 1 : 0);
		bool L_99 = V_29;
		if (!L_99)
		{
			goto IL_03ca;
		}
	}
	{
		// if (Input.touchCount == 2)
		int32_t L_100;
		L_100 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_30 = (bool)((((int32_t)L_100) == ((int32_t)2))? 1 : 0);
		bool L_101 = V_30;
		if (!L_101)
		{
			goto IL_03a6;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// curGesture = GestureControl.TwoWait;
		__this->___curGesture_14 = 2;
		goto IL_03c7;
	}

IL_03a6:
	{
		// else if (Input.touchCount != 1)
		int32_t L_102;
		L_102 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_31 = (bool)((((int32_t)((((int32_t)L_102) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_103 = V_31;
		if (!L_103)
		{
			goto IL_03c7;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// curGesture = GestureControl.OutOfControl;
		__this->___curGesture_14 = 6;
	}

IL_03c7:
	{
		goto IL_0434;
	}

IL_03ca:
	{
		// else if (curGesture == GestureControl.NoTouch)
		int32_t L_104 = __this->___curGesture_14;
		V_32 = (bool)((((int32_t)L_104) == ((int32_t)0))? 1 : 0);
		bool L_105 = V_32;
		if (!L_105)
		{
			goto IL_0434;
		}
	}
	{
		// if (Input.touchCount == 1)
		int32_t L_106;
		L_106 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_33 = (bool)((((int32_t)L_106) == ((int32_t)1))? 1 : 0);
		bool L_107 = V_33;
		if (!L_107)
		{
			goto IL_0415;
		}
	}
	{
		// curGesture = GestureControl.OneMove;
		__this->___curGesture_14 = 1;
		// if (isOneFingerDraggable)
		bool L_108 = __this->___isOneFingerDraggable_9;
		V_34 = L_108;
		bool L_109 = V_34;
		if (!L_109)
		{
			goto IL_0412;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(OnOneMove());
		RuntimeObject* L_110;
		L_110 = TouchController_OnOneMove_mC8951003C04FE5DAD807A321230E9F081293AFAA(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_111;
		L_111 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_110, NULL);
	}

IL_0412:
	{
		goto IL_0433;
	}

IL_0415:
	{
		// else if (Input.touchCount == 2)
		int32_t L_112;
		L_112 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_35 = (bool)((((int32_t)L_112) == ((int32_t)2))? 1 : 0);
		bool L_113 = V_35;
		if (!L_113)
		{
			goto IL_0433;
		}
	}
	{
		// curGesture = GestureControl.TwoWait;
		__this->___curGesture_14 = 2;
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
	}

IL_0433:
	{
	}

IL_0434:
	{
		// if (controlTarget != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_114 = __this->___controlTarget_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_115;
		L_115 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_114, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_36 = L_115;
		bool L_116 = V_36;
		if (!L_116)
		{
			goto IL_0477;
		}
	}
	{
		// targetCamDistance = (cameraTarget.transform.position - controlTarget.position).magnitude;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_117 = __this->___cameraTarget_8;
		NullCheck(L_117);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_117, NULL);
		NullCheck(L_118);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_118, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_120 = __this->___controlTarget_7;
		NullCheck(L_120);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_120, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_119, L_121, NULL);
		V_37 = L_122;
		float L_123;
		L_123 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_37), NULL);
		__this->___targetCamDistance_15 = L_123;
	}

IL_0477:
	{
		// }
		return;
	}
}
// System.Void Common.TouchController::TurnOn(UnityEngine.Transform,UnityEngine.Camera,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_TurnOn_mD7E1BCFF31394BB0F6213B92B07F1FF80A009455 (TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam1, bool ___isOneFingerDraggable2, bool ___isTwoFingerDraggable3, bool ___isTwoFingerScalable4, bool ___isTwoFingerRotatable5, const RuntimeMethod* method) 
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// controlTarget = target;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___target0;
		__this->___controlTarget_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controlTarget_7), (void*)L_0);
		// cameraTarget = cam;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = ___cam1;
		__this->___cameraTarget_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraTarget_8), (void*)L_1);
		// this.isOneFingerDraggable = isOneFingerDraggable;
		bool L_2 = ___isOneFingerDraggable2;
		__this->___isOneFingerDraggable_9 = L_2;
		// this.isTwoFingerDraggable = isTwoFingerDraggable;
		bool L_3 = ___isTwoFingerDraggable3;
		__this->___isTwoFingerDraggable_10 = L_3;
		// this.isTwoFingerScalable = isTwoFingerScalable;
		bool L_4 = ___isTwoFingerScalable4;
		__this->___isTwoFingerScalable_11 = L_4;
		// this.isTwoFingerRotatable = isTwoFingerRotatable;
		bool L_5 = ___isTwoFingerRotatable5;
		__this->___isTwoFingerRotatable_12 = L_5;
		// curGesture = GestureControl.NoTouch;
		__this->___curGesture_14 = 0;
		// }
		return;
	}
}
// System.Void Common.TouchController::TurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_TurnOff_mD892B4BF42026AD674D0F353D4498632FB8A152A (TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* __this, const RuntimeMethod* method) 
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// controlTarget = null;
		__this->___controlTarget_7 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controlTarget_7), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// cameraTarget = null;
		__this->___cameraTarget_8 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraTarget_8), (void*)(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL);
		// curGesture = GestureControl.NoTouch;
		__this->___curGesture_14 = 0;
		// }
		return;
	}
}
// System.Collections.IEnumerator Common.TouchController::OnOneMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchController_OnOneMove_mC8951003C04FE5DAD807A321230E9F081293AFAA (TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnOneMoveU3Ed__16_tFDFB519A918146D33558C092EEBA7B38EC08F0DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnOneMoveU3Ed__16_tFDFB519A918146D33558C092EEBA7B38EC08F0DE* L_0 = (U3COnOneMoveU3Ed__16_tFDFB519A918146D33558C092EEBA7B38EC08F0DE*)il2cpp_codegen_object_new(U3COnOneMoveU3Ed__16_tFDFB519A918146D33558C092EEBA7B38EC08F0DE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnOneMoveU3Ed__16__ctor_m4D3E79792CFE946E6A23B8A6D5C156261E597AFC(L_0, 0, NULL);
		U3COnOneMoveU3Ed__16_tFDFB519A918146D33558C092EEBA7B38EC08F0DE* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Common.TouchController::OnTwoMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchController_OnTwoMove_m84DB41607709FC7E80DA37769845C1836691D93F (TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F* L_0 = (U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F*)il2cpp_codegen_object_new(U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnTwoMoveU3Ed__17__ctor_mD1B1371D95297E03658D80A27F709ED112381485(L_0, 0, NULL);
		U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Common.TouchController::OnTwoRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchController_OnTwoRotate_m5D6C226599068FF57CFDFC595BFC98F856651A7E (TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnTwoRotateU3Ed__18_tA7C67BD683F422F074BB1D5EB58C3CA9179CB57E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnTwoRotateU3Ed__18_tA7C67BD683F422F074BB1D5EB58C3CA9179CB57E* L_0 = (U3COnTwoRotateU3Ed__18_tA7C67BD683F422F074BB1D5EB58C3CA9179CB57E*)il2cpp_codegen_object_new(U3COnTwoRotateU3Ed__18_tA7C67BD683F422F074BB1D5EB58C3CA9179CB57E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnTwoRotateU3Ed__18__ctor_mD068360929BE3C7CBF371F6D7D235419F7447793(L_0, 0, NULL);
		U3COnTwoRotateU3Ed__18_tA7C67BD683F422F074BB1D5EB58C3CA9179CB57E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Common.TouchController::OnTwoScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchController_OnTwoScale_mA23A92B57942FE77A0A1A2A1933F308D5C3C5810 (TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnTwoScaleU3Ed__19_tA3CC2AD2F51FDA718C78E4C9219375B064DE42E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnTwoScaleU3Ed__19_tA3CC2AD2F51FDA718C78E4C9219375B064DE42E5* L_0 = (U3COnTwoScaleU3Ed__19_tA3CC2AD2F51FDA718C78E4C9219375B064DE42E5*)il2cpp_codegen_object_new(U3COnTwoScaleU3Ed__19_tA3CC2AD2F51FDA718C78E4C9219375B064DE42E5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnTwoScaleU3Ed__19__ctor_mA395156252539B3E5027AA42CD252C71BA86059F(L_0, 0, NULL);
		U3COnTwoScaleU3Ed__19_tA3CC2AD2F51FDA718C78E4C9219375B064DE42E5* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Common.TouchController::GetRelativeTouch(UnityEngine.Vector2,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_GetRelativeTouch_m28CF8C7CFF39378F3AF52AB7961051940B21BF39 (TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___xMovement1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___yMovement2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	float G_B7_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B7_1 = NULL;
	float G_B6_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B6_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	float G_B8_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B8_2 = NULL;
	float G_B11_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B11_1 = NULL;
	float G_B10_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B10_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B12_0;
	memset((&G_B12_0), 0, sizeof(G_B12_0));
	float G_B12_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B12_2 = NULL;
	{
		// if (delta != Vector2.zero)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___delta0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		bool L_2;
		L_2 = Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_018e;
		}
	}
	{
		// Vector3 startPoint = cameraTarget.ScreenToWorldPoint(new Vector3(0f, 0f, 300f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cameraTarget_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), (0.0f), (300.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_4, L_5, NULL);
		V_1 = L_6;
		// Vector3 endPoint = cameraTarget.ScreenToWorldPoint(new Vector3(delta.x, delta.y, 300f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = __this->___cameraTarget_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___delta0;
		float L_9 = L_8.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___delta0;
		float L_11 = L_10.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_9, L_11, (300.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_7, L_12, NULL);
		V_2 = L_13;
		// Vector3 moveDirection = endPoint - startPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_14, L_15, NULL);
		V_3 = L_16;
		// Vector3 relaForward = Vector3.ProjectOnPlane(cameraTarget.transform.forward, Vector3.up).normalized;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = __this->___cameraTarget_8;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_19, L_20, NULL);
		V_5 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		V_4 = L_22;
		// if (relaForward == Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_25;
		L_25 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_23, L_24, NULL);
		V_6 = L_25;
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00ae;
		}
	}
	{
		// xMovement = moveDirection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = ___xMovement1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_3;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_27 = L_28;
		// yMovement = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = ___yMovement2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_29 = L_30;
		goto IL_018b;
	}

IL_00ae:
	{
		// Vector3 relaRight = Vector3.Cross(Vector3.up, relaForward);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline(L_31, L_32, NULL);
		V_7 = L_33;
		// xMovement = Vector3.Project(moveDirection, relaRight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = ___xMovement1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_Project_m47BC1C674D5732D50B6E136626FB2C53E18A706E_inline(L_35, L_36, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_34 = L_37;
		// Vector3 temp = moveDirection - xMovement;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_39 = ___xMovement1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_38, L_40, NULL);
		V_8 = L_41;
		// if (temp != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_44;
		L_44 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_42, L_43, NULL);
		V_9 = L_44;
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_017d;
		}
	}
	{
		// if (Vector3.Dot(Vector3.up, temp.normalized) == 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_8), NULL);
		float L_48;
		L_48 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_46, L_47, NULL);
		V_10 = (bool)((((float)L_48) == ((float)(0.0f)))? 1 : 0);
		bool L_49 = V_10;
		if (!L_49)
		{
			goto IL_0143;
		}
	}
	{
		// yMovement = temp.magnitude * ((Vector3.Dot(relaForward, temp.normalized) > 0 ? relaForward : -relaForward));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_50 = ___yMovement2;
		float L_51;
		L_51 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_8), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_8), NULL);
		float L_54;
		L_54 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_52, L_53, NULL);
		G_B6_0 = L_51;
		G_B6_1 = L_50;
		if ((((float)L_54) > ((float)(0.0f))))
		{
			G_B7_0 = L_51;
			G_B7_1 = L_50;
			goto IL_0134;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_55, NULL);
		G_B8_0 = L_56;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0136;
	}

IL_0134:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_4;
		G_B8_0 = L_57;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0136:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(G_B8_1, G_B8_0, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)G_B8_2 = L_58;
		goto IL_017a;
	}

IL_0143:
	{
		// yMovement = temp.magnitude * ((Vector3.Dot(Vector3.up, temp.normalized) > 0 ? relaForward : -relaForward));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_59 = ___yMovement2;
		float L_60;
		L_60 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_8), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_8), NULL);
		float L_63;
		L_63 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_61, L_62, NULL);
		G_B10_0 = L_60;
		G_B10_1 = L_59;
		if ((((float)L_63) > ((float)(0.0f))))
		{
			G_B11_0 = L_60;
			G_B11_1 = L_59;
			goto IL_016d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_64, NULL);
		G_B12_0 = L_65;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_016f;
	}

IL_016d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_4;
		G_B12_0 = L_66;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_016f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(G_B12_1, G_B12_0, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)G_B12_2 = L_67;
	}

IL_017a:
	{
		goto IL_018a;
	}

IL_017d:
	{
		// yMovement = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_68 = ___yMovement2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_68 = L_69;
	}

IL_018a:
	{
	}

IL_018b:
	{
		goto IL_01a6;
	}

IL_018e:
	{
		// xMovement = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_70 = ___xMovement1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_70 = L_71;
		// yMovement = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_72 = ___yMovement2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_72 = L_73;
	}

IL_01a6:
	{
		// }
		return;
	}
}
// System.Void Common.TouchController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController__ctor_m6BE6CE527C888393971A22B707FEE3090E3BA234 (TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE352B1093D935D290E0B7A717D2AD2869814D5DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<int, Vector2> originalPosition = new Dictionary<int, Vector2>();
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_0 = (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520*)il2cpp_codegen_object_new(Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mE352B1093D935D290E0B7A717D2AD2869814D5DD(L_0, Dictionary_2__ctor_mE352B1093D935D290E0B7A717D2AD2869814D5DD_RuntimeMethod_var);
		__this->___originalPosition_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalPosition_13), (void*)L_0);
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
// System.Void Common.TouchController/<OnOneMove>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnOneMoveU3Ed__16__ctor_m4D3E79792CFE946E6A23B8A6D5C156261E597AFC (U3COnOneMoveU3Ed__16_tFDFB519A918146D33558C092EEBA7B38EC08F0DE* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Common.TouchController/<OnOneMove>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnOneMoveU3Ed__16_System_IDisposable_Dispose_m7CA00B38BAAA0D0F7019785F07273AA09497AD58 (U3COnOneMoveU3Ed__16_tFDFB519A918146D33558C092EEBA7B38EC08F0DE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Common.TouchController/<OnOneMove>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnOneMoveU3Ed__16_MoveNext_m23189FB67D279EFF7E16C9085314F5C213DBD0AD (U3COnOneMoveU3Ed__16_tFDFB519A918146D33558C092EEBA7B38EC08F0DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t G_B18_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_0047;
	}

IL_001f:
	{
		goto IL_01be;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_2 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_2, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_2);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0047:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach (var touch in Input.touches)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_3;
		L_3 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		__this->___U3CU3Es__1_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_3), (void*)L_3);
		__this->___U3CU3Es__2_4 = 0;
		goto IL_00bd;
	}

IL_0063:
	{
		// foreach (var touch in Input.touches)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_4 = __this->___U3CU3Es__1_3;
		int32_t L_5 = __this->___U3CU3Es__2_4;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___U3CtouchU3E5__3_5 = L_7;
		// originalPosition[touch.fingerId] = touch.position;
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_9 = L_8->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_10 = (&__this->___U3CtouchU3E5__3_5);
		int32_t L_11;
		L_11 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD(L_10, NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_12 = (&__this->___U3CtouchU3E5__3_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(L_12, NULL);
		NullCheck(L_9);
		Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43(L_9, L_11, L_13, Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43_RuntimeMethod_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_14 = (&__this->___U3CtouchU3E5__3_5);
		il2cpp_codegen_initobj(L_14, sizeof(Touch_t03E51455ED508492B3F278903A0114FA0E87B417));
		int32_t L_15 = __this->___U3CU3Es__2_4;
		__this->___U3CU3Es__2_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_00bd:
	{
		// foreach (var touch in Input.touches)
		int32_t L_16 = __this->___U3CU3Es__2_4;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_17 = __this->___U3CU3Es__1_3;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0063;
		}
	}
	{
		__this->___U3CU3Es__1_3 = (TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__1_3), (void*)(TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3*)NULL);
		goto IL_01ea;
	}

IL_00d9:
	{
		// if (!controlTarget) { yield break; }
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_18 = __this->___U3CU3E4__this_2;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = L_18->___controlTarget_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_19, NULL);
		V_1 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_00f4;
		}
	}
	{
		// if (!controlTarget) { yield break; }
		return (bool)0;
	}

IL_00f4:
	{
		// var touchV3 = new Vector3(Input.GetTouch(0).deltaPosition.x / Screen.width, Input.GetTouch(0).deltaPosition.y / Screen.height, 0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_22;
		L_22 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_2 = L_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_2), NULL);
		float L_24 = L_23.___x_0;
		int32_t L_25;
		L_25 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_26;
		L_26 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_2 = L_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_2), NULL);
		float L_28 = L_27.___y_1;
		int32_t L_29;
		L_29 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), ((float)(L_24/((float)L_25))), ((float)(L_28/((float)L_29))), (0.0f), /*hidden argument*/NULL);
		__this->___U3CtouchV3U3E5__4_6 = L_30;
		// var addV3 = cameraTarget.transform.localToWorldMatrix.MultiplyVector(touchV3);
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_31 = __this->___U3CU3E4__this_2;
		NullCheck(L_31);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32 = L_31->___cameraTarget_8;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_32, NULL);
		NullCheck(L_33);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_34;
		L_34 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_33, NULL);
		V_3 = L_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = __this->___U3CtouchV3U3E5__4_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_3), L_35, NULL);
		__this->___U3CaddV3U3E5__5_7 = L_36;
		// var newPos = controlTarget.position + addV3 * targetCamDistance;
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_37 = __this->___U3CU3E4__this_2;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = L_37->___controlTarget_7;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = __this->___U3CaddV3U3E5__5_7;
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_41 = __this->___U3CU3E4__this_2;
		NullCheck(L_41);
		float L_42 = L_41->___targetCamDistance_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_40, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_39, L_43, NULL);
		__this->___U3CnewPosU3E5__6_8 = L_44;
		// controlTarget.position = newPos;
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_45 = __this->___U3CU3E4__this_2;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46 = L_45->___controlTarget_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = __this->___U3CnewPosU3E5__6_8;
		NullCheck(L_46);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_46, L_47, NULL);
		// yield return 0;
		int32_t L_48 = 0;
		RuntimeObject* L_49 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_48);
		__this->___U3CU3E2__current_1 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_49);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_01be:
	{
		__this->___U3CU3E1__state_0 = (-1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_50 = (&__this->___U3CtouchV3U3E5__4_6);
		il2cpp_codegen_initobj(L_50, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_51 = (&__this->___U3CaddV3U3E5__5_7);
		il2cpp_codegen_initobj(L_51, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_52 = (&__this->___U3CnewPosU3E5__6_8);
		il2cpp_codegen_initobj(L_52, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
	}

IL_01ea:
	{
		// while (Input.touchCount == 1 && originalPosition.ContainsKey(Input.GetTouch(0).fingerId))
		int32_t L_53;
		L_53 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((!(((uint32_t)L_53) == ((uint32_t)1))))
		{
			goto IL_0212;
		}
	}
	{
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_54 = __this->___U3CU3E4__this_2;
		NullCheck(L_54);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_55 = L_54->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_56;
		L_56 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_2 = L_56;
		int32_t L_57;
		L_57 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_2), NULL);
		NullCheck(L_55);
		bool L_58;
		L_58 = Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55(L_55, L_57, Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55_RuntimeMethod_var);
		G_B18_0 = ((int32_t)(L_58));
		goto IL_0213;
	}

IL_0212:
	{
		G_B18_0 = 0;
	}

IL_0213:
	{
		V_4 = (bool)G_B18_0;
		bool L_59 = V_4;
		if (L_59)
		{
			goto IL_00d9;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Common.TouchController/<OnOneMove>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnOneMoveU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m487D0B093B19F8D1773214FC92921AF3080DCD50 (U3COnOneMoveU3Ed__16_tFDFB519A918146D33558C092EEBA7B38EC08F0DE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Common.TouchController/<OnOneMove>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnOneMoveU3Ed__16_System_Collections_IEnumerator_Reset_m9830B3F2DCDC6C372F53EB104DE139D69D08458C (U3COnOneMoveU3Ed__16_tFDFB519A918146D33558C092EEBA7B38EC08F0DE* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnOneMoveU3Ed__16_System_Collections_IEnumerator_Reset_m9830B3F2DCDC6C372F53EB104DE139D69D08458C_RuntimeMethod_var)));
	}
}
// System.Object Common.TouchController/<OnOneMove>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnOneMoveU3Ed__16_System_Collections_IEnumerator_get_Current_mA16C215BED729DDF1B4845E08DBAC72BDD2554E0 (U3COnOneMoveU3Ed__16_tFDFB519A918146D33558C092EEBA7B38EC08F0DE* __this, const RuntimeMethod* method) 
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
// System.Void Common.TouchController/<OnTwoMove>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoMoveU3Ed__17__ctor_mD1B1371D95297E03658D80A27F709ED112381485 (U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Common.TouchController/<OnTwoMove>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoMoveU3Ed__17_System_IDisposable_Dispose_m972E280D51BCA3D750F58C7FF523016989C761D0 (U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Common.TouchController/<OnTwoMove>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnTwoMoveU3Ed__17_MoveNext_mECA3563D37254E07D26CBFDB21737675E670ECE2 (U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F* G_B16_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F* G_B15_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B17_1;
	memset((&G_B17_1), 0, sizeof(G_B17_1));
	U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F* G_B17_2 = NULL;
	int32_t G_B24_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0274;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var rawTargetPos = controlTarget.position;
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___controlTarget_7;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___U3CrawTargetPosU3E5__3_5 = L_5;
		// foreach (var touch in Input.touches)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_6;
		L_6 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		__this->___U3CU3Es__4_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_6), (void*)L_6);
		__this->___U3CU3Es__5_7 = 0;
		goto IL_00a8;
	}

IL_004e:
	{
		// foreach (var touch in Input.touches)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_7 = __this->___U3CU3Es__4_6;
		int32_t L_8 = __this->___U3CU3Es__5_7;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->___U3CtouchU3E5__6_8 = L_10;
		// originalPosition[touch.fingerId] = touch.position;
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_12 = L_11->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_13 = (&__this->___U3CtouchU3E5__6_8);
		int32_t L_14;
		L_14 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD(L_13, NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_15 = (&__this->___U3CtouchU3E5__6_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(L_15, NULL);
		NullCheck(L_12);
		Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43(L_12, L_14, L_16, Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43_RuntimeMethod_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_17 = (&__this->___U3CtouchU3E5__6_8);
		il2cpp_codegen_initobj(L_17, sizeof(Touch_t03E51455ED508492B3F278903A0114FA0E87B417));
		int32_t L_18 = __this->___U3CU3Es__5_7;
		__this->___U3CU3Es__5_7 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_00a8:
	{
		// foreach (var touch in Input.touches)
		int32_t L_19 = __this->___U3CU3Es__5_7;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_20 = __this->___U3CU3Es__4_6;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_004e;
		}
	}
	{
		__this->___U3CU3Es__4_6 = (TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_6), (void*)(TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3*)NULL);
		goto IL_0288;
	}

IL_00c4:
	{
		// if (!controlTarget) { yield break; }
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_21 = __this->___U3CU3E4__this_2;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21->___controlTarget_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_22, NULL);
		V_1 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_00df;
		}
	}
	{
		// if (!controlTarget) { yield break; }
		return (bool)0;
	}

IL_00df:
	{
		// Vector2 fixedDelta = (Input.GetTouch(0).position + Input.GetTouch(1).position - originalPosition[Input.GetTouch(0).fingerId] - originalPosition[Input.GetTouch(1).fingerId]);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_25;
		L_25 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_2 = L_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_2), NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_27;
		L_27 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_2 = L_27;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_2), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_26, L_28, NULL);
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_30 = __this->___U3CU3E4__this_2;
		NullCheck(L_30);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_31 = L_30->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_32;
		L_32 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_2 = L_32;
		int32_t L_33;
		L_33 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_2), NULL);
		NullCheck(L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1(L_31, L_33, Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_29, L_34, NULL);
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_36 = __this->___U3CU3E4__this_2;
		NullCheck(L_36);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_37 = L_36->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_38;
		L_38 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_2 = L_38;
		int32_t L_39;
		L_39 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_2), NULL);
		NullCheck(L_37);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1(L_37, L_39, Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		L_41 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_35, L_40, NULL);
		__this->___U3CfixedDeltaU3E5__7_9 = L_41;
		// GetRelativeTouch(fixedDelta, out xMovement, out yMovement);
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_42 = __this->___U3CU3E4__this_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = __this->___U3CfixedDeltaU3E5__7_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = (&__this->___U3CxMovementU3E5__1_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_45 = (&__this->___U3CyMovementU3E5__2_4);
		NullCheck(L_42);
		TouchController_GetRelativeTouch_m28CF8C7CFF39378F3AF52AB7961051940B21BF39(L_42, L_43, L_44, L_45, NULL);
		// if (yMovement != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = __this->___U3CyMovementU3E5__2_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_48;
		L_48 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_46, L_47, NULL);
		V_3 = L_48;
		bool L_49 = V_3;
		if (!L_49)
		{
			goto IL_025f;
		}
	}
	{
		// var Cam_Forward = cameraTarget.transform.forward;
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_50 = __this->___U3CU3E4__this_2;
		NullCheck(L_50);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_51 = L_50->___cameraTarget_8;
		NullCheck(L_51);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_51, NULL);
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_52, NULL);
		__this->___U3CCam_ForwardU3E5__8_10 = L_53;
		// var Cam_Forward_XZ = Vector3.ProjectOnPlane(Cam_Forward, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = __this->___U3CCam_ForwardU3E5__8_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline(L_54, L_55, NULL);
		__this->___U3CCam_Forward_XZU3E5__9_11 = L_56;
		// var newPos = rawTargetPos + (Vector3.Dot(yMovement, Cam_Forward) > 0 ? Cam_Forward_XZ : -Cam_Forward_XZ) * yMovement.magnitude * targetCamDistance * 2 / 1000;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = __this->___U3CrawTargetPosU3E5__3_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = __this->___U3CyMovementU3E5__2_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = __this->___U3CCam_ForwardU3E5__8_10;
		float L_60;
		L_60 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_58, L_59, NULL);
		G_B15_0 = L_57;
		G_B15_1 = __this;
		if ((((float)L_60) > ((float)(0.0f))))
		{
			G_B16_0 = L_57;
			G_B16_1 = __this;
			goto IL_01df;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = __this->___U3CCam_Forward_XZU3E5__9_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_61, NULL);
		G_B17_0 = L_62;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		goto IL_01e5;
	}

IL_01df:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = __this->___U3CCam_Forward_XZU3E5__9_11;
		G_B17_0 = L_63;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
	}

IL_01e5:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_64 = (&__this->___U3CyMovementU3E5__2_4);
		float L_65;
		L_65 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(G_B17_0, L_65, NULL);
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_67 = __this->___U3CU3E4__this_2;
		NullCheck(L_67);
		float L_68 = L_67->___targetCamDistance_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_66, L_68, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_69, (2.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_70, (1000.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(G_B17_1, L_71, NULL);
		NullCheck(G_B17_2);
		G_B17_2->___U3CnewPosU3E5__10_12 = L_72;
		// controlTarget.position = newPos;
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_73 = __this->___U3CU3E4__this_2;
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74 = L_73->___controlTarget_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = __this->___U3CnewPosU3E5__10_12;
		NullCheck(L_74);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_74, L_75, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_76 = (&__this->___U3CCam_ForwardU3E5__8_10);
		il2cpp_codegen_initobj(L_76, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_77 = (&__this->___U3CCam_Forward_XZU3E5__9_11);
		il2cpp_codegen_initobj(L_77, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_78 = (&__this->___U3CnewPosU3E5__10_12);
		il2cpp_codegen_initobj(L_78, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
	}

IL_025f:
	{
		// yield return 0;
		int32_t L_79 = 0;
		RuntimeObject* L_80 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_79);
		__this->___U3CU3E2__current_1 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_80);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0274:
	{
		__this->___U3CU3E1__state_0 = (-1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_81 = (&__this->___U3CfixedDeltaU3E5__7_9);
		il2cpp_codegen_initobj(L_81, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
	}

IL_0288:
	{
		// while (Input.touchCount == 2 &&
		//         originalPosition.ContainsKey(Input.GetTouch(0).fingerId) &&
		//         originalPosition.ContainsKey(Input.GetTouch(1).fingerId))
		int32_t L_82;
		L_82 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((!(((uint32_t)L_82) == ((uint32_t)2))))
		{
			goto IL_02d0;
		}
	}
	{
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_83 = __this->___U3CU3E4__this_2;
		NullCheck(L_83);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_84 = L_83->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_85;
		L_85 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_2 = L_85;
		int32_t L_86;
		L_86 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_2), NULL);
		NullCheck(L_84);
		bool L_87;
		L_87 = Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55(L_84, L_86, Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55_RuntimeMethod_var);
		if (!L_87)
		{
			goto IL_02d0;
		}
	}
	{
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_88 = __this->___U3CU3E4__this_2;
		NullCheck(L_88);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_89 = L_88->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_90;
		L_90 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_2 = L_90;
		int32_t L_91;
		L_91 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_2), NULL);
		NullCheck(L_89);
		bool L_92;
		L_92 = Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55(L_89, L_91, Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55_RuntimeMethod_var);
		G_B24_0 = ((int32_t)(L_92));
		goto IL_02d1;
	}

IL_02d0:
	{
		G_B24_0 = 0;
	}

IL_02d1:
	{
		V_4 = (bool)G_B24_0;
		bool L_93 = V_4;
		if (L_93)
		{
			goto IL_00c4;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Common.TouchController/<OnTwoMove>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnTwoMoveU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m721E18E2895E01A91BCD06515C6DFDC9B10095EA (U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Common.TouchController/<OnTwoMove>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoMoveU3Ed__17_System_Collections_IEnumerator_Reset_m1ED6219A1E70DC8D5A684AA160488E0BC7C85600 (U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnTwoMoveU3Ed__17_System_Collections_IEnumerator_Reset_m1ED6219A1E70DC8D5A684AA160488E0BC7C85600_RuntimeMethod_var)));
	}
}
// System.Object Common.TouchController/<OnTwoMove>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnTwoMoveU3Ed__17_System_Collections_IEnumerator_get_Current_m5100A84BF32C9208BA4A9B47844C5A86A3DCAA82 (U3COnTwoMoveU3Ed__17_tC41230EDC80D7508A49AA9473B4EEC4E723E287F* __this, const RuntimeMethod* method) 
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
// System.Void Common.TouchController/<OnTwoRotate>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoRotateU3Ed__18__ctor_mD068360929BE3C7CBF371F6D7D235419F7447793 (U3COnTwoRotateU3Ed__18_tA7C67BD683F422F074BB1D5EB58C3CA9179CB57E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Common.TouchController/<OnTwoRotate>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoRotateU3Ed__18_System_IDisposable_Dispose_m1BBBE5D5BE54A81683264CD9EDF1220CF7206AF8 (U3COnTwoRotateU3Ed__18_tA7C67BD683F422F074BB1D5EB58C3CA9179CB57E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Common.TouchController/<OnTwoRotate>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnTwoRotateU3Ed__18_MoveNext_mEA0086D95D068C6CECE850559B2CFD53BB400DF6 (U3COnTwoRotateU3Ed__18_tA7C67BD683F422F074BB1D5EB58C3CA9179CB57E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B24_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0272;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Quaternion rawRotation = controlTarget.rotation;
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___controlTarget_7;
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		__this->___U3CrawRotationU3E5__3_5 = L_5;
		// foreach (var touch in Input.touches)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_6;
		L_6 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		__this->___U3CU3Es__4_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_6), (void*)L_6);
		__this->___U3CU3Es__5_7 = 0;
		goto IL_00a8;
	}

IL_004e:
	{
		// foreach (var touch in Input.touches)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_7 = __this->___U3CU3Es__4_6;
		int32_t L_8 = __this->___U3CU3Es__5_7;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->___U3CtouchU3E5__6_8 = L_10;
		// originalPosition[touch.fingerId] = touch.position;
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_12 = L_11->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_13 = (&__this->___U3CtouchU3E5__6_8);
		int32_t L_14;
		L_14 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD(L_13, NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_15 = (&__this->___U3CtouchU3E5__6_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(L_15, NULL);
		NullCheck(L_12);
		Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43(L_12, L_14, L_16, Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43_RuntimeMethod_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_17 = (&__this->___U3CtouchU3E5__6_8);
		il2cpp_codegen_initobj(L_17, sizeof(Touch_t03E51455ED508492B3F278903A0114FA0E87B417));
		int32_t L_18 = __this->___U3CU3Es__5_7;
		__this->___U3CU3Es__5_7 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_00a8:
	{
		// foreach (var touch in Input.touches)
		int32_t L_19 = __this->___U3CU3Es__5_7;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_20 = __this->___U3CU3Es__4_6;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_004e;
		}
	}
	{
		__this->___U3CU3Es__4_6 = (TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_6), (void*)(TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3*)NULL);
		goto IL_0286;
	}

IL_00c4:
	{
		// if (!controlTarget) { yield break; }
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_21 = __this->___U3CU3E4__this_2;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21->___controlTarget_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_22, NULL);
		V_1 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_1;
		if (!L_24)
		{
			goto IL_00df;
		}
	}
	{
		// if (!controlTarget) { yield break; }
		return (bool)0;
	}

IL_00df:
	{
		// Vector2 fixedDelta = (Input.GetTouch(0).position + Input.GetTouch(1).position - originalPosition[Input.GetTouch(0).fingerId] - originalPosition[Input.GetTouch(1).fingerId]) * 0.5f / Screen.width * rotateSpeed;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_25;
		L_25 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_2 = L_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_2), NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_27;
		L_27 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_2 = L_27;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_2), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_26, L_28, NULL);
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_30 = __this->___U3CU3E4__this_2;
		NullCheck(L_30);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_31 = L_30->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_32;
		L_32 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_2 = L_32;
		int32_t L_33;
		L_33 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_2), NULL);
		NullCheck(L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1(L_31, L_33, Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_29, L_34, NULL);
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_36 = __this->___U3CU3E4__this_2;
		NullCheck(L_36);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_37 = L_36->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_38;
		L_38 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_2 = L_38;
		int32_t L_39;
		L_39 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_2), NULL);
		NullCheck(L_37);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1(L_37, L_39, Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		L_41 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_35, L_40, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		L_42 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_41, (0.5f), NULL);
		int32_t L_43;
		L_43 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_42, ((float)L_43), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		L_45 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_44, (270.0f), NULL);
		__this->___U3CfixedDeltaU3E5__7_9 = L_45;
		// GetRelativeTouch(fixedDelta, out xMovement, out yMovement);
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_46 = __this->___U3CU3E4__this_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = __this->___U3CfixedDeltaU3E5__7_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_48 = (&__this->___U3CxMovementU3E5__1_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_49 = (&__this->___U3CyMovementU3E5__2_4);
		NullCheck(L_46);
		TouchController_GetRelativeTouch_m28CF8C7CFF39378F3AF52AB7961051940B21BF39(L_46, L_47, L_48, L_49, NULL);
		// if (xMovement != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = __this->___U3CxMovementU3E5__1_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_52;
		L_52 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_50, L_51, NULL);
		V_3 = L_52;
		bool L_53 = V_3;
		if (!L_53)
		{
			goto IL_025d;
		}
	}
	{
		// if (Vector3.Dot(Vector3.Cross(xMovement.normalized, Vector3.up), cameraTarget.transform.forward) < 0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_54 = (&__this->___U3CxMovementU3E5__1_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline(L_55, L_56, NULL);
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_58 = __this->___U3CU3E4__this_2;
		NullCheck(L_58);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_59 = L_58->___cameraTarget_8;
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_59, NULL);
		NullCheck(L_60);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_60, NULL);
		float L_62;
		L_62 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_57, L_61, NULL);
		V_4 = (bool)((((float)L_62) < ((float)(0.0f)))? 1 : 0);
		bool L_63 = V_4;
		if (!L_63)
		{
			goto IL_021d;
		}
	}
	{
		// controlTarget.rotation = rawRotation * Quaternion.Euler(0f, xMovement.sqrMagnitude / Mathf.PI, 0f);
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_64 = __this->___U3CU3E4__this_2;
		NullCheck(L_64);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65 = L_64->___controlTarget_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_66 = __this->___U3CrawRotationU3E5__3_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_67 = (&__this->___U3CxMovementU3E5__1_3);
		float L_68;
		L_68 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline(L_67, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_69;
		L_69 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), ((float)(L_68/(3.14159274f))), (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_70;
		L_70 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_66, L_69, NULL);
		NullCheck(L_65);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_65, L_70, NULL);
		goto IL_025c;
	}

IL_021d:
	{
		// controlTarget.rotation = rawRotation * Quaternion.Euler(0f, -xMovement.sqrMagnitude / Mathf.PI, 0f);
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_71 = __this->___U3CU3E4__this_2;
		NullCheck(L_71);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72 = L_71->___controlTarget_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_73 = __this->___U3CrawRotationU3E5__3_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_74 = (&__this->___U3CxMovementU3E5__1_3);
		float L_75;
		L_75 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline(L_74, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_76;
		L_76 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), ((float)(((-L_75))/(3.14159274f))), (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_77;
		L_77 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_73, L_76, NULL);
		NullCheck(L_72);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_72, L_77, NULL);
	}

IL_025c:
	{
	}

IL_025d:
	{
		// yield return 0;
		int32_t L_78 = 0;
		RuntimeObject* L_79 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_78);
		__this->___U3CU3E2__current_1 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_79);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0272:
	{
		__this->___U3CU3E1__state_0 = (-1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_80 = (&__this->___U3CfixedDeltaU3E5__7_9);
		il2cpp_codegen_initobj(L_80, sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
	}

IL_0286:
	{
		// while (Input.touchCount == 2 &&
		//         originalPosition.ContainsKey(Input.GetTouch(0).fingerId) &&
		//         originalPosition.ContainsKey(Input.GetTouch(1).fingerId))
		int32_t L_81;
		L_81 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((!(((uint32_t)L_81) == ((uint32_t)2))))
		{
			goto IL_02ce;
		}
	}
	{
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_82 = __this->___U3CU3E4__this_2;
		NullCheck(L_82);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_83 = L_82->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_84;
		L_84 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_2 = L_84;
		int32_t L_85;
		L_85 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_2), NULL);
		NullCheck(L_83);
		bool L_86;
		L_86 = Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55(L_83, L_85, Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55_RuntimeMethod_var);
		if (!L_86)
		{
			goto IL_02ce;
		}
	}
	{
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_87 = __this->___U3CU3E4__this_2;
		NullCheck(L_87);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_88 = L_87->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_89;
		L_89 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_2 = L_89;
		int32_t L_90;
		L_90 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_2), NULL);
		NullCheck(L_88);
		bool L_91;
		L_91 = Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55(L_88, L_90, Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55_RuntimeMethod_var);
		G_B24_0 = ((int32_t)(L_91));
		goto IL_02cf;
	}

IL_02ce:
	{
		G_B24_0 = 0;
	}

IL_02cf:
	{
		V_5 = (bool)G_B24_0;
		bool L_92 = V_5;
		if (L_92)
		{
			goto IL_00c4;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Common.TouchController/<OnTwoRotate>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnTwoRotateU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m250132544BF1EFA81E0F3FD1F2F0652CA8722EC3 (U3COnTwoRotateU3Ed__18_tA7C67BD683F422F074BB1D5EB58C3CA9179CB57E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Common.TouchController/<OnTwoRotate>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoRotateU3Ed__18_System_Collections_IEnumerator_Reset_m00C4FFD6FAA5933488D04F345017A83AD61079A7 (U3COnTwoRotateU3Ed__18_tA7C67BD683F422F074BB1D5EB58C3CA9179CB57E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnTwoRotateU3Ed__18_System_Collections_IEnumerator_Reset_m00C4FFD6FAA5933488D04F345017A83AD61079A7_RuntimeMethod_var)));
	}
}
// System.Object Common.TouchController/<OnTwoRotate>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnTwoRotateU3Ed__18_System_Collections_IEnumerator_get_Current_mD56BFCC7CEA204D2C46866CFEA43086E3A765E42 (U3COnTwoRotateU3Ed__18_tA7C67BD683F422F074BB1D5EB58C3CA9179CB57E* __this, const RuntimeMethod* method) 
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
// System.Void Common.TouchController/<OnTwoScale>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoScaleU3Ed__19__ctor_mA395156252539B3E5027AA42CD252C71BA86059F (U3COnTwoScaleU3Ed__19_tA3CC2AD2F51FDA718C78E4C9219375B064DE42E5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Common.TouchController/<OnTwoScale>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoScaleU3Ed__19_System_IDisposable_Dispose_m8E15749E3CB48AE4D2307BA6E527569F72F1A8E0 (U3COnTwoScaleU3Ed__19_tA3CC2AD2F51FDA718C78E4C9219375B064DE42E5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Common.TouchController/<OnTwoScale>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnTwoScaleU3Ed__19_MoveNext_m27A6505E92FF83FCB08EC2ABB7FB71E51F5E1842 (U3COnTwoScaleU3Ed__19_tA3CC2AD2F51FDA718C78E4C9219375B064DE42E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B19_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_018b;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Vector3 rawScale = controlTarget.localScale;
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3->___controlTarget_7;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		__this->___U3CrawScaleU3E5__1_3 = L_5;
		// foreach (var touch in Input.touches)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_6;
		L_6 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		__this->___U3CU3Es__3_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_5), (void*)L_6);
		__this->___U3CU3Es__4_6 = 0;
		goto IL_00a8;
	}

IL_004e:
	{
		// foreach (var touch in Input.touches)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_7 = __this->___U3CU3Es__3_5;
		int32_t L_8 = __this->___U3CU3Es__4_6;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->___U3CtouchU3E5__5_7 = L_10;
		// originalPosition[touch.fingerId] = touch.position;
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_12 = L_11->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_13 = (&__this->___U3CtouchU3E5__5_7);
		int32_t L_14;
		L_14 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD(L_13, NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_15 = (&__this->___U3CtouchU3E5__5_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A(L_15, NULL);
		NullCheck(L_12);
		Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43(L_12, L_14, L_16, Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43_RuntimeMethod_var);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417* L_17 = (&__this->___U3CtouchU3E5__5_7);
		il2cpp_codegen_initobj(L_17, sizeof(Touch_t03E51455ED508492B3F278903A0114FA0E87B417));
		int32_t L_18 = __this->___U3CU3Es__4_6;
		__this->___U3CU3Es__4_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_00a8:
	{
		// foreach (var touch in Input.touches)
		int32_t L_19 = __this->___U3CU3Es__4_6;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_20 = __this->___U3CU3Es__3_5;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_004e;
		}
	}
	{
		__this->___U3CU3Es__3_5 = (TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_5), (void*)(TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3*)NULL);
		// float rawFingersDistance = Vector2.Distance(originalPosition[Input.GetTouch(0).fingerId], originalPosition[Input.GetTouch(1).fingerId]);
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_21 = __this->___U3CU3E4__this_2;
		NullCheck(L_21);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_22 = L_21->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_23;
		L_23 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_1 = L_23;
		int32_t L_24;
		L_24 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_1), NULL);
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1(L_22, L_24, Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var);
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_26 = __this->___U3CU3E4__this_2;
		NullCheck(L_26);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_27 = L_26->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_28;
		L_28 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_1 = L_28;
		int32_t L_29;
		L_29 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_1), NULL);
		NullCheck(L_27);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1(L_27, L_29, Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var);
		float L_31;
		L_31 = Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline(L_25, L_30, NULL);
		__this->___U3CrawFingersDistanceU3E5__2_4 = L_31;
		goto IL_0193;
	}

IL_010b:
	{
		// if (!controlTarget) { yield break; }
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_32 = __this->___U3CU3E4__this_2;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = L_32->___controlTarget_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_33, NULL);
		V_2 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0126;
		}
	}
	{
		// if (!controlTarget) { yield break; }
		return (bool)0;
	}

IL_0126:
	{
		// float scaleFactor = rawFingersDistance / Vector2.Distance(Input.GetTouch(0).position, Input.GetTouch(1).position);
		float L_36 = __this->___U3CrawFingersDistanceU3E5__2_4;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_37;
		L_37 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_1 = L_37;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_39;
		L_39 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_1 = L_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		float L_41;
		L_41 = Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline(L_38, L_40, NULL);
		__this->___U3CscaleFactorU3E5__6_8 = ((float)(L_36/L_41));
		// controlTarget.localScale = rawScale / scaleFactor;
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_42 = __this->___U3CU3E4__this_2;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = L_42->___controlTarget_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = __this->___U3CrawScaleU3E5__1_3;
		float L_45 = __this->___U3CscaleFactorU3E5__6_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_44, L_45, NULL);
		NullCheck(L_43);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_43, L_46, NULL);
		// yield return 0;
		int32_t L_47 = 0;
		RuntimeObject* L_48 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_47);
		__this->___U3CU3E2__current_1 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_48);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_018b:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0193:
	{
		// while (Input.touchCount == 2 &&
		//         originalPosition.ContainsKey(Input.GetTouch(0).fingerId) &&
		//         originalPosition.ContainsKey(Input.GetTouch(1).fingerId))
		int32_t L_49;
		L_49 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((!(((uint32_t)L_49) == ((uint32_t)2))))
		{
			goto IL_01db;
		}
	}
	{
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_50 = __this->___U3CU3E4__this_2;
		NullCheck(L_50);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_51 = L_50->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_52;
		L_52 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_1 = L_52;
		int32_t L_53;
		L_53 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_1), NULL);
		NullCheck(L_51);
		bool L_54;
		L_54 = Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55(L_51, L_53, Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55_RuntimeMethod_var);
		if (!L_54)
		{
			goto IL_01db;
		}
	}
	{
		TouchController_t888D40BCAF638772D5E76ABEB56182415340C8A0* L_55 = __this->___U3CU3E4__this_2;
		NullCheck(L_55);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_56 = L_55->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_57;
		L_57 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_1 = L_57;
		int32_t L_58;
		L_58 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_1), NULL);
		NullCheck(L_56);
		bool L_59;
		L_59 = Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55(L_56, L_58, Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55_RuntimeMethod_var);
		G_B19_0 = ((int32_t)(L_59));
		goto IL_01dc;
	}

IL_01db:
	{
		G_B19_0 = 0;
	}

IL_01dc:
	{
		V_3 = (bool)G_B19_0;
		bool L_60 = V_3;
		if (L_60)
		{
			goto IL_010b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Common.TouchController/<OnTwoScale>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnTwoScaleU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m019C31244FFD80FAD105FCFBCBF79C65C31EBC4B (U3COnTwoScaleU3Ed__19_tA3CC2AD2F51FDA718C78E4C9219375B064DE42E5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Common.TouchController/<OnTwoScale>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoScaleU3Ed__19_System_Collections_IEnumerator_Reset_m2AB168CF545547A24D2AD58D3A7A682029B5BC04 (U3COnTwoScaleU3Ed__19_tA3CC2AD2F51FDA718C78E4C9219375B064DE42E5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnTwoScaleU3Ed__19_System_Collections_IEnumerator_Reset_m2AB168CF545547A24D2AD58D3A7A682029B5BC04_RuntimeMethod_var)));
	}
}
// System.Object Common.TouchController/<OnTwoScale>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnTwoScaleU3Ed__19_System_Collections_IEnumerator_get_Current_m8B1D28C36DB8772A2C647F99B3D962E2F183A011 (U3COnTwoScaleU3Ed__19_tA3CC2AD2F51FDA718C78E4C9219375B064DE42E5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARSession_get_CenterObject_mBB894C35750938190298F7D5FF92758174A303D5_inline (ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject CenterObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CCenterObjectU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ARAssembly_get_Camera_mC6B606117E775EE115EDE9C2F99DBCE08992370A_inline (ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* __this, const RuntimeMethod* method) 
{
	{
		// public Camera Camera { get; private set; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___U3CCameraU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_mCAFA9F9416EA4740DCA8757B6E52260BF536770A_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___planeNormal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___planeNormal1;
		float L_2;
		L_2 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		V_2 = L_6;
		goto IL_005d;
	}

IL_0019:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___planeNormal1;
		float L_9;
		L_9 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_7, L_8, NULL);
		V_3 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___planeNormal1;
		float L_13 = L_12.___x_2;
		float L_14 = V_3;
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___vector0;
		float L_17 = L_16.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___planeNormal1;
		float L_19 = L_18.___y_3;
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___vector0;
		float L_23 = L_22.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___planeNormal1;
		float L_25 = L_24.___z_4;
		float L_26 = V_3;
		float L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), ((float)il2cpp_codegen_subtract(L_11, ((float)(((float)il2cpp_codegen_multiply(L_13, L_14))/L_15)))), ((float)il2cpp_codegen_subtract(L_17, ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/L_21)))), ((float)il2cpp_codegen_subtract(L_23, ((float)(((float)il2cpp_codegen_multiply(L_25, L_26))/L_27)))), /*hidden argument*/NULL);
		V_2 = L_28;
		goto IL_005d;
	}

IL_005d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_2;
		return L_29;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Project_m47BC1C674D5732D50B6E136626FB2C53E18A706E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___onNormal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___onNormal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___onNormal1;
		float L_2;
		L_2 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3 = V_0;
		float L_4 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_6;
		goto IL_004c;
	}

IL_001d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___vector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___onNormal1;
		float L_9;
		L_9 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_7, L_8, NULL);
		V_3 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___onNormal1;
		float L_11 = L_10.___x_2;
		float L_12 = V_3;
		float L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___onNormal1;
		float L_15 = L_14.___y_3;
		float L_16 = V_3;
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___onNormal1;
		float L_19 = L_18.___z_4;
		float L_20 = V_3;
		float L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)(((float)il2cpp_codegen_multiply(L_11, L_12))/L_13)), ((float)(((float)il2cpp_codegen_multiply(L_15, L_16))/L_17)), ((float)(((float)il2cpp_codegen_multiply(L_19, L_20))/L_21)), /*hidden argument*/NULL);
		V_2 = L_22;
		goto IL_004c;
	}

IL_004c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		return L_23;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
