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

// System.Action`1<easyar.InputFrameSourceType>
struct Action_1_t3DCAB4FE67BE1E2F926A5D4B4B806B49296FC877;
// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<easyar.OutputFrame>
struct Action_1_t51C09D97035A969C5BE8AD3814D3435DFCBC7D36;
// System.Action`1<easyar.ARSession/SessionState>
struct Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915;
// System.Action`2<easyar.Target,System.Boolean>
struct Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416;
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
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
// easyar.ARComponentPicker
struct ARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439;
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
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
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
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// easyar.DisplayEmulator
struct DisplayEmulator_t2E0A8EDC08F0914C1AB7368D35286516CCA00DE5;
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
// easyar.ImageTarget
struct ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB;
// easyar.ImageTargetController
struct ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633;
// easyar.ImageTracker
struct ImageTracker_t936EBB4B806DF339985DABBA2473BC1E6B533813;
// easyar.ImageTrackerFrameFilter
struct ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E;
// easyar.InputFrameFork
struct InputFrameFork_t2D1FE0BD3FE1C53ABC6BA0A41009156D8F69B486;
// easyar.InputFramePlayer
struct InputFramePlayer_tCC5B7A2D27D90F578482554C4D6AD60B3936B8C9;
// easyar.InputFrameRecorder
struct InputFrameRecorder_t98F7E309F18AED110FE589A79C8962190C771D69;
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
// FrameRecording.Sample
struct Sample_t2818228DACAA002719507BE535C3579473CA8092;
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
// easyar.WorldRootController
struct WorldRootController_tDDE4A5BB7E650DE15875AFD6F7E8BBB2F670A1A2;
// easyar.ARAssembly/Components
struct Components_t5B141D9673D9F02BF74C9BB27F34C8A80854FC75;
// easyar.ARSession/FrameChangeAction
struct FrameChangeAction_t22915014AF19BCD5BA244E1A821751FAC6A2C2B3;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// easyar.FramePlayer/FrameMetaSource
struct FrameMetaSource_t97D09D5E6ABFE2BE6746E3EEDAD4D016C1158E7B;
// easyar.ImageTargetController/ImageFileSourceData
struct ImageFileSourceData_t6253D5079E28B45E9A0C1A7A8CFBF74267364C2B;
// easyar.ImageTargetController/TargetDataFileSourceData
struct TargetDataFileSourceData_t8A1E6462041EA1563F8FAD0E8DD979416E605C4B;
// easyar.ImageTrackerFrameFilter/ResultParameters
struct ResultParameters_tAA33B14E1901CE2D4D7576E7DAC587AD6CDBD6D8;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// easyar.RefBase/Retainer
struct Retainer_t21E37A78A5C591A4A1DB7494A454CCADF411A77A;
// FrameRecording.Sample/<>c
struct U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD;
// FrameRecording.Sample/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t76CF37B0A566B7AC8BE67F94C41D257FE158BBB5;
// FrameRecording.Sample/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68;

IL2CPP_EXTERN_C RuntimeClass* ARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_t76CF37B0A566B7AC8BE67F94C41D257FE158BBB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01A22A5AAF54BA4696FD93CE92C22388DCBFF53A;
IL2CPP_EXTERN_C String_t* _stringLiteral0E8CD1E34507F5A3FFA3D074EE3DF7B1F702458B;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral255FBDA0A6F231C9011577CD61755542A4D386E9;
IL2CPP_EXTERN_C String_t* _stringLiteral2857526C6CA87F5E42495CA8FC55534F69207042;
IL2CPP_EXTERN_C String_t* _stringLiteral28AA58190C016E7CC687B27FE96CB9227A200C40;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3DF22942163DC77B0DAEE048614E29D96E4493DC;
IL2CPP_EXTERN_C String_t* _stringLiteral42B857DCA1FE24EA99D77A53859F0916B3433DFA;
IL2CPP_EXTERN_C String_t* _stringLiteral4603ED8187636812C5CBAE1790D18454F9212A08;
IL2CPP_EXTERN_C String_t* _stringLiteral4A25544E6922FB90F714C62E18485457D83197D5;
IL2CPP_EXTERN_C String_t* _stringLiteral58B4B6B5AB41667F374F84DEC54D10B8267FFF0E;
IL2CPP_EXTERN_C String_t* _stringLiteral5E3F345A25DD79391E7D2F5A1FB17A6998C39DDC;
IL2CPP_EXTERN_C String_t* _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
IL2CPP_EXTERN_C String_t* _stringLiteral7E892D89E76900AA0C9D21D4E503234EAADD3377;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteralADD3B5F2D67647A225CB10788BB728D4EA24E40B;
IL2CPP_EXTERN_C String_t* _stringLiteralAEB85D990701A225F98E51C045C556F4A16E8801;
IL2CPP_EXTERN_C String_t* _stringLiteralB0410D7021B5FCF2EF5873BC8F8101B9AE4FEB04;
IL2CPP_EXTERN_C String_t* _stringLiteralB133AE3D69F650BE3AFF0EA6115F0219972CC618;
IL2CPP_EXTERN_C String_t* _stringLiteralB387B4CA2FBB682A7B5403AC7170A349FC9FB2D6;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB538CA43524DB0615DBD5761697FBEA96E081131;
IL2CPP_EXTERN_C String_t* _stringLiteralB749051682058811FCDAB00E94922EF307FF559C;
IL2CPP_EXTERN_C String_t* _stringLiteralB7AC609EB421E90A3C71B212DE15CE2DDA7C5902;
IL2CPP_EXTERN_C String_t* _stringLiteralD24A2DD4172312DEB8BCF7DF12C930FFBDE478AC;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC086A27C6B5F827F1AE9865D5CB9C8E09ADA98C;
IL2CPP_EXTERN_C String_t* _stringLiteralE25D50F078B99F92E24BE93168F2B42D0F4D08C7;
IL2CPP_EXTERN_C String_t* _stringLiteralE5A5F12B9B9D3B0A42C98A9B78489A05CB4D33ED;
IL2CPP_EXTERN_C String_t* _stringLiteralF716B0D4627FA118D23A0EBFC6830217C9CC2C23;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439_mCA2AC75ABA505B94E167A0597654C36A42A3099E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35_m338432EE1E49971621180C2FD906968F5B4AF1DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisFramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52_mD848F393380CCC32048C2D0590BB0EC619F9B441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisFrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72_m1C373BE0EF8F5B32189460CE6F51B3BA934C6BFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_m4781F96FB77A78DC6AF639165580C3F1288AEB20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_m2410493926BCA2E89628FAE3C395D02A315D2554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_ToString_m1BDCF86EB40EA7486C9CDB80F4492E170391A75E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Sample_U3CCreatePlayerU3Eb__15_0_m602BA7B633D33B30B835C4D90613C47CBFB09B4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Sample_U3CCreateRecorderU3Eb__14_0_m005BEC976BDB9A4A8A7A97266EBB6448F809088C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAddTargetControllerEventsU3Eb__19_3_mA93D4DE6D784F4424579B863D5885DA70EB7961B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CAwakeU3Eb__0_m953D4B6CDD650BCEAAE011FAB5B9EADB6FA08782_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__0_m974A2E6311E74C900888A84EB430F882CF0D8A52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__1_mA96A96C6D0AEC61E303455701BF5907A851CEE1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__2_mD9CDBF3BE81A8BABA5E5AF732397A31025681E15_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t66181F2DA828A55733885A6E26B724A5E980F129 
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

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

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

// FrameRecording.Sample/<>c
struct U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD  : public RuntimeObject
{
};

struct U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_StaticFields
{
	// FrameRecording.Sample/<>c FrameRecording.Sample/<>c::<>9
	U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD* ___U3CU3E9_0;
	// System.Action`2<easyar.Target,System.Boolean> FrameRecording.Sample/<>c::<>9__19_3
	Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* ___U3CU3E9__19_3_1;
};

// FrameRecording.Sample/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t76CF37B0A566B7AC8BE67F94C41D257FE158BBB5  : public RuntimeObject
{
	// System.String FrameRecording.Sample/<>c__DisplayClass11_0::launcher
	String_t* ___launcher_0;
};

