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

// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<easyar.OutputFrame>
struct Action_1_t51C09D97035A969C5BE8AD3814D3435DFCBC7D36;
// System.Action`1<easyar.ARSession/SessionState>
struct Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4;
// System.Action`2<UnityEngine.Camera,UnityEngine.RenderTexture>
struct Action_2_t277AE85006B08FF17CAFB370BCF5563F5D9C8A1F;
// System.Action`2<UnityEngine.Material,UnityEngine.Vector2>
struct Action_2_t18A4876EE3337940FFE3C859DA0AA75A16B719CA;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,easyar.CameraImageRenderer>
struct Dictionary_2_t6E6BBE1387E58DA634F58ACFCF79515A16B504F3;
// System.Collections.Generic.IReadOnlyList`1<easyar.ARSession/ARCenterMode>
struct IReadOnlyList_1_t9AB3615049907C1504F1427696C3B8E984BF4244;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Tuple`2<System.Boolean,easyar.Optional`1<System.Tuple`2<easyar.MotionTrackingStatus,UnityEngine.Pose>>>
struct Tuple_2_tD39566EEAAD3069AEF6436718B3A118344EF7CA6;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Rendering.CameraEvent[]
struct CameraEventU5BU5D_tCE64254E9E2B285C33AE3AA6C3D1E9AA3BE6CE1E;
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
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// easyar.CameraDevice
struct CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE;
// easyar.CameraDeviceFrameSource
struct CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92;
// easyar.CameraImageMaterial
struct CameraImageMaterial_t71DBE936806DA72BF211659270248F5A245AB676;
// easyar.CameraImageRenderer
struct CameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078;
// easyar.CameraParameters
struct CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
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
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// easyar.RenderCameraController
struct RenderCameraController_t9D339F375620BCA2966E655CB4BA18AFF9F43C58;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
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
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// Camera_VideoCamera.VideoCameraSample
struct VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// easyar.ARSession/FrameChangeAction
struct FrameChangeAction_t22915014AF19BCD5BA244E1A821751FAC6A2C2B3;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// easyar.CameraImageRenderer/UserRequest
struct UserRequest_t50ED9EC59E68CA01BE9BF5028C274640DEFDF00D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// easyar.RefBase/Retainer
struct Retainer_t21E37A78A5C591A4A1DB7494A454CCADF411A77A;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// Camera_VideoCamera.VideoCameraSample/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC;

IL2CPP_EXTERN_C RuntimeClass* ARHorizontalFlipMode_t0888C527184463302C2CABECD652A11262DE665F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t277AE85006B08FF17CAFB370BCF5563F5D9C8A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraDeviceType_tEC0A6DFD43DF3C16C24B7D9C5EBB74E957A7694E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05CD887F615D875D8D276E57FE6EA68A4DA458B4;
IL2CPP_EXTERN_C String_t* _stringLiteral129E27933EBCC7774D12D37FFC6A1D2AAB54AB8F;
IL2CPP_EXTERN_C String_t* _stringLiteral24384261B6324D1B1FACC1EBCBFAEC5E59A0062B;
IL2CPP_EXTERN_C String_t* _stringLiteral4F7DE74F99B6338618F228CD7E679EC5BEE1EFDE;
IL2CPP_EXTERN_C String_t* _stringLiteral5096769B2DA466CF8E0D95E993216F790CC53AB2;
IL2CPP_EXTERN_C String_t* _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73;
IL2CPP_EXTERN_C String_t* _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
IL2CPP_EXTERN_C String_t* _stringLiteral7A71A119AB19DAEDD0B973DCB57AA0B794DBFBBA;
IL2CPP_EXTERN_C String_t* _stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5;
IL2CPP_EXTERN_C String_t* _stringLiteral9781C415DF8DCDF90F2B330680B9D230ED6E94EF;
IL2CPP_EXTERN_C String_t* _stringLiteralF3321FF8A2D6AF3C2BA8823FDD47C4943DA2CE5D;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_mF214FDEBEA8E0FC2DA97E3E2A697864FBD5DC20F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078_m0CCEC4432A457723F0532E9BECF888CCE68E9BE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CAwakeU3Eb__0_m0DD9D36647C5DCC5922BF40BC40F6CD4D62949C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CAwakeU3Eb__1_mEBAE2B4E1D825795B985836F04DB1340C7AD7A68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CAwakeU3Eb__2_m3C4E131FDDFB1A56D1E50E170118291FC6AC305A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2C2509A4859DD4F80EF9915C86F3CB1BA1939616 
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

// Camera_VideoCamera.VideoCameraSample/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC  : public RuntimeObject
{
	// Camera_VideoCamera.VideoCameraSample Camera_VideoCamera.VideoCameraSample/<>c__DisplayClass9_0::<>4__this
	VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* ___U3CU3E4__this_0;
	// System.String Camera_VideoCamera.VideoCameraSample/<>c__DisplayClass9_0::launcher
	String_t* ___launcher_1;
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

// easyar.Optional`1<UnityEngine.RenderTexture>
struct Optional_1_tA5DF3E7EEEFCADFC2F37F8D67FAE65A139B559C4 
{
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 ___None_1;
	// T easyar.Optional`1::Some
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___Some_2;
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

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Action`2<UnityEngine.Camera,UnityEngine.RenderTexture>
struct Action_2_t277AE85006B08FF17CAFB370BCF5563F5D9C8A1F  : public MulticastDelegate_t
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

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
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

// easyar.CameraImageRenderer
struct CameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera easyar.CameraImageRenderer::targetCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___targetCamera_5;
	// UnityEngine.Rendering.CommandBuffer easyar.CameraImageRenderer::commandBuffer
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___commandBuffer_6;
	// easyar.CameraImageMaterial easyar.CameraImageRenderer::arMaterial
	CameraImageMaterial_t71DBE936806DA72BF211659270248F5A245AB676* ___arMaterial_7;
	// UnityEngine.Material easyar.CameraImageRenderer::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	// easyar.CameraParameters easyar.CameraImageRenderer::cameraParameters
	CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* ___cameraParameters_9;
	// System.Boolean easyar.CameraImageRenderer::renderImageHFlip
	bool ___renderImageHFlip_10;
	// easyar.CameraImageRenderer/UserRequest easyar.CameraImageRenderer::request
	UserRequest_t50ED9EC59E68CA01BE9BF5028C274640DEFDF00D* ___request_11;
	// easyar.ARSession easyar.CameraImageRenderer::arSession
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* ___arSession_12;
	// System.Boolean easyar.CameraImageRenderer::invertCulling
	bool ___invertCulling_13;
	// System.Boolean easyar.CameraImageRenderer::invertCullingChanged
	bool ___invertCullingChanged_14;
	// System.Action`2<UnityEngine.Material,UnityEngine.Vector2> easyar.CameraImageRenderer::OnFrameRenderUpdate
	Action_2_t18A4876EE3337940FFE3C859DA0AA75A16B719CA* ___OnFrameRenderUpdate_16;
	// System.Action`2<UnityEngine.Camera,UnityEngine.RenderTexture> easyar.CameraImageRenderer::TargetTextureChange
	Action_2_t277AE85006B08FF17CAFB370BCF5563F5D9C8A1F* ___TargetTextureChange_17;
	// easyar.Optional`1<UnityEngine.RenderTexture> easyar.CameraImageRenderer::<UserTexture>k__BackingField
	Optional_1_tA5DF3E7EEEFCADFC2F37F8D67FAE65A139B559C4 ___U3CUserTextureU3Ek__BackingField_18;
};

