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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// APPManager
struct APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE;
// ARManager
struct ARManager_t082C478673DF5F5786DFB25006CC1643E8471245;
// ARSoundController
struct ARSoundController_tE93BE436BD0C6FE16F6400FAECD28DB26ACD04D0;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BackController
struct BackController_t57D37947BE37FCA1E0BE05565E1483E2BDB6A511;
// BackgroundController
struct BackgroundController_tEA49BA1BD9E225916F82C0D0841C6B5A0480CE83;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// ButtonManager
struct ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8;
// easyar.CameraDevice
struct CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CukaiController
struct CukaiController_t907F5CB7084F3B209B9AAD1CC5B2386DF99C5F12;
// CukaiDetailController
struct CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC;
// CukaiSwipeController
struct CukaiSwipeController_tB211EE93D6C4E4F405560299420BDAAB2608208E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FishLibraryController
struct FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F;
// FlashLightController
struct FlashLightController_t48658171E89A77EE0757C22B42E801912BEAB86E;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
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
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// MateriController
struct MateriController_t06F8AC0F0655269A8F9C8C8EBB889A033D89525F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PinchToZoom
struct PinchToZoom_tB49ED50CB614FC2134C03095C573B14B65E142F4;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SoundController
struct SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// SwipeController
struct SwipeController_tE45073D38D2553AF9D898D166355721C5AF764EB;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TimerController
struct TimerController_t9FACAA69550370472C446690F3AD92032ECE8CC5;
// TnC
struct TnC_t5F6653C292B391CA2B8371C3F1D2FAB0A4EC9E49;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// VideController
struct VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E;
// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// BackgroundController/<PlayVideo>d__5
struct U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// CukaiDetailController/<Move>d__16
struct U3CMoveU3Ed__16_tB05E95B73029F04A4E1390197A684757674BD94D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// easyar.RefBase/Retainer
struct Retainer_t21E37A78A5C591A4A1DB7494A454CCADF411A77A;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6;
// VideController/<PlayVideo>d__14
struct U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E;

IL2CPP_EXTERN_C RuntimeClass* APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARManager_t082C478673DF5F5786DFB25006CC1643E8471245_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveU3Ed__16_tB05E95B73029F04A4E1390197A684757674BD94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral018E512AD459708A1AF30D661066425761B29480;
IL2CPP_EXTERN_C String_t* _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF;
IL2CPP_EXTERN_C String_t* _stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C;
IL2CPP_EXTERN_C String_t* _stringLiteral79103D9760831FF13E06C2949493F12EC0862166;
IL2CPP_EXTERN_C String_t* _stringLiteral82C3B166E09CFA044444785C7F06DAFB6DBDEE29;
IL2CPP_EXTERN_C String_t* _stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0;
IL2CPP_EXTERN_C String_t* _stringLiteral87212744DB94F7241847D840A643FD7A2A6AC57B;
IL2CPP_EXTERN_C String_t* _stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1;
IL2CPP_EXTERN_C String_t* _stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C;
IL2CPP_EXTERN_C String_t* _stringLiteralB249B641F777FD9DD7C3E1F654B72D422681B433;
IL2CPP_EXTERN_C String_t* _stringLiteralB627E4FD7105A1822034ACCA4E9FBEBC1D20B814;
IL2CPP_EXTERN_C String_t* _stringLiteralC982AA36B105954A981313010D5DDC199E9B76CD;
IL2CPP_EXTERN_C String_t* _stringLiteralE067B13586460CAA939FEA8B3AC9E812D7B52009;
IL2CPP_EXTERN_C String_t* _stringLiteralF36526A40FFA944E817E04C1B006B7B6FBD29BBE;
IL2CPP_EXTERN_C String_t* _stringLiteralF81623400486AF99C5F9706770E2C0C01BD64184;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC_m6A572331D9C40D0D9B1243B31646EC87DBD46B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisVideController_t01D5382A73805EC587F3ED5F50DB93633D01476E_m3A90C072F2755ADA8062EF41789367A565E9915A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveU3Ed__16_System_Collections_IEnumerator_Reset_m0F038DDAB843A2FCDDF5C85AA7A97F74ADADAF51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlayVideoU3Ed__14_System_Collections_IEnumerator_Reset_m067A8C7F28D780C4B4CF8435BD9567A374B8DBBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlayVideoU3Ed__5_System_Collections_IEnumerator_Reset_m0A18C89F0273CB41B1ED31674D442AEA75DF32AA_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
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

// BackgroundController/<PlayVideo>d__5
struct U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E  : public RuntimeObject
{
	// System.Int32 BackgroundController/<PlayVideo>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BackgroundController/<PlayVideo>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single BackgroundController/<PlayVideo>d__5::_time
	float ____time_2;
	// BackgroundController BackgroundController/<PlayVideo>d__5::<>4__this
	BackgroundController_tEA49BA1BD9E225916F82C0D0841C6B5A0480CE83* ___U3CU3E4__this_3;
	// UnityEngine.WaitForSeconds BackgroundController/<PlayVideo>d__5::<waitForSeconds>5__1
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___U3CwaitForSecondsU3E5__1_4;
};

// CukaiDetailController/<Move>d__16
struct U3CMoveU3Ed__16_tB05E95B73029F04A4E1390197A684757674BD94D  : public RuntimeObject
{
	// System.Int32 CukaiDetailController/<Move>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CukaiDetailController/<Move>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CukaiDetailController CukaiDetailController/<Move>d__16::<>4__this
	CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* ___U3CU3E4__this_2;
	// System.Single CukaiDetailController/<Move>d__16::<time>5__1
	float ___U3CtimeU3E5__1_3;
};

// VideController/<PlayVideo>d__14
struct U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA  : public RuntimeObject
{
	// System.Int32 VideController/<PlayVideo>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VideController/<PlayVideo>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// VideController VideController/<PlayVideo>d__14::<>4__this
	VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* ___U3CU3E4__this_2;
	// UnityEngine.WaitForSeconds VideController/<PlayVideo>d__14::<waitForSeconds>5__1
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___U3CwaitForSecondsU3E5__1_3;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// easyar.CameraDevice
struct CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE  : public RefBase_tD2A748D10CECAAD8DD367977128D0B22A01F604E
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// APPManager
struct APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource APPManager::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_4;
	// UnityEngine.GameObject APPManager::videoPlayerObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___videoPlayerObject_5;
	// UnityEngine.GameObject APPManager::thisPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___thisPanel_7;
	// UnityEngine.GameObject APPManager::disclaimerPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___disclaimerPanel_8;
	// UnityEngine.GameObject APPManager::videoPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___videoPanel_9;
	// UnityEngine.GameObject APPManager::mainMenuPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mainMenuPanel_10;
	// UnityEngine.GameObject APPManager::background
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___background_11;
	// System.Boolean APPManager::_isPlay
	bool ____isPlay_12;
	// System.Boolean APPManager::_isSkip
	bool ____isSkip_13;
};

struct APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE_StaticFields
{
	// APPManager APPManager::instance
	APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE* ___instance_6;
};

// ARManager
struct ARManager_t082C478673DF5F5786DFB25006CC1643E8471245  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ARManager::IsPlay
	bool ___IsPlay_5;
};

struct ARManager_t082C478673DF5F5786DFB25006CC1643E8471245_StaticFields
{
	// ARManager ARManager::instance
	ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* ___instance_4;
};

// ARSoundController
struct ARSoundController_tE93BE436BD0C6FE16F6400FAECD28DB26ACD04D0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource ARSoundController::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_4;
	// UnityEngine.UI.Image[] ARSoundController::soundImage
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___soundImage_5;
	// UnityEngine.Sprite ARSoundController::soundOffSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___soundOffSprite_6;
	// UnityEngine.Sprite ARSoundController::soundOnSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___soundOnSprite_7;
	// System.Boolean ARSoundController::isSoundOn
	bool ___isSoundOn_8;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BackController
struct BackController_t57D37947BE37FCA1E0BE05565E1483E2BDB6A511  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent BackController::unityEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___unityEvent_4;
	// System.String BackController::key
	String_t* ___key_5;
};

// BackgroundController
struct BackgroundController_tEA49BA1BD9E225916F82C0D0841C6B5A0480CE83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Video.VideoPlayer BackgroundController::videoPlayer
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___videoPlayer_4;
	// UnityEngine.Video.VideoClip BackgroundController::videoToPlay
	VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___videoToPlay_5;
	// UnityEngine.UI.RawImage BackgroundController::image
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___image_6;
};

// ButtonManager
struct ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image ButtonManager::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_4;
	// UnityEngine.Sprite ButtonManager::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_5;
	// UnityEngine.AudioSource ButtonManager::buttonSoundEffect
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___buttonSoundEffect_6;
};

// CukaiController
struct CukaiController_t907F5CB7084F3B209B9AAD1CC5B2386DF99C5F12  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image[] CukaiController::cukaiImage
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___cukaiImage_4;
	// UnityEngine.Sprite[] CukaiController::defaultSprite
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___defaultSprite_5;
	// UnityEngine.Sprite[] CukaiController::variantSprite
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___variantSprite_6;
	// UnityEngine.UI.Image CukaiController::uvImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___uvImage_7;
	// UnityEngine.Sprite[] CukaiController::uvSprite
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___uvSprite_8;
	// System.Boolean CukaiController::isVariant
	bool ___isVariant_9;
	// System.Int32 CukaiController::_position
	int32_t ____position_10;
	// UnityEngine.GameObject[] CukaiController::hoverImage
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___hoverImage_11;
	// UnityEngine.Animator CukaiController::colorPickerAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___colorPickerAnimator_12;
	// UnityEngine.Animator CukaiController::colorButtonAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___colorButtonAnimator_13;
	// System.Boolean CukaiController::isCollorButtonOpened
	bool ___isCollorButtonOpened_14;
};

// CukaiDetailController
struct CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] CukaiDetailController::descObject
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___descObject_4;
	// System.String[] CukaiDetailController::descString
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___descString_5;
	// UnityEngine.UI.Text[] CukaiDetailController::descText
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___descText_6;
	// System.Int32 CukaiDetailController::initiateSkip
	int32_t ___initiateSkip_7;
	// System.Int32 CukaiDetailController::position
	int32_t ___position_8;
	// System.Int32 CukaiDetailController::descLength
	int32_t ___descLength_9;
	// UnityEngine.Vector2[] CukaiDetailController::objectPosisiton
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___objectPosisiton_10;
	// System.Boolean CukaiDetailController::isMove
	bool ___isMove_11;
	// UnityEngine.Vector2 CukaiDetailController::initPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initPosition_12;
};

// CukaiSwipeController
struct CukaiSwipeController_tB211EE93D6C4E4F405560299420BDAAB2608208E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 CukaiSwipeController::_initialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____initialPosition_4;
	// System.Single CukaiSwipeController::_rate
	float ____rate_5;
	// UnityEngine.GameObject CukaiSwipeController::cukaiDetailObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cukaiDetailObject_6;
	// UnityEngine.GameObject CukaiSwipeController::scrollbar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scrollbar_7;
	// System.Single CukaiSwipeController::scrollPos
	float ___scrollPos_8;
	// System.Single[] CukaiSwipeController::pos
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pos_9;
	// System.Int32 CukaiSwipeController::position
	int32_t ___position_10;
};

// FishLibraryController
struct FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] FishLibraryController::fishObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___fishObjects_4;
	// UnityEngine.GameObject[] FishLibraryController::tooltipObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___tooltipObjects_5;
	// UnityEngine.UI.Text FishLibraryController::titleText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___titleText_6;
	// UnityEngine.UI.Text FishLibraryController::tagText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___tagText_7;
	// UnityEngine.UI.Text FishLibraryController::descText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___descText_8;
	// System.String[] FishLibraryController::titleStrings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___titleStrings_9;
	// System.String[] FishLibraryController::tagStrings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tagStrings_10;
	// System.String[] FishLibraryController::descStrings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___descStrings_11;
	// UnityEngine.GameObject[] FishLibraryController::foodObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___foodObjects_12;
	// UnityEngine.GameObject[] FishLibraryController::threatObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___threatObjects_13;
	// UnityEngine.UI.Text FishLibraryController::sizeText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___sizeText_14;
	// System.String[] FishLibraryController::sizeStrings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___sizeStrings_15;
	// System.Int32 FishLibraryController::index
	int32_t ___index_16;
	// UnityEngine.GameObject[] FishLibraryController::bottomTooltips
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___bottomTooltips_17;
	// System.Boolean FishLibraryController::isFoodOpen
	bool ___isFoodOpen_18;
	// System.Boolean FishLibraryController::isThreatOpen
	bool ___isThreatOpen_19;
	// System.Boolean FishLibraryController::isSizeOpen
	bool ___isSizeOpen_20;
	// UnityEngine.AudioSource FishLibraryController::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_21;
	// UnityEngine.AudioClip[] FishLibraryController::audioClips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___audioClips_22;
	// System.Boolean FishLibraryController::isAudioOn
	bool ___isAudioOn_23;
	// UnityEngine.UI.Image FishLibraryController::soundImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___soundImage_24;
	// UnityEngine.Sprite FishLibraryController::soundOffSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___soundOffSprite_25;
	// UnityEngine.Sprite FishLibraryController::soundOnSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___soundOnSprite_26;
};

// FlashLightController
struct FlashLightController_t48658171E89A77EE0757C22B42E801912BEAB86E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// easyar.CameraDevice FlashLightController::camDevice
	CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* ___camDevice_4;
	// System.Boolean FlashLightController::flashStatus
	bool ___flashStatus_5;
};

// MateriController
struct MateriController_t06F8AC0F0655269A8F9C8C8EBB889A033D89525F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 MateriController::_initialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____initialPosition_4;
	// System.Single MateriController::_rate
	float ____rate_5;
	// UnityEngine.GameObject MateriController::scrollbar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scrollbar_6;
	// System.Single MateriController::scrollPos
	float ___scrollPos_7;
	// System.Single[] MateriController::pos
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pos_8;
	// System.Int32 MateriController::position
	int32_t ___position_9;
};

// PinchToZoom
struct PinchToZoom_tB49ED50CB614FC2134C03095C573B14B65E142F4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PinchToZoom::minScale
	float ___minScale_4;
	// System.Single PinchToZoom::maxScale
	float ___maxScale_5;
	// System.Single PinchToZoom::initialDistance
	float ___initialDistance_6;
	// UnityEngine.Vector3 PinchToZoom::initialScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialScale_7;
	// UnityEngine.Vector3 PinchToZoom::_beforeScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____beforeScale_8;
	// System.Boolean PinchToZoom::isScale
	bool ___isScale_9;
	// System.Single PinchToZoom::_rate
	float ____rate_10;
};

// SoundController
struct SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource SoundController::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_4;
	// UnityEngine.UI.Image SoundController::soundImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___soundImage_5;
	// UnityEngine.Sprite SoundController::soundOffSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___soundOffSprite_6;
	// UnityEngine.Sprite SoundController::soundOnSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___soundOnSprite_7;
};

// SwipeController
struct SwipeController_tE45073D38D2553AF9D898D166355721C5AF764EB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SwipeController::scrollbar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scrollbar_4;
	// UnityEngine.UI.Text SwipeController::nameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___nameText_5;
	// UnityEngine.UI.Text SwipeController::descText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___descText_6;
	// System.String[] SwipeController::nameString
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nameString_7;
	// System.String[] SwipeController::descString
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___descString_8;
	// System.Single SwipeController::scrollPos
	float ___scrollPos_9;
	// System.Single[] SwipeController::pos
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pos_10;
	// System.Int32 SwipeController::position
	int32_t ___position_11;
};

