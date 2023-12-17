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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<easyar.InputFrame>
struct Action_1_t9B1F83CF784EEF67EA2B81DD3A12C12D518808C1;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<easyar.OutputFrame>
struct Action_1_t51C09D97035A969C5BE8AD3814D3435DFCBC7D36;
// System.Action`1<easyar.ARSession/SessionState>
struct Action_1_tDD15683D1BB2DC4CD2A36D204CFD34C598EA01A4;
// System.Action`2<easyar.Optional`1<easyar.CloudRecognizationResult>,System.String>
struct Action_2_t044BEC9AE1C2995930179F5D51893A8456A3494A;
// System.Action`2<easyar.Optional`1<System.Object>,System.Object>
struct Action_2_t3353F405E2907F696DC8BF0DB5E83290A0ED6196;
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
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Queue`1<easyar.CloudRecognizerFrameFilter/Request>
struct Queue_1_t4AD143AF7A961A82813D1CB3F443B3140ABDDCB0;
// System.Tuple`2<System.Boolean,easyar.Optional`1<System.Tuple`2<easyar.MotionTrackingStatus,UnityEngine.Pose>>>
struct Tuple_2_tD39566EEAAD3069AEF6436718B3A118344EF7CA6;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
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
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// easyar.CameraParameters
struct CameraParameters_t18C9E22363BD41CD7244E2256ED25A53DB87BB53;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// easyar.CloudRecognizationResult
struct CloudRecognizationResult_tDF8C697ACD722E32905AD67AAD1EE23B2FA3831F;
// easyar.CloudRecognizer
struct CloudRecognizer_t27F99F43A57C493819C7299483ADCBAEB549937E;
// easyar.CloudRecognizerFrameFilter
struct CloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316;
// ImageTracking_CloudRecognition.CloudRecognizerSample
struct CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// easyar.ImageTarget
struct ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB;
// easyar.ImageTargetController
struct ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633;
// easyar.ImageTracker
struct ImageTracker_t936EBB4B806DF339985DABBA2473BC1E6B533813;
// easyar.ImageTrackerFrameFilter
struct ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E;
// easyar.InputFrame
struct InputFrame_tDB02ECBCF7ED51DE6F781A607D63BE7812E0BDC1;
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
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
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
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
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
// easyar.CloudRecognizerFrameFilter/CloudRecognizerServiceConfig
struct CloudRecognizerServiceConfig_tAF6DBBE8DF5606D2D6879A3FABCFE28B003862FD;
// easyar.CloudRecognizerFrameFilter/PrivateCloudRecognizerServiceConfig
struct PrivateCloudRecognizerServiceConfig_t0A6190CA51A48D63D12EB07B73E33C71446A4E92;
// ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t218963FB56B8134B9A90E7381C05458A909B9B6C;
// ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4;
// ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E;
// ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1;
// ImageTracking_CloudRecognition.CloudRecognizerSample/ResolveInfo
struct ResolveInfo_t3C347AB58056236121244BCC6345728247271048;
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

IL2CPP_EXTERN_C RuntimeClass* Action_1_t9B1F83CF784EEF67EA2B81DD3A12C12D518808C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t044BEC9AE1C2995930179F5D51893A8456A3494A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CloudRecognizationStatus_t3D141E0E9D20743E92FBEC5F03489E0F1C1FDAFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResolveInfo_t3C347AB58056236121244BCC6345728247271048_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_t218963FB56B8134B9A90E7381C05458A909B9B6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03F21E5230F19D6F83457DC39F853DC7F8D94648;
IL2CPP_EXTERN_C String_t* _stringLiteral1428E74E9B90DABCAD124085854D881307C77C77;
IL2CPP_EXTERN_C String_t* _stringLiteral17B61316E6BAD7B6FC9046B0732E623BD42F34A5;
IL2CPP_EXTERN_C String_t* _stringLiteral1E0F60541443C221022F5D8985905A6FEA2C408B;
IL2CPP_EXTERN_C String_t* _stringLiteral1F3301C20BBFD987E2D6AF07AE8C13AAC28DBBEB;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral547BEA56C4677C44366AC9CF6980B7C97245F800;
IL2CPP_EXTERN_C String_t* _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
IL2CPP_EXTERN_C String_t* _stringLiteral72DED642C9E61D4FFFC8480BC99EB1C6439FDE98;
IL2CPP_EXTERN_C String_t* _stringLiteral7AEFE47A454E788E5B7A82B836E79909E5E188CA;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral91159B7615B057DE8E103C46806568181DDDBF69;
IL2CPP_EXTERN_C String_t* _stringLiteral9A0F2952661703DA9C6A48F286E3FCE5DAB049A7;
IL2CPP_EXTERN_C String_t* _stringLiteral9FFDBE622B36D36D8AAAFF7CE8DDE7B7F6ADDE64;
IL2CPP_EXTERN_C String_t* _stringLiteralAE852C9D927E59DCEF704F3D86E8C862DD827855;
IL2CPP_EXTERN_C String_t* _stringLiteralB6725F71E0C7852F2EAA75EA27E80E02BE9B112A;
IL2CPP_EXTERN_C String_t* _stringLiteralBA3E0101E3552765151523E12EBD9D52B6981472;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044;
IL2CPP_EXTERN_C String_t* _stringLiteralE8B77FFA6B004EBE6AD02387BCBFBFA47562B049;
IL2CPP_EXTERN_C String_t* _stringLiteralE8DA99032740C6A95D006B2D70E38AA930D877EA;
IL2CPP_EXTERN_C const RuntimeMethod* CloudRecognizerSample_U3CLoadTargetIntoTrackerU3Eb__26_0_m8110C840FCA5A7BAC360B5A3FB7D4EE243405FEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CloudRecognizerSample_U3CLoadTargetIntoTrackerU3Eb__26_1_m6423C17B048B1E8AF42E59A1860F481BDB2EEDFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316_m5C4A29DA48D1E6146435E5771EAF273ABC445CC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_mE53A3FFA4ABE459947ED065249FDD6795BECAB97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_mA7E7AB396A6A9F6F74D39DA1733325F12C1D8784_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_ToString_mC3FE8B36A89D4155F61D370F97FF893306594A1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_OnNone_m195C1ABA29201A6E5F017DD141BA7F69135C8C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_OnSome_m6D6DC92913DB3CFD8FDC06D73452516217946020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_Value_m1B40EB1F1CB42848B8DECF2B684225B3CACF2FB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_Value_m6FE987AD04467FD6677A5C639692E5996045BF3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_op_Implicit_m5AC3179A9D1AD910F4B446CB3C256B0BA3514FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CAwakeU3Eb__0_m39C1F23CBD089AD76B448BDEE26A1609A1CC857C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass23_0_U3CAutoResolveU3Eb__0_mFF4A5075AB4B7F202D46678B8C38175A3101B0F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass23_0_U3CAutoResolveU3Eb__1_mB6058992522DA3446896F321D6B3D25B9775499B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CLoadCloudTargetU3Eb__0_m500A3CBDE9F7F09615D9CECC718B80477235EB9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_0_U3CLoadOfflineTargetU3Eb__0_m37F07926B131ADBBEA113BB5FCCD1591DC3A4106_RuntimeMethod_var;
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
struct U3CModuleU3E_t5BF3D252978CDACC12CF8C7D10BA584389F45196 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
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

// ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t218963FB56B8134B9A90E7381C05458A909B9B6C  : public RuntimeObject
{
	// System.String ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass16_0::launcher
	String_t* ___launcher_0;
};

// ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4  : public RuntimeObject
{
	// ImageTracking_CloudRecognition.CloudRecognizerSample ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass23_0::<>4__this
	CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* ___U3CU3E4__this_0;
	// System.Single ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass23_0::time
	float ___time_1;
};

// ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E  : public RuntimeObject
{
	// System.String ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass24_0::uid
	String_t* ___uid_0;
	// ImageTracking_CloudRecognition.CloudRecognizerSample ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass24_0::<>4__this
	CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* ___U3CU3E4__this_1;
	// easyar.ImageTargetController ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass24_0::targetController
	ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* ___targetController_2;
};

// ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1  : public RuntimeObject
{
	// System.String ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass25_0::file
	String_t* ___file_0;
	// ImageTracking_CloudRecognition.CloudRecognizerSample ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass25_0::<>4__this
	CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* ___U3CU3E4__this_1;
	// easyar.ImageTargetController ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass25_0::targetController
	ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* ___targetController_2;
};