struct CameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078_StaticFields
{
	// UnityEngine.Rendering.CameraEvent[] easyar.CameraImageRenderer::cameraEvents
	CameraEventU5BU5D_tCE64254E9E2B285C33AE3AA6C3D1E9AA3BE6CE1E* ___cameraEvents_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,easyar.CameraImageRenderer> easyar.CameraImageRenderer::allRenderers
	Dictionary_2_t6E6BBE1387E58DA634F58ACFCF79515A16B504F3* ___allRenderers_15;
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

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Camera_VideoCamera.VideoCameraSample
struct VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// easyar.ARSession Camera_VideoCamera.VideoCameraSample::arSession
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* ___arSession_4;
	// UnityEngine.MeshRenderer Camera_VideoCamera.VideoCameraSample::CubeRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___CubeRenderer_5;
	// UnityEngine.UI.Text Camera_VideoCamera.VideoCameraSample::CameraStatus
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___CameraStatus_6;
	// UnityEngine.UI.Toggle Camera_VideoCamera.VideoCameraSample::FlipSwitch
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___FlipSwitch_7;
	// UnityEngine.UI.Button Camera_VideoCamera.VideoCameraSample::BackButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___BackButton_8;
	// easyar.CameraDeviceFrameSource Camera_VideoCamera.VideoCameraSample::videoCamera
	CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* ___videoCamera_9;
	// easyar.CameraImageRenderer Camera_VideoCamera.VideoCameraSample::cameraRenderer
	CameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078* ___cameraRenderer_10;
	// UnityEngine.Texture Camera_VideoCamera.VideoCameraSample::cubeTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___cubeTexture_11;
	// System.Action`2<UnityEngine.Camera,UnityEngine.RenderTexture> Camera_VideoCamera.VideoCameraSample::targetTextureEventHandler
	Action_2_t277AE85006B08FF17CAFB370BCF5563F5D9C8A1F* ___targetTextureEventHandler_12;
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

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
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


// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void Camera_VideoCamera.VideoCameraSample/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m957FBE1E318645767259D0531D3A7FD635A5AA34 (U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<easyar.CameraDeviceFrameSource>()
inline CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* Component_GetComponentInChildren_TisCameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_mF214FDEBEA8E0FC2DA97E3E2A697864FBD5DC20F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<easyar.CameraImageRenderer>()
inline CameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078* Component_GetComponentInChildren_TisCameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078_m0CCEC4432A457723F0532E9BECF888CCE68E9BE0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.Camera,UnityEngine.RenderTexture>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mE684CDEF33AB3661BF908636B6F5937B40669BE5 (Action_2_t277AE85006B08FF17CAFB370BCF5563F5D9C8A1F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t277AE85006B08FF17CAFB370BCF5563F5D9C8A1F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void easyar.CameraDeviceFrameSource::add_DeviceOpened(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraDeviceFrameSource_add_DeviceOpened_mC07B3BB07D1B47CC045B017E14C283A07C589F8F (CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
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
// easyar.CameraDevice easyar.CameraDeviceFrameSource::get_Device()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* CameraDeviceFrameSource_get_Device_mFBF96962AC6D4A698F2F9586D28AF1654B7F0708_inline (CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 easyar.CameraDevice::cameraCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraDevice_cameraCount_mEB52B8E4E10962E6687A667356587F4803CFF1F7 (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void easyar.GUIPopup::EnqueueMessage(System.String,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIPopup_EnqueueMessage_mE38C2A9433BEC0EDF3015528068A89C522B85139 (String_t* ___message0, float ___seconds1, bool ___isFatal2, const RuntimeMethod* method) ;
// System.Void easyar.CameraDeviceFrameSource::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraDeviceFrameSource_Close_m793AEC528A686677A144635A43D6169693D8C91F (CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void easyar.CameraDeviceFrameSource::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraDeviceFrameSource_Open_mE2216EE221BA2AE360C82DCEAF46D15F5C8A5C64 (CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* __this, const RuntimeMethod* method) ;
// System.Void easyar.CameraImageRenderer::RequestTargetTexture(System.Action`2<UnityEngine.Camera,UnityEngine.RenderTexture>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageRenderer_RequestTargetTexture_m72CEA2C6573A1796C51105382DD370453DC0E07A (CameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078* __this, Action_2_t277AE85006B08FF17CAFB370BCF5563F5D9C8A1F* ___targetTextureEventHandler0, const RuntimeMethod* method) ;
// System.Void easyar.CameraImageRenderer::DropTargetTexture(System.Action`2<UnityEngine.Camera,UnityEngine.RenderTexture>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraImageRenderer_DropTargetTexture_m37C9902FC34AB9975CF6CCE899706B90BF1DA88F (CameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078* __this, Action_2_t277AE85006B08FF17CAFB370BCF5563F5D9C8A1F* ___targetTextureEventHandler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
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
// System.Void Camera_VideoCamera.VideoCameraSample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCameraSample_Awake_m2B34841D8C7F0D36D6DE42608EB6F64A85FC170E (VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t277AE85006B08FF17CAFB370BCF5563F5D9C8A1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_mF214FDEBEA8E0FC2DA97E3E2A697864FBD5DC20F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078_m0CCEC4432A457723F0532E9BECF888CCE68E9BE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CAwakeU3Eb__0_m0DD9D36647C5DCC5922BF40BC40F6CD4D62949C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CAwakeU3Eb__1_mEBAE2B4E1D825795B985836F04DB1340C7AD7A68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CAwakeU3Eb__2_m3C4E131FDDFB1A56D1E50E170118291FC6AC305A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC* V_0 = NULL;
	bool V_1 = false;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC* L_0 = (U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_m957FBE1E318645767259D0531D3A7FD635A5AA34(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// videoCamera = arSession.GetComponentInChildren<CameraDeviceFrameSource>();
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_2 = __this->___arSession_4;
		NullCheck(L_2);
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_3;
		L_3 = Component_GetComponentInChildren_TisCameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_mF214FDEBEA8E0FC2DA97E3E2A697864FBD5DC20F(L_2, Component_GetComponentInChildren_TisCameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92_mF214FDEBEA8E0FC2DA97E3E2A697864FBD5DC20F_RuntimeMethod_var);
		__this->___videoCamera_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___videoCamera_9), (void*)L_3);
		// cameraRenderer = arSession.GetComponentInChildren<CameraImageRenderer>();
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_4 = __this->___arSession_4;
		NullCheck(L_4);
		CameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078* L_5;
		L_5 = Component_GetComponentInChildren_TisCameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078_m0CCEC4432A457723F0532E9BECF888CCE68E9BE0(L_4, Component_GetComponentInChildren_TisCameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078_m0CCEC4432A457723F0532E9BECF888CCE68E9BE0_RuntimeMethod_var);
		__this->___cameraRenderer_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraRenderer_10), (void*)L_5);
		// cubeTexture = CubeRenderer.material.mainTexture;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_6 = __this->___CubeRenderer_5;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_6, NULL);
		NullCheck(L_7);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8;
		L_8 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_7, NULL);
		__this->___cubeTexture_11 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cubeTexture_11), (void*)L_8);
		// targetTextureEventHandler = (camera, texture) =>
		// {
		//     if (texture)
		//     {
		//         CubeRenderer.material.mainTexture = texture;
		//     }
		//     else
		//     {
		//         CubeRenderer.material.mainTexture = cubeTexture;
		//         CubeRenderer.transform.localScale = new Vector3(1, 1, 1);
		//     }
		// };
		U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC* L_9 = V_0;
		Action_2_t277AE85006B08FF17CAFB370BCF5563F5D9C8A1F* L_10 = (Action_2_t277AE85006B08FF17CAFB370BCF5563F5D9C8A1F*)il2cpp_codegen_object_new(Action_2_t277AE85006B08FF17CAFB370BCF5563F5D9C8A1F_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_2__ctor_mE684CDEF33AB3661BF908636B6F5937B40669BE5(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CAwakeU3Eb__0_m0DD9D36647C5DCC5922BF40BC40F6CD4D62949C8_RuntimeMethod_var), NULL);
		__this->___targetTextureEventHandler_12 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetTextureEventHandler_12), (void*)L_10);
		// videoCamera.DeviceOpened += () =>
		// {
		//     if (videoCamera.Device == null)
		//     {
		//         return;
		//     }
		//     var flip = videoCamera.Device.type() == CameraDeviceType.Front ? arSession.HorizontalFlipFront : arSession.HorizontalFlipNormal;
		//     FlipSwitch.isOn = flip == ARSession.ARHorizontalFlipMode.World;
		// };
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_11 = __this->___videoCamera_9;
		U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC* L_12 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CAwakeU3Eb__1_mEBAE2B4E1D825795B985836F04DB1340C7AD7A68_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		CameraDeviceFrameSource_add_DeviceOpened_mC07B3BB07D1B47CC045B017E14C283A07C589F8F(L_11, L_13, NULL);
		// var launcher = "AllSamplesLauncher";
		U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC* L_14 = V_0;
		NullCheck(L_14);
		L_14->___launcher_1 = _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___launcher_1), (void*)_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		// if (Application.CanStreamedLevelBeLoaded(launcher))
		U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = L_15->___launcher_1;
		bool L_17;
		L_17 = Application_CanStreamedLevelBeLoaded_mA1BAA60593E8679BAFA6A16595166774AE172ADC(L_16, NULL);
		V_1 = L_17;
		bool L_18 = V_1;
		if (!L_18)
		{
			goto IL_00b2;
		}
	}
	{
		// var button = BackButton.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_19 = __this->___BackButton_8;
		NullCheck(L_19);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_20;
		L_20 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_19, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		V_2 = L_20;
		// button.onClick.AddListener(() => { UnityEngine.SceneManagement.SceneManager.LoadScene(launcher); });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21 = V_2;
		NullCheck(L_21);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_22;
		L_22 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_21, NULL);
		U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC* L_23 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_24 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CAwakeU3Eb__2_m3C4E131FDDFB1A56D1E50E170118291FC6AC305A_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_22, L_24, NULL);
		goto IL_00c6;
	}

