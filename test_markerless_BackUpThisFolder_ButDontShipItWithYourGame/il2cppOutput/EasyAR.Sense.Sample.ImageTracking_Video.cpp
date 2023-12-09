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

// System.Action`1<System.Byte[]>
struct Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`2<easyar.Target,System.Boolean>
struct Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<UnityEngine.Video.VideoPlayer,System.Boolean>
struct Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Video.VideoPlayer>
struct IEnumerable_1_t78210796C306D6A24C952B6BD2C8FEAE2F21BE4C;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Video.VideoPlayer>
struct List_1_tD4C3E8FC303E2A5AB5F261A4681499A36B4C50B5;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
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
// UnityEngine.Video.VideoPlayer[]
struct VideoPlayerU5BU5D_t82A7EFB216CBB0B6349FEC490A3A2E6B080C61E6;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// easyar.DelayedCallbackScheduler
struct DelayedCallbackScheduler_t7250FB4EE6119AFDCFBAC0DEADD337F1E576FD97;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// easyar.Display
struct Display_tB1D5BF85C3C9D5D143CF2406E5676281CC8C3FEE;
// easyar.EasyARController
struct EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// easyar.ImageTarget
struct ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB;
// easyar.ImageTargetController
struct ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633;
// ImageTracking_Video.ImageTargetVideoSample
struct ImageTargetVideoSample_t2E14D801134BAD3DDB3232A6F96371989261C6C9;
// easyar.ImageTrackerFrameFilter
struct ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// easyar.TargetController
struct TargetController_t8B3D4F1410E51D042DF5E9C689F5C0499E43410A;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// easyar.ThreadWorker
struct ThreadWorker_t1ADEDA9DB0A15609FBEFE467B9CC337BF57D6D36;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3;
// ImageTracking_Video.VideoPlayerAgent
struct VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// easyar.ImageTargetController/ImageFileSourceData
struct ImageFileSourceData_t6253D5079E28B45E9A0C1A7A8CFBF74267364C2B;
// easyar.ImageTargetController/TargetDataFileSourceData
struct TargetDataFileSourceData_t8A1E6462041EA1563F8FAD0E8DD979416E605C4B;
// ImageTracking_Video.ImageTargetVideoSample/<>c
struct U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90;
// ImageTracking_Video.ImageTargetVideoSample/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t2F5F0E62D2BE92BA6948CF4B7C33EBC49A41214E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// easyar.RefBase/Retainer
struct Retainer_t21E37A78A5C591A4A1DB7494A454CCADF411A77A;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E;
// ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5;
// ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F;
// ImageTracking_Video.VideoPlayerAgent/<WriteFile>d__9
struct U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t2F5F0E62D2BE92BA6948CF4B7C33EBC49A41214E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VideoAspectRatio_t6D4DCBAAAF4DF8518C7C39EAE75EEA6986AA5A47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02090BCA53E4B12D39B053F51024EDC93955BD04;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_m9E48623F3A0373B9014EDB78E8A878610F90FA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m19D8A3EC4A0BF3BDAFCF718B25FC119EFE6F6BBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m575990ECF91778F68A1CEDBCB8A8CEF41B811C51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m3D05B9124192F6B4B6F7D6BDF444DA39E77F1CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE1AAC2F046D0C31056DDF6CE457136DB0F1EB8C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m2AACCA7C908EF20499EC6770ED2D150BEDFC26C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC0480E44A90048BA12DF0B64E3CDDDD956576BCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5DFC1D56AA0AC04B86DBC6E3F5A54DE52039E49D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m512A982EE038C450AD9897E2C87CCC6E40DFA228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__3_0_mF4D9014E28D679B0A061BCFB8A857C5A6B87A8BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CAwakeU3Eb__1_m72D88BE0A3954ADD56772D02A6DDF70BA5E13D49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_m5E1B773E2DE91B37CF8F815515D1049FEC164DBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__1_m941582D6D1DF7A52DA1569A20D27A9FB406ED712_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__2_m96B85CC675BA8B73B51168F6082A3B214B8790CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__3_m6254CF323D498EDF6E3E6DCA65481593AA680B4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CWriteFileU3Eb__0_mD823B44ACCBEF3B61F66DEC40D20663DB18503FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWriteFileU3Ed__9_System_Collections_IEnumerator_Reset_mCBCBD183D0658D2A776352F92204DF3503D67ADE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* VideoAspectRatio_t6D4DCBAAAF4DF8518C7C39EAE75EEA6986AA5A47_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct VideoPlayerU5BU5D_t82A7EFB216CBB0B6349FEC490A3A2E6B080C61E6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t436CFB5A4461C857A0BD0B07F7208AF7C285C5C2 
{
};

// System.Collections.Generic.List`1<UnityEngine.Video.VideoPlayer>
struct List_1_tD4C3E8FC303E2A5AB5F261A4681499A36B4C50B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VideoPlayerU5BU5D_t82A7EFB216CBB0B6349FEC490A3A2E6B080C61E6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tD4C3E8FC303E2A5AB5F261A4681499A36B4C50B5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VideoPlayerU5BU5D_t82A7EFB216CBB0B6349FEC490A3A2E6B080C61E6* ___s_emptyArray_5;
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

// ImageTracking_Video.ImageTargetVideoSample/<>c
struct U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90  : public RuntimeObject
{
};

struct U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_StaticFields
{
	// ImageTracking_Video.ImageTargetVideoSample/<>c ImageTracking_Video.ImageTargetVideoSample/<>c::<>9
	U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Video.VideoPlayer,System.Boolean> ImageTracking_Video.ImageTargetVideoSample/<>c::<>9__3_0
	Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770* ___U3CU3E9__3_0_1;
};

// ImageTracking_Video.ImageTargetVideoSample/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t2F5F0E62D2BE92BA6948CF4B7C33EBC49A41214E  : public RuntimeObject
{
	// System.String ImageTracking_Video.ImageTargetVideoSample/<>c__DisplayClass3_0::launcher
	String_t* ___launcher_0;
};

// ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5  : public RuntimeObject
{
	// ImageTracking_Video.VideoPlayerAgent ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass8_0::<>4__this
	VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* ___U3CU3E4__this_0;
	// System.String ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass8_0::path
	String_t* ___path_1;
};

// ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F  : public RuntimeObject
{
	// System.String ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass9_0::path
	String_t* ___path_0;
	// System.Byte[] ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass9_0::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_1;
	// System.Boolean ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass9_0::finished
	bool ___finished_2;
};

