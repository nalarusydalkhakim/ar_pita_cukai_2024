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
// System.Action`3<easyar.ObjectTargetController,easyar.Target,System.Boolean>
struct Action_3_t684402624FAD0C0FA172747995B24A41383E0627;
// System.Collections.Generic.Dictionary`2<System.Int32,easyar.TargetController>
struct Dictionary_2_tDA9BDCAD90AB624680FE8388C5681B4D692FEFFC;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t71A46277DBD73BD4009B2B20885D2B7057593A1A;
// System.Collections.Generic.IEnumerable`1<easyar.ARSession/ARCenterMode>
struct IEnumerable_1_tF42FCD24C16A2CC4047D585496162E28334040BE;
// System.Collections.Generic.IReadOnlyList`1<easyar.ARSession/ARCenterMode>
struct IReadOnlyList_1_t9AB3615049907C1504F1427696C3B8E984BF4244;
// System.Collections.Generic.List`1<System.Tuple`2<easyar.TargetController,UnityEngine.Pose>>
struct List_1_t47AF7A21A7E23F1FB8146739E4B3E8A1D1390177;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
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
// easyar.CameraDeviceFrameSource
struct CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92;
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
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// easyar.InputFrameSink
struct InputFrameSink_tA6E249222893426FDB034E5CE860F0037DAE4F95;
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
// easyar.ObjectTarget
struct ObjectTarget_t3A3463C5371DB932B7DCAA1EE9BEECC47EE97561;
// easyar.ObjectTargetController
struct ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8;
// easyar.ObjectTracker
struct ObjectTracker_tE7DB26597E066D32BB7B82BF9E526B8BF4A6ECEA;
// easyar.ObjectTrackerFrameFilter
struct ObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC;
// ObjectTracking.ObjectTrackingSample
struct ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// easyar.RenderCameraController
struct RenderCameraController_t9D339F375620BCA2966E655CB4BA18AFF9F43C58;
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
// easyar.ARSession/FrameChangeAction
struct FrameChangeAction_t22915014AF19BCD5BA244E1A821751FAC6A2C2B3;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// easyar.ObjectTargetController/ObjFileSourceData
struct ObjFileSourceData_t12FD5C0AA2C6B5B0C12FC0D02D9EA9B3BF5F1533;
// easyar.ObjectTrackerFrameFilter/ResultParameters
struct ResultParameters_t820A60C88830AB0080930E5804A33B8171508A1F;
// ObjectTracking.ObjectTrackingSample/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68;
// ObjectTracking.ObjectTrackingSample/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t1F11922716FE4B2C2ECB9FDEA63AE42AE0E9C75F;
// easyar.RefBase/Retainer
struct Retainer_t21E37A78A5C591A4A1DB7494A454CCADF411A77A;