IL_00b2:
	{
		// BackButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_25 = __this->___BackButton_8;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)0, NULL);
	}

IL_00c6:
	{
		// }
		return;
	}
}
// System.Void Camera_VideoCamera.VideoCameraSample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCameraSample_Update_m98E93204ED1B775B6A85D2E4CDC80A9BCEE9B300 (VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARHorizontalFlipMode_t0888C527184463302C2CABECD652A11262DE665F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraDeviceType_tEC0A6DFD43DF3C16C24B7D9C5EBB74E957A7694E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral129E27933EBCC7774D12D37FFC6A1D2AAB54AB8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24384261B6324D1B1FACC1EBCBFAEC5E59A0062B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F7DE74F99B6338618F228CD7E679EC5BEE1EFDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5096769B2DA466CF8E0D95E993216F790CC53AB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A71A119AB19DAEDD0B973DCB57AA0B794DBFBBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3321FF8A2D6AF3C2BA8823FDD47C4943DA2CE5D);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_4 = NULL;
	int32_t G_B8_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B8_3 = NULL;
	int32_t G_B7_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B7_3 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B9_4 = NULL;
	{
		// if (videoCamera.Device == null)
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_0 = __this->___videoCamera_9;
		NullCheck(L_0);
		CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_1;
		L_1 = CameraDeviceFrameSource_get_Device_mFBF96962AC6D4A698F2F9586D28AF1654B7F0708_inline(L_0, NULL);
		V_0 = (bool)((((RuntimeObject*)(CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// CameraStatus.text = "Camera: Unavailable";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___CameraStatus_6;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteralF3321FF8A2D6AF3C2BA8823FDD47C4943DA2CE5D);
		// return;
		goto IL_0190;
	}

IL_002a:
	{
		// using (var cameraParameters = videoCamera.Device.cameraParameters())
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_4 = __this->___videoCamera_9;
		NullCheck(L_4);
		CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_5;
		L_5 = CameraDeviceFrameSource_get_Device_mFBF96962AC6D4A698F2F9586D28AF1654B7F0708_inline(L_4, NULL);
		NullCheck(L_5);
		CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_6;
		L_6 = VirtualFuncInvoker0< CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* >::Invoke(21 /* easyar.CameraParameters easyar.CameraDevice::cameraParameters() */, L_5);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0135:
			{// begin finally (depth: 1)
				{
					CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_7 = V_1;
					if (!L_7)
					{
						goto IL_013f;
					}
				}
				{
					CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_8 = V_1;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_013f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// CameraStatus.text = "Camera: " + (videoCamera.enabled ? "On" : "Off") + Environment.NewLine +
				//     "Camera Index: " + videoCamera.Device.index() + Environment.NewLine +
				//     "Camera Count: " + CameraDevice.cameraCount() + Environment.NewLine +
				//     "Camera Type: " + cameraParameters.cameraDeviceType() + Environment.NewLine +
				//     "HorizontalFlip: " + (cameraParameters.cameraDeviceType() == CameraDeviceType.Front ? arSession.HorizontalFlipFront : arSession.HorizontalFlipNormal);
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___CameraStatus_6;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
				NullCheck(L_11);
				ArrayElementTypeCheck (L_11, _stringLiteral7A71A119AB19DAEDD0B973DCB57AA0B794DBFBBA);
				(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7A71A119AB19DAEDD0B973DCB57AA0B794DBFBBA);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
				CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_13 = __this->___videoCamera_9;
				NullCheck(L_13);
				bool L_14;
				L_14 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_13, NULL);
				G_B4_0 = 1;
				G_B4_1 = L_12;
				G_B4_2 = L_12;
				G_B4_3 = L_9;
				if (L_14)
				{
					G_B5_0 = 1;
					G_B5_1 = L_12;
					G_B5_2 = L_12;
					G_B5_3 = L_9;
					goto IL_0067_1;
				}
			}
			{
				G_B6_0 = _stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5;
				G_B6_1 = G_B4_0;
				G_B6_2 = G_B4_1;
				G_B6_3 = G_B4_2;
				G_B6_4 = G_B4_3;
				goto IL_006c_1;
			}

IL_0067_1:
			{
				G_B6_0 = _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73;
				G_B6_1 = G_B5_0;
				G_B6_2 = G_B5_1;
				G_B6_3 = G_B5_2;
				G_B6_4 = G_B5_3;
			}

IL_006c_1:
			{
				NullCheck(G_B6_2);
				ArrayElementTypeCheck (G_B6_2, G_B6_0);
				(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = G_B6_3;
				String_t* L_16;
				L_16 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
				NullCheck(L_15);
				ArrayElementTypeCheck (L_15, L_16);
				(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_16);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, _stringLiteral4F7DE74F99B6338618F228CD7E679EC5BEE1EFDE);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral4F7DE74F99B6338618F228CD7E679EC5BEE1EFDE);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
				CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_19 = __this->___videoCamera_9;
				NullCheck(L_19);
				CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_20;
				L_20 = CameraDeviceFrameSource_get_Device_mFBF96962AC6D4A698F2F9586D28AF1654B7F0708_inline(L_19, NULL);
				NullCheck(L_20);
				int32_t L_21;
				L_21 = VirtualFuncInvoker0< int32_t >::Invoke(19 /* System.Int32 easyar.CameraDevice::index() */, L_20);
				V_2 = L_21;
				String_t* L_22;
				L_22 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, L_22);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_22);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_18;
				String_t* L_24;
				L_24 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
				NullCheck(L_23);
				ArrayElementTypeCheck (L_23, L_24);
				(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_24);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_23;
				NullCheck(L_25);
				ArrayElementTypeCheck (L_25, _stringLiteral129E27933EBCC7774D12D37FFC6A1D2AAB54AB8F);
				(L_25)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral129E27933EBCC7774D12D37FFC6A1D2AAB54AB8F);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
				int32_t L_27;
				L_27 = CameraDevice_cameraCount_mEB52B8E4E10962E6687A667356587F4803CFF1F7(NULL);
				V_2 = L_27;
				String_t* L_28;
				L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, L_28);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_28);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_26;
				String_t* L_30;
				L_30 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
				NullCheck(L_29);
				ArrayElementTypeCheck (L_29, L_30);
				(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_30);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_29;
				NullCheck(L_31);
				ArrayElementTypeCheck (L_31, _stringLiteral5096769B2DA466CF8E0D95E993216F790CC53AB2);
				(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral5096769B2DA466CF8E0D95E993216F790CC53AB2);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
				CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_33 = V_1;
				NullCheck(L_33);
				int32_t L_34;
				L_34 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* easyar.CameraDeviceType easyar.CameraParameters::cameraDeviceType() */, L_33);
				V_3 = L_34;
				Il2CppFakeBox<int32_t> L_35(CameraDeviceType_tEC0A6DFD43DF3C16C24B7D9C5EBB74E957A7694E_il2cpp_TypeInfo_var, (&V_3));
				String_t* L_36;
				L_36 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_35), NULL);
				NullCheck(L_32);
				ArrayElementTypeCheck (L_32, L_36);
				(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_36);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_32;
				String_t* L_38;
				L_38 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
				NullCheck(L_37);
				ArrayElementTypeCheck (L_37, L_38);
				(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_38);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_37;
				NullCheck(L_39);
				ArrayElementTypeCheck (L_39, _stringLiteral24384261B6324D1B1FACC1EBCBFAEC5E59A0062B);
				(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral24384261B6324D1B1FACC1EBCBFAEC5E59A0062B);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
				CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_41 = V_1;
				NullCheck(L_41);
				int32_t L_42;
				L_42 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* easyar.CameraDeviceType easyar.CameraParameters::cameraDeviceType() */, L_41);
				G_B7_0 = ((int32_t)13);
				G_B7_1 = L_40;
				G_B7_2 = L_40;
				G_B7_3 = G_B6_4;
				if ((((int32_t)L_42) == ((int32_t)2)))
				{
					G_B8_0 = ((int32_t)13);
					G_B8_1 = L_40;
					G_B8_2 = L_40;
					G_B8_3 = G_B6_4;
					goto IL_010c_1;
				}
			}
			{
				ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_43 = __this->___arSession_4;
				NullCheck(L_43);
				int32_t L_44 = L_43->___HorizontalFlipNormal_5;
				G_B9_0 = L_44;
				G_B9_1 = G_B7_0;
				G_B9_2 = G_B7_1;
				G_B9_3 = G_B7_2;
				G_B9_4 = G_B7_3;
				goto IL_0117_1;
			}