// ImageTracking_Video.VideoPlayerAgent/<WriteFile>d__9
struct U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4  : public RuntimeObject
{
	// System.Int32 ImageTracking_Video.VideoPlayerAgent/<WriteFile>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ImageTracking_Video.VideoPlayerAgent/<WriteFile>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.String ImageTracking_Video.VideoPlayerAgent/<WriteFile>d__9::path
	String_t* ___path_2;
	// System.Byte[] ImageTracking_Video.VideoPlayerAgent/<WriteFile>d__9::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_3;
	// ImageTracking_Video.VideoPlayerAgent ImageTracking_Video.VideoPlayerAgent/<WriteFile>d__9::<>4__this
	VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* ___U3CU3E4__this_4;
	// ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass9_0 ImageTracking_Video.VideoPlayerAgent/<WriteFile>d__9::<>8__1
	U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F* ___U3CU3E8__1_5;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Video.VideoPlayer>
struct Enumerator_t40810FE9C359E61E7FACB7AC7571BC18178A8F0A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD4C3E8FC303E2A5AB5F261A4681499A36B4C50B5* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ____current_3;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// System.Action`1<System.Byte[]>
struct Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Video.VideoPlayer,System.Boolean>
struct Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770  : public MulticastDelegate_t
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

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411  : public MulticastDelegate_t
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* ___frameReady_11;
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

// ImageTracking_Video.ImageTargetVideoSample
struct ImageTargetVideoSample_t2E14D801134BAD3DDB3232A6F96371989261C6C9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text ImageTracking_Video.ImageTargetVideoSample::UIText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___UIText_4;
	// UnityEngine.UI.Button ImageTracking_Video.ImageTargetVideoSample::BackButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___BackButton_5;
	// System.Collections.Generic.List`1<UnityEngine.Video.VideoPlayer> ImageTracking_Video.ImageTargetVideoSample::players
	List_1_tD4C3E8FC303E2A5AB5F261A4681499A36B4C50B5* ___players_6;
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

// ImageTracking_Video.VideoPlayerAgent
struct VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ImageTracking_Video.VideoPlayerAgent::VideoInStreamingAssets
	String_t* ___VideoInStreamingAssets_4;
	// System.Boolean ImageTracking_Video.VideoPlayerAgent::FitTarget
	bool ___FitTarget_5;
	// easyar.ImageTargetController ImageTracking_Video.VideoPlayerAgent::controller
	ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* ___controller_6;
	// UnityEngine.MeshRenderer ImageTracking_Video.VideoPlayerAgent::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_7;
	// UnityEngine.Video.VideoPlayer ImageTracking_Video.VideoPlayerAgent::player
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___player_8;
	// System.Boolean ImageTracking_Video.VideoPlayerAgent::ready
	bool ___ready_9;
	// System.Boolean ImageTracking_Video.VideoPlayerAgent::prepared
	bool ___prepared_10;
	// System.Boolean ImageTracking_Video.VideoPlayerAgent::found
	bool ___found_11;
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
// UnityEngine.Video.VideoPlayer[]
struct VideoPlayerU5BU5D_t82A7EFB216CBB0B6349FEC490A3A2E6B080C61E6  : public RuntimeArray
{
	ALIGN_FIELD (8) VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* m_Items[1];