// easyar.ImageTargetController/TargetDataFileSourceData
struct TargetDataFileSourceData_t8A1E6462041EA1563F8FAD0E8DD979416E605C4B  : public RuntimeObject
{
	// easyar.PathType easyar.ImageTargetController/TargetDataFileSourceData::PathType
	int32_t ___PathType_0;
	// System.String easyar.ImageTargetController/TargetDataFileSourceData::Path
	String_t* ___Path_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
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

// easyar.Optional`1<easyar.CloudRecognizationResult>
struct Optional_1_t253307ED07B92F4301EEAE152CDBA6AA8AFBD530 
{
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 ___None_1;
	// T easyar.Optional`1::Some
	CloudRecognizationResult_tDF8C697ACD722E32905AD67AAD1EE23B2FA3831F* ___Some_2;
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

// easyar.Optional`1<System.String>
struct Optional_1_t7BEFED5D4A872666AF0ABE1DC71C7671E6012549 
{
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 ___None_1;
	// T easyar.Optional`1::Some
	String_t* ___Some_2;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// easyar.CloudRecognizationResult
struct CloudRecognizationResult_tDF8C697ACD722E32905AD67AAD1EE23B2FA3831F  : public RefBase_tD2A748D10CECAAD8DD367977128D0B22A01F604E
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

// easyar.InputFrame
struct InputFrame_tDB02ECBCF7ED51DE6F781A607D63BE7812E0BDC1  : public RefBase_tD2A748D10CECAAD8DD367977128D0B22A01F604E
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

// easyar.Target
struct Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836  : public RefBase_tD2A748D10CECAAD8DD367977128D0B22A01F604E
{
};

// ImageTracking_CloudRecognition.CloudRecognizerSample/ResolveInfo
struct ResolveInfo_t3C347AB58056236121244BCC6345728247271048  : public RuntimeObject
{
	// System.Int32 ImageTracking_CloudRecognition.CloudRecognizerSample/ResolveInfo::Index
	int32_t ___Index_0;
	// System.Boolean ImageTracking_CloudRecognition.CloudRecognizerSample/ResolveInfo::Running
	bool ___Running_1;
	// System.Single ImageTracking_CloudRecognition.CloudRecognizerSample/ResolveInfo::ResolveTime
	float ___ResolveTime_2;
	// System.Single ImageTracking_CloudRecognition.CloudRecognizerSample/ResolveInfo::CostTime
	float ___CostTime_3;
	// System.String ImageTracking_CloudRecognition.CloudRecognizerSample/ResolveInfo::TargetName
	String_t* ___TargetName_4;
	// easyar.Optional`1<System.String> ImageTracking_CloudRecognition.CloudRecognizerSample/ResolveInfo::UnknownErrorMessage
	Optional_1_t7BEFED5D4A872666AF0ABE1DC71C7671E6012549 ___UnknownErrorMessage_5;
	// easyar.CloudRecognizationStatus ImageTracking_CloudRecognition.CloudRecognizerSample/ResolveInfo::CloudStatus
	int32_t ___CloudStatus_6;
	// System.Int32 ImageTracking_CloudRecognition.CloudRecognizerSample/ResolveInfo::SlowResponseCount
	int32_t ___SlowResponseCount_7;
	// System.Int32 ImageTracking_CloudRecognition.CloudRecognizerSample/ResolveInfo::FastResponseCount
	int32_t ___FastResponseCount_8;
};

// System.Action`1<easyar.InputFrame>
struct Action_1_t9B1F83CF784EEF67EA2B81DD3A12C12D518808C1  : public MulticastDelegate_t
{
};

// System.Action`2<easyar.Optional`1<easyar.CloudRecognizationResult>,System.String>
struct Action_2_t044BEC9AE1C2995930179F5D51893A8456A3494A  : public MulticastDelegate_t
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

// ImageTracking_CloudRecognition.CloudRecognizerSample
struct CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// easyar.ARSession ImageTracking_CloudRecognition.CloudRecognizerSample::Session
	ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* ___Session_4;
	// UnityEngine.UI.Text ImageTracking_CloudRecognition.CloudRecognizerSample::Status
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Status_5;
	// System.Boolean ImageTracking_CloudRecognition.CloudRecognizerSample::UseOfflineCache
	bool ___UseOfflineCache_6;
	// System.String ImageTracking_CloudRecognition.CloudRecognizerSample::OfflineCachePath
	String_t* ___OfflineCachePath_7;
	// UnityEngine.UI.Button ImageTracking_CloudRecognition.CloudRecognizerSample::BackButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___BackButton_8;
	// easyar.CloudRecognizerFrameFilter ImageTracking_CloudRecognition.CloudRecognizerSample::cloudRecognizer
	CloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316* ___cloudRecognizer_9;
	// easyar.ImageTrackerFrameFilter ImageTracking_CloudRecognition.CloudRecognizerSample::tracker
	ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* ___tracker_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ImageTracking_CloudRecognition.CloudRecognizerSample::targetObjs
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___targetObjs_11;
	// System.Collections.Generic.List`1<System.String> ImageTracking_CloudRecognition.CloudRecognizerSample::loadedCloudTargetUids
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___loadedCloudTargetUids_12;
	// System.Int32 ImageTracking_CloudRecognition.CloudRecognizerSample::cachedTargetCount
	int32_t ___cachedTargetCount_13;
	// ImageTracking_CloudRecognition.CloudRecognizerSample/ResolveInfo ImageTracking_CloudRecognition.CloudRecognizerSample::resolveInfo
	ResolveInfo_t3C347AB58056236121244BCC6345728247271048* ___resolveInfo_14;
	// System.Single ImageTracking_CloudRecognition.CloudRecognizerSample::resolveInterval
	float ___resolveInterval_15;
	// System.Boolean ImageTracking_CloudRecognition.CloudRecognizerSample::isTracking
	bool ___isTracking_16;
	// System.Boolean ImageTracking_CloudRecognition.CloudRecognizerSample::resolveOn
	bool ___resolveOn_17;
	// System.Int32 ImageTracking_CloudRecognition.CloudRecognizerSample::minResolveTimeout
	int32_t ___minResolveTimeout_18;
	// System.Int32 ImageTracking_CloudRecognition.CloudRecognizerSample::maxResolveTimeout
	int32_t ___maxResolveTimeout_19;
};

// easyar.FrameFilter
struct FrameFilter_tEF74686432B3C28E888F223945B0BF3FC58AD214  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean easyar.FrameFilter::horizontalFlip
	bool ___horizontalFlip_4;
	// easyar.Optional`1<System.Collections.Generic.List`1<System.Tuple`2<easyar.TargetController,UnityEngine.Pose>>> easyar.FrameFilter::targetResults
	Optional_1_t5AF2475D02CCAD63B40183BFA862E1BC1E764B11 ___targetResults_5;
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

// easyar.CloudRecognizerFrameFilter
struct CloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316  : public FrameFilter_tEF74686432B3C28E888F223945B0BF3FC58AD214
{
	// System.Int32 easyar.CloudRecognizerFrameFilter::ResolveTimeout
	int32_t ___ResolveTimeout_6;
	// System.Boolean easyar.CloudRecognizerFrameFilter::UseGlobalServiceConfig
	bool ___UseGlobalServiceConfig_7;
	// easyar.CloudRecognizerFrameFilter/KeyType easyar.CloudRecognizerFrameFilter::ServerKeyType
	int32_t ___ServerKeyType_8;
	// easyar.CloudRecognizerFrameFilter/CloudRecognizerServiceConfig easyar.CloudRecognizerFrameFilter::ServiceConfig
	CloudRecognizerServiceConfig_tAF6DBBE8DF5606D2D6879A3FABCFE28B003862FD* ___ServiceConfig_9;
	// easyar.CloudRecognizerFrameFilter/PrivateCloudRecognizerServiceConfig easyar.CloudRecognizerFrameFilter::PrivateServiceConfig
	PrivateCloudRecognizerServiceConfig_t0A6190CA51A48D63D12EB07B73E33C71446A4E92* ___PrivateServiceConfig_10;
	// easyar.CloudRecognizer easyar.CloudRecognizerFrameFilter::cloudRecognizer
	CloudRecognizer_t27F99F43A57C493819C7299483ADCBAEB549937E* ___cloudRecognizer_11;
	// System.Collections.Generic.Queue`1<easyar.CloudRecognizerFrameFilter/Request> easyar.CloudRecognizerFrameFilter::pendingRequets
	Queue_1_t4AD143AF7A961A82813D1CB3F443B3140ABDDCB0* ___pendingRequets_12;
	// System.Boolean easyar.CloudRecognizerFrameFilter::failToCreate
	bool ___failToCreate_13;
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


// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String easyar.Optional`1<System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Optional_1_ToString_m5FA7FACCBE9FB16B751A209F88E184A8852B32D5_gshared (Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<easyar.Optional`1<System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m79CCA420CCF7687AE1A5512489DB0D34954EC703_gshared (Action_2_t3353F405E2907F696DC8BF0DB5E83290A0ED6196* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m460C72FDDE5FF8033C7BD19A07CF4E3F473F7414_gshared (Action_2_t5BCD350E28ADACED656596CC308132ED74DA0915* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean easyar.Optional`1<System.Object>::get_OnNone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Optional_1_get_OnNone_m3DBA09648553D54F8E4D17AF64D4CE5511BB2365_gshared (Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* __this, const RuntimeMethod* method) ;
// easyar.Optional`1<T> easyar.Optional`1<System.Object>::op_Implicit(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22 Optional_1_op_Implicit_mDACBD94DFA24E606D67BC9DE9487B9D648C8A998_gshared (RuntimeObject* ___v0, const RuntimeMethod* method) ;
// T easyar.Optional`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Optional_1_get_Value_m1E8149EB196B88B62B9737096E20FAC8F90304E3_gshared (Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* __this, const RuntimeMethod* method) ;
// System.Boolean easyar.Optional`1<System.Object>::get_OnSome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Optional_1_get_OnSome_m6A4180C85633C2D06A1EBEFA7383BD23DF86EB04_gshared (Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mACB77CF220CF6A81A987CC1B902DD08666879402 (U3CU3Ec__DisplayClass16_0_t218963FB56B8134B9A90E7381C05458A909B9B6C* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<easyar.ImageTrackerFrameFilter>()
inline ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* Component_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_mE53A3FFA4ABE459947ED065249FDD6795BECAB97 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInChildren<easyar.CloudRecognizerFrameFilter>()
inline CloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316* Component_GetComponentInChildren_TisCloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316_m5C4A29DA48D1E6146435E5771EAF273ABC445CC3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702 (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String[] System.IO.Directory::GetFiles(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Directory_GetFiles_m4B12F04FB52DA5311463669EBB83321CB0CF284B (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::LoadOfflineTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_LoadOfflineTarget_m916A37DA8298E21FD17FE8D900D3C52A594B53CD (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, String_t* ___file0, const RuntimeMethod* method) ;
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
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::StartAutoResolve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_StartAutoResolve_mE9436E303D7C47FFF39F320D1C3B42D7D3F2805D (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String easyar.Optional`1<System.String>::ToString()
inline String_t* Optional_1_ToString_mC3FE8B36A89D4155F61D370F97FF893306594A1D (Optional_1_t7BEFED5D4A872666AF0ABE1DC71C7671E6012549* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Optional_1_t7BEFED5D4A872666AF0ABE1DC71C7671E6012549*, const RuntimeMethod*))Optional_1_ToString_m5FA7FACCBE9FB16B751A209F88E184A8852B32D5_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::AutoResolve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_AutoResolve_m4CB5C37D5975796C50E3FADF24E1FEF83160657C (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample/ResolveInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResolveInfo__ctor_mAE0F40F2D8B0AA0145C78359A706F6A7547F17E7 (ResolveInfo_t3C347AB58056236121244BCC6345728247271048* __this, const RuntimeMethod* method) ;
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m77F0486603A245A41D08EB8DE545CE17F5EEA406 (U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void System.Action`1<easyar.InputFrame>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8AB459878EC4913BFA949598990F18AE9BB374DD (Action_1_t9B1F83CF784EEF67EA2B81DD3A12C12D518808C1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9B1F83CF784EEF67EA2B81DD3A12C12D518808C1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<easyar.Optional`1<easyar.CloudRecognizationResult>,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m0AB639A3AA8352C449525B25C2CF35F3F3009356 (Action_2_t044BEC9AE1C2995930179F5D51893A8456A3494A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t044BEC9AE1C2995930179F5D51893A8456A3494A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m79CCA420CCF7687AE1A5512489DB0D34954EC703_gshared)(__this, ___object0, ___method1, method);
}
// System.Void easyar.CloudRecognizerFrameFilter::Resolve(System.Action`1<easyar.InputFrame>,System.Action`2<easyar.Optional`1<easyar.CloudRecognizationResult>,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerFrameFilter_Resolve_m7DBDE2696A616BDD19BDAE6F7C98E737A2FDD888 (CloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316* __this, Action_1_t9B1F83CF784EEF67EA2B81DD3A12C12D518808C1* ___start0, Action_2_t044BEC9AE1C2995930179F5D51893A8456A3494A* ___finish1, const RuntimeMethod* method) ;
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_mA49D8C3F9779441273675DAB99DF582A0C40C83C (U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T UnityEngine.GameObject::AddComponent<easyar.ImageTargetController>()
inline ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* GameObject_AddComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_mA7E7AB396A6A9F6F74D39DA1733325F12C1D8784 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::LoadTargetIntoTracker(easyar.ImageTargetController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_LoadTargetIntoTracker_mE24300AB2595C8C8E46B4A59C93D1CCE4B21EB9B (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* ___controller0, const RuntimeMethod* method) ;
// System.Void System.Action`2<easyar.Target,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m0D18FC0D2E5634CBDC24690398EE59D4F1EB1101 (Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m460C72FDDE5FF8033C7BD19A07CF4E3F473F7414_gshared)(__this, ___object0, ___method1, method);
}
// System.Void easyar.ImageTargetController::add_TargetLoad(System.Action`2<easyar.Target,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetController_add_TargetLoad_m91633BAF45092ADF09E6F663EF292B891ACC505C (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m3D108C637A4EE6CE0371CCCF4613558ADDABAD28 (U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileNameWithoutExtension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileNameWithoutExtension_mD24A7CA7C45FF7A265EF7F8D5E19D1F3C014D90F (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void easyar.ImageTargetController::set_Tracker(easyar.ImageTrackerFrameFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetController_set_Tracker_mA9CCBB114C5479A0679FEF22A74B67DB9D1AD26B (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void easyar.TargetController::add_TargetFound(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetController_add_TargetFound_mD4B9C4D3662E282B491F617E22AA14D3775AB57B (TargetController_t8B3D4F1410E51D042DF5E9C689F5C0499E43410A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void easyar.TargetController::add_TargetLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetController_add_TargetLost_mB6790A7172B5C303E3143155672D27F4BF6E4ECC (TargetController_t8B3D4F1410E51D042DF5E9C689F5C0499E43410A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507 (int32_t ___type0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// easyar.ImageTarget easyar.ImageTargetController::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* ImageTargetController_get_Target_m51F32E8D1467745044F011BE80719C022258BC95_inline (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Boolean easyar.Optional`1<easyar.CloudRecognizationResult>::get_OnNone()
inline bool Optional_1_get_OnNone_m195C1ABA29201A6E5F017DD141BA7F69135C8C49 (Optional_1_t253307ED07B92F4301EEAE152CDBA6AA8AFBD530* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Optional_1_t253307ED07B92F4301EEAE152CDBA6AA8AFBD530*, const RuntimeMethod*))Optional_1_get_OnNone_m3DBA09648553D54F8E4D17AF64D4CE5511BB2365_gshared)(__this, method);
}
// easyar.Optional`1<T> easyar.Optional`1<System.String>::op_Implicit(T)
inline Optional_1_t7BEFED5D4A872666AF0ABE1DC71C7671E6012549 Optional_1_op_Implicit_m5AC3179A9D1AD910F4B446CB3C256B0BA3514FA7 (String_t* ___v0, const RuntimeMethod* method)
{
	return ((  Optional_1_t7BEFED5D4A872666AF0ABE1DC71C7671E6012549 (*) (String_t*, const RuntimeMethod*))Optional_1_op_Implicit_mDACBD94DFA24E606D67BC9DE9487B9D648C8A998_gshared)(___v0, method);
}
// T easyar.Optional`1<easyar.CloudRecognizationResult>::get_Value()
inline CloudRecognizationResult_tDF8C697ACD722E32905AD67AAD1EE23B2FA3831F* Optional_1_get_Value_m6FE987AD04467FD6677A5C639692E5996045BF3A (Optional_1_t253307ED07B92F4301EEAE152CDBA6AA8AFBD530* __this, const RuntimeMethod* method)
{
	return ((  CloudRecognizationResult_tDF8C697ACD722E32905AD67AAD1EE23B2FA3831F* (*) (Optional_1_t253307ED07B92F4301EEAE152CDBA6AA8AFBD530*, const RuntimeMethod*))Optional_1_get_Value_m1E8149EB196B88B62B9737096E20FAC8F90304E3_gshared)(__this, method);
}
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
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// easyar.ImageTarget easyar.ImageTarget::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* ImageTarget_Clone_mB80FB41B187C20727843FC5ACB430E7385CBC83C (ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* __this, const RuntimeMethod* method) ;
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::LoadCloudTarget(easyar.ImageTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_LoadCloudTarget_m27469620A379422C01D4318A5BB9A68FB35E7F21 (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::AddCubeOnTarget(easyar.ImageTargetController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_AddCubeOnTarget_mD79FBD75BE5BB129BE2D05405D61255518340D60 (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* ___controller0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_Awake_m75B5657562AF1E37867FF08FED1AD962C5C261E0 (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316_m5C4A29DA48D1E6146435E5771EAF273ABC445CC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_mE53A3FFA4ABE459947ED065249FDD6795BECAB97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CAwakeU3Eb__0_m39C1F23CBD089AD76B448BDEE26A1609A1CC857C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_t218963FB56B8134B9A90E7381C05458A909B9B6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AEFE47A454E788E5B7A82B836E79909E5E188CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA3E0101E3552765151523E12EBD9D52B6981472);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_0_t218963FB56B8134B9A90E7381C05458A909B9B6C* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_6 = NULL;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_11 = NULL;
	{
		U3CU3Ec__DisplayClass16_0_t218963FB56B8134B9A90E7381C05458A909B9B6C* L_0 = (U3CU3Ec__DisplayClass16_0_t218963FB56B8134B9A90E7381C05458A909B9B6C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_t218963FB56B8134B9A90E7381C05458A909B9B6C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass16_0__ctor_mACB77CF220CF6A81A987CC1B902DD08666879402(L_0, NULL);
		V_0 = L_0;
		// tracker = Session.GetComponentInChildren<ImageTrackerFrameFilter>();
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_1 = __this->___Session_4;
		NullCheck(L_1);
		ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* L_2;
		L_2 = Component_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_mE53A3FFA4ABE459947ED065249FDD6795BECAB97(L_1, Component_GetComponentInChildren_TisImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E_mE53A3FFA4ABE459947ED065249FDD6795BECAB97_RuntimeMethod_var);
		__this->___tracker_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tracker_10), (void*)L_2);
		// cloudRecognizer = Session.GetComponentInChildren<CloudRecognizerFrameFilter>();
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_3 = __this->___Session_4;
		NullCheck(L_3);
		CloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316* L_4;
		L_4 = Component_GetComponentInChildren_TisCloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316_m5C4A29DA48D1E6146435E5771EAF273ABC445CC3(L_3, Component_GetComponentInChildren_TisCloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316_m5C4A29DA48D1E6146435E5771EAF273ABC445CC3_RuntimeMethod_var);
		__this->___cloudRecognizer_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cloudRecognizer_9), (void*)L_4);
		// minResolveTimeout = cloudRecognizer.ResolveTimeout;
		CloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316* L_5 = __this->___cloudRecognizer_9;
		NullCheck(L_5);
		int32_t L_6 = L_5->___ResolveTimeout_6;
		__this->___minResolveTimeout_18 = L_6;
		// if (UseOfflineCache)
		bool L_7 = __this->___UseOfflineCache_6;
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00f2;
		}
	}
	{
		// if (string.IsNullOrEmpty(OfflineCachePath))
		String_t* L_9 = __this->___OfflineCachePath_7;
		bool L_10;
		L_10 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_9, NULL);
		V_2 = L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		// OfflineCachePath = Application.persistentDataPath + "/CloudRecognizerSample";
		String_t* L_12;
		L_12 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_12, _stringLiteral7AEFE47A454E788E5B7A82B836E79909E5E188CA, NULL);
		__this->___OfflineCachePath_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OfflineCachePath_7), (void*)L_13);
	}

IL_006e:
	{
		// if (!Directory.Exists(OfflineCachePath))
		String_t* L_14 = __this->___OfflineCachePath_7;
		bool L_15;
		L_15 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_14, NULL);
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_008e;
		}
	}
	{
		// Directory.CreateDirectory(OfflineCachePath);
		String_t* L_17 = __this->___OfflineCachePath_7;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_18;
		L_18 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_17, NULL);
	}