// TimerController
struct TimerController_t9FACAA69550370472C446690F3AD92032ECE8CC5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TimerController::timeRemaining
	float ___timeRemaining_4;
	// System.Boolean TimerController::timerIsRunning
	bool ___timerIsRunning_5;
	// UnityEngine.UI.Text TimerController::buttonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buttonText_6;
	// UnityEngine.GameObject[] TimerController::playVideoButton
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___playVideoButton_7;
};

// TnC
struct TnC_t5F6653C292B391CA2B8371C3F1D2FAB0A4EC9E49  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TnC::buttonObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buttonObject_4;
	// UnityEngine.Sprite TnC::disableSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___disableSprite_5;
	// UnityEngine.Sprite TnC::enableSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___enableSprite_6;
	// System.Boolean TnC::isAgree
	bool ___isAgree_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VideController
struct VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Video.VideoPlayer VideController::videoPlayer
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___videoPlayer_4;
	// UnityEngine.Video.VideoClip VideController::videoToPlay
	VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___videoToPlay_5;
	// UnityEngine.UI.RawImage VideController::image
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___image_6;
	// UnityEngine.UI.RawImage VideController::image2
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___image2_7;
	// UnityEngine.UI.Image VideController::playPauseImage1
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___playPauseImage1_8;
	// UnityEngine.UI.Image VideController::playPauseImage2
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___playPauseImage2_9;
	// UnityEngine.Sprite VideController::playSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___playSprite_10;
	// UnityEngine.Sprite VideController::pauseSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___pauseSprite_11;
	// UnityEngine.GameObject VideController::fullScreenObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fullScreenObject_12;
	// System.Boolean VideController::isFullScreen
	bool ___isFullScreen_13;
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

// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_20;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_21;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_22;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_23;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_24;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6* ___m_OnValueChanged_25;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ContainerRect_26;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_27;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_28;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_PointerDownRepeat_29;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_30;
	// System.Boolean UnityEngine.UI.Scrollbar::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_31;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
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
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353  : public RuntimeArray
{
	ALIGN_FIELD (8) Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* m_Items[1];

	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
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
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
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
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void APPManager::GetIsPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void APPManager_GetIsPlay_mD7C54274E588C3E3D3FF7470F2EC1512042CA7ED (APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void APPManager::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void APPManager_Load_mA9AE9B5DEFBD7A195EE035286B080DDE10928EC9 (APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<VideController>()
inline VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* GameObject_GetComponent_TisVideController_t01D5382A73805EC587F3ED5F50DB93633D01476E_m3A90C072F2755ADA8062EF41789367A565E9915A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void VideController::SetVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideController_SetVideo_mEA3FCB843FE1031270D3EC68129C5189EF5C3057 (VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void ARManager::SetIsPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_SetIsPlay_m633D24CB40EEB65B6017E741F9F4A4BBB6BBA2DA (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator BackgroundController::PlayVideo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BackgroundController_PlayVideo_mAC3BCBF210183238E10C86D2E6F0CEEDFFC8E6CB (BackgroundController_tEA49BA1BD9E225916F82C0D0841C6B5A0480CE83* __this, float ____time0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void BackgroundController/<PlayVideo>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayVideoU3Ed__5__ctor_m0A2FD1DB111612917BF4F542F2C16AD010F20865 (U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPrepared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPrepared_mF2F3AD27BE0FD06695EE9DEE762B68F431E15767 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Video.VideoPlayer::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* VideoPlayer_get_texture_m1BA7033FEB30FEC507A4605FDD5C4B78BB81C379 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void ButtonManager::setSpriteToImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_setSpriteToImage_mB485BF9FFE1492C0D51EAF7AA641F2436436E313 (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void CukaiController::SetImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiController_SetImage_mD81ED746D20FC15BB9FD922D134413906F198CB2 (CukaiController_t907F5CB7084F3B209B9AAD1CC5B2386DF99C5F12* __this, int32_t ___position0, const RuntimeMethod* method) ;
// System.Void CukaiController::SetDefaultButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiController_SetDefaultButton_mEC531B60D9C2C7B0CF2E89D9A1C493E05D680FA1 (CukaiController_t907F5CB7084F3B209B9AAD1CC5B2386DF99C5F12* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// System.Void CukaiDetailController::Initiate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiDetailController_Initiate_mF08648BDED2A68124093DA840E90A667DC0EEDD6 (CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void CukaiDetailController::NonActiveObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiDetailController_NonActiveObject_m42317C8D045DC14ABAA1DEBDF5D61B1D320D9F0C (CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* __this, const RuntimeMethod* method) ;
// System.Void CukaiDetailController::InitiateDesc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiDetailController_InitiateDesc_m2A8D2AE560005FD068F1F1608A4615752BC703EB (CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* __this, const RuntimeMethod* method) ;
// System.Void CukaiDetailController/<Move>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__16__ctor_m87CF390DB25DA1809722047576B99111DF534C60 (U3CMoveU3Ed__16_tB05E95B73029F04A4E1390197A684757674BD94D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothStep(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothStep_mF724C7893D0F0C02FB14D573DDB7F92935451B81_inline (float ___from0, float ___to1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<CukaiDetailController>()
inline CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* GameObject_GetComponent_TisCukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC_m6A572331D9C40D0D9B1243B31646EC87DBD46B36 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void CukaiDetailController::SetTarget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiDetailController_SetTarget_mF85A5DB58CCABF5748F603CEDFAFF1FD03F74021 (CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* __this, int32_t ___thisTarget0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Scrollbar>()
inline Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.UI.Scrollbar::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35 (Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804 (Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void FishLibraryController::hideFishObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_hideFishObjects_m93ABA499BC34637CEA542C49F5ECB26456D9ECB6 (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) ;
// System.Void FishLibraryController::hideTooltipObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_hideTooltipObjects_mF0FC6D83332787B19F6530DCB14CEA7EADFAF2FB (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) ;
// System.Void FishLibraryController::setText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_setText_m6F18B3D4FCE10A3F4C0B2D8687D6E81787EBEACE (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) ;
// System.Void FishLibraryController::setBottomInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_setBottomInformation_m47F8C11671E63AE8125267B7039CF2A09ED3BD5E (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) ;
// System.Void FishLibraryController::PlayAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_PlayAudio_m1A4DBDEE63BD040BFCC386A199D38217203CA5BA (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) ;
// System.Void FishLibraryController::hideFoodObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_hideFoodObjects_mCF49DCE4A559D3953735DFFE698CD0A8325E26AA (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) ;
// System.Void FishLibraryController::hideThreatObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_hideThreatObjects_mF374C4B489974770B80B5ED81CB01D5D8030703B (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) ;
// System.Void FishLibraryController::hideBottomToltips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_hideBottomToltips_m149FCB790BAC0C7ACC042831A5465D35E98387DC (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void FishLibraryController::PauseAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_PauseAudio_mB2F941CD0767C2505B570897148E7A6F118AD6BC (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) ;
// System.Void FlashLightController::ShowToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashLightController_ShowToast_mEF9D1402C8E389954DC56C0572E2972471B9B133 (FlashLightController_t48658171E89A77EE0757C22B42E801912BEAB86E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void easyar.CameraDevice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraDevice__ctor_m543A41D3E72251A627AB82453261948D713B20EB (CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* __this, const RuntimeMethod* method) ;
// System.Void PinchToZoom::Initiate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchToZoom_Initiate_m0C8E88F187F38CD97C2FEA3297197F95A8D9981C (PinchToZoom_tB49ED50CB614FC2134C03095C573B14B65E142F4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void SoundController::preLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_preLoad_mCDB80A57BBD280964025414B9513635BB21C4598 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) ;
// System.Void SoundController::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_Load_m0313BE674BA82B46B4E2CA61209FF22DBF4042AE (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void TimerController::setVideoButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_setVideoButton_m8750AF0B7154822D1E6220603BE00AED5F7D14C3 (TimerController_t9FACAA69550370472C446690F3AD92032ECE8CC5* __this, bool ___thisCondition0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Video.VideoPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator VideController::PlayVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VideController_PlayVideo_mD505C4512286F8C503BDBEB0D75E94D09A6BE776 (VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* __this, const RuntimeMethod* method) ;
// System.Void VideController/<PlayVideo>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayVideoU3Ed__14__ctor_m977FD08B359D50FA5C152F8AB37E62EED847FC8C (U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
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
// System.Void APPManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void APPManager_Awake_m29CF3127D0C1D4048EC4F89FF279CF6C3985AA5F (APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE_StaticFields*)il2cpp_codegen_static_fields_for(APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE_il2cpp_TypeInfo_var))->___instance_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE_StaticFields*)il2cpp_codegen_static_fields_for(APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE_il2cpp_TypeInfo_var))->___instance_6), (void*)__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_0, NULL);
		// }
		return;
	}
}
// System.Void APPManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void APPManager_Start_m1B7A9598820D25915A477294FF02459A1B111BF4 (APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB249B641F777FD9DD7C3E1F654B72D422681B433);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// GetIsPlay();
		APPManager_GetIsPlay_mD7C54274E588C3E3D3FF7470F2EC1512042CA7ED(__this, NULL);
		// if (!PlayerPrefs.HasKey("IsSkip"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteralB249B641F777FD9DD7C3E1F654B72D422681B433, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// PlayerPrefs.SetInt("IsSkip", 0);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralB249B641F777FD9DD7C3E1F654B72D422681B433, 0, NULL);
		// Load();
		APPManager_Load_mA9AE9B5DEFBD7A195EE035286B080DDE10928EC9(__this, NULL);
		goto IL_0039;
	}

IL_0030:
	{
		// Load();
		APPManager_Load_mA9AE9B5DEFBD7A195EE035286B080DDE10928EC9(__this, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void APPManager::SetSkip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void APPManager_SetSkip_m783D5831317ADD9DFD7E326D88DC169A20BEAA3F (APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB249B641F777FD9DD7C3E1F654B72D422681B433);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("IsSkip", 1);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralB249B641F777FD9DD7C3E1F654B72D422681B433, 1, NULL);
		// }
		return;
	}
}
// System.Void APPManager::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void APPManager_Load_mA9AE9B5DEFBD7A195EE035286B080DDE10928EC9 (APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB249B641F777FD9DD7C3E1F654B72D422681B433);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (PlayerPrefs.GetInt("IsSkip") == 0)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteralB249B641F777FD9DD7C3E1F654B72D422681B433, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// _isSkip = false;
		__this->____isSkip_13 = (bool)0;
		goto IL_0026;
	}

IL_001d:
	{
		// _isSkip = true;
		__this->____isSkip_13 = (bool)1;
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void APPManager::StartApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void APPManager_StartApp_m384754F0FC802AD52D11C4852ABFE27589979409 (APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisVideController_t01D5382A73805EC587F3ED5F50DB93633D01476E_m3A90C072F2755ADA8062EF41789367A565E9915A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_isSkip)
		bool L_0 = __this->____isSkip_13;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// videoPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___videoPanel_9;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// thisPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___thisPanel_7;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// videoPlayerObject.GetComponent<VideController>().SetVideo();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___videoPlayerObject_5;
		NullCheck(L_4);
		VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* L_5;
		L_5 = GameObject_GetComponent_TisVideController_t01D5382A73805EC587F3ED5F50DB93633D01476E_m3A90C072F2755ADA8062EF41789367A565E9915A(L_4, GameObject_GetComponent_TisVideController_t01D5382A73805EC587F3ED5F50DB93633D01476E_m3A90C072F2755ADA8062EF41789367A565E9915A_RuntimeMethod_var);
		NullCheck(L_5);
		VideController_SetVideo_mEA3FCB843FE1031270D3EC68129C5189EF5C3057(L_5, NULL);
		goto IL_0056;
	}

IL_003a:
	{
		// disclaimerPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___disclaimerPanel_8;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// thisPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___thisPanel_7;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void APPManager::GetIsPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void APPManager_GetIsPlay_mD7C54274E588C3E3D3FF7470F2EC1512042CA7ED (APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARManager_t082C478673DF5F5786DFB25006CC1643E8471245_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (ARManager.instance != null)
		ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* L_0 = ((ARManager_t082C478673DF5F5786DFB25006CC1643E8471245_StaticFields*)il2cpp_codegen_static_fields_for(ARManager_t082C478673DF5F5786DFB25006CC1643E8471245_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		// _isPlay = ARManager.instance.IsPlay;
		ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* L_3 = ((ARManager_t082C478673DF5F5786DFB25006CC1643E8471245_StaticFields*)il2cpp_codegen_static_fields_for(ARManager_t082C478673DF5F5786DFB25006CC1643E8471245_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_3);
		bool L_4 = L_3->___IsPlay_5;
		__this->____isPlay_12 = L_4;
		// if (_isPlay)
		bool L_5 = __this->____isPlay_12;
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		// mainMenuPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___mainMenuPanel_10;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// thisPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___thisPanel_7;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// background.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___background_11;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
	}

IL_0054:
	{
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void APPManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void APPManager__ctor_m122022866F53EC1DFFBC516356D683A00E935FBC (APPManager_t96153769FD153A21B12D7A92BCC51B036D804BCE* __this, const RuntimeMethod* method) 
{
	{
		// private bool _isPlay = false;
		__this->____isPlay_12 = (bool)0;
		// private bool _isSkip = false;
		__this->____isSkip_13 = (bool)0;
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
// System.Void ARManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_Awake_m7A4306FE51EC99D2434E368F8A2B57A11CDEF073 (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARManager_t082C478673DF5F5786DFB25006CC1643E8471245_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((ARManager_t082C478673DF5F5786DFB25006CC1643E8471245_StaticFields*)il2cpp_codegen_static_fields_for(ARManager_t082C478673DF5F5786DFB25006CC1643E8471245_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ARManager_t082C478673DF5F5786DFB25006CC1643E8471245_StaticFields*)il2cpp_codegen_static_fields_for(ARManager_t082C478673DF5F5786DFB25006CC1643E8471245_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_0, NULL);
		// }
		return;
	}
}
// System.Void ARManager::SetIsPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_SetIsPlay_m633D24CB40EEB65B6017E741F9F4A4BBB6BBA2DA (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, const RuntimeMethod* method) 
{
	{
		// IsPlay = true;
		__this->___IsPlay_5 = (bool)1;
		// }
		return;
	}
}
// System.Void ARManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_Start_m076359B9D8D438AB7042625E623EBE616B7FB6E3 (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, const RuntimeMethod* method) 
{
	{
		// SetIsPlay();
		ARManager_SetIsPlay_m633D24CB40EEB65B6017E741F9F4A4BBB6BBA2DA(__this, NULL);
		// }
		return;
	}
}
// System.Void ARManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager_Update_mDD46A69CED64360F68ADEAB5E28804C5F31A4736 (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ARManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARManager__ctor_m53D041B8379A885E4596A2980F29676BC9BC5931 (ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* __this, const RuntimeMethod* method) 
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
// System.Void ARSoundController::SetOnOffSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSoundController_SetOnOffSound_m23D83E8564BF2AF213AADC93B33C7FC1DE2F6BE6 (ARSoundController_tE93BE436BD0C6FE16F6400FAECD28DB26ACD04D0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// if (isSoundOn)
		bool L_0 = __this->___isSoundOn_8;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		// audioSource.Pause();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_4;
		NullCheck(L_2);
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_2, NULL);
		// for (int i = 0; i < soundImage.Length; i++)
		V_1 = 0;
		goto IL_0036;
	}

IL_001c:
	{
		// soundImage[i].sprite = soundOffSprite;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_3 = __this->___soundImage_5;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___soundOffSprite_6;
		NullCheck(L_6);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_6, L_7, NULL);
		// for (int i = 0; i < soundImage.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0036:
	{
		// for (int i = 0; i < soundImage.Length; i++)
		int32_t L_9 = V_1;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_10 = __this->___soundImage_5;
		NullCheck(L_10);
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_001c;
		}
	}
	{
		// isSoundOn = false;
		__this->___isSoundOn_8 = (bool)0;
		goto IL_0093;
	}

IL_004f:
	{
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___audioSource_4;
		NullCheck(L_12);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_12, NULL);
		// for (int i = 0; i < soundImage.Length; i++)
		V_3 = 0;
		goto IL_007a;
	}

IL_0060:
	{
		// soundImage[i].sprite = soundOnSprite;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_13 = __this->___soundImage_5;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = __this->___soundOnSprite_7;
		NullCheck(L_16);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_16, L_17, NULL);
		// for (int i = 0; i < soundImage.Length; i++)
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_007a:
	{
		// for (int i = 0; i < soundImage.Length; i++)
		int32_t L_19 = V_3;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_20 = __this->___soundImage_5;
		NullCheck(L_20);
		V_4 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))? 1 : 0);
		bool L_21 = V_4;
		if (L_21)
		{
			goto IL_0060;
		}
	}
	{
		// isSoundOn = true;
		__this->___isSoundOn_8 = (bool)1;
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void ARSoundController::SetOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSoundController_SetOn_m16CF012A11BD0AE9D08403E23D1215CAFCB63B27 (ARSoundController_tE93BE436BD0C6FE16F6400FAECD28DB26ACD04D0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_4;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// for (int i = 0; i < soundImage.Length; i++)
		V_0 = 0;
		goto IL_002b;
	}

IL_0011:
	{
		// soundImage[i].sprite = soundOnSprite;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_1 = __this->___soundImage_5;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___soundOnSprite_7;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_5, NULL);
		// for (int i = 0; i < soundImage.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002b:
	{
		// for (int i = 0; i < soundImage.Length; i++)
		int32_t L_7 = V_0;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_8 = __this->___soundImage_5;
		NullCheck(L_8);
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0011;
		}
	}
	{
		// isSoundOn = true;
		__this->___isSoundOn_8 = (bool)1;
		// }
		return;
	}
}
// System.Void ARSoundController::SetOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSoundController_SetOff_m5D51F28BDF2BB62743F342DAF4B86ACE699A5CDA (ARSoundController_tE93BE436BD0C6FE16F6400FAECD28DB26ACD04D0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// audioSource.Pause();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_4;
		NullCheck(L_0);
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_0, NULL);
		// for (int i = 0; i < soundImage.Length; i++)
		V_0 = 0;
		goto IL_002b;
	}

IL_0011:
	{
		// soundImage[i].sprite = soundOffSprite;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_1 = __this->___soundImage_5;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___soundOffSprite_6;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_5, NULL);
		// for (int i = 0; i < soundImage.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002b:
	{
		// for (int i = 0; i < soundImage.Length; i++)
		int32_t L_7 = V_0;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_8 = __this->___soundImage_5;
		NullCheck(L_8);
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0011;
		}
	}
	{
		// isSoundOn = false;
		__this->___isSoundOn_8 = (bool)0;
		// }
		return;
	}
}
// System.Void ARSoundController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSoundController_Start_m4E429AFD1769D3BACC71CCD09376F1E1DE033DC2 (ARSoundController_tE93BE436BD0C6FE16F6400FAECD28DB26ACD04D0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ARSoundController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSoundController_Update_mD173EF15DB834029013141B827AC536A37323412 (ARSoundController_tE93BE436BD0C6FE16F6400FAECD28DB26ACD04D0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ARSoundController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSoundController__ctor_m925F4FE8A9190A60B52B9B85F8A229E564867E36 (ARSoundController_tE93BE436BD0C6FE16F6400FAECD28DB26ACD04D0* __this, const RuntimeMethod* method) 
{
	{
		// private bool isSoundOn = false;
		__this->___isSoundOn_8 = (bool)0;
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
// System.Void BackController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackController_Start_m3C35FEBDB3D6111F9C1B1642FECA0F1E784184DE (BackController_t57D37947BE37FCA1E0BE05565E1483E2BDB6A511* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BackController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackController_Update_m1E9B0C61B5F75D0A75FCC279FE9340D455800265 (BackController_t57D37947BE37FCA1E0BE05565E1483E2BDB6A511* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// if (Input.GetKey(KeyCode.Escape))
		bool L_2;
		L_2 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)27), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// unityEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = __this->___unityEvent_4;
		NullCheck(L_4);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_4, NULL);
		// return;
		goto IL_0048;
	}

