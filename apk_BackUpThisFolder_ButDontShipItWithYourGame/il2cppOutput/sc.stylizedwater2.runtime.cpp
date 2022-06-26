#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3;
// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>
struct Action_2_t38DEBB6BD6AE1CA882236F63F7E1DB3781D38994;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>
struct Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Rendering.Universal.ScriptableRendererData>
struct IEnumerable_1_t89914CC013B1C9FF86FACFF085052D10D2ED63C8;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Camera>
struct IEqualityComparer_1_t57A43DC72C9BCCA9EDCF71364B5BF21D7EB6497C;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Camera,UnityEngine.Camera>
struct KeyCollection_t6E32A963438F3AC8547A9E0382822CA9611B610C;
// System.Collections.Generic.List`1<UnityEngine.Camera>
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Int64>
struct List_1_tF9D88C946600C782EE786A252258C0AA97BD019A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<StylizedWater2.PlanarReflectionRenderer>
struct List_1_t90848C30298099F2E5867084B4C717401AAAC343;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererData>
struct List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature>
struct List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<StylizedWater2.WaterObject>
struct List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Camera,UnityEngine.Camera>
struct ValueCollection_t29DC799B81F505FC280E6436034F564A98D5AACD;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Camera,UnityEngine.Camera>[]
struct EntryU5BU5D_t64B3235E82FADC92455D2C258206267CF0C30731;
// UnityEngine.Experimental.Rendering.GraphicsFormat[][]
struct GraphicsFormatU5BU5DU5BU5D_t1424BD937A890524D2A66FF39E61DEB0F10FE0A2;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// StylizedWater2.PlanarReflectionRenderer[]
struct PlanarReflectionRendererU5BU5D_t3C7AFF57E9988305A65B94CE5B8072729AC181CF;
// UnityEngine.Plane[]
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE;
// UnityEngine.Rendering.Universal.ScriptableRenderer[]
struct ScriptableRendererU5BU5D_t9B15C048BCE03A67E830F1C79989B6A3E43788E6;
// UnityEngine.Rendering.Universal.ScriptableRendererData[]
struct ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// StylizedWater2.WaterObject[]
struct WaterObjectU5BU5D_t0E5E1FD9A5C96B9232EA975A021FF884CA59CE28;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// StylizedWater2.FloatingTransform
struct FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041;
// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// StylizedWater2.PlanarReflectionRenderer
struct PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93;
// UnityEngine.Rendering.Universal.PostProcessData
struct PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Rendering.Universal.ScriptableRendererData
struct ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.Rendering.Universal.StencilStateData
struct StencilStateData_t4181AB6F6A795950C67270CB147999D915071462;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData
struct UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93;
// UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset
struct UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232;
// UnityEngine.Rendering.Universal.UniversalRendererData
struct UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8;
// StylizedWater2.WaterGrid
struct WaterGrid_tEA723899E69DB1B321650DD7FB81A2A5EC3D308F;
// StylizedWater2.WaterMesh
struct WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB;
// StylizedWater2.WaterObject
struct WaterObject_tB3C4631FB550815180854E156E4569046813FBF7;
// UnityEngine.Rendering.Universal.XRSystemData
struct XRSystemData_t89A064914358326F98105E94D5F082C186133DE6;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Rendering.Universal.ScriptableRendererData/DebugShaderResources
struct DebugShaderResources_tDE399BFF5E1E9403CD4793CD8C8A51796C682B8B;
// UnityEngine.Rendering.Universal.UniversalRendererData/ShaderResources
struct ShaderResources_t9E48D1BC255505EC66B90558EF6489F704FD3663;

IL2CPP_EXTERN_C RuntimeClass* Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t90848C30298099F2E5867084B4C717401AAAC343_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06D24D9DFDF42E902387C248B5FE0C3A0C3B0F3F;
IL2CPP_EXTERN_C String_t* _stringLiteral08ECFBD1FA56E42A91320B269A5FC32543D1AF2F;
IL2CPP_EXTERN_C String_t* _stringLiteral0D4F33DD4748386169AA3A8766BC7E48C978031F;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral11C3FC57DBA15819E8A8BE4744C27A94546EB5A5;
IL2CPP_EXTERN_C String_t* _stringLiteral1CC9C2766414EDF919AC71923061B159260530CD;
IL2CPP_EXTERN_C String_t* _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306;
IL2CPP_EXTERN_C String_t* _stringLiteral442C93593DCE45765B4642894C14D3F5BDE87878;
IL2CPP_EXTERN_C String_t* _stringLiteral579B607FD0BB19369CAE06D0FC1F56ED2D7F85D8;
IL2CPP_EXTERN_C String_t* _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20;
IL2CPP_EXTERN_C String_t* _stringLiteral8365E51B06F6F88936033E93B81C94A49DAA0CCD;
IL2CPP_EXTERN_C String_t* _stringLiteral88588F53B86AB04B4D6393CD20A5D45A644714F8;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9E91652B1F39C3AC614FDB2C418E358718B2DB6C;
IL2CPP_EXTERN_C String_t* _stringLiteralA01E02B69F26BD6D8B919E06E3FE6737ABE9A966;
IL2CPP_EXTERN_C String_t* _stringLiteralA5D45491525886D74C125D27A723A559E36BDA79;
IL2CPP_EXTERN_C String_t* _stringLiteralB23C3717573626FB4C3C7DF5C19EDE7689837214;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E2F4CB828FF7CA5AA25219B9BC3DCE27927350;
IL2CPP_EXTERN_C String_t* _stringLiteralC3096FAD459C19E472D751308B7FF21992979506;
IL2CPP_EXTERN_C String_t* _stringLiteralC341FAB7EB586F5B01F4EF063D8F0F695CF6B43E;
IL2CPP_EXTERN_C String_t* _stringLiteralC3858969C727F32D417FC5DED78C5401572257A8;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ACEF3B41F113A58664962B546D70687836F373;
IL2CPP_EXTERN_C String_t* _stringLiteralCA2DEC8FE08E1ED2D7923EB57B196235FAD5E16B;
IL2CPP_EXTERN_C String_t* _stringLiteralCA5D4BACC6AEC1476DA4D044ED5C5E9C7CDEB9A7;
IL2CPP_EXTERN_C String_t* _stringLiteralDFDD6929A3459C6BCA4D063F0F006E9F2061D3AA;
IL2CPP_EXTERN_C String_t* _stringLiteralE79AE536975E96591357EA5533F095F6E75B5545;
IL2CPP_EXTERN_C String_t* _stringLiteralE8AF67BD0F460B4EB1FFE289A637D74287D74EFD;
IL2CPP_EXTERN_C String_t* _stringLiteralEBAE29A248390A76DE1161F1A5D9073CEA6DDF68;
IL2CPP_EXTERN_C String_t* _stringLiteralF59CB42CDF961BCBC461EC8E5206E1947BF4606B;
IL2CPP_EXTERN_C String_t* _stringLiteralF823BEC745C6E8FF7238D495F7C669F403D6E304;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m4E42B9C57825324589C0E4A268D06097918F5A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m0985B9C4515ABFC16DCD73938C31FD14F388CBB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m7BEABDF6190A27125E278461686B950DBC2E13FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m170AED7C79718F1017B33E251480A89CEAEB35D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCC86EBF40667A343EA2CBB31F715245A4A6417E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD8C30AF913A8F62839C214C596CA1AFCA100AFD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4CAEAF0CB9F895AB66763819CC7CB001B0C7DCDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4E0CD273C9B2F20DCD03E0A70B95F65B38EC1209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m61250AE01DF79598A1556704CA67149317F84597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4C6BD8EE3917E22F4E0E3ADD7A777941597F4CF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m558424BB48FC697D760DA52A48CB00FD794BB5A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mECD1F7865FB8107F52675796DFB52D59D7B5E44D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m23B4609BDA1A4B22ACA63C1AA376CCAAF06A5168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m26EAC87314F3DC3E78FEABFB95369320D3E4EFFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m36BD30099AE5596DD87AFF4F979E44119A7B8C19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m257D49B2F0B2F6DAFF2E3EC7F53B5930D5BB6D46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWaterObject_tB3C4631FB550815180854E156E4569046813FBF7_m92A900BFF143BA343AA4003EBF0B45586164A3EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36557C3431461ABB7FE482D7131A83F4DEDE4021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD564DD588CF150AFDB80F4773D248194256B6A34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF82C5C46AF3D7BA669FA0EA0292D63735E262493_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m600E0A8320FCE31F97B32525C1A012CA70FDC6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m7FF0F9331146763E7C1C71B6F92EEF57A910B9D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m246B302C193D5B42ED23D3FE059E8EEEDF0742C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m457BCFEFB866843CFEA2CEDF95DCDFE58B5D2BDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m990D9822E02F48849D7C41180BF383836D89F379_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m9D07AEEC3BD3364325EA28BEBF09C4D5BFB2ED18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mBEEAD73F7B94B7F8C89B23D93B2DCAA252916BC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mA20937394A0961A947EFE502EBD77AD6245B7D9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m34C8555D6DCC2D0287E23BFB31223CF1D0734217_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m791FAAAE9C6541E788E1780357AC890DAE9859F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCABE2A779DBCE0DF655A8CB2745D7D5D898E2FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDD19270367F605476E9B7A7A9872D28C89FFF6D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlanarReflectionRenderer_OnWillRenderCamera_m58D0B9E42BE62705971ED37E6B0632919039DF0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE;
struct ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2A9FB8FD54BE44F9BFD0986FE17F3EE40905D8A3 
{
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>
struct Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t64B3235E82FADC92455D2C258206267CF0C30731* ____entries_1;
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
	KeyCollection_t6E32A963438F3AC8547A9E0382822CA9611B610C* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t29DC799B81F505FC280E6436034F564A98D5AACD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<StylizedWater2.PlanarReflectionRenderer>
struct List_1_t90848C30298099F2E5867084B4C717401AAAC343  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PlanarReflectionRendererU5BU5D_t3C7AFF57E9988305A65B94CE5B8072729AC181CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t90848C30298099F2E5867084B4C717401AAAC343_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PlanarReflectionRendererU5BU5D_t3C7AFF57E9988305A65B94CE5B8072729AC181CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererData>
struct List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<StylizedWater2.WaterObject>
struct List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WaterObjectU5BU5D_t0E5E1FD9A5C96B9232EA975A021FF884CA59CE28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WaterObjectU5BU5D_t0E5E1FD9A5C96B9232EA975A021FF884CA59CE28* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2  : public RuntimeObject
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;
};

struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields
{
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___none_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// StylizedWater2.PipelineUtilities
struct PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628  : public RuntimeObject
{
};

struct PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields
{
	// UnityEngine.GUIContent[] StylizedWater2.PipelineUtilities::_rendererDisplayList
	GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503* ____rendererDisplayList_1;
	// System.Int32[] StylizedWater2.PipelineUtilities::_rendererIndexList
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____rendererIndexList_2;
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

// StylizedWater2.WaterMesh
struct WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB  : public RuntimeObject
{
	// StylizedWater2.WaterMesh/Shape StylizedWater2.WaterMesh::shape
	int32_t ___shape_0;
	// System.Single StylizedWater2.WaterMesh::size
	float ___size_1;
	// System.Single StylizedWater2.WaterMesh::UVTiling
	float ___UVTiling_2;
	// System.Int32 StylizedWater2.WaterMesh::subdivisions
	int32_t ___subdivisions_3;
	// System.Single StylizedWater2.WaterMesh::noise
	float ___noise_4;
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

// System.Collections.Generic.List`1/Enumerator<StylizedWater2.PlanarReflectionRenderer>
struct Enumerator_t0E643EF7F3C4D0373A20F74089A813C5E62E46A5 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t90848C30298099F2E5867084B4C717401AAAC343* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<StylizedWater2.WaterObject>
struct Enumerator_tA93798F6BF00422CF6D475D4BCDDD9FE9347F46F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>
struct KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_1;
};

struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0_StaticFields
{
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ShaderTagId::none
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___none_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// Unity.Mathematics.float2
struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA 
{
	// System.Single Unity.Mathematics.float2::x
	float ___x_0;
	// System.Single Unity.Mathematics.float2::y
	float ___y_1;
};

struct float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA_StaticFields
{
	// Unity.Mathematics.float2 Unity.Mathematics.float2::zero
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___zero_2;
};

// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;
};

struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero_3;
};

// Unity.Mathematics.float4
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	// System.Single Unity.Mathematics.float4::x
	float ___x_0;
	// System.Single Unity.Mathematics.float4::y
	float ___y_1;
	// System.Single Unity.Mathematics.float4::z
	float ___z_2;
	// System.Single Unity.Mathematics.float4::w
	float ___w_3;
};

struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	// Unity.Mathematics.float4 Unity.Mathematics.float4::zero
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>
struct Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// StylizedWater2.Buoyancy
struct Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E  : public RuntimeObject
{
};

struct Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields
{
	// System.Int32 StylizedWater2.Buoyancy::CustomTimeID
	int32_t ___CustomTimeID_0;
	// System.Int32 StylizedWater2.Buoyancy::TimeParametersID
	int32_t ___TimeParametersID_1;
	// System.Int32 StylizedWater2.Buoyancy::WaveDistID
	int32_t ___WaveDistID_3;
	// System.Int32 StylizedWater2.Buoyancy::WaveSpeedID
	int32_t ___WaveSpeedID_4;
	// System.Int32 StylizedWater2.Buoyancy::WaveHeightID
	int32_t ___WaveHeightID_5;
	// System.Int32 StylizedWater2.Buoyancy::WaveSteepnessID
	int32_t ___WaveSteepnessID_6;
	// System.Int32 StylizedWater2.Buoyancy::WaveCountID
	int32_t ___WaveCountID_7;
	// System.Int32 StylizedWater2.Buoyancy::WaveDirectionID
	int32_t ___WaveDirectionID_8;
	// System.Int32 StylizedWater2.Buoyancy::AnimationParamID
	int32_t ___AnimationParamID_9;
	// System.Boolean StylizedWater2.Buoyancy::Initialized
	bool ___Initialized_10;
	// System.Boolean StylizedWater2.Buoyancy::UseCustomTime
	bool ___UseCustomTime_11;
	// System.Single StylizedWater2.Buoyancy::customTimeValue
	float ___customTimeValue_12;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::sine
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___sine_13;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::cosine
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___cosine_14;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::dotABCD
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___dotABCD_15;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::AB
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___AB_16;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::CD
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___CD_17;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::direction1
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___direction1_18;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::direction2
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___direction2_19;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::TIME
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___TIME_20;
	// Unity.Mathematics.float2 StylizedWater2.Buoyancy::planarPosition
	float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___planarPosition_21;
	// System.Single StylizedWater2.Buoyancy::waveDistance
	float ___waveDistance_22;
	// System.Single StylizedWater2.Buoyancy::waveSpeed
	float ___waveSpeed_23;
	// System.Single StylizedWater2.Buoyancy::waveHeight
	float ___waveHeight_24;
	// System.Single StylizedWater2.Buoyancy::waveSteepness
	float ___waveSteepness_25;
	// System.Int32 StylizedWater2.Buoyancy::waveCount
	int32_t ___waveCount_26;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::waveDirection
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___waveDirection_27;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::animationParams
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___animationParams_28;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::amp
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___amp_29;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::speed
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___speed_30;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::dir1
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___dir1_31;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::dir2
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___dir2_32;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::steepness
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___steepness_33;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::frequency
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___frequency_34;
	// Unity.Mathematics.float4 StylizedWater2.Buoyancy::realSpeed
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___realSpeed_35;
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

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Rendering.ScriptableRenderContext
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 
{
	// System.IntPtr UnityEngine.Rendering.ScriptableRenderContext::m_Ptr
	intptr_t ___m_Ptr_1;
};

struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields
{
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ScriptableRenderContext::kRenderTypeTag
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___kRenderTypeTag_0;
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

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
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

// System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>
struct Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
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

// UnityEngine.Rendering.Universal.ScriptableRendererData
struct ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRendererData::<isInvalidated>k__BackingField
	bool ___U3CisInvalidatedU3Ek__BackingField_4;
	// UnityEngine.Rendering.Universal.ScriptableRendererData/DebugShaderResources UnityEngine.Rendering.Universal.ScriptableRendererData::debugShaders
	DebugShaderResources_tDE399BFF5E1E9403CD4793CD8C8A51796C682B8B* ___debugShaders_5;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererFeature> UnityEngine.Rendering.Universal.ScriptableRendererData::m_RendererFeatures
	List_1_t2121653FB628940E808D105AD2C17E0F20AFB3A6* ___m_RendererFeatures_6;
	// System.Collections.Generic.List`1<System.Int64> UnityEngine.Rendering.Universal.ScriptableRendererData::m_RendererFeatureMap
	List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* ___m_RendererFeatureMap_7;
	// System.Boolean UnityEngine.Rendering.Universal.ScriptableRendererData::m_UseNativeRenderPass
	bool ___m_UseNativeRenderPass_8;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset
struct UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232  : public RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E
{
	// UnityEngine.Shader UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_DefaultShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_DefaultShader_4;
	// UnityEngine.Rendering.Universal.ScriptableRenderer[] UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_Renderers
	ScriptableRendererU5BU5D_t9B15C048BCE03A67E830F1C79989B6A3E43788E6* ___m_Renderers_5;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::k_AssetVersion
	int32_t ___k_AssetVersion_6;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::k_AssetPreviousVersion
	int32_t ___k_AssetPreviousVersion_7;
	// UnityEngine.Rendering.Universal.RendererType UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RendererType
	int32_t ___m_RendererType_8;
	// UnityEngine.Rendering.Universal.ScriptableRendererData UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RendererData
	ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___m_RendererData_9;
	// UnityEngine.Rendering.Universal.ScriptableRendererData[] UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RendererDataList
	ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* ___m_RendererDataList_10;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_DefaultRendererIndex
	int32_t ___m_DefaultRendererIndex_11;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RequireDepthTexture
	bool ___m_RequireDepthTexture_12;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RequireOpaqueTexture
	bool ___m_RequireOpaqueTexture_13;
	// UnityEngine.Rendering.Universal.Downsampling UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_OpaqueDownsampling
	int32_t ___m_OpaqueDownsampling_14;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_SupportsTerrainHoles
	bool ___m_SupportsTerrainHoles_15;
	// UnityEngine.Rendering.Universal.StoreActionsOptimization UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_StoreActionsOptimization
	int32_t ___m_StoreActionsOptimization_16;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_SupportsHDR
	bool ___m_SupportsHDR_17;
	// UnityEngine.Rendering.Universal.MsaaQuality UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MSAA
	int32_t ___m_MSAA_18;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_RenderScale
	float ___m_RenderScale_19;
	// UnityEngine.Rendering.Universal.UpscalingFilterSelection UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_UpscalingFilter
	int32_t ___m_UpscalingFilter_20;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_FsrOverrideSharpness
	bool ___m_FsrOverrideSharpness_21;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_FsrSharpness
	float ___m_FsrSharpness_22;
	// UnityEngine.Rendering.Universal.LightRenderingMode UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MainLightRenderingMode
	int32_t ___m_MainLightRenderingMode_23;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MainLightShadowsSupported
	bool ___m_MainLightShadowsSupported_24;
	// UnityEngine.Rendering.Universal.ShadowResolution UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MainLightShadowmapResolution
	int32_t ___m_MainLightShadowmapResolution_25;
	// UnityEngine.Rendering.Universal.LightRenderingMode UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsRenderingMode
	int32_t ___m_AdditionalLightsRenderingMode_26;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsPerObjectLimit
	int32_t ___m_AdditionalLightsPerObjectLimit_27;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightShadowsSupported
	bool ___m_AdditionalLightShadowsSupported_28;
	// UnityEngine.Rendering.Universal.ShadowResolution UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsShadowmapResolution
	int32_t ___m_AdditionalLightsShadowmapResolution_29;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsShadowResolutionTierLow
	int32_t ___m_AdditionalLightsShadowResolutionTierLow_30;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsShadowResolutionTierMedium
	int32_t ___m_AdditionalLightsShadowResolutionTierMedium_31;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsShadowResolutionTierHigh
	int32_t ___m_AdditionalLightsShadowResolutionTierHigh_32;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ReflectionProbeBlending
	bool ___m_ReflectionProbeBlending_33;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ReflectionProbeBoxProjection
	bool ___m_ReflectionProbeBoxProjection_34;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowDistance
	float ___m_ShadowDistance_35;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowCascadeCount
	int32_t ___m_ShadowCascadeCount_36;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_Cascade2Split
	float ___m_Cascade2Split_37;
	// UnityEngine.Vector2 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_Cascade3Split
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Cascade3Split_38;
	// UnityEngine.Vector3 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_Cascade4Split
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Cascade4Split_39;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_CascadeBorder
	float ___m_CascadeBorder_40;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowDepthBias
	float ___m_ShadowDepthBias_41;
	// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowNormalBias
	float ___m_ShadowNormalBias_42;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_SoftShadowsSupported
	bool ___m_SoftShadowsSupported_43;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ConservativeEnclosingSphere
	bool ___m_ConservativeEnclosingSphere_44;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_NumIterationsEnclosingSphere
	int32_t ___m_NumIterationsEnclosingSphere_45;
	// UnityEngine.Rendering.Universal.LightCookieResolution UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsCookieResolution
	int32_t ___m_AdditionalLightsCookieResolution_46;
	// UnityEngine.Rendering.Universal.LightCookieFormat UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_AdditionalLightsCookieFormat
	int32_t ___m_AdditionalLightsCookieFormat_47;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_UseSRPBatcher
	bool ___m_UseSRPBatcher_48;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_SupportsDynamicBatching
	bool ___m_SupportsDynamicBatching_49;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MixedLightingSupported
	bool ___m_MixedLightingSupported_50;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_SupportsLightLayers
	bool ___m_SupportsLightLayers_51;
	// UnityEngine.Rendering.Universal.PipelineDebugLevel UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_DebugLevel
	int32_t ___m_DebugLevel_52;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_UseAdaptivePerformance
	bool ___m_UseAdaptivePerformance_53;
	// UnityEngine.Rendering.Universal.ColorGradingMode UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ColorGradingMode
	int32_t ___m_ColorGradingMode_54;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ColorGradingLutSize
	int32_t ___m_ColorGradingLutSize_55;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_UseFastSRGBLinearConversion
	bool ___m_UseFastSRGBLinearConversion_56;
	// UnityEngine.Rendering.Universal.ShadowQuality UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowType
	int32_t ___m_ShadowType_57;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_LocalShadowsSupported
	bool ___m_LocalShadowsSupported_58;
	// UnityEngine.Rendering.Universal.ShadowResolution UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_LocalShadowsAtlasResolution
	int32_t ___m_LocalShadowsAtlasResolution_59;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_MaxPixelLights
	int32_t ___m_MaxPixelLights_60;
	// UnityEngine.Rendering.Universal.ShadowResolution UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowAtlasResolution
	int32_t ___m_ShadowAtlasResolution_61;
	// UnityEngine.Rendering.Universal.ShaderVariantLogLevel UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShaderVariantLogLevel
	int32_t ___m_ShaderVariantLogLevel_62;
	// UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_VolumeFrameworkUpdateMode
	int32_t ___m_VolumeFrameworkUpdateMode_63;
	// UnityEngine.Rendering.Universal.ShadowCascadesOption UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::m_ShadowCascades
	int32_t ___m_ShadowCascades_72;
};

struct UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_StaticFields
{
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::AdditionalLightsDefaultShadowResolutionTierLow
	int32_t ___AdditionalLightsDefaultShadowResolutionTierLow_68;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::AdditionalLightsDefaultShadowResolutionTierMedium
	int32_t ___AdditionalLightsDefaultShadowResolutionTierMedium_69;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::AdditionalLightsDefaultShadowResolutionTierHigh
	int32_t ___AdditionalLightsDefaultShadowResolutionTierHigh_70;
	// UnityEngine.Experimental.Rendering.GraphicsFormat[][] UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::s_LightCookieFormatList
	GraphicsFormatU5BU5DU5BU5D_t1424BD937A890524D2A66FF39E61DEB0F10FE0A2* ___s_LightCookieFormatList_71;
};

// UnityEngine.Rendering.Universal.UniversalRendererData
struct UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6  : public ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7
{
	// UnityEngine.Rendering.Universal.PostProcessData UnityEngine.Rendering.Universal.UniversalRendererData::postProcessData
	PostProcessData_t106B5638205D5CBAF18F2573047F2DC23BDB2F05* ___postProcessData_9;
	// UnityEngine.Rendering.Universal.XRSystemData UnityEngine.Rendering.Universal.UniversalRendererData::xrSystemData
	XRSystemData_t89A064914358326F98105E94D5F082C186133DE6* ___xrSystemData_10;
	// UnityEngine.Rendering.Universal.UniversalRendererData/ShaderResources UnityEngine.Rendering.Universal.UniversalRendererData::shaders
	ShaderResources_t9E48D1BC255505EC66B90558EF6489F704FD3663* ___shaders_11;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalRendererData::m_AssetVersion
	int32_t ___m_AssetVersion_13;
	// UnityEngine.LayerMask UnityEngine.Rendering.Universal.UniversalRendererData::m_OpaqueLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_OpaqueLayerMask_14;
	// UnityEngine.LayerMask UnityEngine.Rendering.Universal.UniversalRendererData::m_TransparentLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_TransparentLayerMask_15;
	// UnityEngine.Rendering.Universal.StencilStateData UnityEngine.Rendering.Universal.UniversalRendererData::m_DefaultStencilState
	StencilStateData_t4181AB6F6A795950C67270CB147999D915071462* ___m_DefaultStencilState_16;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRendererData::m_ShadowTransparentReceive
	bool ___m_ShadowTransparentReceive_17;
	// UnityEngine.Rendering.Universal.RenderingMode UnityEngine.Rendering.Universal.UniversalRendererData::m_RenderingMode
	int32_t ___m_RenderingMode_18;
	// UnityEngine.Rendering.Universal.DepthPrimingMode UnityEngine.Rendering.Universal.UniversalRendererData::m_DepthPrimingMode
	int32_t ___m_DepthPrimingMode_19;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRendererData::m_AccurateGbufferNormals
	bool ___m_AccurateGbufferNormals_20;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalRendererData::m_ClusteredRendering
	bool ___m_ClusteredRendering_21;
	// UnityEngine.Rendering.Universal.TileSize UnityEngine.Rendering.Universal.UniversalRendererData::m_TileSize
	int32_t ___m_TileSize_23;
	// UnityEngine.Rendering.Universal.IntermediateTextureMode UnityEngine.Rendering.Universal.UniversalRendererData::m_IntermediateTextureMode
	int32_t ___m_IntermediateTextureMode_24;
};

// StylizedWater2.FloatingTransform
struct FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// StylizedWater2.WaterObject StylizedWater2.FloatingTransform::waterObject
	WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* ___waterObject_4;
	// StylizedWater2.FloatingTransform/WaterLevelSource StylizedWater2.FloatingTransform::waterLevelSource
	int32_t ___waterLevelSource_5;
	// System.Single StylizedWater2.FloatingTransform::waterLevel
	float ___waterLevel_6;
	// UnityEngine.Transform StylizedWater2.FloatingTransform::childTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___childTransform_7;
	// System.Single StylizedWater2.FloatingTransform::heightOffset
	float ___heightOffset_8;
	// System.Single StylizedWater2.FloatingTransform::rollAmount
	float ___rollAmount_9;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> StylizedWater2.FloatingTransform::samples
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___samples_10;
	// UnityEngine.Vector3 StylizedWater2.FloatingTransform::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_11;
	// System.Single StylizedWater2.FloatingTransform::height
	float ___height_12;
	// System.Single StylizedWater2.FloatingTransform::m_waterLevel
	float ___m_waterLevel_13;
};

struct FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041_StaticFields
{
	// System.Boolean StylizedWater2.FloatingTransform::Disable
	bool ___Disable_14;
};

// StylizedWater2.PlanarReflectionRenderer
struct PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera> StylizedWater2.PlanarReflectionRenderer::reflectionCameras
	Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* ___reflectionCameras_5;
	// UnityEngine.LayerMask StylizedWater2.PlanarReflectionRenderer::cullingMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___cullingMask_6;
	// System.Int32 StylizedWater2.PlanarReflectionRenderer::rendererIndex
	int32_t ___rendererIndex_7;
	// System.Single StylizedWater2.PlanarReflectionRenderer::offset
	float ___offset_8;
	// System.Boolean StylizedWater2.PlanarReflectionRenderer::includeSkybox
	bool ___includeSkybox_9;
	// System.Single StylizedWater2.PlanarReflectionRenderer::renderRange
	float ___renderRange_10;
	// System.Single StylizedWater2.PlanarReflectionRenderer::renderScale
	float ___renderScale_11;
	// System.Collections.Generic.List`1<StylizedWater2.WaterObject> StylizedWater2.PlanarReflectionRenderer::waterObjects
	List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* ___waterObjects_12;
	// UnityEngine.Bounds StylizedWater2.PlanarReflectionRenderer::bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds_13;
	// UnityEngine.Camera StylizedWater2.PlanarReflectionRenderer::reflectionCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___reflectionCamera_14;
	// System.Single StylizedWater2.PlanarReflectionRenderer::m_renderScale
	float ___m_renderScale_16;
	// System.Single StylizedWater2.PlanarReflectionRenderer::m_renderRange
	float ___m_renderRange_17;
};

struct PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields
{
	// System.Collections.Generic.List`1<StylizedWater2.PlanarReflectionRenderer> StylizedWater2.PlanarReflectionRenderer::Instances
	List_1_t90848C30298099F2E5867084B4C717401AAAC343* ___Instances_4;
	// UnityEngine.RenderTexture StylizedWater2.PlanarReflectionRenderer::currentBuffer
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___currentBuffer_15;
	// System.Boolean StylizedWater2.PlanarReflectionRenderer::m_reflectionsEnabled
	bool ___m_reflectionsEnabled_18;
	// System.Int32 StylizedWater2.PlanarReflectionRenderer::_PlanarReflectionsEnabledID
	int32_t ____PlanarReflectionsEnabledID_19;
	// System.Int32 StylizedWater2.PlanarReflectionRenderer::_PlanarReflectionLeftID
	int32_t ____PlanarReflectionLeftID_20;
	// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData StylizedWater2.PlanarReflectionRenderer::cameraData
	UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* ___cameraData_21;
	// UnityEngine.Plane[] StylizedWater2.PlanarReflectionRenderer::frustrumPlanes
	PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ___frustrumPlanes_22;
	// UnityEngine.Vector4 StylizedWater2.PlanarReflectionRenderer::reflectionPlane
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___reflectionPlane_23;
	// UnityEngine.Matrix4x4 StylizedWater2.PlanarReflectionRenderer::reflectionBase
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___reflectionBase_24;
	// UnityEngine.Vector3 StylizedWater2.PlanarReflectionRenderer::oldCamPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oldCamPos_25;
	// UnityEngine.Matrix4x4 StylizedWater2.PlanarReflectionRenderer::worldToCamera
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___worldToCamera_26;
	// UnityEngine.Matrix4x4 StylizedWater2.PlanarReflectionRenderer::viewMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix_27;
	// UnityEngine.Matrix4x4 StylizedWater2.PlanarReflectionRenderer::projectionMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projectionMatrix_28;
	// UnityEngine.Vector4 StylizedWater2.PlanarReflectionRenderer::clipPlane
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___clipPlane_29;
	// System.Single[] StylizedWater2.PlanarReflectionRenderer::layerCullDistances
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___layerCullDistances_30;
};

// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData
struct UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RenderShadows
	bool ___m_RenderShadows_8;
	// UnityEngine.Rendering.Universal.CameraOverrideOption UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RequiresDepthTextureOption
	int32_t ___m_RequiresDepthTextureOption_9;
	// UnityEngine.Rendering.Universal.CameraOverrideOption UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RequiresOpaqueTextureOption
	int32_t ___m_RequiresOpaqueTextureOption_10;
	// UnityEngine.Rendering.Universal.CameraRenderType UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_CameraType
	int32_t ___m_CameraType_11;
	// System.Collections.Generic.List`1<UnityEngine.Camera> UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Cameras
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___m_Cameras_12;
	// System.Int32 UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RendererIndex
	int32_t ___m_RendererIndex_13;
	// UnityEngine.LayerMask UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_VolumeLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_VolumeLayerMask_14;
	// UnityEngine.Transform UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_VolumeTrigger
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_VolumeTrigger_15;
	// UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_VolumeFrameworkUpdateModeOption
	int32_t ___m_VolumeFrameworkUpdateModeOption_16;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RenderPostProcessing
	bool ___m_RenderPostProcessing_17;
	// UnityEngine.Rendering.Universal.AntialiasingMode UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Antialiasing
	int32_t ___m_Antialiasing_18;
	// UnityEngine.Rendering.Universal.AntialiasingQuality UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_AntialiasingQuality
	int32_t ___m_AntialiasingQuality_19;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_StopNaN
	bool ___m_StopNaN_20;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Dithering
	bool ___m_Dithering_21;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_ClearDepth
	bool ___m_ClearDepth_22;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_AllowXRRendering
	bool ___m_AllowXRRendering_23;
	// UnityEngine.Camera UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_24;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RequiresDepthTexture
	bool ___m_RequiresDepthTexture_25;
	// System.Boolean UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_RequiresColorTexture
	bool ___m_RequiresColorTexture_26;
	// System.Single UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_Version
	float ___m_Version_27;
	// UnityEngine.Rendering.VolumeStack UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::m_VolumeStack
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* ___m_VolumeStack_29;
};

struct UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_StaticFields
{
	// UnityEngine.Rendering.Universal.UniversalAdditionalCameraData UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::s_DefaultAdditionalCameraData
	UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* ___s_DefaultAdditionalCameraData_28;
};

// StylizedWater2.WaterGrid
struct WaterGrid_tEA723899E69DB1B321650DD7FB81A2A5EC3D308F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean StylizedWater2.WaterGrid::followSceneCamera
	bool ___followSceneCamera_4;
	// System.Boolean StylizedWater2.WaterGrid::autoAssignCamera
	bool ___autoAssignCamera_5;
	// UnityEngine.Transform StylizedWater2.WaterGrid::followTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___followTarget_6;
	// System.Single StylizedWater2.WaterGrid::scale
	float ___scale_7;
	// System.Single StylizedWater2.WaterGrid::vertexDistance
	float ___vertexDistance_8;
	// System.Int32 StylizedWater2.WaterGrid::rowsColumns
	int32_t ___rowsColumns_9;
	// UnityEngine.Material StylizedWater2.WaterGrid::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_10;
	// System.Int32 StylizedWater2.WaterGrid::m_rowsColumns
	int32_t ___m_rowsColumns_11;
	// System.Single StylizedWater2.WaterGrid::tileSize
	float ___tileSize_12;
	// StylizedWater2.WaterObject StylizedWater2.WaterGrid::m_waterObject
	WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* ___m_waterObject_13;
	// UnityEngine.Mesh StylizedWater2.WaterGrid::mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh_14;
	// System.Collections.Generic.List`1<StylizedWater2.WaterObject> StylizedWater2.WaterGrid::objects
	List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* ___objects_15;
	// UnityEngine.Transform StylizedWater2.WaterGrid::actualFollowTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___actualFollowTarget_16;
	// UnityEngine.Vector3 StylizedWater2.WaterGrid::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_17;
};

// StylizedWater2.WaterObject
struct WaterObject_tB3C4631FB550815180854E156E4569046813FBF7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material StylizedWater2.WaterObject::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_5;
	// UnityEngine.MeshFilter StylizedWater2.WaterObject::meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___meshFilter_6;
	// UnityEngine.MeshRenderer StylizedWater2.WaterObject::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_7;
	// UnityEngine.MaterialPropertyBlock StylizedWater2.WaterObject::_props
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ____props_8;
};

struct WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_StaticFields
{
	// System.Collections.Generic.List`1<StylizedWater2.WaterObject> StylizedWater2.WaterObject::Instances
	List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* ___Instances_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Rendering.Universal.ScriptableRendererData[]
struct ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169  : public RuntimeArray
{
	ALIGN_FIELD (8) ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* m_Items[1];

	inline ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503  : public RuntimeArray
{
	ALIGN_FIELD (8) GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* m_Items[1];

	inline GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.Plane[]
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE  : public RuntimeArray
{
	ALIGN_FIELD (8) Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C m_Items[1];

	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C value)
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
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
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
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
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


// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m80999490097638177C6B639CEA321424D5BB0991_gshared (Action_2_t38DEBB6BD6AE1CA882236F63F7E1DB3781D38994* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Single UnityEngine.Material::GetFloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m52462F4AEDE20758BFB592B11DE83A79D2774932 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::GetInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_GetInt_mD5BBC32BAC32950749B2B1092E0E1D267A7714B2 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Material_GetVector_mFE0366FDCB87331910BCE5E234030C20A25484A2 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Implicit_mF7911C6D69B3477174C9B383645987276257A446 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void StylizedWater2.Buoyancy::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buoyancy_Initialize_m667C839A499E459F8E65A79828A6D427C8F3741F (const RuntimeMethod* method) ;
// System.Boolean StylizedWater2.Buoyancy::WavesEnabled(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buoyancy_WavesEnabled_m3D389DE588CD99A8D66B81E043DEF30F54926AF9 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___waterMat0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalFloat_mB47626BB0891837BEA02A53DB933F7ED7B115D11 (int32_t ___nameID0, float ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::dot(Unity.Mathematics.float2,Unity.Mathematics.float2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mB5F64A20288F500F84BB056EF63B37146FBBA96C_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___x0, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___y1, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::dot(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mAE7770D5D8ABCDC54704D1A1CE0D484136C5586C_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___x0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___y1, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::sin(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_sin_m09BCE312DBA664A5CE3EDE6D10F874859F6885F0_inline (float ___x0, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::cos(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_cos_mA9002EFEE2A017D04CB6231763FA2CB64A2BE3F1_inline (float ___x0, const RuntimeMethod* method) ;
// System.Single StylizedWater2.Buoyancy::Sine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Buoyancy_Sine_m2842ACFE6CB9AA2C5E17AF269FC8F950141F3115 (float ___t0, const RuntimeMethod* method) ;
// System.Single StylizedWater2.Buoyancy::Cosine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Buoyancy_Cosine_m45C9A3FB120B7AC7D4D9A016FABE50B03491E31D (float ___t0, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Multiply(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_mFA6F3CE69E7BCB9270744513E7E54447C6DBB164_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___lhs0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::IsKeywordEnabled(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_IsKeywordEnabled_m95EDB12868EBE7F404755CB79E5958B7DFA342D0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single StylizedWater2.Buoyancy::SampleWaves(Unity.Mathematics.float3,UnityEngine.Material,System.Single,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Buoyancy_SampleWaves_m5107345EF1B5E23C472A5AAB5ABC5140C6E16096 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___position0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___waterMat1, float ___waterLevel2, float ___rollStrength3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normal4, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Void StylizedWater2.Buoyancy::GetMaterialParameters(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buoyancy_GetMaterialParameters_mD4C311D25245392A779B5ECE6D941A33C9026FDB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat0, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Multiply(Unity.Mathematics.float4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_m5CD28D712CD6F2649842C5A65BD6443582952310_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___lhs0, float ___rhs1, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 StylizedWater2.Buoyancy::MultiplyVec4(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E Buoyancy_MultiplyVec4_m9DA53F013713D996718B484892363E03FCCBD83B (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___a0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___b1, const RuntimeMethod* method) ;
// Unity.Mathematics.float2 Unity.Mathematics.float4::get_xy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float4_get_xy_m26BE8952E15131592B83837998D1EDC33FA9E6DF_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) ;
// System.Single StylizedWater2.Buoyancy::Dot2(Unity.Mathematics.float2,Unity.Mathematics.float2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Buoyancy_Dot2_m981CE5F0356EE79A563FD7ACDDE474FCB6BE8466 (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a0, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b1, const RuntimeMethod* method) ;
// Unity.Mathematics.float2 Unity.Mathematics.float4::get_zw()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float4_get_zw_mE9148903506B6AC51F8BA30DBDE2CD34C67107BB_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) ;
// System.Single StylizedWater2.Buoyancy::get__TimeParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Buoyancy_get__TimeParameters_mDBD2BB90675EB12B85C61FE52AF4E3E291365205 (const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Multiply(System.Single,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_m4322D91DC960C16DFB4B645FF997F6A57821E41D_inline (float ___lhs0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___rhs1, const RuntimeMethod* method) ;
// System.Single StylizedWater2.Buoyancy::Dot4(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Buoyancy_Dot4_m13352F087F62319701EBE33F2B8D850D7B7847BD (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___a0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Unity.Mathematics.float3::op_Implicit(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 float3_op_Implicit_mEFBD5C49B7BC786CEEA7076D3A53D421BF88E2CB (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___v0, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Implicit_mEFC9D4DC1F88125A32EAD98DDD519DDB1F146292 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.math::normalize(Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_normalize_m826725DC58F0CE455E3DEB3BD4808C13CBC81E25_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___x0, const RuntimeMethod* method) ;
// System.Single StylizedWater2.Buoyancy::GetMaxWaveHeight(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Buoyancy_GetMaxWaveHeight_m0EE4BAD8417DC2143D352A534B567E0F959A1149 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 StylizedWater2.FloatingTransform::ConvertToWorldSpace(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FloatingTransform_ConvertToWorldSpace_m307764ADFB604F6C1605B89CD8F2EBA475A781E8 (FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void StylizedWater2.FloatingTransform::ApplyTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingTransform_ApplyTransform_mE60632DAFBE99D523157205F0B353BA34BE408C6 (FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_up(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_up_m1FBA5A97E5057747AC027AD5897EDE80A554D554 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset UnityEngine.Rendering.Universal.UniversalRenderPipeline::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Int32 StylizedWater2.PipelineUtilities::GetDefaultRendererIndex(UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PipelineUtilities_GetDefaultRendererIndex_m5214A157B9B349CEBE1293E954E678770238085E (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* ___asset0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void StylizedWater2.PipelineUtilities::RefreshRendererList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipelineUtilities_RefreshRendererList_m9AA8274FACEE7CA2C9B2A0917DF529CC7AEFDACA (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5 (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererData>::.ctor()
inline void List_1__ctor_m34C8555D6DCC2D0287E23BFB31223CF1D0734217 (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererData>::Add(T)
inline void List_1_Add_mD564DD588CF150AFDB80F4773D248194256B6A34_inline (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* __this, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424*, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererData>::ToArray()
inline ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* List_1_ToArray_mA20937394A0961A947EFE502EBD77AD6245B7D9C (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* __this, const RuntimeMethod* method)
{
	return ((  ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* (*) (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererData>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mDD19270367F605476E9B7A7A9872D28C89FFF6D8 (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererData>::Contains(T)
inline bool List_1_Contains_m7FF0F9331146763E7C1C71B6F92EEF57A910B9D8 (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* __this, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424*, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Rendering.Universal.ScriptableRendererData>::Remove(T)
inline bool List_1_Remove_m9D07AEEC3BD3364325EA28BEBF09C4D5BFB2ED18 (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* __this, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424*, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::SetRenderer(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_SetRenderer_m486F07D0F0D14B3F112CB6AFF01B12BE187AE255_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.Universal.ScriptableRendererData StylizedWater2.PipelineUtilities::GetDefaultRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* PipelineUtilities_GetDefaultRenderer_m593265E6ABFA48370CAA82CECEBDA54C40D5E003 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rendering.Universal.UniversalRendererData::get_shadowTransparentReceive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniversalRendererData_get_shadowTransparentReceive_m59EBF1D691FF516DACB095A06D8E0311028D77BF_inline (UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6* __this, const RuntimeMethod* method) ;
// System.Void StylizedWater2.PlanarReflectionRenderer::InitializeValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_InitializeValues_m9A29EEDB6056CBAF464AAFE6484FD0CA92A417BB (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<StylizedWater2.PlanarReflectionRenderer>::Add(T)
inline void List_1_Add_mF82C5C46AF3D7BA669FA0EA0292D63735E262493_inline (List_1_t90848C30298099F2E5867084B4C717401AAAC343* __this, PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t90848C30298099F2E5867084B4C717401AAAC343*, PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void StylizedWater2.PlanarReflectionRenderer::EnableReflections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_EnableReflections_mECD3BFAEF881D49C3C16FED617DBEC14128CFF6E (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<StylizedWater2.PlanarReflectionRenderer>::Remove(T)
inline bool List_1_Remove_mBEEAD73F7B94B7F8C89B23D93B2DCAA252916BC7 (List_1_t90848C30298099F2E5867084B4C717401AAAC343* __this, PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t90848C30298099F2E5867084B4C717401AAAC343*, PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void StylizedWater2.PlanarReflectionRenderer::DisableReflections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_DisableReflections_mB96B4A38D43D3A8725E69B8FC1B5B4A89A43AA36 (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<StylizedWater2.PlanarReflectionRenderer>::GetEnumerator()
inline Enumerator_t0E643EF7F3C4D0373A20F74089A813C5E62E46A5 List_1_GetEnumerator_m457BCFEFB866843CFEA2CEDF95DCDFE58B5D2BDF (List_1_t90848C30298099F2E5867084B4C717401AAAC343* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0E643EF7F3C4D0373A20F74089A813C5E62E46A5 (*) (List_1_t90848C30298099F2E5867084B4C717401AAAC343*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<StylizedWater2.PlanarReflectionRenderer>::Dispose()
inline void Enumerator_Dispose_m4CAEAF0CB9F895AB66763819CC7CB001B0C7DCDE (Enumerator_t0E643EF7F3C4D0373A20F74089A813C5E62E46A5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0E643EF7F3C4D0373A20F74089A813C5E62E46A5*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<StylizedWater2.PlanarReflectionRenderer>::get_Current()
inline PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* Enumerator_get_Current_m23B4609BDA1A4B22ACA63C1AA376CCAAF06A5168_inline (Enumerator_t0E643EF7F3C4D0373A20F74089A813C5E62E46A5* __this, const RuntimeMethod* method)
{
	return ((  PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* (*) (Enumerator_t0E643EF7F3C4D0373A20F74089A813C5E62E46A5*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<StylizedWater2.PlanarReflectionRenderer>::MoveNext()
inline bool Enumerator_MoveNext_m4C6BD8EE3917E22F4E0E3ADD7A777941597F4CF3 (Enumerator_t0E643EF7F3C4D0373A20F74089A813C5E62E46A5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0E643EF7F3C4D0373A20F74089A813C5E62E46A5*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mBEB5B9B513FE305CE98CA8065CC6E6CC0E5A4D51 (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m80999490097638177C6B639CEA321424D5BB0991_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Rendering.RenderPipelineManager::add_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_add_beginCameraRendering_mF8416C1EB5B9FF130A7F638B842E283CAA83BC2B (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* ___value0, const RuntimeMethod* method) ;
// System.Void StylizedWater2.PlanarReflectionRenderer::ToggleMaterialReflectionSampling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_ToggleMaterialReflectionSampling_m0EB36E502C93886F351159CED00CC7E7215EE813 (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, bool ___state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.RenderPipelineManager::remove_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineManager_remove_beginCameraRendering_m1612AF680F9518D63562A8AC8C521A326B1C6C71 (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::GetEnumerator()
inline Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B Dictionary_2_GetEnumerator_m7BEABDF6190A27125E278461686B950DBC2E13FC (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B (*) (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::Dispose()
inline void Enumerator_Dispose_m4E0CD273C9B2F20DCD03E0A70B95F65B38EC1209 (Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::get_Current()
inline KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB Enumerator_get_Current_m36BD30099AE5596DD87AFF4F979E44119A7B8C19_inline (Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB (*) (Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,UnityEngine.Camera>::get_Value()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_inline (KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Camera,UnityEngine.Camera>::MoveNext()
inline bool Enumerator_MoveNext_mECD1F7865FB8107F52675796DFB52D59D7B5E44D (Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::Clear()
inline void Dictionary_2_Clear_m0985B9C4515ABFC16DCD73938C31FD14F388CBB7 (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_m31971565E5002365FE94256FFE1DC5B070FDBBA7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<StylizedWater2.WaterObject>::get_Count()
inline int32_t List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_inline (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<StylizedWater2.WaterObject>::get_Item(System.Int32)
inline WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66 (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* (*) (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds0, const RuntimeMethod* method) ;
// UnityEngine.Bounds StylizedWater2.PlanarReflectionRenderer::CalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 PlanarReflectionRenderer_CalculateBounds_mBD848B2661D82F6703E80A3E3AE1F8C5C2173ECF (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, const RuntimeMethod* method) ;
// UnityEngine.CameraType UnityEngine.Camera::get_cameraType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean StylizedWater2.PlanarReflectionRenderer::IsVisible(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarReflectionRenderer_IsVisible_m485D44611B099879393764FF8845721B45DAB9BE (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rendering.Universal.UniversalAdditionalCameraData>()
inline UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* Component_GetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m4E42B9C57825324589C0E4A268D06097918F5A86 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Rendering.Universal.CameraRenderType UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::get_renderType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniversalAdditionalCameraData_get_renderType_m329B2A06C25793DF3BBBE89B3F23154EA2380265_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m170AED7C79718F1017B33E251480A89CEAEB35D3 (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___key0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void StylizedWater2.PlanarReflectionRenderer::CreateReflectionCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_CreateReflectionCamera_mD321C89034E9F40DDB72B3B558D79BC813617ADE (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___source0, const RuntimeMethod* method) ;
// System.Void StylizedWater2.PlanarReflectionRenderer::UpdateWaterProperties(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_UpdateWaterProperties_m8140A443BDDFC5691195C04D3F48413ADE393934 (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_scaledPixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_scaledPixelWidth_m249B2380A6E403DC1EA5E153546C4F61E226E42D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single StylizedWater2.PlanarReflectionRenderer::GetRenderScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlanarReflectionRenderer_GetRenderScale_mE31EC9E676F88E98588B662859FC3134D217F2A0 (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline (float ___f0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_scaledPixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_scaledPixelHeight_m9A61AA4F944C308A6F8B7D094C92C7A40EFB4AB9 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Camera::get_allowHDR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_allowHDR_m3187E9118CB52D5D7F0658D7ECF5E2B00E296A67 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void StylizedWater2.PlanarReflectionRenderer::UpdatePerspective(UnityEngine.Camera,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_UpdatePerspective_m74FA8F9104081C8646F52C9652C6EDBB8BE739BF (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___source0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___reflectionCamera1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::set_invertCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_set_invertCulling_mAC18402894032E2EBB93C0B7D953496AEE96AB36 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.UniversalRenderPipeline::RenderSingleCamera(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniversalRenderPipeline_RenderSingleCamera_m43520D1759875704A42FA33CEF5A8D225170E92C (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset::get_renderScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UniversalRenderPipelineAsset_get_renderScale_m742E4D97CEF504F30F963E9500AAF070C71EDB3C_inline (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Int32 StylizedWater2.PipelineUtilities::ValidateRenderer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PipelineUtilities_ValidateRenderer_m5E5B2E66B14880763F2392851BFCCCB0FCF8C380 (int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_CopyFrom_mFA5C3AB8E95EC4124249520ACEC6F7F25E5CDC52 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___other0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922 (int32_t ___intVal0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_useOcclusionCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_useOcclusionCulling_mD3036B0CBB5E6A1BF33810AB8FDEE3CD1A4D7C04 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Rendering.Universal.UniversalAdditionalCameraData>()
inline UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* GameObject_AddComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m257D49B2F0B2F6DAFF2E3EC7F53B5930D5BB6D46 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::set_requiresDepthTexture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_requiresDepthTexture_mCDA8FD4FD620FF4A6E67EF807137D7B5458F6F54 (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::set_requiresColorTexture(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_requiresColorTexture_m26FE59EAD31B15DB1746D2717106552281AF041D (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.UniversalAdditionalCameraData::set_renderShadows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_renderShadows_m435F35FAAF4700DC51E6A806D2BEF8A01A3A010B_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD8C30AF913A8F62839C214C596CA1AFCA100AFD1 (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___key0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Matrix4x4,UnityEngine.Plane[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryUtility_CalculateFrustumPlanes_mD440EB67A372B1A69F01CB48407C7812B8002F6F (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___worldToProjectionMatrix0, PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ___planes1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GeometryUtility::TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeometryUtility_TestPlanesAABB_m7656F6C599D2FF8FE9B69AF3E6DAEFBAD4A4FA8B (PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ___planes0, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds1, const RuntimeMethod* method) ;
// UnityEngine.MaterialPropertyBlock StylizedWater2.WaterObject::get_props()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* WaterObject_get_props_m658216AA9BF257A26FA8772ACA11119EAFA87587 (WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetFloat_m6BA8DA03FAD1ABA0BD339E0E5157C4DF3C987267 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method) ;
// System.Void StylizedWater2.WaterObject::ApplyInstancedProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterObject_ApplyInstancedProperties_mF1CF73B4DDBD8DA559F3E979A123348296D312B6 (WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetTexture(System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetTexture_m39F531D3F35D6C5B661A7B4F07DD7B8ACC22627F (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___nameID0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Scale_m389397AD581D1BB1A5D39B47021DD685A1EAA9AB (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___rhs1, const RuntimeMethod* method) ;
// System.Void StylizedWater2.PlanarReflectionRenderer::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_CalculateReflectionMatrix_mB247EADF35AE23BE8EB2F91B75FB64402B400670 (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___reflectionMat0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___plane1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector4 StylizedWater2.PlanarReflectionRenderer::CameraSpacePlane(UnityEngine.Matrix4x4,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 PlanarReflectionRenderer_CameraSpacePlane_m3EE9E89528F14E4642561186F40AE775A3FE3B5E (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___worldToCameraMatrix0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal2, float ___sideSign3, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Camera::CalculateObliqueMatrix(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Camera_CalculateObliqueMatrix_mBBFA94C033BB0C3C21B182F732B2155913E46609 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___clipPlane0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_projectionMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_worldToCameraMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_worldToCameraMatrix_mC199F02E435CE7261F7EECD1FD78A33EA96ABC0D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_layerCullDistances(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_layerCullDistances_m4D2749319E09EC88A62CF39446E906E0D4D5391D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_layerCullSpherical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_layerCullSpherical_m8BE964C29B22DBFB64D31CF1FACB39B4F8E3ADDE (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Camera,UnityEngine.Camera>::.ctor()
inline void Dictionary_2__ctor_mCC86EBF40667A343EA2CBB31F715245A4A6417E0 (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<StylizedWater2.WaterObject>::.ctor()
inline void List_1__ctor_m791FAAAE9C6541E788E1780357AC890DAE9859F0 (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<StylizedWater2.PlanarReflectionRenderer>::.ctor()
inline void List_1__ctor_mCABE2A779DBCE0DF655A8CB2745D7D5D898E2FF2 (List_1_t90848C30298099F2E5867084B4C717401AAAC343* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t90848C30298099F2E5867084B4C717401AAAC343*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 StylizedWater2.WaterGrid::SnapToGrid(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WaterGrid_SnapToGrid_mD88D86282DE5DC25138C0671BB8BFD5A4505538C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___cellSize1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Mesh StylizedWater2.WaterMesh::Create(StylizedWater2.WaterMesh/Shape,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* WaterMesh_Create_m993599768DA7E90B2ECE651F361B26D9DEB9E159 (int32_t ___shape0, float ___size1, int32_t ___subdivisions2, float ___uvTiling3, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<StylizedWater2.WaterObject>::GetEnumerator()
inline Enumerator_tA93798F6BF00422CF6D475D4BCDDD9FE9347F46F List_1_GetEnumerator_m246B302C193D5B42ED23D3FE059E8EEEDF0742C0 (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA93798F6BF00422CF6D475D4BCDDD9FE9347F46F (*) (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<StylizedWater2.WaterObject>::Dispose()
inline void Enumerator_Dispose_m61250AE01DF79598A1556704CA67149317F84597 (Enumerator_tA93798F6BF00422CF6D475D4BCDDD9FE9347F46F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA93798F6BF00422CF6D475D4BCDDD9FE9347F46F*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<StylizedWater2.WaterObject>::get_Current()
inline WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* Enumerator_get_Current_m26EAC87314F3DC3E78FEABFB95369320D3E4EFFC_inline (Enumerator_tA93798F6BF00422CF6D475D4BCDDD9FE9347F46F* __this, const RuntimeMethod* method)
{
	return ((  WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* (*) (Enumerator_tA93798F6BF00422CF6D475D4BCDDD9FE9347F46F*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<StylizedWater2.WaterObject>::MoveNext()
inline bool Enumerator_MoveNext_m558424BB48FC697D760DA52A48CB00FD794BB5A8 (Enumerator_tA93798F6BF00422CF6D475D4BCDDD9FE9347F46F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA93798F6BF00422CF6D475D4BCDDD9FE9347F46F*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<StylizedWater2.WaterObject>::Clear()
inline void List_1_Clear_m600E0A8320FCE31F97B32525C1A012CA70FDC6A0_inline (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// StylizedWater2.WaterObject StylizedWater2.WaterObject::New(UnityEngine.Material,UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* WaterObject_New_m1F321C2E414E813322F91F1B3191A848A5201A3D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___waterMaterial0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<StylizedWater2.WaterObject>::Add(T)
inline void List_1_Add_m36557C3431461ABB7FE482D7131A83F4DEDE4021_inline (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* __this, WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320*, WaterObject_tB3C4631FB550815180854E156E4569046813FBF7*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void StylizedWater2.WaterObject::AssignMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterObject_AssignMesh_mDD4C5E6C019DE3C1C7E96449F9FF34BC978D9FEF (WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) ;
// System.Void StylizedWater2.WaterObject::AssignMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterObject_AssignMaterial_m6CAC3E30C0520D8439A652CBE3ADE063AAD1F047 (WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 StylizedWater2.WaterGrid::GridLocalCenterPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WaterGrid_GridLocalCenterPosition_mF5920EC06B8A683D2EB61D5F9DCAB2FD244D892A (WaterGrid_tEA723899E69DB1B321650DD7FB81A2A5EC3D308F* __this, int32_t ___x0, int32_t ___z1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single StylizedWater2.WaterGrid::SnapToGrid(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WaterGrid_SnapToGrid_m427C6FC1BE16C107BF6C5C58D6AFFD4E784BBB65 (float ___position0, float ___cellSize1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Mesh StylizedWater2.WaterMesh::CreatePlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* WaterMesh_CreatePlane_m076401586E49CB56E64C8FD1F4092155B1114C1E (WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh StylizedWater2.WaterMesh::CreateCircle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* WaterMesh_CreateCircle_mE9BCDEDB0C9FF26EDC0472C218A27B1E23BD7159 (WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB* __this, const RuntimeMethod* method) ;
// System.Void StylizedWater2.WaterMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterMesh__ctor_m369AAEB20304898112BFE2E7DC0C6BE0ADA404D2 (WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh StylizedWater2.WaterMesh::Rebuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* WaterMesh_Rebuild_m7725BC22E1B615D7E95074F22A79DF51067E9DD8 (WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
inline void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void UnityEngine.Random::InitState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_InitState_m734272C185A487994FC63FA9950BA74D573CDFF8 (int32_t ___seed0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
inline void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline)(__this, ___item0, method);
}
// System.Int32 StylizedWater2.WaterMesh::GetPointIndex(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaterMesh_GetPointIndex_mB7EF3A4D99D0A021129D48354661AA16F1F37490 (WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB* __this, int32_t ___c0, int32_t ___x1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetVertices_mCE01139EEEC3D10B4A6CEA1749FD84DABC53599E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___inVertices0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTriangles_mD495DA0B00DB0E60A2B7B500D644F4470C1D61DB (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___triangles0, int32_t ___submesh1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_m5A7A6EC14A621579B7138F2EF9BECA60E880A8D7 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___channel0, List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___uvs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_colors(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_colors_m5558BAAA60676427B7954F1694A1765B000EB0FE (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_tangents(UnityEngine.Vector4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_tangents_mF547B7E4F9C70FB7CD6168139180A70AD306169B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetPropertyBlock_mD062F90343D70151CA060AE7EBEF2E85146A9FBA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<StylizedWater2.WaterObject>::Remove(T)
inline bool List_1_Remove_m990D9822E02F48849D7C41180BF383836D89F379 (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* __this, WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320*, WaterObject_tB3C4631FB550815180854E156E4569046813FBF7*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties0, const RuntimeMethod* method) ;
// System.Boolean StylizedWater2.Buoyancy::CanTouchWater(Unity.Mathematics.float3,StylizedWater2.WaterObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buoyancy_CanTouchWater_m083DDCE0ACC2AE13C4BACDEA6B6E7AAD6F5357EB (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___position0, WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* ___waterObject1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___components1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<StylizedWater2.WaterObject>()
inline WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* GameObject_GetComponent_TisWaterObject_tB3C4631FB550815180854E156E4569046813FBF7_m92A900BFF143BA343AA4003EBF0B45586164A3EB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Unity.Mathematics.float2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::dot(Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mFC6E6AC5C12A0802A91EB7F9A897802DFF03C44D_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___x0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___y1, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::rsqrt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_rsqrt_mB695A0575E7C8F937B0E12804508B0F489F55997_inline (float ___x0, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Multiply(System.Single,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_mB08DA9B217A0DA39BABCE64FFE69BEA67D37D04F_inline (float ___lhs0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::sqrt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_sqrt_mD0D6FA27E6D4959A0D4A823FFD3A9DA396542875_inline (float ___x0, const RuntimeMethod* method) ;
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
// System.Void StylizedWater2.Buoyancy::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buoyancy_Initialize_m667C839A499E459F8E65A79828A6D427C8F3741F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Initialized = true;
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___Initialized_10 = (bool)1;
		// }
		return;
	}
}
// System.Void StylizedWater2.Buoyancy::GetMaterialParameters(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buoyancy_GetMaterialParameters_mD4C311D25245392A779B5ECE6D941A33C9026FDB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// waveDistance = mat.GetFloat(WaveDistID);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___mat0;
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		int32_t L_1 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___WaveDistID_3;
		NullCheck(L_0);
		float L_2;
		L_2 = Material_GetFloat_m52462F4AEDE20758BFB592B11DE83A79D2774932(L_0, L_1, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveDistance_22 = L_2;
		// waveHeight = mat.GetFloat(WaveHeightID);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___mat0;
		int32_t L_4 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___WaveHeightID_5;
		NullCheck(L_3);
		float L_5;
		L_5 = Material_GetFloat_m52462F4AEDE20758BFB592B11DE83A79D2774932(L_3, L_4, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveHeight_24 = L_5;
		// waveSpeed = mat.GetFloat(WaveSpeedID);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = ___mat0;
		int32_t L_7 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___WaveSpeedID_4;
		NullCheck(L_6);
		float L_8;
		L_8 = Material_GetFloat_m52462F4AEDE20758BFB592B11DE83A79D2774932(L_6, L_7, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveSpeed_23 = L_8;
		// waveSteepness = mat.GetFloat(WaveSteepnessID) + 0.1f;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9 = ___mat0;
		int32_t L_10 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___WaveSteepnessID_6;
		NullCheck(L_9);
		float L_11;
		L_11 = Material_GetFloat_m52462F4AEDE20758BFB592B11DE83A79D2774932(L_9, L_10, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveSteepness_25 = ((float)il2cpp_codegen_add(L_11, (0.100000001f)));
		// waveCount = mat.GetInt(WaveCountID);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = ___mat0;
		int32_t L_13 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___WaveCountID_7;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = Material_GetInt_mD5BBC32BAC32950749B2B1092E0E1D267A7714B2(L_12, L_13, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveCount_26 = L_14;
		// waveDirection = mat.GetVector(WaveDirectionID);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = ___mat0;
		int32_t L_16 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___WaveDirectionID_8;
		NullCheck(L_15);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17;
		L_17 = Material_GetVector_mFE0366FDCB87331910BCE5E234030C20A25484A2(L_15, L_16, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_18;
		L_18 = float4_op_Implicit_mF7911C6D69B3477174C9B383645987276257A446(L_17, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveDirection_27 = L_18;
		// animationParams = mat.GetVector(AnimationParamID);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = ___mat0;
		int32_t L_20 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___AnimationParamID_9;
		NullCheck(L_19);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21;
		L_21 = Material_GetVector_mFE0366FDCB87331910BCE5E234030C20A25484A2(L_19, L_20, NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_22;
		L_22 = float4_op_Implicit_mF7911C6D69B3477174C9B383645987276257A446(L_21, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___animationParams_28 = L_22;
		// }
		return;
	}
}
// System.Single StylizedWater2.Buoyancy::GetMaxWaveHeight(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Buoyancy_GetMaxWaveHeight_m0EE4BAD8417DC2143D352A534B567E0F959A1149 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!mat) return 0f;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___mat0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!mat) return 0f;
		return (0.0f);
	}

IL_000e:
	{
		// if(!Initialized) Initialize();
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		bool L_2 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___Initialized_10;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// if(!Initialized) Initialize();
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		Buoyancy_Initialize_m667C839A499E459F8E65A79828A6D427C8F3741F(NULL);
	}

IL_001a:
	{
		// if (WavesEnabled(mat) == false) return 0f;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___mat0;
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Buoyancy_WavesEnabled_m3D389DE588CD99A8D66B81E043DEF30F54926AF9(L_3, NULL);
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		// if (WavesEnabled(mat) == false) return 0f;
		return (0.0f);
	}

IL_0028:
	{
		// return waveHeight = mat.GetFloat(WaveHeightID);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___mat0;
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___WaveHeightID_5;
		NullCheck(L_5);
		float L_7;
		L_7 = Material_GetFloat_m52462F4AEDE20758BFB592B11DE83A79D2774932(L_5, L_6, NULL);
		float L_8 = L_7;
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveHeight_24 = L_8;
		return L_8;
	}
}
// System.Void StylizedWater2.Buoyancy::SetCustomTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buoyancy_SetCustomTime_mBF2FECB103FA4E2DC8B63D090523C791BDA46F4A (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!Initialized) Initialize();
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		bool L_0 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___Initialized_10;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// if(!Initialized) Initialize();
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		Buoyancy_Initialize_m667C839A499E459F8E65A79828A6D427C8F3741F(NULL);
	}

IL_000c:
	{
		// customTimeValue = value;
		float L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___customTimeValue_12 = L_1;
		// Shader.SetGlobalFloat(CustomTimeID, customTimeValue);
		int32_t L_2 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___CustomTimeID_0;
		float L_3 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___customTimeValue_12;
		Shader_SetGlobalFloat_mB47626BB0891837BEA02A53DB933F7ED7B115D11(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Single StylizedWater2.Buoyancy::get__TimeParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Buoyancy_get__TimeParameters_mDBD2BB90675EB12B85C61FE52AF4E3E291365205 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UseCustomTime) return customTimeValue;
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		bool L_0 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___UseCustomTime_11;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// if (UseCustomTime) return customTimeValue;
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		float L_1 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___customTimeValue_12;
		return L_1;
	}

IL_000d:
	{
		// return Time.time;
		float L_2;
		L_2 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		return L_2;
	}
}
// System.Single StylizedWater2.Buoyancy::Dot2(Unity.Mathematics.float2,Unity.Mathematics.float2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Buoyancy_Dot2_m981CE5F0356EE79A563FD7ACDDE474FCB6BE8466 (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___a0, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___b1, const RuntimeMethod* method) 
{
	{
		// return dot(a,b);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___a0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_1 = ___b1;
		float L_2;
		L_2 = math_dot_mB5F64A20288F500F84BB056EF63B37146FBBA96C_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Single StylizedWater2.Buoyancy::Dot4(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Buoyancy_Dot4_m13352F087F62319701EBE33F2B8D850D7B7847BD (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___a0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___b1, const RuntimeMethod* method) 
{
	{
		// return dot(a,b);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___a0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = ___b1;
		float L_2;
		L_2 = math_dot_mAE7770D5D8ABCDC54704D1A1CE0D484136C5586C_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Single StylizedWater2.Buoyancy::Sine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Buoyancy_Sine_m2842ACFE6CB9AA2C5E17AF269FC8F950141F3115 (float ___t0, const RuntimeMethod* method) 
{
	{
		// return sin(t);
		float L_0 = ___t0;
		float L_1;
		L_1 = math_sin_m09BCE312DBA664A5CE3EDE6D10F874859F6885F0_inline(L_0, NULL);
		return L_1;
	}
}
// System.Single StylizedWater2.Buoyancy::Cosine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Buoyancy_Cosine_m45C9A3FB120B7AC7D4D9A016FABE50B03491E31D (float ___t0, const RuntimeMethod* method) 
{
	{
		// return cos(t);
		float L_0 = ___t0;
		float L_1;
		L_1 = math_cos_mA9002EFEE2A017D04CB6231763FA2CB64A2BE3F1_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void StylizedWater2.Buoyancy::Vector4Sin(Unity.Mathematics.float4&,Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buoyancy_Vector4Sin_mEDFD5ED4034B2C5AC2F6A9D732FBFA42E111902D (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___input0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___a1, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___b2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// input.x = Sine(a.x + b.x);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = ___input0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = ___a1;
		float L_2 = L_1.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = ___b2;
		float L_4 = L_3.___x_0;
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		float L_5;
		L_5 = Buoyancy_Sine_m2842ACFE6CB9AA2C5E17AF269FC8F950141F3115(((float)il2cpp_codegen_add(L_2, L_4)), NULL);
		L_0->___x_0 = L_5;
		// input.y = Sine(a.y + b.y);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_6 = ___input0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7 = ___a1;
		float L_8 = L_7.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_9 = ___b2;
		float L_10 = L_9.___y_1;
		float L_11;
		L_11 = Buoyancy_Sine_m2842ACFE6CB9AA2C5E17AF269FC8F950141F3115(((float)il2cpp_codegen_add(L_8, L_10)), NULL);
		L_6->___y_1 = L_11;
		// input.z = Sine(a.z + b.z);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_12 = ___input0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_13 = ___a1;
		float L_14 = L_13.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_15 = ___b2;
		float L_16 = L_15.___z_2;
		float L_17;
		L_17 = Buoyancy_Sine_m2842ACFE6CB9AA2C5E17AF269FC8F950141F3115(((float)il2cpp_codegen_add(L_14, L_16)), NULL);
		L_12->___z_2 = L_17;
		// input.w = Sine(a.w + b.w);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_18 = ___input0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_19 = ___a1;
		float L_20 = L_19.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_21 = ___b2;
		float L_22 = L_21.___w_3;
		float L_23;
		L_23 = Buoyancy_Sine_m2842ACFE6CB9AA2C5E17AF269FC8F950141F3115(((float)il2cpp_codegen_add(L_20, L_22)), NULL);
		L_18->___w_3 = L_23;
		// }
		return;
	}
}
// System.Void StylizedWater2.Buoyancy::Vector4Cosin(Unity.Mathematics.float4&,Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buoyancy_Vector4Cosin_m7290651C880A8E163BB9BD1AB02A23E577AB684E (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* ___input0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___a1, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___b2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// input.x = Cosine(a.x + b.x);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_0 = ___input0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = ___a1;
		float L_2 = L_1.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = ___b2;
		float L_4 = L_3.___x_0;
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		float L_5;
		L_5 = Buoyancy_Cosine_m45C9A3FB120B7AC7D4D9A016FABE50B03491E31D(((float)il2cpp_codegen_add(L_2, L_4)), NULL);
		L_0->___x_0 = L_5;
		// input.y = Cosine(a.y + b.y);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_6 = ___input0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7 = ___a1;
		float L_8 = L_7.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_9 = ___b2;
		float L_10 = L_9.___y_1;
		float L_11;
		L_11 = Buoyancy_Cosine_m45C9A3FB120B7AC7D4D9A016FABE50B03491E31D(((float)il2cpp_codegen_add(L_8, L_10)), NULL);
		L_6->___y_1 = L_11;
		// input.z = Cosine(a.z + b.z);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_12 = ___input0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_13 = ___a1;
		float L_14 = L_13.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_15 = ___b2;
		float L_16 = L_15.___z_2;
		float L_17;
		L_17 = Buoyancy_Cosine_m45C9A3FB120B7AC7D4D9A016FABE50B03491E31D(((float)il2cpp_codegen_add(L_14, L_16)), NULL);
		L_12->___z_2 = L_17;
		// input.w = Cosine(a.w + b.w);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E* L_18 = ___input0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_19 = ___a1;
		float L_20 = L_19.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_21 = ___b2;
		float L_22 = L_21.___w_3;
		float L_23;
		L_23 = Buoyancy_Cosine_m45C9A3FB120B7AC7D4D9A016FABE50B03491E31D(((float)il2cpp_codegen_add(L_20, L_22)), NULL);
		L_18->___w_3 = L_23;
		// }
		return;
	}
}
// Unity.Mathematics.float4 StylizedWater2.Buoyancy::MultiplyVec4(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E Buoyancy_MultiplyVec4_m9DA53F013713D996718B484892363E03FCCBD83B (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___a0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___b1, const RuntimeMethod* method) 
{
	{
		// return a * b;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___a0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = ___b1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2;
		L_2 = float4_op_Multiply_mFA6F3CE69E7BCB9270744513E7E54447C6DBB164_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean StylizedWater2.Buoyancy::WavesEnabled(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buoyancy_WavesEnabled_m3D389DE588CD99A8D66B81E043DEF30F54926AF9 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___waterMat0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF823BEC745C6E8FF7238D495F7C669F403D6E304);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return waterMat.IsKeywordEnabled(WavesKeyword);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___waterMat0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Material_IsKeywordEnabled_m95EDB12868EBE7F404755CB79E5958B7DFA342D0(L_0, _stringLiteralF823BEC745C6E8FF7238D495F7C669F403D6E304, NULL);
		return L_1;
	}
}
// System.Single StylizedWater2.Buoyancy::SampleWaves(Unity.Mathematics.float3,StylizedWater2.WaterObject,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Buoyancy_SampleWaves_mD4E53C3E7B43137B4FFC2D8232D8580CEDAF5564 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___position0, WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* ___waterObject1, float ___rollStrength2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normal3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SampleWaves(position, waterObject.material, waterObject.transform.position.y, rollStrength,
		//     out normal);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___position0;
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_1 = ___waterObject1;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = L_1->___material_5;
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_3 = ___waterObject1;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___y_3;
		float L_7 = ___rollStrength2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___normal3;
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		float L_9;
		L_9 = Buoyancy_SampleWaves_m5107345EF1B5E23C472A5AAB5ABC5140C6E16096(L_0, L_2, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// System.Single StylizedWater2.Buoyancy::SampleWaves(Unity.Mathematics.float3,UnityEngine.Material,System.Single,System.Single,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Buoyancy_SampleWaves_m5107345EF1B5E23C472A5AAB5ABC5140C6E16096 (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___position0, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___waterMat1, float ___waterLevel2, float ___rollStrength3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___normal4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		// if(!waterMat)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___waterMat1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// normal = UnityEngine.Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___normal4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_3;
		// return waterLevel;
		float L_4 = ___waterLevel2;
		return L_4;
	}

IL_0016:
	{
		// if(WavesEnabled(waterMat) == false)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = ___waterMat1;
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Buoyancy_WavesEnabled_m3D389DE588CD99A8D66B81E043DEF30F54926AF9(L_5, NULL);
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		// normal = UnityEngine.Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___normal4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_7 = L_8;
		// return waterLevel;
		float L_9 = ___waterLevel2;
		return L_9;
	}

IL_002c:
	{
		// if(!Initialized) Initialize();
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		bool L_10 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___Initialized_10;
		if (L_10)
		{
			goto IL_0038;
		}
	}
	{
		// if(!Initialized) Initialize();
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		Buoyancy_Initialize_m667C839A499E459F8E65A79828A6D427C8F3741F(NULL);
	}

IL_0038:
	{
		// GetMaterialParameters(waterMat);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ___waterMat1;
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		Buoyancy_GetMaterialParameters_mD4C311D25245392A779B5ECE6D941A33C9026FDB(L_11, NULL);
		// Vector4 freq = new Vector4(1.3f, 1.35f, 1.25f, 1.25f) * (1-waveDistance) * 3f;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_12), (1.29999995f), (1.35000002f), (1.25f), (1.25f), /*hidden argument*/NULL);
		float L_13 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveDistance_22;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14;
		L_14 = float4_op_Multiply_m5CD28D712CD6F2649842C5A65BD6443582952310_inline(L_12, ((float)il2cpp_codegen_subtract((1.0f), L_13)), NULL);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_15;
		L_15 = float4_op_Multiply_m5CD28D712CD6F2649842C5A65BD6443582952310_inline(L_14, (3.0f), NULL);
		// direction1 = MultiplyVec4(dir1, waveDirection);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___dir1_31;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_17 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveDirection_27;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_18;
		L_18 = Buoyancy_MultiplyVec4_m9DA53F013713D996718B484892363E03FCCBD83B(L_16, L_17, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___direction1_18 = L_18;
		// direction2 = MultiplyVec4(dir2, waveDirection);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_19 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___dir2_32;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_20 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveDirection_27;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_21;
		L_21 = Buoyancy_MultiplyVec4_m9DA53F013713D996718B484892363E03FCCBD83B(L_19, L_20, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___direction2_19 = L_21;
		// Vector3 offsets = Vector3.zero;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22 = ((float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields*)il2cpp_codegen_static_fields_for(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_il2cpp_TypeInfo_var))->___zero_3;
		V_0 = L_22;
		// frequency = freq;
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___frequency_34 = L_15;
		// realSpeed.x *= animationParams.x;
		float* L_23 = (&(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___realSpeed_35)->___x_0);
		float* L_24 = L_23;
		float L_25 = *((float*)L_24);
		float L_26 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___animationParams_28)->___x_0;
		*((float*)L_24) = (float)((float)il2cpp_codegen_multiply(L_25, L_26));
		// realSpeed.y *= animationParams.y;
		float* L_27 = (&(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___realSpeed_35)->___y_1);
		float* L_28 = L_27;
		float L_29 = *((float*)L_28);
		float L_30 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___animationParams_28)->___y_1;
		*((float*)L_28) = (float)((float)il2cpp_codegen_multiply(L_29, L_30));
		// realSpeed.z *= animationParams.x;
		float* L_31 = (&(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___realSpeed_35)->___z_2);
		float* L_32 = L_31;
		float L_33 = *((float*)L_32);
		float L_34 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___animationParams_28)->___x_0;
		*((float*)L_32) = (float)((float)il2cpp_codegen_multiply(L_33, L_34));
		// realSpeed.w *= animationParams.y;
		float* L_35 = (&(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___realSpeed_35)->___w_3);
		float* L_36 = L_35;
		float L_37 = *((float*)L_36);
		float L_38 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___animationParams_28)->___y_1;
		*((float*)L_36) = (float)((float)il2cpp_codegen_multiply(L_37, L_38));
		// for (int i = 0; i <= waveCount; i++)
		V_1 = 0;
		goto IL_0556;
	}

IL_010b:
	{
		// float t = 1f+((float)i / (float)waveCount);
		int32_t L_39 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		int32_t L_40 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveCount_26;
		V_2 = ((float)il2cpp_codegen_add((1.0f), ((float)(((float)L_39)/((float)L_40)))));
		// frequency *= t;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_41 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___frequency_34;
		float L_42 = V_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_43;
		L_43 = float4_op_Multiply_m5CD28D712CD6F2649842C5A65BD6443582952310_inline(L_41, L_42, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___frequency_34 = L_43;
		// AB.x = steepness.x * waveSteepness * direction1.x * amp.x;
		float L_44 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___steepness_33)->___x_0;
		float L_45 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveSteepness_25;
		float L_46 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___direction1_18)->___x_0;
		float L_47 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___amp_29)->___x_0;
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___AB_16)->___x_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_44, L_45)), L_46)), L_47));
		// AB.y = steepness.x * waveSteepness * direction1.y * amp.x;
		float L_48 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___steepness_33)->___x_0;
		float L_49 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveSteepness_25;
		float L_50 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___direction1_18)->___y_1;
		float L_51 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___amp_29)->___x_0;
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___AB_16)->___y_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_48, L_49)), L_50)), L_51));
		// AB.z = steepness.x * waveSteepness * direction1.z * amp.y;
		float L_52 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___steepness_33)->___x_0;
		float L_53 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveSteepness_25;
		float L_54 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___direction1_18)->___z_2;
		float L_55 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___amp_29)->___y_1;
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___AB_16)->___z_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_52, L_53)), L_54)), L_55));
		// AB.w = steepness.x * waveSteepness * direction1.w * amp.y;
		float L_56 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___steepness_33)->___x_0;
		float L_57 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveSteepness_25;
		float L_58 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___direction1_18)->___w_3;
		float L_59 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___amp_29)->___y_1;
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___AB_16)->___w_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_56, L_57)), L_58)), L_59));
		// CD.x = steepness.z * waveSteepness * direction2.x * amp.z;
		float L_60 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___steepness_33)->___z_2;
		float L_61 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveSteepness_25;
		float L_62 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___direction2_19)->___x_0;
		float L_63 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___amp_29)->___z_2;
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___CD_17)->___x_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_60, L_61)), L_62)), L_63));
		// CD.y = steepness.z * waveSteepness * direction2.y * amp.z;
		float L_64 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___steepness_33)->___z_2;
		float L_65 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveSteepness_25;
		float L_66 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___direction2_19)->___y_1;
		float L_67 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___amp_29)->___z_2;
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___CD_17)->___y_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_64, L_65)), L_66)), L_67));
		// CD.z = steepness.w * waveSteepness * direction2.z * amp.w;
		float L_68 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___steepness_33)->___w_3;
		float L_69 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveSteepness_25;
		float L_70 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___direction2_19)->___z_2;
		float L_71 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___amp_29)->___w_3;
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___CD_17)->___z_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_68, L_69)), L_70)), L_71));
		// CD.w = steepness.w * waveSteepness * direction2.w * amp.w;
		float L_72 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___steepness_33)->___w_3;
		float L_73 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveSteepness_25;
		float L_74 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___direction2_19)->___w_3;
		float L_75 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___amp_29)->___w_3;
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___CD_17)->___w_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_72, L_73)), L_74)), L_75));
		// planarPosition.x = position.x;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_76 = ___position0;
		float L_77 = L_76.___x_0;
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___planarPosition_21)->___x_0 = L_77;
		// planarPosition.y = position.z;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_78 = ___position0;
		float L_79 = L_78.___z_2;
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___planarPosition_21)->___y_1 = L_79;
		// dotABCD.x = Dot2(direction1.xy, planarPosition) * frequency.x;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_80;
		L_80 = float4_get_xy_m26BE8952E15131592B83837998D1EDC33FA9E6DF_inline((&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___direction1_18), NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_81 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___planarPosition_21;
		float L_82;
		L_82 = Buoyancy_Dot2_m981CE5F0356EE79A563FD7ACDDE474FCB6BE8466(L_80, L_81, NULL);
		float L_83 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___frequency_34)->___x_0;
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___dotABCD_15)->___x_0 = ((float)il2cpp_codegen_multiply(L_82, L_83));
		// dotABCD.y = Dot2(direction1.zw, planarPosition) * frequency.y;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_84;
		L_84 = float4_get_zw_mE9148903506B6AC51F8BA30DBDE2CD34C67107BB_inline((&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___direction1_18), NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_85 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___planarPosition_21;
		float L_86;
		L_86 = Buoyancy_Dot2_m981CE5F0356EE79A563FD7ACDDE474FCB6BE8466(L_84, L_85, NULL);
		float L_87 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___frequency_34)->___y_1;
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___dotABCD_15)->___y_1 = ((float)il2cpp_codegen_multiply(L_86, L_87));
		// dotABCD.z = Dot2(direction2.xy, planarPosition) * frequency.z;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_88;
		L_88 = float4_get_xy_m26BE8952E15131592B83837998D1EDC33FA9E6DF_inline((&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___direction2_19), NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_89 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___planarPosition_21;
		float L_90;
		L_90 = Buoyancy_Dot2_m981CE5F0356EE79A563FD7ACDDE474FCB6BE8466(L_88, L_89, NULL);
		float L_91 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___frequency_34)->___z_2;
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___dotABCD_15)->___z_2 = ((float)il2cpp_codegen_multiply(L_90, L_91));
		// dotABCD.w = Dot2(direction2.zw, planarPosition) * frequency.w;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_92;
		L_92 = float4_get_zw_mE9148903506B6AC51F8BA30DBDE2CD34C67107BB_inline((&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___direction2_19), NULL);
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_93 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___planarPosition_21;
		float L_94;
		L_94 = Buoyancy_Dot2_m981CE5F0356EE79A563FD7ACDDE474FCB6BE8466(L_92, L_93, NULL);
		float L_95 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___frequency_34)->___w_3;
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___dotABCD_15)->___w_3 = ((float)il2cpp_codegen_multiply(L_94, L_95));
		// TIME = (_TimeParameters * animationParams.z * waveSpeed * speed);
		float L_96;
		L_96 = Buoyancy_get__TimeParameters_mDBD2BB90675EB12B85C61FE52AF4E3E291365205(NULL);
		float L_97 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___animationParams_28)->___z_2;
		float L_98 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveSpeed_23;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_99 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___speed_30;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_100;
		L_100 = float4_op_Multiply_m4322D91DC960C16DFB4B645FF997F6A57821E41D_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_96, L_97)), L_98)), L_99, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___TIME_20 = L_100;
		// sine.x = Sine(dotABCD.x + TIME.x);
		float L_101 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___dotABCD_15)->___x_0;
		float L_102 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___TIME_20)->___x_0;
		float L_103;
		L_103 = Buoyancy_Sine_m2842ACFE6CB9AA2C5E17AF269FC8F950141F3115(((float)il2cpp_codegen_add(L_101, L_102)), NULL);
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___sine_13)->___x_0 = L_103;
		// sine.y = Sine(dotABCD.y + TIME.y);
		float L_104 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___dotABCD_15)->___y_1;
		float L_105 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___TIME_20)->___y_1;
		float L_106;
		L_106 = Buoyancy_Sine_m2842ACFE6CB9AA2C5E17AF269FC8F950141F3115(((float)il2cpp_codegen_add(L_104, L_105)), NULL);
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___sine_13)->___y_1 = L_106;
		// sine.z = Sine(dotABCD.z + TIME.z);
		float L_107 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___dotABCD_15)->___z_2;
		float L_108 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___TIME_20)->___z_2;
		float L_109;
		L_109 = Buoyancy_Sine_m2842ACFE6CB9AA2C5E17AF269FC8F950141F3115(((float)il2cpp_codegen_add(L_107, L_108)), NULL);
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___sine_13)->___z_2 = L_109;
		// sine.w = Sine(dotABCD.w + TIME.w);
		float L_110 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___dotABCD_15)->___w_3;
		float L_111 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___TIME_20)->___w_3;
		float L_112;
		L_112 = Buoyancy_Sine_m2842ACFE6CB9AA2C5E17AF269FC8F950141F3115(((float)il2cpp_codegen_add(L_110, L_111)), NULL);
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___sine_13)->___w_3 = L_112;
		// cosine.x = Cosine(dotABCD.x + TIME.x);
		float L_113 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___dotABCD_15)->___x_0;
		float L_114 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___TIME_20)->___x_0;
		float L_115;
		L_115 = Buoyancy_Cosine_m45C9A3FB120B7AC7D4D9A016FABE50B03491E31D(((float)il2cpp_codegen_add(L_113, L_114)), NULL);
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___cosine_14)->___x_0 = L_115;
		// cosine.y = Cosine(dotABCD.y + TIME.y);
		float L_116 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___dotABCD_15)->___y_1;
		float L_117 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___TIME_20)->___y_1;
		float L_118;
		L_118 = Buoyancy_Cosine_m45C9A3FB120B7AC7D4D9A016FABE50B03491E31D(((float)il2cpp_codegen_add(L_116, L_117)), NULL);
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___cosine_14)->___y_1 = L_118;
		// cosine.z = Cosine(dotABCD.z + TIME.z);
		float L_119 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___dotABCD_15)->___z_2;
		float L_120 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___TIME_20)->___z_2;
		float L_121;
		L_121 = Buoyancy_Cosine_m45C9A3FB120B7AC7D4D9A016FABE50B03491E31D(((float)il2cpp_codegen_add(L_119, L_120)), NULL);
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___cosine_14)->___z_2 = L_121;
		// cosine.w = Cosine(dotABCD.w + TIME.w);
		float L_122 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___dotABCD_15)->___w_3;
		float L_123 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___TIME_20)->___w_3;
		float L_124;
		L_124 = Buoyancy_Cosine_m45C9A3FB120B7AC7D4D9A016FABE50B03491E31D(((float)il2cpp_codegen_add(L_122, L_123)), NULL);
		(&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___cosine_14)->___w_3 = L_124;
		// offsets.x += Dot4(cosine, new Vector4(AB.x, AB.z, CD.x, CD.z));
		float* L_125 = (&(&V_0)->___x_0);
		float* L_126 = L_125;
		float L_127 = *((float*)L_126);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_128 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___cosine_14;
		float L_129 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___AB_16)->___x_0;
		float L_130 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___AB_16)->___z_2;
		float L_131 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___CD_17)->___x_0;
		float L_132 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___CD_17)->___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_133;
		memset((&L_133), 0, sizeof(L_133));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_133), L_129, L_130, L_131, L_132, /*hidden argument*/NULL);
		float L_134;
		L_134 = Buoyancy_Dot4_m13352F087F62319701EBE33F2B8D850D7B7847BD(L_128, L_133, NULL);
		*((float*)L_126) = (float)((float)il2cpp_codegen_add(L_127, L_134));
		// offsets.y += Dot4(sine, amp);
		float* L_135 = (&(&V_0)->___y_1);
		float* L_136 = L_135;
		float L_137 = *((float*)L_136);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_138 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___sine_13;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_139 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___amp_29;
		float L_140;
		L_140 = Buoyancy_Dot4_m13352F087F62319701EBE33F2B8D850D7B7847BD(L_138, L_139, NULL);
		*((float*)L_136) = (float)((float)il2cpp_codegen_add(L_137, L_140));
		// offsets.z += Dot4(cosine, new Vector4(AB.y, AB.w, CD.y, CD.w));
		float* L_141 = (&(&V_0)->___z_2);
		float* L_142 = L_141;
		float L_143 = *((float*)L_142);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_144 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___cosine_14;
		float L_145 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___AB_16)->___y_1;
		float L_146 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___AB_16)->___w_3;
		float L_147 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___CD_17)->___y_1;
		float L_148 = (&((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___CD_17)->___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_149;
		memset((&L_149), 0, sizeof(L_149));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_149), L_145, L_146, L_147, L_148, /*hidden argument*/NULL);
		float L_150;
		L_150 = Buoyancy_Dot4_m13352F087F62319701EBE33F2B8D850D7B7847BD(L_144, L_149, NULL);
		*((float*)L_142) = (float)((float)il2cpp_codegen_add(L_143, L_150));
		// for (int i = 0; i <= waveCount; i++)
		int32_t L_151 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_151, 1));
	}