IL_008e:
	{
		// if (Directory.Exists(OfflineCachePath))
		String_t* L_19 = __this->___OfflineCachePath_7;
		bool L_20;
		L_20 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_19, NULL);
		V_4 = L_20;
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_00f1;
		}
	}
	{
		// var targetFiles = Directory.GetFiles(OfflineCachePath);
		String_t* L_22 = __this->___OfflineCachePath_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23;
		L_23 = Directory_GetFiles_m4B12F04FB52DA5311463669EBB83321CB0CF284B(L_22, NULL);
		V_5 = L_23;
		// foreach (var file in targetFiles)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = V_5;
		V_6 = L_24;
		V_7 = 0;
		goto IL_00e8;
	}

IL_00b7:
	{
		// foreach (var file in targetFiles)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_6;
		int32_t L_26 = V_7;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		String_t* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_8 = L_28;
		// if (Path.GetExtension(file) == ".etd")
		String_t* L_29 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_30;
		L_30 = Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7(L_29, NULL);
		bool L_31;
		L_31 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_30, _stringLiteralBA3E0101E3552765151523E12EBD9D52B6981472, NULL);
		V_9 = L_31;
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00e1;
		}
	}
	{
		// LoadOfflineTarget(file);
		String_t* L_33 = V_8;
		CloudRecognizerSample_LoadOfflineTarget_m916A37DA8298E21FD17FE8D900D3C52A594B53CD(__this, L_33, NULL);
	}

IL_00e1:
	{
		int32_t L_34 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00e8:
	{
		// foreach (var file in targetFiles)
		int32_t L_35 = V_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = V_6;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_00b7;
		}
	}
	{
	}

IL_00f1:
	{
	}

IL_00f2:
	{
		// var launcher = "AllSamplesLauncher";
		U3CU3Ec__DisplayClass16_0_t218963FB56B8134B9A90E7381C05458A909B9B6C* L_37 = V_0;
		NullCheck(L_37);
		L_37->___launcher_0 = _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->___launcher_0), (void*)_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		// if (Application.CanStreamedLevelBeLoaded(launcher))
		U3CU3Ec__DisplayClass16_0_t218963FB56B8134B9A90E7381C05458A909B9B6C* L_38 = V_0;
		NullCheck(L_38);
		String_t* L_39 = L_38->___launcher_0;
		bool L_40;
		L_40 = Application_CanStreamedLevelBeLoaded_mA1BAA60593E8679BAFA6A16595166774AE172ADC(L_39, NULL);
		V_10 = L_40;
		bool L_41 = V_10;
		if (!L_41)
		{
			goto IL_0138;
		}
	}
	{
		// var button = BackButton.GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_42 = __this->___BackButton_8;
		NullCheck(L_42);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_43;
		L_43 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_42, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		V_11 = L_43;
		// button.onClick.AddListener(() => { UnityEngine.SceneManagement.SceneManager.LoadScene(launcher); });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_44 = V_11;
		NullCheck(L_44);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_45;
		L_45 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_44, NULL);
		U3CU3Ec__DisplayClass16_0_t218963FB56B8134B9A90E7381C05458A909B9B6C* L_46 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_47 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_47, L_46, (intptr_t)((void*)U3CU3Ec__DisplayClass16_0_U3CAwakeU3Eb__0_m39C1F23CBD089AD76B448BDEE26A1609A1CC857C_RuntimeMethod_var), NULL);
		NullCheck(L_45);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_45, L_47, NULL);
		goto IL_014c;
	}

IL_0138:
	{
		// BackButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_48 = __this->___BackButton_8;
		NullCheck(L_48);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_48, NULL);
		NullCheck(L_49);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_49, (bool)0, NULL);
	}

IL_014c:
	{
		// }
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_Start_mD098BAEF37140BFD6D15F5F8A129C8D4DCE8DFF4 (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, const RuntimeMethod* method) 
{
	{
		// StartAutoResolve();
		CloudRecognizerSample_StartAutoResolve_mE9436E303D7C47FFF39F320D1C3B42D7D3F2805D(__this, NULL);
		// }
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_Update_m68E9240951B8FD579A8DB326594C3A251651A70C (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudRecognizationStatus_t3D141E0E9D20743E92FBEC5F03489E0F1C1FDAFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_ToString_mC3FE8B36A89D4155F61D370F97FF893306594A1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03F21E5230F19D6F83457DC39F853DC7F8D94648);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17B61316E6BAD7B6FC9046B0732E623BD42F34A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F3301C20BBFD987E2D6AF07AE8C13AAC28DBBEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral547BEA56C4677C44366AC9CF6980B7C97245F800);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72DED642C9E61D4FFFC8480BC99EB1C6439FDE98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FFDBE622B36D36D8AAAFF7CE8DDE7B7F6ADDE64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE852C9D927E59DCEF704F3D86E8C862DD827855);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6725F71E0C7852F2EAA75EA27E80E02BE9B112A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8B77FFA6B004EBE6AD02387BCBFBFA47562B049);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8DA99032740C6A95D006B2D70E38AA930D877EA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_4 = NULL;
	int32_t G_B7_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B7_3 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_3 = NULL;
	int32_t G_B6_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B8_4 = NULL;
	int32_t G_B11_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B11_3 = NULL;
	int32_t G_B9_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B9_3 = NULL;
	int32_t G_B10_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B12_4 = NULL;
	int32_t G_B15_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B15_3 = NULL;
	int32_t G_B13_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B13_3 = NULL;
	int32_t G_B14_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B16_4 = NULL;
	int32_t G_B19_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B19_3 = NULL;
	int32_t G_B17_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B17_3 = NULL;
	int32_t G_B18_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B20_4 = NULL;
	int32_t G_B23_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B23_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B23_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B23_3 = NULL;
	int32_t G_B21_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B21_3 = NULL;
	int32_t G_B22_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B22_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B22_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B22_3 = NULL;
	String_t* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B24_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B24_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B24_4 = NULL;
	int32_t G_B27_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B27_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B27_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B27_3 = NULL;
	int32_t G_B25_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B25_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B25_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B25_3 = NULL;
	int32_t G_B26_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B26_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B26_2 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B26_3 = NULL;
	String_t* G_B28_0 = NULL;
	int32_t G_B28_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B28_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B28_3 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B28_4 = NULL;
	{
		// Status.text =
		// (cloudRecognizer.ResolveTimeout == maxResolveTimeout ? $"Your network condition is possibility not good, resolve timeout has been set to {maxResolveTimeout}" + Environment.NewLine + Environment.NewLine : "") +
		// "Resolve: " + ((resolveInfo == null || resolveInfo.Index == 0 || isTracking) ? "OFF" : "ON") + Environment.NewLine +
		// "\tIndex: " + ((resolveInfo == null || resolveInfo.Index == 0) ? "-" : (resolveInfo.Index).ToString()) + Environment.NewLine +
		// "\tCostTime: " + ((resolveInfo == null || resolveInfo.Index == 0) ? "-" : (resolveInfo.CostTime).ToString() + "s") + Environment.NewLine +
		// "\tTargetName: " + ((resolveInfo == null || resolveInfo.Index == 0) ? "-" : (resolveInfo.TargetName).ToString()) + Environment.NewLine +
		// "\tCloudStatus: " + ((resolveInfo == null || resolveInfo.Index == 0) ? "-" : (resolveInfo.CloudStatus).ToString()) + Environment.NewLine +
		// "\tErrorMessage: " + ((resolveInfo == null || resolveInfo.Index == 0) ? "-" : (resolveInfo.UnknownErrorMessage).ToString()) + Environment.NewLine +
		// "CachedTargets: " + cachedTargetCount + Environment.NewLine +
		// "LoadedTargets: " + loadedCloudTargetUids.Count;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___Status_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		CloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316* L_3 = __this->___cloudRecognizer_9;
		NullCheck(L_3);
		int32_t L_4 = L_3->___ResolveTimeout_6;
		int32_t L_5 = __this->___maxResolveTimeout_19;
		G_B1_0 = 0;
		G_B1_1 = L_2;
		G_B1_2 = L_2;
		G_B1_3 = L_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			G_B2_0 = 0;
			G_B2_1 = L_2;
			G_B2_2 = L_2;
			G_B2_3 = L_0;
			goto IL_002a;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_004e;
	}

