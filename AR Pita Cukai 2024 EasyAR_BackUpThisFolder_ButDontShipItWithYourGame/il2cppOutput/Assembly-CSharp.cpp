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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<easyar.Target,System.Boolean>
struct Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>
struct Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Vector2>
struct KeyCollection_tEFECE1C932D53BE53817AAAF0F110D507FBEFA89;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Vector2>
struct ValueCollection_tA8054A30F9957F0712BA01D66B734953768F55CF;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Vector2>[]
struct EntryU5BU5D_tD031BD4563541FEE425219BD299C6B0323AADC6C;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
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
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
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
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
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
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// easyar.CameraDevice
struct CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CukaiController
struct CukaiController_t907F5CB7084F3B209B9AAD1CC5B2386DF99C5F12;
// CukaiDetailController
struct CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC;
// CukaiSwipeController
struct CukaiSwipeController_tB211EE93D6C4E4F405560299420BDAAB2608208E;
// CustomImageTargetBehaviour
struct CustomImageTargetBehaviour_t0DC223E7682E126008C39A4187B0490F36BAA0CB;
// CustomImageTargetController
struct CustomImageTargetController_t051303919307718CE549FE95F3D52655A2BAD3EB;
// System.Delegate
struct Delegate_t;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// System.Exception
struct Exception_t;
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
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// easyar.ImageTarget
struct ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB;
// easyar.ImageTargetController
struct ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633;
// easyar.ImageTrackerFrameFilter
struct ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E;
// InterdimensionalTransport
struct InterdimensionalTransport_tF8C8EF95D25840C2BE004A938B414E409C9FB711;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// LoadController
struct LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8;
// MateriController
struct MateriController_t06F8AC0F0655269A8F9C8C8EBB889A033D89525F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NewBehaviourScript
struct NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7;
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
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// RotateObjectController
struct RotateObjectController_tD145EB9A5D2B3E6DE2D7AD5DCAF7D9C833E3EA6B;
// Rotator
struct Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223;
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
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// SwipeController
struct SwipeController_tE45073D38D2553AF9D898D166355721C5AF764EB;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
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
// TouchController
struct TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732;
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
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// CukaiDetailController/<Move>d__15
struct U3CMoveU3Ed__15_t0F70841571B89609EF7A5CAD39833D1E6C7BCBBF;
// easyar.ImageTargetController/ImageFileSourceData
struct ImageFileSourceData_t6253D5079E28B45E9A0C1A7A8CFBF74267364C2B;
// easyar.ImageTargetController/TargetDataFileSourceData
struct TargetDataFileSourceData_t8A1E6462041EA1563F8FAD0E8DD979416E605C4B;
// LoadController/<LoadScene>d__3
struct U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// easyar.RefBase/Retainer
struct Retainer_t21E37A78A5C591A4A1DB7494A454CCADF411A77A;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// TouchController/<OnOneMove>d__16
struct U3COnOneMoveU3Ed__16_tB5C9C49B8E10998069D2F7B6898288DCD30973EB;
// TouchController/<OnTwoMove>d__17
struct U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C;
// TouchController/<OnTwoRotate>d__18
struct U3COnTwoRotateU3Ed__18_tB03772A0ED37972BAE97B264ECB30F2ED70E3F76;
// TouchController/<OnTwoScale>d__19
struct U3COnTwoScaleU3Ed__19_t69CBD1C0028FDAE877F43960A8ABEB109806C411;
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
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveU3Ed__15_t0F70841571B89609EF7A5CAD39833D1E6C7BCBBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnOneMoveU3Ed__16_tB5C9C49B8E10998069D2F7B6898288DCD30973EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnTwoRotateU3Ed__18_tB03772A0ED37972BAE97B264ECB30F2ED70E3F76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnTwoScaleU3Ed__19_t69CBD1C0028FDAE877F43960A8ABEB109806C411_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPlayVideoU3Ed__5_tFE8572964D76D47E69602F43916B1E3193EF949E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral018E512AD459708A1AF30D661066425761B29480;
IL2CPP_EXTERN_C String_t* _stringLiteral0418061580A8E7CD200988C6CC7225030A399F03;
IL2CPP_EXTERN_C String_t* _stringLiteral0A576B17B04B3009C54F9041CEB05C4778886623;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral24B0C0CC6B70D85CD7D854B7B9096BC8632A1262;
IL2CPP_EXTERN_C String_t* _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192;
IL2CPP_EXTERN_C String_t* _stringLiteral48B0163ED10325CF61AA82D17F376992FE7E8291;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral64BD60FBA2B8A2265970799B6CADD42B5AD91205;
IL2CPP_EXTERN_C String_t* _stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF;
IL2CPP_EXTERN_C String_t* _stringLiteral78FF4FA942C1B42A8039C2BA8E962E337610543C;
IL2CPP_EXTERN_C String_t* _stringLiteral79103D9760831FF13E06C2949493F12EC0862166;
IL2CPP_EXTERN_C String_t* _stringLiteral82C3B166E09CFA044444785C7F06DAFB6DBDEE29;
IL2CPP_EXTERN_C String_t* _stringLiteral84EE66A73B24F0E9CEE249A5A8879E93FCC66EB0;
IL2CPP_EXTERN_C String_t* _stringLiteral87212744DB94F7241847D840A643FD7A2A6AC57B;
IL2CPP_EXTERN_C String_t* _stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8B91A41AE533E280A90A1ED8B6F7B328D58A2A25;
IL2CPP_EXTERN_C String_t* _stringLiteral8CBD085C45E72990046B8DD3B9797548D3165F9B;
IL2CPP_EXTERN_C String_t* _stringLiteral8F3C91F5F9BCE64B1AA29872E70E2494990715B8;
IL2CPP_EXTERN_C String_t* _stringLiteral9206B2A501EFC5E394174E874D13FE8A6B41FB10;
IL2CPP_EXTERN_C String_t* _stringLiteral9E9E4240C4BC5D2DB9A41BB1BC5143AF092D1B4C;
IL2CPP_EXTERN_C String_t* _stringLiteralADEA3300BCB1B0BF76B79B750678E8D19F62110C;
IL2CPP_EXTERN_C String_t* _stringLiteralB249B641F777FD9DD7C3E1F654B72D422681B433;
IL2CPP_EXTERN_C String_t* _stringLiteralB627E4FD7105A1822034ACCA4E9FBEBC1D20B814;
IL2CPP_EXTERN_C String_t* _stringLiteralB71E2E364E2F2ED1BC4C611179CB01AC9A742776;
IL2CPP_EXTERN_C String_t* _stringLiteralC982AA36B105954A981313010D5DDC199E9B76CD;
IL2CPP_EXTERN_C String_t* _stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81;
IL2CPP_EXTERN_C String_t* _stringLiteralE067B13586460CAA939FEA8B3AC9E812D7B52009;
IL2CPP_EXTERN_C String_t* _stringLiteralF36526A40FFA944E817E04C1B006B7B6FBD29BBE;
IL2CPP_EXTERN_C String_t* _stringLiteralF81623400486AF99C5F9706770E2C0C01BD64184;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B_m71BF488E3BFD86A08A67B05135CCBAF62C7C0C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B_mC8FDDCD122AD7E4BC1B10C3EA84F4A566F06FB1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m8AAAFC55B2438542D29F1EDCDEEE6AE631082269_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE352B1093D935D290E0B7A717D2AD2869814D5DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC_m6A572331D9C40D0D9B1243B31646EC87DBD46B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisVideController_t01D5382A73805EC587F3ED5F50DB93633D01476E_m3A90C072F2755ADA8062EF41789367A565E9915A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveU3Ed__15_System_Collections_IEnumerator_Reset_mF86DB1602F02C8CEE692112AEC32ECAFCEA13A7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnOneMoveU3Ed__16_System_Collections_IEnumerator_Reset_mA9D1783976B806E63562E528C958D5E38E6C36AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnTwoMoveU3Ed__17_System_Collections_IEnumerator_Reset_mE58E295AB7435EF868DFD2AFCC4E051E1482F4DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnTwoRotateU3Ed__18_System_Collections_IEnumerator_Reset_m8B7A0140D09B5B60194B7D6B2A5EBF8E270F8443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnTwoScaleU3Ed__19_System_Collections_IEnumerator_Reset_m0B15C7646512B587F176785485AB72CB3819981F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlayVideoU3Ed__14_System_Collections_IEnumerator_Reset_m067A8C7F28D780C4B4CF8435BD9567A374B8DBBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlayVideoU3Ed__5_System_Collections_IEnumerator_Reset_m0A18C89F0273CB41B1ED31674D442AEA75DF32AA_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
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

// CukaiDetailController/<Move>d__15
struct U3CMoveU3Ed__15_t0F70841571B89609EF7A5CAD39833D1E6C7BCBBF  : public RuntimeObject
{
	// System.Int32 CukaiDetailController/<Move>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CukaiDetailController/<Move>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CukaiDetailController CukaiDetailController/<Move>d__15::<>4__this
	CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* ___U3CU3E4__this_2;
	// System.Single CukaiDetailController/<Move>d__15::<time>5__1
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

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
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

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
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

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// LoadController/<LoadScene>d__3
struct U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B  : public RuntimeObject
{
	// System.Int32 LoadController/<LoadScene>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder LoadController/<LoadScene>d__3::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// System.String LoadController/<LoadScene>d__3::sceneName
	String_t* ___sceneName_2;
	// LoadController LoadController/<LoadScene>d__3::<>4__this
	LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8* ___U3CU3E4__this_3;
	// UnityEngine.AsyncOperation LoadController/<LoadScene>d__3::<scene>5__1
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___U3CsceneU3E5__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter LoadController/<LoadScene>d__3::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_5;
};

// TouchController/<OnOneMove>d__16
struct U3COnOneMoveU3Ed__16_tB5C9C49B8E10998069D2F7B6898288DCD30973EB  : public RuntimeObject
{
	// System.Int32 TouchController/<OnOneMove>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TouchController/<OnOneMove>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TouchController TouchController/<OnOneMove>d__16::<>4__this
	TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* ___U3CU3E4__this_2;
	// UnityEngine.Touch[] TouchController/<OnOneMove>d__16::<>s__1
	TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* ___U3CU3Es__1_3;
	// System.Int32 TouchController/<OnOneMove>d__16::<>s__2
	int32_t ___U3CU3Es__2_4;
	// UnityEngine.Touch TouchController/<OnOneMove>d__16::<touch>5__3
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___U3CtouchU3E5__3_5;
	// UnityEngine.Vector3 TouchController/<OnOneMove>d__16::<touchV3>5__4
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CtouchV3U3E5__4_6;
	// UnityEngine.Vector3 TouchController/<OnOneMove>d__16::<addV3>5__5
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CaddV3U3E5__5_7;
	// UnityEngine.Vector3 TouchController/<OnOneMove>d__16::<newPos>5__6
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CnewPosU3E5__6_8;
};

// TouchController/<OnTwoMove>d__17
struct U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C  : public RuntimeObject
{
	// System.Int32 TouchController/<OnTwoMove>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TouchController/<OnTwoMove>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TouchController TouchController/<OnTwoMove>d__17::<>4__this
	TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 TouchController/<OnTwoMove>d__17::<xMovement>5__1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CxMovementU3E5__1_3;
	// UnityEngine.Vector3 TouchController/<OnTwoMove>d__17::<yMovement>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CyMovementU3E5__2_4;
	// UnityEngine.Vector3 TouchController/<OnTwoMove>d__17::<rawTargetPos>5__3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CrawTargetPosU3E5__3_5;
	// UnityEngine.Touch[] TouchController/<OnTwoMove>d__17::<>s__4
	TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* ___U3CU3Es__4_6;
	// System.Int32 TouchController/<OnTwoMove>d__17::<>s__5
	int32_t ___U3CU3Es__5_7;
	// UnityEngine.Touch TouchController/<OnTwoMove>d__17::<touch>5__6
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___U3CtouchU3E5__6_8;
	// UnityEngine.Vector2 TouchController/<OnTwoMove>d__17::<fixedDelta>5__7
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CfixedDeltaU3E5__7_9;
	// UnityEngine.Vector3 TouchController/<OnTwoMove>d__17::<Cam_Forward>5__8
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CCam_ForwardU3E5__8_10;
	// UnityEngine.Vector3 TouchController/<OnTwoMove>d__17::<Cam_Forward_XZ>5__9
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CCam_Forward_XZU3E5__9_11;
	// UnityEngine.Vector3 TouchController/<OnTwoMove>d__17::<newPos>5__10
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CnewPosU3E5__10_12;
};

// TouchController/<OnTwoRotate>d__18
struct U3COnTwoRotateU3Ed__18_tB03772A0ED37972BAE97B264ECB30F2ED70E3F76  : public RuntimeObject
{
	// System.Int32 TouchController/<OnTwoRotate>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TouchController/<OnTwoRotate>d__18::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TouchController TouchController/<OnTwoRotate>d__18::<>4__this
	TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 TouchController/<OnTwoRotate>d__18::<xMovement>5__1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CxMovementU3E5__1_3;
	// UnityEngine.Vector3 TouchController/<OnTwoRotate>d__18::<yMovement>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CyMovementU3E5__2_4;
	// UnityEngine.Quaternion TouchController/<OnTwoRotate>d__18::<rawRotation>5__3
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CrawRotationU3E5__3_5;
	// UnityEngine.Touch[] TouchController/<OnTwoRotate>d__18::<>s__4
	TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* ___U3CU3Es__4_6;
	// System.Int32 TouchController/<OnTwoRotate>d__18::<>s__5
	int32_t ___U3CU3Es__5_7;
	// UnityEngine.Touch TouchController/<OnTwoRotate>d__18::<touch>5__6
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___U3CtouchU3E5__6_8;
	// UnityEngine.Vector2 TouchController/<OnTwoRotate>d__18::<fixedDelta>5__7
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CfixedDeltaU3E5__7_9;
};

// TouchController/<OnTwoScale>d__19
struct U3COnTwoScaleU3Ed__19_t69CBD1C0028FDAE877F43960A8ABEB109806C411  : public RuntimeObject
{
	// System.Int32 TouchController/<OnTwoScale>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TouchController/<OnTwoScale>d__19::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TouchController TouchController/<OnTwoScale>d__19::<>4__this
	TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 TouchController/<OnTwoScale>d__19::<rawScale>5__1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CrawScaleU3E5__1_3;
	// System.Single TouchController/<OnTwoScale>d__19::<rawFingersDistance>5__2
	float ___U3CrawFingersDistanceU3E5__2_4;
	// UnityEngine.Touch[] TouchController/<OnTwoScale>d__19::<>s__3
	TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* ___U3CU3Es__3_5;
	// System.Int32 TouchController/<OnTwoScale>d__19::<>s__4
	int32_t ___U3CU3Es__4_6;
	// UnityEngine.Touch TouchController/<OnTwoScale>d__19::<touch>5__5
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___U3CtouchU3E5__5_7;
	// System.Single TouchController/<OnTwoScale>d__19::<scaleFactor>5__6
	float ___U3CscaleFactorU3E5__6_8;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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
	// UnityEngine.GameObject APPManager::dolpin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dolpin_12;
	// System.Boolean APPManager::_isPlay
	bool ____isPlay_13;
	// System.Boolean APPManager::_isSkip
	bool ____isSkip_14;
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
	// System.Int32 CukaiSwipeController::initiateSkip
	int32_t ___initiateSkip_4;
	// UnityEngine.Vector3 CukaiSwipeController::_initialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____initialPosition_5;
	// System.Single CukaiSwipeController::_rate
	float ____rate_6;
	// UnityEngine.GameObject CukaiSwipeController::cukaiDetailObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cukaiDetailObject_7;
	// UnityEngine.GameObject CukaiSwipeController::scrollbar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scrollbar_8;
	// System.Single CukaiSwipeController::scrollPos
	float ___scrollPos_9;
	// System.Single[] CukaiSwipeController::pos
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___pos_10;
	// System.Int32 CukaiSwipeController::position
	int32_t ___position_11;
};

// FishLibraryController
struct FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] FishLibraryController::fishObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___fishObjects_4;
	// UnityEngine.GameObject[] FishLibraryController::tooltipObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___tooltipObjects_5;
	// System.Boolean FishLibraryController::isTooltipOpen
	bool ___isTooltipOpen_6;
	// UnityEngine.UI.Text FishLibraryController::titleText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___titleText_7;
	// UnityEngine.UI.Text FishLibraryController::tagText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___tagText_8;
	// UnityEngine.UI.Text FishLibraryController::descText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___descText_9;
	// System.String[] FishLibraryController::titleStrings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___titleStrings_10;
	// System.String[] FishLibraryController::tagStrings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tagStrings_11;
	// System.String[] FishLibraryController::descStrings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___descStrings_12;
	// UnityEngine.GameObject[] FishLibraryController::foodObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___foodObjects_13;
	// UnityEngine.GameObject[] FishLibraryController::threatObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___threatObjects_14;
	// UnityEngine.UI.Text FishLibraryController::sizeText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___sizeText_15;
	// System.String[] FishLibraryController::sizeStrings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___sizeStrings_16;
	// System.Int32 FishLibraryController::index
	int32_t ___index_17;
	// UnityEngine.GameObject[] FishLibraryController::bottomTooltips
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___bottomTooltips_18;
	// System.Boolean FishLibraryController::isFoodOpen
	bool ___isFoodOpen_19;
	// System.Boolean FishLibraryController::isThreatOpen
	bool ___isThreatOpen_20;
	// System.Boolean FishLibraryController::isSizeOpen
	bool ___isSizeOpen_21;
	// UnityEngine.AudioSource FishLibraryController::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_22;
	// UnityEngine.AudioClip[] FishLibraryController::audioClips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___audioClips_23;
	// System.Boolean FishLibraryController::isAudioOn
	bool ___isAudioOn_24;
	// UnityEngine.UI.Image FishLibraryController::soundImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___soundImage_25;
	// UnityEngine.Sprite FishLibraryController::soundOffSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___soundOffSprite_26;
	// UnityEngine.Sprite FishLibraryController::soundOnSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___soundOnSprite_27;
};

