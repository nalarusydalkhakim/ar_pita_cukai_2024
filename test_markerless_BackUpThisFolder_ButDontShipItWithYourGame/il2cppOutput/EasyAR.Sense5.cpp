#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<System.IntPtr,easyar.arengineinterop.RefBase>>
struct Dictionary_2_t612B1CFC7E0B2241987FCAA24CCB8073D1CB5BF1;
// System.Func`2<easyar.Optional`1<System.Object>,easyar.arengineinterop.Detail/OptionalOfOutputFrame>
struct Func_2_t424FA75CE2183D346E41FBDF16034BA169D0EDFA;
// System.Func`2<easyar.Optional`1<easyar.arengineinterop.OutputFrame>,easyar.arengineinterop.Detail/OptionalOfOutputFrame>
struct Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E;
// System.Func`2<System.IntPtr,System.IntPtr>
struct Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713;
// System.Func`2<easyar.arengineinterop.Detail/OptionalOfBuffer,easyar.Optional`1<easyar.arengineinterop.Buffer>>
struct Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886;
// System.Func`2<easyar.arengineinterop.Detail/OptionalOfBuffer,easyar.Optional`1<System.Object>>
struct Func_2_t4ED5CC54C5C203D257A0AA9977FE809C56D3E6B4;
// System.Func`2<easyar.arengineinterop.Detail/OptionalOfOutputFrame,easyar.Optional`1<System.Object>>
struct Func_2_t4B16C52513FD08053E43BF07A89234182ADB6C73;
// System.Func`2<easyar.arengineinterop.Detail/OptionalOfOutputFrame,easyar.Optional`1<easyar.arengineinterop.OutputFrame>>
struct Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674;
// System.Collections.Generic.List`1<easyar.Optional`1<easyar.arengineinterop.FrameFilterResult>>
struct List_1_tBC7A0DB9E4D93BF4C255027EC5B575A9D4BBD860;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987;
// easyar.Optional`1<easyar.arengineinterop.FrameFilterResult>[]
struct Optional_1U5BU5D_tB9C08F60409D73773794C08C2D7B40D9EADE8CCC;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// easyar.arengineinterop.Buffer
struct Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348;
// easyar.arengineinterop.BufferDictionary
struct BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0;
// easyar.arengineinterop.CallbackScheduler
struct CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C;
// easyar.arengineinterop.CameraParameters
struct CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9;
// easyar.arengineinterop.DelayedCallbackScheduler
struct DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// easyar.arengineinterop.Engine
struct Engine_t4A2F95BC44223C659EB8B58D420971E0B1F8F1E9;
// easyar.arengineinterop.FeedbackFrame
struct FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC;
// easyar.arengineinterop.FrameFilterResult
struct FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// easyar.arengineinterop.Image
struct Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C;
// easyar.arengineinterop.ImmediateCallbackScheduler
struct ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4;
// easyar.arengineinterop.InputFrame
struct InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// easyar.arengineinterop.OutputFrame
struct OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A;
// easyar.arengineinterop.RefBase
struct RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// easyar.arengineinterop.Buffer/<>c
struct U3CU3Ec_tEB1C1EDFF33DE1775F72CF1102466A69FBB8AA2F;
// easyar.arengineinterop.Buffer/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tDFEA58FCAC316F768A213DA747C5E3CDB1303EB8;
// easyar.arengineinterop.Buffer/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tE7D0B55E5DF5EA36AA96ED602401B6710E808AC4;
// easyar.arengineinterop.BufferDictionary/<>c
struct U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A;
// easyar.arengineinterop.Detail/AutoRelease
struct AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8;
// easyar.arengineinterop.FeedbackFrame/<>c
struct U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39;
// easyar.arengineinterop.RefBase/Retainer
struct Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEB1C1EDFF33DE1775F72CF1102466A69FBB8AA2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2E43768452D53B5508E316A11612D1DDC9C66D07;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_Object_from_c_TisBuffer_t23A7F32D34236FACC5665FD1285442A75EE83348_m9DD02EB9942F97081BAE78A4C22B1B19FEBF992A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_Object_from_c_TisCameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9_mF0B33CFCF56FF1A9AB0BAE0B87FAD14365858D5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_Object_from_c_TisImage_t16A156B4D3660113F83BFF9B560C217BDA00F40C_m9548E89A5AFF4CB30E1F673B653773E9590F5C6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_Object_from_c_TisImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4_mC7E9E2B0095D69F1BAF23A7E7AAFFF20E00CBB62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_Object_from_c_TisOutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A_mF73927F5B4ABD0EEB4F164EB9275B1EFD8559E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_BufferDictionary__dtor_m66959D82981597E32F55B10A60195176B1B9E080_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_BufferDictionary__retain_mED29687176F2F6BC186C69D87485469B04389834_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_Buffer__typeName_m840009C8BB7D8BA32286BF04BE76E0E400FC720D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_CameraParameters__dtor_mFE5C97887C93DAA331C56A49EED56D3A608D699D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_CameraParameters__retain_m26185B36B555778254F5D1256DC8CEBD801078CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_CameraParameters__typeName_m33307B329BDB3E75ED4B9A3849CCFDE5D4A6ABCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_DelayedCallbackScheduler__dtor_mD78DC24E4D91D02B0A4CB4B6BD80A2930796FEA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_DelayedCallbackScheduler__retain_m21621C31553D2E93D305A3057FE6CF9C1D8C212F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_FeedbackFrame__dtor_mD35BC864A848045D5B8E7162756EB5A8B892A1E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_FeedbackFrame__retain_m4CD5CE29718A1585A20D0AF96CBA7DD4BE990EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_Image__dtor_m060A12BDC8A5C99FA368826B8AB5380620F6D1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_Image__retain_m6EE4BF7C853DB9161FFF8615B2883912F2700C21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_Image__typeName_mDE9BAFB728BAEA4F5B12A08DE032E5F6F06ACA59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_ImmediateCallbackScheduler__typeName_m7C9BC197AE5BDEA783D6A2DB79B2CC9FCD524ABA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_InputFrame__typeName_m2E5EBC87B0857FD2BB25BE6D5F40D94E05D35843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_OutputFrame__dtor_mCDB3AFBF6EFD66011D134057E912A54F4F30E618_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_OutputFrame__retain_m58CA1CE50D32DF38A30BEE5E91F355FC9341CA5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_easyar_arengineinterop_OutputFrame__typeName_mED5DC6AD2A8D370638F02378DC5BBE0F8643E063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_map_TisOptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F_TisOptional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F_mF45E1468D2CDBB8171F2F8143E6353BF412C2654_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_map_TisOptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A_TisOptional_1_tFCA36B33E770473484760ED6767ED4673118E865_mA01F8590D2DB630E0663FFA870646F6E3B4AE116_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Detail_map_TisOptional_1_tFCA36B33E770473484760ED6767ED4673118E865_TisOptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A_mE919826EDE2EBC1FA0373BC4124850F2B1484329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Engine_initialize_m4642651C4E38B3CBEF16EDC617D747666C282F3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix33F_set_data_mA022ABBC2B4A74DD4111BE62A923B56CA9F96B26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix44F_set_data_m1F7BEE7E4208ABD412CB71BC44E87E90216B6646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_Empty_mA160CB18BF34625A81DD825644E12290FD247341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_Empty_mAFF7F5586BEC707120934AB14B4B417AF89C6F03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_OnSome_mA0C2E790801692133FE5BE34DC5705ADC6D31DA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_get_Value_mB924C7295C38932932633887C11DB3DC0C3CBF65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_op_Implicit_m3CB1CF13B1745B4AC024A7E64C4B2F8A8329B575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Optional_1_op_Implicit_mA2D19E974C0B2443BC702D85CB9B30863A362F99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__3_0_m583BE3783332F21A81BB43B3A0DDA2D6745B25DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CpreviousOutputFrameU3Eb__5_0_mB2377A403B7710FE3D802AE8DF8F9334DBEF3879_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CtryGetU3Eb__6_0_m27B1B76A9A9EDF7EBF30C67EB049FA0954D838CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec2F_set_data_mF93C085EF0FD73A219F17867806371B55B988547_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec2I_set_data_mEE55FDA1BBAAB70A8A574E0CC7D0E086C5E6FAB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec3D_set_data_m31F86B636A684EBCE2C62EC525F09F27BE46193B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec3F_set_data_mEDDE41A43E2E1808901F3FDD5E7F0BB9DE880F80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec4F_set_data_m7AAC34354DD070B1D1D9EBD336809B788DA1DF9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec4I_set_data_m7772EF75EC5C92174152A949FF746CD73B883CEC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<easyar.Optional`1<easyar.arengineinterop.FrameFilterResult>>
struct List_1_tBC7A0DB9E4D93BF4C255027EC5B575A9D4BBD860  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Optional_1U5BU5D_tB9C08F60409D73773794C08C2D7B40D9EADE8CCC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBC7A0DB9E4D93BF4C255027EC5B575A9D4BBD860_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Optional_1U5BU5D_tB9C08F60409D73773794C08C2D7B40D9EADE8CCC* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// easyar.arengineinterop.Detail
struct Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF  : public RuntimeObject
{
};

struct Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Func`2<System.IntPtr,easyar.arengineinterop.RefBase>> easyar.arengineinterop.Detail::TypeNameToConstructor
	Dictionary_2_t612B1CFC7E0B2241987FCAA24CCB8073D1CB5BF1* ___TypeNameToConstructor_1;
};

// easyar.arengineinterop.Engine
struct Engine_t4A2F95BC44223C659EB8B58D420971E0B1F8F1E9  : public RuntimeObject
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

// easyar.arengineinterop.Buffer/<>c
struct U3CU3Ec_tEB1C1EDFF33DE1775F72CF1102466A69FBB8AA2F  : public RuntimeObject
{
};

struct U3CU3Ec_tEB1C1EDFF33DE1775F72CF1102466A69FBB8AA2F_StaticFields
{
	// easyar.arengineinterop.Buffer/<>c easyar.arengineinterop.Buffer/<>c::<>9
	U3CU3Ec_tEB1C1EDFF33DE1775F72CF1102466A69FBB8AA2F* ___U3CU3E9_0;
	// System.Action easyar.arengineinterop.Buffer/<>c::<>9__12_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__12_0_1;
};

// easyar.arengineinterop.BufferDictionary/<>c
struct U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A  : public RuntimeObject
{
};

struct U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_StaticFields
{
	// easyar.arengineinterop.BufferDictionary/<>c easyar.arengineinterop.BufferDictionary/<>c::<>9
	U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A* ___U3CU3E9_0;
	// System.Func`2<easyar.arengineinterop.Detail/OptionalOfBuffer,easyar.Optional`1<easyar.arengineinterop.Buffer>> easyar.arengineinterop.BufferDictionary/<>c::<>9__6_0
	Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886* ___U3CU3E9__6_0_1;
};

// easyar.arengineinterop.Detail/AutoRelease
struct AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Action> easyar.arengineinterop.Detail/AutoRelease::actions
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___actions_0;
};

// easyar.arengineinterop.FeedbackFrame/<>c
struct U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39  : public RuntimeObject
{
};