IL_0029:
	{
		goto IL_0048;
	}

IL_002c:
	{
		// if (Input.GetKey(KeyCode.Escape))
		bool L_5;
		L_5 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)27), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// unityEvent.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_7 = __this->___unityEvent_4;
		NullCheck(L_7);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_7, NULL);
		// return;
		goto IL_0048;
	}

IL_0047:
	{
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void BackController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackController__ctor_mDCDA29E6AAF9A55B9164A6388C100822CF1DE147 (BackController_t57D37947BE37FCA1E0BE05565E1483E2BDB6A511* __this, const RuntimeMethod* method) 
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
// System.Void BackgroundController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundController_Start_mA74449B45D883CEDCBCED613117AEBA653DC2D29 (BackgroundController_tEA49BA1BD9E225916F82C0D0841C6B5A0480CE83* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(PlayVideo(2));
		RuntimeObject* L_0;
		L_0 = BackgroundController_PlayVideo_mAC3BCBF210183238E10C86D2E6F0CEEDFFC8E6CB(__this, (2.0f), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void BackgroundController::SetVideo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundController_SetVideo_m18635F20410839A99F0888F3DF67B24CE855E7B1 (BackgroundController_tEA49BA1BD9E225916F82C0D0841C6B5A0480CE83* __this, float ____time0, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(PlayVideo(_time));
		float L_0 = ____time0;
		RuntimeObject* L_1;
		L_1 = BackgroundController_PlayVideo_mAC3BCBF210183238E10C86D2E6F0CEEDFFC8E6CB(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator BackgroundController::PlayVideo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BackgroundController_PlayVideo_mAC3BCBF210183238E10C86D2E6F0CEEDFFC8E6CB (BackgroundController_tEA49BA1BD9E225916F82C0D0841C6B5A0480CE83* __this, float ____time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E* L_0 = (U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E*)il2cpp_codegen_object_new(U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPlayVideoU3Ed__5__ctor_m0A2FD1DB111612917BF4F542F2C16AD010F20865(L_0, 0, NULL);
		U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E* L_2 = L_1;
		float L_3 = ____time0;
		NullCheck(L_2);
		L_2->____time_2 = L_3;
		return L_2;
	}
}
// System.Void BackgroundController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundController_Update_m4061194F1BF73CED09AE7040B8636828F81259E6 (BackgroundController_tEA49BA1BD9E225916F82C0D0841C6B5A0480CE83* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (!videoPlayer.isPlaying)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// StartCoroutine(PlayVideo(2));
		RuntimeObject* L_3;
		L_3 = BackgroundController_PlayVideo_mAC3BCBF210183238E10C86D2E6F0CEEDFFC8E6CB(__this, (2.0f), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void BackgroundController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundController__ctor_m494368BE77D21706AE0A6F23B60836B9299815CC (BackgroundController_tEA49BA1BD9E225916F82C0D0841C6B5A0480CE83* __this, const RuntimeMethod* method) 
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
// System.Void BackgroundController/<PlayVideo>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayVideoU3Ed__5__ctor_m0A2FD1DB111612917BF4F542F2C16AD010F20865 (U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BackgroundController/<PlayVideo>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayVideoU3Ed__5_System_IDisposable_Dispose_mB437F666F2694CD0357DF07BB66B5116C8D882EF (U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BackgroundController/<PlayVideo>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlayVideoU3Ed__5_MoveNext_m79C39D1C0D6DD7B811422210699D99E145F4A469 (U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
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
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0076;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// videoPlayer.clip = videoToPlay;
		BackgroundController_tEA49BA1BD9E225916F82C0D0841C6B5A0480CE83* L_3 = __this->___U3CU3E4__this_3;
		NullCheck(L_3);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_4 = L_3->___videoPlayer_4;
		BackgroundController_tEA49BA1BD9E225916F82C0D0841C6B5A0480CE83* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_5);
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_6 = L_5->___videoToPlay_5;
		NullCheck(L_4);
		VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9(L_4, L_6, NULL);
		// videoPlayer.Prepare();
		BackgroundController_tEA49BA1BD9E225916F82C0D0841C6B5A0480CE83* L_7 = __this->___U3CU3E4__this_3;
		NullCheck(L_7);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_8 = L_7->___videoPlayer_4;
		NullCheck(L_8);
		VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA(L_8, NULL);
		// WaitForSeconds waitForSeconds = new WaitForSeconds(_time);
		float L_9 = __this->____time_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, L_9, NULL);
		__this->___U3CwaitForSecondsU3E5__1_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwaitForSecondsU3E5__1_4), (void*)L_10);
		goto IL_007f;
	}

IL_0060:
	{
		// yield return waitForSeconds;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = __this->___U3CwaitForSecondsU3E5__1_4;
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0076:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// break;
		goto IL_0096;
	}

IL_007f:
	{
		// while (!videoPlayer.isPrepared)
		BackgroundController_tEA49BA1BD9E225916F82C0D0841C6B5A0480CE83* L_12 = __this->___U3CU3E4__this_3;
		NullCheck(L_12);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_13 = L_12->___videoPlayer_4;
		NullCheck(L_13);
		bool L_14;
		L_14 = VideoPlayer_get_isPrepared_mF2F3AD27BE0FD06695EE9DEE762B68F431E15767(L_13, NULL);
		V_1 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_1;
		if (L_15)
		{
			goto IL_0060;
		}
	}