IL_0556:
	{
		// for (int i = 0; i <= waveCount; i++)
		int32_t L_152 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		int32_t L_153 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveCount_26;
		if ((((int32_t)L_152) <= ((int32_t)L_153)))
		{
			goto IL_010b;
		}
	}
	{
		// rollStrength *=  Mathf.Lerp(0.001f, 0.1f, waveSteepness);
		float L_154 = ___rollStrength3;
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		float L_155 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveSteepness_25;
		float L_156;
		L_156 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((0.00100000005f), (0.100000001f), L_155, NULL);
		___rollStrength3 = ((float)il2cpp_codegen_multiply(L_154, L_156));
		// normal = new Vector3(-offsets.x * rollStrength * waveHeight, 2f, -offsets.z * rollStrength * waveHeight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_157 = ___normal4;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_158 = V_0;
		float L_159 = L_158.___x_0;
		float L_160 = ___rollStrength3;
		float L_161 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveHeight_24;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_162 = V_0;
		float L_163 = L_162.___z_2;
		float L_164 = ___rollStrength3;
		float L_165 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveHeight_24;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_166;
		memset((&L_166), 0, sizeof(L_166));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_166), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-L_159)), L_160)), L_161)), (2.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-L_163)), L_164)), L_165)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167;
		L_167 = float3_op_Implicit_mEFBD5C49B7BC786CEEA7076D3A53D421BF88E2CB(L_166, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_157 = L_167;
		// normal = normalize(normal);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_168 = ___normal4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_169 = ___normal4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_170 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_169);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_171;
		L_171 = float3_op_Implicit_mEFC9D4DC1F88125A32EAD98DDD519DDB1F146292(L_170, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_172;
		L_172 = math_normalize_m826725DC58F0CE455E3DEB3BD4808C13CBC81E25_inline(L_171, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_173;
		L_173 = float3_op_Implicit_mEFBD5C49B7BC786CEEA7076D3A53D421BF88E2CB(L_172, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_168 = L_173;
		// offsets.y /= waveCount;
		float* L_174 = (&(&V_0)->___y_1);
		float* L_175 = L_174;
		float L_176 = *((float*)L_175);
		int32_t L_177 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveCount_26;
		*((float*)L_175) = (float)((float)(L_176/((float)L_177)));
		// return (offsets.y * waveHeight) + waterLevel;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_178 = V_0;
		float L_179 = L_178.___y_1;
		float L_180 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveHeight_24;
		float L_181 = ___waterLevel2;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_179, L_180)), L_181));
	}
}
// System.Boolean StylizedWater2.Buoyancy::CanTouchWater(Unity.Mathematics.float3,StylizedWater2.WaterObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buoyancy_CanTouchWater_m083DDCE0ACC2AE13C4BACDEA6B6E7AAD6F5357EB (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___position0, WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* ___waterObject1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!waterObject) return false;
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_0 = ___waterObject1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (!waterObject) return false;
		return (bool)0;
	}