IL_010c_1:
			{
				ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_45 = __this->___arSession_4;
				NullCheck(L_45);
				int32_t L_46 = L_45->___HorizontalFlipFront_6;
				G_B9_0 = L_46;
				G_B9_1 = G_B8_0;
				G_B9_2 = G_B8_1;
				G_B9_3 = G_B8_2;
				G_B9_4 = G_B8_3;
			}

IL_0117_1:
			{
				V_4 = G_B9_0;
				Il2CppFakeBox<int32_t> L_47(ARHorizontalFlipMode_t0888C527184463302C2CABECD652A11262DE665F_il2cpp_TypeInfo_var, (&V_4));
				String_t* L_48;
				L_48 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_47), NULL);
				NullCheck(G_B9_2);
				ArrayElementTypeCheck (G_B9_2, L_48);
				(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)L_48);
				String_t* L_49;
				L_49 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(G_B9_3, NULL);
				NullCheck(G_B9_4);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B9_4, L_49);
				goto IL_0140;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0140:
	{
		// if (CubeRenderer.material.mainTexture != cubeTexture)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_50 = __this->___CubeRenderer_5;
		NullCheck(L_50);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_51;
		L_51 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_50, NULL);
		NullCheck(L_51);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_52;
		L_52 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_51, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_53 = __this->___cubeTexture_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_52, L_53, NULL);
		V_5 = L_54;
		bool L_55 = V_5;
		if (!L_55)
		{
			goto IL_0190;
		}
	}
	{
		// CubeRenderer.transform.localScale = new Vector3(1, (float)Screen.height / Screen.width, 1);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_56 = __this->___CubeRenderer_5;
		NullCheck(L_56);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_56, NULL);
		int32_t L_58;
		L_58 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		int32_t L_59;
		L_59 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_60), (1.0f), ((float)(((float)L_58)/((float)L_59))), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_57, L_60, NULL);
	}