	inline VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// System.Void ImageTracking_Video.ImageTargetVideoSample/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m2353F64FE26E4527AE6B1729969D1B93D9DF545F (U3CU3Ec__DisplayClass3_0_t2F5F0E62D2BE92BA6948CF4B7C33EBC49A41214E* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Video.VideoPlayer>()
inline VideoPlayerU5BU5D_t82A7EFB216CBB0B6349FEC490A3A2E6B080C61E6* Object_FindObjectsOfType_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m512A982EE038C450AD9897E2C87CCC6E40DFA228 (const RuntimeMethod* method)
{
	return ((  VideoPlayerU5BU5D_t82A7EFB216CBB0B6349FEC490A3A2E6B080C61E6* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.Void System.Func`2<UnityEngine.Video.VideoPlayer,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m493D4FBA9463EFD1F2299334C64D551B21B8CB48 (Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<UnityEngine.Video.VideoPlayer>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m3D05B9124192F6B4B6F7D6BDF444DA39E77F1CF1 (RuntimeObject* ___source0, Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.Video.VideoPlayer>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tD4C3E8FC303E2A5AB5F261A4681499A36B4C50B5* Enumerable_ToList_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m575990ECF91778F68A1CEDBCB8A8CEF41B811C51 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tD4C3E8FC303E2A5AB5F261A4681499A36B4C50B5* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mBDB9895C2D14F2A92043507996018A329BD32A64_gshared)(___source0, method);
}
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
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Video.VideoPlayer>::GetEnumerator()
inline Enumerator_t40810FE9C359E61E7FACB7AC7571BC18178A8F0A List_1_GetEnumerator_m5DFC1D56AA0AC04B86DBC6E3F5A54DE52039E49D (List_1_tD4C3E8FC303E2A5AB5F261A4681499A36B4C50B5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t40810FE9C359E61E7FACB7AC7571BC18178A8F0A (*) (List_1_tD4C3E8FC303E2A5AB5F261A4681499A36B4C50B5*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Video.VideoPlayer>::Dispose()
inline void Enumerator_Dispose_mE1AAC2F046D0C31056DDF6CE457136DB0F1EB8C7 (Enumerator_t40810FE9C359E61E7FACB7AC7571BC18178A8F0A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t40810FE9C359E61E7FACB7AC7571BC18178A8F0A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Video.VideoPlayer>::get_Current()
inline VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* Enumerator_get_Current_mC0480E44A90048BA12DF0B64E3CDDDD956576BCD_inline (Enumerator_t40810FE9C359E61E7FACB7AC7571BC18178A8F0A* __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* (*) (Enumerator_t40810FE9C359E61E7FACB7AC7571BC18178A8F0A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.Video.VideoAspectRatio UnityEngine.Video.VideoPlayer::get_aspectRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_aspectRatio_mD9F49BCD1476FE992BDADCB241EF69562F65A249 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Video.VideoPlayer>::MoveNext()
inline bool Enumerator_MoveNext_m2AACCA7C908EF20499EC6770ED2D150BEDFC26C6 (Enumerator_t40810FE9C359E61E7FACB7AC7571BC18178A8F0A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t40810FE9C359E61E7FACB7AC7571BC18178A8F0A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293 (Type_t* ___enumType0, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_aspectRatio(UnityEngine.Video.VideoAspectRatio)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_aspectRatio_m4EDDA786C5B90040119F15FB0AC9150321B44AAE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void ImageTracking_Video.ImageTargetVideoSample/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF88CF9C8BAF4A4EF6C571F0477D05C32ADDD1006 (U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90* __this, const RuntimeMethod* method) ;
// UnityEngine.Video.VideoRenderMode UnityEngine.Video.VideoPlayer::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_renderMode_m0B65B5B6D1ED8F0F00DA0725F8E97DCD8FE75C6E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m595978A1C25B806120E8A20DD5C76811DDBAE81E (U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<easyar.ImageTargetController>()
inline ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* Component_GetComponentInParent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_m9E48623F3A0373B9014EDB78E8A878610F90FA3D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ImageTracking_Video.VideoPlayerAgent::StatusChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerAgent_StatusChanged_m1AD7328A51927A47560073F6DF40A341E9F65BB8 (VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Video.VideoPlayer>()
inline VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* Component_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m19D8A3EC4A0BF3BDAFCF718B25FC119EFE6F6BBA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Video.VideoPlayer::set_source(UnityEngine.Video.VideoSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_source_m31B8A16AF9B6FE58D5DCF549614BE6B53DE53052 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_m4DF6E61542E9D042CF1A5A1CEE75DB2D5631D4AD (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17 (const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Byte[]>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB3AA0B58E50AA1F32FD3B49CFF3441AEECF837FA (Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.IEnumerator easyar.FileUtil::LoadFile(System.String,easyar.PathType,System.Action`1<System.Byte[]>,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FileUtil_LoadFile_m81391E37EAE00EA7E8EBBF9928A25D2B71AA7C49 (String_t* ___filePath0, int32_t ___filePathType1, Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* ___onLoad2, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onError3, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_url_m02AC2BB229F9441257D62F9ACFD96D09F51B4F14 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void easyar.TargetController::add_TargetFound(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetController_add_TargetFound_mD4B9C4D3662E282B491F617E22AA14D3775AB57B (TargetController_t8B3D4F1410E51D042DF5E9C689F5C0499E43410A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void easyar.TargetController::add_TargetLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetController_add_TargetLost_mB6790A7172B5C303E3143155672D27F4BF6E4ECC (TargetController_t8B3D4F1410E51D042DF5E9C689F5C0499E43410A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_mFCF62E0BB29DD3D2B2F1306BD8657E374CF60903 (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::add_prepareCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_prepareCompleted_m4DB8843A3E3E3CFF7E361E70EA51983AF457183B (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___value0, const RuntimeMethod* method) ;
// System.Void ImageTracking_Video.VideoPlayerAgent/<WriteFile>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteFileU3Ed__9__ctor_m92028E436B52BAF9B45A20DB70BB1C2259B40839 (U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ImageTracking_Video.VideoPlayerAgent::WriteFile(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VideoPlayerAgent_WriteFile_m6074E00EF8B4D1CC1FFE56E4B9D7D2D2E220DE67 (VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* __this, String_t* ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// easyar.ImageTarget easyar.ImageTargetController::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* ImageTargetController_get_Target_m51F32E8D1467745044F011BE80719C022258BC95_inline (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702 (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668 (String_t* ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) ;
// System.Void ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mA46FA22AD7D7F47B2E5535F50D3E53EFD97E4686 (U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F* __this, const RuntimeMethod* method) ;
// easyar.EasyARController easyar.EasyARController::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177* EasyARController_get_Instance_mFD49136A56B9212987C8989B045D463D2841C295_inline (const RuntimeMethod* method) ;
// easyar.ThreadWorker easyar.EasyARController::get_Worker()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ThreadWorker_t1ADEDA9DB0A15609FBEFE467B9CC337BF57D6D36* EasyARController_get_Worker_mC0CE2BCBC0B1A9D6DCFAAE303EED4615168DD253_inline (EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177* __this, const RuntimeMethod* method) ;
// System.Void easyar.ThreadWorker::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadWorker_Run_mE19FF9BF70FEBC298AB58494630216F2FB775F03 (ThreadWorker_t1ADEDA9DB0A15609FBEFE467B9CC337BF57D6D36* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___task0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
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
// System.Void ImageTracking_Video.ImageTargetVideoSample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetVideoSample_Awake_m763611267F23E9D48932255A3A0D2DFFACC2A86E (ImageTargetVideoSample_t2E14D801134BAD3DDB3232A6F96371989261C6C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m575990ECF91778F68A1CEDBCB8A8CEF41B811C51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m3D05B9124192F6B4B6F7D6BDF444DA39E77F1CF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m512A982EE038C450AD9897E2C87CCC6E40DFA228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__3_0_mF4D9014E28D679B0A061BCFB8A857C5A6B87A8BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CAwakeU3Eb__1_m72D88BE0A3954ADD56772D02A6DDF70BA5E13D49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t2F5F0E62D2BE92BA6948CF4B7C33EBC49A41214E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t2F5F0E62D2BE92BA6948CF4B7C33EBC49A41214E* V_0 = NULL;
	bool V_1 = false;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_2 = NULL;
	Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770* G_B2_0 = NULL;
	VideoPlayerU5BU5D_t82A7EFB216CBB0B6349FEC490A3A2E6B080C61E6* G_B2_1 = NULL;
	ImageTargetVideoSample_t2E14D801134BAD3DDB3232A6F96371989261C6C9* G_B2_2 = NULL;
	Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770* G_B1_0 = NULL;
	VideoPlayerU5BU5D_t82A7EFB216CBB0B6349FEC490A3A2E6B080C61E6* G_B1_1 = NULL;
	ImageTargetVideoSample_t2E14D801134BAD3DDB3232A6F96371989261C6C9* G_B1_2 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t2F5F0E62D2BE92BA6948CF4B7C33EBC49A41214E* L_0 = (U3CU3Ec__DisplayClass3_0_t2F5F0E62D2BE92BA6948CF4B7C33EBC49A41214E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t2F5F0E62D2BE92BA6948CF4B7C33EBC49A41214E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m2353F64FE26E4527AE6B1729969D1B93D9DF545F(L_0, NULL);
		V_0 = L_0;
		// players = FindObjectsOfType<VideoPlayer>().Where(p => p.renderMode == VideoRenderMode.RenderTexture).ToList();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		VideoPlayerU5BU5D_t82A7EFB216CBB0B6349FEC490A3A2E6B080C61E6* L_1;
		L_1 = Object_FindObjectsOfType_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m512A982EE038C450AD9897E2C87CCC6E40DFA228(Object_FindObjectsOfType_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m512A982EE038C450AD9897E2C87CCC6E40DFA228_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_il2cpp_TypeInfo_var);
		Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770* L_2 = ((U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
		Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_il2cpp_TypeInfo_var);
		U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90* L_4 = ((U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770* L_5 = (Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770*)il2cpp_codegen_object_new(Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m493D4FBA9463EFD1F2299334C64D551B21B8CB48(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__3_0_mF4D9014E28D679B0A061BCFB8A857C5A6B87A8BB_RuntimeMethod_var), NULL);
		Func_2_tA2C231ED02445961AC6763D157CED6C653F8F770* L_6 = L_5;
		((U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002c:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Where_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m3D05B9124192F6B4B6F7D6BDF444DA39E77F1CF1((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m3D05B9124192F6B4B6F7D6BDF444DA39E77F1CF1_RuntimeMethod_var);
		List_1_tD4C3E8FC303E2A5AB5F261A4681499A36B4C50B5* L_8;
		L_8 = Enumerable_ToList_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m575990ECF91778F68A1CEDBCB8A8CEF41B811C51(L_7, Enumerable_ToList_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m575990ECF91778F68A1CEDBCB8A8CEF41B811C51_RuntimeMethod_var);
		NullCheck(G_B2_2);
		G_B2_2->___players_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_2->___players_6), (void*)L_8);
		// var launcher = "AllSamplesLauncher";
		U3CU3Ec__DisplayClass3_0_t2F5F0E62D2BE92BA6948CF4B7C33EBC49A41214E* L_9 = V_0;
		NullCheck(L_9);
		L_9->___launcher_0 = _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___launcher_0), (void*)_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		// if (Application.CanStreamedLevelBeLoaded(launcher))
		U3CU3Ec__DisplayClass3_0_t2F5F0E62D2BE92BA6948CF4B7C33EBC49A41214E* L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = L_10->___launcher_0;
		bool L_12;
		L_12 = Application_CanStreamedLevelBeLoaded_mA1BAA60593E8679BAFA6A16595166774AE172ADC(L_11, NULL);
		V_1 = L_12;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		// var button = BackButton.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->___BackButton_5;
		NullCheck(L_14);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_15;
		L_15 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_14, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		V_2 = L_15;
		// button.onClick.AddListener(() => { UnityEngine.SceneManagement.SceneManager.LoadScene(launcher); });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = V_2;
		NullCheck(L_16);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_17;
		L_17 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_16, NULL);
		U3CU3Ec__DisplayClass3_0_t2F5F0E62D2BE92BA6948CF4B7C33EBC49A41214E* L_18 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_19 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CAwakeU3Eb__1_m72D88BE0A3954ADD56772D02A6DDF70BA5E13D49_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_17, L_19, NULL);
		goto IL_0091;
	}

IL_007d:
	{
		// BackButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_20 = __this->___BackButton_5;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void ImageTracking_Video.ImageTargetVideoSample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetVideoSample_Update_mC67C917C3558DF6CFB877F2ED05FC06044E34624 (ImageTargetVideoSample_t2E14D801134BAD3DDB3232A6F96371989261C6C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE1AAC2F046D0C31056DDF6CE457136DB0F1EB8C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2AACCA7C908EF20499EC6770ED2D150BEDFC26C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC0480E44A90048BA12DF0B64E3CDDDD956576BCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5DFC1D56AA0AC04B86DBC6E3F5A54DE52039E49D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoAspectRatio_t6D4DCBAAAF4DF8518C7C39EAE75EEA6986AA5A47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02090BCA53E4B12D39B053F51024EDC93955BD04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t40810FE9C359E61E7FACB7AC7571BC18178A8F0A V_0;
	memset((&V_0), 0, sizeof(V_0));
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* V_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// UIText.text = "Video AspectRatio:" + Environment.NewLine;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___UIText_4;
		String_t* L_1;
		L_1 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral02090BCA53E4B12D39B053F51024EDC93955BD04, L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// foreach (var p in players)
		List_1_tD4C3E8FC303E2A5AB5F261A4681499A36B4C50B5* L_3 = __this->___players_6;
		NullCheck(L_3);
		Enumerator_t40810FE9C359E61E7FACB7AC7571BC18178A8F0A L_4;
		L_4 = List_1_GetEnumerator_m5DFC1D56AA0AC04B86DBC6E3F5A54DE52039E49D(L_3, List_1_GetEnumerator_m5DFC1D56AA0AC04B86DBC6E3F5A54DE52039E49D_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE1AAC2F046D0C31056DDF6CE457136DB0F1EB8C7((&V_0), Enumerator_Dispose_mE1AAC2F046D0C31056DDF6CE457136DB0F1EB8C7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008f_1;
			}

IL_002b_1:
			{
				// foreach (var p in players)
				VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5;
				L_5 = Enumerator_get_Current_mC0480E44A90048BA12DF0B64E3CDDDD956576BCD_inline((&V_0), Enumerator_get_Current_mC0480E44A90048BA12DF0B64E3CDDDD956576BCD_RuntimeMethod_var);
				V_1 = L_5;
				// UIText.text += "\t" + p.name + ": " + p.aspectRatio + Environment.NewLine;
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___UIText_4;
				V_2 = L_6;
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = V_2;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
				Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = V_2;
				NullCheck(L_10);
				String_t* L_11;
				L_11 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
				NullCheck(L_9);
				ArrayElementTypeCheck (L_9, L_11);
				(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_11);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_9;
				NullCheck(L_12);
				ArrayElementTypeCheck (L_12, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
				VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_14 = V_1;
				NullCheck(L_14);
				String_t* L_15;
				L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
				NullCheck(L_13);
				ArrayElementTypeCheck (L_13, L_15);
				(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_15);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_13;
				NullCheck(L_16);
				ArrayElementTypeCheck (L_16, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
				(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
				VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_18 = V_1;
				NullCheck(L_18);
				int32_t L_19;
				L_19 = VideoPlayer_get_aspectRatio_mD9F49BCD1476FE992BDADCB241EF69562F65A249(L_18, NULL);
				V_3 = L_19;
				Il2CppFakeBox<int32_t> L_20(VideoAspectRatio_t6D4DCBAAAF4DF8518C7C39EAE75EEA6986AA5A47_il2cpp_TypeInfo_var, (&V_3));
				String_t* L_21;
				L_21 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_20), NULL);
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, L_21);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_21);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_17;
				String_t* L_23;
				L_23 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
				NullCheck(L_22);
				ArrayElementTypeCheck (L_22, L_23);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_23);
				String_t* L_24;
				L_24 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_22, NULL);
				NullCheck(L_7);
				VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_24);
			}

IL_008f_1:
			{
				// foreach (var p in players)
				bool L_25;
				L_25 = Enumerator_MoveNext_m2AACCA7C908EF20499EC6770ED2D150BEDFC26C6((&V_0), Enumerator_MoveNext_m2AACCA7C908EF20499EC6770ED2D150BEDFC26C6_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_002b_1;
				}
			}
			{
				goto IL_00a9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void ImageTracking_Video.ImageTargetVideoSample::ChangeVideoAspectRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetVideoSample_ChangeVideoAspectRatio_mB3A751226DD4441A443D42B1A952CB120C5A4182 (ImageTargetVideoSample_t2E14D801134BAD3DDB3232A6F96371989261C6C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE1AAC2F046D0C31056DDF6CE457136DB0F1EB8C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m2AACCA7C908EF20499EC6770ED2D150BEDFC26C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC0480E44A90048BA12DF0B64E3CDDDD956576BCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5DFC1D56AA0AC04B86DBC6E3F5A54DE52039E49D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VideoAspectRatio_t6D4DCBAAAF4DF8518C7C39EAE75EEA6986AA5A47_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t40810FE9C359E61E7FACB7AC7571BC18178A8F0A V_0;
	memset((&V_0), 0, sizeof(V_0));
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* V_1 = NULL;
	{
		// foreach (var p in players)
		List_1_tD4C3E8FC303E2A5AB5F261A4681499A36B4C50B5* L_0 = __this->___players_6;
		NullCheck(L_0);
		Enumerator_t40810FE9C359E61E7FACB7AC7571BC18178A8F0A L_1;
		L_1 = List_1_GetEnumerator_m5DFC1D56AA0AC04B86DBC6E3F5A54DE52039E49D(L_0, List_1_GetEnumerator_m5DFC1D56AA0AC04B86DBC6E3F5A54DE52039E49D_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE1AAC2F046D0C31056DDF6CE457136DB0F1EB8C7((&V_0), Enumerator_Dispose_mE1AAC2F046D0C31056DDF6CE457136DB0F1EB8C7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003e_1;
			}

IL_0010_1:
			{
				// foreach (var p in players)
				VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2;
				L_2 = Enumerator_get_Current_mC0480E44A90048BA12DF0B64E3CDDDD956576BCD_inline((&V_0), Enumerator_get_Current_mC0480E44A90048BA12DF0B64E3CDDDD956576BCD_RuntimeMethod_var);
				V_1 = L_2;
				// p.aspectRatio = (VideoAspectRatio)(((int)p.aspectRatio + 1) % Enum.GetValues(typeof(VideoAspectRatio)).Length);
				VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = V_1;
				VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_4 = V_1;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = VideoPlayer_get_aspectRatio_mD9F49BCD1476FE992BDADCB241EF69562F65A249(L_4, NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (VideoAspectRatio_t6D4DCBAAAF4DF8518C7C39EAE75EEA6986AA5A47_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_7;
				L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
				il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
				RuntimeArray* L_8;
				L_8 = Enum_GetValues_mE24D2214E046914DA4CAFB6D1DA830B76C501293(L_7, NULL);
				NullCheck(L_8);
				int32_t L_9;
				L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
				NullCheck(L_3);
				VideoPlayer_set_aspectRatio_m4EDDA786C5B90040119F15FB0AC9150321B44AAE(L_3, ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_5, 1))%L_9)), NULL);
			}

IL_003e_1:
			{
				// foreach (var p in players)
				bool L_10;
				L_10 = Enumerator_MoveNext_m2AACCA7C908EF20499EC6770ED2D150BEDFC26C6((&V_0), Enumerator_MoveNext_m2AACCA7C908EF20499EC6770ED2D150BEDFC26C6_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0058;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void ImageTracking_Video.ImageTargetVideoSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetVideoSample__ctor_mC53694B79B264E007DECA12D582CAC270A14C265 (ImageTargetVideoSample_t2E14D801134BAD3DDB3232A6F96371989261C6C9* __this, const RuntimeMethod* method) 
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
// System.Void ImageTracking_Video.ImageTargetVideoSample/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m2353F64FE26E4527AE6B1729969D1B93D9DF545F (U3CU3Ec__DisplayClass3_0_t2F5F0E62D2BE92BA6948CF4B7C33EBC49A41214E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ImageTracking_Video.ImageTargetVideoSample/<>c__DisplayClass3_0::<Awake>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CAwakeU3Eb__1_m72D88BE0A3954ADD56772D02A6DDF70BA5E13D49 (U3CU3Ec__DisplayClass3_0_t2F5F0E62D2BE92BA6948CF4B7C33EBC49A41214E* __this, const RuntimeMethod* method) 
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
// System.Void ImageTracking_Video.ImageTargetVideoSample/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5DB215AFB691B4A62B6905631A27F7B39BC48EF4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90* L_0 = (U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90*)il2cpp_codegen_object_new(U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF88CF9C8BAF4A4EF6C571F0477D05C32ADDD1006(L_0, NULL);
		((U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ImageTracking_Video.ImageTargetVideoSample/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF88CF9C8BAF4A4EF6C571F0477D05C32ADDD1006 (U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean ImageTracking_Video.ImageTargetVideoSample/<>c::<Awake>b__3_0(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAwakeU3Eb__3_0_mF4D9014E28D679B0A061BCFB8A857C5A6B87A8BB (U3CU3Ec_t9E9B28A16857BA457207284C3C13B0654C0D2C90* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___p0, const RuntimeMethod* method) 
{
	{
		// players = FindObjectsOfType<VideoPlayer>().Where(p => p.renderMode == VideoRenderMode.RenderTexture).ToList();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___p0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VideoPlayer_get_renderMode_m0B65B5B6D1ED8F0F00DA0725F8E97DCD8FE75C6E(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
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
// System.Void ImageTracking_Video.VideoPlayerAgent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerAgent_Start_m3335E0D8E844C34FCD4AAE188CA14CD17CFBF495 (VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_m9E48623F3A0373B9014EDB78E8A878610F90FA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m19D8A3EC4A0BF3BDAFCF718B25FC119EFE6F6BBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_m5E1B773E2DE91B37CF8F815515D1049FEC164DBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__1_m941582D6D1DF7A52DA1569A20D27A9FB406ED712_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__2_m96B85CC675BA8B73B51168F6082A3B214B8790CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__3_m6254CF323D498EDF6E3E6DCA65481593AA680B4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B6_0 = 0;
	{
		U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* L_0 = (U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_m595978A1C25B806120E8A20DD5C76811DDBAE81E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// controller = GetComponentInParent<ImageTargetController>();
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_2;
		L_2 = Component_GetComponentInParent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_m9E48623F3A0373B9014EDB78E8A878610F90FA3D(__this, Component_GetComponentInParent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_m9E48623F3A0373B9014EDB78E8A878610F90FA3D_RuntimeMethod_var);
		__this->___controller_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller_6), (void*)L_2);
		// meshRenderer = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3;
		L_3 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->___meshRenderer_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer_7), (void*)L_3);
		// StatusChanged();
		VideoPlayerAgent_StatusChanged_m1AD7328A51927A47560073F6DF40A341E9F65BB8(__this, NULL);
		// player = GetComponent<UnityEngine.Video.VideoPlayer>();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_4;
		L_4 = Component_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m19D8A3EC4A0BF3BDAFCF718B25FC119EFE6F6BBA(__this, Component_GetComponent_TisVideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3_m19D8A3EC4A0BF3BDAFCF718B25FC119EFE6F6BBA_RuntimeMethod_var);
		__this->___player_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_8), (void*)L_4);
		// player.source = VideoSource.Url;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = __this->___player_8;
		NullCheck(L_5);
		VideoPlayer_set_source_m31B8A16AF9B6FE58D5DCF549614BE6B53DE53052(L_5, 1, NULL);
		// var path = Application.streamingAssetsPath + "/" + VideoInStreamingAssets;
		U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* L_6 = V_0;
		String_t* L_7;
		L_7 = Application_get_streamingAssetsPath_m4DF6E61542E9D042CF1A5A1CEE75DB2D5631D4AD(NULL);
		String_t* L_8 = __this->___VideoInStreamingAssets_4;
		String_t* L_9;
		L_9 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_7, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_8, NULL);
		NullCheck(L_6);
		L_6->___path_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___path_1), (void*)L_9);
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_10;
		L_10 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_1 = (bool)((((int32_t)L_10) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_008b;
		}
	}
	{
		// path = Application.persistentDataPath + "/" + VideoInStreamingAssets;
		U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* L_12 = V_0;
		String_t* L_13;
		L_13 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		String_t* L_14 = __this->___VideoInStreamingAssets_4;
		String_t* L_15;
		L_15 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_13, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_14, NULL);
		NullCheck(L_12);
		L_12->___path_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___path_1), (void*)L_15);
	}

IL_008b:
	{
		// if (Application.platform == RuntimePlatform.Android && !File.Exists(path) && !path.StartsWith("https://"))
		int32_t L_16;
		L_16 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_00b6;
		}
	}
	{
		U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* L_17 = V_0;
		NullCheck(L_17);
		String_t* L_18 = L_17->___path_1;
		bool L_19;
		L_19 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_18, NULL);
		if (L_19)
		{
			goto IL_00b6;
		}
	}
	{
		U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = L_20->___path_1;
		NullCheck(L_21);
		bool L_22;
		L_22 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_21, _stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2, NULL);
		G_B6_0 = ((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B6_0 = 0;
	}

IL_00b7:
	{
		V_2 = (bool)G_B6_0;
		bool L_23 = V_2;
		if (!L_23)
		{
			goto IL_00df;
		}
	}
	{
		// StartCoroutine(FileUtil.LoadFile(VideoInStreamingAssets, PathType.StreamingAssets, (data) =>
		// {
		//     StartCoroutine(WriteFile(path, data));
		// }));
		String_t* L_24 = __this->___VideoInStreamingAssets_4;
		U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* L_25 = V_0;
		Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8* L_26 = (Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8*)il2cpp_codegen_object_new(Action_1_t300D9A559311CF7D2AE5D29B63E8C4DE0D49BCD8_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_1__ctor_mB3AA0B58E50AA1F32FD3B49CFF3441AEECF837FA(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_m5E1B773E2DE91B37CF8F815515D1049FEC164DBE_RuntimeMethod_var), NULL);
		RuntimeObject* L_27;
		L_27 = FileUtil_LoadFile_m81391E37EAE00EA7E8EBBF9928A25D2B71AA7C49(L_24, 1, L_26, (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)NULL, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_28;
		L_28 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_27, NULL);
		goto IL_00fa;
	}

IL_00df:
	{
		// player.url = path;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_29 = __this->___player_8;
		U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31 = L_30->___path_1;
		NullCheck(L_29);
		VideoPlayer_set_url_m02AC2BB229F9441257D62F9ACFD96D09F51B4F14(L_29, L_31, NULL);
		// ready = true;
		__this->___ready_9 = (bool)1;
	}

IL_00fa:
	{
		// controller.TargetFound += () =>
		// {
		//     if (FitTarget)
		//     {
		//         transform.localScale = new Vector3(1, 1 / controller.Target.aspectRatio(), 1);
		//     }
		//     found = true;
		//     StatusChanged();
		// };
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_32 = __this->___controller_6;
		U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* L_33 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_34 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_34, L_33, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__1_m941582D6D1DF7A52DA1569A20D27A9FB406ED712_RuntimeMethod_var), NULL);
		NullCheck(L_32);
		TargetController_add_TargetFound_mD4B9C4D3662E282B491F617E22AA14D3775AB57B(L_32, L_34, NULL);
		// controller.TargetLost += () =>
		// {
		//     found = false;
		//     StatusChanged();
		// };
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_35 = __this->___controller_6;
		U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* L_36 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_37 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_37, L_36, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__2_m96B85CC675BA8B73B51168F6082A3B214B8790CB_RuntimeMethod_var), NULL);
		NullCheck(L_35);
		TargetController_add_TargetLost_mB6790A7172B5C303E3143155672D27F4BF6E4ECC(L_35, L_37, NULL);
		// player.prepareCompleted += (source) =>
		// {
		//     prepared = true;
		//     StatusChanged();
		// };
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_38 = __this->___player_8;
		U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* L_39 = V_0;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_40 = (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)il2cpp_codegen_object_new(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		EventHandler__ctor_mFCF62E0BB29DD3D2B2F1306BD8657E374CF60903(L_40, L_39, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__3_m6254CF323D498EDF6E3E6DCA65481593AA680B4F_RuntimeMethod_var), NULL);
		NullCheck(L_38);
		VideoPlayer_add_prepareCompleted_m4DB8843A3E3E3CFF7E361E70EA51983AF457183B(L_38, L_40, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ImageTracking_Video.VideoPlayerAgent::WriteFile(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VideoPlayerAgent_WriteFile_m6074E00EF8B4D1CC1FFE56E4B9D7D2D2E220DE67 (VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* __this, String_t* ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4* L_0 = (U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4*)il2cpp_codegen_object_new(U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWriteFileU3Ed__9__ctor_m92028E436B52BAF9B45A20DB70BB1C2259B40839(L_0, 0, NULL);
		U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4* L_2 = L_1;
		String_t* L_3 = ___path0;
		NullCheck(L_2);
		L_2->___path_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___path_2), (void*)L_3);
		U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4* L_4 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data1;
		NullCheck(L_4);
		L_4->___data_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___data_3), (void*)L_5);
		return L_4;
	}
}
// System.Void ImageTracking_Video.VideoPlayerAgent::StatusChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerAgent_StatusChanged_m1AD7328A51927A47560073F6DF40A341E9F65BB8 (VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!ready)
		bool L_0 = __this->___ready_9;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// meshRenderer.enabled = false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = __this->___meshRenderer_7;
		NullCheck(L_2);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)0, NULL);
		// return;
		goto IL_0065;
	}