IL_0096:
	{
		// image.texture = videoPlayer.texture;
		BackgroundController_tEA49BA1BD9E225916F82C0D0841C6B5A0480CE83* L_16 = __this->___U3CU3E4__this_3;
		NullCheck(L_16);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_17 = L_16->___image_6;
		BackgroundController_tEA49BA1BD9E225916F82C0D0841C6B5A0480CE83* L_18 = __this->___U3CU3E4__this_3;
		NullCheck(L_18);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_19 = L_18->___videoPlayer_4;
		NullCheck(L_19);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_20;
		L_20 = VideoPlayer_get_texture_m1BA7033FEB30FEC507A4605FDD5C4B78BB81C379(L_19, NULL);
		NullCheck(L_17);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_17, L_20, NULL);
		// videoPlayer.Play();
		BackgroundController_tEA49BA1BD9E225916F82C0D0841C6B5A0480CE83* L_21 = __this->___U3CU3E4__this_3;
		NullCheck(L_21);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_22 = L_21->___videoPlayer_4;
		NullCheck(L_22);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_22, NULL);
		// }
		return (bool)0;
	}
}
// System.Object BackgroundController/<PlayVideo>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayVideoU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m77557319CC0036000AA915ECE0E25E81EA81757C (U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BackgroundController/<PlayVideo>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayVideoU3Ed__5_System_Collections_IEnumerator_Reset_m0A18C89F0273CB41B1ED31674D442AEA75DF32AA (U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlayVideoU3Ed__5_System_Collections_IEnumerator_Reset_m0A18C89F0273CB41B1ED31674D442AEA75DF32AA_RuntimeMethod_var)));
	}
}
// System.Object BackgroundController/<PlayVideo>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayVideoU3Ed__5_System_Collections_IEnumerator_get_Current_mC4DC29C4C4311226B8F409551F2FD46696DF05A8 (U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E* __this, const RuntimeMethod* method) 
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
// System.Void ButtonManager::showObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_showObject_m3D0A556FE56997107C3E4B4B8DB2F3F42B95D358 (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetObject0, const RuntimeMethod* method) 
{
	{
		// targetObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targetObject0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::hideObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_hideObject_m3E07795318FB1FD61AD0CD44389482135D337441 (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targerObject0, const RuntimeMethod* method) 
{
	{
		// targerObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___targerObject0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::openUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_openUrl_mD0AF603DE5562F1C63729626C9F4BFB576016CEE (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, String_t* ___thisUrl0, const RuntimeMethod* method) 
{
	{
		// Application.OpenURL(thisUrl);
		String_t* L_0 = ___thisUrl0;
		Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564(L_0, NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::setImage(UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_setImage_m9C939D495E1DA471A6D3F5E9DACC65A3C7F05A93 (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___thisImage0, const RuntimeMethod* method) 
{
	{
		// image = thisImage;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = ___thisImage0;
		__this->___image_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___image_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void ButtonManager::setSprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_setSprite_m45DC06A468A5C012409642DF3320D5B338050666 (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___thisSprite0, const RuntimeMethod* method) 
{
	{
		// sprite = thisSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___thisSprite0;
		__this->___sprite_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sprite_5), (void*)L_0);
		// setSpriteToImage();
		ButtonManager_setSpriteToImage_mB485BF9FFE1492C0D51EAF7AA641F2436436E313(__this, NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::setSpriteToImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_setSpriteToImage_mB485BF9FFE1492C0D51EAF7AA641F2436436E313 (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, const RuntimeMethod* method) 
{
	{
		// image.sprite = sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___image_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = __this->___sprite_5;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::openScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_openScene_m454F7249C6F76E6D609B9EE3B60E06DBAE4F7D0F (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___sceneName0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_0, NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::AppExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_AppExit_mEA81E8E647A69A2F71A0077964235A4EED05BF8B (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::playButtonSoundEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_playButtonSoundEffect_m74704F55F96C7C2A066E245418E470DBD71D9847 (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, const RuntimeMethod* method) 
{
	{
		// buttonSoundEffect.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___buttonSoundEffect_6;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager__ctor_m7DBD91D2AF27494F6AC7DC74DE679919AB1DD71F (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, const RuntimeMethod* method) 
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
// System.Void CukaiController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiController_Start_mE27D51FB039698C7AAA987C825EAF53550CB4A07 (CukaiController_t907F5CB7084F3B209B9AAD1CC5B2386DF99C5F12* __this, const RuntimeMethod* method) 
{
	{
		// _position = 0;
		__this->____position_10 = 0;
		// SetImage(_position);
		int32_t L_0 = __this->____position_10;
		CukaiController_SetImage_mD81ED746D20FC15BB9FD922D134413906F198CB2(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void CukaiController::chooseImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiController_chooseImage_mF29C19084BC0FD41CEDD107851275047E2A35CBD (CukaiController_t907F5CB7084F3B209B9AAD1CC5B2386DF99C5F12* __this, int32_t ___position0, const RuntimeMethod* method) 
{
	{
		// SetImage(position);
		int32_t L_0 = ___position0;
		CukaiController_SetImage_mD81ED746D20FC15BB9FD922D134413906F198CB2(__this, L_0, NULL);
		// _position = position;
		int32_t L_1 = ___position0;
		__this->____position_10 = L_1;
		// SetDefaultButton();
		CukaiController_SetDefaultButton_mEC531B60D9C2C7B0CF2E89D9A1C493E05D680FA1(__this, NULL);
		// hoverImage[position].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___hoverImage_11;
		int32_t L_3 = ___position0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CukaiController::changeVariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiController_changeVariant_m59A7851AE6D35CAB0C056E298E5D1C2D330D4BC9 (CukaiController_t907F5CB7084F3B209B9AAD1CC5B2386DF99C5F12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Debug.Log("test");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1, NULL);
		// if (isVariant)
		bool L_0 = __this->___isVariant_9;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// isVariant = false;
		__this->___isVariant_9 = (bool)0;
		// SetImage(_position);
		int32_t L_2 = __this->____position_10;
		CukaiController_SetImage_mD81ED746D20FC15BB9FD922D134413906F198CB2(__this, L_2, NULL);
		goto IL_0044;
	}

IL_002e:
	{
		// isVariant=true;
		__this->___isVariant_9 = (bool)1;
		// SetImage(_position);
		int32_t L_3 = __this->____position_10;
		CukaiController_SetImage_mD81ED746D20FC15BB9FD922D134413906F198CB2(__this, L_3, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void CukaiController::SetDefaultButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiController_SetDefaultButton_mEC531B60D9C2C7B0CF2E89D9A1C493E05D680FA1 (CukaiController_t907F5CB7084F3B209B9AAD1CC5B2386DF99C5F12* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for(int i = 0; i < hoverImage.Length; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0005:
	{
		// hoverImage[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___hoverImage_11;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for(int i = 0; i < hoverImage.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001a:
	{
		// for(int i = 0; i < hoverImage.Length; i++)
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___hoverImage_11;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CukaiController::SetImage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiController_SetImage_mD81ED746D20FC15BB9FD922D134413906F198CB2 (CukaiController_t907F5CB7084F3B209B9AAD1CC5B2386DF99C5F12* __this, int32_t ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// for(int i = 0; i < cukaiImage.Length; i++)
		V_0 = 0;
		goto IL_0067;
	}

IL_0005:
	{
		// if (isVariant)
		bool L_0 = __this->___isVariant_9;
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// cukaiImage[i].sprite = variantSprite[position];
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_2 = __this->___cukaiImage_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_6 = __this->___variantSprite_6;
		int32_t L_7 = ___position0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_9, NULL);
		goto IL_0042;
	}

IL_002a:
	{
		// cukaiImage[i].sprite = defaultSprite[position];
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_10 = __this->___cukaiImage_4;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_14 = __this->___defaultSprite_5;
		int32_t L_15 = ___position0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_13);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_13, L_17, NULL);
	}

IL_0042:
	{
		// uvImage.sprite = uvSprite[position];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___uvImage_7;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_19 = __this->___uvSprite_8;
		int32_t L_20 = ___position0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_18, L_22, NULL);
		// Debug.Log(position);
		int32_t L_23 = ___position0;
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_24);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_25, NULL);
		// for(int i = 0; i < cukaiImage.Length; i++)
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0067:
	{
		// for(int i = 0; i < cukaiImage.Length; i++)
		int32_t L_27 = V_0;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_28 = __this->___cukaiImage_4;
		NullCheck(L_28);
		V_2 = (bool)((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))? 1 : 0);
		bool L_29 = V_2;
		if (L_29)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CukaiController::collorButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiController_collorButton_m7ABC0D280D5ACE120AA539CDEF5C58E7D02CA70B (CukaiController_t907F5CB7084F3B209B9AAD1CC5B2386DF99C5F12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82C3B166E09CFA044444785C7F06DAFB6DBDEE29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB627E4FD7105A1822034ACCA4E9FBEBC1D20B814);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC982AA36B105954A981313010D5DDC199E9B76CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF81623400486AF99C5F9706770E2C0C01BD64184);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (isCollorButtonOpened)
		bool L_0 = __this->___isCollorButtonOpened_14;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// colorButtonAnimator.Play("close_button");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___colorButtonAnimator_13;
		NullCheck(L_2);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_2, _stringLiteralB627E4FD7105A1822034ACCA4E9FBEBC1D20B814, NULL);
		// colorPickerAnimator.Play("close_color_picker");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___colorPickerAnimator_12;
		NullCheck(L_3);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_3, _stringLiteralC982AA36B105954A981313010D5DDC199E9B76CD, NULL);
		// isCollorButtonOpened = false;
		__this->___isCollorButtonOpened_14 = (bool)0;
		goto IL_0063;
	}

IL_0038:
	{
		// colorButtonAnimator.Play("open_button");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___colorButtonAnimator_13;
		NullCheck(L_4);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_4, _stringLiteralF81623400486AF99C5F9706770E2C0C01BD64184, NULL);
		// colorPickerAnimator.Play("color_picker");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___colorPickerAnimator_12;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral82C3B166E09CFA044444785C7F06DAFB6DBDEE29, NULL);
		// isCollorButtonOpened = true;
		__this->___isCollorButtonOpened_14 = (bool)1;
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void CukaiController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiController__ctor_mCCE6F56E04EEAB57CA5D8388C0562D32FA31743E (CukaiController_t907F5CB7084F3B209B9AAD1CC5B2386DF99C5F12* __this, const RuntimeMethod* method) 
{
	{
		// bool isVariant = false;
		__this->___isVariant_9 = (bool)0;
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
// System.Void CukaiDetailController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiDetailController_Start_m17A1E44AF8C7439E6B2DC287B0A15A00812D4162 (CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* __this, const RuntimeMethod* method) 
{
	{
		// descLength = descObject.Length - initiateSkip;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___descObject_4;
		NullCheck(L_0);
		int32_t L_1 = __this->___initiateSkip_7;
		__this->___descLength_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), L_1));
		// Initiate();
		CukaiDetailController_Initiate_mF08648BDED2A68124093DA840E90A667DC0EEDD6(__this, NULL);
		// }
		return;
	}
}
// System.Void CukaiDetailController::Initiate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiDetailController_Initiate_mF08648BDED2A68124093DA840E90A667DC0EEDD6 (CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* __this, const RuntimeMethod* method) 
{
	{
		// position = 0;
		__this->___position_8 = 0;
		// initPosition = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_1, NULL);
		__this->___initPosition_12 = L_2;
		// NonActiveObject();
		CukaiDetailController_NonActiveObject_m42317C8D045DC14ABAA1DEBDF5D61B1D320D9F0C(__this, NULL);
		// descObject[position].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___descObject_4;
		int32_t L_4 = __this->___position_8;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// InitiateDesc();
		CukaiDetailController_InitiateDesc_m2A8D2AE560005FD068F1F1608A4615752BC703EB(__this, NULL);
		// }
		return;
	}
}
// System.Void CukaiDetailController::InitiateDesc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiDetailController_InitiateDesc_m2A8D2AE560005FD068F1F1608A4615752BC703EB (CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (descText.Length == descString.Length)
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_0 = __this->___descText_6;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___descString_5;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		// for (int i = 0; i < descText.Length; i++)
		V_1 = 0;
		goto IL_0038;
	}

IL_001c:
	{
		// descText[i].text = descString[i];
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_3 = __this->___descText_6;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = __this->___descString_5;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_10);
		// for (int i = 0; i < descText.Length; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0038:
	{
		// for (int i = 0; i < descText.Length; i++)
		int32_t L_12 = V_1;
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_13 = __this->___descText_6;
		NullCheck(L_13);
		V_2 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0);
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_001c;
		}
	}
	{
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void CukaiDetailController::ImageType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiDetailController_ImageType_m6EE172D602914CDB1A2FB23ED17C5FA9CCD165BA (CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* __this, int32_t ____skiped0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// descLength = descObject.Length;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___descObject_4;
		NullCheck(L_0);
		__this->___descLength_9 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// descLength = descLength - _skiped;
		int32_t L_1 = __this->___descLength_9;
		int32_t L_2 = ____skiped0;
		__this->___descLength_9 = ((int32_t)il2cpp_codegen_subtract(L_1, L_2));
		// Debug.Log(descLength);
		int32_t L_3 = __this->___descLength_9;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// }
		return;
	}
}
// System.Void CukaiDetailController::SetTarget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiDetailController_SetTarget_mF85A5DB58CCABF5748F603CEDFAFF1FD03F74021 (CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* __this, int32_t ___thisTarget0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (thisTarget >= 0 &&  thisTarget <= descObject.Length)
		int32_t L_0 = ___thisTarget0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___thisTarget0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___descObject_4;
		NullCheck(L_2);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) > ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		// position = thisTarget;
		int32_t L_4 = ___thisTarget0;
		__this->___position_8 = L_4;
		// NonActiveObject();
		CukaiDetailController_NonActiveObject_m42317C8D045DC14ABAA1DEBDF5D61B1D320D9F0C(__this, NULL);
		// descObject[position].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___descObject_4;
		int32_t L_6 = __this->___position_8;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void CukaiDetailController::NextObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiDetailController_NextObject_mBE64D73A709F676B2B6E5A189F2AC335F266CE44 (CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (position < descLength - 1)
		int32_t L_0 = __this->___position_8;
		int32_t L_1 = __this->___descLength_9;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, 1))))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// position++;
		int32_t L_3 = __this->___position_8;
		__this->___position_8 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// NonActiveObject();
		CukaiDetailController_NonActiveObject_m42317C8D045DC14ABAA1DEBDF5D61B1D320D9F0C(__this, NULL);
		// descObject[position].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___descObject_4;
		int32_t L_5 = __this->___position_8;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void CukaiDetailController::PrevObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiDetailController_PrevObject_mA20262A2488EB6E35180EAD26632DBCB3AD0BA61 (CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (position > 0)
		int32_t L_0 = __this->___position_8;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// position--;
		int32_t L_2 = __this->___position_8;
		__this->___position_8 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// NonActiveObject();
		CukaiDetailController_NonActiveObject_m42317C8D045DC14ABAA1DEBDF5D61B1D320D9F0C(__this, NULL);
		// descObject[position].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___descObject_4;
		int32_t L_4 = __this->___position_8;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator CukaiDetailController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CukaiDetailController_Move_m325602398EE3794670A8AC0D4ECE67F6837B603A (CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveU3Ed__16_tB05E95B73029F04A4E1390197A684757674BD94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveU3Ed__16_tB05E95B73029F04A4E1390197A684757674BD94D* L_0 = (U3CMoveU3Ed__16_tB05E95B73029F04A4E1390197A684757674BD94D*)il2cpp_codegen_object_new(U3CMoveU3Ed__16_tB05E95B73029F04A4E1390197A684757674BD94D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMoveU3Ed__16__ctor_m87CF390DB25DA1809722047576B99111DF534C60(L_0, 0, NULL);
		U3CMoveU3Ed__16_tB05E95B73029F04A4E1390197A684757674BD94D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CukaiDetailController::NonActiveObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiDetailController_NonActiveObject_m42317C8D045DC14ABAA1DEBDF5D61B1D320D9F0C (CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < descObject.Length; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0005:
	{
		// descObject[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___descObject_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for (int i = 0; i < descObject.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < descObject.Length; i++)
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___descObject_4;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CukaiDetailController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiDetailController_Update_m7F354F711AADE4176DFE1D4C9DE834FA81B45DAA (CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (isMove)
		bool L_0 = __this->___isMove_11;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		// transform.localPosition = Vector2.Lerp(transform.localPosition, objectPosisiton[position], Time.deltaTime * 3f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_4, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = __this->___objectPosisiton_10;
		int32_t L_7 = __this->___position_8;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		float L_10;
		L_10 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline(L_5, L_9, ((float)il2cpp_codegen_multiply(L_10, (3.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_11, NULL);
		NullCheck(L_2);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_2, L_12, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void CukaiDetailController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiDetailController__ctor_m25C7FF03DE63D0573C6EA9D04202C62C8BC5CE74 (CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* __this, const RuntimeMethod* method) 
{
	{
		// public int initiateSkip = 0;
		__this->___initiateSkip_7 = 0;
		// int position = 0;
		__this->___position_8 = 0;
		// public bool isMove = false;
		__this->___isMove_11 = (bool)0;
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
// System.Void CukaiDetailController/<Move>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__16__ctor_m87CF390DB25DA1809722047576B99111DF534C60 (U3CMoveU3Ed__16_tB05E95B73029F04A4E1390197A684757674BD94D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CukaiDetailController/<Move>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__16_System_IDisposable_Dispose_mCA75422DB39B657F237B3FBF1E99B240464C1CE2 (U3CMoveU3Ed__16_tB05E95B73029F04A4E1390197A684757674BD94D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CukaiDetailController/<Move>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveU3Ed__16_MoveNext_m5E206950FB86FA549F59D0F86199A0AF9921141F (U3CMoveU3Ed__16_tB05E95B73029F04A4E1390197A684757674BD94D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
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
		goto IL_0107;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float time = 0;
		__this->___U3CtimeU3E5__1_3 = (0.0f);
		// time += Time.deltaTime;
		float L_3 = __this->___U3CtimeU3E5__1_3;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___U3CtimeU3E5__1_3 = ((float)il2cpp_codegen_add(L_3, L_4));
		// transform.localPosition = new Vector3(Mathf.SmoothStep(objectPosisiton[position].x, objectPosisiton[position + 1].x, time),
		//                                         Mathf.SmoothStep(objectPosisiton[position].y, objectPosisiton[position + 1].y, time),
		//                                         0);
		CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_8 = L_7->___objectPosisiton_10;
		CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* L_9 = __this->___U3CU3E4__this_2;
		NullCheck(L_9);
		int32_t L_10 = L_9->___position_8;
		NullCheck(L_8);
		float L_11 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___x_0;
		CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* L_12 = __this->___U3CU3E4__this_2;
		NullCheck(L_12);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13 = L_12->___objectPosisiton_10;
		CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		int32_t L_15 = L_14->___position_8;
		NullCheck(L_13);
		float L_16 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_15, 1)))))->___x_0;
		float L_17 = __this->___U3CtimeU3E5__1_3;
		float L_18;
		L_18 = Mathf_SmoothStep_mF724C7893D0F0C02FB14D573DDB7F92935451B81_inline(L_11, L_16, L_17, NULL);
		CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* L_19 = __this->___U3CU3E4__this_2;
		NullCheck(L_19);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_20 = L_19->___objectPosisiton_10;
		CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* L_21 = __this->___U3CU3E4__this_2;
		NullCheck(L_21);
		int32_t L_22 = L_21->___position_8;
		NullCheck(L_20);
		float L_23 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)))->___y_1;
		CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* L_24 = __this->___U3CU3E4__this_2;
		NullCheck(L_24);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_25 = L_24->___objectPosisiton_10;
		CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* L_26 = __this->___U3CU3E4__this_2;
		NullCheck(L_26);
		int32_t L_27 = L_26->___position_8;
		NullCheck(L_25);
		float L_28 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_27, 1)))))->___y_1;
		float L_29 = __this->___U3CtimeU3E5__1_3;
		float L_30;
		L_30 = Mathf_SmoothStep_mF724C7893D0F0C02FB14D573DDB7F92935451B81_inline(L_23, L_28, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), L_18, L_30, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_31, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0107:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object CukaiDetailController/<Move>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF67A4B824EDE3FF4E65A9D5F599E7B02A06BB74B (U3CMoveU3Ed__16_tB05E95B73029F04A4E1390197A684757674BD94D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CukaiDetailController/<Move>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__16_System_Collections_IEnumerator_Reset_m0F038DDAB843A2FCDDF5C85AA7A97F74ADADAF51 (U3CMoveU3Ed__16_tB05E95B73029F04A4E1390197A684757674BD94D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveU3Ed__16_System_Collections_IEnumerator_Reset_m0F038DDAB843A2FCDDF5C85AA7A97F74ADADAF51_RuntimeMethod_var)));
	}
}
// System.Object CukaiDetailController/<Move>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveU3Ed__16_System_Collections_IEnumerator_get_Current_m5ED29F0DDCAA80C5A70774540EF6223695840576 (U3CMoveU3Ed__16_tB05E95B73029F04A4E1390197A684757674BD94D* __this, const RuntimeMethod* method) 
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
// System.Void CukaiSwipeController::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiSwipeController_OnDrag_m34BAC3EFE0065E3D8837B657605E5473D65D39D6 (CukaiSwipeController_tB211EE93D6C4E4F405560299420BDAAB2608208E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = new Vector2(transform.localPosition.x + (eventData.delta.x * _rate), transform.localPosition.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		float L_3 = L_2.___x_2;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_4, NULL);
		float L_6 = L_5.___x_0;
		float L_7 = __this->____rate_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		float L_10 = L_9.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_6, L_7)))), L_10, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_11, NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_12, NULL);
		// }
		return;
	}
}
// System.Void CukaiSwipeController::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiSwipeController_OnBeginDrag_m36D2D93399F452140F223D897CA301176D7963BD (CukaiSwipeController_tB211EE93D6C4E4F405560299420BDAAB2608208E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// _initialPosition = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->____initialPosition_4 = L_1;
		// }
		return;
	}
}
// System.Void CukaiSwipeController::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiSwipeController_OnEndDrag_m0C0B8F20C745CDA956CCC7973C7B421B81EA6B8C (CukaiSwipeController_tB211EE93D6C4E4F405560299420BDAAB2608208E* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC_m6A572331D9C40D0D9B1243B31646EC87DBD46B36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (transform.localPosition.x < _initialPosition.x)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->____initialPosition_4);
		float L_4 = L_3->___x_2;
		V_0 = (bool)((((float)L_2) < ((float)L_4))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0076;
		}
	}
	{
		// if (position < pos.Length - 1)
		int32_t L_6 = __this->___position_10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = __this->___pos_9;
		NullCheck(L_7);
		V_1 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), 1))))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0073;
		}
	}
	{
		// position++;
		int32_t L_9 = __this->___position_10;
		__this->___position_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// scrollPos = pos[position];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___pos_9;
		int32_t L_11 = __this->___position_10;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		float L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->___scrollPos_8 = L_13;
		// cukaiDetailObject.GetComponent<CukaiDetailController>().SetTarget(position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___cukaiDetailObject_6;
		NullCheck(L_14);
		CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* L_15;
		L_15 = GameObject_GetComponent_TisCukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC_m6A572331D9C40D0D9B1243B31646EC87DBD46B36(L_14, GameObject_GetComponent_TisCukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC_m6A572331D9C40D0D9B1243B31646EC87DBD46B36_RuntimeMethod_var);
		int32_t L_16 = __this->___position_10;
		NullCheck(L_15);
		CukaiDetailController_SetTarget_mF85A5DB58CCABF5748F603CEDFAFF1FD03F74021(L_15, L_16, NULL);
	}