IL_0190:
	{
		// }
		return;
	}
}
// System.Void Camera_VideoCamera.VideoCameraSample::NextCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCameraSample_NextCamera_mFBE06A010964A2C490BBD94F7CBBF55EB1D174FB (VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* __this, const RuntimeMethod* method) 
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
		// if (!videoCamera || videoCamera.Device == null)
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_0 = __this->___videoCamera_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_2 = __this->___videoCamera_9;
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
		// videoCamera.Close();
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_7 = __this->___videoCamera_9;
		NullCheck(L_7);
		CameraDeviceFrameSource_Close_m793AEC528A686677A144635A43D6169693D8C91F(L_7, NULL);
		// return;
		goto IL_00bd;
	}

IL_0055:
	{
		// var index = videoCamera.Device.index();
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_8 = __this->___videoCamera_9;
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
		// videoCamera.CameraOpenMethod = CameraDeviceFrameSource.CameraDeviceOpenMethod.DeviceIndex;
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_13 = __this->___videoCamera_9;
		NullCheck(L_13);
		L_13->___CameraOpenMethod_14 = 1;
		// videoCamera.CameraIndex = index;
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_14 = __this->___videoCamera_9;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		L_14->___CameraIndex_16 = L_15;
		// GUIPopup.EnqueueMessage("Switch to camera index: " + index, 3);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_17;
		L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral9781C415DF8DCDF90F2B330680B9D230ED6E94EF, L_16, NULL);
		GUIPopup_EnqueueMessage_mE38C2A9433BEC0EDF3015528068A89C522B85139(L_17, (3.0f), (bool)0, NULL);
		// videoCamera.Close();
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_18 = __this->___videoCamera_9;
		NullCheck(L_18);
		CameraDeviceFrameSource_Close_m793AEC528A686677A144635A43D6169693D8C91F(L_18, NULL);
		// videoCamera.Open();
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_19 = __this->___videoCamera_9;
		NullCheck(L_19);
		CameraDeviceFrameSource_Open_mE2216EE221BA2AE360C82DCEAF46D15F5C8A5C64(L_19, NULL);
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void Camera_VideoCamera.VideoCameraSample::Capture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCameraSample_Capture_mFE237563D82C1919130A5E1AB0A9F302A62FD79F (VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* __this, bool ___on0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (!videoCamera || videoCamera.Device == null)
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_0 = __this->___videoCamera_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_2 = __this->___videoCamera_9;
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
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		// return;
		goto IL_0057;
	}