IL_000a:
	{
		// waveHeight = GetMaxWaveHeight(waterObject.material);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_2 = ___waterObject1;
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = L_2->___material_5;
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = Buoyancy_GetMaxWaveHeight_m0EE4BAD8417DC2143D352A534B567E0F959A1149(L_3, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveHeight_24 = L_4;
		// return position.y < (waterObject.transform.position.y + waveHeight);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5 = ___position0;
		float L_6 = L_5.___y_1;
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_7 = ___waterObject1;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		float L_11 = ((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___waveHeight_24;
		return (bool)((((float)L_6) < ((float)((float)il2cpp_codegen_add(L_10, L_11))))? 1 : 0);
	}
}
// System.Void StylizedWater2.Buoyancy::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buoyancy__cctor_mD42A6DDD40FF20E222ECC69FF8EBA39BB77EB18C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D4F33DD4748386169AA3A8766BC7E48C978031F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C93593DCE45765B4642894C14D3F5BDE87878);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral579B607FD0BB19369CAE06D0FC1F56ED2D7F85D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E91652B1F39C3AC614FDB2C418E358718B2DB6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5D45491525886D74C125D27A723A559E36BDA79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA5D4BACC6AEC1476DA4D044ED5C5E9C7CDEB9A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFDD6929A3459C6BCA4D063F0F006E9F2061D3AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE79AE536975E96591357EA5533F095F6E75B5545);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8AF67BD0F460B4EB1FFE289A637D74287D74EFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int CustomTimeID = Shader.PropertyToID("_CustomTime");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral0D4F33DD4748386169AA3A8766BC7E48C978031F, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___CustomTimeID_0 = L_0;
		// private static readonly int TimeParametersID = Shader.PropertyToID("_TimeParameters");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral442C93593DCE45765B4642894C14D3F5BDE87878, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___TimeParametersID_1 = L_1;
		// private static readonly int WaveDistID = Shader.PropertyToID("_WaveDistance");
		int32_t L_2;
		L_2 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralE8AF67BD0F460B4EB1FFE289A637D74287D74EFD, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___WaveDistID_3 = L_2;
		// private static readonly int WaveSpeedID = Shader.PropertyToID("_WaveSpeed");
		int32_t L_3;
		L_3 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral579B607FD0BB19369CAE06D0FC1F56ED2D7F85D8, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___WaveSpeedID_4 = L_3;
		// private static readonly int WaveHeightID = Shader.PropertyToID("_WaveHeight");
		int32_t L_4;
		L_4 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralE79AE536975E96591357EA5533F095F6E75B5545, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___WaveHeightID_5 = L_4;
		// private static readonly int WaveSteepnessID = Shader.PropertyToID("_WaveSteepness");
		int32_t L_5;
		L_5 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralDFDD6929A3459C6BCA4D063F0F006E9F2061D3AA, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___WaveSteepnessID_6 = L_5;
		// private static readonly int WaveCountID = Shader.PropertyToID("_WaveCount");
		int32_t L_6;
		L_6 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralA5D45491525886D74C125D27A723A559E36BDA79, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___WaveCountID_7 = L_6;
		// private static readonly int WaveDirectionID = Shader.PropertyToID("_WaveDirection");
		int32_t L_7;
		L_7 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral9E91652B1F39C3AC614FDB2C418E358718B2DB6C, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___WaveDirectionID_8 = L_7;
		// private static readonly int AnimationParamID = Shader.PropertyToID("_AnimationParams");
		int32_t L_8;
		L_8 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteralCA5D4BACC6AEC1476DA4D044ED5C5E9C7CDEB9A7, NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___AnimationParamID_9 = L_8;
		// public static bool UseCustomTime = false;
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___UseCustomTime_11 = (bool)0;
		// private static float customTimeValue = 0f;
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___customTimeValue_12 = (0.0f);
		// private static Vector4 amp = new Vector4(0.3f, 0.35f, 0.25f, 0.25f);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_9;
		memset((&L_9), 0, sizeof(L_9));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_9), (0.300000012f), (0.349999994f), (0.25f), (0.25f), /*hidden argument*/NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___amp_29 = L_9;
		// private static Vector4 speed = new Vector4(1.2f, 1.375f, 1.1f, 1);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10;
		memset((&L_10), 0, sizeof(L_10));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_10), (1.20000005f), (1.375f), (1.10000002f), (1.0f), /*hidden argument*/NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___speed_30 = L_10;
		// private static Vector4 dir1 = new Vector4(0.3f, 0.85f, 0.85f, 0.25f);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_11;
		memset((&L_11), 0, sizeof(L_11));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_11), (0.300000012f), (0.850000024f), (0.850000024f), (0.25f), /*hidden argument*/NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___dir1_31 = L_11;
		// private static Vector4 dir2 = new Vector4(0.1f, 0.9f, -0.5f, -0.5f);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_12), (0.100000001f), (0.899999976f), (-0.5f), (-0.5f), /*hidden argument*/NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___dir2_32 = L_12;
		// private static Vector4 steepness = new Vector4(12f,12f,12f,12f);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_13;
		memset((&L_13), 0, sizeof(L_13));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_13), (12.0f), (12.0f), (12.0f), (12.0f), /*hidden argument*/NULL);
		((Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_StaticFields*)il2cpp_codegen_static_fields_for(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var))->___steepness_33 = L_13;
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
// System.Void StylizedWater2.FloatingTransform::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingTransform_FixedUpdate_m8DF6AFEFCCE6AB9C0356BD0841480F1C9D270719 (FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041* G_B9_0 = NULL;
	FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041* G_B8_0 = NULL;
	FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041* G_B10_0 = NULL;
	float G_B11_0 = 0.0f;
	FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041* G_B11_1 = NULL;
	{
		// if (!this || !this.enabled || Disable || !waterObject) return;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(__this, NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1;
		L_1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		bool L_2 = ((FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041_StaticFields*)il2cpp_codegen_static_fields_for(FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041_il2cpp_TypeInfo_var))->___Disable_14;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_3 = __this->___waterObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (L_4)
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		// if (!this || !this.enabled || Disable || !waterObject) return;
		return;
	}

IL_0025:
	{
		// if (!waterObject.material) return;
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_5 = __this->___waterObject_4;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = L_5->___material_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (L_7)
		{
			goto IL_0038;
		}
	}
	{
		// if (!waterObject.material) return;
		return;
	}

IL_0038:
	{
		// m_waterLevel = waterObject && waterLevelSource == WaterLevelSource.WaterObject? waterObject.transform.position.y : waterLevel;
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_8 = __this->___waterObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_8, NULL);
		G_B8_0 = __this;
		if (!L_9)
		{
			G_B9_0 = __this;
			goto IL_004f;
		}
	}
	{
		int32_t L_10 = __this->___waterLevelSource_5;
		G_B9_0 = G_B8_0;
		if ((((int32_t)L_10) == ((int32_t)1)))
		{
			G_B10_0 = G_B8_0;
			goto IL_0057;
		}
	}

IL_004f:
	{
		float L_11 = __this->___waterLevel_6;
		G_B11_0 = L_11;
		G_B11_1 = G_B9_0;
		goto IL_006c;
	}

IL_0057:
	{
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_12 = __this->___waterObject_4;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___y_3;
		G_B11_0 = L_15;
		G_B11_1 = G_B10_0;
	}

IL_006c:
	{
		NullCheck(G_B11_1);
		G_B11_1->___m_waterLevel_13 = G_B11_0;
		// normal = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		__this->___normal_11 = L_16;
		// height = 0f;
		__this->___height_12 = (0.0f);
		// if (samples == null || samples.Count == 0)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_17 = __this->___samples_10;
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_18 = __this->___samples_10;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_18, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if (L_19)
		{
			goto IL_00e0;
		}
	}

IL_009c:
	{
		// height = Buoyancy.SampleWaves(this.transform.position, waterObject.material, m_waterLevel - heightOffset, rollAmount, out normal);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_22;
		L_22 = float3_op_Implicit_mEFC9D4DC1F88125A32EAD98DDD519DDB1F146292(L_21, NULL);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_23 = __this->___waterObject_4;
		NullCheck(L_23);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = L_23->___material_5;
		float L_25 = __this->___m_waterLevel_13;
		float L_26 = __this->___heightOffset_8;
		float L_27 = __this->___rollAmount_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___normal_11);
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		float L_29;
		L_29 = Buoyancy_SampleWaves_m5107345EF1B5E23C472A5AAB5ABC5140C6E16096(L_22, L_24, ((float)il2cpp_codegen_subtract(L_25, L_26)), L_27, L_28, NULL);
		__this->___height_12 = L_29;
		goto IL_018f;
	}

IL_00e0:
	{
		// Vector3 avgNormal = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_0 = L_30;
		// for (int i = 0; i < samples.Count; i++)
		V_1 = 0;
		goto IL_0148;
	}

IL_00ea:
	{
		// height += Buoyancy.SampleWaves(ConvertToWorldSpace(samples[i]), waterObject.material, m_waterLevel - heightOffset, rollAmount, out normal);
		float L_31 = __this->___height_12;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_32 = __this->___samples_10;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_32, L_33, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = FloatingTransform_ConvertToWorldSpace_m307764ADFB604F6C1605B89CD8F2EBA475A781E8(__this, L_34, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_36;
		L_36 = float3_op_Implicit_mEFC9D4DC1F88125A32EAD98DDD519DDB1F146292(L_35, NULL);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_37 = __this->___waterObject_4;
		NullCheck(L_37);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38 = L_37->___material_5;
		float L_39 = __this->___m_waterLevel_13;
		float L_40 = __this->___heightOffset_8;
		float L_41 = __this->___rollAmount_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_42 = (&__this->___normal_11);
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		float L_43;
		L_43 = Buoyancy_SampleWaves_m5107345EF1B5E23C472A5AAB5ABC5140C6E16096(L_36, L_38, ((float)il2cpp_codegen_subtract(L_39, L_40)), L_41, L_42, NULL);
		__this->___height_12 = ((float)il2cpp_codegen_add(L_31, L_43));
		// avgNormal += normal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = __this->___normal_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_44, L_45, NULL);
		V_0 = L_46;
		// for (int i = 0; i < samples.Count; i++)
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0148:
	{
		// for (int i = 0; i < samples.Count; i++)
		int32_t L_48 = V_1;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_49 = __this->___samples_10;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_49, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_00ea;
		}
	}
	{
		// height /= samples.Count;
		float L_51 = __this->___height_12;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_52 = __this->___samples_10;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_52, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		__this->___height_12 = ((float)(L_51/((float)L_53)));
		// normal = (avgNormal / samples.Count).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_55 = __this->___samples_10;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_55, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_54, ((float)L_56), NULL);
		V_2 = L_57;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		__this->___normal_11 = L_58;
	}

IL_018f:
	{
		// ApplyTransform();
		FloatingTransform_ApplyTransform_mE60632DAFBE99D523157205F0B353BA34BE408C6(__this, NULL);
		// }
		return;
	}
}
// System.Void StylizedWater2.FloatingTransform::ApplyTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingTransform_ApplyTransform_mE60632DAFBE99D523157205F0B353BA34BE408C6 (FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041* __this, const RuntimeMethod* method) 
{
	{
		// if(rollAmount > 0) this.transform.up = normal;
		float L_0 = __this->___rollAmount_9;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		// if(rollAmount > 0) this.transform.up = normal;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___normal_11;
		NullCheck(L_1);
		Transform_set_up_m1FBA5A97E5057747AC027AD5897EDE80A554D554(L_1, L_2, NULL);
	}

IL_001e:
	{
		// this.transform.position = new Vector3(this.transform.position.x, height, this.transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		float L_7 = __this->___height_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_6, L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_11, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 StylizedWater2.FloatingTransform::ConvertToWorldSpace(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FloatingTransform_ConvertToWorldSpace_m307764ADFB604F6C1605B89CD8F2EBA475A781E8 (FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (childTransform) return childTransform.TransformPoint(position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___childTransform_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (childTransform) return childTransform.TransformPoint(position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___childTransform_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_2, L_3, NULL);
		return L_4;
	}

IL_001a:
	{
		// return this.transform.TransformPoint(position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___position0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_5, L_6, NULL);
		return L_7;
	}
}
// UnityEngine.Vector3 StylizedWater2.FloatingTransform::ConvertToLocalSpace(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FloatingTransform_ConvertToLocalSpace_m752D92D63BDD9EC208F14FD8FD3D8DA863B612BC (FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (childTransform) return childTransform.InverseTransformPoint(position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___childTransform_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (childTransform) return childTransform.InverseTransformPoint(position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___childTransform_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___position0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_2, L_3, NULL);
		return L_4;
	}

IL_001a:
	{
		// return this.transform.InverseTransformPoint(position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___position0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void StylizedWater2.FloatingTransform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingTransform__ctor_m2DC1459675920E92FA40C3E09D9F9DAB8E938C88 (FloatingTransform_tD1B3C4CC893609E4E83002B849C81F6509A3D041* __this, const RuntimeMethod* method) 
{
	{
		// public WaterLevelSource waterLevelSource = WaterLevelSource.WaterObject;
		__this->___waterLevelSource_5 = 1;
		// public float rollAmount = 0.1f;
		__this->___rollAmount_9 = (0.100000001f);
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
// UnityEngine.Rendering.Universal.UniversalRendererData StylizedWater2.PipelineUtilities::GetRenderer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6* PipelineUtilities_GetRenderer_mB075348A8A2B19750EEADB7849E88FE687068762 (String_t* ___GUID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2F4CB828FF7CA5AA25219B9BC3DCE27927350);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError("PipelineUtilities.GetRenderer() cannot be called in a build, it requires AssetDatabase. References to renderers should be saved beforehand!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralC0E2F4CB828FF7CA5AA25219B9BC3DCE27927350, NULL);
		// return null;
		return (UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6*)NULL;
	}
}
// System.Void StylizedWater2.PipelineUtilities::RefreshRendererList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipelineUtilities_RefreshRendererList_m9AA8274FACEE7CA2C9B2A0917DF529CC7AEFDACA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11C3FC57DBA15819E8A8BE4744C27A94546EB5A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBAE29A248390A76DE1161F1A5D9073CEA6DDF68);
		s_Il2CppMethodInitialized = true;
	}
	ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (UniversalRenderPipeline.asset == null)
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_0;
		L_0 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogError("No pipeline is active, do not display UI that uses this function if it isn't!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralEBAE29A248390A76DE1161F1A5D9073CEA6DDF68, NULL);
	}

IL_0017:
	{
		// ScriptableRendererData[] m_rendererDataList = (ScriptableRendererData[]) typeof(UniversalRenderPipelineAsset).GetField(renderDataListFieldName, BindingFlags.NonPublic | BindingFlags.Instance).GetValue(UniversalRenderPipeline.asset);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		NullCheck(L_3);
		FieldInfo_t* L_4;
		L_4 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(82 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_3, _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20, ((int32_t)36));
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_5;
		L_5 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_4, L_5);
		V_0 = ((ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169*)Castclass((RuntimeObject*)L_6, ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var));
		// _rendererDisplayList = new GUIContent[m_rendererDataList.Length+1];
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_7 = V_0;
		NullCheck(L_7);
		GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503* L_8 = (GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503*)(GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503*)SZArrayNew(GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_7)->max_length)), 1)));
		((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererDisplayList_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererDisplayList_1), (void*)L_8);
		// int defaultIndex = GetDefaultRendererIndex(UniversalRenderPipeline.asset);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_9;
		L_9 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		int32_t L_10;
		L_10 = PipelineUtilities_GetDefaultRendererIndex_m5214A157B9B349CEBE1293E954E678770238085E(L_9, NULL);
		V_1 = L_10;
		// _rendererDisplayList[0] = new GUIContent($"Default ({(m_rendererDataList[defaultIndex].name)})");
		GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503* L_11 = ((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererDisplayList_1;
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral11C3FC57DBA15819E8A8BE4744C27A94546EB5A5, L_16, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_18 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_18, L_17, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_18);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)L_18);
		// for (int i = 1; i < _rendererDisplayList.Length; i++)
		V_2 = 1;
		goto IL_00ad;
	}

IL_007e:
	{
		// _rendererDisplayList[i] = new GUIContent($"{(i - 1).ToString()}: {(m_rendererDataList[i-1]).name}");
		GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503* L_19 = ((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererDisplayList_1;
		int32_t L_20 = V_2;
		int32_t L_21 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		String_t* L_22;
		L_22 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		String_t* L_27;
		L_27 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_26, NULL);
		String_t* L_28;
		L_28 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_22, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, L_27, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_29 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_29, L_28, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_29);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)L_29);
		// for (int i = 1; i < _rendererDisplayList.Length; i++)
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00ad:
	{
		// for (int i = 1; i < _rendererDisplayList.Length; i++)
		int32_t L_31 = V_2;
		GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503* L_32 = ((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererDisplayList_1;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_007e;
		}
	}
	{
		// _rendererIndexList = new int[m_rendererDataList.Length+1];
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_33 = V_0;
		NullCheck(L_33);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_33)->max_length)), 1)));
		((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererIndexList_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererIndexList_2), (void*)L_34);
		// for (int i = 0; i < _rendererIndexList.Length; i++)
		V_4 = 0;
		goto IL_00dd;
	}

IL_00cb:
	{
		// _rendererIndexList[i] = i-1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = ((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererIndexList_2;
		int32_t L_36 = V_4;
		int32_t L_37 = V_4;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (int32_t)((int32_t)il2cpp_codegen_subtract(L_37, 1)));
		// for (int i = 0; i < _rendererIndexList.Length; i++)
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00dd:
	{
		// for (int i = 0; i < _rendererIndexList.Length; i++)
		int32_t L_39 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = ((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererIndexList_2;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_00cb;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GUIContent[] StylizedWater2.PipelineUtilities::get_rendererDisplayList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503* PipelineUtilities_get_rendererDisplayList_m017233CA542CE7D606099F144C15A9C6DBBE8E22 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_rendererDisplayList == null) RefreshRendererList();
		GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503* L_0 = ((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererDisplayList_1;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// if (_rendererDisplayList == null) RefreshRendererList();
		PipelineUtilities_RefreshRendererList_m9AA8274FACEE7CA2C9B2A0917DF529CC7AEFDACA(NULL);
	}

IL_000c:
	{
		// return _rendererDisplayList;
		GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503* L_1 = ((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererDisplayList_1;
		return L_1;
	}
}
// System.Void StylizedWater2.PipelineUtilities::set_rendererDisplayList(UnityEngine.GUIContent[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipelineUtilities_set_rendererDisplayList_m89FD7F0132712E8DB7D67FF79EF5F857D2BD181F (GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rendererDisplayList = value;
		GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503* L_0 = ___value0;
		((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererDisplayList_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererDisplayList_1), (void*)L_0);
		// }
		return;
	}
}
// System.Int32[] StylizedWater2.PipelineUtilities::get_rendererIndexList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* PipelineUtilities_get_rendererIndexList_mFD11DF36BA6B6431BBDAB3FCD61A873660CD9DDF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_rendererIndexList == null) RefreshRendererList();
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererIndexList_2;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// if (_rendererIndexList == null) RefreshRendererList();
		PipelineUtilities_RefreshRendererList_m9AA8274FACEE7CA2C9B2A0917DF529CC7AEFDACA(NULL);
	}

IL_000c:
	{
		// return _rendererIndexList;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererIndexList_2;
		return L_1;
	}
}
// System.Void StylizedWater2.PipelineUtilities::set_rendererIndexList(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipelineUtilities_set_rendererIndexList_mDA591881D2E58C1B1FB46BAF6E4FD5432A940767 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rendererIndexList = value;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___value0;
		((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererIndexList_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_StaticFields*)il2cpp_codegen_static_fields_for(PipelineUtilities_t1EB3A9AE50E833EA0713C491D50290337CC44628_il2cpp_TypeInfo_var))->____rendererIndexList_2), (void*)L_0);
		// }
		return;
	}
}
// System.Int32 StylizedWater2.PipelineUtilities::ValidateRenderer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PipelineUtilities_ValidateRenderer_m5E5B2E66B14880763F2392851BFCCCB0FCF8C380 (int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06D24D9DFDF42E902387C248B5FE0C3A0C3B0F3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4ACEF3B41F113A58664962B546D70687836F373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA2DEC8FE08E1ED2D7923EB57B196235FAD5E16B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* V_1 = NULL;
	{
		// if (UniversalRenderPipeline.asset)
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_0;
		L_0 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_009e;
		}
	}
	{
		// int defaultRendererIndex = GetDefaultRendererIndex(UniversalRenderPipeline.asset);
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_2;
		L_2 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		int32_t L_3;
		L_3 = PipelineUtilities_GetDefaultRendererIndex_m5214A157B9B349CEBE1293E954E678770238085E(L_2, NULL);
		V_0 = L_3;
		// ScriptableRendererData[] m_rendererDataList = (ScriptableRendererData[]) typeof(UniversalRenderPipelineAsset).GetField(renderDataListFieldName, BindingFlags.NonPublic | BindingFlags.Instance).GetValue(UniversalRenderPipeline.asset);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_5);
		FieldInfo_t* L_6;
		L_6 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(82 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_5, _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20, ((int32_t)36));
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_7;
		L_7 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_6, L_7);
		V_1 = ((ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169*)Castclass((RuntimeObject*)L_8, ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var));
		// if (index == -1) index = defaultRendererIndex;
		int32_t L_9 = ___index0;
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0047;
		}
	}
	{
		// if (index == -1) index = defaultRendererIndex;
		int32_t L_10 = V_0;
		___index0 = L_10;
	}

IL_0047:
	{
		// if (!(index < m_rendererDataList.Length && m_rendererDataList[index] != null))
		int32_t L_11 = ___index0;
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_13 = V_1;
		int32_t L_14 = ___index0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_17)
		{
			goto IL_009c;
		}
	}

IL_0058:
	{
		// Debug.LogWarning($"Renderer at <b>index {index.ToString()}</b> is missing, falling back to Default Renderer. <b>{m_rendererDataList[defaultRendererIndex].name}</b>", UniversalRenderPipeline.asset);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralCA2DEC8FE08E1ED2D7923EB57B196235FAD5E16B);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCA2DEC8FE08E1ED2D7923EB57B196235FAD5E16B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		String_t* L_21;
		L_21 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___index0), NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_20;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralC4ACEF3B41F113A58664962B546D70687836F373);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC4ACEF3B41F113A58664962B546D70687836F373);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_24 = V_1;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_27, NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_28);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_23;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		String_t* L_30;
		L_30 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_31;
		L_31 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_30, L_31, NULL);
		// return defaultRendererIndex;
		int32_t L_32 = V_0;
		return L_32;
	}

IL_009c:
	{
		// return index;
		int32_t L_33 = ___index0;
		return L_33;
	}

IL_009e:
	{
		// Debug.LogError("No Universal Render Pipeline is currently active.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral06D24D9DFDF42E902387C248B5FE0C3A0C3B0F3F, NULL);
		// return 0;
		return 0;
	}
}
// System.Boolean StylizedWater2.PipelineUtilities::IsRendererAdded(UnityEngine.Rendering.Universal.ScriptableRendererData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipelineUtilities_IsRendererAdded_m2E9B3344C25B77023F48C3841E3A025336732B30 (ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___renderer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06D24D9DFDF42E902387C248B5FE0C3A0C3B0F3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC341FAB7EB586F5B01F4EF063D8F0F695CF6B43E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// if (renderer == null)
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_0 = ___renderer0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// Debug.LogError("Pass is null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralC341FAB7EB586F5B01F4EF063D8F0F695CF6B43E, NULL);
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// if (UniversalRenderPipeline.asset)
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_2;
		L_2 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		// BindingFlags bindings =
		//     System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance;
		V_0 = ((int32_t)36);
		// ScriptableRendererData[] m_rendererDataList =
		//     (ScriptableRendererData[]) typeof(UniversalRenderPipelineAsset)
		//         .GetField(renderDataListFieldName, bindings).GetValue(UniversalRenderPipeline.asset);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		FieldInfo_t* L_7;
		L_7 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(82 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_5, _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20, L_6);
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_8;
		L_8 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_7, L_8);
		V_1 = ((ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169*)Castclass((RuntimeObject*)L_9, ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var));
		// bool isPresent = false;
		V_2 = (bool)0;
		// for (int i = 0; i < m_rendererDataList.Length; i++)
		V_3 = 0;
		goto IL_0060;
	}

IL_004f:
	{
		// if (m_rendererDataList[i] == renderer) isPresent = true;
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_10 = V_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_14 = ___renderer0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_005c;
		}
	}
	{
		// if (m_rendererDataList[i] == renderer) isPresent = true;
		V_2 = (bool)1;
	}

IL_005c:
	{
		// for (int i = 0; i < m_rendererDataList.Length; i++)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0060:
	{
		// for (int i = 0; i < m_rendererDataList.Length; i++)
		int32_t L_17 = V_3;
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_004f;
		}
	}
	{
		// return isPresent;
		bool L_19 = V_2;
		return L_19;
	}

IL_0068:
	{
		// Debug.LogError("No Universal Render Pipeline is currently active.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral06D24D9DFDF42E902387C248B5FE0C3A0C3B0F3F, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void StylizedWater2.PipelineUtilities::AddRendererToPipeline(UnityEngine.Rendering.Universal.ScriptableRendererData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipelineUtilities_AddRendererToPipeline_m8CB6E8C675E61698E80B855B0CE3D922B9685C44 (ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___renderer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD564DD588CF150AFDB80F4773D248194256B6A34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mA20937394A0961A947EFE502EBD77AD6245B7D9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m34C8555D6DCC2D0287E23BFB31223CF1D0734217_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06D24D9DFDF42E902387C248B5FE0C3A0C3B0F3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* V_1 = NULL;
	List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// if (renderer == null) return;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_0 = ___renderer0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (renderer == null) return;
		return;
	}

IL_000a:
	{
		// if (UniversalRenderPipeline.asset)
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_2;
		L_2 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0088;
		}
	}
	{
		// BindingFlags bindings = System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance;
		V_0 = ((int32_t)36);
		// ScriptableRendererData[] m_rendererDataList = (ScriptableRendererData[]) typeof(UniversalRenderPipelineAsset).GetField(renderDataListFieldName, bindings).GetValue(UniversalRenderPipeline.asset);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		FieldInfo_t* L_7;
		L_7 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(82 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_5, _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20, L_6);
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_8;
		L_8 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_7, L_8);
		V_1 = ((ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169*)Castclass((RuntimeObject*)L_9, ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var));
		// List<ScriptableRendererData> rendererDataList = new List<ScriptableRendererData>();
		List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* L_10 = (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424*)il2cpp_codegen_object_new(List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		List_1__ctor_m34C8555D6DCC2D0287E23BFB31223CF1D0734217(L_10, List_1__ctor_m34C8555D6DCC2D0287E23BFB31223CF1D0734217_RuntimeMethod_var);
		V_2 = L_10;
		// for (int i = 0; i < m_rendererDataList.Length; i++)
		V_3 = 0;
		goto IL_0055;
	}

IL_0048:
	{
		// rendererDataList.Add(m_rendererDataList[i]);
		List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* L_11 = V_2;
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_12 = V_1;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		List_1_Add_mD564DD588CF150AFDB80F4773D248194256B6A34_inline(L_11, L_15, List_1_Add_mD564DD588CF150AFDB80F4773D248194256B6A34_RuntimeMethod_var);
		// for (int i = 0; i < m_rendererDataList.Length; i++)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0055:
	{
		// for (int i = 0; i < m_rendererDataList.Length; i++)
		int32_t L_17 = V_3;
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0048;
		}
	}
	{
		// rendererDataList.Add(renderer);
		List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* L_19 = V_2;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_20 = ___renderer0;
		NullCheck(L_19);
		List_1_Add_mD564DD588CF150AFDB80F4773D248194256B6A34_inline(L_19, L_20, List_1_Add_mD564DD588CF150AFDB80F4773D248194256B6A34_RuntimeMethod_var);
		// typeof(UniversalRenderPipelineAsset).GetField(renderDataListFieldName, bindings).SetValue(UniversalRenderPipeline.asset, rendererDataList.ToArray());
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_21, NULL);
		int32_t L_23 = V_0;
		NullCheck(L_22);
		FieldInfo_t* L_24;
		L_24 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(82 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_22, _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20, L_23);
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_25;
		L_25 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* L_26 = V_2;
		NullCheck(L_26);
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_27;
		L_27 = List_1_ToArray_mA20937394A0961A947EFE502EBD77AD6245B7D9C(L_26, List_1_ToArray_mA20937394A0961A947EFE502EBD77AD6245B7D9C_RuntimeMethod_var);
		NullCheck(L_24);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_24, L_25, (RuntimeObject*)L_27, NULL);
		return;
	}

IL_0088:
	{
		// Debug.LogError("No Universal Render Pipeline is currently active.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral06D24D9DFDF42E902387C248B5FE0C3A0C3B0F3F, NULL);
		// }
		return;
	}
}
// System.Int32 StylizedWater2.PipelineUtilities::GetDefaultRendererIndex(UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PipelineUtilities_GetDefaultRendererIndex_m5214A157B9B349CEBE1293E954E678770238085E (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* ___asset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3858969C727F32D417FC5DED78C5401572257A8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (int)typeof(UniversalRenderPipelineAsset).GetField("m_DefaultRendererIndex", BindingFlags.NonPublic | BindingFlags.Instance).GetValue(asset);;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		FieldInfo_t* L_2;
		L_2 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(82 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, _stringLiteralC3858969C727F32D417FC5DED78C5401572257A8, ((int32_t)36));
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_3 = ___asset0;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_2, L_3);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}
}
// UnityEngine.Rendering.Universal.ScriptableRendererData StylizedWater2.PipelineUtilities::GetDefaultRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* PipelineUtilities_GetDefaultRenderer_m593265E6ABFA48370CAA82CECEBDA54C40D5E003 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06D24D9DFDF42E902387C248B5FE0C3A0C3B0F3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (UniversalRenderPipeline.asset)
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_0;
		L_0 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		// ScriptableRendererData[] rendererDataList = (ScriptableRendererData[])typeof(UniversalRenderPipelineAsset)
		//         .GetField(renderDataListFieldName, BindingFlags.NonPublic | BindingFlags.Instance)
		//         .GetValue(UniversalRenderPipeline.asset);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		NullCheck(L_3);
		FieldInfo_t* L_4;
		L_4 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(82 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_3, _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20, ((int32_t)36));
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_5;
		L_5 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_4, L_5);
		// int defaultRendererIndex = GetDefaultRendererIndex(UniversalRenderPipeline.asset);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_7;
		L_7 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		int32_t L_8;
		L_8 = PipelineUtilities_GetDefaultRendererIndex_m5214A157B9B349CEBE1293E954E678770238085E(L_7, NULL);
		V_0 = L_8;
		// return rendererDataList[defaultRendererIndex];
		int32_t L_9 = V_0;
		NullCheck(((ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169*)Castclass((RuntimeObject*)L_6, ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var)));
		int32_t L_10 = L_9;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_11 = (((ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169*)Castclass((RuntimeObject*)L_6, ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var)))->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return L_11;
	}

IL_003f:
	{
		// Debug.LogError("No Universal Render Pipeline is currently active.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral06D24D9DFDF42E902387C248B5FE0C3A0C3B0F3F, NULL);
		// return null;
		return (ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7*)NULL;
	}
}
// System.Void StylizedWater2.PipelineUtilities::RemoveRendererFromPipeline(UnityEngine.Rendering.Universal.ScriptableRendererData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipelineUtilities_RemoveRendererFromPipeline_mA17477D4655A16D3725F145001BE9899A3DF8E0A (ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___renderer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m7FF0F9331146763E7C1C71B6F92EEF57A910B9D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m9D07AEEC3BD3364325EA28BEBF09C4D5BFB2ED18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mA20937394A0961A947EFE502EBD77AD6245B7D9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDD19270367F605476E9B7A7A9872D28C89FFF6D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06D24D9DFDF42E902387C248B5FE0C3A0C3B0F3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* V_1 = NULL;
	{
		// if (renderer == null) return;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_0 = ___renderer0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (renderer == null) return;
		return;
	}