IL_002a:
	{
		int32_t L_6 = __this->___maxResolveTimeout_19;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral547BEA56C4677C44366AC9CF6980B7C97245F800, L_8, NULL);
		String_t* L_10;
		L_10 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		String_t* L_11;
		L_11 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		String_t* L_12;
		L_12 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_9, L_10, L_11, NULL);
		G_B3_0 = L_12;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_004e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B3_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralAE852C9D927E59DCEF704F3D86E8C862DD827855);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralAE852C9D927E59DCEF704F3D86E8C862DD827855);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_15 = __this->___resolveInfo_14;
		G_B4_0 = 2;
		G_B4_1 = L_14;
		G_B4_2 = L_14;
		G_B4_3 = G_B3_4;
		if (!L_15)
		{
			G_B7_0 = 2;
			G_B7_1 = L_14;
			G_B7_2 = L_14;
			G_B7_3 = G_B3_4;
			goto IL_007d;
		}
	}
	{
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_16 = __this->___resolveInfo_14;
		NullCheck(L_16);
		int32_t L_17 = L_16->___Index_0;
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
		if (!L_17)
		{
			G_B7_0 = G_B4_0;
			G_B7_1 = G_B4_1;
			G_B7_2 = G_B4_2;
			G_B7_3 = G_B4_3;
			goto IL_007d;
		}
	}
	{
		bool L_18 = __this->___isTracking_16;
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		if (L_18)
		{
			G_B7_0 = G_B5_0;
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007d;
		}
	}
	{
		G_B8_0 = _stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		G_B8_4 = G_B6_3;
		goto IL_0082;
	}

IL_007d:
	{
		G_B8_0 = _stringLiteralE8B77FFA6B004EBE6AD02387BCBFBFA47562B049;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
		G_B8_4 = G_B7_3;
	}

IL_0082:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = G_B8_3;
		String_t* L_20;
		L_20 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_19;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteral9FFDBE622B36D36D8AAAFF7CE8DDE7B7F6ADDE64);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral9FFDBE622B36D36D8AAAFF7CE8DDE7B7F6ADDE64);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_23 = __this->___resolveInfo_14;
		G_B9_0 = 5;
		G_B9_1 = L_22;
		G_B9_2 = L_22;
		G_B9_3 = G_B8_4;
		if (!L_23)
		{
			G_B11_0 = 5;
			G_B11_1 = L_22;
			G_B11_2 = L_22;
			G_B11_3 = G_B8_4;
			goto IL_00bc;
		}
	}
	{
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_24 = __this->___resolveInfo_14;
		NullCheck(L_24);
		int32_t L_25 = L_24->___Index_0;
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		if (!L_25)
		{
			G_B11_0 = G_B9_0;
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00bc;
		}
	}
	{
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_26 = __this->___resolveInfo_14;
		NullCheck(L_26);
		int32_t* L_27 = (&L_26->___Index_0);
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_27, NULL);
		G_B12_0 = L_28;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		G_B12_4 = G_B10_3;
		goto IL_00c1;
	}

IL_00bc:
	{
		G_B12_0 = _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
		G_B12_4 = G_B11_3;
	}

IL_00c1:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = G_B12_3;
		String_t* L_30;
		L_30 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_30);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_29;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral03F21E5230F19D6F83457DC39F853DC7F8D94648);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral03F21E5230F19D6F83457DC39F853DC7F8D94648);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_33 = __this->___resolveInfo_14;
		G_B13_0 = 8;
		G_B13_1 = L_32;
		G_B13_2 = L_32;
		G_B13_3 = G_B12_4;
		if (!L_33)
		{
			G_B15_0 = 8;
			G_B15_1 = L_32;
			G_B15_2 = L_32;
			G_B15_3 = G_B12_4;
			goto IL_0105;
		}
	}
	{
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_34 = __this->___resolveInfo_14;
		NullCheck(L_34);
		int32_t L_35 = L_34->___Index_0;
		G_B14_0 = G_B13_0;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (!L_35)
		{
			G_B15_0 = G_B13_0;
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_0105;
		}
	}
	{
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_36 = __this->___resolveInfo_14;
		NullCheck(L_36);
		float* L_37 = (&L_36->___CostTime_3);
		String_t* L_38;
		L_38 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_37, NULL);
		String_t* L_39;
		L_39 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_38, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, NULL);
		G_B16_0 = L_39;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		G_B16_3 = G_B14_2;
		G_B16_4 = G_B14_3;
		goto IL_010a;
	}

IL_0105:
	{
		G_B16_0 = _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
		G_B16_3 = G_B15_2;
		G_B16_4 = G_B15_3;
	}

IL_010a:
	{
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = G_B16_3;
		String_t* L_41;
		L_41 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_41);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_40;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteralB6725F71E0C7852F2EAA75EA27E80E02BE9B112A);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralB6725F71E0C7852F2EAA75EA27E80E02BE9B112A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_44 = __this->___resolveInfo_14;
		G_B17_0 = ((int32_t)11);
		G_B17_1 = L_43;
		G_B17_2 = L_43;
		G_B17_3 = G_B16_4;
		if (!L_44)
		{
			G_B19_0 = ((int32_t)11);
			G_B19_1 = L_43;
			G_B19_2 = L_43;
			G_B19_3 = G_B16_4;
			goto IL_0147;
		}
	}
	{
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_45 = __this->___resolveInfo_14;
		NullCheck(L_45);
		int32_t L_46 = L_45->___Index_0;
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		if (!L_46)
		{
			G_B19_0 = G_B17_0;
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_0147;
		}
	}
	{
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_47 = __this->___resolveInfo_14;
		NullCheck(L_47);
		String_t* L_48 = L_47->___TargetName_4;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		G_B20_0 = L_49;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		G_B20_4 = G_B18_3;
		goto IL_014c;
	}

IL_0147:
	{
		G_B20_0 = _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
		G_B20_4 = G_B19_3;
	}

IL_014c:
	{
		NullCheck(G_B20_2);
		ArrayElementTypeCheck (G_B20_2, G_B20_0);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = G_B20_3;
		String_t* L_51;
		L_51 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_51);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_50;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteral1F3301C20BBFD987E2D6AF07AE8C13AAC28DBBEB);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral1F3301C20BBFD987E2D6AF07AE8C13AAC28DBBEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_52;
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_54 = __this->___resolveInfo_14;
		G_B21_0 = ((int32_t)14);
		G_B21_1 = L_53;
		G_B21_2 = L_53;
		G_B21_3 = G_B20_4;
		if (!L_54)
		{
			G_B23_0 = ((int32_t)14);
			G_B23_1 = L_53;
			G_B23_2 = L_53;
			G_B23_3 = G_B20_4;
			goto IL_018f;
		}
	}
	{
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_55 = __this->___resolveInfo_14;
		NullCheck(L_55);
		int32_t L_56 = L_55->___Index_0;
		G_B22_0 = G_B21_0;
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
		G_B22_3 = G_B21_3;
		if (!L_56)
		{
			G_B23_0 = G_B21_0;
			G_B23_1 = G_B21_1;
			G_B23_2 = G_B21_2;
			G_B23_3 = G_B21_3;
			goto IL_018f;
		}
	}
	{
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_57 = __this->___resolveInfo_14;
		NullCheck(L_57);
		int32_t* L_58 = (&L_57->___CloudStatus_6);
		Il2CppFakeBox<int32_t> L_59(CloudRecognizationStatus_t3D141E0E9D20743E92FBEC5F03489E0F1C1FDAFD_il2cpp_TypeInfo_var, L_58);
		String_t* L_60;
		L_60 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_59), NULL);
		G_B24_0 = L_60;
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		G_B24_3 = G_B22_2;
		G_B24_4 = G_B22_3;
		goto IL_0194;
	}

IL_018f:
	{
		G_B24_0 = _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
		G_B24_3 = G_B23_2;
		G_B24_4 = G_B23_3;
	}

IL_0194:
	{
		NullCheck(G_B24_2);
		ArrayElementTypeCheck (G_B24_2, G_B24_0);
		(G_B24_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B24_1), (String_t*)G_B24_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = G_B24_3;
		String_t* L_62;
		L_62 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_62);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_63 = L_61;
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, _stringLiteral72DED642C9E61D4FFFC8480BC99EB1C6439FDE98);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteral72DED642C9E61D4FFFC8480BC99EB1C6439FDE98);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = L_63;
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_65 = __this->___resolveInfo_14;
		G_B25_0 = ((int32_t)17);
		G_B25_1 = L_64;
		G_B25_2 = L_64;
		G_B25_3 = G_B24_4;
		if (!L_65)
		{
			G_B27_0 = ((int32_t)17);
			G_B27_1 = L_64;
			G_B27_2 = L_64;
			G_B27_3 = G_B24_4;
			goto IL_01d7;
		}
	}
	{
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_66 = __this->___resolveInfo_14;
		NullCheck(L_66);
		int32_t L_67 = L_66->___Index_0;
		G_B26_0 = G_B25_0;
		G_B26_1 = G_B25_1;
		G_B26_2 = G_B25_2;
		G_B26_3 = G_B25_3;
		if (!L_67)
		{
			G_B27_0 = G_B25_0;
			G_B27_1 = G_B25_1;
			G_B27_2 = G_B25_2;
			G_B27_3 = G_B25_3;
			goto IL_01d7;
		}
	}
	{
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_68 = __this->___resolveInfo_14;
		NullCheck(L_68);
		Optional_1_t7BEFED5D4A872666AF0ABE1DC71C7671E6012549* L_69 = (&L_68->___UnknownErrorMessage_5);
		String_t* L_70;
		L_70 = Optional_1_ToString_mC3FE8B36A89D4155F61D370F97FF893306594A1D(L_69, Optional_1_ToString_mC3FE8B36A89D4155F61D370F97FF893306594A1D_RuntimeMethod_var);
		G_B28_0 = L_70;
		G_B28_1 = G_B26_0;
		G_B28_2 = G_B26_1;
		G_B28_3 = G_B26_2;
		G_B28_4 = G_B26_3;
		goto IL_01dc;
	}

IL_01d7:
	{
		G_B28_0 = _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
		G_B28_1 = G_B27_0;
		G_B28_2 = G_B27_1;
		G_B28_3 = G_B27_2;
		G_B28_4 = G_B27_3;
	}