IL_0026:
	{
		// if (on)
		bool L_5 = ___on0;
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		// cameraRenderer.RequestTargetTexture(targetTextureEventHandler);
		CameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078* L_7 = __this->___cameraRenderer_10;
		Action_2_t277AE85006B08FF17CAFB370BCF5563F5D9C8A1F* L_8 = __this->___targetTextureEventHandler_12;
		NullCheck(L_7);
		CameraImageRenderer_RequestTargetTexture_m72CEA2C6573A1796C51105382DD370453DC0E07A(L_7, L_8, NULL);
		goto IL_0055;
	}

IL_0041:
	{
		// cameraRenderer.DropTargetTexture(targetTextureEventHandler);
		CameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078* L_9 = __this->___cameraRenderer_10;
		Action_2_t277AE85006B08FF17CAFB370BCF5563F5D9C8A1F* L_10 = __this->___targetTextureEventHandler_12;
		NullCheck(L_9);
		CameraImageRenderer_DropTargetTexture_m37C9902FC34AB9975CF6CCE899706B90BF1DA88F(L_9, L_10, NULL);
	}

IL_0055:
	{
		// return;
		goto IL_0057;
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Camera_VideoCamera.VideoCameraSample::EnableCamera(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCameraSample_EnableCamera_mCBA39BCBF56F6F7EA7D5A4A5ADA315EF6E1AC6FB (VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* __this, bool ___enable0, const RuntimeMethod* method) 
{
	{
		// videoCamera.enabled = enable;
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_0 = __this->___videoCamera_9;
		bool L_1 = ___enable0;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Camera_VideoCamera.VideoCameraSample::ShowCameraImage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCameraSample_ShowCameraImage_m90AC243628A56AE3224DC61FA9413FC0BA13175E (VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* __this, bool ___show0, const RuntimeMethod* method) 
{
	{
		// cameraRenderer.enabled = show;
		CameraImageRenderer_tD369A344F7BD6A09BE29193551EA348BC22D7078* L_0 = __this->___cameraRenderer_10;
		bool L_1 = ___show0;
		NullCheck(L_0);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Camera_VideoCamera.VideoCameraSample::HFlip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCameraSample_HFlip_m52B442BB2D83295CE4A907127C3041817D96C496 (VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* __this, bool ___flip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* G_B15_0 = NULL;
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* G_B14_0 = NULL;
	int32_t G_B16_0 = 0;
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* G_B16_1 = NULL;
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* G_B19_0 = NULL;
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* G_B18_0 = NULL;
	int32_t G_B20_0 = 0;
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* G_B20_1 = NULL;
	{
		// if (!videoCamera || videoCamera.Device == null)
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_0 = __this->___videoCamera_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_2 = __this->___videoCamera_9;
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
			goto IL_0026;
		}
	}
	{
		// return;
		goto IL_008a;
	}

IL_0026:
	{
		// bool isFront = false;
		V_0 = (bool)0;
		// using (var cameraParameters = videoCamera.Device.cameraParameters())
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_5 = __this->___videoCamera_9;
		NullCheck(L_5);
		CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_6;
		L_6 = CameraDeviceFrameSource_get_Device_mFBF96962AC6D4A698F2F9586D28AF1654B7F0708_inline(L_5, NULL);
		NullCheck(L_6);
		CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_7;
		L_7 = VirtualFuncInvoker0< CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* >::Invoke(21 /* easyar.CameraParameters easyar.CameraDevice::cameraParameters() */, L_6);
		V_2 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				{
					CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_8 = V_2;
					if (!L_8)
					{
						goto IL_0058;
					}
				}
				{
					CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_9 = V_2;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_0058:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (cameraParameters.cameraDeviceType() == CameraDeviceType.Front)
				CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53* L_10 = V_2;
				NullCheck(L_10);
				int32_t L_11;
				L_11 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* easyar.CameraDeviceType easyar.CameraParameters::cameraDeviceType() */, L_10);
				V_3 = (bool)((((int32_t)L_11) == ((int32_t)2))? 1 : 0);
				bool L_12 = V_3;
				if (!L_12)
				{
					goto IL_004b_1;
				}
			}
			{
				// isFront = true;
				V_0 = (bool)1;
			}

IL_004b_1:
			{
				goto IL_0059;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0059:
	{
		// if (isFront)
		bool L_13 = V_0;
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0076;
		}
	}
	{
		// arSession.HorizontalFlipFront = flip ? ARSession.ARHorizontalFlipMode.World : ARSession.ARHorizontalFlipMode.None;
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_15 = __this->___arSession_4;
		bool L_16 = ___flip0;
		G_B14_0 = L_15;
		if (L_16)
		{
			G_B15_0 = L_15;
			goto IL_006d;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		goto IL_006e;
	}

IL_006d:
	{
		G_B16_0 = 1;
		G_B16_1 = G_B15_0;
	}

IL_006e:
	{
		NullCheck(G_B16_1);
		G_B16_1->___HorizontalFlipFront_6 = G_B16_0;
		goto IL_008a;
	}

IL_0076:
	{
		// arSession.HorizontalFlipNormal = flip ? ARSession.ARHorizontalFlipMode.World : ARSession.ARHorizontalFlipMode.None;
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_17 = __this->___arSession_4;
		bool L_18 = ___flip0;
		G_B18_0 = L_17;
		if (L_18)
		{
			G_B19_0 = L_17;
			goto IL_0083;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_0;
		goto IL_0084;
	}

IL_0083:
	{
		G_B20_0 = 1;
		G_B20_1 = G_B19_0;
	}

IL_0084:
	{
		NullCheck(G_B20_1);
		G_B20_1->___HorizontalFlipNormal_5 = G_B20_0;
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void Camera_VideoCamera.VideoCameraSample::Back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCameraSample_Back_m9E559490ECFBDCAC85D6C151B727039C04CD99A1 (VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Camera_VideoCamera.VideoCameraSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoCameraSample__ctor_m2A3B80E423A67255F31BEF5B2E0BA34B32D4BD7F (VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* __this, const RuntimeMethod* method) 
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
// System.Void Camera_VideoCamera.VideoCameraSample/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m957FBE1E318645767259D0531D3A7FD635A5AA34 (U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Camera_VideoCamera.VideoCameraSample/<>c__DisplayClass9_0::<Awake>b__0(UnityEngine.Camera,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CAwakeU3Eb__0_m0DD9D36647C5DCC5922BF40BC40F6CD4D62949C8 (U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___texture1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (texture)
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___texture1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// CubeRenderer.material.mainTexture = texture;
		VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* L_3 = __this->___U3CU3E4__this_0;
		NullCheck(L_3);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4 = L_3->___CubeRenderer_5;
		NullCheck(L_4);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_4, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = ___texture1;
		NullCheck(L_5);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_5, L_6, NULL);
		goto IL_0073;
	}

IL_0026:
	{
		// CubeRenderer.material.mainTexture = cubeTexture;
		VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* L_7 = __this->___U3CU3E4__this_0;
		NullCheck(L_7);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_8 = L_7->___CubeRenderer_5;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_8, NULL);
		VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* L_10 = __this->___U3CU3E4__this_0;
		NullCheck(L_10);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_11 = L_10->___cubeTexture_11;
		NullCheck(L_9);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_9, L_11, NULL);
		// CubeRenderer.transform.localScale = new Vector3(1, 1, 1);
		VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* L_12 = __this->___U3CU3E4__this_0;
		NullCheck(L_12);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_13 = L_12->___CubeRenderer_5;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_15, NULL);
	}

IL_0073:
	{
		// };
		return;
	}
}
// System.Void Camera_VideoCamera.VideoCameraSample/<>c__DisplayClass9_0::<Awake>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CAwakeU3Eb__1_mEBAE2B4E1D825795B985836F04DB1340C7AD7A68 (U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if (videoCamera.Device == null)
		VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_1 = L_0->___videoCamera_9;
		NullCheck(L_1);
		CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_2;
		L_2 = CameraDeviceFrameSource_get_Device_mFBF96962AC6D4A698F2F9586D28AF1654B7F0708_inline(L_1, NULL);
		V_1 = (bool)((((RuntimeObject*)(CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		goto IL_006b;
	}

IL_001b:
	{
		// var flip = videoCamera.Device.type() == CameraDeviceType.Front ? arSession.HorizontalFlipFront : arSession.HorizontalFlipNormal;
		VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* L_4 = __this->___U3CU3E4__this_0;
		NullCheck(L_4);
		CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* L_5 = L_4->___videoCamera_9;
		NullCheck(L_5);
		CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_6;
		L_6 = CameraDeviceFrameSource_get_Device_mFBF96962AC6D4A698F2F9586D28AF1654B7F0708_inline(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(20 /* easyar.CameraDeviceType easyar.CameraDevice::type() */, L_6);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* L_8 = __this->___U3CU3E4__this_0;
		NullCheck(L_8);
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_9 = L_8->___arSession_4;
		NullCheck(L_9);
		int32_t L_10 = L_9->___HorizontalFlipNormal_5;
		G_B5_0 = L_10;
		goto IL_0055;
	}

IL_0045:
	{
		VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* L_11 = __this->___U3CU3E4__this_0;
		NullCheck(L_11);
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_12 = L_11->___arSession_4;
		NullCheck(L_12);
		int32_t L_13 = L_12->___HorizontalFlipFront_6;
		G_B5_0 = L_13;
	}

IL_0055:
	{
		V_0 = G_B5_0;
		// FlipSwitch.isOn = flip == ARSession.ARHorizontalFlipMode.World;
		VideoCameraSample_t517860DCFD8B882A8B4CA9EC57F92EE446D240BA* L_14 = __this->___U3CU3E4__this_0;
		NullCheck(L_14);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_15 = L_14->___FlipSwitch_7;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_15, (bool)((((int32_t)L_16) == ((int32_t)1))? 1 : 0), NULL);
	}

IL_006b:
	{
		// };
		return;
	}
}
// System.Void Camera_VideoCamera.VideoCameraSample/<>c__DisplayClass9_0::<Awake>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CAwakeU3Eb__2_m3C4E131FDDFB1A56D1E50E170118291FC6AC305A (U3CU3Ec__DisplayClass9_0_tB39BB60C222D18F2399F9759F95CCAB7E2F770CC* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* CameraDeviceFrameSource_get_Device_mFBF96962AC6D4A698F2F9586D28AF1654B7F0708_inline (CameraDeviceFrameSource_t96C3510E9C369F5946CEBF25739FF84997FA1A92* __this, const RuntimeMethod* method) 
{
	{
		// public CameraDevice Device { get; private set; }
		CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_0 = __this->___U3CDeviceU3Ek__BackingField_11;
		return L_0;
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