IL_000a:
	{
		// if (UniversalRenderPipeline.asset)
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_2;
		L_2 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_007a;
		}
	}
	{
		// BindingFlags bindings = BindingFlags.NonPublic | BindingFlags.Instance;
		V_0 = ((int32_t)36);
		// ScriptableRendererData[] m_rendererDataList =
		//     (ScriptableRendererData[]) typeof(UniversalRenderPipelineAsset)
		//         .GetField(renderDataListFieldName, bindings).GetValue(UniversalRenderPipeline.asset);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		FieldInfo_t* L_7;
		L_7 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(82 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_5, _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20, L_6);
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_8;
		L_8 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_7, L_8);
		// List<ScriptableRendererData> rendererDataList = new List<ScriptableRendererData>(m_rendererDataList);
		List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* L_10 = (List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424*)il2cpp_codegen_object_new(List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		List_1__ctor_mDD19270367F605476E9B7A7A9872D28C89FFF6D8(L_10, (RuntimeObject*)((ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169*)Castclass((RuntimeObject*)L_9, ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var)), List_1__ctor_mDD19270367F605476E9B7A7A9872D28C89FFF6D8_RuntimeMethod_var);
		V_1 = L_10;
		// if (rendererDataList.Contains(renderer))
		List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* L_11 = V_1;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_12 = ___renderer0;
		NullCheck(L_11);
		bool L_13;
		L_13 = List_1_Contains_m7FF0F9331146763E7C1C71B6F92EEF57A910B9D8(L_11, L_12, List_1_Contains_m7FF0F9331146763E7C1C71B6F92EEF57A910B9D8_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_0084;
		}
	}
	{
		// rendererDataList.Remove(renderer);
		List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* L_14 = V_1;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_15 = ___renderer0;
		NullCheck(L_14);
		bool L_16;
		L_16 = List_1_Remove_m9D07AEEC3BD3364325EA28BEBF09C4D5BFB2ED18(L_14, L_15, List_1_Remove_m9D07AEEC3BD3364325EA28BEBF09C4D5BFB2ED18_RuntimeMethod_var);
		// typeof(UniversalRenderPipelineAsset).GetField(renderDataListFieldName, bindings)
		//     .SetValue(UniversalRenderPipeline.asset, rendererDataList.ToArray());
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_17, NULL);
		int32_t L_19 = V_0;
		NullCheck(L_18);
		FieldInfo_t* L_20;
		L_20 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(82 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_18, _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20, L_19);
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_21;
		L_21 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		List_1_t309E509CCE018E90D9F1ABC9799BF08611C72424* L_22 = V_1;
		NullCheck(L_22);
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_23;
		L_23 = List_1_ToArray_mA20937394A0961A947EFE502EBD77AD6245B7D9C(L_22, List_1_ToArray_mA20937394A0961A947EFE502EBD77AD6245B7D9C_RuntimeMethod_var);
		NullCheck(L_20);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_20, L_21, (RuntimeObject*)L_23, NULL);
		return;
	}

IL_007a:
	{
		// Debug.LogError("No Universal Render Pipeline is currently active.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral06D24D9DFDF42E902387C248B5FE0C3A0C3B0F3F, NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void StylizedWater2.PipelineUtilities::AssignRendererToCamera(UnityEngine.Rendering.Universal.UniversalAdditionalCameraData,UnityEngine.Rendering.Universal.ScriptableRendererData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PipelineUtilities_AssignRendererToCamera_m0AF6B0D34F724F9217F7F2FF16FE8B1EE02A45EA (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* ___camData0, ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* ___renderer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06D24D9DFDF42E902387C248B5FE0C3A0C3B0F3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20);
		s_Il2CppMethodInitialized = true;
	}
	ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (UniversalRenderPipeline.asset)
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_0;
		L_0 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		// if (renderer)
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_2 = ___renderer1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0065;
		}
	}
	{
		// ScriptableRendererData[] rendererDataList = (ScriptableRendererData[])typeof(UniversalRenderPipelineAsset).GetField(renderDataListFieldName, BindingFlags.NonPublic | BindingFlags.Instance).GetValue(UniversalRenderPipeline.asset);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_5);
		FieldInfo_t* L_6;
		L_6 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(82 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_5, _stringLiteral5C81E6D93BAE5B4AD36FC3E0025D12CAA0F4AC20, ((int32_t)36));
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_7;
		L_7 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_6, L_7);
		V_0 = ((ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169*)Castclass((RuntimeObject*)L_8, ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169_il2cpp_TypeInfo_var));
		// for (int i = 0; i < rendererDataList.Length; i++)
		V_1 = 0;
		goto IL_0054;
	}

IL_003e:
	{
		// if (rendererDataList[i] == renderer) camData.SetRenderer(i);
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_13 = ___renderer1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0050;
		}
	}
	{
		// if (rendererDataList[i] == renderer) camData.SetRenderer(i);
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_15 = ___camData0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		UniversalAdditionalCameraData_SetRenderer_m486F07D0F0D14B3F112CB6AFF01B12BE187AE255_inline(L_15, L_16, NULL);
	}

IL_0050:
	{
		// for (int i = 0; i < rendererDataList.Length; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < rendererDataList.Length; i++)
		int32_t L_18 = V_1;
		ScriptableRendererDataU5BU5D_tC674C147618C92B68DB64ECFDC847C8A941C6169* L_19 = V_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_003e;
		}
	}
	{
		return;
	}

IL_005b:
	{
		// Debug.LogError("No Universal Render Pipeline is currently active.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral06D24D9DFDF42E902387C248B5FE0C3A0C3B0F3F, NULL);
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Boolean StylizedWater2.PipelineUtilities::TransparentShadowsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PipelineUtilities_TransparentShadowsEnabled_mC8FF562F698BCA4EAFD68A5E8156A270DD286D2F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6* V_0 = NULL;
	{
		// if (!UniversalRenderPipeline.asset) return false;
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_0;
		L_0 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!UniversalRenderPipeline.asset) return false;
		return (bool)0;
	}