IL2CPP_EXTERN_C RuntimeClass* ARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARHorizontalFlipMode_t0888C527184463302C2CABECD652A11262DE665F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tB4F2A14D8AB94D8492BE98245BB5E4381747D957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t1F11922716FE4B2C2ECB9FDEA63AE42AE0E9C75F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05CD887F615D875D8D276E57FE6EA68A4DA458B4;
IL2CPP_EXTERN_C String_t* _stringLiteral073781D4E1CCD334CF2D6B9A7845F6606D15E096;
IL2CPP_EXTERN_C String_t* _stringLiteral0E8CD1E34507F5A3FFA3D074EE3DF7B1F702458B;
IL2CPP_EXTERN_C String_t* _stringLiteral24384261B6324D1B1FACC1EBCBFAEC5E59A0062B;
IL2CPP_EXTERN_C String_t* _stringLiteral5E3F345A25DD79391E7D2F5A1FB17A6998C39DDC;
IL2CPP_EXTERN_C String_t* _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73;
IL2CPP_EXTERN_C String_t* _stringLiteral6676EF6EDF61656B1F1B526B21B3B45BE4CFF7DE;
IL2CPP_EXTERN_C String_t* _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
IL2CPP_EXTERN_C String_t* _stringLiteral7A71A119AB19DAEDD0B973DCB57AA0B794DBFBBA;
IL2CPP_EXTERN_C String_t* _stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5;
IL2CPP_EXTERN_C String_t* _stringLiteral9781C415DF8DCDF90F2B330680B9D230ED6E94EF;
IL2CPP_EXTERN_C String_t* _stringLiteralB0410D7021B5FCF2EF5873BC8F8101B9AE4FEB04;
IL2CPP_EXTERN_C String_t* _stringLiteralC0A3E375FE5A329146EA9A18F3DCEFA022D09235;
IL2CPP_EXTERN_C String_t* _stringLiteralEEE0FB26F879234275046023F3D7FEE278B1684C;
IL2CPP_EXTERN_C String_t* _stringLiteralF716B0D4627FA118D23A0EBFC6830217C9CC2C23;
IL2CPP_EXTERN_C String_t* _stringLiteralF7D70AB4110EC818FAF857316C4DE38C027FE186;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_mF214FDEBEA8E0FC2DA97E3E2A697864FBD5DC20F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC_mB21026365438BE5B848F8947F53C817CD974665C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_mB2B48D47826C82B27386BB2CAC3100B6C99AC299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8_m086B9618430CED45BE2EB39A80D4F2E03C67CC4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CAddTargetControllerEventsU3Eb__0_m997C511B6175B6FE0AB006DFBCD8376453A7E197_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CAddTargetControllerEventsU3Eb__1_m737DD7BF7E2BB0416E6C6E34DA2F5A10FBAC9FE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CAddTargetControllerEventsU3Eb__2_m4C44677918FC928FD24271BF68BE70399973EC32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CAddTargetControllerEventsU3Eb__3_m518CBC7DD1616251C4264343E3AA472919AB9C6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CAwakeU3Eb__0_m37FDE822E1337D7E15ADFDCF608FCD059A6660D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARHorizontalFlipMode_t0888C527184463302C2CABECD652A11262DE665F_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

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
struct U3CModuleU3E_tD42CB60F6AE9E0D99983D54C34614A51AFFD78E3 
{
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

// ObjectTracking.ObjectTrackingSample/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68  : public RuntimeObject
{
	// easyar.ObjectTargetController ObjectTracking.ObjectTrackingSample/<>c__DisplayClass16_0::controller
	ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* ___controller_0;
	// ObjectTracking.ObjectTrackingSample ObjectTracking.ObjectTrackingSample/<>c__DisplayClass16_0::<>4__this
	ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* ___U3CU3E4__this_1;
};

// ObjectTracking.ObjectTrackingSample/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t1F11922716FE4B2C2ECB9FDEA63AE42AE0E9C75F  : public RuntimeObject
{
	// System.String ObjectTracking.ObjectTrackingSample/<>c__DisplayClass7_0::launcher
	String_t* ___launcher_0;
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

// easyar.CameraDevice
struct CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE  : public RefBase_tD2A748D10CECAAD8DD367977128D0B22A01F604E
{
};

// easyar.CameraParameters
struct CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53  : public RefBase_tD2A748D10CECAAD8DD367977128D0B22A01F604E
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

// easyar.ObjectTarget
struct ObjectTarget_t3A3463C5371DB932B7DCAA1EE9BEECC47EE97561  : public Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836
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

// ObjectTracking.ObjectTrackingSample
struct ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// easyar.ARSession ObjectTracking.ObjectTrackingSample::Session
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* ___Session_4;
	// easyar.ObjectTargetController ObjectTracking.ObjectTrackingSample::objectTarget
	ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* ___objectTarget_5;
	// UnityEngine.UI.Text ObjectTracking.ObjectTrackingSample::Status
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Status_6;
	// UnityEngine.UI.Button ObjectTracking.ObjectTrackingSample::BackButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___BackButton_7;
	// easyar.CameraDeviceFrameSource ObjectTracking.ObjectTrackingSample::cameraDevice
	CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* ___cameraDevice_8;
	// easyar.ObjectTrackerFrameFilter ObjectTracking.ObjectTrackingSample::objectTracker
	ObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC* ___objectTracker_9;
	// System.Boolean ObjectTracking.ObjectTrackingSample::loadstatus
	bool ___loadstatus_10;
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

// easyar.ObjectTargetController
struct ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8  : public TargetController_t8B3D4F1410E51D042DF5E9C689F5C0499E43410A
{
	// easyar.ObjectTarget easyar.ObjectTargetController::<Target>k__BackingField
	ObjectTarget_t3A3463C5371DB932B7DCAA1EE9BEECC47EE97561* ___U3CTargetU3Ek__BackingField_11;
	// easyar.ObjectTargetController/DataSource easyar.ObjectTargetController::SourceType
	int32_t ___SourceType_12;
	// easyar.ObjectTargetController/ObjFileSourceData easyar.ObjectTargetController::ObjFileSource
	ObjFileSourceData_t12FD5C0AA2C6B5B0C12FC0D02D9EA9B3BF5F1533* ___ObjFileSource_13;
	// easyar.ObjectTarget easyar.ObjectTargetController::TargetSource
	ObjectTarget_t3A3463C5371DB932B7DCAA1EE9BEECC47EE97561* ___TargetSource_14;
	// System.Boolean easyar.ObjectTargetController::trackerHasSet
	bool ___trackerHasSet_15;
	// easyar.ObjectTrackerFrameFilter easyar.ObjectTargetController::tracker
	ObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC* ___tracker_16;
	// easyar.ObjectTrackerFrameFilter easyar.ObjectTargetController::loader
	ObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC* ___loader_17;
	// System.Single easyar.ObjectTargetController::scale
	float ___scale_18;
	// System.Single easyar.ObjectTargetController::scaleX
	float ___scaleX_19;
	// System.Boolean easyar.ObjectTargetController::preHFlip
	bool ___preHFlip_20;
	// System.Action easyar.ObjectTargetController::TargetAvailable
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___TargetAvailable_21;
	// System.Action`2<easyar.Target,System.Boolean> easyar.ObjectTargetController::TargetLoad
	Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* ___TargetLoad_22;
	// System.Action`2<easyar.Target,System.Boolean> easyar.ObjectTargetController::TargetUnload
	Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* ___TargetUnload_23;
};

// easyar.ObjectTrackerFrameFilter
struct ObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC  : public FrameFilter_tEF74686432B3C28E888F223945B0BF3FC58AD214
{
	// easyar.ObjectTracker easyar.ObjectTrackerFrameFilter::<Tracker>k__BackingField
	ObjectTracker_tE7DB26597E066D32BB7B82BF9E526B8BF4A6ECEA* ___U3CTrackerU3Ek__BackingField_6;
	// System.Int32 easyar.ObjectTrackerFrameFilter::simultaneousNum
	int32_t ___simultaneousNum_7;
	// System.Collections.Generic.List`1<System.Int32> easyar.ObjectTrackerFrameFilter::previousTargetIDs
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___previousTargetIDs_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,easyar.TargetController> easyar.ObjectTrackerFrameFilter::allTargetController
	Dictionary_2_tDA9BDCAD90AB624680FE8388C5681B4D692FEFFC* ___allTargetController_9;
	// System.Boolean easyar.ObjectTrackerFrameFilter::isStarted
	bool ___isStarted_10;
	// easyar.ObjectTrackerFrameFilter/ResultParameters easyar.ObjectTrackerFrameFilter::resultType
	ResultParameters_t820A60C88830AB0080930E5804A33B8171508A1F* ___resultType_11;
	// System.Action`3<easyar.ObjectTargetController,easyar.Target,System.Boolean> easyar.ObjectTrackerFrameFilter::TargetLoad
	Action_3_t684402624FAD0C0FA172747995B24A41383E0627* ___TargetLoad_12;
	// System.Action`3<easyar.ObjectTargetController,easyar.Target,System.Boolean> easyar.ObjectTrackerFrameFilter::TargetUnload
	Action_3_t684402624FAD0C0FA172747995B24A41383E0627* ___TargetUnload_13;
	// System.Action easyar.ObjectTrackerFrameFilter::SimultaneousNumChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___SimultaneousNumChanged_14;
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


// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Contains<System.Int32Enum>(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mCF235BF6055957FECC7BC52DB8F433FB3CE7C643_gshared (RuntimeObject* ___source0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m460C72FDDE5FF8033C7BD19A07CF4E3F473F7414_gshared (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// System.Void ObjectTracking.ObjectTrackingSample/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mC04F69AD2A2FBD4153037313D050E175A3B56CCD (U3CU3Ec__DisplayClass7_0_t1F11922716FE4B2C2ECB9FDEA63AE42AE0E9C75F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<easyar.ObjectTrackerFrameFilter>()
inline ObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC* Component_GetComponentInChildren_TisObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC_mB21026365438BE5B848F8947F53C817CD974665C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<easyar.CameraDeviceFrameSource>()
inline CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* Component_GetComponentInChildren_TisCameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_mF214FDEBEA8E0FC2DA97E3E2A697864FBD5DC20F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<easyar.ObjectTargetController>()
inline ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* GameObject_GetComponent_TisObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8_m086B9618430CED45BE2EB39A80D4F2E03C67CC4E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ObjectTracking.ObjectTrackingSample::AddTargetControllerEvents(easyar.ObjectTargetController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTrackingSample_AddTargetControllerEvents_m4FBF6F47C52E7A47401D757A0F36F0A7E1DAB93D (ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* __this, ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* ___controller0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void easyar.ARSession::set_SpecificTargetCenter(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSession_set_SpecificTargetCenter_mFF8A89316911782D564948580448B36C953EC2D2 (ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// easyar.CameraDevice easyar.CameraDeviceFrameSource::get_Device()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* CameraDeviceFrameSource_get_Device_mFBF96962AC6D4A698F2F9586D28AF1654B7F0708_inline (CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.GameObject easyar.ARSession::get_CenterObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARSession_get_CenterObject_mBB894C35750938190298F7D5FF92758174A303D5_inline (ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void easyar.ObjectTargetController::set_Tracker(easyar.ObjectTrackerFrameFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTargetController_set_Tracker_mED9D067AF53EC65C87BD58724F9936358BD50FA2 (ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* __this, ObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC* ___value0, const RuntimeMethod* method) ;
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
// System.Int32 easyar.CameraDevice::cameraCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraDevice_cameraCount_mEB52B8E4E10962E6687A667356587F4803CFF1F7 (const RuntimeMethod* method) ;
// System.Void easyar.GUIPopup::EnqueueMessage(System.String,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIPopup_EnqueueMessage_mE38C2A9433BEC0EDF3015528068A89C522B85139 (String_t* ___message0, float ___seconds1, bool ___isFatal2, const RuntimeMethod* method) ;
// System.Void easyar.CameraDeviceFrameSource::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraDeviceFrameSource_Close_m793AEC528A686677A144635A43D6169693D8C91F (CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void easyar.CameraDeviceFrameSource::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraDeviceFrameSource_Open_mE2216EE221BA2AE360C82DCEAF46D15F5C8A5C64 (CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* __this, const RuntimeMethod* method) ;
// System.Void ObjectTracking.ObjectTrackingSample/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m077088D20E9546064B770BF64E629613D4F06AB2 (U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* __this, const RuntimeMethod* method) ;
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
// System.Void easyar.ObjectTargetController::add_TargetLoad(System.Action`2<easyar.Target,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTargetController_add_TargetLoad_m8C34E94866C0354A070331B5FE1C383828C8AF57 (ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* __this, Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* ___value0, const RuntimeMethod* method) ;
// System.Void easyar.ObjectTargetController::add_TargetUnload(System.Action`2<easyar.Target,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTargetController_add_TargetUnload_mA40853B603DD443FDA0461573E438DC5C7C92880 (ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* __this, Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// easyar.ObjectTarget easyar.ObjectTargetController::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectTarget_t3A3463C5371DB932B7DCAA1EE9BEECC47EE97561* ObjectTargetController_get_Target_m68ACD08B1961274389988847AB9C00725BF35FD1_inline (ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// easyar.ObjectTrackerFrameFilter easyar.ObjectTargetController::get_Tracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC* ObjectTargetController_get_Tracker_m29D2CE3DE8759D95F3F6B57A86AFF0CF0FDE1229 (ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* __this, const RuntimeMethod* method) ;
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
// System.Void ObjectTracking.ObjectTrackingSample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTrackingSample_Awake_m482D82B8AB85DC5BE9C55A8CDB1D562771F60E45 (ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_mF214FDEBEA8E0FC2DA97E3E2A697864FBD5DC20F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC_mB21026365438BE5B848F8947F53C817CD974665C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8_m086B9618430CED45BE2EB39A80D4F2E03C67CC4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CAwakeU3Eb__0_m37FDE822E1337D7E15ADFDCF608FCD059A6660D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t1F11922716FE4B2C2ECB9FDEA63AE42AE0E9C75F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6676EF6EDF61656B1F1B526B21B3B45BE4CFF7DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t1F11922716FE4B2C2ECB9FDEA63AE42AE0E9C75F* V_0 = NULL;
	bool V_1 = false;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_t1F11922716FE4B2C2ECB9FDEA63AE42AE0E9C75F* L_0 = (U3CU3Ec__DisplayClass7_0_t1F11922716FE4B2C2ECB9FDEA63AE42AE0E9C75F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t1F11922716FE4B2C2ECB9FDEA63AE42AE0E9C75F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_mC04F69AD2A2FBD4153037313D050E175A3B56CCD(L_0, NULL);
		V_0 = L_0;
		// objectTracker = Session.GetComponentInChildren<ObjectTrackerFrameFilter>();
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_1 = __this->___Session_4;
		NullCheck(L_1);
		ObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC* L_2;
		L_2 = Component_GetComponentInChildren_TisObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC_mB21026365438BE5B848F8947F53C817CD974665C(L_1, Component_GetComponentInChildren_TisObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC_mB21026365438BE5B848F8947F53C817CD974665C_RuntimeMethod_var);
		__this->___objectTracker_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectTracker_9), (void*)L_2);
		// cameraDevice = Session.GetComponentInChildren<CameraDeviceFrameSource>();
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_3 = __this->___Session_4;
		NullCheck(L_3);
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_4;
		L_4 = Component_GetComponentInChildren_TisCameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_mF214FDEBEA8E0FC2DA97E3E2A697864FBD5DC20F(L_3, Component_GetComponentInChildren_TisCameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_mF214FDEBEA8E0FC2DA97E3E2A697864FBD5DC20F_RuntimeMethod_var);
		__this->___cameraDevice_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraDevice_8), (void*)L_4);
		// objectTarget = GameObject.Find("ObjectTarget").GetComponent<ObjectTargetController>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral6676EF6EDF61656B1F1B526B21B3B45BE4CFF7DE, NULL);
		NullCheck(L_5);
		ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* L_6;
		L_6 = GameObject_GetComponent_TisObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8_m086B9618430CED45BE2EB39A80D4F2E03C67CC4E(L_5, GameObject_GetComponent_TisObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8_m086B9618430CED45BE2EB39A80D4F2E03C67CC4E_RuntimeMethod_var);
		__this->___objectTarget_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectTarget_5), (void*)L_6);
		// AddTargetControllerEvents(objectTarget);
		ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* L_7 = __this->___objectTarget_5;
		ObjectTrackingSample_AddTargetControllerEvents_m4FBF6F47C52E7A47401D757A0F36F0A7E1DAB93D(__this, L_7, NULL);
		// Session.SpecificTargetCenter = objectTarget.gameObject;
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_8 = __this->___Session_4;
		ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* L_9 = __this->___objectTarget_5;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_8);
		ARSession_set_SpecificTargetCenter_mFF8A89316911782D564948580448B36C953EC2D2(L_8, L_10, NULL);
		// var launcher = "AllSamplesLauncher";
		U3CU3Ec__DisplayClass7_0_t1F11922716FE4B2C2ECB9FDEA63AE42AE0E9C75F* L_11 = V_0;
		NullCheck(L_11);
		L_11->___launcher_0 = _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___launcher_0), (void*)_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		// if (Application.CanStreamedLevelBeLoaded(launcher))
		U3CU3Ec__DisplayClass7_0_t1F11922716FE4B2C2ECB9FDEA63AE42AE0E9C75F* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = L_12->___launcher_0;
		bool L_14;
		L_14 = Application_CanStreamedLevelBeLoaded_mA1BAA60593E8679BAFA6A16595166774AE172ADC(L_13, NULL);
		V_1 = L_14;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_00a4;
		}
	}
	{
		// var button = BackButton.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = __this->___BackButton_7;
		NullCheck(L_16);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17;
		L_17 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_16, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		V_2 = L_17;
		// button.onClick.AddListener(() => { UnityEngine.SceneManagement.SceneManager.LoadScene(launcher); });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = V_2;
		NullCheck(L_18);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_19;
		L_19 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_18, NULL);
		U3CU3Ec__DisplayClass7_0_t1F11922716FE4B2C2ECB9FDEA63AE42AE0E9C75F* L_20 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_21 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CAwakeU3Eb__0_m37FDE822E1337D7E15ADFDCF608FCD059A6660D0_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_19, L_21, NULL);
		goto IL_00b8;
	}