// FrameRecording.Sample/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68  : public RuntimeObject
{
	// easyar.ImageTargetController FrameRecording.Sample/<>c__DisplayClass19_0::controller
	ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* ___controller_0;
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

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
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

// easyar.Optional`1<easyar.InputFrameSourceType>
struct Optional_1_t666854642354D0FC1411D0997FF3ACCCCA99AE33 
{
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 ___None_1;
	// T easyar.Optional`1::Some
	int32_t ___Some_2;
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

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
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

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
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

// easyar.Target
struct Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836  : public RefBase_tD2A748D10CECAAD8DD367977128D0B22A01F604E
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

// System.Action`1<easyar.ARSession/SessionState>
struct Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4  : public MulticastDelegate_t
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

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// easyar.ImageTarget
struct ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB  : public Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836
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

// easyar.ARComponentPicker
struct ARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// easyar.ARComponentPicker/SingleSelection easyar.ARComponentPicker::FrameSource
	int32_t ___FrameSource_4;
	// easyar.ARComponentPicker/MultipleSelection easyar.ARComponentPicker::FrameFilter
	int32_t ___FrameFilter_5;
	// easyar.ARComponentPicker/SingleSelection easyar.ARComponentPicker::FramePlayer
	int32_t ___FramePlayer_6;
	// easyar.ARComponentPicker/SingleSelection easyar.ARComponentPicker::FrameRecorder
	int32_t ___FrameRecorder_7;
	// easyar.ARAssembly/Components easyar.ARComponentPicker::SpecifiedComponents
	Components_t5B141D9673D9F02BF74C9BB27F34C8A80854FC75* ___SpecifiedComponents_8;
	// System.Boolean easyar.ARComponentPicker::EnableCustomCamera
	bool ___EnableCustomCamera_9;
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

// easyar.FrameRecorder
struct FrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// easyar.WritablePathType easyar.FrameRecorder::FilePathType
	int32_t ___FilePathType_4;
	// System.String easyar.FrameRecorder::FilePath
	String_t* ___FilePath_5;
	// easyar.InputFrameRecorder easyar.FrameRecorder::recorder
	InputFrameRecorder_t98F7E309F18AED110FE589A79C8962190C771D69* ___recorder_6;
	// System.Boolean easyar.FrameRecorder::isStarted
	bool ___isStarted_7;
	// easyar.ARSession easyar.FrameRecorder::arSession
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* ___arSession_8;
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

// FrameRecording.Sample
struct Sample_t2818228DACAA002719507BE535C3579473CA8092  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject FrameRecording.Sample::EasyARSession
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EasyARSession_4;
	// UnityEngine.UI.Text FrameRecording.Sample::Status
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Status_5;
	// UnityEngine.UI.Button FrameRecording.Sample::BackButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___BackButton_6;
	// easyar.ImageTargetController FrameRecording.Sample::controllerNamecard
	ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* ___controllerNamecard_7;
	// easyar.ImageTargetController FrameRecording.Sample::controllerIdback
	ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* ___controllerIdback_8;
	// UnityEngine.GameObject FrameRecording.Sample::easyarObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___easyarObject_9;
	// easyar.FramePlayer FrameRecording.Sample::player
	FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* ___player_10;
	// easyar.FrameRecorder FrameRecording.Sample::recorder
	FrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72* ___recorder_11;
	// System.String FrameRecording.Sample::filePath
	String_t* ___filePath_12;
	// System.String FrameRecording.Sample::deviceModel
	String_t* ___deviceModel_13;
	// easyar.ARSession FrameRecording.Sample::session
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* ___session_14;
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

// easyar.FramePlayer
struct FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52  : public FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD
{
	// easyar.WritablePathType easyar.FramePlayer::FilePathType
	int32_t ___FilePathType_11;
	// System.String easyar.FramePlayer::FilePath
	String_t* ___FilePath_12;
	// easyar.FramePlayer/FrameMetaSource easyar.FramePlayer::MetaSource
	FrameMetaSource_t97D09D5E6ABFE2BE6746E3EEDAD4D016C1158E7B* ___MetaSource_13;
	// easyar.InputFramePlayer easyar.FramePlayer::player
	InputFramePlayer_tCC5B7A2D27D90F578482554C4D6AD60B3936B8C9* ___player_15;
	// System.Boolean easyar.FramePlayer::isStarted
	bool ___isStarted_16;
	// System.Boolean easyar.FramePlayer::isPaused
	bool ___isPaused_17;
	// easyar.DisplayEmulator easyar.FramePlayer::display
	DisplayEmulator_t2E0A8EDC08F0914C1AB7368D35286516CCA00DE5* ___display_18;
	// System.Boolean easyar.FramePlayer::assembled
	bool ___assembled_19;
	// System.Boolean easyar.FramePlayer::disableAutoPlay
	bool ___disableAutoPlay_20;
	// easyar.WorldRootController easyar.FramePlayer::worldRoot
	WorldRootController_tDDE4A5BB7E650DE15875AFD6F7E8BBB2F670A1A2* ___worldRoot_21;
	// easyar.WorldRootController easyar.FramePlayer::worldRootCache
	WorldRootController_tDDE4A5BB7E650DE15875AFD6F7E8BBB2F670A1A2* ___worldRootCache_22;
	// UnityEngine.GameObject easyar.FramePlayer::worldRootObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___worldRootObject_23;
	// System.Boolean easyar.FramePlayer::hasSpatialInfo
	bool ___hasSpatialInfo_24;
	// System.Boolean easyar.FramePlayer::isMetaSourceRequired
	bool ___isMetaSourceRequired_25;
	// easyar.Optional`1<easyar.InputFrameSourceType> easyar.FramePlayer::type
	Optional_1_t666854642354D0FC1411D0997FF3ACCCCA99AE33 ___type_26;
	// System.Action`1<easyar.InputFrameSourceType> easyar.FramePlayer::TypeChange
	Action_1_t3DCAB4FE67BE1E2F926A5D4B4B806B49296FC877* ___TypeChange_27;
};

struct FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52_StaticFields
{
	// System.Collections.Generic.IReadOnlyList`1<easyar.ARSession/ARCenterMode> easyar.FramePlayer::availableCenterMode
	RuntimeObject* ___availableCenterMode_14;
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// System.String easyar.Optional`1<System.Int32Enum>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Optional_1_ToString_mB6D22113DF291BAD9A8064D2070EB6F9305D6FFA_gshared (Optional_1_t626F228AEB26A37FE7C4FE47FB91EE5C9F809B30* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m460C72FDDE5FF8033C7BD19A07CF4E3F473F7414_gshared (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// System.Void FrameRecording.Sample/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m2D639112AC165691DD872FF259E1BD33228F21BE (U3CU3Ec__DisplayClass11_0_t76CF37B0A566B7AC8BE67F94C41D257FE158BBB5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702 (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2 (String_t* ___path0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<easyar.ImageTargetController>()
inline ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* GameObject_GetComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_m2410493926BCA2E89628FAE3C395D02A315D2554 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void FrameRecording.Sample::AddTargetControllerEvents(easyar.ImageTargetController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_AddTargetControllerEvents_m7638FC4D3413A6989157015401C655F6C27C2485 (Sample_t2818228DACAA002719507BE535C3579473CA8092* __this, ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* ___controller0, const RuntimeMethod* method) ;
// System.Void FrameRecording.Sample::CreateRecorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_CreateRecorder_mFE15664668692ABD1CCC1D25865624B731EBE549 (Sample_t2818228DACAA002719507BE535C3579473CA8092* __this, const RuntimeMethod* method) ;
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
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// easyar.ARAssembly easyar.ARSession::get_Assembly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* ARSession_get_Assembly_mD1EE98F79892BB336FDEB644E9E2FE68B5EF3994_inline (ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* __this, const RuntimeMethod* method) ;
// easyar.FrameSource easyar.ARAssembly::get_FrameSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD* ARAssembly_get_FrameSource_m90C2102DAB3E58792051000792948892BD1F1377_inline (ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* __this, const RuntimeMethod* method) ;
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
// System.Single easyar.FramePlayer::get_Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FramePlayer_get_Time_mC4E752ED506623380C3902DB6512BDE9A8C84346 (FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Single easyar.FramePlayer::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FramePlayer_get_Length_m0519F7B87D7E4CFD016163332DB15382A6966FC1 (FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* __this, const RuntimeMethod* method) ;
// System.Boolean easyar.FramePlayer::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FramePlayer_get_IsCompleted_m60683BBD7FB3ED7C9A287D98A169CF975308D8FD (FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void FrameRecording.Sample::DestroySession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_DestroySession_mFE4D266FAA9CD9CCDF14232F287BE865AFAA37AA (Sample_t2818228DACAA002719507BE535C3579473CA8092* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<easyar.ARComponentPicker>()
inline ARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439* GameObject_GetComponentInChildren_TisARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439_mCA2AC75ABA505B94E167A0597654C36A42A3099E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInChildren<easyar.ImageTrackerFrameFilter>()
inline ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* GameObject_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_m4781F96FB77A78DC6AF639165580C3F1288AEB20 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void easyar.ImageTargetController::set_Tracker(easyar.ImageTrackerFrameFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetController_set_Tracker_mA9CCBB114C5479A0679FEF22A74B67DB9D1AD26B (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<easyar.FrameRecorder>()
inline FrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72* GameObject_GetComponentInChildren_TisFrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72_m1C373BE0EF8F5B32189460CE6F51B3BA934C6BFF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<easyar.ARSession>()
inline ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* GameObject_GetComponentInChildren_TisARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35_m338432EE1E49971621180C2FD906968F5B4AF1DE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void System.Action`1<easyar.ARSession/SessionState>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mCA14ED46DE03E238A392A26547FC33AEA32EC333 (Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m8EDF953DA7FF0E33AE19FB51BD7DBDB7C495CFE0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void easyar.ARSession::add_StateChanged(System.Action`1<easyar.ARSession/SessionState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSession_add_StateChanged_mB48474C43E473D3D6BE692B2304C4218DE66D16E (ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* __this, Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<easyar.FramePlayer>()
inline FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* GameObject_GetComponentInChildren_TisFramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52_mD848F393380CCC32048C2D0590BB0EC619F9B441 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Boolean easyar.FramePlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FramePlayer_Play_m797ACA61DD16B138C21349FD5FC17BFC9885AC98 (FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* __this, const RuntimeMethod* method) ;
// System.Void easyar.FramePlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FramePlayer_Stop_mC62077E600768AEB0EBB2C178594820CBCA1A304 (FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void FrameRecording.Sample/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mF19707D7476F8E568081595E392A81F42573CB01 (U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68* __this, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
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
// System.Void FrameRecording.Sample/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA0F6954CA3FDFFB1D0F434E62B4F96FF42302484 (U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD* __this, const RuntimeMethod* method) ;
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
// System.Void FrameRecording.Sample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_Awake_mCDD0164F8D3DBA4C8B2B1208288FAF7ECFC5C949 (Sample_t2818228DACAA002719507BE535C3579473CA8092* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_m2410493926BCA2E89628FAE3C395D02A315D2554_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CAwakeU3Eb__0_m953D4B6CDD650BCEAAE011FAB5B9EADB6FA08782_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_t76CF37B0A566B7AC8BE67F94C41D257FE158BBB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01A22A5AAF54BA4696FD93CE92C22388DCBFF53A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral255FBDA0A6F231C9011577CD61755542A4D386E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2857526C6CA87F5E42495CA8FC55534F69207042);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DF22942163DC77B0DAEE048614E29D96E4493DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42B857DCA1FE24EA99D77A53859F0916B3433DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A25544E6922FB90F714C62E18485457D83197D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB387B4CA2FBB682A7B5403AC7170A349FC9FB2D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB538CA43524DB0615DBD5761697FBEA96E081131);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD24A2DD4172312DEB8BCF7DF12C930FFBDE478AC);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_t76CF37B0A566B7AC8BE67F94C41D257FE158BBB5* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_4 = NULL;
	bool V_5 = false;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_6 = NULL;
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		U3CU3Ec__DisplayClass11_0_t76CF37B0A566B7AC8BE67F94C41D257FE158BBB5* L_0 = (U3CU3Ec__DisplayClass11_0_t76CF37B0A566B7AC8BE67F94C41D257FE158BBB5*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_t76CF37B0A566B7AC8BE67F94C41D257FE158BBB5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass11_0__ctor_m2D639112AC165691DD872FF259E1BD33228F21BE(L_0, NULL);
		V_0 = L_0;
		// var folder = Application.persistentDataPath + "/FrameRecording/";
		String_t* L_1;
		L_1 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, _stringLiteral01A22A5AAF54BA4696FD93CE92C22388DCBFF53A, NULL);
		V_1 = L_2;
		// if (!Directory.Exists(folder))
		String_t* L_3 = V_1;
		bool L_4;
		L_4 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_3, NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// Directory.CreateDirectory(folder);
		String_t* L_6 = V_1;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_7;
		L_7 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_6, NULL);
	}

IL_002d:
	{
		// filePath = folder + "recording.eif";
		String_t* L_8 = V_1;
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_8, _stringLiteralD24A2DD4172312DEB8BCF7DF12C930FFBDE478AC, NULL);
		__this->___filePath_12 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___filePath_12), (void*)L_9);
		// controllerNamecard = GameObject.Find("ImageTarget-namecard").GetComponent<ImageTargetController>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralB538CA43524DB0615DBD5761697FBEA96E081131, NULL);
		NullCheck(L_10);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_11;
		L_11 = GameObject_GetComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_m2410493926BCA2E89628FAE3C395D02A315D2554(L_10, GameObject_GetComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_m2410493926BCA2E89628FAE3C395D02A315D2554_RuntimeMethod_var);
		__this->___controllerNamecard_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controllerNamecard_7), (void*)L_11);
		// controllerIdback = GameObject.Find("ImageTarget-idback").GetComponent<ImageTargetController>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral42B857DCA1FE24EA99D77A53859F0916B3433DFA, NULL);
		NullCheck(L_12);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_13;
		L_13 = GameObject_GetComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_m2410493926BCA2E89628FAE3C395D02A315D2554(L_12, GameObject_GetComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_m2410493926BCA2E89628FAE3C395D02A315D2554_RuntimeMethod_var);
		__this->___controllerIdback_8 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controllerIdback_8), (void*)L_13);
		// AddTargetControllerEvents(controllerNamecard);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_14 = __this->___controllerNamecard_7;
		Sample_AddTargetControllerEvents_m7638FC4D3413A6989157015401C655F6C27C2485(__this, L_14, NULL);
		// AddTargetControllerEvents(controllerIdback);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_15 = __this->___controllerIdback_8;
		Sample_AddTargetControllerEvents_m7638FC4D3413A6989157015401C655F6C27C2485(__this, L_15, NULL);
		// CreateRecorder();
		Sample_CreateRecorder_mFE15664668692ABD1CCC1D25865624B731EBE549(__this, NULL);
		// var launcher = "AllSamplesLauncher";
		U3CU3Ec__DisplayClass11_0_t76CF37B0A566B7AC8BE67F94C41D257FE158BBB5* L_16 = V_0;
		NullCheck(L_16);
		L_16->___launcher_0 = _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___launcher_0), (void*)_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		// if (Application.CanStreamedLevelBeLoaded(launcher))
		U3CU3Ec__DisplayClass11_0_t76CF37B0A566B7AC8BE67F94C41D257FE158BBB5* L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = L_17->___launcher_0;
		bool L_19;
		L_19 = Application_CanStreamedLevelBeLoaded_mA1BAA60593E8679BAFA6A16595166774AE172ADC(L_18, NULL);
		V_3 = L_19;
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_00cd;
		}
	}
	{
		// var button = BackButton.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21 = __this->___BackButton_6;
		NullCheck(L_21);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_22;
		L_22 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_21, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		V_4 = L_22;
		// button.onClick.AddListener(() => { UnityEngine.SceneManagement.SceneManager.LoadScene(launcher); });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23 = V_4;
		NullCheck(L_23);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_24;
		L_24 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_23, NULL);
		U3CU3Ec__DisplayClass11_0_t76CF37B0A566B7AC8BE67F94C41D257FE158BBB5* L_25 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_26 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass11_0_U3CAwakeU3Eb__0_m953D4B6CDD650BCEAAE011FAB5B9EADB6FA08782_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_24, L_26, NULL);
		goto IL_00e1;
	}