IL_000e:
	{
		// UniversalRendererData main = (UniversalRendererData)GetDefaultRenderer();
		ScriptableRendererData_t9005CE645D4881FA4431E52EDC7678203632CAA7* L_2;
		L_2 = PipelineUtilities_GetDefaultRenderer_m593265E6ABFA48370CAA82CECEBDA54C40D5E003(NULL);
		V_0 = ((UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6*)CastclassClass((RuntimeObject*)L_2, UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6_il2cpp_TypeInfo_var));
		// return main ? main.shadowTransparentReceive : false;
		UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = UniversalRendererData_get_shadowTransparentReceive_m59EBF1D691FF516DACB095A06D8E0311028D77BF_inline(L_5, NULL);
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
// System.Boolean StylizedWater2.PlanarReflectionRenderer::get_ReflectionsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarReflectionRenderer_get_ReflectionsEnabled_mF36A9A3C5E9E51D9D2D0BB05C5B608AAFA0F1CF3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool ReflectionsEnabled { get { return m_reflectionsEnabled; } }
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		bool L_0 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___m_reflectionsEnabled_18;
		return L_0;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_OnEnable_m41F1F310D5913A0CFBF25838F0FE4BCAE9D471A9 (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF82C5C46AF3D7BA669FA0EA0292D63735E262493_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InitializeValues();
		PlanarReflectionRenderer_InitializeValues_m9A29EEDB6056CBAF464AAFE6484FD0CA92A417BB(__this, NULL);
		// Instances.Add(this);
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		List_1_t90848C30298099F2E5867084B4C717401AAAC343* L_0 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___Instances_4;
		NullCheck(L_0);
		List_1_Add_mF82C5C46AF3D7BA669FA0EA0292D63735E262493_inline(L_0, __this, List_1_Add_mF82C5C46AF3D7BA669FA0EA0292D63735E262493_RuntimeMethod_var);
		// EnableReflections();
		PlanarReflectionRenderer_EnableReflections_mECD3BFAEF881D49C3C16FED617DBEC14128CFF6E(__this, NULL);
		// }
		return;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_OnDisable_m02979A3A86F34FFF72E77BC4F397EE38ADD4AC75 (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mBEEAD73F7B94B7F8C89B23D93B2DCAA252916BC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instances.Remove(this);
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		List_1_t90848C30298099F2E5867084B4C717401AAAC343* L_0 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___Instances_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = List_1_Remove_mBEEAD73F7B94B7F8C89B23D93B2DCAA252916BC7(L_0, __this, List_1_Remove_mBEEAD73F7B94B7F8C89B23D93B2DCAA252916BC7_RuntimeMethod_var);
		// DisableReflections();
		PlanarReflectionRenderer_DisableReflections_mB96B4A38D43D3A8725E69B8FC1B5B4A89A43AA36(__this, NULL);
		// }
		return;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::InitializeValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_InitializeValues_m9A29EEDB6056CBAF464AAFE6484FD0CA92A417BB (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, const RuntimeMethod* method) 
{
	{
		// m_renderScale = renderScale;
		float L_0 = __this->___renderScale_11;
		__this->___m_renderScale_16 = L_0;
		// m_renderRange = renderRange;
		float L_1 = __this->___renderRange_10;
		__this->___m_renderRange_17 = L_1;
		// }
		return;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::SetQuality(System.Boolean,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_SetQuality_mCB9164525D4EEA7DF5C2C94914DDD48EE87668E9 (bool ___enableReflections0, float ___renderScale1, float ___renderRange2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4CAEAF0CB9F895AB66763819CC7CB001B0C7DCDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4C6BD8EE3917E22F4E0E3ADD7A777941597F4CF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m23B4609BDA1A4B22ACA63C1AA376CCAAF06A5168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m457BCFEFB866843CFEA2CEDF95DCDFE58B5D2BDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t0E643EF7F3C4D0373A20F74089A813C5E62E46A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* V_1 = NULL;
	{
		// foreach (PlanarReflectionRenderer renderer in Instances)
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		List_1_t90848C30298099F2E5867084B4C717401AAAC343* L_0 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___Instances_4;
		NullCheck(L_0);
		Enumerator_t0E643EF7F3C4D0373A20F74089A813C5E62E46A5 L_1;
		L_1 = List_1_GetEnumerator_m457BCFEFB866843CFEA2CEDF95DCDFE58B5D2BDF(L_0, List_1_GetEnumerator_m457BCFEFB866843CFEA2CEDF95DCDFE58B5D2BDF_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4CAEAF0CB9F895AB66763819CC7CB001B0C7DCDE((&V_0), Enumerator_Dispose_m4CAEAF0CB9F895AB66763819CC7CB001B0C7DCDE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004b_1;
			}

IL_000d_1:
			{
				// foreach (PlanarReflectionRenderer renderer in Instances)
				PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* L_2;
				L_2 = Enumerator_get_Current_m23B4609BDA1A4B22ACA63C1AA376CCAAF06A5168_inline((&V_0), Enumerator_get_Current_m23B4609BDA1A4B22ACA63C1AA376CCAAF06A5168_RuntimeMethod_var);
				V_1 = L_2;
				// if (renderScale > 0) renderer.renderScale = renderScale;
				float L_3 = ___renderScale1;
				if ((!(((float)L_3) > ((float)(0.0f)))))
				{
					goto IL_0024_1;
				}
			}
			{
				// if (renderScale > 0) renderer.renderScale = renderScale;
				PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* L_4 = V_1;
				float L_5 = ___renderScale1;
				NullCheck(L_4);
				L_4->___renderScale_11 = L_5;
			}

IL_0024_1:
			{
				// if (renderRange > 0) renderer.renderRange = renderRange;
				float L_6 = ___renderRange2;
				if ((!(((float)L_6) > ((float)(0.0f)))))
				{
					goto IL_0033_1;
				}
			}
			{
				// if (renderRange > 0) renderer.renderRange = renderRange;
				PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* L_7 = V_1;
				float L_8 = ___renderRange2;
				NullCheck(L_7);
				L_7->___renderRange_10 = L_8;
			}

IL_0033_1:
			{
				// renderer.InitializeValues();
				PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* L_9 = V_1;
				NullCheck(L_9);
				PlanarReflectionRenderer_InitializeValues_m9A29EEDB6056CBAF464AAFE6484FD0CA92A417BB(L_9, NULL);
				// if (enableReflections) renderer.EnableReflections();
				bool L_10 = ___enableReflections0;
				if (!L_10)
				{
					goto IL_0042_1;
				}
			}
			{
				// if (enableReflections) renderer.EnableReflections();
				PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* L_11 = V_1;
				NullCheck(L_11);
				PlanarReflectionRenderer_EnableReflections_mECD3BFAEF881D49C3C16FED617DBEC14128CFF6E(L_11, NULL);
			}

IL_0042_1:
			{
				// if (!enableReflections) renderer.DisableReflections();
				bool L_12 = ___enableReflections0;
				if (L_12)
				{
					goto IL_004b_1;
				}
			}
			{
				// if (!enableReflections) renderer.DisableReflections();
				PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* L_13 = V_1;
				NullCheck(L_13);
				PlanarReflectionRenderer_DisableReflections_mB96B4A38D43D3A8725E69B8FC1B5B4A89A43AA36(L_13, NULL);
			}

IL_004b_1:
			{
				// foreach (PlanarReflectionRenderer renderer in Instances)
				bool L_14;
				L_14 = Enumerator_MoveNext_m4C6BD8EE3917E22F4E0E3ADD7A777941597F4CF3((&V_0), Enumerator_MoveNext_m4C6BD8EE3917E22F4E0E3ADD7A777941597F4CF3_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0064;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::EnableReflections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_EnableReflections_mECD3BFAEF881D49C3C16FED617DBEC14128CFF6E (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_OnWillRenderCamera_m58D0B9E42BE62705971ED37E6B0632919039DF0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_reflectionsEnabled) return;
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		bool L_0 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___m_reflectionsEnabled_18;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (m_reflectionsEnabled) return;
		return;
	}

IL_0008:
	{
		// RenderPipelineManager.beginCameraRendering += OnWillRenderCamera;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_1 = (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)il2cpp_codegen_object_new(Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_2__ctor_mBEB5B9B513FE305CE98CA8065CC6E6CC0E5A4D51(L_1, __this, (intptr_t)((void*)PlanarReflectionRenderer_OnWillRenderCamera_m58D0B9E42BE62705971ED37E6B0632919039DF0D_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_add_beginCameraRendering_mF8416C1EB5B9FF130A7F638B842E283CAA83BC2B(L_1, NULL);
		// ToggleMaterialReflectionSampling(true);
		PlanarReflectionRenderer_ToggleMaterialReflectionSampling_m0EB36E502C93886F351159CED00CC7E7215EE813(__this, (bool)1, NULL);
		// m_reflectionsEnabled = true;
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___m_reflectionsEnabled_18 = (bool)1;
		// }
		return;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::DisableReflections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_DisableReflections_mB96B4A38D43D3A8725E69B8FC1B5B4A89A43AA36 (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m0985B9C4515ABFC16DCD73938C31FD14F388CBB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m7BEABDF6190A27125E278461686B950DBC2E13FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4E0CD273C9B2F20DCD03E0A70B95F65B38EC1209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mECD1F7865FB8107F52675796DFB52D59D7B5E44D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m36BD30099AE5596DD87AFF4F979E44119A7B8C19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_OnWillRenderCamera_m58D0B9E42BE62705971ED37E6B0632919039DF0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!m_reflectionsEnabled) return;
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		bool L_0 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___m_reflectionsEnabled_18;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (!m_reflectionsEnabled) return;
		return;
	}

IL_0008:
	{
		// RenderPipelineManager.beginCameraRendering -= OnWillRenderCamera;
		Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3* L_1 = (Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3*)il2cpp_codegen_object_new(Action_2_t8E07914D7090FF200FE84404EEEFAF3CE183C9F3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_2__ctor_mBEB5B9B513FE305CE98CA8065CC6E6CC0E5A4D51(L_1, __this, (intptr_t)((void*)PlanarReflectionRenderer_OnWillRenderCamera_m58D0B9E42BE62705971ED37E6B0632919039DF0D_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(RenderPipelineManager_t44E0175AAADDD5487593AEF2B009B1B154957CDB_il2cpp_TypeInfo_var);
		RenderPipelineManager_remove_beginCameraRendering_m1612AF680F9518D63562A8AC8C521A326B1C6C71(L_1, NULL);
		// ToggleMaterialReflectionSampling(false);
		PlanarReflectionRenderer_ToggleMaterialReflectionSampling_m0EB36E502C93886F351159CED00CC7E7215EE813(__this, (bool)0, NULL);
		// m_reflectionsEnabled = false;
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___m_reflectionsEnabled_18 = (bool)0;
		// foreach (var kvp in reflectionCameras)
		Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* L_2 = __this->___reflectionCameras_5;
		NullCheck(L_2);
		Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B L_3;
		L_3 = Dictionary_2_GetEnumerator_m7BEABDF6190A27125E278461686B950DBC2E13FC(L_2, Dictionary_2_GetEnumerator_m7BEABDF6190A27125E278461686B950DBC2E13FC_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0086:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4E0CD273C9B2F20DCD03E0A70B95F65B38EC1209((&V_0), Enumerator_Dispose_m4E0CD273C9B2F20DCD03E0A70B95F65B38EC1209_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007b_1;
			}

IL_0034_1:
			{
				// foreach (var kvp in reflectionCameras)
				KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB L_4;
				L_4 = Enumerator_get_Current_m36BD30099AE5596DD87AFF4F979E44119A7B8C19_inline((&V_0), Enumerator_get_Current_m36BD30099AE5596DD87AFF4F979E44119A7B8C19_RuntimeMethod_var);
				V_1 = L_4;
				// if (kvp.Value == null) continue;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
				L_5 = KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_inline((&V_1), KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_6;
				L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_6)
				{
					goto IL_007b_1;
				}
			}
			{
				// if (kvp.Value)
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
				L_7 = KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_inline((&V_1), KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_8;
				L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
				if (!L_8)
				{
					goto IL_007b_1;
				}
			}
			{
				// RenderTexture.ReleaseTemporary(kvp.Value.targetTexture);
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9;
				L_9 = KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_inline((&V_1), KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_RuntimeMethod_var);
				NullCheck(L_9);
				RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10;
				L_10 = Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD(L_9, NULL);
				RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_10, NULL);
				// DestroyImmediate(kvp.Value.gameObject);
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
				L_11 = KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_inline((&V_1), KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_RuntimeMethod_var);
				NullCheck(L_11);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
				L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_12, NULL);
			}

IL_007b_1:
			{
				// foreach (var kvp in reflectionCameras)
				bool L_13;
				L_13 = Enumerator_MoveNext_mECD1F7865FB8107F52675796DFB52D59D7B5E44D((&V_0), Enumerator_MoveNext_mECD1F7865FB8107F52675796DFB52D59D7B5E44D_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0034_1;
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
		// reflectionCameras.Clear();
		Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* L_14 = __this->___reflectionCameras_5;
		NullCheck(L_14);
		Dictionary_2_Clear_m0985B9C4515ABFC16DCD73938C31FD14F388CBB7(L_14, Dictionary_2_Clear_m0985B9C4515ABFC16DCD73938C31FD14F388CBB7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_OnDrawGizmosSelected_mC6C860A861482424AEFDC011A050955EEEFEE994 (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.DrawWireCube(bounds.center, bounds.size);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_0 = (&__this->___bounds_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3(L_0, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_2 = (&__this->___bounds_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4(L_2, NULL);
		Gizmos_DrawWireCube_m31971565E5002365FE94256FFE1DC5B070FDBBA7(L_1, L_3, NULL);
		// }
		return;
	}
}
// UnityEngine.Bounds StylizedWater2.PlanarReflectionRenderer::CalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 PlanarReflectionRenderer_CalculateBounds_mBD848B2661D82F6703E80A3E3AE1F8C5C2173ECF (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Bounds m_bounds = new Bounds(Vector3.zero, Vector3.zero);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Bounds__ctor_mAF7B238B9FBF90C495E5D7951760085A93119C5A((&V_0), L_0, L_1, NULL);
		// if (waterObjects == null) return m_bounds;
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_2 = __this->___waterObjects_12;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// if (waterObjects == null) return m_bounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_3 = V_0;
		return L_3;
	}

IL_001b:
	{
		// if (waterObjects.Count == 0) return m_bounds;
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_4 = __this->___waterObjects_12;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_inline(L_4, List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		// if (waterObjects.Count == 0) return m_bounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_6 = V_0;
		return L_6;
	}

IL_002a:
	{
		// if (waterObjects.Count == 1) return waterObjects[0].meshRenderer.bounds;
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_7 = __this->___waterObjects_12;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_inline(L_7, List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_RuntimeMethod_var);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_004f;
		}
	}
	{
		// if (waterObjects.Count == 1) return waterObjects[0].meshRenderer.bounds;
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_9 = __this->___waterObjects_12;
		NullCheck(L_9);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_10;
		L_10 = List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66(L_9, 0, List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66_RuntimeMethod_var);
		NullCheck(L_10);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_11 = L_10->___meshRenderer_7;
		NullCheck(L_11);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_12;
		L_12 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_11, NULL);
		return L_12;
	}

IL_004f:
	{
		// m_bounds = waterObjects[0].meshRenderer.bounds;
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_13 = __this->___waterObjects_12;
		NullCheck(L_13);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_14;
		L_14 = List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66(L_13, 0, List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66_RuntimeMethod_var);
		NullCheck(L_14);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_15 = L_14->___meshRenderer_7;
		NullCheck(L_15);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_16;
		L_16 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_15, NULL);
		V_0 = L_16;
		// for (int i = 0; i < waterObjects.Count; i++)
		V_1 = 0;
		goto IL_00a2;
	}

IL_006a:
	{
		// if (waterObjects[i]) bounds.Encapsulate(waterObjects[i].meshRenderer.bounds);
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_17 = __this->___waterObjects_12;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_19;
		L_19 = List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66(L_17, L_18, List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_19, NULL);
		if (!L_20)
		{
			goto IL_009e;
		}
	}
	{
		// if (waterObjects[i]) bounds.Encapsulate(waterObjects[i].meshRenderer.bounds);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_21 = (&__this->___bounds_13);
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_22 = __this->___waterObjects_12;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_24;
		L_24 = List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66(L_22, L_23, List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66_RuntimeMethod_var);
		NullCheck(L_24);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_25 = L_24->___meshRenderer_7;
		NullCheck(L_25);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_26;
		L_26 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_25, NULL);
		Bounds_Encapsulate_m7C70C382B9380A8C962074C78E189B53CE8F7A22(L_21, L_26, NULL);
	}

IL_009e:
	{
		// for (int i = 0; i < waterObjects.Count; i++)
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a2:
	{
		// for (int i = 0; i < waterObjects.Count; i++)
		int32_t L_28 = V_1;
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_29 = __this->___waterObjects_12;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_inline(L_29, List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_006a;
		}
	}
	{
		// return m_bounds;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_31 = V_0;
		return L_31;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_RecalculateBounds_mC01420C3191FE6F5693DAAC49FABF0D59AD7892C (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, const RuntimeMethod* method) 
{
	{
		// bounds = CalculateBounds();
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0;
		L_0 = PlanarReflectionRenderer_CalculateBounds_mBD848B2661D82F6703E80A3E3AE1F8C5C2173ECF(__this, NULL);
		__this->___bounds_13 = L_0;
		// }
		return;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::OnWillRenderCamera(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_OnWillRenderCamera_m58D0B9E42BE62705971ED37E6B0632919039DF0D (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___context0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m4E42B9C57825324589C0E4A268D06097918F5A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m170AED7C79718F1017B33E251480A89CEAEB35D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	int32_t G_B18_3 = 0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B21_0 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B22_1 = NULL;
	{
		// if (camera.cameraType != CameraType.SceneView && (camera.cameraType == CameraType.Reflection ||
		//                                                   camera.cameraType == CameraType.Preview ||
		//                                                   camera.hideFlags != HideFlags.None)) return;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0025;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___camera1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_0024;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ___camera1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851(L_4, NULL);
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_0024;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = ___camera1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Object_get_hideFlags_mA08F5E41671B8C6B5073C6B9E2799BCE6E0DF7F3(L_6, NULL);
		if (!L_7)
		{
			goto IL_0025;
		}
	}

IL_0024:
	{
		// camera.hideFlags != HideFlags.None)) return;
		return;
	}

IL_0025:
	{
		// if (IsVisible(camera) == false) return;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = ___camera1;
		bool L_9;
		L_9 = PlanarReflectionRenderer_IsVisible_m485D44611B099879393764FF8845721B45DAB9BE(__this, L_8, NULL);
		if (L_9)
		{
			goto IL_002f;
		}
	}
	{
		// if (IsVisible(camera) == false) return;
		return;
	}

IL_002f:
	{
		// cameraData = camera.GetComponent<UniversalAdditionalCameraData>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = ___camera1;
		NullCheck(L_10);
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_11;
		L_11 = Component_GetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m4E42B9C57825324589C0E4A268D06097918F5A86(L_10, Component_GetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m4E42B9C57825324589C0E4A268D06097918F5A86_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___cameraData_21 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___cameraData_21), (void*)L_11);
		// if (cameraData && cameraData.renderType == CameraRenderType.Overlay) return;
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_12 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___cameraData_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_12, NULL);
		if (!L_13)
		{
			goto IL_0054;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_14 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___cameraData_21;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = UniversalAdditionalCameraData_get_renderType_m329B2A06C25793DF3BBBE89B3F23154EA2380265_inline(L_14, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_0054;
		}
	}
	{
		// if (cameraData && cameraData.renderType == CameraRenderType.Overlay) return;
		return;
	}

IL_0054:
	{
		// reflectionCameras.TryGetValue(camera, out reflectionCamera);
		Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* L_16 = __this->___reflectionCameras_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = ___camera1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_18 = (&__this->___reflectionCamera_14);
		NullCheck(L_16);
		bool L_19;
		L_19 = Dictionary_2_TryGetValue_m170AED7C79718F1017B33E251480A89CEAEB35D3(L_16, L_17, L_18, Dictionary_2_TryGetValue_m170AED7C79718F1017B33E251480A89CEAEB35D3_RuntimeMethod_var);
		// if (reflectionCamera == null) CreateReflectionCamera(camera);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20 = __this->___reflectionCamera_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_007c;
		}
	}
	{
		// if (reflectionCamera == null) CreateReflectionCamera(camera);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = ___camera1;
		PlanarReflectionRenderer_CreateReflectionCamera_mD321C89034E9F40DDB72B3B558D79BC813617ADE(__this, L_22, NULL);
	}

IL_007c:
	{
		// if (!reflectionCamera) return;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23 = __this->___reflectionCamera_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_23, NULL);
		if (L_24)
		{
			goto IL_008a;
		}
	}
	{
		// if (!reflectionCamera) return;
		return;
	}

IL_008a:
	{
		// UpdateWaterProperties(reflectionCamera);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = __this->___reflectionCamera_14;
		PlanarReflectionRenderer_UpdateWaterProperties_m8140A443BDDFC5691195C04D3F48413ADE393934(__this, L_25, NULL);
		// if (renderScale != m_renderScale)
		float L_26 = __this->___renderScale_11;
		float L_27 = __this->___m_renderScale_16;
		if ((((float)L_26) == ((float)L_27)))
		{
			goto IL_0106;
		}
	}
	{
		// RenderTexture.ReleaseTemporary(reflectionCamera.targetTexture);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28 = __this->___reflectionCamera_14;
		NullCheck(L_28);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_29;
		L_29 = Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD(L_28, NULL);
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_29, NULL);
		// RenderTexture currentBuffer = RenderTexture.GetTemporary(
		//     Mathf.RoundToInt(camera.scaledPixelWidth * GetRenderScale()),
		//     Mathf.RoundToInt(camera.scaledPixelHeight * GetRenderScale()), 0,
		//     camera.allowHDR ? RenderTextureFormat.DefaultHDR : RenderTextureFormat.Default);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_30 = ___camera1;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Camera_get_scaledPixelWidth_m249B2380A6E403DC1EA5E153546C4F61E226E42D(L_30, NULL);
		float L_32;
		L_32 = PlanarReflectionRenderer_GetRenderScale_mE31EC9E676F88E98588B662859FC3134D217F2A0(__this, NULL);
		int32_t L_33;
		L_33 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_multiply(((float)L_31), L_32)), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_34 = ___camera1;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = Camera_get_scaledPixelHeight_m9A61AA4F944C308A6F8B7D094C92C7A40EFB4AB9(L_34, NULL);
		float L_36;
		L_36 = PlanarReflectionRenderer_GetRenderScale_mE31EC9E676F88E98588B662859FC3134D217F2A0(__this, NULL);
		int32_t L_37;
		L_37 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_multiply(((float)L_35), L_36)), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_38 = ___camera1;
		NullCheck(L_38);
		bool L_39;
		L_39 = Camera_get_allowHDR_m3187E9118CB52D5D7F0658D7ECF5E2B00E296A67(L_38, NULL);
		G_B16_0 = 0;
		G_B16_1 = L_37;
		G_B16_2 = L_33;
		if (L_39)
		{
			G_B17_0 = 0;
			G_B17_1 = L_37;
			G_B17_2 = L_33;
			goto IL_00e6;
		}
	}
	{
		G_B18_0 = 7;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_00e8;
	}

IL_00e6:
	{
		G_B18_0 = ((int32_t)9);
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_00e8:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_40;
		L_40 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(G_B18_3, G_B18_2, G_B18_1, G_B18_0, NULL);
		V_0 = L_40;
		// reflectionCamera.targetTexture = currentBuffer;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_41 = __this->___reflectionCamera_14;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42 = V_0;
		NullCheck(L_41);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_41, L_42, NULL);
		// m_renderScale = renderScale;
		float L_43 = __this->___renderScale_11;
		__this->___m_renderScale_16 = L_43;
	}

IL_0106:
	{
		// UpdatePerspective(camera, reflectionCamera);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_44 = ___camera1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_45 = __this->___reflectionCamera_14;
		PlanarReflectionRenderer_UpdatePerspective_m74FA8F9104081C8646F52C9652C6EDBB8BE739BF(__this, L_44, L_45, NULL);
		// reflectionCamera.clearFlags = includeSkybox ? CameraClearFlags.Skybox : CameraClearFlags.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_46 = __this->___reflectionCamera_14;
		bool L_47 = __this->___includeSkybox_9;
		G_B20_0 = L_46;
		if (L_47)
		{
			G_B21_0 = L_46;
			goto IL_0124;
		}
	}
	{
		G_B22_0 = 3;
		G_B22_1 = G_B20_0;
		goto IL_0125;
	}

IL_0124:
	{
		G_B22_0 = 1;
		G_B22_1 = G_B21_0;
	}

IL_0125:
	{
		NullCheck(G_B22_1);
		Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(G_B22_1, G_B22_0, NULL);
		// GL.invertCulling = true;
		GL_set_invertCulling_mAC18402894032E2EBB93C0B7D953496AEE96AB36((bool)1, NULL);
		// UniversalRenderPipeline.RenderSingleCamera(context, reflectionCamera);
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_48 = ___context0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_49 = __this->___reflectionCamera_14;
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipeline_RenderSingleCamera_m43520D1759875704A42FA33CEF5A8D225170E92C(L_48, L_49, NULL);
		// GL.invertCulling = false;
		GL_set_invertCulling_mAC18402894032E2EBB93C0B7D953496AEE96AB36((bool)0, NULL);
		// }
		return;
	}
}
// System.Single StylizedWater2.PlanarReflectionRenderer::GetRenderScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlanarReflectionRenderer_GetRenderScale_mE31EC9E676F88E98588B662859FC3134D217F2A0 (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Mathf.Clamp(renderScale * UniversalRenderPipeline.asset.renderScale, 0.25f, 1f);
		float L_0 = __this->___renderScale_11;
		il2cpp_codegen_runtime_class_init_inline(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* L_1;
		L_1 = UniversalRenderPipeline_get_asset_mE97A926D00D90276CC9442857014B7180EF02819(NULL);
		NullCheck(L_1);
		float L_2;
		L_2 = UniversalRenderPipelineAsset_get_renderScale_m742E4D97CEF504F30F963E9500AAF070C71EDB3C_inline(L_1, NULL);
		float L_3;
		L_3 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_multiply(L_0, L_2)), (0.25f), (1.0f), NULL);
		return L_3;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::SetRendererIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_SetRendererIndex_mCACCED12A2BFE44288736533CD030CF26AA78979 (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m4E42B9C57825324589C0E4A268D06097918F5A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m7BEABDF6190A27125E278461686B950DBC2E13FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4E0CD273C9B2F20DCD03E0A70B95F65B38EC1209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mECD1F7865FB8107F52675796DFB52D59D7B5E44D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m36BD30099AE5596DD87AFF4F979E44119A7B8C19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// index = PipelineUtilities.ValidateRenderer(index);
		int32_t L_0 = ___index0;
		int32_t L_1;
		L_1 = PipelineUtilities_ValidateRenderer_m5E5B2E66B14880763F2392851BFCCCB0FCF8C380(L_0, NULL);
		___index0 = L_1;
		// foreach (var kvp in reflectionCameras)
		Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* L_2 = __this->___reflectionCameras_5;
		NullCheck(L_2);
		Enumerator_t178259FEF5B67143AC6F4012394B98979FF5D29B L_3;
		L_3 = Dictionary_2_GetEnumerator_m7BEABDF6190A27125E278461686B950DBC2E13FC(L_2, Dictionary_2_GetEnumerator_m7BEABDF6190A27125E278461686B950DBC2E13FC_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4E0CD273C9B2F20DCD03E0A70B95F65B38EC1209((&V_0), Enumerator_Dispose_m4E0CD273C9B2F20DCD03E0A70B95F65B38EC1209_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0049_1;
			}

IL_0016_1:
			{
				// foreach (var kvp in reflectionCameras)
				KeyValuePair_2_t81A4309EC9B7D914620BE9321F587F84394E24CB L_4;
				L_4 = Enumerator_get_Current_m36BD30099AE5596DD87AFF4F979E44119A7B8C19_inline((&V_0), Enumerator_get_Current_m36BD30099AE5596DD87AFF4F979E44119A7B8C19_RuntimeMethod_var);
				V_1 = L_4;
				// if (kvp.Value == null) continue;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
				L_5 = KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_inline((&V_1), KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_6;
				L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (L_6)
				{
					goto IL_0049_1;
				}
			}
			{
				// cameraData = kvp.Value.GetComponent<UniversalAdditionalCameraData>();
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
				L_7 = KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_inline((&V_1), KeyValuePair_2_get_Value_mBB1AED0F4C858A50D942F5E3E6829B3C3A249F43_RuntimeMethod_var);
				NullCheck(L_7);
				UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_8;
				L_8 = Component_GetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m4E42B9C57825324589C0E4A268D06097918F5A86(L_7, Component_GetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m4E42B9C57825324589C0E4A268D06097918F5A86_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
				((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___cameraData_21 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___cameraData_21), (void*)L_8);
				// cameraData.SetRenderer(index);
				UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_9 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___cameraData_21;
				int32_t L_10 = ___index0;
				NullCheck(L_9);
				UniversalAdditionalCameraData_SetRenderer_m486F07D0F0D14B3F112CB6AFF01B12BE187AE255_inline(L_9, L_10, NULL);
			}

IL_0049_1:
			{
				// foreach (var kvp in reflectionCameras)
				bool L_11;
				L_11 = Enumerator_MoveNext_mECD1F7865FB8107F52675796DFB52D59D7B5E44D((&V_0), Enumerator_MoveNext_mECD1F7865FB8107F52675796DFB52D59D7B5E44D_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0062;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::CreateReflectionCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_CreateReflectionCamera_mD321C89034E9F40DDB72B3B558D79BC813617ADE (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD8C30AF913A8F62839C214C596CA1AFCA100AFD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m257D49B2F0B2F6DAFF2E3EC7F53B5930D5BB6D46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF59CB42CDF961BCBC461EC8E5206E1947BF4606B);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_1;
	memset((&V_1), 0, sizeof(V_1));
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B2_0 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B5_2 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B4_2 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B6_2 = 0;
	int32_t G_B6_3 = 0;
	{
		// GameObject go = new GameObject(source.name + "_reflection_left");
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___source0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, _stringLiteralF59CB42CDF961BCBC461EC8E5206E1947BF4606B, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_3, L_2, NULL);
		// go.hideFlags = HideFlags.HideAndDontSave;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, ((int32_t)61), NULL);
		// Camera newCamera = go.AddComponent<Camera>();
		NullCheck(L_4);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142(L_4, GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		V_0 = L_5;
		// newCamera.hideFlags = HideFlags.DontSave;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = V_0;
		NullCheck(L_6);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_6, ((int32_t)52), NULL);
		// newCamera.CopyFrom(source);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = V_0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = ___source0;
		NullCheck(L_7);
		Camera_CopyFrom_mFA5C3AB8E95EC4124249520ACEC6F7F25E5CDC52(L_7, L_8, NULL);
		// newCamera.cullingMask = cullingMask = ~(1 << 4) & cullingMask;;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_10 = __this->___cullingMask_6;
		int32_t L_11;
		L_11 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_10, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_12;
		L_12 = LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922(((int32_t)(((int32_t)-17)&L_11)), NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_13 = L_12;
		V_1 = L_13;
		__this->___cullingMask_6 = L_13;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_14 = V_1;
		int32_t L_15;
		L_15 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_14, NULL);
		NullCheck(L_9);
		Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_9, L_15, NULL);
		// newCamera.depth = -99f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = V_0;
		NullCheck(L_16);
		Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F(L_16, (-99.0f), NULL);
		// newCamera.rect = new Rect(0,0,1,1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = V_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_18;
		memset((&L_18), 0, sizeof(L_18));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_18), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_17, L_18, NULL);
		// newCamera.enabled = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = V_0;
		NullCheck(L_19);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_19, (bool)0, NULL);
		// newCamera.clearFlags = includeSkybox ? CameraClearFlags.Skybox : CameraClearFlags.Depth;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20 = V_0;
		bool L_21 = __this->___includeSkybox_9;
		G_B1_0 = L_20;
		if (L_21)
		{
			G_B2_0 = L_20;
			goto IL_0096;
		}
	}
	{
		G_B3_0 = 3;
		G_B3_1 = G_B1_0;
		goto IL_0097;
	}

IL_0096:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0097:
	{
		NullCheck(G_B3_1);
		Camera_set_clearFlags_m66541D9CC43CBAA5FE7364A50D43CA5569FD4D93(G_B3_1, G_B3_0, NULL);
		// newCamera.useOcclusionCulling = false;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = V_0;
		NullCheck(L_22);
		Camera_set_useOcclusionCulling_mD3036B0CBB5E6A1BF33810AB8FDEE3CD1A4D7C04(L_22, (bool)0, NULL);
		// UniversalAdditionalCameraData data = newCamera.gameObject.AddComponent<UniversalAdditionalCameraData>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23 = V_0;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		NullCheck(L_24);
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_25;
		L_25 = GameObject_AddComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m257D49B2F0B2F6DAFF2E3EC7F53B5930D5BB6D46(L_24, GameObject_AddComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_m257D49B2F0B2F6DAFF2E3EC7F53B5930D5BB6D46_RuntimeMethod_var);
		// data.requiresDepthTexture = true;
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_26 = L_25;
		NullCheck(L_26);
		UniversalAdditionalCameraData_set_requiresDepthTexture_mCDA8FD4FD620FF4A6E67EF807137D7B5458F6F54(L_26, (bool)1, NULL);
		// data.requiresColorTexture = false;
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_27 = L_26;
		NullCheck(L_27);
		UniversalAdditionalCameraData_set_requiresColorTexture_m26FE59EAD31B15DB1746D2717106552281AF041D(L_27, (bool)0, NULL);
		// data.renderShadows = false;
		UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* L_28 = L_27;
		NullCheck(L_28);
		UniversalAdditionalCameraData_set_renderShadows_m435F35FAAF4700DC51E6A806D2BEF8A01A3A010B_inline(L_28, (bool)0, NULL);
		// rendererIndex = PipelineUtilities.ValidateRenderer(rendererIndex);
		int32_t L_29 = __this->___rendererIndex_7;
		int32_t L_30;
		L_30 = PipelineUtilities_ValidateRenderer_m5E5B2E66B14880763F2392851BFCCCB0FCF8C380(L_29, NULL);
		__this->___rendererIndex_7 = L_30;
		// data.SetRenderer(rendererIndex);
		int32_t L_31 = __this->___rendererIndex_7;
		NullCheck(L_28);
		UniversalAdditionalCameraData_SetRenderer_m486F07D0F0D14B3F112CB6AFF01B12BE187AE255_inline(L_28, L_31, NULL);
		// currentBuffer = RenderTexture.GetTemporary(Mathf.RoundToInt(source.scaledPixelWidth * GetRenderScale()),
		//     Mathf.RoundToInt(source.scaledPixelHeight * GetRenderScale()), 0,
		//     source.allowHDR ? RenderTextureFormat.DefaultHDR : RenderTextureFormat.Default);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_32 = ___source0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Camera_get_scaledPixelWidth_m249B2380A6E403DC1EA5E153546C4F61E226E42D(L_32, NULL);
		float L_34;
		L_34 = PlanarReflectionRenderer_GetRenderScale_mE31EC9E676F88E98588B662859FC3134D217F2A0(__this, NULL);
		int32_t L_35;
		L_35 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_multiply(((float)L_33), L_34)), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_36 = ___source0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = Camera_get_scaledPixelHeight_m9A61AA4F944C308A6F8B7D094C92C7A40EFB4AB9(L_36, NULL);
		float L_38;
		L_38 = PlanarReflectionRenderer_GetRenderScale_mE31EC9E676F88E98588B662859FC3134D217F2A0(__this, NULL);
		int32_t L_39;
		L_39 = Mathf_RoundToInt_m6A6E30BA4157D69DA47F02B43108882DDD7C4A70_inline(((float)il2cpp_codegen_multiply(((float)L_37), L_38)), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_40 = ___source0;
		NullCheck(L_40);
		bool L_41;
		L_41 = Camera_get_allowHDR_m3187E9118CB52D5D7F0658D7ECF5E2B00E296A67(L_40, NULL);
		G_B4_0 = 0;
		G_B4_1 = L_39;
		G_B4_2 = L_35;
		if (L_41)
		{
			G_B5_0 = 0;
			G_B5_1 = L_39;
			G_B5_2 = L_35;
			goto IL_0111;
		}
	}
	{
		G_B6_0 = 7;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0113;
	}

IL_0111:
	{
		G_B6_0 = ((int32_t)9);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0113:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_42;
		L_42 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(G_B6_3, G_B6_2, G_B6_1, G_B6_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___currentBuffer_15 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___currentBuffer_15), (void*)L_42);
		// newCamera.targetTexture = currentBuffer;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_43 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___currentBuffer_15;
		NullCheck(L_43);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_43, L_44, NULL);
		// reflectionCameras[source] = newCamera;
		Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* L_45 = __this->___reflectionCameras_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_46 = ___source0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_47 = V_0;
		NullCheck(L_45);
		Dictionary_2_set_Item_mD8C30AF913A8F62839C214C596CA1AFCA100AFD1(L_45, L_46, L_47, Dictionary_2_set_Item_mD8C30AF913A8F62839C214C596CA1AFCA100AFD1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean StylizedWater2.PlanarReflectionRenderer::IsVisible(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlanarReflectionRenderer_IsVisible_m485D44611B099879393764FF8845721B45DAB9BE (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GeometryUtility.CalculateFrustumPlanes(camera.projectionMatrix, frustrumPlanes);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera0;
		NullCheck(L_0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Camera_get_projectionMatrix_m9B943EFDD6418528A055321E14F75F1511DD9B4A(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_2 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___frustrumPlanes_22;
		GeometryUtility_CalculateFrustumPlanes_mD440EB67A372B1A69F01CB48407C7812B8002F6F(L_1, L_2, NULL);
		// return GeometryUtility.TestPlanesAABB(frustrumPlanes, bounds);
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_3 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___frustrumPlanes_22;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_4 = __this->___bounds_13;
		bool L_5;
		L_5 = GeometryUtility_TestPlanesAABB_m7656F6C599D2FF8FE9B69AF3E6DAEFBAD4A4FA8B(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::EnableMaterialReflectionSampling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_EnableMaterialReflectionSampling_m5BA894272169EACEBA1CACF6EF759E71EF0B55D7 (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ToggleMaterialReflectionSampling(m_reflectionsEnabled);
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		bool L_0 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___m_reflectionsEnabled_18;
		PlanarReflectionRenderer_ToggleMaterialReflectionSampling_m0EB36E502C93886F351159CED00CC7E7215EE813(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::ToggleMaterialReflectionSampling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_ToggleMaterialReflectionSampling_m0EB36E502C93886F351159CED00CC7E7215EE813 (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, bool ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B6_0 = 0;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* G_B5_1 = NULL;
	float G_B7_0 = 0.0f;
	int32_t G_B7_1 = 0;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* G_B7_2 = NULL;
	{
		// if (waterObjects == null) return;
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_0 = __this->___waterObjects_12;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (waterObjects == null) return;
		return;
	}

IL_0009:
	{
		// for (int i = 0; i < waterObjects.Count; i++)
		V_0 = 0;
		goto IL_0060;
	}

IL_000d:
	{
		// if (waterObjects[i] == null) continue;
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_1 = __this->___waterObjects_12;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_3;
		L_3 = List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66(L_1, L_2, List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_005c;
		}
	}
	{
		// waterObjects[i].props.SetFloat(_PlanarReflectionsEnabledID, state ? 1f : 0f);
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_5 = __this->___waterObjects_12;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_7;
		L_7 = List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66(L_5, L_6, List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66_RuntimeMethod_var);
		NullCheck(L_7);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_8;
		L_8 = WaterObject_get_props_m658216AA9BF257A26FA8772ACA11119EAFA87587(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		int32_t L_9 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->____PlanarReflectionsEnabledID_19;
		bool L_10 = ___state0;
		G_B5_0 = L_9;
		G_B5_1 = L_8;
		if (L_10)
		{
			G_B6_0 = L_9;
			G_B6_1 = L_8;
			goto IL_0041;
		}
	}
	{
		G_B7_0 = (0.0f);
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0046;
	}

IL_0041:
	{
		G_B7_0 = (1.0f);
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0046:
	{
		NullCheck(G_B7_2);
		MaterialPropertyBlock_SetFloat_m6BA8DA03FAD1ABA0BD339E0E5157C4DF3C987267(G_B7_2, G_B7_1, G_B7_0, NULL);
		// waterObjects[i].ApplyInstancedProperties();
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_11 = __this->___waterObjects_12;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_13;
		L_13 = List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66(L_11, L_12, List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66_RuntimeMethod_var);
		NullCheck(L_13);
		WaterObject_ApplyInstancedProperties_mF1CF73B4DDBD8DA559F3E979A123348296D312B6(L_13, NULL);
	}

IL_005c:
	{
		// for (int i = 0; i < waterObjects.Count; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0060:
	{
		// for (int i = 0; i < waterObjects.Count; i++)
		int32_t L_15 = V_0;
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_16 = __this->___waterObjects_12;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_inline(L_16, List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::UpdateWaterProperties(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_UpdateWaterProperties_m8140A443BDDFC5691195C04D3F48413ADE393934 (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < waterObjects.Count; i++)
		V_0 = 0;
		goto IL_004e;
	}

IL_0004:
	{
		// if (waterObjects[i] == null) continue;
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_0 = __this->___waterObjects_12;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_2;
		L_2 = List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66(L_0, L_1, List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		// waterObjects[i].props.SetTexture(_PlanarReflectionLeftID, cam.targetTexture);
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_4 = __this->___waterObjects_12;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_6;
		L_6 = List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66(L_4, L_5, List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66_RuntimeMethod_var);
		NullCheck(L_6);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_7;
		L_7 = WaterObject_get_props_m658216AA9BF257A26FA8772ACA11119EAFA87587(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		int32_t L_8 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->____PlanarReflectionLeftID_20;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = ___cam0;
		NullCheck(L_9);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10;
		L_10 = Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD(L_9, NULL);
		NullCheck(L_7);
		MaterialPropertyBlock_SetTexture_m39F531D3F35D6C5B661A7B4F07DD7B8ACC22627F(L_7, L_8, L_10, NULL);
		// waterObjects[i].ApplyInstancedProperties();
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_11 = __this->___waterObjects_12;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_13;
		L_13 = List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66(L_11, L_12, List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66_RuntimeMethod_var);
		NullCheck(L_13);
		WaterObject_ApplyInstancedProperties_mF1CF73B4DDBD8DA559F3E979A123348296D312B6(L_13, NULL);
	}

IL_004a:
	{
		// for (int i = 0; i < waterObjects.Count; i++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004e:
	{
		// for (int i = 0; i < waterObjects.Count; i++)
		int32_t L_15 = V_0;
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_16 = __this->___waterObjects_12;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_inline(L_16, List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::UpdatePerspective(UnityEngine.Camera,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_UpdatePerspective_m74FA8F9104081C8646F52C9652C6EDBB8BE739BF (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___source0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___reflectionCamera1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	{
		// if (!source || !reflectionCamera) return;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___reflectionCamera1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (L_3)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// if (!source || !reflectionCamera) return;
		return;
	}

IL_0011:
	{
		// Vector3 position = bounds.center + (Vector3.up * offset);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_4 = (&__this->___bounds_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_7 = __this->___offset_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_5, L_8, NULL);
		V_0 = L_9;
		// var d = -Vector3.Dot(Vector3.up, position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		float L_12;
		L_12 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_10, L_11, NULL);
		V_1 = ((-L_12));
		// reflectionPlane = new Vector4(Vector3.up.x, Vector3.up.y, Vector3.up.z, d);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_14 = L_13.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_16 = L_15.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_18 = L_17.___z_4;
		float L_19 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_20), L_14, L_16, L_18, L_19, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___reflectionPlane_23 = L_20;
		// reflectionBase = Matrix4x4.identity;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_21;
		L_21 = Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline(NULL);
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___reflectionBase_24 = L_21;
		// reflectionBase *= Matrix4x4.Scale(new Vector3(1, -1, 1));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___reflectionBase_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), (1.0f), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24;
		L_24 = Matrix4x4_Scale_m389397AD581D1BB1A5D39B47021DD685A1EAA9AB(L_23, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_25;
		L_25 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_22, L_24, NULL);
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___reflectionBase_24 = L_25;
		// CalculateReflectionMatrix(ref reflectionBase, reflectionPlane);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___reflectionPlane_23;
		PlanarReflectionRenderer_CalculateReflectionMatrix_mB247EADF35AE23BE8EB2F91B75FB64402B400670(__this, (&((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___reflectionBase_24), L_26, NULL);
		// oldCamPos = source.transform.position - new Vector3(0, position.y * 2, 0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_27 = ___source0;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		float L_31 = L_30.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), (0.0f), ((float)il2cpp_codegen_multiply(L_31, (2.0f))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_29, L_32, NULL);
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___oldCamPos_25 = L_33;
		// reflectionCamera.transform.forward = Vector3.Scale(source.transform.forward, new Vector3(1, -1, 1));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_34 = ___reflectionCamera1;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_36 = ___source0;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_36, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_39), (1.0f), (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline(L_38, L_39, NULL);
		NullCheck(L_35);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_35, L_40, NULL);
		// worldToCamera = source.worldToCameraMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_41 = ___source0;
		NullCheck(L_41);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_42;
		L_42 = Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40(L_41, NULL);
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___worldToCamera_26 = L_42;
		// viewMatrix = worldToCamera * reflectionBase;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_43 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___worldToCamera_26;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_44 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___reflectionBase_24;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_45;
		L_45 = Matrix4x4_op_Multiply_m7649669D493400913FF60AFB04B1C19F14E0FDB0(L_43, L_44, NULL);
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___viewMatrix_27 = L_45;
		// oldCamPos.y = -oldCamPos.y;
		float L_46 = (&((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___oldCamPos_25)->___y_3;
		(&((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___oldCamPos_25)->___y_3 = ((-L_46));
		// reflectionCamera.transform.position = oldCamPos;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_47 = ___reflectionCamera1;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___oldCamPos_25;
		NullCheck(L_48);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_48, L_49, NULL);
		// clipPlane = CameraSpacePlane(reflectionCamera.worldToCameraMatrix, position - Vector3.up * 0.1f,
		//     Vector3.up, 1.0f);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_50 = ___reflectionCamera1;
		NullCheck(L_50);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_51;
		L_51 = Camera_get_worldToCameraMatrix_m48E324BD76706A316A1701EFC6A3DEC7DFB2FF40(L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_53, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_52, L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_57;
		L_57 = PlanarReflectionRenderer_CameraSpacePlane_m3EE9E89528F14E4642561186F40AE775A3FE3B5E(__this, L_51, L_55, L_56, (1.0f), NULL);
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___clipPlane_29 = L_57;
		// projectionMatrix = source.CalculateObliqueMatrix(clipPlane);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_58 = ___source0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_59 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___clipPlane_29;
		NullCheck(L_58);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_60;
		L_60 = Camera_CalculateObliqueMatrix_mBBFA94C033BB0C3C21B182F732B2155913E46609(L_58, L_59, NULL);
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___projectionMatrix_28 = L_60;
		// reflectionCamera.cullingMask = cullingMask;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_61 = ___reflectionCamera1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_62 = __this->___cullingMask_6;
		int32_t L_63;
		L_63 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_62, NULL);
		NullCheck(L_61);
		Camera_set_cullingMask_m14F426710530BA8FA53AEC02F79C418AA558CB32(L_61, L_63, NULL);
		// if (m_renderRange != renderRange)
		float L_64 = __this->___m_renderRange_17;
		float L_65 = __this->___renderRange_10;
		if ((((float)L_64) == ((float)L_65)))
		{
			goto IL_01d7;
		}
	}
	{
		// m_renderRange = renderRange;
		float L_66 = __this->___renderRange_10;
		__this->___m_renderRange_17 = L_66;
		// for (int i = 0; i < layerCullDistances.Length; i++)
		V_2 = 0;
		goto IL_01cd;
	}

IL_01bc:
	{
		// layerCullDistances[i] = renderRange;
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_67 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___layerCullDistances_30;
		int32_t L_68 = V_2;
		float L_69 = __this->___renderRange_10;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (float)L_69);
		// for (int i = 0; i < layerCullDistances.Length; i++)
		int32_t L_70 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_01cd:
	{
		// for (int i = 0; i < layerCullDistances.Length; i++)
		int32_t L_71 = V_2;
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_72 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___layerCullDistances_30;
		NullCheck(L_72);
		if ((((int32_t)L_71) < ((int32_t)((int32_t)(((RuntimeArray*)L_72)->max_length)))))
		{
			goto IL_01bc;
		}
	}

IL_01d7:
	{
		// reflectionCamera.projectionMatrix = projectionMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_73 = ___reflectionCamera1;
		il2cpp_codegen_runtime_class_init_inline(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_74 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___projectionMatrix_28;
		NullCheck(L_73);
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_73, L_74, NULL);
		// reflectionCamera.worldToCameraMatrix = viewMatrix;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_75 = ___reflectionCamera1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_76 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___viewMatrix_27;
		NullCheck(L_75);
		Camera_set_worldToCameraMatrix_mC199F02E435CE7261F7EECD1FD78A33EA96ABC0D(L_75, L_76, NULL);
		// reflectionCamera.layerCullDistances = layerCullDistances;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_77 = ___reflectionCamera1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_78 = ((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___layerCullDistances_30;
		NullCheck(L_77);
		Camera_set_layerCullDistances_m4D2749319E09EC88A62CF39446E906E0D4D5391D(L_77, L_78, NULL);
		// reflectionCamera.layerCullSpherical = true;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_79 = ___reflectionCamera1;
		NullCheck(L_79);
		Camera_set_layerCullSpherical_m8BE964C29B22DBFB64D31CF1FACB39B4F8E3ADDE(L_79, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer_CalculateReflectionMatrix_mB247EADF35AE23BE8EB2F91B75FB64402B400670 (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___reflectionMat0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___plane1, const RuntimeMethod* method) 
{
	{
		// reflectionMat.m00 = (1F - 2F * plane[0] * plane[0]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___reflectionMat0;
		float L_1;
		L_1 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		float L_2;
		L_2 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		L_0->___m00_0 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_1)), L_2))));
		// reflectionMat.m01 = (-2F * plane[0] * plane[1]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = ___reflectionMat0;
		float L_4;
		L_4 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		float L_5;
		L_5 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		L_3->___m01_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_4)), L_5));
		// reflectionMat.m02 = (-2F * plane[0] * plane[2]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_6 = ___reflectionMat0;
		float L_7;
		L_7 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		float L_8;
		L_8 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		L_6->___m02_8 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_7)), L_8));
		// reflectionMat.m03 = (-2F * plane[3] * plane[0]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_9 = ___reflectionMat0;
		float L_10;
		L_10 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 3, NULL);
		float L_11;
		L_11 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		L_9->___m03_12 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_10)), L_11));
		// reflectionMat.m10 = (-2F * plane[1] * plane[0]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_12 = ___reflectionMat0;
		float L_13;
		L_13 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		float L_14;
		L_14 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		L_12->___m10_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_13)), L_14));
		// reflectionMat.m11 = (1F - 2F * plane[1] * plane[1]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_15 = ___reflectionMat0;
		float L_16;
		L_16 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		float L_17;
		L_17 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		L_15->___m11_5 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_16)), L_17))));
		// reflectionMat.m12 = (-2F * plane[1] * plane[2]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_18 = ___reflectionMat0;
		float L_19;
		L_19 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		float L_20;
		L_20 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		L_18->___m12_9 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_19)), L_20));
		// reflectionMat.m13 = (-2F * plane[3] * plane[1]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_21 = ___reflectionMat0;
		float L_22;
		L_22 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 3, NULL);
		float L_23;
		L_23 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		L_21->___m13_13 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_22)), L_23));
		// reflectionMat.m20 = (-2F * plane[2] * plane[0]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_24 = ___reflectionMat0;
		float L_25;
		L_25 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		float L_26;
		L_26 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 0, NULL);
		L_24->___m20_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_25)), L_26));
		// reflectionMat.m21 = (-2F * plane[2] * plane[1]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_27 = ___reflectionMat0;
		float L_28;
		L_28 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		float L_29;
		L_29 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 1, NULL);
		L_27->___m21_6 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_28)), L_29));
		// reflectionMat.m22 = (1F - 2F * plane[2] * plane[2]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_30 = ___reflectionMat0;
		float L_31;
		L_31 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		float L_32;
		L_32 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		L_30->___m22_10 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_31)), L_32))));
		// reflectionMat.m23 = (-2F * plane[3] * plane[2]);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_33 = ___reflectionMat0;
		float L_34;
		L_34 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 3, NULL);
		float L_35;
		L_35 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline((&___plane1), 2, NULL);
		L_33->___m23_14 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-2.0f), L_34)), L_35));
		// reflectionMat.m30 = 0F;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_36 = ___reflectionMat0;
		L_36->___m30_3 = (0.0f);
		// reflectionMat.m31 = 0F;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_37 = ___reflectionMat0;
		L_37->___m31_7 = (0.0f);
		// reflectionMat.m32 = 0F;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_38 = ___reflectionMat0;
		L_38->___m32_11 = (0.0f);
		// reflectionMat.m33 = 1F;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_39 = ___reflectionMat0;
		L_39->___m33_15 = (1.0f);
		// }
		return;
	}
}
// UnityEngine.Vector4 StylizedWater2.PlanarReflectionRenderer::CameraSpacePlane(UnityEngine.Matrix4x4,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 PlanarReflectionRenderer_CameraSpacePlane_m3EE9E89528F14E4642561186F40AE775A3FE3B5E (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___worldToCameraMatrix0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal2, float ___sideSign3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var offsetPos = pos + normal * offset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___normal2;
		float L_2 = __this->___offset_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_0, L_3, NULL);
		V_0 = L_4;
		// var cameraPosition = worldToCameraMatrix.MultiplyPoint(offsetPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Matrix4x4_MultiplyPoint_m20E910B65693559BFDE99382472D8DD02C862E7E((&___worldToCameraMatrix0), L_5, NULL);
		V_1 = L_6;
		// var cameraNormal = worldToCameraMatrix.MultiplyVector(normal).normalized * sideSign;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___normal2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&___worldToCameraMatrix0), L_7, NULL);
		V_3 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		float L_10 = ___sideSign3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_9, L_10, NULL);
		V_2 = L_11;
		// return new Vector4(cameraNormal.x, cameraNormal.y, cameraNormal.z,
		//     -Vector3.Dot(cameraPosition, cameraNormal));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_2;
		float L_15 = L_14.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		float L_20;
		L_20 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_18, L_19, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_21), L_13, L_15, L_17, ((-L_20)), /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer__ctor_mA724AC187BDB856CD5F1CE68AB8EA3AA362179B6 (PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCC86EBF40667A343EA2CBB31F715245A4A6417E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m791FAAAE9C6541E788E1780357AC890DAE9859F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Dictionary<Camera, Camera> reflectionCameras = new Dictionary<Camera, Camera>();
		Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192* L_0 = (Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192*)il2cpp_codegen_object_new(Dictionary_2_t1626C6EFB3843F258C14DBFCE52C416DC3C00192_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mCC86EBF40667A343EA2CBB31F715245A4A6417E0(L_0, Dictionary_2__ctor_mCC86EBF40667A343EA2CBB31F715245A4A6417E0_RuntimeMethod_var);
		__this->___reflectionCameras_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reflectionCameras_5), (void*)L_0);
		// public LayerMask cullingMask = -1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1;
		L_1 = LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922((-1), NULL);
		__this->___cullingMask_6 = L_1;
		// public int rendererIndex = -1;
		__this->___rendererIndex_7 = (-1);
		// public float offset = 0.05f;
		__this->___offset_8 = (0.0500000007f);
		// public float renderRange = 500f;
		__this->___renderRange_10 = (500.0f);
		// public float renderScale = 0.75f;
		__this->___renderScale_11 = (0.75f);
		// public List<WaterObject> waterObjects = new List<WaterObject>();
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_2 = (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320*)il2cpp_codegen_object_new(List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m791FAAAE9C6541E788E1780357AC890DAE9859F0(L_2, List_1__ctor_m791FAAAE9C6541E788E1780357AC890DAE9859F0_RuntimeMethod_var);
		__this->___waterObjects_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waterObjects_12), (void*)L_2);
		// private float m_renderScale = 1f;
		__this->___m_renderScale_16 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void StylizedWater2.PlanarReflectionRenderer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlanarReflectionRenderer__cctor_mAE269DF9210B5FFF4D849E86C22A824815F5EC57 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCABE2A779DBCE0DF655A8CB2745D7D5D898E2FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t90848C30298099F2E5867084B4C717401AAAC343_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08ECFBD1FA56E42A91320B269A5FC32543D1AF2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CC9C2766414EDF919AC71923061B159260530CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<PlanarReflectionRenderer> Instances = new List<PlanarReflectionRenderer>();
		List_1_t90848C30298099F2E5867084B4C717401AAAC343* L_0 = (List_1_t90848C30298099F2E5867084B4C717401AAAC343*)il2cpp_codegen_object_new(List_1_t90848C30298099F2E5867084B4C717401AAAC343_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCABE2A779DBCE0DF655A8CB2745D7D5D898E2FF2(L_0, List_1__ctor_mCABE2A779DBCE0DF655A8CB2745D7D5D898E2FF2_RuntimeMethod_var);
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___Instances_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___Instances_4), (void*)L_0);
		// private static int _PlanarReflectionsEnabledID = Shader.PropertyToID("_PlanarReflectionsEnabled");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral08ECFBD1FA56E42A91320B269A5FC32543D1AF2F, NULL);
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->____PlanarReflectionsEnabledID_19 = L_1;
		// private static int _PlanarReflectionLeftID = Shader.PropertyToID("_PlanarReflectionLeft");
		int32_t L_2;
		L_2 = Shader_PropertyToID_mF5F7BA2EFF23D83482ECDE4C34227145D817B1EB(_stringLiteral1CC9C2766414EDF919AC71923061B159260530CD, NULL);
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->____PlanarReflectionLeftID_20 = L_2;
		// private static readonly Plane[] frustrumPlanes = new Plane[6];
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_3 = (PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE*)(PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE*)SZArrayNew(PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE_il2cpp_TypeInfo_var, (uint32_t)6);
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___frustrumPlanes_22 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___frustrumPlanes_22), (void*)L_3);
		// private static readonly float[] layerCullDistances = new float[32];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___layerCullDistances_30 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_StaticFields*)il2cpp_codegen_static_fields_for(PlanarReflectionRenderer_tDB4AB1488EAC19BEF575C6385504B14747EA0C93_il2cpp_TypeInfo_var))->___layerCullDistances_30), (void*)L_4);
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
// System.Void StylizedWater2.WaterGrid::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterGrid_Start_m7743B3E7202ACDFA751B8AD163BB32F9787E9E07 (WaterGrid_tEA723899E69DB1B321650DD7FB81A2A5EC3D308F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WaterGrid_tEA723899E69DB1B321650DD7FB81A2A5EC3D308F* G_B3_0 = NULL;
	WaterGrid_tEA723899E69DB1B321650DD7FB81A2A5EC3D308F* G_B2_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_0 = NULL;
	WaterGrid_tEA723899E69DB1B321650DD7FB81A2A5EC3D308F* G_B4_1 = NULL;
	{
		// if (autoAssignCamera) followTarget = Camera.main ? Camera.main.transform : followTarget;
		bool L_0 = __this->___autoAssignCamera_5;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		// if (autoAssignCamera) followTarget = Camera.main ? Camera.main.transform : followTarget;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		G_B2_0 = __this;
		if (L_2)
		{
			G_B3_0 = __this;
			goto IL_001d;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___followTarget_6;
		G_B4_0 = L_3;
		G_B4_1 = G_B2_0;
		goto IL_0027;
	}

IL_001d:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		G_B4_0 = L_5;
		G_B4_1 = G_B3_0;
	}