IL_001e:
	{
		// if (found)
		bool L_3 = __this->___found_11;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		// meshRenderer.enabled = prepared;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5 = __this->___meshRenderer_7;
		bool L_6 = __this->___prepared_10;
		NullCheck(L_5);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, L_6, NULL);
		// player.Play();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_7 = __this->___player_8;
		NullCheck(L_7);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_7, NULL);
		goto IL_0065;
	}

IL_004a:
	{
		// meshRenderer.enabled = false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_8 = __this->___meshRenderer_7;
		NullCheck(L_8);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_8, (bool)0, NULL);
		// player.Pause();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_9 = __this->___player_8;
		NullCheck(L_9);
		VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E(L_9, NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void ImageTracking_Video.VideoPlayerAgent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayerAgent__ctor_m27EC1A18393D51BCB28E0AE6370332491FEDF12F (VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* __this, const RuntimeMethod* method) 
{
	{
		// public bool FitTarget = true;
		__this->___FitTarget_5 = (bool)1;
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
// System.Void ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m595978A1C25B806120E8A20DD5C76811DDBAE81E (U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass8_0::<Start>b__0(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_m5E1B773E2DE91B37CF8F815515D1049FEC164DBE (U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(WriteFile(path, data));
		VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* L_0 = __this->___U3CU3E4__this_0;
		VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* L_1 = __this->___U3CU3E4__this_0;
		String_t* L_2 = __this->___path_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___data0;
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = VideoPlayerAgent_WriteFile_m6074E00EF8B4D1CC1FFE56E4B9D7D2D2E220DE67(L_1, L_2, L_3, NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_4, NULL);
		// }));
		return;
	}
}
// System.Void ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass8_0::<Start>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__1_m941582D6D1DF7A52DA1569A20D27A9FB406ED712 (U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (FitTarget)
		VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		bool L_1 = L_0->___FitTarget_5;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		// transform.localScale = new Vector3(1, 1 / controller.Target.aspectRatio(), 1);
		VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* L_3 = __this->___U3CU3E4__this_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* L_5 = __this->___U3CU3E4__this_0;
		NullCheck(L_5);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_6 = L_5->___controller_6;
		NullCheck(L_6);
		ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_7;
		L_7 = ImageTargetController_get_Target_m51F32E8D1467745044F011BE80719C022258BC95_inline(L_6, NULL);
		NullCheck(L_7);
		float L_8;
		L_8 = VirtualFuncInvoker0< float >::Invoke(14 /* System.Single easyar.ImageTarget::aspectRatio() */, L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (1.0f), ((float)((1.0f)/L_8)), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_9, NULL);
	}