IL_00cd:
	{
		// BackButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_27 = __this->___BackButton_6;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
	}

IL_00e1:
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_29;
		L_29 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_5 = (bool)((((int32_t)L_29) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_016d;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		{
			// using (var buildClass = new AndroidJavaClass("android.os.Build"))
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_31 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
			NullCheck(L_31);
			AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_31, _stringLiteral4A25544E6922FB90F714C62E18485457D83197D5, NULL);
			V_6 = L_31;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0149_1:
				{// begin finally (depth: 2)
					{
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_32 = V_6;
						if (!L_32)
						{
							goto IL_0155_1;
						}
					}
					{
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_33 = V_6;
						NullCheck(L_33);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_33);
					}

IL_0155_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// deviceModel = $"(Device = {buildClass.GetStatic<string>("DEVICE")}, Model = {buildClass.GetStatic<string>("MODEL")})";
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
				NullCheck(L_35);
				ArrayElementTypeCheck (L_35, _stringLiteralB387B4CA2FBB682A7B5403AC7170A349FC9FB2D6);
				(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB387B4CA2FBB682A7B5403AC7170A349FC9FB2D6);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_37 = V_6;
				NullCheck(L_37);
				String_t* L_38;
				L_38 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_37, _stringLiteral3DF22942163DC77B0DAEE048614E29D96E4493DC, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
				NullCheck(L_36);
				ArrayElementTypeCheck (L_36, L_38);
				(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_38);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_36;
				NullCheck(L_39);
				ArrayElementTypeCheck (L_39, _stringLiteral255FBDA0A6F231C9011577CD61755542A4D386E9);
				(L_39)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral255FBDA0A6F231C9011577CD61755542A4D386E9);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_41 = V_6;
				NullCheck(L_41);
				String_t* L_42;
				L_42 = AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE(L_41, _stringLiteral2857526C6CA87F5E42495CA8FC55534F69207042, AndroidJavaObject_GetStatic_TisString_t_mF408A1C0C6E5BF8154F00A450A97A51B2ABFCBDE_RuntimeMethod_var);
				NullCheck(L_40);
				ArrayElementTypeCheck (L_40, L_42);
				(L_40)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_42);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_40;
				NullCheck(L_43);
				ArrayElementTypeCheck (L_43, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
				(L_43)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
				String_t* L_44;
				L_44 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_43, NULL);
				__this->___deviceModel_13 = L_44;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceModel_13), (void*)L_44);
				goto IL_0156_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0156_1:
		{
			goto IL_016c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0159;
		}
		throw e;
	}