IL_00a4:
	{
		// BackButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_22 = __this->___BackButton_7;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)0, NULL);
	}

IL_00b8:
	{
		// }
		return;
	}
}
// System.Void ObjectTracking.ObjectTrackingSample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTrackingSample_Update_m2F5CACE618199F339A9E16DF6D1B78877C948939 (ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARHorizontalFlipMode_t0888C527184463302C2CABECD652A11262DE665F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E8CD1E34507F5A3FFA3D074EE3DF7B1F702458B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24384261B6324D1B1FACC1EBCBFAEC5E59A0062B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A71A119AB19DAEDD0B973DCB57AA0B794DBFBBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0A3E375FE5A329146EA9A18F3DCEFA022D09235);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEE0FB26F879234275046023F3D7FEE278B1684C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7D70AB4110EC818FAF857316C4DE38C027FE186);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t G_B11_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B11_3 = NULL;
	int32_t G_B10_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B10_3 = NULL;
	int32_t G_B12_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B12_3 = NULL;
	String_t* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B13_4 = NULL;
	int32_t G_B15_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B15_3 = NULL;
	int32_t G_B14_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B14_3 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B16_4 = NULL;
	int32_t G_B18_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B18_3 = NULL;
	int32_t G_B17_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B17_3 = NULL;
	int32_t G_B19_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B19_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B20_4 = NULL;
	int32_t G_B22_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B22_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B22_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B22_3 = NULL;
	int32_t G_B21_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B21_3 = NULL;
	int32_t G_B23_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B23_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B23_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B23_3 = NULL;
	String_t* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B24_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B24_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B24_4 = NULL;
	{
		// bool isFront = false;
		V_0 = (bool)0;
		// if (cameraDevice.Device != null)
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_0 = __this->___cameraDevice_8;
		NullCheck(L_0);
		CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_1;
		L_1 = CameraDeviceFrameSource_get_Device_mFBF96962AC6D4A698F2F9586D28AF1654B7F0708_inline(L_0, NULL);
		V_1 = (bool)((!(((RuntimeObject*)(CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		// using (var cameraParameters = cameraDevice.Device.cameraParameters())
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_3 = __this->___cameraDevice_8;
		NullCheck(L_3);
		CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_4;
		L_4 = CameraDeviceFrameSource_get_Device_mFBF96962AC6D4A698F2F9586D28AF1654B7F0708_inline(L_3, NULL);
		NullCheck(L_4);
		CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_5;
		L_5 = VirtualFuncInvoker0< CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* >::Invoke(21 /* easyar.CameraParameters easyar.CameraDevice::cameraParameters() */, L_4);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				{
					CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_6 = V_2;
					if (!L_6)
					{
						goto IL_0046;
					}
				}
				{
					CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_7 = V_2;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0046:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (cameraParameters.cameraDeviceType() == CameraDeviceType.Front)
				CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_8 = V_2;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* easyar.CameraDeviceType easyar.CameraParameters::cameraDeviceType() */, L_8);
				V_3 = (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_0039_1;
				}
			}
			{
				// isFront = true;
				V_0 = (bool)1;
			}

IL_0039_1:
			{
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
	}

IL_0048:
	{
		// Status.text = "CenterMode: " + Session.CenterMode + Environment.NewLine +
		//     "CenterObject: " + (Session && Session.CenterObject ? Session.CenterObject.name : null) + Environment.NewLine +
		//     "HorizontalFlip: " + (isFront ? Session.HorizontalFlipFront : Session.HorizontalFlipNormal) + Environment.NewLine +
		//     "Camera: " + (cameraDevice && cameraDevice.enabled ? "On" : "Off") + Environment.NewLine +
		//     "Tracking: " + (objectTracker && objectTracker.enabled ? "On" : "Off") + Environment.NewLine + Environment.NewLine +
		//     "Target Load Status:" + loadstatus + Environment.NewLine;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___Status_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)19));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral0E8CD1E34507F5A3FFA3D074EE3DF7B1F702458B);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0E8CD1E34507F5A3FFA3D074EE3DF7B1F702458B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_15 = __this->___Session_4;
		NullCheck(L_15);
		int32_t* L_16 = (&L_15->___CenterMode_4);
		Il2CppFakeBox<int32_t> L_17(ARCenterMode_tC804801C4A509F236BAA0734545AA75E5BA91932_il2cpp_TypeInfo_var, L_16);
		String_t* L_18;
		L_18 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_17), NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_14;
		String_t* L_20;
		L_20 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_19;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralC0A3E375FE5A329146EA9A18F3DCEFA022D09235);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC0A3E375FE5A329146EA9A18F3DCEFA022D09235);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_23 = __this->___Session_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_23, NULL);
		G_B10_0 = 4;
		G_B10_1 = L_22;
		G_B10_2 = L_22;
		G_B10_3 = L_11;
		if (!L_24)
		{
			G_B11_0 = 4;
			G_B11_1 = L_22;
			G_B11_2 = L_22;
			G_B11_3 = L_11;
			goto IL_00a7;
		}
	}
	{
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_25 = __this->___Session_4;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = ARSession_get_CenterObject_mBB894C35750938190298F7D5FF92758174A303D5_inline(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_26, NULL);
		G_B11_0 = G_B10_0;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
		if (L_27)
		{
			G_B12_0 = G_B10_0;
			G_B12_1 = G_B10_1;
			G_B12_2 = G_B10_2;
			G_B12_3 = G_B10_3;
			goto IL_00aa;
		}
	}

IL_00a7:
	{
		G_B13_0 = ((String_t*)(NULL));
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		G_B13_4 = G_B11_3;
		goto IL_00ba;
	}

IL_00aa:
	{
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_28 = __this->___Session_4;
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = ARSession_get_CenterObject_mBB894C35750938190298F7D5FF92758174A303D5_inline(L_28, NULL);
		NullCheck(L_29);
		String_t* L_30;
		L_30 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_29, NULL);
		G_B13_0 = L_30;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		G_B13_4 = G_B12_3;
	}