IL_004d:
	{
		// found = true;
		VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* L_10 = __this->___U3CU3E4__this_0;
		NullCheck(L_10);
		L_10->___found_11 = (bool)1;
		// StatusChanged();
		VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* L_11 = __this->___U3CU3E4__this_0;
		NullCheck(L_11);
		VideoPlayerAgent_StatusChanged_m1AD7328A51927A47560073F6DF40A341E9F65BB8(L_11, NULL);
		// };
		return;
	}
}
// System.Void ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass8_0::<Start>b__2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__2_m96B85CC675BA8B73B51168F6082A3B214B8790CB (U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* __this, const RuntimeMethod* method) 
{
	{
		// found = false;
		VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		L_0->___found_11 = (bool)0;
		// StatusChanged();
		VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* L_1 = __this->___U3CU3E4__this_0;
		NullCheck(L_1);
		VideoPlayerAgent_StatusChanged_m1AD7328A51927A47560073F6DF40A341E9F65BB8(L_1, NULL);
		// };
		return;
	}
}
// System.Void ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass8_0::<Start>b__3(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__3_m6254CF323D498EDF6E3E6DCA65481593AA680B4F (U3CU3Ec__DisplayClass8_0_tDAE14CFB28B4ACCB8EA0CB5FC6F695BD001E32C5* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___source0, const RuntimeMethod* method) 
{
	{
		// prepared = true;
		VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		L_0->___prepared_10 = (bool)1;
		// StatusChanged();
		VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* L_1 = __this->___U3CU3E4__this_0;
		NullCheck(L_1);
		VideoPlayerAgent_StatusChanged_m1AD7328A51927A47560073F6DF40A341E9F65BB8(L_1, NULL);
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
// System.Void ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mA46FA22AD7D7F47B2E5535F50D3E53EFD97E4686 (U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ImageTracking_Video.VideoPlayerAgent/<>c__DisplayClass9_0::<WriteFile>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CWriteFileU3Eb__0_mD823B44ACCBEF3B61F66DEC40D20663DB18503FF (U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// var dir = Path.GetDirectoryName(path);
		String_t* L_0 = __this->___path_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetDirectoryName_mB9369289430566A15BB0A0CFCCBED3C6ECA7F30C(L_0, NULL);
		V_0 = L_1;
		// if (!Directory.Exists(dir))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// Directory.CreateDirectory(dir);
		String_t* L_5 = V_0;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_6;
		L_6 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_5, NULL);
	}