CATCH_0159:
	{// begin catch(System.Exception)
		// catch (Exception e) { deviceModel = e.Message; }
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// catch (Exception e) { deviceModel = e.Message; }
		Exception_t* L_45 = V_7;
		NullCheck(L_45);
		String_t* L_46;
		L_46 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_45);
		__this->___deviceModel_13 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceModel_13), (void*)L_46);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_016c;
	}// end catch (depth: 1)

IL_016c:
	{
	}

IL_016d:
	{
		// }
		return;
	}
}
// System.Void FrameRecording.Sample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_Update_m744096501284C241BF48A2B08FE93479BEBA0E8D (Sample_t2818228DACAA002719507BE535C3579473CA8092* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_ToString_m1BDCF86EB40EA7486C9CDB80F4492E170391A75E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E8CD1E34507F5A3FFA3D074EE3DF7B1F702458B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28AA58190C016E7CC687B27FE96CB9227A200C40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4603ED8187636812C5CBAE1790D18454F9212A08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B4B6B5AB41667F374F84DEC54D10B8267FFF0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADD3B5F2D67647A225CB10788BB728D4EA24E40B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEB85D990701A225F98E51C045C556F4A16E8801);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB133AE3D69F650BE3AFF0EA6115F0219972CC618);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB749051682058811FCDAB00E94922EF307FF559C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7AC609EB421E90A3C71B212DE15CE2DDA7C5902);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC086A27C6B5F827F1AE9865D5CB9C8E09ADA98C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE25D50F078B99F92E24BE93168F2B42D0F4D08C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5A5F12B9B9D3B0A42C98A9B78489A05CB4D33ED);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_1 = NULL;
	Optional_1_tAC7AFE052BECEC66709ECEB4359F18E2AAF181A4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_3 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_3 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_4 = NULL;
	int32_t G_B9_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B9_3 = NULL;
	int32_t G_B8_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B8_3 = NULL;
	String_t* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B10_4 = NULL;
	{
		// Status.text = $"Device Model: {SystemInfo.deviceModel} {deviceModel}" + Environment.NewLine;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___Status_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
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
		String_t* L_7 = __this->___deviceModel_13;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		String_t* L_9;
		L_9 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		String_t* L_10;
		L_10 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_8, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_10);
		// if (session)
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_11 = __this->___session_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_11, NULL);
		V_0 = L_12;
		bool L_13 = V_0;
		if (!L_13)
		{
			goto IL_014d;
		}
	}
	{
		// Status.text +=
		//     "Frame Source: " + ((session.Assembly != null && session.Assembly.FrameSource) ? session.Assembly.FrameSource.GetType().ToString().Replace("easyar.", "").Replace("FrameSource", "") : "-") + Environment.NewLine +
		//     "Tracking Status: " + session.TrackingStatus + Environment.NewLine +
		//     "CenterMode: " + session.CenterMode + Environment.NewLine + Environment.NewLine;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___Status_5;
		V_1 = L_14;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_17;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralE25D50F078B99F92E24BE93168F2B42D0F4D08C7);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE25D50F078B99F92E24BE93168F2B42D0F4D08C7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_22 = __this->___session_14;
		NullCheck(L_22);
		ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* L_23;
		L_23 = ARSession_get_Assembly_mD1EE98F79892BB336FDEB644E9E2FE68B5EF3994_inline(L_22, NULL);
		G_B2_0 = 2;
		G_B2_1 = L_21;
		G_B2_2 = L_21;
		G_B2_3 = L_15;
		if (!L_23)
		{
			G_B3_0 = 2;
			G_B3_1 = L_21;
			G_B3_2 = L_21;
			G_B3_3 = L_15;
			goto IL_009a;
		}
	}
	{
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_24 = __this->___session_14;
		NullCheck(L_24);
		ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* L_25;
		L_25 = ARSession_get_Assembly_mD1EE98F79892BB336FDEB644E9E2FE68B5EF3994_inline(L_24, NULL);
		NullCheck(L_25);
		FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD* L_26;
		L_26 = ARAssembly_get_FrameSource_m90C2102DAB3E58792051000792948892BD1F1377_inline(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_26, NULL);
		G_B3_0 = G_B2_0;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		if (L_27)
		{
			G_B4_0 = G_B2_0;
			G_B4_1 = G_B2_1;
			G_B4_2 = G_B2_2;
			G_B4_3 = G_B2_3;
			goto IL_00a1;
		}
	}

IL_009a:
	{
		G_B5_0 = _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		G_B5_4 = G_B3_3;
		goto IL_00d9;
	}

IL_00a1:
	{
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_28 = __this->___session_14;
		NullCheck(L_28);
		ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* L_29;
		L_29 = ARSession_get_Assembly_mD1EE98F79892BB336FDEB644E9E2FE68B5EF3994_inline(L_28, NULL);
		NullCheck(L_29);
		FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD* L_30;
		L_30 = ARAssembly_get_FrameSource_m90C2102DAB3E58792051000792948892BD1F1377_inline(L_29, NULL);
		NullCheck(L_30);
		Type_t* L_31;
		L_31 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_30, NULL);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
		NullCheck(L_32);
		String_t* L_33;
		L_33 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_32, _stringLiteralB7AC609EB421E90A3C71B212DE15CE2DDA7C5902, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_33, _stringLiteralADD3B5F2D67647A225CB10788BB728D4EA24E40B, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B5_0 = L_34;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
		G_B5_4 = G_B4_3;
	}