struct U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_StaticFields
{
	// easyar.arengineinterop.FeedbackFrame/<>c easyar.arengineinterop.FeedbackFrame/<>c::<>9
	U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39* ___U3CU3E9_0;
	// System.Func`2<easyar.Optional`1<easyar.arengineinterop.OutputFrame>,easyar.arengineinterop.Detail/OptionalOfOutputFrame> easyar.arengineinterop.FeedbackFrame/<>c::<>9__3_0
	Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E* ___U3CU3E9__3_0_1;
	// System.Func`2<easyar.arengineinterop.Detail/OptionalOfOutputFrame,easyar.Optional`1<easyar.arengineinterop.OutputFrame>> easyar.arengineinterop.FeedbackFrame/<>c::<>9__5_0
	Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674* ___U3CU3E9__5_0_2;
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

// easyar.arengineinterop.Matrix33F
struct Matrix33F_t7E090A60883B11F7CA3BED9011D8E3A14F3CF17F 
{
	// System.Single easyar.arengineinterop.Matrix33F::data_0
	float ___data_0_0;
	// System.Single easyar.arengineinterop.Matrix33F::data_1
	float ___data_1_1;
	// System.Single easyar.arengineinterop.Matrix33F::data_2
	float ___data_2_2;
	// System.Single easyar.arengineinterop.Matrix33F::data_3
	float ___data_3_3;
	// System.Single easyar.arengineinterop.Matrix33F::data_4
	float ___data_4_4;
	// System.Single easyar.arengineinterop.Matrix33F::data_5
	float ___data_5_5;
	// System.Single easyar.arengineinterop.Matrix33F::data_6
	float ___data_6_6;
	// System.Single easyar.arengineinterop.Matrix33F::data_7
	float ___data_7_7;
	// System.Single easyar.arengineinterop.Matrix33F::data_8
	float ___data_8_8;
};

// easyar.arengineinterop.Matrix44F
struct Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B 
{
	// System.Single easyar.arengineinterop.Matrix44F::data_0
	float ___data_0_0;
	// System.Single easyar.arengineinterop.Matrix44F::data_1
	float ___data_1_1;
	// System.Single easyar.arengineinterop.Matrix44F::data_2
	float ___data_2_2;
	// System.Single easyar.arengineinterop.Matrix44F::data_3
	float ___data_3_3;
	// System.Single easyar.arengineinterop.Matrix44F::data_4
	float ___data_4_4;
	// System.Single easyar.arengineinterop.Matrix44F::data_5
	float ___data_5_5;
	// System.Single easyar.arengineinterop.Matrix44F::data_6
	float ___data_6_6;
	// System.Single easyar.arengineinterop.Matrix44F::data_7
	float ___data_7_7;
	// System.Single easyar.arengineinterop.Matrix44F::data_8
	float ___data_8_8;
	// System.Single easyar.arengineinterop.Matrix44F::data_9
	float ___data_9_9;
	// System.Single easyar.arengineinterop.Matrix44F::data_10
	float ___data_10_10;
	// System.Single easyar.arengineinterop.Matrix44F::data_11
	float ___data_11_11;
	// System.Single easyar.arengineinterop.Matrix44F::data_12
	float ___data_12_12;
	// System.Single easyar.arengineinterop.Matrix44F::data_13
	float ___data_13_13;
	// System.Single easyar.arengineinterop.Matrix44F::data_14
	float ___data_14_14;
	// System.Single easyar.arengineinterop.Matrix44F::data_15
	float ___data_15_15;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// easyar.arengineinterop.Vec2F
struct Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C 
{
	// System.Single easyar.arengineinterop.Vec2F::data_0
	float ___data_0_0;
	// System.Single easyar.arengineinterop.Vec2F::data_1
	float ___data_1_1;
};

// easyar.arengineinterop.Vec2I
struct Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 
{
	// System.Int32 easyar.arengineinterop.Vec2I::data_0
	int32_t ___data_0_0;
	// System.Int32 easyar.arengineinterop.Vec2I::data_1
	int32_t ___data_1_1;
};

// easyar.arengineinterop.Vec3D
struct Vec3D_t2AFACDE6399373ED1C54CB46EBD82162DB454E28 
{
	// System.Double easyar.arengineinterop.Vec3D::data_0
	double ___data_0_0;
	// System.Double easyar.arengineinterop.Vec3D::data_1
	double ___data_1_1;
	// System.Double easyar.arengineinterop.Vec3D::data_2
	double ___data_2_2;
};

// easyar.arengineinterop.Vec3F
struct Vec3F_t09A439693B6DC70DE9C2CA29508F788D552B5CDF 
{
	// System.Single easyar.arengineinterop.Vec3F::data_0
	float ___data_0_0;
	// System.Single easyar.arengineinterop.Vec3F::data_1
	float ___data_1_1;
	// System.Single easyar.arengineinterop.Vec3F::data_2
	float ___data_2_2;
};

// easyar.arengineinterop.Vec4F
struct Vec4F_tAD87052F93F29AAF1EFAD089614CFF34AAD4DA3A 
{
	// System.Single easyar.arengineinterop.Vec4F::data_0
	float ___data_0_0;
	// System.Single easyar.arengineinterop.Vec4F::data_1
	float ___data_1_1;
	// System.Single easyar.arengineinterop.Vec4F::data_2
	float ___data_2_2;
	// System.Single easyar.arengineinterop.Vec4F::data_3
	float ___data_3_3;
};

// easyar.arengineinterop.Vec4I
struct Vec4I_t9FB91FC52AC50FE4AFEE89C67C2A36DCE0F5696A 
{
	// System.Int32 easyar.arengineinterop.Vec4I::data_0
	int32_t ___data_0_0;
	// System.Int32 easyar.arengineinterop.Vec4I::data_1
	int32_t ___data_1_1;
	// System.Int32 easyar.arengineinterop.Vec4I::data_2
	int32_t ___data_2_2;
	// System.Int32 easyar.arengineinterop.Vec4I::data_3
	int32_t ___data_3_3;
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

// easyar.Optional`1<easyar.arengineinterop.Buffer>
struct Optional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F 
{
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 ___None_1;
	// T easyar.Optional`1::Some
	Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348* ___Some_2;
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

// easyar.Optional`1<easyar.arengineinterop.OutputFrame>
struct Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 
{
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_t934B7E7CA82AE6BF510C860F0D2D37CB95C1F185 ___None_1;
	// T easyar.Optional`1::Some
	OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* ___Some_2;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// easyar.arengineinterop.RefBase
struct RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA  : public RuntimeObject
{
	// System.IntPtr easyar.arengineinterop.RefBase::cdata_
	intptr_t ___cdata__0;
	// System.Action`1<System.IntPtr> easyar.arengineinterop.RefBase::deleter_
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter__1;
	// easyar.arengineinterop.RefBase/Retainer easyar.arengineinterop.RefBase::retainer_
	Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer__2;
};

// easyar.arengineinterop.Detail/OptionalOfBuffer
struct OptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F 
{
	// System.Byte easyar.arengineinterop.Detail/OptionalOfBuffer::has_value_
	uint8_t ___has_value__0;
	// System.IntPtr easyar.arengineinterop.Detail/OptionalOfBuffer::value
	intptr_t ___value_1;
};

// easyar.arengineinterop.Detail/OptionalOfOutputFrame
struct OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A 
{
	// System.Byte easyar.arengineinterop.Detail/OptionalOfOutputFrame::has_value_
	uint8_t ___has_value__0;
	// System.IntPtr easyar.arengineinterop.Detail/OptionalOfOutputFrame::value
	intptr_t ___value_1;
};

// easyar.arengineinterop.Buffer
struct Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348  : public RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA
{
};

// easyar.arengineinterop.BufferDictionary
struct BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0  : public RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA
{
};

// easyar.arengineinterop.CallbackScheduler
struct CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C  : public RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA
{
};

// easyar.arengineinterop.CameraParameters
struct CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9  : public RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA
{
};

// easyar.arengineinterop.FeedbackFrame
struct FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC  : public RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA
{
};

// easyar.arengineinterop.FrameFilterResult
struct FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA  : public RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA
{
};

// easyar.arengineinterop.Image
struct Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C  : public RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA
{
};

// easyar.arengineinterop.InputFrame
struct InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E  : public RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA
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

// easyar.arengineinterop.OutputFrame
struct OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A  : public RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// easyar.arengineinterop.Buffer/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tDFEA58FCAC316F768A213DA747C5E3CDB1303EB8  : public RuntimeObject
{
	// System.Runtime.InteropServices.GCHandle easyar.arengineinterop.Buffer/<>c__DisplayClass11_0::h
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___h_0;
};

// easyar.arengineinterop.Buffer/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tE7D0B55E5DF5EA36AA96ED602401B6710E808AC4  : public RuntimeObject
{
	// System.Runtime.InteropServices.GCHandle easyar.arengineinterop.Buffer/<>c__DisplayClass13_0::h
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___h_0;
	// System.Action easyar.arengineinterop.Buffer/<>c__DisplayClass13_0::deleter
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___deleter_1;
};

// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2  : public MulticastDelegate_t
{
};

// System.Func`2<easyar.Optional`1<easyar.arengineinterop.OutputFrame>,easyar.arengineinterop.Detail/OptionalOfOutputFrame>
struct Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E  : public MulticastDelegate_t
{
};

// System.Func`2<System.IntPtr,System.IntPtr>
struct Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713  : public MulticastDelegate_t
{
};

// System.Func`2<easyar.arengineinterop.Detail/OptionalOfBuffer,easyar.Optional`1<easyar.arengineinterop.Buffer>>
struct Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886  : public MulticastDelegate_t
{
};

// System.Func`2<easyar.arengineinterop.Detail/OptionalOfOutputFrame,easyar.Optional`1<easyar.arengineinterop.OutputFrame>>
struct Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// easyar.arengineinterop.DelayedCallbackScheduler
struct DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492  : public CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C
{
};

// easyar.arengineinterop.ImmediateCallbackScheduler
struct ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4  : public CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// easyar.arengineinterop.RefBase/Retainer
struct Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<System.IntPtr>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m3657419BEA982F0D4CD1F16862138852C86D0953_gshared (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Func`2<easyar.arengineinterop.Detail/OptionalOfBuffer,easyar.Optional`1<System.Object>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m77ACC494297C2452F6A7CE7CD1A99050020D2430_gshared (Func_2_t4ED5CC54C5C203D257A0AA9977FE809C56D3E6B4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue easyar.arengineinterop.Detail::map<easyar.arengineinterop.Detail/OptionalOfBuffer,easyar.Optional`1<System.Object>>(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22 Detail_map_TisOptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F_TisOptional_1_tF5114E38E552BAED882106D566BDE52772A76B22_mC748667B8B0F50F7E592283D39D3B0CE7644DDE9_gshared (OptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F ___v0, Func_2_t4ED5CC54C5C203D257A0AA9977FE809C56D3E6B4* ___f1, const RuntimeMethod* method) ;
// easyar.Optional`1<T> easyar.Optional`1<System.Object>::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22 Optional_1_get_Empty_m9A998C1ED09C11E04958F42DCCFB3C75A01C9B64_gshared (const RuntimeMethod* method) ;
// System.Void System.Func`2<System.IntPtr,System.IntPtr>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0_gshared (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T easyar.arengineinterop.Detail::Object_from_c<System.Object>(System.IntPtr,System.Func`2<System.IntPtr,System.IntPtr>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Detail_Object_from_c_TisRuntimeObject_m2624B6062BEE02AA9893BEACBE1EBE44D3A093BE_gshared (intptr_t ___ptr0, Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* ___typeNameGetter1, const RuntimeMethod* method) ;
// easyar.Optional`1<T> easyar.Optional`1<System.Object>::op_Implicit(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22 Optional_1_op_Implicit_mDACBD94DFA24E606D67BC9DE9487B9D648C8A998_gshared (RuntimeObject* ___v0, const RuntimeMethod* method) ;
// System.Void System.Func`2<easyar.Optional`1<System.Object>,easyar.arengineinterop.Detail/OptionalOfOutputFrame>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE29B945EF15156D23BA85A417E6F0C440A902D97_gshared (Func_2_t424FA75CE2183D346E41FBDF16034BA169D0EDFA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue easyar.arengineinterop.Detail::map<easyar.Optional`1<System.Object>,easyar.arengineinterop.Detail/OptionalOfOutputFrame>(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A Detail_map_TisOptional_1_tF5114E38E552BAED882106D566BDE52772A76B22_TisOptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A_mEE6E25058EA6067876383C17CD7B7769600FEDD6_gshared (Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22 ___v0, Func_2_t424FA75CE2183D346E41FBDF16034BA169D0EDFA* ___f1, const RuntimeMethod* method) ;
// System.Void System.Func`2<easyar.arengineinterop.Detail/OptionalOfOutputFrame,easyar.Optional`1<System.Object>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mE3614D1B945F5AE9B428942A43370245886EEB81_gshared (Func_2_t4B16C52513FD08053E43BF07A89234182ADB6C73* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue easyar.arengineinterop.Detail::map<easyar.arengineinterop.Detail/OptionalOfOutputFrame,easyar.Optional`1<System.Object>>(TKey,System.Func`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22 Detail_map_TisOptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A_TisOptional_1_tF5114E38E552BAED882106D566BDE52772A76B22_mAEFA2622411AD97DDAA8E7F5CE48A4163D7A78FD_gshared (OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A ___v0, Func_2_t4B16C52513FD08053E43BF07A89234182ADB6C73* ___f1, const RuntimeMethod* method) ;
// System.Boolean easyar.Optional`1<System.Object>::get_OnSome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Optional_1_get_OnSome_m6A4180C85633C2D06A1EBEFA7383BD23DF86EB04_gshared (Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* __this, const RuntimeMethod* method) ;
// T easyar.Optional`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Optional_1_get_Value_m1E8149EB196B88B62B9737096E20FAC8F90304E3_gshared (Optional_1_tF5114E38E552BAED882106D566BDE52772A76B22* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Buffer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF6A7525265CE2EE75FBCD8A02FE12F7BAF634DE2 (U3CU3Ec_tEB1C1EDFF33DE1775F72CF1102466A69FBB8AA2F* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.RefBase::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefBase__ctor_m993A273C39CF74208BB74C9111ED2E10539ACAF9 (RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) ;
// System.IntPtr easyar.arengineinterop.RefBase::get_cdata()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC (RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA* __this, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.RefBase/Retainer::Invoke(System.IntPtr,System.IntPtr&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Retainer_Invoke_m97B4D481743ACBAEB48ADA08F866D4F89A6A7405_inline (Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* __this, intptr_t ___This0, intptr_t* ___Return1, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.BufferDictionary::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferDictionary__ctor_mAA4219EC4DBE7CEE5A5A5844EF9ACEF9F1E4D9B5 (BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3657419BEA982F0D4CD1F16862138852C86D0953 (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m3657419BEA982F0D4CD1F16862138852C86D0953_gshared)(__this, ___object0, ___method1, method);
}
// System.Void easyar.arengineinterop.RefBase/Retainer::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Retainer__ctor_m480E22F827A714D7F4E3238D5DB0B0C6117C6108 (Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail/AutoRelease::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941 (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* __this, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_BufferDictionary__ctor(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_BufferDictionary__ctor_m7143C9663C064B7CC932822A6BBE5486846FCA8B (intptr_t* ___Return0, const RuntimeMethod* method) ;
// System.Int32 easyar.arengineinterop.Detail::easyar_arengineinterop_BufferDictionary_count(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detail_easyar_arengineinterop_BufferDictionary_count_m0037CBD30FD4F856BBE8626FEDB472DC697954F8 (intptr_t ___This0, const RuntimeMethod* method) ;
// System.IntPtr easyar.arengineinterop.Detail::String_to_c(easyar.arengineinterop.Detail/AutoRelease,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Detail_String_to_c_m856A19409F7727E08FB174F7F9944B8E1BABF10D (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* ___ar0, String_t* ___s1, const RuntimeMethod* method) ;
// System.Boolean easyar.arengineinterop.Detail::easyar_arengineinterop_BufferDictionary_contains(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detail_easyar_arengineinterop_BufferDictionary_contains_mA05E49F087442BF75EE745CB0EA4EA8612DB34AE (intptr_t ___This0, intptr_t ___path1, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_BufferDictionary_tryGet(System.IntPtr,System.IntPtr,easyar.arengineinterop.Detail/OptionalOfBuffer&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_BufferDictionary_tryGet_m15309835B2DFC756ED221CDE8D6107140E5D94DD (intptr_t ___This0, intptr_t ___path1, OptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F* ___Return2, const RuntimeMethod* method) ;
// System.Void System.Func`2<easyar.arengineinterop.Detail/OptionalOfBuffer,easyar.Optional`1<easyar.arengineinterop.Buffer>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m1B25BB3EBC5D7B84251A741A66712E70B6C394BD (Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m77ACC494297C2452F6A7CE7CD1A99050020D2430_gshared)(__this, ___object0, ___method1, method);
}
// TValue easyar.arengineinterop.Detail::map<easyar.arengineinterop.Detail/OptionalOfBuffer,easyar.Optional`1<easyar.arengineinterop.Buffer>>(TKey,System.Func`2<TKey,TValue>)
inline Optional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F Detail_map_TisOptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F_TisOptional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F_mF45E1468D2CDBB8171F2F8143E6353BF412C2654 (OptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F ___v0, Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886* ___f1, const RuntimeMethod* method)
{
	return ((  Optional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F (*) (OptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F, Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886*, const RuntimeMethod*))Detail_map_TisOptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F_TisOptional_1_tF5114E38E552BAED882106D566BDE52772A76B22_mC748667B8B0F50F7E592283D39D3B0CE7644DDE9_gshared)(___v0, ___f1, method);
}
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_BufferDictionary_set(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_BufferDictionary_set_m5D1623414E56DBE8AB12F13D59742C188DB78CBA (intptr_t ___This0, intptr_t ___path1, intptr_t ___buffer2, const RuntimeMethod* method) ;
// System.Boolean easyar.arengineinterop.Detail::easyar_arengineinterop_BufferDictionary_remove(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detail_easyar_arengineinterop_BufferDictionary_remove_m81BB1139315FC919F5C3066EAD5C9E6904BFEA50 (intptr_t ___This0, intptr_t ___path1, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_BufferDictionary_clear(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_BufferDictionary_clear_m1F023785C6229EC4C21E45C0807650A6052EDEB1 (intptr_t ___This0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.BufferDictionary/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3E65D3CDEFF4B4EEDD300CB8EE919FD3C5BAC912 (U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A* __this, const RuntimeMethod* method) ;
// System.Boolean easyar.arengineinterop.Detail/OptionalOfBuffer::get_has_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OptionalOfBuffer_get_has_value_mC12EFE3DE099D26C9720476D3DEFDD99640301D0 (OptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F* __this, const RuntimeMethod* method) ;
// easyar.Optional`1<T> easyar.Optional`1<easyar.arengineinterop.Buffer>::get_Empty()
inline Optional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F Optional_1_get_Empty_mAFF7F5586BEC707120934AB14B4B417AF89C6F03 (const RuntimeMethod* method)
{
	return ((  Optional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F (*) (const RuntimeMethod*))Optional_1_get_Empty_m9A998C1ED09C11E04958F42DCCFB3C75A01C9B64_gshared)(method);
}
// System.Void System.Func`2<System.IntPtr,System.IntPtr>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0 (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0_gshared)(__this, ___object0, ___method1, method);
}
// T easyar.arengineinterop.Detail::Object_from_c<easyar.arengineinterop.Buffer>(System.IntPtr,System.Func`2<System.IntPtr,System.IntPtr>)
inline Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348* Detail_Object_from_c_TisBuffer_t23A7F32D34236FACC5665FD1285442A75EE83348_m9DD02EB9942F97081BAE78A4C22B1B19FEBF992A (intptr_t ___ptr0, Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* ___typeNameGetter1, const RuntimeMethod* method)
{
	return ((  Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348* (*) (intptr_t, Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*, const RuntimeMethod*))Detail_Object_from_c_TisRuntimeObject_m2624B6062BEE02AA9893BEACBE1EBE44D3A093BE_gshared)(___ptr0, ___typeNameGetter1, method);
}
// easyar.Optional`1<T> easyar.Optional`1<easyar.arengineinterop.Buffer>::op_Implicit(T)
inline Optional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F Optional_1_op_Implicit_mA2D19E974C0B2443BC702D85CB9B30863A362F99 (Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348* ___v0, const RuntimeMethod* method)
{
	return ((  Optional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F (*) (Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348*, const RuntimeMethod*))Optional_1_op_Implicit_mDACBD94DFA24E606D67BC9DE9487B9D648C8A998_gshared)(___v0, method);
}
// System.Void easyar.arengineinterop.CallbackScheduler::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackScheduler__ctor_m88139E543F87D2412614D0AF98CC52BBED5A67D7 (CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.DelayedCallbackScheduler::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelayedCallbackScheduler__ctor_m3C8DDAF88087433E9D7285FFF9DD165EE782BC54 (DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_DelayedCallbackScheduler__ctor(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_DelayedCallbackScheduler__ctor_mDA32C02D53A380608D933AD3CF7EBE3E33E4C057 (intptr_t* ___Return0, const RuntimeMethod* method) ;
// System.Boolean easyar.arengineinterop.Detail::easyar_arengineinterop_DelayedCallbackScheduler_runOne(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detail_easyar_arengineinterop_DelayedCallbackScheduler_runOne_mA1501AAD5633691F9D4A9A63FE2D2E9ED546CD7C (intptr_t ___This0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.ImmediateCallbackScheduler::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediateCallbackScheduler__ctor_m69AB844F528AA099B185A0032A1F6B65511CEDC5 (ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_ImmediateCallbackScheduler_getDefault(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_ImmediateCallbackScheduler_getDefault_m87E7E876531835D12DFB7415A69E206DA24BF221 (intptr_t* ___Return0, const RuntimeMethod* method) ;
// T easyar.arengineinterop.Detail::Object_from_c<easyar.arengineinterop.ImmediateCallbackScheduler>(System.IntPtr,System.Func`2<System.IntPtr,System.IntPtr>)
inline ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4* Detail_Object_from_c_TisImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4_mC7E9E2B0095D69F1BAF23A7E7AAFFF20E00CBB62 (intptr_t ___ptr0, Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* ___typeNameGetter1, const RuntimeMethod* method)
{
	return ((  ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4* (*) (intptr_t, Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*, const RuntimeMethod*))Detail_Object_from_c_TisRuntimeObject_m2624B6062BEE02AA9893BEACBE1EBE44D3A093BE_gshared)(___ptr0, ___typeNameGetter1, method);
}
// System.Void easyar.arengineinterop.CameraParameters::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraParameters__ctor_mACDF43417D7A9A6CD4F1D8D28B258209FDF2A8AB (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_CameraParameters__ctor(easyar.arengineinterop.Vec2I,easyar.arengineinterop.Vec2F,easyar.arengineinterop.Vec2F,easyar.arengineinterop.CameraDeviceType,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_CameraParameters__ctor_mF1C541CD98212CF5FC355CBF6F754589BC5A9668 (Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 ___imageSize0, Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C ___focalLength1, Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C ___principalPoint2, int32_t ___cameraDeviceType3, int32_t ___cameraOrientation4, intptr_t* ___Return5, const RuntimeMethod* method) ;
// easyar.arengineinterop.Vec2I easyar.arengineinterop.Detail::easyar_arengineinterop_CameraParameters_size(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 Detail_easyar_arengineinterop_CameraParameters_size_m242A0AE541AB5054E1DC88A22331ACC9BB3CE570 (intptr_t ___This0, const RuntimeMethod* method) ;
// easyar.arengineinterop.Vec2F easyar.arengineinterop.Detail::easyar_arengineinterop_CameraParameters_focalLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C Detail_easyar_arengineinterop_CameraParameters_focalLength_m6252B60FFE76215F7DC8D93D2AF8CCAAEF815BEE (intptr_t ___This0, const RuntimeMethod* method) ;
// easyar.arengineinterop.Vec2F easyar.arengineinterop.Detail::easyar_arengineinterop_CameraParameters_principalPoint(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C Detail_easyar_arengineinterop_CameraParameters_principalPoint_mE7AB5E77B773A38C036AE05976314C242821FDF2 (intptr_t ___This0, const RuntimeMethod* method) ;
// easyar.arengineinterop.CameraDeviceType easyar.arengineinterop.Detail::easyar_arengineinterop_CameraParameters_cameraDeviceType(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detail_easyar_arengineinterop_CameraParameters_cameraDeviceType_mF2FCA1691F01E40DB119A7AC290AC41F8D8F1014 (intptr_t ___This0, const RuntimeMethod* method) ;
// System.Int32 easyar.arengineinterop.Detail::easyar_arengineinterop_CameraParameters_cameraOrientation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detail_easyar_arengineinterop_CameraParameters_cameraOrientation_mE3845A3FFDFF986D5828222B8EB7D208BA96F0B5 (intptr_t ___This0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_CameraParameters_createWithDefaultIntrinsics(easyar.arengineinterop.Vec2I,easyar.arengineinterop.CameraDeviceType,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_CameraParameters_createWithDefaultIntrinsics_m2D9E9E2E04FAFD42ABF08D7D912678EC6024E7E8 (Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 ___imageSize0, int32_t ___cameraDeviceType1, int32_t ___cameraOrientation2, intptr_t* ___Return3, const RuntimeMethod* method) ;
// T easyar.arengineinterop.Detail::Object_from_c<easyar.arengineinterop.CameraParameters>(System.IntPtr,System.Func`2<System.IntPtr,System.IntPtr>)
inline CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* Detail_Object_from_c_TisCameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9_mF0B33CFCF56FF1A9AB0BAE0B87FAD14365858D5B (intptr_t ___ptr0, Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* ___typeNameGetter1, const RuntimeMethod* method)
{
	return ((  CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* (*) (intptr_t, Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*, const RuntimeMethod*))Detail_Object_from_c_TisRuntimeObject_m2624B6062BEE02AA9893BEACBE1EBE44D3A093BE_gshared)(___ptr0, ___typeNameGetter1, method);
}
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_CameraParameters_getResized(System.IntPtr,easyar.arengineinterop.Vec2I,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_CameraParameters_getResized_m58560BB7DA433AA9B4E53C9A71FFC4EEAFBBFF57 (intptr_t ___This0, Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 ___imageSize1, intptr_t* ___Return2, const RuntimeMethod* method) ;
// System.Int32 easyar.arengineinterop.Detail::easyar_arengineinterop_CameraParameters_imageOrientation(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detail_easyar_arengineinterop_CameraParameters_imageOrientation_m4172D220F6A8FD90796CC8D7D63AFC4A1865DC68 (intptr_t ___This0, int32_t ___screenRotation1, const RuntimeMethod* method) ;
// System.Boolean easyar.arengineinterop.Detail::easyar_arengineinterop_CameraParameters_imageHorizontalFlip(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detail_easyar_arengineinterop_CameraParameters_imageHorizontalFlip_m0EE7184B58150C357AF074F59B27C12223C0760E (intptr_t ___This0, bool ___manualHorizontalFlip1, const RuntimeMethod* method) ;
// easyar.arengineinterop.Matrix44F easyar.arengineinterop.Detail::easyar_arengineinterop_CameraParameters_projection(System.IntPtr,System.Single,System.Single,System.Single,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B Detail_easyar_arengineinterop_CameraParameters_projection_m3858AE7AA1DDF25F6F2BB84D219C4D7D80F4DFFF (intptr_t ___This0, float ___nearPlane1, float ___farPlane2, float ___viewportAspectRatio3, int32_t ___screenRotation4, bool ___combiningFlip5, bool ___manualHorizontalFlip6, const RuntimeMethod* method) ;
// easyar.arengineinterop.Matrix44F easyar.arengineinterop.Detail::easyar_arengineinterop_CameraParameters_imageProjection(System.IntPtr,System.Single,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B Detail_easyar_arengineinterop_CameraParameters_imageProjection_m55F70485DF5C499F1139B16D146DEE488387EDAF (intptr_t ___This0, float ___viewportAspectRatio1, int32_t ___screenRotation2, bool ___combiningFlip3, bool ___manualHorizontalFlip4, const RuntimeMethod* method) ;
// easyar.arengineinterop.Vec2F easyar.arengineinterop.Detail::easyar_arengineinterop_CameraParameters_screenCoordinatesFromImageCoordinates(System.IntPtr,System.Single,System.Int32,System.Boolean,System.Boolean,easyar.arengineinterop.Vec2F)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C Detail_easyar_arengineinterop_CameraParameters_screenCoordinatesFromImageCoordinates_m9EAEAAAC47C80D2A76D5784057C53D82049CC4C6 (intptr_t ___This0, float ___viewportAspectRatio1, int32_t ___screenRotation2, bool ___combiningFlip3, bool ___manualHorizontalFlip4, Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C ___imageCoordinates5, const RuntimeMethod* method) ;
// easyar.arengineinterop.Vec2F easyar.arengineinterop.Detail::easyar_arengineinterop_CameraParameters_imageCoordinatesFromScreenCoordinates(System.IntPtr,System.Single,System.Int32,System.Boolean,System.Boolean,easyar.arengineinterop.Vec2F)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C Detail_easyar_arengineinterop_CameraParameters_imageCoordinatesFromScreenCoordinates_mAA22D9AE4049C2A99FE1C3E5B8A75CE28267803A (intptr_t ___This0, float ___viewportAspectRatio1, int32_t ___screenRotation2, bool ___combiningFlip3, bool ___manualHorizontalFlip4, Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C ___screenCoordinates5, const RuntimeMethod* method) ;
// System.Boolean easyar.arengineinterop.Detail::easyar_arengineinterop_CameraParameters_equalsTo(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detail_easyar_arengineinterop_CameraParameters_equalsTo_mF317C41ABCCD78E16FBE3636DFDD76EB4F26AC36 (intptr_t ___This0, intptr_t ___other1, const RuntimeMethod* method) ;
// System.Int32 easyar.arengineinterop.Detail::easyar_arengineinterop_Engine_schemaHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detail_easyar_arengineinterop_Engine_schemaHash_mD33C275015E85CE90C8E0CAE3273DC4B6FD4A29F (const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean easyar.arengineinterop.Detail::easyar_arengineinterop_Engine_initialize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detail_easyar_arengineinterop_Engine_initialize_m9C1D45BDE9E5E8818E3320763F9B1EC4732D4B9F (intptr_t ___licenseKey0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.InputFrame::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFrame__ctor_m8024A82E86D9E94BF6EC12767552C6756D1B282E (InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) ;
// System.Int32 easyar.arengineinterop.Detail::easyar_arengineinterop_InputFrame_index(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detail_easyar_arengineinterop_InputFrame_index_m61888ED8B4C73E1771AB64FA1B8952BA3A22EE63 (intptr_t ___This0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_InputFrame_image(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_InputFrame_image_m9562B5EFA4C839FB1EFB12DAB55CC87D31136C3F (intptr_t ___This0, intptr_t* ___Return1, const RuntimeMethod* method) ;
// T easyar.arengineinterop.Detail::Object_from_c<easyar.arengineinterop.Image>(System.IntPtr,System.Func`2<System.IntPtr,System.IntPtr>)
inline Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* Detail_Object_from_c_TisImage_t16A156B4D3660113F83BFF9B560C217BDA00F40C_m9548E89A5AFF4CB30E1F673B653773E9590F5C6B (intptr_t ___ptr0, Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* ___typeNameGetter1, const RuntimeMethod* method)
{
	return ((  Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* (*) (intptr_t, Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*, const RuntimeMethod*))Detail_Object_from_c_TisRuntimeObject_m2624B6062BEE02AA9893BEACBE1EBE44D3A093BE_gshared)(___ptr0, ___typeNameGetter1, method);
}
// System.Boolean easyar.arengineinterop.Detail::easyar_arengineinterop_InputFrame_hasCameraParameters(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detail_easyar_arengineinterop_InputFrame_hasCameraParameters_mBA4C489E62A2035FEE28774483C95091BE6E2E53 (intptr_t ___This0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_InputFrame_cameraParameters(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_InputFrame_cameraParameters_mE7643A9AB26D3411B4F6957DDF535DB7B49E7F73 (intptr_t ___This0, intptr_t* ___Return1, const RuntimeMethod* method) ;
// System.Boolean easyar.arengineinterop.Detail::easyar_arengineinterop_InputFrame_hasTemporalInformation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detail_easyar_arengineinterop_InputFrame_hasTemporalInformation_m77CC5F8AA69E05F99795F6BC49C02289A0D36139 (intptr_t ___This0, const RuntimeMethod* method) ;
// System.Double easyar.arengineinterop.Detail::easyar_arengineinterop_InputFrame_timestamp(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Detail_easyar_arengineinterop_InputFrame_timestamp_mE552E1B9F9CE2D9E97C33D6213A2B541C550852A (intptr_t ___This0, const RuntimeMethod* method) ;
// System.Boolean easyar.arengineinterop.Detail::easyar_arengineinterop_InputFrame_hasSpatialInformation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detail_easyar_arengineinterop_InputFrame_hasSpatialInformation_m5845CBAAE1AA371FCE94CFA1CFB94E7D7B9ADF1B (intptr_t ___This0, const RuntimeMethod* method) ;
// easyar.arengineinterop.Matrix44F easyar.arengineinterop.Detail::easyar_arengineinterop_InputFrame_cameraTransform(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B Detail_easyar_arengineinterop_InputFrame_cameraTransform_m031F5960A70AF1DBFD389ECDB667AA70803E024B (intptr_t ___This0, const RuntimeMethod* method) ;
// easyar.arengineinterop.MotionTrackingStatus easyar.arengineinterop.Detail::easyar_arengineinterop_InputFrame_trackingStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detail_easyar_arengineinterop_InputFrame_trackingStatus_m19AC915AE931BE8455E3F812819E50AA2A6594E2 (intptr_t ___This0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_InputFrame_create(System.IntPtr,System.IntPtr,System.Double,easyar.arengineinterop.Matrix44F,easyar.arengineinterop.MotionTrackingStatus,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_InputFrame_create_mA84BD86E9CA691042B80317BA5F8B3B19D03600C (intptr_t ___image0, intptr_t ___cameraParameters1, double ___timestamp2, Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B ___cameraTransform3, int32_t ___trackingStatus4, intptr_t* ___Return5, const RuntimeMethod* method) ;
// T easyar.arengineinterop.Detail::Object_from_c<easyar.arengineinterop.InputFrame>(System.IntPtr,System.Func`2<System.IntPtr,System.IntPtr>)
inline InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7 (intptr_t ___ptr0, Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* ___typeNameGetter1, const RuntimeMethod* method)
{
	return ((  InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* (*) (intptr_t, Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*, const RuntimeMethod*))Detail_Object_from_c_TisRuntimeObject_m2624B6062BEE02AA9893BEACBE1EBE44D3A093BE_gshared)(___ptr0, ___typeNameGetter1, method);
}
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_InputFrame_createWithImageAndCameraParametersAndTemporal(System.IntPtr,System.IntPtr,System.Double,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_InputFrame_createWithImageAndCameraParametersAndTemporal_m1D8B1523D0F0FADF6D1BE5A4418E38A0D5B15A64 (intptr_t ___image0, intptr_t ___cameraParameters1, double ___timestamp2, intptr_t* ___Return3, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_InputFrame_createWithImageAndCameraParameters(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_InputFrame_createWithImageAndCameraParameters_m7DB295C78F461B4178F199FBC856FCD7BD52E30A (intptr_t ___image0, intptr_t ___cameraParameters1, intptr_t* ___Return2, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_InputFrame_createWithImage(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_InputFrame_createWithImage_m45808FFE8CA43D04292C04CEFA6EFD0997013A9E (intptr_t ___image0, intptr_t* ___Return1, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.FrameFilterResult::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameFilterResult__ctor_mD86C6E1A3B63A4623ED29FF202F69065C469CFE7 (FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.OutputFrame::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputFrame__ctor_mFDABA6E2CD17BDE2C905D86902D80C02E9E233EA (OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) ;
// System.IntPtr easyar.arengineinterop.Detail::ListOfOptionalOfFrameFilterResult_to_c(easyar.arengineinterop.Detail/AutoRelease,System.Collections.Generic.List`1<easyar.Optional`1<easyar.arengineinterop.FrameFilterResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Detail_ListOfOptionalOfFrameFilterResult_to_c_m08F4A12E27AAEEAE4FCB3B7469C75B0DCE62C62F (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* ___ar0, List_1_tBC7A0DB9E4D93BF4C255027EC5B575A9D4BBD860* ___l1, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_OutputFrame__ctor(System.IntPtr,System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_OutputFrame__ctor_m6D116F7941790B4FDBEEF7DD98815944D0E9D47D (intptr_t ___inputFrame0, intptr_t ___results1, intptr_t* ___Return2, const RuntimeMethod* method) ;
// System.Int32 easyar.arengineinterop.Detail::easyar_arengineinterop_OutputFrame_index(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detail_easyar_arengineinterop_OutputFrame_index_mBAB53B940DCA099859CFE524F7022BBADED620EF (intptr_t ___This0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_OutputFrame_inputFrame(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_OutputFrame_inputFrame_m74166BFEA72E4D0D62A59B7A5D2BC20C435B7081 (intptr_t ___This0, intptr_t* ___Return1, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_OutputFrame_results(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_OutputFrame_results_mC4B2A188AE2EB4CE3E6AD76CC711B5105C597FD9 (intptr_t ___This0, intptr_t* ___Return1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<easyar.Optional`1<easyar.arengineinterop.FrameFilterResult>> easyar.arengineinterop.Detail::ListOfOptionalOfFrameFilterResult_from_c(easyar.arengineinterop.Detail/AutoRelease,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBC7A0DB9E4D93BF4C255027EC5B575A9D4BBD860* Detail_ListOfOptionalOfFrameFilterResult_from_c_mC4643A66F0018DEE583D1496A05429B67B0854EA (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* ___ar0, intptr_t ___l1, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.FeedbackFrame::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeedbackFrame__ctor_mDA586F54BB1FD1CADCE3DA895045D8149AEB3A6E (FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) ;
// System.Void System.Func`2<easyar.Optional`1<easyar.arengineinterop.OutputFrame>,easyar.arengineinterop.Detail/OptionalOfOutputFrame>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m5978C3ACCC88E1699C9CDBB02B26D20A15F013F6 (Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mE29B945EF15156D23BA85A417E6F0C440A902D97_gshared)(__this, ___object0, ___method1, method);
}
// TValue easyar.arengineinterop.Detail::map<easyar.Optional`1<easyar.arengineinterop.OutputFrame>,easyar.arengineinterop.Detail/OptionalOfOutputFrame>(TKey,System.Func`2<TKey,TValue>)
inline OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A Detail_map_TisOptional_1_tFCA36B33E770473484760ED6767ED4673118E865_TisOptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A_mE919826EDE2EBC1FA0373BC4124850F2B1484329 (Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 ___v0, Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E* ___f1, const RuntimeMethod* method)
{
	return ((  OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A (*) (Optional_1_tFCA36B33E770473484760ED6767ED4673118E865, Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E*, const RuntimeMethod*))Detail_map_TisOptional_1_tF5114E38E552BAED882106D566BDE52772A76B22_TisOptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A_mEE6E25058EA6067876383C17CD7B7769600FEDD6_gshared)(___v0, ___f1, method);
}
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_FeedbackFrame__ctor(System.IntPtr,easyar.arengineinterop.Detail/OptionalOfOutputFrame,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_FeedbackFrame__ctor_m39630394FA565F02B909C5D7A059B52BEFFE73B1 (intptr_t ___inputFrame0, OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A ___previousOutputFrame1, intptr_t* ___Return2, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_FeedbackFrame_inputFrame(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_FeedbackFrame_inputFrame_m5EF576BFFE7FD1A56F72B9FE3054802F26462511 (intptr_t ___This0, intptr_t* ___Return1, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_FeedbackFrame_previousOutputFrame(System.IntPtr,easyar.arengineinterop.Detail/OptionalOfOutputFrame&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_FeedbackFrame_previousOutputFrame_m6B08796F2FC059A07549D61C865772D994129449 (intptr_t ___This0, OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A* ___Return1, const RuntimeMethod* method) ;
// System.Void System.Func`2<easyar.arengineinterop.Detail/OptionalOfOutputFrame,easyar.Optional`1<easyar.arengineinterop.OutputFrame>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2EC1EFAEE340028BBC8A936C8830050BE45CF891 (Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mE3614D1B945F5AE9B428942A43370245886EEB81_gshared)(__this, ___object0, ___method1, method);
}
// TValue easyar.arengineinterop.Detail::map<easyar.arengineinterop.Detail/OptionalOfOutputFrame,easyar.Optional`1<easyar.arengineinterop.OutputFrame>>(TKey,System.Func`2<TKey,TValue>)
inline Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 Detail_map_TisOptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A_TisOptional_1_tFCA36B33E770473484760ED6767ED4673118E865_mA01F8590D2DB630E0663FFA870646F6E3B4AE116 (OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A ___v0, Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674* ___f1, const RuntimeMethod* method)
{
	return ((  Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 (*) (OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A, Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674*, const RuntimeMethod*))Detail_map_TisOptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A_TisOptional_1_tF5114E38E552BAED882106D566BDE52772A76B22_mAEFA2622411AD97DDAA8E7F5CE48A4163D7A78FD_gshared)(___v0, ___f1, method);
}
// System.Void easyar.arengineinterop.FeedbackFrame/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF48AB9BDBA89C07FE3C4305D34ECEB4D6AE75010 (U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39* __this, const RuntimeMethod* method) ;
// System.Boolean easyar.Optional`1<easyar.arengineinterop.OutputFrame>::get_OnSome()
inline bool Optional_1_get_OnSome_mA0C2E790801692133FE5BE34DC5705ADC6D31DA6 (Optional_1_tFCA36B33E770473484760ED6767ED4673118E865* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Optional_1_tFCA36B33E770473484760ED6767ED4673118E865*, const RuntimeMethod*))Optional_1_get_OnSome_m6A4180C85633C2D06A1EBEFA7383BD23DF86EB04_gshared)(__this, method);
}
// System.Void easyar.arengineinterop.Detail/OptionalOfOutputFrame::set_has_value(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionalOfOutputFrame_set_has_value_m63B422A5D9A3223D7AAFF137F549EB424F5F84C9 (OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A* __this, bool ___value0, const RuntimeMethod* method) ;
// T easyar.Optional`1<easyar.arengineinterop.OutputFrame>::get_Value()
inline OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* Optional_1_get_Value_mB924C7295C38932932633887C11DB3DC0C3CBF65 (Optional_1_tFCA36B33E770473484760ED6767ED4673118E865* __this, const RuntimeMethod* method)
{
	return ((  OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* (*) (Optional_1_tFCA36B33E770473484760ED6767ED4673118E865*, const RuntimeMethod*))Optional_1_get_Value_m1E8149EB196B88B62B9737096E20FAC8F90304E3_gshared)(__this, method);
}
// System.Boolean easyar.arengineinterop.Detail/OptionalOfOutputFrame::get_has_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OptionalOfOutputFrame_get_has_value_m1272887CB9DF82290BC29DC68C4A8462D56153EB (OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A* __this, const RuntimeMethod* method) ;
// easyar.Optional`1<T> easyar.Optional`1<easyar.arengineinterop.OutputFrame>::get_Empty()
inline Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 Optional_1_get_Empty_mA160CB18BF34625A81DD825644E12290FD247341 (const RuntimeMethod* method)
{
	return ((  Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 (*) (const RuntimeMethod*))Optional_1_get_Empty_m9A998C1ED09C11E04958F42DCCFB3C75A01C9B64_gshared)(method);
}
// T easyar.arengineinterop.Detail::Object_from_c<easyar.arengineinterop.OutputFrame>(System.IntPtr,System.Func`2<System.IntPtr,System.IntPtr>)
inline OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* Detail_Object_from_c_TisOutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A_mF73927F5B4ABD0EEB4F164EB9275B1EFD8559E95 (intptr_t ___ptr0, Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* ___typeNameGetter1, const RuntimeMethod* method)
{
	return ((  OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* (*) (intptr_t, Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*, const RuntimeMethod*))Detail_Object_from_c_TisRuntimeObject_m2624B6062BEE02AA9893BEACBE1EBE44D3A093BE_gshared)(___ptr0, ___typeNameGetter1, method);
}
// easyar.Optional`1<T> easyar.Optional`1<easyar.arengineinterop.OutputFrame>::op_Implicit(T)
inline Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 Optional_1_op_Implicit_m3CB1CF13B1745B4AC024A7E64C4B2F8A8329B575 (OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* ___v0, const RuntimeMethod* method)
{
	return ((  Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 (*) (OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A*, const RuntimeMethod*))Optional_1_op_Implicit_mDACBD94DFA24E606D67BC9DE9487B9D648C8A998_gshared)(___v0, method);
}
// System.Void easyar.arengineinterop.Image::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image__ctor_mC7AF7A638417D097C78477967CD710CA732DDCAC (Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_Image__ctor(System.IntPtr,easyar.arengineinterop.PixelFormat,System.Int32,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_Image__ctor_m92EA6E16E720C586FF7FAC0723E4D1C4FBEE43C2 (intptr_t ___buffer0, int32_t ___format1, int32_t ___width2, int32_t ___height3, intptr_t* ___Return4, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_Image_buffer(System.IntPtr,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_Image_buffer_mE1606C058B03BE16C868C8FE043BA490E260613A (intptr_t ___This0, intptr_t* ___Return1, const RuntimeMethod* method) ;
// easyar.arengineinterop.PixelFormat easyar.arengineinterop.Detail::easyar_arengineinterop_Image_format(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detail_easyar_arengineinterop_Image_format_m6CB2578C933B8E70766539FE45821E202689DDBC (intptr_t ___This0, const RuntimeMethod* method) ;
// System.Int32 easyar.arengineinterop.Detail::easyar_arengineinterop_Image_width(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detail_easyar_arengineinterop_Image_width_m9E0C7E08BF4F19C50A254DB3321FEC0623B5BD26 (intptr_t ___This0, const RuntimeMethod* method) ;
// System.Int32 easyar.arengineinterop.Detail::easyar_arengineinterop_Image_height(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detail_easyar_arengineinterop_Image_height_m5AB5300AC8B1EA6DB1034029F1BE9490B23E3E0B (intptr_t ___This0, const RuntimeMethod* method) ;
// System.Int32 easyar.arengineinterop.Detail::easyar_arengineinterop_Image_pixelWidth(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detail_easyar_arengineinterop_Image_pixelWidth_mBF079E77FA003508EF2CB7805066CB50B1289A02 (intptr_t ___This0, const RuntimeMethod* method) ;
// System.Int32 easyar.arengineinterop.Detail::easyar_arengineinterop_Image_pixelHeight(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detail_easyar_arengineinterop_Image_pixelHeight_m3A791126159E78EF618B5F638B79874C8C856087 (intptr_t ___This0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Detail::easyar_arengineinterop_Image_create(System.IntPtr,easyar.arengineinterop.PixelFormat,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detail_easyar_arengineinterop_Image_create_m6008436DB937C24DB1C1F9A93DB2D17061A02E1D (intptr_t ___buffer0, int32_t ___format1, int32_t ___width2, int32_t ___height3, int32_t ___pixelWidth4, int32_t ___pixelHeight5, intptr_t* ___Return6, const RuntimeMethod* method) ;
// System.Single[] easyar.arengineinterop.Matrix44F::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Matrix44F_get_data_m2CB45958FF2BCEFB1F270BEA44DC61874D5246D3 (Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Matrix44F::set_data(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix44F_set_data_m1F7BEE7E4208ABD412CB71BC44E87E90216B6646 (Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Matrix44F::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix44F__ctor_m7F2277AA68B0E8A4202416FC480364356530C60D (Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B* __this, float ___data_00, float ___data_11, float ___data_22, float ___data_33, float ___data_44, float ___data_55, float ___data_66, float ___data_77, float ___data_88, float ___data_99, float ___data_1010, float ___data_1111, float ___data_1212, float ___data_1313, float ___data_1414, float ___data_1515, const RuntimeMethod* method) ;
// System.Single[] easyar.arengineinterop.Matrix33F::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Matrix33F_get_data_mB90DCF470EF7F48841210DCD243272195A57EB97 (Matrix33F_t7E090A60883B11F7CA3BED9011D8E3A14F3CF17F* __this, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Matrix33F::set_data(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix33F_set_data_mA022ABBC2B4A74DD4111BE62A923B56CA9F96B26 (Matrix33F_t7E090A60883B11F7CA3BED9011D8E3A14F3CF17F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Matrix33F::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix33F__ctor_m5BBC2A2E67E756CAE077663CA61D19BFA5661C12 (Matrix33F_t7E090A60883B11F7CA3BED9011D8E3A14F3CF17F* __this, float ___data_00, float ___data_11, float ___data_22, float ___data_33, float ___data_44, float ___data_55, float ___data_66, float ___data_77, float ___data_88, const RuntimeMethod* method) ;
// System.Double[] easyar.arengineinterop.Vec3D::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* Vec3D_get_data_m1D5BE17F5D58A66B160C18DFF613B8050FC7F988 (Vec3D_t2AFACDE6399373ED1C54CB46EBD82162DB454E28* __this, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Vec3D::set_data(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3D_set_data_m31F86B636A684EBCE2C62EC525F09F27BE46193B (Vec3D_t2AFACDE6399373ED1C54CB46EBD82162DB454E28* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___value0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Vec3D::.ctor(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3D__ctor_m0FA73DB1545AE2CCAA28D188FC0375D6C2E5EEE6 (Vec3D_t2AFACDE6399373ED1C54CB46EBD82162DB454E28* __this, double ___data_00, double ___data_11, double ___data_22, const RuntimeMethod* method) ;
// System.Single[] easyar.arengineinterop.Vec4F::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Vec4F_get_data_m7A81B36E5ECB9726C32546240037DA0504F91320 (Vec4F_tAD87052F93F29AAF1EFAD089614CFF34AAD4DA3A* __this, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Vec4F::set_data(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec4F_set_data_m7AAC34354DD070B1D1D9EBD336809B788DA1DF9E (Vec4F_tAD87052F93F29AAF1EFAD089614CFF34AAD4DA3A* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Vec4F::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec4F__ctor_m0FCC462BA7D5E746EDAB8A44BEBE1EEFBCCC38D0 (Vec4F_tAD87052F93F29AAF1EFAD089614CFF34AAD4DA3A* __this, float ___data_00, float ___data_11, float ___data_22, float ___data_33, const RuntimeMethod* method) ;
// System.Single[] easyar.arengineinterop.Vec3F::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Vec3F_get_data_m31AF1ABE5A2E3028CDF47260B0A3AE71E19E4709 (Vec3F_t09A439693B6DC70DE9C2CA29508F788D552B5CDF* __this, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Vec3F::set_data(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3F_set_data_mEDDE41A43E2E1808901F3FDD5E7F0BB9DE880F80 (Vec3F_t09A439693B6DC70DE9C2CA29508F788D552B5CDF* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Vec3F::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3F__ctor_m2F57EAF80E531D710DED6855C076A00CE6C1EE0A (Vec3F_t09A439693B6DC70DE9C2CA29508F788D552B5CDF* __this, float ___data_00, float ___data_11, float ___data_22, const RuntimeMethod* method) ;
// System.Single[] easyar.arengineinterop.Vec2F::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Vec2F_get_data_m54CE66C18232901D538FD7239762F654FB99E633 (Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C* __this, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Vec2F::set_data(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec2F_set_data_mF93C085EF0FD73A219F17867806371B55B988547 (Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Vec2F::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec2F__ctor_mE261CA950BC685F8AB7D5E8F4F96D9C750BA5646 (Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C* __this, float ___data_00, float ___data_11, const RuntimeMethod* method) ;
// System.Int32[] easyar.arengineinterop.Vec4I::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Vec4I_get_data_m450F2BF61F6D4D138FEB5A7FC57D16EB65A50E5D (Vec4I_t9FB91FC52AC50FE4AFEE89C67C2A36DCE0F5696A* __this, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Vec4I::set_data(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec4I_set_data_m7772EF75EC5C92174152A949FF746CD73B883CEC (Vec4I_t9FB91FC52AC50FE4AFEE89C67C2A36DCE0F5696A* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Vec4I::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec4I__ctor_mD3F54154A1AA5FE32A43208EB041BD34C4BB3C65 (Vec4I_t9FB91FC52AC50FE4AFEE89C67C2A36DCE0F5696A* __this, int32_t ___data_00, int32_t ___data_11, int32_t ___data_22, int32_t ___data_33, const RuntimeMethod* method) ;
// System.Int32[] easyar.arengineinterop.Vec2I::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Vec2I_get_data_m80ECBBC2086D697056701D49CF5FEA861A5485F4 (Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663* __this, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Vec2I::set_data(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec2I_set_data_mEE55FDA1BBAAB70A8A574E0CC7D0E086C5E6FAB0 (Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Void easyar.arengineinterop.Vec2I::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec2I__ctor_m9C2559B4380AFF93029A25F70741197DA4F58EA6 (Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663* __this, int32_t ___data_00, int32_t ___data_11, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void easyar.arengineinterop.Buffer/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m3F63008B45FF4796ED92037C0E39B2C1E75DC9A6 (U3CU3Ec__DisplayClass11_0_tDFEA58FCAC316F768A213DA747C5E3CDB1303EB8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void easyar.arengineinterop.Buffer/<>c__DisplayClass11_0::<wrapByteArray>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CwrapByteArrayU3Eb__0_m023200A6BD2B72535282BF9D55D96FA557032CD1 (U3CU3Ec__DisplayClass11_0_tDFEA58FCAC316F768A213DA747C5E3CDB1303EB8* __this, const RuntimeMethod* method) 
{
	{
		// return Buffer.wrap(h.AddrOfPinnedObject(), Length, () => h.Free());
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (&__this->___h_0);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_0, NULL);
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
// System.Void easyar.arengineinterop.Buffer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB3336B853D1D15CB41C852309B40959577A49930 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEB1C1EDFF33DE1775F72CF1102466A69FBB8AA2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEB1C1EDFF33DE1775F72CF1102466A69FBB8AA2F* L_0 = (U3CU3Ec_tEB1C1EDFF33DE1775F72CF1102466A69FBB8AA2F*)il2cpp_codegen_object_new(U3CU3Ec_tEB1C1EDFF33DE1775F72CF1102466A69FBB8AA2F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF6A7525265CE2EE75FBCD8A02FE12F7BAF634DE2(L_0, NULL);
		((U3CU3Ec_tEB1C1EDFF33DE1775F72CF1102466A69FBB8AA2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB1C1EDFF33DE1775F72CF1102466A69FBB8AA2F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEB1C1EDFF33DE1775F72CF1102466A69FBB8AA2F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEB1C1EDFF33DE1775F72CF1102466A69FBB8AA2F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void easyar.arengineinterop.Buffer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF6A7525265CE2EE75FBCD8A02FE12F7BAF634DE2 (U3CU3Ec_tEB1C1EDFF33DE1775F72CF1102466A69FBB8AA2F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void easyar.arengineinterop.Buffer/<>c::<wrapByteArray>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CwrapByteArrayU3Eb__12_0_m1514074FB0A0F41881B09E010D101C8C8E1D50C0 (U3CU3Ec_tEB1C1EDFF33DE1775F72CF1102466A69FBB8AA2F* __this, const RuntimeMethod* method) 
{
	{
		// return wrapByteArray(bytes, index, length, () => { });
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
// System.Void easyar.arengineinterop.Buffer/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m5B6DCE1BD57041510F1F4F1745835C474EFDFE7B (U3CU3Ec__DisplayClass13_0_tE7D0B55E5DF5EA36AA96ED602401B6710E808AC4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void easyar.arengineinterop.Buffer/<>c__DisplayClass13_0::<wrapByteArray>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CwrapByteArrayU3Eb__0_m11D5F30A58BF81D9F413B9950E58D6897B8A5FDF (U3CU3Ec__DisplayClass13_0_tE7D0B55E5DF5EA36AA96ED602401B6710E808AC4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// h.Free();
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (&__this->___h_0);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_0, NULL);
		// if (deleter != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___deleter_1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// deleter();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___deleter_1;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
	}

IL_0028:
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
// System.Void easyar.arengineinterop.BufferDictionary::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferDictionary__ctor_mAA4219EC4DBE7CEE5A5A5844EF9ACEF9F1E4D9B5 (BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) 
{
	{
		// internal BufferDictionary(IntPtr cdata, Action<IntPtr> deleter, Retainer retainer) : base(cdata, deleter, retainer)
		intptr_t L_0 = ___cdata0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = ___deleter1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ___retainer2;
		RefBase__ctor_m993A273C39CF74208BB74C9111ED2E10539ACAF9(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Object easyar.arengineinterop.BufferDictionary::CloneObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BufferDictionary_CloneObject_m5BE6929BCC2C47045AEBD20592454BFD6278E473 (BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// var cdata_new = IntPtr.Zero;
		V_0 = (0);
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_0 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		V_1 = (bool)((!(((RuntimeObject*)(Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		intptr_t L_3;
		L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
		NullCheck(L_2);
		Retainer_Invoke_m97B4D481743ACBAEB48ADA08F866D4F89A6A7405_inline(L_2, L_3, (&V_0), NULL);
	}

IL_002a:
	{
		// return new BufferDictionary(cdata_new, deleter_, retainer_);
		intptr_t L_4 = V_0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_5 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___deleter__1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_6 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0* L_7 = (BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0*)il2cpp_codegen_object_new(BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		BufferDictionary__ctor_mAA4219EC4DBE7CEE5A5A5844EF9ACEF9F1E4D9B5(L_7, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
// easyar.arengineinterop.BufferDictionary easyar.arengineinterop.BufferDictionary::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0* BufferDictionary_Clone_mA98FEE1BC6EC827B71E85C1299701C7B44DCD778 (BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0* V_0 = NULL;
	{
		// return (BufferDictionary)(CloneObject());
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Object easyar.arengineinterop.RefBase::CloneObject() */, __this);
		V_0 = ((BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0*)CastclassClass((RuntimeObject*)L_0, BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		// }
		BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0* L_1 = V_0;
		return L_1;
	}
}
// System.Void easyar.arengineinterop.BufferDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferDictionary__ctor_m45D5FC1354C333AA3F29FCEE9C7B0D3ACBA0CCFD (BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_BufferDictionary__dtor_m66959D82981597E32F55B10A60195176B1B9E080_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_BufferDictionary__retain_mED29687176F2F6BC186C69D87485469B04389834_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public BufferDictionary() : base(IntPtr.Zero, Detail.easyar_arengineinterop_BufferDictionary__dtor, Detail.easyar_arengineinterop_BufferDictionary__retain)
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)il2cpp_codegen_object_new(Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m3657419BEA982F0D4CD1F16862138852C86D0953(L_0, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_BufferDictionary__dtor_m66959D82981597E32F55B10A60195176B1B9E080_RuntimeMethod_var), NULL);
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_1 = (Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E*)il2cpp_codegen_object_new(Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Retainer__ctor_m480E22F827A714D7F4E3238D5DB0B0C6117C6108(L_1, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_BufferDictionary__retain_mED29687176F2F6BC186C69D87485469B04389834_RuntimeMethod_var), NULL);
		RefBase__ctor_m993A273C39CF74208BB74C9111ED2E10539ACAF9(__this, (0), L_0, L_1, NULL);
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_2, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_3 = V_0;
					if (!L_3)
					{
						goto IL_004e;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = IntPtr.Zero;
			V_1 = (0);
			// Detail.easyar_arengineinterop_BufferDictionary__ctor(out _return_value_);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_BufferDictionary__ctor_m7143C9663C064B7CC932822A6BBE5486846FCA8B((&V_1), NULL);
			// cdata_ = _return_value_;
			intptr_t L_5 = V_1;
			((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___cdata__0 = L_5;
			goto IL_004f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Int32 easyar.arengineinterop.BufferDictionary::count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferDictionary_count_m4343734D1DA5DF786A8AD83392614F4C1F512376 (BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_BufferDictionary_count(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			int32_t L_4;
			L_4 = Detail_easyar_arengineinterop_BufferDictionary_count_m0037CBD30FD4F856BBE8626FEDB472DC697954F8(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			int32_t L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Boolean easyar.arengineinterop.BufferDictionary::contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferDictionary_contains_m5AE2A3405329C88EB18B300C981A916C432C319C (BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0029;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0029:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_BufferDictionary_contains(cdata, Detail.String_to_c(ar, path));
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_4 = V_0;
			String_t* L_5 = ___path0;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			intptr_t L_6;
			L_6 = Detail_String_to_c_m856A19409F7727E08FB174F7F9944B8E1BABF10D(L_4, L_5, NULL);
			bool L_7;
			L_7 = Detail_easyar_arengineinterop_BufferDictionary_contains_mA05E49F087442BF75EE745CB0EA4EA8612DB34AE(L_3, L_6, NULL);
			V_1 = L_7;
			// return _return_value_;
			bool L_8 = V_1;
			V_2 = L_8;
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// easyar.Optional`1<easyar.arengineinterop.Buffer> easyar.arengineinterop.BufferDictionary::tryGet(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Optional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F BufferDictionary_tryGet_m2446497A3F26AD476B2EC33C90642DD7202ACEFA (BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_map_TisOptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F_TisOptional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F_mF45E1468D2CDBB8171F2F8143E6353BF412C2654_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CtryGetU3Eb__6_0_m27B1B76A9A9EDF7EBF30C67EB049FA0954D838CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	OptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Optional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886* G_B3_0 = NULL;
	OptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886* G_B2_0 = NULL;
	OptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0057;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0057:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// var _return_value_ = default(Detail.OptionalOfBuffer);
				il2cpp_codegen_initobj((&V_1), sizeof(OptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F));
				// Detail.easyar_arengineinterop_BufferDictionary_tryGet(cdata, Detail.String_to_c(ar, path), out _return_value_);
				intptr_t L_3;
				L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
				AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_4 = V_0;
				String_t* L_5 = ___path0;
				il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
				intptr_t L_6;
				L_6 = Detail_String_to_c_m856A19409F7727E08FB174F7F9944B8E1BABF10D(L_4, L_5, NULL);
				Detail_easyar_arengineinterop_BufferDictionary_tryGet_m15309835B2DFC756ED221CDE8D6107140E5D94DD(L_3, L_6, (&V_1), NULL);
				// return _return_value_.map(p => p.has_value ? Detail.Object_from_c<Buffer>(p.value, Detail.easyar_arengineinterop_Buffer__typeName) : Optional<Buffer>.Empty);
				OptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F L_7 = V_1;
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_il2cpp_TypeInfo_var);
				Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886* L_8 = ((U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
				Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886* L_9 = L_8;
				G_B2_0 = L_9;
				G_B2_1 = L_7;
				if (L_9)
				{
					G_B3_0 = L_9;
					G_B3_1 = L_7;
					goto IL_0045_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_il2cpp_TypeInfo_var);
				U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A* L_10 = ((U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886* L_11 = (Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886*)il2cpp_codegen_object_new(Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886_il2cpp_TypeInfo_var);
				NullCheck(L_11);
				Func_2__ctor_m1B25BB3EBC5D7B84251A741A66712E70B6C394BD(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CtryGetU3Eb__6_0_m27B1B76A9A9EDF7EBF30C67EB049FA0954D838CA_RuntimeMethod_var), NULL);
				Func_2_t3AE76F3EDC29A72CCA4CD4F87A9F7CE2E8868886* L_12 = L_11;
				((U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_12);
				G_B3_0 = L_12;
				G_B3_1 = G_B2_1;
			}

IL_0045_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
				Optional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F L_13;
				L_13 = Detail_map_TisOptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F_TisOptional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F_mF45E1468D2CDBB8171F2F8143E6353BF412C2654(G_B3_1, G_B3_0, Detail_map_TisOptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F_TisOptional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F_mF45E1468D2CDBB8171F2F8143E6353BF412C2654_RuntimeMethod_var);
				V_2 = L_13;
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
		Optional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F L_14 = V_2;
		return L_14;
	}
}
// System.Void easyar.arengineinterop.BufferDictionary::set(System.String,easyar.arengineinterop.Buffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferDictionary_set_m983CE12A46C8932F01444B4723EFB268AD47C8BC (BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0* __this, String_t* ___path0, Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348* ___buffer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_002e;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_002e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Detail.easyar_arengineinterop_BufferDictionary_set(cdata, Detail.String_to_c(ar, path), buffer.cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_4 = V_0;
			String_t* L_5 = ___path0;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			intptr_t L_6;
			L_6 = Detail_String_to_c_m856A19409F7727E08FB174F7F9944B8E1BABF10D(L_4, L_5, NULL);
			Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348* L_7 = ___buffer1;
			NullCheck(L_7);
			intptr_t L_8;
			L_8 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(L_7, NULL);
			Detail_easyar_arengineinterop_BufferDictionary_set_m5D1623414E56DBE8AB12F13D59742C188DB78CBA(L_3, L_6, L_8, NULL);
			goto IL_002f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Boolean easyar.arengineinterop.BufferDictionary::remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BufferDictionary_remove_m602613E8ED29D0C0208BD9C6B251735A4D8723D1 (BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0029;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0029:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_BufferDictionary_remove(cdata, Detail.String_to_c(ar, path));
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_4 = V_0;
			String_t* L_5 = ___path0;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			intptr_t L_6;
			L_6 = Detail_String_to_c_m856A19409F7727E08FB174F7F9944B8E1BABF10D(L_4, L_5, NULL);
			bool L_7;
			L_7 = Detail_easyar_arengineinterop_BufferDictionary_remove_m81BB1139315FC919F5C3066EAD5C9E6904BFEA50(L_3, L_6, NULL);
			V_1 = L_7;
			// return _return_value_;
			bool L_8 = V_1;
			V_2 = L_8;
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Void easyar.arengineinterop.BufferDictionary::clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferDictionary_clear_m1DE5FA666AD981ACB728E9350FC9836EAE7148BF (BufferDictionary_t4F850E9A9E989F6AB225C4BA043EB454044BBBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0017:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0021;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0021:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Detail.easyar_arengineinterop_BufferDictionary_clear(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_BufferDictionary_clear_m1F023785C6229EC4C21E45C0807650A6052EDEB1(L_3, NULL);
			goto IL_0022;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0022:
	{
		// }
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
// System.Void easyar.arengineinterop.BufferDictionary/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0F9FCE795FE821A412EC8D6FB4D4B2102DA9BA1F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A* L_0 = (U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A*)il2cpp_codegen_object_new(U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3E65D3CDEFF4B4EEDD300CB8EE919FD3C5BAC912(L_0, NULL);
		((U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void easyar.arengineinterop.BufferDictionary/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3E65D3CDEFF4B4EEDD300CB8EE919FD3C5BAC912 (U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// easyar.Optional`1<easyar.arengineinterop.Buffer> easyar.arengineinterop.BufferDictionary/<>c::<tryGet>b__6_0(easyar.arengineinterop.Detail/OptionalOfBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Optional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F U3CU3Ec_U3CtryGetU3Eb__6_0_m27B1B76A9A9EDF7EBF30C67EB049FA0954D838CA (U3CU3Ec_t7F261C290F06B80F6B6E9D84175B02B87ECB861A* __this, OptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_Object_from_c_TisBuffer_t23A7F32D34236FACC5665FD1285442A75EE83348_m9DD02EB9942F97081BAE78A4C22B1B19FEBF992A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_Buffer__typeName_m840009C8BB7D8BA32286BF04BE76E0E400FC720D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_Empty_mAFF7F5586BEC707120934AB14B4B417AF89C6F03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_op_Implicit_mA2D19E974C0B2443BC702D85CB9B30863A362F99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Optional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// return _return_value_.map(p => p.has_value ? Detail.Object_from_c<Buffer>(p.value, Detail.easyar_arengineinterop_Buffer__typeName) : Optional<Buffer>.Empty);
		bool L_0;
		L_0 = OptionalOfBuffer_get_has_value_mC12EFE3DE099D26C9720476D3DEFDD99640301D0((&___p0), NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Optional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F L_1;
		L_1 = Optional_1_get_Empty_mAFF7F5586BEC707120934AB14B4B417AF89C6F03(Optional_1_get_Empty_mAFF7F5586BEC707120934AB14B4B417AF89C6F03_RuntimeMethod_var);
		G_B3_0 = L_1;
		goto IL_002c;
	}

IL_0010:
	{
		OptionalOfBuffer_t1AB98CC9858B6DCD38EA40EF212B046E8F09F62F L_2 = ___p0;
		intptr_t L_3 = L_2.___value_1;
		Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* L_4 = (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*)il2cpp_codegen_object_new(Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0(L_4, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_Buffer__typeName_m840009C8BB7D8BA32286BF04BE76E0E400FC720D_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348* L_5;
		L_5 = Detail_Object_from_c_TisBuffer_t23A7F32D34236FACC5665FD1285442A75EE83348_m9DD02EB9942F97081BAE78A4C22B1B19FEBF992A(L_3, L_4, Detail_Object_from_c_TisBuffer_t23A7F32D34236FACC5665FD1285442A75EE83348_m9DD02EB9942F97081BAE78A4C22B1B19FEBF992A_RuntimeMethod_var);
		Optional_1_t0BDA1E21F39B08EAEBA33E506044BC61BFE2096F L_6;
		L_6 = Optional_1_op_Implicit_mA2D19E974C0B2443BC702D85CB9B30863A362F99(L_5, Optional_1_op_Implicit_mA2D19E974C0B2443BC702D85CB9B30863A362F99_RuntimeMethod_var);
		G_B3_0 = L_6;
	}

IL_002c:
	{
		return G_B3_0;
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
// System.Void easyar.arengineinterop.CallbackScheduler::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackScheduler__ctor_m88139E543F87D2412614D0AF98CC52BBED5A67D7 (CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) 
{
	{
		// internal CallbackScheduler(IntPtr cdata, Action<IntPtr> deleter, Retainer retainer) : base(cdata, deleter, retainer)
		intptr_t L_0 = ___cdata0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = ___deleter1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ___retainer2;
		RefBase__ctor_m993A273C39CF74208BB74C9111ED2E10539ACAF9(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Object easyar.arengineinterop.CallbackScheduler::CloneObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallbackScheduler_CloneObject_mC59AE5787AD6C2695AE1B6B68C365A7A1794A88B (CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// var cdata_new = IntPtr.Zero;
		V_0 = (0);
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_0 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		V_1 = (bool)((!(((RuntimeObject*)(Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		intptr_t L_3;
		L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
		NullCheck(L_2);
		Retainer_Invoke_m97B4D481743ACBAEB48ADA08F866D4F89A6A7405_inline(L_2, L_3, (&V_0), NULL);
	}

IL_002a:
	{
		// return new CallbackScheduler(cdata_new, deleter_, retainer_);
		intptr_t L_4 = V_0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_5 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___deleter__1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_6 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C* L_7 = (CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C*)il2cpp_codegen_object_new(CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		CallbackScheduler__ctor_m88139E543F87D2412614D0AF98CC52BBED5A67D7(L_7, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
// easyar.arengineinterop.CallbackScheduler easyar.arengineinterop.CallbackScheduler::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C* CallbackScheduler_Clone_m95346CD0EC4F3873076D605DEE700CECE5ACE096 (CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C* V_0 = NULL;
	{
		// return (CallbackScheduler)(CloneObject());
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Object easyar.arengineinterop.RefBase::CloneObject() */, __this);
		V_0 = ((CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C*)CastclassClass((RuntimeObject*)L_0, CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		// }
		CallbackScheduler_tFE50EE136F3A182580050953C51703A2101EDF6C* L_1 = V_0;
		return L_1;
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
// System.Void easyar.arengineinterop.DelayedCallbackScheduler::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelayedCallbackScheduler__ctor_m3C8DDAF88087433E9D7285FFF9DD165EE782BC54 (DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) 
{
	{
		// internal DelayedCallbackScheduler(IntPtr cdata, Action<IntPtr> deleter, Retainer retainer) : base(cdata, deleter, retainer)
		intptr_t L_0 = ___cdata0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = ___deleter1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ___retainer2;
		CallbackScheduler__ctor_m88139E543F87D2412614D0AF98CC52BBED5A67D7(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Object easyar.arengineinterop.DelayedCallbackScheduler::CloneObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DelayedCallbackScheduler_CloneObject_mFEFB9E717456FF02C011AB750B4A15AD0D720FB7 (DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// var cdata_new = IntPtr.Zero;
		V_0 = (0);
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_0 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		V_1 = (bool)((!(((RuntimeObject*)(Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		intptr_t L_3;
		L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
		NullCheck(L_2);
		Retainer_Invoke_m97B4D481743ACBAEB48ADA08F866D4F89A6A7405_inline(L_2, L_3, (&V_0), NULL);
	}

IL_002a:
	{
		// return new DelayedCallbackScheduler(cdata_new, deleter_, retainer_);
		intptr_t L_4 = V_0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_5 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___deleter__1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_6 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492* L_7 = (DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492*)il2cpp_codegen_object_new(DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		DelayedCallbackScheduler__ctor_m3C8DDAF88087433E9D7285FFF9DD165EE782BC54(L_7, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
// easyar.arengineinterop.DelayedCallbackScheduler easyar.arengineinterop.DelayedCallbackScheduler::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492* DelayedCallbackScheduler_Clone_mAA1C387D583028348A03831E51845BCBB97127B1 (DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492* V_0 = NULL;
	{
		// return (DelayedCallbackScheduler)(CloneObject());
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Object easyar.arengineinterop.RefBase::CloneObject() */, __this);
		V_0 = ((DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492*)CastclassClass((RuntimeObject*)L_0, DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		// }
		DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492* L_1 = V_0;
		return L_1;
	}
}
// System.Void easyar.arengineinterop.DelayedCallbackScheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelayedCallbackScheduler__ctor_m8EBCAD3F14A4484FD2C3CE8B51FA6DFB71498558 (DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_DelayedCallbackScheduler__dtor_mD78DC24E4D91D02B0A4CB4B6BD80A2930796FEA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_DelayedCallbackScheduler__retain_m21621C31553D2E93D305A3057FE6CF9C1D8C212F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public DelayedCallbackScheduler() : base(IntPtr.Zero, Detail.easyar_arengineinterop_DelayedCallbackScheduler__dtor, Detail.easyar_arengineinterop_DelayedCallbackScheduler__retain)
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)il2cpp_codegen_object_new(Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m3657419BEA982F0D4CD1F16862138852C86D0953(L_0, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_DelayedCallbackScheduler__dtor_mD78DC24E4D91D02B0A4CB4B6BD80A2930796FEA5_RuntimeMethod_var), NULL);
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_1 = (Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E*)il2cpp_codegen_object_new(Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Retainer__ctor_m480E22F827A714D7F4E3238D5DB0B0C6117C6108(L_1, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_DelayedCallbackScheduler__retain_m21621C31553D2E93D305A3057FE6CF9C1D8C212F_RuntimeMethod_var), NULL);
		CallbackScheduler__ctor_m88139E543F87D2412614D0AF98CC52BBED5A67D7(__this, (0), L_0, L_1, NULL);
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_2, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_3 = V_0;
					if (!L_3)
					{
						goto IL_004e;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = IntPtr.Zero;
			V_1 = (0);
			// Detail.easyar_arengineinterop_DelayedCallbackScheduler__ctor(out _return_value_);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_DelayedCallbackScheduler__ctor_mDA32C02D53A380608D933AD3CF7EBE3E33E4C057((&V_1), NULL);
			// cdata_ = _return_value_;
			intptr_t L_5 = V_1;
			((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___cdata__0 = L_5;
			goto IL_004f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Boolean easyar.arengineinterop.DelayedCallbackScheduler::runOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DelayedCallbackScheduler_runOne_m92068AE374DFABFE93BF2481EF29A6F1AA5BD12C (DelayedCallbackScheduler_t9ABEC4E73BE87F5A44ABCDCD73F3D05C58FF1492* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_DelayedCallbackScheduler_runOne(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			bool L_4;
			L_4 = Detail_easyar_arengineinterop_DelayedCallbackScheduler_runOne_mA1501AAD5633691F9D4A9A63FE2D2E9ED546CD7C(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			bool L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		bool L_6 = V_2;
		return L_6;
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
// System.Void easyar.arengineinterop.ImmediateCallbackScheduler::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediateCallbackScheduler__ctor_m69AB844F528AA099B185A0032A1F6B65511CEDC5 (ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) 
{
	{
		// internal ImmediateCallbackScheduler(IntPtr cdata, Action<IntPtr> deleter, Retainer retainer) : base(cdata, deleter, retainer)
		intptr_t L_0 = ___cdata0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = ___deleter1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ___retainer2;
		CallbackScheduler__ctor_m88139E543F87D2412614D0AF98CC52BBED5A67D7(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Object easyar.arengineinterop.ImmediateCallbackScheduler::CloneObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmediateCallbackScheduler_CloneObject_m7FC3935F3B13C3CAF83D68C93B610D0DF9D81A5C (ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// var cdata_new = IntPtr.Zero;
		V_0 = (0);
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_0 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		V_1 = (bool)((!(((RuntimeObject*)(Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		intptr_t L_3;
		L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
		NullCheck(L_2);
		Retainer_Invoke_m97B4D481743ACBAEB48ADA08F866D4F89A6A7405_inline(L_2, L_3, (&V_0), NULL);
	}

IL_002a:
	{
		// return new ImmediateCallbackScheduler(cdata_new, deleter_, retainer_);
		intptr_t L_4 = V_0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_5 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___deleter__1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_6 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4* L_7 = (ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4*)il2cpp_codegen_object_new(ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ImmediateCallbackScheduler__ctor_m69AB844F528AA099B185A0032A1F6B65511CEDC5(L_7, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
// easyar.arengineinterop.ImmediateCallbackScheduler easyar.arengineinterop.ImmediateCallbackScheduler::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4* ImmediateCallbackScheduler_Clone_m5490BA052759A89C749C2A24639A1E58F6E718F8 (ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4* V_0 = NULL;
	{
		// return (ImmediateCallbackScheduler)(CloneObject());
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Object easyar.arengineinterop.RefBase::CloneObject() */, __this);
		V_0 = ((ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4*)CastclassClass((RuntimeObject*)L_0, ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		// }
		ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4* L_1 = V_0;
		return L_1;
	}
}
// easyar.arengineinterop.ImmediateCallbackScheduler easyar.arengineinterop.ImmediateCallbackScheduler::getDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4* ImmediateCallbackScheduler_getDefault_m389366F77C546208FE4942DE896D0AD283C9455B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_Object_from_c_TisImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4_mC7E9E2B0095D69F1BAF23A7E7AAFFF20E00CBB62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_ImmediateCallbackScheduler__typeName_m7C9BC197AE5BDEA783D6A2DB79B2CC9FCD524ABA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4* V_2 = NULL;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0037;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0037:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = default(IntPtr);
			il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
			// Detail.easyar_arengineinterop_ImmediateCallbackScheduler_getDefault(out _return_value_);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_ImmediateCallbackScheduler_getDefault_m87E7E876531835D12DFB7415A69E206DA24BF221((&V_1), NULL);
			// return Detail.Object_from_c<ImmediateCallbackScheduler>(_return_value_, Detail.easyar_arengineinterop_ImmediateCallbackScheduler__typeName);
			intptr_t L_3 = V_1;
			Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* L_4 = (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*)il2cpp_codegen_object_new(Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0(L_4, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_ImmediateCallbackScheduler__typeName_m7C9BC197AE5BDEA783D6A2DB79B2CC9FCD524ABA_RuntimeMethod_var), NULL);
			ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4* L_5;
			L_5 = Detail_Object_from_c_TisImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4_mC7E9E2B0095D69F1BAF23A7E7AAFFF20E00CBB62(L_3, L_4, Detail_Object_from_c_TisImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4_mC7E9E2B0095D69F1BAF23A7E7AAFFF20E00CBB62_RuntimeMethod_var);
			V_2 = L_5;
			goto IL_0038;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		// }
		ImmediateCallbackScheduler_tB206FCE6E9865D0B3EFD09A8033692CF84B13DC4* L_6 = V_2;
		return L_6;
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
// System.Void easyar.arengineinterop.CameraParameters::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraParameters__ctor_mACDF43417D7A9A6CD4F1D8D28B258209FDF2A8AB (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) 
{
	{
		// internal CameraParameters(IntPtr cdata, Action<IntPtr> deleter, Retainer retainer) : base(cdata, deleter, retainer)
		intptr_t L_0 = ___cdata0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = ___deleter1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ___retainer2;
		RefBase__ctor_m993A273C39CF74208BB74C9111ED2E10539ACAF9(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Object easyar.arengineinterop.CameraParameters::CloneObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraParameters_CloneObject_mB85B39C9B0772AE6BC31F84074D94C7DF17F69E0 (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// var cdata_new = IntPtr.Zero;
		V_0 = (0);
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_0 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		V_1 = (bool)((!(((RuntimeObject*)(Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		intptr_t L_3;
		L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
		NullCheck(L_2);
		Retainer_Invoke_m97B4D481743ACBAEB48ADA08F866D4F89A6A7405_inline(L_2, L_3, (&V_0), NULL);
	}

IL_002a:
	{
		// return new CameraParameters(cdata_new, deleter_, retainer_);
		intptr_t L_4 = V_0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_5 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___deleter__1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_6 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* L_7 = (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9*)il2cpp_codegen_object_new(CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		CameraParameters__ctor_mACDF43417D7A9A6CD4F1D8D28B258209FDF2A8AB(L_7, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
// easyar.arengineinterop.CameraParameters easyar.arengineinterop.CameraParameters::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* CameraParameters_Clone_m19BF47AE752548202737A760E908D8D7D7B7C0FA (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* V_0 = NULL;
	{
		// return (CameraParameters)(CloneObject());
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Object easyar.arengineinterop.RefBase::CloneObject() */, __this);
		V_0 = ((CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9*)CastclassClass((RuntimeObject*)L_0, CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		// }
		CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* L_1 = V_0;
		return L_1;
	}
}
// System.Void easyar.arengineinterop.CameraParameters::.ctor(easyar.arengineinterop.Vec2I,easyar.arengineinterop.Vec2F,easyar.arengineinterop.Vec2F,easyar.arengineinterop.CameraDeviceType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraParameters__ctor_m8CB7187F1651740F378D60FC9B8D90EB0E99A97D (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 ___imageSize0, Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C ___focalLength1, Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C ___principalPoint2, int32_t ___cameraDeviceType3, int32_t ___cameraOrientation4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_CameraParameters__dtor_mFE5C97887C93DAA331C56A49EED56D3A608D699D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_CameraParameters__retain_m26185B36B555778254F5D1256DC8CEBD801078CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public CameraParameters(Vec2I imageSize, Vec2F focalLength, Vec2F principalPoint, CameraDeviceType cameraDeviceType, int cameraOrientation) : base(IntPtr.Zero, Detail.easyar_arengineinterop_CameraParameters__dtor, Detail.easyar_arengineinterop_CameraParameters__retain)
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)il2cpp_codegen_object_new(Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m3657419BEA982F0D4CD1F16862138852C86D0953(L_0, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_CameraParameters__dtor_mFE5C97887C93DAA331C56A49EED56D3A608D699D_RuntimeMethod_var), NULL);
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_1 = (Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E*)il2cpp_codegen_object_new(Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Retainer__ctor_m480E22F827A714D7F4E3238D5DB0B0C6117C6108(L_1, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_CameraParameters__retain_m26185B36B555778254F5D1256DC8CEBD801078CE_RuntimeMethod_var), NULL);
		RefBase__ctor_m993A273C39CF74208BB74C9111ED2E10539ACAF9(__this, (0), L_0, L_1, NULL);
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_2, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004b:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0055;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0055:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = IntPtr.Zero;
			V_1 = (0);
			// Detail.easyar_arengineinterop_CameraParameters__ctor(imageSize, focalLength, principalPoint, cameraDeviceType, cameraOrientation, out _return_value_);
			Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 L_5 = ___imageSize0;
			Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C L_6 = ___focalLength1;
			Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C L_7 = ___principalPoint2;
			int32_t L_8 = ___cameraDeviceType3;
			int32_t L_9 = ___cameraOrientation4;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_CameraParameters__ctor_mF1C541CD98212CF5FC355CBF6F754589BC5A9668(L_5, L_6, L_7, L_8, L_9, (&V_1), NULL);
			// cdata_ = _return_value_;
			intptr_t L_10 = V_1;
			((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___cdata__0 = L_10;
			goto IL_0056;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		// }
		return;
	}
}
// easyar.arengineinterop.Vec2I easyar.arengineinterop.CameraParameters::size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 CameraParameters_size_m37D25413054BEA18FC0961534A209CF2023A30C6 (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_CameraParameters_size(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 L_4;
			L_4 = Detail_easyar_arengineinterop_CameraParameters_size_m242A0AE541AB5054E1DC88A22331ACC9BB3CE570(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 L_6 = V_2;
		return L_6;
	}
}
// easyar.arengineinterop.Vec2F easyar.arengineinterop.CameraParameters::focalLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C CameraParameters_focalLength_m432D81035E50489C6DB1C8FA1F637915B72ACAB6 (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_CameraParameters_focalLength(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C L_4;
			L_4 = Detail_easyar_arengineinterop_CameraParameters_focalLength_m6252B60FFE76215F7DC8D93D2AF8CCAAEF815BEE(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C L_6 = V_2;
		return L_6;
	}
}
// easyar.arengineinterop.Vec2F easyar.arengineinterop.CameraParameters::principalPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C CameraParameters_principalPoint_m17A9D0B99C8A3EDE9D576840BDBCC91DF5C16DC5 (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_CameraParameters_principalPoint(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C L_4;
			L_4 = Detail_easyar_arengineinterop_CameraParameters_principalPoint_mE7AB5E77B773A38C036AE05976314C242821FDF2(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C L_6 = V_2;
		return L_6;
	}
}
// easyar.arengineinterop.CameraDeviceType easyar.arengineinterop.CameraParameters::cameraDeviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraParameters_cameraDeviceType_mF2C8FFC208E21C63C88D3EAD3864D13D501456BF (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_CameraParameters_cameraDeviceType(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			int32_t L_4;
			L_4 = Detail_easyar_arengineinterop_CameraParameters_cameraDeviceType_mF2FCA1691F01E40DB119A7AC290AC41F8D8F1014(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			int32_t L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Int32 easyar.arengineinterop.CameraParameters::cameraOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraParameters_cameraOrientation_m29D6AD56585A7B2E211171AE90A74101D1246E8B (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_CameraParameters_cameraOrientation(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			int32_t L_4;
			L_4 = Detail_easyar_arengineinterop_CameraParameters_cameraOrientation_mE3845A3FFDFF986D5828222B8EB7D208BA96F0B5(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			int32_t L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		int32_t L_6 = V_2;
		return L_6;
	}
}
// easyar.arengineinterop.CameraParameters easyar.arengineinterop.CameraParameters::createWithDefaultIntrinsics(easyar.arengineinterop.Vec2I,easyar.arengineinterop.CameraDeviceType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* CameraParameters_createWithDefaultIntrinsics_m3EDBF2ED562237242A93C84CCE35C073D8105BFE (Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 ___imageSize0, int32_t ___cameraDeviceType1, int32_t ___cameraOrientation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_Object_from_c_TisCameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9_mF0B33CFCF56FF1A9AB0BAE0B87FAD14365858D5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_CameraParameters__typeName_m33307B329BDB3E75ED4B9A3849CCFDE5D4A6ABCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* V_2 = NULL;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_003a;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_003a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = default(IntPtr);
			il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
			// Detail.easyar_arengineinterop_CameraParameters_createWithDefaultIntrinsics(imageSize, cameraDeviceType, cameraOrientation, out _return_value_);
			Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 L_3 = ___imageSize0;
			int32_t L_4 = ___cameraDeviceType1;
			int32_t L_5 = ___cameraOrientation2;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_CameraParameters_createWithDefaultIntrinsics_m2D9E9E2E04FAFD42ABF08D7D912678EC6024E7E8(L_3, L_4, L_5, (&V_1), NULL);
			// return Detail.Object_from_c<CameraParameters>(_return_value_, Detail.easyar_arengineinterop_CameraParameters__typeName);
			intptr_t L_6 = V_1;
			Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* L_7 = (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*)il2cpp_codegen_object_new(Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0(L_7, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_CameraParameters__typeName_m33307B329BDB3E75ED4B9A3849CCFDE5D4A6ABCC_RuntimeMethod_var), NULL);
			CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* L_8;
			L_8 = Detail_Object_from_c_TisCameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9_mF0B33CFCF56FF1A9AB0BAE0B87FAD14365858D5B(L_6, L_7, Detail_Object_from_c_TisCameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9_mF0B33CFCF56FF1A9AB0BAE0B87FAD14365858D5B_RuntimeMethod_var);
			V_2 = L_8;
			goto IL_003b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// }
		CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* L_9 = V_2;
		return L_9;
	}
}
// easyar.arengineinterop.CameraParameters easyar.arengineinterop.CameraParameters::getResized(easyar.arengineinterop.Vec2I)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* CameraParameters_getResized_mD96C535A0B7812A69437AA8D905D3DBDCB0C7E7E (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 ___imageSize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_Object_from_c_TisCameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9_mF0B33CFCF56FF1A9AB0BAE0B87FAD14365858D5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_CameraParameters__typeName_m33307B329BDB3E75ED4B9A3849CCFDE5D4A6ABCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* V_2 = NULL;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_003e;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_003e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = default(IntPtr);
			il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
			// Detail.easyar_arengineinterop_CameraParameters_getResized(cdata, imageSize, out _return_value_);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663 L_4 = ___imageSize0;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_CameraParameters_getResized_m58560BB7DA433AA9B4E53C9A71FFC4EEAFBBFF57(L_3, L_4, (&V_1), NULL);
			// return Detail.Object_from_c<CameraParameters>(_return_value_, Detail.easyar_arengineinterop_CameraParameters__typeName);
			intptr_t L_5 = V_1;
			Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* L_6 = (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*)il2cpp_codegen_object_new(Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0(L_6, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_CameraParameters__typeName_m33307B329BDB3E75ED4B9A3849CCFDE5D4A6ABCC_RuntimeMethod_var), NULL);
			CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* L_7;
			L_7 = Detail_Object_from_c_TisCameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9_mF0B33CFCF56FF1A9AB0BAE0B87FAD14365858D5B(L_5, L_6, Detail_Object_from_c_TisCameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9_mF0B33CFCF56FF1A9AB0BAE0B87FAD14365858D5B_RuntimeMethod_var);
			V_2 = L_7;
			goto IL_003f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		// }
		CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* L_8 = V_2;
		return L_8;
	}
}
// System.Int32 easyar.arengineinterop.CameraParameters::imageOrientation(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraParameters_imageOrientation_mB3D60456CA4EADB266CE6F14F74723713EC2290D (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, int32_t ___screenRotation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0023;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0023:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_CameraParameters_imageOrientation(cdata, screenRotation);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			int32_t L_4 = ___screenRotation0;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			int32_t L_5;
			L_5 = Detail_easyar_arengineinterop_CameraParameters_imageOrientation_m4172D220F6A8FD90796CC8D7D63AFC4A1865DC68(L_3, L_4, NULL);
			V_1 = L_5;
			// return _return_value_;
			int32_t L_6 = V_1;
			V_2 = L_6;
			goto IL_0024;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0024:
	{
		// }
		int32_t L_7 = V_2;
		return L_7;
	}
}
// System.Boolean easyar.arengineinterop.CameraParameters::imageHorizontalFlip(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraParameters_imageHorizontalFlip_mC3CE69AF8EC196563933EFFFB23D391538474AF3 (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, bool ___manualHorizontalFlip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0019:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0023;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0023:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_CameraParameters_imageHorizontalFlip(cdata, manualHorizontalFlip);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			bool L_4 = ___manualHorizontalFlip0;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			bool L_5;
			L_5 = Detail_easyar_arengineinterop_CameraParameters_imageHorizontalFlip_m0EE7184B58150C357AF074F59B27C12223C0760E(L_3, L_4, NULL);
			V_1 = L_5;
			// return _return_value_;
			bool L_6 = V_1;
			V_2 = L_6;
			goto IL_0024;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0024:
	{
		// }
		bool L_7 = V_2;
		return L_7;
	}
}
// easyar.arengineinterop.Matrix44F easyar.arengineinterop.CameraParameters::projection(System.Single,System.Single,System.Single,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B CameraParameters_projection_mD3DE9E91AB1887F63A63E2F5E07C620682EE340E (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, float ___nearPlane0, float ___farPlane1, float ___viewportAspectRatio2, int32_t ___screenRotation3, bool ___combiningFlip4, bool ___manualHorizontalFlip5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_002b;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_002b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_CameraParameters_projection(cdata, nearPlane, farPlane, viewportAspectRatio, screenRotation, combiningFlip, manualHorizontalFlip);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			float L_4 = ___nearPlane0;
			float L_5 = ___farPlane1;
			float L_6 = ___viewportAspectRatio2;
			int32_t L_7 = ___screenRotation3;
			bool L_8 = ___combiningFlip4;
			bool L_9 = ___manualHorizontalFlip5;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B L_10;
			L_10 = Detail_easyar_arengineinterop_CameraParameters_projection_m3858AE7AA1DDF25F6F2BB84D219C4D7D80F4DFFF(L_3, L_4, L_5, L_6, L_7, L_8, L_9, NULL);
			V_1 = L_10;
			// return _return_value_;
			Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B L_11 = V_1;
			V_2 = L_11;
			goto IL_002c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002c:
	{
		// }
		Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B L_12 = V_2;
		return L_12;
	}
}
// easyar.arengineinterop.Matrix44F easyar.arengineinterop.CameraParameters::imageProjection(System.Single,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B CameraParameters_imageProjection_m15DE35A7F4D5715BAB5800F46D455332A8052C1A (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, float ___viewportAspectRatio0, int32_t ___screenRotation1, bool ___combiningFlip2, bool ___manualHorizontalFlip3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001d:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0027;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0027:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_CameraParameters_imageProjection(cdata, viewportAspectRatio, screenRotation, combiningFlip, manualHorizontalFlip);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			float L_4 = ___viewportAspectRatio0;
			int32_t L_5 = ___screenRotation1;
			bool L_6 = ___combiningFlip2;
			bool L_7 = ___manualHorizontalFlip3;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B L_8;
			L_8 = Detail_easyar_arengineinterop_CameraParameters_imageProjection_m55F70485DF5C499F1139B16D146DEE488387EDAF(L_3, L_4, L_5, L_6, L_7, NULL);
			V_1 = L_8;
			// return _return_value_;
			Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B L_9 = V_1;
			V_2 = L_9;
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		// }
		Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B L_10 = V_2;
		return L_10;
	}
}
// easyar.arengineinterop.Vec2F easyar.arengineinterop.CameraParameters::screenCoordinatesFromImageCoordinates(System.Single,System.Int32,System.Boolean,System.Boolean,easyar.arengineinterop.Vec2F)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C CameraParameters_screenCoordinatesFromImageCoordinates_mD696B091DB1BC5BB20664A84FB47B5F19FAE2EDA (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, float ___viewportAspectRatio0, int32_t ___screenRotation1, bool ___combiningFlip2, bool ___manualHorizontalFlip3, Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C ___imageCoordinates4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0029;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0029:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_CameraParameters_screenCoordinatesFromImageCoordinates(cdata, viewportAspectRatio, screenRotation, combiningFlip, manualHorizontalFlip, imageCoordinates);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			float L_4 = ___viewportAspectRatio0;
			int32_t L_5 = ___screenRotation1;
			bool L_6 = ___combiningFlip2;
			bool L_7 = ___manualHorizontalFlip3;
			Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C L_8 = ___imageCoordinates4;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C L_9;
			L_9 = Detail_easyar_arengineinterop_CameraParameters_screenCoordinatesFromImageCoordinates_m9EAEAAAC47C80D2A76D5784057C53D82049CC4C6(L_3, L_4, L_5, L_6, L_7, L_8, NULL);
			V_1 = L_9;
			// return _return_value_;
			Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C L_10 = V_1;
			V_2 = L_10;
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C L_11 = V_2;
		return L_11;
	}
}
// easyar.arengineinterop.Vec2F easyar.arengineinterop.CameraParameters::imageCoordinatesFromScreenCoordinates(System.Single,System.Int32,System.Boolean,System.Boolean,easyar.arengineinterop.Vec2F)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C CameraParameters_imageCoordinatesFromScreenCoordinates_m6F86C2DDFF207BBC19F62661CF8B02217F288C58 (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, float ___viewportAspectRatio0, int32_t ___screenRotation1, bool ___combiningFlip2, bool ___manualHorizontalFlip3, Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C ___screenCoordinates4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0029;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0029:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_CameraParameters_imageCoordinatesFromScreenCoordinates(cdata, viewportAspectRatio, screenRotation, combiningFlip, manualHorizontalFlip, screenCoordinates);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			float L_4 = ___viewportAspectRatio0;
			int32_t L_5 = ___screenRotation1;
			bool L_6 = ___combiningFlip2;
			bool L_7 = ___manualHorizontalFlip3;
			Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C L_8 = ___screenCoordinates4;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C L_9;
			L_9 = Detail_easyar_arengineinterop_CameraParameters_imageCoordinatesFromScreenCoordinates_mAA22D9AE4049C2A99FE1C3E5B8A75CE28267803A(L_3, L_4, L_5, L_6, L_7, L_8, NULL);
			V_1 = L_9;
			// return _return_value_;
			Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C L_10 = V_1;
			V_2 = L_10;
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C L_11 = V_2;
		return L_11;
	}
}
// System.Boolean easyar.arengineinterop.CameraParameters::equalsTo(easyar.arengineinterop.CameraParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraParameters_equalsTo_m69FA52EF93DFA3194B9B7BB42D771F2C8A0CD8F0 (CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* __this, CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001e:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0028:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_CameraParameters_equalsTo(cdata, other.cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* L_4 = ___other0;
			NullCheck(L_4);
			intptr_t L_5;
			L_5 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(L_4, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			bool L_6;
			L_6 = Detail_easyar_arengineinterop_CameraParameters_equalsTo_mF317C41ABCCD78E16FBE3636DFDD76EB4F26AC36(L_3, L_5, NULL);
			V_1 = L_6;
			// return _return_value_;
			bool L_7 = V_1;
			V_2 = L_7;
			goto IL_0029;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		// }
		bool L_8 = V_2;
		return L_8;
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
// System.Int32 easyar.arengineinterop.Engine::schemaHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_schemaHash_mDEEDE370938A567300B9377FB3FB7DD04A268AFA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0012:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_001c;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_001c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_Engine_schemaHash();
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			int32_t L_3;
			L_3 = Detail_easyar_arengineinterop_Engine_schemaHash_mD33C275015E85CE90C8E0CAE3273DC4B6FD4A29F(NULL);
			V_1 = L_3;
			// return _return_value_;
			int32_t L_4 = V_1;
			V_2 = L_4;
			goto IL_001d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001d:
	{
		// }
		int32_t L_5 = V_2;
		return L_5;
	}
}
// System.Boolean easyar.arengineinterop.Engine::initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Engine_initialize_m4642651C4E38B3CBEF16EDC617D747666C282F3F (String_t* ___licenseKey0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (Detail.easyar_arengineinterop_Engine_schemaHash() != 25178734)
		il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Detail_easyar_arengineinterop_Engine_schemaHash_mD33C275015E85CE90C8E0CAE3273DC4B6FD4A29F(NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)((int32_t)25178734)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// throw new InvalidOperationException("SchemaHashNotMatched");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E43768452D53B5508E316A11612D1DDC9C66D07)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Engine_initialize_m4642651C4E38B3CBEF16EDC617D747666C282F3F_RuntimeMethod_var)));
	}

IL_0020:
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_3 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_3, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0042;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_Engine_initialize(Detail.String_to_c(ar, licenseKey));
			AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_6 = V_1;
			String_t* L_7 = ___licenseKey0;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			intptr_t L_8;
			L_8 = Detail_String_to_c_m856A19409F7727E08FB174F7F9944B8E1BABF10D(L_6, L_7, NULL);
			bool L_9;
			L_9 = Detail_easyar_arengineinterop_Engine_initialize_m9C1D45BDE9E5E8818E3320763F9B1EC4732D4B9F(L_8, NULL);
			V_2 = L_9;
			// return _return_value_;
			bool L_10 = V_2;
			V_3 = L_10;
			goto IL_0043;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// }
		bool L_11 = V_3;
		return L_11;
	}
}
// System.Void easyar.arengineinterop.Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine__ctor_m6B6064E8F8DCA2565D4722DE0FCA6F5A7593134D (Engine_t4A2F95BC44223C659EB8B58D420971E0B1F8F1E9* __this, const RuntimeMethod* method) 
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
// System.Void easyar.arengineinterop.InputFrame::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFrame__ctor_m8024A82E86D9E94BF6EC12767552C6756D1B282E (InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) 
{
	{
		// internal InputFrame(IntPtr cdata, Action<IntPtr> deleter, Retainer retainer) : base(cdata, deleter, retainer)
		intptr_t L_0 = ___cdata0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = ___deleter1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ___retainer2;
		RefBase__ctor_m993A273C39CF74208BB74C9111ED2E10539ACAF9(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Object easyar.arengineinterop.InputFrame::CloneObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputFrame_CloneObject_mA4FBD16B11E369A289A48698984C737FE241AD82 (InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// var cdata_new = IntPtr.Zero;
		V_0 = (0);
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_0 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		V_1 = (bool)((!(((RuntimeObject*)(Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		intptr_t L_3;
		L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
		NullCheck(L_2);
		Retainer_Invoke_m97B4D481743ACBAEB48ADA08F866D4F89A6A7405_inline(L_2, L_3, (&V_0), NULL);
	}

IL_002a:
	{
		// return new InputFrame(cdata_new, deleter_, retainer_);
		intptr_t L_4 = V_0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_5 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___deleter__1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_6 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* L_7 = (InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E*)il2cpp_codegen_object_new(InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		InputFrame__ctor_m8024A82E86D9E94BF6EC12767552C6756D1B282E(L_7, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
// easyar.arengineinterop.InputFrame easyar.arengineinterop.InputFrame::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* InputFrame_Clone_mBA5D00BBB24F345D2D4427CA69B7D3A65B679D68 (InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* V_0 = NULL;
	{
		// return (InputFrame)(CloneObject());
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Object easyar.arengineinterop.RefBase::CloneObject() */, __this);
		V_0 = ((InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E*)CastclassClass((RuntimeObject*)L_0, InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		// }
		InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 easyar.arengineinterop.InputFrame::index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFrame_index_m3B3ABB7C2A4B9D7CEE042DFD03508002CD6DB425 (InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_InputFrame_index(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			int32_t L_4;
			L_4 = Detail_easyar_arengineinterop_InputFrame_index_m61888ED8B4C73E1771AB64FA1B8952BA3A22EE63(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			int32_t L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		int32_t L_6 = V_2;
		return L_6;
	}
}
// easyar.arengineinterop.Image easyar.arengineinterop.InputFrame::image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* InputFrame_image_mCF2FC9E6CA1FFC357A1BE71760256D6DFDF9EB84 (InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_Object_from_c_TisImage_t16A156B4D3660113F83BFF9B560C217BDA00F40C_m9548E89A5AFF4CB30E1F673B653773E9590F5C6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_Image__typeName_mDE9BAFB728BAEA4F5B12A08DE032E5F6F06ACA59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* V_2 = NULL;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_003d;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = default(IntPtr);
			il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
			// Detail.easyar_arengineinterop_InputFrame_image(cdata, out _return_value_);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_InputFrame_image_m9562B5EFA4C839FB1EFB12DAB55CC87D31136C3F(L_3, (&V_1), NULL);
			// return Detail.Object_from_c<Image>(_return_value_, Detail.easyar_arengineinterop_Image__typeName);
			intptr_t L_4 = V_1;
			Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* L_5 = (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*)il2cpp_codegen_object_new(Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0(L_5, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_Image__typeName_mDE9BAFB728BAEA4F5B12A08DE032E5F6F06ACA59_RuntimeMethod_var), NULL);
			Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* L_6;
			L_6 = Detail_Object_from_c_TisImage_t16A156B4D3660113F83BFF9B560C217BDA00F40C_m9548E89A5AFF4CB30E1F673B653773E9590F5C6B(L_4, L_5, Detail_Object_from_c_TisImage_t16A156B4D3660113F83BFF9B560C217BDA00F40C_m9548E89A5AFF4CB30E1F673B653773E9590F5C6B_RuntimeMethod_var);
			V_2 = L_6;
			goto IL_003e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// }
		Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* L_7 = V_2;
		return L_7;
	}
}
// System.Boolean easyar.arengineinterop.InputFrame::hasCameraParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFrame_hasCameraParameters_m0E3E43CC0E3ED427B9F3193BDFE5C98A17BA4763 (InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_InputFrame_hasCameraParameters(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			bool L_4;
			L_4 = Detail_easyar_arengineinterop_InputFrame_hasCameraParameters_mBA4C489E62A2035FEE28774483C95091BE6E2E53(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			bool L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		bool L_6 = V_2;
		return L_6;
	}
}
// easyar.arengineinterop.CameraParameters easyar.arengineinterop.InputFrame::cameraParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* InputFrame_cameraParameters_m0FF752376A613E9FEFFA087E87A1CBA30F2083B6 (InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_Object_from_c_TisCameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9_mF0B33CFCF56FF1A9AB0BAE0B87FAD14365858D5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_CameraParameters__typeName_m33307B329BDB3E75ED4B9A3849CCFDE5D4A6ABCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* V_2 = NULL;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_003d;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = default(IntPtr);
			il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
			// Detail.easyar_arengineinterop_InputFrame_cameraParameters(cdata, out _return_value_);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_InputFrame_cameraParameters_mE7643A9AB26D3411B4F6957DDF535DB7B49E7F73(L_3, (&V_1), NULL);
			// return Detail.Object_from_c<CameraParameters>(_return_value_, Detail.easyar_arengineinterop_CameraParameters__typeName);
			intptr_t L_4 = V_1;
			Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* L_5 = (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*)il2cpp_codegen_object_new(Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0(L_5, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_CameraParameters__typeName_m33307B329BDB3E75ED4B9A3849CCFDE5D4A6ABCC_RuntimeMethod_var), NULL);
			CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* L_6;
			L_6 = Detail_Object_from_c_TisCameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9_mF0B33CFCF56FF1A9AB0BAE0B87FAD14365858D5B(L_4, L_5, Detail_Object_from_c_TisCameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9_mF0B33CFCF56FF1A9AB0BAE0B87FAD14365858D5B_RuntimeMethod_var);
			V_2 = L_6;
			goto IL_003e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// }
		CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* L_7 = V_2;
		return L_7;
	}
}
// System.Boolean easyar.arengineinterop.InputFrame::hasTemporalInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFrame_hasTemporalInformation_m23A82AF5A3BA3B21527A3D6AB0319C782A98DDA6 (InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_InputFrame_hasTemporalInformation(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			bool L_4;
			L_4 = Detail_easyar_arengineinterop_InputFrame_hasTemporalInformation_m77CC5F8AA69E05F99795F6BC49C02289A0D36139(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			bool L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Double easyar.arengineinterop.InputFrame::timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double InputFrame_timestamp_mD1AAFEC6930DBD32DFE04533133193534FACC11E (InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_InputFrame_timestamp(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			double L_4;
			L_4 = Detail_easyar_arengineinterop_InputFrame_timestamp_mE552E1B9F9CE2D9E97C33D6213A2B541C550852A(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			double L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		double L_6 = V_2;
		return L_6;
	}
}
// System.Boolean easyar.arengineinterop.InputFrame::hasSpatialInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputFrame_hasSpatialInformation_m8511D6DC760C959F9012F012C02EF2CEB64A1D12 (InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_InputFrame_hasSpatialInformation(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			bool L_4;
			L_4 = Detail_easyar_arengineinterop_InputFrame_hasSpatialInformation_m5845CBAAE1AA371FCE94CFA1CFB94E7D7B9ADF1B(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			bool L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		bool L_6 = V_2;
		return L_6;
	}
}
// easyar.arengineinterop.Matrix44F easyar.arengineinterop.InputFrame::cameraTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B InputFrame_cameraTransform_m81AA4A57A78098EE85B57EB575A3861779EB6174 (InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_InputFrame_cameraTransform(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B L_4;
			L_4 = Detail_easyar_arengineinterop_InputFrame_cameraTransform_m031F5960A70AF1DBFD389ECDB667AA70803E024B(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B L_6 = V_2;
		return L_6;
	}
}
// easyar.arengineinterop.MotionTrackingStatus easyar.arengineinterop.InputFrame::trackingStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputFrame_trackingStatus_m23C9CFEF648DBEE537B46B57157D4E4AF637E6F1 (InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_InputFrame_trackingStatus(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			int32_t L_4;
			L_4 = Detail_easyar_arengineinterop_InputFrame_trackingStatus_m19AC915AE931BE8455E3F812819E50AA2A6594E2(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			int32_t L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		int32_t L_6 = V_2;
		return L_6;
	}
}
// easyar.arengineinterop.InputFrame easyar.arengineinterop.InputFrame::create(easyar.arengineinterop.Image,easyar.arengineinterop.CameraParameters,System.Double,easyar.arengineinterop.Matrix44F,easyar.arengineinterop.MotionTrackingStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* InputFrame_create_m21A6CF908F9DBB0D908CACD0CB6AFAD3821573AD (Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* ___image0, CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* ___cameraParameters1, double ___timestamp2, Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B ___cameraTransform3, int32_t ___trackingStatus4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_InputFrame__typeName_m2E5EBC87B0857FD2BB25BE6D5F40D94E05D35843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* V_2 = NULL;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0047;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0047:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = default(IntPtr);
			il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
			// Detail.easyar_arengineinterop_InputFrame_create(image.cdata, cameraParameters.cdata, timestamp, cameraTransform, trackingStatus, out _return_value_);
			Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* L_3 = ___image0;
			NullCheck(L_3);
			intptr_t L_4;
			L_4 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(L_3, NULL);
			CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* L_5 = ___cameraParameters1;
			NullCheck(L_5);
			intptr_t L_6;
			L_6 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(L_5, NULL);
			double L_7 = ___timestamp2;
			Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B L_8 = ___cameraTransform3;
			int32_t L_9 = ___trackingStatus4;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_InputFrame_create_mA84BD86E9CA691042B80317BA5F8B3B19D03600C(L_4, L_6, L_7, L_8, L_9, (&V_1), NULL);
			// return Detail.Object_from_c<InputFrame>(_return_value_, Detail.easyar_arengineinterop_InputFrame__typeName);
			intptr_t L_10 = V_1;
			Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* L_11 = (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*)il2cpp_codegen_object_new(Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
			NullCheck(L_11);
			Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0(L_11, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_InputFrame__typeName_m2E5EBC87B0857FD2BB25BE6D5F40D94E05D35843_RuntimeMethod_var), NULL);
			InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* L_12;
			L_12 = Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7(L_10, L_11, Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7_RuntimeMethod_var);
			V_2 = L_12;
			goto IL_0048;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		// }
		InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* L_13 = V_2;
		return L_13;
	}
}
// easyar.arengineinterop.InputFrame easyar.arengineinterop.InputFrame::createWithImageAndCameraParametersAndTemporal(easyar.arengineinterop.Image,easyar.arengineinterop.CameraParameters,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* InputFrame_createWithImageAndCameraParametersAndTemporal_m704C6E71F1B672B8DEB254AA607D0D0D45152CC7 (Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* ___image0, CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* ___cameraParameters1, double ___timestamp2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_InputFrame__typeName_m2E5EBC87B0857FD2BB25BE6D5F40D94E05D35843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* V_2 = NULL;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0044;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0044:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = default(IntPtr);
			il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
			// Detail.easyar_arengineinterop_InputFrame_createWithImageAndCameraParametersAndTemporal(image.cdata, cameraParameters.cdata, timestamp, out _return_value_);
			Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* L_3 = ___image0;
			NullCheck(L_3);
			intptr_t L_4;
			L_4 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(L_3, NULL);
			CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* L_5 = ___cameraParameters1;
			NullCheck(L_5);
			intptr_t L_6;
			L_6 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(L_5, NULL);
			double L_7 = ___timestamp2;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_InputFrame_createWithImageAndCameraParametersAndTemporal_m1D8B1523D0F0FADF6D1BE5A4418E38A0D5B15A64(L_4, L_6, L_7, (&V_1), NULL);
			// return Detail.Object_from_c<InputFrame>(_return_value_, Detail.easyar_arengineinterop_InputFrame__typeName);
			intptr_t L_8 = V_1;
			Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* L_9 = (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*)il2cpp_codegen_object_new(Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
			NullCheck(L_9);
			Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0(L_9, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_InputFrame__typeName_m2E5EBC87B0857FD2BB25BE6D5F40D94E05D35843_RuntimeMethod_var), NULL);
			InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* L_10;
			L_10 = Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7(L_8, L_9, Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7_RuntimeMethod_var);
			V_2 = L_10;
			goto IL_0045;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		// }
		InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* L_11 = V_2;
		return L_11;
	}
}
// easyar.arengineinterop.InputFrame easyar.arengineinterop.InputFrame::createWithImageAndCameraParameters(easyar.arengineinterop.Image,easyar.arengineinterop.CameraParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* InputFrame_createWithImageAndCameraParameters_mEEB8F45A1380217E4D27A6FC6141FAD35C9C1C81 (Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* ___image0, CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* ___cameraParameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_InputFrame__typeName_m2E5EBC87B0857FD2BB25BE6D5F40D94E05D35843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* V_2 = NULL;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0043;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0043:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = default(IntPtr);
			il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
			// Detail.easyar_arengineinterop_InputFrame_createWithImageAndCameraParameters(image.cdata, cameraParameters.cdata, out _return_value_);
			Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* L_3 = ___image0;
			NullCheck(L_3);
			intptr_t L_4;
			L_4 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(L_3, NULL);
			CameraParameters_tEB387092211910F2382A0A2D53F0797CDF2B98D9* L_5 = ___cameraParameters1;
			NullCheck(L_5);
			intptr_t L_6;
			L_6 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(L_5, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_InputFrame_createWithImageAndCameraParameters_m7DB295C78F461B4178F199FBC856FCD7BD52E30A(L_4, L_6, (&V_1), NULL);
			// return Detail.Object_from_c<InputFrame>(_return_value_, Detail.easyar_arengineinterop_InputFrame__typeName);
			intptr_t L_7 = V_1;
			Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* L_8 = (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*)il2cpp_codegen_object_new(Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0(L_8, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_InputFrame__typeName_m2E5EBC87B0857FD2BB25BE6D5F40D94E05D35843_RuntimeMethod_var), NULL);
			InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* L_9;
			L_9 = Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7(L_7, L_8, Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7_RuntimeMethod_var);
			V_2 = L_9;
			goto IL_0044;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		// }
		InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* L_10 = V_2;
		return L_10;
	}
}
// easyar.arengineinterop.InputFrame easyar.arengineinterop.InputFrame::createWithImage(easyar.arengineinterop.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* InputFrame_createWithImage_m0B76C5DEC720D95F1B0FF569A6A732AF741C32C7 (Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* ___image0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_InputFrame__typeName_m2E5EBC87B0857FD2BB25BE6D5F40D94E05D35843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* V_2 = NULL;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_003d;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = default(IntPtr);
			il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
			// Detail.easyar_arengineinterop_InputFrame_createWithImage(image.cdata, out _return_value_);
			Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* L_3 = ___image0;
			NullCheck(L_3);
			intptr_t L_4;
			L_4 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(L_3, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_InputFrame_createWithImage_m45808FFE8CA43D04292C04CEFA6EFD0997013A9E(L_4, (&V_1), NULL);
			// return Detail.Object_from_c<InputFrame>(_return_value_, Detail.easyar_arengineinterop_InputFrame__typeName);
			intptr_t L_5 = V_1;
			Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* L_6 = (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*)il2cpp_codegen_object_new(Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0(L_6, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_InputFrame__typeName_m2E5EBC87B0857FD2BB25BE6D5F40D94E05D35843_RuntimeMethod_var), NULL);
			InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* L_7;
			L_7 = Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7(L_5, L_6, Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7_RuntimeMethod_var);
			V_2 = L_7;
			goto IL_003e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// }
		InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* L_8 = V_2;
		return L_8;
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
// System.Void easyar.arengineinterop.FrameFilterResult::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameFilterResult__ctor_mD86C6E1A3B63A4623ED29FF202F69065C469CFE7 (FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) 
{
	{
		// internal FrameFilterResult(IntPtr cdata, Action<IntPtr> deleter, Retainer retainer) : base(cdata, deleter, retainer)
		intptr_t L_0 = ___cdata0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = ___deleter1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ___retainer2;
		RefBase__ctor_m993A273C39CF74208BB74C9111ED2E10539ACAF9(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Object easyar.arengineinterop.FrameFilterResult::CloneObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FrameFilterResult_CloneObject_mA2F94F7D4D523AA38EF63479DE09206468FCCE8F (FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// var cdata_new = IntPtr.Zero;
		V_0 = (0);
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_0 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		V_1 = (bool)((!(((RuntimeObject*)(Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		intptr_t L_3;
		L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
		NullCheck(L_2);
		Retainer_Invoke_m97B4D481743ACBAEB48ADA08F866D4F89A6A7405_inline(L_2, L_3, (&V_0), NULL);
	}

IL_002a:
	{
		// return new FrameFilterResult(cdata_new, deleter_, retainer_);
		intptr_t L_4 = V_0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_5 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___deleter__1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_6 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA* L_7 = (FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA*)il2cpp_codegen_object_new(FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		FrameFilterResult__ctor_mD86C6E1A3B63A4623ED29FF202F69065C469CFE7(L_7, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
// easyar.arengineinterop.FrameFilterResult easyar.arengineinterop.FrameFilterResult::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA* FrameFilterResult_Clone_mD8EB0A7906242E895E78DD93C9BB108D29814F04 (FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA* V_0 = NULL;
	{
		// return (FrameFilterResult)(CloneObject());
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Object easyar.arengineinterop.RefBase::CloneObject() */, __this);
		V_0 = ((FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA*)CastclassClass((RuntimeObject*)L_0, FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		// }
		FrameFilterResult_tB5FC321FC3200FF4F7FE19421071105AC2BD9EAA* L_1 = V_0;
		return L_1;
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
// System.Void easyar.arengineinterop.OutputFrame::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputFrame__ctor_mFDABA6E2CD17BDE2C905D86902D80C02E9E233EA (OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) 
{
	{
		// internal OutputFrame(IntPtr cdata, Action<IntPtr> deleter, Retainer retainer) : base(cdata, deleter, retainer)
		intptr_t L_0 = ___cdata0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = ___deleter1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ___retainer2;
		RefBase__ctor_m993A273C39CF74208BB74C9111ED2E10539ACAF9(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Object easyar.arengineinterop.OutputFrame::CloneObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OutputFrame_CloneObject_m587789074524B15C4EFBD029A9A13C68C58CB08E (OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// var cdata_new = IntPtr.Zero;
		V_0 = (0);
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_0 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		V_1 = (bool)((!(((RuntimeObject*)(Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		intptr_t L_3;
		L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
		NullCheck(L_2);
		Retainer_Invoke_m97B4D481743ACBAEB48ADA08F866D4F89A6A7405_inline(L_2, L_3, (&V_0), NULL);
	}

IL_002a:
	{
		// return new OutputFrame(cdata_new, deleter_, retainer_);
		intptr_t L_4 = V_0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_5 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___deleter__1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_6 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* L_7 = (OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A*)il2cpp_codegen_object_new(OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		OutputFrame__ctor_mFDABA6E2CD17BDE2C905D86902D80C02E9E233EA(L_7, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
// easyar.arengineinterop.OutputFrame easyar.arengineinterop.OutputFrame::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* OutputFrame_Clone_m685F7E1DA7E9FBEA67BB73848651D90C7A264BEF (OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* V_0 = NULL;
	{
		// return (OutputFrame)(CloneObject());
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Object easyar.arengineinterop.RefBase::CloneObject() */, __this);
		V_0 = ((OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A*)CastclassClass((RuntimeObject*)L_0, OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		// }
		OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* L_1 = V_0;
		return L_1;
	}
}
// System.Void easyar.arengineinterop.OutputFrame::.ctor(easyar.arengineinterop.InputFrame,System.Collections.Generic.List`1<easyar.Optional`1<easyar.arengineinterop.FrameFilterResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputFrame__ctor_mEFE601D3DA588F94155AAB51356781D3336D40D3 (OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* __this, InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* ___inputFrame0, List_1_tBC7A0DB9E4D93BF4C255027EC5B575A9D4BBD860* ___results1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_OutputFrame__dtor_mCDB3AFBF6EFD66011D134057E912A54F4F30E618_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_OutputFrame__retain_m58CA1CE50D32DF38A30BEE5E91F355FC9341CA5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public OutputFrame(InputFrame inputFrame, List<Optional<FrameFilterResult>> results) : base(IntPtr.Zero, Detail.easyar_arengineinterop_OutputFrame__dtor, Detail.easyar_arengineinterop_OutputFrame__retain)
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)il2cpp_codegen_object_new(Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m3657419BEA982F0D4CD1F16862138852C86D0953(L_0, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_OutputFrame__dtor_mCDB3AFBF6EFD66011D134057E912A54F4F30E618_RuntimeMethod_var), NULL);
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_1 = (Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E*)il2cpp_codegen_object_new(Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Retainer__ctor_m480E22F827A714D7F4E3238D5DB0B0C6117C6108(L_1, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_OutputFrame__retain_m58CA1CE50D32DF38A30BEE5E91F355FC9341CA5E_RuntimeMethod_var), NULL);
		RefBase__ctor_m993A273C39CF74208BB74C9111ED2E10539ACAF9(__this, (0), L_0, L_1, NULL);
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_2, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_3 = V_0;
					if (!L_3)
					{
						goto IL_005b;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_005b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = IntPtr.Zero;
			V_1 = (0);
			// Detail.easyar_arengineinterop_OutputFrame__ctor(inputFrame.cdata, Detail.ListOfOptionalOfFrameFilterResult_to_c(ar, results), out _return_value_);
			InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* L_5 = ___inputFrame0;
			NullCheck(L_5);
			intptr_t L_6;
			L_6 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(L_5, NULL);
			AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_7 = V_0;
			List_1_tBC7A0DB9E4D93BF4C255027EC5B575A9D4BBD860* L_8 = ___results1;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			intptr_t L_9;
			L_9 = Detail_ListOfOptionalOfFrameFilterResult_to_c_m08F4A12E27AAEEAE4FCB3B7469C75B0DCE62C62F(L_7, L_8, NULL);
			Detail_easyar_arengineinterop_OutputFrame__ctor_m6D116F7941790B4FDBEEF7DD98815944D0E9D47D(L_6, L_9, (&V_1), NULL);
			// cdata_ = _return_value_;
			intptr_t L_10 = V_1;
			((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___cdata__0 = L_10;
			goto IL_005c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Int32 easyar.arengineinterop.OutputFrame::index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OutputFrame_index_mC777158A5209051A19935B52911B3A2F82962D5C (OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_OutputFrame_index(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			int32_t L_4;
			L_4 = Detail_easyar_arengineinterop_OutputFrame_index_mBAB53B940DCA099859CFE524F7022BBADED620EF(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			int32_t L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		int32_t L_6 = V_2;
		return L_6;
	}
}
// easyar.arengineinterop.InputFrame easyar.arengineinterop.OutputFrame::inputFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* OutputFrame_inputFrame_m101F0752EC53D6C1918B3C6A9EB9F27E2B178AD9 (OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_InputFrame__typeName_m2E5EBC87B0857FD2BB25BE6D5F40D94E05D35843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* V_2 = NULL;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_003d;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = default(IntPtr);
			il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
			// Detail.easyar_arengineinterop_OutputFrame_inputFrame(cdata, out _return_value_);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_OutputFrame_inputFrame_m74166BFEA72E4D0D62A59B7A5D2BC20C435B7081(L_3, (&V_1), NULL);
			// return Detail.Object_from_c<InputFrame>(_return_value_, Detail.easyar_arengineinterop_InputFrame__typeName);
			intptr_t L_4 = V_1;
			Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* L_5 = (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*)il2cpp_codegen_object_new(Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0(L_5, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_InputFrame__typeName_m2E5EBC87B0857FD2BB25BE6D5F40D94E05D35843_RuntimeMethod_var), NULL);
			InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* L_6;
			L_6 = Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7(L_4, L_5, Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7_RuntimeMethod_var);
			V_2 = L_6;
			goto IL_003e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// }
		InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* L_7 = V_2;
		return L_7;
	}
}
// System.Collections.Generic.List`1<easyar.Optional`1<easyar.arengineinterop.FrameFilterResult>> easyar.arengineinterop.OutputFrame::results()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBC7A0DB9E4D93BF4C255027EC5B575A9D4BBD860* OutputFrame_results_mE073E3D495058F0967345A8D7380D45660C83F5A (OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	List_1_tBC7A0DB9E4D93BF4C255027EC5B575A9D4BBD860* V_2 = NULL;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0032;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0032:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = default(IntPtr);
			il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
			// Detail.easyar_arengineinterop_OutputFrame_results(cdata, out _return_value_);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_OutputFrame_results_mC4B2A188AE2EB4CE3E6AD76CC711B5105C597FD9(L_3, (&V_1), NULL);
			// return Detail.ListOfOptionalOfFrameFilterResult_from_c(ar, _return_value_);
			AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_4 = V_0;
			intptr_t L_5 = V_1;
			List_1_tBC7A0DB9E4D93BF4C255027EC5B575A9D4BBD860* L_6;
			L_6 = Detail_ListOfOptionalOfFrameFilterResult_from_c_mC4643A66F0018DEE583D1496A05429B67B0854EA(L_4, L_5, NULL);
			V_2 = L_6;
			goto IL_0033;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		List_1_tBC7A0DB9E4D93BF4C255027EC5B575A9D4BBD860* L_7 = V_2;
		return L_7;
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
// System.Void easyar.arengineinterop.FeedbackFrame::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeedbackFrame__ctor_mDA586F54BB1FD1CADCE3DA895045D8149AEB3A6E (FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) 
{
	{
		// internal FeedbackFrame(IntPtr cdata, Action<IntPtr> deleter, Retainer retainer) : base(cdata, deleter, retainer)
		intptr_t L_0 = ___cdata0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = ___deleter1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ___retainer2;
		RefBase__ctor_m993A273C39CF74208BB74C9111ED2E10539ACAF9(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Object easyar.arengineinterop.FeedbackFrame::CloneObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FeedbackFrame_CloneObject_mDAB37B1622714742CD6C9EDD0AE4757BD77C3651 (FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// var cdata_new = IntPtr.Zero;
		V_0 = (0);
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_0 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		V_1 = (bool)((!(((RuntimeObject*)(Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		intptr_t L_3;
		L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
		NullCheck(L_2);
		Retainer_Invoke_m97B4D481743ACBAEB48ADA08F866D4F89A6A7405_inline(L_2, L_3, (&V_0), NULL);
	}

IL_002a:
	{
		// return new FeedbackFrame(cdata_new, deleter_, retainer_);
		intptr_t L_4 = V_0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_5 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___deleter__1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_6 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC* L_7 = (FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC*)il2cpp_codegen_object_new(FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		FeedbackFrame__ctor_mDA586F54BB1FD1CADCE3DA895045D8149AEB3A6E(L_7, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
// easyar.arengineinterop.FeedbackFrame easyar.arengineinterop.FeedbackFrame::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC* FeedbackFrame_Clone_m270B4BA4EC09902F574D7433235534C802E69A63 (FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC* V_0 = NULL;
	{
		// return (FeedbackFrame)(CloneObject());
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Object easyar.arengineinterop.RefBase::CloneObject() */, __this);
		V_0 = ((FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC*)CastclassClass((RuntimeObject*)L_0, FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		// }
		FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC* L_1 = V_0;
		return L_1;
	}
}
// System.Void easyar.arengineinterop.FeedbackFrame::.ctor(easyar.arengineinterop.InputFrame,easyar.Optional`1<easyar.arengineinterop.OutputFrame>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeedbackFrame__ctor_m9C5FBFCAC0060D3BBC8771D8BEFDB0854D8036B3 (FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC* __this, InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* ___inputFrame0, Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 ___previousOutputFrame1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_FeedbackFrame__dtor_mD35BC864A848045D5B8E7162756EB5A8B892A1E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_FeedbackFrame__retain_m4CD5CE29718A1585A20D0AF96CBA7DD4BE990EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_map_TisOptional_1_tFCA36B33E770473484760ED6767ED4673118E865_TisOptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A_mE919826EDE2EBC1FA0373BC4124850F2B1484329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__3_0_m583BE3783332F21A81BB43B3A0DDA2D6745B25DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E* G_B3_0 = NULL;
	Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	intptr_t G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E* G_B2_0 = NULL;
	Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	intptr_t G_B2_2;
	memset((&G_B2_2), 0, sizeof(G_B2_2));
	{
		// public FeedbackFrame(InputFrame inputFrame, Optional<OutputFrame> previousOutputFrame) : base(IntPtr.Zero, Detail.easyar_arengineinterop_FeedbackFrame__dtor, Detail.easyar_arengineinterop_FeedbackFrame__retain)
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)il2cpp_codegen_object_new(Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m3657419BEA982F0D4CD1F16862138852C86D0953(L_0, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_FeedbackFrame__dtor_mD35BC864A848045D5B8E7162756EB5A8B892A1E1_RuntimeMethod_var), NULL);
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_1 = (Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E*)il2cpp_codegen_object_new(Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Retainer__ctor_m480E22F827A714D7F4E3238D5DB0B0C6117C6108(L_1, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_FeedbackFrame__retain_m4CD5CE29718A1585A20D0AF96CBA7DD4BE990EA8_RuntimeMethod_var), NULL);
		RefBase__ctor_m993A273C39CF74208BB74C9111ED2E10539ACAF9(__this, (0), L_0, L_1, NULL);
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_2, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006f:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0079;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0079:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// var _return_value_ = IntPtr.Zero;
				V_1 = (0);
				// Detail.easyar_arengineinterop_FeedbackFrame__ctor(inputFrame.cdata, previousOutputFrame.map(p => p.OnSome ? new Detail.OptionalOfOutputFrame { has_value = true, value = p.Value.cdata } : new Detail.OptionalOfOutputFrame { has_value = false, value = default(IntPtr) }), out _return_value_);
				InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* L_5 = ___inputFrame0;
				NullCheck(L_5);
				intptr_t L_6;
				L_6 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(L_5, NULL);
				Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 L_7 = ___previousOutputFrame1;
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var);
				Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E* L_8 = ((U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
				Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E* L_9 = L_8;
				G_B2_0 = L_9;
				G_B2_1 = L_7;
				G_B2_2 = L_6;
				if (L_9)
				{
					G_B3_0 = L_9;
					G_B3_1 = L_7;
					G_B3_2 = L_6;
					goto IL_0058_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var);
				U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39* L_10 = ((U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E* L_11 = (Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E*)il2cpp_codegen_object_new(Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E_il2cpp_TypeInfo_var);
				NullCheck(L_11);
				Func_2__ctor_m5978C3ACCC88E1699C9CDBB02B26D20A15F013F6(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__3_0_m583BE3783332F21A81BB43B3A0DDA2D6745B25DC_RuntimeMethod_var), NULL);
				Func_2_t7064ACAD04F6ECD4504737A24524680F06B4EF0E* L_12 = L_11;
				((U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_12);
				G_B3_0 = L_12;
				G_B3_1 = G_B2_1;
				G_B3_2 = G_B2_2;
			}

IL_0058_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
				OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A L_13;
				L_13 = Detail_map_TisOptional_1_tFCA36B33E770473484760ED6767ED4673118E865_TisOptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A_mE919826EDE2EBC1FA0373BC4124850F2B1484329(G_B3_1, G_B3_0, Detail_map_TisOptional_1_tFCA36B33E770473484760ED6767ED4673118E865_TisOptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A_mE919826EDE2EBC1FA0373BC4124850F2B1484329_RuntimeMethod_var);
				Detail_easyar_arengineinterop_FeedbackFrame__ctor_m39630394FA565F02B909C5D7A059B52BEFFE73B1(G_B3_2, L_13, (&V_1), NULL);
				// cdata_ = _return_value_;
				intptr_t L_14 = V_1;
				((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___cdata__0 = L_14;
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		// }
		return;
	}
}
// easyar.arengineinterop.InputFrame easyar.arengineinterop.FeedbackFrame::inputFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* FeedbackFrame_inputFrame_m29F619FE132DC4CE37AAA82156021874085508CB (FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_InputFrame__typeName_m2E5EBC87B0857FD2BB25BE6D5F40D94E05D35843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* V_2 = NULL;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_003d;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = default(IntPtr);
			il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
			// Detail.easyar_arengineinterop_FeedbackFrame_inputFrame(cdata, out _return_value_);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_FeedbackFrame_inputFrame_m5EF576BFFE7FD1A56F72B9FE3054802F26462511(L_3, (&V_1), NULL);
			// return Detail.Object_from_c<InputFrame>(_return_value_, Detail.easyar_arengineinterop_InputFrame__typeName);
			intptr_t L_4 = V_1;
			Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* L_5 = (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*)il2cpp_codegen_object_new(Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0(L_5, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_InputFrame__typeName_m2E5EBC87B0857FD2BB25BE6D5F40D94E05D35843_RuntimeMethod_var), NULL);
			InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* L_6;
			L_6 = Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7(L_4, L_5, Detail_Object_from_c_TisInputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E_m9B6E51B66DEE1F1C72D62666EBB0AC1FC9A59EF7_RuntimeMethod_var);
			V_2 = L_6;
			goto IL_003e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// }
		InputFrame_t8AE4DCDF2BF48D99321F24EFCEF4CC1CC527813E* L_7 = V_2;
		return L_7;
	}
}
// easyar.Optional`1<easyar.arengineinterop.OutputFrame> easyar.arengineinterop.FeedbackFrame::previousOutputFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 FeedbackFrame_previousOutputFrame_m6898019CEE0592E40E4738019151FF209B84C512 (FeedbackFrame_tCB3E019BEC60DC0FB996217C7881ECFB6DDD8FFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_map_TisOptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A_TisOptional_1_tFCA36B33E770473484760ED6767ED4673118E865_mA01F8590D2DB630E0663FFA870646F6E3B4AE116_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CpreviousOutputFrameU3Eb__5_0_mB2377A403B7710FE3D802AE8DF8F9334DBEF3879_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A V_1;
	memset((&V_1), 0, sizeof(V_1));
	Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674* G_B3_0 = NULL;
	OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674* G_B2_0 = NULL;
	OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0050;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0050:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// var _return_value_ = default(Detail.OptionalOfOutputFrame);
				il2cpp_codegen_initobj((&V_1), sizeof(OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A));
				// Detail.easyar_arengineinterop_FeedbackFrame_previousOutputFrame(cdata, out _return_value_);
				intptr_t L_3;
				L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
				il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
				Detail_easyar_arengineinterop_FeedbackFrame_previousOutputFrame_m6B08796F2FC059A07549D61C865772D994129449(L_3, (&V_1), NULL);
				// return _return_value_.map(p => p.has_value ? Detail.Object_from_c<OutputFrame>(p.value, Detail.easyar_arengineinterop_OutputFrame__typeName) : Optional<OutputFrame>.Empty);
				OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A L_4 = V_1;
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var);
				Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674* L_5 = ((U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_2;
				Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674* L_6 = L_5;
				G_B2_0 = L_6;
				G_B2_1 = L_4;
				if (L_6)
				{
					G_B3_0 = L_6;
					G_B3_1 = L_4;
					goto IL_003e_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var);
				U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39* L_7 = ((U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var))->___U3CU3E9_0;
				Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674* L_8 = (Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674*)il2cpp_codegen_object_new(Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				Func_2__ctor_m2EC1EFAEE340028BBC8A936C8830050BE45CF891(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CpreviousOutputFrameU3Eb__5_0_mB2377A403B7710FE3D802AE8DF8F9334DBEF3879_RuntimeMethod_var), NULL);
				Func_2_t2AFF82E1B7A3FDA0A9A7617E3F8093BC898B4674* L_9 = L_8;
				((U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_2 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_2), (void*)L_9);
				G_B3_0 = L_9;
				G_B3_1 = G_B2_1;
			}

IL_003e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
				Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 L_10;
				L_10 = Detail_map_TisOptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A_TisOptional_1_tFCA36B33E770473484760ED6767ED4673118E865_mA01F8590D2DB630E0663FFA870646F6E3B4AE116(G_B3_1, G_B3_0, Detail_map_TisOptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A_TisOptional_1_tFCA36B33E770473484760ED6767ED4673118E865_mA01F8590D2DB630E0663FFA870646F6E3B4AE116_RuntimeMethod_var);
				V_2 = L_10;
				goto IL_0051;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		// }
		Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 L_11 = V_2;
		return L_11;
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
// System.Void easyar.arengineinterop.FeedbackFrame/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m26964F9D23475F91B379C89ECF8B17F58A563148 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39* L_0 = (U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39*)il2cpp_codegen_object_new(U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF48AB9BDBA89C07FE3C4305D34ECEB4D6AE75010(L_0, NULL);
		((U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void easyar.arengineinterop.FeedbackFrame/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF48AB9BDBA89C07FE3C4305D34ECEB4D6AE75010 (U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// easyar.arengineinterop.Detail/OptionalOfOutputFrame easyar.arengineinterop.FeedbackFrame/<>c::<.ctor>b__3_0(easyar.Optional`1<easyar.arengineinterop.OutputFrame>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A U3CU3Ec_U3C_ctorU3Eb__3_0_m583BE3783332F21A81BB43B3A0DDA2D6745B25DC (U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39* __this, Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_OnSome_mA0C2E790801692133FE5BE34DC5705ADC6D31DA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_Value_mB924C7295C38932932633887C11DB3DC0C3CBF65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A V_0;
	memset((&V_0), 0, sizeof(V_0));
	OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// Detail.easyar_arengineinterop_FeedbackFrame__ctor(inputFrame.cdata, previousOutputFrame.map(p => p.OnSome ? new Detail.OptionalOfOutputFrame { has_value = true, value = p.Value.cdata } : new Detail.OptionalOfOutputFrame { has_value = false, value = default(IntPtr) }), out _return_value_);
		bool L_0;
		L_0 = Optional_1_get_OnSome_mA0C2E790801692133FE5BE34DC5705ADC6D31DA6((&___p0), Optional_1_get_OnSome_mA0C2E790801692133FE5BE34DC5705ADC6D31DA6_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A));
		OptionalOfOutputFrame_set_has_value_m63B422A5D9A3223D7AAFF137F549EB424F5F84C9((&V_0), (bool)0, NULL);
		intptr_t* L_1 = (&(&V_0)->___value_1);
		il2cpp_codegen_initobj(L_1, sizeof(intptr_t));
		OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A L_2 = V_0;
		G_B3_0 = L_2;
		goto IL_004f;
	}

IL_002a:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A));
		OptionalOfOutputFrame_set_has_value_m63B422A5D9A3223D7AAFF137F549EB424F5F84C9((&V_0), (bool)1, NULL);
		OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* L_3;
		L_3 = Optional_1_get_Value_mB924C7295C38932932633887C11DB3DC0C3CBF65((&___p0), Optional_1_get_Value_mB924C7295C38932932633887C11DB3DC0C3CBF65_RuntimeMethod_var);
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(L_3, NULL);
		(&V_0)->___value_1 = L_4;
		OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A L_5 = V_0;
		G_B3_0 = L_5;
	}

IL_004f:
	{
		return G_B3_0;
	}
}
// easyar.Optional`1<easyar.arengineinterop.OutputFrame> easyar.arengineinterop.FeedbackFrame/<>c::<previousOutputFrame>b__5_0(easyar.arengineinterop.Detail/OptionalOfOutputFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 U3CU3Ec_U3CpreviousOutputFrameU3Eb__5_0_mB2377A403B7710FE3D802AE8DF8F9334DBEF3879 (U3CU3Ec_tCCC8E56B93B2EA8FDF83C361F89109376BA06D39* __this, OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_Object_from_c_TisOutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A_mF73927F5B4ABD0EEB4F164EB9275B1EFD8559E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_OutputFrame__typeName_mED5DC6AD2A8D370638F02378DC5BBE0F8643E063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_get_Empty_mA160CB18BF34625A81DD825644E12290FD247341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Optional_1_op_Implicit_m3CB1CF13B1745B4AC024A7E64C4B2F8A8329B575_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// return _return_value_.map(p => p.has_value ? Detail.Object_from_c<OutputFrame>(p.value, Detail.easyar_arengineinterop_OutputFrame__typeName) : Optional<OutputFrame>.Empty);
		bool L_0;
		L_0 = OptionalOfOutputFrame_get_has_value_m1272887CB9DF82290BC29DC68C4A8462D56153EB((&___p0), NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 L_1;
		L_1 = Optional_1_get_Empty_mA160CB18BF34625A81DD825644E12290FD247341(Optional_1_get_Empty_mA160CB18BF34625A81DD825644E12290FD247341_RuntimeMethod_var);
		G_B3_0 = L_1;
		goto IL_002c;
	}

IL_0010:
	{
		OptionalOfOutputFrame_t832B9910D974C3866A26182B04E9EED1BB8C1B0A L_2 = ___p0;
		intptr_t L_3 = L_2.___value_1;
		Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* L_4 = (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*)il2cpp_codegen_object_new(Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0(L_4, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_OutputFrame__typeName_mED5DC6AD2A8D370638F02378DC5BBE0F8643E063_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		OutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A* L_5;
		L_5 = Detail_Object_from_c_TisOutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A_mF73927F5B4ABD0EEB4F164EB9275B1EFD8559E95(L_3, L_4, Detail_Object_from_c_TisOutputFrame_t40F450F6ECB18AED6CEDD129DD7CD43D9BC29B3A_mF73927F5B4ABD0EEB4F164EB9275B1EFD8559E95_RuntimeMethod_var);
		Optional_1_tFCA36B33E770473484760ED6767ED4673118E865 L_6;
		L_6 = Optional_1_op_Implicit_m3CB1CF13B1745B4AC024A7E64C4B2F8A8329B575(L_5, Optional_1_op_Implicit_m3CB1CF13B1745B4AC024A7E64C4B2F8A8329B575_RuntimeMethod_var);
		G_B3_0 = L_6;
	}

IL_002c:
	{
		return G_B3_0;
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
// System.Void easyar.arengineinterop.Image::.ctor(System.IntPtr,System.Action`1<System.IntPtr>,easyar.arengineinterop.RefBase/Retainer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image__ctor_mC7AF7A638417D097C78477967CD710CA732DDCAC (Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* __this, intptr_t ___cdata0, Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___deleter1, Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* ___retainer2, const RuntimeMethod* method) 
{
	{
		// internal Image(IntPtr cdata, Action<IntPtr> deleter, Retainer retainer) : base(cdata, deleter, retainer)
		intptr_t L_0 = ___cdata0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_1 = ___deleter1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ___retainer2;
		RefBase__ctor_m993A273C39CF74208BB74C9111ED2E10539ACAF9(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Object easyar.arengineinterop.Image::CloneObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Image_CloneObject_mFE2B704078F971CB39E7AF75DC72DE2CE380C428 (Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// var cdata_new = IntPtr.Zero;
		V_0 = (0);
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_0 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		V_1 = (bool)((!(((RuntimeObject*)(Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// if (retainer_ != null) { retainer_(cdata, out cdata_new); }
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_2 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		intptr_t L_3;
		L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
		NullCheck(L_2);
		Retainer_Invoke_m97B4D481743ACBAEB48ADA08F866D4F89A6A7405_inline(L_2, L_3, (&V_0), NULL);
	}

IL_002a:
	{
		// return new Image(cdata_new, deleter_, retainer_);
		intptr_t L_4 = V_0;
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_5 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___deleter__1;
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_6 = ((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___retainer__2;
		Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* L_7 = (Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C*)il2cpp_codegen_object_new(Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Image__ctor_mC7AF7A638417D097C78477967CD710CA732DDCAC(L_7, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
// easyar.arengineinterop.Image easyar.arengineinterop.Image::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* Image_Clone_m923A7CC1AD84C15D91ACB30CB4A7C7A842B26494 (Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* V_0 = NULL;
	{
		// return (Image)(CloneObject());
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Object easyar.arengineinterop.RefBase::CloneObject() */, __this);
		V_0 = ((Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C*)CastclassClass((RuntimeObject*)L_0, Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C_il2cpp_TypeInfo_var));
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* L_1 = V_0;
		return L_1;
	}
}
// System.Void easyar.arengineinterop.Image::.ctor(easyar.arengineinterop.Buffer,easyar.arengineinterop.PixelFormat,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image__ctor_mD8A8DFF437D3F5CF80D1728AE56A2C0E80526E79 (Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* __this, Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348* ___buffer0, int32_t ___format1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_Image__dtor_m060A12BDC8A5C99FA368826B8AB5380620F6D1EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_Image__retain_m6EE4BF7C853DB9161FFF8615B2883912F2700C21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public Image(Buffer buffer, PixelFormat format, int width, int height) : base(IntPtr.Zero, Detail.easyar_arengineinterop_Image__dtor, Detail.easyar_arengineinterop_Image__retain)
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_0 = (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*)il2cpp_codegen_object_new(Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m3657419BEA982F0D4CD1F16862138852C86D0953(L_0, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_Image__dtor_m060A12BDC8A5C99FA368826B8AB5380620F6D1EC_RuntimeMethod_var), NULL);
		Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* L_1 = (Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E*)il2cpp_codegen_object_new(Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Retainer__ctor_m480E22F827A714D7F4E3238D5DB0B0C6117C6108(L_1, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_Image__retain_m6EE4BF7C853DB9161FFF8615B2883912F2700C21_RuntimeMethod_var), NULL);
		RefBase__ctor_m993A273C39CF74208BB74C9111ED2E10539ACAF9(__this, (0), L_0, L_1, NULL);
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_2, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0058;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0058:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = IntPtr.Zero;
			V_1 = (0);
			// Detail.easyar_arengineinterop_Image__ctor(buffer.cdata, format, width, height, out _return_value_);
			Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348* L_5 = ___buffer0;
			NullCheck(L_5);
			intptr_t L_6;
			L_6 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(L_5, NULL);
			int32_t L_7 = ___format1;
			int32_t L_8 = ___width2;
			int32_t L_9 = ___height3;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_Image__ctor_m92EA6E16E720C586FF7FAC0723E4D1C4FBEE43C2(L_6, L_7, L_8, L_9, (&V_1), NULL);
			// cdata_ = _return_value_;
			intptr_t L_10 = V_1;
			((RefBase_t9BB59DE53D74235D8979C5CD9E38FF679620A2EA*)__this)->___cdata__0 = L_10;
			goto IL_0059;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0059:
	{
		// }
		return;
	}
}
// easyar.arengineinterop.Buffer easyar.arengineinterop.Image::buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348* Image_buffer_mDFF53238044EC98CFA2B17156BBE0EF7A22CE2F6 (Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_Object_from_c_TisBuffer_t23A7F32D34236FACC5665FD1285442A75EE83348_m9DD02EB9942F97081BAE78A4C22B1B19FEBF992A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_Buffer__typeName_m840009C8BB7D8BA32286BF04BE76E0E400FC720D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348* V_2 = NULL;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_003d;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = default(IntPtr);
			il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
			// Detail.easyar_arengineinterop_Image_buffer(cdata, out _return_value_);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_Image_buffer_mE1606C058B03BE16C868C8FE043BA490E260613A(L_3, (&V_1), NULL);
			// return Detail.Object_from_c<Buffer>(_return_value_, Detail.easyar_arengineinterop_Buffer__typeName);
			intptr_t L_4 = V_1;
			Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* L_5 = (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*)il2cpp_codegen_object_new(Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0(L_5, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_Buffer__typeName_m840009C8BB7D8BA32286BF04BE76E0E400FC720D_RuntimeMethod_var), NULL);
			Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348* L_6;
			L_6 = Detail_Object_from_c_TisBuffer_t23A7F32D34236FACC5665FD1285442A75EE83348_m9DD02EB9942F97081BAE78A4C22B1B19FEBF992A(L_4, L_5, Detail_Object_from_c_TisBuffer_t23A7F32D34236FACC5665FD1285442A75EE83348_m9DD02EB9942F97081BAE78A4C22B1B19FEBF992A_RuntimeMethod_var);
			V_2 = L_6;
			goto IL_003e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// }
		Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348* L_7 = V_2;
		return L_7;
	}
}
// easyar.arengineinterop.PixelFormat easyar.arengineinterop.Image::format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Image_format_m5151DB477FA1CAD6B14D19ABBAAAB58BE49E76FB (Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_Image_format(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			int32_t L_4;
			L_4 = Detail_easyar_arengineinterop_Image_format_m6CB2578C933B8E70766539FE45821E202689DDBC(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			int32_t L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Int32 easyar.arengineinterop.Image::width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Image_width_m4837E1375DBC2CD55C25E68F400563394D2978D0 (Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_Image_width(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			int32_t L_4;
			L_4 = Detail_easyar_arengineinterop_Image_width_m9E0C7E08BF4F19C50A254DB3321FEC0623B5BD26(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			int32_t L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Int32 easyar.arengineinterop.Image::height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Image_height_mD68E544F2ACC8747BEC14283B44EF97D00425B92 (Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_Image_height(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			int32_t L_4;
			L_4 = Detail_easyar_arengineinterop_Image_height_m5AB5300AC8B1EA6DB1034029F1BE9490B23E3E0B(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			int32_t L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Int32 easyar.arengineinterop.Image::pixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Image_pixelWidth_mAEAE71C236A6EFBD2D7BE76539E9A723DFD96498 (Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_Image_pixelWidth(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			int32_t L_4;
			L_4 = Detail_easyar_arengineinterop_Image_pixelWidth_mBF079E77FA003508EF2CB7805066CB50B1289A02(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			int32_t L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Int32 easyar.arengineinterop.Image::pixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Image_pixelHeight_mB73C0CB5AAC37C40757DAB03F437E1CE44785FB1 (Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0022;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0022:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = Detail.easyar_arengineinterop_Image_pixelHeight(cdata);
			intptr_t L_3;
			L_3 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(__this, NULL);
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			int32_t L_4;
			L_4 = Detail_easyar_arengineinterop_Image_pixelHeight_m3A791126159E78EF618B5F638B79874C8C856087(L_3, NULL);
			V_1 = L_4;
			// return _return_value_;
			int32_t L_5 = V_1;
			V_2 = L_5;
			goto IL_0023;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0023:
	{
		// }
		int32_t L_6 = V_2;
		return L_6;
	}
}
// easyar.arengineinterop.Image easyar.arengineinterop.Image::create(easyar.arengineinterop.Buffer,easyar.arengineinterop.PixelFormat,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* Image_create_m302FF08310FB0AE0C402DE22836FF4B5C6DAFAD8 (Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348* ___buffer0, int32_t ___format1, int32_t ___width2, int32_t ___height3, int32_t ___pixelWidth4, int32_t ___pixelHeight5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_Object_from_c_TisImage_t16A156B4D3660113F83BFF9B560C217BDA00F40C_m9548E89A5AFF4CB30E1F673B653773E9590F5C6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_easyar_arengineinterop_Image__typeName_mDE9BAFB728BAEA4F5B12A08DE032E5F6F06ACA59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* V_2 = NULL;
	{
		// using (var ar = new Detail.AutoRelease())
		AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_0 = (AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8*)il2cpp_codegen_object_new(AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AutoRelease__ctor_m532516B29304167AB419BC936A2682BB056EA941(L_0, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003a:
			{// begin finally (depth: 1)
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0044;
					}
				}
				{
					AutoRelease_tC7AF15EA3386AAA63E9C553D0414A1FDC96FCEA8* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0044:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var _return_value_ = default(IntPtr);
			il2cpp_codegen_initobj((&V_1), sizeof(intptr_t));
			// Detail.easyar_arengineinterop_Image_create(buffer.cdata, format, width, height, pixelWidth, pixelHeight, out _return_value_);
			Buffer_t23A7F32D34236FACC5665FD1285442A75EE83348* L_3 = ___buffer0;
			NullCheck(L_3);
			intptr_t L_4;
			L_4 = RefBase_get_cdata_m254AA894E484A5F5861C020A197F2315EC9AB5AC(L_3, NULL);
			int32_t L_5 = ___format1;
			int32_t L_6 = ___width2;
			int32_t L_7 = ___height3;
			int32_t L_8 = ___pixelWidth4;
			int32_t L_9 = ___pixelHeight5;
			il2cpp_codegen_runtime_class_init_inline(Detail_t99B0E8C64A14CF824E54870145B08B4EFB8B09FF_il2cpp_TypeInfo_var);
			Detail_easyar_arengineinterop_Image_create_m6008436DB937C24DB1C1F9A93DB2D17061A02E1D(L_4, L_5, L_6, L_7, L_8, L_9, (&V_1), NULL);
			// return Detail.Object_from_c<Image>(_return_value_, Detail.easyar_arengineinterop_Image__typeName);
			intptr_t L_10 = V_1;
			Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713* L_11 = (Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713*)il2cpp_codegen_object_new(Func_2_t04A50D832214E55BC2F82E8DD7E603537B6D9713_il2cpp_TypeInfo_var);
			NullCheck(L_11);
			Func_2__ctor_m12EE2869ED79665C38F05A42227ECB8657CB60A0(L_11, NULL, (intptr_t)((void*)Detail_easyar_arengineinterop_Image__typeName_mDE9BAFB728BAEA4F5B12A08DE032E5F6F06ACA59_RuntimeMethod_var), NULL);
			Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* L_12;
			L_12 = Detail_Object_from_c_TisImage_t16A156B4D3660113F83BFF9B560C217BDA00F40C_m9548E89A5AFF4CB30E1F673B653773E9590F5C6B(L_10, L_11, Detail_Object_from_c_TisImage_t16A156B4D3660113F83BFF9B560C217BDA00F40C_m9548E89A5AFF4CB30E1F673B653773E9590F5C6B_RuntimeMethod_var);
			V_2 = L_12;
			goto IL_0045;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		// }
		Image_t16A156B4D3660113F83BFF9B560C217BDA00F40C* L_13 = V_2;
		return L_13;
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
// System.Single[] easyar.arengineinterop.Matrix44F::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Matrix44F_get_data_m2CB45958FF2BCEFB1F270BEA44DC61874D5246D3 (Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// return new float[] { data_0, data_1, data_2, data_3, data_4, data_5, data_6, data_7, data_8, data_9, data_10, data_11, data_12, data_13, data_14, data_15 };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		float L_2 = __this->___data_0_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = L_1;
		float L_4 = __this->___data_1_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = L_3;
		float L_6 = __this->___data_2_2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_6);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = L_5;
		float L_8 = __this->___data_3_3;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_8);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = L_7;
		float L_10 = __this->___data_4_4;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (float)L_10);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = L_9;
		float L_12 = __this->___data_5_5;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (float)L_12);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = L_11;
		float L_14 = __this->___data_6_6;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (float)L_14);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = L_13;
		float L_16 = __this->___data_7_7;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (float)L_16);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = L_15;
		float L_18 = __this->___data_8_8;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (float)L_18);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = L_17;
		float L_20 = __this->___data_9_9;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (float)L_20);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = L_19;
		float L_22 = __this->___data_10_10;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (float)L_22);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = L_21;
		float L_24 = __this->___data_11_11;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (float)L_24);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = L_23;
		float L_26 = __this->___data_12_12;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (float)L_26);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = L_25;
		float L_28 = __this->___data_13_13;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (float)L_28);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = L_27;
		float L_30 = __this->___data_14_14;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (float)L_30);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = L_29;
		float L_32 = __this->___data_15_15;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (float)L_32);
		V_0 = L_31;
		goto IL_00a2;
	}

IL_00a2:
	{
		// }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = V_0;
		return L_33;
	}
}
IL2CPP_EXTERN_C  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Matrix44F_get_data_m2CB45958FF2BCEFB1F270BEA44DC61874D5246D3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B*>(__this + _offset);
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* _returnValue;
	_returnValue = Matrix44F_get_data_m2CB45958FF2BCEFB1F270BEA44DC61874D5246D3(_thisAdjusted, method);
	return _returnValue;
}
// System.Void easyar.arengineinterop.Matrix44F::set_data(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix44F_set_data_m1F7BEE7E4208ABD412CB71BC44E87E90216B6646 (Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value.Length != 16) { throw new ArgumentException(); }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___value0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)((int32_t)16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (value.Length != 16) { throw new ArgumentException(); }
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix44F_set_data_m1F7BEE7E4208ABD412CB71BC44E87E90216B6646_RuntimeMethod_var)));
	}

IL_0016:
	{
		// this.data_0 = value[0];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		__this->___data_0_0 = L_5;
		// this.data_1 = value[1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->___data_1_1 = L_8;
		// this.data_2 = value[2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___value0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->___data_2_2 = L_11;
		// this.data_3 = value[3];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___value0;
		NullCheck(L_12);
		int32_t L_13 = 3;
		float L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		__this->___data_3_3 = L_14;
		// this.data_4 = value[4];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = ___value0;
		NullCheck(L_15);
		int32_t L_16 = 4;
		float L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		__this->___data_4_4 = L_17;
		// this.data_5 = value[5];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = ___value0;
		NullCheck(L_18);
		int32_t L_19 = 5;
		float L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		__this->___data_5_5 = L_20;
		// this.data_6 = value[6];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = ___value0;
		NullCheck(L_21);
		int32_t L_22 = 6;
		float L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		__this->___data_6_6 = L_23;
		// this.data_7 = value[7];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = ___value0;
		NullCheck(L_24);
		int32_t L_25 = 7;
		float L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		__this->___data_7_7 = L_26;
		// this.data_8 = value[8];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = ___value0;
		NullCheck(L_27);
		int32_t L_28 = 8;
		float L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		__this->___data_8_8 = L_29;
		// this.data_9 = value[9];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_30 = ___value0;
		NullCheck(L_30);
		int32_t L_31 = ((int32_t)9);
		float L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		__this->___data_9_9 = L_32;
		// this.data_10 = value[10];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = ___value0;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)10);
		float L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		__this->___data_10_10 = L_35;
		// this.data_11 = value[11];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_36 = ___value0;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)11);
		float L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		__this->___data_11_11 = L_38;
		// this.data_12 = value[12];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = ___value0;
		NullCheck(L_39);
		int32_t L_40 = ((int32_t)12);
		float L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		__this->___data_12_12 = L_41;
		// this.data_13 = value[13];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = ___value0;
		NullCheck(L_42);
		int32_t L_43 = ((int32_t)13);
		float L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		__this->___data_13_13 = L_44;
		// this.data_14 = value[14];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = ___value0;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)14);
		float L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		__this->___data_14_14 = L_47;
		// this.data_15 = value[15];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_48 = ___value0;
		NullCheck(L_48);
		int32_t L_49 = ((int32_t)15);
		float L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		__this->___data_15_15 = L_50;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Matrix44F_set_data_m1F7BEE7E4208ABD412CB71BC44E87E90216B6646_AdjustorThunk (RuntimeObject* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method)
{
	Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B*>(__this + _offset);
	Matrix44F_set_data_m1F7BEE7E4208ABD412CB71BC44E87E90216B6646(_thisAdjusted, ___value0, method);
}
// System.Void easyar.arengineinterop.Matrix44F::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix44F__ctor_m7F2277AA68B0E8A4202416FC480364356530C60D (Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B* __this, float ___data_00, float ___data_11, float ___data_22, float ___data_33, float ___data_44, float ___data_55, float ___data_66, float ___data_77, float ___data_88, float ___data_99, float ___data_1010, float ___data_1111, float ___data_1212, float ___data_1313, float ___data_1414, float ___data_1515, const RuntimeMethod* method) 
{
	{
		// this.data_0 = data_0;
		float L_0 = ___data_00;
		__this->___data_0_0 = L_0;
		// this.data_1 = data_1;
		float L_1 = ___data_11;
		__this->___data_1_1 = L_1;
		// this.data_2 = data_2;
		float L_2 = ___data_22;
		__this->___data_2_2 = L_2;
		// this.data_3 = data_3;
		float L_3 = ___data_33;
		__this->___data_3_3 = L_3;
		// this.data_4 = data_4;
		float L_4 = ___data_44;
		__this->___data_4_4 = L_4;
		// this.data_5 = data_5;
		float L_5 = ___data_55;
		__this->___data_5_5 = L_5;
		// this.data_6 = data_6;
		float L_6 = ___data_66;
		__this->___data_6_6 = L_6;
		// this.data_7 = data_7;
		float L_7 = ___data_77;
		__this->___data_7_7 = L_7;
		// this.data_8 = data_8;
		float L_8 = ___data_88;
		__this->___data_8_8 = L_8;
		// this.data_9 = data_9;
		float L_9 = ___data_99;
		__this->___data_9_9 = L_9;
		// this.data_10 = data_10;
		float L_10 = ___data_1010;
		__this->___data_10_10 = L_10;
		// this.data_11 = data_11;
		float L_11 = ___data_1111;
		__this->___data_11_11 = L_11;
		// this.data_12 = data_12;
		float L_12 = ___data_1212;
		__this->___data_12_12 = L_12;
		// this.data_13 = data_13;
		float L_13 = ___data_1313;
		__this->___data_13_13 = L_13;
		// this.data_14 = data_14;
		float L_14 = ___data_1414;
		__this->___data_14_14 = L_14;
		// this.data_15 = data_15;
		float L_15 = ___data_1515;
		__this->___data_15_15 = L_15;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Matrix44F__ctor_m7F2277AA68B0E8A4202416FC480364356530C60D_AdjustorThunk (RuntimeObject* __this, float ___data_00, float ___data_11, float ___data_22, float ___data_33, float ___data_44, float ___data_55, float ___data_66, float ___data_77, float ___data_88, float ___data_99, float ___data_1010, float ___data_1111, float ___data_1212, float ___data_1313, float ___data_1414, float ___data_1515, const RuntimeMethod* method)
{
	Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix44F_tAC2B8314CBB7E88A441D0ABAEC9CF853AC986A1B*>(__this + _offset);
	Matrix44F__ctor_m7F2277AA68B0E8A4202416FC480364356530C60D(_thisAdjusted, ___data_00, ___data_11, ___data_22, ___data_33, ___data_44, ___data_55, ___data_66, ___data_77, ___data_88, ___data_99, ___data_1010, ___data_1111, ___data_1212, ___data_1313, ___data_1414, ___data_1515, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single[] easyar.arengineinterop.Matrix33F::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Matrix33F_get_data_mB90DCF470EF7F48841210DCD243272195A57EB97 (Matrix33F_t7E090A60883B11F7CA3BED9011D8E3A14F3CF17F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// return new float[] { data_0, data_1, data_2, data_3, data_4, data_5, data_6, data_7, data_8 };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		float L_2 = __this->___data_0_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = L_1;
		float L_4 = __this->___data_1_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = L_3;
		float L_6 = __this->___data_2_2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_6);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = L_5;
		float L_8 = __this->___data_3_3;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_8);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = L_7;
		float L_10 = __this->___data_4_4;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (float)L_10);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = L_9;
		float L_12 = __this->___data_5_5;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (float)L_12);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = L_11;
		float L_14 = __this->___data_6_6;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (float)L_14);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = L_13;
		float L_16 = __this->___data_7_7;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (float)L_16);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = L_15;
		float L_18 = __this->___data_8_8;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (float)L_18);
		V_0 = L_17;
		goto IL_005c;
	}

IL_005c:
	{
		// }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Matrix33F_get_data_mB90DCF470EF7F48841210DCD243272195A57EB97_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Matrix33F_t7E090A60883B11F7CA3BED9011D8E3A14F3CF17F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix33F_t7E090A60883B11F7CA3BED9011D8E3A14F3CF17F*>(__this + _offset);
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* _returnValue;
	_returnValue = Matrix33F_get_data_mB90DCF470EF7F48841210DCD243272195A57EB97(_thisAdjusted, method);
	return _returnValue;
}
// System.Void easyar.arengineinterop.Matrix33F::set_data(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix33F_set_data_mA022ABBC2B4A74DD4111BE62A923B56CA9F96B26 (Matrix33F_t7E090A60883B11F7CA3BED9011D8E3A14F3CF17F* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value.Length != 9) { throw new ArgumentException(); }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___value0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)((int32_t)9)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (value.Length != 9) { throw new ArgumentException(); }
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix33F_set_data_mA022ABBC2B4A74DD4111BE62A923B56CA9F96B26_RuntimeMethod_var)));
	}

IL_0016:
	{
		// this.data_0 = value[0];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		__this->___data_0_0 = L_5;
		// this.data_1 = value[1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->___data_1_1 = L_8;
		// this.data_2 = value[2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___value0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->___data_2_2 = L_11;
		// this.data_3 = value[3];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___value0;
		NullCheck(L_12);
		int32_t L_13 = 3;
		float L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		__this->___data_3_3 = L_14;
		// this.data_4 = value[4];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = ___value0;
		NullCheck(L_15);
		int32_t L_16 = 4;
		float L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		__this->___data_4_4 = L_17;
		// this.data_5 = value[5];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = ___value0;
		NullCheck(L_18);
		int32_t L_19 = 5;
		float L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		__this->___data_5_5 = L_20;
		// this.data_6 = value[6];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = ___value0;
		NullCheck(L_21);
		int32_t L_22 = 6;
		float L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		__this->___data_6_6 = L_23;
		// this.data_7 = value[7];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = ___value0;
		NullCheck(L_24);
		int32_t L_25 = 7;
		float L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		__this->___data_7_7 = L_26;
		// this.data_8 = value[8];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = ___value0;
		NullCheck(L_27);
		int32_t L_28 = 8;
		float L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		__this->___data_8_8 = L_29;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Matrix33F_set_data_mA022ABBC2B4A74DD4111BE62A923B56CA9F96B26_AdjustorThunk (RuntimeObject* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method)
{
	Matrix33F_t7E090A60883B11F7CA3BED9011D8E3A14F3CF17F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix33F_t7E090A60883B11F7CA3BED9011D8E3A14F3CF17F*>(__this + _offset);
	Matrix33F_set_data_mA022ABBC2B4A74DD4111BE62A923B56CA9F96B26(_thisAdjusted, ___value0, method);
}
// System.Void easyar.arengineinterop.Matrix33F::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix33F__ctor_m5BBC2A2E67E756CAE077663CA61D19BFA5661C12 (Matrix33F_t7E090A60883B11F7CA3BED9011D8E3A14F3CF17F* __this, float ___data_00, float ___data_11, float ___data_22, float ___data_33, float ___data_44, float ___data_55, float ___data_66, float ___data_77, float ___data_88, const RuntimeMethod* method) 
{
	{
		// this.data_0 = data_0;
		float L_0 = ___data_00;
		__this->___data_0_0 = L_0;
		// this.data_1 = data_1;
		float L_1 = ___data_11;
		__this->___data_1_1 = L_1;
		// this.data_2 = data_2;
		float L_2 = ___data_22;
		__this->___data_2_2 = L_2;
		// this.data_3 = data_3;
		float L_3 = ___data_33;
		__this->___data_3_3 = L_3;
		// this.data_4 = data_4;
		float L_4 = ___data_44;
		__this->___data_4_4 = L_4;
		// this.data_5 = data_5;
		float L_5 = ___data_55;
		__this->___data_5_5 = L_5;
		// this.data_6 = data_6;
		float L_6 = ___data_66;
		__this->___data_6_6 = L_6;
		// this.data_7 = data_7;
		float L_7 = ___data_77;
		__this->___data_7_7 = L_7;
		// this.data_8 = data_8;
		float L_8 = ___data_88;
		__this->___data_8_8 = L_8;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Matrix33F__ctor_m5BBC2A2E67E756CAE077663CA61D19BFA5661C12_AdjustorThunk (RuntimeObject* __this, float ___data_00, float ___data_11, float ___data_22, float ___data_33, float ___data_44, float ___data_55, float ___data_66, float ___data_77, float ___data_88, const RuntimeMethod* method)
{
	Matrix33F_t7E090A60883B11F7CA3BED9011D8E3A14F3CF17F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix33F_t7E090A60883B11F7CA3BED9011D8E3A14F3CF17F*>(__this + _offset);
	Matrix33F__ctor_m5BBC2A2E67E756CAE077663CA61D19BFA5661C12(_thisAdjusted, ___data_00, ___data_11, ___data_22, ___data_33, ___data_44, ___data_55, ___data_66, ___data_77, ___data_88, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double[] easyar.arengineinterop.Vec3D::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* Vec3D_get_data_m1D5BE17F5D58A66B160C18DFF613B8050FC7F988 (Vec3D_t2AFACDE6399373ED1C54CB46EBD82162DB454E28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	{
		// return new double[] { data_0, data_1, data_2 };
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)3);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = L_0;
		double L_2 = __this->___data_0_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)L_2);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = L_1;
		double L_4 = __this->___data_1_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (double)L_4);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = L_3;
		double L_6 = __this->___data_2_2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (double)L_6);
		V_0 = L_5;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* Vec3D_get_data_m1D5BE17F5D58A66B160C18DFF613B8050FC7F988_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vec3D_t2AFACDE6399373ED1C54CB46EBD82162DB454E28* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3D_t2AFACDE6399373ED1C54CB46EBD82162DB454E28*>(__this + _offset);
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* _returnValue;
	_returnValue = Vec3D_get_data_m1D5BE17F5D58A66B160C18DFF613B8050FC7F988(_thisAdjusted, method);
	return _returnValue;
}
// System.Void easyar.arengineinterop.Vec3D::set_data(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3D_set_data_m31F86B636A684EBCE2C62EC525F09F27BE46193B (Vec3D_t2AFACDE6399373ED1C54CB46EBD82162DB454E28* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value.Length != 3) { throw new ArgumentException(); }
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___value0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (value.Length != 3) { throw new ArgumentException(); }
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec3D_set_data_m31F86B636A684EBCE2C62EC525F09F27BE46193B_RuntimeMethod_var)));
	}

IL_0015:
	{
		// this.data_0 = value[0];
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		double L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		__this->___data_0_0 = L_5;
		// this.data_1 = value[1];
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		double L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->___data_1_1 = L_8;
		// this.data_2 = value[2];
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_9 = ___value0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		double L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->___data_2_2 = L_11;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vec3D_set_data_m31F86B636A684EBCE2C62EC525F09F27BE46193B_AdjustorThunk (RuntimeObject* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___value0, const RuntimeMethod* method)
{
	Vec3D_t2AFACDE6399373ED1C54CB46EBD82162DB454E28* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3D_t2AFACDE6399373ED1C54CB46EBD82162DB454E28*>(__this + _offset);
	Vec3D_set_data_m31F86B636A684EBCE2C62EC525F09F27BE46193B(_thisAdjusted, ___value0, method);
}
// System.Void easyar.arengineinterop.Vec3D::.ctor(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3D__ctor_m0FA73DB1545AE2CCAA28D188FC0375D6C2E5EEE6 (Vec3D_t2AFACDE6399373ED1C54CB46EBD82162DB454E28* __this, double ___data_00, double ___data_11, double ___data_22, const RuntimeMethod* method) 
{
	{
		// this.data_0 = data_0;
		double L_0 = ___data_00;
		__this->___data_0_0 = L_0;
		// this.data_1 = data_1;
		double L_1 = ___data_11;
		__this->___data_1_1 = L_1;
		// this.data_2 = data_2;
		double L_2 = ___data_22;
		__this->___data_2_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vec3D__ctor_m0FA73DB1545AE2CCAA28D188FC0375D6C2E5EEE6_AdjustorThunk (RuntimeObject* __this, double ___data_00, double ___data_11, double ___data_22, const RuntimeMethod* method)
{
	Vec3D_t2AFACDE6399373ED1C54CB46EBD82162DB454E28* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3D_t2AFACDE6399373ED1C54CB46EBD82162DB454E28*>(__this + _offset);
	Vec3D__ctor_m0FA73DB1545AE2CCAA28D188FC0375D6C2E5EEE6(_thisAdjusted, ___data_00, ___data_11, ___data_22, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single[] easyar.arengineinterop.Vec4F::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Vec4F_get_data_m7A81B36E5ECB9726C32546240037DA0504F91320 (Vec4F_tAD87052F93F29AAF1EFAD089614CFF34AAD4DA3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// return new float[] { data_0, data_1, data_2, data_3 };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		float L_2 = __this->___data_0_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = L_1;
		float L_4 = __this->___data_1_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = L_3;
		float L_6 = __this->___data_2_2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_6);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = L_5;
		float L_8 = __this->___data_3_3;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_8);
		V_0 = L_7;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Vec4F_get_data_m7A81B36E5ECB9726C32546240037DA0504F91320_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vec4F_tAD87052F93F29AAF1EFAD089614CFF34AAD4DA3A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec4F_tAD87052F93F29AAF1EFAD089614CFF34AAD4DA3A*>(__this + _offset);
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* _returnValue;
	_returnValue = Vec4F_get_data_m7A81B36E5ECB9726C32546240037DA0504F91320(_thisAdjusted, method);
	return _returnValue;
}
// System.Void easyar.arengineinterop.Vec4F::set_data(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec4F_set_data_m7AAC34354DD070B1D1D9EBD336809B788DA1DF9E (Vec4F_tAD87052F93F29AAF1EFAD089614CFF34AAD4DA3A* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value.Length != 4) { throw new ArgumentException(); }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___value0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (value.Length != 4) { throw new ArgumentException(); }
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec4F_set_data_m7AAC34354DD070B1D1D9EBD336809B788DA1DF9E_RuntimeMethod_var)));
	}

IL_0015:
	{
		// this.data_0 = value[0];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		__this->___data_0_0 = L_5;
		// this.data_1 = value[1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->___data_1_1 = L_8;
		// this.data_2 = value[2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___value0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->___data_2_2 = L_11;
		// this.data_3 = value[3];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = ___value0;
		NullCheck(L_12);
		int32_t L_13 = 3;
		float L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		__this->___data_3_3 = L_14;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vec4F_set_data_m7AAC34354DD070B1D1D9EBD336809B788DA1DF9E_AdjustorThunk (RuntimeObject* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method)
{
	Vec4F_tAD87052F93F29AAF1EFAD089614CFF34AAD4DA3A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec4F_tAD87052F93F29AAF1EFAD089614CFF34AAD4DA3A*>(__this + _offset);
	Vec4F_set_data_m7AAC34354DD070B1D1D9EBD336809B788DA1DF9E(_thisAdjusted, ___value0, method);
}
// System.Void easyar.arengineinterop.Vec4F::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec4F__ctor_m0FCC462BA7D5E746EDAB8A44BEBE1EEFBCCC38D0 (Vec4F_tAD87052F93F29AAF1EFAD089614CFF34AAD4DA3A* __this, float ___data_00, float ___data_11, float ___data_22, float ___data_33, const RuntimeMethod* method) 
{
	{
		// this.data_0 = data_0;
		float L_0 = ___data_00;
		__this->___data_0_0 = L_0;
		// this.data_1 = data_1;
		float L_1 = ___data_11;
		__this->___data_1_1 = L_1;
		// this.data_2 = data_2;
		float L_2 = ___data_22;
		__this->___data_2_2 = L_2;
		// this.data_3 = data_3;
		float L_3 = ___data_33;
		__this->___data_3_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vec4F__ctor_m0FCC462BA7D5E746EDAB8A44BEBE1EEFBCCC38D0_AdjustorThunk (RuntimeObject* __this, float ___data_00, float ___data_11, float ___data_22, float ___data_33, const RuntimeMethod* method)
{
	Vec4F_tAD87052F93F29AAF1EFAD089614CFF34AAD4DA3A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec4F_tAD87052F93F29AAF1EFAD089614CFF34AAD4DA3A*>(__this + _offset);
	Vec4F__ctor_m0FCC462BA7D5E746EDAB8A44BEBE1EEFBCCC38D0(_thisAdjusted, ___data_00, ___data_11, ___data_22, ___data_33, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single[] easyar.arengineinterop.Vec3F::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Vec3F_get_data_m31AF1ABE5A2E3028CDF47260B0A3AE71E19E4709 (Vec3F_t09A439693B6DC70DE9C2CA29508F788D552B5CDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// return new float[] { data_0, data_1, data_2 };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		float L_2 = __this->___data_0_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = L_1;
		float L_4 = __this->___data_1_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = L_3;
		float L_6 = __this->___data_2_2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_6);
		V_0 = L_5;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Vec3F_get_data_m31AF1ABE5A2E3028CDF47260B0A3AE71E19E4709_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vec3F_t09A439693B6DC70DE9C2CA29508F788D552B5CDF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3F_t09A439693B6DC70DE9C2CA29508F788D552B5CDF*>(__this + _offset);
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* _returnValue;
	_returnValue = Vec3F_get_data_m31AF1ABE5A2E3028CDF47260B0A3AE71E19E4709(_thisAdjusted, method);
	return _returnValue;
}
// System.Void easyar.arengineinterop.Vec3F::set_data(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3F_set_data_mEDDE41A43E2E1808901F3FDD5E7F0BB9DE880F80 (Vec3F_t09A439693B6DC70DE9C2CA29508F788D552B5CDF* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value.Length != 3) { throw new ArgumentException(); }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___value0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (value.Length != 3) { throw new ArgumentException(); }
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec3F_set_data_mEDDE41A43E2E1808901F3FDD5E7F0BB9DE880F80_RuntimeMethod_var)));
	}

IL_0015:
	{
		// this.data_0 = value[0];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		__this->___data_0_0 = L_5;
		// this.data_1 = value[1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->___data_1_1 = L_8;
		// this.data_2 = value[2];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = ___value0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		float L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->___data_2_2 = L_11;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vec3F_set_data_mEDDE41A43E2E1808901F3FDD5E7F0BB9DE880F80_AdjustorThunk (RuntimeObject* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method)
{
	Vec3F_t09A439693B6DC70DE9C2CA29508F788D552B5CDF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3F_t09A439693B6DC70DE9C2CA29508F788D552B5CDF*>(__this + _offset);
	Vec3F_set_data_mEDDE41A43E2E1808901F3FDD5E7F0BB9DE880F80(_thisAdjusted, ___value0, method);
}
// System.Void easyar.arengineinterop.Vec3F::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3F__ctor_m2F57EAF80E531D710DED6855C076A00CE6C1EE0A (Vec3F_t09A439693B6DC70DE9C2CA29508F788D552B5CDF* __this, float ___data_00, float ___data_11, float ___data_22, const RuntimeMethod* method) 
{
	{
		// this.data_0 = data_0;
		float L_0 = ___data_00;
		__this->___data_0_0 = L_0;
		// this.data_1 = data_1;
		float L_1 = ___data_11;
		__this->___data_1_1 = L_1;
		// this.data_2 = data_2;
		float L_2 = ___data_22;
		__this->___data_2_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vec3F__ctor_m2F57EAF80E531D710DED6855C076A00CE6C1EE0A_AdjustorThunk (RuntimeObject* __this, float ___data_00, float ___data_11, float ___data_22, const RuntimeMethod* method)
{
	Vec3F_t09A439693B6DC70DE9C2CA29508F788D552B5CDF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3F_t09A439693B6DC70DE9C2CA29508F788D552B5CDF*>(__this + _offset);
	Vec3F__ctor_m2F57EAF80E531D710DED6855C076A00CE6C1EE0A(_thisAdjusted, ___data_00, ___data_11, ___data_22, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single[] easyar.arengineinterop.Vec2F::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Vec2F_get_data_m54CE66C18232901D538FD7239762F654FB99E633 (Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		// return new float[] { data_0, data_1 };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		float L_2 = __this->___data_0_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = L_1;
		float L_4 = __this->___data_1_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_4);
		V_0 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* Vec2F_get_data_m54CE66C18232901D538FD7239762F654FB99E633_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C*>(__this + _offset);
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* _returnValue;
	_returnValue = Vec2F_get_data_m54CE66C18232901D538FD7239762F654FB99E633(_thisAdjusted, method);
	return _returnValue;
}
// System.Void easyar.arengineinterop.Vec2F::set_data(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec2F_set_data_mF93C085EF0FD73A219F17867806371B55B988547 (Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value.Length != 2) { throw new ArgumentException(); }
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___value0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (value.Length != 2) { throw new ArgumentException(); }
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec2F_set_data_mF93C085EF0FD73A219F17867806371B55B988547_RuntimeMethod_var)));
	}

IL_0015:
	{
		// this.data_0 = value[0];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		float L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		__this->___data_0_0 = L_5;
		// this.data_1 = value[1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->___data_1_1 = L_8;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vec2F_set_data_mF93C085EF0FD73A219F17867806371B55B988547_AdjustorThunk (RuntimeObject* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method)
{
	Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C*>(__this + _offset);
	Vec2F_set_data_mF93C085EF0FD73A219F17867806371B55B988547(_thisAdjusted, ___value0, method);
}
// System.Void easyar.arengineinterop.Vec2F::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec2F__ctor_mE261CA950BC685F8AB7D5E8F4F96D9C750BA5646 (Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C* __this, float ___data_00, float ___data_11, const RuntimeMethod* method) 
{
	{
		// this.data_0 = data_0;
		float L_0 = ___data_00;
		__this->___data_0_0 = L_0;
		// this.data_1 = data_1;
		float L_1 = ___data_11;
		__this->___data_1_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vec2F__ctor_mE261CA950BC685F8AB7D5E8F4F96D9C750BA5646_AdjustorThunk (RuntimeObject* __this, float ___data_00, float ___data_11, const RuntimeMethod* method)
{
	Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec2F_tC9BFA2E9E5D0F3E16B527769724B37F9001BEB2C*>(__this + _offset);
	Vec2F__ctor_mE261CA950BC685F8AB7D5E8F4F96D9C750BA5646(_thisAdjusted, ___data_00, ___data_11, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32[] easyar.arengineinterop.Vec4I::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Vec4I_get_data_m450F2BF61F6D4D138FEB5A7FC57D16EB65A50E5D (Vec4I_t9FB91FC52AC50FE4AFEE89C67C2A36DCE0F5696A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		// return new int[] { data_0, data_1, data_2, data_3 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		int32_t L_2 = __this->___data_0_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_1;
		int32_t L_4 = __this->___data_1_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_3;
		int32_t L_6 = __this->___data_2_2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_5;
		int32_t L_8 = __this->___data_3_3;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_8);
		V_0 = L_7;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Vec4I_get_data_m450F2BF61F6D4D138FEB5A7FC57D16EB65A50E5D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vec4I_t9FB91FC52AC50FE4AFEE89C67C2A36DCE0F5696A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec4I_t9FB91FC52AC50FE4AFEE89C67C2A36DCE0F5696A*>(__this + _offset);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* _returnValue;
	_returnValue = Vec4I_get_data_m450F2BF61F6D4D138FEB5A7FC57D16EB65A50E5D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void easyar.arengineinterop.Vec4I::set_data(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec4I_set_data_m7772EF75EC5C92174152A949FF746CD73B883CEC (Vec4I_t9FB91FC52AC50FE4AFEE89C67C2A36DCE0F5696A* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value.Length != 4) { throw new ArgumentException(); }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___value0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (value.Length != 4) { throw new ArgumentException(); }
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec4I_set_data_m7772EF75EC5C92174152A949FF746CD73B883CEC_RuntimeMethod_var)));
	}

IL_0015:
	{
		// this.data_0 = value[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		__this->___data_0_0 = L_5;
		// this.data_1 = value[1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->___data_1_1 = L_8;
		// this.data_2 = value[2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___value0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->___data_2_2 = L_11;
		// this.data_3 = value[3];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___value0;
		NullCheck(L_12);
		int32_t L_13 = 3;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		__this->___data_3_3 = L_14;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vec4I_set_data_m7772EF75EC5C92174152A949FF746CD73B883CEC_AdjustorThunk (RuntimeObject* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method)
{
	Vec4I_t9FB91FC52AC50FE4AFEE89C67C2A36DCE0F5696A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec4I_t9FB91FC52AC50FE4AFEE89C67C2A36DCE0F5696A*>(__this + _offset);
	Vec4I_set_data_m7772EF75EC5C92174152A949FF746CD73B883CEC(_thisAdjusted, ___value0, method);
}
// System.Void easyar.arengineinterop.Vec4I::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec4I__ctor_mD3F54154A1AA5FE32A43208EB041BD34C4BB3C65 (Vec4I_t9FB91FC52AC50FE4AFEE89C67C2A36DCE0F5696A* __this, int32_t ___data_00, int32_t ___data_11, int32_t ___data_22, int32_t ___data_33, const RuntimeMethod* method) 
{
	{
		// this.data_0 = data_0;
		int32_t L_0 = ___data_00;
		__this->___data_0_0 = L_0;
		// this.data_1 = data_1;
		int32_t L_1 = ___data_11;
		__this->___data_1_1 = L_1;
		// this.data_2 = data_2;
		int32_t L_2 = ___data_22;
		__this->___data_2_2 = L_2;
		// this.data_3 = data_3;
		int32_t L_3 = ___data_33;
		__this->___data_3_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vec4I__ctor_mD3F54154A1AA5FE32A43208EB041BD34C4BB3C65_AdjustorThunk (RuntimeObject* __this, int32_t ___data_00, int32_t ___data_11, int32_t ___data_22, int32_t ___data_33, const RuntimeMethod* method)
{
	Vec4I_t9FB91FC52AC50FE4AFEE89C67C2A36DCE0F5696A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec4I_t9FB91FC52AC50FE4AFEE89C67C2A36DCE0F5696A*>(__this + _offset);
	Vec4I__ctor_mD3F54154A1AA5FE32A43208EB041BD34C4BB3C65(_thisAdjusted, ___data_00, ___data_11, ___data_22, ___data_33, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32[] easyar.arengineinterop.Vec2I::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Vec2I_get_data_m80ECBBC2086D697056701D49CF5FEA861A5485F4 (Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		// return new int[] { data_0, data_1 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		int32_t L_2 = __this->___data_0_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_1;
		int32_t L_4 = __this->___data_1_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_4);
		V_0 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Vec2I_get_data_m80ECBBC2086D697056701D49CF5FEA861A5485F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663*>(__this + _offset);
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* _returnValue;
	_returnValue = Vec2I_get_data_m80ECBBC2086D697056701D49CF5FEA861A5485F4(_thisAdjusted, method);
	return _returnValue;
}
// System.Void easyar.arengineinterop.Vec2I::set_data(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec2I_set_data_mEE55FDA1BBAAB70A8A574E0CC7D0E086C5E6FAB0 (Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value.Length != 2) { throw new ArgumentException(); }
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___value0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (value.Length != 2) { throw new ArgumentException(); }
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec2I_set_data_mEE55FDA1BBAAB70A8A574E0CC7D0E086C5E6FAB0_RuntimeMethod_var)));
	}

IL_0015:
	{
		// this.data_0 = value[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		__this->___data_0_0 = L_5;
		// this.data_1 = value[1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->___data_1_1 = L_8;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vec2I_set_data_mEE55FDA1BBAAB70A8A574E0CC7D0E086C5E6FAB0_AdjustorThunk (RuntimeObject* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method)
{
	Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663*>(__this + _offset);
	Vec2I_set_data_mEE55FDA1BBAAB70A8A574E0CC7D0E086C5E6FAB0(_thisAdjusted, ___value0, method);
}
// System.Void easyar.arengineinterop.Vec2I::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec2I__ctor_m9C2559B4380AFF93029A25F70741197DA4F58EA6 (Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663* __this, int32_t ___data_00, int32_t ___data_11, const RuntimeMethod* method) 
{
	{
		// this.data_0 = data_0;
		int32_t L_0 = ___data_00;
		__this->___data_0_0 = L_0;
		// this.data_1 = data_1;
		int32_t L_1 = ___data_11;
		__this->___data_1_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Vec2I__ctor_m9C2559B4380AFF93029A25F70741197DA4F58EA6_AdjustorThunk (RuntimeObject* __this, int32_t ___data_00, int32_t ___data_11, const RuntimeMethod* method)
{
	Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec2I_tEC184AD41582370585AED74DAF7C41DE8E584663*>(__this + _offset);
	Vec2I__ctor_m9C2559B4380AFF93029A25F70741197DA4F58EA6(_thisAdjusted, ___data_00, ___data_11, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Retainer_Invoke_m97B4D481743ACBAEB48ADA08F866D4F89A6A7405_inline (Retainer_tA04C0737232C16D1B32C7E159CA4C186E554E02E* __this, intptr_t ___This0, intptr_t* ___Return1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___This0, ___Return1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