IL_0073:
	{
		goto IL_00bf;
	}

IL_0076:
	{
		// if (position > 0)
		int32_t L_17 = __this->___position_10;
		V_2 = (bool)((((int32_t)L_17) > ((int32_t)0))? 1 : 0);
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_00be;
		}
	}
	{
		// position--;
		int32_t L_19 = __this->___position_10;
		__this->___position_10 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		// scrollPos = pos[position];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = __this->___pos_9;
		int32_t L_21 = __this->___position_10;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		float L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		__this->___scrollPos_8 = L_23;
		// cukaiDetailObject.GetComponent<CukaiDetailController>().SetTarget(position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___cukaiDetailObject_6;
		NullCheck(L_24);
		CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* L_25;
		L_25 = GameObject_GetComponent_TisCukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC_m6A572331D9C40D0D9B1243B31646EC87DBD46B36(L_24, GameObject_GetComponent_TisCukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC_m6A572331D9C40D0D9B1243B31646EC87DBD46B36_RuntimeMethod_var);
		int32_t L_26 = __this->___position_10;
		NullCheck(L_25);
		CukaiDetailController_SetTarget_mF85A5DB58CCABF5748F603CEDFAFF1FD03F74021(L_25, L_26, NULL);
	}

IL_00be:
	{
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void CukaiSwipeController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiSwipeController_Update_m5427258E7F504E5CA6D6D80331146AB11DCD8F75 (CukaiSwipeController_tB211EE93D6C4E4F405560299420BDAAB2608208E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B9_0 = 0;
	{
		// pos = new float[transform.childCount];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___pos_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pos_9), (void*)L_2);
		// float distance = 1f / (pos.Length - 1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___pos_9;
		NullCheck(L_3);
		V_0 = ((float)((1.0f)/((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1)))));
		// for (int i = 0; i < pos.Length; i++)
		V_1 = 0;
		goto IL_003f;
	}

IL_002d:
	{
		// pos[i] = distance * i;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___pos_9;
		int32_t L_5 = V_1;
		float L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (float)((float)il2cpp_codegen_multiply(L_6, ((float)L_7))));
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003f:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_9 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___pos_9;
		NullCheck(L_10);
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_002d;
		}
	}
	{
		// if (Input.GetMouseButton(0))
		bool L_12;
		L_12 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0075;
		}
	}
	{
		// scrollPos = scrollbar.GetComponent<Scrollbar>().value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___scrollbar_7;
		NullCheck(L_14);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_15;
		L_15 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_14, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		NullCheck(L_15);
		float L_16;
		L_16 = Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35(L_15, NULL);
		__this->___scrollPos_8 = L_16;
		goto IL_010a;
	}

IL_0075:
	{
		// for (int i = 0; i < pos.Length; i++)
		V_4 = 0;
		goto IL_00f4;
	}

IL_007b:
	{
		// if (scrollPos < pos[i] + (distance / 2) && scrollPos > pos[i] - (distance / 2))
		float L_17 = __this->___scrollPos_8;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = __this->___pos_9;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		float L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		float L_22 = V_0;
		if ((!(((float)L_17) < ((float)((float)il2cpp_codegen_add(L_21, ((float)(L_22/(2.0f)))))))))
		{
			goto IL_00b0;
		}
	}
	{
		float L_23 = __this->___scrollPos_8;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = __this->___pos_9;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		float L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		float L_28 = V_0;
		G_B9_0 = ((((float)L_23) > ((float)((float)il2cpp_codegen_subtract(L_27, ((float)(L_28/(2.0f)))))))? 1 : 0);
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B9_0 = 0;
	}

IL_00b1:
	{
		V_5 = (bool)G_B9_0;
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_00ed;
		}
	}
	{
		// scrollbar.GetComponent<Scrollbar>().value = Mathf.Lerp(scrollbar.GetComponent<Scrollbar>().value, pos[i], 0.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___scrollbar_7;
		NullCheck(L_30);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_31;
		L_31 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_30, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___scrollbar_7;
		NullCheck(L_32);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_33;
		L_33 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_32, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		NullCheck(L_33);
		float L_34;
		L_34 = Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35(L_33, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = __this->___pos_9;
		int32_t L_36 = V_4;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		float L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		float L_39;
		L_39 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_34, L_38, (0.5f), NULL);
		NullCheck(L_31);
		Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804(L_31, L_39, NULL);
	}

IL_00ed:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_40 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00f4:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_41 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = __this->___pos_9;
		NullCheck(L_42);
		V_6 = (bool)((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))? 1 : 0);
		bool L_43 = V_6;
		if (L_43)
		{
			goto IL_007b;
		}
	}
	{
	}

IL_010a:
	{
		// }
		return;
	}
}
// System.Void CukaiSwipeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiSwipeController__ctor_m169AC9C75DB028E26032828D2D32E86B3B3EDB5A (CukaiSwipeController_tB211EE93D6C4E4F405560299420BDAAB2608208E* __this, const RuntimeMethod* method) 
{
	{
		// private float _rate = 0.3f;
		__this->____rate_5 = (0.300000012f);
		// float scrollPos = 0;
		__this->___scrollPos_8 = (0.0f);
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
// System.Void FishLibraryController::setFishLibrary(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_setFishLibrary_mC3935D347044B73311D041523E8F5D2525697E50 (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, int32_t ___thisIndex0, const RuntimeMethod* method) 
{
	{
		// index = thisIndex;
		int32_t L_0 = ___thisIndex0;
		__this->___index_16 = L_0;
		// hideFishObjects();
		FishLibraryController_hideFishObjects_m93ABA499BC34637CEA542C49F5ECB26456D9ECB6(__this, NULL);
		// fishObjects[index].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___fishObjects_4;
		int32_t L_2 = __this->___index_16;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// hideTooltipObjects();
		FishLibraryController_hideTooltipObjects_mF0FC6D83332787B19F6530DCB14CEA7EADFAF2FB(__this, NULL);
		// tooltipObjects[index].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___tooltipObjects_5;
		int32_t L_6 = __this->___index_16;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// setText();
		FishLibraryController_setText_m6F18B3D4FCE10A3F4C0B2D8687D6E81787EBEACE(__this, NULL);
		// setBottomInformation();
		FishLibraryController_setBottomInformation_m47F8C11671E63AE8125267B7039CF2A09ED3BD5E(__this, NULL);
		// PlayAudio();
		FishLibraryController_PlayAudio_m1A4DBDEE63BD040BFCC386A199D38217203CA5BA(__this, NULL);
		// }
		return;
	}
}
// System.Void FishLibraryController::setBottomInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_setBottomInformation_m47F8C11671E63AE8125267B7039CF2A09ED3BD5E (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	{
		// hideFoodObjects();
		FishLibraryController_hideFoodObjects_mCF49DCE4A559D3953735DFFE698CD0A8325E26AA(__this, NULL);
		// foodObjects[index].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___foodObjects_12;
		int32_t L_1 = __this->___index_16;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// hideThreatObjects();
		FishLibraryController_hideThreatObjects_mF374C4B489974770B80B5ED81CB01D5D8030703B(__this, NULL);
		// sizeText.text = sizeStrings[index];
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___sizeText_14;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = __this->___sizeStrings_15;
		int32_t L_6 = __this->___index_16;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_8);
		// }
		return;
	}
}
// System.Void FishLibraryController::hideThreatObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_hideThreatObjects_mF374C4B489974770B80B5ED81CB01D5D8030703B (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < threatObjects.Length; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0005:
	{
		// threatObjects[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___threatObjects_13;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for (int i = 0; i < threatObjects.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < threatObjects.Length; i++)
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___threatObjects_13;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FishLibraryController::hideFoodObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_hideFoodObjects_mCF49DCE4A559D3953735DFFE698CD0A8325E26AA (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < foodObjects.Length; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0005:
	{
		// foodObjects[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___foodObjects_12;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for (int i = 0; i < foodObjects.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < foodObjects.Length; i++)
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___foodObjects_12;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FishLibraryController::setText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_setText_m6F18B3D4FCE10A3F4C0B2D8687D6E81787EBEACE (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	{
		// titleText.text = titleStrings[index];
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___titleText_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___titleStrings_9;
		int32_t L_2 = __this->___index_16;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// tagText.text = tagStrings[index];
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___tagText_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = __this->___tagStrings_10;
		int32_t L_7 = __this->___index_16;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
		// descText.text = descStrings[index];
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___descText_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = __this->___descStrings_11;
		int32_t L_12 = __this->___index_16;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_14);
		// }
		return;
	}
}
// System.Void FishLibraryController::hideFishObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_hideFishObjects_m93ABA499BC34637CEA542C49F5ECB26456D9ECB6 (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < fishObjects.Length; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0005:
	{
		// fishObjects[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___fishObjects_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for (int i = 0; i < fishObjects.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < fishObjects.Length; i++)
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___fishObjects_4;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FishLibraryController::hideTooltipObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_hideTooltipObjects_mF0FC6D83332787B19F6530DCB14CEA7EADFAF2FB (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < tooltipObjects.Length; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0005:
	{
		// tooltipObjects[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___tooltipObjects_5;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for (int i = 0; i < tooltipObjects.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < tooltipObjects.Length; i++)
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___tooltipObjects_5;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FishLibraryController::FoodTooltipHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_FoodTooltipHandler_m004EE6EC950E5098B8BA66249C4855C6C7AB3E0D (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (isFoodOpen)
		bool L_0 = __this->___isFoodOpen_18;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// bottomTooltips[0].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___bottomTooltips_17;
		NullCheck(L_2);
		int32_t L_3 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// isFoodOpen = false;
		__this->___isFoodOpen_18 = (bool)0;
		goto IL_0044;
	}

IL_0025:
	{
		// hideBottomToltips();
		FishLibraryController_hideBottomToltips_m149FCB790BAC0C7ACC042831A5465D35E98387DC(__this, NULL);
		// bottomTooltips[0].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___bottomTooltips_17;
		NullCheck(L_5);
		int32_t L_6 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// isFoodOpen = true;
		__this->___isFoodOpen_18 = (bool)1;
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void FishLibraryController::ThreatTooltipHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_ThreatTooltipHandler_m31B5B76FE0974E901EEC31BC7D0F52D2D17E52BE (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (isThreatOpen)
		bool L_0 = __this->___isThreatOpen_19;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// bottomTooltips[1].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___bottomTooltips_17;
		NullCheck(L_2);
		int32_t L_3 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// isThreatOpen = false;
		__this->___isThreatOpen_19 = (bool)0;
		goto IL_0044;
	}

IL_0025:
	{
		// hideBottomToltips();
		FishLibraryController_hideBottomToltips_m149FCB790BAC0C7ACC042831A5465D35E98387DC(__this, NULL);
		// bottomTooltips[1].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___bottomTooltips_17;
		NullCheck(L_5);
		int32_t L_6 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// isThreatOpen = true;
		__this->___isThreatOpen_19 = (bool)1;
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void FishLibraryController::SizeTooltipHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_SizeTooltipHandler_m2B0E0C220506E22C689FF18B1E6763AA1164F12E (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (isSizeOpen)
		bool L_0 = __this->___isSizeOpen_20;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// bottomTooltips[2].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___bottomTooltips_17;
		NullCheck(L_2);
		int32_t L_3 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// isSizeOpen = false;
		__this->___isSizeOpen_20 = (bool)0;
		goto IL_0044;
	}

IL_0025:
	{
		// hideBottomToltips();
		FishLibraryController_hideBottomToltips_m149FCB790BAC0C7ACC042831A5465D35E98387DC(__this, NULL);
		// bottomTooltips[2].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___bottomTooltips_17;
		NullCheck(L_5);
		int32_t L_6 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// isSizeOpen = true;
		__this->___isSizeOpen_20 = (bool)1;
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void FishLibraryController::hideBottomToltips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_hideBottomToltips_m149FCB790BAC0C7ACC042831A5465D35E98387DC (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < bottomTooltips.Length; i++)
		V_0 = 0;
		goto IL_002f;
	}

IL_0005:
	{
		// isFoodOpen = false;
		__this->___isFoodOpen_18 = (bool)0;
		// isThreatOpen = false;
		__this->___isThreatOpen_19 = (bool)0;
		// isSizeOpen = false;
		__this->___isSizeOpen_20 = (bool)0;
		// bottomTooltips[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___bottomTooltips_17;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for (int i = 0; i < bottomTooltips.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < bottomTooltips.Length; i++)
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___bottomTooltips_17;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FishLibraryController::PlayAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_PlayAudio_m1A4DBDEE63BD040BFCC386A199D38217203CA5BA (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	{
		// audioSource.clip = audioClips[index];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_21;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___audioClips_22;
		int32_t L_2 = __this->___index_16;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_4, NULL);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___audioSource_21;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
		// soundImage.sprite = soundOnSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___soundImage_24;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___soundOnSprite_26;
		NullCheck(L_6);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_6, L_7, NULL);
		// isAudioOn = true;
		__this->___isAudioOn_23 = (bool)1;
		// }
		return;
	}
}
// System.Void FishLibraryController::PauseAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_PauseAudio_mB2F941CD0767C2505B570897148E7A6F118AD6BC (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	{
		// audioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_21;
		NullCheck(L_0);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_0, NULL);
		// soundImage.sprite = soundOffSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___soundImage_24;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___soundOffSprite_25;
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_2, NULL);
		// isAudioOn = false;
		__this->___isAudioOn_23 = (bool)0;
		// }
		return;
	}
}
// System.Void FishLibraryController::SetOnOffAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_SetOnOffAudio_m99F3B1FA1EF82146AE0C1A0DBD5AE7F95B44AC76 (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (isAudioOn)
		bool L_0 = __this->___isAudioOn_23;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// PauseAudio();
		FishLibraryController_PauseAudio_mB2F941CD0767C2505B570897148E7A6F118AD6BC(__this, NULL);
		goto IL_001f;
	}

IL_0016:
	{
		// PlayAudio();
		FishLibraryController_PlayAudio_m1A4DBDEE63BD040BFCC386A199D38217203CA5BA(__this, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void FishLibraryController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_Start_m7F7FF40F3EB4BEDADB1B4F8408CF5012D5393658 (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FishLibraryController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_Update_mB518D0879A291A046DC80325A25E6D6E504BD486 (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FishLibraryController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController__ctor_m24FD0D40CC6111CC0012A6833C1E545E1D3FCB09 (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	{
		// private int index = 0;
		__this->___index_16 = 0;
		// private bool isFoodOpen = false;
		__this->___isFoodOpen_18 = (bool)0;
		// private bool isThreatOpen = false;
		__this->___isThreatOpen_19 = (bool)0;
		// private bool isSizeOpen = false;
		__this->___isSizeOpen_20 = (bool)0;
		// private bool isAudioOn = false;
		__this->___isAudioOn_23 = (bool)0;
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
// System.Void FlashLightController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashLightController_Start_mA0212D3E2FFCDE4E4A81EECFE5C5A7FF69C1C862 (FlashLightController_t48658171E89A77EE0757C22B42E801912BEAB86E* __this, const RuntimeMethod* method) 
{
	{
		// flashStatus = false;
		__this->___flashStatus_5 = (bool)0;
		// }
		return;
	}
}
// System.Void FlashLightController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashLightController_Update_m02B226C5F80FAB90CE378863A8E033BEDF671201 (FlashLightController_t48658171E89A77EE0757C22B42E801912BEAB86E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FlashLightController::TurnFlashlight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashLightController_TurnFlashlight_mD21F5FF28434576FEC27903909C256CE1D77AFA0 (FlashLightController_t48658171E89A77EE0757C22B42E801912BEAB86E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87212744DB94F7241847D840A643FD7A2A6AC57B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE067B13586460CAA939FEA8B3AC9E812D7B52009);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (flashStatus)
			bool L_0 = __this->___flashStatus_5;
			V_0 = L_0;
			bool L_1 = V_0;
			if (!L_1)
			{
				goto IL_0030_1;
			}
		}
		{
			// camDevice.setFlashTorchMode(false);
			CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_2 = __this->___camDevice_4;
			NullCheck(L_2);
			bool L_3;
			L_3 = VirtualFuncInvoker1< bool, bool >::Invoke(32 /* System.Boolean easyar.CameraDevice::setFlashTorchMode(System.Boolean) */, L_2, (bool)0);
			// flashStatus = false;
			__this->___flashStatus_5 = (bool)0;
			// ShowToast("TurnOff");
			FlashLightController_ShowToast_mEF9D1402C8E389954DC56C0572E2972471B9B133(__this, _stringLiteral87212744DB94F7241847D840A643FD7A2A6AC57B, NULL);
			goto IL_0052_1;
		}

IL_0030_1:
		{
			// camDevice.setFlashTorchMode(true);
			CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_4 = __this->___camDevice_4;
			NullCheck(L_4);
			bool L_5;
			L_5 = VirtualFuncInvoker1< bool, bool >::Invoke(32 /* System.Boolean easyar.CameraDevice::setFlashTorchMode(System.Boolean) */, L_4, (bool)1);
			// flashStatus = true;
			__this->___flashStatus_5 = (bool)1;
			// ShowToast("TurnOn");
			FlashLightController_ShowToast_mEF9D1402C8E389954DC56C0572E2972471B9B133(__this, _stringLiteralE067B13586460CAA939FEA8B3AC9E812D7B52009, NULL);
		}

IL_0052_1:
		{
			goto IL_0070;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0055;
		}
		throw e;
	}

CATCH_0055:
	{// begin catch(System.Exception)
		// catch (System.Exception e)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// ShowToast("Error: " + e.Message);
		Exception_t* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF)), L_7, NULL);
		FlashLightController_ShowToast_mEF9D1402C8E389954DC56C0572E2972471B9B133(__this, L_8, NULL);
		// throw;
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

IL_0070:
	{
		// }
		return;
	}
}
// System.Void FlashLightController::ShowToast(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashLightController_ShowToast_mEF9D1402C8E389954DC56C0572E2972471B9B133 (FlashLightController_t48658171E89A77EE0757C22B42E801912BEAB86E* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_2 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_3 = NULL;
	{
		// AndroidJavaClass unityPlayerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_0;
		// AndroidJavaObject unityActivity = unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_2;
		// AndroidJavaClass toastClass = new AndroidJavaClass("android.widget.Toast");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C, NULL);
		V_2 = L_3;
		// AndroidJavaObject toast = toastClass.CallStatic<AndroidJavaObject>("makeText", unityActivity, message, 1);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		String_t* L_9 = ___message0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
		int32_t L_11 = 1;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_12);
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13;
		L_13 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_4, _stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0, L_10, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_3 = L_13;
		// toast.Call("show");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15;
		L_15 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_14);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_14, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_15, NULL);
		// }
		return;
	}
}
// System.Void FlashLightController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlashLightController__ctor_m36A13554679334F3723CCFD3C0985923418EE752 (FlashLightController_t48658171E89A77EE0757C22B42E801912BEAB86E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private CameraDevice camDevice = new CameraDevice();
		CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* L_0 = (CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE*)il2cpp_codegen_object_new(CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CameraDevice__ctor_m543A41D3E72251A627AB82453261948D713B20EB(L_0, NULL);
		__this->___camDevice_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camDevice_4), (void*)L_0);
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
// System.Void MateriController::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MateriController_OnDrag_m5612FAD2EA6B4FE0423F4BCF4EB4A65E7D1320F6 (MateriController_t06F8AC0F0655269A8F9C8C8EBB889A033D89525F* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = new Vector2(transform.localPosition.x + (eventData.delta.x * _rate), transform.localPosition.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		float L_3 = L_2.___x_2;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = ___eventData0;
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_4, NULL);
		float L_6 = L_5.___x_0;
		float L_7 = __this->____rate_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_8, NULL);
		float L_10 = L_9.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_6, L_7)))), L_10, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_11, NULL);
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_12, NULL);
		// }
		return;
	}
}
// System.Void MateriController::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MateriController_OnBeginDrag_m7B532A8C235A66B7E5466E9C4B32270BB134548E (MateriController_t06F8AC0F0655269A8F9C8C8EBB889A033D89525F* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// _initialPosition = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->____initialPosition_4 = L_1;
		// }
		return;
	}
}
// System.Void MateriController::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MateriController_OnEndDrag_m5A8EEDC7FC20B02CC8E497C2891FA64241DE94C3 (MateriController_t06F8AC0F0655269A8F9C8C8EBB889A033D89525F* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (transform.localPosition.x < _initialPosition.x)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		float L_2 = L_1.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->____initialPosition_4);
		float L_4 = L_3->___x_2;
		V_0 = (bool)((((float)L_2) < ((float)L_4))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		// if (position < pos.Length - 1)
		int32_t L_6 = __this->___position_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = __this->___pos_8;
		NullCheck(L_7);
		V_1 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), 1))))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		// position++;
		int32_t L_9 = __this->___position_9;
		__this->___position_9 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// scrollPos = pos[position];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___pos_8;
		int32_t L_11 = __this->___position_9;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		float L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->___scrollPos_7 = L_13;
	}