// FlashLightController
struct FlashLightController_t48658171E89A77EE0757C22B42E801912BEAB86E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// easyar.CameraDevice FlashLightController::camDevice
	CameraDevice_tD49A49DD97F9C0B672E5617F54A2B15B7CB2ACCE* ___camDevice_4;
	// System.Boolean FlashLightController::flashStatus
	bool ___flashStatus_5;
};

// InterdimensionalTransport
struct InterdimensionalTransport_tF8C8EF95D25840C2BE004A938B414E409C9FB711  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material[] InterdimensionalTransport::materials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___materials_4;
};

// LoadController
struct LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject LoadController::loaderCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loaderCanvas_5;
};

struct LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8_StaticFields
{
	// LoadController LoadController::Instance
	LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8* ___Instance_4;
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

// NewBehaviourScript
struct NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

// RotateObjectController
struct RotateObjectController_tD145EB9A5D2B3E6DE2D7AD5DCAF7D9C833E3EA6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RotateObjectController::rotationSpeed
	float ___rotationSpeed_4;
	// UnityEngine.Vector2 RotateObjectController::touchStartPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchStartPos_5;
	// System.Boolean RotateObjectController::isSwiping
	bool ___isSwiping_6;
};

// Rotator
struct Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Rotator::rotationSpeed
	float ___rotationSpeed_4;
	// System.Boolean Rotator::dragging
	bool ___dragging_5;
	// UnityEngine.Rigidbody Rotator::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_6;
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

// TouchController
struct TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text TouchController::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
	// UnityEngine.Transform TouchController::controlTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___controlTarget_7;
	// UnityEngine.Camera TouchController::cameraTarget
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cameraTarget_8;
	// System.Boolean TouchController::isOneFingerDraggable
	bool ___isOneFingerDraggable_9;
	// System.Boolean TouchController::isTwoFingerDraggable
	bool ___isTwoFingerDraggable_10;
	// System.Boolean TouchController::isTwoFingerScalable
	bool ___isTwoFingerScalable_11;
	// System.Boolean TouchController::isTwoFingerRotatable
	bool ___isTwoFingerRotatable_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2> TouchController::originalPosition
	Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* ___originalPosition_13;
	// TouchController/GestureControl TouchController::curGesture
	int32_t ___curGesture_14;
	// System.Single TouchController::targetCamDistance
	float ___targetCamDistance_15;
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

// CustomImageTargetBehaviour
struct CustomImageTargetBehaviour_t0DC223E7682E126008C39A4187B0490F36BAA0CB  : public ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633
{
	// System.Single CustomImageTargetBehaviour::lastX
	float ___lastX_25;
	// System.Single CustomImageTargetBehaviour::lastRX
	float ___lastRX_26;
	// System.Single CustomImageTargetBehaviour::lastY
	float ___lastY_27;
	// System.Single CustomImageTargetBehaviour::lastRY
	float ___lastRY_28;
	// System.Single CustomImageTargetBehaviour::lastZ
	float ___lastZ_29;
	// System.Single CustomImageTargetBehaviour::lastRZ
	float ___lastRZ_30;
	// System.Single CustomImageTargetBehaviour::rotMin
	float ___rotMin_31;
	// System.Single CustomImageTargetBehaviour::rotMax
	float ___rotMax_32;
	// System.Single CustomImageTargetBehaviour::trasMin
	float ___trasMin_33;
	// System.Single CustomImageTargetBehaviour::trasMax
	float ___trasMax_34;
	// System.Single CustomImageTargetBehaviour::lerpT
	float ___lerpT_35;
};

// CustomImageTargetController
struct CustomImageTargetController_t051303919307718CE549FE95F3D52655A2BAD3EB  : public ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633
{
	// System.Single CustomImageTargetController::lastX
	float ___lastX_25;
	// System.Single CustomImageTargetController::lastRX
	float ___lastRX_26;
	// System.Single CustomImageTargetController::lastY
	float ___lastY_27;
	// System.Single CustomImageTargetController::lastRY
	float ___lastRY_28;
	// System.Single CustomImageTargetController::lastZ
	float ___lastZ_29;
	// System.Single CustomImageTargetController::lastRZ
	float ___lastRZ_30;
	// System.Single CustomImageTargetController::rotMin
	float ___rotMin_31;
	// System.Single CustomImageTargetController::rotMax
	float ___rotMax_32;
	// System.Single CustomImageTargetController::trasMin
	float ___trasMin_33;
	// System.Single CustomImageTargetController::trasMax
	float ___trasMax_34;
	// System.Single CustomImageTargetController::lerpT
	float ___lerpT_35;
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
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA1922A937C96CD00CF28F4FA407EDC0C6C133959_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
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
// System.Void LoadController::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadController_LoadScene_m85545388FBC03C8D3DCC8D08DAF088B84E863005 (LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8* __this, String_t* ___sceneName0, const RuntimeMethod* method) ;
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
// System.Void CukaiDetailController/<Move>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__15__ctor_m2FBEF9D04FB6769B47B32CDA057611BD37C918C4 (U3CMoveU3Ed__15_t0F70841571B89609EF7A5CAD39833D1E6C7BCBBF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
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
// System.Void CukaiSwipeController::InitiateCard(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiSwipeController_InitiateCard_mD3E9D387484964E1A1E604F1DCA0E5E60AF5D243 (CukaiSwipeController_tB211EE93D6C4E4F405560299420BDAAB2608208E* __this, int32_t ___skip0, const RuntimeMethod* method) ;
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
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
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
// System.Void easyar.ImageTargetController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetController_Update_m84653120D4AE5517F8225CEA13EEC106AE8866E5 (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void easyar.ImageTargetController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetController__ctor_m004DC8AA0E97C9147CFCF146D8DD207538FB052E (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, const RuntimeMethod* method) ;
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
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void LoadController/<LoadScene>d__3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__3__ctor_mFDEFDF882EB3C8856B1DF7E2C502211438D9759E (U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<LoadController/<LoadScene>d__3>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B_mC8FDDCD122AD7E4BC1B10C3EA84F4A566F06FB1A (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B**, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared)(__this, ___stateMachine0, method);
}
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m5855749CCB7CA99553A65AAA791623484FE7F184 (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AsyncOperation::set_allowSceneActivation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Delay_m49549664B58973EEEF1B479B21FB30D0DF3C7EFA (int32_t ___millisecondsDelay0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,LoadController/<LoadScene>d__3>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B_m71BF488E3BFD86A08A67B05135CCBAF62C7C0C27 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B**, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisRuntimeObject_mA1922A937C96CD00CF28F4FA407EDC0C6C133959_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void RotateObjectController::RotateObject(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObjectController_RotateObject_m26E1A4762F4B0E957E7694E1C4FDB788B7082977 (RotateObjectController_tD145EB9A5D2B3E6DE2D7AD5DCAF7D9C833E3EA6B* __this, float ___rotationAmount0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m39C767D6CD12B2D12D575E2B469CB5565BFA30B6 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___torque0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// System.Void SoundController::preLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_preLoad_mCDB80A57BBD280964025414B9513635BB21C4598 (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) ;
// System.Void SoundController::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundController_Load_m0313BE674BA82B46B4E2CA61209FF22DBF4042AE (SoundController_tA53F7251931CF12B1E75D0DF2F56D42DBFC61071* __this, const RuntimeMethod* method) ;
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
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43 (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* __this, int32_t ___key0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520*, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>::Remove(TKey)
inline bool Dictionary_2_Remove_m8AAAFC55B2438542D29F1EDCDEEE6AE631082269 (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m8AAAFC55B2438542D29F1EDCDEEE6AE631082269_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>::get_Item(TKey)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1 (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_gshared)(__this, ___key0, method);
}
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void TouchController::GetRelativeTouch(UnityEngine.Vector2,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_GetRelativeTouch_m1349350A37508CCFB039AB381EAC19B70A55B252 (TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___xMovement1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___yMovement2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TouchController::OnTwoRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchController_OnTwoRotate_m3592816D51244E7E9BC34461289D8FED5BDC53A9 (TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TouchController::OnTwoMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchController_OnTwoMove_m310DE35EBD59FB314A2964C820FF17E23CFF2C55 (TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TouchController::OnTwoScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchController_OnTwoScale_m3CAC18051CF9EC4B6AB2CFE712D99FF5D553D863 (TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TouchController::OnOneMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchController_OnOneMove_m873B943FC4F488500D985AC944B7AB358D893E17 (TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void TouchController/<OnOneMove>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnOneMoveU3Ed__16__ctor_m424DB860FE541693611D4D078857F508EC52007F (U3COnOneMoveU3Ed__16_tB5C9C49B8E10998069D2F7B6898288DCD30973EB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void TouchController/<OnTwoMove>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoMoveU3Ed__17__ctor_mCE99A978A864D1345E2945D30D7A66AA97DA4136 (U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void TouchController/<OnTwoRotate>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoRotateU3Ed__18__ctor_m2F836CA89B8EBB2AC60A2374D4EF2E34F69FF78A (U3COnTwoRotateU3Ed__18_tB03772A0ED37972BAE97B264ECB30F2ED70E3F76* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void TouchController/<OnTwoScale>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoScaleU3Ed__19__ctor_m4F1E6DB942189928E00F9FE26C572AAED1E9E01E (U3COnTwoScaleU3Ed__19_t69CBD1C0028FDAE877F43960A8ABEB109806C411* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
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
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector2>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55 (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mE1592684DFBDA166714C43F9AA5E6AEE7BE51E55_gshared)(__this, ___key0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator VideController::PlayVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VideController_PlayVideo_mD505C4512286F8C503BDBEB0D75E94D09A6BE776 (VideController_t01D5382A73805EC587F3ED5F50DB93633D01476E* __this, const RuntimeMethod* method) ;
// System.Void VideController/<PlayVideo>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayVideoU3Ed__14__ctor_m977FD08B359D50FA5C152F8AB37E62EED847FC8C (U3CPlayVideoU3Ed__14_tDFDA136BFC67BD73A6FDF2A813453721FE757ACA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
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
		__this->____isSkip_14 = (bool)0;
		goto IL_0026;
	}

IL_001d:
	{
		// _isSkip = true;
		__this->____isSkip_14 = (bool)1;
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
		bool L_0 = __this->____isSkip_14;
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
			goto IL_0062;
		}
	}
	{
		// _isPlay = ARManager.instance.IsPlay;
		ARManager_t082C478673DF5F5786DFB25006CC1643E8471245* L_3 = ((ARManager_t082C478673DF5F5786DFB25006CC1643E8471245_StaticFields*)il2cpp_codegen_static_fields_for(ARManager_t082C478673DF5F5786DFB25006CC1643E8471245_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_3);
		bool L_4 = L_3->___IsPlay_5;
		__this->____isPlay_13 = L_4;
		// if (_isPlay)
		bool L_5 = __this->____isPlay_13;
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0061;
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
		// dolpin.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___dolpin_12;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
	}

IL_0061:
	{
	}

IL_0062:
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
		__this->____isPlay_13 = (bool)0;
		// private bool _isSkip = false;
		__this->____isSkip_14 = (bool)0;
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadController.Instance.LoadScene(sceneName);
		LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8* L_0 = ((LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8_StaticFields*)il2cpp_codegen_static_fields_for(LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8_il2cpp_TypeInfo_var))->___Instance_4;
		String_t* L_1 = ___sceneName0;
		NullCheck(L_0);
		LoadController_LoadScene_m85545388FBC03C8D3DCC8D08DAF088B84E863005(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ButtonManager::changeScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonManager_changeScene_m238EA393B3EBF5EA77712B962E1C1627A5228925 (ButtonManager_tB4A98DF10074AA9CF8B331C8AB41A791E21A6AD8* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LoadController.Instance.LoadScene(sceneName);
		LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8* L_0 = ((LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8_StaticFields*)il2cpp_codegen_static_fields_for(LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8_il2cpp_TypeInfo_var))->___Instance_4;
		String_t* L_1 = ___sceneName0;
		NullCheck(L_0);
		LoadController_LoadScene_m85545388FBC03C8D3DCC8D08DAF088B84E863005(L_0, L_1, NULL);
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
// System.Void CukaiDetailController::SetTarget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiDetailController_SetTarget_mF85A5DB58CCABF5748F603CEDFAFF1FD03F74021 (CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* __this, int32_t ___thisTarget0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (thisTarget >= 0 && thisTarget <= descObject.Length)
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveU3Ed__15_t0F70841571B89609EF7A5CAD39833D1E6C7BCBBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveU3Ed__15_t0F70841571B89609EF7A5CAD39833D1E6C7BCBBF* L_0 = (U3CMoveU3Ed__15_t0F70841571B89609EF7A5CAD39833D1E6C7BCBBF*)il2cpp_codegen_object_new(U3CMoveU3Ed__15_t0F70841571B89609EF7A5CAD39833D1E6C7BCBBF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMoveU3Ed__15__ctor_m2FBEF9D04FB6769B47B32CDA057611BD37C918C4(L_0, 0, NULL);
		U3CMoveU3Ed__15_t0F70841571B89609EF7A5CAD39833D1E6C7BCBBF* L_1 = L_0;
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
		// private int position = 0;
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
// System.Void CukaiDetailController/<Move>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__15__ctor_m2FBEF9D04FB6769B47B32CDA057611BD37C918C4 (U3CMoveU3Ed__15_t0F70841571B89609EF7A5CAD39833D1E6C7BCBBF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CukaiDetailController/<Move>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__15_System_IDisposable_Dispose_m684BA5A152C26CB10A59A14BCFC5828345D444F9 (U3CMoveU3Ed__15_t0F70841571B89609EF7A5CAD39833D1E6C7BCBBF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CukaiDetailController/<Move>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveU3Ed__15_MoveNext_mE5D3AB75248AE6BABF75D36656AFE51A65527E95 (U3CMoveU3Ed__15_t0F70841571B89609EF7A5CAD39833D1E6C7BCBBF* __this, const RuntimeMethod* method) 
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
// System.Object CukaiDetailController/<Move>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m06B12B55AD4BA7D90BECEFCBB8916066D2E71701 (U3CMoveU3Ed__15_t0F70841571B89609EF7A5CAD39833D1E6C7BCBBF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CukaiDetailController/<Move>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveU3Ed__15_System_Collections_IEnumerator_Reset_mF86DB1602F02C8CEE692112AEC32ECAFCEA13A7E (U3CMoveU3Ed__15_t0F70841571B89609EF7A5CAD39833D1E6C7BCBBF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveU3Ed__15_System_Collections_IEnumerator_Reset_mF86DB1602F02C8CEE692112AEC32ECAFCEA13A7E_RuntimeMethod_var)));
	}
}
// System.Object CukaiDetailController/<Move>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveU3Ed__15_System_Collections_IEnumerator_get_Current_mF8EB5CF971AA5C50A1301CA3EF64C9F4B9A78451 (U3CMoveU3Ed__15_t0F70841571B89609EF7A5CAD39833D1E6C7BCBBF* __this, const RuntimeMethod* method) 
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
// System.Void CukaiSwipeController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiSwipeController_Start_m573F8DBC2FC4C73DE17BEA1DF87C2A4CFC62C4E1 (CukaiSwipeController_tB211EE93D6C4E4F405560299420BDAAB2608208E* __this, const RuntimeMethod* method) 
{
	{
		// InitiateCard(initiateSkip);
		int32_t L_0 = __this->___initiateSkip_4;
		CukaiSwipeController_InitiateCard_mD3E9D387484964E1A1E604F1DCA0E5E60AF5D243(__this, L_0, NULL);
		// }
		return;
	}
}
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
		float L_7 = __this->____rate_6;
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
		__this->____initialPosition_5 = L_1;
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->____initialPosition_5);
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
		int32_t L_6 = __this->___position_11;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = __this->___pos_10;
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
		int32_t L_9 = __this->___position_11;
		__this->___position_11 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// scrollPos = pos[position];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___pos_10;
		int32_t L_11 = __this->___position_11;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		float L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->___scrollPos_9 = L_13;
		// cukaiDetailObject.GetComponent<CukaiDetailController>().SetTarget(position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___cukaiDetailObject_7;
		NullCheck(L_14);
		CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* L_15;
		L_15 = GameObject_GetComponent_TisCukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC_m6A572331D9C40D0D9B1243B31646EC87DBD46B36(L_14, GameObject_GetComponent_TisCukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC_m6A572331D9C40D0D9B1243B31646EC87DBD46B36_RuntimeMethod_var);
		int32_t L_16 = __this->___position_11;
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
		int32_t L_17 = __this->___position_11;
		V_2 = (bool)((((int32_t)L_17) > ((int32_t)0))? 1 : 0);
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_00be;
		}
	}
	{
		// position--;
		int32_t L_19 = __this->___position_11;
		__this->___position_11 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		// scrollPos = pos[position];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = __this->___pos_10;
		int32_t L_21 = __this->___position_11;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		float L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		__this->___scrollPos_9 = L_23;
		// cukaiDetailObject.GetComponent<CukaiDetailController>().SetTarget(position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___cukaiDetailObject_7;
		NullCheck(L_24);
		CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* L_25;
		L_25 = GameObject_GetComponent_TisCukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC_m6A572331D9C40D0D9B1243B31646EC87DBD46B36(L_24, GameObject_GetComponent_TisCukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC_m6A572331D9C40D0D9B1243B31646EC87DBD46B36_RuntimeMethod_var);
		int32_t L_26 = __this->___position_11;
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
// System.Void CukaiSwipeController::InitiateCard(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiSwipeController_InitiateCard_mD3E9D387484964E1A1E604F1DCA0E5E60AF5D243 (CukaiSwipeController_tB211EE93D6C4E4F405560299420BDAAB2608208E* __this, int32_t ___skip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC_m6A572331D9C40D0D9B1243B31646EC87DBD46B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	bool V_5 = false;
	{
		// pos = new float[transform.childCount - skip];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		int32_t L_2 = ___skip0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2)));
		__this->___pos_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pos_10), (void*)L_3);
		// for (int i = 0; i < transform.childCount; i++)
		V_0 = 0;
		goto IL_003d;
	}

IL_001d:
	{
		// Transform child = transform.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, L_5, NULL);
		V_1 = L_6;
		// child.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// for (int i = 0; i < transform.childCount; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003d:
	{
		// for (int i = 0; i < transform.childCount; i++)
		int32_t L_10 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_11, NULL);
		V_2 = (bool)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.Log(transform.childCount - skip);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_14, NULL);
		int32_t L_16 = ___skip0;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_15, L_16));
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_18, NULL);
		// Debug.Log(transform.childCount);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_19, NULL);
		int32_t L_21 = L_20;
		RuntimeObject* L_22 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_21);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_22, NULL);
		// for (int i = transform.childCount - 1; i > transform.childCount - skip - 1; i--)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_23, NULL);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		goto IL_00af;
	}

IL_008d:
	{
		// Transform child = transform.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_26 = V_3;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_25, L_26, NULL);
		V_4 = L_27;
		// child.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = V_4;
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_28, NULL);
		NullCheck(L_29);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)0, NULL);
		// for (int i = transform.childCount - 1; i > transform.childCount - skip - 1; i--)
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
	}

IL_00af:
	{
		// for (int i = transform.childCount - 1; i > transform.childCount - skip - 1; i--)
		int32_t L_31 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_32, NULL);
		int32_t L_34 = ___skip0;
		V_5 = (bool)((((int32_t)L_31) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_33, L_34)), 1))))? 1 : 0);
		bool L_35 = V_5;
		if (L_35)
		{
			goto IL_008d;
		}
	}
	{
		// position = 0;
		__this->___position_11 = 0;
		// scrollPos = pos[position];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_36 = __this->___pos_10;
		int32_t L_37 = __this->___position_11;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		float L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		__this->___scrollPos_9 = L_39;
		// cukaiDetailObject.GetComponent<CukaiDetailController>().SetTarget(position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___cukaiDetailObject_7;
		NullCheck(L_40);
		CukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC* L_41;
		L_41 = GameObject_GetComponent_TisCukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC_m6A572331D9C40D0D9B1243B31646EC87DBD46B36(L_40, GameObject_GetComponent_TisCukaiDetailController_tF16CA1FC1D5EBFCBE2F17702FE1FC89497645DBC_m6A572331D9C40D0D9B1243B31646EC87DBD46B36_RuntimeMethod_var);
		int32_t L_42 = __this->___position_11;
		NullCheck(L_41);
		CukaiDetailController_SetTarget_mF85A5DB58CCABF5748F603CEDFAFF1FD03F74021(L_41, L_42, NULL);
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
		// float distance = 1f / (pos.Length - 1);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___pos_10;
		NullCheck(L_0);
		V_0 = ((float)((1.0f)/((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1)))));
		// for (int i = 0; i < pos.Length; i++)
		V_1 = 0;
		goto IL_0029;
	}