IL_00ba:
	{
		NullCheck(G_B13_2);
		ArrayElementTypeCheck (G_B13_2, G_B13_0);
		(G_B13_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B13_1), (String_t*)G_B13_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = G_B13_3;
		String_t* L_32;
		L_32 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_31;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral24384261B6324D1B1FACC1EBCBFAEC5E59A0062B);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral24384261B6324D1B1FACC1EBCBFAEC5E59A0062B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		bool L_35 = V_0;
		G_B14_0 = 7;
		G_B14_1 = L_34;
		G_B14_2 = L_34;
		G_B14_3 = G_B13_4;
		if (L_35)
		{
			G_B15_0 = 7;
			G_B15_1 = L_34;
			G_B15_2 = L_34;
			G_B15_3 = G_B13_4;
			goto IL_00dd;
		}
	}
	{
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_36 = __this->___Session_4;
		NullCheck(L_36);
		int32_t L_37 = L_36->___HorizontalFlipNormal_5;
		G_B16_0 = L_37;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		G_B16_3 = G_B14_2;
		G_B16_4 = G_B14_3;
		goto IL_00e8;
	}

IL_00dd:
	{
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_38 = __this->___Session_4;
		NullCheck(L_38);
		int32_t L_39 = L_38->___HorizontalFlipFront_6;
		G_B16_0 = L_39;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
		G_B16_3 = G_B15_2;
		G_B16_4 = G_B15_3;
	}