IL_0027:
	{
		NullCheck(G_B4_1);
		G_B4_1->___followTarget_6 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___followTarget_6), (void*)G_B4_0);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void StylizedWater2.WaterGrid::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterGrid_Update_m55CE227F0367F7488C4EC2172BA2E300E8DBF0E9 (WaterGrid_tEA723899E69DB1B321650DD7FB81A2A5EC3D308F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isPlaying) actualFollowTarget = followTarget;
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// if (Application.isPlaying) actualFollowTarget = followTarget;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___followTarget_6;
		__this->___actualFollowTarget_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actualFollowTarget_16), (void*)L_1);
	}

IL_0013:
	{
		// if (actualFollowTarget)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___actualFollowTarget_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		if (!L_3)
		{
			goto IL_0079;
		}
	}
	{
		// targetPosition = actualFollowTarget.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___actualFollowTarget_16;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		__this->___targetPosition_17 = L_6;
		// targetPosition = SnapToGrid(targetPosition, vertexDistance);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___targetPosition_17;
		float L_8 = __this->___vertexDistance_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = WaterGrid_SnapToGrid_mD88D86282DE5DC25138C0671BB8BFD5A4505538C(L_7, L_8, NULL);
		__this->___targetPosition_17 = L_9;
		// targetPosition.y = this.transform.position.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->___targetPosition_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___y_3;
		L_10->___y_3 = L_13;
		// this.transform.position = targetPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___targetPosition_17;
		NullCheck(L_14);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_14, L_15, NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void StylizedWater2.WaterGrid::Recreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterGrid_Recreate_m61A06529A92D3D98515E75AEEAC0FC5C2B6D4BC5 (WaterGrid_tEA723899E69DB1B321650DD7FB81A2A5EC3D308F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m61250AE01DF79598A1556704CA67149317F84597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m558424BB48FC697D760DA52A48CB00FD794BB5A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m26EAC87314F3DC3E78FEABFB95369320D3E4EFFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36557C3431461ABB7FE482D7131A83F4DEDE4021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m600E0A8320FCE31F97B32525C1A012CA70FDC6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m246B302C193D5B42ED23D3FE059E8EEEDF0742C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88588F53B86AB04B4D6393CD20A5D45A644714F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Enumerator_tA93798F6BF00422CF6D475D4BCDDD9FE9347F46F V_2;
	memset((&V_2), 0, sizeof(V_2));
	WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B3_0 = 0;
	{
		// rowsColumns = Mathf.Max(rowsColumns, 1);
		int32_t L_0 = __this->___rowsColumns_9;
		int32_t L_1;
		L_1 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_0, 1, NULL);
		__this->___rowsColumns_9 = L_1;
		// tileSize = Mathf.Max(1f, scale / rowsColumns);
		float L_2 = __this->___scale_7;
		int32_t L_3 = __this->___rowsColumns_9;
		float L_4;
		L_4 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((1.0f), ((float)(L_2/((float)L_3))), NULL);
		__this->___tileSize_12 = L_4;
		// mesh = WaterMesh.Create(WaterMesh.Shape.Rectangle, tileSize, Mathf.FloorToInt(tileSize / vertexDistance), tileSize);
		float L_5 = __this->___tileSize_12;
		float L_6 = __this->___tileSize_12;
		float L_7 = __this->___vertexDistance_8;
		int32_t L_8;
		L_8 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)(L_6/L_7)), NULL);
		float L_9 = __this->___tileSize_12;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_10;
		L_10 = WaterMesh_Create_m993599768DA7E90B2ECE651F361B26D9DEB9E159(0, L_5, L_8, L_9, NULL);
		__this->___mesh_14 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mesh_14), (void*)L_10);
		// bool requireRecreate = (m_rowsColumns != rowsColumns) || objects.Count < (rowsColumns * rowsColumns);
		int32_t L_11 = __this->___m_rowsColumns_11;
		int32_t L_12 = __this->___rowsColumns_9;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0084;
		}
	}
	{
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_13 = __this->___objects_15;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_inline(L_13, List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_RuntimeMethod_var);
		int32_t L_15 = __this->___rowsColumns_9;
		int32_t L_16 = __this->___rowsColumns_9;
		G_B3_0 = ((((int32_t)L_14) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_15, L_16))))? 1 : 0);
		goto IL_0085;
	}

IL_0084:
	{
		G_B3_0 = 1;
	}

IL_0085:
	{
		V_0 = (bool)G_B3_0;
		// if (requireRecreate) m_rowsColumns = rowsColumns;
		bool L_17 = V_0;
		if (!L_17)
		{
			goto IL_0095;
		}
	}
	{
		// if (requireRecreate) m_rowsColumns = rowsColumns;
		int32_t L_18 = __this->___rowsColumns_9;
		__this->___m_rowsColumns_11 = L_18;
	}

IL_0095:
	{
		// if (requireRecreate && objects.Count > 0)
		bool L_19 = V_0;
		if (!L_19)
		{
			goto IL_00f3;
		}
	}
	{
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_20 = __this->___objects_15;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_inline(L_20, List_1_get_Count_m34173561E1C118FC573F200D4971D997E91B0EB6_RuntimeMethod_var);
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00f3;
		}
	}
	{
		// foreach (WaterObject obj in objects)
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_22 = __this->___objects_15;
		NullCheck(L_22);
		Enumerator_tA93798F6BF00422CF6D475D4BCDDD9FE9347F46F L_23;
		L_23 = List_1_GetEnumerator_m246B302C193D5B42ED23D3FE059E8EEEDF0742C0(L_22, List_1_GetEnumerator_m246B302C193D5B42ED23D3FE059E8EEEDF0742C0_RuntimeMethod_var);
		V_2 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00da:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m61250AE01DF79598A1556704CA67149317F84597((&V_2), Enumerator_Dispose_m61250AE01DF79598A1556704CA67149317F84597_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00cf_1;
			}

IL_00b4_1:
			{
				// foreach (WaterObject obj in objects)
				WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_24;
				L_24 = Enumerator_get_Current_m26EAC87314F3DC3E78FEABFB95369320D3E4EFFC_inline((&V_2), Enumerator_get_Current_m26EAC87314F3DC3E78FEABFB95369320D3E4EFFC_RuntimeMethod_var);
				V_3 = L_24;
				// if (obj) DestroyImmediate(obj.gameObject);
				WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_25 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_26;
				L_26 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_25, NULL);
				if (!L_26)
				{
					goto IL_00cf_1;
				}
			}
			{
				// if (obj) DestroyImmediate(obj.gameObject);
				WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_27 = V_3;
				NullCheck(L_27);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
				L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_28, NULL);
			}

IL_00cf_1:
			{
				// foreach (WaterObject obj in objects)
				bool L_29;
				L_29 = Enumerator_MoveNext_m558424BB48FC697D760DA52A48CB00FD794BB5A8((&V_2), Enumerator_MoveNext_m558424BB48FC697D760DA52A48CB00FD794BB5A8_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_00b4_1;
				}
			}
			{
				goto IL_00e8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e8:
	{
		// objects.Clear();
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_30 = __this->___objects_15;
		NullCheck(L_30);
		List_1_Clear_m600E0A8320FCE31F97B32525C1A012CA70FDC6A0_inline(L_30, List_1_Clear_m600E0A8320FCE31F97B32525C1A012CA70FDC6A0_RuntimeMethod_var);
	}

IL_00f3:
	{
		// int index = 0;
		V_1 = 0;
		// for (int x = 0; x < rowsColumns; x++)
		V_4 = 0;
		goto IL_01ec;
	}

IL_00fd:
	{
		// for (int z = 0; z < rowsColumns; z++)
		V_5 = 0;
		goto IL_01d9;
	}

IL_0105:
	{
		// if (requireRecreate)
		bool L_31 = V_0;
		if (!L_31)
		{
			goto IL_0181;
		}
	}
	{
		// m_waterObject = WaterObject.New(material, mesh);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = __this->___material_10;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_33 = __this->___mesh_14;
		il2cpp_codegen_runtime_class_init_inline(WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_il2cpp_TypeInfo_var);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_34;
		L_34 = WaterObject_New_m1F321C2E414E813322F91F1B3191A848A5201A3D(L_32, L_33, NULL);
		__this->___m_waterObject_13 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_waterObject_13), (void*)L_34);
		// objects.Add(m_waterObject);
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_35 = __this->___objects_15;
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_36 = __this->___m_waterObject_13;
		NullCheck(L_35);
		List_1_Add_m36557C3431461ABB7FE482D7131A83F4DEDE4021_inline(L_35, L_36, List_1_Add_m36557C3431461ABB7FE482D7131A83F4DEDE4021_RuntimeMethod_var);
		// m_waterObject.transform.parent = this.transform;
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_37 = __this->___m_waterObject_13;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_37, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_38);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_38, L_39, NULL);
		// m_waterObject.gameObject.layer = 4;
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_40 = __this->___m_waterObject_13;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_40, NULL);
		NullCheck(L_41);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_41, 4, NULL);
		// m_waterObject.name = "WaterTile_x" + x + "z" + z;
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_42 = __this->___m_waterObject_13;
		String_t* L_43;
		L_43 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_44;
		L_44 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		String_t* L_45;
		L_45 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral88588F53B86AB04B4D6393CD20A5D45A644714F8, L_43, _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, L_44, NULL);
		NullCheck(L_42);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_42, L_45, NULL);
		goto IL_01b5;
	}

IL_0181:
	{
		// m_waterObject = objects[index];
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_46 = __this->___objects_15;
		int32_t L_47 = V_1;
		NullCheck(L_46);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_48;
		L_48 = List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66(L_46, L_47, List_1_get_Item_mE76FC75D0A421133846733F220625A699E701F66_RuntimeMethod_var);
		__this->___m_waterObject_13 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_waterObject_13), (void*)L_48);
		// m_waterObject.AssignMesh(mesh);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_49 = __this->___m_waterObject_13;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_50 = __this->___mesh_14;
		NullCheck(L_49);
		WaterObject_AssignMesh_mDD4C5E6C019DE3C1C7E96449F9FF34BC978D9FEF(L_49, L_50, NULL);
		// m_waterObject.AssignMaterial(material);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_51 = __this->___m_waterObject_13;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___material_10;
		NullCheck(L_51);
		WaterObject_AssignMaterial_m6CAC3E30C0520D8439A652CBE3ADE063AAD1F047(L_51, L_52, NULL);
	}

IL_01b5:
	{
		// m_waterObject.transform.localPosition = GridLocalCenterPosition(x, z);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_53 = __this->___m_waterObject_13;
		NullCheck(L_53);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_53, NULL);
		int32_t L_55 = V_4;
		int32_t L_56 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = WaterGrid_GridLocalCenterPosition_mF5920EC06B8A683D2EB61D5F9DCAB2FD244D892A(__this, L_55, L_56, NULL);
		NullCheck(L_54);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_54, L_57, NULL);
		// index++;
		int32_t L_58 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		// for (int z = 0; z < rowsColumns; z++)
		int32_t L_59 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_01d9:
	{
		// for (int z = 0; z < rowsColumns; z++)
		int32_t L_60 = V_5;
		int32_t L_61 = __this->___rowsColumns_9;
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_0105;
		}
	}
	{
		// for (int x = 0; x < rowsColumns; x++)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_01ec:
	{
		// for (int x = 0; x < rowsColumns; x++)
		int32_t L_63 = V_4;
		int32_t L_64 = __this->___rowsColumns_9;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_00fd;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 StylizedWater2.WaterGrid::GridLocalCenterPosition(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WaterGrid_GridLocalCenterPosition_mF5920EC06B8A683D2EB61D5F9DCAB2FD244D892A (WaterGrid_tEA723899E69DB1B321650DD7FB81A2A5EC3D308F* __this, int32_t ___x0, int32_t ___z1, const RuntimeMethod* method) 
{
	{
		// return new Vector3(x * tileSize - ((tileSize * (rowsColumns)) * 0.5f) + (tileSize * 0.5f), 0f,
		//     z * tileSize - ((tileSize * (rowsColumns)) * 0.5f) + (tileSize * 0.5f));
		int32_t L_0 = ___x0;
		float L_1 = __this->___tileSize_12;
		float L_2 = __this->___tileSize_12;
		int32_t L_3 = __this->___rowsColumns_9;
		float L_4 = __this->___tileSize_12;
		int32_t L_5 = ___z1;
		float L_6 = __this->___tileSize_12;
		float L_7 = __this->___tileSize_12;
		int32_t L_8 = __this->___rowsColumns_9;
		float L_9 = __this->___tileSize_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)L_0), L_1)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_2, ((float)L_3))), (0.5f))))), ((float)il2cpp_codegen_multiply(L_4, (0.5f))))), (0.0f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)L_5), L_6)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_7, ((float)L_8))), (0.5f))))), ((float)il2cpp_codegen_multiply(L_9, (0.5f))))), /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Vector3 StylizedWater2.WaterGrid::SnapToGrid(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 WaterGrid_SnapToGrid_mD88D86282DE5DC25138C0671BB8BFD5A4505538C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___cellSize1, const RuntimeMethod* method) 
{
	{
		// return new Vector3(SnapToGrid(position.x, cellSize), SnapToGrid(position.y, cellSize), SnapToGrid(position.z, cellSize));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		float L_1 = L_0.___x_2;
		float L_2 = ___cellSize1;
		float L_3;
		L_3 = WaterGrid_SnapToGrid_m427C6FC1BE16C107BF6C5C58D6AFFD4E784BBB65(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___position0;
		float L_5 = L_4.___y_3;
		float L_6 = ___cellSize1;
		float L_7;
		L_7 = WaterGrid_SnapToGrid_m427C6FC1BE16C107BF6C5C58D6AFFD4E784BBB65(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___position0;
		float L_9 = L_8.___z_4;
		float L_10 = ___cellSize1;
		float L_11;
		L_11 = WaterGrid_SnapToGrid_m427C6FC1BE16C107BF6C5C58D6AFFD4E784BBB65(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_3, L_7, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single StylizedWater2.WaterGrid::SnapToGrid(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WaterGrid_SnapToGrid_m427C6FC1BE16C107BF6C5C58D6AFFD4E784BBB65 (float ___position0, float ___cellSize1, const RuntimeMethod* method) 
{
	{
		// return Mathf.FloorToInt(position / cellSize) * (cellSize) + (cellSize * 0.5f);
		float L_0 = ___position0;
		float L_1 = ___cellSize1;
		int32_t L_2;
		L_2 = Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline(((float)(L_0/L_1)), NULL);
		float L_3 = ___cellSize1;
		float L_4 = ___cellSize1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)L_2), L_3)), ((float)il2cpp_codegen_multiply(L_4, (0.5f)))));
	}
}
// System.Void StylizedWater2.WaterGrid::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterGrid_OnDrawGizmosSelected_m4CB126B5CEFDF4C63566E1ADAFC245240A01056E (WaterGrid_tEA723899E69DB1B321650DD7FB81A2A5EC3D308F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// Gizmos.color = new Color(1f, 0.25f, 0.25f, 0.5f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.25f), (0.25f), (0.5f), /*hidden argument*/NULL);
		Gizmos_set_color_mFD4A7935FF025F5922374A8DD797BA0558BF1AD2(L_0, NULL);
		// for (int x = 0; x < rowsColumns; x++)
		V_0 = 0;
		goto IL_0065;
	}

IL_0022:
	{
		// for (int z = 0; z < rowsColumns; z++)
		V_1 = 0;
		goto IL_0058;
	}

IL_0026:
	{
		// Vector3 pos = transform.TransformPoint(GridLocalCenterPosition(x, z));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = WaterGrid_GridLocalCenterPosition_mF5920EC06B8A683D2EB61D5F9DCAB2FD244D892A(__this, L_2, L_3, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_1, L_4, NULL);
		// Gizmos.DrawWireCube(pos, new Vector3(tileSize, 0f, tileSize));
		float L_6 = __this->___tileSize_12;
		float L_7 = __this->___tileSize_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_6, (0.0f), L_7, /*hidden argument*/NULL);
		Gizmos_DrawWireCube_m31971565E5002365FE94256FFE1DC5B070FDBBA7(L_5, L_8, NULL);
		// for (int z = 0; z < rowsColumns; z++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0058:
	{
		// for (int z = 0; z < rowsColumns; z++)
		int32_t L_10 = V_1;
		int32_t L_11 = __this->___rowsColumns_9;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0026;
		}
	}
	{
		// for (int x = 0; x < rowsColumns; x++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		// for (int x = 0; x < rowsColumns; x++)
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___rowsColumns_9;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0022;
		}
	}
	{
		// }
		return;
	}
}
// System.Void StylizedWater2.WaterGrid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterGrid__ctor_m47EA0279EAE28FCA3095BAE9271046F85BF56F00 (WaterGrid_tEA723899E69DB1B321650DD7FB81A2A5EC3D308F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m791FAAAE9C6541E788E1780357AC890DAE9859F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float scale = 500f;
		__this->___scale_7 = (500.0f);
		// public float vertexDistance = 2f;
		__this->___vertexDistance_8 = (2.0f);
		// public int rowsColumns = 4;
		__this->___rowsColumns_9 = 4;
		// public int m_rowsColumns = 4;
		__this->___m_rowsColumns_11 = 4;
		// private List<WaterObject> objects = new List<WaterObject>();
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_0 = (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320*)il2cpp_codegen_object_new(List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m791FAAAE9C6541E788E1780357AC890DAE9859F0(L_0, List_1__ctor_m791FAAAE9C6541E788E1780357AC890DAE9859F0_RuntimeMethod_var);
		__this->___objects_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objects_15), (void*)L_0);
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
// UnityEngine.Mesh StylizedWater2.WaterMesh::Rebuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* WaterMesh_Rebuild_m7725BC22E1B615D7E95074F22A79DF51067E9DD8 (WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (shape)
		int32_t L_0 = __this->___shape_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_001e;
	}

IL_0010:
	{
		// case Shape.Rectangle: return CreatePlane();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3;
		L_3 = WaterMesh_CreatePlane_m076401586E49CB56E64C8FD1F4092155B1114C1E(__this, NULL);
		return L_3;
	}

IL_0017:
	{
		// case Shape.Disk: return CreateCircle();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_4;
		L_4 = WaterMesh_CreateCircle_mE9BCDEDB0C9FF26EDC0472C218A27B1E23BD7159(__this, NULL);
		return L_4;
	}

IL_001e:
	{
		// return null;
		return (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)NULL;
	}
}
// UnityEngine.Mesh StylizedWater2.WaterMesh::Create(StylizedWater2.WaterMesh/Shape,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* WaterMesh_Create_m993599768DA7E90B2ECE651F361B26D9DEB9E159 (int32_t ___shape0, float ___size1, int32_t ___subdivisions2, float ___uvTiling3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WaterMesh waterMesh = new WaterMesh();
		WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB* L_0 = (WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB*)il2cpp_codegen_object_new(WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WaterMesh__ctor_m369AAEB20304898112BFE2E7DC0C6BE0ADA404D2(L_0, NULL);
		// waterMesh.shape = Shape.Rectangle;
		WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___shape_0 = 0;
		// waterMesh.size = size;
		WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB* L_2 = L_1;
		float L_3 = ___size1;
		NullCheck(L_2);
		L_2->___size_1 = L_3;
		// waterMesh.subdivisions = subdivisions;
		WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB* L_4 = L_2;
		int32_t L_5 = ___subdivisions2;
		NullCheck(L_4);
		L_4->___subdivisions_3 = L_5;
		// waterMesh.UVTiling = waterMesh.size;
		WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB* L_6 = L_4;
		WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB* L_7 = L_6;
		NullCheck(L_7);
		float L_8 = L_7->___size_1;
		NullCheck(L_7);
		L_7->___UVTiling_2 = L_8;
		// return waterMesh.Rebuild();
		NullCheck(L_6);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_9;
		L_9 = WaterMesh_Rebuild_m7725BC22E1B615D7E95074F22A79DF51067E9DD8(L_6, NULL);
		return L_9;
	}
}
// System.Int32 StylizedWater2.WaterMesh::GetPointIndex(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaterMesh_GetPointIndex_mB7EF3A4D99D0A021129D48354661AA16F1F37490 (WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB* __this, int32_t ___c0, int32_t ___x1, const RuntimeMethod* method) 
{
	{
		// if (c < 0) return 0;
		int32_t L_0 = ___c0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		// if (c < 0) return 0;
		return 0;
	}

IL_0006:
	{
		// x = x % ((c + 1) * 6);
		int32_t L_1 = ___x1;
		int32_t L_2 = ___c0;
		___x1 = ((int32_t)(L_1%((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_2, 1)), 6))));
		// return (3 * c * (c + 1) + x + 1);
		int32_t L_3 = ___c0;
		int32_t L_4 = ___c0;
		int32_t L_5 = ___x1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(3, L_3)), ((int32_t)il2cpp_codegen_add(L_4, 1)))), L_5)), 1));
	}
}
// UnityEngine.Mesh StylizedWater2.WaterMesh::CreateCircle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* WaterMesh_CreateCircle_mE9BCDEDB0C9FF26EDC0472C218A27B1E23BD7159 (WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3096FAD459C19E472D751308B7FF21992979506);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	float V_1 = 0.0f;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_2 = NULL;
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* V_3 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	{
		// Mesh m = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		V_0 = L_0;
		// m.name = "proceduralCircle";
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = V_0;
		NullCheck(L_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_1, _stringLiteralC3096FAD459C19E472D751308B7FF21992979506, NULL);
		// float distance = 1f / subdivisions;
		int32_t L_2 = __this->___subdivisions_3;
		V_1 = ((float)((1.0f)/((float)L_2)));
		// var vertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_3, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_2 = L_3;
		// var uvs = new List<Vector2>();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_4 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F(L_4, List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		V_3 = L_4;
		// vertices.Add(Vector3.zero); //center
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_5 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_5);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_5, L_6, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// var tris = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_7, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_4 = L_7;
		// float uvFactor = UVTiling / subdivisions;
		float L_8 = __this->___UVTiling_2;
		int32_t L_9 = __this->___subdivisions_3;
		// for (int loop = 0; loop < subdivisions; loop++)
		V_5 = 0;
		goto IL_012b;
	}

IL_0054:
	{
		// float angleStep = (Mathf.PI * 2f) / ((loop + 1) * 6);
		int32_t L_10 = V_5;
		V_6 = ((float)((6.28318548f)/((float)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_10, 1)), 6)))));
		// for (int point = 0; point < (loop + 1) * 6; ++point)
		V_7 = 0;
		goto IL_0118;
	}

IL_006b:
	{
		// Vector3 vPos = new Vector3(
		// Mathf.Sin(angleStep * point) ,
		// 0f,
		// Mathf.Cos(angleStep * point));
		float L_11 = V_6;
		int32_t L_12 = V_7;
		float L_13;
		L_13 = sinf(((float)il2cpp_codegen_multiply(L_11, ((float)L_12))));
		float L_14 = V_6;
		int32_t L_15 = V_7;
		float L_16;
		L_16 = cosf(((float)il2cpp_codegen_multiply(L_14, ((float)L_15))));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_8), L_13, (0.0f), L_16, NULL);
		// UnityEngine.Random.InitState(loop + point);
		int32_t L_17 = V_5;
		int32_t L_18 = V_7;
		Random_InitState_m734272C185A487994FC63FA9950BA74D573CDFF8(((int32_t)il2cpp_codegen_add(L_17, L_18)), NULL);
		// vPos.x += UnityEngine.Random.Range(-noise * 0.01f, noise * 0.01f);
		float* L_19 = (&(&V_8)->___x_2);
		float* L_20 = L_19;
		float L_21 = *((float*)L_20);
		float L_22 = __this->___noise_4;
		float L_23 = __this->___noise_4;
		float L_24;
		L_24 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((float)il2cpp_codegen_multiply(((-L_22)), (0.00999999978f))), ((float)il2cpp_codegen_multiply(L_23, (0.00999999978f))), NULL);
		*((float*)L_20) = (float)((float)il2cpp_codegen_add(L_21, L_24));
		// vPos.z -= UnityEngine.Random.Range(noise * 0.01f, -noise * 0.01f);
		float* L_25 = (&(&V_8)->___z_4);
		float* L_26 = L_25;
		float L_27 = *((float*)L_26);
		float L_28 = __this->___noise_4;
		float L_29 = __this->___noise_4;
		float L_30;
		L_30 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((float)il2cpp_codegen_multiply(L_28, (0.00999999978f))), ((float)il2cpp_codegen_multiply(((-L_29)), (0.00999999978f))), NULL);
		*((float*)L_26) = (float)((float)il2cpp_codegen_subtract(L_27, L_30));
		// vertices.Add(vPos * (size * 0.5f) * distance * (loop + 1));
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_31 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_8;
		float L_33 = __this->___size_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_32, ((float)il2cpp_codegen_multiply(L_33, (0.5f))), NULL);
		float L_35 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_34, L_35, NULL);
		int32_t L_37 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_36, ((float)((int32_t)il2cpp_codegen_add(L_37, 1))), NULL);
		NullCheck(L_31);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_31, L_38, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int point = 0; point < (loop + 1) * 6; ++point)
		int32_t L_39 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0118:
	{
		// for (int point = 0; point < (loop + 1) * 6; ++point)
		int32_t L_40 = V_7;
		int32_t L_41 = V_5;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_41, 1)), 6)))))
		{
			goto IL_006b;
		}
	}
	{
		// for (int loop = 0; loop < subdivisions; loop++)
		int32_t L_42 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_012b:
	{
		// for (int loop = 0; loop < subdivisions; loop++)
		int32_t L_43 = V_5;
		int32_t L_44 = __this->___subdivisions_3;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_0054;
		}
	}
	{
		// for (int i = 0; i < vertices.Count; i++)
		V_9 = 0;
		goto IL_0184;
	}

IL_013d:
	{
		// uvs.Add(new Vector2((vertices[i].x / size) * UVTiling,(vertices[i].z / size) * UVTiling));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_45 = V_3;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_46 = V_2;
		int32_t L_47 = V_9;
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_46, L_47, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		float L_49 = L_48.___x_2;
		float L_50 = __this->___size_1;
		float L_51 = __this->___UVTiling_2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_52 = V_2;
		int32_t L_53 = V_9;
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_52, L_53, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		float L_55 = L_54.___z_4;
		float L_56 = __this->___size_1;
		float L_57 = __this->___UVTiling_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_58), ((float)il2cpp_codegen_multiply(((float)(L_49/L_50)), L_51)), ((float)il2cpp_codegen_multiply(((float)(L_55/L_56)), L_57)), /*hidden argument*/NULL);
		NullCheck(L_45);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_45, L_58, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// for (int i = 0; i < vertices.Count; i++)
		int32_t L_59 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0184:
	{
		// for (int i = 0; i < vertices.Count; i++)
		int32_t L_60 = V_9;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_61 = V_2;
		NullCheck(L_61);
		int32_t L_62;
		L_62 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_61, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		if ((((int32_t)L_60) < ((int32_t)L_62)))
		{
			goto IL_013d;
		}
	}
	{
		// for (int circ = 0; circ < subdivisions; ++circ)
		V_10 = 0;
		goto IL_0274;
	}

IL_0196:
	{
		// for (int point = 0, other = 0; point < (circ + 1) * 6; ++point)
		V_11 = 0;
		// for (int point = 0, other = 0; point < (circ + 1) * 6; ++point)
		V_12 = 0;
		goto IL_0261;
	}

IL_01a1:
	{
		// if (point % (circ + 1) != 0)
		int32_t L_63 = V_11;
		int32_t L_64 = V_10;
		if (!((int32_t)(L_63%((int32_t)il2cpp_codegen_add(L_64, 1)))))
		{
			goto IL_0224;
		}
	}
	{
		// tris.Add(GetPointIndex(circ - 1, other + 1));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_65 = V_4;
		int32_t L_66 = V_10;
		int32_t L_67 = V_12;
		int32_t L_68;
		L_68 = WaterMesh_GetPointIndex_mB7EF3A4D99D0A021129D48354661AA16F1F37490(__this, ((int32_t)il2cpp_codegen_subtract(L_66, 1)), ((int32_t)il2cpp_codegen_add(L_67, 1)), NULL);
		NullCheck(L_65);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_65, L_68, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(GetPointIndex(circ - 1, other));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_69 = V_4;
		int32_t L_70 = V_10;
		int32_t L_71 = V_12;
		int32_t L_72;
		L_72 = WaterMesh_GetPointIndex_mB7EF3A4D99D0A021129D48354661AA16F1F37490(__this, ((int32_t)il2cpp_codegen_subtract(L_70, 1)), L_71, NULL);
		NullCheck(L_69);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_69, L_72, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(GetPointIndex(circ, point));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_73 = V_4;
		int32_t L_74 = V_10;
		int32_t L_75 = V_11;
		int32_t L_76;
		L_76 = WaterMesh_GetPointIndex_mB7EF3A4D99D0A021129D48354661AA16F1F37490(__this, L_74, L_75, NULL);
		NullCheck(L_73);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_73, L_76, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(GetPointIndex(circ, point));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_77 = V_4;
		int32_t L_78 = V_10;
		int32_t L_79 = V_11;
		int32_t L_80;
		L_80 = WaterMesh_GetPointIndex_mB7EF3A4D99D0A021129D48354661AA16F1F37490(__this, L_78, L_79, NULL);
		NullCheck(L_77);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_77, L_80, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(GetPointIndex(circ, point + 1));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_81 = V_4;
		int32_t L_82 = V_10;
		int32_t L_83 = V_11;
		int32_t L_84;
		L_84 = WaterMesh_GetPointIndex_mB7EF3A4D99D0A021129D48354661AA16F1F37490(__this, L_82, ((int32_t)il2cpp_codegen_add(L_83, 1)), NULL);
		NullCheck(L_81);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_81, L_84, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(GetPointIndex(circ - 1, other + 1));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_85 = V_4;
		int32_t L_86 = V_10;
		int32_t L_87 = V_12;
		int32_t L_88;
		L_88 = WaterMesh_GetPointIndex_mB7EF3A4D99D0A021129D48354661AA16F1F37490(__this, ((int32_t)il2cpp_codegen_subtract(L_86, 1)), ((int32_t)il2cpp_codegen_add(L_87, 1)), NULL);
		NullCheck(L_85);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_85, L_88, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// ++other;
		int32_t L_89 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_89, 1));
		goto IL_025b;
	}