IL_00d9:
	{
		NullCheck(G_B5_2);
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = G_B5_3;
		String_t* L_36;
		L_36 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_36);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_35;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteralAEB85D990701A225F98E51C045C556F4A16E8801);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralAEB85D990701A225F98E51C045C556F4A16E8801);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_39 = __this->___session_14;
		NullCheck(L_39);
		Optional_1_tAC7AFE052BECEC66709ECEB4359F18E2AAF181A4 L_40;
		L_40 = ARSession_get_TrackingStatus_m52BB5973FA0C5433DB5DE85A2CC9EACEB394B0E7(L_39, NULL);
		V_2 = L_40;
		String_t* L_41;
		L_41 = Optional_1_ToString_m1BDCF86EB40EA7486C9CDB80F4492E170391A75E((&V_2), Optional_1_ToString_m1BDCF86EB40EA7486C9CDB80F4492E170391A75E_RuntimeMethod_var);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_41);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_38;
		String_t* L_43;
		L_43 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_43);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_42;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteral0E8CD1E34507F5A3FFA3D074EE3DF7B1F702458B);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral0E8CD1E34507F5A3FFA3D074EE3DF7B1F702458B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_44;
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_46 = __this->___session_14;
		NullCheck(L_46);
		int32_t* L_47 = (&L_46->___CenterMode_4);
		Il2CppFakeBox<int32_t> L_48(ARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_il2cpp_TypeInfo_var, L_47);
		String_t* L_49;
		L_49 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_48), NULL);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_49);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_45;
		String_t* L_51;
		L_51 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_51);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_50;
		String_t* L_53;
		L_53 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_53);
		String_t* L_54;
		L_54 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_52, NULL);
		NullCheck(G_B5_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B5_4, L_54);
	}

IL_014d:
	{
		// if (player)
		FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* L_55 = __this->___player_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_55, NULL);
		V_3 = L_56;
		bool L_57 = V_3;
		if (!L_57)
		{
			goto IL_021e;
		}
	}
	{
		// Status.text += "Playback Mode";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_58 = __this->___Status_5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_59 = L_58;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_59);
		String_t* L_61;
		L_61 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_60, _stringLiteralB749051682058811FCDAB00E94922EF307FF559C, NULL);
		NullCheck(L_59);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_59, L_61);
		// Status.text += Environment.NewLine +
		//     "Playback from: " + filePath + Environment.NewLine +
		//     "Playback: " + player.Time + " / " + player.Length + (player.IsCompleted ? " -- completed" : "");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_62 = __this->___Status_5;
		V_1 = L_62;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_63 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_64;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_66 = V_1;
		NullCheck(L_66);
		String_t* L_67;
		L_67 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_66);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_67);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_67);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = L_65;
		String_t* L_69;
		L_69 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_69);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_70 = L_68;
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, _stringLiteralE5A5F12B9B9D3B0A42C98A9B78489A05CB4D33ED);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE5A5F12B9B9D3B0A42C98A9B78489A05CB4D33ED);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_70;
		String_t* L_72 = __this->___filePath_12;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_72);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_72);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = L_71;
		String_t* L_74;
		L_74 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_74);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_74);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = L_73;
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, _stringLiteralB133AE3D69F650BE3AFF0EA6115F0219972CC618);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB133AE3D69F650BE3AFF0EA6115F0219972CC618);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_76 = L_75;
		FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* L_77 = __this->___player_10;
		NullCheck(L_77);
		float L_78;
		L_78 = FramePlayer_get_Time_mC4E752ED506623380C3902DB6512BDE9A8C84346(L_77, NULL);
		V_4 = L_78;
		String_t* L_79;
		L_79 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_4), NULL);
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, L_79);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_79);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = L_76;
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_81 = L_80;
		FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* L_82 = __this->___player_10;
		NullCheck(L_82);
		float L_83;
		L_83 = FramePlayer_get_Length_m0519F7B87D7E4CFD016163332DB15382A6966FC1(L_82, NULL);
		V_4 = L_83;
		String_t* L_84;
		L_84 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_4), NULL);
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, L_84);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_84);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_85 = L_81;
		FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* L_86 = __this->___player_10;
		NullCheck(L_86);
		bool L_87;
		L_87 = FramePlayer_get_IsCompleted_m60683BBD7FB3ED7C9A287D98A169CF975308D8FD(L_86, NULL);
		G_B8_0 = ((int32_t)9);
		G_B8_1 = L_85;
		G_B8_2 = L_85;
		G_B8_3 = L_63;
		if (L_87)
		{
			G_B9_0 = ((int32_t)9);
			G_B9_1 = L_85;
			G_B9_2 = L_85;
			G_B9_3 = L_63;
			goto IL_020a;
		}
	}
	{
		G_B10_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		G_B10_4 = G_B8_3;
		goto IL_020f;
	}

IL_020a:
	{
		G_B10_0 = _stringLiteral28AA58190C016E7CC687B27FE96CB9227A200C40;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
		G_B10_4 = G_B9_3;
	}

IL_020f:
	{
		NullCheck(G_B10_2);
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		(G_B10_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_1), (String_t*)G_B10_0);
		String_t* L_88;
		L_88 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(G_B10_3, NULL);
		NullCheck(G_B10_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B10_4, L_88);
		goto IL_0276;
	}

IL_021e:
	{
		// Status.text += "Recoding Mode";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_89 = __this->___Status_5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_90 = L_89;
		NullCheck(L_90);
		String_t* L_91;
		L_91 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_90);
		String_t* L_92;
		L_92 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_91, _stringLiteralDC086A27C6B5F827F1AE9865D5CB9C8E09ADA98C, NULL);
		NullCheck(L_90);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_90, L_92);
		// if (recorder.enabled)
		FrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72* L_93 = __this->___recorder_11;
		NullCheck(L_93);
		bool L_94;
		L_94 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_93, NULL);
		V_5 = L_94;
		bool L_95 = V_5;
		if (!L_95)
		{
			goto IL_0275;
		}
	}
	{
		// Status.text += Environment.NewLine +
		//     "Recoding to: " + filePath;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_96 = __this->___Status_5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_97 = L_96;
		NullCheck(L_97);
		String_t* L_98;
		L_98 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_97);
		String_t* L_99;
		L_99 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		String_t* L_100 = __this->___filePath_12;
		String_t* L_101;
		L_101 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_98, L_99, _stringLiteral4603ED8187636812C5CBAE1790D18454F9212A08, L_100, NULL);
		NullCheck(L_97);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_97, L_101);
	}

IL_0275:
	{
	}