IL_0017:
	{
		// pos[i] = distance * i;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___pos_10;
		int32_t L_2 = V_1;
		float L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (float)((float)il2cpp_codegen_multiply(L_3, ((float)L_4))));
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0029:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_6 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = __this->___pos_10;
		NullCheck(L_7);
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0017;
		}
	}
	{
		// if (Input.GetMouseButton(0))
		bool L_9;
		L_9 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		// scrollPos = scrollbar.GetComponent<Scrollbar>().value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___scrollbar_8;
		NullCheck(L_11);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_12;
		L_12 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_11, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		NullCheck(L_12);
		float L_13;
		L_13 = Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35(L_12, NULL);
		__this->___scrollPos_9 = L_13;
		goto IL_00f4;
	}

IL_005f:
	{
		// for (int i = 0; i < pos.Length; i++)
		V_4 = 0;
		goto IL_00de;
	}

IL_0065:
	{
		// if (scrollPos < pos[i] + (distance / 2) && scrollPos > pos[i] - (distance / 2))
		float L_14 = __this->___scrollPos_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = __this->___pos_10;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		float L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		float L_19 = V_0;
		if ((!(((float)L_14) < ((float)((float)il2cpp_codegen_add(L_18, ((float)(L_19/(2.0f)))))))))
		{
			goto IL_009a;
		}
	}
	{
		float L_20 = __this->___scrollPos_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = __this->___pos_10;
		int32_t L_22 = V_4;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		float L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		float L_25 = V_0;
		G_B9_0 = ((((float)L_20) > ((float)((float)il2cpp_codegen_subtract(L_24, ((float)(L_25/(2.0f)))))))? 1 : 0);
		goto IL_009b;
	}

IL_009a:
	{
		G_B9_0 = 0;
	}

IL_009b:
	{
		V_5 = (bool)G_B9_0;
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00d7;
		}
	}
	{
		// scrollbar.GetComponent<Scrollbar>().value = Mathf.Lerp(scrollbar.GetComponent<Scrollbar>().value, pos[i], 0.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___scrollbar_8;
		NullCheck(L_27);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_28;
		L_28 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_27, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___scrollbar_8;
		NullCheck(L_29);
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_30;
		L_30 = GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437(L_29, GameObject_GetComponent_TisScrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3_mF12372E2716F1FC72A4AA2D6EEB7F9972A4D4437_RuntimeMethod_var);
		NullCheck(L_30);
		float L_31;
		L_31 = Scrollbar_get_value_mC2F43475C89766DA596FFAA019CA59F94CC89A35(L_30, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = __this->___pos_10;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		float L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		float L_36;
		L_36 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_31, L_35, (0.5f), NULL);
		NullCheck(L_28);
		Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804(L_28, L_36, NULL);
	}

IL_00d7:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00de:
	{
		// for (int i = 0; i < pos.Length; i++)
		int32_t L_38 = V_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = __this->___pos_10;
		NullCheck(L_39);
		V_6 = (bool)((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length))))? 1 : 0);
		bool L_40 = V_6;
		if (L_40)
		{
			goto IL_0065;
		}
	}
	{
	}