IL_005c:
	{
		goto IL_0091;
	}

IL_005f:
	{
		// if (position > 0)
		int32_t L_14 = __this->___position_9;
		V_2 = (bool)((((int32_t)L_14) > ((int32_t)0))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0090;
		}
	}
	{
		// position--;
		int32_t L_16 = __this->___position_9;
		__this->___position_9 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		// scrollPos = pos[position];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = __this->___pos_8;
		int32_t L_18 = __this->___position_9;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		float L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		__this->___scrollPos_7 = L_20;
	}

IL_0090:
	{
	}

IL_0091:
	{
		// }
		return;
	}
}
// System.Void MateriController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MateriController_Update_mF7B7F597AA8D30AABC7A90B2EFA9D56FDC8F7330 (MateriController_t06F8AC0F0655269A8F9C8C8EBB889A033D89525F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B9_0 = 0;
	{
		// pos = new float[transform.childCount];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___pos_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pos_8), (void*)L_2);
		// float distance = 1f / (pos.Length - 1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___pos_8;
		NullCheck(L_3);
		V_0 = ((float)((1.0f)/((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1)))));
		// for (int i = 0; i < pos.Length; i++)
		V_1 = 0;
		goto IL_003f;
	}

IL_002d:
	{
		// pos[i] = distance * i;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___pos_8;
		int32_t L_5 = V_1;
		float L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (float)((float)il2cpp_codegen_multiply(L_6, ((float)L_7))));
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003f:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_9 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___pos_8;
		NullCheck(L_10);
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_002d;
		}
	}
	{
		// if (Input.GetMouseButton(0))
		bool L_12;
		L_12 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0075;
		}
	}
	{
		// scrollPos = scrollbar.GetComponent<Scrollbar>().value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___scrollbar_6;
		NullCheck(L_14);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_15;
		L_15 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_14, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		NullCheck(L_15);
		float L_16;
		L_16 = Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35(L_15, NULL);
		__this->___scrollPos_7 = L_16;
		goto IL_010a;
	}

IL_0075:
	{
		// for (int i = 0; i < pos.Length; i++)
		V_4 = 0;
		goto IL_00f4;
	}

IL_007b:
	{
		// if (scrollPos < pos[i] + (distance / 2) && scrollPos > pos[i] - (distance / 2))
		float L_17 = __this->___scrollPos_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = __this->___pos_8;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		float L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		float L_22 = V_0;
		if ((!(((float)L_17) < ((float)((float)il2cpp_codegen_add(L_21, ((float)(L_22/(2.0f)))))))))
		{
			goto IL_00b0;
		}
	}
	{
		float L_23 = __this->___scrollPos_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = __this->___pos_8;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		float L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		float L_28 = V_0;
		G_B9_0 = ((((float)L_23) > ((float)((float)il2cpp_codegen_subtract(L_27, ((float)(L_28/(2.0f)))))))? 1 : 0);
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B9_0 = 0;
	}

IL_00b1:
	{
		V_5 = (bool)G_B9_0;
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_00ed;
		}
	}
	{
		// scrollbar.GetComponent<Scrollbar>().value = Mathf.Lerp(scrollbar.GetComponent<Scrollbar>().value, pos[i], 0.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___scrollbar_6;
		NullCheck(L_30);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_31;
		L_31 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_30, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___scrollbar_6;
		NullCheck(L_32);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_33;
		L_33 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_32, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		NullCheck(L_33);
		float L_34;
		L_34 = Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35(L_33, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = __this->___pos_8;
		int32_t L_36 = V_4;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		float L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		float L_39;
		L_39 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_34, L_38, (0.5f), NULL);
		NullCheck(L_31);
		Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804(L_31, L_39, NULL);
	}

IL_00ed:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_40 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00f4:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_41 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = __this->___pos_8;
		NullCheck(L_42);
		V_6 = (bool)((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))? 1 : 0);
		bool L_43 = V_6;
		if (L_43)
		{
			goto IL_007b;
		}
	}
	{
	}

IL_010a:
	{
		// }
		return;
	}
}
// System.Void MateriController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MateriController__ctor_m315E13FD52A7A5E59910B9B442E3AA521F7A50A2 (MateriController_t06F8AC0F0655269A8F9C8C8EBB889A033D89525F* __this, const RuntimeMethod* method) 
{
	{
		// private float _rate = 0.3f;
		__this->____rate_5 = (0.300000012f);
		// float scrollPos = 0;
		__this->___scrollPos_7 = (0.0f);
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
// System.Void PinchToZoom::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchToZoom_OnDrag_m0DA808C09E392C501245A2C37A294823313CF19C (PinchToZoom_tB49ED50CB614FC2134C03095C573B14B65E142F4* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(initialScale.x > minScale + 0.2)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___initialScale_7);
		float L_1 = L_0->___x_2;
		float L_2 = __this->___minScale_4;
		V_0 = (bool)((((double)((double)L_1)) > ((double)((double)il2cpp_codegen_add(((double)L_2), (0.20000000000000001)))))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0082;
		}
	}
	{
		// transform.localPosition = new Vector2(transform.localPosition.x + (eventData.delta.x * _rate), transform.localPosition.y + (eventData.delta.y * _rate));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_5, NULL);
		float L_7 = L_6.___x_2;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = ___eventData0;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_8, NULL);
		float L_10 = L_9.___x_0;
		float L_11 = __this->____rate_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_12, NULL);
		float L_14 = L_13.___y_3;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_15 = ___eventData0;
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline(L_15, NULL);
		float L_17 = L_16.___y_1;
		float L_18 = __this->____rate_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), ((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_multiply(L_10, L_11)))), ((float)il2cpp_codegen_add(L_14, ((float)il2cpp_codegen_multiply(L_17, L_18)))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_19, NULL);
		NullCheck(L_4);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_20, NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void PinchToZoom::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchToZoom_Start_mC282D4461368494DA1A5375BBA2F3A93376F4111 (PinchToZoom_tB49ED50CB614FC2134C03095C573B14B65E142F4* __this, const RuntimeMethod* method) 
{
	{
		// Initiate();
		PinchToZoom_Initiate_m0C8E88F187F38CD97C2FEA3297197F95A8D9981C(__this, NULL);
		// }
		return;
	}
}
// System.Void PinchToZoom::Initiate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchToZoom_Initiate_m0C8E88F187F38CD97C2FEA3297197F95A8D9981C (PinchToZoom_tB49ED50CB614FC2134C03095C573B14B65E142F4* __this, const RuntimeMethod* method) 
{
	{
		// transform.localScale = new Vector3(1f, 1f, 1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_1, NULL);
		// transform.localPosition = new Vector3(0, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_2, L_3, NULL);
		// isScale = true;
		__this->___isScale_9 = (bool)1;
		// }
		return;
	}
}
// System.Void PinchToZoom::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchToZoom_Update_mB4BC507D991CE15AAA377F5D28CED2A977B96E86 (PinchToZoom_tB49ED50CB614FC2134C03095C573B14B65E142F4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B23_0 = 0;
	{
		// if (Input.touchCount == 2)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0182;
		}
	}
	{
		// var touchZero = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_1 = L_2;
		// var touchOne = Input.GetTouch(1);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_3;
		L_3 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_2 = L_3;
		// if (touchZero.phase == TouchPhase.Ended || touchZero.phase == TouchPhase.Canceled
		//    || touchOne.phase == TouchPhase.Ended || touchOne.phase == TouchPhase.Canceled)
		int32_t L_4;
		L_4 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_5;
		L_5 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_6;
		L_6 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_2), NULL);
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_7;
		L_7 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_2), NULL);
		G_B6_0 = ((((int32_t)L_7) == ((int32_t)4))? 1 : 0);
		goto IL_004a;
	}

IL_0049:
	{
		G_B6_0 = 1;
	}

IL_004a:
	{
		V_3 = (bool)G_B6_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// return;
		goto IL_0182;
	}

IL_0054:
	{
		// if (touchZero.phase == TouchPhase.Began || touchOne.phase == TouchPhase.Began)
		int32_t L_9;
		L_9 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_10;
		L_10 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_2), NULL);
		G_B11_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_006a;
	}

IL_0069:
	{
		G_B11_0 = 1;
	}

IL_006a:
	{
		V_4 = (bool)G_B11_0;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_00a1;
		}
	}
	{
		// initialDistance = Vector2.Distance(touchZero.position, touchOne.position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_2), NULL);
		float L_14;
		L_14 = Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline(L_12, L_13, NULL);
		__this->___initialDistance_6 = L_14;
		// initialScale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_15, NULL);
		__this->___initialScale_7 = L_16;
		goto IL_0181;
	}