IL_0023:
	{
		// if (!File.Exists(path))
		String_t* L_7 = __this->___path_0;
		bool L_8;
		L_8 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_7, NULL);
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		// File.WriteAllBytes(path, data);
		String_t* L_10 = __this->___path_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___data_1;
		File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668(L_10, L_11, NULL);
	}

IL_0049:
	{
		// finished = true;
		__this->___finished_2 = (bool)1;
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
// System.Void ImageTracking_Video.VideoPlayerAgent/<WriteFile>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteFileU3Ed__9__ctor_m92028E436B52BAF9B45A20DB70BB1C2259B40839 (U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ImageTracking_Video.VideoPlayerAgent/<WriteFile>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteFileU3Ed__9_System_IDisposable_Dispose_m6AC631FD87D50359EB9E3A97EB3629D3CB28997D (U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ImageTracking_Video.VideoPlayerAgent/<WriteFile>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWriteFileU3Ed__9_MoveNext_m827186761EB300C9788E8A398E213BB3520886CF (U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CWriteFileU3Eb__0_mD823B44ACCBEF3B61F66DEC40D20663DB18503FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B10_0 = 0;
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
		goto IL_00bb;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F* L_3 = (U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ec__DisplayClass9_0__ctor_mA46FA22AD7D7F47B2E5535F50D3E53EFD97E4686(L_3, NULL);
		__this->___U3CU3E8__1_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_5), (void*)L_3);
		U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F* L_4 = __this->___U3CU3E8__1_5;
		String_t* L_5 = __this->___path_2;
		NullCheck(L_4);
		L_4->___path_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___path_0), (void*)L_5);
		U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F* L_6 = __this->___U3CU3E8__1_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___data_3;
		NullCheck(L_6);
		L_6->___data_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___data_1), (void*)L_7);
		// if (data == null || data.Length <= 0)
		U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F* L_8 = __this->___U3CU3E8__1_5;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8->___data_1;
		if (!L_9)
		{
			goto IL_006e;
		}
	}
	{
		U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F* L_10 = __this->___U3CU3E8__1_5;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10->___data_1;
		NullCheck(L_11);
		G_B10_0 = ((((int32_t)(((RuntimeArray*)L_11)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_006f;
	}

IL_006e:
	{
		G_B10_0 = 1;
	}

IL_006f:
	{
		V_1 = (bool)G_B10_0;
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0076:
	{
		// bool finished = false;
		U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F* L_13 = __this->___U3CU3E8__1_5;
		NullCheck(L_13);
		L_13->___finished_2 = (bool)0;
		// EasyARController.Instance.Worker.Run(() =>
		// {
		//     var dir = Path.GetDirectoryName(path);
		//     if (!Directory.Exists(dir))
		//     {
		//         Directory.CreateDirectory(dir);
		//     }
		//     if (!File.Exists(path))
		//     {
		//         File.WriteAllBytes(path, data);
		//     }
		//     finished = true;
		// });
		il2cpp_codegen_runtime_class_init_inline(EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177_il2cpp_TypeInfo_var);
		EasyARController_t5A714C355ECD00C1A6A6AC456C8C20D368D7C177* L_14;
		L_14 = EasyARController_get_Instance_mFD49136A56B9212987C8989B045D463D2841C295_inline(NULL);
		NullCheck(L_14);
		ThreadWorker_t1ADEDA9DB0A15609FBEFE467B9CC337BF57D6D36* L_15;
		L_15 = EasyARController_get_Worker_mC0CE2BCBC0B1A9D6DCFAAE303EED4615168DD253_inline(L_14, NULL);
		U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F* L_16 = __this->___U3CU3E8__1_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CWriteFileU3Eb__0_mD823B44ACCBEF3B61F66DEC40D20663DB18503FF_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		ThreadWorker_Run_mE19FF9BF70FEBC298AB58494630216F2FB775F03(L_15, L_17, NULL);
		goto IL_00c3;
	}

IL_00a5:
	{
		// yield return 0;
		int32_t L_18 = 0;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		__this->___U3CU3E2__current_1 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_19);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00bb:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00c3:
	{
		// while (!finished)
		U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F* L_20 = __this->___U3CU3E8__1_5;
		NullCheck(L_20);
		bool L_21 = L_20->___finished_2;
		V_2 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_2;
		if (L_22)
		{
			goto IL_00a5;
		}
	}
	{
		// player.url = path;
		VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* L_23 = __this->___U3CU3E4__this_4;
		NullCheck(L_23);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_24 = L_23->___player_8;
		U3CU3Ec__DisplayClass9_0_tE6C21BC0892AF65752499D335DB61AF6E662A32F* L_25 = __this->___U3CU3E8__1_5;
		NullCheck(L_25);
		String_t* L_26 = L_25->___path_0;
		NullCheck(L_24);
		VideoPlayer_set_url_m02AC2BB229F9441257D62F9ACFD96D09F51B4F14(L_24, L_26, NULL);
		// ready = true;
		VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* L_27 = __this->___U3CU3E4__this_4;
		NullCheck(L_27);
		L_27->___ready_9 = (bool)1;
		// StatusChanged();
		VideoPlayerAgent_t799BC33C958FD88EFABF70D23A5729FA66C763F4* L_28 = __this->___U3CU3E4__this_4;
		NullCheck(L_28);
		VideoPlayerAgent_StatusChanged_m1AD7328A51927A47560073F6DF40A341E9F65BB8(L_28, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ImageTracking_Video.VideoPlayerAgent/<WriteFile>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWriteFileU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m78121ECEA840F760D7B9FDFE312F4FF10B99FD6C (U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ImageTracking_Video.VideoPlayerAgent/<WriteFile>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteFileU3Ed__9_System_Collections_IEnumerator_Reset_mCBCBD183D0658D2A776352F92204DF3503D67ADE (U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWriteFileU3Ed__9_System_Collections_IEnumerator_Reset_mCBCBD183D0658D2A776352F92204DF3503D67ADE_RuntimeMethod_var)));
	}
}
// System.Object ImageTracking_Video.VideoPlayerAgent/<WriteFile>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWriteFileU3Ed__9_System_Collections_IEnumerator_get_Current_m17E19D8AE7DF2C3585941BD0A466239474A37FAB (U3CWriteFileU3Ed__9_tB121593689B7CF7964EEAFC13F447341D10955B4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* ImageTargetController_get_Target_m51F32E8D1467745044F011BE80719C022258BC95_inline (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, const RuntimeMethod* method) 
{
	{
		// public ImageTarget Target { get; private set; }
		ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_0 = __this->___U3CTargetU3Ek__BackingField_11;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