IL_00e8:
	{
		V_4 = G_B16_0;
		Il2CppFakeBox<int32_t> L_40(ARHorizontalFlipMode_t0888C527184463302C2CABECD652A11262DE665F_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_41;
		L_41 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_40), NULL);
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, L_41);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)L_41);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = G_B16_3;
		String_t* L_43;
		L_43 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_43);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_42;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteral7A71A119AB19DAEDD0B973DCB57AA0B794DBFBBA);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral7A71A119AB19DAEDD0B973DCB57AA0B794DBFBBA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_44;
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_46 = __this->___cameraDevice_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_46, NULL);
		G_B17_0 = ((int32_t)10);
		G_B17_1 = L_45;
		G_B17_2 = L_45;
		G_B17_3 = G_B16_4;
		if (!L_47)
		{
			G_B18_0 = ((int32_t)10);
			G_B18_1 = L_45;
			G_B18_2 = L_45;
			G_B18_3 = G_B16_4;
			goto IL_0126;
		}
	}
	{
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_48 = __this->___cameraDevice_8;
		NullCheck(L_48);
		bool L_49;
		L_49 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_48, NULL);
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		if (L_49)
		{
			G_B19_0 = G_B17_0;
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_012d;
		}
	}

IL_0126:
	{
		G_B20_0 = _stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		G_B20_4 = G_B18_3;
		goto IL_0132;
	}

IL_012d:
	{
		G_B20_0 = _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
		G_B20_4 = G_B19_3;
	}

IL_0132:
	{
		NullCheck(G_B20_2);
		ArrayElementTypeCheck (G_B20_2, G_B20_0);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = G_B20_3;
		String_t* L_51;
		L_51 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_51);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_50;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteralF7D70AB4110EC818FAF857316C4DE38C027FE186);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralF7D70AB4110EC818FAF857316C4DE38C027FE186);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_52;
		ObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC* L_54 = __this->___objectTracker_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_54, NULL);
		G_B21_0 = ((int32_t)13);
		G_B21_1 = L_53;
		G_B21_2 = L_53;
		G_B21_3 = G_B20_4;
		if (!L_55)
		{
			G_B22_0 = ((int32_t)13);
			G_B22_1 = L_53;
			G_B22_2 = L_53;
			G_B22_3 = G_B20_4;
			goto IL_0162;
		}
	}
	{
		ObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC* L_56 = __this->___objectTracker_9;
		NullCheck(L_56);
		bool L_57;
		L_57 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_56, NULL);
		G_B22_0 = G_B21_0;
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
		G_B22_3 = G_B21_3;
		if (L_57)
		{
			G_B23_0 = G_B21_0;
			G_B23_1 = G_B21_1;
			G_B23_2 = G_B21_2;
			G_B23_3 = G_B21_3;
			goto IL_0169;
		}
	}

IL_0162:
	{
		G_B24_0 = _stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5;
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		G_B24_3 = G_B22_2;
		G_B24_4 = G_B22_3;
		goto IL_016e;
	}

IL_0169:
	{
		G_B24_0 = _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
		G_B24_3 = G_B23_2;
		G_B24_4 = G_B23_3;
	}