IL_01dc:
	{
		NullCheck(G_B28_2);
		ArrayElementTypeCheck (G_B28_2, G_B28_0);
		(G_B28_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B28_1), (String_t*)G_B28_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = G_B28_3;
		String_t* L_72;
		L_72 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_72);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)L_72);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_73 = L_71;
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, _stringLiteral17B61316E6BAD7B6FC9046B0732E623BD42F34A5);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteral17B61316E6BAD7B6FC9046B0732E623BD42F34A5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = L_73;
		int32_t* L_75 = (&__this->___cachedTargetCount_13);
		String_t* L_76;
		L_76 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_75, NULL);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_76);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)L_76);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_77 = L_74;
		String_t* L_78;
		L_78 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_78);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)L_78);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79 = L_77;
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, _stringLiteralE8DA99032740C6A95D006B2D70E38AA930D877EA);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteralE8DA99032740C6A95D006B2D70E38AA930D877EA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = L_79;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_81 = __this->___loadedCloudTargetUids_12;
		NullCheck(L_81);
		int32_t L_82;
		L_82 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_81, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_0 = L_82;
		String_t* L_83;
		L_83 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_83);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)L_83);
		String_t* L_84;
		L_84 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_80, NULL);
		NullCheck(G_B28_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B28_4, L_84);
		// AutoResolve();
		CloudRecognizerSample_AutoResolve_m4CB5C37D5975796C50E3FADF24E1FEF83160657C(__this, NULL);
		// }
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_OnDestroy_mDCD0830B7DE7E810F4DCDD691CA2294F5C11E45E (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// foreach (var obj in targetObjs)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___targetObjs_11;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_0010_1:
			{
				// foreach (var obj in targetObjs)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_2;
				// Destroy(obj);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
			}

IL_0021_1:
			{
				// foreach (var obj in targetObjs)
				bool L_4;
				L_4 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::ClearAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_ClearAll_m2ECD5202D7132A4C620BE4CB6676943B09E29CBB (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA3E0101E3552765151523E12EBD9D52B6981472);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	bool V_5 = false;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_6;
	memset((&V_6), 0, sizeof(V_6));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_7 = NULL;
	{
		// if (Directory.Exists(OfflineCachePath))
		String_t* L_0 = __this->___OfflineCachePath_7;
		bool L_1;
		L_1 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		// var targetFiles = Directory.GetFiles(OfflineCachePath);
		String_t* L_3 = __this->___OfflineCachePath_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = Directory_GetFiles_m4B12F04FB52DA5311463669EBB83321CB0CF284B(L_3, NULL);
		V_1 = L_4;
		// foreach (var file in targetFiles)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_1;
		V_2 = L_5;
		V_3 = 0;
		goto IL_0050;
	}

IL_0024:
	{
		// foreach (var file in targetFiles)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = L_9;
		// if (Path.GetExtension(file) == ".etd")
		String_t* L_10 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = Path_GetExtension_m52A28295599B87FA550D0654E531B56354C540C7(L_10, NULL);
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteralBA3E0101E3552765151523E12EBD9D52B6981472, NULL);
		V_5 = L_12;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_004b;
		}
	}
	{
		// File.Delete(file);
		String_t* L_14 = V_4;
		File_Delete_mB5CB249F5370D49747243BCA9C56CCC48D3E6A08(L_14, NULL);
	}

IL_004b:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0050:
	{
		// foreach (var file in targetFiles)
		int32_t L_16 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_2;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
	}

IL_0057:
	{
		// foreach (var obj in targetObjs)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_18 = __this->___targetObjs_11;
		NullCheck(L_18);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_19;
		L_19 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_18, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_6 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0085:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_6), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007a_1;
			}

IL_0067_1:
			{
				// foreach (var obj in targetObjs)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
				L_20 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_6), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_7 = L_20;
				// Destroy(obj);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_7;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_21, NULL);
			}