IL_00f4:
	{
		// }
		return;
	}
}
// System.Void CukaiSwipeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CukaiSwipeController__ctor_m169AC9C75DB028E26032828D2D32E86B3B3EDB5A (CukaiSwipeController_tB211EE93D6C4E4F405560299420BDAAB2608208E* __this, const RuntimeMethod* method) 
{
	{
		// public int initiateSkip = 0;
		__this->___initiateSkip_4 = 0;
		// private float _rate = 0.3f;
		__this->____rate_6 = (0.300000012f);
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
// System.Void CustomImageTargetController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomImageTargetController_Update_m5114A553046365DE89A01DECF110EA7346D01CBE (CustomImageTargetController_t051303919307718CE549FE95F3D52655A2BAD3EB* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B11_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B51_0 = 0;
	int32_t G_B53_0 = 0;
	{
		// base.Update();
		ImageTargetController_Update_m84653120D4AE5517F8225CEA13EEC106AE8866E5(__this, NULL);
		// float myrx = 0;
		V_0 = (0.0f);
		// myrx = this.transform.localEulerAngles.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_0, NULL);
		float L_2 = L_1.___x_2;
		V_0 = L_2;
		goto IL_002b;
	}

IL_0021:
	{
		// myrx -= 360;
		float L_3 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_002b:
	{
		// while (myrx >= 360)
		float L_4 = V_0;
		V_3 = (bool)((((int32_t)((!(((float)L_4) >= ((float)(360.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (L_5)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0046;
	}

IL_003c:
	{
		// myrx += 360;
		float L_6 = V_0;
		V_0 = ((float)il2cpp_codegen_add(L_6, (360.0f)));
	}

IL_0046:
	{
		// while (myrx <= -360)
		float L_7 = V_0;
		V_4 = (bool)((((int32_t)((!(((float)L_7) <= ((float)(-360.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_4;
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0062;
	}

IL_0059:
	{
		// myrx = -(360 - myrx);
		float L_9 = V_0;
		V_0 = ((-((float)il2cpp_codegen_subtract((360.0f), L_9))));
	}

IL_0062:
	{
		// while (myrx > 270 && 360 - myrx >= 0)
		float L_10 = V_0;
		if ((!(((float)L_10) > ((float)(270.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		float L_11 = V_0;
		G_B11_0 = ((((int32_t)((!(((float)((float)il2cpp_codegen_subtract((360.0f), L_11))) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_007e;
	}

IL_007d:
	{
		G_B11_0 = 0;
	}

IL_007e:
	{
		V_5 = (bool)G_B11_0;
		bool L_12 = V_5;
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// float myry = 0;
		V_1 = (0.0f);
		// myry = this.transform.localEulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_13, NULL);
		float L_15 = L_14.___y_3;
		V_1 = L_15;
		goto IL_00a7;
	}

IL_009d:
	{
		// myry -= 360;
		float L_16 = V_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_16, (360.0f)));
	}

IL_00a7:
	{
		// while (myry >= 360)
		float L_17 = V_1;
		V_6 = (bool)((((int32_t)((!(((float)L_17) >= ((float)(360.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_6;
		if (L_18)
		{
			goto IL_009d;
		}
	}
	{
		goto IL_00c4;
	}

IL_00ba:
	{
		// myry += 360;
		float L_19 = V_1;
		V_1 = ((float)il2cpp_codegen_add(L_19, (360.0f)));
	}

IL_00c4:
	{
		// while (myry <= -360)
		float L_20 = V_1;
		V_7 = (bool)((((int32_t)((!(((float)L_20) <= ((float)(-360.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_7;
		if (L_21)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00e0;
	}

IL_00d7:
	{
		// myry = -(360 - myry);
		float L_22 = V_1;
		V_1 = ((-((float)il2cpp_codegen_subtract((360.0f), L_22))));
	}

IL_00e0:
	{
		// while (myry > 270 && 360 - myry >= 0)
		float L_23 = V_1;
		if ((!(((float)L_23) > ((float)(270.0f)))))
		{
			goto IL_00fb;
		}
	}
	{
		float L_24 = V_1;
		G_B23_0 = ((((int32_t)((!(((float)((float)il2cpp_codegen_subtract((360.0f), L_24))) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00fc;
	}

IL_00fb:
	{
		G_B23_0 = 0;
	}

IL_00fc:
	{
		V_8 = (bool)G_B23_0;
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_00d7;
		}
	}
	{
		// float myrz = 0;
		V_2 = (0.0f);
		// myrz = this.transform.localEulerAngles.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_26, NULL);
		float L_28 = L_27.___z_4;
		V_2 = L_28;
		goto IL_0125;
	}

IL_011b:
	{
		// myrz -= 360;
		float L_29 = V_2;
		V_2 = ((float)il2cpp_codegen_subtract(L_29, (360.0f)));
	}

IL_0125:
	{
		// while (myrz >= 360)
		float L_30 = V_2;
		V_9 = (bool)((((int32_t)((!(((float)L_30) >= ((float)(360.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_9;
		if (L_31)
		{
			goto IL_011b;
		}
	}
	{
		goto IL_0142;
	}

IL_0138:
	{
		// myrz += 360;
		float L_32 = V_2;
		V_2 = ((float)il2cpp_codegen_add(L_32, (360.0f)));
	}

IL_0142:
	{
		// while (myrz <= -360)
		float L_33 = V_2;
		V_10 = (bool)((((int32_t)((!(((float)L_33) <= ((float)(-360.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_10;
		if (L_34)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_015e;
	}

IL_0155:
	{
		// myrz = -(360 - myrz);
		float L_35 = V_2;
		V_2 = ((-((float)il2cpp_codegen_subtract((360.0f), L_35))));
	}

IL_015e:
	{
		// while (myrz > 270 && 360 - myrz >= 0)
		float L_36 = V_2;
		if ((!(((float)L_36) > ((float)(270.0f)))))
		{
			goto IL_0179;
		}
	}
	{
		float L_37 = V_2;
		G_B35_0 = ((((int32_t)((!(((float)((float)il2cpp_codegen_subtract((360.0f), L_37))) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_017a;
	}

IL_0179:
	{
		G_B35_0 = 0;
	}

IL_017a:
	{
		V_11 = (bool)G_B35_0;
		bool L_38 = V_11;
		if (L_38)
		{
			goto IL_0155;
		}
	}
	{
		// if (
		//     (
		//         (Mathf.Abs(this.transform.position.x - lastX) > trasMin || Mathf.Abs(this.transform.position.y - lastY) > trasMin || Mathf.Abs(this.transform.position.z - lastZ) > trasMin) &&
		//         (Mathf.Abs(this.transform.position.x - lastX) < trasMax || Mathf.Abs(this.transform.position.y - lastY) < trasMax || Mathf.Abs(this.transform.position.z - lastZ) < trasMax)) ||
		//     (
		//         (Mathf.Abs(myrx - lastRX) > rotMin && Mathf.Abs(myry - lastRY) > rotMin && Mathf.Abs(myrz - lastRZ) > rotMin) &&
		//         (Mathf.Abs(myrx - lastRX) < rotMax || Mathf.Abs(myry - lastRY) < rotMax || Mathf.Abs(myrz - lastRZ) < rotMax)
		//     )
		// ) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		float L_41 = L_40.___x_2;
		float L_42 = __this->___lastX_25;
		float L_43;
		L_43 = fabsf(((float)il2cpp_codegen_subtract(L_41, L_42)));
		float L_44 = __this->___trasMin_33;
		if ((((float)L_43) > ((float)L_44)))
		{
			goto IL_01ec;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		float L_47 = L_46.___y_3;
		float L_48 = __this->___lastY_27;
		float L_49;
		L_49 = fabsf(((float)il2cpp_codegen_subtract(L_47, L_48)));
		float L_50 = __this->___trasMin_33;
		if ((((float)L_49) > ((float)L_50)))
		{
			goto IL_01ec;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		float L_53 = L_52.___z_4;
		float L_54 = __this->___lastZ_29;
		float L_55;
		L_55 = fabsf(((float)il2cpp_codegen_subtract(L_53, L_54)));
		float L_56 = __this->___trasMin_33;
		if ((!(((float)L_55) > ((float)L_56))))
		{
			goto IL_0261;
		}
	}

IL_01ec:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_57, NULL);
		float L_59 = L_58.___x_2;
		float L_60 = __this->___lastX_25;
		float L_61;
		L_61 = fabsf(((float)il2cpp_codegen_subtract(L_59, L_60)));
		float L_62 = __this->___trasMax_34;
		if ((((float)L_61) < ((float)L_62)))
		{
			goto IL_02e7;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_63, NULL);
		float L_65 = L_64.___y_3;
		float L_66 = __this->___lastY_27;
		float L_67;
		L_67 = fabsf(((float)il2cpp_codegen_subtract(L_65, L_66)));
		float L_68 = __this->___trasMax_34;
		if ((((float)L_67) < ((float)L_68)))
		{
			goto IL_02e7;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69;
		L_69 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_69);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_69, NULL);
		float L_71 = L_70.___z_4;
		float L_72 = __this->___lastZ_29;
		float L_73;
		L_73 = fabsf(((float)il2cpp_codegen_subtract(L_71, L_72)));
		float L_74 = __this->___trasMax_34;
		if ((((float)L_73) < ((float)L_74)))
		{
			goto IL_02e7;
		}
	}

IL_0261:
	{
		float L_75 = V_0;
		float L_76 = __this->___lastRX_26;
		float L_77;
		L_77 = fabsf(((float)il2cpp_codegen_subtract(L_75, L_76)));
		float L_78 = __this->___rotMin_31;
		if ((!(((float)L_77) > ((float)L_78))))
		{
			goto IL_02e4;
		}
	}
	{
		float L_79 = V_1;
		float L_80 = __this->___lastRY_28;
		float L_81;
		L_81 = fabsf(((float)il2cpp_codegen_subtract(L_79, L_80)));
		float L_82 = __this->___rotMin_31;
		if ((!(((float)L_81) > ((float)L_82))))
		{
			goto IL_02e4;
		}
	}
	{
		float L_83 = V_2;
		float L_84 = __this->___lastRZ_30;
		float L_85;
		L_85 = fabsf(((float)il2cpp_codegen_subtract(L_83, L_84)));
		float L_86 = __this->___rotMin_31;
		if ((!(((float)L_85) > ((float)L_86))))
		{
			goto IL_02e4;
		}
	}
	{
		float L_87 = V_0;
		float L_88 = __this->___lastRX_26;
		float L_89;
		L_89 = fabsf(((float)il2cpp_codegen_subtract(L_87, L_88)));
		float L_90 = __this->___rotMax_32;
		if ((((float)L_89) < ((float)L_90)))
		{
			goto IL_02e1;
		}
	}
	{
		float L_91 = V_1;
		float L_92 = __this->___lastRY_28;
		float L_93;
		L_93 = fabsf(((float)il2cpp_codegen_subtract(L_91, L_92)));
		float L_94 = __this->___rotMax_32;
		if ((((float)L_93) < ((float)L_94)))
		{
			goto IL_02e1;
		}
	}
	{
		float L_95 = V_2;
		float L_96 = __this->___lastRZ_30;
		float L_97;
		L_97 = fabsf(((float)il2cpp_codegen_subtract(L_95, L_96)));
		float L_98 = __this->___rotMax_32;
		G_B49_0 = ((((float)L_97) < ((float)L_98))? 1 : 0);
		goto IL_02e2;
	}

IL_02e1:
	{
		G_B49_0 = 1;
	}

IL_02e2:
	{
		G_B51_0 = G_B49_0;
		goto IL_02e5;
	}

IL_02e4:
	{
		G_B51_0 = 0;
	}

IL_02e5:
	{
		G_B53_0 = G_B51_0;
		goto IL_02e8;
	}

IL_02e7:
	{
		G_B53_0 = 1;
	}

IL_02e8:
	{
		V_12 = (bool)G_B53_0;
		bool L_99 = V_12;
		if (!L_99)
		{
			goto IL_03b0;
		}
	}
	{
		// lastX = Mathf.Lerp(lastX, this.transform.position.x, lerpT);
		float L_100 = __this->___lastX_25;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_101);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_101, NULL);
		float L_103 = L_102.___x_2;
		float L_104 = __this->___lerpT_35;
		float L_105;
		L_105 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_100, L_103, L_104, NULL);
		__this->___lastX_25 = L_105;
		// lastY = Mathf.Lerp(lastY, this.transform.position.y, lerpT);
		float L_106 = __this->___lastY_27;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_107;
		L_107 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_107);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_107, NULL);
		float L_109 = L_108.___y_3;
		float L_110 = __this->___lerpT_35;
		float L_111;
		L_111 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_106, L_109, L_110, NULL);
		__this->___lastY_27 = L_111;
		// lastZ = Mathf.Lerp(lastZ, this.transform.position.z, lerpT);
		float L_112 = __this->___lastZ_29;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_113, NULL);
		float L_115 = L_114.___z_4;
		float L_116 = __this->___lerpT_35;
		float L_117;
		L_117 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_112, L_115, L_116, NULL);
		__this->___lastZ_29 = L_117;
		// lastRX = Mathf.Lerp(lastRX, myrx, lerpT);
		float L_118 = __this->___lastRX_26;
		float L_119 = V_0;
		float L_120 = __this->___lerpT_35;
		float L_121;
		L_121 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_118, L_119, L_120, NULL);
		__this->___lastRX_26 = L_121;
		// lastRY = Mathf.Lerp(lastRY, myry, lerpT);
		float L_122 = __this->___lastRY_28;
		float L_123 = V_1;
		float L_124 = __this->___lerpT_35;
		float L_125;
		L_125 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_122, L_123, L_124, NULL);
		__this->___lastRY_28 = L_125;
		// lastRZ = Mathf.Lerp(lastRZ, myrz, lerpT);
		float L_126 = __this->___lastRZ_30;
		float L_127 = V_2;
		float L_128 = __this->___lerpT_35;
		float L_129;
		L_129 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_126, L_127, L_128, NULL);
		__this->___lastRZ_30 = L_129;
	}

IL_03b0:
	{
		// this.transform.rotation = Quaternion.Euler(lastRX, lastRY, lastRZ);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_130;
		L_130 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_131 = __this->___lastRX_26;
		float L_132 = __this->___lastRY_28;
		float L_133 = __this->___lastRZ_30;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_134;
		L_134 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_131, L_132, L_133, NULL);
		NullCheck(L_130);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_130, L_134, NULL);
		// this.transform.position = new Vector3(lastX, lastY, lastZ);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_135;
		L_135 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_136 = __this->___lastX_25;
		float L_137 = __this->___lastY_27;
		float L_138 = __this->___lastZ_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		memset((&L_139), 0, sizeof(L_139));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_139), L_136, L_137, L_138, /*hidden argument*/NULL);
		NullCheck(L_135);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_135, L_139, NULL);
		// }
		return;
	}
}
// System.Void CustomImageTargetController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomImageTargetController__ctor_m5D251EB967C2F56EE6AA37F2CE6BFC008F5C823C (CustomImageTargetController_t051303919307718CE549FE95F3D52655A2BAD3EB* __this, const RuntimeMethod* method) 
{
	{
		// public float rotMin = 3f;
		__this->___rotMin_31 = (3.0f);
		// public float rotMax = 6f;
		__this->___rotMax_32 = (6.0f);
		// public float trasMin = 0.06f;
		__this->___trasMin_33 = (0.0599999987f);
		// public float trasMax = 0.13f;
		__this->___trasMax_34 = (0.129999995f);
		// public float lerpT = 0.2f;
		__this->___lerpT_35 = (0.200000003f);
		ImageTargetController__ctor_m004DC8AA0E97C9147CFCF146D8DD207538FB052E(__this, NULL);
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
		__this->___index_17 = L_0;
		// hideFishObjects();
		FishLibraryController_hideFishObjects_m93ABA499BC34637CEA542C49F5ECB26456D9ECB6(__this, NULL);
		// fishObjects[index].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___fishObjects_4;
		int32_t L_2 = __this->___index_17;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// hideTooltipObjects();
		FishLibraryController_hideTooltipObjects_mF0FC6D83332787B19F6530DCB14CEA7EADFAF2FB(__this, NULL);
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
// System.Void FishLibraryController::HideShowTooltip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_HideShowTooltip_m970699970E736149594C299567295E878F5DF87A (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (isTooltipOpen)
		bool L_0 = __this->___isTooltipOpen_6;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// tooltipObjects[index].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___tooltipObjects_5;
		int32_t L_3 = __this->___index_17;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// isTooltipOpen = false;
		__this->___isTooltipOpen_6 = (bool)0;
		goto IL_0047;
	}

IL_002a:
	{
		// tooltipObjects[index].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___tooltipObjects_5;
		int32_t L_7 = __this->___index_17;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// isTooltipOpen = true;
		__this->___isTooltipOpen_6 = (bool)1;
	}

IL_0047:
	{
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
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___foodObjects_13;
		int32_t L_1 = __this->___index_17;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// hideThreatObjects();
		FishLibraryController_hideThreatObjects_mF374C4B489974770B80B5ED81CB01D5D8030703B(__this, NULL);
		// sizeText.text = sizeStrings[index];
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___sizeText_15;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = __this->___sizeStrings_16;
		int32_t L_6 = __this->___index_17;
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
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___threatObjects_14;
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
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___threatObjects_14;
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
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___foodObjects_13;
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
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___foodObjects_13;
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
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___titleText_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___titleStrings_10;
		int32_t L_2 = __this->___index_17;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// tagText.text = tagStrings[index];
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___tagText_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = __this->___tagStrings_11;
		int32_t L_7 = __this->___index_17;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
		// descText.text = descStrings[index];
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___descText_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = __this->___descStrings_12;
		int32_t L_12 = __this->___index_17;
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
		bool L_0 = __this->___isFoodOpen_19;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// bottomTooltips[0].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___bottomTooltips_18;
		NullCheck(L_2);
		int32_t L_3 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// isFoodOpen = false;
		__this->___isFoodOpen_19 = (bool)0;
		goto IL_0044;
	}

IL_0025:
	{
		// hideBottomToltips();
		FishLibraryController_hideBottomToltips_m149FCB790BAC0C7ACC042831A5465D35E98387DC(__this, NULL);
		// bottomTooltips[0].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___bottomTooltips_18;
		NullCheck(L_5);
		int32_t L_6 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// isFoodOpen = true;
		__this->___isFoodOpen_19 = (bool)1;
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
		bool L_0 = __this->___isThreatOpen_20;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// bottomTooltips[1].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___bottomTooltips_18;
		NullCheck(L_2);
		int32_t L_3 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// isThreatOpen = false;
		__this->___isThreatOpen_20 = (bool)0;
		goto IL_0044;
	}

IL_0025:
	{
		// hideBottomToltips();
		FishLibraryController_hideBottomToltips_m149FCB790BAC0C7ACC042831A5465D35E98387DC(__this, NULL);
		// bottomTooltips[1].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___bottomTooltips_18;
		NullCheck(L_5);
		int32_t L_6 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// isThreatOpen = true;
		__this->___isThreatOpen_20 = (bool)1;
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
		bool L_0 = __this->___isSizeOpen_21;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// bottomTooltips[2].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___bottomTooltips_18;
		NullCheck(L_2);
		int32_t L_3 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// isSizeOpen = false;
		__this->___isSizeOpen_21 = (bool)0;
		goto IL_0044;
	}

IL_0025:
	{
		// hideBottomToltips();
		FishLibraryController_hideBottomToltips_m149FCB790BAC0C7ACC042831A5465D35E98387DC(__this, NULL);
		// bottomTooltips[2].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___bottomTooltips_18;
		NullCheck(L_5);
		int32_t L_6 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// isSizeOpen = true;
		__this->___isSizeOpen_21 = (bool)1;
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
		__this->___isFoodOpen_19 = (bool)0;
		// isThreatOpen = false;
		__this->___isThreatOpen_20 = (bool)0;
		// isSizeOpen = false;
		__this->___isSizeOpen_21 = (bool)0;
		// bottomTooltips[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___bottomTooltips_18;
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
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___bottomTooltips_18;
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
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_22;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___audioClips_23;
		int32_t L_2 = __this->___index_17;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_4, NULL);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___audioSource_22;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
		// soundImage.sprite = soundOnSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = __this->___soundImage_25;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___soundOnSprite_27;
		NullCheck(L_6);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_6, L_7, NULL);
		// isAudioOn = true;
		__this->___isAudioOn_24 = (bool)1;
		// }
		return;
	}
}
// System.Void FishLibraryController::PauseAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FishLibraryController_PauseAudio_mB2F941CD0767C2505B570897148E7A6F118AD6BC (FishLibraryController_t969B3D2A45CAF6756A864118CD969C204E1F694F* __this, const RuntimeMethod* method) 
{
	{
		// audioSource.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_22;
		NullCheck(L_0);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_0, NULL);
		// soundImage.sprite = soundOffSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___soundImage_25;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___soundOffSprite_26;
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_2, NULL);
		// isAudioOn = false;
		__this->___isAudioOn_24 = (bool)0;
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
		bool L_0 = __this->___isAudioOn_24;
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
		// private bool isTooltipOpen = false;
		__this->___isTooltipOpen_6 = (bool)0;
		// private int index = 0;
		__this->___index_17 = 0;
		// private bool isFoodOpen = false;
		__this->___isFoodOpen_19 = (bool)0;
		// private bool isThreatOpen = false;
		__this->___isThreatOpen_20 = (bool)0;
		// private bool isSizeOpen = false;
		__this->___isSizeOpen_21 = (bool)0;
		// private bool isAudioOn = false;
		__this->___isAudioOn_24 = (bool)0;
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
// System.Void CustomImageTargetBehaviour::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomImageTargetBehaviour_Update_mCF55317406AC7EE7194480DBEF40A2C550287CBB (CustomImageTargetBehaviour_t0DC223E7682E126008C39A4187B0490F36BAA0CB* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B11_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B51_0 = 0;
	int32_t G_B53_0 = 0;
	{
		// base.Update();
		ImageTargetController_Update_m84653120D4AE5517F8225CEA13EEC106AE8866E5(__this, NULL);
		// float myrx = 0;
		V_0 = (0.0f);
		// myrx = this.transform.localEulerAngles.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_0, NULL);
		float L_2 = L_1.___x_2;
		V_0 = L_2;
		goto IL_002b;
	}

IL_0021:
	{
		// myrx -= 360;
		float L_3 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_002b:
	{
		// while (myrx >= 360)
		float L_4 = V_0;
		V_3 = (bool)((((int32_t)((!(((float)L_4) >= ((float)(360.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_3;
		if (L_5)
		{
			goto IL_0021;
		}
	}
	{
		goto IL_0046;
	}

IL_003c:
	{
		// myrx += 360;
		float L_6 = V_0;
		V_0 = ((float)il2cpp_codegen_add(L_6, (360.0f)));
	}

IL_0046:
	{
		// while (myrx <= -360)
		float L_7 = V_0;
		V_4 = (bool)((((int32_t)((!(((float)L_7) <= ((float)(-360.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_4;
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0062;
	}

IL_0059:
	{
		// myrx = -(360 - myrx);
		float L_9 = V_0;
		V_0 = ((-((float)il2cpp_codegen_subtract((360.0f), L_9))));
	}

IL_0062:
	{
		// while (myrx > 270 && 360 - myrx >= 0)
		float L_10 = V_0;
		if ((!(((float)L_10) > ((float)(270.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		float L_11 = V_0;
		G_B11_0 = ((((int32_t)((!(((float)((float)il2cpp_codegen_subtract((360.0f), L_11))) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_007e;
	}

IL_007d:
	{
		G_B11_0 = 0;
	}

IL_007e:
	{
		V_5 = (bool)G_B11_0;
		bool L_12 = V_5;
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		// float myry = 0;
		V_1 = (0.0f);
		// myry = this.transform.localEulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_13, NULL);
		float L_15 = L_14.___y_3;
		V_1 = L_15;
		goto IL_00a7;
	}

IL_009d:
	{
		// myry -= 360;
		float L_16 = V_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_16, (360.0f)));
	}

IL_00a7:
	{
		// while (myry >= 360)
		float L_17 = V_1;
		V_6 = (bool)((((int32_t)((!(((float)L_17) >= ((float)(360.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_6;
		if (L_18)
		{
			goto IL_009d;
		}
	}
	{
		goto IL_00c4;
	}

IL_00ba:
	{
		// myry += 360;
		float L_19 = V_1;
		V_1 = ((float)il2cpp_codegen_add(L_19, (360.0f)));
	}

IL_00c4:
	{
		// while (myry <= -360)
		float L_20 = V_1;
		V_7 = (bool)((((int32_t)((!(((float)L_20) <= ((float)(-360.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_7;
		if (L_21)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00e0;
	}

IL_00d7:
	{
		// myry = -(360 - myry);
		float L_22 = V_1;
		V_1 = ((-((float)il2cpp_codegen_subtract((360.0f), L_22))));
	}

IL_00e0:
	{
		// while (myry > 270 && 360 - myry >= 0)
		float L_23 = V_1;
		if ((!(((float)L_23) > ((float)(270.0f)))))
		{
			goto IL_00fb;
		}
	}
	{
		float L_24 = V_1;
		G_B23_0 = ((((int32_t)((!(((float)((float)il2cpp_codegen_subtract((360.0f), L_24))) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00fc;
	}

IL_00fb:
	{
		G_B23_0 = 0;
	}

IL_00fc:
	{
		V_8 = (bool)G_B23_0;
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_00d7;
		}
	}
	{
		// float myrz = 0;
		V_2 = (0.0f);
		// myrz = this.transform.localEulerAngles.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_26, NULL);
		float L_28 = L_27.___z_4;
		V_2 = L_28;
		goto IL_0125;
	}

IL_011b:
	{
		// myrz -= 360;
		float L_29 = V_2;
		V_2 = ((float)il2cpp_codegen_subtract(L_29, (360.0f)));
	}

IL_0125:
	{
		// while (myrz >= 360)
		float L_30 = V_2;
		V_9 = (bool)((((int32_t)((!(((float)L_30) >= ((float)(360.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_9;
		if (L_31)
		{
			goto IL_011b;
		}
	}
	{
		goto IL_0142;
	}

IL_0138:
	{
		// myrz += 360;
		float L_32 = V_2;
		V_2 = ((float)il2cpp_codegen_add(L_32, (360.0f)));
	}

IL_0142:
	{
		// while (myrz <= -360)
		float L_33 = V_2;
		V_10 = (bool)((((int32_t)((!(((float)L_33) <= ((float)(-360.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_10;
		if (L_34)
		{
			goto IL_0138;
		}
	}
	{
		goto IL_015e;
	}

IL_0155:
	{
		// myrz = -(360 - myrz);
		float L_35 = V_2;
		V_2 = ((-((float)il2cpp_codegen_subtract((360.0f), L_35))));
	}

IL_015e:
	{
		// while (myrz > 270 && 360 - myrz >= 0)
		float L_36 = V_2;
		if ((!(((float)L_36) > ((float)(270.0f)))))
		{
			goto IL_0179;
		}
	}
	{
		float L_37 = V_2;
		G_B35_0 = ((((int32_t)((!(((float)((float)il2cpp_codegen_subtract((360.0f), L_37))) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_017a;
	}

IL_0179:
	{
		G_B35_0 = 0;
	}

IL_017a:
	{
		V_11 = (bool)G_B35_0;
		bool L_38 = V_11;
		if (L_38)
		{
			goto IL_0155;
		}
	}
	{
		// if (
		//     (
		//         (Mathf.Abs(this.transform.position.x - lastX) > trasMin || Mathf.Abs(this.transform.position.y - lastY) > trasMin || Mathf.Abs(this.transform.position.z - lastZ) > trasMin) &&
		//         (Mathf.Abs(this.transform.position.x - lastX) < trasMax || Mathf.Abs(this.transform.position.y - lastY) < trasMax || Mathf.Abs(this.transform.position.z - lastZ) < trasMax)) ||
		//     (
		//         (Mathf.Abs(myrx - lastRX) > rotMin && Mathf.Abs(myry - lastRY) > rotMin && Mathf.Abs(myrz - lastRZ) > rotMin) &&
		//         (Mathf.Abs(myrx - lastRX) < rotMax || Mathf.Abs(myry - lastRY) < rotMax || Mathf.Abs(myrz - lastRZ) < rotMax)
		//     )
		// ) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		float L_41 = L_40.___x_2;
		float L_42 = __this->___lastX_25;
		float L_43;
		L_43 = fabsf(((float)il2cpp_codegen_subtract(L_41, L_42)));
		float L_44 = __this->___trasMin_33;
		if ((((float)L_43) > ((float)L_44)))
		{
			goto IL_01ec;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		float L_47 = L_46.___y_3;
		float L_48 = __this->___lastY_27;
		float L_49;
		L_49 = fabsf(((float)il2cpp_codegen_subtract(L_47, L_48)));
		float L_50 = __this->___trasMin_33;
		if ((((float)L_49) > ((float)L_50)))
		{
			goto IL_01ec;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		float L_53 = L_52.___z_4;
		float L_54 = __this->___lastZ_29;
		float L_55;
		L_55 = fabsf(((float)il2cpp_codegen_subtract(L_53, L_54)));
		float L_56 = __this->___trasMin_33;
		if ((!(((float)L_55) > ((float)L_56))))
		{
			goto IL_0261;
		}
	}

IL_01ec:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_57, NULL);
		float L_59 = L_58.___x_2;
		float L_60 = __this->___lastX_25;
		float L_61;
		L_61 = fabsf(((float)il2cpp_codegen_subtract(L_59, L_60)));
		float L_62 = __this->___trasMax_34;
		if ((((float)L_61) < ((float)L_62)))
		{
			goto IL_02e7;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_63, NULL);
		float L_65 = L_64.___y_3;
		float L_66 = __this->___lastY_27;
		float L_67;
		L_67 = fabsf(((float)il2cpp_codegen_subtract(L_65, L_66)));
		float L_68 = __this->___trasMax_34;
		if ((((float)L_67) < ((float)L_68)))
		{
			goto IL_02e7;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69;
		L_69 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_69);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_69, NULL);
		float L_71 = L_70.___z_4;
		float L_72 = __this->___lastZ_29;
		float L_73;
		L_73 = fabsf(((float)il2cpp_codegen_subtract(L_71, L_72)));
		float L_74 = __this->___trasMax_34;
		if ((((float)L_73) < ((float)L_74)))
		{
			goto IL_02e7;
		}
	}

IL_0261:
	{
		float L_75 = V_0;
		float L_76 = __this->___lastRX_26;
		float L_77;
		L_77 = fabsf(((float)il2cpp_codegen_subtract(L_75, L_76)));
		float L_78 = __this->___rotMin_31;
		if ((!(((float)L_77) > ((float)L_78))))
		{
			goto IL_02e4;
		}
	}
	{
		float L_79 = V_1;
		float L_80 = __this->___lastRY_28;
		float L_81;
		L_81 = fabsf(((float)il2cpp_codegen_subtract(L_79, L_80)));
		float L_82 = __this->___rotMin_31;
		if ((!(((float)L_81) > ((float)L_82))))
		{
			goto IL_02e4;
		}
	}
	{
		float L_83 = V_2;
		float L_84 = __this->___lastRZ_30;
		float L_85;
		L_85 = fabsf(((float)il2cpp_codegen_subtract(L_83, L_84)));
		float L_86 = __this->___rotMin_31;
		if ((!(((float)L_85) > ((float)L_86))))
		{
			goto IL_02e4;
		}
	}
	{
		float L_87 = V_0;
		float L_88 = __this->___lastRX_26;
		float L_89;
		L_89 = fabsf(((float)il2cpp_codegen_subtract(L_87, L_88)));
		float L_90 = __this->___rotMax_32;
		if ((((float)L_89) < ((float)L_90)))
		{
			goto IL_02e1;
		}
	}
	{
		float L_91 = V_1;
		float L_92 = __this->___lastRY_28;
		float L_93;
		L_93 = fabsf(((float)il2cpp_codegen_subtract(L_91, L_92)));
		float L_94 = __this->___rotMax_32;
		if ((((float)L_93) < ((float)L_94)))
		{
			goto IL_02e1;
		}
	}
	{
		float L_95 = V_2;
		float L_96 = __this->___lastRZ_30;
		float L_97;
		L_97 = fabsf(((float)il2cpp_codegen_subtract(L_95, L_96)));
		float L_98 = __this->___rotMax_32;
		G_B49_0 = ((((float)L_97) < ((float)L_98))? 1 : 0);
		goto IL_02e2;
	}

IL_02e1:
	{
		G_B49_0 = 1;
	}

IL_02e2:
	{
		G_B51_0 = G_B49_0;
		goto IL_02e5;
	}

IL_02e4:
	{
		G_B51_0 = 0;
	}

IL_02e5:
	{
		G_B53_0 = G_B51_0;
		goto IL_02e8;
	}

IL_02e7:
	{
		G_B53_0 = 1;
	}

IL_02e8:
	{
		V_12 = (bool)G_B53_0;
		bool L_99 = V_12;
		if (!L_99)
		{
			goto IL_03b0;
		}
	}
	{
		// lastX = Mathf.Lerp(lastX, this.transform.position.x, lerpT);
		float L_100 = __this->___lastX_25;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_101);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_101, NULL);
		float L_103 = L_102.___x_2;
		float L_104 = __this->___lerpT_35;
		float L_105;
		L_105 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_100, L_103, L_104, NULL);
		__this->___lastX_25 = L_105;
		// lastY = Mathf.Lerp(lastY, this.transform.position.y, lerpT);
		float L_106 = __this->___lastY_27;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_107;
		L_107 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_107);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_107, NULL);
		float L_109 = L_108.___y_3;
		float L_110 = __this->___lerpT_35;
		float L_111;
		L_111 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_106, L_109, L_110, NULL);
		__this->___lastY_27 = L_111;
		// lastZ = Mathf.Lerp(lastZ, this.transform.position.z, lerpT);
		float L_112 = __this->___lastZ_29;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_113, NULL);
		float L_115 = L_114.___z_4;
		float L_116 = __this->___lerpT_35;
		float L_117;
		L_117 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_112, L_115, L_116, NULL);
		__this->___lastZ_29 = L_117;
		// lastRX = Mathf.Lerp(lastRX, myrx, lerpT);
		float L_118 = __this->___lastRX_26;
		float L_119 = V_0;
		float L_120 = __this->___lerpT_35;
		float L_121;
		L_121 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_118, L_119, L_120, NULL);
		__this->___lastRX_26 = L_121;
		// lastRY = Mathf.Lerp(lastRY, myry, lerpT);
		float L_122 = __this->___lastRY_28;
		float L_123 = V_1;
		float L_124 = __this->___lerpT_35;
		float L_125;
		L_125 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_122, L_123, L_124, NULL);
		__this->___lastRY_28 = L_125;
		// lastRZ = Mathf.Lerp(lastRZ, myrz, lerpT);
		float L_126 = __this->___lastRZ_30;
		float L_127 = V_2;
		float L_128 = __this->___lerpT_35;
		float L_129;
		L_129 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_126, L_127, L_128, NULL);
		__this->___lastRZ_30 = L_129;
	}

IL_03b0:
	{
		// this.transform.rotation = Quaternion.Euler(lastRX, lastRY, lastRZ);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_130;
		L_130 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_131 = __this->___lastRX_26;
		float L_132 = __this->___lastRY_28;
		float L_133 = __this->___lastRZ_30;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_134;
		L_134 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_131, L_132, L_133, NULL);
		NullCheck(L_130);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_130, L_134, NULL);
		// this.transform.position = new Vector3(lastX, lastY, lastZ);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_135;
		L_135 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_136 = __this->___lastX_25;
		float L_137 = __this->___lastY_27;
		float L_138 = __this->___lastZ_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		memset((&L_139), 0, sizeof(L_139));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_139), L_136, L_137, L_138, /*hidden argument*/NULL);
		NullCheck(L_135);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_135, L_139, NULL);
		// }
		return;
	}
}
// System.Void CustomImageTargetBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomImageTargetBehaviour__ctor_mAA40D9C45BD43CDDBD638E5374264B2B7841B8FD (CustomImageTargetBehaviour_t0DC223E7682E126008C39A4187B0490F36BAA0CB* __this, const RuntimeMethod* method) 
{
	{
		// public float rotMin = 3f;
		__this->___rotMin_31 = (3.0f);
		// public float rotMax = 6f;
		__this->___rotMax_32 = (6.0f);
		// public float trasMin = 0.06f;
		__this->___trasMin_33 = (0.0599999987f);
		// public float trasMax = 0.13f;
		__this->___trasMax_34 = (0.129999995f);
		// public float lerpT = 0.2f;
		__this->___lerpT_35 = (0.200000003f);
		ImageTargetController__ctor_m004DC8AA0E97C9147CFCF146D8DD207538FB052E(__this, NULL);
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
// System.Void LoadController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadController_Awake_m142D2A57ACE45128F9A2D5E710172560113FD5F3 (LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Instance == null)
		LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8* L_0 = ((LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8_StaticFields*)il2cpp_codegen_static_fields_for(LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8_il2cpp_TypeInfo_var))->___Instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// Instance = this;
		((LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8_StaticFields*)il2cpp_codegen_static_fields_for(LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8_StaticFields*)il2cpp_codegen_static_fields_for(LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_3, NULL);
		goto IL_0034;
	}

IL_0026:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_4, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void LoadController::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadController_LoadScene_m85545388FBC03C8D3DCC8D08DAF088B84E863005 (LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B_mC8FDDCD122AD7E4BC1B10C3EA84F4A566F06FB1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B* V_0 = NULL;
	{
		U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B* L_0 = (U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B*)il2cpp_codegen_object_new(U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadSceneU3Ed__3__ctor_mFDEFDF882EB3C8856B1DF7E2C502211438D9759E(L_0, NULL);
		V_0 = L_0;
		U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B* L_1 = V_0;
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_2;
		L_2 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_3), (void*)__this);
		U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B* L_4 = V_0;
		String_t* L_5 = ___sceneName0;
		NullCheck(L_4);
		L_4->___sceneName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___sceneName_2), (void*)L_5);
		U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B* L_6 = V_0;
		NullCheck(L_6);
		L_6->___U3CU3E1__state_0 = (-1);
		U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B* L_7 = V_0;
		NullCheck(L_7);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_8 = (&L_7->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B_mC8FDDCD122AD7E4BC1B10C3EA84F4A566F06FB1A(L_8, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B_mC8FDDCD122AD7E4BC1B10C3EA84F4A566F06FB1A_RuntimeMethod_var);
		return;
	}
}
// System.Void LoadController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadController__ctor_m39C447DDDF343CDBD4B0DC76F818205C0E837B73 (LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8* __this, const RuntimeMethod* method) 
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
// System.Void LoadController/<LoadScene>d__3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__3__ctor_mFDEFDF882EB3C8856B1DF7E2C502211438D9759E (U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void LoadController/<LoadScene>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__3_MoveNext_m62BD0B6FAD3511D9A2FFB70338BAB355A6C1C2B4 (U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B_m71BF488E3BFD86A08A67B05135CCBAF62C7C0C27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B* V_2 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
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
			int32_t L_2 = V_0;
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
			goto IL_008a_1;
		}

IL_0014_1:
		{
			goto IL_00f8_1;
		}

IL_0019_1:
		{
			// AsyncOperation scene = SceneManager.LoadSceneAsync(sceneName);
			String_t* L_3 = __this->___sceneName_2;
			il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
			AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_4;
			L_4 = SceneManager_LoadSceneAsync_m5855749CCB7CA99553A65AAA791623484FE7F184(L_3, NULL);
			__this->___U3CsceneU3E5__1_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsceneU3E5__1_4), (void*)L_4);
			// scene.allowSceneActivation = false;
			AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_5 = __this->___U3CsceneU3E5__1_4;
			NullCheck(L_5);
			AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_5, (bool)0, NULL);
			// loaderCanvas.SetActive(true);
			LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8* L_6 = __this->___U3CU3E4__this_3;
			NullCheck(L_6);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___loaderCanvas_5;
			NullCheck(L_7);
			GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
			// await Task.Delay(1000);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
			L_8 = Task_Delay_m49549664B58973EEEF1B479B21FB30D0DF3C7EFA(((int32_t)1000), NULL);
			NullCheck(L_8);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9;
			L_9 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_8, NULL);
			V_1 = L_9;
			bool L_10;
			L_10 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_10)
			{
				goto IL_00a6_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_12 = V_1;
			__this->___U3CU3Eu__1_5 = L_12;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_13 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B_m71BF488E3BFD86A08A67B05135CCBAF62C7C0C27(L_13, (&V_1), (&V_2), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B_m71BF488E3BFD86A08A67B05135CCBAF62C7C0C27_RuntimeMethod_var);
			goto IL_016c;
		}

IL_008a_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_14 = __this->___U3CU3Eu__1_5;
			V_1 = L_14;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_15 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_00a6_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			// scene.allowSceneActivation = true;
			AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_17 = __this->___U3CsceneU3E5__1_4;
			NullCheck(L_17);
			AsyncOperation_set_allowSceneActivation_mBD94FAB342455508CD7962D3CED490C64AF74522(L_17, (bool)1, NULL);
			// await Task.Delay(1000);
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_18;
			L_18 = Task_Delay_m49549664B58973EEEF1B479B21FB30D0DF3C7EFA(((int32_t)1000), NULL);
			NullCheck(L_18);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_19;
			L_19 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_18, NULL);
			V_3 = L_19;
			bool L_20;
			L_20 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
			if (L_20)
			{
				goto IL_0114_1;
			}
		}
		{
			int32_t L_21 = 1;
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_22 = V_3;
			__this->___U3CU3Eu__1_5 = L_22;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_23 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B_m71BF488E3BFD86A08A67B05135CCBAF62C7C0C27(L_23, (&V_3), (&V_2), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B_m71BF488E3BFD86A08A67B05135CCBAF62C7C0C27_RuntimeMethod_var);
			goto IL_016c;
		}

IL_00f8_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_24 = __this->___U3CU3Eu__1_5;
			V_3 = L_24;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_25 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_25, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_26 = (-1);
			V_0 = L_26;
			__this->___U3CU3E1__state_0 = L_26;
		}

IL_0114_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
			// loaderCanvas.SetActive(false);
			LoadController_t2E524F215C06C50B846B04C93ECC87C07CCA42A8* L_27 = __this->___U3CU3E4__this_3;
			NullCheck(L_27);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27->___loaderCanvas_5;
			NullCheck(L_28);
			GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
			goto IL_0151;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0130;
		}
		throw e;
	}

CATCH_0130:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CsceneU3E5__1_4 = (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsceneU3E5__1_4), (void*)(AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_29 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_30 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_29, L_30, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_016c;
	}// end catch (depth: 1)

IL_0151:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CsceneU3E5__1_4 = (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsceneU3E5__1_4), (void*)(AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_31 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_31, NULL);
	}

IL_016c:
	{
		return;
	}
}
// System.Void LoadController/<LoadScene>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadSceneU3Ed__3_SetStateMachine_m58B2C3E5749E9BEFA263B89CA2F1CA33000D4F71 (U3CLoadSceneU3Ed__3_t35C39CB185B6C4263A3AFD8F8592BB32FD084A8B* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
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
// System.Void NewBehaviourScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Start_mDEAA416D3A6676A79851DDF6B62D676E53372A87 (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Update_m68CAC9D7524B9FA1DFCA3F99BA694CD73147209B (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript__ctor_mD2E080DE77BCDB61B6D2EC8AD996FAE611B97F3C (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
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
// System.Void InterdimensionalTransport::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterdimensionalTransport_Start_m1D02B39EC66DC605275619E4F164142D7681F338 (InterdimensionalTransport_tF8C8EF95D25840C2BE004A938B414E409C9FB711* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CBD085C45E72990046B8DD3B9797548D3165F9B);
		s_Il2CppMethodInitialized = true;
	}
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_0 = NULL;
	int32_t V_1 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_2 = NULL;
	{
		// foreach (var mat in materials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_0 = __this->___materials_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0024;
	}

IL_000d:
	{
		// foreach (var mat in materials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// mat.SetInt("_StencilTest", (int)CompareFunction.Equal);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = V_2;
		NullCheck(L_5);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_5, _stringLiteral8CBD085C45E72990046B8DD3B9797548D3165F9B, 3, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0024:
	{
		// foreach (var mat in materials)
		int32_t L_7 = V_1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void InterdimensionalTransport::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterdimensionalTransport_OnTriggerStay_mB711643362210415ABA63EC4DBD80B059493B6F6 (InterdimensionalTransport_tF8C8EF95D25840C2BE004A938B414E409C9FB711* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0418061580A8E7CD200988C6CC7225030A399F03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B91A41AE533E280A90A1ED8B6F7B328D58A2A25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CBD085C45E72990046B8DD3B9797548D3165F9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_2 = NULL;
	int32_t V_3 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_4 = NULL;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_5 = NULL;
	int32_t V_6 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_7 = NULL;
	{
		// if (other.name != "Main Camera")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		bool L_2;
		L_2 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_1, _stringLiteralDA7E8B88100AA34B19982A11B0554BAF879AFF81, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		goto IL_00bb;
	}

IL_001b:
	{
		// if (transform.position.x > other.transform.position.x)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = ___other0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___x_2;
		V_1 = (bool)((((float)L_6) > ((float)L_10))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_007b;
		}
	}
	{
		// Debug.Log("Outside of other world");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral8B91A41AE533E280A90A1ED8B6F7B328D58A2A25, NULL);
		// foreach (var mat in materials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_12 = __this->___materials_4;
		V_2 = L_12;
		V_3 = 0;
		goto IL_0072;
	}

IL_0059:
	{
		// foreach (var mat in materials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		// mat.SetInt("_StencilTest", (int)CompareFunction.Equal);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = V_4;
		NullCheck(L_17);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_17, _stringLiteral8CBD085C45E72990046B8DD3B9797548D3165F9B, 3, NULL);
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0072:
	{
		// foreach (var mat in materials)
		int32_t L_19 = V_3;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0059;
		}
	}
	{
		goto IL_00bb;
	}

IL_007b:
	{
		// Debug.Log("Inside Other World");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0418061580A8E7CD200988C6CC7225030A399F03, NULL);
		// foreach (var mat in materials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_21 = __this->___materials_4;
		V_5 = L_21;
		V_6 = 0;
		goto IL_00b2;
	}

IL_0095:
	{
		// foreach (var mat in materials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_22 = V_5;
		int32_t L_23 = V_6;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_7 = L_25;
		// mat.SetInt("_StencilTest", (int)CompareFunction.NotEqual);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = V_7;
		NullCheck(L_26);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_26, _stringLiteral8CBD085C45E72990046B8DD3B9797548D3165F9B, 6, NULL);
		int32_t L_27 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00b2:
	{
		// foreach (var mat in materials)
		int32_t L_28 = V_6;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_29 = V_5;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0095;
		}
	}
	{
	}

IL_00bb:
	{
		// }
		return;
	}
}
// System.Void InterdimensionalTransport::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterdimensionalTransport_OnDestroy_mC154D23272A0DE0B738D2E117FA4F0A25C262648 (InterdimensionalTransport_tF8C8EF95D25840C2BE004A938B414E409C9FB711* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CBD085C45E72990046B8DD3B9797548D3165F9B);
		s_Il2CppMethodInitialized = true;
	}
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_0 = NULL;
	int32_t V_1 = 0;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_2 = NULL;
	{
		// foreach (var mat in materials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_0 = __this->___materials_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0024;
	}

IL_000d:
	{
		// foreach (var mat in materials)
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// mat.SetInt("_StencilTest", (int)CompareFunction.NotEqual);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = V_2;
		NullCheck(L_5);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_5, _stringLiteral8CBD085C45E72990046B8DD3B9797548D3165F9B, 6, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0024:
	{
		// foreach (var mat in materials)
		int32_t L_7 = V_1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void InterdimensionalTransport::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterdimensionalTransport_Update_m0E534D921A945093CA06E596184E30C8BD8E5D21 (InterdimensionalTransport_tF8C8EF95D25840C2BE004A938B414E409C9FB711* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InterdimensionalTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterdimensionalTransport__ctor_m3330B55711A805CBB804966D79A73E14B01E0827 (InterdimensionalTransport_tF8C8EF95D25840C2BE004A938B414E409C9FB711* __this, const RuntimeMethod* method) 
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
// System.Void RotateObjectController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObjectController_Update_m9C65D33052DC1DA9908387DE7641EB6CCFE759A4 (RotateObjectController_tD145EB9A5D2B3E6DE2D7AD5DCAF7D9C833E3EA6B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	float V_7 = 0.0f;
	float G_B9_0 = 0.0f;
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00d2;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_1 = L_2;
		// switch (touch.phase)
		int32_t L_3;
		L_3 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		V_3 = L_3;
		int32_t L_4 = V_3;
		V_2 = L_4;
		int32_t L_5 = V_2;
		switch (L_5)
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_00d1;
			}
			case 3:
			{
				goto IL_00c8;
			}
		}
	}
	{
		goto IL_00d1;
	}

IL_003d:
	{
		// touchStartPos = touch.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		__this->___touchStartPos_5 = L_6;
		// isSwiping = true;
		__this->___isSwiping_6 = (bool)1;
		// break;
		goto IL_00d1;
	}

IL_0053:
	{
		// if (isSwiping)
		bool L_7 = __this->___isSwiping_6;
		V_4 = L_7;
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_00c6;
		}
	}
	{
		// Vector2 swipeDelta = touch.position - touchStartPos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___touchStartPos_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_9, L_10, NULL);
		V_5 = L_11;
		// if (Mathf.Abs(swipeDelta.x) > Mathf.Abs(swipeDelta.y))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_5;
		float L_13 = L_12.___x_0;
		float L_14;
		L_14 = fabsf(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_5;
		float L_16 = L_15.___y_1;
		float L_17;
		L_17 = fabsf(L_16);
		V_6 = (bool)((((float)L_14) > ((float)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00c5;
		}
	}
	{
		// float rotationAmount = swipeDelta.x > 0 ? -rotationSpeed : rotationSpeed;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_5;
		float L_20 = L_19.___x_0;
		if ((((float)L_20) > ((float)(0.0f))))
		{
			goto IL_00ab;
		}
	}
	{
		float L_21 = __this->___rotationSpeed_4;
		G_B9_0 = L_21;
		goto IL_00b2;
	}

IL_00ab:
	{
		float L_22 = __this->___rotationSpeed_4;
		G_B9_0 = ((-L_22));
	}

IL_00b2:
	{
		V_7 = G_B9_0;
		// RotateObject(rotationAmount);
		float L_23 = V_7;
		RotateObjectController_RotateObject_m26E1A4762F4B0E957E7694E1C4FDB788B7082977(__this, L_23, NULL);
		// isSwiping = false;
		__this->___isSwiping_6 = (bool)0;
	}

IL_00c5:
	{
	}

IL_00c6:
	{
		// break;
		goto IL_00d1;
	}

IL_00c8:
	{
		// isSwiping = false;
		__this->___isSwiping_6 = (bool)0;
		// break;
		goto IL_00d1;
	}

IL_00d1:
	{
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void RotateObjectController::RotateObject(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObjectController_RotateObject_m26E1A4762F4B0E957E7694E1C4FDB788B7082977 (RotateObjectController_tD145EB9A5D2B3E6DE2D7AD5DCAF7D9C833E3EA6B* __this, float ___rotationAmount0, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(Vector3.up, rotationAmount * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_2 = ___rotationAmount0;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_0);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_0, L_1, ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		// }
		return;
	}
}
// System.Void RotateObjectController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateObjectController__ctor_m80D1915507CDD04688AA9ADDDC8BC2E7A7CAE0B2 (RotateObjectController_tD145EB9A5D2B3E6DE2D7AD5DCAF7D9C833E3EA6B* __this, const RuntimeMethod* method) 
{
	{
		// public float rotationSpeed = 5f;
		__this->___rotationSpeed_4 = (5.0f);
		// private bool isSwiping = false;
		__this->___isSwiping_6 = (bool)0;
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
// System.Void Rotator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_Start_mE4B0451C7D2FC5AF3258D1E24B0A0CF1C58379C2 (Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Rotator::OnMouseDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_OnMouseDrag_m920530CD685405687E1449A6C4BDAE642199E39B (Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223* __this, const RuntimeMethod* method) 
{
	{
		// dragging = true;
		__this->___dragging_5 = (bool)1;
		// }
		return;
	}
}
// System.Void Rotator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_Update_mEDB0F4729DEB6075BDB3177DB5A90104D8020D68 (Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (Input.GetMouseButtonUp(0))
		bool L_0;
		L_0 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(0, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// dragging = false;
		__this->___dragging_5 = (bool)0;
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Rotator::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_FixedUpdate_mA0DC7DAAA26DB6C3F1A7A91E7FD12A4560C8E687 (Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if (dragging)
		bool L_0 = __this->___dragging_5;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_006b;
		}
	}
	{
		// float x = Input.GetAxis("Mouse X") * rotationSpeed * Time.fixedDeltaTime;
		float L_2;
		L_2 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_3 = __this->___rotationSpeed_4;
		float L_4;
		L_4 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_2, L_3)), L_4));
		// float y = Input.GetAxis("Mouse Y") * rotationSpeed * Time.fixedDeltaTime;
		float L_5;
		L_5 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_6 = __this->___rotationSpeed_4;
		float L_7;
		L_7 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, L_6)), L_7));
		// rb.AddTorque(Vector3.down * x);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___rb_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		float L_10 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_9, L_10, NULL);
		NullCheck(L_8);
		Rigidbody_AddTorque_m39C767D6CD12B2D12D575E2B469CB5565BFA30B6(L_8, L_11, NULL);
		// rb.AddTorque(Vector3.right * y);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = __this->___rb_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		float L_14 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_13, L_14, NULL);
		NullCheck(L_12);
		Rigidbody_AddTorque_m39C767D6CD12B2D12D575E2B469CB5565BFA30B6(L_12, L_15, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void Rotator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator__ctor_m6DD9F22CD049D079A6246125410EFE63DE76FAF2 (Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] float rotationSpeed = 100f;
		__this->___rotationSpeed_4 = (100.0f);
		// bool dragging = false;
		__this->___dragging_5 = (bool)0;
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
// System.Void TouchController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_Update_m8492E30F38475D13AB7D335282E88150B936EBD6 (TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m8AAAFC55B2438542D29F1EDCDEEE6AE631082269_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF199FD9CBA6731B2C2BA73B3D0813832DD116C43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A576B17B04B3009C54F9041CEB05C4778886623);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24B0C0CC6B70D85CD7D854B7B9096BC8632A1262);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48B0163ED10325CF61AA82D17F376992FE7E8291);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F3C91F5F9BCE64B1AA29872E70E2494990715B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9206B2A501EFC5E394174E874D13FE8A6B41FB10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E9E4240C4BC5D2DB9A41BB1BC5143AF092D1B4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB71E2E364E2F2ED1BC4C611179CB01AC9A742776);
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
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	bool V_16 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_17;
	memset((&V_17), 0, sizeof(V_17));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_31;
	memset((&V_31), 0, sizeof(V_31));
	int32_t G_B17_0 = 0;
	int32_t G_B27_0 = 0;
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
		goto IL_0410;
	}

IL_0019:
	{
		// foreach (var touch in Input.touches)
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_3;
		L_3 = Input_get_touches_m884B92DD9A389F7985AB275A9717AC629C258B6B(NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_00aa;
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
			goto IL_006f;
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
		// text.text = "touch began";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___text_4;
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteralB71E2E364E2F2ED1BC4C611179CB01AC9A742776);
		goto IL_00a5;
	}

IL_006f:
	{
		// else if (touch.phase == TouchPhase.Ended)
		int32_t L_14;
		L_14 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_3), NULL);
		V_5 = (bool)((((int32_t)L_14) == ((int32_t)3))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_00a5;
		}
	}
	{
		// originalPosition.Remove(touch.fingerId);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_16 = __this->___originalPosition_13;
		int32_t L_17;
		L_17 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_3), NULL);
		NullCheck(L_16);
		bool L_18;
		L_18 = Dictionary_2_Remove_m8AAAFC55B2438542D29F1EDCDEEE6AE631082269(L_16, L_17, Dictionary_2_Remove_m8AAAFC55B2438542D29F1EDCDEEE6AE631082269_RuntimeMethod_var);
		// text.text = "touch remove";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = __this->___text_4;
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, _stringLiteral8F3C91F5F9BCE64B1AA29872E70E2494990715B8);
	}

IL_00a5:
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_00aa:
	{
		// foreach (var touch in Input.touches)
		int32_t L_21 = V_2;
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_22 = V_1;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0027;
		}
	}
	{
		// if (curGesture == GestureControl.OutOfControl)
		int32_t L_23 = __this->___curGesture_14;
		V_6 = (bool)((((int32_t)L_23) == ((int32_t)6))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00f8;
		}
	}
	{
		// if (Input.touchCount == 0)
		int32_t L_25;
		L_25 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_7 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_00f2;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// curGesture = GestureControl.NoTouch;
		__this->___curGesture_14 = 0;
		// text.text = "touch not detected";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_27 = __this->___text_4;
		NullCheck(L_27);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, _stringLiteral0A576B17B04B3009C54F9041CEB05C4778886623);
	}

IL_00f2:
	{
		goto IL_03cd;
	}

IL_00f8:
	{
		// else if (curGesture == GestureControl.TwoMove || curGesture == GestureControl.TwoRotate || curGesture == GestureControl.TwoScale)
		int32_t L_28 = __this->___curGesture_14;
		if ((((int32_t)L_28) == ((int32_t)3)))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_29 = __this->___curGesture_14;
		if ((((int32_t)L_29) == ((int32_t)4)))
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_30 = __this->___curGesture_14;
		G_B17_0 = ((((int32_t)L_30) == ((int32_t)5))? 1 : 0);
		goto IL_0116;
	}

IL_0115:
	{
		G_B17_0 = 1;
	}

IL_0116:
	{
		V_8 = (bool)G_B17_0;
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_0155;
		}
	}
	{
		// if (Input.touchCount != 2)
		int32_t L_32;
		L_32 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_9;
		if (!L_33)
		{
			goto IL_014f;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// curGesture = GestureControl.OutOfControl;
		__this->___curGesture_14 = 6;
		// text.text = "touch out of control";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_34 = __this->___text_4;
		NullCheck(L_34);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_34, _stringLiteral9E9E4240C4BC5D2DB9A41BB1BC5143AF092D1B4C);
	}

IL_014f:
	{
		goto IL_03cd;
	}

IL_0155:
	{
		// else if (curGesture == GestureControl.TwoWait)
		int32_t L_35 = __this->___curGesture_14;
		V_10 = (bool)((((int32_t)L_35) == ((int32_t)2))? 1 : 0);
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_030f;
		}
	}
	{
		// if (Input.touchCount != 2)
		int32_t L_37;
		L_37 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_11 = (bool)((((int32_t)((((int32_t)L_37) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_38 = V_11;
		if (!L_38)
		{
			goto IL_018e;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// curGesture = GestureControl.OutOfControl;
		__this->___curGesture_14 = 6;
		goto IL_0309;
	}

IL_018e:
	{
		// Vector2 touch1Delta = Input.GetTouch(0).position - originalPosition[Input.GetTouch(0).fingerId];
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_39;
		L_39 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_14 = L_39;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_14), NULL);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_41 = __this->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_42;
		L_42 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_14 = L_42;
		int32_t L_43;
		L_43 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_14), NULL);
		NullCheck(L_41);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1(L_41, L_43, Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		L_45 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_40, L_44, NULL);
		V_12 = L_45;
		// Vector2 touch2Delta = Input.GetTouch(1).position - originalPosition[Input.GetTouch(1).fingerId];
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_46;
		L_46 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_14 = L_46;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_14), NULL);
		Dictionary_2_t150F4DEDF234511FA356EE5425B26AEB9A3A3520* L_48 = __this->___originalPosition_13;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_49;
		L_49 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(1, NULL);
		V_14 = L_49;
		int32_t L_50;
		L_50 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_14), NULL);
		NullCheck(L_48);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		L_51 = Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1(L_48, L_50, Dictionary_2_get_Item_m82A7E8554E4AF17AFEB6097E122ECA383C4900E1_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_47, L_51, NULL);
		V_13 = L_52;
		// if (touch1Delta.magnitude > gestureEnableDistanceThreshold && touch2Delta.magnitude > gestureEnableDistanceThreshold)
		float L_53;
		L_53 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_12), NULL);
		if ((!(((float)L_53) > ((float)(10.0f)))))
		{
			goto IL_020d;
		}
	}
	{
		float L_54;
		L_54 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_13), NULL);
		G_B27_0 = ((((float)L_54) > ((float)(10.0f)))? 1 : 0);
		goto IL_020e;
	}

IL_020d:
	{
		G_B27_0 = 0;
	}

IL_020e:
	{
		V_15 = (bool)G_B27_0;
		bool L_55 = V_15;
		if (!L_55)
		{
			goto IL_0308;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// if (Vector2.Dot(touch1Delta, touch2Delta) > 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = V_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = V_13;
		float L_58;
		L_58 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_56, L_57, NULL);
		V_16 = (bool)((((float)L_58) > ((float)(0.0f)))? 1 : 0);
		bool L_59 = V_16;
		if (!L_59)
		{
			goto IL_02d2;
		}
	}
	{
		// GetRelativeTouch(touch1Delta + touch2Delta, out xMov, out yMov);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = V_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = V_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62;
		L_62 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_60, L_61, NULL);
		TouchController_GetRelativeTouch_m1349350A37508CCFB039AB381EAC19B70A55B252(__this, L_62, (&V_17), (&V_18), NULL);
		// if (xMov.sqrMagnitude > yMov.sqrMagnitude)
		float L_63;
		L_63 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_17), NULL);
		float L_64;
		L_64 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_18), NULL);
		V_19 = (bool)((((float)L_63) > ((float)L_64))? 1 : 0);
		bool L_65 = V_19;
		if (!L_65)
		{
			goto IL_029a;
		}
	}
	{
		// curGesture = GestureControl.TwoRotate;
		__this->___curGesture_14 = 4;
		// if (isTwoFingerRotatable)
		bool L_66 = __this->___isTwoFingerRotatable_12;
		V_20 = L_66;
		bool L_67 = V_20;
		if (!L_67)
		{
			goto IL_0286;
		}
	}
	{
		// StartCoroutine(OnTwoRotate());
		RuntimeObject* L_68;
		L_68 = TouchController_OnTwoRotate_m3592816D51244E7E9BC34461289D8FED5BDC53A9(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_69;
		L_69 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_68, NULL);
	}

IL_0286:
	{
		// text.text = "touch two rotate";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_70 = __this->___text_4;
		NullCheck(L_70);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_70, _stringLiteral9206B2A501EFC5E394174E874D13FE8A6B41FB10);
		goto IL_02cf;
	}

IL_029a:
	{
		// curGesture = GestureControl.TwoMove;
		__this->___curGesture_14 = 3;
		// if (isTwoFingerDraggable)
		bool L_71 = __this->___isTwoFingerDraggable_10;
		V_21 = L_71;
		bool L_72 = V_21;
		if (!L_72)
		{
			goto IL_02bd;
		}
	}
	{
		// StartCoroutine(OnTwoMove());
		RuntimeObject* L_73;
		L_73 = TouchController_OnTwoMove_m310DE35EBD59FB314A2964C820FF17E23CFF2C55(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_74;
		L_74 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_73, NULL);
	}

IL_02bd:
	{
		// text.text = "touch two move";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_75 = __this->___text_4;
		NullCheck(L_75);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_75, _stringLiteral24B0C0CC6B70D85CD7D854B7B9096BC8632A1262);
	}

IL_02cf:
	{
		goto IL_0307;
	}

IL_02d2:
	{
		// curGesture = GestureControl.TwoScale;
		__this->___curGesture_14 = 5;
		// if (isTwoFingerScalable)
		bool L_76 = __this->___isTwoFingerScalable_11;
		V_22 = L_76;
		bool L_77 = V_22;
		if (!L_77)
		{
			goto IL_0306;
		}
	}
	{
		// StartCoroutine(OnTwoScale());
		RuntimeObject* L_78;
		L_78 = TouchController_OnTwoScale_m3CAC18051CF9EC4B6AB2CFE712D99FF5D553D863(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_79;
		L_79 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_78, NULL);
		// text.text = "touch two scale";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_80 = __this->___text_4;
		NullCheck(L_80);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_80, _stringLiteral48B0163ED10325CF61AA82D17F376992FE7E8291);
	}

IL_0306:
	{
	}

IL_0307:
	{
	}

IL_0308:
	{
	}

IL_0309:
	{
		goto IL_03cd;
	}

IL_030f:
	{
		// else if (curGesture == GestureControl.OneMove)
		int32_t L_81 = __this->___curGesture_14;
		V_23 = (bool)((((int32_t)L_81) == ((int32_t)1))? 1 : 0);
		bool L_82 = V_23;
		if (!L_82)
		{
			goto IL_0363;
		}
	}
	{
		// if (Input.touchCount == 2)
		int32_t L_83;
		L_83 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_24 = (bool)((((int32_t)L_83) == ((int32_t)2))? 1 : 0);
		bool L_84 = V_24;
		if (!L_84)
		{
			goto IL_033f;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// curGesture = GestureControl.TwoWait;
		__this->___curGesture_14 = 2;
		goto IL_0360;
	}

IL_033f:
	{
		// else if (Input.touchCount != 1)
		int32_t L_85;
		L_85 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_25 = (bool)((((int32_t)((((int32_t)L_85) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_86 = V_25;
		if (!L_86)
		{
			goto IL_0360;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// curGesture = GestureControl.OutOfControl;
		__this->___curGesture_14 = 6;
	}

IL_0360:
	{
		goto IL_03cd;
	}

IL_0363:
	{
		// else if (curGesture == GestureControl.NoTouch)
		int32_t L_87 = __this->___curGesture_14;
		V_26 = (bool)((((int32_t)L_87) == ((int32_t)0))? 1 : 0);
		bool L_88 = V_26;
		if (!L_88)
		{
			goto IL_03cd;
		}
	}
	{
		// if (Input.touchCount == 1)
		int32_t L_89;
		L_89 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_27 = (bool)((((int32_t)L_89) == ((int32_t)1))? 1 : 0);
		bool L_90 = V_27;
		if (!L_90)
		{
			goto IL_03ae;
		}
	}
	{
		// curGesture = GestureControl.OneMove;
		__this->___curGesture_14 = 1;
		// if (isOneFingerDraggable)
		bool L_91 = __this->___isOneFingerDraggable_9;
		V_28 = L_91;
		bool L_92 = V_28;
		if (!L_92)
		{
			goto IL_03ab;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(OnOneMove());
		RuntimeObject* L_93;
		L_93 = TouchController_OnOneMove_m873B943FC4F488500D985AC944B7AB358D893E17(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_94;
		L_94 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_93, NULL);
	}

IL_03ab:
	{
		goto IL_03cc;
	}

IL_03ae:
	{
		// else if (Input.touchCount == 2)
		int32_t L_95;
		L_95 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		V_29 = (bool)((((int32_t)L_95) == ((int32_t)2))? 1 : 0);
		bool L_96 = V_29;
		if (!L_96)
		{
			goto IL_03cc;
		}
	}
	{
		// curGesture = GestureControl.TwoWait;
		__this->___curGesture_14 = 2;
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
	}

IL_03cc:
	{
	}

IL_03cd:
	{
		// if (controlTarget != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97 = __this->___controlTarget_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_98;
		L_98 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_97, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_30 = L_98;
		bool L_99 = V_30;
		if (!L_99)
		{
			goto IL_0410;
		}
	}
	{
		// targetCamDistance = (cameraTarget.transform.position - controlTarget.position).magnitude;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_100 = __this->___cameraTarget_8;
		NullCheck(L_100);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_100, NULL);
		NullCheck(L_101);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_101, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103 = __this->___controlTarget_7;
		NullCheck(L_103);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_103, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_102, L_104, NULL);
		V_31 = L_105;
		float L_106;
		L_106 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_31), NULL);
		__this->___targetCamDistance_15 = L_106;
	}

IL_0410:
	{
		// }
		return;
	}
}
// System.Void TouchController::TurnOn(UnityEngine.Transform,UnityEngine.Camera,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_TurnOn_m7A0F66B4EBFDF6B3C6FDCAC420061D2F39B5D51E (TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam1, bool ___isOneFingerDraggable2, bool ___isTwoFingerDraggable3, bool ___isTwoFingerScalable4, bool ___isTwoFingerRotatable5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64BD60FBA2B8A2265970799B6CADD42B5AD91205);
		s_Il2CppMethodInitialized = true;
	}
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
		// text.text = "touch not detcted";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___text_4;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteral64BD60FBA2B8A2265970799B6CADD42B5AD91205);
		// }
		return;
	}
}
// System.Void TouchController::TurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_TurnOff_m97058F338F77EB6D05C292C88F9D1E64B6198B4D (TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64BD60FBA2B8A2265970799B6CADD42B5AD91205);
		s_Il2CppMethodInitialized = true;
	}
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
		// text.text = "touch not detcted";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral64BD60FBA2B8A2265970799B6CADD42B5AD91205);
		// }
		return;
	}
}
// System.Collections.IEnumerator TouchController::OnOneMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchController_OnOneMove_m873B943FC4F488500D985AC944B7AB358D893E17 (TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnOneMoveU3Ed__16_tB5C9C49B8E10998069D2F7B6898288DCD30973EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnOneMoveU3Ed__16_tB5C9C49B8E10998069D2F7B6898288DCD30973EB* L_0 = (U3COnOneMoveU3Ed__16_tB5C9C49B8E10998069D2F7B6898288DCD30973EB*)il2cpp_codegen_object_new(U3COnOneMoveU3Ed__16_tB5C9C49B8E10998069D2F7B6898288DCD30973EB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnOneMoveU3Ed__16__ctor_m424DB860FE541693611D4D078857F508EC52007F(L_0, 0, NULL);
		U3COnOneMoveU3Ed__16_tB5C9C49B8E10998069D2F7B6898288DCD30973EB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator TouchController::OnTwoMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchController_OnTwoMove_m310DE35EBD59FB314A2964C820FF17E23CFF2C55 (TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C* L_0 = (U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C*)il2cpp_codegen_object_new(U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnTwoMoveU3Ed__17__ctor_mCE99A978A864D1345E2945D30D7A66AA97DA4136(L_0, 0, NULL);
		U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator TouchController::OnTwoRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchController_OnTwoRotate_m3592816D51244E7E9BC34461289D8FED5BDC53A9 (TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnTwoRotateU3Ed__18_tB03772A0ED37972BAE97B264ECB30F2ED70E3F76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnTwoRotateU3Ed__18_tB03772A0ED37972BAE97B264ECB30F2ED70E3F76* L_0 = (U3COnTwoRotateU3Ed__18_tB03772A0ED37972BAE97B264ECB30F2ED70E3F76*)il2cpp_codegen_object_new(U3COnTwoRotateU3Ed__18_tB03772A0ED37972BAE97B264ECB30F2ED70E3F76_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnTwoRotateU3Ed__18__ctor_m2F836CA89B8EBB2AC60A2374D4EF2E34F69FF78A(L_0, 0, NULL);
		U3COnTwoRotateU3Ed__18_tB03772A0ED37972BAE97B264ECB30F2ED70E3F76* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator TouchController::OnTwoScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchController_OnTwoScale_m3CAC18051CF9EC4B6AB2CFE712D99FF5D553D863 (TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnTwoScaleU3Ed__19_t69CBD1C0028FDAE877F43960A8ABEB109806C411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COnTwoScaleU3Ed__19_t69CBD1C0028FDAE877F43960A8ABEB109806C411* L_0 = (U3COnTwoScaleU3Ed__19_t69CBD1C0028FDAE877F43960A8ABEB109806C411*)il2cpp_codegen_object_new(U3COnTwoScaleU3Ed__19_t69CBD1C0028FDAE877F43960A8ABEB109806C411_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnTwoScaleU3Ed__19__ctor_m4F1E6DB942189928E00F9FE26C572AAED1E9E01E(L_0, 0, NULL);
		U3COnTwoScaleU3Ed__19_t69CBD1C0028FDAE877F43960A8ABEB109806C411* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TouchController::GetRelativeTouch(UnityEngine.Vector2,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController_GetRelativeTouch_m1349350A37508CCFB039AB381EAC19B70A55B252 (TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___xMovement1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___yMovement2, const RuntimeMethod* method) 
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
// System.Void TouchController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchController__ctor_m80AA79A757F5594B7FC0C24167AF815F5B2E7C73 (TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* __this, const RuntimeMethod* method) 
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
// System.Void TouchController/<OnOneMove>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnOneMoveU3Ed__16__ctor_m424DB860FE541693611D4D078857F508EC52007F (U3COnOneMoveU3Ed__16_tB5C9C49B8E10998069D2F7B6898288DCD30973EB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TouchController/<OnOneMove>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnOneMoveU3Ed__16_System_IDisposable_Dispose_m36779913C2275431AF8989A9B9BD4CD8BCBEE982 (U3COnOneMoveU3Ed__16_tB5C9C49B8E10998069D2F7B6898288DCD30973EB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TouchController/<OnOneMove>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnOneMoveU3Ed__16_MoveNext_m68BC650FCE57873DE668BA79A0D4E37C146700AE (U3COnOneMoveU3Ed__16_tB5C9C49B8E10998069D2F7B6898288DCD30973EB* __this, const RuntimeMethod* method) 
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_8 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_18 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_31 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_37 = __this->___U3CU3E4__this_2;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = L_37->___controlTarget_7;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = __this->___U3CaddV3U3E5__5_7;
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_41 = __this->___U3CU3E4__this_2;
		NullCheck(L_41);
		float L_42 = L_41->___targetCamDistance_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_40, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_39, L_43, NULL);
		__this->___U3CnewPosU3E5__6_8 = L_44;
		// controlTarget.position = newPos;
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_45 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_54 = __this->___U3CU3E4__this_2;
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
// System.Object TouchController/<OnOneMove>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnOneMoveU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6A8AB9AFE1CB7509BD607A5CFAFFAFC367E0E3AE (U3COnOneMoveU3Ed__16_tB5C9C49B8E10998069D2F7B6898288DCD30973EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TouchController/<OnOneMove>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnOneMoveU3Ed__16_System_Collections_IEnumerator_Reset_mA9D1783976B806E63562E528C958D5E38E6C36AA (U3COnOneMoveU3Ed__16_tB5C9C49B8E10998069D2F7B6898288DCD30973EB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnOneMoveU3Ed__16_System_Collections_IEnumerator_Reset_mA9D1783976B806E63562E528C958D5E38E6C36AA_RuntimeMethod_var)));
	}
}
// System.Object TouchController/<OnOneMove>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnOneMoveU3Ed__16_System_Collections_IEnumerator_get_Current_m1EFC5AA3970273A1030957BAC09DAC2A9C07AA86 (U3COnOneMoveU3Ed__16_tB5C9C49B8E10998069D2F7B6898288DCD30973EB* __this, const RuntimeMethod* method) 
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
// System.Void TouchController/<OnTwoMove>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoMoveU3Ed__17__ctor_mCE99A978A864D1345E2945D30D7A66AA97DA4136 (U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TouchController/<OnTwoMove>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoMoveU3Ed__17_System_IDisposable_Dispose_m1F1619680FE4A742D57500D2264AAB45EF2ED00C (U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TouchController/<OnTwoMove>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnTwoMoveU3Ed__17_MoveNext_mF39BD52445AE5A032ACE8102EA74A4260A7B37EE (U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C* __this, const RuntimeMethod* method) 
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
	U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C* G_B16_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C* G_B15_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B17_0;
	memset((&G_B17_0), 0, sizeof(G_B17_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B17_1;
	memset((&G_B17_1), 0, sizeof(G_B17_1));
	U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C* G_B17_2 = NULL;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_3 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_11 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_21 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_30 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_36 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_42 = __this->___U3CU3E4__this_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = __this->___U3CfixedDeltaU3E5__7_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = (&__this->___U3CxMovementU3E5__1_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_45 = (&__this->___U3CyMovementU3E5__2_4);
		NullCheck(L_42);
		TouchController_GetRelativeTouch_m1349350A37508CCFB039AB381EAC19B70A55B252(L_42, L_43, L_44, L_45, NULL);
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_50 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_67 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_73 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_83 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_88 = __this->___U3CU3E4__this_2;
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
// System.Object TouchController/<OnTwoMove>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnTwoMoveU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1E3AF2A22E4CEBFD20525E8B917266C0D82F0186 (U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TouchController/<OnTwoMove>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoMoveU3Ed__17_System_Collections_IEnumerator_Reset_mE58E295AB7435EF868DFD2AFCC4E051E1482F4DA (U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnTwoMoveU3Ed__17_System_Collections_IEnumerator_Reset_mE58E295AB7435EF868DFD2AFCC4E051E1482F4DA_RuntimeMethod_var)));
	}
}
// System.Object TouchController/<OnTwoMove>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnTwoMoveU3Ed__17_System_Collections_IEnumerator_get_Current_m88D9988677F25DE09A22263907BDCC31BD1A11D1 (U3COnTwoMoveU3Ed__17_t4090B5ADE6A90EA9CBD49F02CF06E70C32B53D5C* __this, const RuntimeMethod* method) 
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
// System.Void TouchController/<OnTwoRotate>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoRotateU3Ed__18__ctor_m2F836CA89B8EBB2AC60A2374D4EF2E34F69FF78A (U3COnTwoRotateU3Ed__18_tB03772A0ED37972BAE97B264ECB30F2ED70E3F76* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TouchController/<OnTwoRotate>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoRotateU3Ed__18_System_IDisposable_Dispose_mDEF16585A53C78EF28403CC064DB5AB84CF68E8B (U3COnTwoRotateU3Ed__18_tB03772A0ED37972BAE97B264ECB30F2ED70E3F76* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TouchController/<OnTwoRotate>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnTwoRotateU3Ed__18_MoveNext_m25567028DDA4D368C52903F53DA744949D1DB587 (U3COnTwoRotateU3Ed__18_tB03772A0ED37972BAE97B264ECB30F2ED70E3F76* __this, const RuntimeMethod* method) 
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_3 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_11 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_21 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_30 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_36 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_46 = __this->___U3CU3E4__this_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = __this->___U3CfixedDeltaU3E5__7_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_48 = (&__this->___U3CxMovementU3E5__1_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_49 = (&__this->___U3CyMovementU3E5__2_4);
		NullCheck(L_46);
		TouchController_GetRelativeTouch_m1349350A37508CCFB039AB381EAC19B70A55B252(L_46, L_47, L_48, L_49, NULL);
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_58 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_64 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_71 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_82 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_87 = __this->___U3CU3E4__this_2;
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
// System.Object TouchController/<OnTwoRotate>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnTwoRotateU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0EA73E6001E07F813D07595B590561D039F9B851 (U3COnTwoRotateU3Ed__18_tB03772A0ED37972BAE97B264ECB30F2ED70E3F76* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TouchController/<OnTwoRotate>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoRotateU3Ed__18_System_Collections_IEnumerator_Reset_m8B7A0140D09B5B60194B7D6B2A5EBF8E270F8443 (U3COnTwoRotateU3Ed__18_tB03772A0ED37972BAE97B264ECB30F2ED70E3F76* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnTwoRotateU3Ed__18_System_Collections_IEnumerator_Reset_m8B7A0140D09B5B60194B7D6B2A5EBF8E270F8443_RuntimeMethod_var)));
	}
}
// System.Object TouchController/<OnTwoRotate>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnTwoRotateU3Ed__18_System_Collections_IEnumerator_get_Current_mF85AD9406BD46F71C4362CB7345B606D3EB685DB (U3COnTwoRotateU3Ed__18_tB03772A0ED37972BAE97B264ECB30F2ED70E3F76* __this, const RuntimeMethod* method) 
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
// System.Void TouchController/<OnTwoScale>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoScaleU3Ed__19__ctor_m4F1E6DB942189928E00F9FE26C572AAED1E9E01E (U3COnTwoScaleU3Ed__19_t69CBD1C0028FDAE877F43960A8ABEB109806C411* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TouchController/<OnTwoScale>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoScaleU3Ed__19_System_IDisposable_Dispose_m658B83220E37BBA4DC4EDAF17869125E1807D075 (U3COnTwoScaleU3Ed__19_t69CBD1C0028FDAE877F43960A8ABEB109806C411* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TouchController/<OnTwoScale>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COnTwoScaleU3Ed__19_MoveNext_m8E617D0D06D7E23E4EA71C9459C505599120B477 (U3COnTwoScaleU3Ed__19_t69CBD1C0028FDAE877F43960A8ABEB109806C411* __this, const RuntimeMethod* method) 
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_3 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_11 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_21 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_26 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_32 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_42 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_50 = __this->___U3CU3E4__this_2;
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
		TouchController_tEA714A3AD8470CFE8D310CD659305F53B416D732* L_55 = __this->___U3CU3E4__this_2;
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
// System.Object TouchController/<OnTwoScale>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnTwoScaleU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8208E2FA87BB9269A0F01CECDDD4FC75800FF6C9 (U3COnTwoScaleU3Ed__19_t69CBD1C0028FDAE877F43960A8ABEB109806C411* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TouchController/<OnTwoScale>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnTwoScaleU3Ed__19_System_Collections_IEnumerator_Reset_m0B15C7646512B587F176785485AB72CB3819981F (U3COnTwoScaleU3Ed__19_t69CBD1C0028FDAE877F43960A8ABEB109806C411* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COnTwoScaleU3Ed__19_System_Collections_IEnumerator_Reset_m0B15C7646512B587F176785485AB72CB3819981F_RuntimeMethod_var)));
	}
}
// System.Object TouchController/<OnTwoScale>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COnTwoScaleU3Ed__19_System_Collections_IEnumerator_get_Current_mACCF848AD063ABEAD6795AA8B42B3278A522390E (U3COnTwoScaleU3Ed__19_t69CBD1C0028FDAE877F43960A8ABEB109806C411* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