IL_00a1:
	{
		// var currentDistance = Vector2.Distance(touchZero.position, touchOne.position);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_2), NULL);
		float L_19;
		L_19 = Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline(L_17, L_18, NULL);
		V_5 = L_19;
		// if (Mathf.Approximately(initialDistance, 0)) return;
		float L_20 = __this->___initialDistance_6;
		bool L_21;
		L_21 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_20, (0.0f), NULL);
		V_7 = L_21;
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00d2;
		}
	}
	{
		// if (Mathf.Approximately(initialDistance, 0)) return;
		goto IL_0182;
	}

IL_00d2:
	{
		// var factor = currentDistance / initialDistance;
		float L_23 = V_5;
		float L_24 = __this->___initialDistance_6;
		V_6 = ((float)(L_23/L_24));
		// _beforeScale = initialScale * factor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___initialScale_7;
		float L_26 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_25, L_26, NULL);
		__this->____beforeScale_8 = L_27;
		// if (_beforeScale.x < minScale && factor < 1)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->____beforeScale_8);
		float L_29 = L_28->___x_2;
		float L_30 = __this->___minScale_4;
		if ((!(((float)L_29) < ((float)L_30))))
		{
			goto IL_010e;
		}
	}
	{
		float L_31 = V_6;
		G_B18_0 = ((((float)L_31) < ((float)(1.0f)))? 1 : 0);
		goto IL_010f;
	}

IL_010e:
	{
		G_B18_0 = 0;
	}

IL_010f:
	{
		V_8 = (bool)G_B18_0;
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0120;
		}
	}
	{
		// isScale = false;
		__this->___isScale_9 = (bool)0;
		goto IL_0159;
	}

IL_0120:
	{
		// else if (_beforeScale.x > maxScale && factor > 1)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = (&__this->____beforeScale_8);
		float L_34 = L_33->___x_2;
		float L_35 = __this->___maxScale_5;
		if ((!(((float)L_34) > ((float)L_35))))
		{
			goto IL_013e;
		}
	}
	{
		float L_36 = V_6;
		G_B23_0 = ((((float)L_36) > ((float)(1.0f)))? 1 : 0);
		goto IL_013f;
	}

IL_013e:
	{
		G_B23_0 = 0;
	}

IL_013f:
	{
		V_9 = (bool)G_B23_0;
		bool L_37 = V_9;
		if (!L_37)
		{
			goto IL_0150;
		}
	}
	{
		// isScale = false;
		__this->___isScale_9 = (bool)0;
		goto IL_0159;
	}

IL_0150:
	{
		// isScale = true;
		__this->___isScale_9 = (bool)1;
	}

IL_0159:
	{
		// if (isScale)
		bool L_38 = __this->___isScale_9;
		V_10 = L_38;
		bool L_39 = V_10;
		if (!L_39)
		{
			goto IL_0180;
		}
	}
	{
		// transform.localScale = initialScale * factor;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = __this->___initialScale_7;
		float L_42 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_41, L_42, NULL);
		NullCheck(L_40);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_40, L_43, NULL);
	}

IL_0180:
	{
	}

IL_0181:
	{
	}

IL_0182:
	{
		// }
		return;
	}
}
// System.Void PinchToZoom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PinchToZoom__ctor_m2C779E28C2EA3412FCEAD4A14C147FEFC578FA12 (PinchToZoom_tB49ED50CB614FC2134C03095C573B14B65E142F4* __this, const RuntimeMethod* method) 
{
	{
		// private float _rate = 0.3f;
		__this->____rate_10 = (0.300000012f);
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
// System.Void SoundController::SetOnOffSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_SetOnOffSound_m7A4E3F298EA6A508E14091F5C86B0A405DD9C450 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (PlayerPrefs.GetInt("IsOn") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// audioSource.Pause();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_4;
		NullCheck(L_2);
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_2, NULL);
		// soundImage.sprite = soundOffSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___soundImage_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___soundOffSprite_6;
		NullCheck(L_3);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_3, L_4, NULL);
		// PlayerPrefs.SetInt("IsOn", 0);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C, 0, NULL);
		goto IL_006c;
	}

IL_0040:
	{
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___audioSource_4;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
		// soundImage.sprite = soundOnSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___soundImage_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___soundOnSprite_7;
		NullCheck(L_6);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_6, L_7, NULL);
		// PlayerPrefs.SetInt("IsOn", 1);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C, 1, NULL);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void SoundController::SetPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_SetPlay_m78F44B39FEC55BE37C93ED12BC83F911A1578083 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_4;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// soundImage.sprite = soundOnSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___soundImage_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___soundOnSprite_7;
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_2, NULL);
		// PlayerPrefs.SetInt("IsOn", 1);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C, 1, NULL);
		// }
		return;
	}
}
// System.Void SoundController::SetOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_SetOn_mB4EA80C8F7FD510D91BFCB824A741EB159B9A3D0 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (PlayerPrefs.GetInt("IsOn") == 0)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_4;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// soundImage.sprite = soundOnSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___soundImage_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___soundOnSprite_7;
		NullCheck(L_3);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_3, L_4, NULL);
		// PlayerPrefs.SetInt("IsOn", 1);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C, 1, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void SoundController::SetOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_SetOff_m640FF1B18308CACD6EE30097E01D8B9B3E344F97 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (PlayerPrefs.GetInt("IsOn") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// audioSource.Pause();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_4;
		NullCheck(L_2);
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_2, NULL);
		// soundImage.sprite = soundOnSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___soundImage_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___soundOnSprite_7;
		NullCheck(L_3);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_3, L_4, NULL);
		// PlayerPrefs.SetInt("IsOn", 0);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C, 0, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void SoundController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_Start_mBA4C6FF0D121F3625B0AA199C8DFBDA4E583BBD7 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	{
		// preLoad();
		SoundController_preLoad_mCDB80A57BBD280964025414B9513635BB21C4598(__this, NULL);
		// }
		return;
	}
}
// System.Void SoundController::preLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_preLoad_mCDB80A57BBD280964025414B9513635BB21C4598 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!PlayerPrefs.HasKey("IsOn"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// PlayerPrefs.SetInt("IsOn", 1);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C, 1, NULL);
		// Load();
		SoundController_Load_m0313BE674BA82B46B4E2CA61209FF22DBF4042AE(__this, NULL);
		// Debug.Log(PlayerPrefs.GetInt("IsOn"));
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C, NULL);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		goto IL_0047;
	}

IL_003e:
	{
		// Load();
		SoundController_Load_m0313BE674BA82B46B4E2CA61209FF22DBF4042AE(__this, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void SoundController::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_Load_m0313BE674BA82B46B4E2CA61209FF22DBF4042AE (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (PlayerPrefs.GetInt("IsOn") == 0)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		// audioSource.Pause();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_4;
		NullCheck(L_2);
		AudioSource_Pause_m2C2A09359E8AA924FEADECC1AFEA519B3C915B26(L_2, NULL);
		// soundImage.sprite = soundOffSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___soundImage_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___soundOffSprite_6;
		NullCheck(L_3);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_3, L_4, NULL);
		goto IL_0054;
	}

IL_0034:
	{
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___audioSource_4;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
		// soundImage.sprite = soundOnSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___soundImage_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___soundOnSprite_7;
		NullCheck(L_6);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_6, L_7, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void SoundController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_Update_mC395C5B781CC9EEBE5879A1664341515825F6611 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SoundController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController__ctor_mC458393260F108EF7CD72146FBC7623A50767BC1 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) 
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
// System.Void SwipeController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeController_Start_m7D86D88925B0F99827309223C963A2DE50172CF3 (SwipeController_tE45073D38D2553AF9D898D166355721C5AF764EB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SwipeController::choose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeController_choose_mCE1D7C00A42EE9D212F067FCFAE92FF274DD8D71 (SwipeController_tE45073D38D2553AF9D898D166355721C5AF764EB* __this, int32_t ___thisPos0, const RuntimeMethod* method) 
{
	{
		// position = thisPos - 1;
		int32_t L_0 = ___thisPos0;
		__this->___position_11 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// scrollPos = pos[position];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___pos_10;
		int32_t L_2 = __this->___position_11;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		__this->___scrollPos_9 = L_4;
		// }
		return;
	}
}
// System.Void SwipeController::next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeController_next_m2B7CB04171B993C843F1B25DA307573CDBC234E4 (SwipeController_tE45073D38D2553AF9D898D166355721C5AF764EB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (position < pos.Length - 1)
		int32_t L_0 = __this->___position_11;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___pos_10;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1))))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		// position += 1;
		int32_t L_3 = __this->___position_11;
		__this->___position_11 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// scrollPos = pos[position];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___pos_10;
		int32_t L_5 = __this->___position_11;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		float L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___scrollPos_9 = L_7;
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void SwipeController::prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeController_prev_mD82CD03AB49A0F3837BB2F65BDBFE65B8ABE16B2 (SwipeController_tE45073D38D2553AF9D898D166355721C5AF764EB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (position > 0)
		int32_t L_0 = __this->___position_11;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// position -= 1;
		int32_t L_2 = __this->___position_11;
		__this->___position_11 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// scrollPos = pos[position];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___pos_10;
		int32_t L_4 = __this->___position_11;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		float L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___scrollPos_9 = L_6;
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void SwipeController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeController_Update_m12B28C4B3574A5ACC278D1ADF3986E8702AB0367 (SwipeController_tE45073D38D2553AF9D898D166355721C5AF764EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t G_B9_0 = 0;
	int32_t G_B22_0 = 0;
	{
		// pos = new float[transform.childCount];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___pos_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pos_10), (void*)L_2);
		// float distance = 1f / (pos.Length - 1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___pos_10;
		NullCheck(L_3);
		V_0 = ((float)((1.0f)/((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1)))));
		// for (int i = 0; i < pos.Length; i++)
		V_1 = 0;
		goto IL_003f;
	}

IL_002d:
	{
		// pos[i] = distance * i;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___pos_10;
		int32_t L_5 = V_1;
		float L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (float)((float)il2cpp_codegen_multiply(L_6, ((float)L_7))));
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003f:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_9 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___pos_10;
		NullCheck(L_10);
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_002d;
		}
	}
	{
		// if (Input.GetMouseButton(0))
		bool L_12;
		L_12 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0075;
		}
	}
	{
		// scrollPos = scrollbar.GetComponent<Scrollbar>().value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___scrollbar_4;
		NullCheck(L_14);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_15;
		L_15 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_14, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		NullCheck(L_15);
		float L_16;
		L_16 = Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35(L_15, NULL);
		__this->___scrollPos_9 = L_16;
		goto IL_0162;
	}

IL_0075:
	{
		// for (int i = 0; i < pos.Length; i++)
		V_4 = 0;
		goto IL_014c;
	}

IL_007e:
	{
		// if (scrollPos < pos[i] + (distance / 2) && scrollPos > pos[i] - (distance / 2))
		float L_17 = __this->___scrollPos_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = __this->___pos_10;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		float L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		float L_22 = V_0;
		if ((!(((float)L_17) < ((float)((float)il2cpp_codegen_add(L_21, ((float)(L_22/(2.0f)))))))))
		{
			goto IL_00b3;
		}
	}
	{
		float L_23 = __this->___scrollPos_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = __this->___pos_10;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		float L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		float L_28 = V_0;
		G_B9_0 = ((((float)L_23) > ((float)((float)il2cpp_codegen_subtract(L_27, ((float)(L_28/(2.0f)))))))? 1 : 0);
		goto IL_00b4;
	}

IL_00b3:
	{
		G_B9_0 = 0;
	}

IL_00b4:
	{
		V_5 = (bool)G_B9_0;
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_0145;
		}
	}
	{
		// scrollbar.GetComponent<Scrollbar>().value = Mathf.Lerp(scrollbar.GetComponent<Scrollbar>().value, pos[i], 0.15f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___scrollbar_4;
		NullCheck(L_30);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_31;
		L_31 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_30, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___scrollbar_4;
		NullCheck(L_32);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_33;
		L_33 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_32, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		NullCheck(L_33);
		float L_34;
		L_34 = Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35(L_33, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = __this->___pos_10;
		int32_t L_36 = V_4;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		float L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		float L_39;
		L_39 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_34, L_38, (0.150000006f), NULL);
		NullCheck(L_31);
		Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804(L_31, L_39, NULL);
		// if (nameText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_40 = __this->___nameText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_40, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_6 = L_41;
		bool L_42 = V_6;
		if (!L_42)
		{
			goto IL_011b;
		}
	}
	{
		// nameText.text = nameString[i];
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_43 = __this->___nameText_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = __this->___nameString_7;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		String_t* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_43);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_43, L_47);
	}

IL_011b:
	{
		// if (descText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_48 = __this->___descText_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_48, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_7 = L_49;
		bool L_50 = V_7;
		if (!L_50)
		{
			goto IL_0144;
		}
	}
	{
		// descText.text = descString[i];
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_51 = __this->___descText_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = __this->___descString_8;
		int32_t L_53 = V_4;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		String_t* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_51);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_51, L_55);
	}

IL_0144:
	{
	}

IL_0145:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_56 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_014c:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_57 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_58 = __this->___pos_10;
		NullCheck(L_58);
		V_8 = (bool)((((int32_t)L_57) < ((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length))))? 1 : 0);
		bool L_59 = V_8;
		if (L_59)
		{
			goto IL_007e;
		}
	}
	{
	}

IL_0162:
	{
		// for (int i = 0; i < pos.Length; i++)
		V_9 = 0;
		goto IL_0272;
	}

IL_016a:
	{
		// if (scrollPos < pos[i] + (distance / 2) && scrollPos > pos[i] - (distance / 2))
		float L_60 = __this->___scrollPos_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = __this->___pos_10;
		int32_t L_62 = V_9;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		float L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		float L_65 = V_0;
		if ((!(((float)L_60) < ((float)((float)il2cpp_codegen_add(L_64, ((float)(L_65/(2.0f)))))))))
		{
			goto IL_019f;
		}
	}
	{
		float L_66 = __this->___scrollPos_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_67 = __this->___pos_10;
		int32_t L_68 = V_9;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		float L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		float L_71 = V_0;
		G_B22_0 = ((((float)L_66) > ((float)((float)il2cpp_codegen_subtract(L_70, ((float)(L_71/(2.0f)))))))? 1 : 0);
		goto IL_01a0;
	}

IL_019f:
	{
		G_B22_0 = 0;
	}

IL_01a0:
	{
		V_10 = (bool)G_B22_0;
		bool L_72 = V_10;
		if (!L_72)
		{
			goto IL_026b;
		}
	}
	{
		// transform.GetChild(i).localScale = Vector2.Lerp(transform.GetChild(i).localScale, new Vector2(1f, 1f), 0.1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_74 = V_9;
		NullCheck(L_73);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_73, L_74, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_77 = V_9;
		NullCheck(L_76);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_76, L_77, NULL);
		NullCheck(L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_78, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80;
		L_80 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_79, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_81), (1.0f), (1.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82;
		L_82 = Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline(L_80, L_81, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_82, NULL);
		NullCheck(L_75);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_75, L_83, NULL);
		// for (int a = 0; a < pos.Length; a++)
		V_11 = 0;
		goto IL_0258;
	}

IL_01f7:
	{
		// if (a != i)
		int32_t L_84 = V_11;
		int32_t L_85 = V_9;
		V_12 = (bool)((((int32_t)((((int32_t)L_84) == ((int32_t)L_85))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_86 = V_12;
		if (!L_86)
		{
			goto IL_0251;
		}
	}
	{
		// transform.GetChild(a).localScale = Vector2.Lerp(transform.GetChild(a).localScale, new Vector2(0.8f, 0.8f), 0.1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_88 = V_11;
		NullCheck(L_87);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_87, L_88, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90;
		L_90 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_91 = V_11;
		NullCheck(L_90);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92;
		L_92 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_90, L_91, NULL);
		NullCheck(L_92);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_92, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_94;
		L_94 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_93, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95;
		memset((&L_95), 0, sizeof(L_95));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_95), (0.800000012f), (0.800000012f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_96;
		L_96 = Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline(L_94, L_95, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_96, NULL);
		NullCheck(L_89);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_89, L_97, NULL);
	}

IL_0251:
	{
		// for (int a = 0; a < pos.Length; a++)
		int32_t L_98 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0258:
	{
		// for (int a = 0; a < pos.Length; a++)
		int32_t L_99 = V_11;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_100 = __this->___pos_10;
		NullCheck(L_100);
		V_13 = (bool)((((int32_t)L_99) < ((int32_t)((int32_t)(((RuntimeArray*)L_100)->max_length))))? 1 : 0);
		bool L_101 = V_13;
		if (L_101)
		{
			goto IL_01f7;
		}
	}
	{
	}

IL_026b:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_102 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_102, 1));
	}