IL_0224:
	{
		// tris.Add(GetPointIndex(circ, point));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_90 = V_4;
		int32_t L_91 = V_10;
		int32_t L_92 = V_11;
		int32_t L_93;
		L_93 = WaterMesh_GetPointIndex_mB7EF3A4D99D0A021129D48354661AA16F1F37490(__this, L_91, L_92, NULL);
		NullCheck(L_90);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_90, L_93, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(GetPointIndex(circ, point + 1));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_94 = V_4;
		int32_t L_95 = V_10;
		int32_t L_96 = V_11;
		int32_t L_97;
		L_97 = WaterMesh_GetPointIndex_mB7EF3A4D99D0A021129D48354661AA16F1F37490(__this, L_95, ((int32_t)il2cpp_codegen_add(L_96, 1)), NULL);
		NullCheck(L_94);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_94, L_97, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// tris.Add(GetPointIndex(circ - 1, other));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_98 = V_4;
		int32_t L_99 = V_10;
		int32_t L_100 = V_12;
		int32_t L_101;
		L_101 = WaterMesh_GetPointIndex_mB7EF3A4D99D0A021129D48354661AA16F1F37490(__this, ((int32_t)il2cpp_codegen_subtract(L_99, 1)), L_100, NULL);
		NullCheck(L_98);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_98, L_101, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_025b:
	{
		// for (int point = 0, other = 0; point < (circ + 1) * 6; ++point)
		int32_t L_102 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_102, 1));
	}

IL_0261:
	{
		// for (int point = 0, other = 0; point < (circ + 1) * 6; ++point)
		int32_t L_103 = V_11;
		int32_t L_104 = V_10;
		if ((((int32_t)L_103) < ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_104, 1)), 6)))))
		{
			goto IL_01a1;
		}
	}
	{
		// for (int circ = 0; circ < subdivisions; ++circ)
		int32_t L_105 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_0274:
	{
		// for (int circ = 0; circ < subdivisions; ++circ)
		int32_t L_106 = V_10;
		int32_t L_107 = __this->___subdivisions_3;
		if ((((int32_t)L_106) < ((int32_t)L_107)))
		{
			goto IL_0196;
		}
	}
	{
		// m.SetVertices(vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_108 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_109 = V_2;
		NullCheck(L_108);
		Mesh_SetVertices_mCE01139EEEC3D10B4A6CEA1749FD84DABC53599E(L_108, L_109, NULL);
		// m.SetTriangles(tris, 0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_110 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_111 = V_4;
		NullCheck(L_110);
		Mesh_SetTriangles_mD495DA0B00DB0E60A2B7B500D644F4470C1D61DB(L_110, L_111, 0, NULL);
		// m.RecalculateNormals();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_112 = V_0;
		NullCheck(L_112);
		Mesh_RecalculateNormals_m3AA2788914611444E030CA310E03E3CFE683902B(L_112, NULL);
		// m.SetUVs(0, uvs);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_113 = V_0;
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_114 = V_3;
		NullCheck(L_113);
		Mesh_SetUVs_m5A7A6EC14A621579B7138F2EF9BECA60E880A8D7(L_113, 0, L_114, NULL);
		// m.colors = new Color[vertices.Count];
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_115 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_116 = V_2;
		NullCheck(L_116);
		int32_t L_117;
		L_117 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_116, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_118 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)L_117);
		NullCheck(L_115);
		Mesh_set_colors_m5558BAAA60676427B7954F1694A1765B000EB0FE(L_115, L_118, NULL);
		// return m;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_119 = V_0;
		return L_119;
	}
}
// UnityEngine.Mesh StylizedWater2.WaterMesh::CreatePlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* WaterMesh_CreatePlane_m076401586E49CB56E64C8FD1F4092155B1114C1E (WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA01E02B69F26BD6D8B919E06E3FE6737ABE9A966);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_4 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_7 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_8 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	{
		// Mesh m = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		V_0 = L_0;
		// m.name = "proceduralPlane";
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = V_0;
		NullCheck(L_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_1, _stringLiteralA01E02B69F26BD6D8B919E06E3FE6737ABE9A966, NULL);
		// size = Mathf.Max(1f, size);
		float L_2 = __this->___size_1;
		float L_3;
		L_3 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((1.0f), L_2, NULL);
		__this->___size_1 = L_3;
		// int xCount = subdivisions + 1;
		int32_t L_4 = __this->___subdivisions_3;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// int zCount = subdivisions + 1;
		int32_t L_5 = __this->___subdivisions_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		// int numTriangles = subdivisions * subdivisions * 6;
		int32_t L_6 = __this->___subdivisions_3;
		int32_t L_7 = __this->___subdivisions_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_6, L_7)), 6));
		// int numVertices = xCount * zCount;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		// Vector3[] vertices = new Vector3[numVertices];
		int32_t L_10 = ((int32_t)il2cpp_codegen_multiply(L_8, L_9));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_4 = L_11;
		// Vector2[] uvs = new Vector2[numVertices];
		int32_t L_12 = L_10;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_13 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)L_12);
		V_5 = L_13;
		// int[] triangles = new int[numTriangles];
		int32_t L_14 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_14);
		V_6 = L_15;
		// Vector4[] tangents = new Vector4[numVertices];
		int32_t L_16 = L_12;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_17 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_7 = L_17;
		// Vector3[] normals = new Vector3[numVertices];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_8 = L_18;
		// Vector4 tangent = new Vector4(1f, 0f, 0f, -1f);
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&V_9), (1.0f), (0.0f), (0.0f), (-1.0f), NULL);
		// int index = 0;
		V_10 = 0;
		// float uvFactorX = UVTiling / subdivisions;
		float L_19 = __this->___UVTiling_2;
		int32_t L_20 = __this->___subdivisions_3;
		V_11 = ((float)(L_19/((float)L_20)));
		// float uvFactorY = UVTiling / subdivisions;
		float L_21 = __this->___UVTiling_2;
		int32_t L_22 = __this->___subdivisions_3;
		V_12 = ((float)(L_21/((float)L_22)));
		// float scaleX = size / subdivisions;
		float L_23 = __this->___size_1;
		int32_t L_24 = __this->___subdivisions_3;
		V_13 = ((float)(L_23/((float)L_24)));
		// float scaleY = size / subdivisions;
		float L_25 = __this->___size_1;
		int32_t L_26 = __this->___subdivisions_3;
		V_14 = ((float)(L_25/((float)L_26)));
		// for (int z = 0; z < zCount; z++)
		V_15 = 0;
		goto IL_01cf;
	}

IL_00d9:
	{
		// for (int x = 0; x < xCount; x++)
		V_16 = 0;
		goto IL_01c1;
	}

IL_00e1:
	{
		// vertices[index] = new Vector3(x * scaleX - (size * 0.5f), 0f, z * scaleY - (size * 0.5f));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = V_4;
		int32_t L_28 = V_10;
		int32_t L_29 = V_16;
		float L_30 = V_13;
		float L_31 = __this->___size_1;
		int32_t L_32 = V_15;
		float L_33 = V_14;
		float L_34 = __this->___size_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)L_29), L_30)), ((float)il2cpp_codegen_multiply(L_31, (0.5f))))), (0.0f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)L_32), L_33)), ((float)il2cpp_codegen_multiply(L_34, (0.5f))))), /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_35);
		// UnityEngine.Random.InitState(z + x);
		int32_t L_36 = V_15;
		int32_t L_37 = V_16;
		Random_InitState_m734272C185A487994FC63FA9950BA74D573CDFF8(((int32_t)il2cpp_codegen_add(L_36, L_37)), NULL);
		// vertices[index].x += UnityEngine.Random.Range(-noise, noise);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_38 = V_4;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		float* L_40 = (&((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___x_2);
		float* L_41 = L_40;
		float L_42 = *((float*)L_41);
		float L_43 = __this->___noise_4;
		float L_44 = __this->___noise_4;
		float L_45;
		L_45 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((-L_43)), L_44, NULL);
		*((float*)L_41) = (float)((float)il2cpp_codegen_add(L_42, L_45));
		// vertices[index].z -= UnityEngine.Random.Range(noise, -noise);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_46 = V_4;
		int32_t L_47 = V_10;
		NullCheck(L_46);
		float* L_48 = (&((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___z_4);
		float* L_49 = L_48;
		float L_50 = *((float*)L_49);
		float L_51 = __this->___noise_4;
		float L_52 = __this->___noise_4;
		float L_53;
		L_53 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(L_51, ((-L_52)), NULL);
		*((float*)L_49) = (float)((float)il2cpp_codegen_subtract(L_50, L_53));
		// tangents[index] = tangent;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_54 = V_7;
		int32_t L_55 = V_10;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_56 = V_9;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_56);
		// uvs[index] = new Vector2(vertices[index].x * uvFactorX, vertices[index].z * uvFactorY);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_57 = V_5;
		int32_t L_58 = V_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_59 = V_4;
		int32_t L_60 = V_10;
		NullCheck(L_59);
		float L_61 = ((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_60)))->___x_2;
		float L_62 = V_11;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_63 = V_4;
		int32_t L_64 = V_10;
		NullCheck(L_63);
		float L_65 = ((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)))->___z_4;
		float L_66 = V_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_67), ((float)il2cpp_codegen_multiply(L_61, L_62)), ((float)il2cpp_codegen_multiply(L_65, L_66)), /*hidden argument*/NULL);
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_67);
		// normals[index] = Vector3.up;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_68 = V_8;
		int32_t L_69 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_70);
		// index++;
		int32_t L_71 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		// for (int x = 0; x < xCount; x++)
		int32_t L_72 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_01c1:
	{
		// for (int x = 0; x < xCount; x++)
		int32_t L_73 = V_16;
		int32_t L_74 = V_1;
		if ((((int32_t)L_73) < ((int32_t)L_74)))
		{
			goto IL_00e1;
		}
	}
	{
		// for (int z = 0; z < zCount; z++)
		int32_t L_75 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01cf:
	{
		// for (int z = 0; z < zCount; z++)
		int32_t L_76 = V_15;
		int32_t L_77 = V_2;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_00d9;
		}
	}
	{
		// index = 0;
		V_10 = 0;
		// for (int z = 0; z < subdivisions; z++)
		V_17 = 0;
		goto IL_025e;
	}

IL_01df:
	{
		// for (int x = 0; x < subdivisions; x++)
		V_18 = 0;
		goto IL_024e;
	}

IL_01e4:
	{
		// triangles[index] = (z * xCount) + x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = V_6;
		int32_t L_79 = V_10;
		int32_t L_80 = V_17;
		int32_t L_81 = V_1;
		int32_t L_82 = V_18;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_80, L_81)), L_82)));
		// triangles[index + 1] = ((z + 1) * xCount) + x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = V_6;
		int32_t L_84 = V_10;
		int32_t L_85 = V_17;
		int32_t L_86 = V_1;
		int32_t L_87 = V_18;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_84, 1))), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_85, 1)), L_86)), L_87)));
		// triangles[index + 2] = (z * xCount) + x + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = V_6;
		int32_t L_89 = V_10;
		int32_t L_90 = V_17;
		int32_t L_91 = V_1;
		int32_t L_92 = V_18;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_89, 2))), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_90, L_91)), L_92)), 1)));
		// triangles[index + 3] = ((z + 1) * xCount) + x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = V_6;
		int32_t L_94 = V_10;
		int32_t L_95 = V_17;
		int32_t L_96 = V_1;
		int32_t L_97 = V_18;
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_94, 3))), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_95, 1)), L_96)), L_97)));
		// triangles[index + 4] = ((z + 1) * xCount) + x + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_6;
		int32_t L_99 = V_10;
		int32_t L_100 = V_17;
		int32_t L_101 = V_1;
		int32_t L_102 = V_18;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_99, 4))), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_100, 1)), L_101)), L_102)), 1)));
		// triangles[index + 5] = (z * xCount) + x + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = V_6;
		int32_t L_104 = V_10;
		int32_t L_105 = V_17;
		int32_t L_106 = V_1;
		int32_t L_107 = V_18;
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_104, 5))), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_105, L_106)), L_107)), 1)));
		// index += 6;
		int32_t L_108 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_108, 6));
		// for (int x = 0; x < subdivisions; x++)
		int32_t L_109 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_109, 1));
	}

IL_024e:
	{
		// for (int x = 0; x < subdivisions; x++)
		int32_t L_110 = V_18;
		int32_t L_111 = __this->___subdivisions_3;
		if ((((int32_t)L_110) < ((int32_t)L_111)))
		{
			goto IL_01e4;
		}
	}
	{
		// for (int z = 0; z < subdivisions; z++)
		int32_t L_112 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_112, 1));
	}

IL_025e:
	{
		// for (int z = 0; z < subdivisions; z++)
		int32_t L_113 = V_17;
		int32_t L_114 = __this->___subdivisions_3;
		if ((((int32_t)L_113) < ((int32_t)L_114)))
		{
			goto IL_01df;
		}
	}
	{
		// m.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_115 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_116 = V_4;
		NullCheck(L_115);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_115, L_116, NULL);
		// m.triangles = triangles;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_117 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = V_6;
		NullCheck(L_117);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_117, L_118, NULL);
		// m.uv = uvs;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_119 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_120 = V_5;
		NullCheck(L_119);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_119, L_120, NULL);
		// m.tangents = tangents;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_121 = V_0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_122 = V_7;
		NullCheck(L_121);
		Mesh_set_tangents_mF547B7E4F9C70FB7CD6168139180A70AD306169B(L_121, L_122, NULL);
		// m.normals = normals;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_123 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_124 = V_8;
		NullCheck(L_123);
		Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B(L_123, L_124, NULL);
		// m.colors = new Color[vertices.Length];
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_125 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_126 = V_4;
		NullCheck(L_126);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_127 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_126)->max_length)));
		NullCheck(L_125);
		Mesh_set_colors_m5558BAAA60676427B7954F1694A1765B000EB0FE(L_125, L_127, NULL);
		// return m;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_128 = V_0;
		return L_128;
	}
}
// System.Void StylizedWater2.WaterMesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterMesh__ctor_m369AAEB20304898112BFE2E7DC0C6BE0ADA404D2 (WaterMesh_t5B2A7E9EA948593E5C735DAB04D959970208BEFB* __this, const RuntimeMethod* method) 
{
	{
		// public float size = 100f;
		__this->___size_1 = (100.0f);
		// public float UVTiling = 1f;
		__this->___UVTiling_2 = (1.0f);
		// public int subdivisions = 32;
		__this->___subdivisions_3 = ((int32_t)32);
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
// UnityEngine.MaterialPropertyBlock StylizedWater2.WaterObject::get_props()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* WaterObject_get_props_m658216AA9BF257A26FA8772ACA11119EAFA87587 (WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_props == null)
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_0 = __this->____props_8;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// _props = new MaterialPropertyBlock();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_1 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_1, NULL);
		__this->____props_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____props_8), (void*)L_1);
		// meshRenderer.GetPropertyBlock(_props);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = __this->___meshRenderer_7;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_3 = __this->____props_8;
		NullCheck(L_2);
		Renderer_GetPropertyBlock_mD062F90343D70151CA060AE7EBEF2E85146A9FBA(L_2, L_3, NULL);
	}

IL_0024:
	{
		// return _props;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_4 = __this->____props_8;
		return L_4;
	}
}
// System.Void StylizedWater2.WaterObject::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterObject_OnEnable_m81BFA17173342B4BFE3BE290995C5156CD007E74 (WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36557C3431461ABB7FE482D7131A83F4DEDE4021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instances.Add(this);
		il2cpp_codegen_runtime_class_init_inline(WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_il2cpp_TypeInfo_var);
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_0 = ((WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_StaticFields*)il2cpp_codegen_static_fields_for(WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_il2cpp_TypeInfo_var))->___Instances_4;
		NullCheck(L_0);
		List_1_Add_m36557C3431461ABB7FE482D7131A83F4DEDE4021_inline(L_0, __this, List_1_Add_m36557C3431461ABB7FE482D7131A83F4DEDE4021_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void StylizedWater2.WaterObject::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterObject_OnDisable_m371AAD320E05E57BE328F654D0ABDD3477869540 (WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m990D9822E02F48849D7C41180BF383836D89F379_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instances.Remove(this);
		il2cpp_codegen_runtime_class_init_inline(WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_il2cpp_TypeInfo_var);
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_0 = ((WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_StaticFields*)il2cpp_codegen_static_fields_for(WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_il2cpp_TypeInfo_var))->___Instances_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = List_1_Remove_m990D9822E02F48849D7C41180BF383836D89F379(L_0, __this, List_1_Remove_m990D9822E02F48849D7C41180BF383836D89F379_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void StylizedWater2.WaterObject::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterObject_OnValidate_m35DF7883AA990615C7F05C210A98D36D2358C74F (WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!meshRenderer) meshRenderer = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___meshRenderer_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (!meshRenderer) meshRenderer = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2;
		L_2 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->___meshRenderer_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshRenderer_7), (void*)L_2);
	}

IL_0019:
	{
		// if (!meshFilter) meshFilter = GetComponent<MeshFilter>();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_3 = __this->___meshFilter_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		// if (!meshFilter) meshFilter = GetComponent<MeshFilter>();
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_5;
		L_5 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(__this, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		__this->___meshFilter_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meshFilter_6), (void*)L_5);
	}

IL_0032:
	{
		// if (meshRenderer) material = meshRenderer.sharedMaterial;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_6 = __this->___meshRenderer_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		// if (meshRenderer) material = meshRenderer.sharedMaterial;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_8 = __this->___meshRenderer_7;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		__this->___material_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___material_5), (void*)L_9);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void StylizedWater2.WaterObject::ApplyInstancedProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterObject_ApplyInstancedProperties_mF1CF73B4DDBD8DA559F3E979A123348296D312B6 (WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* __this, const RuntimeMethod* method) 
{
	{
		// if(props != null) meshRenderer.SetPropertyBlock(props);
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_0;
		L_0 = WaterObject_get_props_m658216AA9BF257A26FA8772ACA11119EAFA87587(__this, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// if(props != null) meshRenderer.SetPropertyBlock(props);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1 = __this->___meshRenderer_7;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_2;
		L_2 = WaterObject_get_props_m658216AA9BF257A26FA8772ACA11119EAFA87587(__this, NULL);
		NullCheck(L_1);
		Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_1, L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Boolean StylizedWater2.WaterObject::CanTouch(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaterObject_CanTouch_mFA2B41C9B5614B05C3D6B6EEC8ADBAD0FE36BC6C (WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Buoyancy.CanTouchWater(position, this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1;
		L_1 = float3_op_Implicit_mEFC9D4DC1F88125A32EAD98DDD519DDB1F146292(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Buoyancy_t1E6E1823D837ECC1F1BF1C938FCE3F5D4BA7147E_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Buoyancy_CanTouchWater_m083DDCE0ACC2AE13C4BACDEA6B6E7AAD6F5357EB(L_1, __this, NULL);
		return L_2;
	}
}
// System.Void StylizedWater2.WaterObject::AssignMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterObject_AssignMesh_mDD4C5E6C019DE3C1C7E96449F9FF34BC978D9FEF (WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (meshFilter) meshFilter.sharedMesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_0 = __this->___meshFilter_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (meshFilter) meshFilter.sharedMesh = mesh;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_2 = __this->___meshFilter_6;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_3 = ___mesh0;
		NullCheck(L_2);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_2, L_3, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void StylizedWater2.WaterObject::AssignMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterObject_AssignMaterial_m6CAC3E30C0520D8439A652CBE3ADE063AAD1F047 (WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (meshRenderer) meshRenderer.sharedMaterial = material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___meshRenderer_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// if (meshRenderer) meshRenderer.sharedMaterial = material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = __this->___meshRenderer_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = ___material0;
		NullCheck(L_2);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_2, L_3, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// StylizedWater2.WaterObject StylizedWater2.WaterObject::New(UnityEngine.Material,UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* WaterObject_New_m1F321C2E414E813322F91F1B3191A848A5201A3D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___waterMaterial0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisWaterObject_tB3C4631FB550815180854E156E4569046813FBF7_m92A900BFF143BA343AA4003EBF0B45586164A3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8365E51B06F6F88936033E93B81C94A49DAA0CCD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject go = new GameObject("Water Object", typeof(MeshFilter), typeof(MeshRenderer), typeof(WaterObject));
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = L_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_6);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0(L_10, _stringLiteral8365E51B06F6F88936033E93B81C94A49DAA0CCD, L_7, NULL);
		// WaterObject waterObject = go.GetComponent<WaterObject>();
		NullCheck(L_10);
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_11;
		L_11 = GameObject_GetComponent_TisWaterObject_tB3C4631FB550815180854E156E4569046813FBF7_m92A900BFF143BA343AA4003EBF0B45586164A3EB(L_10, GameObject_GetComponent_TisWaterObject_tB3C4631FB550815180854E156E4569046813FBF7_m92A900BFF143BA343AA4003EBF0B45586164A3EB_RuntimeMethod_var);
		// waterObject.meshRenderer = waterObject.gameObject.GetComponent<MeshRenderer>();
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_12 = L_11;
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_13 = L_12;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		NullCheck(L_14);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_15;
		L_15 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_14, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		NullCheck(L_13);
		L_13->___meshRenderer_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___meshRenderer_7), (void*)L_15);
		// waterObject.meshFilter = waterObject.gameObject.GetComponent<MeshFilter>();
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_16 = L_12;
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_17 = L_16;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		NullCheck(L_18);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_19;
		L_19 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_18, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		NullCheck(L_17);
		L_17->___meshFilter_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___meshFilter_6), (void*)L_19);
		// waterObject.meshFilter.sharedMesh = mesh;
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_20 = L_16;
		NullCheck(L_20);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_21 = L_20->___meshFilter_6;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_22 = ___mesh1;
		NullCheck(L_21);
		MeshFilter_set_sharedMesh_m946F7E3F583761982642BDA4753784AF1DF6E16F(L_21, L_22, NULL);
		// waterObject.meshRenderer.sharedMaterial = waterMaterial;
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_23 = L_20;
		NullCheck(L_23);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_24 = L_23->___meshRenderer_7;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = ___waterMaterial0;
		NullCheck(L_24);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_24, L_25, NULL);
		// waterObject.material = waterMaterial;
		WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* L_26 = L_23;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = ___waterMaterial0;
		NullCheck(L_26);
		L_26->___material_5 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___material_5), (void*)L_27);
		// return waterObject;
		return L_26;
	}
}
// System.Void StylizedWater2.WaterObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterObject__ctor_m52E6B516FBD1FBF4ECEB6773461C763C61CA7075 (WaterObject_tB3C4631FB550815180854E156E4569046813FBF7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void StylizedWater2.WaterObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterObject__cctor_m3F4591677CC2EEDEDC9CC6B31281E14CC76E8DFB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m791FAAAE9C6541E788E1780357AC890DAE9859F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly List<WaterObject> Instances = new List<WaterObject>();
		List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320* L_0 = (List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320*)il2cpp_codegen_object_new(List_1_t7358BC6770EC5A463C80908F85FDBAE36D48B320_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m791FAAAE9C6541E788E1780357AC890DAE9859F0(L_0, List_1__ctor_m791FAAAE9C6541E788E1780357AC890DAE9859F0_RuntimeMethod_var);
		((WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_StaticFields*)il2cpp_codegen_static_fields_for(WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_il2cpp_TypeInfo_var))->___Instances_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_StaticFields*)il2cpp_codegen_static_fields_for(WaterObject_tB3C4631FB550815180854E156E4569046813FBF7_il2cpp_TypeInfo_var))->___Instances_4), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mB5F64A20288F500F84BB056EF63B37146FBBA96C_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___x0, float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA ___y1, const RuntimeMethod* method) 
{
	{
		// public static float dot(float2 x, float2 y) { return x.x * y.x + x.y * y.y; }
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_0 = ___x0;
		float L_1 = L_0.___x_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2 = ___y1;
		float L_3 = L_2.___x_0;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_4 = ___x0;
		float L_5 = L_4.___y_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_6 = ___y1;
		float L_7 = L_6.___y_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mAE7770D5D8ABCDC54704D1A1CE0D484136C5586C_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___x0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___y1, const RuntimeMethod* method) 
{
	{
		// public static float dot(float4 x, float4 y) { return x.x * y.x + x.y * y.y + x.z * y.z + x.w * y.w; }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___x0;
		float L_1 = L_0.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___y1;
		float L_3 = L_2.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___x0;
		float L_5 = L_4.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___y1;
		float L_7 = L_6.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = ___x0;
		float L_9 = L_8.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___y1;
		float L_11 = L_10.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12 = ___x0;
		float L_13 = L_12.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14 = ___y1;
		float L_15 = L_14.___w_3;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_sin_m09BCE312DBA664A5CE3EDE6D10F874859F6885F0_inline (float ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float sin(float x) { return (float)System.Math.Sin((float)x); }
		float L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = sin(((double)((float)L_0)));
		return ((float)L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_cos_mA9002EFEE2A017D04CB6231763FA2CB64A2BE3F1_inline (float ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float cos(float x) { return (float)System.Math.Cos(x); }
		float L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = cos(((double)L_0));
		return ((float)L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_mFA6F3CE69E7BCB9270744513E7E54447C6DBB164_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___lhs0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static float4 operator * (float4 lhs, float4 rhs) { return new float4 (lhs.x * rhs.x, lhs.y * rhs.y, lhs.z * rhs.z, lhs.w * rhs.w); }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = ___lhs0;
		float L_9 = L_8.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12 = ___lhs0;
		float L_13 = L_12.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14 = ___rhs1;
		float L_15 = L_14.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		memset((&L_16), 0, sizeof(L_16));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_16), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)), /*hidden argument*/NULL);
		return L_16;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		// this.z = z;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		// this.w = w;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_m5CD28D712CD6F2649842C5A65BD6443582952310_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___lhs0, float ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static float4 operator * (float4 lhs, float rhs) { return new float4 (lhs.x * rhs, lhs.y * rhs, lhs.z * rhs, lhs.w * rhs); }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		float L_2 = ___rhs1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = ___lhs0;
		float L_4 = L_3.___y_1;
		float L_5 = ___rhs1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___lhs0;
		float L_7 = L_6.___z_2;
		float L_8 = ___rhs1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_9 = ___lhs0;
		float L_10 = L_9.___w_3;
		float L_11 = ___rhs1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float4_get_xy_m26BE8952E15131592B83837998D1EDC33FA9E6DF_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) 
{
	{
		// get { return new float2(x, y); }
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2;
		memset((&L_2), 0, sizeof(L_2));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA float4_get_zw_mE9148903506B6AC51F8BA30DBDE2CD34C67107BB_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, const RuntimeMethod* method) 
{
	{
		// get { return new float2(z, w); }
		float L_0 = __this->___z_2;
		float L_1 = __this->___w_3;
		float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA L_2;
		memset((&L_2), 0, sizeof(L_2));
		float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_m4322D91DC960C16DFB4B645FF997F6A57821E41D_inline (float ___lhs0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static float4 operator * (float lhs, float4 rhs) { return new float4 (lhs * rhs.x, lhs * rhs.y, lhs * rhs.z, lhs * rhs.w); }
		float L_0 = ___lhs0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_1 = ___rhs1;
		float L_2 = L_1.___x_0;
		float L_3 = ___lhs0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___rhs1;
		float L_5 = L_4.___y_1;
		float L_6 = ___lhs0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_7 = ___rhs1;
		float L_8 = L_7.___z_2;
		float L_9 = ___lhs0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___rhs1;
		float L_11 = L_10.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_12), ((float)il2cpp_codegen_multiply(L_0, L_2)), ((float)il2cpp_codegen_multiply(L_3, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_8)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		// this.z = z;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_normalize_m826725DC58F0CE455E3DEB3BD4808C13CBC81E25_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___x0, const RuntimeMethod* method) 
{
	{
		// public static float3 normalize(float3 x) { return rsqrt(dot(x, x)) * x; }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___x0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___x0;
		float L_2;
		L_2 = math_dot_mFC6E6AC5C12A0802A91EB7F9A897802DFF03C44D_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = math_rsqrt_mB695A0575E7C8F937B0E12804508B0F489F55997_inline(L_2, NULL);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___x0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_5;
		L_5 = float3_op_Multiply_mB08DA9B217A0DA39BABCE64FFE69BEA67D37D04F_inline(L_3, L_4, NULL);
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_SetRenderer_m486F07D0F0D14B3F112CB6AFF01B12BE187AE255_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// m_RendererIndex = index;
		int32_t L_0 = ___index0;
		__this->___m_RendererIndex_13 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniversalRendererData_get_shadowTransparentReceive_m59EBF1D691FF516DACB095A06D8E0311028D77BF_inline (UniversalRendererData_t57D400CEB38765F55EB74FDBD786B9A73C293CA6* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ShadowTransparentReceive;
		bool L_0 = __this->___m_ShadowTransparentReceive_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniversalAdditionalCameraData_get_renderType_m329B2A06C25793DF3BBBE89B3F23154EA2380265_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, const RuntimeMethod* method) 
{
	{
		// get => m_CameraType;
		int32_t L_0 = __this->___m_CameraType_11;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float UniversalRenderPipelineAsset_get_renderScale_m742E4D97CEF504F30F963E9500AAF070C71EDB3C_inline (UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_RenderScale; }
		float L_0 = __this->___m_RenderScale_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniversalAdditionalCameraData_set_renderShadows_m435F35FAAF4700DC51E6A806D2BEF8A01A3A010B_inline (UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RenderShadows = value;
		bool L_0 = ___value0;
		__this->___m_RenderShadows_8 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m94A09872C449C26863FF10D0FDF87842D91BECD6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Scale_mE4063F0349E8B2F3EC8098597D356ACCA54C4514_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001d:
	{
		float L_3 = __this->___x_1;
		V_2 = L_3;
		goto IL_004c;
	}

IL_0026:
	{
		float L_4 = __this->___y_2;
		V_2 = L_4;
		goto IL_004c;
	}

IL_002f:
	{
		float L_5 = __this->___z_3;
		V_2 = L_5;
		goto IL_004c;
	}

IL_0038:
	{
		float L_6 = __this->___w_4;
		V_2 = L_6;
		goto IL_004c;
	}

IL_0041:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB23C3717573626FB4C3C7DF5C19EDE7689837214)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_RuntimeMethod_var)));
	}

IL_004c:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_mD086E41305DD8350180AD677833A22733B4789A9_inline (float ___f0, const RuntimeMethod* method) 
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
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) 
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_8);
		return;
	}

IL_0034:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___item0;
		((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float2__ctor_m3D598E2C2D173DE852F3AB157502968261383C97_inline (float2_t24AA5C0F612B0672315EDAFEC9D9E7F1C4A5B0BA* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		// }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_dot_mFC6E6AC5C12A0802A91EB7F9A897802DFF03C44D_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___x0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___y1, const RuntimeMethod* method) 
{
	{
		// public static float dot(float3 x, float3 y) { return x.x * y.x + x.y * y.y + x.z * y.z; }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___x0;
		float L_1 = L_0.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___y1;
		float L_3 = L_2.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___x0;
		float L_5 = L_4.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___y1;
		float L_7 = L_6.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8 = ___x0;
		float L_9 = L_8.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = ___y1;
		float L_11 = L_10.___z_2;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_rsqrt_mB695A0575E7C8F937B0E12804508B0F489F55997_inline (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float rsqrt(float x) { return 1.0f / sqrt(x); }
		float L_0 = ___x0;
		float L_1;
		L_1 = math_sqrt_mD0D6FA27E6D4959A0D4A823FFD3A9DA396542875_inline(L_0, NULL);
		return ((float)((1.0f)/L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_mB08DA9B217A0DA39BABCE64FFE69BEA67D37D04F_inline (float ___lhs0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static float3 operator * (float lhs, float3 rhs) { return new float3 (lhs * rhs.x, lhs * rhs.y, lhs * rhs.z); }
		float L_0 = ___lhs0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_1 = ___rhs1;
		float L_2 = L_1.___x_0;
		float L_3 = ___lhs0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___rhs1;
		float L_5 = L_4.___y_1;
		float L_6 = ___lhs0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7 = ___rhs1;
		float L_8 = L_7.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_9;
		memset((&L_9), 0, sizeof(L_9));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_9), ((float)il2cpp_codegen_multiply(L_0, L_2)), ((float)il2cpp_codegen_multiply(L_3, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_8)), /*hidden argument*/NULL);
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_sqrt_mD0D6FA27E6D4959A0D4A823FFD3A9DA396542875_inline (float ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float sqrt(float x) { return (float)System.Math.Sqrt((float)x); }
		float L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = sqrt(((double)((float)L_0)));
		return ((float)L_1);
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