IL_016e:
	{
		NullCheck(G_B24_2);
		ArrayElementTypeCheck (G_B24_2, G_B24_0);
		(G_B24_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B24_1), (String_t*)G_B24_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = G_B24_3;
		String_t* L_59;
		L_59 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)L_59);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = L_58;
		String_t* L_61;
		L_61 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_61);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_61);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_60;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, _stringLiteralEEE0FB26F879234275046023F3D7FEE278B1684C);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralEEE0FB26F879234275046023F3D7FEE278B1684C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = L_62;
		bool* L_64 = (&__this->___loadstatus_10);
		String_t* L_65;
		L_65 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_64, NULL);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_65);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)L_65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = L_63;
		String_t* L_67;
		L_67 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_67);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)L_67);
		String_t* L_68;
		L_68 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_66, NULL);
		NullCheck(G_B24_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B24_4, L_68);
		// }
		return;
	}
}
// System.Void ObjectTracking.ObjectTrackingSample::Tracking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTrackingSample_Tracking_m5E8A4EDEFB845715AB667A1AED07AC808345040C (ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* __this, bool ___on0, const RuntimeMethod* method) 
{
	{
		// objectTracker.enabled = on;
		ObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC* L_0 = __this->___objectTracker_9;
		bool L_1 = ___on0;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ObjectTracking.ObjectTrackingSample::UnloadTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTrackingSample_UnloadTargets_m93DFA2D5BDA7C74457D2FF266006EF29DBC07167 (ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* __this, const RuntimeMethod* method) 
{
	{
		// objectTarget.Tracker = null;
		ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* L_0 = __this->___objectTarget_5;
		NullCheck(L_0);
		ObjectTargetController_set_Tracker_mED9D067AF53EC65C87BD58724F9936358BD50FA2(L_0, (ObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC*)NULL, NULL);
		// }
		return;
	}
}
// System.Void ObjectTracking.ObjectTrackingSample::LoadTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTrackingSample_LoadTargets_m5CD6A3907719A7A00B92756FF10BE9990F75781B (ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* __this, const RuntimeMethod* method) 
{
	{
		// objectTarget.Tracker = objectTracker;
		ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* L_0 = __this->___objectTarget_5;
		ObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC* L_1 = __this->___objectTracker_9;
		NullCheck(L_0);
		ObjectTargetController_set_Tracker_mED9D067AF53EC65C87BD58724F9936358BD50FA2(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ObjectTracking.ObjectTrackingSample::SwitchCenterMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTrackingSample_SwitchCenterMode_m7981961FFF2B5AB82491298E2FFC09D588AEF44B (ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* __this, const RuntimeMethod* method) 
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
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_0 = __this->___Session_4;
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
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_4 = __this->___Session_4;
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_5 = __this->___Session_4;
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
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_11 = __this->___Session_4;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = ARSession_get_AvailableCenterMode_mE27967E2CB5EA8A2D922FCEF0576EBB8646D2610(L_11, NULL);
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_13 = __this->___Session_4;
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
// System.Void ObjectTracking.ObjectTrackingSample::EnableCamera(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTrackingSample_EnableCamera_m6E13F59E0A41AB39172B8D7CF9645C9E1CA18179 (ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* __this, bool ___enable0, const RuntimeMethod* method) 
{
	{
		// cameraDevice.enabled = enable;
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_0 = __this->___cameraDevice_8;
		bool L_1 = ___enable0;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ObjectTracking.ObjectTrackingSample::SwitchHFlipMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTrackingSample_SwitchHFlipMode_m5FA84446AEB99A8762CF9B6DDC61F935A4427BD9 (ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARHorizontalFlipMode_t0888C527184463302C2CABECD652A11262DE665F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* V_1 = NULL;
	bool V_2 = false;
	{
		// if (cameraDevice.Device == null)
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_0 = __this->___cameraDevice_8;
		NullCheck(L_0);
		CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_1;
		L_1 = CameraDeviceFrameSource_get_Device_mFBF96962AC6D4A698F2F9586D28AF1654B7F0708_inline(L_0, NULL);
		V_0 = (bool)((((RuntimeObject*)(CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_00a6;
	}

IL_0019:
	{
		// using (var cameraParameters = cameraDevice.Device.cameraParameters())
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_3 = __this->___cameraDevice_8;
		NullCheck(L_3);
		CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_4;
		L_4 = CameraDeviceFrameSource_get_Device_mFBF96962AC6D4A698F2F9586D28AF1654B7F0708_inline(L_3, NULL);
		NullCheck(L_4);
		CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_5;
		L_5 = VirtualFuncInvoker0< CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* >::Invoke(21 /* easyar.CameraParameters easyar.CameraDevice::cameraParameters() */, L_4);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009b:
			{// begin finally (depth: 1)
				{
					CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_6 = V_1;
					if (!L_6)
					{
						goto IL_00a5;
					}
				}
				{
					CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_7 = V_1;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_00a5:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (cameraParameters.cameraDeviceType() == CameraDeviceType.Front)
				CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_8 = V_1;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* easyar.CameraDeviceType easyar.CameraParameters::cameraDeviceType() */, L_8);
				V_2 = (bool)((((int32_t)L_9) == ((int32_t)2))? 1 : 0);
				bool L_10 = V_2;
				if (!L_10)
				{
					goto IL_0069_1;
				}
			}
			{
				// Session.HorizontalFlipFront = (ARSession.ARHorizontalFlipMode)(((int)Session.HorizontalFlipFront + 1) % Enum.GetValues(typeof(ARSession.ARHorizontalFlipMode)).Length);
				ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_11 = __this->___Session_4;
				ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_12 = __this->___Session_4;
				NullCheck(L_12);
				int32_t L_13 = L_12->___HorizontalFlipFront_6;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (ARHorizontalFlipMode_t0888C527184463302C2CABECD652A11262DE665F_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_15;
				L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
				il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
				RuntimeArray* L_16;
				L_16 = Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293(L_15, NULL);
				NullCheck(L_16);
				int32_t L_17;
				L_17 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_16, NULL);
				NullCheck(L_11);
				L_11->___HorizontalFlipFront_6 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_13, 1))%L_17));
				goto IL_0098_1;
			}

IL_0069_1:
			{
				// Session.HorizontalFlipNormal = (ARSession.ARHorizontalFlipMode)(((int)Session.HorizontalFlipNormal + 1) % Enum.GetValues(typeof(ARSession.ARHorizontalFlipMode)).Length);
				ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_18 = __this->___Session_4;
				ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_19 = __this->___Session_4;
				NullCheck(L_19);
				int32_t L_20 = L_19->___HorizontalFlipNormal_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (ARHorizontalFlipMode_t0888C527184463302C2CABECD652A11262DE665F_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_21, NULL);
				il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
				RuntimeArray* L_23;
				L_23 = Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293(L_22, NULL);
				NullCheck(L_23);
				int32_t L_24;
				L_24 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_23, NULL);
				NullCheck(L_18);
				L_18->___HorizontalFlipNormal_5 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_20, 1))%L_24));
			}

IL_0098_1:
			{
				goto IL_00a6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Void ObjectTracking.ObjectTrackingSample::NextCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTrackingSample_NextCamera_mA35E5668B9E42FCF40F79342620C9A360D05D596 (ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05CD887F615D875D8D276E57FE6EA68A4DA458B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9781C415DF8DCDF90F2B330680B9D230ED6E94EF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (!cameraDevice || cameraDevice.Device == null)
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_0 = __this->___cameraDevice_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_2 = __this->___cameraDevice_8;
		NullCheck(L_2);
		CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_3;
		L_3 = CameraDeviceFrameSource_get_Device_mFBF96962AC6D4A698F2F9586D28AF1654B7F0708_inline(L_2, NULL);
		G_B3_0 = ((((RuntimeObject*)(CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		V_1 = (bool)G_B3_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// return;
		goto IL_00bd;
	}

IL_0029:
	{
		// if (CameraDevice.cameraCount() == 0)
		int32_t L_5;
		L_5 = CameraDevice_cameraCount_mEB52B8E4E10962E6687A667356587F4803CFF1F7(NULL);
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0055;
		}
	}
	{
		// GUIPopup.EnqueueMessage("Camera unavailable", 3);
		GUIPopup_EnqueueMessage_mE38C2A9433BEC0EDF3015528068A89C522B85139(_stringLiteral05CD887F615D875D8D276E57FE6EA68A4DA458B4, (3.0f), (bool)0, NULL);
		// cameraDevice.Close();
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_7 = __this->___cameraDevice_8;
		NullCheck(L_7);
		CameraDeviceFrameSource_Close_m793AEC528A686677A144635A43D6169693D8C91F(L_7, NULL);
		// return;
		goto IL_00bd;
	}

IL_0055:
	{
		// var index = cameraDevice.Device.index();
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_8 = __this->___cameraDevice_8;
		NullCheck(L_8);
		CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_9;
		L_9 = CameraDeviceFrameSource_get_Device_mFBF96962AC6D4A698F2F9586D28AF1654B7F0708_inline(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 easyar.CameraDevice::index() */, L_9);
		V_0 = L_10;
		// index = (index + 1) % CameraDevice.cameraCount();
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = CameraDevice_cameraCount_mEB52B8E4E10962E6687A667356587F4803CFF1F7(NULL);
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_11, 1))%L_12));
		// cameraDevice.CameraOpenMethod = CameraDeviceFrameSource.CameraDeviceOpenMethod.DeviceIndex;
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_13 = __this->___cameraDevice_8;
		NullCheck(L_13);
		L_13->___CameraOpenMethod_14 = 1;
		// cameraDevice.CameraIndex = index;
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_14 = __this->___cameraDevice_8;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		L_14->___CameraIndex_16 = L_15;
		// GUIPopup.EnqueueMessage("Switch to camera index: " + index, 3);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_17;
		L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral9781C415DF8DCDF90F2B330680B9D230ED6E94EF, L_16, NULL);
		GUIPopup_EnqueueMessage_mE38C2A9433BEC0EDF3015528068A89C522B85139(L_17, (3.0f), (bool)0, NULL);
		// cameraDevice.Close();
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_18 = __this->___cameraDevice_8;
		NullCheck(L_18);
		CameraDeviceFrameSource_Close_m793AEC528A686677A144635A43D6169693D8C91F(L_18, NULL);
		// cameraDevice.Open();
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_19 = __this->___cameraDevice_8;
		NullCheck(L_19);
		CameraDeviceFrameSource_Open_mE2216EE221BA2AE360C82DCEAF46D15F5C8A5C64(L_19, NULL);
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void ObjectTracking.ObjectTrackingSample::AddTargetControllerEvents(easyar.ObjectTargetController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTrackingSample_AddTargetControllerEvents_m4FBF6F47C52E7A47401D757A0F36F0A7E1DAB93D (ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* __this, ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* ___controller0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CAddTargetControllerEventsU3Eb__0_m997C511B6175B6FE0AB006DFBCD8376453A7E197_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CAddTargetControllerEventsU3Eb__1_m737DD7BF7E2BB0416E6C6E34DA2F5A10FBAC9FE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CAddTargetControllerEventsU3Eb__2_m4C44677918FC928FD24271BF68BE70399973EC32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CAddTargetControllerEventsU3Eb__3_m518CBC7DD1616251C4264343E3AA472919AB9C6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* L_0 = (U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass16_0__ctor_m077088D20E9546064B770BF64E629613D4F06AB2(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* L_1 = V_0;
		ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* L_2 = ___controller0;
		NullCheck(L_1);
		L_1->___controller_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___controller_0), (void*)L_2);
		U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// if (!controller)
		U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* L_4 = V_0;
		NullCheck(L_4);
		ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* L_5 = L_4->___controller_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_5, NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		// return;
		goto IL_008a;
	}

IL_002a:
	{
		// controller.TargetFound += () =>
		// {
		//     Debug.LogFormat("Found target {{id = {0}, name = {1}}}", controller.Target.runtimeID(), controller.Target.name());
		// };
		U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* L_8 = V_0;
		NullCheck(L_8);
		ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* L_9 = L_8->___controller_0;
		U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* L_10 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_11, L_10, (intptr_t)((void*)U3CU3Ec__DisplayClass16_0_U3CAddTargetControllerEventsU3Eb__0_m997C511B6175B6FE0AB006DFBCD8376453A7E197_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		TargetController_add_TargetFound_mD4B9C4D3662E282B491F617E22AA14D3775AB57B(L_9, L_11, NULL);
		// controller.TargetLost += () =>
		// {
		//     Debug.LogFormat("Lost target {{id = {0}, name = {1}}}", controller.Target.runtimeID(), controller.Target.name());
		// };
		U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* L_12 = V_0;
		NullCheck(L_12);
		ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* L_13 = L_12->___controller_0;
		U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* L_14 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass16_0_U3CAddTargetControllerEventsU3Eb__1_m737DD7BF7E2BB0416E6C6E34DA2F5A10FBAC9FE3_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		TargetController_add_TargetLost_mB6790A7172B5C303E3143155672D27F4BF6E4ECC(L_13, L_15, NULL);
		// controller.TargetLoad += (Target target, bool status) =>
		// {
		//     loadstatus = status ? true : loadstatus;
		//     Debug.LogFormat("Load target {{id = {0}, name = {1}}} into {2} => {3}", target.runtimeID(), target.name(), controller.Tracker.name, status);
		// };
		U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* L_16 = V_0;
		NullCheck(L_16);
		ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* L_17 = L_16->___controller_0;
		U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* L_18 = V_0;
		Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* L_19 = (Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416*)il2cpp_codegen_object_new(Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_2__ctor_m0D18FC0D2E5634CBDC24690398EE59D4F1EB1101(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass16_0_U3CAddTargetControllerEventsU3Eb__2_m4C44677918FC928FD24271BF68BE70399973EC32_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		ObjectTargetController_add_TargetLoad_m8C34E94866C0354A070331B5FE1C383828C8AF57(L_17, L_19, NULL);
		// controller.TargetUnload += (Target target, bool status) =>
		// {
		//     loadstatus = status ? false : loadstatus;
		//     Debug.LogFormat("Unload target {{id = {0}, name = {1}}} => {2}", target.runtimeID(), target.name(), status);
		// };
		U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* L_20 = V_0;
		NullCheck(L_20);
		ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* L_21 = L_20->___controller_0;
		U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* L_22 = V_0;
		Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* L_23 = (Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416*)il2cpp_codegen_object_new(Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_2__ctor_m0D18FC0D2E5634CBDC24690398EE59D4F1EB1101(L_23, L_22, (intptr_t)((void*)U3CU3Ec__DisplayClass16_0_U3CAddTargetControllerEventsU3Eb__3_m518CBC7DD1616251C4264343E3AA472919AB9C6E_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		ObjectTargetController_add_TargetUnload_mA40853B603DD443FDA0461573E438DC5C7C92880(L_21, L_23, NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void ObjectTracking.ObjectTrackingSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTrackingSample__ctor_m03989F53974BA7A0568869AE7E1EE2A95688FD93 (ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* __this, const RuntimeMethod* method) 
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
// System.Void ObjectTracking.ObjectTrackingSample/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mC04F69AD2A2FBD4153037313D050E175A3B56CCD (U3CU3Ec__DisplayClass7_0_t1F11922716FE4B2C2ECB9FDEA63AE42AE0E9C75F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ObjectTracking.ObjectTrackingSample/<>c__DisplayClass7_0::<Awake>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CAwakeU3Eb__0_m37FDE822E1337D7E15ADFDCF608FCD059A6660D0 (U3CU3Ec__DisplayClass7_0_t1F11922716FE4B2C2ECB9FDEA63AE42AE0E9C75F* __this, const RuntimeMethod* method) 
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
// System.Void ObjectTracking.ObjectTrackingSample/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m077088D20E9546064B770BF64E629613D4F06AB2 (U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ObjectTracking.ObjectTrackingSample/<>c__DisplayClass16_0::<AddTargetControllerEvents>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CAddTargetControllerEventsU3Eb__0_m997C511B6175B6FE0AB006DFBCD8376453A7E197 (U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* __this, const RuntimeMethod* method) 
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
		ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* L_2 = __this->___controller_0;
		NullCheck(L_2);
		ObjectTarget_t3A3463C5371DB932B7DCAA1EE9BEECC47EE97561* L_3;
		L_3 = ObjectTargetController_get_Target_m68ACD08B1961274389988847AB9C00725BF35FD1_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 easyar.Target::runtimeID() */, L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_1;
		ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* L_8 = __this->___controller_0;
		NullCheck(L_8);
		ObjectTarget_t3A3463C5371DB932B7DCAA1EE9BEECC47EE97561* L_9;
		L_9 = ObjectTargetController_get_Target_m68ACD08B1961274389988847AB9C00725BF35FD1_inline(L_8, NULL);
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
// System.Void ObjectTracking.ObjectTrackingSample/<>c__DisplayClass16_0::<AddTargetControllerEvents>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CAddTargetControllerEventsU3Eb__1_m737DD7BF7E2BB0416E6C6E34DA2F5A10FBAC9FE3 (U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* __this, const RuntimeMethod* method) 
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
		ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* L_2 = __this->___controller_0;
		NullCheck(L_2);
		ObjectTarget_t3A3463C5371DB932B7DCAA1EE9BEECC47EE97561* L_3;
		L_3 = ObjectTargetController_get_Target_m68ACD08B1961274389988847AB9C00725BF35FD1_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 easyar.Target::runtimeID() */, L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_1;
		ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* L_8 = __this->___controller_0;
		NullCheck(L_8);
		ObjectTarget_t3A3463C5371DB932B7DCAA1EE9BEECC47EE97561* L_9;
		L_9 = ObjectTargetController_get_Target_m68ACD08B1961274389988847AB9C00725BF35FD1_inline(L_8, NULL);
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
// System.Void ObjectTracking.ObjectTrackingSample/<>c__DisplayClass16_0::<AddTargetControllerEvents>b__2(easyar.Target,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CAddTargetControllerEventsU3Eb__2_m4C44677918FC928FD24271BF68BE70399973EC32 (U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* __this, Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* ___target0, bool ___status1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral073781D4E1CCD334CF2D6B9A7845F6606D15E096);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* G_B2_0 = NULL;
	ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* G_B3_1 = NULL;
	{
		// loadstatus = status ? true : loadstatus;
		ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* L_0 = __this->___U3CU3E4__this_1;
		bool L_1 = ___status1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0017;
		}
	}
	{
		ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* L_2 = __this->___U3CU3E4__this_1;
		NullCheck(L_2);
		bool L_3 = L_2->___loadstatus_10;
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->___loadstatus_10 = (bool)G_B3_0;
		// Debug.LogFormat("Load target {{id = {0}, name = {1}}} into {2} => {3}", target.runtimeID(), target.name(), controller.Tracker.name, status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* L_6 = ___target0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 easyar.Target::runtimeID() */, L_6);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_5;
		Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* L_11 = ___target0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String easyar.Target::name() */, L_11);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_10;
		ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* L_14 = __this->___controller_0;
		NullCheck(L_14);
		ObjectTrackerFrameFilter_t9A3F8B9F26D5021DEC972A8AD994AA405A1020FC* L_15;
		L_15 = ObjectTargetController_get_Tracker_m29D2CE3DE8759D95F3F6B57A86AFF0CF0FDE1229(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_15, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		bool L_18 = ___status1;
		bool L_19 = L_18;
		RuntimeObject* L_20 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteral073781D4E1CCD334CF2D6B9A7845F6606D15E096, L_17, NULL);
		// };
		return;
	}
}
// System.Void ObjectTracking.ObjectTrackingSample/<>c__DisplayClass16_0::<AddTargetControllerEvents>b__3(easyar.Target,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CAddTargetControllerEventsU3Eb__3_m518CBC7DD1616251C4264343E3AA472919AB9C6E (U3CU3Ec__DisplayClass16_0_tA9686A748C0A0FFE910E7D53C951CAA4D11A1B68* __this, Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* ___target0, bool ___status1, const RuntimeMethod* method) 
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
	ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* G_B2_0 = NULL;
	ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* G_B3_1 = NULL;
	{
		// loadstatus = status ? false : loadstatus;
		ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* L_0 = __this->___U3CU3E4__this_1;
		bool L_1 = ___status1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0017;
		}
	}
	{
		ObjectTrackingSample_t607AC4857DB9FE35837F48CAC4F77D675AEE8605* L_2 = __this->___U3CU3E4__this_1;
		NullCheck(L_2);
		bool L_3 = L_2->___loadstatus_10;
		G_B3_0 = ((int32_t)(L_3));
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		G_B3_1->___loadstatus_10 = (bool)G_B3_0;
		// Debug.LogFormat("Unload target {{id = {0}, name = {1}}} => {2}", target.runtimeID(), target.name(), status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* L_6 = ___target0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 easyar.Target::runtimeID() */, L_6);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_5;
		Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* L_11 = ___target0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String easyar.Target::name() */, L_11);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_10;
		bool L_14 = ___status1;
		bool L_15 = L_14;
		RuntimeObject* L_16 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_16);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_m31E062CF69D0196C076CAC90DB268291B012E93B(_stringLiteralF716B0D4627FA118D23A0EBFC6830217C9CC2C23, L_13, NULL);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* CameraDeviceFrameSource_get_Device_mFBF96962AC6D4A698F2F9586D28AF1654B7F0708_inline (CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* __this, const RuntimeMethod* method) 
{
	{
		// public CameraDevice Device { get; private set; }
		CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_0 = __this->___U3CDeviceU3Ek__BackingField_11;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectTarget_t3A3463C5371DB932B7DCAA1EE9BEECC47EE97561* ObjectTargetController_get_Target_m68ACD08B1961274389988847AB9C00725BF35FD1_inline (ObjectTargetController_t48B32473B80F782C65609F8050CF308590D0DEE8* __this, const RuntimeMethod* method) 
{
	{
		// public ObjectTarget Target { get; private set; }
		ObjectTarget_t3A3463C5371DB932B7DCAA1EE9BEECC47EE97561* L_0 = __this->___U3CTargetU3Ek__BackingField_11;
		return L_0;
	}
}