IL_0272:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_103 = V_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_104 = __this->___pos_10;
		NullCheck(L_104);
		V_14 = (bool)((((int32_t)L_103) < ((int32_t)((int32_t)(((RuntimeArray*)L_104)->max_length))))? 1 : 0);
		bool L_105 = V_14;
		if (L_105)
		{
			goto IL_016a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SwipeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeController__ctor_mA2DC401F0B6485BEC04CD3FCE9ACF13ED6FBAE49 (SwipeController_tE45073D38D2553AF9D898D166355721C5AF764EB* __this, const RuntimeMethod* method) 
{
	{
		// float scrollPos = 0;
		__this->___scrollPos_9 = (0.0f);
		// int position = 0;
		__this->___position_11 = 0;
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
// System.Void TimerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_Start_mD7798153ED6F16DE9DC3F9AC4A04A77C3FB01F35 (TimerController_t9FACAA69550370472C446690F3AD92032ECE8CC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timerIsRunning = true;
		__this->___timerIsRunning_5 = (bool)1;
		// gameObject.GetComponent<Button>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_0, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// setVideoButton(false);
		TimerController_setVideoButton_m8750AF0B7154822D1E6220603BE00AED5F7D14C3(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TimerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_Update_m2358B4DAF3AED5C67A533BC862458DC060CAC893 (TimerController_t9FACAA69550370472C446690F3AD92032ECE8CC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral018E512AD459708A1AF30D661066425761B29480);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79103D9760831FF13E06C2949493F12EC0862166);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF36526A40FFA944E817E04C1B006B7B6FBD29BBE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// if (timerIsRunning)
		bool L_0 = __this->___timerIsRunning_5;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00aa;
		}
	}
	{
		// if (timeRemaining > 0)
		float L_2 = __this->___timeRemaining_4;
		V_1 = (bool)((((float)L_2) > ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_005f;
		}
	}
	{
		// timeRemaining -= Time.deltaTime;
		float L_4 = __this->___timeRemaining_4;
		float L_5;
		L_5 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___timeRemaining_4 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// buttonText.text = "Skip Video in " + Mathf.RoundToInt(timeRemaining);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___buttonText_6;
		float L_7 = __this->___timeRemaining_4;
		int32_t L_8;
		L_8 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(L_7, NULL);
		V_2 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral79103D9760831FF13E06C2949493F12EC0862166, L_9, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_10);
		goto IL_00a9;
	}

IL_005f:
	{
		// Debug.Log("Time has run out!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral018E512AD459708A1AF30D661066425761B29480, NULL);
		// buttonText.text = "Skip Video";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___buttonText_6;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteralF36526A40FFA944E817E04C1B006B7B6FBD29BBE);
		// gameObject.GetComponent<Button>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_13;
		L_13 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_12, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_13);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)1, NULL);
		// setVideoButton(true);
		TimerController_setVideoButton_m8750AF0B7154822D1E6220603BE00AED5F7D14C3(__this, (bool)1, NULL);
		// timeRemaining = 0;
		__this->___timeRemaining_4 = (0.0f);
		// timerIsRunning = false;
		__this->___timerIsRunning_5 = (bool)0;
	}

IL_00a9:
	{
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void TimerController::setVideoButton(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController_setVideoButton_m8750AF0B7154822D1E6220603BE00AED5F7D14C3 (TimerController_t9FACAA69550370472C446690F3AD92032ECE8CC5* __this, bool ___thisCondition0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < playVideoButton.Length; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0005:
	{
		// playVideoButton[i].SetActive(thisCondition);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___playVideoButton_7;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4 = ___thisCondition0;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, L_4, NULL);
		// for (int i = 0; i < playVideoButton.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < playVideoButton.Length; i++)
		int32_t L_6 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___playVideoButton_7;
		NullCheck(L_7);
		V_1 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))? 1 : 0);
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TimerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerController__ctor_m3AF5CE75E6D75C346AB26EBB3B74675EB80CE27A (TimerController_t9FACAA69550370472C446690F3AD92032ECE8CC5* __this, const RuntimeMethod* method) 
{
	{
		// public bool timerIsRunning = false;
		__this->___timerIsRunning_5 = (bool)0;
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
// System.Void TnC::SetIsAgree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnC_SetIsAgree_mE1F4FC8C3AC202551E6827E28D5AA832FCF9D393 (TnC_t5F6653C292B391CA2B8371C3F1D2FAB0A4EC9E49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (isAgree)
		bool L_0 = __this->___isAgree_7;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		// isAgree = false;
		__this->___isAgree_7 = (bool)0;
		// buttonObject.GetComponent<Button>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___buttonObject_4;
		NullCheck(L_2);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3;
		L_3 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_2, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)0, NULL);
		// buttonObject.GetComponent<Image>().sprite = disableSprite;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___buttonObject_4;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = __this->___disableSprite_5;
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
		goto IL_0071;
	}

IL_003f:
	{
		// isAgree = true;
		__this->___isAgree_7 = (bool)1;
		// buttonObject.GetComponent<Button>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___buttonObject_4;
		NullCheck(L_7);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8;
		L_8 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_7, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		NullCheck(L_8);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)1, NULL);
		// buttonObject.GetComponent<Image>().sprite = enableSprite;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___buttonObject_4;
		NullCheck(L_9);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10;
		L_10 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_9, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_11 = __this->___enableSprite_6;
		NullCheck(L_10);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_10, L_11, NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void TnC::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnC_Start_mD493CF25BB5BE8EE8EBEDD2261C6874603AADFBC (TnC_t5F6653C292B391CA2B8371C3F1D2FAB0A4EC9E49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonObject.GetComponent<Image>().sprite = disableSprite;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___buttonObject_4;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_0, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___disableSprite_5;
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void TnC::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnC_Update_m64480748EB0D4022CB07A36B781263723EAA8DD7 (TnC_t5F6653C292B391CA2B8371C3F1D2FAB0A4EC9E49* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TnC::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnC_Save_mF006C9D2A7C5911518E290B6F8533D452614CC5B (TnC_t5F6653C292B391CA2B8371C3F1D2FAB0A4EC9E49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB249B641F777FD9DD7C3E1F654B72D422681B433);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("IsSkip", 1);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralB249B641F777FD9DD7C3E1F654B72D422681B433, 1, NULL);
		// }
		return;
	}
}
// System.Void TnC::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnC__ctor_m1CAE4BF73DE070107AE8DE9CA37D9CB0F27FA2B9 (TnC_t5F6653C292B391CA2B8371C3F1D2FAB0A4EC9E49* __this, const RuntimeMethod* method) 
{
	{
		// private bool isAgree = false;
		__this->___isAgree_7 = (bool)0;
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
// System.Void VideController::PlayPauseVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideController_PlayPauseVideo_m0E7381310E1DDF4D1B780F361B1C812AEBB30D62 (VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (videoPlayer.isPlaying)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		// videoPlayer.Pause();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = __this->___videoPlayer_4;
		NullCheck(L_3);
		VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E(L_3, NULL);
		// playPauseImage1.sprite = playSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___playPauseImage1_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = __this->___playSprite_10;
		NullCheck(L_4);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_4, L_5, NULL);
		// playPauseImage2.sprite = playSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___playPauseImage2_9;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___playSprite_10;
		NullCheck(L_6);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_6, L_7, NULL);
		goto IL_0076;
	}

IL_0044:
	{
		// videoPlayer.Play();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_8 = __this->___videoPlayer_4;
		NullCheck(L_8);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_8, NULL);
		// playPauseImage1.sprite = pauseSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___playPauseImage1_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = __this->___pauseSprite_11;
		NullCheck(L_9);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_9, L_10, NULL);
		// playPauseImage2.sprite = pauseSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___playPauseImage2_9;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = __this->___pauseSprite_11;
		NullCheck(L_11);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_11, L_12, NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void VideController::FullScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideController_FullScreen_mBA3E3676D90880DF334B9AFFF6FD5C749643EFE7 (VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (isFullScreen)
		bool L_0 = __this->___isFullScreen_13;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// fullScreenObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___fullScreenObject_12;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// isFullScreen = false;
		__this->___isFullScreen_13 = (bool)0;
		goto IL_0039;
	}

IL_0023:
	{
		// fullScreenObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___fullScreenObject_12;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// isFullScreen = true;
		__this->___isFullScreen_13 = (bool)1;
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void VideController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideController_Start_m3031715A55C2904A4ADA4FF2EA4842AED7161F08 (VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(PlayVideo());
		RuntimeObject* L_0;
		L_0 = VideController_PlayVideo_mD505C4512286F8C503BDBEB0D75E94D09A6BE776(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void VideController::SetVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideController_SetVideo_mEA3FCB843FE1031270D3EC68129C5189EF5C3057 (VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(PlayVideo());
		RuntimeObject* L_0;
		L_0 = VideController_PlayVideo_mD505C4512286F8C503BDBEB0D75E94D09A6BE776(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator VideController::PlayVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VideController_PlayVideo_mD505C4512286F8C503BDBEB0D75E94D09A6BE776 (VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA* L_0 = (U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA*)il2cpp_codegen_object_new(U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPlayVideoU3Ed__14__ctor_m977FD08B359D50FA5C152F8AB37E62EED847FC8C(L_0, 0, NULL);
		U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void VideController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideController_Update_mF681614313E25CC6D80A82F80F3CC2DDD8EE3002 (VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (videoPlayer.isPlaying)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___videoPlayer_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// playPauseImage1.sprite = pauseSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___playPauseImage1_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___pauseSprite_11;
		NullCheck(L_3);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_3, L_4, NULL);
		// playPauseImage2.sprite = pauseSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___playPauseImage2_9;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = __this->___pauseSprite_11;
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
		goto IL_005e;
	}

IL_0038:
	{
		// playPauseImage1.sprite = playSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___playPauseImage1_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = __this->___playSprite_10;
		NullCheck(L_7);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_7, L_8, NULL);
		// playPauseImage2.sprite = playSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___playPauseImage2_9;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = __this->___playSprite_10;
		NullCheck(L_9);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_9, L_10, NULL);
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void VideController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideController__ctor_m299E5355D6C205F4C7E0D6019B42A787609EB132 (VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* __this, const RuntimeMethod* method) 
{
	{
		// bool isFullScreen = false;
		__this->___isFullScreen_13 = (bool)0;
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
// System.Void VideController/<PlayVideo>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayVideoU3Ed__14__ctor_m977FD08B359D50FA5C152F8AB37E62EED847FC8C (U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VideController/<PlayVideo>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayVideoU3Ed__14_System_IDisposable_Dispose_mA48979AED9E8970E1E678BCFB9E6AB527CE13218 (U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VideController/<PlayVideo>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlayVideoU3Ed__14_MoveNext_mC5CE1B873DAC9E95219CA19C168C9D64EAB820A6 (U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
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
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0075;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// videoPlayer.clip = videoToPlay;
		VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_4 = L_3->___videoPlayer_4;
		VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_6 = L_5->___videoToPlay_5;
		NullCheck(L_4);
		VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9(L_4, L_6, NULL);
		// videoPlayer.Prepare();
		VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_8 = L_7->___videoPlayer_4;
		NullCheck(L_8);
		VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA(L_8, NULL);
		// WaitForSeconds waitForSeconds = new WaitForSeconds(2);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, (2.0f), NULL);
		__this->___U3CwaitForSecondsU3E5__1_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwaitForSecondsU3E5__1_3), (void*)L_9);
		goto IL_007e;
	}

IL_005f:
	{
		// yield return waitForSeconds;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = __this->___U3CwaitForSecondsU3E5__1_3;
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0075:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// break;
		goto IL_0095;
	}

IL_007e:
	{
		// while (!videoPlayer.isPrepared)
		VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_12 = L_11->___videoPlayer_4;
		NullCheck(L_12);
		bool L_13;
		L_13 = VideoPlayer_get_isPrepared_mF2F3AD27BE0FD06695EE9DEE762B68F431E15767(L_12, NULL);
		V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_005f;
		}
	}

IL_0095:
	{
		// image.texture = videoPlayer.texture;
		VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* L_15 = __this->___U3CU3E4__this_2;
		NullCheck(L_15);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_16 = L_15->___image_6;
		VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* L_17 = __this->___U3CU3E4__this_2;
		NullCheck(L_17);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_18 = L_17->___videoPlayer_4;
		NullCheck(L_18);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_19;
		L_19 = VideoPlayer_get_texture_m1BA7033FEB30FEC507A4605FDD5C4B78BB81C379(L_18, NULL);
		NullCheck(L_16);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_16, L_19, NULL);
		// image2.texture = videoPlayer.texture;
		VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* L_20 = __this->___U3CU3E4__this_2;
		NullCheck(L_20);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_21 = L_20->___image2_7;
		VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* L_22 = __this->___U3CU3E4__this_2;
		NullCheck(L_22);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_23 = L_22->___videoPlayer_4;
		NullCheck(L_23);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_24;
		L_24 = VideoPlayer_get_texture_m1BA7033FEB30FEC507A4605FDD5C4B78BB81C379(L_23, NULL);
		NullCheck(L_21);
		RawImage_set_texture_mC016318C95CC17A826D57DD219DBCB6DFD295C02(L_21, L_24, NULL);
		// videoPlayer.Play();
		VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* L_25 = __this->___U3CU3E4__this_2;
		NullCheck(L_25);
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_26 = L_25->___videoPlayer_4;
		NullCheck(L_26);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_26, NULL);
		// }
		return (bool)0;
	}
}
// System.Object VideController/<PlayVideo>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayVideoU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m194778C923AD387FB26A9A8812FADDCABF3D46CC (U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VideController/<PlayVideo>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayVideoU3Ed__14_System_Collections_IEnumerator_Reset_m067A8C7F28D780C4B4CF8435BD9567A374B8DBBD (U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlayVideoU3Ed__14_System_Collections_IEnumerator_Reset_m067A8C7F28D780C4B4CF8435BD9567A374B8DBBD_RuntimeMethod_var)));
	}
}
// System.Object VideController/<PlayVideo>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayVideoU3Ed__14_System_Collections_IEnumerator_get_Current_m54DF8919BDA4A54B305E14D2F24E2A77BA2B17F0 (U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___b1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___a0;
		float L_7 = L_6.___x_0;
		float L_8 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___a0;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___b1;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___a0;
		float L_14 = L_13.___y_1;
		float L_15 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothStep_mF724C7893D0F0C02FB14D573DDB7F92935451B81_inline (float ___from0, float ___to1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		float L_2 = ___t2;
		float L_3 = ___t2;
		float L_4 = ___t2;
		float L_5 = ___t2;
		float L_6 = ___t2;
		___t2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_2)), L_3)), L_4)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_5)), L_6))));
		float L_7 = ___to1;
		float L_8 = ___t2;
		float L_9 = ___from0;
		float L_10 = ___t2;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_9, ((float)il2cpp_codegen_subtract((1.0f), L_10))))));
		goto IL_0030;
	}

IL_0030:
	{
		float L_11 = V_0;
		return L_11;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_delta_m7DC87C01EAE1D10282C37842ED215FDBFE2C1C5B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 delta { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CdeltaU3Ek__BackingField_14;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