IL_007a_1:
			{
				// foreach (var obj in targetObjs)
				bool L_22;
				L_22 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_6), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_0094;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		// targetObjs.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_23 = __this->___targetObjs_11;
		NullCheck(L_23);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_23, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// loadedCloudTargetUids.Clear();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_24 = __this->___loadedCloudTargetUids_12;
		NullCheck(L_24);
		List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_inline(L_24, List_1_Clear_mC6C7AEBB0F980A717A87C0D12377984A464F0934_RuntimeMethod_var);
		// cachedTargetCount = 0;
		__this->___cachedTargetCount_13 = 0;
		// }
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::StartAutoResolve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_StartAutoResolve_mE9436E303D7C47FFF39F320D1C3B42D7D3F2805D (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResolveInfo_t3C347AB58056236121244BCC6345728247271048_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Session != null && resolveInfo == null)
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_0 = __this->___Session_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_2 = __this->___resolveInfo_14;
		G_B3_0 = ((((RuntimeObject*)(ResolveInfo_t3C347AB58056236121244BCC6345728247271048*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// resolveInfo = new ResolveInfo();
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_4 = (ResolveInfo_t3C347AB58056236121244BCC6345728247271048*)il2cpp_codegen_object_new(ResolveInfo_t3C347AB58056236121244BCC6345728247271048_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ResolveInfo__ctor_mAE0F40F2D8B0AA0145C78359A706F6A7547F17E7(L_4, NULL);
		__this->___resolveInfo_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resolveInfo_14), (void*)L_4);
		// resolveOn = true;
		__this->___resolveOn_17 = (bool)1;
		// cloudRecognizer.ResolveTimeout = minResolveTimeout;
		CloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316* L_5 = __this->___cloudRecognizer_9;
		int32_t L_6 = __this->___minResolveTimeout_18;
		NullCheck(L_5);
		L_5->___ResolveTimeout_6 = L_6;
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::StopResolve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_StopResolve_m73DC77790784F1E9C42C6031F29354D2574892C1 (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Session != null)
		ARSession_tE7BD3656886DDF0823637E4219C76DA80A215D35* L_0 = __this->___Session_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// resolveInfo = null;
		__this->___resolveInfo_14 = (ResolveInfo_t3C347AB58056236121244BCC6345728247271048*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resolveInfo_14), (void*)(ResolveInfo_t3C347AB58056236121244BCC6345728247271048*)NULL);
		// resolveOn = false;
		__this->___resolveOn_17 = (bool)0;
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::AutoResolve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_AutoResolve_m4CB5C37D5975796C50E3FADF24E1FEF83160657C (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t9B1F83CF784EEF67EA2B81DD3A12C12D518808C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t044BEC9AE1C2995930179F5D51893A8456A3494A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_U3CAutoResolveU3Eb__0_mFF4A5075AB4B7F202D46678B8C38175A3101B0F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_U3CAutoResolveU3Eb__1_mB6058992522DA3446896F321D6B3D25B9775499B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4* L_0 = (U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass23_0__ctor_m77F0486603A245A41D08EB8DE545CE17F5EEA406(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// var time = Time.time;
		U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4* L_2 = V_0;
		float L_3;
		L_3 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		NullCheck(L_2);
		L_2->___time_1 = L_3;
		// if (!resolveOn || isTracking || resolveInfo.Running || time - resolveInfo.ResolveTime < resolveInterval)
		bool L_4 = __this->___resolveOn_17;
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		bool L_5 = __this->___isTracking_16;
		if (L_5)
		{
			goto IL_0052;
		}
	}
	{
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_6 = __this->___resolveInfo_14;
		NullCheck(L_6);
		bool L_7 = L_6->___Running_1;
		if (L_7)
		{
			goto IL_0052;
		}
	}
	{
		U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4* L_8 = V_0;
		NullCheck(L_8);
		float L_9 = L_8->___time_1;
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_10 = __this->___resolveInfo_14;
		NullCheck(L_10);
		float L_11 = L_10->___ResolveTime_2;
		float L_12 = __this->___resolveInterval_15;
		G_B5_0 = ((((float)((float)il2cpp_codegen_subtract(L_9, L_11))) < ((float)L_12))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 1;
	}

IL_0053:
	{
		V_1 = (bool)G_B5_0;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_005a;
		}
	}
	{
		// return;
		goto IL_008a;
	}

IL_005a:
	{
		// resolveInfo.Running = true;
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_14 = __this->___resolveInfo_14;
		NullCheck(L_14);
		L_14->___Running_1 = (bool)1;
		// cloudRecognizer.Resolve((frame) =>
		// {
		//     resolveInfo.ResolveTime = time;
		// }, (resultO, error) =>
		// {
		//     if (resolveInfo == null)
		//     {
		//         return;
		//     }
		//     resolveInfo.Running = false;
		//     resolveInfo.TargetName = "-";
		// 
		//     if (resultO.OnNone)
		//     {
		//         resolveInfo.CostTime = 0;
		//         resolveInfo.CloudStatus = CloudRecognizationStatus.UnknownError;
		//         resolveInfo.UnknownErrorMessage = error;
		//         return;
		//     }
		//     var result = resultO.Value;
		// 
		//     resolveInfo.Index++;
		//     resolveInfo.CostTime = Time.time - resolveInfo.ResolveTime;
		//     resolveInfo.CloudStatus = result.getStatus();
		//     resolveInfo.UnknownErrorMessage = result.getUnknownErrorMessage();
		// 
		//     resolveInfo.SlowResponseCount = resolveInfo.CloudStatus == CloudRecognizationStatus.UnknownError && resolveInfo.CostTime > cloudRecognizer.ResolveTimeout / 1000f ? resolveInfo.SlowResponseCount + 1 : 0;
		//     resolveInfo.FastResponseCount = resolveInfo.CostTime < minResolveTimeout / 1000f ? resolveInfo.FastResponseCount + 1 : 0;
		//     if (resolveInfo.SlowResponseCount == 3 && cloudRecognizer.ResolveTimeout < maxResolveTimeout)
		//     {
		//         cloudRecognizer.ResolveTimeout = maxResolveTimeout;
		//         resolveInfo.SlowResponseCount = 0;
		//         resolveInfo.FastResponseCount = 0;
		//     }
		//     if (resolveInfo.FastResponseCount == 5 && cloudRecognizer.ResolveTimeout > minResolveTimeout)
		//     {
		//         cloudRecognizer.ResolveTimeout = minResolveTimeout;
		//         resolveInfo.SlowResponseCount = 0;
		//         resolveInfo.FastResponseCount = 0;
		//     }
		// 
		//     var target = result.getTarget();
		//     if (target.OnSome)
		//     {
		//         using (var targetValue = target.Value)
		//         {
		//             resolveInfo.TargetName = targetValue.name();
		// 
		//             if (!loadedCloudTargetUids.Contains(targetValue.uid()))
		//             {
		//                 LoadCloudTarget(targetValue.Clone());
		//             }
		//         }
		//     }
		// });
		CloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316* L_15 = __this->___cloudRecognizer_9;
		U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4* L_16 = V_0;
		Action_1_t9B1F83CF784EEF67EA2B81DD3A12C12D518808C1* L_17 = (Action_1_t9B1F83CF784EEF67EA2B81DD3A12C12D518808C1*)il2cpp_codegen_object_new(Action_1_t9B1F83CF784EEF67EA2B81DD3A12C12D518808C1_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action_1__ctor_m8AB459878EC4913BFA949598990F18AE9BB374DD(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass23_0_U3CAutoResolveU3Eb__0_mFF4A5075AB4B7F202D46678B8C38175A3101B0F3_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4* L_18 = V_0;
		Action_2_t044BEC9AE1C2995930179F5D51893A8456A3494A* L_19 = (Action_2_t044BEC9AE1C2995930179F5D51893A8456A3494A*)il2cpp_codegen_object_new(Action_2_t044BEC9AE1C2995930179F5D51893A8456A3494A_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_2__ctor_m0AB639A3AA8352C449525B25C2CF35F3F3009356(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass23_0_U3CAutoResolveU3Eb__1_mB6058992522DA3446896F321D6B3D25B9775499B_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		CloudRecognizerFrameFilter_Resolve_m7DBDE2696A616BDD19BDAE6F7C98E737A2FDD888(L_15, L_17, L_19, NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::LoadCloudTarget(easyar.ImageTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_LoadCloudTarget_m27469620A379422C01D4318A5BB9A68FB35E7F21 (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_mA7E7AB396A6A9F6F74D39DA1733325F12C1D8784_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CLoadCloudTargetU3Eb__0_m500A3CBDE9F7F09615D9CECC718B80477235EB9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA3E0101E3552765151523E12EBD9D52B6981472);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E* L_0 = (U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass24_0__ctor_mA49D8C3F9779441273675DAB99DF582A0C40C83C(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_1), (void*)__this);
		// var uid = target.uid();
		U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E* L_2 = V_0;
		ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_3 = ___target0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String easyar.Target::uid() */, L_3);
		NullCheck(L_2);
		L_2->___uid_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___uid_0), (void*)L_4);
		// loadedCloudTargetUids.Add(uid);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->___loadedCloudTargetUids_12;
		U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___uid_0;
		NullCheck(L_5);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_5, L_7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// var go = new GameObject(uid);
		U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___uid_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_10, L_9, NULL);
		V_1 = L_10;
		// targetObjs.Add(go);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___targetObjs_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_1;
		NullCheck(L_11);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_11, L_12, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// var targetController = go.AddComponent<ImageTargetController>();
		U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E* L_13 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_1;
		NullCheck(L_14);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_15;
		L_15 = GameObject_AddComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_mA7E7AB396A6A9F6F74D39DA1733325F12C1D8784(L_14, GameObject_AddComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_mA7E7AB396A6A9F6F74D39DA1733325F12C1D8784_RuntimeMethod_var);
		NullCheck(L_13);
		L_13->___targetController_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___targetController_2), (void*)L_15);
		// targetController.SourceType = ImageTargetController.DataSource.Target;
		U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E* L_16 = V_0;
		NullCheck(L_16);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_17 = L_16->___targetController_2;
		NullCheck(L_17);
		L_17->___SourceType_12 = 2;
		// targetController.TargetSource = target;
		U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E* L_18 = V_0;
		NullCheck(L_18);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_19 = L_18->___targetController_2;
		ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_20 = ___target0;
		NullCheck(L_19);
		L_19->___TargetSource_15 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___TargetSource_15), (void*)L_20);
		// LoadTargetIntoTracker(targetController);
		U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E* L_21 = V_0;
		NullCheck(L_21);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_22 = L_21->___targetController_2;
		CloudRecognizerSample_LoadTargetIntoTracker_mE24300AB2595C8C8E46B4A59C93D1CCE4B21EB9B(__this, L_22, NULL);
		// targetController.TargetLoad += (loadedTarget, result) =>
		// {
		//     if (!result)
		//     {
		//         Debug.LogErrorFormat("target {0} load failed", uid);
		//         return;
		//     }
		//     AddCubeOnTarget(targetController);
		// };
		U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E* L_23 = V_0;
		NullCheck(L_23);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_24 = L_23->___targetController_2;
		U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E* L_25 = V_0;
		Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* L_26 = (Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416*)il2cpp_codegen_object_new(Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_2__ctor_m0D18FC0D2E5634CBDC24690398EE59D4F1EB1101(L_26, L_25, (intptr_t)((void*)U3CU3Ec__DisplayClass24_0_U3CLoadCloudTargetU3Eb__0_m500A3CBDE9F7F09615D9CECC718B80477235EB9A_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		ImageTargetController_add_TargetLoad_m91633BAF45092ADF09E6F663EF292B891ACC505C(L_24, L_26, NULL);
		// if (UseOfflineCache && Directory.Exists(OfflineCachePath))
		bool L_27 = __this->___UseOfflineCache_6;
		if (!L_27)
		{
			goto IL_00a3;
		}
	}
	{
		String_t* L_28 = __this->___OfflineCachePath_7;
		bool L_29;
		L_29 = Directory_Exists_m1AC1A8910C9883BD4198ECF585C97F09E23C4702(L_28, NULL);
		G_B3_0 = ((int32_t)(L_29));
		goto IL_00a4;
	}

IL_00a3:
	{
		G_B3_0 = 0;
	}

IL_00a4:
	{
		V_2 = (bool)G_B3_0;
		bool L_30 = V_2;
		if (!L_30)
		{
			goto IL_00df;
		}
	}
	{
		// if (target.save(OfflineCachePath + "/" + target.uid() + ".etd"))
		ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_31 = ___target0;
		String_t* L_32 = __this->___OfflineCachePath_7;
		ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_33 = ___target0;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String easyar.Target::uid() */, L_33);
		String_t* L_35;
		L_35 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_32, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_34, _stringLiteralBA3E0101E3552765151523E12EBD9D52B6981472, NULL);
		NullCheck(L_31);
		bool L_36;
		L_36 = VirtualFuncInvoker1< bool, String_t* >::Invoke(12 /* System.Boolean easyar.ImageTarget::save(System.String) */, L_31, L_35);
		V_3 = L_36;
		bool L_37 = V_3;
		if (!L_37)
		{
			goto IL_00de;
		}
	}
	{
		// cachedTargetCount++;
		int32_t L_38 = __this->___cachedTargetCount_13;
		__this->___cachedTargetCount_13 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00de:
	{
	}

IL_00df:
	{
		// }
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::LoadOfflineTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_LoadOfflineTarget_m916A37DA8298E21FD17FE8D900D3C52A594B53CD (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, String_t* ___file0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_mA7E7AB396A6A9F6F74D39DA1733325F12C1D8784_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_U3CLoadOfflineTargetU3Eb__0_m37F07926B131ADBBEA113BB5FCCD1591DC3A4106_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91159B7615B057DE8E103C46806568181DDDBF69);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1* L_0 = (U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass25_0__ctor_m3D108C637A4EE6CE0371CCCF4613558ADDABAD28(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1* L_1 = V_0;
		String_t* L_2 = ___file0;
		NullCheck(L_1);
		L_1->___file_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___file_0), (void*)L_2);
		U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// var go = new GameObject(Path.GetFileNameWithoutExtension(file) + "-offline");
		U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___file_0;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Path_GetFileNameWithoutExtension_mD24A7CA7C45FF7A265EF7F8D5E19D1F3C014D90F(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_6, _stringLiteral91159B7615B057DE8E103C46806568181DDDBF69, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_8, L_7, NULL);
		V_1 = L_8;
		// targetObjs.Add(go);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___targetObjs_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_1;
		NullCheck(L_9);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_9, L_10, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// var targetController = go.AddComponent<ImageTargetController>();
		U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1* L_11 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_1;
		NullCheck(L_12);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_13;
		L_13 = GameObject_AddComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_mA7E7AB396A6A9F6F74D39DA1733325F12C1D8784(L_12, GameObject_AddComponent_TisImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633_mA7E7AB396A6A9F6F74D39DA1733325F12C1D8784_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->___targetController_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___targetController_2), (void*)L_13);
		// targetController.SourceType = ImageTargetController.DataSource.TargetDataFile;
		U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1* L_14 = V_0;
		NullCheck(L_14);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_15 = L_14->___targetController_2;
		NullCheck(L_15);
		L_15->___SourceType_12 = 1;
		// targetController.TargetDataFileSource.PathType = PathType.Absolute;
		U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1* L_16 = V_0;
		NullCheck(L_16);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_17 = L_16->___targetController_2;
		NullCheck(L_17);
		TargetDataFileSourceData_t8A1E6462041EA1563F8FAD0E8DD979416E605C4B* L_18 = L_17->___TargetDataFileSource_14;
		NullCheck(L_18);
		L_18->___PathType_0 = 0;
		// targetController.TargetDataFileSource.Path = file;
		U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1* L_19 = V_0;
		NullCheck(L_19);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_20 = L_19->___targetController_2;
		NullCheck(L_20);
		TargetDataFileSourceData_t8A1E6462041EA1563F8FAD0E8DD979416E605C4B* L_21 = L_20->___TargetDataFileSource_14;
		U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1* L_22 = V_0;
		NullCheck(L_22);
		String_t* L_23 = L_22->___file_0;
		NullCheck(L_21);
		L_21->___Path_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___Path_1), (void*)L_23);
		// LoadTargetIntoTracker(targetController);
		U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1* L_24 = V_0;
		NullCheck(L_24);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_25 = L_24->___targetController_2;
		CloudRecognizerSample_LoadTargetIntoTracker_mE24300AB2595C8C8E46B4A59C93D1CCE4B21EB9B(__this, L_25, NULL);
		// targetController.TargetLoad += (loadedTarget, result) =>
		// {
		//     if (!result)
		//     {
		//         Debug.LogErrorFormat("target data {0} load failed", file);
		//         return;
		//     }
		//     loadedCloudTargetUids.Add(loadedTarget.uid());
		//     cachedTargetCount++;
		//     AddCubeOnTarget(targetController);
		// };
		U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1* L_26 = V_0;
		NullCheck(L_26);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_27 = L_26->___targetController_2;
		U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1* L_28 = V_0;
		Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416* L_29 = (Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416*)il2cpp_codegen_object_new(Action_2_tA3D0492A27635779AD777E7E1235072C3C72C416_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Action_2__ctor_m0D18FC0D2E5634CBDC24690398EE59D4F1EB1101(L_29, L_28, (intptr_t)((void*)U3CU3Ec__DisplayClass25_0_U3CLoadOfflineTargetU3Eb__0_m37F07926B131ADBBEA113BB5FCCD1591DC3A4106_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		ImageTargetController_add_TargetLoad_m91633BAF45092ADF09E6F663EF292B891ACC505C(L_27, L_29, NULL);
		// }
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::LoadTargetIntoTracker(easyar.ImageTargetController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_LoadTargetIntoTracker_mE24300AB2595C8C8E46B4A59C93D1CCE4B21EB9B (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* ___controller0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudRecognizerSample_U3CLoadTargetIntoTrackerU3Eb__26_0_m8110C840FCA5A7BAC360B5A3FB7D4EE243405FEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CloudRecognizerSample_U3CLoadTargetIntoTrackerU3Eb__26_1_m6423C17B048B1E8AF42E59A1860F481BDB2EEDFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller.Tracker = tracker;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_0 = ___controller0;
		ImageTrackerFrameFilter_t1C3BF48AFCFEA2D5BE49CAE9196847DBB5177A9E* L_1 = __this->___tracker_10;
		NullCheck(L_0);
		ImageTargetController_set_Tracker_mA9CCBB114C5479A0679FEF22A74B67DB9D1AD26B(L_0, L_1, NULL);
		// controller.TargetFound += () =>
		// {
		//     isTracking = true;
		// };
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_2 = ___controller0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)CloudRecognizerSample_U3CLoadTargetIntoTrackerU3Eb__26_0_m8110C840FCA5A7BAC360B5A3FB7D4EE243405FEB_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		TargetController_add_TargetFound_mD4B9C4D3662E282B491F617E22AA14D3775AB57B(L_2, L_3, NULL);
		// controller.TargetLost += () =>
		// {
		//     isTracking = false;
		// };
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_4 = ___controller0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)CloudRecognizerSample_U3CLoadTargetIntoTrackerU3Eb__26_1_m6423C17B048B1E8AF42E59A1860F481BDB2EEDFB_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		TargetController_add_TargetLost_mB6790A7172B5C303E3143155672D27F4BF6E4ECC(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::AddCubeOnTarget(easyar.ImageTargetController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_AddCubeOnTarget_mD79FBD75BE5BB129BE2D05405D61255518340D60 (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* ___controller0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E0F60541443C221022F5D8985905A6FEA2C408B);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// var cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507(3, NULL);
		V_0 = L_0;
		// cube.GetComponent<MeshRenderer>().material = Resources.Load("Materials/EasyAR") as Material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2;
		L_2 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_1, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral1E0F60541443C221022F5D8985905A6FEA2C408B, NULL);
		NullCheck(L_2);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_2, ((Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)IsInstClass((RuntimeObject*)L_3, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var)), NULL);
		// cube.transform.parent = controller.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_6 = ___controller0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_5);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_5, L_7, NULL);
		// cube.transform.localPosition = new Vector3(0, 0, -0.1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (0.0f), (-0.100000001f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_9, L_10, NULL);
		// cube.transform.eulerAngles = new Vector3(0, 0, 180);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (0.0f), (0.0f), (180.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_12, L_13, NULL);
		// cube.transform.localScale = new Vector3(0.5f, 0.5f / controller.Target.aspectRatio(), 0.2f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_16 = ___controller0;
		NullCheck(L_16);
		ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_17;
		L_17 = ImageTargetController_get_Target_m51F32E8D1467745044F011BE80719C022258BC95_inline(L_16, NULL);
		NullCheck(L_17);
		float L_18;
		L_18 = VirtualFuncInvoker0< float >::Invoke(14 /* System.Single easyar.ImageTarget::aspectRatio() */, L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (0.5f), ((float)((0.5f)/L_18)), (0.200000003f), /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_15, L_19, NULL);
		// }
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample__ctor_mC74E77A4200524A423A78CF87228F490A3E922B8 (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool UseOfflineCache = true;
		__this->___UseOfflineCache_6 = (bool)1;
		// private List<GameObject> targetObjs = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___targetObjs_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetObjs_11), (void*)L_0);
		// private List<string> loadedCloudTargetUids = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___loadedCloudTargetUids_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___loadedCloudTargetUids_12), (void*)L_1);
		// private float resolveInterval = 1f;
		__this->___resolveInterval_15 = (1.0f);
		// private int maxResolveTimeout = 20000;
		__this->___maxResolveTimeout_19 = ((int32_t)20000);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::<LoadTargetIntoTracker>b__26_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_U3CLoadTargetIntoTrackerU3Eb__26_0_m8110C840FCA5A7BAC360B5A3FB7D4EE243405FEB (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, const RuntimeMethod* method) 
{
	{
		// isTracking = true;
		__this->___isTracking_16 = (bool)1;
		// };
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample::<LoadTargetIntoTracker>b__26_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CloudRecognizerSample_U3CLoadTargetIntoTrackerU3Eb__26_1_m6423C17B048B1E8AF42E59A1860F481BDB2EEDFB (CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* __this, const RuntimeMethod* method) 
{
	{
		// isTracking = false;
		__this->___isTracking_16 = (bool)0;
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
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample/ResolveInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResolveInfo__ctor_mAE0F40F2D8B0AA0145C78359A706F6A7547F17E7 (ResolveInfo_t3C347AB58056236121244BCC6345728247271048* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Index = 0;
		__this->___Index_0 = 0;
		// public bool Running = false;
		__this->___Running_1 = (bool)0;
		// public float ResolveTime = 0;
		__this->___ResolveTime_2 = (0.0f);
		// public float CostTime = 0;
		__this->___CostTime_3 = (0.0f);
		// public string TargetName = "-";
		__this->___TargetName_4 = _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TargetName_4), (void*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		// public CloudRecognizationStatus CloudStatus = CloudRecognizationStatus.UnknownError;
		__this->___CloudStatus_6 = 0;
		// public int SlowResponseCount = 0;
		__this->___SlowResponseCount_7 = 0;
		// public int FastResponseCount = 0;
		__this->___FastResponseCount_8 = 0;
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
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mACB77CF220CF6A81A987CC1B902DD08666879402 (U3CU3Ec__DisplayClass16_0_t218963FB56B8134B9A90E7381C05458A909B9B6C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass16_0::<Awake>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0_U3CAwakeU3Eb__0_m39C1F23CBD089AD76B448BDEE26A1609A1CC857C (U3CU3Ec__DisplayClass16_0_t218963FB56B8134B9A90E7381C05458A909B9B6C* __this, const RuntimeMethod* method) 
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
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m77F0486603A245A41D08EB8DE545CE17F5EEA406 (U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass23_0::<AutoResolve>b__0(easyar.InputFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0_U3CAutoResolveU3Eb__0_mFF4A5075AB4B7F202D46678B8C38175A3101B0F3 (U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4* __this, InputFrame_tDB02ECBCF7ED51DE6F781A607D63BE7812E0BDC1* ___frame0, const RuntimeMethod* method) 
{
	{
		// resolveInfo.ResolveTime = time;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_1 = L_0->___resolveInfo_14;
		float L_2 = __this->___time_1;
		NullCheck(L_1);
		L_1->___ResolveTime_2 = L_2;
		// }, (resultO, error) =>
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass23_0::<AutoResolve>b__1(easyar.Optional`1<easyar.CloudRecognizationResult>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0_U3CAutoResolveU3Eb__1_mB6058992522DA3446896F321D6B3D25B9775499B (U3CU3Ec__DisplayClass23_0_tD94D0483EECC5D8AADA7EC200B43202D9A9378D4* __this, Optional_1_t253307ED07B92F4301EEAE152CDBA6AA8AFBD530 ___resultO0, String_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_OnNone_m195C1ABA29201A6E5F017DD141BA7F69135C8C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_OnSome_m6D6DC92913DB3CFD8FDC06D73452516217946020_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_Value_m1B40EB1F1CB42848B8DECF2B684225B3CACF2FB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_Value_m6FE987AD04467FD6677A5C639692E5996045BF3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_op_Implicit_m5AC3179A9D1AD910F4B446CB3C256B0BA3514FA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	CloudRecognizationResult_tDF8C697ACD722E32905AD67AAD1EE23B2FA3831F* V_0 = NULL;
	Optional_1_tF42B2C54CA65016EF2B9D8901BA94188C401B6FE V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* V_7 = NULL;
	bool V_8 = false;
	ResolveInfo_t3C347AB58056236121244BCC6345728247271048* G_B6_0 = NULL;
	ResolveInfo_t3C347AB58056236121244BCC6345728247271048* G_B5_0 = NULL;
	ResolveInfo_t3C347AB58056236121244BCC6345728247271048* G_B7_0 = NULL;
	int32_t G_B8_0 = 0;
	ResolveInfo_t3C347AB58056236121244BCC6345728247271048* G_B8_1 = NULL;
	ResolveInfo_t3C347AB58056236121244BCC6345728247271048* G_B10_0 = NULL;
	ResolveInfo_t3C347AB58056236121244BCC6345728247271048* G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	ResolveInfo_t3C347AB58056236121244BCC6345728247271048* G_B11_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B19_0 = 0;
	{
		// if (resolveInfo == null)
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_1 = L_0->___resolveInfo_14;
		V_2 = (bool)((((RuntimeObject*)(ResolveInfo_t3C347AB58056236121244BCC6345728247271048*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_0313;
	}

IL_0019:
	{
		// resolveInfo.Running = false;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_3 = __this->___U3CU3E4__this_0;
		NullCheck(L_3);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_4 = L_3->___resolveInfo_14;
		NullCheck(L_4);
		L_4->___Running_1 = (bool)0;
		// resolveInfo.TargetName = "-";
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_5 = __this->___U3CU3E4__this_0;
		NullCheck(L_5);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_6 = L_5->___resolveInfo_14;
		NullCheck(L_6);
		L_6->___TargetName_4 = _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___TargetName_4), (void*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		// if (resultO.OnNone)
		bool L_7;
		L_7 = Optional_1_get_OnNone_m195C1ABA29201A6E5F017DD141BA7F69135C8C49((&___resultO0), Optional_1_get_OnNone_m195C1ABA29201A6E5F017DD141BA7F69135C8C49_RuntimeMethod_var);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_008c;
		}
	}
	{
		// resolveInfo.CostTime = 0;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_9 = __this->___U3CU3E4__this_0;
		NullCheck(L_9);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_10 = L_9->___resolveInfo_14;
		NullCheck(L_10);
		L_10->___CostTime_3 = (0.0f);
		// resolveInfo.CloudStatus = CloudRecognizationStatus.UnknownError;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_11 = __this->___U3CU3E4__this_0;
		NullCheck(L_11);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_12 = L_11->___resolveInfo_14;
		NullCheck(L_12);
		L_12->___CloudStatus_6 = 0;
		// resolveInfo.UnknownErrorMessage = error;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_13 = __this->___U3CU3E4__this_0;
		NullCheck(L_13);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_14 = L_13->___resolveInfo_14;
		String_t* L_15 = ___error1;
		Optional_1_t7BEFED5D4A872666AF0ABE1DC71C7671E6012549 L_16;
		L_16 = Optional_1_op_Implicit_m5AC3179A9D1AD910F4B446CB3C256B0BA3514FA7(L_15, Optional_1_op_Implicit_m5AC3179A9D1AD910F4B446CB3C256B0BA3514FA7_RuntimeMethod_var);
		NullCheck(L_14);
		L_14->___UnknownErrorMessage_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_14->___UnknownErrorMessage_5))->___Some_2), (void*)NULL);
		// return;
		goto IL_0313;
	}

IL_008c:
	{
		// var result = resultO.Value;
		CloudRecognizationResult_tDF8C697ACD722E32905AD67AAD1EE23B2FA3831F* L_17;
		L_17 = Optional_1_get_Value_m6FE987AD04467FD6677A5C639692E5996045BF3A((&___resultO0), Optional_1_get_Value_m6FE987AD04467FD6677A5C639692E5996045BF3A_RuntimeMethod_var);
		V_0 = L_17;
		// resolveInfo.Index++;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_18 = __this->___U3CU3E4__this_0;
		NullCheck(L_18);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_19 = L_18->___resolveInfo_14;
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_20 = L_19;
		NullCheck(L_20);
		int32_t L_21 = L_20->___Index_0;
		NullCheck(L_20);
		L_20->___Index_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		// resolveInfo.CostTime = Time.time - resolveInfo.ResolveTime;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_22 = __this->___U3CU3E4__this_0;
		NullCheck(L_22);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_23 = L_22->___resolveInfo_14;
		float L_24;
		L_24 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_25 = __this->___U3CU3E4__this_0;
		NullCheck(L_25);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_26 = L_25->___resolveInfo_14;
		NullCheck(L_26);
		float L_27 = L_26->___ResolveTime_2;
		NullCheck(L_23);
		L_23->___CostTime_3 = ((float)il2cpp_codegen_subtract(L_24, L_27));
		// resolveInfo.CloudStatus = result.getStatus();
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_28 = __this->___U3CU3E4__this_0;
		NullCheck(L_28);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_29 = L_28->___resolveInfo_14;
		CloudRecognizationResult_tDF8C697ACD722E32905AD67AAD1EE23B2FA3831F* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* easyar.CloudRecognizationStatus easyar.CloudRecognizationResult::getStatus() */, L_30);
		NullCheck(L_29);
		L_29->___CloudStatus_6 = L_31;
		// resolveInfo.UnknownErrorMessage = result.getUnknownErrorMessage();
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_32 = __this->___U3CU3E4__this_0;
		NullCheck(L_32);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_33 = L_32->___resolveInfo_14;
		CloudRecognizationResult_tDF8C697ACD722E32905AD67AAD1EE23B2FA3831F* L_34 = V_0;
		NullCheck(L_34);
		Optional_1_t7BEFED5D4A872666AF0ABE1DC71C7671E6012549 L_35;
		L_35 = VirtualFuncInvoker0< Optional_1_t7BEFED5D4A872666AF0ABE1DC71C7671E6012549 >::Invoke(8 /* easyar.Optional`1<System.String> easyar.CloudRecognizationResult::getUnknownErrorMessage() */, L_34);
		NullCheck(L_33);
		L_33->___UnknownErrorMessage_5 = L_35;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_33->___UnknownErrorMessage_5))->___Some_2), (void*)NULL);
		// resolveInfo.SlowResponseCount = resolveInfo.CloudStatus == CloudRecognizationStatus.UnknownError && resolveInfo.CostTime > cloudRecognizer.ResolveTimeout / 1000f ? resolveInfo.SlowResponseCount + 1 : 0;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_36 = __this->___U3CU3E4__this_0;
		NullCheck(L_36);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_37 = L_36->___resolveInfo_14;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_38 = __this->___U3CU3E4__this_0;
		NullCheck(L_38);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_39 = L_38->___resolveInfo_14;
		NullCheck(L_39);
		int32_t L_40 = L_39->___CloudStatus_6;
		G_B5_0 = L_37;
		if (L_40)
		{
			G_B6_0 = L_37;
			goto IL_0144;
		}
	}
	{
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_41 = __this->___U3CU3E4__this_0;
		NullCheck(L_41);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_42 = L_41->___resolveInfo_14;
		NullCheck(L_42);
		float L_43 = L_42->___CostTime_3;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_44 = __this->___U3CU3E4__this_0;
		NullCheck(L_44);
		CloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316* L_45 = L_44->___cloudRecognizer_9;
		NullCheck(L_45);
		int32_t L_46 = L_45->___ResolveTimeout_6;
		G_B6_0 = G_B5_0;
		if ((((float)L_43) > ((float)((float)(((float)L_46)/(1000.0f))))))
		{
			G_B7_0 = G_B5_0;
			goto IL_0147;
		}
	}

IL_0144:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_0;
		goto IL_0159;
	}

IL_0147:
	{
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_47 = __this->___U3CU3E4__this_0;
		NullCheck(L_47);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_48 = L_47->___resolveInfo_14;
		NullCheck(L_48);
		int32_t L_49 = L_48->___SlowResponseCount_7;
		G_B8_0 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		G_B8_1 = G_B7_0;
	}

IL_0159:
	{
		NullCheck(G_B8_1);
		G_B8_1->___SlowResponseCount_7 = G_B8_0;
		// resolveInfo.FastResponseCount = resolveInfo.CostTime < minResolveTimeout / 1000f ? resolveInfo.FastResponseCount + 1 : 0;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_50 = __this->___U3CU3E4__this_0;
		NullCheck(L_50);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_51 = L_50->___resolveInfo_14;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_52 = __this->___U3CU3E4__this_0;
		NullCheck(L_52);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_53 = L_52->___resolveInfo_14;
		NullCheck(L_53);
		float L_54 = L_53->___CostTime_3;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_55 = __this->___U3CU3E4__this_0;
		NullCheck(L_55);
		int32_t L_56 = L_55->___minResolveTimeout_18;
		G_B9_0 = L_51;
		if ((((float)L_54) < ((float)((float)(((float)L_56)/(1000.0f))))))
		{
			G_B10_0 = L_51;
			goto IL_0190;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		goto IL_01a2;
	}

IL_0190:
	{
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_57 = __this->___U3CU3E4__this_0;
		NullCheck(L_57);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_58 = L_57->___resolveInfo_14;
		NullCheck(L_58);
		int32_t L_59 = L_58->___FastResponseCount_8;
		G_B11_0 = ((int32_t)il2cpp_codegen_add(L_59, 1));
		G_B11_1 = G_B10_0;
	}

IL_01a2:
	{
		NullCheck(G_B11_1);
		G_B11_1->___FastResponseCount_8 = G_B11_0;
		// if (resolveInfo.SlowResponseCount == 3 && cloudRecognizer.ResolveTimeout < maxResolveTimeout)
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_60 = __this->___U3CU3E4__this_0;
		NullCheck(L_60);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_61 = L_60->___resolveInfo_14;
		NullCheck(L_61);
		int32_t L_62 = L_61->___SlowResponseCount_7;
		if ((!(((uint32_t)L_62) == ((uint32_t)3))))
		{
			goto IL_01d9;
		}
	}
	{
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_63 = __this->___U3CU3E4__this_0;
		NullCheck(L_63);
		CloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316* L_64 = L_63->___cloudRecognizer_9;
		NullCheck(L_64);
		int32_t L_65 = L_64->___ResolveTimeout_6;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_66 = __this->___U3CU3E4__this_0;
		NullCheck(L_66);
		int32_t L_67 = L_66->___maxResolveTimeout_19;
		G_B14_0 = ((((int32_t)L_65) < ((int32_t)L_67))? 1 : 0);
		goto IL_01da;
	}

IL_01d9:
	{
		G_B14_0 = 0;
	}

IL_01da:
	{
		V_4 = (bool)G_B14_0;
		bool L_68 = V_4;
		if (!L_68)
		{
			goto IL_021f;
		}
	}
	{
		// cloudRecognizer.ResolveTimeout = maxResolveTimeout;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_69 = __this->___U3CU3E4__this_0;
		NullCheck(L_69);
		CloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316* L_70 = L_69->___cloudRecognizer_9;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_71 = __this->___U3CU3E4__this_0;
		NullCheck(L_71);
		int32_t L_72 = L_71->___maxResolveTimeout_19;
		NullCheck(L_70);
		L_70->___ResolveTimeout_6 = L_72;
		// resolveInfo.SlowResponseCount = 0;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_73 = __this->___U3CU3E4__this_0;
		NullCheck(L_73);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_74 = L_73->___resolveInfo_14;
		NullCheck(L_74);
		L_74->___SlowResponseCount_7 = 0;
		// resolveInfo.FastResponseCount = 0;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_75 = __this->___U3CU3E4__this_0;
		NullCheck(L_75);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_76 = L_75->___resolveInfo_14;
		NullCheck(L_76);
		L_76->___FastResponseCount_8 = 0;
	}

IL_021f:
	{
		// if (resolveInfo.FastResponseCount == 5 && cloudRecognizer.ResolveTimeout > minResolveTimeout)
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_77 = __this->___U3CU3E4__this_0;
		NullCheck(L_77);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_78 = L_77->___resolveInfo_14;
		NullCheck(L_78);
		int32_t L_79 = L_78->___FastResponseCount_8;
		if ((!(((uint32_t)L_79) == ((uint32_t)5))))
		{
			goto IL_0251;
		}
	}
	{
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_80 = __this->___U3CU3E4__this_0;
		NullCheck(L_80);
		CloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316* L_81 = L_80->___cloudRecognizer_9;
		NullCheck(L_81);
		int32_t L_82 = L_81->___ResolveTimeout_6;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_83 = __this->___U3CU3E4__this_0;
		NullCheck(L_83);
		int32_t L_84 = L_83->___minResolveTimeout_18;
		G_B19_0 = ((((int32_t)L_82) > ((int32_t)L_84))? 1 : 0);
		goto IL_0252;
	}

IL_0251:
	{
		G_B19_0 = 0;
	}

IL_0252:
	{
		V_5 = (bool)G_B19_0;
		bool L_85 = V_5;
		if (!L_85)
		{
			goto IL_0297;
		}
	}
	{
		// cloudRecognizer.ResolveTimeout = minResolveTimeout;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_86 = __this->___U3CU3E4__this_0;
		NullCheck(L_86);
		CloudRecognizerFrameFilter_t2038454703274381A6400CAEC747F87A853B8316* L_87 = L_86->___cloudRecognizer_9;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_88 = __this->___U3CU3E4__this_0;
		NullCheck(L_88);
		int32_t L_89 = L_88->___minResolveTimeout_18;
		NullCheck(L_87);
		L_87->___ResolveTimeout_6 = L_89;
		// resolveInfo.SlowResponseCount = 0;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_90 = __this->___U3CU3E4__this_0;
		NullCheck(L_90);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_91 = L_90->___resolveInfo_14;
		NullCheck(L_91);
		L_91->___SlowResponseCount_7 = 0;
		// resolveInfo.FastResponseCount = 0;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_92 = __this->___U3CU3E4__this_0;
		NullCheck(L_92);
		ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_93 = L_92->___resolveInfo_14;
		NullCheck(L_93);
		L_93->___FastResponseCount_8 = 0;
	}

IL_0297:
	{
		// var target = result.getTarget();
		CloudRecognizationResult_tDF8C697ACD722E32905AD67AAD1EE23B2FA3831F* L_94 = V_0;
		NullCheck(L_94);
		Optional_1_tF42B2C54CA65016EF2B9D8901BA94188C401B6FE L_95;
		L_95 = VirtualFuncInvoker0< Optional_1_tF42B2C54CA65016EF2B9D8901BA94188C401B6FE >::Invoke(7 /* easyar.Optional`1<easyar.ImageTarget> easyar.CloudRecognizationResult::getTarget() */, L_94);
		V_1 = L_95;
		// if (target.OnSome)
		bool L_96;
		L_96 = Optional_1_get_OnSome_m6D6DC92913DB3CFD8FDC06D73452516217946020((&V_1), Optional_1_get_OnSome_m6D6DC92913DB3CFD8FDC06D73452516217946020_RuntimeMethod_var);
		V_6 = L_96;
		bool L_97 = V_6;
		if (!L_97)
		{
			goto IL_0313;
		}
	}
	{
		// using (var targetValue = target.Value)
		ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_98;
		L_98 = Optional_1_get_Value_m1B40EB1F1CB42848B8DECF2B684225B3CACF2FB1((&V_1), Optional_1_get_Value_m1B40EB1F1CB42848B8DECF2B684225B3CACF2FB1_RuntimeMethod_var);
		V_7 = L_98;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0305:
			{// begin finally (depth: 1)
				{
					ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_99 = V_7;
					if (!L_99)
					{
						goto IL_0311;
					}
				}
				{
					ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_100 = V_7;
					NullCheck(L_100);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_100);
				}

IL_0311:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// resolveInfo.TargetName = targetValue.name();
				CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_101 = __this->___U3CU3E4__this_0;
				NullCheck(L_101);
				ResolveInfo_t3C347AB58056236121244BCC6345728247271048* L_102 = L_101->___resolveInfo_14;
				ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_103 = V_7;
				NullCheck(L_103);
				String_t* L_104;
				L_104 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String easyar.Target::name() */, L_103);
				NullCheck(L_102);
				L_102->___TargetName_4 = L_104;
				Il2CppCodeGenWriteBarrier((void**)(&L_102->___TargetName_4), (void*)L_104);
				// if (!loadedCloudTargetUids.Contains(targetValue.uid()))
				CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_105 = __this->___U3CU3E4__this_0;
				NullCheck(L_105);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_106 = L_105->___loadedCloudTargetUids_12;
				ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_107 = V_7;
				NullCheck(L_107);
				String_t* L_108;
				L_108 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String easyar.Target::uid() */, L_107);
				NullCheck(L_106);
				bool L_109;
				L_109 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_106, L_108, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
				V_8 = (bool)((((int32_t)L_109) == ((int32_t)0))? 1 : 0);
				bool L_110 = V_8;
				if (!L_110)
				{
					goto IL_0302_1;
				}
			}
			{
				// LoadCloudTarget(targetValue.Clone());
				CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_111 = __this->___U3CU3E4__this_0;
				ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_112 = V_7;
				NullCheck(L_112);
				ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_113;
				L_113 = ImageTarget_Clone_mB80FB41B187C20727843FC5ACB430E7385CBC83C(L_112, NULL);
				NullCheck(L_111);
				CloudRecognizerSample_LoadCloudTarget_m27469620A379422C01D4318A5BB9A68FB35E7F21(L_111, L_113, NULL);
			}

IL_0302_1:
			{
				goto IL_0312;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0312:
	{
	}

IL_0313:
	{
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
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_mA49D8C3F9779441273675DAB99DF582A0C40C83C (U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass24_0::<LoadCloudTarget>b__0(easyar.Target,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0_U3CLoadCloudTargetU3Eb__0_m500A3CBDE9F7F09615D9CECC718B80477235EB9A (U3CU3Ec__DisplayClass24_0_t80894EA665564D064B76312FC197DDB05297E75E* __this, Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* ___loadedTarget0, bool ___result1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1428E74E9B90DABCAD124085854D881307C77C77);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!result)
		bool L_0 = ___result1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.LogErrorFormat("target {0} load failed", uid);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = __this->___uid_0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteral1428E74E9B90DABCAD124085854D881307C77C77, L_3, NULL);
		// return;
		goto IL_0038;
	}

IL_0026:
	{
		// AddCubeOnTarget(targetController);
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_5 = __this->___U3CU3E4__this_1;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_6 = __this->___targetController_2;
		NullCheck(L_5);
		CloudRecognizerSample_AddCubeOnTarget_mD79FBD75BE5BB129BE2D05405D61255518340D60(L_5, L_6, NULL);
	}

IL_0038:
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
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m3D108C637A4EE6CE0371CCCF4613558ADDABAD28 (U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ImageTracking_CloudRecognition.CloudRecognizerSample/<>c__DisplayClass25_0::<LoadOfflineTarget>b__0(easyar.Target,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0_U3CLoadOfflineTargetU3Eb__0_m37F07926B131ADBBEA113BB5FCCD1591DC3A4106 (U3CU3Ec__DisplayClass25_0_t951168C6862D6A5C15F7C0D08C7D3520037F60A1* __this, Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* ___loadedTarget0, bool ___result1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A0F2952661703DA9C6A48F286E3FCE5DAB049A7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!result)
		bool L_0 = ___result1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.LogErrorFormat("target data {0} load failed", file);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = __this->___file_0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteral9A0F2952661703DA9C6A48F286E3FCE5DAB049A7, L_3, NULL);
		// return;
		goto IL_0067;
	}

IL_0026:
	{
		// loadedCloudTargetUids.Add(loadedTarget.uid());
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_5 = __this->___U3CU3E4__this_1;
		NullCheck(L_5);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = L_5->___loadedCloudTargetUids_12;
		Target_tA508D592FB808ECACF85DAE26AF44B5586D6C836* L_7 = ___loadedTarget0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String easyar.Target::uid() */, L_7);
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, L_8, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// cachedTargetCount++;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_9 = __this->___U3CU3E4__this_1;
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_10 = __this->___U3CU3E4__this_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->___cachedTargetCount_13;
		NullCheck(L_9);
		L_9->___cachedTargetCount_13 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// AddCubeOnTarget(targetController);
		CloudRecognizerSample_t7031AB7DBBC7C8E99671B380564B1EA49AB2A1A8* L_12 = __this->___U3CU3E4__this_1;
		ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* L_13 = __this->___targetController_2;
		NullCheck(L_12);
		CloudRecognizerSample_AddCubeOnTarget_mD79FBD75BE5BB129BE2D05405D61255518340D60(L_12, L_13, NULL);
	}

IL_0067:
	{
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* ImageTargetController_get_Target_m51F32E8D1467745044F011BE80719C022258BC95_inline (ImageTargetController_t84FED4EB42B01319DE27986E10F1941E88ACA633* __this, const RuntimeMethod* method) 
{
	{
		// public ImageTarget Target { get; private set; }
		ImageTarget_t2EA76B35550391ED19105CB22E7EC95723D478FB* L_0 = __this->___U3CTargetU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