IL_0276:
	{
		// }
		return;
	}
}
// System.Void FrameRecording.Sample::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_OnDestroy_m45AB7842AA974E4731860736D38980C2F7E647C2 (Sample_t2818228DACAA002719507BE535C3579473CA8092* __this, const RuntimeMethod* method) 
{
	{
		// DestroySession();
		Sample_DestroySession_mFE4D266FAA9CD9CCDF14232F287BE865AFAA37AA(__this, NULL);
		// }
		return;
	}
}
// System.Void FrameRecording.Sample::CreateRecorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_CreateRecorder_mFE15664668692ABD1CCC1D25865624B731EBE549 (Sample_t2818228DACAA002719507BE535C3579473CA8092* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439_mCA2AC75ABA505B94E167A0597654C36A42A3099E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35_m338432EE1E49971621180C2FD906968F5B4AF1DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisFrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72_m1C373BE0EF8F5B32189460CE6F51B3BA934C6BFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_m4781F96FB77A78DC6AF639165580C3F1288AEB20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sample_U3CCreateRecorderU3Eb__14_0_m005BEC976BDB9A4A8A7A97266EBB6448F809088C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439* V_0 = NULL;
	ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* V_1 = NULL;
	{
		// DestroySession();
		Sample_DestroySession_mFE4D266FAA9CD9CCDF14232F287BE865AFAA37AA(__this, NULL);
		// easyarObject = Instantiate(EasyARSession);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___EasyARSession_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		__this->___easyarObject_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___easyarObject_9), (void*)L_1);
		// var picker = easyarObject.GetComponentInChildren<ARComponentPicker>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___easyarObject_9;
		NullCheck(L_2);
		ARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439* L_3;
		L_3 = GameObject_GetComponentInChildren_TisARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439_mCA2AC75ABA505B94E167A0597654C36A42A3099E(L_2, GameObject_GetComponentInChildren_TisARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439_mCA2AC75ABA505B94E167A0597654C36A42A3099E_RuntimeMethod_var);
		V_0 = L_3;
		// picker.FramePlayer = ARComponentPicker.SingleSelection.Disable;
		ARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439* L_4 = V_0;
		NullCheck(L_4);
		L_4->___FramePlayer_6 = 2;
		// picker.FrameRecorder = ARComponentPicker.SingleSelection.FirstAvailableActiveChild;
		ARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439* L_5 = V_0;
		NullCheck(L_5);
		L_5->___FrameRecorder_7 = 0;
		// easyarObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___easyarObject_9;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// var imageTracker = easyarObject.GetComponentInChildren<ImageTrackerFrameFilter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___easyarObject_9;
		NullCheck(L_7);
		ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* L_8;
		L_8 = GameObject_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_m4781F96FB77A78DC6AF639165580C3F1288AEB20(L_7, GameObject_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_m4781F96FB77A78DC6AF639165580C3F1288AEB20_RuntimeMethod_var);
		V_1 = L_8;
		// controllerNamecard.Tracker = null;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_9 = __this->___controllerNamecard_7;
		NullCheck(L_9);
		ImageTargetController_set_Tracker_mA9CCBB114C5479A0679FEF22A74B67DB9D1AD26B(L_9, (ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E*)NULL, NULL);
		// controllerIdback.Tracker = null;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_10 = __this->___controllerIdback_8;
		NullCheck(L_10);
		ImageTargetController_set_Tracker_mA9CCBB114C5479A0679FEF22A74B67DB9D1AD26B(L_10, (ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E*)NULL, NULL);
		// controllerNamecard.Tracker = imageTracker;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_11 = __this->___controllerNamecard_7;
		ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* L_12 = V_1;
		NullCheck(L_11);
		ImageTargetController_set_Tracker_mA9CCBB114C5479A0679FEF22A74B67DB9D1AD26B(L_11, L_12, NULL);
		// controllerIdback.Tracker = imageTracker;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_13 = __this->___controllerIdback_8;
		ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* L_14 = V_1;
		NullCheck(L_13);
		ImageTargetController_set_Tracker_mA9CCBB114C5479A0679FEF22A74B67DB9D1AD26B(L_13, L_14, NULL);
		// player = null;
		__this->___player_10 = (FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_10), (void*)(FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52*)NULL);
		// recorder = easyarObject.GetComponentInChildren<FrameRecorder>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___easyarObject_9;
		NullCheck(L_15);
		FrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72* L_16;
		L_16 = GameObject_GetComponentInChildren_TisFrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72_m1C373BE0EF8F5B32189460CE6F51B3BA934C6BFF(L_15, GameObject_GetComponentInChildren_TisFrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72_m1C373BE0EF8F5B32189460CE6F51B3BA934C6BFF_RuntimeMethod_var);
		__this->___recorder_11 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recorder_11), (void*)L_16);
		// recorder.FilePathType = WritablePathType.Absolute;
		FrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72* L_17 = __this->___recorder_11;
		NullCheck(L_17);
		L_17->___FilePathType_4 = 0;
		// recorder.FilePath = filePath;
		FrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72* L_18 = __this->___recorder_11;
		String_t* L_19 = __this->___filePath_12;
		NullCheck(L_18);
		L_18->___FilePath_5 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___FilePath_5), (void*)L_19);
		// recorder.enabled = false;
		FrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72* L_20 = __this->___recorder_11;
		NullCheck(L_20);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_20, (bool)0, NULL);
		// session = easyarObject.GetComponentInChildren<ARSession>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___easyarObject_9;
		NullCheck(L_21);
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_22;
		L_22 = GameObject_GetComponentInChildren_TisARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35_m338432EE1E49971621180C2FD906968F5B4AF1DE(L_21, GameObject_GetComponentInChildren_TisARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35_m338432EE1E49971621180C2FD906968F5B4AF1DE_RuntimeMethod_var);
		__this->___session_14 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___session_14), (void*)L_22);
		// session.StateChanged += (state) =>
		// {
		//     if (state == ARSession.SessionState.Ready)
		//     {
		//         // at this time point, tracking results (if there are any) are not processed yet
		//         if (!(session.Assembly.FrameSource is CameraDeviceFrameSource))
		//         {
		//             controllerNamecard.ActiveControl = TargetController.ActiveControlStrategy.HideBeforeFirstFound;
		//             controllerIdback.ActiveControl = TargetController.ActiveControlStrategy.HideBeforeFirstFound;
		//         }
		//     }
		// };
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_23 = __this->___session_14;
		Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* L_24 = (Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4*)il2cpp_codegen_object_new(Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action_1__ctor_mCA14ED46DE03E238A392A26547FC33AEA32EC333(L_24, __this, (intptr_t)((void*)Sample_U3CCreateRecorderU3Eb__14_0_m005BEC976BDB9A4A8A7A97266EBB6448F809088C_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		ARSession_add_StateChanged_mB48474C43E473D3D6BE692B2304C4218DE66D16E(L_23, L_24, NULL);
		// }
		return;
	}
}
// System.Void FrameRecording.Sample::CreatePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_CreatePlayer_mB0DA990403800ABD062D791C24EBD399B9BA5A91 (Sample_t2818228DACAA002719507BE535C3579473CA8092* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439_mCA2AC75ABA505B94E167A0597654C36A42A3099E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35_m338432EE1E49971621180C2FD906968F5B4AF1DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisFramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52_mD848F393380CCC32048C2D0590BB0EC619F9B441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_m4781F96FB77A78DC6AF639165580C3F1288AEB20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sample_U3CCreatePlayerU3Eb__15_0_m602BA7B633D33B30B835C4D90613C47CBFB09B4B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439* V_0 = NULL;
	ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* V_1 = NULL;
	{
		// DestroySession();
		Sample_DestroySession_mFE4D266FAA9CD9CCDF14232F287BE865AFAA37AA(__this, NULL);
		// easyarObject = Instantiate(EasyARSession);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___EasyARSession_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		__this->___easyarObject_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___easyarObject_9), (void*)L_1);
		// var picker = easyarObject.GetComponentInChildren<ARComponentPicker>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___easyarObject_9;
		NullCheck(L_2);
		ARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439* L_3;
		L_3 = GameObject_GetComponentInChildren_TisARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439_mCA2AC75ABA505B94E167A0597654C36A42A3099E(L_2, GameObject_GetComponentInChildren_TisARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439_mCA2AC75ABA505B94E167A0597654C36A42A3099E_RuntimeMethod_var);
		V_0 = L_3;
		// picker.FramePlayer = ARComponentPicker.SingleSelection.FirstAvailableActiveChild;
		ARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439* L_4 = V_0;
		NullCheck(L_4);
		L_4->___FramePlayer_6 = 0;
		// picker.FrameRecorder = ARComponentPicker.SingleSelection.Disable;
		ARComponentPicker_tEE530E6AE883920B178C6E112E5F78F2B4630439* L_5 = V_0;
		NullCheck(L_5);
		L_5->___FrameRecorder_7 = 2;
		// easyarObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___easyarObject_9;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// var imageTracker = easyarObject.GetComponentInChildren<ImageTrackerFrameFilter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___easyarObject_9;
		NullCheck(L_7);
		ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* L_8;
		L_8 = GameObject_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_m4781F96FB77A78DC6AF639165580C3F1288AEB20(L_7, GameObject_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_m4781F96FB77A78DC6AF639165580C3F1288AEB20_RuntimeMethod_var);
		V_1 = L_8;
		// controllerNamecard.Tracker = null;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_9 = __this->___controllerNamecard_7;
		NullCheck(L_9);
		ImageTargetController_set_Tracker_mA9CCBB114C5479A0679FEF22A74B67DB9D1AD26B(L_9, (ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E*)NULL, NULL);
		// controllerIdback.Tracker = null;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_10 = __this->___controllerIdback_8;
		NullCheck(L_10);
		ImageTargetController_set_Tracker_mA9CCBB114C5479A0679FEF22A74B67DB9D1AD26B(L_10, (ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E*)NULL, NULL);
		// controllerNamecard.Tracker = imageTracker;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_11 = __this->___controllerNamecard_7;
		ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* L_12 = V_1;
		NullCheck(L_11);
		ImageTargetController_set_Tracker_mA9CCBB114C5479A0679FEF22A74B67DB9D1AD26B(L_11, L_12, NULL);
		// controllerIdback.Tracker = imageTracker;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_13 = __this->___controllerIdback_8;
		ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* L_14 = V_1;
		NullCheck(L_13);
		ImageTargetController_set_Tracker_mA9CCBB114C5479A0679FEF22A74B67DB9D1AD26B(L_13, L_14, NULL);
		// recorder = null;
		__this->___recorder_11 = (FrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recorder_11), (void*)(FrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72*)NULL);
		// player = easyarObject.GetComponentInChildren<FramePlayer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___easyarObject_9;
		NullCheck(L_15);
		FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* L_16;
		L_16 = GameObject_GetComponentInChildren_TisFramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52_mD848F393380CCC32048C2D0590BB0EC619F9B441(L_15, GameObject_GetComponentInChildren_TisFramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52_mD848F393380CCC32048C2D0590BB0EC619F9B441_RuntimeMethod_var);
		__this->___player_10 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_10), (void*)L_16);
		// player.FilePathType = WritablePathType.Absolute;
		FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* L_17 = __this->___player_10;
		NullCheck(L_17);
		L_17->___FilePathType_11 = 0;
		// player.FilePath = filePath;
		FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* L_18 = __this->___player_10;
		String_t* L_19 = __this->___filePath_12;
		NullCheck(L_18);
		L_18->___FilePath_12 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___FilePath_12), (void*)L_19);
		// session = easyarObject.GetComponentInChildren<ARSession>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___easyarObject_9;
		NullCheck(L_20);
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_21;
		L_21 = GameObject_GetComponentInChildren_TisARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35_m338432EE1E49971621180C2FD906968F5B4AF1DE(L_20, GameObject_GetComponentInChildren_TisARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35_m338432EE1E49971621180C2FD906968F5B4AF1DE_RuntimeMethod_var);
		__this->___session_14 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___session_14), (void*)L_21);
		// session.StateChanged += (state) =>
		// {
		//     if (state == ARSession.SessionState.Ready)
		//     {
		//         // at this time point, tracking results (if there are any) are not processed yet
		//         if (!(session.Assembly.FrameSource is CameraDeviceFrameSource))
		//         {
		//             controllerNamecard.ActiveControl = TargetController.ActiveControlStrategy.HideBeforeFirstFound;
		//             controllerIdback.ActiveControl = TargetController.ActiveControlStrategy.HideBeforeFirstFound;
		//         }
		//     }
		// };
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_22 = __this->___session_14;
		Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4* L_23 = (Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4*)il2cpp_codegen_object_new(Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_1__ctor_mCA14ED46DE03E238A392A26547FC33AEA32EC333(L_23, __this, (intptr_t)((void*)Sample_U3CCreatePlayerU3Eb__15_0_m602BA7B633D33B30B835C4D90613C47CBFB09B4B_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		ARSession_add_StateChanged_mB48474C43E473D3D6BE692B2304C4218DE66D16E(L_22, L_23, NULL);
		// }
		return;
	}
}
// System.Void FrameRecording.Sample::Record(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_Record_mF5AB398EB86AC4CA46E34092552791233C74A117 (Sample_t2818228DACAA002719507BE535C3579473CA8092* __this, bool ___val0, const RuntimeMethod* method) 
{
	{
		// recorder.enabled = val;
		FrameRecorder_t8CC5DCF79B95112470076E335EAB8789319CAA72* L_0 = __this->___recorder_11;
		bool L_1 = ___val0;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void FrameRecording.Sample::Playback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_Playback_m9BD2625069EF966E6593E8A313CF4E8F0F4DFEA0 (Sample_t2818228DACAA002719507BE535C3579473CA8092* __this, bool ___val0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (val)
		bool L_0 = ___val0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// player.Play();
		FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* L_2 = __this->___player_10;
		NullCheck(L_2);
		bool L_3;
		L_3 = FramePlayer_Play_m797ACA61DD16B138C21349FD5FC17BFC9885AC98(L_2, NULL);
		goto IL_0024;
	}

IL_0016:
	{
		// player.Stop();
		FramePlayer_tE4012E8B09CC18FBAA94E44963EEB726340BAE52* L_4 = __this->___player_10;
		NullCheck(L_4);
		FramePlayer_Stop_mC62077E600768AEB0EBB2C178594820CBCA1A304(L_4, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void FrameRecording.Sample::DestroySession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_DestroySession_mFE4D266FAA9CD9CCDF14232F287BE865AFAA37AA (Sample_t2818228DACAA002719507BE535C3579473CA8092* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (easyarObject) { DestroyImmediate(easyarObject); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___easyarObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// if (easyarObject) { DestroyImmediate(easyarObject); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___easyarObject_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_3, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void FrameRecording.Sample::AddTargetControllerEvents(easyar.ImageTargetController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_AddTargetControllerEvents_m7638FC4D3413A6989157015401C655F6C27C2485 (Sample_t2818228DACAA002719507BE535C3579473CA8092* __this, ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* ___controller0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAddTargetControllerEventsU3Eb__19_3_mA93D4DE6D784F4424579B863D5885DA70EB7961B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__0_m974A2E6311E74C900888A84EB430F882CF0D8A52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__1_mA96A96C6D0AEC61E303455701BF5907A851CEE1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__2_mD9CDBF3BE81A8BABA5E5AF732397A31025681E15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68* V_0 = NULL;
	bool V_1 = false;
	Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* G_B4_0 = NULL;
	ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* G_B4_1 = NULL;
	Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* G_B3_0 = NULL;
	ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* G_B3_1 = NULL;
	{
		U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68* L_0 = (U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass19_0__ctor_mF19707D7476F8E568081595E392A81F42573CB01(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68* L_1 = V_0;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_2 = ___controller0;
		NullCheck(L_1);
		L_1->___controller_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___controller_0), (void*)L_2);
		// if (!controller)
		U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68* L_3 = V_0;
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
		U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68* L_7 = V_0;
		NullCheck(L_7);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_8 = L_7->___controller_0;
		U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__0_m974A2E6311E74C900888A84EB430F882CF0D8A52_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		TargetController_add_TargetFound_mD4B9C4D3662E282B491F617E22AA14D3775AB57B(L_8, L_10, NULL);
		// controller.TargetLost += () =>
		// {
		//     Debug.LogFormat("Lost target {{id = {0}, name = {1}}}", controller.Target.runtimeID(), controller.Target.name());
		// };
		U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68* L_11 = V_0;
		NullCheck(L_11);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_12 = L_11->___controller_0;
		U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68* L_13 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__1_mA96A96C6D0AEC61E303455701BF5907A851CEE1E_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		TargetController_add_TargetLost_mB6790A7172B5C303E3143155672D27F4BF6E4ECC(L_12, L_14, NULL);
		// controller.TargetLoad += (Target target, bool status) =>
		// {
		//     Debug.LogFormat("Load target {{id = {0}, name = {1}, size = {2}}} into {3} => {4}", target.runtimeID(), target.name(), controller.Size, controller.Tracker.name, status);
		// };
		U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68* L_15 = V_0;
		NullCheck(L_15);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_16 = L_15->___controller_0;
		U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68* L_17 = V_0;
		Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* L_18 = (Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416*)il2cpp_codegen_object_new(Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Action_2__ctor_m0D18FC0D2E5634CBDC24690398EE59D4F1EB1101(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__2_mD9CDBF3BE81A8BABA5E5AF732397A31025681E15_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		ImageTargetController_add_TargetLoad_m91633BAF45092ADF09E6F663EF292B891ACC505C(L_16, L_18, NULL);
		// controller.TargetUnload += (Target target, bool status) =>
		// {
		//     Debug.LogFormat("Unload target {{id = {0}, name = {1}}} => {2}", target.runtimeID(), target.name(), status);
		// };
		U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68* L_19 = V_0;
		NullCheck(L_19);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_20 = L_19->___controller_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_il2cpp_TypeInfo_var);
		Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* L_21 = ((U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_il2cpp_TypeInfo_var))->___U3CU3E9__19_3_1;
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
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_il2cpp_TypeInfo_var);
		U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD* L_23 = ((U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* L_24 = (Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416*)il2cpp_codegen_object_new(Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action_2__ctor_m0D18FC0D2E5634CBDC24690398EE59D4F1EB1101(L_24, L_23, (intptr_t)((void*)U3CU3Ec_U3CAddTargetControllerEventsU3Eb__19_3_mA93D4DE6D784F4424579B863D5885DA70EB7961B_RuntimeMethod_var), NULL);
		Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* L_25 = L_24;
		((U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_il2cpp_TypeInfo_var))->___U3CU3E9__19_3_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_il2cpp_TypeInfo_var))->___U3CU3E9__19_3_1), (void*)L_25);
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
// System.Void FrameRecording.Sample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample__ctor_m9A0CA51602DD25C955E9E833EEF670313CC138AC (Sample_t2818228DACAA002719507BE535C3579473CA8092* __this, const RuntimeMethod* method) 
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
		__this->___deviceModel_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deviceModel_13), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void FrameRecording.Sample::<CreateRecorder>b__14_0(easyar.ARSession/SessionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_U3CCreateRecorderU3Eb__14_0_m005BEC976BDB9A4A8A7A97266EBB6448F809088C (Sample_t2818228DACAA002719507BE535C3579473CA8092* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_il2cpp_TypeInfo_var);
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
			goto IL_0044;
		}
	}
	{
		// if (!(session.Assembly.FrameSource is CameraDeviceFrameSource))
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_2 = __this->___session_14;
		NullCheck(L_2);
		ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* L_3;
		L_3 = ARSession_get_Assembly_mD1EE98F79892BB336FDEB644E9E2FE68B5EF3994_inline(L_2, NULL);
		NullCheck(L_3);
		FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD* L_4;
		L_4 = ARAssembly_get_FrameSource_m90C2102DAB3E58792051000792948892BD1F1377_inline(L_3, NULL);
		V_1 = (bool)((((int32_t)((!(((RuntimeObject*)(CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92*)((CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92*)IsInstClass((RuntimeObject*)L_4, CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// controllerNamecard.ActiveControl = TargetController.ActiveControlStrategy.HideBeforeFirstFound;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_6 = __this->___controllerNamecard_7;
		NullCheck(L_6);
		((TargetController_t8B3D4F1410E51D042DF5E9C689F5C0499E43410A*)L_6)->___ActiveControl_4 = 1;
		// controllerIdback.ActiveControl = TargetController.ActiveControlStrategy.HideBeforeFirstFound;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_7 = __this->___controllerIdback_8;
		NullCheck(L_7);
		((TargetController_t8B3D4F1410E51D042DF5E9C689F5C0499E43410A*)L_7)->___ActiveControl_4 = 1;
	}

IL_0043:
	{
	}

IL_0044:
	{
		// };
		return;
	}
}
// System.Void FrameRecording.Sample::<CreatePlayer>b__15_0(easyar.ARSession/SessionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sample_U3CCreatePlayerU3Eb__15_0_m602BA7B633D33B30B835C4D90613C47CBFB09B4B (Sample_t2818228DACAA002719507BE535C3579473CA8092* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_il2cpp_TypeInfo_var);
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
			goto IL_0044;
		}
	}
	{
		// if (!(session.Assembly.FrameSource is CameraDeviceFrameSource))
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_2 = __this->___session_14;
		NullCheck(L_2);
		ARAssembly_t5F1E1DD46E4F3CA1BAF7ACAFC438564C8E5B02EB* L_3;
		L_3 = ARSession_get_Assembly_mD1EE98F79892BB336FDEB644E9E2FE68B5EF3994_inline(L_2, NULL);
		NullCheck(L_3);
		FrameSource_tEFFB44317ECA60F900CBDDA05D06E675C6CC88CD* L_4;
		L_4 = ARAssembly_get_FrameSource_m90C2102DAB3E58792051000792948892BD1F1377_inline(L_3, NULL);
		V_1 = (bool)((((int32_t)((!(((RuntimeObject*)(CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92*)((CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92*)IsInstClass((RuntimeObject*)L_4, CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// controllerNamecard.ActiveControl = TargetController.ActiveControlStrategy.HideBeforeFirstFound;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_6 = __this->___controllerNamecard_7;
		NullCheck(L_6);
		((TargetController_t8B3D4F1410E51D042DF5E9C689F5C0499E43410A*)L_6)->___ActiveControl_4 = 1;
		// controllerIdback.ActiveControl = TargetController.ActiveControlStrategy.HideBeforeFirstFound;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_7 = __this->___controllerIdback_8;
		NullCheck(L_7);
		((TargetController_t8B3D4F1410E51D042DF5E9C689F5C0499E43410A*)L_7)->___ActiveControl_4 = 1;
	}

IL_0043:
	{
	}

IL_0044:
	{
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
// System.Void FrameRecording.Sample/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m2D639112AC165691DD872FF259E1BD33228F21BE (U3CU3Ec__DisplayClass11_0_t76CF37B0A566B7AC8BE67F94C41D257FE158BBB5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FrameRecording.Sample/<>c__DisplayClass11_0::<Awake>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CAwakeU3Eb__0_m953D4B6CDD650BCEAAE011FAB5B9EADB6FA08782 (U3CU3Ec__DisplayClass11_0_t76CF37B0A566B7AC8BE67F94C41D257FE158BBB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// button.onClick.AddListener(() => { UnityEngine.SceneManagement.SceneManager.LoadScene(launcher); });
		String_t* L_0 = __this->___launcher_0;
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
// System.Void FrameRecording.Sample/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mF19707D7476F8E568081595E392A81F42573CB01 (U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FrameRecording.Sample/<>c__DisplayClass19_0::<AddTargetControllerEvents>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__0_m974A2E6311E74C900888A84EB430F882CF0D8A52 (U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68* __this, const RuntimeMethod* method) 
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
// System.Void FrameRecording.Sample/<>c__DisplayClass19_0::<AddTargetControllerEvents>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__1_mA96A96C6D0AEC61E303455701BF5907A851CEE1E (U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68* __this, const RuntimeMethod* method) 
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
// System.Void FrameRecording.Sample/<>c__DisplayClass19_0::<AddTargetControllerEvents>b__2(easyar.Target,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__2_mD9CDBF3BE81A8BABA5E5AF732397A31025681E15 (U3CU3Ec__DisplayClass19_0_tC87B611D989C8374892BEEA91A866A7380706C68* __this, Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* ___target0, bool ___status1, const RuntimeMethod* method) 
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
// System.Void FrameRecording.Sample/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0647BFFBC862F38BE8C0FECC805439607F1E501F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD* L_0 = (U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD*)il2cpp_codegen_object_new(U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mA0F6954CA3FDFFB1D0F434E62B4F96FF42302484(L_0, NULL);
		((U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void FrameRecording.Sample/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA0F6954CA3FDFFB1D0F434E62B4F96FF42302484 (U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void FrameRecording.Sample/<>c::<AddTargetControllerEvents>b__19_3(easyar.Target,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAddTargetControllerEventsU3Eb__19_3_mA93D4DE6D784F4424579B863D5885DA70EB7961B (U3CU3Ec_t421FDC20AB1AF983B0A8909BC4BFB9F0D625A7DD* __this, Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* ___target0, bool ___status1, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* ImageTargetController_get_Target_m51F32E8D1467745044F011BE80719C022258BC95_inline (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, const RuntimeMethod* method) 
{
	{
		// public ImageTarget Target { get; private set; }
		ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_0 = __this->___U3CTargetU3Ek__BackingField_11;
		return L_0;
	}
}
