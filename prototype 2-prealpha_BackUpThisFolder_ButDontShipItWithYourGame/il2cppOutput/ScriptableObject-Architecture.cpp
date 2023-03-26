#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// ScriptableObjectArchitecture.BaseGameEventListener`2<ScriptableObjectArchitecture.GameEventBase,UnityEngine.Events.UnityEvent>
struct BaseGameEventListener_2_tFD82FAA680E6622647BA3039674EEBB5BD2AD5DA;
// ScriptableObjectArchitecture.BaseGameEventListener`2<System.Object,System.Object>
struct BaseGameEventListener_2_tE6AF6F0D1CD4A9A5A539720679462A7B3AA1355D;
// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.AudioClip,ScriptableObjectArchitecture.AudioClipGameEvent,ScriptableObjectArchitecture.AudioClipUnityEvent>
struct BaseGameEventListener_3_tAE202232436DF002453AF5D65801683A3B53B843;
// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Boolean,ScriptableObjectArchitecture.BoolGameEvent,ScriptableObjectArchitecture.BoolUnityEvent>
struct BaseGameEventListener_3_tFC494D4840A76E0005B926213C8A246124A7BAD9;
// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Byte,ScriptableObjectArchitecture.ByteGameEvent,ScriptableObjectArchitecture.ByteUnityEvent>
struct BaseGameEventListener_3_t2B25A20D623C929B0B26457C230E4667F1AE9735;
// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Char,ScriptableObjectArchitecture.CharGameEvent,ScriptableObjectArchitecture.CharUnityEvent>
struct BaseGameEventListener_3_tE3C228824D125E96A9D88897FB66BCB7F8A142ED;
// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Double,ScriptableObjectArchitecture.DoubleGameEvent,ScriptableObjectArchitecture.DoubleUnityEvent>
struct BaseGameEventListener_3_t634B97A5CDFFCA7C454FC2D04B446700954C92D9;
// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.GameObject,ScriptableObjectArchitecture.GameObjectGameEvent,ScriptableObjectArchitecture.GameObjectUnityEvent>
struct BaseGameEventListener_3_tC195237F0521E8BC1F3A819B8134FD6D9B8223B3;
// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Int16,ScriptableObjectArchitecture.ShortGameEvent,ScriptableObjectArchitecture.ShortUnityEvent>
struct BaseGameEventListener_3_t056DC97342A47A863F82519F3E0BD0702A3CDBAE;
// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Int32,ScriptableObjectArchitecture.IntGameEvent,ScriptableObjectArchitecture.IntUnityEvent>
struct BaseGameEventListener_3_t1003CC209EBADB578E47D2FE352CEFBD3941B44E;
// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Int64,ScriptableObjectArchitecture.LongGameEvent,ScriptableObjectArchitecture.LongUnityEvent>
struct BaseGameEventListener_3_tC2AB2EFC7FD3D419A3FA318C99CC761526DFCB3E;
// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Object,ScriptableObjectArchitecture.ObjectGameEvent,ScriptableObjectArchitecture.ObjectUnityEvent>
struct BaseGameEventListener_3_t6D3CA4A0B95E1E87D3453BB71CC1564E826ED42F;
// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Quaternion,ScriptableObjectArchitecture.QuaternionGameEvent,ScriptableObjectArchitecture.QuaternionUnityEvent>
struct BaseGameEventListener_3_t8B910CCCD081B7BF005B4CB7CE5A34DD85F0568E;
// ScriptableObjectArchitecture.BaseGameEventListener`3<System.SByte,ScriptableObjectArchitecture.SByteGameEvent,ScriptableObjectArchitecture.SByteUnityEvent>
struct BaseGameEventListener_3_t48F97903CBA642C20A22E15AD5006B3A5FA406A0;
// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Single,ScriptableObjectArchitecture.FloatGameEvent,ScriptableObjectArchitecture.FloatUnityEvent>
struct BaseGameEventListener_3_t110BCA66896B24D60FF272946813F2742B5A9E99;
// ScriptableObjectArchitecture.BaseGameEventListener`3<System.String,ScriptableObjectArchitecture.StringGameEvent,ScriptableObjectArchitecture.StringUnityEvent>
struct BaseGameEventListener_3_t75D574E6D5AD8A207267C0C79FE183700A60657F;
// ScriptableObjectArchitecture.BaseGameEventListener`3<System.UInt16,ScriptableObjectArchitecture.UShortGameEvent,ScriptableObjectArchitecture.UShortUnityEvent>
struct BaseGameEventListener_3_t8E11D8D733E72A279D6E37BB25E5319D71682B7B;
// ScriptableObjectArchitecture.BaseGameEventListener`3<System.UInt32,ScriptableObjectArchitecture.UIntGameEvent,ScriptableObjectArchitecture.UIntUnityEvent>
struct BaseGameEventListener_3_t24A33653CF8E763B8B5994688F7518627604B658;
// ScriptableObjectArchitecture.BaseGameEventListener`3<System.UInt64,ScriptableObjectArchitecture.ULongGameEvent,ScriptableObjectArchitecture.ULongUnityEvent>
struct BaseGameEventListener_3_tBFEFD642F50DFC02601238694F8CA1476E92EA98;
// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Vector2,ScriptableObjectArchitecture.Vector2GameEvent,ScriptableObjectArchitecture.Vector2UnityEvent>
struct BaseGameEventListener_3_t514F33481B6EFC7C51659813ABF6E5F0491FF4AD;
// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Vector3,ScriptableObjectArchitecture.Vector3GameEvent,ScriptableObjectArchitecture.Vector3UnityEvent>
struct BaseGameEventListener_3_t34CFE7A4C64B2C292277B966F2F5A67CB2C6DE53;
// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Vector4,ScriptableObjectArchitecture.Vector4GameEvent,ScriptableObjectArchitecture.Vector4UnityEvent>
struct BaseGameEventListener_3_t390FC6699B10A9D369565B7A1CA7EF5AC1119B98;
// ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>
struct BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338;
// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.AnimationCurve,ScriptableObjectArchitecture.AnimationCurveVariable>
struct BaseReference_2_t40F45E3A6216916C3134BABF924CC0514FED82A6;
// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.AudioClip,ScriptableObjectArchitecture.AudioClipVariable>
struct BaseReference_2_t820F1AA29672336A6F1BC83BECD1718BE8AACD17;
// ScriptableObjectArchitecture.BaseReference`2<System.Boolean,ScriptableObjectArchitecture.BoolVariable>
struct BaseReference_2_tE9D4D09B97C467C0B3A7EEC15A83B443EC1ED8D6;
// ScriptableObjectArchitecture.BaseReference`2<System.Byte,ScriptableObjectArchitecture.ByteVariable>
struct BaseReference_2_t07F48D8BA2A4D6B24C3BEFD67FAA10BA9E4F878E;
// ScriptableObjectArchitecture.BaseReference`2<System.Char,ScriptableObjectArchitecture.CharVariable>
struct BaseReference_2_t5DAE1C9922344A6B316730CBCC77A403B68A7862;
// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Color,ScriptableObjectArchitecture.ColorVariable>
struct BaseReference_2_tC9D8EE1DCE39D9493AF33CAFED754C93F5E80EBC;
// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Color32,ScriptableObjectArchitecture.Color32Variable>
struct BaseReference_2_tFD456C49180EC96D2D78529AF30282416B52C11F;
// ScriptableObjectArchitecture.BaseReference`2<System.Double,ScriptableObjectArchitecture.DoubleVariable>
struct BaseReference_2_tEE8B6D09995BE8CF0CA72DB1F982D166EB362764;
// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.GameObject,ScriptableObjectArchitecture.GameObjectVariable>
struct BaseReference_2_t8244AFA94CEC1AB6AE70F75249236DD08C2C9B2E;
// ScriptableObjectArchitecture.BaseReference`2<System.Int16,ScriptableObjectArchitecture.ShortVariable>
struct BaseReference_2_t007E674754FB1E8A900851B1A2C0BA771CE0DF7E;
// ScriptableObjectArchitecture.BaseReference`2<System.Int32,ScriptableObjectArchitecture.IntVariable>
struct BaseReference_2_tD4104B5F9A64AD91E2E1677B1DA97E35DCDAB478;
// ScriptableObjectArchitecture.BaseReference`2<System.Int64,ScriptableObjectArchitecture.LongVariable>
struct BaseReference_2_t0531AF154CA511A8FB6379FB45C9CDE4FC7FCA32;
// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.LayerMask,ScriptableObjectArchitecture.LayerMaskVariable>
struct BaseReference_2_tFDF4F509AD18EB8FC6BDAC1F3A23E058488C3FD8;
// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Object,ScriptableObjectArchitecture.ObjectVariable>
struct BaseReference_2_t2A17181ACB3C6F467D4AD71AF6DFF1BB9531B2D3;
// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Quaternion,ScriptableObjectArchitecture.QuaternionVariable>
struct BaseReference_2_t7F5B27B38BF518E4EAB3D249B5B4595CED90BD37;
// ScriptableObjectArchitecture.BaseReference`2<System.SByte,ScriptableObjectArchitecture.SByteVariable>
struct BaseReference_2_tC173A51C612B0A43AF6370E3A19093C734FEE99B;
// ScriptableObjectArchitecture.BaseReference`2<ScriptableObjectArchitecture.SceneInfo,ScriptableObjectArchitecture.SceneVariable>
struct BaseReference_2_t72C4DFD81C0D789C4039A82F0EB2C58469F4AE8B;
// ScriptableObjectArchitecture.BaseReference`2<System.Single,ScriptableObjectArchitecture.FloatVariable>
struct BaseReference_2_t03BA1DB557C86701FE7B52CA2E8CA5D27A8DB959;
// ScriptableObjectArchitecture.BaseReference`2<System.String,ScriptableObjectArchitecture.StringVariable>
struct BaseReference_2_t713F03FDBF48C4C40222EAE1031971658C167991;
// ScriptableObjectArchitecture.BaseReference`2<System.UInt16,ScriptableObjectArchitecture.UShortVariable>
struct BaseReference_2_t5B75BB4610FAB1E78F00C6929CC4CEC4ABA8978D;
// ScriptableObjectArchitecture.BaseReference`2<System.UInt32,ScriptableObjectArchitecture.UIntVariable>
struct BaseReference_2_t30FBC7B781CD0110430B92060D1C8D1A358B19A9;
// ScriptableObjectArchitecture.BaseReference`2<System.UInt64,ScriptableObjectArchitecture.ULongVariable>
struct BaseReference_2_tF9E22219A95F8982B5622F9F3888A7E93912003C;
// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector2,ScriptableObjectArchitecture.Vector2Variable>
struct BaseReference_2_t4E2F2C5F52CE1B5D754972E26B16A9529692EA47;
// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector3,ScriptableObjectArchitecture.Vector3Variable>
struct BaseReference_2_t6AC812605ED8637BB240F30E179085638317B5B3;
// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector4,ScriptableObjectArchitecture.Vector4Variable>
struct BaseReference_2_t098E3480950B1D18E0D7EB89DA9077AFB63EDA1F;
// ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>
struct BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818;
// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.AnimationCurve,ScriptableObjectArchitecture.AnimationCurveEvent>
struct BaseVariable_2_t70D474BDEB5BFC41E566A4914360BA1B9E8886D5;
// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.AudioClip,ScriptableObjectArchitecture.AudioClipEvent>
struct BaseVariable_2_t825BACACB2DC3F8472E9048ABEEB90379B0E4AAE;
// ScriptableObjectArchitecture.BaseVariable`2<System.Boolean,ScriptableObjectArchitecture.BoolEvent>
struct BaseVariable_2_t1B8F78DDC61DD13016E9F91E525CE4341B34F83F;
// ScriptableObjectArchitecture.BaseVariable`2<System.Byte,ScriptableObjectArchitecture.ByteEvent>
struct BaseVariable_2_tD20A39FAF8D4027284B26823812D4E9FC3865080;
// ScriptableObjectArchitecture.BaseVariable`2<System.Char,ScriptableObjectArchitecture.CharEvent>
struct BaseVariable_2_tE90480F7209060ECC07C58E50BA1135B77ADFCC1;
// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Color,ScriptableObjectArchitecture.ColorEvent>
struct BaseVariable_2_t73E71C396858577DFE422B458245BD9452901D44;
// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Color32,ScriptableObjectArchitecture.Color32Event>
struct BaseVariable_2_tF81B01ECB49FAA74D875EE4136A73532F142E9F6;
// ScriptableObjectArchitecture.BaseVariable`2<System.Double,ScriptableObjectArchitecture.DoubleEvent>
struct BaseVariable_2_tED6B9F1F396FA9586E94E06C1A8DAA4D3931E589;
// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.GameObject,ScriptableObjectArchitecture.GameObjectEvent>
struct BaseVariable_2_tCF21AEC8514C02BE0085A2BCCA2F22B2918B862E;
// ScriptableObjectArchitecture.BaseVariable`2<System.Int16,ScriptableObjectArchitecture.ShortEvent>
struct BaseVariable_2_t300DDBB83D42C5F1E37A2058B53EEC4291885CD0;
// ScriptableObjectArchitecture.BaseVariable`2<System.Int32,ScriptableObjectArchitecture.IntEvent>
struct BaseVariable_2_t8831D6351B8295C6C1340099F723D1C665AA0537;
// ScriptableObjectArchitecture.BaseVariable`2<System.Int64,ScriptableObjectArchitecture.LongEvent>
struct BaseVariable_2_tFD8FF2FFACCC7746CE0573FAA1796B8F225962D8;
// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.LayerMask,ScriptableObjectArchitecture.LayerMaskEvent>
struct BaseVariable_2_tC7B6CE290CB38F6DC2B2C1FB4F404D6414B7B9DB;
// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Object,ScriptableObjectArchitecture.ObjectEvent>
struct BaseVariable_2_tAAF9577285CD729794CFCF0FADFBEE6F28F97524;
// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Quaternion,ScriptableObjectArchitecture.QuaternionEvent>
struct BaseVariable_2_t139192138622510A4F5966F878FB3155F15DDB05;
// ScriptableObjectArchitecture.BaseVariable`2<System.SByte,ScriptableObjectArchitecture.SByteEvent>
struct BaseVariable_2_t996467911929C5751AD4CCF6A3E910E75FA74FFF;
// ScriptableObjectArchitecture.BaseVariable`2<ScriptableObjectArchitecture.SceneInfo,ScriptableObjectArchitecture.SceneInfoEvent>
struct BaseVariable_2_t1264951EDCCCB5B8A0C5A38CAD105A17811491D6;
// ScriptableObjectArchitecture.BaseVariable`2<System.Single,ScriptableObjectArchitecture.FloatEvent>
struct BaseVariable_2_t4EF335502A1FBFC635CF514784CE46DB1A67B51D;
// ScriptableObjectArchitecture.BaseVariable`2<System.String,ScriptableObjectArchitecture.StringEvent>
struct BaseVariable_2_t437E5801932848C70783C2B9E36C9573DA593D67;
// ScriptableObjectArchitecture.BaseVariable`2<System.UInt16,ScriptableObjectArchitecture.UShortEvent>
struct BaseVariable_2_t480A4FE7B6268B6D8202A006E5CC39B4A69A830C;
// ScriptableObjectArchitecture.BaseVariable`2<System.UInt32,ScriptableObjectArchitecture.UIntEvent>
struct BaseVariable_2_t349DFA4D927E43C4B81C2C153C445C06CD312E78;
// ScriptableObjectArchitecture.BaseVariable`2<System.UInt64,ScriptableObjectArchitecture.ULongEvent>
struct BaseVariable_2_tD58523CD992107E476DE71E30491A511FC0DD347;
// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Vector2,ScriptableObjectArchitecture.Vector2Event>
struct BaseVariable_2_tA8829E3C7067DF05F9ACD22447604E3EEBE2DEF6;
// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Vector3,ScriptableObjectArchitecture.Vector3Event>
struct BaseVariable_2_tDFE746050DA1333C846F33F2F275453ECD17D18A;
// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Vector4,ScriptableObjectArchitecture.Vector4Event>
struct BaseVariable_2_t393BFC59953D35B46C9BF16E4AF2F4F05286DBC8;
// ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>
struct BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A;
// ScriptableObjectArchitecture.Collection`1<UnityEngine.AnimationCurve>
struct Collection_1_tBDB85857CDFC02E3FE579BA9F05EC13E4D11A626;
// ScriptableObjectArchitecture.Collection`1<UnityEngine.AudioClip>
struct Collection_1_tB9F83B60496EBB18BB23457FE18DB750F00E21F5;
// ScriptableObjectArchitecture.Collection`1<System.Boolean>
struct Collection_1_t5C8F9118B15F25FC4A09C8016386BB536D871C3F;
// ScriptableObjectArchitecture.Collection`1<System.Byte>
struct Collection_1_tB75730F824C5260D4684D8F27E54CB7EDDD8B325;
// ScriptableObjectArchitecture.Collection`1<System.Char>
struct Collection_1_tE9F523232A24F4715C3883FC3B4A28057E663008;
// ScriptableObjectArchitecture.Collection`1<UnityEngine.Color>
struct Collection_1_t5152D20A91B22A024A9F5CAAD5558E46AF1F2418;
// ScriptableObjectArchitecture.Collection`1<UnityEngine.Color32>
struct Collection_1_tC7145F80C9C94F813E69D62632C7792F1B8FF9D1;
// ScriptableObjectArchitecture.Collection`1<System.Double>
struct Collection_1_tF42A5F6F7CC263124814E46F42FD3E5D42C00AC8;
// ScriptableObjectArchitecture.Collection`1<UnityEngine.GameObject>
struct Collection_1_t094F7E1819D7E0C9778C527D1401CEDB4CCA56C1;
// ScriptableObjectArchitecture.Collection`1<System.Int16>
struct Collection_1_tDCE3D258879871CA66B574AD37FE25FFF44FD408;
// ScriptableObjectArchitecture.Collection`1<System.Int32>
struct Collection_1_t17C42C2463B620CB15A1B7630A300F354504CDBC;
// ScriptableObjectArchitecture.Collection`1<System.Int64>
struct Collection_1_t8CADAF8D3E23E843E6FE47B5EE8DE7401BFEC2E6;
// ScriptableObjectArchitecture.Collection`1<UnityEngine.Object>
struct Collection_1_t7E13658BAB9E9597A202B079AA1A44E9683CDEC2;
// ScriptableObjectArchitecture.Collection`1<UnityEngine.Quaternion>
struct Collection_1_tBF0E04DD341E3966F3DA4AA95DE2B8C2040891CE;
// ScriptableObjectArchitecture.Collection`1<System.SByte>
struct Collection_1_tFF583AA72D09BB380446A612689A683D456C19A7;
// ScriptableObjectArchitecture.Collection`1<ScriptableObjectArchitecture.SceneInfo>
struct Collection_1_t3BF8F10ACC0AC01963B552916F67A52F0580AFB3;
// ScriptableObjectArchitecture.Collection`1<System.Single>
struct Collection_1_t798BA4D0A9B3200F245DECF04442FFE29D74CDF8;
// ScriptableObjectArchitecture.Collection`1<System.String>
struct Collection_1_tDE136E76AA13C59D68071661079C19B65415023B;
// ScriptableObjectArchitecture.Collection`1<System.UInt16>
struct Collection_1_t7EC3F483C8D83EF91FB906313C16530E0ED7EF83;
// ScriptableObjectArchitecture.Collection`1<System.UInt32>
struct Collection_1_t848830310C624ECF361E5DB5D65F98CDE80CFC84;
// ScriptableObjectArchitecture.Collection`1<System.UInt64>
struct Collection_1_t13C8178151B8D78737D26BABB2AC4BB2EFC0C083;
// ScriptableObjectArchitecture.Collection`1<UnityEngine.Vector2>
struct Collection_1_t56D4A3CBD784ED40DE7DF5FBB7FA9FD1AFD17404;
// ScriptableObjectArchitecture.Collection`1<UnityEngine.Vector3>
struct Collection_1_tE0178F131BFCB95DF652FF8E1381E2F154FD3C20;
// ScriptableObjectArchitecture.Collection`1<UnityEngine.Vector4>
struct Collection_1_tF625EEE1C009CE0E79AE9D238374159154E73779;
// ScriptableObjectArchitecture.Collection`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35;
// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.AudioClip>
struct GameEventBase_1_t2672A3A8FEB9CEAA9F57BC3EB5F5B1D1F8366B13;
// ScriptableObjectArchitecture.GameEventBase`1<System.Boolean>
struct GameEventBase_1_t10E7740AC1F783C5F77C831B62E35F9B8CB724A0;
// ScriptableObjectArchitecture.GameEventBase`1<System.Byte>
struct GameEventBase_1_tBCF2C748D38C899013F74A9DD65DA37E4D039E8B;
// ScriptableObjectArchitecture.GameEventBase`1<System.Char>
struct GameEventBase_1_tB539EE24E3C9D31E9C50740CAA1EBD5CD325C837;
// ScriptableObjectArchitecture.GameEventBase`1<System.Double>
struct GameEventBase_1_t4A08A3353ACC37D7D4F0A4043139C8E7370D173F;
// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.GameObject>
struct GameEventBase_1_tCAA51EC4846977F9612E78EC703647682F76D382;
// ScriptableObjectArchitecture.GameEventBase`1<System.Int16>
struct GameEventBase_1_tF173A269C6C3C0AE716BB70993BAB9CBCE00551B;
// ScriptableObjectArchitecture.GameEventBase`1<System.Int32>
struct GameEventBase_1_t08486ECCC1D87A7ADDDDF601112C51D9402C0453;
// ScriptableObjectArchitecture.GameEventBase`1<System.Int64>
struct GameEventBase_1_t4940927CCF59A809C511974B9C7F760807524B18;
// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Object>
struct GameEventBase_1_t456FA50EA4B9C6BBBBAB664F3B1BDBE1EEF9F328;
// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Quaternion>
struct GameEventBase_1_t8A361FAC6D46AD51B5D45288F299DA234D8B792B;
// ScriptableObjectArchitecture.GameEventBase`1<System.SByte>
struct GameEventBase_1_t671515C5D620EF9D9F2B205ED87F254EDB2665CA;
// ScriptableObjectArchitecture.GameEventBase`1<System.Single>
struct GameEventBase_1_tF2FB7A1D2DF48AD421FB12ADE83EF18F27DFD997;
// ScriptableObjectArchitecture.GameEventBase`1<System.String>
struct GameEventBase_1_tE944FE9F846468030EC60A5164C60CB9583C0B2F;
// ScriptableObjectArchitecture.GameEventBase`1<System.UInt16>
struct GameEventBase_1_tE24979B752D2587943DC375EB883825387E68B74;
// ScriptableObjectArchitecture.GameEventBase`1<System.UInt32>
struct GameEventBase_1_tD31DE5B30A0CE236DACDA70921390F40C8364BED;
// ScriptableObjectArchitecture.GameEventBase`1<System.UInt64>
struct GameEventBase_1_tB21A71EACB908B7D589EA25E08A9438A6DCD97CF;
// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Vector2>
struct GameEventBase_1_tA38DC9B336201DEA0FC0EA056F28499530382482;
// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Vector3>
struct GameEventBase_1_t15AA158F87755BB2A88ADEE918BDDD2DAB2BECB4;
// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Vector4>
struct GameEventBase_1_t91A1F511B0E04EB48E0F7A8D952888C04544BF89;
// ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860;
// System.Collections.Generic.List`1<System.Action`1<UnityEngine.AudioClip>>
struct List_1_t5661A3AF75A66C6B913790192F31B224E12E9181;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713;
// System.Collections.Generic.List`1<System.Action`1<System.Byte>>
struct List_1_t5E9A9F422AECEB4A7516922FD336ACE3B44397FD;
// System.Collections.Generic.List`1<System.Action`1<System.Char>>
struct List_1_tBF1C7A14F04B3BA630470DCE63C1352EB82D947D;
// System.Collections.Generic.List`1<System.Action`1<System.Double>>
struct List_1_tE8DC132B9884C5D95887D4384BAC3676845BD0D9;
// System.Collections.Generic.List`1<System.Action`1<UnityEngine.GameObject>>
struct List_1_t261B5FB86860583ED8B529D12A8662404F52324A;
// System.Collections.Generic.List`1<System.Action`1<System.Int16>>
struct List_1_t791313CB49D22B6CF09187D9BC5C288EBA1072DD;
// System.Collections.Generic.List`1<System.Action`1<System.Int32>>
struct List_1_t1380C530A5D2929C738AA31853B9EA4A6757EA30;
// System.Collections.Generic.List`1<System.Action`1<System.Int64>>
struct List_1_t3F20F902C852B0CB50C0CD1DE43396B989498082;
// System.Collections.Generic.List`1<System.Action`1<UnityEngine.Object>>
struct List_1_tEE8D2D32D0C7C37D09D75419EFC974F6CCF23FF4;
// System.Collections.Generic.List`1<System.Action`1<UnityEngine.Quaternion>>
struct List_1_tB32E59560FA5C81D30635D5E4675DA6F3DA38FF0;
// System.Collections.Generic.List`1<System.Action`1<System.SByte>>
struct List_1_t73F4275B009028189EF2943A60594B97847A0600;
// System.Collections.Generic.List`1<System.Action`1<System.Single>>
struct List_1_t71EFF5A5F787719FCA16651E55B031F15ECF78AB;
// System.Collections.Generic.List`1<System.Action`1<System.String>>
struct List_1_tBB25F7EA475FB5AB9F915049CB3BB346A234C92C;
// System.Collections.Generic.List`1<System.Action`1<System.UInt16>>
struct List_1_t83982B72AA6B84133B7BB3EFF540BA19F610B722;
// System.Collections.Generic.List`1<System.Action`1<System.UInt32>>
struct List_1_t1B19FADC50B286B9643AA34D1CADC1F25636E89C;
// System.Collections.Generic.List`1<System.Action`1<System.UInt64>>
struct List_1_t8A7119A5619B4033E1C4C56CC8EA7101B1D805D6;
// System.Collections.Generic.List`1<System.Action`1<UnityEngine.Vector2>>
struct List_1_tEF6BBA7F0B9C545EC4AA549F4B1E3727A873E659;
// System.Collections.Generic.List`1<System.Action`1<UnityEngine.Vector3>>
struct List_1_t477A237BF4526D7D64E204B9E93B4D4025C96FCB;
// System.Collections.Generic.List`1<System.Action`1<UnityEngine.Vector4>>
struct List_1_t30E104C2BFA3BFF0F1781827DC00462C951524D8;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<UnityEngine.AudioClip>>
struct List_1_tE47617278DB303DCBD88A8425418B66969743F85;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<System.Boolean>>
struct List_1_t6A72F1BECEB982F2BF28AA9E3ECCF323A6E4636B;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<System.Byte>>
struct List_1_tE122EF8F77AF256BA79CC135BF88F78DB79D0910;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<System.Char>>
struct List_1_tBDE3A9E84042C4254AE55BC9243184C2880BD5BB;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<System.Double>>
struct List_1_t5E7FBCED1F48B68445EC4A248AEB22CB9794160B;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<UnityEngine.GameObject>>
struct List_1_t84F86C9B4DA0C67554E18A084DFC6DDBCCD437A7;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<System.Int16>>
struct List_1_tF2488B1BDB5329C85CE65D61CEB1D58F603F9885;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<System.Int32>>
struct List_1_t2F44FA50A88C6F2F1B5ADE8DB2FA1DBF47DF84F9;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<System.Int64>>
struct List_1_tC28414C2A8F5DC34B64E39CE1C642931ACABA96A;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<UnityEngine.Object>>
struct List_1_t645B60B869CA35DA90BC6FFA93CFC80339088EEF;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<UnityEngine.Quaternion>>
struct List_1_tF0DCE277C662708FBB04C67AEFFFD8A0E9F5A608;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<System.SByte>>
struct List_1_t04BE7DA87B34E820DF81350F44693087A48DF590;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<System.Single>>
struct List_1_tEA8FD9650DA003A5A30B4436C4D2CFDD6BAFC550;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<System.String>>
struct List_1_t58E736455EE1B25BC104A7B34133828ACCA99E34;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<System.UInt16>>
struct List_1_tB4AD6C9312B08229EA0EA37836B1CA65E4B117DF;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<System.UInt32>>
struct List_1_t2B574EFE9EFD8B50973B14665281996FDED06D25;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<System.UInt64>>
struct List_1_t4DCAE92D8625FD60CEB0C8DEBEA40BBEDD02152D;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<UnityEngine.Vector2>>
struct List_1_tB717C1281A382E47783BB3C2591B4A45D63ADC80;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<UnityEngine.Vector3>>
struct List_1_t9BC4A36BFBC2390304A14C175BADF123B11B70D8;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<UnityEngine.Vector4>>
struct List_1_t21C9880440288D5DB015EEB96B594338F5D5F5E0;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987;
// System.Collections.Generic.List`1<UnityEngine.AnimationCurve>
struct List_1_t5EF663E73FF17D3543A010E3E1EC10BE0C94F563;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener>
struct List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int16>
struct List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Int64>
struct List_1_tF9D88C946600C782EE786A252258C0AA97BD019A;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<UnityEngine.Quaternion>
struct List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523;
// System.Collections.Generic.List`1<System.SByte>
struct List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.SceneInfo>
struct List_1_t876C01CC17181CDC39E83B293544C8A8A8D03359;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.StackTraceEntry>
struct List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t44EF1B9C71532303037AAC259AD8D405401724D8;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.AnimationCurve>
struct UnityEvent_1_t50584CC80E46926AB8BD5EA68F203DA8FE8AF415;
// UnityEngine.Events.UnityEvent`1<UnityEngine.AudioClip>
struct UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Byte>
struct UnityEvent_1_tFACDCC5DE4AEC520C1F3F113700A5F35BB05D4A4;
// UnityEngine.Events.UnityEvent`1<System.Char>
struct UnityEvent_1_t263F7C01FC33C17A6DAF0ED264709AE83E03B3D2;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Color32>
struct UnityEvent_1_tEBA2D509B0987DC4A8E228671D832ABEA54CAB68;
// UnityEngine.Events.UnityEvent`1<System.Double>
struct UnityEvent_1_t7EBD40037C3DBB4EEFE941AEFD2E3CA88C7382ED;
// UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject>
struct UnityEvent_1_t1A08C69A745D79C1F101AD784277E54DF250C6E2;
// UnityEngine.Events.UnityEvent`1<System.Int16>
struct UnityEvent_1_tD34E58DBA2551C12054B5DE25F61F208892C19DC;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// UnityEngine.Events.UnityEvent`1<System.Int64>
struct UnityEvent_1_t04EB8F75BA20E19772BBB0023A57CC7FBAFED743;
// UnityEngine.Events.UnityEvent`1<UnityEngine.LayerMask>
struct UnityEvent_1_t6DAA6F7C6E748D32351CEF1C56ECF572BD49FBDD;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Object>
struct UnityEvent_1_t3B706B8CA3352B79F48B396EEFD6A1EF2E1388BA;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Quaternion>
struct UnityEvent_1_tA3CC6DC833EBB0864AD5E6F9BE8920D7E71B32A5;
// UnityEngine.Events.UnityEvent`1<System.SByte>
struct UnityEvent_1_tC88F80D21305B15BE70F4D4350BA4FA52A6D21C8;
// UnityEngine.Events.UnityEvent`1<ScriptableObjectArchitecture.SceneInfo>
struct UnityEvent_1_t34ADF6028DB29D29746FDFAA3E6A09464A0CC6B4;
// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.Events.UnityEvent`1<System.UInt16>
struct UnityEvent_1_tC730276456093E44C28B05F95C654FF94C881497;
// UnityEngine.Events.UnityEvent`1<System.UInt32>
struct UnityEvent_1_t205E4D1A377E9351AED6C5DA5FC0446C7BBEF2EB;
// UnityEngine.Events.UnityEvent`1<System.UInt64>
struct UnityEvent_1_tDB4BD67BA2696C34F7FBC7567EB699C57B966568;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE;
// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector4>
struct UnityEvent_1_t7FA3641C06EC4F8BD5600438DB4CB16B7042FB59;
// UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// ScriptableObjectArchitecture.IGameEventListener[]
struct IGameEventListenerU5BU5D_tD8F9EB1B8DF2BCD570C90814E17B1FBFAE767042;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// ScriptableObjectArchitecture.StackTraceEntry[]
struct StackTraceEntryU5BU5D_t66622B6A3AE9DB549ADB665BADFCFB6AE4F5D0E3;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// ScriptableObjectArchitecture.AnimationCurveCollection
struct AnimationCurveCollection_t11267B67826BE52F7E0E2552D0BB0508A82E2F1D;
// ScriptableObjectArchitecture.AnimationCurveEvent
struct AnimationCurveEvent_t8425E6F34793FDA4C7BBD2D39802FF8E79315D72;
// ScriptableObjectArchitecture.AnimationCurveReference
struct AnimationCurveReference_t88F5A8D871FC79AD8AF7FEDCDE9CA75ED10279FA;
// ScriptableObjectArchitecture.AnimationCurveVariable
struct AnimationCurveVariable_tEFBCC32823AB577813C8B22F02D786DB4E03C240;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// ScriptableObjectArchitecture.AudioClipCollection
struct AudioClipCollection_tB9050F69CC50E3F18A5FDFF583F5F9AFD9A9E0C8;
// ScriptableObjectArchitecture.AudioClipEvent
struct AudioClipEvent_tDECC8215AAAFE8548EB1C094CC24489A9638D347;
// ScriptableObjectArchitecture.AudioClipGameEvent
struct AudioClipGameEvent_t2915486EA8B836713A2EDAA31F2D148B778BEECC;
// ScriptableObjectArchitecture.AudioClipGameEventListener
struct AudioClipGameEventListener_t59BA533F86AAF8F810ECC1F4F06F7797ECF63FF3;
// ScriptableObjectArchitecture.AudioClipReference
struct AudioClipReference_t1E628662E4C452ED1F1CC0082FFB338E49EDDAE9;
// ScriptableObjectArchitecture.AudioClipUnityEvent
struct AudioClipUnityEvent_t6B7F109FD58E7CC27A879A56370DA25F41091703;
// ScriptableObjectArchitecture.AudioClipVariable
struct AudioClipVariable_t9D688C420D2F42E7C399C292CBD8C7E9B3B61C4E;
// ScriptableObjectArchitecture.BaseCollection
struct BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1;
// ScriptableObjectArchitecture.BaseReference
struct BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D;
// ScriptableObjectArchitecture.BaseVariable
struct BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002;
// ScriptableObjectArchitecture.BoolCollection
struct BoolCollection_t55A40136DEC49DB7ADB919C8B2235B089EA03BC5;
// ScriptableObjectArchitecture.BoolEvent
struct BoolEvent_t9E22CE96A421ED7B689F1F98615708E601D0BEA4;
// ScriptableObjectArchitecture.BoolGameEvent
struct BoolGameEvent_t2217E395E020EB74054A38784BB740DDFE35572A;
// ScriptableObjectArchitecture.BoolGameEventListener
struct BoolGameEventListener_tE8CBEC15DECF16F05209FADC5407DB42CBAA9DD2;
// ScriptableObjectArchitecture.BoolReference
struct BoolReference_t6EE3E5E7B5D9807C5A7CA8E83FEB21215FE65216;
// ScriptableObjectArchitecture.BoolUnityEvent
struct BoolUnityEvent_t3DC03DEB567860D8A4740F53037DE97238FC5241;
// ScriptableObjectArchitecture.BoolVariable
struct BoolVariable_t764ED84F6566C6E161B30BFA786048A217C47EE9;
// ScriptableObjectArchitecture.ByteCollection
struct ByteCollection_t655B5C1F7EB9CAADEEF1B054AF9DEECD00E27389;
// ScriptableObjectArchitecture.ByteEvent
struct ByteEvent_t49C81C726E0E3E6616ABE0DDDF1B989BDC36D5D9;
// ScriptableObjectArchitecture.ByteGameEvent
struct ByteGameEvent_t01D21D1016B069B95C836014C3FC7E9BDDFEB88D;
// ScriptableObjectArchitecture.ByteGameEventListener
struct ByteGameEventListener_t0C6F1909E59A3A2F9FDC5681541CCA0DB67516A4;
// ScriptableObjectArchitecture.ByteReference
struct ByteReference_t43B5A0BE3EC400FE1B7DF275BC9D6C8F33A1ECD9;
// ScriptableObjectArchitecture.ByteUnityEvent
struct ByteUnityEvent_t3CCFD9FB0D2771003BA557CE58592A5FEF7DA938;
// ScriptableObjectArchitecture.ByteVariable
struct ByteVariable_t7B084C21DC44CD2E8CA919670C38F867E28152B0;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ScriptableObjectArchitecture.CharCollection
struct CharCollection_t3AFD063A06B9F17A521F6D876507236613328E7B;
// ScriptableObjectArchitecture.CharEvent
struct CharEvent_tA8ECC2465A8413751CB562863E29F17301D71969;
// ScriptableObjectArchitecture.CharGameEvent
struct CharGameEvent_t85D1B4774B2E14D40830508F2282B514D9AFF4FC;
// ScriptableObjectArchitecture.CharGameEventListener
struct CharGameEventListener_tFE6CCE75C77CE29BE931B198AD7F88CD8AC7B04D;
// ScriptableObjectArchitecture.CharReference
struct CharReference_t05920017F5B64F042A9887D2766ACB509AF54610;
// ScriptableObjectArchitecture.CharUnityEvent
struct CharUnityEvent_t65969389D8D3FDCD61FE06244135DA2D8E317901;
// ScriptableObjectArchitecture.CharVariable
struct CharVariable_tDE9AB696A98D49BFB368871B12969BB8D7F781CE;
// ScriptableObjectArchitecture.Examples.CollectionCountDisplayer
struct CollectionCountDisplayer_t06DD005995A1E61037533220BA8DE6E36D547F7F;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// ScriptableObjectArchitecture.Color32Collection
struct Color32Collection_tEB828709F4848FC5A6AD2A169D65DD9522A108E0;
// ScriptableObjectArchitecture.Color32Event
struct Color32Event_tFC2B4948119A3C96B1B1CC0430BEFDED013ABA5D;
// ScriptableObjectArchitecture.Color32Reference
struct Color32Reference_tF0EE24E8AEA963BA7EA196775D30C2CA3A32CC44;
// ScriptableObjectArchitecture.Color32Variable
struct Color32Variable_tD702FAAD694BB1EADC02DE5D40D8A4E81CA11168;
// ScriptableObjectArchitecture.ColorCollection
struct ColorCollection_t3AC22DA6707CD2E976569B96E1ACB8B063C35DA3;
// ScriptableObjectArchitecture.ColorEvent
struct ColorEvent_tA39160CDC0F52D13A7925E7A3AFB41FD619461CE;
// ScriptableObjectArchitecture.ColorReference
struct ColorReference_tFC9605CB8EE6952FBB8772A2AB93C877D7238AE7;
// ScriptableObjectArchitecture.ColorVariable
struct ColorVariable_t130F20F7BA68AE04C3AFCF170DB660F41D7FF845;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// ScriptableObjectArchitecture.Examples.DamageDealer
struct DamageDealer_t3CBE22A92F8B74E798381E22B3C57A7ABAD30BE2;
// ScriptableObjectArchitecture.Examples.DamageDealerWithEvent
struct DamageDealerWithEvent_t880ED59A4E0D6601A33A2BCFA4189C0DF2DF9FC0;
// ScriptableObjectArchitecture.DebuggableGameEventListener
struct DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ScriptableObjectArchitecture.Examples.Disabler
struct Disabler_t65314708659D5B8508C1CA82E23C6EFA25470550;
// ScriptableObjectArchitecture.DoubleCollection
struct DoubleCollection_t984F13E06AABBD5CAC491B8EE3DBE71B225ECF52;
// ScriptableObjectArchitecture.DoubleEvent
struct DoubleEvent_t9E247B7B528C53E6196DA2AF493B0CBB30A3A701;
// ScriptableObjectArchitecture.DoubleGameEvent
struct DoubleGameEvent_tF7278C88B2C7B4DD8BBB6C0B3E44EDDB31230CEF;
// ScriptableObjectArchitecture.DoubleGameEventListener
struct DoubleGameEventListener_tF3AE8C4AF2166FAF10D553FD4F527C0812B5B7CC;
// ScriptableObjectArchitecture.DoubleReference
struct DoubleReference_tA7CE0C564A0FC88326FB690EE4765DC2FBD4A31C;
// ScriptableObjectArchitecture.DoubleUnityEvent
struct DoubleUnityEvent_t0DAD03C14781D4F051C81D8181E252078E0F342E;
// ScriptableObjectArchitecture.DoubleVariable
struct DoubleVariable_tA03B5B5994F2F286D17DC4E12FB1F90ED739B21E;
// ScriptableObjectArchitecture.FloatCollection
struct FloatCollection_t25F3F80DF766D4214228DA7DA10D3CB416896FF7;
// ScriptableObjectArchitecture.FloatEvent
struct FloatEvent_tB842FF4F4F6D92915AE23F63DF474F7A8D57A2DB;
// ScriptableObjectArchitecture.FloatGameEvent
struct FloatGameEvent_tE1317F1EE773F9D420C1ECC0B0E3019BB0030784;
// ScriptableObjectArchitecture.FloatGameEventListener
struct FloatGameEventListener_tAB294102632C1FB296FE53A0C36F6462CB1A4B98;
// ScriptableObjectArchitecture.FloatReference
struct FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA;
// ScriptableObjectArchitecture.FloatUnityEvent
struct FloatUnityEvent_t3A247A5F43BB878717D8C7613C0CE75E2B395C44;
// ScriptableObjectArchitecture.FloatVariable
struct FloatVariable_t625F97534449CC4C0953DD85FA4A2026870756F3;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// ScriptableObjectArchitecture.GameEvent
struct GameEvent_t65A32CE97E4D95E608D0EED1BADF578B3D75817E;
// ScriptableObjectArchitecture.GameEventBase
struct GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272;
// ScriptableObjectArchitecture.GameEventListener
struct GameEventListener_tE993EBF06AB98CEB2C1FEACEAF142095C4D81472;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// ScriptableObjectArchitecture.GameObjectCollection
struct GameObjectCollection_t9C76F2B578978C3D59931E99C258454EC1EAAF2C;
// ScriptableObjectArchitecture.GameObjectEvent
struct GameObjectEvent_tA0A9A30926A3CCCA00B95EC7F4F3C5FBFD1E4FB6;
// ScriptableObjectArchitecture.GameObjectGameEvent
struct GameObjectGameEvent_t8C9EE2ABDBF4A2644BEE9D3B1AA322626268A804;
// ScriptableObjectArchitecture.GameObjectGameEventListener
struct GameObjectGameEventListener_t4C16ADC1346827D56024A51B3DF66CAB25A2331F;
// ScriptableObjectArchitecture.GameObjectReference
struct GameObjectReference_t4064888F223DD110E1AEFF0031A25B4B356142AB;
// ScriptableObjectArchitecture.GameObjectUnityEvent
struct GameObjectUnityEvent_tCD6656AAE77281E6C7677461077E615700AF99C2;
// ScriptableObjectArchitecture.GameObjectVariable
struct GameObjectVariable_t6ACE562BDAF9BA4EE46F037B6D8E87B3F4EB77F0;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// ScriptableObjectArchitecture.IGameEventListener
struct IGameEventListener_t66A21487E63CB48D94BF9711729C5B17252107B1;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// ScriptableObjectArchitecture.Examples.ImageFillSetter
struct ImageFillSetter_t9375940E434A0D4B33FE297F27C75A9D0E327FE9;
// ScriptableObjectArchitecture.IntCollection
struct IntCollection_t4EEC7BE6D6AC13F37EC6E5023D5686B4BE51BEC4;
// ScriptableObjectArchitecture.IntEvent
struct IntEvent_t6E813C75E50D398D15DFABD06B2662AA65D2CDC2;
// ScriptableObjectArchitecture.IntGameEvent
struct IntGameEvent_t2E144CC8973A5D334EE78DC7E701975CE0957FF4;
// ScriptableObjectArchitecture.IntGameEventListener
struct IntGameEventListener_t2E5440CED6EF7AABD1F67ACEE2C1AC9542E4EC9B;
// ScriptableObjectArchitecture.IntReference
struct IntReference_t37CF127DDC4449029C569E578C54F2B6C56A653C;
// ScriptableObjectArchitecture.IntUnityEvent
struct IntUnityEvent_t5E2E9FFCE129B23030739FAC107AE8C291FE0FAC;
// ScriptableObjectArchitecture.IntVariable
struct IntVariable_t82008C985D4FA5C4CF1BAEB30DA8E53A079481FB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// ScriptableObjectArchitecture.Examples.KeyboardMover
struct KeyboardMover_t6C56E504C2A63CFA0444A2A84D158AE36EABF107;
// ScriptableObjectArchitecture.LayerMaskEvent
struct LayerMaskEvent_tEA3D1A798F92C909C30C71D4BAF4CB7FCD8C445F;
// ScriptableObjectArchitecture.LayerMaskReference
struct LayerMaskReference_tDC3CC941C7366760C6054758794C9C24ABAB8DBA;
// ScriptableObjectArchitecture.LayerMaskVariable
struct LayerMaskVariable_t3A7C3590239A92777BA87C3A299FC83C092C124C;
// ScriptableObjectArchitecture.LongCollection
struct LongCollection_t518B7BF02FB432A3A2E00281CB04CCB853813F40;
// ScriptableObjectArchitecture.LongEvent
struct LongEvent_tE766B8639111C11D6A9A858A8BA02E7407EBD5E2;
// ScriptableObjectArchitecture.LongGameEvent
struct LongGameEvent_tD1FF7DEBAB5987620831AAE7962C7A439A886AE9;
// ScriptableObjectArchitecture.LongGameEventListener
struct LongGameEventListener_t8158E34AF6E685D55AA0C194D7DF0F1796564B81;
// ScriptableObjectArchitecture.LongReference
struct LongReference_tF59CCFB6672EADDA9740995E4D788F426295CCBB;
// ScriptableObjectArchitecture.LongUnityEvent
struct LongUnityEvent_tFC54A330177C9AE9D3083A13067F0E71CD6C74C7;
// ScriptableObjectArchitecture.LongVariable
struct LongVariable_tA4FEC3B78A4850FEC74F323F408F6E8EDDD8E01E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MultiLine
struct MultiLine_t83C374343402375FC5051DBEA8EEAC19E93EFBAA;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ScriptableObjectArchitecture.Examples.ObjectAdder
struct ObjectAdder_tAAFA230FFFDF028DE8AF9FA5DBDD70C49D95B30A;
// ScriptableObjectArchitecture.ObjectCollection
struct ObjectCollection_tFF255DD9DF07E675FBE1DD42AE5DEE8E81116653;
// ScriptableObjectArchitecture.ObjectEvent
struct ObjectEvent_t866AB59919D93646DD80F161CA6DE3EE46652E82;
// ScriptableObjectArchitecture.ObjectGameEvent
struct ObjectGameEvent_t3EBDC4B6C0E548905F25CCE5C4328BBA35830723;
// ScriptableObjectArchitecture.ObjectGameEventListener
struct ObjectGameEventListener_t263005490DC3DA3E023066A70B6A02B32E7A7CA3;
// ScriptableObjectArchitecture.ObjectReference
struct ObjectReference_t5C0CFD796302FFDC50AA85BDAE843D0EDCD1880A;
// ScriptableObjectArchitecture.ObjectUnityEvent
struct ObjectUnityEvent_tF6D74281C00838E84095B46668A73F507CE8FF0B;
// ScriptableObjectArchitecture.ObjectVariable
struct ObjectVariable_tD40668E019842D6B40B25C4C438D419F46E2CF82;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// ScriptableObjectArchitecture.QuaternionCollection
struct QuaternionCollection_tA502B1D5EF07A5CE71FD841C750E0C84452D1BE4;
// ScriptableObjectArchitecture.QuaternionEvent
struct QuaternionEvent_tE171C4D239E81820286C61E70309BFF13E0305F8;
// ScriptableObjectArchitecture.QuaternionGameEvent
struct QuaternionGameEvent_t4B5FE2B2323422C22CA03343D5F797C4450EB57B;
// ScriptableObjectArchitecture.QuaternionGameEventListener
struct QuaternionGameEventListener_t19E22F1FDA815017C7EC7A05135AA45E5608617F;
// ScriptableObjectArchitecture.QuaternionReference
struct QuaternionReference_t6127F39A2A4D1E46E2DBCEE48D507A133DB1291A;
// ScriptableObjectArchitecture.QuaternionUnityEvent
struct QuaternionUnityEvent_t09FC1304F10E793FCC18D599DCD674ACA1BBC27B;
// ScriptableObjectArchitecture.QuaternionVariable
struct QuaternionVariable_t865364A28D530DAE702A02D51EA8F22B85F45286;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// ScriptableObjectArchitecture.SByteCollection
struct SByteCollection_tFB89970EE2957F35DCA99275AA2273886C1CCBBE;
// ScriptableObjectArchitecture.SByteEvent
struct SByteEvent_t3AFB7C2A6ADA47EE417B267DC06711952994ECE0;
// ScriptableObjectArchitecture.SByteGameEvent
struct SByteGameEvent_t9FC4637B4401B0B0461F669CEBD147A91A1A07BA;
// ScriptableObjectArchitecture.SByteGameEventListener
struct SByteGameEventListener_tA0D879D45625DF3737DA5818B9E240DB86209AFA;
// ScriptableObjectArchitecture.SByteReference
struct SByteReference_t74E6620231B774545C8AFA342E084DA4D03C01B0;
// ScriptableObjectArchitecture.SByteUnityEvent
struct SByteUnityEvent_t84D3DC8700141FCBB62AADB63815F3588FA2B4EB;
// ScriptableObjectArchitecture.SByteVariable
struct SByteVariable_t190FB798BEDF4572A88A261AF57B305F1A516664;
// ScriptableObjectArchitecture.SOArchitectureBaseMonobehaviour
struct SOArchitectureBaseMonobehaviour_tE95AACB49C1D557C6B4A91D947744DB3E5E39D2C;
// ScriptableObjectArchitecture.SOArchitectureBaseObject
struct SOArchitectureBaseObject_t5F7D212ABE0AAA356A8D13D81468DCC5EFFC631B;
// ScriptableObjectArchitecture.SOArchitecture_Settings
struct SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScriptableObjectArchitecture.SceneCollection
struct SceneCollection_t2C74FDBCE50E87785CD990D47F3A0DAFC50290DB;
// ScriptableObjectArchitecture.SceneInfo
struct SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355;
// ScriptableObjectArchitecture.SceneInfoEvent
struct SceneInfoEvent_t6E385A78EB8BBBB8C877D8A59ECBFDDFEE1B1112;
// ScriptableObjectArchitecture.SceneReference
struct SceneReference_tE720D965A9643BB4D2DAE85BDF3DCC679CC05580;
// ScriptableObjectArchitecture.SceneVariable
struct SceneVariable_tB891AF435CC040522F30F22B078B93054D0684F8;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// ScriptableObjectArchitecture.ShortCollection
struct ShortCollection_tE23A319A2FE18A3E667495DEE10A2E748537956E;
// ScriptableObjectArchitecture.ShortEvent
struct ShortEvent_t31F6A39B91142554E628891B33CCF506D2E92D02;
// ScriptableObjectArchitecture.ShortGameEvent
struct ShortGameEvent_t4399DFD5065C287F2C1F87D6BC2F98B8E2D235FB;
// ScriptableObjectArchitecture.ShortGameEventListener
struct ShortGameEventListener_t0DE29AF387451E7C2A67FE64AD982F817DEC9816;
// ScriptableObjectArchitecture.ShortReference
struct ShortReference_tBAF12BD2CA0E1E6B505B8F34298E9D7385E94B40;
// ScriptableObjectArchitecture.ShortUnityEvent
struct ShortUnityEvent_tC5459397DACCF8E25FA98CE353B2C49820054C4C;
// ScriptableObjectArchitecture.ShortVariable
struct ShortVariable_t98FE5356B5FC0642211510D152F9B8E279D0EB72;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// ScriptableObjectArchitecture.StackTraceEntry
struct StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D;
// System.String
struct String_t;
// ScriptableObjectArchitecture.StringCollection
struct StringCollection_tE3C5DD472C11E7063A64F7519113B8A50A2E9C4C;
// ScriptableObjectArchitecture.StringEvent
struct StringEvent_t774918EF8789B33F5F83809DAB99159BDCB01B2D;
// ScriptableObjectArchitecture.StringGameEvent
struct StringGameEvent_t820B6481717C64F21DECCE674A01C9B41302D59F;
// ScriptableObjectArchitecture.StringGameEventListener
struct StringGameEventListener_t0B03D4C3C8D732CA5C66FA1174EC2E7618652B82;
// ScriptableObjectArchitecture.StringReference
struct StringReference_t9915F2B6495329BB56C97763A4D156D41C6F2671;
// ScriptableObjectArchitecture.StringUnityEvent
struct StringUnityEvent_t59FA1C73271C074A1824F8707ADBA1C054AA0FEF;
// ScriptableObjectArchitecture.StringVariable
struct StringVariable_tC768058ABC2B03C28B3FEE5DCB87C0C5FAAA5A95;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// ScriptableObjectArchitecture.UIntCollection
struct UIntCollection_t8864A2EF7604CDAD6E977CF8959EDB07CA1D2625;
// ScriptableObjectArchitecture.UIntEvent
struct UIntEvent_t7F7B5A13C59AEAB14F4C52BEF1C4FA5495309535;
// ScriptableObjectArchitecture.UIntGameEvent
struct UIntGameEvent_t82F3817A6E72B6839F35D0E77E224F2F13060EF2;
// ScriptableObjectArchitecture.UIntGameEventListener
struct UIntGameEventListener_t0CB83377A835FC7BD0BCF48C165B3DD3DD7F7585;
// ScriptableObjectArchitecture.UIntReference
struct UIntReference_tF1CF487E48EA38B6476BFD64FC22CD6079AA41CD;
// ScriptableObjectArchitecture.UIntUnityEvent
struct UIntUnityEvent_t61650D1B785391AF369AFA348910A7AD1ECEC3F6;
// ScriptableObjectArchitecture.UIntVariable
struct UIntVariable_t4A1E29FE58D9B677A392A87D9E8485F029A40CBD;
// ScriptableObjectArchitecture.ULongCollection
struct ULongCollection_t4E774687376FBCAB01992DD7152D319129C1C094;
// ScriptableObjectArchitecture.ULongEvent
struct ULongEvent_tFF8028EC1F42A7409EEC0F658AF67E2F054581B8;
// ScriptableObjectArchitecture.ULongGameEvent
struct ULongGameEvent_t462480AFC09F11918151533C35F6FCB5852977BA;
// ScriptableObjectArchitecture.ULongGameEventListener
struct ULongGameEventListener_tFEF8BC29FCC37AED04E65F62F7F1B8F9F84A98E7;
// ScriptableObjectArchitecture.ULongReference
struct ULongReference_t529130311DFB997532C2EEEAA0652E34ADDDA23A;
// ScriptableObjectArchitecture.ULongUnityEvent
struct ULongUnityEvent_tFE471A583FF66C73439F494F68BB9B4950B9EAE7;
// ScriptableObjectArchitecture.ULongVariable
struct ULongVariable_tD7CF88ECC9DE6573D0A8B1B8E697635ED166DA81;
// ScriptableObjectArchitecture.UShortCollection
struct UShortCollection_tDC3664B1CD0FA76D07C35F78BB8E1F780E279724;
// ScriptableObjectArchitecture.UShortEvent
struct UShortEvent_t1EC54C8B6BEC718046233ECA48C27B93EF04BCF3;
// ScriptableObjectArchitecture.UShortGameEvent
struct UShortGameEvent_tC6913F61ECBF5B4BB6847ACEA41A41F9FC45BF2B;
// ScriptableObjectArchitecture.UShortGameEventListener
struct UShortGameEventListener_tF26FF279C85F1DD5887600ED308B309AAF61F63E;
// ScriptableObjectArchitecture.UShortReference
struct UShortReference_tBD4A42B6FAAE942562E4C56936132755A8EE3698;
// ScriptableObjectArchitecture.UShortUnityEvent
struct UShortUnityEvent_t9027935402C352BCE2E235D2433CA1C2833B4E94;
// ScriptableObjectArchitecture.UShortVariable
struct UShortVariable_tC6BA1B9071C758A9749549809AD4C2D84CBCB53C;
// ScriptableObjectArchitecture.Examples.UnitHealth
struct UnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// ScriptableObjectArchitecture.Vector2Collection
struct Vector2Collection_t158B9B75A751D120D1733CA8AE7199F345C2F815;
// ScriptableObjectArchitecture.Vector2Event
struct Vector2Event_t718E0878AE1476B25FE6BE2343F3C32E0747E3BF;
// ScriptableObjectArchitecture.Vector2GameEvent
struct Vector2GameEvent_tFE5544B34D94943692D4E1A74A16C95AB4D1BA8B;
// ScriptableObjectArchitecture.Vector2GameEventListener
struct Vector2GameEventListener_tA5FF8A5B1053741154D773C5AF95D9C6770C6FDD;
// ScriptableObjectArchitecture.Vector2Reference
struct Vector2Reference_t0D6D8C8E5EDC113973DD7C21CB99FAF794E27800;
// ScriptableObjectArchitecture.Vector2UnityEvent
struct Vector2UnityEvent_tFACCD0E147A4C97303D511EE6CB0331BACFA09CD;
// ScriptableObjectArchitecture.Vector2Variable
struct Vector2Variable_t46FE876F12DFF5E9D91984CB18904583B408A26B;
// ScriptableObjectArchitecture.Vector3Collection
struct Vector3Collection_t339C872DB642F0AC188007A349AA1F785D7123B4;
// ScriptableObjectArchitecture.Vector3Event
struct Vector3Event_t0CD4C6E3DECAA6EE3FCF2CFB58CA78BACB2EA1F3;
// ScriptableObjectArchitecture.Vector3GameEvent
struct Vector3GameEvent_t072F447112B5B150571FDDB7936E951327CA24D2;
// ScriptableObjectArchitecture.Vector3GameEventListener
struct Vector3GameEventListener_t0FADED75343861926A52F3316CD6D70DA3D83B93;
// ScriptableObjectArchitecture.Vector3Reference
struct Vector3Reference_t065BBF241031C80EE5EF75117A7FCD80BBB8EA58;
// ScriptableObjectArchitecture.Vector3UnityEvent
struct Vector3UnityEvent_t34F400D721F6C8DE0EA8893341DEF09930ECB5C8;
// ScriptableObjectArchitecture.Vector3Variable
struct Vector3Variable_t8E35BC8BDDBF5FF92B26B7D2C26F28CA27B1BEE2;
// ScriptableObjectArchitecture.Vector4Collection
struct Vector4Collection_tAFA94B40B127BBA95A610D13D2D1323E8D6B3E44;
// ScriptableObjectArchitecture.Vector4Event
struct Vector4Event_t85EDBEF9DBDC30A24FD803E2349ECA9FF73C0328;
// ScriptableObjectArchitecture.Vector4GameEvent
struct Vector4GameEvent_tFBE3AE2919B380AF3DB77BEA596B6110CD34F41E;
// ScriptableObjectArchitecture.Vector4GameEventListener
struct Vector4GameEventListener_tC79D0B1461414969D707190A4F3644986C2EA473;
// ScriptableObjectArchitecture.Vector4Reference
struct Vector4Reference_tE93426D6A504F00C4FAEDBB31F69EB942DD2233B;
// ScriptableObjectArchitecture.Vector4UnityEvent
struct Vector4UnityEvent_tB9CD693185F5B6D85ACDA5DE022AB7C31204EE69;
// ScriptableObjectArchitecture.Vector4Variable
struct Vector4Variable_tBC2CA6996A102415C9A87A4A378C75A0CD2D68BE;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGameEventListener_t66A21487E63CB48D94BF9711729C5B17252107B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3DEB37B5B6F59B92978EA53F8472A2EE83F04FF3;
IL2CPP_EXTERN_C String_t* _stringLiteral4D9275A7BD302D336DA37F5980412CA1A43C4F47;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E;
IL2CPP_EXTERN_C String_t* _stringLiteralB8E8B62E307F97D05285D284669C60930DB212E1;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_2__ctor_m4A3A046B0C300F6CE8D7E8B344742DC54B7E4A9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_m0A9EE86529772AACCC4C2B0B3F908FA446E57D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_m189D373B05DEB74D7C3E74574A8259AE8A37E747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_m2B54116449E82E02506DD3E8A400C0CBD9755134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_m35CE0E1DC2B489126982EBEA01728598D47C9B1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_m448434ADFCD3BFF8F541B78724E89F7F304C1FAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_m5FAE008D58F36EE33A5CE97F09F30F5A00171B1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_m692F4F46D354C25906E74A887991F98F50B913F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_m6D31CF1F0B0B511DEC4441D3B443CE646EC0C2E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_m6F4A8E0235D6D1531BCB2017978B9297B157216C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_m7414A0EB12F1D7CFA7CCCF31BA69601EB71DA307_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_m997625FF116A951F8551349B2157667B3234BDA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_m9A83E5DDD2B0D669E331C529C35755EC580CC27C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_mB5F3DF550994877C6406D8AE362F3B64D76B50AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_mBAFF5F6F77F42588EF7A80DEA49B4C8794DE2938_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_mC6AD85CB5946F8E9C97FB5D1F15E302AEEF74D7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_mDF06B5C9DC9CCC7FB3EECB036AED05C7485FBC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_mDF1EC969A89997886056913D894DBE8F7E56A8EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_mE1625F879160AE1B1BB712E81762ACBE0C802F2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_mE96F408AF352E6089F07F4E54F7EA24C32FD677E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseGameEventListener_3__ctor_mEE29566BBB67CF9078FE66EFED7A5BD856B74056_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m01732F5E04DDA7E2AB3781F0E61CEBF80DB2CB1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m032F506AC0181D5C2440FE037373DA606E676221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m0A59A00E8E06449F1A009EF1FA91A1EEF4BDE613_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m0CC86AE8B86CF85E3C655B9377C419B1155D66D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m0DB3E0DF627EBE935BDCCA8DE1ABCAC57513C76B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m127EC54B2CA31A8247EA515834C3A019E3DECF1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m1B44B487CD221F6657DEF47C9F7FC4181324F310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m1F91732F8CBE0582DEEF8A5318D7FA77A113E67E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m1FD85758424DBE30DB3749B7AB64D8E58819F1AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m2C98C1264961A8D4FF37736655CF6F24E8A8EC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m34D7BF0425EF8688C7701AFBAD08D826431974B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m367AEF283E91CB9F21AEB76894D771B561B7DCF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m3DB07D2BA4EDA5998FDB628910B0A678DD11F76D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m45F3B424CD867EC0A24D91A4D9EC9B83B5265C66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m47429BF9CB86E67C4F093BF609C3AB0689DA33A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m539C4D82C5A7E06DFCA64689A146534B14EE9721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m53BB850A6B3D473A2B20BA252C116F2BA4F6F6D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m55443D3CD697E5BEB11A354E35BCC021EAAD9AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m5C63E6FC5FC32B2F329BD40440E48A01EAA22EF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m5C65C640554017A27F8C7DCEC4E018EA26B37A82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m5CA0B8743D886CE7FBA271B62CAE5A11B1F20503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m65ACD764BD6DF70572EAE98668BD3F979344AFCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m68EEAB3C24BF02E41E2BA33D218342988DB75336_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m6F02CF3693449B369991150D9E1B7ADAAA983AA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m6F56503743F8FB0AF8014326021AF7E11EF6347D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m7AAC4A88325C5E2D29F40DF1FC81B26288B98FE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m8076511EF9483CCBB19954F7755CB72DB6B776C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m80D48A5B7E9E77C057031D39C217D5E9F5614A3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m815814F39589EF2F58ACE754328F9AD3FF9A2B48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m8297B3C4D864FCFB4603AA0F6AD43B5DA08F75AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m896A4C22659BD89AB058270846F48057C2DA3937_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m8D2CC01226E366F15E6D41B5957FD44A7124681E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m8DA03C3EA861DFEB95AE94820C415ABCA78D632A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m93E1689A832185D607D235DE1C4C3CA8E16613A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_m982C8BF959AFB778D7F7E300A0FBFC2FB8D4B793_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_mA2BA6CF66DFD452D391572CA8642CC1AD573C1D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_mACB7AE0DB804EF4A3370630666751D5947084CBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_mB14818DDBCAFBBFFEC864EA186691338CC19304F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_mB4C07D98DF058F69F8876CB91A8DB9F909C8F40A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_mB894CE4F4CD70BC8096845DEF0EDAB9D62C074FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_mB8F6AD2FC84D3187CD7CC2C86136D82593CBEC05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_mB9FAF01766B922308177F18080200D534FCD831F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_mBD5F7B1F2B5CDC1C2695ACAE82FFC5063AB7D89F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_mC255DAAB583DDC2EB1474DC5B3FACEF7BEE147BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_mC2D9CBA4EA09611D525F26B3E8426CA7A72A838B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_mCBB2AAD2B1BBC3C3B0DEAD3072C7499C57DE556C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_mD2A402D055C3EE1C37B76C016715AB9AEF4DAD13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_mDB40D68B379C10E5A941B27A96497717E1376FD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_mEF217C7F393C01B21702192049F39AA24CF23ABE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2__ctor_mFA144F5D09CE3EAD313EA9B8AA5A2329A94CD5AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseReference_2_set_Value_m2602A4E2613A195B3A5DF620B2C85E87458214B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_m1BD4D52749E12741A7A25E029ED4C6192862C960_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_m1E99A3D5FEB51293C3EEB40EE52DE24BEC4865B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_m2E0843EEFB79D294CD41C935FA91BAAD0471841B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_m2EF136F6DD1ECAC76B89B69C0980BE7A68EA7D95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_m30AB4B0D3DAD50A547303FFE0DE50A285275412D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_m3C5512D65C483C1F1A2D6D2F6750F8B111F8317C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_m400B8693D0D983CE72D8818DCFB2F72326623143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_m69EB6A4245F97CD25C682ACE0BED540D38956081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_m6E10B8D93A46CB4C3955702B339A532F1DA0C9A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_m8915225DACF57014B30A4AC2C944AAA29416A388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_m8AB29C4AD04586F094B437C78249A5E2A3FCC424_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_m8E7B962FE2B6E59BB15A48A0A530F4E224E7A1DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_m905D2BC11F1321F7F5F93C661D07C3A3F1C586A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_m96234BC7A4A6EE8DDCEF5E2D2046D34BA3A0D764_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_mA62F9D586DC4D3295AC0B4EF6C3B88D86FA9CA4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_mC3AE2C554D5FF06178EEC03ABB2DAE10084E73E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_mC6A4C11E3EC380A5F81AF7748082CEF71CAFFFAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_mCB5D5F2D0546666A3479F1E93F72C7348FFEE93E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_mCF706170C36A8BAAF3999E88766E271736FE5BB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_mCFC19D1633A3CFD39A2F0C4E52EDCBD8E2AD0E1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_mD94973ABEBCD37B62D521D3F012985411A80A639_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_mE902C29A2B4F9F1CB9F4A43BD753E3FB2119BDA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_mF0C8CBD2010D74DB966D9BB343528729BFB87851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_mF9EEF718D542846D02477ED1E731328768117AAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseVariable_2__ctor_mFB96C106A1C1D3F868C6A11CCA1613666CF33D77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_Add_m2EAF0C430C378399FB2CA1DA48B72AAC19B6FA93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_Remove_m4DC756515010B1616F1668CE608D9F1D28300A2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m1061A97C480CF12D016CB0CAF2D3E36F48181671_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m12DD9E260B2938564BAFC445BB75A8155DBAE031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m15C4874CF86AF1298276699209E4E1C3241F8102_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m1E6105AD8495010D1EF7305FA82CE23767721E2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m2D38B37D83086625B38F592379A35B0EBDEE110A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m30B31CF03F024858C828C68A5F44E249CCCAE2F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m31C233038E568DA4C4FED235DE7433653F5C9EB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m3230C84A44BEE424D9647EB0B025B71D96AC722B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m42C2642A4AD812E5F9BC155944AE752DDDD82C80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m47AE47AF17DD8E0963E33DB36684720623784C22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m71549C785738F8144DF98930DC7CF0CE4BFC7D39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m7489EA7478B8551919D3280AE39974F154898675_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m80920E2D67717BE3295D20A49027FE8A6BE7A812_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m874E14161662215424935DBFC52F8848F78FF75D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m8F4A5FE3E67FE0C1CC365F396993AC861FB6EC0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_mA3FAC784EFFB670E68D803A09CB630D533635386_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_mB49EAA293AB1A55C171EE02841F98B294EA3CAA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_mB58B6635A19FCFEB59F7D8E3061A18BAD07F5C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_mBA74243E822805426071429567CBC51B345A3702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_mBBCFD1D653D1AF4A7C99EA09025D75A6666829E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_mC9A7887862C04E3F42AA80DB1085E65BD189D701_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_mCA083ED30CD6075239A204F8B604394D906F6CFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_mCB6A568B1A96A93CCF9088DC0B5CDEAE1A5F9BEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_mF5F52B9CF3D942BC09A924B32D34DF2FE7C314C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_get_Item_m2A002736E97F5AF2AFAF4C6319D71D77E93680D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_m12B6C41F6E439E259CD620518DE0D40190226816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_m21ED1715CFE84E4AB5697A7BCAD7EB37EC6C9CF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_m290183D1C06672EA7E6DABC1E2243A5D338B9FD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_m2E6060DF7CF7C3C376BDAF2E2B080ADAA3598325_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_m411745A00ABD9FBBE7E85DDBF45E214AF964EBD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_m440746E0FE80BCF918E31A3AD95776CC0D9A6A4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_m4682BA9E57D4C7948A6CAFFECFD6174A21082007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_m520A90BEE94441B3387907DFD7C074D04386AC70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_m5EFF93758E19D3AEC43422A1CAE8C8FBB40B92CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_m7063F4706F2D836CC2D93C3730E370DA5DDCABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_m749B28ACC5A3546402521E4AFFD676A96A0CD2CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_m7740F8979A0A9C3BAF0FB694ACFFBD32F78E0CB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_m9D92535D6066AE0F065C224EFABC46AD620221AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_mA45C88F241D4047858E8728DFD5978D519326EA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_mBACCACC5F6D007DF50B55FB33FB292EFD1DFC52F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_mC11DCA0256F07810B61D588E31AC78D882984992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_mC183298F9FC659450273D7CBDF42F4FC384FA38C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_mE7C13CCEECFA8E6C786F436809C76C6284AC23EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_mF0B3AC8BC698936020AA89BF8AD95B8C17CCD5BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameEventBase_1__ctor_mFF1827887C4513CC2EF95D6A2305B42F05EAE93E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98_m061CC7A8DED0C57AF6EF4BD52466243BE1070110_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCEBC4DED600440A7DBAAA37EDE93AF708240658B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m181F2DB6756B1ADDCEC909ADA27A8FDDBD18C002_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2117D821611AE2E4CD3CB8008DA92A974A2D9C37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_mA28A562F34259E1CF253337E52E77A77912455FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_mF86506D6DC21F6CD58C4769D6E71A3E50A3C2285_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mA2266BE2A16098E2952DF622C7899477830F76E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1242F20B63C5DF4CE59F731B3591F5FEA11348AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8B1AB2EA8725F5B6C1D10B2AD740EED33566C78A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9AD2110093D6399438C94DF99535382D17BC2BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m94AD184A1FA97F6C8E621DFF737934839D264902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SOArchitecture_Settings_CreateInstance_mFC28C5F7F3444A8AC5F1A9DF3E5425FB06FCC687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SOArchitecture_Settings_FindInstanceInProject_mE53B58DE3C332229740A11B44DD612D138EC17DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m1334E2CA9BA5661A144E0A018DCB04F564F96B47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m37088B677DD51D108D67186A864FEF14230FB1AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m45C0A37807A6ABE8CC4022F191E14CBE9E89B8BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m478A749123AACC5A1B09691CD7D01E8583040823_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m654E3C4B3BD13FC403E68AD1AD0490D53884E294_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m6CC7B27F29BC4F50FEE2FECBEFBC4450836D7602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m72E5E9F77D48BEAC99A59F585626E00FE0DE9E52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m799270AC2A44EF438FC5DB540A66E0E20553FF84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m89FB371E95EF8A989F257539389EE368643EC708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mA8D3E452D3D9C40E84C9C089B87B946EA9B15278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mB521550BB7E0E37A69FA8F0D9DB32616887A11F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mC0A92C3237B35318DE5F6DBA95707F2B0FF0583A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mC8B4DC23859CD826D11F3914EC0DABEB1883CB69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mD882FB5FAE320D2C50F36BC2FEC6474157F553EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mDBE311970A582A4847FE788142E497E17A7D94BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mF41381CD22DBDAD5BF8373F81680253F7761DE09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mF8CD7C858BE7945CE8860A0C5DFB7DC6B9F93283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tEB9B61F346B4C3EBB6BC9F9745A8430AD0A0F0D7 
{
};

// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener>
struct List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IGameEventListenerU5BU5D_tD8F9EB1B8DF2BCD570C90814E17B1FBFAE767042* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<ScriptableObjectArchitecture.StackTraceEntry>
struct List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StackTraceEntryU5BU5D_t66622B6A3AE9DB549ADB665BADFCFB6AE4F5D0E3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// ScriptableObjectArchitecture.BaseReference
struct BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D  : public RuntimeObject
{
};

// ScriptableObjectArchitecture.QuaternionExtensions
struct QuaternionExtensions_tF5C1EA4F78DFED215F15761897A201893E5297ED  : public RuntimeObject
{
};

// ScriptableObjectArchitecture.SOArchitecture_Utility
struct SOArchitecture_Utility_t3DA6C9A7535792E098B9F7BFEBA3954437691341  : public RuntimeObject
{
};

// ScriptableObjectArchitecture.SceneInfo
struct SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355  : public RuntimeObject
{
	// System.String ScriptableObjectArchitecture.SceneInfo::_sceneName
	String_t* ____sceneName_0;
	// System.Int32 ScriptableObjectArchitecture.SceneInfo::_sceneIndex
	int32_t ____sceneIndex_1;
	// System.Boolean ScriptableObjectArchitecture.SceneInfo::_isSceneEnabled
	bool ____isSceneEnabled_2;
};

// ScriptableObjectArchitecture.StackTraceEntry
struct StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D  : public RuntimeObject
{
	// System.Int32 ScriptableObjectArchitecture.StackTraceEntry::_id
	int32_t ____id_0;
	// System.Int32 ScriptableObjectArchitecture.StackTraceEntry::_frameCount
	int32_t ____frameCount_1;
	// System.String ScriptableObjectArchitecture.StackTraceEntry::_stackTrace
	String_t* ____stackTrace_2;
	// System.Object ScriptableObjectArchitecture.StackTraceEntry::_value
	RuntimeObject* ____value_3;
	// System.Boolean ScriptableObjectArchitecture.StackTraceEntry::_constructedWithValue
	bool ____constructedWithValue_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// ScriptableObjectArchitecture.Vector4Extensions
struct Vector4Extensions_tC29A55058C54F29ED61ECAADD519D829FD003301  : public RuntimeObject
{
};

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.AnimationCurve,ScriptableObjectArchitecture.AnimationCurveVariable>
struct BaseReference_2_t40F45E3A6216916C3134BABF924CC0514FED82A6  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	AnimationCurveVariable_tEFBCC32823AB577813C8B22F02D786DB4E03C240* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.AudioClip,ScriptableObjectArchitecture.AudioClipVariable>
struct BaseReference_2_t820F1AA29672336A6F1BC83BECD1718BE8AACD17  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	AudioClipVariable_t9D688C420D2F42E7C399C292CBD8C7E9B3B61C4E* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<System.Boolean,ScriptableObjectArchitecture.BoolVariable>
struct BaseReference_2_tE9D4D09B97C467C0B3A7EEC15A83B443EC1ED8D6  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	bool ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	BoolVariable_t764ED84F6566C6E161B30BFA786048A217C47EE9* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<System.Byte,ScriptableObjectArchitecture.ByteVariable>
struct BaseReference_2_t07F48D8BA2A4D6B24C3BEFD67FAA10BA9E4F878E  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	uint8_t ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	ByteVariable_t7B084C21DC44CD2E8CA919670C38F867E28152B0* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<System.Char,ScriptableObjectArchitecture.CharVariable>
struct BaseReference_2_t5DAE1C9922344A6B316730CBCC77A403B68A7862  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	Il2CppChar ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	CharVariable_tDE9AB696A98D49BFB368871B12969BB8D7F781CE* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<System.Double,ScriptableObjectArchitecture.DoubleVariable>
struct BaseReference_2_tEE8B6D09995BE8CF0CA72DB1F982D166EB362764  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	double ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	DoubleVariable_tA03B5B5994F2F286D17DC4E12FB1F90ED739B21E* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.GameObject,ScriptableObjectArchitecture.GameObjectVariable>
struct BaseReference_2_t8244AFA94CEC1AB6AE70F75249236DD08C2C9B2E  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	GameObjectVariable_t6ACE562BDAF9BA4EE46F037B6D8E87B3F4EB77F0* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<System.Int16,ScriptableObjectArchitecture.ShortVariable>
struct BaseReference_2_t007E674754FB1E8A900851B1A2C0BA771CE0DF7E  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	int16_t ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	ShortVariable_t98FE5356B5FC0642211510D152F9B8E279D0EB72* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<System.Int32,ScriptableObjectArchitecture.IntVariable>
struct BaseReference_2_tD4104B5F9A64AD91E2E1677B1DA97E35DCDAB478  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	int32_t ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	IntVariable_t82008C985D4FA5C4CF1BAEB30DA8E53A079481FB* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<System.Int64,ScriptableObjectArchitecture.LongVariable>
struct BaseReference_2_t0531AF154CA511A8FB6379FB45C9CDE4FC7FCA32  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	int64_t ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	LongVariable_tA4FEC3B78A4850FEC74F323F408F6E8EDDD8E01E* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Object,ScriptableObjectArchitecture.ObjectVariable>
struct BaseReference_2_t2A17181ACB3C6F467D4AD71AF6DFF1BB9531B2D3  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	ObjectVariable_tD40668E019842D6B40B25C4C438D419F46E2CF82* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<System.SByte,ScriptableObjectArchitecture.SByteVariable>
struct BaseReference_2_tC173A51C612B0A43AF6370E3A19093C734FEE99B  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	int8_t ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	SByteVariable_t190FB798BEDF4572A88A261AF57B305F1A516664* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<ScriptableObjectArchitecture.SceneInfo,ScriptableObjectArchitecture.SceneVariable>
struct BaseReference_2_t72C4DFD81C0D789C4039A82F0EB2C58469F4AE8B  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	SceneVariable_tB891AF435CC040522F30F22B078B93054D0684F8* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<System.Single,ScriptableObjectArchitecture.FloatVariable>
struct BaseReference_2_t03BA1DB557C86701FE7B52CA2E8CA5D27A8DB959  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	float ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	FloatVariable_t625F97534449CC4C0953DD85FA4A2026870756F3* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<System.String,ScriptableObjectArchitecture.StringVariable>
struct BaseReference_2_t713F03FDBF48C4C40222EAE1031971658C167991  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	String_t* ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	StringVariable_tC768058ABC2B03C28B3FEE5DCB87C0C5FAAA5A95* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<System.UInt16,ScriptableObjectArchitecture.UShortVariable>
struct BaseReference_2_t5B75BB4610FAB1E78F00C6929CC4CEC4ABA8978D  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	uint16_t ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	UShortVariable_tC6BA1B9071C758A9749549809AD4C2D84CBCB53C* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<System.UInt32,ScriptableObjectArchitecture.UIntVariable>
struct BaseReference_2_t30FBC7B781CD0110430B92060D1C8D1A358B19A9  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	uint32_t ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	UIntVariable_t4A1E29FE58D9B677A392A87D9E8485F029A40CBD* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<System.UInt64,ScriptableObjectArchitecture.ULongVariable>
struct BaseReference_2_tF9E22219A95F8982B5622F9F3888A7E93912003C  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	uint64_t ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	ULongVariable_tD7CF88ECC9DE6573D0A8B1B8E697635ED166DA81* ____variable_2;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.AnimationCurve>
struct UnityEvent_1_t50584CC80E46926AB8BD5EA68F203DA8FE8AF415  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.AudioClip>
struct UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Byte>
struct UnityEvent_1_tFACDCC5DE4AEC520C1F3F113700A5F35BB05D4A4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Char>
struct UnityEvent_1_t263F7C01FC33C17A6DAF0ED264709AE83E03B3D2  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color32>
struct UnityEvent_1_tEBA2D509B0987DC4A8E228671D832ABEA54CAB68  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Double>
struct UnityEvent_1_t7EBD40037C3DBB4EEFE941AEFD2E3CA88C7382ED  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject>
struct UnityEvent_1_t1A08C69A745D79C1F101AD784277E54DF250C6E2  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Int16>
struct UnityEvent_1_tD34E58DBA2551C12054B5DE25F61F208892C19DC  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Int64>
struct UnityEvent_1_t04EB8F75BA20E19772BBB0023A57CC7FBAFED743  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.LayerMask>
struct UnityEvent_1_t6DAA6F7C6E748D32351CEF1C56ECF572BD49FBDD  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Object>
struct UnityEvent_1_t3B706B8CA3352B79F48B396EEFD6A1EF2E1388BA  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Quaternion>
struct UnityEvent_1_tA3CC6DC833EBB0864AD5E6F9BE8920D7E71B32A5  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.SByte>
struct UnityEvent_1_tC88F80D21305B15BE70F4D4350BA4FA52A6D21C8  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<ScriptableObjectArchitecture.SceneInfo>
struct UnityEvent_1_t34ADF6028DB29D29746FDFAA3E6A09464A0CC6B4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.UInt16>
struct UnityEvent_1_tC730276456093E44C28B05F95C654FF94C881497  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.UInt32>
struct UnityEvent_1_t205E4D1A377E9351AED6C5DA5FC0446C7BBEF2EB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.UInt64>
struct UnityEvent_1_tDB4BD67BA2696C34F7FBC7567EB699C57B966568  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>
struct UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector4>
struct UnityEvent_1_t7FA3641C06EC4F8BD5600438DB4CB16B7042FB59  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// MultiLine
struct MultiLine_t83C374343402375FC5051DBEA8EEAC19E93EFBAA  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Color,ScriptableObjectArchitecture.ColorVariable>
struct BaseReference_2_tC9D8EE1DCE39D9493AF33CAFED754C93F5E80EBC  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	ColorVariable_t130F20F7BA68AE04C3AFCF170DB660F41D7FF845* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Color32,ScriptableObjectArchitecture.Color32Variable>
struct BaseReference_2_tFD456C49180EC96D2D78529AF30282416B52C11F  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	Color32Variable_tD702FAAD694BB1EADC02DE5D40D8A4E81CA11168* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.LayerMask,ScriptableObjectArchitecture.LayerMaskVariable>
struct BaseReference_2_tFDF4F509AD18EB8FC6BDAC1F3A23E058488C3FD8  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	LayerMaskVariable_t3A7C3590239A92777BA87C3A299FC83C092C124C* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Quaternion,ScriptableObjectArchitecture.QuaternionVariable>
struct BaseReference_2_t7F5B27B38BF518E4EAB3D249B5B4595CED90BD37  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	QuaternionVariable_t865364A28D530DAE702A02D51EA8F22B85F45286* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector2,ScriptableObjectArchitecture.Vector2Variable>
struct BaseReference_2_t4E2F2C5F52CE1B5D754972E26B16A9529692EA47  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	Vector2Variable_t46FE876F12DFF5E9D91984CB18904583B408A26B* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector3,ScriptableObjectArchitecture.Vector3Variable>
struct BaseReference_2_t6AC812605ED8637BB240F30E179085638317B5B3  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	Vector3Variable_t8E35BC8BDDBF5FF92B26B7D2C26F28CA27B1BEE2* ____variable_2;
};

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector4,ScriptableObjectArchitecture.Vector4Variable>
struct BaseReference_2_t098E3480950B1D18E0D7EB89DA9077AFB63EDA1F  : public BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D
{
	// System.Boolean ScriptableObjectArchitecture.BaseReference`2::_useConstant
	bool ____useConstant_0;
	// TBase ScriptableObjectArchitecture.BaseReference`2::_constantValue
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____constantValue_1;
	// TVariable ScriptableObjectArchitecture.BaseReference`2::_variable
	Vector4Variable_tBC2CA6996A102415C9A87A4A378C75A0CD2D68BE* ____variable_2;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// ScriptableObjectArchitecture.AnimationCurveEvent
struct AnimationCurveEvent_t8425E6F34793FDA4C7BBD2D39802FF8E79315D72  : public UnityEvent_1_t50584CC80E46926AB8BD5EA68F203DA8FE8AF415
{
};

// ScriptableObjectArchitecture.AnimationCurveReference
struct AnimationCurveReference_t88F5A8D871FC79AD8AF7FEDCDE9CA75ED10279FA  : public BaseReference_2_t40F45E3A6216916C3134BABF924CC0514FED82A6
{
};

// ScriptableObjectArchitecture.AudioClipEvent
struct AudioClipEvent_tDECC8215AAAFE8548EB1C094CC24489A9638D347  : public UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B
{
};

// ScriptableObjectArchitecture.AudioClipReference
struct AudioClipReference_t1E628662E4C452ED1F1CC0082FFB338E49EDDAE9  : public BaseReference_2_t820F1AA29672336A6F1BC83BECD1718BE8AACD17
{
};

// ScriptableObjectArchitecture.AudioClipUnityEvent
struct AudioClipUnityEvent_t6B7F109FD58E7CC27A879A56370DA25F41091703  : public UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B
{
};

// ScriptableObjectArchitecture.BoolEvent
struct BoolEvent_t9E22CE96A421ED7B689F1F98615708E601D0BEA4  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// ScriptableObjectArchitecture.BoolReference
struct BoolReference_t6EE3E5E7B5D9807C5A7CA8E83FEB21215FE65216  : public BaseReference_2_tE9D4D09B97C467C0B3A7EEC15A83B443EC1ED8D6
{
};

// ScriptableObjectArchitecture.BoolUnityEvent
struct BoolUnityEvent_t3DC03DEB567860D8A4740F53037DE97238FC5241  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// ScriptableObjectArchitecture.ByteEvent
struct ByteEvent_t49C81C726E0E3E6616ABE0DDDF1B989BDC36D5D9  : public UnityEvent_1_tFACDCC5DE4AEC520C1F3F113700A5F35BB05D4A4
{
};

// ScriptableObjectArchitecture.ByteReference
struct ByteReference_t43B5A0BE3EC400FE1B7DF275BC9D6C8F33A1ECD9  : public BaseReference_2_t07F48D8BA2A4D6B24C3BEFD67FAA10BA9E4F878E
{
};

// ScriptableObjectArchitecture.ByteUnityEvent
struct ByteUnityEvent_t3CCFD9FB0D2771003BA557CE58592A5FEF7DA938  : public UnityEvent_1_tFACDCC5DE4AEC520C1F3F113700A5F35BB05D4A4
{
};

// ScriptableObjectArchitecture.CharEvent
struct CharEvent_tA8ECC2465A8413751CB562863E29F17301D71969  : public UnityEvent_1_t263F7C01FC33C17A6DAF0ED264709AE83E03B3D2
{
};

// ScriptableObjectArchitecture.CharReference
struct CharReference_t05920017F5B64F042A9887D2766ACB509AF54610  : public BaseReference_2_t5DAE1C9922344A6B316730CBCC77A403B68A7862
{
};

// ScriptableObjectArchitecture.CharUnityEvent
struct CharUnityEvent_t65969389D8D3FDCD61FE06244135DA2D8E317901  : public UnityEvent_1_t263F7C01FC33C17A6DAF0ED264709AE83E03B3D2
{
};

// ScriptableObjectArchitecture.Color32Event
struct Color32Event_tFC2B4948119A3C96B1B1CC0430BEFDED013ABA5D  : public UnityEvent_1_tEBA2D509B0987DC4A8E228671D832ABEA54CAB68
{
};

// ScriptableObjectArchitecture.ColorEvent
struct ColorEvent_tA39160CDC0F52D13A7925E7A3AFB41FD619461CE  : public UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9
{
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

// ScriptableObjectArchitecture.DoubleEvent
struct DoubleEvent_t9E247B7B528C53E6196DA2AF493B0CBB30A3A701  : public UnityEvent_1_t7EBD40037C3DBB4EEFE941AEFD2E3CA88C7382ED
{
};

// ScriptableObjectArchitecture.DoubleReference
struct DoubleReference_tA7CE0C564A0FC88326FB690EE4765DC2FBD4A31C  : public BaseReference_2_tEE8B6D09995BE8CF0CA72DB1F982D166EB362764
{
};

// ScriptableObjectArchitecture.DoubleUnityEvent
struct DoubleUnityEvent_t0DAD03C14781D4F051C81D8181E252078E0F342E  : public UnityEvent_1_t7EBD40037C3DBB4EEFE941AEFD2E3CA88C7382ED
{
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

// ScriptableObjectArchitecture.FloatEvent
struct FloatEvent_tB842FF4F4F6D92915AE23F63DF474F7A8D57A2DB  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// ScriptableObjectArchitecture.FloatReference
struct FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA  : public BaseReference_2_t03BA1DB557C86701FE7B52CA2E8CA5D27A8DB959
{
};

// ScriptableObjectArchitecture.FloatUnityEvent
struct FloatUnityEvent_t3A247A5F43BB878717D8C7613C0CE75E2B395C44  : public UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4
{
};

// ScriptableObjectArchitecture.GameObjectEvent
struct GameObjectEvent_tA0A9A30926A3CCCA00B95EC7F4F3C5FBFD1E4FB6  : public UnityEvent_1_t1A08C69A745D79C1F101AD784277E54DF250C6E2
{
};

// ScriptableObjectArchitecture.GameObjectReference
struct GameObjectReference_t4064888F223DD110E1AEFF0031A25B4B356142AB  : public BaseReference_2_t8244AFA94CEC1AB6AE70F75249236DD08C2C9B2E
{
};

// ScriptableObjectArchitecture.GameObjectUnityEvent
struct GameObjectUnityEvent_tCD6656AAE77281E6C7677461077E615700AF99C2  : public UnityEvent_1_t1A08C69A745D79C1F101AD784277E54DF250C6E2
{
};

// ScriptableObjectArchitecture.IntEvent
struct IntEvent_t6E813C75E50D398D15DFABD06B2662AA65D2CDC2  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// ScriptableObjectArchitecture.IntReference
struct IntReference_t37CF127DDC4449029C569E578C54F2B6C56A653C  : public BaseReference_2_tD4104B5F9A64AD91E2E1677B1DA97E35DCDAB478
{
};

// ScriptableObjectArchitecture.IntUnityEvent
struct IntUnityEvent_t5E2E9FFCE129B23030739FAC107AE8C291FE0FAC  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// ScriptableObjectArchitecture.LayerMaskEvent
struct LayerMaskEvent_tEA3D1A798F92C909C30C71D4BAF4CB7FCD8C445F  : public UnityEvent_1_t6DAA6F7C6E748D32351CEF1C56ECF572BD49FBDD
{
};

// ScriptableObjectArchitecture.LongEvent
struct LongEvent_tE766B8639111C11D6A9A858A8BA02E7407EBD5E2  : public UnityEvent_1_t04EB8F75BA20E19772BBB0023A57CC7FBAFED743
{
};

// ScriptableObjectArchitecture.LongReference
struct LongReference_tF59CCFB6672EADDA9740995E4D788F426295CCBB  : public BaseReference_2_t0531AF154CA511A8FB6379FB45C9CDE4FC7FCA32
{
};

// ScriptableObjectArchitecture.LongUnityEvent
struct LongUnityEvent_tFC54A330177C9AE9D3083A13067F0E71CD6C74C7  : public UnityEvent_1_t04EB8F75BA20E19772BBB0023A57CC7FBAFED743
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// ScriptableObjectArchitecture.ObjectEvent
struct ObjectEvent_t866AB59919D93646DD80F161CA6DE3EE46652E82  : public UnityEvent_1_t3B706B8CA3352B79F48B396EEFD6A1EF2E1388BA
{
};

// ScriptableObjectArchitecture.ObjectReference
struct ObjectReference_t5C0CFD796302FFDC50AA85BDAE843D0EDCD1880A  : public BaseReference_2_t2A17181ACB3C6F467D4AD71AF6DFF1BB9531B2D3
{
};

// ScriptableObjectArchitecture.ObjectUnityEvent
struct ObjectUnityEvent_tF6D74281C00838E84095B46668A73F507CE8FF0B  : public UnityEvent_1_t3B706B8CA3352B79F48B396EEFD6A1EF2E1388BA
{
};

// ScriptableObjectArchitecture.QuaternionEvent
struct QuaternionEvent_tE171C4D239E81820286C61E70309BFF13E0305F8  : public UnityEvent_1_tA3CC6DC833EBB0864AD5E6F9BE8920D7E71B32A5
{
};

// ScriptableObjectArchitecture.QuaternionUnityEvent
struct QuaternionUnityEvent_t09FC1304F10E793FCC18D599DCD674ACA1BBC27B  : public UnityEvent_1_tA3CC6DC833EBB0864AD5E6F9BE8920D7E71B32A5
{
};

// ScriptableObjectArchitecture.SByteEvent
struct SByteEvent_t3AFB7C2A6ADA47EE417B267DC06711952994ECE0  : public UnityEvent_1_tC88F80D21305B15BE70F4D4350BA4FA52A6D21C8
{
};

// ScriptableObjectArchitecture.SByteReference
struct SByteReference_t74E6620231B774545C8AFA342E084DA4D03C01B0  : public BaseReference_2_tC173A51C612B0A43AF6370E3A19093C734FEE99B
{
};

// ScriptableObjectArchitecture.SByteUnityEvent
struct SByteUnityEvent_t84D3DC8700141FCBB62AADB63815F3588FA2B4EB  : public UnityEvent_1_tC88F80D21305B15BE70F4D4350BA4FA52A6D21C8
{
};

// ScriptableObjectArchitecture.SceneInfoEvent
struct SceneInfoEvent_t6E385A78EB8BBBB8C877D8A59ECBFDDFEE1B1112  : public UnityEvent_1_t34ADF6028DB29D29746FDFAA3E6A09464A0CC6B4
{
};

// ScriptableObjectArchitecture.SceneReference
struct SceneReference_tE720D965A9643BB4D2DAE85BDF3DCC679CC05580  : public BaseReference_2_t72C4DFD81C0D789C4039A82F0EB2C58469F4AE8B
{
};

// ScriptableObjectArchitecture.ShortEvent
struct ShortEvent_t31F6A39B91142554E628891B33CCF506D2E92D02  : public UnityEvent_1_tD34E58DBA2551C12054B5DE25F61F208892C19DC
{
};

// ScriptableObjectArchitecture.ShortReference
struct ShortReference_tBAF12BD2CA0E1E6B505B8F34298E9D7385E94B40  : public BaseReference_2_t007E674754FB1E8A900851B1A2C0BA771CE0DF7E
{
};

// ScriptableObjectArchitecture.ShortUnityEvent
struct ShortUnityEvent_tC5459397DACCF8E25FA98CE353B2C49820054C4C  : public UnityEvent_1_tD34E58DBA2551C12054B5DE25F61F208892C19DC
{
};

// ScriptableObjectArchitecture.StringEvent
struct StringEvent_t774918EF8789B33F5F83809DAB99159BDCB01B2D  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// ScriptableObjectArchitecture.StringReference
struct StringReference_t9915F2B6495329BB56C97763A4D156D41C6F2671  : public BaseReference_2_t713F03FDBF48C4C40222EAE1031971658C167991
{
};

// ScriptableObjectArchitecture.StringUnityEvent
struct StringUnityEvent_t59FA1C73271C074A1824F8707ADBA1C054AA0FEF  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// ScriptableObjectArchitecture.UIntEvent
struct UIntEvent_t7F7B5A13C59AEAB14F4C52BEF1C4FA5495309535  : public UnityEvent_1_t205E4D1A377E9351AED6C5DA5FC0446C7BBEF2EB
{
};

// ScriptableObjectArchitecture.UIntReference
struct UIntReference_tF1CF487E48EA38B6476BFD64FC22CD6079AA41CD  : public BaseReference_2_t30FBC7B781CD0110430B92060D1C8D1A358B19A9
{
};

// ScriptableObjectArchitecture.UIntUnityEvent
struct UIntUnityEvent_t61650D1B785391AF369AFA348910A7AD1ECEC3F6  : public UnityEvent_1_t205E4D1A377E9351AED6C5DA5FC0446C7BBEF2EB
{
};

// ScriptableObjectArchitecture.ULongEvent
struct ULongEvent_tFF8028EC1F42A7409EEC0F658AF67E2F054581B8  : public UnityEvent_1_tDB4BD67BA2696C34F7FBC7567EB699C57B966568
{
};

// ScriptableObjectArchitecture.ULongReference
struct ULongReference_t529130311DFB997532C2EEEAA0652E34ADDDA23A  : public BaseReference_2_tF9E22219A95F8982B5622F9F3888A7E93912003C
{
};

// ScriptableObjectArchitecture.ULongUnityEvent
struct ULongUnityEvent_tFE471A583FF66C73439F494F68BB9B4950B9EAE7  : public UnityEvent_1_tDB4BD67BA2696C34F7FBC7567EB699C57B966568
{
};

// ScriptableObjectArchitecture.UShortEvent
struct UShortEvent_t1EC54C8B6BEC718046233ECA48C27B93EF04BCF3  : public UnityEvent_1_tC730276456093E44C28B05F95C654FF94C881497
{
};

// ScriptableObjectArchitecture.UShortReference
struct UShortReference_tBD4A42B6FAAE942562E4C56936132755A8EE3698  : public BaseReference_2_t5B75BB4610FAB1E78F00C6929CC4CEC4ABA8978D
{
};

// ScriptableObjectArchitecture.UShortUnityEvent
struct UShortUnityEvent_t9027935402C352BCE2E235D2433CA1C2833B4E94  : public UnityEvent_1_tC730276456093E44C28B05F95C654FF94C881497
{
};

// ScriptableObjectArchitecture.Vector2Event
struct Vector2Event_t718E0878AE1476B25FE6BE2343F3C32E0747E3BF  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// ScriptableObjectArchitecture.Vector2UnityEvent
struct Vector2UnityEvent_tFACCD0E147A4C97303D511EE6CB0331BACFA09CD  : public UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932
{
};

// ScriptableObjectArchitecture.Vector3Event
struct Vector3Event_t0CD4C6E3DECAA6EE3FCF2CFB58CA78BACB2EA1F3  : public UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE
{
};

// ScriptableObjectArchitecture.Vector3UnityEvent
struct Vector3UnityEvent_t34F400D721F6C8DE0EA8893341DEF09930ECB5C8  : public UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE
{
};

// ScriptableObjectArchitecture.Vector4Event
struct Vector4Event_t85EDBEF9DBDC30A24FD803E2349ECA9FF73C0328  : public UnityEvent_1_t7FA3641C06EC4F8BD5600438DB4CB16B7042FB59
{
};

// ScriptableObjectArchitecture.Vector4UnityEvent
struct Vector4UnityEvent_tB9CD693185F5B6D85ACDA5DE022AB7C31204EE69  : public UnityEvent_1_t7FA3641C06EC4F8BD5600438DB4CB16B7042FB59
{
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// ScriptableObjectArchitecture.Color32Reference
struct Color32Reference_tF0EE24E8AEA963BA7EA196775D30C2CA3A32CC44  : public BaseReference_2_tFD456C49180EC96D2D78529AF30282416B52C11F
{
};

// ScriptableObjectArchitecture.ColorReference
struct ColorReference_tFC9605CB8EE6952FBB8772A2AB93C877D7238AE7  : public BaseReference_2_tC9D8EE1DCE39D9493AF33CAFED754C93F5E80EBC
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

// ScriptableObjectArchitecture.LayerMaskReference
struct LayerMaskReference_tDC3CC941C7366760C6054758794C9C24ABAB8DBA  : public BaseReference_2_tFDF4F509AD18EB8FC6BDAC1F3A23E058488C3FD8
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

// ScriptableObjectArchitecture.QuaternionReference
struct QuaternionReference_t6127F39A2A4D1E46E2DBCEE48D507A133DB1291A  : public BaseReference_2_t7F5B27B38BF518E4EAB3D249B5B4595CED90BD37
{
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

// ScriptableObjectArchitecture.Vector2Reference
struct Vector2Reference_t0D6D8C8E5EDC113973DD7C21CB99FAF794E27800  : public BaseReference_2_t4E2F2C5F52CE1B5D754972E26B16A9529692EA47
{
};

// ScriptableObjectArchitecture.Vector3Reference
struct Vector3Reference_t065BBF241031C80EE5EF75117A7FCD80BBB8EA58  : public BaseReference_2_t6AC812605ED8637BB240F30E179085638317B5B3
{
};

// ScriptableObjectArchitecture.Vector4Reference
struct Vector4Reference_tE93426D6A504F00C4FAEDBB31F69EB942DD2233B  : public BaseReference_2_t098E3480950B1D18E0D7EB89DA9077AFB63EDA1F
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

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// ScriptableObjectArchitecture.SOArchitectureBaseObject
struct SOArchitectureBaseObject_t5F7D212ABE0AAA356A8D13D81468DCC5EFFC631B  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// ScriptableObjectArchitecture.SOArchitecture_Settings
struct SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String ScriptableObjectArchitecture.SOArchitecture_Settings::_codeGenerationTargetDirectory
	String_t* ____codeGenerationTargetDirectory_8;
	// System.Boolean ScriptableObjectArchitecture.SOArchitecture_Settings::_codeGenerationAllowOverwrite
	bool ____codeGenerationAllowOverwrite_9;
	// System.Int32 ScriptableObjectArchitecture.SOArchitecture_Settings::_defualtCreateAssetMenuOrder
	int32_t ____defualtCreateAssetMenuOrder_10;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ScriptableObjectArchitecture.BaseCollection
struct BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1  : public SOArchitectureBaseObject_t5F7D212ABE0AAA356A8D13D81468DCC5EFFC631B
{
};

// ScriptableObjectArchitecture.GameEventBase
struct GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272  : public SOArchitectureBaseObject_t5F7D212ABE0AAA356A8D13D81468DCC5EFFC631B
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener> ScriptableObjectArchitecture.GameEventBase::_listeners
	List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* ____listeners_4;
	// System.Collections.Generic.List`1<System.Action> ScriptableObjectArchitecture.GameEventBase::_actions
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ____actions_5;
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.StackTraceEntry> ScriptableObjectArchitecture.GameEventBase::_stackTraces
	List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A* ____stackTraces_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ScriptableObjectArchitecture.Collection`1<UnityEngine.AnimationCurve>
struct Collection_1_tBDB85857CDFC02E3FE579BA9F05EC13E4D11A626  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t5EF663E73FF17D3543A010E3E1EC10BE0C94F563* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<UnityEngine.AudioClip>
struct Collection_1_tB9F83B60496EBB18BB23457FE18DB750F00E21F5  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t33C1B21871505CF0516B63C148CD83EDA452BB5F* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<System.Boolean>
struct Collection_1_t5C8F9118B15F25FC4A09C8016386BB536D871C3F  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<System.Byte>
struct Collection_1_tB75730F824C5260D4684D8F27E54CB7EDDD8B325  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<System.Char>
struct Collection_1_tE9F523232A24F4715C3883FC3B4A28057E663008  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Color>
struct Collection_1_t5152D20A91B22A024A9F5CAAD5558E46AF1F2418  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Color32>
struct Collection_1_tC7145F80C9C94F813E69D62632C7792F1B8FF9D1  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<System.Double>
struct Collection_1_tF42A5F6F7CC263124814E46F42FD3E5D42C00AC8  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<UnityEngine.GameObject>
struct Collection_1_t094F7E1819D7E0C9778C527D1401CEDB4CCA56C1  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<System.Int16>
struct Collection_1_tDCE3D258879871CA66B574AD37FE25FFF44FD408  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<System.Int32>
struct Collection_1_t17C42C2463B620CB15A1B7630A300F354504CDBC  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<System.Int64>
struct Collection_1_t8CADAF8D3E23E843E6FE47B5EE8DE7401BFEC2E6  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Object>
struct Collection_1_t7E13658BAB9E9597A202B079AA1A44E9683CDEC2  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Quaternion>
struct Collection_1_tBF0E04DD341E3966F3DA4AA95DE2B8C2040891CE  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<System.SByte>
struct Collection_1_tFF583AA72D09BB380446A612689A683D456C19A7  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<ScriptableObjectArchitecture.SceneInfo>
struct Collection_1_t3BF8F10ACC0AC01963B552916F67A52F0580AFB3  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t876C01CC17181CDC39E83B293544C8A8A8D03359* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<System.Single>
struct Collection_1_t798BA4D0A9B3200F245DECF04442FFE29D74CDF8  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<System.String>
struct Collection_1_tDE136E76AA13C59D68071661079C19B65415023B  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<System.UInt16>
struct Collection_1_t7EC3F483C8D83EF91FB906313C16530E0ED7EF83  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<System.UInt32>
struct Collection_1_t848830310C624ECF361E5DB5D65F98CDE80CFC84  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<System.UInt64>
struct Collection_1_t13C8178151B8D78737D26BABB2AC4BB2EFC0C083  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Vector2>
struct Collection_1_t56D4A3CBD784ED40DE7DF5FBB7FA9FD1AFD17404  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Vector3>
struct Collection_1_tE0178F131BFCB95DF652FF8E1381E2F154FD3C20  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____list_4;
};

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Vector4>
struct Collection_1_tF625EEE1C009CE0E79AE9D238374159154E73779  : public BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1
{
	// System.Collections.Generic.List`1<T> ScriptableObjectArchitecture.Collection`1::_list
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ____list_4;
};

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.AudioClip>
struct GameEventBase_1_t2672A3A8FEB9CEAA9F57BC3EB5F5B1D1F8366B13  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_tE47617278DB303DCBD88A8425418B66969743F85* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_t5661A3AF75A66C6B913790192F31B224E12E9181* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<System.Boolean>
struct GameEventBase_1_t10E7740AC1F783C5F77C831B62E35F9B8CB724A0  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_t6A72F1BECEB982F2BF28AA9E3ECCF323A6E4636B* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	bool ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<System.Byte>
struct GameEventBase_1_tBCF2C748D38C899013F74A9DD65DA37E4D039E8B  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_tE122EF8F77AF256BA79CC135BF88F78DB79D0910* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_t5E9A9F422AECEB4A7516922FD336ACE3B44397FD* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	uint8_t ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<System.Char>
struct GameEventBase_1_tB539EE24E3C9D31E9C50740CAA1EBD5CD325C837  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_tBDE3A9E84042C4254AE55BC9243184C2880BD5BB* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_tBF1C7A14F04B3BA630470DCE63C1352EB82D947D* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	Il2CppChar ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<System.Double>
struct GameEventBase_1_t4A08A3353ACC37D7D4F0A4043139C8E7370D173F  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_t5E7FBCED1F48B68445EC4A248AEB22CB9794160B* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_tE8DC132B9884C5D95887D4384BAC3676845BD0D9* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	double ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.GameObject>
struct GameEventBase_1_tCAA51EC4846977F9612E78EC703647682F76D382  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_t84F86C9B4DA0C67554E18A084DFC6DDBCCD437A7* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_t261B5FB86860583ED8B529D12A8662404F52324A* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<System.Int16>
struct GameEventBase_1_tF173A269C6C3C0AE716BB70993BAB9CBCE00551B  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_tF2488B1BDB5329C85CE65D61CEB1D58F603F9885* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_t791313CB49D22B6CF09187D9BC5C288EBA1072DD* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	int16_t ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<System.Int32>
struct GameEventBase_1_t08486ECCC1D87A7ADDDDF601112C51D9402C0453  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_t2F44FA50A88C6F2F1B5ADE8DB2FA1DBF47DF84F9* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_t1380C530A5D2929C738AA31853B9EA4A6757EA30* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	int32_t ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<System.Int64>
struct GameEventBase_1_t4940927CCF59A809C511974B9C7F760807524B18  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_tC28414C2A8F5DC34B64E39CE1C642931ACABA96A* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_t3F20F902C852B0CB50C0CD1DE43396B989498082* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	int64_t ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Object>
struct GameEventBase_1_t456FA50EA4B9C6BBBBAB664F3B1BDBE1EEF9F328  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_t645B60B869CA35DA90BC6FFA93CFC80339088EEF* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_tEE8D2D32D0C7C37D09D75419EFC974F6CCF23FF4* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Quaternion>
struct GameEventBase_1_t8A361FAC6D46AD51B5D45288F299DA234D8B792B  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_tF0DCE277C662708FBB04C67AEFFFD8A0E9F5A608* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_tB32E59560FA5C81D30635D5E4675DA6F3DA38FF0* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<System.SByte>
struct GameEventBase_1_t671515C5D620EF9D9F2B205ED87F254EDB2665CA  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_t04BE7DA87B34E820DF81350F44693087A48DF590* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_t73F4275B009028189EF2943A60594B97847A0600* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	int8_t ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<System.Single>
struct GameEventBase_1_tF2FB7A1D2DF48AD421FB12ADE83EF18F27DFD997  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_tEA8FD9650DA003A5A30B4436C4D2CFDD6BAFC550* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_t71EFF5A5F787719FCA16651E55B031F15ECF78AB* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	float ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<System.String>
struct GameEventBase_1_tE944FE9F846468030EC60A5164C60CB9583C0B2F  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_t58E736455EE1B25BC104A7B34133828ACCA99E34* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_tBB25F7EA475FB5AB9F915049CB3BB346A234C92C* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	String_t* ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<System.UInt16>
struct GameEventBase_1_tE24979B752D2587943DC375EB883825387E68B74  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_tB4AD6C9312B08229EA0EA37836B1CA65E4B117DF* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_t83982B72AA6B84133B7BB3EFF540BA19F610B722* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	uint16_t ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<System.UInt32>
struct GameEventBase_1_tD31DE5B30A0CE236DACDA70921390F40C8364BED  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_t2B574EFE9EFD8B50973B14665281996FDED06D25* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_t1B19FADC50B286B9643AA34D1CADC1F25636E89C* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	uint32_t ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<System.UInt64>
struct GameEventBase_1_tB21A71EACB908B7D589EA25E08A9438A6DCD97CF  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_t4DCAE92D8625FD60CEB0C8DEBEA40BBEDD02152D* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_t8A7119A5619B4033E1C4C56CC8EA7101B1D805D6* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	uint64_t ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Vector2>
struct GameEventBase_1_tA38DC9B336201DEA0FC0EA056F28499530382482  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_tB717C1281A382E47783BB3C2591B4A45D63ADC80* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_tEF6BBA7F0B9C545EC4AA549F4B1E3727A873E659* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Vector3>
struct GameEventBase_1_t15AA158F87755BB2A88ADEE918BDDD2DAB2BECB4  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_t9BC4A36BFBC2390304A14C175BADF123B11B70D8* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_t477A237BF4526D7D64E204B9E93B4D4025C96FCB* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____debugValue_9;
};

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Vector4>
struct GameEventBase_1_t91A1F511B0E04EB48E0F7A8D952888C04544BF89  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedListeners
	List_1_t21C9880440288D5DB015EEB96B594338F5D5F5E0* ____typedListeners_7;
	// System.Collections.Generic.List`1<System.Action`1<T>> ScriptableObjectArchitecture.GameEventBase`1::_typedActions
	List_1_t30E104C2BFA3BFF0F1781827DC00462C951524D8* ____typedActions_8;
	// T ScriptableObjectArchitecture.GameEventBase`1::_debugValue
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____debugValue_9;
};

// ScriptableObjectArchitecture.BaseVariable
struct BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
};

// ScriptableObjectArchitecture.Examples.CollectionCountDisplayer
struct CollectionCountDisplayer_t06DD005995A1E61037533220BA8DE6E36D547F7F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text ScriptableObjectArchitecture.Examples.CollectionCountDisplayer::_textTarget
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____textTarget_4;
	// ScriptableObjectArchitecture.BaseCollection ScriptableObjectArchitecture.Examples.CollectionCountDisplayer::_setTarget
	BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1* ____setTarget_5;
	// System.String ScriptableObjectArchitecture.Examples.CollectionCountDisplayer::_textFormat
	String_t* ____textFormat_6;
};

// ScriptableObjectArchitecture.Examples.DamageDealer
struct DamageDealer_t3CBE22A92F8B74E798381E22B3C57A7ABAD30BE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ScriptableObjectArchitecture.FloatReference ScriptableObjectArchitecture.Examples.DamageDealer::_damageAmount
	FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* ____damageAmount_4;
};

// ScriptableObjectArchitecture.Examples.Disabler
struct Disabler_t65314708659D5B8508C1CA82E23C6EFA25470550  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ScriptableObjectArchitecture.GameObjectCollection ScriptableObjectArchitecture.Examples.Disabler::_targetSet
	GameObjectCollection_t9C76F2B578978C3D59931E99C258454EC1EAAF2C* ____targetSet_4;
};

// ScriptableObjectArchitecture.GameEvent
struct GameEvent_t65A32CE97E4D95E608D0EED1BADF578B3D75817E  : public GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272
{
};

// ScriptableObjectArchitecture.Examples.ImageFillSetter
struct ImageFillSetter_t9375940E434A0D4B33FE297F27C75A9D0E327FE9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ScriptableObjectArchitecture.FloatReference ScriptableObjectArchitecture.Examples.ImageFillSetter::_variable
	FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* ____variable_4;
	// ScriptableObjectArchitecture.FloatReference ScriptableObjectArchitecture.Examples.ImageFillSetter::_maxValue
	FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* ____maxValue_5;
	// UnityEngine.UI.Image ScriptableObjectArchitecture.Examples.ImageFillSetter::_imageTarget
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____imageTarget_6;
};

// ScriptableObjectArchitecture.Examples.KeyboardMover
struct KeyboardMover_t6C56E504C2A63CFA0444A2A84D158AE36EABF107  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ScriptableObjectArchitecture.FloatReference ScriptableObjectArchitecture.Examples.KeyboardMover::_moveSpeed
	FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* ____moveSpeed_4;
};

// ScriptableObjectArchitecture.Examples.ObjectAdder
struct ObjectAdder_tAAFA230FFFDF028DE8AF9FA5DBDD70C49D95B30A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ScriptableObjectArchitecture.GameObjectCollection ScriptableObjectArchitecture.Examples.ObjectAdder::_targetCollection
	GameObjectCollection_t9C76F2B578978C3D59931E99C258454EC1EAAF2C* ____targetCollection_4;
};

// ScriptableObjectArchitecture.SOArchitectureBaseMonobehaviour
struct SOArchitectureBaseMonobehaviour_tE95AACB49C1D557C6B4A91D947744DB3E5E39D2C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ScriptableObjectArchitecture.Examples.UnitHealth
struct UnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ScriptableObjectArchitecture.FloatReference ScriptableObjectArchitecture.Examples.UnitHealth::Health
	FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* ___Health_4;
	// System.Boolean ScriptableObjectArchitecture.Examples.UnitHealth::_resetOnStartup
	bool ____resetOnStartup_5;
	// ScriptableObjectArchitecture.FloatReference ScriptableObjectArchitecture.Examples.UnitHealth::_startingHealth
	FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* ____startingHealth_6;
};

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.AnimationCurve>
struct BaseVariable_1_t61950041CC813C9BA3DCDEFEC981C64F30CDFE56  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.AudioClip>
struct BaseVariable_1_t20659B283261316CFFF69FD053EC05AC00CD80E5  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<System.Boolean>
struct BaseVariable_1_t045B6AEF17E22FA4E7ED62D0FC8A95B469592EF7  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	bool ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	bool ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	bool ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<System.Byte>
struct BaseVariable_1_tA4A91C3A831E22E93094C5247AAA1067008DEADE  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	uint8_t ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	uint8_t ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	uint8_t ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<System.Char>
struct BaseVariable_1_t6530A1F91B6B5D743E29C2CF7778ACCA97BA31A4  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	Il2CppChar ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	Il2CppChar ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	Il2CppChar ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Color>
struct BaseVariable_1_tF25ECCE6512B63CEE51B15709B45E9DF184D7321  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Color32>
struct BaseVariable_1_t086CFE1F2D9D8C6571316E69177BFC7183013317  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<System.Double>
struct BaseVariable_1_t4CE866EDA8AB11499DFE7AC06E286E3DEC2A3947  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	double ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	double ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	double ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.GameObject>
struct BaseVariable_1_t27351E1994FF0D073969806E078B489FCF9CF119  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<System.Int16>
struct BaseVariable_1_t4EF8AD4517CB631F537B766FA8B7CBE4D41A4F92  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	int16_t ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	int16_t ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	int16_t ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<System.Int32>
struct BaseVariable_1_tFAE900555CA782C9923F2EAE1AC5C609CF2E4969  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	int32_t ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	int32_t ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	int32_t ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<System.Int64>
struct BaseVariable_1_tCD038FF88C5B2A3AB36FE1F27D661DA27B71C70A  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	int64_t ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	int64_t ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	int64_t ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.LayerMask>
struct BaseVariable_1_t46DB9B43C4BAE63CE0AF3B6D29126B07484A28BB  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Object>
struct BaseVariable_1_t64E97FF947746BB76E9880BE08DDEC76543030FF  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Quaternion>
struct BaseVariable_1_t35CBC19D5264A8C94D60C312E0A6376849C86E4D  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<System.SByte>
struct BaseVariable_1_t89E4FB5C7E311D6B1661E8BF2EA826216D9C8183  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	int8_t ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	int8_t ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	int8_t ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<ScriptableObjectArchitecture.SceneInfo>
struct BaseVariable_1_tFBEEFAA9ABAE2E7588839ACE6CB1ACAB48E5018F  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<System.Single>
struct BaseVariable_1_tF6112A858595B82E2537CC42D44AA074EDEFF52F  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	float ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	float ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	float ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<System.String>
struct BaseVariable_1_tA8BCB56BBBD780E86A619CCA86590BB7426BA4CA  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	String_t* ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	String_t* ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	String_t* ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<System.UInt16>
struct BaseVariable_1_t490E467305AA53A745412307CD959D5FEA85EBF1  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	uint16_t ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	uint16_t ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	uint16_t ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<System.UInt32>
struct BaseVariable_1_tF143A0A730B9F5FC75C402C553905531F5A5B46B  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	uint32_t ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	uint32_t ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	uint32_t ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<System.UInt64>
struct BaseVariable_1_tBDBD7DB362ED4BFE470963A3A8EB79E90E4241CB  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	uint64_t ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	uint64_t ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	uint64_t ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Vector2>
struct BaseVariable_1_t7E2A1E0B42BB365CF6778E221DF2909C9BF4B6F5  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Vector3>
struct BaseVariable_1_tC6A55584567817DF3073BDC0C6C84486C3374508  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Vector4>
struct BaseVariable_1_tADB20D49976EFFAFEFC3FF68AD4137D82436CAF6  : public BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002
{
	// T ScriptableObjectArchitecture.BaseVariable`1::_value
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____value_7;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_readOnly
	bool ____readOnly_8;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_raiseWarning
	bool ____raiseWarning_9;
	// System.Boolean ScriptableObjectArchitecture.BaseVariable`1::_isClamped
	bool ____isClamped_10;
	// T ScriptableObjectArchitecture.BaseVariable`1::_minClampedValue
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____minClampedValue_11;
	// T ScriptableObjectArchitecture.BaseVariable`1::_maxClampedValue
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____maxClampedValue_12;
};

// ScriptableObjectArchitecture.AnimationCurveCollection
struct AnimationCurveCollection_t11267B67826BE52F7E0E2552D0BB0508A82E2F1D  : public Collection_1_tBDB85857CDFC02E3FE579BA9F05EC13E4D11A626
{
};

// ScriptableObjectArchitecture.AudioClipCollection
struct AudioClipCollection_tB9050F69CC50E3F18A5FDFF583F5F9AFD9A9E0C8  : public Collection_1_tB9F83B60496EBB18BB23457FE18DB750F00E21F5
{
};

// ScriptableObjectArchitecture.AudioClipGameEvent
struct AudioClipGameEvent_t2915486EA8B836713A2EDAA31F2D148B778BEECC  : public GameEventBase_1_t2672A3A8FEB9CEAA9F57BC3EB5F5B1D1F8366B13
{
};

// ScriptableObjectArchitecture.BoolCollection
struct BoolCollection_t55A40136DEC49DB7ADB919C8B2235B089EA03BC5  : public Collection_1_t5C8F9118B15F25FC4A09C8016386BB536D871C3F
{
};

// ScriptableObjectArchitecture.BoolGameEvent
struct BoolGameEvent_t2217E395E020EB74054A38784BB740DDFE35572A  : public GameEventBase_1_t10E7740AC1F783C5F77C831B62E35F9B8CB724A0
{
};

// ScriptableObjectArchitecture.ByteCollection
struct ByteCollection_t655B5C1F7EB9CAADEEF1B054AF9DEECD00E27389  : public Collection_1_tB75730F824C5260D4684D8F27E54CB7EDDD8B325
{
};

// ScriptableObjectArchitecture.ByteGameEvent
struct ByteGameEvent_t01D21D1016B069B95C836014C3FC7E9BDDFEB88D  : public GameEventBase_1_tBCF2C748D38C899013F74A9DD65DA37E4D039E8B
{
};

// ScriptableObjectArchitecture.CharCollection
struct CharCollection_t3AFD063A06B9F17A521F6D876507236613328E7B  : public Collection_1_tE9F523232A24F4715C3883FC3B4A28057E663008
{
};

// ScriptableObjectArchitecture.CharGameEvent
struct CharGameEvent_t85D1B4774B2E14D40830508F2282B514D9AFF4FC  : public GameEventBase_1_tB539EE24E3C9D31E9C50740CAA1EBD5CD325C837
{
};

// ScriptableObjectArchitecture.Color32Collection
struct Color32Collection_tEB828709F4848FC5A6AD2A169D65DD9522A108E0  : public Collection_1_tC7145F80C9C94F813E69D62632C7792F1B8FF9D1
{
};

// ScriptableObjectArchitecture.ColorCollection
struct ColorCollection_t3AC22DA6707CD2E976569B96E1ACB8B063C35DA3  : public Collection_1_t5152D20A91B22A024A9F5CAAD5558E46AF1F2418
{
};

// ScriptableObjectArchitecture.Examples.DamageDealerWithEvent
struct DamageDealerWithEvent_t880ED59A4E0D6601A33A2BCFA4189C0DF2DF9FC0  : public DamageDealer_t3CBE22A92F8B74E798381E22B3C57A7ABAD30BE2
{
	// ScriptableObjectArchitecture.GameEvent ScriptableObjectArchitecture.Examples.DamageDealerWithEvent::_onDamagedEvent
	GameEvent_t65A32CE97E4D95E608D0EED1BADF578B3D75817E* ____onDamagedEvent_5;
};

// ScriptableObjectArchitecture.DebuggableGameEventListener
struct DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6  : public SOArchitectureBaseMonobehaviour_tE95AACB49C1D557C6B4A91D947744DB3E5E39D2C
{
	// System.Boolean ScriptableObjectArchitecture.DebuggableGameEventListener::_showDebugFields
	bool ____showDebugFields_4;
	// System.Boolean ScriptableObjectArchitecture.DebuggableGameEventListener::_enableGizmoDebugging
	bool ____enableGizmoDebugging_5;
	// UnityEngine.Color ScriptableObjectArchitecture.DebuggableGameEventListener::_debugColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____debugColor_6;
	// System.Collections.Generic.List`1<ScriptableObjectArchitecture.StackTraceEntry> ScriptableObjectArchitecture.DebuggableGameEventListener::_stackTraces
	List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A* ____stackTraces_7;
};

// ScriptableObjectArchitecture.DoubleCollection
struct DoubleCollection_t984F13E06AABBD5CAC491B8EE3DBE71B225ECF52  : public Collection_1_tF42A5F6F7CC263124814E46F42FD3E5D42C00AC8
{
};

// ScriptableObjectArchitecture.DoubleGameEvent
struct DoubleGameEvent_tF7278C88B2C7B4DD8BBB6C0B3E44EDDB31230CEF  : public GameEventBase_1_t4A08A3353ACC37D7D4F0A4043139C8E7370D173F
{
};

// ScriptableObjectArchitecture.FloatCollection
struct FloatCollection_t25F3F80DF766D4214228DA7DA10D3CB416896FF7  : public Collection_1_t798BA4D0A9B3200F245DECF04442FFE29D74CDF8
{
};

// ScriptableObjectArchitecture.FloatGameEvent
struct FloatGameEvent_tE1317F1EE773F9D420C1ECC0B0E3019BB0030784  : public GameEventBase_1_tF2FB7A1D2DF48AD421FB12ADE83EF18F27DFD997
{
};

// ScriptableObjectArchitecture.GameObjectCollection
struct GameObjectCollection_t9C76F2B578978C3D59931E99C258454EC1EAAF2C  : public Collection_1_t094F7E1819D7E0C9778C527D1401CEDB4CCA56C1
{
};

// ScriptableObjectArchitecture.GameObjectGameEvent
struct GameObjectGameEvent_t8C9EE2ABDBF4A2644BEE9D3B1AA322626268A804  : public GameEventBase_1_tCAA51EC4846977F9612E78EC703647682F76D382
{
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// ScriptableObjectArchitecture.IntCollection
struct IntCollection_t4EEC7BE6D6AC13F37EC6E5023D5686B4BE51BEC4  : public Collection_1_t17C42C2463B620CB15A1B7630A300F354504CDBC
{
};

// ScriptableObjectArchitecture.IntGameEvent
struct IntGameEvent_t2E144CC8973A5D334EE78DC7E701975CE0957FF4  : public GameEventBase_1_t08486ECCC1D87A7ADDDDF601112C51D9402C0453
{
};

// ScriptableObjectArchitecture.LongCollection
struct LongCollection_t518B7BF02FB432A3A2E00281CB04CCB853813F40  : public Collection_1_t8CADAF8D3E23E843E6FE47B5EE8DE7401BFEC2E6
{
};

// ScriptableObjectArchitecture.LongGameEvent
struct LongGameEvent_tD1FF7DEBAB5987620831AAE7962C7A439A886AE9  : public GameEventBase_1_t4940927CCF59A809C511974B9C7F760807524B18
{
};

// ScriptableObjectArchitecture.ObjectCollection
struct ObjectCollection_tFF255DD9DF07E675FBE1DD42AE5DEE8E81116653  : public Collection_1_t7E13658BAB9E9597A202B079AA1A44E9683CDEC2
{
};

// ScriptableObjectArchitecture.ObjectGameEvent
struct ObjectGameEvent_t3EBDC4B6C0E548905F25CCE5C4328BBA35830723  : public GameEventBase_1_t456FA50EA4B9C6BBBBAB664F3B1BDBE1EEF9F328
{
};

// ScriptableObjectArchitecture.QuaternionCollection
struct QuaternionCollection_tA502B1D5EF07A5CE71FD841C750E0C84452D1BE4  : public Collection_1_tBF0E04DD341E3966F3DA4AA95DE2B8C2040891CE
{
};

// ScriptableObjectArchitecture.QuaternionGameEvent
struct QuaternionGameEvent_t4B5FE2B2323422C22CA03343D5F797C4450EB57B  : public GameEventBase_1_t8A361FAC6D46AD51B5D45288F299DA234D8B792B
{
};

// ScriptableObjectArchitecture.SByteCollection
struct SByteCollection_tFB89970EE2957F35DCA99275AA2273886C1CCBBE  : public Collection_1_tFF583AA72D09BB380446A612689A683D456C19A7
{
};

// ScriptableObjectArchitecture.SByteGameEvent
struct SByteGameEvent_t9FC4637B4401B0B0461F669CEBD147A91A1A07BA  : public GameEventBase_1_t671515C5D620EF9D9F2B205ED87F254EDB2665CA
{
};

// ScriptableObjectArchitecture.SceneCollection
struct SceneCollection_t2C74FDBCE50E87785CD990D47F3A0DAFC50290DB  : public Collection_1_t3BF8F10ACC0AC01963B552916F67A52F0580AFB3
{
};

// ScriptableObjectArchitecture.ShortCollection
struct ShortCollection_tE23A319A2FE18A3E667495DEE10A2E748537956E  : public Collection_1_tDCE3D258879871CA66B574AD37FE25FFF44FD408
{
};

// ScriptableObjectArchitecture.ShortGameEvent
struct ShortGameEvent_t4399DFD5065C287F2C1F87D6BC2F98B8E2D235FB  : public GameEventBase_1_tF173A269C6C3C0AE716BB70993BAB9CBCE00551B
{
};

// ScriptableObjectArchitecture.StringCollection
struct StringCollection_tE3C5DD472C11E7063A64F7519113B8A50A2E9C4C  : public Collection_1_tDE136E76AA13C59D68071661079C19B65415023B
{
};

// ScriptableObjectArchitecture.StringGameEvent
struct StringGameEvent_t820B6481717C64F21DECCE674A01C9B41302D59F  : public GameEventBase_1_tE944FE9F846468030EC60A5164C60CB9583C0B2F
{
};

// ScriptableObjectArchitecture.UIntCollection
struct UIntCollection_t8864A2EF7604CDAD6E977CF8959EDB07CA1D2625  : public Collection_1_t848830310C624ECF361E5DB5D65F98CDE80CFC84
{
};

// ScriptableObjectArchitecture.UIntGameEvent
struct UIntGameEvent_t82F3817A6E72B6839F35D0E77E224F2F13060EF2  : public GameEventBase_1_tD31DE5B30A0CE236DACDA70921390F40C8364BED
{
};

// ScriptableObjectArchitecture.ULongCollection
struct ULongCollection_t4E774687376FBCAB01992DD7152D319129C1C094  : public Collection_1_t13C8178151B8D78737D26BABB2AC4BB2EFC0C083
{
};

// ScriptableObjectArchitecture.ULongGameEvent
struct ULongGameEvent_t462480AFC09F11918151533C35F6FCB5852977BA  : public GameEventBase_1_tB21A71EACB908B7D589EA25E08A9438A6DCD97CF
{
};

// ScriptableObjectArchitecture.UShortCollection
struct UShortCollection_tDC3664B1CD0FA76D07C35F78BB8E1F780E279724  : public Collection_1_t7EC3F483C8D83EF91FB906313C16530E0ED7EF83
{
};

// ScriptableObjectArchitecture.UShortGameEvent
struct UShortGameEvent_tC6913F61ECBF5B4BB6847ACEA41A41F9FC45BF2B  : public GameEventBase_1_tE24979B752D2587943DC375EB883825387E68B74
{
};

// ScriptableObjectArchitecture.Vector2Collection
struct Vector2Collection_t158B9B75A751D120D1733CA8AE7199F345C2F815  : public Collection_1_t56D4A3CBD784ED40DE7DF5FBB7FA9FD1AFD17404
{
};

// ScriptableObjectArchitecture.Vector2GameEvent
struct Vector2GameEvent_tFE5544B34D94943692D4E1A74A16C95AB4D1BA8B  : public GameEventBase_1_tA38DC9B336201DEA0FC0EA056F28499530382482
{
};

// ScriptableObjectArchitecture.Vector3Collection
struct Vector3Collection_t339C872DB642F0AC188007A349AA1F785D7123B4  : public Collection_1_tE0178F131BFCB95DF652FF8E1381E2F154FD3C20
{
};

// ScriptableObjectArchitecture.Vector3GameEvent
struct Vector3GameEvent_t072F447112B5B150571FDDB7936E951327CA24D2  : public GameEventBase_1_t15AA158F87755BB2A88ADEE918BDDD2DAB2BECB4
{
};

// ScriptableObjectArchitecture.Vector4Collection
struct Vector4Collection_tAFA94B40B127BBA95A610D13D2D1323E8D6B3E44  : public Collection_1_tF625EEE1C009CE0E79AE9D238374159154E73779
{
};

// ScriptableObjectArchitecture.Vector4GameEvent
struct Vector4GameEvent_tFBE3AE2919B380AF3DB77BEA596B6110CD34F41E  : public GameEventBase_1_t91A1F511B0E04EB48E0F7A8D952888C04544BF89
{
};

// ScriptableObjectArchitecture.BaseGameEventListener`2<ScriptableObjectArchitecture.GameEventBase,UnityEngine.Events.UnityEvent>
struct BaseGameEventListener_2_tFD82FAA680E6622647BA3039674EEBB5BD2AD5DA  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`2::_previouslyRegisteredEvent
	GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`2::_event
	GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`2::_response
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____response_10;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.AudioClip,ScriptableObjectArchitecture.AudioClipGameEvent,ScriptableObjectArchitecture.AudioClipUnityEvent>
struct BaseGameEventListener_3_tAE202232436DF002453AF5D65801683A3B53B843  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	AudioClipGameEvent_t2915486EA8B836713A2EDAA31F2D148B778BEECC* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	AudioClipGameEvent_t2915486EA8B836713A2EDAA31F2D148B778BEECC* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	AudioClipUnityEvent_t6B7F109FD58E7CC27A879A56370DA25F41091703* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Boolean,ScriptableObjectArchitecture.BoolGameEvent,ScriptableObjectArchitecture.BoolUnityEvent>
struct BaseGameEventListener_3_tFC494D4840A76E0005B926213C8A246124A7BAD9  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	BoolGameEvent_t2217E395E020EB74054A38784BB740DDFE35572A* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	BoolGameEvent_t2217E395E020EB74054A38784BB740DDFE35572A* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	BoolUnityEvent_t3DC03DEB567860D8A4740F53037DE97238FC5241* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	bool ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Byte,ScriptableObjectArchitecture.ByteGameEvent,ScriptableObjectArchitecture.ByteUnityEvent>
struct BaseGameEventListener_3_t2B25A20D623C929B0B26457C230E4667F1AE9735  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	ByteGameEvent_t01D21D1016B069B95C836014C3FC7E9BDDFEB88D* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	ByteGameEvent_t01D21D1016B069B95C836014C3FC7E9BDDFEB88D* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	ByteUnityEvent_t3CCFD9FB0D2771003BA557CE58592A5FEF7DA938* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	uint8_t ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Char,ScriptableObjectArchitecture.CharGameEvent,ScriptableObjectArchitecture.CharUnityEvent>
struct BaseGameEventListener_3_tE3C228824D125E96A9D88897FB66BCB7F8A142ED  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	CharGameEvent_t85D1B4774B2E14D40830508F2282B514D9AFF4FC* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	CharGameEvent_t85D1B4774B2E14D40830508F2282B514D9AFF4FC* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	CharUnityEvent_t65969389D8D3FDCD61FE06244135DA2D8E317901* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	Il2CppChar ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Double,ScriptableObjectArchitecture.DoubleGameEvent,ScriptableObjectArchitecture.DoubleUnityEvent>
struct BaseGameEventListener_3_t634B97A5CDFFCA7C454FC2D04B446700954C92D9  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	DoubleGameEvent_tF7278C88B2C7B4DD8BBB6C0B3E44EDDB31230CEF* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	DoubleGameEvent_tF7278C88B2C7B4DD8BBB6C0B3E44EDDB31230CEF* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	DoubleUnityEvent_t0DAD03C14781D4F051C81D8181E252078E0F342E* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	double ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.GameObject,ScriptableObjectArchitecture.GameObjectGameEvent,ScriptableObjectArchitecture.GameObjectUnityEvent>
struct BaseGameEventListener_3_tC195237F0521E8BC1F3A819B8134FD6D9B8223B3  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	GameObjectGameEvent_t8C9EE2ABDBF4A2644BEE9D3B1AA322626268A804* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	GameObjectGameEvent_t8C9EE2ABDBF4A2644BEE9D3B1AA322626268A804* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	GameObjectUnityEvent_tCD6656AAE77281E6C7677461077E615700AF99C2* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Int16,ScriptableObjectArchitecture.ShortGameEvent,ScriptableObjectArchitecture.ShortUnityEvent>
struct BaseGameEventListener_3_t056DC97342A47A863F82519F3E0BD0702A3CDBAE  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	ShortGameEvent_t4399DFD5065C287F2C1F87D6BC2F98B8E2D235FB* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	ShortGameEvent_t4399DFD5065C287F2C1F87D6BC2F98B8E2D235FB* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	ShortUnityEvent_tC5459397DACCF8E25FA98CE353B2C49820054C4C* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	int16_t ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Int32,ScriptableObjectArchitecture.IntGameEvent,ScriptableObjectArchitecture.IntUnityEvent>
struct BaseGameEventListener_3_t1003CC209EBADB578E47D2FE352CEFBD3941B44E  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	IntGameEvent_t2E144CC8973A5D334EE78DC7E701975CE0957FF4* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	IntGameEvent_t2E144CC8973A5D334EE78DC7E701975CE0957FF4* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	IntUnityEvent_t5E2E9FFCE129B23030739FAC107AE8C291FE0FAC* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	int32_t ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Int64,ScriptableObjectArchitecture.LongGameEvent,ScriptableObjectArchitecture.LongUnityEvent>
struct BaseGameEventListener_3_tC2AB2EFC7FD3D419A3FA318C99CC761526DFCB3E  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	LongGameEvent_tD1FF7DEBAB5987620831AAE7962C7A439A886AE9* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	LongGameEvent_tD1FF7DEBAB5987620831AAE7962C7A439A886AE9* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	LongUnityEvent_tFC54A330177C9AE9D3083A13067F0E71CD6C74C7* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	int64_t ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Object,ScriptableObjectArchitecture.ObjectGameEvent,ScriptableObjectArchitecture.ObjectUnityEvent>
struct BaseGameEventListener_3_t6D3CA4A0B95E1E87D3453BB71CC1564E826ED42F  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	ObjectGameEvent_t3EBDC4B6C0E548905F25CCE5C4328BBA35830723* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	ObjectGameEvent_t3EBDC4B6C0E548905F25CCE5C4328BBA35830723* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	ObjectUnityEvent_tF6D74281C00838E84095B46668A73F507CE8FF0B* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Quaternion,ScriptableObjectArchitecture.QuaternionGameEvent,ScriptableObjectArchitecture.QuaternionUnityEvent>
struct BaseGameEventListener_3_t8B910CCCD081B7BF005B4CB7CE5A34DD85F0568E  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	QuaternionGameEvent_t4B5FE2B2323422C22CA03343D5F797C4450EB57B* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	QuaternionGameEvent_t4B5FE2B2323422C22CA03343D5F797C4450EB57B* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	QuaternionUnityEvent_t09FC1304F10E793FCC18D599DCD674ACA1BBC27B* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.SByte,ScriptableObjectArchitecture.SByteGameEvent,ScriptableObjectArchitecture.SByteUnityEvent>
struct BaseGameEventListener_3_t48F97903CBA642C20A22E15AD5006B3A5FA406A0  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	SByteGameEvent_t9FC4637B4401B0B0461F669CEBD147A91A1A07BA* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	SByteGameEvent_t9FC4637B4401B0B0461F669CEBD147A91A1A07BA* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	SByteUnityEvent_t84D3DC8700141FCBB62AADB63815F3588FA2B4EB* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	int8_t ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Single,ScriptableObjectArchitecture.FloatGameEvent,ScriptableObjectArchitecture.FloatUnityEvent>
struct BaseGameEventListener_3_t110BCA66896B24D60FF272946813F2742B5A9E99  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	FloatGameEvent_tE1317F1EE773F9D420C1ECC0B0E3019BB0030784* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	FloatGameEvent_tE1317F1EE773F9D420C1ECC0B0E3019BB0030784* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	FloatUnityEvent_t3A247A5F43BB878717D8C7613C0CE75E2B395C44* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	float ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.String,ScriptableObjectArchitecture.StringGameEvent,ScriptableObjectArchitecture.StringUnityEvent>
struct BaseGameEventListener_3_t75D574E6D5AD8A207267C0C79FE183700A60657F  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	StringGameEvent_t820B6481717C64F21DECCE674A01C9B41302D59F* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	StringGameEvent_t820B6481717C64F21DECCE674A01C9B41302D59F* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	StringUnityEvent_t59FA1C73271C074A1824F8707ADBA1C054AA0FEF* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	String_t* ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.UInt16,ScriptableObjectArchitecture.UShortGameEvent,ScriptableObjectArchitecture.UShortUnityEvent>
struct BaseGameEventListener_3_t8E11D8D733E72A279D6E37BB25E5319D71682B7B  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	UShortGameEvent_tC6913F61ECBF5B4BB6847ACEA41A41F9FC45BF2B* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	UShortGameEvent_tC6913F61ECBF5B4BB6847ACEA41A41F9FC45BF2B* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	UShortUnityEvent_t9027935402C352BCE2E235D2433CA1C2833B4E94* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	uint16_t ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.UInt32,ScriptableObjectArchitecture.UIntGameEvent,ScriptableObjectArchitecture.UIntUnityEvent>
struct BaseGameEventListener_3_t24A33653CF8E763B8B5994688F7518627604B658  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	UIntGameEvent_t82F3817A6E72B6839F35D0E77E224F2F13060EF2* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	UIntGameEvent_t82F3817A6E72B6839F35D0E77E224F2F13060EF2* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	UIntUnityEvent_t61650D1B785391AF369AFA348910A7AD1ECEC3F6* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	uint32_t ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.UInt64,ScriptableObjectArchitecture.ULongGameEvent,ScriptableObjectArchitecture.ULongUnityEvent>
struct BaseGameEventListener_3_tBFEFD642F50DFC02601238694F8CA1476E92EA98  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	ULongGameEvent_t462480AFC09F11918151533C35F6FCB5852977BA* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	ULongGameEvent_t462480AFC09F11918151533C35F6FCB5852977BA* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	ULongUnityEvent_tFE471A583FF66C73439F494F68BB9B4950B9EAE7* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	uint64_t ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Vector2,ScriptableObjectArchitecture.Vector2GameEvent,ScriptableObjectArchitecture.Vector2UnityEvent>
struct BaseGameEventListener_3_t514F33481B6EFC7C51659813ABF6E5F0491FF4AD  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	Vector2GameEvent_tFE5544B34D94943692D4E1A74A16C95AB4D1BA8B* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	Vector2GameEvent_tFE5544B34D94943692D4E1A74A16C95AB4D1BA8B* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	Vector2UnityEvent_tFACCD0E147A4C97303D511EE6CB0331BACFA09CD* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Vector3,ScriptableObjectArchitecture.Vector3GameEvent,ScriptableObjectArchitecture.Vector3UnityEvent>
struct BaseGameEventListener_3_t34CFE7A4C64B2C292277B966F2F5A67CB2C6DE53  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	Vector3GameEvent_t072F447112B5B150571FDDB7936E951327CA24D2* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	Vector3GameEvent_t072F447112B5B150571FDDB7936E951327CA24D2* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	Vector3UnityEvent_t34F400D721F6C8DE0EA8893341DEF09930ECB5C8* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Vector4,ScriptableObjectArchitecture.Vector4GameEvent,ScriptableObjectArchitecture.Vector4UnityEvent>
struct BaseGameEventListener_3_t390FC6699B10A9D369565B7A1CA7EF5AC1119B98  : public DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6
{
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_previouslyRegisteredEvent
	Vector4GameEvent_tFBE3AE2919B380AF3DB77BEA596B6110CD34F41E* ____previouslyRegisteredEvent_8;
	// TEvent ScriptableObjectArchitecture.BaseGameEventListener`3::_event
	Vector4GameEvent_tFBE3AE2919B380AF3DB77BEA596B6110CD34F41E* ____event_9;
	// TResponse ScriptableObjectArchitecture.BaseGameEventListener`3::_response
	Vector4UnityEvent_tB9CD693185F5B6D85ACDA5DE022AB7C31204EE69* ____response_10;
	// TType ScriptableObjectArchitecture.BaseGameEventListener`3::_debugValue
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____debugValue_11;
};

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.AnimationCurve,ScriptableObjectArchitecture.AnimationCurveEvent>
struct BaseVariable_2_t70D474BDEB5BFC41E566A4914360BA1B9E8886D5  : public BaseVariable_1_t61950041CC813C9BA3DCDEFEC981C64F30CDFE56
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	AnimationCurveEvent_t8425E6F34793FDA4C7BBD2D39802FF8E79315D72* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.AudioClip,ScriptableObjectArchitecture.AudioClipEvent>
struct BaseVariable_2_t825BACACB2DC3F8472E9048ABEEB90379B0E4AAE  : public BaseVariable_1_t20659B283261316CFFF69FD053EC05AC00CD80E5
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	AudioClipEvent_tDECC8215AAAFE8548EB1C094CC24489A9638D347* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<System.Boolean,ScriptableObjectArchitecture.BoolEvent>
struct BaseVariable_2_t1B8F78DDC61DD13016E9F91E525CE4341B34F83F  : public BaseVariable_1_t045B6AEF17E22FA4E7ED62D0FC8A95B469592EF7
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	BoolEvent_t9E22CE96A421ED7B689F1F98615708E601D0BEA4* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<System.Byte,ScriptableObjectArchitecture.ByteEvent>
struct BaseVariable_2_tD20A39FAF8D4027284B26823812D4E9FC3865080  : public BaseVariable_1_tA4A91C3A831E22E93094C5247AAA1067008DEADE
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	ByteEvent_t49C81C726E0E3E6616ABE0DDDF1B989BDC36D5D9* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<System.Char,ScriptableObjectArchitecture.CharEvent>
struct BaseVariable_2_tE90480F7209060ECC07C58E50BA1135B77ADFCC1  : public BaseVariable_1_t6530A1F91B6B5D743E29C2CF7778ACCA97BA31A4
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	CharEvent_tA8ECC2465A8413751CB562863E29F17301D71969* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Color,ScriptableObjectArchitecture.ColorEvent>
struct BaseVariable_2_t73E71C396858577DFE422B458245BD9452901D44  : public BaseVariable_1_tF25ECCE6512B63CEE51B15709B45E9DF184D7321
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	ColorEvent_tA39160CDC0F52D13A7925E7A3AFB41FD619461CE* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Color32,ScriptableObjectArchitecture.Color32Event>
struct BaseVariable_2_tF81B01ECB49FAA74D875EE4136A73532F142E9F6  : public BaseVariable_1_t086CFE1F2D9D8C6571316E69177BFC7183013317
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	Color32Event_tFC2B4948119A3C96B1B1CC0430BEFDED013ABA5D* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<System.Double,ScriptableObjectArchitecture.DoubleEvent>
struct BaseVariable_2_tED6B9F1F396FA9586E94E06C1A8DAA4D3931E589  : public BaseVariable_1_t4CE866EDA8AB11499DFE7AC06E286E3DEC2A3947
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	DoubleEvent_t9E247B7B528C53E6196DA2AF493B0CBB30A3A701* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.GameObject,ScriptableObjectArchitecture.GameObjectEvent>
struct BaseVariable_2_tCF21AEC8514C02BE0085A2BCCA2F22B2918B862E  : public BaseVariable_1_t27351E1994FF0D073969806E078B489FCF9CF119
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	GameObjectEvent_tA0A9A30926A3CCCA00B95EC7F4F3C5FBFD1E4FB6* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<System.Int16,ScriptableObjectArchitecture.ShortEvent>
struct BaseVariable_2_t300DDBB83D42C5F1E37A2058B53EEC4291885CD0  : public BaseVariable_1_t4EF8AD4517CB631F537B766FA8B7CBE4D41A4F92
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	ShortEvent_t31F6A39B91142554E628891B33CCF506D2E92D02* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<System.Int32,ScriptableObjectArchitecture.IntEvent>
struct BaseVariable_2_t8831D6351B8295C6C1340099F723D1C665AA0537  : public BaseVariable_1_tFAE900555CA782C9923F2EAE1AC5C609CF2E4969
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	IntEvent_t6E813C75E50D398D15DFABD06B2662AA65D2CDC2* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<System.Int64,ScriptableObjectArchitecture.LongEvent>
struct BaseVariable_2_tFD8FF2FFACCC7746CE0573FAA1796B8F225962D8  : public BaseVariable_1_tCD038FF88C5B2A3AB36FE1F27D661DA27B71C70A
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	LongEvent_tE766B8639111C11D6A9A858A8BA02E7407EBD5E2* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.LayerMask,ScriptableObjectArchitecture.LayerMaskEvent>
struct BaseVariable_2_tC7B6CE290CB38F6DC2B2C1FB4F404D6414B7B9DB  : public BaseVariable_1_t46DB9B43C4BAE63CE0AF3B6D29126B07484A28BB
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	LayerMaskEvent_tEA3D1A798F92C909C30C71D4BAF4CB7FCD8C445F* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Object,ScriptableObjectArchitecture.ObjectEvent>
struct BaseVariable_2_tAAF9577285CD729794CFCF0FADFBEE6F28F97524  : public BaseVariable_1_t64E97FF947746BB76E9880BE08DDEC76543030FF
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	ObjectEvent_t866AB59919D93646DD80F161CA6DE3EE46652E82* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Quaternion,ScriptableObjectArchitecture.QuaternionEvent>
struct BaseVariable_2_t139192138622510A4F5966F878FB3155F15DDB05  : public BaseVariable_1_t35CBC19D5264A8C94D60C312E0A6376849C86E4D
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	QuaternionEvent_tE171C4D239E81820286C61E70309BFF13E0305F8* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<System.SByte,ScriptableObjectArchitecture.SByteEvent>
struct BaseVariable_2_t996467911929C5751AD4CCF6A3E910E75FA74FFF  : public BaseVariable_1_t89E4FB5C7E311D6B1661E8BF2EA826216D9C8183
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	SByteEvent_t3AFB7C2A6ADA47EE417B267DC06711952994ECE0* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<ScriptableObjectArchitecture.SceneInfo,ScriptableObjectArchitecture.SceneInfoEvent>
struct BaseVariable_2_t1264951EDCCCB5B8A0C5A38CAD105A17811491D6  : public BaseVariable_1_tFBEEFAA9ABAE2E7588839ACE6CB1ACAB48E5018F
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	SceneInfoEvent_t6E385A78EB8BBBB8C877D8A59ECBFDDFEE1B1112* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<System.Single,ScriptableObjectArchitecture.FloatEvent>
struct BaseVariable_2_t4EF335502A1FBFC635CF514784CE46DB1A67B51D  : public BaseVariable_1_tF6112A858595B82E2537CC42D44AA074EDEFF52F
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	FloatEvent_tB842FF4F4F6D92915AE23F63DF474F7A8D57A2DB* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<System.String,ScriptableObjectArchitecture.StringEvent>
struct BaseVariable_2_t437E5801932848C70783C2B9E36C9573DA593D67  : public BaseVariable_1_tA8BCB56BBBD780E86A619CCA86590BB7426BA4CA
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	StringEvent_t774918EF8789B33F5F83809DAB99159BDCB01B2D* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<System.UInt16,ScriptableObjectArchitecture.UShortEvent>
struct BaseVariable_2_t480A4FE7B6268B6D8202A006E5CC39B4A69A830C  : public BaseVariable_1_t490E467305AA53A745412307CD959D5FEA85EBF1
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	UShortEvent_t1EC54C8B6BEC718046233ECA48C27B93EF04BCF3* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<System.UInt32,ScriptableObjectArchitecture.UIntEvent>
struct BaseVariable_2_t349DFA4D927E43C4B81C2C153C445C06CD312E78  : public BaseVariable_1_tF143A0A730B9F5FC75C402C553905531F5A5B46B
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	UIntEvent_t7F7B5A13C59AEAB14F4C52BEF1C4FA5495309535* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<System.UInt64,ScriptableObjectArchitecture.ULongEvent>
struct BaseVariable_2_tD58523CD992107E476DE71E30491A511FC0DD347  : public BaseVariable_1_tBDBD7DB362ED4BFE470963A3A8EB79E90E4241CB
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	ULongEvent_tFF8028EC1F42A7409EEC0F658AF67E2F054581B8* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Vector2,ScriptableObjectArchitecture.Vector2Event>
struct BaseVariable_2_tA8829E3C7067DF05F9ACD22447604E3EEBE2DEF6  : public BaseVariable_1_t7E2A1E0B42BB365CF6778E221DF2909C9BF4B6F5
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	Vector2Event_t718E0878AE1476B25FE6BE2343F3C32E0747E3BF* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Vector3,ScriptableObjectArchitecture.Vector3Event>
struct BaseVariable_2_tDFE746050DA1333C846F33F2F275453ECD17D18A  : public BaseVariable_1_tC6A55584567817DF3073BDC0C6C84486C3374508
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	Vector3Event_t0CD4C6E3DECAA6EE3FCF2CFB58CA78BACB2EA1F3* ____event_13;
};

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Vector4,ScriptableObjectArchitecture.Vector4Event>
struct BaseVariable_2_t393BFC59953D35B46C9BF16E4AF2F4F05286DBC8  : public BaseVariable_1_tADB20D49976EFFAFEFC3FF68AD4137D82436CAF6
{
	// TEvent ScriptableObjectArchitecture.BaseVariable`2::_event
	Vector4Event_t85EDBEF9DBDC30A24FD803E2349ECA9FF73C0328* ____event_13;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// ScriptableObjectArchitecture.AnimationCurveVariable
struct AnimationCurveVariable_tEFBCC32823AB577813C8B22F02D786DB4E03C240  : public BaseVariable_2_t70D474BDEB5BFC41E566A4914360BA1B9E8886D5
{
};

// ScriptableObjectArchitecture.AudioClipGameEventListener
struct AudioClipGameEventListener_t59BA533F86AAF8F810ECC1F4F06F7797ECF63FF3  : public BaseGameEventListener_3_tAE202232436DF002453AF5D65801683A3B53B843
{
};

// ScriptableObjectArchitecture.AudioClipVariable
struct AudioClipVariable_t9D688C420D2F42E7C399C292CBD8C7E9B3B61C4E  : public BaseVariable_2_t825BACACB2DC3F8472E9048ABEEB90379B0E4AAE
{
};

// ScriptableObjectArchitecture.BoolGameEventListener
struct BoolGameEventListener_tE8CBEC15DECF16F05209FADC5407DB42CBAA9DD2  : public BaseGameEventListener_3_tFC494D4840A76E0005B926213C8A246124A7BAD9
{
};

// ScriptableObjectArchitecture.BoolVariable
struct BoolVariable_t764ED84F6566C6E161B30BFA786048A217C47EE9  : public BaseVariable_2_t1B8F78DDC61DD13016E9F91E525CE4341B34F83F
{
};

// ScriptableObjectArchitecture.ByteGameEventListener
struct ByteGameEventListener_t0C6F1909E59A3A2F9FDC5681541CCA0DB67516A4  : public BaseGameEventListener_3_t2B25A20D623C929B0B26457C230E4667F1AE9735
{
};

// ScriptableObjectArchitecture.ByteVariable
struct ByteVariable_t7B084C21DC44CD2E8CA919670C38F867E28152B0  : public BaseVariable_2_tD20A39FAF8D4027284B26823812D4E9FC3865080
{
};

// ScriptableObjectArchitecture.CharGameEventListener
struct CharGameEventListener_tFE6CCE75C77CE29BE931B198AD7F88CD8AC7B04D  : public BaseGameEventListener_3_tE3C228824D125E96A9D88897FB66BCB7F8A142ED
{
};

// ScriptableObjectArchitecture.CharVariable
struct CharVariable_tDE9AB696A98D49BFB368871B12969BB8D7F781CE  : public BaseVariable_2_tE90480F7209060ECC07C58E50BA1135B77ADFCC1
{
};

// ScriptableObjectArchitecture.Color32Variable
struct Color32Variable_tD702FAAD694BB1EADC02DE5D40D8A4E81CA11168  : public BaseVariable_2_tF81B01ECB49FAA74D875EE4136A73532F142E9F6
{
};

// ScriptableObjectArchitecture.ColorVariable
struct ColorVariable_t130F20F7BA68AE04C3AFCF170DB660F41D7FF845  : public BaseVariable_2_t73E71C396858577DFE422B458245BD9452901D44
{
};

// ScriptableObjectArchitecture.DoubleGameEventListener
struct DoubleGameEventListener_tF3AE8C4AF2166FAF10D553FD4F527C0812B5B7CC  : public BaseGameEventListener_3_t634B97A5CDFFCA7C454FC2D04B446700954C92D9
{
};

// ScriptableObjectArchitecture.DoubleVariable
struct DoubleVariable_tA03B5B5994F2F286D17DC4E12FB1F90ED739B21E  : public BaseVariable_2_tED6B9F1F396FA9586E94E06C1A8DAA4D3931E589
{
};

// ScriptableObjectArchitecture.FloatGameEventListener
struct FloatGameEventListener_tAB294102632C1FB296FE53A0C36F6462CB1A4B98  : public BaseGameEventListener_3_t110BCA66896B24D60FF272946813F2742B5A9E99
{
};

// ScriptableObjectArchitecture.FloatVariable
struct FloatVariable_t625F97534449CC4C0953DD85FA4A2026870756F3  : public BaseVariable_2_t4EF335502A1FBFC635CF514784CE46DB1A67B51D
{
};

// ScriptableObjectArchitecture.GameEventListener
struct GameEventListener_tE993EBF06AB98CEB2C1FEACEAF142095C4D81472  : public BaseGameEventListener_2_tFD82FAA680E6622647BA3039674EEBB5BD2AD5DA
{
};

// ScriptableObjectArchitecture.GameObjectGameEventListener
struct GameObjectGameEventListener_t4C16ADC1346827D56024A51B3DF66CAB25A2331F  : public BaseGameEventListener_3_tC195237F0521E8BC1F3A819B8134FD6D9B8223B3
{
};

// ScriptableObjectArchitecture.GameObjectVariable
struct GameObjectVariable_t6ACE562BDAF9BA4EE46F037B6D8E87B3F4EB77F0  : public BaseVariable_2_tCF21AEC8514C02BE0085A2BCCA2F22B2918B862E
{
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// ScriptableObjectArchitecture.IntGameEventListener
struct IntGameEventListener_t2E5440CED6EF7AABD1F67ACEE2C1AC9542E4EC9B  : public BaseGameEventListener_3_t1003CC209EBADB578E47D2FE352CEFBD3941B44E
{
};

// ScriptableObjectArchitecture.IntVariable
struct IntVariable_t82008C985D4FA5C4CF1BAEB30DA8E53A079481FB  : public BaseVariable_2_t8831D6351B8295C6C1340099F723D1C665AA0537
{
};

// ScriptableObjectArchitecture.LayerMaskVariable
struct LayerMaskVariable_t3A7C3590239A92777BA87C3A299FC83C092C124C  : public BaseVariable_2_tC7B6CE290CB38F6DC2B2C1FB4F404D6414B7B9DB
{
};

// ScriptableObjectArchitecture.LongGameEventListener
struct LongGameEventListener_t8158E34AF6E685D55AA0C194D7DF0F1796564B81  : public BaseGameEventListener_3_tC2AB2EFC7FD3D419A3FA318C99CC761526DFCB3E
{
};

// ScriptableObjectArchitecture.LongVariable
struct LongVariable_tA4FEC3B78A4850FEC74F323F408F6E8EDDD8E01E  : public BaseVariable_2_tFD8FF2FFACCC7746CE0573FAA1796B8F225962D8
{
};

// ScriptableObjectArchitecture.ObjectGameEventListener
struct ObjectGameEventListener_t263005490DC3DA3E023066A70B6A02B32E7A7CA3  : public BaseGameEventListener_3_t6D3CA4A0B95E1E87D3453BB71CC1564E826ED42F
{
};

// ScriptableObjectArchitecture.ObjectVariable
struct ObjectVariable_tD40668E019842D6B40B25C4C438D419F46E2CF82  : public BaseVariable_2_tAAF9577285CD729794CFCF0FADFBEE6F28F97524
{
};

// ScriptableObjectArchitecture.QuaternionGameEventListener
struct QuaternionGameEventListener_t19E22F1FDA815017C7EC7A05135AA45E5608617F  : public BaseGameEventListener_3_t8B910CCCD081B7BF005B4CB7CE5A34DD85F0568E
{
};

// ScriptableObjectArchitecture.QuaternionVariable
struct QuaternionVariable_t865364A28D530DAE702A02D51EA8F22B85F45286  : public BaseVariable_2_t139192138622510A4F5966F878FB3155F15DDB05
{
};

// ScriptableObjectArchitecture.SByteGameEventListener
struct SByteGameEventListener_tA0D879D45625DF3737DA5818B9E240DB86209AFA  : public BaseGameEventListener_3_t48F97903CBA642C20A22E15AD5006B3A5FA406A0
{
};

// ScriptableObjectArchitecture.SByteVariable
struct SByteVariable_t190FB798BEDF4572A88A261AF57B305F1A516664  : public BaseVariable_2_t996467911929C5751AD4CCF6A3E910E75FA74FFF
{
};

// ScriptableObjectArchitecture.SceneVariable
struct SceneVariable_tB891AF435CC040522F30F22B078B93054D0684F8  : public BaseVariable_2_t1264951EDCCCB5B8A0C5A38CAD105A17811491D6
{
};

// ScriptableObjectArchitecture.ShortGameEventListener
struct ShortGameEventListener_t0DE29AF387451E7C2A67FE64AD982F817DEC9816  : public BaseGameEventListener_3_t056DC97342A47A863F82519F3E0BD0702A3CDBAE
{
};

// ScriptableObjectArchitecture.ShortVariable
struct ShortVariable_t98FE5356B5FC0642211510D152F9B8E279D0EB72  : public BaseVariable_2_t300DDBB83D42C5F1E37A2058B53EEC4291885CD0
{
};

// ScriptableObjectArchitecture.StringGameEventListener
struct StringGameEventListener_t0B03D4C3C8D732CA5C66FA1174EC2E7618652B82  : public BaseGameEventListener_3_t75D574E6D5AD8A207267C0C79FE183700A60657F
{
};

// ScriptableObjectArchitecture.StringVariable
struct StringVariable_tC768058ABC2B03C28B3FEE5DCB87C0C5FAAA5A95  : public BaseVariable_2_t437E5801932848C70783C2B9E36C9573DA593D67
{
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// ScriptableObjectArchitecture.UIntGameEventListener
struct UIntGameEventListener_t0CB83377A835FC7BD0BCF48C165B3DD3DD7F7585  : public BaseGameEventListener_3_t24A33653CF8E763B8B5994688F7518627604B658
{
};

// ScriptableObjectArchitecture.UIntVariable
struct UIntVariable_t4A1E29FE58D9B677A392A87D9E8485F029A40CBD  : public BaseVariable_2_t349DFA4D927E43C4B81C2C153C445C06CD312E78
{
};

// ScriptableObjectArchitecture.ULongGameEventListener
struct ULongGameEventListener_tFEF8BC29FCC37AED04E65F62F7F1B8F9F84A98E7  : public BaseGameEventListener_3_tBFEFD642F50DFC02601238694F8CA1476E92EA98
{
};

// ScriptableObjectArchitecture.ULongVariable
struct ULongVariable_tD7CF88ECC9DE6573D0A8B1B8E697635ED166DA81  : public BaseVariable_2_tD58523CD992107E476DE71E30491A511FC0DD347
{
};

// ScriptableObjectArchitecture.UShortGameEventListener
struct UShortGameEventListener_tF26FF279C85F1DD5887600ED308B309AAF61F63E  : public BaseGameEventListener_3_t8E11D8D733E72A279D6E37BB25E5319D71682B7B
{
};

// ScriptableObjectArchitecture.UShortVariable
struct UShortVariable_tC6BA1B9071C758A9749549809AD4C2D84CBCB53C  : public BaseVariable_2_t480A4FE7B6268B6D8202A006E5CC39B4A69A830C
{
};

// ScriptableObjectArchitecture.Vector2GameEventListener
struct Vector2GameEventListener_tA5FF8A5B1053741154D773C5AF95D9C6770C6FDD  : public BaseGameEventListener_3_t514F33481B6EFC7C51659813ABF6E5F0491FF4AD
{
};

// ScriptableObjectArchitecture.Vector2Variable
struct Vector2Variable_t46FE876F12DFF5E9D91984CB18904583B408A26B  : public BaseVariable_2_tA8829E3C7067DF05F9ACD22447604E3EEBE2DEF6
{
};

// ScriptableObjectArchitecture.Vector3GameEventListener
struct Vector3GameEventListener_t0FADED75343861926A52F3316CD6D70DA3D83B93  : public BaseGameEventListener_3_t34CFE7A4C64B2C292277B966F2F5A67CB2C6DE53
{
};

// ScriptableObjectArchitecture.Vector3Variable
struct Vector3Variable_t8E35BC8BDDBF5FF92B26B7D2C26F28CA27B1BEE2  : public BaseVariable_2_tDFE746050DA1333C846F33F2F275453ECD17D18A
{
};

// ScriptableObjectArchitecture.Vector4GameEventListener
struct Vector4GameEventListener_tC79D0B1461414969D707190A4F3644986C2EA473  : public BaseGameEventListener_3_t390FC6699B10A9D369565B7A1CA7EF5AC1119B98
{
};

// ScriptableObjectArchitecture.Vector4Variable
struct Vector4Variable_tBC2CA6996A102415C9A87A4A378C75A0CD2D68BE  : public BaseVariable_2_t393BFC59953D35B46C9BF16E4AF2F4F05286DBC8
{
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Action>

// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener>
struct List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IGameEventListenerU5BU5D_tD8F9EB1B8DF2BCD570C90814E17B1FBFAE767042* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener>

// System.Collections.Generic.List`1<ScriptableObjectArchitecture.StackTraceEntry>
struct List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StackTraceEntryU5BU5D_t66622B6A3AE9DB549ADB665BADFCFB6AE4F5D0E3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ScriptableObjectArchitecture.StackTraceEntry>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Attribute

// System.Attribute

// ScriptableObjectArchitecture.BaseReference

// ScriptableObjectArchitecture.BaseReference

// ScriptableObjectArchitecture.QuaternionExtensions

// ScriptableObjectArchitecture.QuaternionExtensions

// ScriptableObjectArchitecture.SOArchitecture_Utility

// ScriptableObjectArchitecture.SOArchitecture_Utility

// ScriptableObjectArchitecture.SceneInfo

// ScriptableObjectArchitecture.SceneInfo

// ScriptableObjectArchitecture.StackTraceEntry

// ScriptableObjectArchitecture.StackTraceEntry

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.ValueType

// System.ValueType

// ScriptableObjectArchitecture.Vector4Extensions

// ScriptableObjectArchitecture.Vector4Extensions

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.AnimationCurve,ScriptableObjectArchitecture.AnimationCurveVariable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.AnimationCurve,ScriptableObjectArchitecture.AnimationCurveVariable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.AudioClip,ScriptableObjectArchitecture.AudioClipVariable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.AudioClip,ScriptableObjectArchitecture.AudioClipVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.Boolean,ScriptableObjectArchitecture.BoolVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.Boolean,ScriptableObjectArchitecture.BoolVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.Byte,ScriptableObjectArchitecture.ByteVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.Byte,ScriptableObjectArchitecture.ByteVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.Char,ScriptableObjectArchitecture.CharVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.Char,ScriptableObjectArchitecture.CharVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.Double,ScriptableObjectArchitecture.DoubleVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.Double,ScriptableObjectArchitecture.DoubleVariable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.GameObject,ScriptableObjectArchitecture.GameObjectVariable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.GameObject,ScriptableObjectArchitecture.GameObjectVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.Int16,ScriptableObjectArchitecture.ShortVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.Int16,ScriptableObjectArchitecture.ShortVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.Int32,ScriptableObjectArchitecture.IntVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.Int32,ScriptableObjectArchitecture.IntVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.Int64,ScriptableObjectArchitecture.LongVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.Int64,ScriptableObjectArchitecture.LongVariable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Object,ScriptableObjectArchitecture.ObjectVariable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Object,ScriptableObjectArchitecture.ObjectVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.SByte,ScriptableObjectArchitecture.SByteVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.SByte,ScriptableObjectArchitecture.SByteVariable>

// ScriptableObjectArchitecture.BaseReference`2<ScriptableObjectArchitecture.SceneInfo,ScriptableObjectArchitecture.SceneVariable>

// ScriptableObjectArchitecture.BaseReference`2<ScriptableObjectArchitecture.SceneInfo,ScriptableObjectArchitecture.SceneVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.Single,ScriptableObjectArchitecture.FloatVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.Single,ScriptableObjectArchitecture.FloatVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.String,ScriptableObjectArchitecture.StringVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.String,ScriptableObjectArchitecture.StringVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.UInt16,ScriptableObjectArchitecture.UShortVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.UInt16,ScriptableObjectArchitecture.UShortVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.UInt32,ScriptableObjectArchitecture.UIntVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.UInt32,ScriptableObjectArchitecture.UIntVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.UInt64,ScriptableObjectArchitecture.ULongVariable>

// ScriptableObjectArchitecture.BaseReference`2<System.UInt64,ScriptableObjectArchitecture.ULongVariable>

// UnityEngine.Events.UnityEvent`1<UnityEngine.AnimationCurve>

// UnityEngine.Events.UnityEvent`1<UnityEngine.AnimationCurve>

// UnityEngine.Events.UnityEvent`1<UnityEngine.AudioClip>

// UnityEngine.Events.UnityEvent`1<UnityEngine.AudioClip>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Byte>

// UnityEngine.Events.UnityEvent`1<System.Byte>

// UnityEngine.Events.UnityEvent`1<System.Char>

// UnityEngine.Events.UnityEvent`1<System.Char>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color32>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color32>

// UnityEngine.Events.UnityEvent`1<System.Double>

// UnityEngine.Events.UnityEvent`1<System.Double>

// UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject>

// UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject>

// UnityEngine.Events.UnityEvent`1<System.Int16>

// UnityEngine.Events.UnityEvent`1<System.Int16>

// UnityEngine.Events.UnityEvent`1<System.Int32>

// UnityEngine.Events.UnityEvent`1<System.Int32>

// UnityEngine.Events.UnityEvent`1<System.Int64>

// UnityEngine.Events.UnityEvent`1<System.Int64>

// UnityEngine.Events.UnityEvent`1<UnityEngine.LayerMask>

// UnityEngine.Events.UnityEvent`1<UnityEngine.LayerMask>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Object>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Object>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Quaternion>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Quaternion>

// UnityEngine.Events.UnityEvent`1<System.SByte>

// UnityEngine.Events.UnityEvent`1<System.SByte>

// UnityEngine.Events.UnityEvent`1<ScriptableObjectArchitecture.SceneInfo>

// UnityEngine.Events.UnityEvent`1<ScriptableObjectArchitecture.SceneInfo>

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.Events.UnityEvent`1<System.Single>

// UnityEngine.Events.UnityEvent`1<System.String>

// UnityEngine.Events.UnityEvent`1<System.String>

// UnityEngine.Events.UnityEvent`1<System.UInt16>

// UnityEngine.Events.UnityEvent`1<System.UInt16>

// UnityEngine.Events.UnityEvent`1<System.UInt32>

// UnityEngine.Events.UnityEvent`1<System.UInt32>

// UnityEngine.Events.UnityEvent`1<System.UInt64>

// UnityEngine.Events.UnityEvent`1<System.UInt64>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector4>

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector4>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Double

// System.Double

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// MultiLine

// MultiLine

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.SByte

// System.SByte

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Color,ScriptableObjectArchitecture.ColorVariable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Color,ScriptableObjectArchitecture.ColorVariable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Color32,ScriptableObjectArchitecture.Color32Variable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Color32,ScriptableObjectArchitecture.Color32Variable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.LayerMask,ScriptableObjectArchitecture.LayerMaskVariable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.LayerMask,ScriptableObjectArchitecture.LayerMaskVariable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Quaternion,ScriptableObjectArchitecture.QuaternionVariable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Quaternion,ScriptableObjectArchitecture.QuaternionVariable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector2,ScriptableObjectArchitecture.Vector2Variable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector2,ScriptableObjectArchitecture.Vector2Variable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector3,ScriptableObjectArchitecture.Vector3Variable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector3,ScriptableObjectArchitecture.Vector3Variable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector4,ScriptableObjectArchitecture.Vector4Variable>

// ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector4,ScriptableObjectArchitecture.Vector4Variable>

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// ScriptableObjectArchitecture.AnimationCurveEvent

// ScriptableObjectArchitecture.AnimationCurveEvent

// ScriptableObjectArchitecture.AnimationCurveReference

// ScriptableObjectArchitecture.AnimationCurveReference

// ScriptableObjectArchitecture.AudioClipEvent

// ScriptableObjectArchitecture.AudioClipEvent

// ScriptableObjectArchitecture.AudioClipReference

// ScriptableObjectArchitecture.AudioClipReference

// ScriptableObjectArchitecture.AudioClipUnityEvent

// ScriptableObjectArchitecture.AudioClipUnityEvent

// ScriptableObjectArchitecture.BoolEvent

// ScriptableObjectArchitecture.BoolEvent

// ScriptableObjectArchitecture.BoolReference

// ScriptableObjectArchitecture.BoolReference

// ScriptableObjectArchitecture.BoolUnityEvent

// ScriptableObjectArchitecture.BoolUnityEvent

// ScriptableObjectArchitecture.ByteEvent

// ScriptableObjectArchitecture.ByteEvent

// ScriptableObjectArchitecture.ByteReference

// ScriptableObjectArchitecture.ByteReference

// ScriptableObjectArchitecture.ByteUnityEvent

// ScriptableObjectArchitecture.ByteUnityEvent

// ScriptableObjectArchitecture.CharEvent

// ScriptableObjectArchitecture.CharEvent

// ScriptableObjectArchitecture.CharReference

// ScriptableObjectArchitecture.CharReference

// ScriptableObjectArchitecture.CharUnityEvent

// ScriptableObjectArchitecture.CharUnityEvent

// ScriptableObjectArchitecture.Color32Event

// ScriptableObjectArchitecture.Color32Event

// ScriptableObjectArchitecture.ColorEvent

// ScriptableObjectArchitecture.ColorEvent

// System.Delegate

// System.Delegate

// ScriptableObjectArchitecture.DoubleEvent

// ScriptableObjectArchitecture.DoubleEvent

// ScriptableObjectArchitecture.DoubleReference

// ScriptableObjectArchitecture.DoubleReference

// ScriptableObjectArchitecture.DoubleUnityEvent

// ScriptableObjectArchitecture.DoubleUnityEvent

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// ScriptableObjectArchitecture.FloatEvent

// ScriptableObjectArchitecture.FloatEvent

// ScriptableObjectArchitecture.FloatReference

// ScriptableObjectArchitecture.FloatReference

// ScriptableObjectArchitecture.FloatUnityEvent

// ScriptableObjectArchitecture.FloatUnityEvent

// ScriptableObjectArchitecture.GameObjectEvent

// ScriptableObjectArchitecture.GameObjectEvent

// ScriptableObjectArchitecture.GameObjectReference

// ScriptableObjectArchitecture.GameObjectReference

// ScriptableObjectArchitecture.GameObjectUnityEvent

// ScriptableObjectArchitecture.GameObjectUnityEvent

// ScriptableObjectArchitecture.IntEvent

// ScriptableObjectArchitecture.IntEvent

// ScriptableObjectArchitecture.IntReference

// ScriptableObjectArchitecture.IntReference

// ScriptableObjectArchitecture.IntUnityEvent

// ScriptableObjectArchitecture.IntUnityEvent

// ScriptableObjectArchitecture.LayerMaskEvent

// ScriptableObjectArchitecture.LayerMaskEvent

// ScriptableObjectArchitecture.LongEvent

// ScriptableObjectArchitecture.LongEvent

// ScriptableObjectArchitecture.LongReference

// ScriptableObjectArchitecture.LongReference

// ScriptableObjectArchitecture.LongUnityEvent

// ScriptableObjectArchitecture.LongUnityEvent

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// ScriptableObjectArchitecture.ObjectEvent

// ScriptableObjectArchitecture.ObjectEvent

// ScriptableObjectArchitecture.ObjectReference

// ScriptableObjectArchitecture.ObjectReference

// ScriptableObjectArchitecture.ObjectUnityEvent

// ScriptableObjectArchitecture.ObjectUnityEvent

// ScriptableObjectArchitecture.QuaternionEvent

// ScriptableObjectArchitecture.QuaternionEvent

// ScriptableObjectArchitecture.QuaternionUnityEvent

// ScriptableObjectArchitecture.QuaternionUnityEvent

// ScriptableObjectArchitecture.SByteEvent

// ScriptableObjectArchitecture.SByteEvent

// ScriptableObjectArchitecture.SByteReference

// ScriptableObjectArchitecture.SByteReference

// ScriptableObjectArchitecture.SByteUnityEvent

// ScriptableObjectArchitecture.SByteUnityEvent

// ScriptableObjectArchitecture.SceneInfoEvent

// ScriptableObjectArchitecture.SceneInfoEvent

// ScriptableObjectArchitecture.SceneReference

// ScriptableObjectArchitecture.SceneReference

// ScriptableObjectArchitecture.ShortEvent

// ScriptableObjectArchitecture.ShortEvent

// ScriptableObjectArchitecture.ShortReference

// ScriptableObjectArchitecture.ShortReference

// ScriptableObjectArchitecture.ShortUnityEvent

// ScriptableObjectArchitecture.ShortUnityEvent

// ScriptableObjectArchitecture.StringEvent

// ScriptableObjectArchitecture.StringEvent

// ScriptableObjectArchitecture.StringReference

// ScriptableObjectArchitecture.StringReference

// ScriptableObjectArchitecture.StringUnityEvent

// ScriptableObjectArchitecture.StringUnityEvent

// ScriptableObjectArchitecture.UIntEvent

// ScriptableObjectArchitecture.UIntEvent

// ScriptableObjectArchitecture.UIntReference

// ScriptableObjectArchitecture.UIntReference

// ScriptableObjectArchitecture.UIntUnityEvent

// ScriptableObjectArchitecture.UIntUnityEvent

// ScriptableObjectArchitecture.ULongEvent

// ScriptableObjectArchitecture.ULongEvent

// ScriptableObjectArchitecture.ULongReference

// ScriptableObjectArchitecture.ULongReference

// ScriptableObjectArchitecture.ULongUnityEvent

// ScriptableObjectArchitecture.ULongUnityEvent

// ScriptableObjectArchitecture.UShortEvent

// ScriptableObjectArchitecture.UShortEvent

// ScriptableObjectArchitecture.UShortReference

// ScriptableObjectArchitecture.UShortReference

// ScriptableObjectArchitecture.UShortUnityEvent

// ScriptableObjectArchitecture.UShortUnityEvent

// ScriptableObjectArchitecture.Vector2Event

// ScriptableObjectArchitecture.Vector2Event

// ScriptableObjectArchitecture.Vector2UnityEvent

// ScriptableObjectArchitecture.Vector2UnityEvent

// ScriptableObjectArchitecture.Vector3Event

// ScriptableObjectArchitecture.Vector3Event

// ScriptableObjectArchitecture.Vector3UnityEvent

// ScriptableObjectArchitecture.Vector3UnityEvent

// ScriptableObjectArchitecture.Vector4Event

// ScriptableObjectArchitecture.Vector4Event

// ScriptableObjectArchitecture.Vector4UnityEvent

// ScriptableObjectArchitecture.Vector4UnityEvent

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// ScriptableObjectArchitecture.Color32Reference

// ScriptableObjectArchitecture.Color32Reference

// ScriptableObjectArchitecture.ColorReference

// ScriptableObjectArchitecture.ColorReference

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// ScriptableObjectArchitecture.LayerMaskReference

// ScriptableObjectArchitecture.LayerMaskReference

// System.MulticastDelegate

// System.MulticastDelegate

// ScriptableObjectArchitecture.QuaternionReference

// ScriptableObjectArchitecture.QuaternionReference

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.SystemException

// System.SystemException

// ScriptableObjectArchitecture.Vector2Reference

// ScriptableObjectArchitecture.Vector2Reference

// ScriptableObjectArchitecture.Vector3Reference

// ScriptableObjectArchitecture.Vector3Reference

// ScriptableObjectArchitecture.Vector4Reference

// ScriptableObjectArchitecture.Vector4Reference

// System.Action

// System.Action

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NullReferenceException

// System.NullReferenceException

// ScriptableObjectArchitecture.SOArchitectureBaseObject

// ScriptableObjectArchitecture.SOArchitectureBaseObject

// ScriptableObjectArchitecture.SOArchitecture_Settings
struct SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471_StaticFields
{
	// ScriptableObjectArchitecture.SOArchitecture_Settings ScriptableObjectArchitecture.SOArchitecture_Settings::_instance
	SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* ____instance_4;
};

// ScriptableObjectArchitecture.SOArchitecture_Settings

// UnityEngine.Transform

// UnityEngine.Transform

// ScriptableObjectArchitecture.BaseCollection

// ScriptableObjectArchitecture.BaseCollection

// ScriptableObjectArchitecture.GameEventBase

// ScriptableObjectArchitecture.GameEventBase

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// ScriptableObjectArchitecture.Collection`1<UnityEngine.AnimationCurve>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.AnimationCurve>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.AudioClip>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.AudioClip>

// ScriptableObjectArchitecture.Collection`1<System.Boolean>

// ScriptableObjectArchitecture.Collection`1<System.Boolean>

// ScriptableObjectArchitecture.Collection`1<System.Byte>

// ScriptableObjectArchitecture.Collection`1<System.Byte>

// ScriptableObjectArchitecture.Collection`1<System.Char>

// ScriptableObjectArchitecture.Collection`1<System.Char>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Color>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Color>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Color32>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Color32>

// ScriptableObjectArchitecture.Collection`1<System.Double>

// ScriptableObjectArchitecture.Collection`1<System.Double>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.GameObject>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.GameObject>

// ScriptableObjectArchitecture.Collection`1<System.Int16>

// ScriptableObjectArchitecture.Collection`1<System.Int16>

// ScriptableObjectArchitecture.Collection`1<System.Int32>

// ScriptableObjectArchitecture.Collection`1<System.Int32>

// ScriptableObjectArchitecture.Collection`1<System.Int64>

// ScriptableObjectArchitecture.Collection`1<System.Int64>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Object>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Object>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Quaternion>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Quaternion>

// ScriptableObjectArchitecture.Collection`1<System.SByte>

// ScriptableObjectArchitecture.Collection`1<System.SByte>

// ScriptableObjectArchitecture.Collection`1<ScriptableObjectArchitecture.SceneInfo>

// ScriptableObjectArchitecture.Collection`1<ScriptableObjectArchitecture.SceneInfo>

// ScriptableObjectArchitecture.Collection`1<System.Single>

// ScriptableObjectArchitecture.Collection`1<System.Single>

// ScriptableObjectArchitecture.Collection`1<System.String>

// ScriptableObjectArchitecture.Collection`1<System.String>

// ScriptableObjectArchitecture.Collection`1<System.UInt16>

// ScriptableObjectArchitecture.Collection`1<System.UInt16>

// ScriptableObjectArchitecture.Collection`1<System.UInt32>

// ScriptableObjectArchitecture.Collection`1<System.UInt32>

// ScriptableObjectArchitecture.Collection`1<System.UInt64>

// ScriptableObjectArchitecture.Collection`1<System.UInt64>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Vector2>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Vector2>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Vector3>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Vector3>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Vector4>

// ScriptableObjectArchitecture.Collection`1<UnityEngine.Vector4>

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.AudioClip>

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.AudioClip>

// ScriptableObjectArchitecture.GameEventBase`1<System.Boolean>

// ScriptableObjectArchitecture.GameEventBase`1<System.Boolean>

// ScriptableObjectArchitecture.GameEventBase`1<System.Byte>

// ScriptableObjectArchitecture.GameEventBase`1<System.Byte>

// ScriptableObjectArchitecture.GameEventBase`1<System.Char>

// ScriptableObjectArchitecture.GameEventBase`1<System.Char>

// ScriptableObjectArchitecture.GameEventBase`1<System.Double>

// ScriptableObjectArchitecture.GameEventBase`1<System.Double>

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.GameObject>

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.GameObject>

// ScriptableObjectArchitecture.GameEventBase`1<System.Int16>

// ScriptableObjectArchitecture.GameEventBase`1<System.Int16>

// ScriptableObjectArchitecture.GameEventBase`1<System.Int32>

// ScriptableObjectArchitecture.GameEventBase`1<System.Int32>

// ScriptableObjectArchitecture.GameEventBase`1<System.Int64>

// ScriptableObjectArchitecture.GameEventBase`1<System.Int64>

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Object>

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Object>

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Quaternion>

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Quaternion>

// ScriptableObjectArchitecture.GameEventBase`1<System.SByte>

// ScriptableObjectArchitecture.GameEventBase`1<System.SByte>

// ScriptableObjectArchitecture.GameEventBase`1<System.Single>

// ScriptableObjectArchitecture.GameEventBase`1<System.Single>

// ScriptableObjectArchitecture.GameEventBase`1<System.String>

// ScriptableObjectArchitecture.GameEventBase`1<System.String>

// ScriptableObjectArchitecture.GameEventBase`1<System.UInt16>

// ScriptableObjectArchitecture.GameEventBase`1<System.UInt16>

// ScriptableObjectArchitecture.GameEventBase`1<System.UInt32>

// ScriptableObjectArchitecture.GameEventBase`1<System.UInt32>

// ScriptableObjectArchitecture.GameEventBase`1<System.UInt64>

// ScriptableObjectArchitecture.GameEventBase`1<System.UInt64>

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Vector2>

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Vector2>

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Vector3>

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Vector3>

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Vector4>

// ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Vector4>

// ScriptableObjectArchitecture.BaseVariable

// ScriptableObjectArchitecture.BaseVariable

// ScriptableObjectArchitecture.Examples.CollectionCountDisplayer

// ScriptableObjectArchitecture.Examples.CollectionCountDisplayer

// ScriptableObjectArchitecture.Examples.DamageDealer

// ScriptableObjectArchitecture.Examples.DamageDealer

// ScriptableObjectArchitecture.Examples.Disabler

// ScriptableObjectArchitecture.Examples.Disabler

// ScriptableObjectArchitecture.GameEvent

// ScriptableObjectArchitecture.GameEvent

// ScriptableObjectArchitecture.Examples.ImageFillSetter

// ScriptableObjectArchitecture.Examples.ImageFillSetter

// ScriptableObjectArchitecture.Examples.KeyboardMover

// ScriptableObjectArchitecture.Examples.KeyboardMover

// ScriptableObjectArchitecture.Examples.ObjectAdder

// ScriptableObjectArchitecture.Examples.ObjectAdder

// ScriptableObjectArchitecture.SOArchitectureBaseMonobehaviour

// ScriptableObjectArchitecture.SOArchitectureBaseMonobehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// ScriptableObjectArchitecture.Examples.UnitHealth

// ScriptableObjectArchitecture.Examples.UnitHealth

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.AnimationCurve>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.AnimationCurve>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.AudioClip>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.AudioClip>

// ScriptableObjectArchitecture.BaseVariable`1<System.Boolean>

// ScriptableObjectArchitecture.BaseVariable`1<System.Boolean>

// ScriptableObjectArchitecture.BaseVariable`1<System.Byte>

// ScriptableObjectArchitecture.BaseVariable`1<System.Byte>

// ScriptableObjectArchitecture.BaseVariable`1<System.Char>

// ScriptableObjectArchitecture.BaseVariable`1<System.Char>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Color>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Color>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Color32>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Color32>

// ScriptableObjectArchitecture.BaseVariable`1<System.Double>

// ScriptableObjectArchitecture.BaseVariable`1<System.Double>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.GameObject>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.GameObject>

// ScriptableObjectArchitecture.BaseVariable`1<System.Int16>

// ScriptableObjectArchitecture.BaseVariable`1<System.Int16>

// ScriptableObjectArchitecture.BaseVariable`1<System.Int32>

// ScriptableObjectArchitecture.BaseVariable`1<System.Int32>

// ScriptableObjectArchitecture.BaseVariable`1<System.Int64>

// ScriptableObjectArchitecture.BaseVariable`1<System.Int64>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.LayerMask>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.LayerMask>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Object>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Object>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Quaternion>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Quaternion>

// ScriptableObjectArchitecture.BaseVariable`1<System.SByte>

// ScriptableObjectArchitecture.BaseVariable`1<System.SByte>

// ScriptableObjectArchitecture.BaseVariable`1<ScriptableObjectArchitecture.SceneInfo>

// ScriptableObjectArchitecture.BaseVariable`1<ScriptableObjectArchitecture.SceneInfo>

// ScriptableObjectArchitecture.BaseVariable`1<System.Single>

// ScriptableObjectArchitecture.BaseVariable`1<System.Single>

// ScriptableObjectArchitecture.BaseVariable`1<System.String>

// ScriptableObjectArchitecture.BaseVariable`1<System.String>

// ScriptableObjectArchitecture.BaseVariable`1<System.UInt16>

// ScriptableObjectArchitecture.BaseVariable`1<System.UInt16>

// ScriptableObjectArchitecture.BaseVariable`1<System.UInt32>

// ScriptableObjectArchitecture.BaseVariable`1<System.UInt32>

// ScriptableObjectArchitecture.BaseVariable`1<System.UInt64>

// ScriptableObjectArchitecture.BaseVariable`1<System.UInt64>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Vector2>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Vector2>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Vector3>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Vector3>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Vector4>

// ScriptableObjectArchitecture.BaseVariable`1<UnityEngine.Vector4>

// ScriptableObjectArchitecture.AnimationCurveCollection

// ScriptableObjectArchitecture.AnimationCurveCollection

// ScriptableObjectArchitecture.AudioClipCollection

// ScriptableObjectArchitecture.AudioClipCollection

// ScriptableObjectArchitecture.AudioClipGameEvent

// ScriptableObjectArchitecture.AudioClipGameEvent

// ScriptableObjectArchitecture.BoolCollection

// ScriptableObjectArchitecture.BoolCollection

// ScriptableObjectArchitecture.BoolGameEvent

// ScriptableObjectArchitecture.BoolGameEvent

// ScriptableObjectArchitecture.ByteCollection

// ScriptableObjectArchitecture.ByteCollection

// ScriptableObjectArchitecture.ByteGameEvent

// ScriptableObjectArchitecture.ByteGameEvent

// ScriptableObjectArchitecture.CharCollection

// ScriptableObjectArchitecture.CharCollection

// ScriptableObjectArchitecture.CharGameEvent

// ScriptableObjectArchitecture.CharGameEvent

// ScriptableObjectArchitecture.Color32Collection

// ScriptableObjectArchitecture.Color32Collection

// ScriptableObjectArchitecture.ColorCollection

// ScriptableObjectArchitecture.ColorCollection

// ScriptableObjectArchitecture.Examples.DamageDealerWithEvent

// ScriptableObjectArchitecture.Examples.DamageDealerWithEvent

// ScriptableObjectArchitecture.DebuggableGameEventListener

// ScriptableObjectArchitecture.DebuggableGameEventListener

// ScriptableObjectArchitecture.DoubleCollection

// ScriptableObjectArchitecture.DoubleCollection

// ScriptableObjectArchitecture.DoubleGameEvent

// ScriptableObjectArchitecture.DoubleGameEvent

// ScriptableObjectArchitecture.FloatCollection

// ScriptableObjectArchitecture.FloatCollection

// ScriptableObjectArchitecture.FloatGameEvent

// ScriptableObjectArchitecture.FloatGameEvent

// ScriptableObjectArchitecture.GameObjectCollection

// ScriptableObjectArchitecture.GameObjectCollection

// ScriptableObjectArchitecture.GameObjectGameEvent

// ScriptableObjectArchitecture.GameObjectGameEvent

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// ScriptableObjectArchitecture.IntCollection

// ScriptableObjectArchitecture.IntCollection

// ScriptableObjectArchitecture.IntGameEvent

// ScriptableObjectArchitecture.IntGameEvent

// ScriptableObjectArchitecture.LongCollection

// ScriptableObjectArchitecture.LongCollection

// ScriptableObjectArchitecture.LongGameEvent

// ScriptableObjectArchitecture.LongGameEvent

// ScriptableObjectArchitecture.ObjectCollection

// ScriptableObjectArchitecture.ObjectCollection

// ScriptableObjectArchitecture.ObjectGameEvent

// ScriptableObjectArchitecture.ObjectGameEvent

// ScriptableObjectArchitecture.QuaternionCollection

// ScriptableObjectArchitecture.QuaternionCollection

// ScriptableObjectArchitecture.QuaternionGameEvent

// ScriptableObjectArchitecture.QuaternionGameEvent

// ScriptableObjectArchitecture.SByteCollection

// ScriptableObjectArchitecture.SByteCollection

// ScriptableObjectArchitecture.SByteGameEvent

// ScriptableObjectArchitecture.SByteGameEvent

// ScriptableObjectArchitecture.SceneCollection

// ScriptableObjectArchitecture.SceneCollection

// ScriptableObjectArchitecture.ShortCollection

// ScriptableObjectArchitecture.ShortCollection

// ScriptableObjectArchitecture.ShortGameEvent

// ScriptableObjectArchitecture.ShortGameEvent

// ScriptableObjectArchitecture.StringCollection

// ScriptableObjectArchitecture.StringCollection

// ScriptableObjectArchitecture.StringGameEvent

// ScriptableObjectArchitecture.StringGameEvent

// ScriptableObjectArchitecture.UIntCollection

// ScriptableObjectArchitecture.UIntCollection

// ScriptableObjectArchitecture.UIntGameEvent

// ScriptableObjectArchitecture.UIntGameEvent

// ScriptableObjectArchitecture.ULongCollection

// ScriptableObjectArchitecture.ULongCollection

// ScriptableObjectArchitecture.ULongGameEvent

// ScriptableObjectArchitecture.ULongGameEvent

// ScriptableObjectArchitecture.UShortCollection

// ScriptableObjectArchitecture.UShortCollection

// ScriptableObjectArchitecture.UShortGameEvent

// ScriptableObjectArchitecture.UShortGameEvent

// ScriptableObjectArchitecture.Vector2Collection

// ScriptableObjectArchitecture.Vector2Collection

// ScriptableObjectArchitecture.Vector2GameEvent

// ScriptableObjectArchitecture.Vector2GameEvent

// ScriptableObjectArchitecture.Vector3Collection

// ScriptableObjectArchitecture.Vector3Collection

// ScriptableObjectArchitecture.Vector3GameEvent

// ScriptableObjectArchitecture.Vector3GameEvent

// ScriptableObjectArchitecture.Vector4Collection

// ScriptableObjectArchitecture.Vector4Collection

// ScriptableObjectArchitecture.Vector4GameEvent

// ScriptableObjectArchitecture.Vector4GameEvent

// ScriptableObjectArchitecture.BaseGameEventListener`2<ScriptableObjectArchitecture.GameEventBase,UnityEngine.Events.UnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`2<ScriptableObjectArchitecture.GameEventBase,UnityEngine.Events.UnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.AudioClip,ScriptableObjectArchitecture.AudioClipGameEvent,ScriptableObjectArchitecture.AudioClipUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.AudioClip,ScriptableObjectArchitecture.AudioClipGameEvent,ScriptableObjectArchitecture.AudioClipUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Boolean,ScriptableObjectArchitecture.BoolGameEvent,ScriptableObjectArchitecture.BoolUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Boolean,ScriptableObjectArchitecture.BoolGameEvent,ScriptableObjectArchitecture.BoolUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Byte,ScriptableObjectArchitecture.ByteGameEvent,ScriptableObjectArchitecture.ByteUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Byte,ScriptableObjectArchitecture.ByteGameEvent,ScriptableObjectArchitecture.ByteUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Char,ScriptableObjectArchitecture.CharGameEvent,ScriptableObjectArchitecture.CharUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Char,ScriptableObjectArchitecture.CharGameEvent,ScriptableObjectArchitecture.CharUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Double,ScriptableObjectArchitecture.DoubleGameEvent,ScriptableObjectArchitecture.DoubleUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Double,ScriptableObjectArchitecture.DoubleGameEvent,ScriptableObjectArchitecture.DoubleUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.GameObject,ScriptableObjectArchitecture.GameObjectGameEvent,ScriptableObjectArchitecture.GameObjectUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.GameObject,ScriptableObjectArchitecture.GameObjectGameEvent,ScriptableObjectArchitecture.GameObjectUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Int16,ScriptableObjectArchitecture.ShortGameEvent,ScriptableObjectArchitecture.ShortUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Int16,ScriptableObjectArchitecture.ShortGameEvent,ScriptableObjectArchitecture.ShortUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Int32,ScriptableObjectArchitecture.IntGameEvent,ScriptableObjectArchitecture.IntUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Int32,ScriptableObjectArchitecture.IntGameEvent,ScriptableObjectArchitecture.IntUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Int64,ScriptableObjectArchitecture.LongGameEvent,ScriptableObjectArchitecture.LongUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Int64,ScriptableObjectArchitecture.LongGameEvent,ScriptableObjectArchitecture.LongUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Object,ScriptableObjectArchitecture.ObjectGameEvent,ScriptableObjectArchitecture.ObjectUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Object,ScriptableObjectArchitecture.ObjectGameEvent,ScriptableObjectArchitecture.ObjectUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Quaternion,ScriptableObjectArchitecture.QuaternionGameEvent,ScriptableObjectArchitecture.QuaternionUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Quaternion,ScriptableObjectArchitecture.QuaternionGameEvent,ScriptableObjectArchitecture.QuaternionUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.SByte,ScriptableObjectArchitecture.SByteGameEvent,ScriptableObjectArchitecture.SByteUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.SByte,ScriptableObjectArchitecture.SByteGameEvent,ScriptableObjectArchitecture.SByteUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Single,ScriptableObjectArchitecture.FloatGameEvent,ScriptableObjectArchitecture.FloatUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.Single,ScriptableObjectArchitecture.FloatGameEvent,ScriptableObjectArchitecture.FloatUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.String,ScriptableObjectArchitecture.StringGameEvent,ScriptableObjectArchitecture.StringUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.String,ScriptableObjectArchitecture.StringGameEvent,ScriptableObjectArchitecture.StringUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.UInt16,ScriptableObjectArchitecture.UShortGameEvent,ScriptableObjectArchitecture.UShortUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.UInt16,ScriptableObjectArchitecture.UShortGameEvent,ScriptableObjectArchitecture.UShortUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.UInt32,ScriptableObjectArchitecture.UIntGameEvent,ScriptableObjectArchitecture.UIntUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.UInt32,ScriptableObjectArchitecture.UIntGameEvent,ScriptableObjectArchitecture.UIntUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.UInt64,ScriptableObjectArchitecture.ULongGameEvent,ScriptableObjectArchitecture.ULongUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<System.UInt64,ScriptableObjectArchitecture.ULongGameEvent,ScriptableObjectArchitecture.ULongUnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Vector2,ScriptableObjectArchitecture.Vector2GameEvent,ScriptableObjectArchitecture.Vector2UnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Vector2,ScriptableObjectArchitecture.Vector2GameEvent,ScriptableObjectArchitecture.Vector2UnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Vector3,ScriptableObjectArchitecture.Vector3GameEvent,ScriptableObjectArchitecture.Vector3UnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Vector3,ScriptableObjectArchitecture.Vector3GameEvent,ScriptableObjectArchitecture.Vector3UnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Vector4,ScriptableObjectArchitecture.Vector4GameEvent,ScriptableObjectArchitecture.Vector4UnityEvent>

// ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Vector4,ScriptableObjectArchitecture.Vector4GameEvent,ScriptableObjectArchitecture.Vector4UnityEvent>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.AnimationCurve,ScriptableObjectArchitecture.AnimationCurveEvent>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.AnimationCurve,ScriptableObjectArchitecture.AnimationCurveEvent>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.AudioClip,ScriptableObjectArchitecture.AudioClipEvent>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.AudioClip,ScriptableObjectArchitecture.AudioClipEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.Boolean,ScriptableObjectArchitecture.BoolEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.Boolean,ScriptableObjectArchitecture.BoolEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.Byte,ScriptableObjectArchitecture.ByteEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.Byte,ScriptableObjectArchitecture.ByteEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.Char,ScriptableObjectArchitecture.CharEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.Char,ScriptableObjectArchitecture.CharEvent>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Color,ScriptableObjectArchitecture.ColorEvent>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Color,ScriptableObjectArchitecture.ColorEvent>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Color32,ScriptableObjectArchitecture.Color32Event>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Color32,ScriptableObjectArchitecture.Color32Event>

// ScriptableObjectArchitecture.BaseVariable`2<System.Double,ScriptableObjectArchitecture.DoubleEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.Double,ScriptableObjectArchitecture.DoubleEvent>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.GameObject,ScriptableObjectArchitecture.GameObjectEvent>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.GameObject,ScriptableObjectArchitecture.GameObjectEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.Int16,ScriptableObjectArchitecture.ShortEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.Int16,ScriptableObjectArchitecture.ShortEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.Int32,ScriptableObjectArchitecture.IntEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.Int32,ScriptableObjectArchitecture.IntEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.Int64,ScriptableObjectArchitecture.LongEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.Int64,ScriptableObjectArchitecture.LongEvent>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.LayerMask,ScriptableObjectArchitecture.LayerMaskEvent>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.LayerMask,ScriptableObjectArchitecture.LayerMaskEvent>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Object,ScriptableObjectArchitecture.ObjectEvent>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Object,ScriptableObjectArchitecture.ObjectEvent>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Quaternion,ScriptableObjectArchitecture.QuaternionEvent>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Quaternion,ScriptableObjectArchitecture.QuaternionEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.SByte,ScriptableObjectArchitecture.SByteEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.SByte,ScriptableObjectArchitecture.SByteEvent>

// ScriptableObjectArchitecture.BaseVariable`2<ScriptableObjectArchitecture.SceneInfo,ScriptableObjectArchitecture.SceneInfoEvent>

// ScriptableObjectArchitecture.BaseVariable`2<ScriptableObjectArchitecture.SceneInfo,ScriptableObjectArchitecture.SceneInfoEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.Single,ScriptableObjectArchitecture.FloatEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.Single,ScriptableObjectArchitecture.FloatEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.String,ScriptableObjectArchitecture.StringEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.String,ScriptableObjectArchitecture.StringEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.UInt16,ScriptableObjectArchitecture.UShortEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.UInt16,ScriptableObjectArchitecture.UShortEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.UInt32,ScriptableObjectArchitecture.UIntEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.UInt32,ScriptableObjectArchitecture.UIntEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.UInt64,ScriptableObjectArchitecture.ULongEvent>

// ScriptableObjectArchitecture.BaseVariable`2<System.UInt64,ScriptableObjectArchitecture.ULongEvent>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Vector2,ScriptableObjectArchitecture.Vector2Event>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Vector2,ScriptableObjectArchitecture.Vector2Event>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Vector3,ScriptableObjectArchitecture.Vector3Event>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Vector3,ScriptableObjectArchitecture.Vector3Event>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Vector4,ScriptableObjectArchitecture.Vector4Event>

// ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Vector4,ScriptableObjectArchitecture.Vector4Event>

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// ScriptableObjectArchitecture.AnimationCurveVariable

// ScriptableObjectArchitecture.AnimationCurveVariable

// ScriptableObjectArchitecture.AudioClipGameEventListener

// ScriptableObjectArchitecture.AudioClipGameEventListener

// ScriptableObjectArchitecture.AudioClipVariable

// ScriptableObjectArchitecture.AudioClipVariable

// ScriptableObjectArchitecture.BoolGameEventListener

// ScriptableObjectArchitecture.BoolGameEventListener

// ScriptableObjectArchitecture.BoolVariable

// ScriptableObjectArchitecture.BoolVariable

// ScriptableObjectArchitecture.ByteGameEventListener

// ScriptableObjectArchitecture.ByteGameEventListener

// ScriptableObjectArchitecture.ByteVariable

// ScriptableObjectArchitecture.ByteVariable

// ScriptableObjectArchitecture.CharGameEventListener

// ScriptableObjectArchitecture.CharGameEventListener

// ScriptableObjectArchitecture.CharVariable

// ScriptableObjectArchitecture.CharVariable

// ScriptableObjectArchitecture.Color32Variable

// ScriptableObjectArchitecture.Color32Variable

// ScriptableObjectArchitecture.ColorVariable

// ScriptableObjectArchitecture.ColorVariable

// ScriptableObjectArchitecture.DoubleGameEventListener

// ScriptableObjectArchitecture.DoubleGameEventListener

// ScriptableObjectArchitecture.DoubleVariable

// ScriptableObjectArchitecture.DoubleVariable

// ScriptableObjectArchitecture.FloatGameEventListener

// ScriptableObjectArchitecture.FloatGameEventListener

// ScriptableObjectArchitecture.FloatVariable

// ScriptableObjectArchitecture.FloatVariable

// ScriptableObjectArchitecture.GameEventListener

// ScriptableObjectArchitecture.GameEventListener

// ScriptableObjectArchitecture.GameObjectGameEventListener

// ScriptableObjectArchitecture.GameObjectGameEventListener

// ScriptableObjectArchitecture.GameObjectVariable

// ScriptableObjectArchitecture.GameObjectVariable

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// ScriptableObjectArchitecture.IntGameEventListener

// ScriptableObjectArchitecture.IntGameEventListener

// ScriptableObjectArchitecture.IntVariable

// ScriptableObjectArchitecture.IntVariable

// ScriptableObjectArchitecture.LayerMaskVariable

// ScriptableObjectArchitecture.LayerMaskVariable

// ScriptableObjectArchitecture.LongGameEventListener

// ScriptableObjectArchitecture.LongGameEventListener

// ScriptableObjectArchitecture.LongVariable

// ScriptableObjectArchitecture.LongVariable

// ScriptableObjectArchitecture.ObjectGameEventListener

// ScriptableObjectArchitecture.ObjectGameEventListener

// ScriptableObjectArchitecture.ObjectVariable

// ScriptableObjectArchitecture.ObjectVariable

// ScriptableObjectArchitecture.QuaternionGameEventListener

// ScriptableObjectArchitecture.QuaternionGameEventListener

// ScriptableObjectArchitecture.QuaternionVariable

// ScriptableObjectArchitecture.QuaternionVariable

// ScriptableObjectArchitecture.SByteGameEventListener

// ScriptableObjectArchitecture.SByteGameEventListener

// ScriptableObjectArchitecture.SByteVariable

// ScriptableObjectArchitecture.SByteVariable

// ScriptableObjectArchitecture.SceneVariable

// ScriptableObjectArchitecture.SceneVariable

// ScriptableObjectArchitecture.ShortGameEventListener

// ScriptableObjectArchitecture.ShortGameEventListener

// ScriptableObjectArchitecture.ShortVariable

// ScriptableObjectArchitecture.ShortVariable

// ScriptableObjectArchitecture.StringGameEventListener

// ScriptableObjectArchitecture.StringGameEventListener

// ScriptableObjectArchitecture.StringVariable

// ScriptableObjectArchitecture.StringVariable

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text

// ScriptableObjectArchitecture.UIntGameEventListener

// ScriptableObjectArchitecture.UIntGameEventListener

// ScriptableObjectArchitecture.UIntVariable

// ScriptableObjectArchitecture.UIntVariable

// ScriptableObjectArchitecture.ULongGameEventListener

// ScriptableObjectArchitecture.ULongGameEventListener

// ScriptableObjectArchitecture.ULongVariable

// ScriptableObjectArchitecture.ULongVariable

// ScriptableObjectArchitecture.UShortGameEventListener

// ScriptableObjectArchitecture.UShortGameEventListener

// ScriptableObjectArchitecture.UShortVariable

// ScriptableObjectArchitecture.UShortVariable

// ScriptableObjectArchitecture.Vector2GameEventListener

// ScriptableObjectArchitecture.Vector2GameEventListener

// ScriptableObjectArchitecture.Vector2Variable

// ScriptableObjectArchitecture.Vector2Variable

// ScriptableObjectArchitecture.Vector3GameEventListener

// ScriptableObjectArchitecture.Vector3GameEventListener

// ScriptableObjectArchitecture.Vector3Variable

// ScriptableObjectArchitecture.Vector3Variable

// ScriptableObjectArchitecture.Vector4GameEventListener

// ScriptableObjectArchitecture.Vector4GameEventListener

// ScriptableObjectArchitecture.Vector4Variable

// ScriptableObjectArchitecture.Vector4Variable
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// System.Void ScriptableObjectArchitecture.Collection`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35* __this, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_mCD6121D4FDE143767E6F0EC89183A9A349884DFF_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338* __this, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseGameEventListener_2__ctor_m6D9A53DB29E3584DEDDC142F678EF8AB0AF35BED_gshared (BaseGameEventListener_2_tE6AF6F0D1CD4A9A5A539720679462A7B3AA1355D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030* __this, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818* __this, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::.ctor(TBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_baseValue, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// TBase ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseReference_2_get_Value_m2F04674F2E01F35EEC80CE739DCAC6D55AAB64C3_gshared (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>::set_Value(TBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseReference_2_set_Value_m5250C3994CA17BB7739BCB81C303EEB2831E5F75_gshared (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
// T ScriptableObjectArchitecture.Collection`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_get_Item_m9501604E745094B7692C42E5DB9EAE3D80F1BA1F_gshared (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.Collection`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_Add_mA49DBD8BB81E4CA8FFA32FCAC974D613CCDCD14C_gshared (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.Collection`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1_Remove_m5D58875D3C2E09DA37CAC3F21ADE6D47DBE6252D_gshared (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.Collection`1<UnityEngine.AnimationCurve>::.ctor()
inline void Collection_1__ctor_mBA74243E822805426071429567CBC51B345A3702 (Collection_1_tBDB85857CDFC02E3FE579BA9F05EC13E4D11A626* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<UnityEngine.AudioClip>::.ctor()
inline void Collection_1__ctor_m71549C785738F8144DF98930DC7CF0CE4BFC7D39 (Collection_1_tB9F83B60496EBB18BB23457FE18DB750F00E21F5* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.SOArchitectureBaseObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SOArchitectureBaseObject__ctor_mF11F3FE2196C9F1D221DBD34B1FD376D01C09E89 (SOArchitectureBaseObject_t5F7D212ABE0AAA356A8D13D81468DCC5EFFC631B* __this, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.Collection`1<System.Boolean>::.ctor()
inline void Collection_1__ctor_m3230C84A44BEE424D9647EB0B025B71D96AC722B (Collection_1_t5C8F9118B15F25FC4A09C8016386BB536D871C3F* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<System.Byte>::.ctor()
inline void Collection_1__ctor_m42C2642A4AD812E5F9BC155944AE752DDDD82C80 (Collection_1_tB75730F824C5260D4684D8F27E54CB7EDDD8B325* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<System.Char>::.ctor()
inline void Collection_1__ctor_mA3FAC784EFFB670E68D803A09CB630D533635386 (Collection_1_tE9F523232A24F4715C3883FC3B4A28057E663008* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<UnityEngine.Color32>::.ctor()
inline void Collection_1__ctor_mB58B6635A19FCFEB59F7D8E3061A18BAD07F5C27 (Collection_1_tC7145F80C9C94F813E69D62632C7792F1B8FF9D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<UnityEngine.Color>::.ctor()
inline void Collection_1__ctor_mC9A7887862C04E3F42AA80DB1085E65BD189D701 (Collection_1_t5152D20A91B22A024A9F5CAAD5558E46AF1F2418* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<System.Double>::.ctor()
inline void Collection_1__ctor_m8F4A5FE3E67FE0C1CC365F396993AC861FB6EC0E (Collection_1_tF42A5F6F7CC263124814E46F42FD3E5D42C00AC8* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<System.Single>::.ctor()
inline void Collection_1__ctor_m31C233038E568DA4C4FED235DE7433653F5C9EB1 (Collection_1_t798BA4D0A9B3200F245DECF04442FFE29D74CDF8* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<UnityEngine.GameObject>::.ctor()
inline void Collection_1__ctor_m1E6105AD8495010D1EF7305FA82CE23767721E2C (Collection_1_t094F7E1819D7E0C9778C527D1401CEDB4CCA56C1* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<System.Int32>::.ctor()
inline void Collection_1__ctor_mCA083ED30CD6075239A204F8B604394D906F6CFE (Collection_1_t17C42C2463B620CB15A1B7630A300F354504CDBC* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<System.Int64>::.ctor()
inline void Collection_1__ctor_m7489EA7478B8551919D3280AE39974F154898675 (Collection_1_t8CADAF8D3E23E843E6FE47B5EE8DE7401BFEC2E6* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<UnityEngine.Object>::.ctor()
inline void Collection_1__ctor_mF5F52B9CF3D942BC09A924B32D34DF2FE7C314C0 (Collection_1_t7E13658BAB9E9597A202B079AA1A44E9683CDEC2* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<UnityEngine.Quaternion>::.ctor()
inline void Collection_1__ctor_m15C4874CF86AF1298276699209E4E1C3241F8102 (Collection_1_tBF0E04DD341E3966F3DA4AA95DE2B8C2040891CE* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<System.SByte>::.ctor()
inline void Collection_1__ctor_mBBCFD1D653D1AF4A7C99EA09025D75A6666829E3 (Collection_1_tFF583AA72D09BB380446A612689A683D456C19A7* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<ScriptableObjectArchitecture.SceneInfo>::.ctor()
inline void Collection_1__ctor_m47AE47AF17DD8E0963E33DB36684720623784C22 (Collection_1_t3BF8F10ACC0AC01963B552916F67A52F0580AFB3* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<System.Int16>::.ctor()
inline void Collection_1__ctor_m2D38B37D83086625B38F592379A35B0EBDEE110A (Collection_1_tDCE3D258879871CA66B574AD37FE25FFF44FD408* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<System.String>::.ctor()
inline void Collection_1__ctor_m80920E2D67717BE3295D20A49027FE8A6BE7A812 (Collection_1_tDE136E76AA13C59D68071661079C19B65415023B* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<System.UInt32>::.ctor()
inline void Collection_1__ctor_m30B31CF03F024858C828C68A5F44E249CCCAE2F0 (Collection_1_t848830310C624ECF361E5DB5D65F98CDE80CFC84* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<System.UInt64>::.ctor()
inline void Collection_1__ctor_m1061A97C480CF12D016CB0CAF2D3E36F48181671 (Collection_1_t13C8178151B8D78737D26BABB2AC4BB2EFC0C083* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<System.UInt16>::.ctor()
inline void Collection_1__ctor_m12DD9E260B2938564BAFC445BB75A8155DBAE031 (Collection_1_t7EC3F483C8D83EF91FB906313C16530E0ED7EF83* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<UnityEngine.Vector2>::.ctor()
inline void Collection_1__ctor_mCB6A568B1A96A93CCF9088DC0B5CDEAE1A5F9BEE (Collection_1_t56D4A3CBD784ED40DE7DF5FBB7FA9FD1AFD17404* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<UnityEngine.Vector3>::.ctor()
inline void Collection_1__ctor_m874E14161662215424935DBFC52F8848F78FF75D (Collection_1_tE0178F131BFCB95DF652FF8E1381E2F154FD3C20* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<UnityEngine.Vector4>::.ctor()
inline void Collection_1__ctor_mB49EAA293AB1A55C171EE02841F98B294EA3CAA8 (Collection_1_tF625EEE1C009CE0E79AE9D238374159154E73779* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, const RuntimeMethod*))Collection_1__ctor_mC4033D654157082468914397B5CF198EA7E21762_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.AudioClip>::.ctor()
inline void GameEventBase_1__ctor_mF0B3AC8BC698936020AA89BF8AD95B8C17CCD5BD (GameEventBase_1_t2672A3A8FEB9CEAA9F57BC3EB5F5B1D1F8366B13* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<System.Boolean>::.ctor()
inline void GameEventBase_1__ctor_mE7C13CCEECFA8E6C786F436809C76C6284AC23EE (GameEventBase_1_t10E7740AC1F783C5F77C831B62E35F9B8CB724A0* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<System.Byte>::.ctor()
inline void GameEventBase_1__ctor_m2E6060DF7CF7C3C376BDAF2E2B080ADAA3598325 (GameEventBase_1_tBCF2C748D38C899013F74A9DD65DA37E4D039E8B* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<System.Char>::.ctor()
inline void GameEventBase_1__ctor_m4682BA9E57D4C7948A6CAFFECFD6174A21082007 (GameEventBase_1_tB539EE24E3C9D31E9C50740CAA1EBD5CD325C837* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<System.Double>::.ctor()
inline void GameEventBase_1__ctor_mBACCACC5F6D007DF50B55FB33FB292EFD1DFC52F (GameEventBase_1_t4A08A3353ACC37D7D4F0A4043139C8E7370D173F* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<System.Single>::.ctor()
inline void GameEventBase_1__ctor_m440746E0FE80BCF918E31A3AD95776CC0D9A6A4E (GameEventBase_1_tF2FB7A1D2DF48AD421FB12ADE83EF18F27DFD997* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBase__ctor_m6EB5E816C96774CF54E4D6B2EC5C2D2C3A6FCDB1 (GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272* __this, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.GameEventBase::AddStackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBase_AddStackTrace_mB8C347F081668C7AFC76CD7379A15D43A5F4E48C (GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener>::get_Count()
inline int32_t List_1_get_Count_m9AD2110093D6399438C94DF99535382D17BC2BD1_inline (List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m94AD184A1FA97F6C8E621DFF737934839D264902 (List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
inline int32_t List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T System.Collections.Generic.List`1<System.Action>::get_Item(System.Int32)
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener>::Contains(T)
inline bool List_1_Contains_m2117D821611AE2E4CD3CB8008DA92A974A2D9C37 (List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener>::Add(T)
inline void List_1_Add_mCEBC4DED600440A7DBAAA37EDE93AF708240658B_inline (List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener>::Remove(T)
inline bool List_1_Remove_mA2266BE2A16098E2952DF622C7899477830F76E2 (List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Action>::Contains(T)
inline bool List_1_Contains_m181F2DB6756B1ADDCEC909ADA27A8FDDBD18C002 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::Add(T)
inline void List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Action>::Remove(T)
inline bool List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_mF86506D6DC21F6CD58C4769D6E71A3E50A3C2285 (List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_mCD6121D4FDE143767E6F0EC89183A9A349884DFF_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, ___1_count, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_mA28A562F34259E1CF253337E52E77A77912455FE (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_mCD6121D4FDE143767E6F0EC89183A9A349884DFF_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, ___1_count, method);
}
// System.Void System.Collections.Generic.List`1<ScriptableObjectArchitecture.IGameEventListener>::.ctor()
inline void List_1__ctor_m1242F20B63C5DF4CE59F731B3591F5FEA11348AB (List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<ScriptableObjectArchitecture.StackTraceEntry>::.ctor()
inline void List_1__ctor_m8B1AB2EA8725F5B6C1D10B2AD740EED33566C78A (List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
// System.String System.Environment::get_StackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_StackTrace_mE8E276A919C9C9D59220E6D2BA867FABFD9B011D (const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.StackTraceEntry::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTraceEntry__ctor_mE45980DC4FFAC6FE613ED77BE70648AF2BA0442E (StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* __this, String_t* ___0_trace, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.StackTraceEntry::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTraceEntry__ctor_m063391BA968DB4EC31C97DC3A7DAB72002A2BD12 (StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* __this, String_t* ___0_trace, const RuntimeMethod* method) ;
// System.Boolean ScriptableObjectArchitecture.StackTraceEntry::Equals(ScriptableObjectArchitecture.StackTraceEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StackTraceEntry_Equals_m427CC02A04E96E0485F2CB54F1B91E041FAA6D0F (StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* __this, StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* ___0_other, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.GameObject>::.ctor()
inline void GameEventBase_1__ctor_mFF1827887C4513CC2EF95D6A2305B42F05EAE93E (GameEventBase_1_tCAA51EC4846977F9612E78EC703647682F76D382* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<System.Int32>::.ctor()
inline void GameEventBase_1__ctor_m290183D1C06672EA7E6DABC1E2243A5D338B9FD0 (GameEventBase_1_t08486ECCC1D87A7ADDDDF601112C51D9402C0453* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<System.Int64>::.ctor()
inline void GameEventBase_1__ctor_m7063F4706F2D836CC2D93C3730E370DA5DDCABB9 (GameEventBase_1_t4940927CCF59A809C511974B9C7F760807524B18* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Object>::.ctor()
inline void GameEventBase_1__ctor_m12B6C41F6E439E259CD620518DE0D40190226816 (GameEventBase_1_t456FA50EA4B9C6BBBBAB664F3B1BDBE1EEF9F328* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Quaternion>::.ctor()
inline void GameEventBase_1__ctor_m411745A00ABD9FBBE7E85DDBF45E214AF964EBD6 (GameEventBase_1_t8A361FAC6D46AD51B5D45288F299DA234D8B792B* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<System.SByte>::.ctor()
inline void GameEventBase_1__ctor_m520A90BEE94441B3387907DFD7C074D04386AC70 (GameEventBase_1_t671515C5D620EF9D9F2B205ED87F254EDB2665CA* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<System.Int16>::.ctor()
inline void GameEventBase_1__ctor_mC11DCA0256F07810B61D588E31AC78D882984992 (GameEventBase_1_tF173A269C6C3C0AE716BB70993BAB9CBCE00551B* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<System.String>::.ctor()
inline void GameEventBase_1__ctor_mA45C88F241D4047858E8728DFD5978D519326EA1 (GameEventBase_1_tE944FE9F846468030EC60A5164C60CB9583C0B2F* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<System.UInt32>::.ctor()
inline void GameEventBase_1__ctor_m5EFF93758E19D3AEC43422A1CAE8C8FBB40B92CC (GameEventBase_1_tD31DE5B30A0CE236DACDA70921390F40C8364BED* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<System.UInt64>::.ctor()
inline void GameEventBase_1__ctor_m21ED1715CFE84E4AB5697A7BCAD7EB37EC6C9CF7 (GameEventBase_1_tB21A71EACB908B7D589EA25E08A9438A6DCD97CF* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<System.UInt16>::.ctor()
inline void GameEventBase_1__ctor_m749B28ACC5A3546402521E4AFFD676A96A0CD2CC (GameEventBase_1_tE24979B752D2587943DC375EB883825387E68B74* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Vector2>::.ctor()
inline void GameEventBase_1__ctor_m9D92535D6066AE0F065C224EFABC46AD620221AE (GameEventBase_1_tA38DC9B336201DEA0FC0EA056F28499530382482* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Vector3>::.ctor()
inline void GameEventBase_1__ctor_m7740F8979A0A9C3BAF0FB694ACFFBD32F78E0CB7 (GameEventBase_1_t15AA158F87755BB2A88ADEE918BDDD2DAB2BECB4* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.GameEventBase`1<UnityEngine.Vector4>::.ctor()
inline void GameEventBase_1__ctor_mC183298F9FC659450273D7CBDF42F4FC384FA38C (GameEventBase_1_t91A1F511B0E04EB48E0F7A8D952888C04544BF89* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.GameEventBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*, const RuntimeMethod*))GameEventBase_1__ctor_mB5EBC54EC9363A461C97980B3D3187ADDDB2C8BD_gshared)((GameEventBase_1_t1C389FE360BE4C3D96C3DD4AE667856CF6FB0860*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.AudioClip,ScriptableObjectArchitecture.AudioClipGameEvent,ScriptableObjectArchitecture.AudioClipUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_m189D373B05DEB74D7C3E74574A8259AE8A37E747 (BaseGameEventListener_3_tAE202232436DF002453AF5D65801683A3B53B843* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.SOArchitectureBaseMonobehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SOArchitectureBaseMonobehaviour__ctor_m8C96EC4870E76C84587E2017769C70BFC2725B08 (SOArchitectureBaseMonobehaviour_tE95AACB49C1D557C6B4A91D947744DB3E5E39D2C* __this, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<System.Boolean,ScriptableObjectArchitecture.BoolGameEvent,ScriptableObjectArchitecture.BoolUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_m5FAE008D58F36EE33A5CE97F09F30F5A00171B1E (BaseGameEventListener_3_tFC494D4840A76E0005B926213C8A246124A7BAD9* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<System.Byte,ScriptableObjectArchitecture.ByteGameEvent,ScriptableObjectArchitecture.ByteUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_mDF1EC969A89997886056913D894DBE8F7E56A8EC (BaseGameEventListener_3_t2B25A20D623C929B0B26457C230E4667F1AE9735* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<System.Char,ScriptableObjectArchitecture.CharGameEvent,ScriptableObjectArchitecture.CharUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_m448434ADFCD3BFF8F541B78724E89F7F304C1FAD (BaseGameEventListener_3_tE3C228824D125E96A9D88897FB66BCB7F8A142ED* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<System.Double,ScriptableObjectArchitecture.DoubleGameEvent,ScriptableObjectArchitecture.DoubleUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_m9A83E5DDD2B0D669E331C529C35755EC580CC27C (BaseGameEventListener_3_t634B97A5CDFFCA7C454FC2D04B446700954C92D9* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<System.Single,ScriptableObjectArchitecture.FloatGameEvent,ScriptableObjectArchitecture.FloatUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_m35CE0E1DC2B489126982EBEA01728598D47C9B1E (BaseGameEventListener_3_t110BCA66896B24D60FF272946813F2742B5A9E99* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`2<ScriptableObjectArchitecture.GameEventBase,UnityEngine.Events.UnityEvent>::.ctor()
inline void BaseGameEventListener_2__ctor_m4A3A046B0C300F6CE8D7E8B344742DC54B7E4A9B (BaseGameEventListener_2_tFD82FAA680E6622647BA3039674EEBB5BD2AD5DA* __this, const RuntimeMethod* method)
{
	((  void (*) (BaseGameEventListener_2_tFD82FAA680E6622647BA3039674EEBB5BD2AD5DA*, const RuntimeMethod*))BaseGameEventListener_2__ctor_m6D9A53DB29E3584DEDDC142F678EF8AB0AF35BED_gshared)(__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.GameObject,ScriptableObjectArchitecture.GameObjectGameEvent,ScriptableObjectArchitecture.GameObjectUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_mB5F3DF550994877C6406D8AE362F3B64D76B50AA (BaseGameEventListener_3_tC195237F0521E8BC1F3A819B8134FD6D9B8223B3* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<System.Int32,ScriptableObjectArchitecture.IntGameEvent,ScriptableObjectArchitecture.IntUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_m6D31CF1F0B0B511DEC4441D3B443CE646EC0C2E8 (BaseGameEventListener_3_t1003CC209EBADB578E47D2FE352CEFBD3941B44E* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<System.Int64,ScriptableObjectArchitecture.LongGameEvent,ScriptableObjectArchitecture.LongUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_m2B54116449E82E02506DD3E8A400C0CBD9755134 (BaseGameEventListener_3_tC2AB2EFC7FD3D419A3FA318C99CC761526DFCB3E* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Object,ScriptableObjectArchitecture.ObjectGameEvent,ScriptableObjectArchitecture.ObjectUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_mC6AD85CB5946F8E9C97FB5D1F15E302AEEF74D7D (BaseGameEventListener_3_t6D3CA4A0B95E1E87D3453BB71CC1564E826ED42F* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Quaternion,ScriptableObjectArchitecture.QuaternionGameEvent,ScriptableObjectArchitecture.QuaternionUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_m997625FF116A951F8551349B2157667B3234BDA6 (BaseGameEventListener_3_t8B910CCCD081B7BF005B4CB7CE5A34DD85F0568E* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<System.SByte,ScriptableObjectArchitecture.SByteGameEvent,ScriptableObjectArchitecture.SByteUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_m6F4A8E0235D6D1531BCB2017978B9297B157216C (BaseGameEventListener_3_t48F97903CBA642C20A22E15AD5006B3A5FA406A0* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<System.Int16,ScriptableObjectArchitecture.ShortGameEvent,ScriptableObjectArchitecture.ShortUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_mE96F408AF352E6089F07F4E54F7EA24C32FD677E (BaseGameEventListener_3_t056DC97342A47A863F82519F3E0BD0702A3CDBAE* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<System.String,ScriptableObjectArchitecture.StringGameEvent,ScriptableObjectArchitecture.StringUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_mEE29566BBB67CF9078FE66EFED7A5BD856B74056 (BaseGameEventListener_3_t75D574E6D5AD8A207267C0C79FE183700A60657F* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<System.UInt32,ScriptableObjectArchitecture.UIntGameEvent,ScriptableObjectArchitecture.UIntUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_m7414A0EB12F1D7CFA7CCCF31BA69601EB71DA307 (BaseGameEventListener_3_t24A33653CF8E763B8B5994688F7518627604B658* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<System.UInt64,ScriptableObjectArchitecture.ULongGameEvent,ScriptableObjectArchitecture.ULongUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_mDF06B5C9DC9CCC7FB3EECB036AED05C7485FBC79 (BaseGameEventListener_3_tBFEFD642F50DFC02601238694F8CA1476E92EA98* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<System.UInt16,ScriptableObjectArchitecture.UShortGameEvent,ScriptableObjectArchitecture.UShortUnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_mBAFF5F6F77F42588EF7A80DEA49B4C8794DE2938 (BaseGameEventListener_3_t8E11D8D733E72A279D6E37BB25E5319D71682B7B* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Vector2,ScriptableObjectArchitecture.Vector2GameEvent,ScriptableObjectArchitecture.Vector2UnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_m692F4F46D354C25906E74A887991F98F50B913F6 (BaseGameEventListener_3_t514F33481B6EFC7C51659813ABF6E5F0491FF4AD* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Vector3,ScriptableObjectArchitecture.Vector3GameEvent,ScriptableObjectArchitecture.Vector3UnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_m0A9EE86529772AACCC4C2B0B3F908FA446E57D16 (BaseGameEventListener_3_t34CFE7A4C64B2C292277B966F2F5A67CB2C6DE53* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseGameEventListener`3<UnityEngine.Vector4,ScriptableObjectArchitecture.Vector4GameEvent,ScriptableObjectArchitecture.Vector4UnityEvent>::.ctor()
inline void BaseGameEventListener_3__ctor_mE1625F879160AE1B1BB712E81762ACBE0C802F2B (BaseGameEventListener_3_t390FC6699B10A9D369565B7A1CA7EF5AC1119B98* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseGameEventListener`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object,System.Object>*/BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*, const RuntimeMethod*))BaseGameEventListener_3__ctor_m8721F402EA011462DE65DB07A2B18D6EF5655AD3_gshared)((BaseGameEventListener_3_t5F4920E7FCD09A392B3C90CB34E2F68DACFE0338*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.AudioClip>::.ctor()
inline void UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB (UnityEvent_1_tAAA723930EF5C2DD5C11869C526B4A44D162F39B* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
inline void UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Byte>::.ctor()
inline void UnityEvent_1__ctor_mC0A92C3237B35318DE5F6DBA95707F2B0FF0583A (UnityEvent_1_tFACDCC5DE4AEC520C1F3F113700A5F35BB05D4A4* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Char>::.ctor()
inline void UnityEvent_1__ctor_m478A749123AACC5A1B09691CD7D01E8583040823 (UnityEvent_1_t263F7C01FC33C17A6DAF0ED264709AE83E03B3D2* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Double>::.ctor()
inline void UnityEvent_1__ctor_m799270AC2A44EF438FC5DB540A66E0E20553FF84 (UnityEvent_1_t7EBD40037C3DBB4EEFE941AEFD2E3CA88C7382ED* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
inline void UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422 (UnityEvent_1_tDD811EB8F49CEE97BA6DF59344DFE6C6F42553D4* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject>::.ctor()
inline void UnityEvent_1__ctor_mD882FB5FAE320D2C50F36BC2FEC6474157F553EA (UnityEvent_1_t1A08C69A745D79C1F101AD784277E54DF250C6E2* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
inline void UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684 (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int64>::.ctor()
inline void UnityEvent_1__ctor_m1334E2CA9BA5661A144E0A018DCB04F564F96B47 (UnityEvent_1_t04EB8F75BA20E19772BBB0023A57CC7FBAFED743* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Object>::.ctor()
inline void UnityEvent_1__ctor_m654E3C4B3BD13FC403E68AD1AD0490D53884E294 (UnityEvent_1_t3B706B8CA3352B79F48B396EEFD6A1EF2E1388BA* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Quaternion>::.ctor()
inline void UnityEvent_1__ctor_mDBE311970A582A4847FE788142E497E17A7D94BA (UnityEvent_1_tA3CC6DC833EBB0864AD5E6F9BE8920D7E71B32A5* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.SByte>::.ctor()
inline void UnityEvent_1__ctor_mC8B4DC23859CD826D11F3914EC0DABEB1883CB69 (UnityEvent_1_tC88F80D21305B15BE70F4D4350BA4FA52A6D21C8* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int16>::.ctor()
inline void UnityEvent_1__ctor_m45C0A37807A6ABE8CC4022F191E14CBE9E89B8BD (UnityEvent_1_tD34E58DBA2551C12054B5DE25F61F208892C19DC* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.UInt32>::.ctor()
inline void UnityEvent_1__ctor_mF41381CD22DBDAD5BF8373F81680253F7761DE09 (UnityEvent_1_t205E4D1A377E9351AED6C5DA5FC0446C7BBEF2EB* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.UInt64>::.ctor()
inline void UnityEvent_1__ctor_mF8CD7C858BE7945CE8860A0C5DFB7DC6B9F93283 (UnityEvent_1_tDB4BD67BA2696C34F7FBC7567EB699C57B966568* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.UInt16>::.ctor()
inline void UnityEvent_1__ctor_m89FB371E95EF8A989F257539389EE368643EC708 (UnityEvent_1_tC730276456093E44C28B05F95C654FF94C881497* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
inline void UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D (UnityEvent_1_t9A868DD8EBFC0D9D8134D903A170ECBDEE567932* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector3>::.ctor()
inline void UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176 (UnityEvent_1_tB42B7E8E9010FF524B45FD0EC7AD37D7D3B006AE* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector4>::.ctor()
inline void UnityEvent_1__ctor_m72E5E9F77D48BEAC99A59F585626E00FE0DE9E52 (UnityEvent_1_t7FA3641C06EC4F8BD5600438DB4CB16B7042FB59* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.AnimationCurve,ScriptableObjectArchitecture.AnimationCurveVariable>::.ctor()
inline void BaseReference_2__ctor_m8076511EF9483CCBB19954F7755CB72DB6B776C2 (BaseReference_2_t40F45E3A6216916C3134BABF924CC0514FED82A6* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.AnimationCurve,ScriptableObjectArchitecture.AnimationCurveVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_mC2D9CBA4EA09611D525F26B3E8426CA7A72A838B (BaseReference_2_t40F45E3A6216916C3134BABF924CC0514FED82A6* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.AudioClip,ScriptableObjectArchitecture.AudioClipVariable>::.ctor()
inline void BaseReference_2__ctor_mEF217C7F393C01B21702192049F39AA24CF23ABE (BaseReference_2_t820F1AA29672336A6F1BC83BECD1718BE8AACD17* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.AudioClip,ScriptableObjectArchitecture.AudioClipVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_m0CC86AE8B86CF85E3C655B9377C419B1155D66D6 (BaseReference_2_t820F1AA29672336A6F1BC83BECD1718BE8AACD17* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Boolean,ScriptableObjectArchitecture.BoolVariable>::.ctor()
inline void BaseReference_2__ctor_m0A59A00E8E06449F1A009EF1FA91A1EEF4BDE613 (BaseReference_2_tE9D4D09B97C467C0B3A7EEC15A83B443EC1ED8D6* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Boolean,ScriptableObjectArchitecture.BoolVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_m45F3B424CD867EC0A24D91A4D9EC9B83B5265C66 (BaseReference_2_tE9D4D09B97C467C0B3A7EEC15A83B443EC1ED8D6* __this, bool ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Byte,ScriptableObjectArchitecture.ByteVariable>::.ctor()
inline void BaseReference_2__ctor_m34D7BF0425EF8688C7701AFBAD08D826431974B0 (BaseReference_2_t07F48D8BA2A4D6B24C3BEFD67FAA10BA9E4F878E* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Byte,ScriptableObjectArchitecture.ByteVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_m367AEF283E91CB9F21AEB76894D771B561B7DCF2 (BaseReference_2_t07F48D8BA2A4D6B24C3BEFD67FAA10BA9E4F878E* __this, uint8_t ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Char,ScriptableObjectArchitecture.CharVariable>::.ctor()
inline void BaseReference_2__ctor_mACB7AE0DB804EF4A3370630666751D5947084CBE (BaseReference_2_t5DAE1C9922344A6B316730CBCC77A403B68A7862* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Char,ScriptableObjectArchitecture.CharVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_mDB40D68B379C10E5A941B27A96497717E1376FD3 (BaseReference_2_t5DAE1C9922344A6B316730CBCC77A403B68A7862* __this, Il2CppChar ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Color32,ScriptableObjectArchitecture.Color32Variable>::.ctor()
inline void BaseReference_2__ctor_m5CA0B8743D886CE7FBA271B62CAE5A11B1F20503 (BaseReference_2_tFD456C49180EC96D2D78529AF30282416B52C11F* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Color32,ScriptableObjectArchitecture.Color32Variable>::.ctor(TBase)
inline void BaseReference_2__ctor_mC255DAAB583DDC2EB1474DC5B3FACEF7BEE147BD (BaseReference_2_tFD456C49180EC96D2D78529AF30282416B52C11F* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Color,ScriptableObjectArchitecture.ColorVariable>::.ctor()
inline void BaseReference_2__ctor_m47429BF9CB86E67C4F093BF609C3AB0689DA33A8 (BaseReference_2_tC9D8EE1DCE39D9493AF33CAFED754C93F5E80EBC* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Color,ScriptableObjectArchitecture.ColorVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_m0DB3E0DF627EBE935BDCCA8DE1ABCAC57513C76B (BaseReference_2_tC9D8EE1DCE39D9493AF33CAFED754C93F5E80EBC* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Double,ScriptableObjectArchitecture.DoubleVariable>::.ctor()
inline void BaseReference_2__ctor_m815814F39589EF2F58ACE754328F9AD3FF9A2B48 (BaseReference_2_tEE8B6D09995BE8CF0CA72DB1F982D166EB362764* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Double,ScriptableObjectArchitecture.DoubleVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_m1B44B487CD221F6657DEF47C9F7FC4181324F310 (BaseReference_2_tEE8B6D09995BE8CF0CA72DB1F982D166EB362764* __this, double ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Single,ScriptableObjectArchitecture.FloatVariable>::.ctor()
inline void BaseReference_2__ctor_m1FD85758424DBE30DB3749B7AB64D8E58819F1AC (BaseReference_2_t03BA1DB557C86701FE7B52CA2E8CA5D27A8DB959* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Single,ScriptableObjectArchitecture.FloatVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_mB4C07D98DF058F69F8876CB91A8DB9F909C8F40A (BaseReference_2_t03BA1DB557C86701FE7B52CA2E8CA5D27A8DB959* __this, float ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.GameObject,ScriptableObjectArchitecture.GameObjectVariable>::.ctor()
inline void BaseReference_2__ctor_m93E1689A832185D607D235DE1C4C3CA8E16613A4 (BaseReference_2_t8244AFA94CEC1AB6AE70F75249236DD08C2C9B2E* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.GameObject,ScriptableObjectArchitecture.GameObjectVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_mB14818DDBCAFBBFFEC864EA186691338CC19304F (BaseReference_2_t8244AFA94CEC1AB6AE70F75249236DD08C2C9B2E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Int32,ScriptableObjectArchitecture.IntVariable>::.ctor()
inline void BaseReference_2__ctor_m5C63E6FC5FC32B2F329BD40440E48A01EAA22EF4 (BaseReference_2_tD4104B5F9A64AD91E2E1677B1DA97E35DCDAB478* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Int32,ScriptableObjectArchitecture.IntVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_mA2BA6CF66DFD452D391572CA8642CC1AD573C1D5 (BaseReference_2_tD4104B5F9A64AD91E2E1677B1DA97E35DCDAB478* __this, int32_t ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.LayerMask,ScriptableObjectArchitecture.LayerMaskVariable>::.ctor()
inline void BaseReference_2__ctor_m982C8BF959AFB778D7F7E300A0FBFC2FB8D4B793 (BaseReference_2_tFDF4F509AD18EB8FC6BDAC1F3A23E058488C3FD8* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.LayerMask,ScriptableObjectArchitecture.LayerMaskVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_mB9FAF01766B922308177F18080200D534FCD831F (BaseReference_2_tFDF4F509AD18EB8FC6BDAC1F3A23E058488C3FD8* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Int64,ScriptableObjectArchitecture.LongVariable>::.ctor()
inline void BaseReference_2__ctor_m8D2CC01226E366F15E6D41B5957FD44A7124681E (BaseReference_2_t0531AF154CA511A8FB6379FB45C9CDE4FC7FCA32* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Int64,ScriptableObjectArchitecture.LongVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_m5C65C640554017A27F8C7DCEC4E018EA26B37A82 (BaseReference_2_t0531AF154CA511A8FB6379FB45C9CDE4FC7FCA32* __this, int64_t ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Object,ScriptableObjectArchitecture.ObjectVariable>::.ctor()
inline void BaseReference_2__ctor_m8297B3C4D864FCFB4603AA0F6AD43B5DA08F75AF (BaseReference_2_t2A17181ACB3C6F467D4AD71AF6DFF1BB9531B2D3* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Object,ScriptableObjectArchitecture.ObjectVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_m68EEAB3C24BF02E41E2BA33D218342988DB75336 (BaseReference_2_t2A17181ACB3C6F467D4AD71AF6DFF1BB9531B2D3* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Quaternion,ScriptableObjectArchitecture.QuaternionVariable>::.ctor()
inline void BaseReference_2__ctor_m6F56503743F8FB0AF8014326021AF7E11EF6347D (BaseReference_2_t7F5B27B38BF518E4EAB3D249B5B4595CED90BD37* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Quaternion,ScriptableObjectArchitecture.QuaternionVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_mB8F6AD2FC84D3187CD7CC2C86136D82593CBEC05 (BaseReference_2_t7F5B27B38BF518E4EAB3D249B5B4595CED90BD37* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.SByte,ScriptableObjectArchitecture.SByteVariable>::.ctor()
inline void BaseReference_2__ctor_mFA144F5D09CE3EAD313EA9B8AA5A2329A94CD5AF (BaseReference_2_tC173A51C612B0A43AF6370E3A19093C734FEE99B* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.SByte,ScriptableObjectArchitecture.SByteVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_m01732F5E04DDA7E2AB3781F0E61CEBF80DB2CB1E (BaseReference_2_tC173A51C612B0A43AF6370E3A19093C734FEE99B* __this, int8_t ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<ScriptableObjectArchitecture.SceneInfo,ScriptableObjectArchitecture.SceneVariable>::.ctor()
inline void BaseReference_2__ctor_m8DA03C3EA861DFEB95AE94820C415ABCA78D632A (BaseReference_2_t72C4DFD81C0D789C4039A82F0EB2C58469F4AE8B* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<ScriptableObjectArchitecture.SceneInfo,ScriptableObjectArchitecture.SceneVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_m896A4C22659BD89AB058270846F48057C2DA3937 (BaseReference_2_t72C4DFD81C0D789C4039A82F0EB2C58469F4AE8B* __this, SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Int16,ScriptableObjectArchitecture.ShortVariable>::.ctor()
inline void BaseReference_2__ctor_m6F02CF3693449B369991150D9E1B7ADAAA983AA8 (BaseReference_2_t007E674754FB1E8A900851B1A2C0BA771CE0DF7E* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Int16,ScriptableObjectArchitecture.ShortVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_m7AAC4A88325C5E2D29F40DF1FC81B26288B98FE2 (BaseReference_2_t007E674754FB1E8A900851B1A2C0BA771CE0DF7E* __this, int16_t ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.String,ScriptableObjectArchitecture.StringVariable>::.ctor()
inline void BaseReference_2__ctor_mB894CE4F4CD70BC8096845DEF0EDAB9D62C074FA (BaseReference_2_t713F03FDBF48C4C40222EAE1031971658C167991* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.String,ScriptableObjectArchitecture.StringVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_m2C98C1264961A8D4FF37736655CF6F24E8A8EC7A (BaseReference_2_t713F03FDBF48C4C40222EAE1031971658C167991* __this, String_t* ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.UInt32,ScriptableObjectArchitecture.UIntVariable>::.ctor()
inline void BaseReference_2__ctor_m3DB07D2BA4EDA5998FDB628910B0A678DD11F76D (BaseReference_2_t30FBC7B781CD0110430B92060D1C8D1A358B19A9* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.UInt32,ScriptableObjectArchitecture.UIntVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_m80D48A5B7E9E77C057031D39C217D5E9F5614A3E (BaseReference_2_t30FBC7B781CD0110430B92060D1C8D1A358B19A9* __this, uint32_t ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.UInt64,ScriptableObjectArchitecture.ULongVariable>::.ctor()
inline void BaseReference_2__ctor_m127EC54B2CA31A8247EA515834C3A019E3DECF1C (BaseReference_2_tF9E22219A95F8982B5622F9F3888A7E93912003C* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.UInt64,ScriptableObjectArchitecture.ULongVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_m53BB850A6B3D473A2B20BA252C116F2BA4F6F6D3 (BaseReference_2_tF9E22219A95F8982B5622F9F3888A7E93912003C* __this, uint64_t ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.UInt16,ScriptableObjectArchitecture.UShortVariable>::.ctor()
inline void BaseReference_2__ctor_m1F91732F8CBE0582DEEF8A5318D7FA77A113E67E (BaseReference_2_t5B75BB4610FAB1E78F00C6929CC4CEC4ABA8978D* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.UInt16,ScriptableObjectArchitecture.UShortVariable>::.ctor(TBase)
inline void BaseReference_2__ctor_m65ACD764BD6DF70572EAE98668BD3F979344AFCB (BaseReference_2_t5B75BB4610FAB1E78F00C6929CC4CEC4ABA8978D* __this, uint16_t ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector2,ScriptableObjectArchitecture.Vector2Variable>::.ctor()
inline void BaseReference_2__ctor_mD2A402D055C3EE1C37B76C016715AB9AEF4DAD13 (BaseReference_2_t4E2F2C5F52CE1B5D754972E26B16A9529692EA47* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector2,ScriptableObjectArchitecture.Vector2Variable>::.ctor(TBase)
inline void BaseReference_2__ctor_mBD5F7B1F2B5CDC1C2695ACAE82FFC5063AB7D89F (BaseReference_2_t4E2F2C5F52CE1B5D754972E26B16A9529692EA47* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector3,ScriptableObjectArchitecture.Vector3Variable>::.ctor()
inline void BaseReference_2__ctor_mCBB2AAD2B1BBC3C3B0DEAD3072C7499C57DE556C (BaseReference_2_t6AC812605ED8637BB240F30E179085638317B5B3* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector3,ScriptableObjectArchitecture.Vector3Variable>::.ctor(TBase)
inline void BaseReference_2__ctor_m539C4D82C5A7E06DFCA64689A146534B14EE9721 (BaseReference_2_t6AC812605ED8637BB240F30E179085638317B5B3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector4,ScriptableObjectArchitecture.Vector4Variable>::.ctor()
inline void BaseReference_2__ctor_m55443D3CD697E5BEB11A354E35BCC021EAAD9AEA (BaseReference_2_t098E3480950B1D18E0D7EB89DA9077AFB63EDA1F* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, const RuntimeMethod*))BaseReference_2__ctor_mAF90545A90D4D73B376C21734F7229096DFBD534_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<UnityEngine.Vector4,ScriptableObjectArchitecture.Vector4Variable>::.ctor(TBase)
inline void BaseReference_2__ctor_m032F506AC0181D5C2440FE037373DA606E676221 (BaseReference_2_t098E3480950B1D18E0D7EB89DA9077AFB63EDA1F* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_baseValue, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2__ctor_mA4522B7DEB31FA9FA0791C013DE4ECA652896F69_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_baseValue, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// ScriptableObjectArchitecture.SOArchitecture_Settings ScriptableObjectArchitecture.SOArchitecture_Settings::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* SOArchitecture_Settings_GetInstance_mB73133CB5BF338F4BE8AB7E42F8C0F592ECD9ECE (const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.AnimationCurve>::.ctor()
inline void UnityEvent_1__ctor_mA8D3E452D3D9C40E84C9C089B87B946EA9B15278 (UnityEvent_1_t50584CC80E46926AB8BD5EA68F203DA8FE8AF415* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.AnimationCurve,ScriptableObjectArchitecture.AnimationCurveEvent>::.ctor()
inline void BaseVariable_2__ctor_m905D2BC11F1321F7F5F93C661D07C3A3F1C586A6 (BaseVariable_2_t70D474BDEB5BFC41E566A4914360BA1B9E8886D5* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.AudioClip,ScriptableObjectArchitecture.AudioClipEvent>::.ctor()
inline void BaseVariable_2__ctor_mF0C8CBD2010D74DB966D9BB343528729BFB87851 (BaseVariable_2_t825BACACB2DC3F8472E9048ABEEB90379B0E4AAE* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseVariable`2<System.Boolean,ScriptableObjectArchitecture.BoolEvent>::.ctor()
inline void BaseVariable_2__ctor_mFB96C106A1C1D3F868C6A11CCA1613666CF33D77 (BaseVariable_2_t1B8F78DDC61DD13016E9F91E525CE4341B34F83F* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Int32 System.Byte::CompareTo(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_CompareTo_m188EF2F51CA95A2820D240FE282E165FAEF8A5B8 (uint8_t* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseVariable`2<System.Byte,ScriptableObjectArchitecture.ByteEvent>::.ctor()
inline void BaseVariable_2__ctor_m1BD4D52749E12741A7A25E029ED4C6192862C960 (BaseVariable_2_tD20A39FAF8D4027284B26823812D4E9FC3865080* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseVariable`2<System.Char,ScriptableObjectArchitecture.CharEvent>::.ctor()
inline void BaseVariable_2__ctor_m8E7B962FE2B6E59BB15A48A0A530F4E224E7A1DC (BaseVariable_2_tE90480F7209060ECC07C58E50BA1135B77ADFCC1* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color32>::.ctor()
inline void UnityEvent_1__ctor_m37088B677DD51D108D67186A864FEF14230FB1AA (UnityEvent_1_tEBA2D509B0987DC4A8E228671D832ABEA54CAB68* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Color32,ScriptableObjectArchitecture.Color32Event>::.ctor()
inline void BaseVariable_2__ctor_m8915225DACF57014B30A4AC2C944AAA29416A388 (BaseVariable_2_tF81B01ECB49FAA74D875EE4136A73532F142E9F6* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
inline void UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D (UnityEvent_1_tF4BE0B078FD22C6D76548861637E94AB782888C9* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Color,ScriptableObjectArchitecture.ColorEvent>::.ctor()
inline void BaseVariable_2__ctor_m30AB4B0D3DAD50A547303FFE0DE50A285275412D (BaseVariable_2_t73E71C396858577DFE422B458245BD9452901D44* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Int32 System.Double::CompareTo(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Double_CompareTo_m40FD7CA33B178CCFA4B6755267DC67841092CCFC (double* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseVariable`2<System.Double,ScriptableObjectArchitecture.DoubleEvent>::.ctor()
inline void BaseVariable_2__ctor_m2EF136F6DD1ECAC76B89B69C0980BE7A68EA7D95 (BaseVariable_2_tED6B9F1F396FA9586E94E06C1A8DAA4D3931E589* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseVariable`2<System.Single,ScriptableObjectArchitecture.FloatEvent>::.ctor()
inline void BaseVariable_2__ctor_mA62F9D586DC4D3295AC0B4EF6C3B88D86FA9CA4D (BaseVariable_2_t4EF335502A1FBFC635CF514784CE46DB1A67B51D* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.GameObject,ScriptableObjectArchitecture.GameObjectEvent>::.ctor()
inline void BaseVariable_2__ctor_m8AB29C4AD04586F094B437C78249A5E2A3FCC424 (BaseVariable_2_tCF21AEC8514C02BE0085A2BCCA2F22B2918B862E* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseVariable`2<System.Int32,ScriptableObjectArchitecture.IntEvent>::.ctor()
inline void BaseVariable_2__ctor_mC3AE2C554D5FF06178EEC03ABB2DAE10084E73E8 (BaseVariable_2_t8831D6351B8295C6C1340099F723D1C665AA0537* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.LayerMask>::.ctor()
inline void UnityEvent_1__ctor_m6CC7B27F29BC4F50FEE2FECBEFBC4450836D7602 (UnityEvent_1_t6DAA6F7C6E748D32351CEF1C56ECF572BD49FBDD* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.LayerMask,ScriptableObjectArchitecture.LayerMaskEvent>::.ctor()
inline void BaseVariable_2__ctor_mD94973ABEBCD37B62D521D3F012985411A80A639 (BaseVariable_2_tC7B6CE290CB38F6DC2B2C1FB4F404D6414B7B9DB* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Int32 System.Int64::CompareTo(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490 (int64_t* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseVariable`2<System.Int64,ScriptableObjectArchitecture.LongEvent>::.ctor()
inline void BaseVariable_2__ctor_m6E10B8D93A46CB4C3955702B339A532F1DA0C9A9 (BaseVariable_2_tFD8FF2FFACCC7746CE0573FAA1796B8F225962D8* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Object,ScriptableObjectArchitecture.ObjectEvent>::.ctor()
inline void BaseVariable_2__ctor_mCFC19D1633A3CFD39A2F0C4E52EDCBD8E2AD0E1D (BaseVariable_2_tAAF9577285CD729794CFCF0FADFBEE6F28F97524* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Quaternion,ScriptableObjectArchitecture.QuaternionEvent>::.ctor()
inline void BaseVariable_2__ctor_m96234BC7A4A6EE8DDCEF5E2D2046D34BA3A0D764 (BaseVariable_2_t139192138622510A4F5966F878FB3155F15DDB05* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Int32 System.SByte::CompareTo(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SByte_CompareTo_m1C183FA8CCC293C6FA6A50EE04B2FB36E9695CC4 (int8_t* __this, int8_t ___0_value, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseVariable`2<System.SByte,ScriptableObjectArchitecture.SByteEvent>::.ctor()
inline void BaseVariable_2__ctor_mC6A4C11E3EC380A5F81AF7748082CEF71CAFFFAD (BaseVariable_2_t996467911929C5751AD4CCF6A3E910E75FA74FFF* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<ScriptableObjectArchitecture.SceneInfo>::.ctor()
inline void UnityEvent_1__ctor_mB521550BB7E0E37A69FA8F0D9DB32616887A11F6 (UnityEvent_1_t34ADF6028DB29D29746FDFAA3E6A09464A0CC6B4* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, const RuntimeMethod*))UnityEvent_1__ctor_m174C3AF06DAD8FF5ABF88D1A43EE8EE2B5670A2D_gshared)((UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseVariable`2<ScriptableObjectArchitecture.SceneInfo,ScriptableObjectArchitecture.SceneInfoEvent>::.ctor()
inline void BaseVariable_2__ctor_m69EB6A4245F97CD25C682ACE0BED540D38956081 (BaseVariable_2_t1264951EDCCCB5B8A0C5A38CAD105A17811491D6* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Int32 System.Int16::CompareTo(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int16_CompareTo_mC2DEE36C53F9B2768B0A217A1986ED8C25D0CAC1 (int16_t* __this, int16_t ___0_value, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseVariable`2<System.Int16,ScriptableObjectArchitecture.ShortEvent>::.ctor()
inline void BaseVariable_2__ctor_mF9EEF718D542846D02477ED1E731328768117AAB (BaseVariable_2_t300DDBB83D42C5F1E37A2058B53EEC4291885CD0* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseVariable`2<System.String,ScriptableObjectArchitecture.StringEvent>::.ctor()
inline void BaseVariable_2__ctor_m400B8693D0D983CE72D8818DCFB2F72326623143 (BaseVariable_2_t437E5801932848C70783C2B9E36C9573DA593D67* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Int32 System.UInt32::CompareTo(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_CompareTo_mC96F15BE2B06C0268AD1D110D3251CE4DBA43907 (uint32_t* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseVariable`2<System.UInt32,ScriptableObjectArchitecture.UIntEvent>::.ctor()
inline void BaseVariable_2__ctor_m3C5512D65C483C1F1A2D6D2F6750F8B111F8317C (BaseVariable_2_t349DFA4D927E43C4B81C2C153C445C06CD312E78* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Int32 System.UInt64::CompareTo(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_CompareTo_m1292E47C1FE2A1FC5BC5E6E2EB9C1FCDCEFE7745 (uint64_t* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseVariable`2<System.UInt64,ScriptableObjectArchitecture.ULongEvent>::.ctor()
inline void BaseVariable_2__ctor_m2E0843EEFB79D294CD41C935FA91BAAD0471841B (BaseVariable_2_tD58523CD992107E476DE71E30491A511FC0DD347* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Int32 System.UInt16::CompareTo(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_CompareTo_m73A3F7183597E4CFBCB8A98A696B4C3DFEDF0845 (uint16_t* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.BaseVariable`2<System.UInt16,ScriptableObjectArchitecture.UShortEvent>::.ctor()
inline void BaseVariable_2__ctor_mCF706170C36A8BAAF3999E88766E271736FE5BB1 (BaseVariable_2_t480A4FE7B6268B6D8202A006E5CC39B4A69A830C* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Vector2,ScriptableObjectArchitecture.Vector2Event>::.ctor()
inline void BaseVariable_2__ctor_m1E99A3D5FEB51293C3EEB40EE52DE24BEC4865B6 (BaseVariable_2_tA8829E3C7067DF05F9ACD22447604E3EEBE2DEF6* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Vector3,ScriptableObjectArchitecture.Vector3Event>::.ctor()
inline void BaseVariable_2__ctor_mE902C29A2B4F9F1CB9F4A43BD753E3FB2119BDA7 (BaseVariable_2_tDFE746050DA1333C846F33F2F275453ECD17D18A* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Void ScriptableObjectArchitecture.BaseVariable`2<UnityEngine.Vector4,ScriptableObjectArchitecture.Vector4Event>::.ctor()
inline void BaseVariable_2__ctor_mCB5D5F2D0546666A3479F1E93F72C7348FFEE93E (BaseVariable_2_t393BFC59953D35B46C9BF16E4AF2F4F05286DBC8* __this, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseVariable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*, const RuntimeMethod*))BaseVariable_2__ctor_m6ECF28CB03CB43D9A3EA522B0147B927D8DFF503_gshared)((BaseVariable_2_tFD50C53C5B784C54D1DC2BA0B945853EAF036F0A*)__this, method);
}
// System.Int32 ScriptableObjectArchitecture.BaseCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseCollection_get_Count_m6704F8C15E0DA0228E53C6A7C86EB1E4DCC275B4 (BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ScriptableObjectArchitecture.Examples.UnitHealth>()
inline UnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98* GameObject_GetComponent_TisUnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98_m061CC7A8DED0C57AF6EF4BD52466243BE1070110 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	UnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// TBase ScriptableObjectArchitecture.BaseReference`2<System.Single,ScriptableObjectArchitecture.FloatVariable>::get_Value()
inline float BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E (BaseReference_2_t03BA1DB557C86701FE7B52CA2E8CA5D27A8DB959* __this, const RuntimeMethod* method)
{
	float il2cppRetVal;
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))BaseReference_2_get_Value_m2F04674F2E01F35EEC80CE739DCAC6D55AAB64C3_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void ScriptableObjectArchitecture.BaseReference`2<System.Single,ScriptableObjectArchitecture.FloatVariable>::set_Value(TBase)
inline void BaseReference_2_set_Value_m2602A4E2613A195B3A5DF620B2C85E87458214B6 (BaseReference_2_t03BA1DB557C86701FE7B52CA2E8CA5D27A8DB959* __this, float ___0_value, const RuntimeMethod* method)
{
	((  void (*) (/*ScriptableObjectArchitecture.BaseReference`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>*/BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))BaseReference_2_set_Value_m5250C3994CA17BB7739BCB81C303EEB2831E5F75_gshared)((BaseReference_2_t0C8C13E9D6A3CECEA2844CAE2134D43336901818*)__this, (Il2CppFullySharedGenericAny)&___0_value, method);
}
// System.Void ScriptableObjectArchitecture.Examples.DamageDealer::DealDamage(ScriptableObjectArchitecture.Examples.UnitHealth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDealer_DealDamage_mEDB6501DB06E2F3FF43C2DC07D19A604DB9518E5 (DamageDealer_t3CBE22A92F8B74E798381E22B3C57A7ABAD30BE2* __this, UnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98* ___0_target, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.GameEventBase::Raise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBase_Raise_mDE0BFFA1CE0DA2EC14011CE4179DE80D5313527D (GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272* __this, const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.Examples.DamageDealer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDealer__ctor_m949876D6F3CBD4636B2016D089704CC35C312277 (DamageDealer_t3CBE22A92F8B74E798381E22B3C57A7ABAD30BE2* __this, const RuntimeMethod* method) ;
// T ScriptableObjectArchitecture.Collection`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collection_1_get_Item_m2A002736E97F5AF2AFAF4C6319D71D77E93680D0 (Collection_1_t094F7E1819D7E0C9778C527D1401CEDB4CCA56C1* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* il2cppRetVal;
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Collection_1_get_Item_m9501604E745094B7692C42E5DB9EAE3D80F1BA1F_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// System.Void ScriptableObjectArchitecture.Collection`1<UnityEngine.GameObject>::Add(T)
inline void Collection_1_Add_m2EAF0C430C378399FB2CA1DA48B72AAC19B6FA93 (Collection_1_t094F7E1819D7E0C9778C527D1401CEDB4CCA56C1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Collection_1_Add_mA49DBD8BB81E4CA8FFA32FCAC974D613CCDCD14C_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
// System.Void ScriptableObjectArchitecture.Collection`1<UnityEngine.GameObject>::Remove(T)
inline void Collection_1_Remove_m4DC756515010B1616F1668CE608D9F1D28300A2D (Collection_1_t094F7E1819D7E0C9778C527D1401CEDB4CCA56C1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Collection_1_Remove_m5D58875D3C2E09DA37CAC3F21ADE6D47DBE6252D_gshared)((Collection_1_tD5D06F4DA60BB84E7B255E3D5064A8FA8ED66C35*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
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
// System.Void MultiLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiLine__ctor_mD7304564EDF27F0997D9CFCE3B31CD3CD056A74A (MultiLine_t83C374343402375FC5051DBEA8EEAC19E93EFBAA* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void ScriptableObjectArchitecture.AnimationCurveCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurveCollection__ctor_m197AB7679E08CA1B536C7A5278E86B9B1CB1568F (AnimationCurveCollection_t11267B67826BE52F7E0E2552D0BB0508A82E2F1D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_mBA74243E822805426071429567CBC51B345A3702_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_mBA74243E822805426071429567CBC51B345A3702(__this, Collection_1__ctor_mBA74243E822805426071429567CBC51B345A3702_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.AudioClipCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipCollection__ctor_m4232AA0BF09AAE89183420655B0AD146D9423BC7 (AudioClipCollection_tB9050F69CC50E3F18A5FDFF583F5F9AFD9A9E0C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m71549C785738F8144DF98930DC7CF0CE4BFC7D39_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_m71549C785738F8144DF98930DC7CF0CE4BFC7D39(__this, Collection_1__ctor_m71549C785738F8144DF98930DC7CF0CE4BFC7D39_RuntimeMethod_var);
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
// System.Object ScriptableObjectArchitecture.BaseCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseCollection_get_Item_mA22AC4683DE35369A2E3E7E8DE3A41921A56F15B (BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return List[index];
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.IList ScriptableObjectArchitecture.BaseCollection::get_List() */, __this);
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Void ScriptableObjectArchitecture.BaseCollection::set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCollection_set_Item_m866B71B253EEAE83A1E57DCAF6692E95A282A37F (BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List[index] = value;
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.IList ScriptableObjectArchitecture.BaseCollection::get_List() */, __this);
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.IList::set_Item(System.Int32,System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Int32 ScriptableObjectArchitecture.BaseCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseCollection_get_Count_m6704F8C15E0DA0228E53C6A7C86EB1E4DCC275B4 (BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public int Count { get { return List.Count; } }
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.IList ScriptableObjectArchitecture.BaseCollection::get_List() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public int Count { get { return List.Count; } }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator ScriptableObjectArchitecture.BaseCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseCollection_System_Collections_IEnumerable_GetEnumerator_m52F2FD32A355DDDC9AB36C292E4E7539BD214581 (BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return List.GetEnumerator();
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.IList ScriptableObjectArchitecture.BaseCollection::get_List() */, __this);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean ScriptableObjectArchitecture.BaseCollection::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseCollection_Contains_m8A916FF835266EDD449E1B17D429156815EA429F (BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return List.Contains(obj);
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.IList ScriptableObjectArchitecture.BaseCollection::get_List() */, __this);
		RuntimeObject* L_1 = ___0_obj;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void ScriptableObjectArchitecture.BaseCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCollection__ctor_m276D4D6EB57082887ADD523663B9789DBFA75774 (BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1* __this, const RuntimeMethod* method) 
{
	{
		SOArchitectureBaseObject__ctor_mF11F3FE2196C9F1D221DBD34B1FD376D01C09E89(__this, NULL);
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
// System.Void ScriptableObjectArchitecture.BoolCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolCollection__ctor_mD3D15AD29D2E213F07A298E0EE34A2CD8EC73CFB (BoolCollection_t55A40136DEC49DB7ADB919C8B2235B089EA03BC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m3230C84A44BEE424D9647EB0B025B71D96AC722B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_m3230C84A44BEE424D9647EB0B025B71D96AC722B(__this, Collection_1__ctor_m3230C84A44BEE424D9647EB0B025B71D96AC722B_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ByteCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteCollection__ctor_mCB2D239473D5E3AA43360E29283D5F58F29E073D (ByteCollection_t655B5C1F7EB9CAADEEF1B054AF9DEECD00E27389* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m42C2642A4AD812E5F9BC155944AE752DDDD82C80_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_m42C2642A4AD812E5F9BC155944AE752DDDD82C80(__this, Collection_1__ctor_m42C2642A4AD812E5F9BC155944AE752DDDD82C80_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.CharCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharCollection__ctor_m0137D2164189B933E908F09F747D8F7FAE8C0DD9 (CharCollection_t3AFD063A06B9F17A521F6D876507236613328E7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_mA3FAC784EFFB670E68D803A09CB630D533635386_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_mA3FAC784EFFB670E68D803A09CB630D533635386(__this, Collection_1__ctor_mA3FAC784EFFB670E68D803A09CB630D533635386_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Color32Collection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32Collection__ctor_m119703A11D018E4FC11ADE24936044CB5F91EF0E (Color32Collection_tEB828709F4848FC5A6AD2A169D65DD9522A108E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_mB58B6635A19FCFEB59F7D8E3061A18BAD07F5C27_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_mB58B6635A19FCFEB59F7D8E3061A18BAD07F5C27(__this, Collection_1__ctor_mB58B6635A19FCFEB59F7D8E3061A18BAD07F5C27_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ColorCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorCollection__ctor_m22511B0D2DBE51472584DFA9EB2B204CDA922CC7 (ColorCollection_t3AC22DA6707CD2E976569B96E1ACB8B063C35DA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_mC9A7887862C04E3F42AA80DB1085E65BD189D701_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_mC9A7887862C04E3F42AA80DB1085E65BD189D701(__this, Collection_1__ctor_mC9A7887862C04E3F42AA80DB1085E65BD189D701_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.DoubleCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleCollection__ctor_m147176A73FBD7A6D894FAC9CFBF91F61ED78A9D5 (DoubleCollection_t984F13E06AABBD5CAC491B8EE3DBE71B225ECF52* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m8F4A5FE3E67FE0C1CC365F396993AC861FB6EC0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_m8F4A5FE3E67FE0C1CC365F396993AC861FB6EC0E(__this, Collection_1__ctor_m8F4A5FE3E67FE0C1CC365F396993AC861FB6EC0E_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.FloatCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatCollection__ctor_mB686F601CF2C1F8FA12F4B9A331AA6981EAF66FB (FloatCollection_t25F3F80DF766D4214228DA7DA10D3CB416896FF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m31C233038E568DA4C4FED235DE7433653F5C9EB1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_m31C233038E568DA4C4FED235DE7433653F5C9EB1(__this, Collection_1__ctor_m31C233038E568DA4C4FED235DE7433653F5C9EB1_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.GameObjectCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectCollection__ctor_m6785CC3AEB0E0B7FA951B65BF64106FA6CD36D19 (GameObjectCollection_t9C76F2B578978C3D59931E99C258454EC1EAAF2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m1E6105AD8495010D1EF7305FA82CE23767721E2C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_m1E6105AD8495010D1EF7305FA82CE23767721E2C(__this, Collection_1__ctor_m1E6105AD8495010D1EF7305FA82CE23767721E2C_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.IntCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntCollection__ctor_m9BD9B5704BBE0927255F8637EF696BF6221C75C2 (IntCollection_t4EEC7BE6D6AC13F37EC6E5023D5686B4BE51BEC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_mCA083ED30CD6075239A204F8B604394D906F6CFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_mCA083ED30CD6075239A204F8B604394D906F6CFE(__this, Collection_1__ctor_mCA083ED30CD6075239A204F8B604394D906F6CFE_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.LongCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongCollection__ctor_m1849C7C11962FB9A80D2FC05FEE46A09E174B2F9 (LongCollection_t518B7BF02FB432A3A2E00281CB04CCB853813F40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m7489EA7478B8551919D3280AE39974F154898675_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_m7489EA7478B8551919D3280AE39974F154898675(__this, Collection_1__ctor_m7489EA7478B8551919D3280AE39974F154898675_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ObjectCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectCollection__ctor_m6B5BDB2C21A23C18B8F90BD74983F77C263CB631 (ObjectCollection_tFF255DD9DF07E675FBE1DD42AE5DEE8E81116653* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_mF5F52B9CF3D942BC09A924B32D34DF2FE7C314C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_mF5F52B9CF3D942BC09A924B32D34DF2FE7C314C0(__this, Collection_1__ctor_mF5F52B9CF3D942BC09A924B32D34DF2FE7C314C0_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.QuaternionCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionCollection__ctor_mA986EE8712F09D01432395761467D80C905D1DBD (QuaternionCollection_tA502B1D5EF07A5CE71FD841C750E0C84452D1BE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m15C4874CF86AF1298276699209E4E1C3241F8102_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_m15C4874CF86AF1298276699209E4E1C3241F8102(__this, Collection_1__ctor_m15C4874CF86AF1298276699209E4E1C3241F8102_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.SByteCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SByteCollection__ctor_mECE7B47426AD8C91DE2F7AC7DD2F7083E6B856AB (SByteCollection_tFB89970EE2957F35DCA99275AA2273886C1CCBBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_mBBCFD1D653D1AF4A7C99EA09025D75A6666829E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_mBBCFD1D653D1AF4A7C99EA09025D75A6666829E3(__this, Collection_1__ctor_mBBCFD1D653D1AF4A7C99EA09025D75A6666829E3_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.SceneCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneCollection__ctor_mE70476F1117E6BF0935F9B49F0DB23DD70F06EA1 (SceneCollection_t2C74FDBCE50E87785CD990D47F3A0DAFC50290DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m47AE47AF17DD8E0963E33DB36684720623784C22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_m47AE47AF17DD8E0963E33DB36684720623784C22(__this, Collection_1__ctor_m47AE47AF17DD8E0963E33DB36684720623784C22_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ShortCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortCollection__ctor_mBA24EC5C04E8CD02621A12305345CB47C2C5A18F (ShortCollection_tE23A319A2FE18A3E667495DEE10A2E748537956E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m2D38B37D83086625B38F592379A35B0EBDEE110A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_m2D38B37D83086625B38F592379A35B0EBDEE110A(__this, Collection_1__ctor_m2D38B37D83086625B38F592379A35B0EBDEE110A_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.StringCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringCollection__ctor_m757ECBF3C2D1C0CEC853FD89E7C275205F2390D9 (StringCollection_tE3C5DD472C11E7063A64F7519113B8A50A2E9C4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m80920E2D67717BE3295D20A49027FE8A6BE7A812_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_m80920E2D67717BE3295D20A49027FE8A6BE7A812(__this, Collection_1__ctor_m80920E2D67717BE3295D20A49027FE8A6BE7A812_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.UIntCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntCollection__ctor_m63226A429D09A6A77EE1C7335684F3F1608EFFC1 (UIntCollection_t8864A2EF7604CDAD6E977CF8959EDB07CA1D2625* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m30B31CF03F024858C828C68A5F44E249CCCAE2F0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_m30B31CF03F024858C828C68A5F44E249CCCAE2F0(__this, Collection_1__ctor_m30B31CF03F024858C828C68A5F44E249CCCAE2F0_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ULongCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULongCollection__ctor_m00C06F2E0404AD21215DDDF117B2CA9EF1C80EB2 (ULongCollection_t4E774687376FBCAB01992DD7152D319129C1C094* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m1061A97C480CF12D016CB0CAF2D3E36F48181671_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_m1061A97C480CF12D016CB0CAF2D3E36F48181671(__this, Collection_1__ctor_m1061A97C480CF12D016CB0CAF2D3E36F48181671_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.UShortCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UShortCollection__ctor_m38C62937EBA09ADD50B9C59E40EC995300257AD2 (UShortCollection_tDC3664B1CD0FA76D07C35F78BB8E1F780E279724* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m12DD9E260B2938564BAFC445BB75A8155DBAE031_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_m12DD9E260B2938564BAFC445BB75A8155DBAE031(__this, Collection_1__ctor_m12DD9E260B2938564BAFC445BB75A8155DBAE031_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector2Collection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Collection__ctor_mED4B3843A3C460ADEC4D33D848B82CC66575B3C3 (Vector2Collection_t158B9B75A751D120D1733CA8AE7199F345C2F815* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_mCB6A568B1A96A93CCF9088DC0B5CDEAE1A5F9BEE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_mCB6A568B1A96A93CCF9088DC0B5CDEAE1A5F9BEE(__this, Collection_1__ctor_mCB6A568B1A96A93CCF9088DC0B5CDEAE1A5F9BEE_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector3Collection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Collection__ctor_m0573AC474760242B65922EE8DAFE0535CA9BE2CB (Vector3Collection_t339C872DB642F0AC188007A349AA1F785D7123B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m874E14161662215424935DBFC52F8848F78FF75D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_m874E14161662215424935DBFC52F8848F78FF75D(__this, Collection_1__ctor_m874E14161662215424935DBFC52F8848F78FF75D_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector4Collection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4Collection__ctor_m7CC4BA0377BF66F47D8FFA48B1FA40C2F1E8DBBF (Vector4Collection_tAFA94B40B127BBA95A610D13D2D1323E8D6B3E44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_mB49EAA293AB1A55C171EE02841F98B294EA3CAA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1__ctor_mB49EAA293AB1A55C171EE02841F98B294EA3CAA8(__this, Collection_1__ctor_mB49EAA293AB1A55C171EE02841F98B294EA3CAA8_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.AudioClipGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipGameEvent__ctor_m33BD20E4416935F6DEB98DEDAEFC2E7F9ACEA45B (AudioClipGameEvent_t2915486EA8B836713A2EDAA31F2D148B778BEECC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_mF0B3AC8BC698936020AA89BF8AD95B8C17CCD5BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_mF0B3AC8BC698936020AA89BF8AD95B8C17CCD5BD(__this, GameEventBase_1__ctor_mF0B3AC8BC698936020AA89BF8AD95B8C17CCD5BD_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.BoolGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolGameEvent__ctor_mBFDB349B52837C5EF78E9BDF9CF02348C0C0BBD2 (BoolGameEvent_t2217E395E020EB74054A38784BB740DDFE35572A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_mE7C13CCEECFA8E6C786F436809C76C6284AC23EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_mE7C13CCEECFA8E6C786F436809C76C6284AC23EE(__this, GameEventBase_1__ctor_mE7C13CCEECFA8E6C786F436809C76C6284AC23EE_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ByteGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteGameEvent__ctor_m7DDD2CA226F3B4D46E97253AF2CD9A83A8747671 (ByteGameEvent_t01D21D1016B069B95C836014C3FC7E9BDDFEB88D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_m2E6060DF7CF7C3C376BDAF2E2B080ADAA3598325_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_m2E6060DF7CF7C3C376BDAF2E2B080ADAA3598325(__this, GameEventBase_1__ctor_m2E6060DF7CF7C3C376BDAF2E2B080ADAA3598325_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.CharGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharGameEvent__ctor_m75B91181A86DBDCB91B7A3D8E0C65E8AEF550C40 (CharGameEvent_t85D1B4774B2E14D40830508F2282B514D9AFF4FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_m4682BA9E57D4C7948A6CAFFECFD6174A21082007_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_m4682BA9E57D4C7948A6CAFFECFD6174A21082007(__this, GameEventBase_1__ctor_m4682BA9E57D4C7948A6CAFFECFD6174A21082007_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.DoubleGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleGameEvent__ctor_m6E108BD20BC1A673A6BB2D2458AE1C9B82B97110 (DoubleGameEvent_tF7278C88B2C7B4DD8BBB6C0B3E44EDDB31230CEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_mBACCACC5F6D007DF50B55FB33FB292EFD1DFC52F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_mBACCACC5F6D007DF50B55FB33FB292EFD1DFC52F(__this, GameEventBase_1__ctor_mBACCACC5F6D007DF50B55FB33FB292EFD1DFC52F_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.FloatGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatGameEvent__ctor_mD75FA5DBD0B7F9599B818C4DB6D5156D857AA30A (FloatGameEvent_tE1317F1EE773F9D420C1ECC0B0E3019BB0030784* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_m440746E0FE80BCF918E31A3AD95776CC0D9A6A4E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_m440746E0FE80BCF918E31A3AD95776CC0D9A6A4E(__this, GameEventBase_1__ctor_m440746E0FE80BCF918E31A3AD95776CC0D9A6A4E_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.GameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEvent__ctor_m549F602DDC4BDB3E7A33C5FDA7AAAF3544D913E5 (GameEvent_t65A32CE97E4D95E608D0EED1BADF578B3D75817E* __this, const RuntimeMethod* method) 
{
	{
		GameEventBase__ctor_m6EB5E816C96774CF54E4D6B2EC5C2D2C3A6FCDB1(__this, NULL);
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
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.StackTraceEntry> ScriptableObjectArchitecture.GameEventBase::get_StackTraces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A* GameEventBase_get_StackTraces_mC2FD32D336F365E95BA331B0DB531B367AB3A5CB (GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272* __this, const RuntimeMethod* method) 
{
	List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A* V_0 = NULL;
	{
		// public List<StackTraceEntry> StackTraces { get { return _stackTraces; } }
		List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A* L_0 = __this->____stackTraces_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public List<StackTraceEntry> StackTraces { get { return _stackTraces; } }
		List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A* L_1 = V_0;
		return L_1;
	}
}
// System.Void ScriptableObjectArchitecture.GameEventBase::AddStackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBase_AddStackTrace_mB8C347F081668C7AFC76CD7379A15D43A5F4E48C (GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.GameEventBase::AddStackTrace(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBase_AddStackTrace_mFB1D709F6698ECC6BF2291D16BBC3E705AEFA228 (GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.GameEventBase::Raise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBase_Raise_mDE0BFFA1CE0DA2EC14011CE4179DE80D5313527D (GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameEventListener_t66A21487E63CB48D94BF9711729C5B17252107B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9AD2110093D6399438C94DF99535382D17BC2BD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m94AD184A1FA97F6C8E621DFF737934839D264902_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// AddStackTrace();
		GameEventBase_AddStackTrace_mB8C347F081668C7AFC76CD7379A15D43A5F4E48C(__this, NULL);
		// for (int i = _listeners.Count - 1; i >= 0; i--)
		List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* L_0 = __this->____listeners_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m9AD2110093D6399438C94DF99535382D17BC2BD1_inline(L_0, List_1_get_Count_m9AD2110093D6399438C94DF99535382D17BC2BD1_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_002e;
	}

IL_0018:
	{
		// _listeners[i].OnEventRaised();
		List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* L_2 = __this->____listeners_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = List_1_get_Item_m94AD184A1FA97F6C8E621DFF737934839D264902(L_2, L_3, List_1_get_Item_m94AD184A1FA97F6C8E621DFF737934839D264902_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(0 /* System.Void ScriptableObjectArchitecture.IGameEventListener::OnEventRaised() */, IGameEventListener_t66A21487E63CB48D94BF9711729C5B17252107B1_il2cpp_TypeInfo_var, L_4);
		// for (int i = _listeners.Count - 1; i >= 0; i--)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}

IL_002e:
	{
		// for (int i = _listeners.Count - 1; i >= 0; i--)
		int32_t L_6 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_6) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0018;
		}
	}
	{
		// for (int i = _actions.Count - 1; i >= 0; i--)
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_8 = __this->____actions_5;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline(L_8, List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_005f;
	}

IL_0049:
	{
		// _actions[i]();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_10 = __this->____actions_5;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12;
		L_12 = List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D(L_10, L_11, List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var);
		NullCheck(L_12);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_12, NULL);
		// for (int i = _actions.Count - 1; i >= 0; i--)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005f:
	{
		// for (int i = _actions.Count - 1; i >= 0; i--)
		int32_t L_14 = V_2;
		V_3 = (bool)((((int32_t)((((int32_t)L_14) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0049;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.GameEventBase::AddListener(ScriptableObjectArchitecture.IGameEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBase_AddListener_mB005448142F30D5081D4C73C418DA6BBFF0C1C85 (GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCEBC4DED600440A7DBAAA37EDE93AF708240658B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2117D821611AE2E4CD3CB8008DA92A974A2D9C37_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!_listeners.Contains(listener))
		List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* L_0 = __this->____listeners_4;
		RuntimeObject* L_1 = ___0_listener;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m2117D821611AE2E4CD3CB8008DA92A974A2D9C37(L_0, L_1, List_1_Contains_m2117D821611AE2E4CD3CB8008DA92A974A2D9C37_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// _listeners.Add(listener);
		List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* L_4 = __this->____listeners_4;
		RuntimeObject* L_5 = ___0_listener;
		NullCheck(L_4);
		List_1_Add_mCEBC4DED600440A7DBAAA37EDE93AF708240658B_inline(L_4, L_5, List_1_Add_mCEBC4DED600440A7DBAAA37EDE93AF708240658B_RuntimeMethod_var);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.GameEventBase::RemoveListener(ScriptableObjectArchitecture.IGameEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBase_RemoveListener_m6F94720ADF6D74C15C583602A2C8FE68CA73AF94 (GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272* __this, RuntimeObject* ___0_listener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2117D821611AE2E4CD3CB8008DA92A974A2D9C37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mA2266BE2A16098E2952DF622C7899477830F76E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_listeners.Contains(listener))
		List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* L_0 = __this->____listeners_4;
		RuntimeObject* L_1 = ___0_listener;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m2117D821611AE2E4CD3CB8008DA92A974A2D9C37(L_0, L_1, List_1_Contains_m2117D821611AE2E4CD3CB8008DA92A974A2D9C37_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// _listeners.Remove(listener);
		List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* L_4 = __this->____listeners_4;
		RuntimeObject* L_5 = ___0_listener;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Remove_mA2266BE2A16098E2952DF622C7899477830F76E2(L_4, L_5, List_1_Remove_mA2266BE2A16098E2952DF622C7899477830F76E2_RuntimeMethod_var);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.GameEventBase::AddListener(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBase_AddListener_mDB4E62C26B477C0A862C099FF119E8A7D09AF2D9 (GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m181F2DB6756B1ADDCEC909ADA27A8FDDBD18C002_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!_actions.Contains(action))
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = __this->____actions_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___0_action;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m181F2DB6756B1ADDCEC909ADA27A8FDDBD18C002(L_0, L_1, List_1_Contains_m181F2DB6756B1ADDCEC909ADA27A8FDDBD18C002_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// _actions.Add(action);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_4 = __this->____actions_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___0_action;
		NullCheck(L_4);
		List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_4, L_5, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.GameEventBase::RemoveListener(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBase_RemoveListener_m96029D941C602FD0C6DBA4304D0F223BC9A344FC (GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m181F2DB6756B1ADDCEC909ADA27A8FDDBD18C002_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_actions.Contains(action))
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = __this->____actions_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___0_action;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m181F2DB6756B1ADDCEC909ADA27A8FDDBD18C002(L_0, L_1, List_1_Contains_m181F2DB6756B1ADDCEC909ADA27A8FDDBD18C002_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// _actions.Remove(action);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_4 = __this->____actions_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___0_action;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822(L_4, L_5, List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822_RuntimeMethod_var);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.GameEventBase::RemoveAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBase_RemoveAll_m42917B05F6D5D0721FC4862F7E124E8010EA39B7 (GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_mA28A562F34259E1CF253337E52E77A77912455FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_mF86506D6DC21F6CD58C4769D6E71A3E50A3C2285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9AD2110093D6399438C94DF99535382D17BC2BD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _listeners.RemoveRange(0, _listeners.Count);
		List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* L_0 = __this->____listeners_4;
		List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* L_1 = __this->____listeners_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m9AD2110093D6399438C94DF99535382D17BC2BD1_inline(L_1, List_1_get_Count_m9AD2110093D6399438C94DF99535382D17BC2BD1_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_RemoveRange_mF86506D6DC21F6CD58C4769D6E71A3E50A3C2285(L_0, 0, L_2, List_1_RemoveRange_mF86506D6DC21F6CD58C4769D6E71A3E50A3C2285_RuntimeMethod_var);
		// _actions.RemoveRange(0, _actions.Count);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_3 = __this->____actions_5;
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_4 = __this->____actions_5;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline(L_4, List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_RemoveRange_mA28A562F34259E1CF253337E52E77A77912455FE(L_3, 0, L_5, List_1_RemoveRange_mA28A562F34259E1CF253337E52E77A77912455FE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.GameEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventBase__ctor_m6EB5E816C96774CF54E4D6B2EC5C2D2C3A6FCDB1 (GameEventBase_t7C3E074956B68EF89333568AB842F18D18086272* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1242F20B63C5DF4CE59F731B3591F5FEA11348AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8B1AB2EA8725F5B6C1D10B2AD740EED33566C78A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected readonly List<IGameEventListener> _listeners = new List<IGameEventListener>();
		List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829* L_0 = (List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829*)il2cpp_codegen_object_new(List_1_tF73CB13C9697E91C4AFDB93AE58BADB034A13829_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m1242F20B63C5DF4CE59F731B3591F5FEA11348AB(L_0, List_1__ctor_m1242F20B63C5DF4CE59F731B3591F5FEA11348AB_RuntimeMethod_var);
		__this->____listeners_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listeners_4), (void*)L_0);
		// protected readonly List<System.Action> _actions = new List<System.Action>();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_1 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_1, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		__this->____actions_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____actions_5), (void*)L_1);
		// private List<StackTraceEntry> _stackTraces = new List<StackTraceEntry>();
		List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A* L_2 = (List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A*)il2cpp_codegen_object_new(List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m8B1AB2EA8725F5B6C1D10B2AD740EED33566C78A(L_2, List_1__ctor_m8B1AB2EA8725F5B6C1D10B2AD740EED33566C78A_RuntimeMethod_var);
		__this->____stackTraces_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stackTraces_6), (void*)L_2);
		SOArchitectureBaseObject__ctor_mF11F3FE2196C9F1D221DBD34B1FD376D01C09E89(__this, NULL);
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
// System.Void ScriptableObjectArchitecture.StackTraceEntry::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTraceEntry__ctor_m063391BA968DB4EC31C97DC3A7DAB72002A2BD12 (StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* __this, String_t* ___0_trace, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// private readonly bool _constructedWithValue = false;
		__this->____constructedWithValue_4 = (bool)0;
		// private StackTraceEntry(string trace)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _id = UnityEngine.Random.Range(int.MinValue, int.MaxValue);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)-2147483648LL), ((int32_t)2147483647LL), NULL);
		__this->____id_0 = L_0;
		// _stackTrace = trace;
		String_t* L_1 = ___0_trace;
		__this->____stackTrace_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stackTrace_2), (void*)L_1);
		// if (Application.isPlaying)
		bool L_2;
		L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		// _frameCount = Time.frameCount;
		int32_t L_4;
		L_4 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		__this->____frameCount_1 = L_4;
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.StackTraceEntry::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTraceEntry__ctor_mE45980DC4FFAC6FE613ED77BE70648AF2BA0442E (StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* __this, String_t* ___0_trace, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// private readonly bool _constructedWithValue = false;
		__this->____constructedWithValue_4 = (bool)0;
		// private StackTraceEntry(string trace, object value)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _value = value;
		RuntimeObject* L_0 = ___1_value;
		__this->____value_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_3), (void*)L_0);
		// _constructedWithValue = true;
		__this->____constructedWithValue_4 = (bool)1;
		// _id = UnityEngine.Random.Range(int.MinValue, int.MaxValue);
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)-2147483648LL), ((int32_t)2147483647LL), NULL);
		__this->____id_0 = L_1;
		// _stackTrace = trace;
		String_t* L_2 = ___0_trace;
		__this->____stackTrace_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stackTrace_2), (void*)L_2);
		// if (Application.isPlaying)
		bool L_3;
		L_3 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		// _frameCount = Time.frameCount;
		int32_t L_5;
		L_5 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		__this->____frameCount_1 = L_5;
	}

IL_004f:
	{
		// }
		return;
	}
}
// ScriptableObjectArchitecture.StackTraceEntry ScriptableObjectArchitecture.StackTraceEntry::Create(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* StackTraceEntry_Create_m9F86C8B6C7FCE122061E10E49DDB9011E4E52F34 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* V_0 = NULL;
	{
		// return new StackTraceEntry(Environment.StackTrace, obj);
		String_t* L_0;
		L_0 = Environment_get_StackTrace_mE8E276A919C9C9D59220E6D2BA867FABFD9B011D(NULL);
		RuntimeObject* L_1 = ___0_obj;
		StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* L_2 = (StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D*)il2cpp_codegen_object_new(StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StackTraceEntry__ctor_mE45980DC4FFAC6FE613ED77BE70648AF2BA0442E(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* L_3 = V_0;
		return L_3;
	}
}
// ScriptableObjectArchitecture.StackTraceEntry ScriptableObjectArchitecture.StackTraceEntry::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* StackTraceEntry_Create_mC05DE2335C40E5E9142E5AFE5690AE0649C37CB6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* V_0 = NULL;
	{
		// return new StackTraceEntry(Environment.StackTrace);
		String_t* L_0;
		L_0 = Environment_get_StackTrace_mE8E276A919C9C9D59220E6D2BA867FABFD9B011D(NULL);
		StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* L_1 = (StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D*)il2cpp_codegen_object_new(StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StackTraceEntry__ctor_m063391BA968DB4EC31C97DC3A7DAB72002A2BD12(L_1, L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// }
		StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean ScriptableObjectArchitecture.StackTraceEntry::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StackTraceEntry_Equals_mD2DAD306736A81DC1DBBCD1D6695A6E5152E39DA (StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (obj == null)
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_002e;
	}

IL_000d:
	{
		// if (obj is StackTraceEntry)
		RuntimeObject* L_2 = ___0_obj;
		V_2 = (bool)((!(((RuntimeObject*)(StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D*)((StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D*)IsInstClass((RuntimeObject*)L_2, StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// return Equals(obj as StackTraceEntry);
		RuntimeObject* L_4 = ___0_obj;
		bool L_5;
		L_5 = StackTraceEntry_Equals_m427CC02A04E96E0485F2CB54F1B91E041FAA6D0F(__this, ((StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D*)IsInstClass((RuntimeObject*)L_4, StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D_il2cpp_TypeInfo_var)), NULL);
		V_1 = L_5;
		goto IL_002e;
	}

IL_002a:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Boolean ScriptableObjectArchitecture.StackTraceEntry::Equals(ScriptableObjectArchitecture.StackTraceEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StackTraceEntry_Equals_m427CC02A04E96E0485F2CB54F1B91E041FAA6D0F (StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* __this, StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return other._id == this._id;
		StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* L_0 = ___0_other;
		NullCheck(L_0);
		int32_t L_1 = L_0->____id_0;
		int32_t L_2 = __this->____id_0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Int32 ScriptableObjectArchitecture.StackTraceEntry::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackTraceEntry_GetHashCode_mC748461C0E201C14E835B12397F8F9B15256CF55 (StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return _id;
		int32_t L_0 = __this->____id_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String ScriptableObjectArchitecture.StackTraceEntry::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTraceEntry_ToString_m6EE7A733FC53C504DFE8C02E6E801CACE7B7D3F6 (StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D9275A7BD302D336DA37F5980412CA1A43C4F47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	{
		// if (_constructedWithValue)
		bool L_0 = __this->____constructedWithValue_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// return string.Format("{1}   [{0}] {2}", _value == null ? "null" : _value.ToString(), _frameCount, _stackTrace);
		RuntimeObject* L_2 = __this->____value_3;
		G_B2_0 = _stringLiteral4D9275A7BD302D336DA37F5980412CA1A43C4F47;
		if (!L_2)
		{
			G_B3_0 = _stringLiteral4D9275A7BD302D336DA37F5980412CA1A43C4F47;
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_3 = __this->____value_3;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		G_B4_0 = L_4;
		G_B4_1 = G_B2_0;
		goto IL_002b;
	}

IL_0026:
	{
		G_B4_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B4_1 = G_B3_0;
	}

IL_002b:
	{
		int32_t L_5 = __this->____frameCount_1;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = __this->____stackTrace_2;
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(G_B4_1, G_B4_0, L_7, L_8, NULL);
		V_1 = L_9;
		goto IL_0063;
	}

IL_0044:
	{
		// return string.Format("{0} {1}", _frameCount, _stackTrace);
		int32_t L_10 = __this->____frameCount_1;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = __this->____stackTrace_2;
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral8E752B76D455A50FE476984D4B09A7CDBF2A753E, L_12, L_13, NULL);
		V_1 = L_14;
		goto IL_0063;
	}

IL_0063:
	{
		// }
		String_t* L_15 = V_1;
		return L_15;
	}
}
// System.String ScriptableObjectArchitecture.StackTraceEntry::op_Implicit(ScriptableObjectArchitecture.StackTraceEntry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTraceEntry_op_Implicit_m06758859F296238D7A1ABC7662CBB8EB53CCC16F (StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* ___0_trace, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return trace.ToString();
		StackTraceEntry_tBED9CD3C92E36712EC4A5558E9CCF71E682B814D* L_0 = ___0_trace;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
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
// System.Void ScriptableObjectArchitecture.GameObjectGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectGameEvent__ctor_m91D51188BACAA96255D6F81EDC3CF4D62067AA2A (GameObjectGameEvent_t8C9EE2ABDBF4A2644BEE9D3B1AA322626268A804* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_mFF1827887C4513CC2EF95D6A2305B42F05EAE93E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_mFF1827887C4513CC2EF95D6A2305B42F05EAE93E(__this, GameEventBase_1__ctor_mFF1827887C4513CC2EF95D6A2305B42F05EAE93E_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.IntGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntGameEvent__ctor_m0B2A5EFA8295A59FBC2BA354F7440D59072A1842 (IntGameEvent_t2E144CC8973A5D334EE78DC7E701975CE0957FF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_m290183D1C06672EA7E6DABC1E2243A5D338B9FD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_m290183D1C06672EA7E6DABC1E2243A5D338B9FD0(__this, GameEventBase_1__ctor_m290183D1C06672EA7E6DABC1E2243A5D338B9FD0_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.LongGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongGameEvent__ctor_m41224DC9EF7FDDDE5C1903113E71DC7974BDEF22 (LongGameEvent_tD1FF7DEBAB5987620831AAE7962C7A439A886AE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_m7063F4706F2D836CC2D93C3730E370DA5DDCABB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_m7063F4706F2D836CC2D93C3730E370DA5DDCABB9(__this, GameEventBase_1__ctor_m7063F4706F2D836CC2D93C3730E370DA5DDCABB9_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ObjectGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectGameEvent__ctor_m936A57F6C2C3365B7DFF178F4DB10F415737298F (ObjectGameEvent_t3EBDC4B6C0E548905F25CCE5C4328BBA35830723* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_m12B6C41F6E439E259CD620518DE0D40190226816_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_m12B6C41F6E439E259CD620518DE0D40190226816(__this, GameEventBase_1__ctor_m12B6C41F6E439E259CD620518DE0D40190226816_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.QuaternionGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionGameEvent__ctor_m2D4740C0F96F0558451129AEA7B53D58509FE196 (QuaternionGameEvent_t4B5FE2B2323422C22CA03343D5F797C4450EB57B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_m411745A00ABD9FBBE7E85DDBF45E214AF964EBD6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_m411745A00ABD9FBBE7E85DDBF45E214AF964EBD6(__this, GameEventBase_1__ctor_m411745A00ABD9FBBE7E85DDBF45E214AF964EBD6_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.SByteGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SByteGameEvent__ctor_mB033AA81D1D8335F2A31A8F4F00FD30BAEF8B742 (SByteGameEvent_t9FC4637B4401B0B0461F669CEBD147A91A1A07BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_m520A90BEE94441B3387907DFD7C074D04386AC70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_m520A90BEE94441B3387907DFD7C074D04386AC70(__this, GameEventBase_1__ctor_m520A90BEE94441B3387907DFD7C074D04386AC70_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ShortGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortGameEvent__ctor_m69B36D94E5B36A7D1FDA174CAE5D3240934CF463 (ShortGameEvent_t4399DFD5065C287F2C1F87D6BC2F98B8E2D235FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_mC11DCA0256F07810B61D588E31AC78D882984992_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_mC11DCA0256F07810B61D588E31AC78D882984992(__this, GameEventBase_1__ctor_mC11DCA0256F07810B61D588E31AC78D882984992_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.StringGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringGameEvent__ctor_m6317B17B32DEBBF1EAC398C674AFB8D2F52FFEEB (StringGameEvent_t820B6481717C64F21DECCE674A01C9B41302D59F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_mA45C88F241D4047858E8728DFD5978D519326EA1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_mA45C88F241D4047858E8728DFD5978D519326EA1(__this, GameEventBase_1__ctor_mA45C88F241D4047858E8728DFD5978D519326EA1_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.UIntGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntGameEvent__ctor_m922253241BBC16135B043D455E435E573D58BD58 (UIntGameEvent_t82F3817A6E72B6839F35D0E77E224F2F13060EF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_m5EFF93758E19D3AEC43422A1CAE8C8FBB40B92CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_m5EFF93758E19D3AEC43422A1CAE8C8FBB40B92CC(__this, GameEventBase_1__ctor_m5EFF93758E19D3AEC43422A1CAE8C8FBB40B92CC_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ULongGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULongGameEvent__ctor_mFEFD936DDC5576334144638FD9294362D59A1690 (ULongGameEvent_t462480AFC09F11918151533C35F6FCB5852977BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_m21ED1715CFE84E4AB5697A7BCAD7EB37EC6C9CF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_m21ED1715CFE84E4AB5697A7BCAD7EB37EC6C9CF7(__this, GameEventBase_1__ctor_m21ED1715CFE84E4AB5697A7BCAD7EB37EC6C9CF7_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.UShortGameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UShortGameEvent__ctor_mED53FB4546E44F054B3F54D159F093E200B60BAF (UShortGameEvent_tC6913F61ECBF5B4BB6847ACEA41A41F9FC45BF2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_m749B28ACC5A3546402521E4AFFD676A96A0CD2CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_m749B28ACC5A3546402521E4AFFD676A96A0CD2CC(__this, GameEventBase_1__ctor_m749B28ACC5A3546402521E4AFFD676A96A0CD2CC_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector2GameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2GameEvent__ctor_m9B6B2D80B23CE407B491ACC0F5E88F2202EE9F02 (Vector2GameEvent_tFE5544B34D94943692D4E1A74A16C95AB4D1BA8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_m9D92535D6066AE0F065C224EFABC46AD620221AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_m9D92535D6066AE0F065C224EFABC46AD620221AE(__this, GameEventBase_1__ctor_m9D92535D6066AE0F065C224EFABC46AD620221AE_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector3GameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3GameEvent__ctor_mF4C2AF93A349CBDE8B25A44CB1AA3C3F335F3A88 (Vector3GameEvent_t072F447112B5B150571FDDB7936E951327CA24D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_m7740F8979A0A9C3BAF0FB694ACFFBD32F78E0CB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_m7740F8979A0A9C3BAF0FB694ACFFBD32F78E0CB7(__this, GameEventBase_1__ctor_m7740F8979A0A9C3BAF0FB694ACFFBD32F78E0CB7_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector4GameEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4GameEvent__ctor_m1CE193419DA4166663E8D4260770268CD864C23B (Vector4GameEvent_tFBE3AE2919B380AF3DB77BEA596B6110CD34F41E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEventBase_1__ctor_mC183298F9FC659450273D7CBDF42F4FC384FA38C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameEventBase_1__ctor_mC183298F9FC659450273D7CBDF42F4FC384FA38C(__this, GameEventBase_1__ctor_mC183298F9FC659450273D7CBDF42F4FC384FA38C_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.AudioClipGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipGameEventListener__ctor_mFDA82C550F8032688F89BB112233C6727F620A9E (AudioClipGameEventListener_t59BA533F86AAF8F810ECC1F4F06F7797ECF63FF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_m189D373B05DEB74D7C3E74574A8259AE8A37E747_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_m189D373B05DEB74D7C3E74574A8259AE8A37E747(__this, BaseGameEventListener_3__ctor_m189D373B05DEB74D7C3E74574A8259AE8A37E747_RuntimeMethod_var);
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
// System.Collections.Generic.List`1<ScriptableObjectArchitecture.StackTraceEntry> ScriptableObjectArchitecture.DebuggableGameEventListener::get_StackTraces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A* DebuggableGameEventListener_get_StackTraces_mCC5F209BD98D384A6D6FECF59D4AD6386F97A2C5 (DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6* __this, const RuntimeMethod* method) 
{
	List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A* V_0 = NULL;
	{
		// public List<StackTraceEntry> StackTraces { get { return _stackTraces; } }
		List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A* L_0 = __this->____stackTraces_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public List<StackTraceEntry> StackTraces { get { return _stackTraces; } }
		List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A* L_1 = V_0;
		return L_1;
	}
}
// System.Void ScriptableObjectArchitecture.DebuggableGameEventListener::AddStackTrace(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableGameEventListener_AddStackTrace_m967CBA0AD11C7D645A6B733EB4D186F4EC975D94 (DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.DebuggableGameEventListener::AddStackTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableGameEventListener_AddStackTrace_mCA003B26A69E6B94771E67E67A38347BA1C80E75 (DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.DebuggableGameEventListener::CreateDebugEntry(UnityEngine.Events.UnityEventBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableGameEventListener_CreateDebugEntry_m5D8E75F28F305B3CB860E1086E96F2E8C3DA0556 (DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6* __this, UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* ___0_response, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.DebuggableGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableGameEventListener__ctor_m367DADD279AA8E1229B66057B5DF4FA71F09F860 (DebuggableGameEventListener_t4C32D532A0D594266C290365D8C2BCD94591B4B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8B1AB2EA8725F5B6C1D10B2AD740EED33566C78A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool _showDebugFields = false;
		__this->____showDebugFields_4 = (bool)0;
		// private bool _enableGizmoDebugging = true;
		__this->____enableGizmoDebugging_5 = (bool)1;
		// private Color _debugColor = Color.cyan;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		__this->____debugColor_6 = L_0;
		// private List<StackTraceEntry> _stackTraces = new List<StackTraceEntry>();
		List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A* L_1 = (List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A*)il2cpp_codegen_object_new(List_1_t09A49B36CDBCA6F236C1F1A7C6227A6D1C2CFE7A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m8B1AB2EA8725F5B6C1D10B2AD740EED33566C78A(L_1, List_1__ctor_m8B1AB2EA8725F5B6C1D10B2AD740EED33566C78A_RuntimeMethod_var);
		__this->____stackTraces_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stackTraces_7), (void*)L_1);
		SOArchitectureBaseMonobehaviour__ctor_m8C96EC4870E76C84587E2017769C70BFC2725B08(__this, NULL);
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
// System.Void ScriptableObjectArchitecture.BoolGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolGameEventListener__ctor_mCBFD6DD078D3D253123925FB4BA097DC14485070 (BoolGameEventListener_tE8CBEC15DECF16F05209FADC5407DB42CBAA9DD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_m5FAE008D58F36EE33A5CE97F09F30F5A00171B1E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_m5FAE008D58F36EE33A5CE97F09F30F5A00171B1E(__this, BaseGameEventListener_3__ctor_m5FAE008D58F36EE33A5CE97F09F30F5A00171B1E_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ByteGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteGameEventListener__ctor_m1563606CB58066FC14C544FC7A9EC895F108489E (ByteGameEventListener_t0C6F1909E59A3A2F9FDC5681541CCA0DB67516A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_mDF1EC969A89997886056913D894DBE8F7E56A8EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_mDF1EC969A89997886056913D894DBE8F7E56A8EC(__this, BaseGameEventListener_3__ctor_mDF1EC969A89997886056913D894DBE8F7E56A8EC_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.CharGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharGameEventListener__ctor_mA195CE2D520DA347B80463D961A06DC4EF3C59FA (CharGameEventListener_tFE6CCE75C77CE29BE931B198AD7F88CD8AC7B04D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_m448434ADFCD3BFF8F541B78724E89F7F304C1FAD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_m448434ADFCD3BFF8F541B78724E89F7F304C1FAD(__this, BaseGameEventListener_3__ctor_m448434ADFCD3BFF8F541B78724E89F7F304C1FAD_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.DoubleGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleGameEventListener__ctor_m5315E6EBCAB75C7F42B206DC0F69DB2A52EDEFDA (DoubleGameEventListener_tF3AE8C4AF2166FAF10D553FD4F527C0812B5B7CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_m9A83E5DDD2B0D669E331C529C35755EC580CC27C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_m9A83E5DDD2B0D669E331C529C35755EC580CC27C(__this, BaseGameEventListener_3__ctor_m9A83E5DDD2B0D669E331C529C35755EC580CC27C_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.FloatGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatGameEventListener__ctor_m2DB985451AA63DD6E6473D1DC47F73AA47839D18 (FloatGameEventListener_tAB294102632C1FB296FE53A0C36F6462CB1A4B98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_m35CE0E1DC2B489126982EBEA01728598D47C9B1E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_m35CE0E1DC2B489126982EBEA01728598D47C9B1E(__this, BaseGameEventListener_3__ctor_m35CE0E1DC2B489126982EBEA01728598D47C9B1E_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.GameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEventListener__ctor_mF3FC0DFDDF8323D686BF48188A0C74F0671BE55D (GameEventListener_tE993EBF06AB98CEB2C1FEACEAF142095C4D81472* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_2__ctor_m4A3A046B0C300F6CE8D7E8B344742DC54B7E4A9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_2__ctor_m4A3A046B0C300F6CE8D7E8B344742DC54B7E4A9B(__this, BaseGameEventListener_2__ctor_m4A3A046B0C300F6CE8D7E8B344742DC54B7E4A9B_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.GameObjectGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectGameEventListener__ctor_m818C731D4E65CFDFAC891DC7849DBEEE2A7CF2C8 (GameObjectGameEventListener_t4C16ADC1346827D56024A51B3DF66CAB25A2331F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_mB5F3DF550994877C6406D8AE362F3B64D76B50AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_mB5F3DF550994877C6406D8AE362F3B64D76B50AA(__this, BaseGameEventListener_3__ctor_mB5F3DF550994877C6406D8AE362F3B64D76B50AA_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.IntGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntGameEventListener__ctor_m9D24318E97F5CDE4E8ACEAECFC1AD8FCC4407C51 (IntGameEventListener_t2E5440CED6EF7AABD1F67ACEE2C1AC9542E4EC9B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_m6D31CF1F0B0B511DEC4441D3B443CE646EC0C2E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_m6D31CF1F0B0B511DEC4441D3B443CE646EC0C2E8(__this, BaseGameEventListener_3__ctor_m6D31CF1F0B0B511DEC4441D3B443CE646EC0C2E8_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.LongGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongGameEventListener__ctor_mE44C67DE3B16BA2C9E5B85B27DC557B91BD70A08 (LongGameEventListener_t8158E34AF6E685D55AA0C194D7DF0F1796564B81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_m2B54116449E82E02506DD3E8A400C0CBD9755134_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_m2B54116449E82E02506DD3E8A400C0CBD9755134(__this, BaseGameEventListener_3__ctor_m2B54116449E82E02506DD3E8A400C0CBD9755134_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ObjectGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectGameEventListener__ctor_m4CAD0E033523809DB51A2A9DCE752026D8F766E2 (ObjectGameEventListener_t263005490DC3DA3E023066A70B6A02B32E7A7CA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_mC6AD85CB5946F8E9C97FB5D1F15E302AEEF74D7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_mC6AD85CB5946F8E9C97FB5D1F15E302AEEF74D7D(__this, BaseGameEventListener_3__ctor_mC6AD85CB5946F8E9C97FB5D1F15E302AEEF74D7D_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.QuaternionGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionGameEventListener__ctor_mB312DD1032DA68BE6B6703832B3DA3BB537FAB9E (QuaternionGameEventListener_t19E22F1FDA815017C7EC7A05135AA45E5608617F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_m997625FF116A951F8551349B2157667B3234BDA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_m997625FF116A951F8551349B2157667B3234BDA6(__this, BaseGameEventListener_3__ctor_m997625FF116A951F8551349B2157667B3234BDA6_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.SByteGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SByteGameEventListener__ctor_m5D7FC1DB86479652D5CC4215B0A7CA363F4E8A7F (SByteGameEventListener_tA0D879D45625DF3737DA5818B9E240DB86209AFA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_m6F4A8E0235D6D1531BCB2017978B9297B157216C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_m6F4A8E0235D6D1531BCB2017978B9297B157216C(__this, BaseGameEventListener_3__ctor_m6F4A8E0235D6D1531BCB2017978B9297B157216C_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ShortGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortGameEventListener__ctor_m8D527135A79448DDD7A78583B61A31732DE0B989 (ShortGameEventListener_t0DE29AF387451E7C2A67FE64AD982F817DEC9816* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_mE96F408AF352E6089F07F4E54F7EA24C32FD677E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_mE96F408AF352E6089F07F4E54F7EA24C32FD677E(__this, BaseGameEventListener_3__ctor_mE96F408AF352E6089F07F4E54F7EA24C32FD677E_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.StringGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringGameEventListener__ctor_m343CFC403A335D8995807F85F2D4808F8C2E5666 (StringGameEventListener_t0B03D4C3C8D732CA5C66FA1174EC2E7618652B82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_mEE29566BBB67CF9078FE66EFED7A5BD856B74056_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_mEE29566BBB67CF9078FE66EFED7A5BD856B74056(__this, BaseGameEventListener_3__ctor_mEE29566BBB67CF9078FE66EFED7A5BD856B74056_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.UIntGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntGameEventListener__ctor_m3D733334D1676CEDCF3F2ACC5F53C9A9E83AEC73 (UIntGameEventListener_t0CB83377A835FC7BD0BCF48C165B3DD3DD7F7585* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_m7414A0EB12F1D7CFA7CCCF31BA69601EB71DA307_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_m7414A0EB12F1D7CFA7CCCF31BA69601EB71DA307(__this, BaseGameEventListener_3__ctor_m7414A0EB12F1D7CFA7CCCF31BA69601EB71DA307_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ULongGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULongGameEventListener__ctor_m3E9F92F425598C3E8C61CD13278474DB5BCE147B (ULongGameEventListener_tFEF8BC29FCC37AED04E65F62F7F1B8F9F84A98E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_mDF06B5C9DC9CCC7FB3EECB036AED05C7485FBC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_mDF06B5C9DC9CCC7FB3EECB036AED05C7485FBC79(__this, BaseGameEventListener_3__ctor_mDF06B5C9DC9CCC7FB3EECB036AED05C7485FBC79_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.UShortGameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UShortGameEventListener__ctor_m2636312E51D04A458502D8E79E11C56FC5117E65 (UShortGameEventListener_tF26FF279C85F1DD5887600ED308B309AAF61F63E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_mBAFF5F6F77F42588EF7A80DEA49B4C8794DE2938_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_mBAFF5F6F77F42588EF7A80DEA49B4C8794DE2938(__this, BaseGameEventListener_3__ctor_mBAFF5F6F77F42588EF7A80DEA49B4C8794DE2938_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector2GameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2GameEventListener__ctor_m54A8EBFBD98E21F056916A4DB832B79D2C49A833 (Vector2GameEventListener_tA5FF8A5B1053741154D773C5AF95D9C6770C6FDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_m692F4F46D354C25906E74A887991F98F50B913F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_m692F4F46D354C25906E74A887991F98F50B913F6(__this, BaseGameEventListener_3__ctor_m692F4F46D354C25906E74A887991F98F50B913F6_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector3GameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3GameEventListener__ctor_m9BE9E28FACE2944209F64E1E9FE8E709BA6714B5 (Vector3GameEventListener_t0FADED75343861926A52F3316CD6D70DA3D83B93* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_m0A9EE86529772AACCC4C2B0B3F908FA446E57D16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_m0A9EE86529772AACCC4C2B0B3F908FA446E57D16(__this, BaseGameEventListener_3__ctor_m0A9EE86529772AACCC4C2B0B3F908FA446E57D16_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector4GameEventListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4GameEventListener__ctor_m2E31180ACE6C42D6D778EDDB89BF6DE00478A53F (Vector4GameEventListener_tC79D0B1461414969D707190A4F3644986C2EA473* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseGameEventListener_3__ctor_mE1625F879160AE1B1BB712E81762ACBE0C802F2B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseGameEventListener_3__ctor_mE1625F879160AE1B1BB712E81762ACBE0C802F2B(__this, BaseGameEventListener_3__ctor_mE1625F879160AE1B1BB712E81762ACBE0C802F2B_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.AudioClipUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipUnityEvent__ctor_m95C18AD921A89C672DAF174614F9F1F72A051CED (AudioClipUnityEvent_t6B7F109FD58E7CC27A879A56370DA25F41091703* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB(__this, UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.BoolUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolUnityEvent__ctor_mF37E6A090438CC4B1565D02F5A8C5043FB180501 (BoolUnityEvent_t3DC03DEB567860D8A4740F53037DE97238FC5241* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934(__this, UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ByteUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteUnityEvent__ctor_mAB7764303621235E6744283E506AA9D377E67A87 (ByteUnityEvent_t3CCFD9FB0D2771003BA557CE58592A5FEF7DA938* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mC0A92C3237B35318DE5F6DBA95707F2B0FF0583A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mC0A92C3237B35318DE5F6DBA95707F2B0FF0583A(__this, UnityEvent_1__ctor_mC0A92C3237B35318DE5F6DBA95707F2B0FF0583A_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.CharUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharUnityEvent__ctor_mCE385FE3EF8321418C7F7E395A861DF9DD11C83A (CharUnityEvent_t65969389D8D3FDCD61FE06244135DA2D8E317901* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m478A749123AACC5A1B09691CD7D01E8583040823_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m478A749123AACC5A1B09691CD7D01E8583040823(__this, UnityEvent_1__ctor_m478A749123AACC5A1B09691CD7D01E8583040823_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.DoubleUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleUnityEvent__ctor_mECB543AC88F8322CDDDDAB2C87E975ED8D8C5871 (DoubleUnityEvent_t0DAD03C14781D4F051C81D8181E252078E0F342E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m799270AC2A44EF438FC5DB540A66E0E20553FF84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m799270AC2A44EF438FC5DB540A66E0E20553FF84(__this, UnityEvent_1__ctor_m799270AC2A44EF438FC5DB540A66E0E20553FF84_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.FloatUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatUnityEvent__ctor_m3E33DB276E5AB302A4362BD939FE9AEA3072B19A (FloatUnityEvent_t3A247A5F43BB878717D8C7613C0CE75E2B395C44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.GameObjectUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectUnityEvent__ctor_mE76CD4A1C7D3FFB56621119EC0E6AEBB77DA0365 (GameObjectUnityEvent_tCD6656AAE77281E6C7677461077E615700AF99C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD882FB5FAE320D2C50F36BC2FEC6474157F553EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD882FB5FAE320D2C50F36BC2FEC6474157F553EA(__this, UnityEvent_1__ctor_mD882FB5FAE320D2C50F36BC2FEC6474157F553EA_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.IntUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntUnityEvent__ctor_m7B2283A5C8477521D555AE313F85137B0B5AA2D2 (IntUnityEvent_t5E2E9FFCE129B23030739FAC107AE8C291FE0FAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684(__this, UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.LongUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongUnityEvent__ctor_m185BB79F06CF0A66EC0DB0C404F5574AC22F72AA (LongUnityEvent_tFC54A330177C9AE9D3083A13067F0E71CD6C74C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m1334E2CA9BA5661A144E0A018DCB04F564F96B47_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m1334E2CA9BA5661A144E0A018DCB04F564F96B47(__this, UnityEvent_1__ctor_m1334E2CA9BA5661A144E0A018DCB04F564F96B47_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ObjectUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectUnityEvent__ctor_mA002647954B93C0CCB6598C9AC22B2EF4DC9AC82 (ObjectUnityEvent_tF6D74281C00838E84095B46668A73F507CE8FF0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m654E3C4B3BD13FC403E68AD1AD0490D53884E294_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m654E3C4B3BD13FC403E68AD1AD0490D53884E294(__this, UnityEvent_1__ctor_m654E3C4B3BD13FC403E68AD1AD0490D53884E294_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.QuaternionUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionUnityEvent__ctor_m62F733F777DDCC186CFD4B27C0140AEBCAAF83AB (QuaternionUnityEvent_t09FC1304F10E793FCC18D599DCD674ACA1BBC27B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mDBE311970A582A4847FE788142E497E17A7D94BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mDBE311970A582A4847FE788142E497E17A7D94BA(__this, UnityEvent_1__ctor_mDBE311970A582A4847FE788142E497E17A7D94BA_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.SByteUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SByteUnityEvent__ctor_m4FEFE8A6ECF5D677C587EAA08A18EA565B01FAFB (SByteUnityEvent_t84D3DC8700141FCBB62AADB63815F3588FA2B4EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mC8B4DC23859CD826D11F3914EC0DABEB1883CB69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mC8B4DC23859CD826D11F3914EC0DABEB1883CB69(__this, UnityEvent_1__ctor_mC8B4DC23859CD826D11F3914EC0DABEB1883CB69_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ShortUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortUnityEvent__ctor_m48763D71C9A56C750A08475BA5CAF48853D9607B (ShortUnityEvent_tC5459397DACCF8E25FA98CE353B2C49820054C4C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m45C0A37807A6ABE8CC4022F191E14CBE9E89B8BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m45C0A37807A6ABE8CC4022F191E14CBE9E89B8BD(__this, UnityEvent_1__ctor_m45C0A37807A6ABE8CC4022F191E14CBE9E89B8BD_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.StringUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringUnityEvent__ctor_mA97EF3539FE532C35C99CCA68A0642735D85F4AE (StringUnityEvent_t59FA1C73271C074A1824F8707ADBA1C054AA0FEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.UIntUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntUnityEvent__ctor_m0DC8615C1E5228AAD75A594D0A53819A7095D7B8 (UIntUnityEvent_t61650D1B785391AF369AFA348910A7AD1ECEC3F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mF41381CD22DBDAD5BF8373F81680253F7761DE09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mF41381CD22DBDAD5BF8373F81680253F7761DE09(__this, UnityEvent_1__ctor_mF41381CD22DBDAD5BF8373F81680253F7761DE09_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ULongUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULongUnityEvent__ctor_mC7F36402C262A7F8C1B7F1322906BDDA5307D795 (ULongUnityEvent_tFE471A583FF66C73439F494F68BB9B4950B9EAE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mF8CD7C858BE7945CE8860A0C5DFB7DC6B9F93283_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mF8CD7C858BE7945CE8860A0C5DFB7DC6B9F93283(__this, UnityEvent_1__ctor_mF8CD7C858BE7945CE8860A0C5DFB7DC6B9F93283_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.UShortUnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UShortUnityEvent__ctor_m3080C6E0AD581A7E16532E6B85258BC2172FFCEE (UShortUnityEvent_t9027935402C352BCE2E235D2433CA1C2833B4E94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m89FB371E95EF8A989F257539389EE368643EC708_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m89FB371E95EF8A989F257539389EE368643EC708(__this, UnityEvent_1__ctor_m89FB371E95EF8A989F257539389EE368643EC708_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector2UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2UnityEvent__ctor_m2B840C9093A6DD824D2027A64EE884C4ED8CD9FC (Vector2UnityEvent_tFACCD0E147A4C97303D511EE6CB0331BACFA09CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D(__this, UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector3UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3UnityEvent__ctor_m608627DC127CABC72307DC0B7B984C621C20B09A (Vector3UnityEvent_t34F400D721F6C8DE0EA8893341DEF09930ECB5C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176(__this, UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector4UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4UnityEvent__ctor_mF4DBBE4610892ED36F3D2017A5067379FBFDAB27 (Vector4UnityEvent_tB9CD693185F5B6D85ACDA5DE022AB7C31204EE69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m72E5E9F77D48BEAC99A59F585626E00FE0DE9E52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m72E5E9F77D48BEAC99A59F585626E00FE0DE9E52(__this, UnityEvent_1__ctor_m72E5E9F77D48BEAC99A59F585626E00FE0DE9E52_RuntimeMethod_var);
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
// UnityEngine.Vector4 ScriptableObjectArchitecture.QuaternionExtensions::ToVector4(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 QuaternionExtensions_ToVector4_m1F8D905E0C657583CE74C0AB393A28D0F4D9F43B (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_quaternion, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector4(quaternion.x, quaternion.y, quaternion.z, quaternion.w);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_quaternion;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___0_quaternion;
		float L_3 = L_2.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_quaternion;
		float L_5 = L_4.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___0_quaternion;
		float L_7 = L_6.___w_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
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
// UnityEngine.Quaternion ScriptableObjectArchitecture.Vector4Extensions::ToQuaternion(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Vector4Extensions_ToQuaternion_mE17AB6D8C311483EAF9E1B4688D0FDDEAE9E46B6 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_vector4, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Quaternion(vector4.x, vector4.y, vector4.z, vector4.w);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_vector4;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___0_vector4;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_vector4;
		float L_5 = L_4.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___0_vector4;
		float L_7 = L_6.___w_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_0;
		return L_9;
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
// System.Void ScriptableObjectArchitecture.AnimationCurveReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurveReference__ctor_m4D61D9BAF62E4B187192887536E22CB90B050EDC (AnimationCurveReference_t88F5A8D871FC79AD8AF7FEDCDE9CA75ED10279FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m8076511EF9483CCBB19954F7755CB72DB6B776C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurveReference() : base() { }
		BaseReference_2__ctor_m8076511EF9483CCBB19954F7755CB72DB6B776C2(__this, BaseReference_2__ctor_m8076511EF9483CCBB19954F7755CB72DB6B776C2_RuntimeMethod_var);
		// public AnimationCurveReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.AnimationCurveReference::.ctor(UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurveReference__ctor_m8123CC528BE8EED68D1D6DB39DFC7D77D5F74C83 (AnimationCurveReference_t88F5A8D871FC79AD8AF7FEDCDE9CA75ED10279FA* __this, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_mC2D9CBA4EA09611D525F26B3E8426CA7A72A838B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AnimationCurveReference(AnimationCurve value) : base(value) { }
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = ___0_value;
		BaseReference_2__ctor_mC2D9CBA4EA09611D525F26B3E8426CA7A72A838B(__this, L_0, BaseReference_2__ctor_mC2D9CBA4EA09611D525F26B3E8426CA7A72A838B_RuntimeMethod_var);
		// public AnimationCurveReference(AnimationCurve value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.AudioClipReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipReference__ctor_m8AD8FB22E5C5E19AF246374594F878E96DA10B62 (AudioClipReference_t1E628662E4C452ED1F1CC0082FFB338E49EDDAE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_mEF217C7F393C01B21702192049F39AA24CF23ABE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AudioClipReference() : base() { }
		BaseReference_2__ctor_mEF217C7F393C01B21702192049F39AA24CF23ABE(__this, BaseReference_2__ctor_mEF217C7F393C01B21702192049F39AA24CF23ABE_RuntimeMethod_var);
		// public AudioClipReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.AudioClipReference::.ctor(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipReference__ctor_m60684C5D9A05A7ACA478DFBCCDDE9DCBBC3FF4F7 (AudioClipReference_t1E628662E4C452ED1F1CC0082FFB338E49EDDAE9* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m0CC86AE8B86CF85E3C655B9377C419B1155D66D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AudioClipReference(AudioClip value) : base(value) { }
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_0 = ___0_value;
		BaseReference_2__ctor_m0CC86AE8B86CF85E3C655B9377C419B1155D66D6(__this, L_0, BaseReference_2__ctor_m0CC86AE8B86CF85E3C655B9377C419B1155D66D6_RuntimeMethod_var);
		// public AudioClipReference(AudioClip value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.BaseReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseReference__ctor_m3B886AE242F08C00A091D71A86EB805A93376DB3 (BaseReference_t00A3B20C3018E99E5B7D66BA80957336738E010D* __this, const RuntimeMethod* method) 
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
// System.Void ScriptableObjectArchitecture.BoolReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolReference__ctor_m789BD432FA5F868EE7425570696769DCD4EEF288 (BoolReference_t6EE3E5E7B5D9807C5A7CA8E83FEB21215FE65216* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m0A59A00E8E06449F1A009EF1FA91A1EEF4BDE613_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BoolReference() : base() { }
		BaseReference_2__ctor_m0A59A00E8E06449F1A009EF1FA91A1EEF4BDE613(__this, BaseReference_2__ctor_m0A59A00E8E06449F1A009EF1FA91A1EEF4BDE613_RuntimeMethod_var);
		// public BoolReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.BoolReference::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolReference__ctor_mC3E788CB1682AF246CD07292E5969B67F41A0C24 (BoolReference_t6EE3E5E7B5D9807C5A7CA8E83FEB21215FE65216* __this, bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m45F3B424CD867EC0A24D91A4D9EC9B83B5265C66_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BoolReference(bool value) : base(value) { }
		bool L_0 = ___0_value;
		BaseReference_2__ctor_m45F3B424CD867EC0A24D91A4D9EC9B83B5265C66(__this, L_0, BaseReference_2__ctor_m45F3B424CD867EC0A24D91A4D9EC9B83B5265C66_RuntimeMethod_var);
		// public BoolReference(bool value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.ByteReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteReference__ctor_mC89117132FB987FD2B3C49DEB644F45A0C71FD9D (ByteReference_t43B5A0BE3EC400FE1B7DF275BC9D6C8F33A1ECD9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m34D7BF0425EF8688C7701AFBAD08D826431974B0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ByteReference() : base() { }
		BaseReference_2__ctor_m34D7BF0425EF8688C7701AFBAD08D826431974B0(__this, BaseReference_2__ctor_m34D7BF0425EF8688C7701AFBAD08D826431974B0_RuntimeMethod_var);
		// public ByteReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.ByteReference::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteReference__ctor_m67C011DBB854CCB5039288ABC765E0151E35BD2A (ByteReference_t43B5A0BE3EC400FE1B7DF275BC9D6C8F33A1ECD9* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m367AEF283E91CB9F21AEB76894D771B561B7DCF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ByteReference(byte value) : base(value) { }
		uint8_t L_0 = ___0_value;
		BaseReference_2__ctor_m367AEF283E91CB9F21AEB76894D771B561B7DCF2(__this, L_0, BaseReference_2__ctor_m367AEF283E91CB9F21AEB76894D771B561B7DCF2_RuntimeMethod_var);
		// public ByteReference(byte value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.CharReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharReference__ctor_mC43D8F82BB66227681A78168AE21C4CEEF41C2EF (CharReference_t05920017F5B64F042A9887D2766ACB509AF54610* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_mACB7AE0DB804EF4A3370630666751D5947084CBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CharReference() : base() { }
		BaseReference_2__ctor_mACB7AE0DB804EF4A3370630666751D5947084CBE(__this, BaseReference_2__ctor_mACB7AE0DB804EF4A3370630666751D5947084CBE_RuntimeMethod_var);
		// public CharReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.CharReference::.ctor(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharReference__ctor_mB3D61AB3CE8F48363CC9D69C50E0412FEE93263C (CharReference_t05920017F5B64F042A9887D2766ACB509AF54610* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_mDB40D68B379C10E5A941B27A96497717E1376FD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CharReference(char value) : base(value) { }
		Il2CppChar L_0 = ___0_value;
		BaseReference_2__ctor_mDB40D68B379C10E5A941B27A96497717E1376FD3(__this, L_0, BaseReference_2__ctor_mDB40D68B379C10E5A941B27A96497717E1376FD3_RuntimeMethod_var);
		// public CharReference(char value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.Color32Reference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32Reference__ctor_m2D8DB52E93D388EF6D40D9AAC7E62F1F5693F488 (Color32Reference_tF0EE24E8AEA963BA7EA196775D30C2CA3A32CC44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m5CA0B8743D886CE7FBA271B62CAE5A11B1F20503_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Color32Reference() : base() { }
		BaseReference_2__ctor_m5CA0B8743D886CE7FBA271B62CAE5A11B1F20503(__this, BaseReference_2__ctor_m5CA0B8743D886CE7FBA271B62CAE5A11B1F20503_RuntimeMethod_var);
		// public Color32Reference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.Color32Reference::.ctor(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32Reference__ctor_mA93BF725B9F593E0BB62DF51344ED68BFD8BD9C7 (Color32Reference_tF0EE24E8AEA963BA7EA196775D30C2CA3A32CC44* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_mC255DAAB583DDC2EB1474DC5B3FACEF7BEE147BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Color32Reference(Color32 value) : base(value) { }
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_value;
		BaseReference_2__ctor_mC255DAAB583DDC2EB1474DC5B3FACEF7BEE147BD(__this, L_0, BaseReference_2__ctor_mC255DAAB583DDC2EB1474DC5B3FACEF7BEE147BD_RuntimeMethod_var);
		// public Color32Reference(Color32 value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.ColorReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorReference__ctor_mE1FBE18EBA9C357F21DDCF537577DB76A39531E8 (ColorReference_tFC9605CB8EE6952FBB8772A2AB93C877D7238AE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m47429BF9CB86E67C4F093BF609C3AB0689DA33A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ColorReference() : base() { }
		BaseReference_2__ctor_m47429BF9CB86E67C4F093BF609C3AB0689DA33A8(__this, BaseReference_2__ctor_m47429BF9CB86E67C4F093BF609C3AB0689DA33A8_RuntimeMethod_var);
		// public ColorReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.ColorReference::.ctor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorReference__ctor_m1653F2DA1C1B90A96AC4C8CE0D84618A25EDB33C (ColorReference_tFC9605CB8EE6952FBB8772A2AB93C877D7238AE7* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m0DB3E0DF627EBE935BDCCA8DE1ABCAC57513C76B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ColorReference(Color value) : base(value) { }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		BaseReference_2__ctor_m0DB3E0DF627EBE935BDCCA8DE1ABCAC57513C76B(__this, L_0, BaseReference_2__ctor_m0DB3E0DF627EBE935BDCCA8DE1ABCAC57513C76B_RuntimeMethod_var);
		// public ColorReference(Color value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.DoubleReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleReference__ctor_mEB27B0B12C60E5AEA594CB12F487E691368AADD0 (DoubleReference_tA7CE0C564A0FC88326FB690EE4765DC2FBD4A31C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m815814F39589EF2F58ACE754328F9AD3FF9A2B48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DoubleReference() : base() { }
		BaseReference_2__ctor_m815814F39589EF2F58ACE754328F9AD3FF9A2B48(__this, BaseReference_2__ctor_m815814F39589EF2F58ACE754328F9AD3FF9A2B48_RuntimeMethod_var);
		// public DoubleReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.DoubleReference::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleReference__ctor_m509164DA2F1619E367042405AE7F3B631A44DADA (DoubleReference_tA7CE0C564A0FC88326FB690EE4765DC2FBD4A31C* __this, double ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m1B44B487CD221F6657DEF47C9F7FC4181324F310_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DoubleReference(double value) : base(value) { }
		double L_0 = ___0_value;
		BaseReference_2__ctor_m1B44B487CD221F6657DEF47C9F7FC4181324F310(__this, L_0, BaseReference_2__ctor_m1B44B487CD221F6657DEF47C9F7FC4181324F310_RuntimeMethod_var);
		// public DoubleReference(double value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.FloatReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatReference__ctor_m3051BFBB55944AA9EF9BFC790A9881D6B3D16578 (FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m1FD85758424DBE30DB3749B7AB64D8E58819F1AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FloatReference() : base() { }
		BaseReference_2__ctor_m1FD85758424DBE30DB3749B7AB64D8E58819F1AC(__this, BaseReference_2__ctor_m1FD85758424DBE30DB3749B7AB64D8E58819F1AC_RuntimeMethod_var);
		// public FloatReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.FloatReference::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatReference__ctor_m4C5ACC3BB680B543AFCA88FCA44DCD0994375B0D (FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_mB4C07D98DF058F69F8876CB91A8DB9F909C8F40A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FloatReference(float value) : base(value) { }
		float L_0 = ___0_value;
		BaseReference_2__ctor_mB4C07D98DF058F69F8876CB91A8DB9F909C8F40A(__this, L_0, BaseReference_2__ctor_mB4C07D98DF058F69F8876CB91A8DB9F909C8F40A_RuntimeMethod_var);
		// public FloatReference(float value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.GameObjectReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectReference__ctor_m9E13FE99B7344B1421745AA9F05ADE5891F1B1BE (GameObjectReference_t4064888F223DD110E1AEFF0031A25B4B356142AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m93E1689A832185D607D235DE1C4C3CA8E16613A4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GameObjectReference() : base() { }
		BaseReference_2__ctor_m93E1689A832185D607D235DE1C4C3CA8E16613A4(__this, BaseReference_2__ctor_m93E1689A832185D607D235DE1C4C3CA8E16613A4_RuntimeMethod_var);
		// public GameObjectReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.GameObjectReference::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectReference__ctor_m3CD47476B5ABDDE8C74FE48D0D152F4D0C49D3B7 (GameObjectReference_t4064888F223DD110E1AEFF0031A25B4B356142AB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_mB14818DDBCAFBBFFEC864EA186691338CC19304F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GameObjectReference(GameObject value) : base(value) { }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		BaseReference_2__ctor_mB14818DDBCAFBBFFEC864EA186691338CC19304F(__this, L_0, BaseReference_2__ctor_mB14818DDBCAFBBFFEC864EA186691338CC19304F_RuntimeMethod_var);
		// public GameObjectReference(GameObject value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.IntReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntReference__ctor_m0B1C5FF3AEC004295FEBACDA60E5A60F2ED23B35 (IntReference_t37CF127DDC4449029C569E578C54F2B6C56A653C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m5C63E6FC5FC32B2F329BD40440E48A01EAA22EF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IntReference() : base() { }
		BaseReference_2__ctor_m5C63E6FC5FC32B2F329BD40440E48A01EAA22EF4(__this, BaseReference_2__ctor_m5C63E6FC5FC32B2F329BD40440E48A01EAA22EF4_RuntimeMethod_var);
		// public IntReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.IntReference::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntReference__ctor_m145BEC1BED90A692D66E5F5431A1E43371F03C9D (IntReference_t37CF127DDC4449029C569E578C54F2B6C56A653C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_mA2BA6CF66DFD452D391572CA8642CC1AD573C1D5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IntReference(int value) : base(value) { }
		int32_t L_0 = ___0_value;
		BaseReference_2__ctor_mA2BA6CF66DFD452D391572CA8642CC1AD573C1D5(__this, L_0, BaseReference_2__ctor_mA2BA6CF66DFD452D391572CA8642CC1AD573C1D5_RuntimeMethod_var);
		// public IntReference(int value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.LayerMaskReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerMaskReference__ctor_m108252335E3338750F0AFD834C92D4DBB4BA9CAE (LayerMaskReference_tDC3CC941C7366760C6054758794C9C24ABAB8DBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m982C8BF959AFB778D7F7E300A0FBFC2FB8D4B793_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LayerMaskReference() : base() { }
		BaseReference_2__ctor_m982C8BF959AFB778D7F7E300A0FBFC2FB8D4B793(__this, BaseReference_2__ctor_m982C8BF959AFB778D7F7E300A0FBFC2FB8D4B793_RuntimeMethod_var);
		// public LayerMaskReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.LayerMaskReference::.ctor(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerMaskReference__ctor_mBF5E6659E8D80DF3B485FC4D8E48448589234CB6 (LayerMaskReference_tDC3CC941C7366760C6054758794C9C24ABAB8DBA* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_mB9FAF01766B922308177F18080200D534FCD831F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LayerMaskReference(LayerMask value) : base(value) { }
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___0_value;
		BaseReference_2__ctor_mB9FAF01766B922308177F18080200D534FCD831F(__this, L_0, BaseReference_2__ctor_mB9FAF01766B922308177F18080200D534FCD831F_RuntimeMethod_var);
		// public LayerMaskReference(LayerMask value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.LongReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongReference__ctor_mE8E31DE33E4BF19AF56FD51195521387FBC2CD1B (LongReference_tF59CCFB6672EADDA9740995E4D788F426295CCBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m8D2CC01226E366F15E6D41B5957FD44A7124681E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LongReference() : base() { }
		BaseReference_2__ctor_m8D2CC01226E366F15E6D41B5957FD44A7124681E(__this, BaseReference_2__ctor_m8D2CC01226E366F15E6D41B5957FD44A7124681E_RuntimeMethod_var);
		// public LongReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.LongReference::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongReference__ctor_mEA428632852293D639437D9C0DF83081FEC4A246 (LongReference_tF59CCFB6672EADDA9740995E4D788F426295CCBB* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m5C65C640554017A27F8C7DCEC4E018EA26B37A82_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LongReference(long value) : base(value) { }
		int64_t L_0 = ___0_value;
		BaseReference_2__ctor_m5C65C640554017A27F8C7DCEC4E018EA26B37A82(__this, L_0, BaseReference_2__ctor_m5C65C640554017A27F8C7DCEC4E018EA26B37A82_RuntimeMethod_var);
		// public LongReference(long value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.ObjectReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectReference__ctor_m7A5660D08B7C0098BA50251617D03DFD53A21EB8 (ObjectReference_t5C0CFD796302FFDC50AA85BDAE843D0EDCD1880A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m8297B3C4D864FCFB4603AA0F6AD43B5DA08F75AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ObjectReference() : base() { }
		BaseReference_2__ctor_m8297B3C4D864FCFB4603AA0F6AD43B5DA08F75AF(__this, BaseReference_2__ctor_m8297B3C4D864FCFB4603AA0F6AD43B5DA08F75AF_RuntimeMethod_var);
		// public ObjectReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.ObjectReference::.ctor(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectReference__ctor_m3573E54EF1F88107CC9798FE1FBD014D65205390 (ObjectReference_t5C0CFD796302FFDC50AA85BDAE843D0EDCD1880A* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m68EEAB3C24BF02E41E2BA33D218342988DB75336_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ObjectReference(Object value) : base(value) { }
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_value;
		BaseReference_2__ctor_m68EEAB3C24BF02E41E2BA33D218342988DB75336(__this, L_0, BaseReference_2__ctor_m68EEAB3C24BF02E41E2BA33D218342988DB75336_RuntimeMethod_var);
		// public ObjectReference(Object value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.QuaternionReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionReference__ctor_mC8B89BB12326FADC9FBE6ADEF35576E4FB6FCA64 (QuaternionReference_t6127F39A2A4D1E46E2DBCEE48D507A133DB1291A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m6F56503743F8FB0AF8014326021AF7E11EF6347D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public QuaternionReference() : base() { }
		BaseReference_2__ctor_m6F56503743F8FB0AF8014326021AF7E11EF6347D(__this, BaseReference_2__ctor_m6F56503743F8FB0AF8014326021AF7E11EF6347D_RuntimeMethod_var);
		// public QuaternionReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.QuaternionReference::.ctor(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionReference__ctor_mD0B36653066DDDE6FD9542E7D3A0C0BFB1B74E2C (QuaternionReference_t6127F39A2A4D1E46E2DBCEE48D507A133DB1291A* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_mB8F6AD2FC84D3187CD7CC2C86136D82593CBEC05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public QuaternionReference(Quaternion value) : base(value) { }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		BaseReference_2__ctor_mB8F6AD2FC84D3187CD7CC2C86136D82593CBEC05(__this, L_0, BaseReference_2__ctor_mB8F6AD2FC84D3187CD7CC2C86136D82593CBEC05_RuntimeMethod_var);
		// public QuaternionReference(Quaternion value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.SByteReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SByteReference__ctor_m65795917087697FB43A64D3C6025DBF187B1AF32 (SByteReference_t74E6620231B774545C8AFA342E084DA4D03C01B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_mFA144F5D09CE3EAD313EA9B8AA5A2329A94CD5AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SByteReference() : base() { }
		BaseReference_2__ctor_mFA144F5D09CE3EAD313EA9B8AA5A2329A94CD5AF(__this, BaseReference_2__ctor_mFA144F5D09CE3EAD313EA9B8AA5A2329A94CD5AF_RuntimeMethod_var);
		// public SByteReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.SByteReference::.ctor(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SByteReference__ctor_m46E0142D7687C1F5B6DE1E54BC2E4B9000DCA066 (SByteReference_t74E6620231B774545C8AFA342E084DA4D03C01B0* __this, int8_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m01732F5E04DDA7E2AB3781F0E61CEBF80DB2CB1E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SByteReference(sbyte value) : base(value) { }
		int8_t L_0 = ___0_value;
		BaseReference_2__ctor_m01732F5E04DDA7E2AB3781F0E61CEBF80DB2CB1E(__this, L_0, BaseReference_2__ctor_m01732F5E04DDA7E2AB3781F0E61CEBF80DB2CB1E_RuntimeMethod_var);
		// public SByteReference(sbyte value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.SceneReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneReference__ctor_m344DF82F4D1336866451CC6CA4CED2D1EDF982E4 (SceneReference_tE720D965A9643BB4D2DAE85BDF3DCC679CC05580* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m8DA03C3EA861DFEB95AE94820C415ABCA78D632A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SceneReference()
		BaseReference_2__ctor_m8DA03C3EA861DFEB95AE94820C415ABCA78D632A(__this, BaseReference_2__ctor_m8DA03C3EA861DFEB95AE94820C415ABCA78D632A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.SceneReference::.ctor(ScriptableObjectArchitecture.SceneInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneReference__ctor_mA84210BF728A2229636D7EBCD75E5AB1EAAE097C (SceneReference_tE720D965A9643BB4D2DAE85BDF3DCC679CC05580* __this, SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m896A4C22659BD89AB058270846F48057C2DA3937_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SceneReference(SceneInfo value) : base(value)
		SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* L_0 = ___0_value;
		BaseReference_2__ctor_m896A4C22659BD89AB058270846F48057C2DA3937(__this, L_0, BaseReference_2__ctor_m896A4C22659BD89AB058270846F48057C2DA3937_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ShortReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortReference__ctor_m8A2D775B56C0079D85F24FD60E2EFEBCC54CE223 (ShortReference_tBAF12BD2CA0E1E6B505B8F34298E9D7385E94B40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m6F02CF3693449B369991150D9E1B7ADAAA983AA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ShortReference() : base() { }
		BaseReference_2__ctor_m6F02CF3693449B369991150D9E1B7ADAAA983AA8(__this, BaseReference_2__ctor_m6F02CF3693449B369991150D9E1B7ADAAA983AA8_RuntimeMethod_var);
		// public ShortReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.ShortReference::.ctor(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortReference__ctor_m6751E6D49A86047A9FE1BC7517D4421569F5F9E8 (ShortReference_tBAF12BD2CA0E1E6B505B8F34298E9D7385E94B40* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m7AAC4A88325C5E2D29F40DF1FC81B26288B98FE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ShortReference(short value) : base(value) { }
		int16_t L_0 = ___0_value;
		BaseReference_2__ctor_m7AAC4A88325C5E2D29F40DF1FC81B26288B98FE2(__this, L_0, BaseReference_2__ctor_m7AAC4A88325C5E2D29F40DF1FC81B26288B98FE2_RuntimeMethod_var);
		// public ShortReference(short value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.StringReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReference__ctor_mB1F09A8460D42D4B21BC6362D988EBEA166296D9 (StringReference_t9915F2B6495329BB56C97763A4D156D41C6F2671* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_mB894CE4F4CD70BC8096845DEF0EDAB9D62C074FA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public StringReference() : base() { }
		BaseReference_2__ctor_mB894CE4F4CD70BC8096845DEF0EDAB9D62C074FA(__this, BaseReference_2__ctor_mB894CE4F4CD70BC8096845DEF0EDAB9D62C074FA_RuntimeMethod_var);
		// public StringReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.StringReference::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReference__ctor_m55D0959155788F6CF15BEDED035443E5D5EF3C8D (StringReference_t9915F2B6495329BB56C97763A4D156D41C6F2671* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m2C98C1264961A8D4FF37736655CF6F24E8A8EC7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public StringReference(string value) : base(value) { }
		String_t* L_0 = ___0_value;
		BaseReference_2__ctor_m2C98C1264961A8D4FF37736655CF6F24E8A8EC7A(__this, L_0, BaseReference_2__ctor_m2C98C1264961A8D4FF37736655CF6F24E8A8EC7A_RuntimeMethod_var);
		// public StringReference(string value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.UIntReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntReference__ctor_mD0996F8E25A751C1BBB70E11034136A4BA2337D3 (UIntReference_tF1CF487E48EA38B6476BFD64FC22CD6079AA41CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m3DB07D2BA4EDA5998FDB628910B0A678DD11F76D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UIntReference() : base() { }
		BaseReference_2__ctor_m3DB07D2BA4EDA5998FDB628910B0A678DD11F76D(__this, BaseReference_2__ctor_m3DB07D2BA4EDA5998FDB628910B0A678DD11F76D_RuntimeMethod_var);
		// public UIntReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.UIntReference::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntReference__ctor_mB5248D7C13EB452A4D4ABFC5973FFC38E82BE694 (UIntReference_tF1CF487E48EA38B6476BFD64FC22CD6079AA41CD* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m80D48A5B7E9E77C057031D39C217D5E9F5614A3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UIntReference(uint value) : base(value) { }
		uint32_t L_0 = ___0_value;
		BaseReference_2__ctor_m80D48A5B7E9E77C057031D39C217D5E9F5614A3E(__this, L_0, BaseReference_2__ctor_m80D48A5B7E9E77C057031D39C217D5E9F5614A3E_RuntimeMethod_var);
		// public UIntReference(uint value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.ULongReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULongReference__ctor_m73E295E6152E1FFA1DBF2C1061483CA937696641 (ULongReference_t529130311DFB997532C2EEEAA0652E34ADDDA23A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m127EC54B2CA31A8247EA515834C3A019E3DECF1C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ULongReference() : base() { }
		BaseReference_2__ctor_m127EC54B2CA31A8247EA515834C3A019E3DECF1C(__this, BaseReference_2__ctor_m127EC54B2CA31A8247EA515834C3A019E3DECF1C_RuntimeMethod_var);
		// public ULongReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.ULongReference::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULongReference__ctor_m79FBB548DABBB87ECDEFCDF5B0540ECEEC7C0AA4 (ULongReference_t529130311DFB997532C2EEEAA0652E34ADDDA23A* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m53BB850A6B3D473A2B20BA252C116F2BA4F6F6D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ULongReference(ulong value) : base(value) { }
		uint64_t L_0 = ___0_value;
		BaseReference_2__ctor_m53BB850A6B3D473A2B20BA252C116F2BA4F6F6D3(__this, L_0, BaseReference_2__ctor_m53BB850A6B3D473A2B20BA252C116F2BA4F6F6D3_RuntimeMethod_var);
		// public ULongReference(ulong value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.UShortReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UShortReference__ctor_m4E32B4618CF904E2EE55292C45E7391029B5621B (UShortReference_tBD4A42B6FAAE942562E4C56936132755A8EE3698* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m1F91732F8CBE0582DEEF8A5318D7FA77A113E67E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UShortReference() : base() { }
		BaseReference_2__ctor_m1F91732F8CBE0582DEEF8A5318D7FA77A113E67E(__this, BaseReference_2__ctor_m1F91732F8CBE0582DEEF8A5318D7FA77A113E67E_RuntimeMethod_var);
		// public UShortReference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.UShortReference::.ctor(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UShortReference__ctor_mB90C4B66C6149E1ACA3978E1FBE189FD487741A6 (UShortReference_tBD4A42B6FAAE942562E4C56936132755A8EE3698* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m65ACD764BD6DF70572EAE98668BD3F979344AFCB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public UShortReference(ushort value) : base(value) { }
		uint16_t L_0 = ___0_value;
		BaseReference_2__ctor_m65ACD764BD6DF70572EAE98668BD3F979344AFCB(__this, L_0, BaseReference_2__ctor_m65ACD764BD6DF70572EAE98668BD3F979344AFCB_RuntimeMethod_var);
		// public UShortReference(ushort value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.Vector2Reference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Reference__ctor_mDFA0E4C97F0D08945623D64D0B1151298C1662B0 (Vector2Reference_t0D6D8C8E5EDC113973DD7C21CB99FAF794E27800* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_mD2A402D055C3EE1C37B76C016715AB9AEF4DAD13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector2Reference() : base() { }
		BaseReference_2__ctor_mD2A402D055C3EE1C37B76C016715AB9AEF4DAD13(__this, BaseReference_2__ctor_mD2A402D055C3EE1C37B76C016715AB9AEF4DAD13_RuntimeMethod_var);
		// public Vector2Reference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.Vector2Reference::.ctor(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Reference__ctor_mB8D547CA100F5EF267FCE95B99FC0AE3792B0AB4 (Vector2Reference_t0D6D8C8E5EDC113973DD7C21CB99FAF794E27800* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_mBD5F7B1F2B5CDC1C2695ACAE82FFC5063AB7D89F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector2Reference(Vector2 value) : base(value) { }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		BaseReference_2__ctor_mBD5F7B1F2B5CDC1C2695ACAE82FFC5063AB7D89F(__this, L_0, BaseReference_2__ctor_mBD5F7B1F2B5CDC1C2695ACAE82FFC5063AB7D89F_RuntimeMethod_var);
		// public Vector2Reference(Vector2 value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.Vector3Reference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Reference__ctor_mC6EA6720FF35299970C2EE2F793F0E2CC7FAEF23 (Vector3Reference_t065BBF241031C80EE5EF75117A7FCD80BBB8EA58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_mCBB2AAD2B1BBC3C3B0DEAD3072C7499C57DE556C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3Reference() : base() { }
		BaseReference_2__ctor_mCBB2AAD2B1BBC3C3B0DEAD3072C7499C57DE556C(__this, BaseReference_2__ctor_mCBB2AAD2B1BBC3C3B0DEAD3072C7499C57DE556C_RuntimeMethod_var);
		// public Vector3Reference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.Vector3Reference::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Reference__ctor_m00A156AD266360D1464F5CCCD3BEAB8091D9E9EA (Vector3Reference_t065BBF241031C80EE5EF75117A7FCD80BBB8EA58* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m539C4D82C5A7E06DFCA64689A146534B14EE9721_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3Reference(Vector3 value) : base(value) { }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		BaseReference_2__ctor_m539C4D82C5A7E06DFCA64689A146534B14EE9721(__this, L_0, BaseReference_2__ctor_m539C4D82C5A7E06DFCA64689A146534B14EE9721_RuntimeMethod_var);
		// public Vector3Reference(Vector3 value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.Vector4Reference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4Reference__ctor_m374A504A77EF08492C064CC0D9B8207E8EF897E2 (Vector4Reference_tE93426D6A504F00C4FAEDBB31F69EB942DD2233B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m55443D3CD697E5BEB11A354E35BCC021EAAD9AEA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector4Reference() : base() { }
		BaseReference_2__ctor_m55443D3CD697E5BEB11A354E35BCC021EAAD9AEA(__this, BaseReference_2__ctor_m55443D3CD697E5BEB11A354E35BCC021EAAD9AEA_RuntimeMethod_var);
		// public Vector4Reference() : base() { }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.Vector4Reference::.ctor(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4Reference__ctor_m740E26432A8FE3C3FF9B86768CF055CDD66334D0 (Vector4Reference_tE93426D6A504F00C4FAEDBB31F69EB942DD2233B* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2__ctor_m032F506AC0181D5C2440FE037373DA606E676221_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector4Reference(Vector4 value) : base(value) { }
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_value;
		BaseReference_2__ctor_m032F506AC0181D5C2440FE037373DA606E676221(__this, L_0, BaseReference_2__ctor_m032F506AC0181D5C2440FE037373DA606E676221_RuntimeMethod_var);
		// public Vector4Reference(Vector4 value) : base(value) { }
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
// System.Void ScriptableObjectArchitecture.SOArchitectureBaseMonobehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SOArchitectureBaseMonobehaviour__ctor_m8C96EC4870E76C84587E2017769C70BFC2725B08 (SOArchitectureBaseMonobehaviour_tE95AACB49C1D557C6B4A91D947744DB3E5E39D2C* __this, const RuntimeMethod* method) 
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
// System.Void ScriptableObjectArchitecture.SOArchitectureBaseObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SOArchitectureBaseObject__ctor_mF11F3FE2196C9F1D221DBD34B1FD376D01C09E89 (SOArchitectureBaseObject_t5F7D212ABE0AAA356A8D13D81468DCC5EFFC631B* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// ScriptableObjectArchitecture.SOArchitecture_Settings ScriptableObjectArchitecture.SOArchitecture_Settings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* SOArchitecture_Settings_get_Instance_mFD1E172B67D9FB5E541BF0EA4396077FBACFB0BE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* V_1 = NULL;
	{
		// if (_instance == null)
		SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* L_0 = ((SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471_StaticFields*)il2cpp_codegen_static_fields_for(SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471_il2cpp_TypeInfo_var))->____instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// _instance = GetInstance();
		SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* L_3;
		L_3 = SOArchitecture_Settings_GetInstance_mB73133CB5BF338F4BE8AB7E42F8C0F592ECD9ECE(NULL);
		((SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471_StaticFields*)il2cpp_codegen_static_fields_for(SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471_il2cpp_TypeInfo_var))->____instance_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471_StaticFields*)il2cpp_codegen_static_fields_for(SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471_il2cpp_TypeInfo_var))->____instance_4), (void*)L_3);
	}

IL_001a:
	{
		// return _instance;
		SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* L_4 = ((SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471_StaticFields*)il2cpp_codegen_static_fields_for(SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471_il2cpp_TypeInfo_var))->____instance_4;
		V_1 = L_4;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* L_5 = V_1;
		return L_5;
	}
}
// ScriptableObjectArchitecture.SOArchitecture_Settings ScriptableObjectArchitecture.SOArchitecture_Settings::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* SOArchitecture_Settings_GetInstance_mB73133CB5BF338F4BE8AB7E42F8C0F592ECD9ECE (const RuntimeMethod* method) 
{
	SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* V_0 = NULL;
	{
		// return null;
		V_0 = (SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* L_0 = V_0;
		return L_0;
	}
}
// ScriptableObjectArchitecture.SOArchitecture_Settings ScriptableObjectArchitecture.SOArchitecture_Settings::FindInstanceInProject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* SOArchitecture_Settings_FindInstanceInProject_mE53B58DE3C332229740A11B44DD612D138EC17DA (const RuntimeMethod* method) 
{
	{
		// throw new System.NullReferenceException();
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_0 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SOArchitecture_Settings_FindInstanceInProject_mE53B58DE3C332229740A11B44DD612D138EC17DA_RuntimeMethod_var)));
	}
}
// ScriptableObjectArchitecture.SOArchitecture_Settings ScriptableObjectArchitecture.SOArchitecture_Settings::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* SOArchitecture_Settings_CreateInstance_mFC28C5F7F3444A8AC5F1A9DF3E5425FB06FCC687 (const RuntimeMethod* method) 
{
	{
		// throw new System.NullReferenceException();
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_0 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NullReferenceException__ctor_mD26D62094A5E49C18D817817E17FDFBC1D3BD752(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SOArchitecture_Settings_CreateInstance_mFC28C5F7F3444A8AC5F1A9DF3E5425FB06FCC687_RuntimeMethod_var)));
	}
}
// System.String ScriptableObjectArchitecture.SOArchitecture_Settings::get_CodeGenerationTargetDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SOArchitecture_Settings_get_CodeGenerationTargetDirectory_m46ED1DD6BD83A7351DD52E987004F0BF79A0004F (SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return _codeGenerationTargetDirectory; }
		String_t* L_0 = __this->____codeGenerationTargetDirectory_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _codeGenerationTargetDirectory; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void ScriptableObjectArchitecture.SOArchitecture_Settings::set_CodeGenerationTargetDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SOArchitecture_Settings_set_CodeGenerationTargetDirectory_mF29898287F86A7FD43257F6564CF676F299C2791 (SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { _codeGenerationTargetDirectory = value; }
		String_t* L_0 = ___0_value;
		__this->____codeGenerationTargetDirectory_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____codeGenerationTargetDirectory_8), (void*)L_0);
		// set { _codeGenerationTargetDirectory = value; }
		return;
	}
}
// System.Boolean ScriptableObjectArchitecture.SOArchitecture_Settings::get_CodeGenerationAllowOverwrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SOArchitecture_Settings_get_CodeGenerationAllowOverwrite_mEEFD8FAB3AC2F69547B85F22542E541DBB4A3608 (SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return _codeGenerationAllowOverwrite; }
		bool L_0 = __this->____codeGenerationAllowOverwrite_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _codeGenerationAllowOverwrite; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void ScriptableObjectArchitecture.SOArchitecture_Settings::set_CodeGenerationAllowOverwrite(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SOArchitecture_Settings_set_CodeGenerationAllowOverwrite_m9D5E85FB42323DDD58FBC336A7929271C278EBC1 (SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { _codeGenerationAllowOverwrite = value; }
		bool L_0 = ___0_value;
		__this->____codeGenerationAllowOverwrite_9 = L_0;
		// set { _codeGenerationAllowOverwrite = value; }
		return;
	}
}
// System.Int32 ScriptableObjectArchitecture.SOArchitecture_Settings::get_DefaultCreateAssetMenuOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SOArchitecture_Settings_get_DefaultCreateAssetMenuOrder_m1DA4E2724C45BA35297E45686B796969B626BF18 (SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return _defualtCreateAssetMenuOrder; }
		int32_t L_0 = __this->____defualtCreateAssetMenuOrder_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _defualtCreateAssetMenuOrder; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ScriptableObjectArchitecture.SOArchitecture_Settings::set_DefaultCreateAssetMenuOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SOArchitecture_Settings_set_DefaultCreateAssetMenuOrder_m8DA85FD5E9E19E6951E7AA80F952093FD00BD860 (SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set { _defualtCreateAssetMenuOrder = value; }
		int32_t L_0 = ___0_value;
		__this->____defualtCreateAssetMenuOrder_10 = L_0;
		// set { _defualtCreateAssetMenuOrder = value; }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.SOArchitecture_Settings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SOArchitecture_Settings__ctor_m3548BB05A70BADE60280E2EADD3C4DE165B5F21A (SOArchitecture_Settings_t33398D90A0635D21ADB5BA80D9324A4262A2D471* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8E8B62E307F97D05285D284669C60930DB212E1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string _codeGenerationTargetDirectory = "CODE_GENERATION";
		__this->____codeGenerationTargetDirectory_8 = _stringLiteralB8E8B62E307F97D05285D284669C60930DB212E1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____codeGenerationTargetDirectory_8), (void*)_stringLiteralB8E8B62E307F97D05285D284669C60930DB212E1);
		// private bool _codeGenerationAllowOverwrite = false;
		__this->____codeGenerationAllowOverwrite_9 = (bool)0;
		// private int _defualtCreateAssetMenuOrder = 120;
		__this->____defualtCreateAssetMenuOrder_10 = ((int32_t)120);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScriptableObjectArchitecture.AnimationCurveEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurveEvent__ctor_m6CB73DF212EEEE9A59EF90E4EBDB8E8D63F5323D (AnimationCurveEvent_t8425E6F34793FDA4C7BBD2D39802FF8E79315D72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mA8D3E452D3D9C40E84C9C089B87B946EA9B15278_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mA8D3E452D3D9C40E84C9C089B87B946EA9B15278(__this, UnityEvent_1__ctor_mA8D3E452D3D9C40E84C9C089B87B946EA9B15278_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.AnimationCurveVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurveVariable__ctor_m2ED8732E0CCF8E2F2D7AF7C190FB94CD4C2F47E5 (AnimationCurveVariable_tEFBCC32823AB577813C8B22F02D786DB4E03C240* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_m905D2BC11F1321F7F5F93C661D07C3A3F1C586A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_m905D2BC11F1321F7F5F93C661D07C3A3F1C586A6(__this, BaseVariable_2__ctor_m905D2BC11F1321F7F5F93C661D07C3A3F1C586A6_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.AudioClipEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipEvent__ctor_m1CE86BC80559985CBE3E475ECF8C2FBBB3C2CCF7 (AudioClipEvent_tDECC8215AAAFE8548EB1C094CC24489A9638D347* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB(__this, UnityEvent_1__ctor_mB7FF0B7F649A3048614E91E570DD858159CA61FB_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.AudioClipVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipVariable__ctor_m9D77DD9C94F19860120806B6ECC67CF0A02BD152 (AudioClipVariable_t9D688C420D2F42E7C399C292CBD8C7E9B3B61C4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_mF0C8CBD2010D74DB966D9BB343528729BFB87851_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_mF0C8CBD2010D74DB966D9BB343528729BFB87851(__this, BaseVariable_2__ctor_mF0C8CBD2010D74DB966D9BB343528729BFB87851_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.BaseVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVariable__ctor_mDEC9316845E0BFDD849B5AA723DA3D9D937249C7 (BaseVariable_t479C35CD95AF012FB73601B0E0EAC0875D949002* __this, const RuntimeMethod* method) 
{
	{
		GameEventBase__ctor_m6EB5E816C96774CF54E4D6B2EC5C2D2C3A6FCDB1(__this, NULL);
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
// System.Void ScriptableObjectArchitecture.BoolEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolEvent__ctor_m81489C5D1CE7233BC3815E4900D69922A4FFC937 (BoolEvent_t9E22CE96A421ED7B689F1F98615708E601D0BEA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934(__this, UnityEvent_1__ctor_m7A1EF666468DD954D61FBAD7C721229BD3589934_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.BoolVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolVariable__ctor_m1A9118D0BBE2DD676057620990D4533D9C7395CA (BoolVariable_t764ED84F6566C6E161B30BFA786048A217C47EE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_mFB96C106A1C1D3F868C6A11CCA1613666CF33D77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_mFB96C106A1C1D3F868C6A11CCA1613666CF33D77(__this, BaseVariable_2__ctor_mFB96C106A1C1D3F868C6A11CCA1613666CF33D77_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ByteEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteEvent__ctor_m946A4614F3BBE1683AD3F60F24B68872E0EC567C (ByteEvent_t49C81C726E0E3E6616ABE0DDDF1B989BDC36D5D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mC0A92C3237B35318DE5F6DBA95707F2B0FF0583A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mC0A92C3237B35318DE5F6DBA95707F2B0FF0583A(__this, UnityEvent_1__ctor_mC0A92C3237B35318DE5F6DBA95707F2B0FF0583A_RuntimeMethod_var);
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
// System.Boolean ScriptableObjectArchitecture.ByteVariable::get_Clampable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteVariable_get_Clampable_m0E23DC9FCD15547573B4B7E7432E7DDF4C0AC2C3 (ByteVariable_t7B084C21DC44CD2E8CA919670C38F867E28152B0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public override bool Clampable { get { return true; } }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public override bool Clampable { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Byte ScriptableObjectArchitecture.ByteVariable::ClampValue(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ByteVariable_ClampValue_m92B0083FB462215427D7DBA37325AA2F04547DA3 (ByteVariable_t7B084C21DC44CD2E8CA919670C38F867E28152B0* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	{
		// if (value.CompareTo(MinClampValue) < 0)
		uint8_t L_0;
		L_0 = VirtualFuncInvoker0< uint8_t >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Byte>::get_MinClampValue() */, __this);
		int32_t L_1;
		L_1 = Byte_CompareTo_m188EF2F51CA95A2820D240FE282E165FAEF8A5B8((&___0_value), L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return MinClampValue;
		uint8_t L_3;
		L_3 = VirtualFuncInvoker0< uint8_t >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Byte>::get_MinClampValue() */, __this);
		V_1 = L_3;
		goto IL_0042;
	}

IL_001f:
	{
		// else if (value.CompareTo(MaxClampValue) > 0)
		uint8_t L_4;
		L_4 = VirtualFuncInvoker0< uint8_t >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Byte>::get_MaxClampValue() */, __this);
		int32_t L_5;
		L_5 = Byte_CompareTo_m188EF2F51CA95A2820D240FE282E165FAEF8A5B8((&___0_value), L_4, NULL);
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// return MaxClampValue;
		uint8_t L_7;
		L_7 = VirtualFuncInvoker0< uint8_t >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Byte>::get_MaxClampValue() */, __this);
		V_1 = L_7;
		goto IL_0042;
	}

IL_003d:
	{
		// return value;
		uint8_t L_8 = ___0_value;
		V_1 = L_8;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		uint8_t L_9 = V_1;
		return L_9;
	}
}
// System.Void ScriptableObjectArchitecture.ByteVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteVariable__ctor_m8A7BD73EF7397964943C7DB1F6BD94BAE449D7EF (ByteVariable_t7B084C21DC44CD2E8CA919670C38F867E28152B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_m1BD4D52749E12741A7A25E029ED4C6192862C960_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_m1BD4D52749E12741A7A25E029ED4C6192862C960(__this, BaseVariable_2__ctor_m1BD4D52749E12741A7A25E029ED4C6192862C960_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.CharEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharEvent__ctor_m36FE96BF230427EAAE084DFECEDD59D2863DC893 (CharEvent_tA8ECC2465A8413751CB562863E29F17301D71969* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m478A749123AACC5A1B09691CD7D01E8583040823_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m478A749123AACC5A1B09691CD7D01E8583040823(__this, UnityEvent_1__ctor_m478A749123AACC5A1B09691CD7D01E8583040823_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.CharVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharVariable__ctor_mA48A5DBEB8DD80721C7AB06993EDEEAA6A812205 (CharVariable_tDE9AB696A98D49BFB368871B12969BB8D7F781CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_m8E7B962FE2B6E59BB15A48A0A530F4E224E7A1DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_m8E7B962FE2B6E59BB15A48A0A530F4E224E7A1DC(__this, BaseVariable_2__ctor_m8E7B962FE2B6E59BB15A48A0A530F4E224E7A1DC_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Color32Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32Event__ctor_m4DA65CB66D2A14A92D19FF0367C6638A8A726C16 (Color32Event_tFC2B4948119A3C96B1B1CC0430BEFDED013ABA5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m37088B677DD51D108D67186A864FEF14230FB1AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m37088B677DD51D108D67186A864FEF14230FB1AA(__this, UnityEvent_1__ctor_m37088B677DD51D108D67186A864FEF14230FB1AA_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Color32Variable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32Variable__ctor_m0F63DAD086F12FD3A6AA05CA5CD37016FC28E50C (Color32Variable_tD702FAAD694BB1EADC02DE5D40D8A4E81CA11168* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_m8915225DACF57014B30A4AC2C944AAA29416A388_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_m8915225DACF57014B30A4AC2C944AAA29416A388(__this, BaseVariable_2__ctor_m8915225DACF57014B30A4AC2C944AAA29416A388_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ColorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorEvent__ctor_m278D66EFA4518E3594F55FE762CBD143E4420BD7 (ColorEvent_tA39160CDC0F52D13A7925E7A3AFB41FD619461CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D(__this, UnityEvent_1__ctor_mDED1CDCE6C1912DC328CA1D07ACA3ABB9AF1303D_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ColorVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorVariable__ctor_m2AA82AEC67A58B28FDAE8FD865D5A2B750907CF8 (ColorVariable_t130F20F7BA68AE04C3AFCF170DB660F41D7FF845* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_m30AB4B0D3DAD50A547303FFE0DE50A285275412D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_m30AB4B0D3DAD50A547303FFE0DE50A285275412D(__this, BaseVariable_2__ctor_m30AB4B0D3DAD50A547303FFE0DE50A285275412D_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.DoubleEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleEvent__ctor_mA5B57F2D699330B67209599E09EC04F67B487370 (DoubleEvent_t9E247B7B528C53E6196DA2AF493B0CBB30A3A701* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m799270AC2A44EF438FC5DB540A66E0E20553FF84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m799270AC2A44EF438FC5DB540A66E0E20553FF84(__this, UnityEvent_1__ctor_m799270AC2A44EF438FC5DB540A66E0E20553FF84_RuntimeMethod_var);
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
// System.Boolean ScriptableObjectArchitecture.DoubleVariable::get_Clampable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DoubleVariable_get_Clampable_m742FDA16F20AE230781F1D1D11C445B29D052A85 (DoubleVariable_tA03B5B5994F2F286D17DC4E12FB1F90ED739B21E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public override bool Clampable { get { return true; } }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public override bool Clampable { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Double ScriptableObjectArchitecture.DoubleVariable::ClampValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DoubleVariable_ClampValue_m30A34DF3FFA254E6930780C3A693F172D94DDB46 (DoubleVariable_tA03B5B5994F2F286D17DC4E12FB1F90ED739B21E* __this, double ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	{
		// if (value.CompareTo(MinClampValue) < 0)
		double L_0;
		L_0 = VirtualFuncInvoker0< double >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Double>::get_MinClampValue() */, __this);
		int32_t L_1;
		L_1 = Double_CompareTo_m40FD7CA33B178CCFA4B6755267DC67841092CCFC((&___0_value), L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return MinClampValue;
		double L_3;
		L_3 = VirtualFuncInvoker0< double >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Double>::get_MinClampValue() */, __this);
		V_1 = L_3;
		goto IL_0042;
	}

IL_001f:
	{
		// else if (value.CompareTo(MaxClampValue) > 0)
		double L_4;
		L_4 = VirtualFuncInvoker0< double >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Double>::get_MaxClampValue() */, __this);
		int32_t L_5;
		L_5 = Double_CompareTo_m40FD7CA33B178CCFA4B6755267DC67841092CCFC((&___0_value), L_4, NULL);
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// return MaxClampValue;
		double L_7;
		L_7 = VirtualFuncInvoker0< double >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Double>::get_MaxClampValue() */, __this);
		V_1 = L_7;
		goto IL_0042;
	}

IL_003d:
	{
		// return value;
		double L_8 = ___0_value;
		V_1 = L_8;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		double L_9 = V_1;
		return L_9;
	}
}
// System.Void ScriptableObjectArchitecture.DoubleVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleVariable__ctor_m09E98966CCE6EADAF44B8B9FD17C88E827D32779 (DoubleVariable_tA03B5B5994F2F286D17DC4E12FB1F90ED739B21E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_m2EF136F6DD1ECAC76B89B69C0980BE7A68EA7D95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_m2EF136F6DD1ECAC76B89B69C0980BE7A68EA7D95(__this, BaseVariable_2__ctor_m2EF136F6DD1ECAC76B89B69C0980BE7A68EA7D95_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.FloatEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatEvent__ctor_m064624DF4141848BC93533F4D6F333033764BB5D (FloatEvent_tB842FF4F4F6D92915AE23F63DF474F7A8D57A2DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422(__this, UnityEvent_1__ctor_mD1175E822AFF26E9A43F2FB692BB82525C6DD422_RuntimeMethod_var);
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
// System.Boolean ScriptableObjectArchitecture.FloatVariable::get_Clampable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FloatVariable_get_Clampable_mD682DD3D06F59FD68CB47701BA161D9B069CF208 (FloatVariable_t625F97534449CC4C0953DD85FA4A2026870756F3* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public override bool Clampable { get { return true; } }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public override bool Clampable { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Single ScriptableObjectArchitecture.FloatVariable::ClampValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FloatVariable_ClampValue_m4F51C73DBABE9FF199FBB67170B7C7E937CC6B6A (FloatVariable_t625F97534449CC4C0953DD85FA4A2026870756F3* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		// if (value.CompareTo(MinClampValue) < 0)
		float L_0;
		L_0 = VirtualFuncInvoker0< float >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Single>::get_MinClampValue() */, __this);
		int32_t L_1;
		L_1 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&___0_value), L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return MinClampValue;
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Single>::get_MinClampValue() */, __this);
		V_1 = L_3;
		goto IL_0042;
	}

IL_001f:
	{
		// else if (value.CompareTo(MaxClampValue) > 0)
		float L_4;
		L_4 = VirtualFuncInvoker0< float >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Single>::get_MaxClampValue() */, __this);
		int32_t L_5;
		L_5 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&___0_value), L_4, NULL);
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// return MaxClampValue;
		float L_7;
		L_7 = VirtualFuncInvoker0< float >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Single>::get_MaxClampValue() */, __this);
		V_1 = L_7;
		goto IL_0042;
	}

IL_003d:
	{
		// return value;
		float L_8 = ___0_value;
		V_1 = L_8;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		float L_9 = V_1;
		return L_9;
	}
}
// System.Void ScriptableObjectArchitecture.FloatVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatVariable__ctor_m850B7F8F9755EABEBBAC5383B83C39966496BA23 (FloatVariable_t625F97534449CC4C0953DD85FA4A2026870756F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_mA62F9D586DC4D3295AC0B4EF6C3B88D86FA9CA4D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_mA62F9D586DC4D3295AC0B4EF6C3B88D86FA9CA4D(__this, BaseVariable_2__ctor_mA62F9D586DC4D3295AC0B4EF6C3B88D86FA9CA4D_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.GameObjectEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectEvent__ctor_m3E3B639568B92ADC5F84BECA588DE2675FBE710C (GameObjectEvent_tA0A9A30926A3CCCA00B95EC7F4F3C5FBFD1E4FB6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mD882FB5FAE320D2C50F36BC2FEC6474157F553EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mD882FB5FAE320D2C50F36BC2FEC6474157F553EA(__this, UnityEvent_1__ctor_mD882FB5FAE320D2C50F36BC2FEC6474157F553EA_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.GameObjectVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectVariable__ctor_mBA3E3342B16FCDFB8210CB7C08B0DA9BA35214D2 (GameObjectVariable_t6ACE562BDAF9BA4EE46F037B6D8E87B3F4EB77F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_m8AB29C4AD04586F094B437C78249A5E2A3FCC424_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_m8AB29C4AD04586F094B437C78249A5E2A3FCC424(__this, BaseVariable_2__ctor_m8AB29C4AD04586F094B437C78249A5E2A3FCC424_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.IntEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntEvent__ctor_mCE24D1D5146A24FB4584550082932577C5F26155 (IntEvent_t6E813C75E50D398D15DFABD06B2662AA65D2CDC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684(__this, UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
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
// System.Boolean ScriptableObjectArchitecture.IntVariable::get_Clampable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntVariable_get_Clampable_m5BFAB00D16E81365AF96304087D9E457FB7298D4 (IntVariable_t82008C985D4FA5C4CF1BAEB30DA8E53A079481FB* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public override bool Clampable { get { return true; } }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public override bool Clampable { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int32 ScriptableObjectArchitecture.IntVariable::ClampValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntVariable_ClampValue_m1AB06F448E0819D6DFE73F43BA7FF041EB2CC217 (IntVariable_t82008C985D4FA5C4CF1BAEB30DA8E53A079481FB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (value.CompareTo(MinClampValue) < 0)
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Int32>::get_MinClampValue() */, __this);
		int32_t L_1;
		L_1 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((&___0_value), L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return MinClampValue;
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Int32>::get_MinClampValue() */, __this);
		V_1 = L_3;
		goto IL_0042;
	}

IL_001f:
	{
		// else if (value.CompareTo(MaxClampValue) > 0)
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Int32>::get_MaxClampValue() */, __this);
		int32_t L_5;
		L_5 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((&___0_value), L_4, NULL);
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// return MaxClampValue;
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Int32>::get_MaxClampValue() */, __this);
		V_1 = L_7;
		goto IL_0042;
	}

IL_003d:
	{
		// return value;
		int32_t L_8 = ___0_value;
		V_1 = L_8;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void ScriptableObjectArchitecture.IntVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntVariable__ctor_mEAB8DFD23016C505A85ECF11EAC5270B3E37C1EC (IntVariable_t82008C985D4FA5C4CF1BAEB30DA8E53A079481FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_mC3AE2C554D5FF06178EEC03ABB2DAE10084E73E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_mC3AE2C554D5FF06178EEC03ABB2DAE10084E73E8(__this, BaseVariable_2__ctor_mC3AE2C554D5FF06178EEC03ABB2DAE10084E73E8_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.LayerMaskEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerMaskEvent__ctor_mCB509C9E62689C81595B2804D59F617D2CCD5A3F (LayerMaskEvent_tEA3D1A798F92C909C30C71D4BAF4CB7FCD8C445F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m6CC7B27F29BC4F50FEE2FECBEFBC4450836D7602_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m6CC7B27F29BC4F50FEE2FECBEFBC4450836D7602(__this, UnityEvent_1__ctor_m6CC7B27F29BC4F50FEE2FECBEFBC4450836D7602_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.LayerMaskVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerMaskVariable__ctor_mDCCE536AC8AD9688D36D22DAA2ABA29A8BB50DB2 (LayerMaskVariable_t3A7C3590239A92777BA87C3A299FC83C092C124C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_mD94973ABEBCD37B62D521D3F012985411A80A639_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_mD94973ABEBCD37B62D521D3F012985411A80A639(__this, BaseVariable_2__ctor_mD94973ABEBCD37B62D521D3F012985411A80A639_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.LongEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEvent__ctor_mE29D46842A568299B4133EB0BE7C2BCE502E41F2 (LongEvent_tE766B8639111C11D6A9A858A8BA02E7407EBD5E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m1334E2CA9BA5661A144E0A018DCB04F564F96B47_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m1334E2CA9BA5661A144E0A018DCB04F564F96B47(__this, UnityEvent_1__ctor_m1334E2CA9BA5661A144E0A018DCB04F564F96B47_RuntimeMethod_var);
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
// System.Boolean ScriptableObjectArchitecture.LongVariable::get_Clampable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongVariable_get_Clampable_mA20D5A9C385522036891386FEC0DDAE161B19B03 (LongVariable_tA4FEC3B78A4850FEC74F323F408F6E8EDDD8E01E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public override bool Clampable { get { return true; } }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public override bool Clampable { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int64 ScriptableObjectArchitecture.LongVariable::ClampValue(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t LongVariable_ClampValue_mC08160E41679D32790563A46194230D8753BA386 (LongVariable_tA4FEC3B78A4850FEC74F323F408F6E8EDDD8E01E* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int64_t V_1 = 0;
	bool V_2 = false;
	{
		// if (value.CompareTo(MinClampValue) < 0)
		int64_t L_0;
		L_0 = VirtualFuncInvoker0< int64_t >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Int64>::get_MinClampValue() */, __this);
		int32_t L_1;
		L_1 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((&___0_value), L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return MinClampValue;
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Int64>::get_MinClampValue() */, __this);
		V_1 = L_3;
		goto IL_0042;
	}

IL_001f:
	{
		// else if (value.CompareTo(MaxClampValue) > 0)
		int64_t L_4;
		L_4 = VirtualFuncInvoker0< int64_t >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Int64>::get_MaxClampValue() */, __this);
		int32_t L_5;
		L_5 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((&___0_value), L_4, NULL);
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// return MaxClampValue;
		int64_t L_7;
		L_7 = VirtualFuncInvoker0< int64_t >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Int64>::get_MaxClampValue() */, __this);
		V_1 = L_7;
		goto IL_0042;
	}

IL_003d:
	{
		// return value;
		int64_t L_8 = ___0_value;
		V_1 = L_8;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		int64_t L_9 = V_1;
		return L_9;
	}
}
// System.Void ScriptableObjectArchitecture.LongVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongVariable__ctor_m2553D87BD43C7D721DB6CB67442D4BDC9E3B09F4 (LongVariable_tA4FEC3B78A4850FEC74F323F408F6E8EDDD8E01E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_m6E10B8D93A46CB4C3955702B339A532F1DA0C9A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_m6E10B8D93A46CB4C3955702B339A532F1DA0C9A9(__this, BaseVariable_2__ctor_m6E10B8D93A46CB4C3955702B339A532F1DA0C9A9_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ObjectEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectEvent__ctor_m46F58A22888E2AB0591AF9AA44A492D51724D5B0 (ObjectEvent_t866AB59919D93646DD80F161CA6DE3EE46652E82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m654E3C4B3BD13FC403E68AD1AD0490D53884E294_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m654E3C4B3BD13FC403E68AD1AD0490D53884E294(__this, UnityEvent_1__ctor_m654E3C4B3BD13FC403E68AD1AD0490D53884E294_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ObjectVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectVariable__ctor_m13D8BA10C175F76A9124791B5D8123300724C004 (ObjectVariable_tD40668E019842D6B40B25C4C438D419F46E2CF82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_mCFC19D1633A3CFD39A2F0C4E52EDCBD8E2AD0E1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_mCFC19D1633A3CFD39A2F0C4E52EDCBD8E2AD0E1D(__this, BaseVariable_2__ctor_mCFC19D1633A3CFD39A2F0C4E52EDCBD8E2AD0E1D_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.QuaternionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionEvent__ctor_m6268AA9D3F9DDB3930ADDEE1A2F5C9DF128A2424 (QuaternionEvent_tE171C4D239E81820286C61E70309BFF13E0305F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mDBE311970A582A4847FE788142E497E17A7D94BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mDBE311970A582A4847FE788142E497E17A7D94BA(__this, UnityEvent_1__ctor_mDBE311970A582A4847FE788142E497E17A7D94BA_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.QuaternionVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionVariable__ctor_mA4A1BF8134DD07CA340A51092FF7DA6BCBCB761D (QuaternionVariable_t865364A28D530DAE702A02D51EA8F22B85F45286* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_m96234BC7A4A6EE8DDCEF5E2D2046D34BA3A0D764_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_m96234BC7A4A6EE8DDCEF5E2D2046D34BA3A0D764(__this, BaseVariable_2__ctor_m96234BC7A4A6EE8DDCEF5E2D2046D34BA3A0D764_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.SByteEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SByteEvent__ctor_m7D201B7236F28B1608F60E36D48F0F384380B21A (SByteEvent_t3AFB7C2A6ADA47EE417B267DC06711952994ECE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mC8B4DC23859CD826D11F3914EC0DABEB1883CB69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mC8B4DC23859CD826D11F3914EC0DABEB1883CB69(__this, UnityEvent_1__ctor_mC8B4DC23859CD826D11F3914EC0DABEB1883CB69_RuntimeMethod_var);
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
// System.Boolean ScriptableObjectArchitecture.SByteVariable::get_Clampable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SByteVariable_get_Clampable_m6FEECC01830C57A39149B9F83A77F6B808BC495C (SByteVariable_t190FB798BEDF4572A88A261AF57B305F1A516664* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public override bool Clampable { get { return true; } }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public override bool Clampable { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.SByte ScriptableObjectArchitecture.SByteVariable::ClampValue(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t SByteVariable_ClampValue_m86D8E0112DAE38E904369CC7C18E9A6C8BC023F2 (SByteVariable_t190FB798BEDF4572A88A261AF57B305F1A516664* __this, int8_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int8_t V_1 = 0x0;
	bool V_2 = false;
	{
		// if (value.CompareTo(MinClampValue) < 0)
		int8_t L_0;
		L_0 = VirtualFuncInvoker0< int8_t >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.SByte>::get_MinClampValue() */, __this);
		int32_t L_1;
		L_1 = SByte_CompareTo_m1C183FA8CCC293C6FA6A50EE04B2FB36E9695CC4((&___0_value), L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return MinClampValue;
		int8_t L_3;
		L_3 = VirtualFuncInvoker0< int8_t >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.SByte>::get_MinClampValue() */, __this);
		V_1 = L_3;
		goto IL_0042;
	}

IL_001f:
	{
		// else if (value.CompareTo(MaxClampValue) > 0)
		int8_t L_4;
		L_4 = VirtualFuncInvoker0< int8_t >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.SByte>::get_MaxClampValue() */, __this);
		int32_t L_5;
		L_5 = SByte_CompareTo_m1C183FA8CCC293C6FA6A50EE04B2FB36E9695CC4((&___0_value), L_4, NULL);
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// return MaxClampValue;
		int8_t L_7;
		L_7 = VirtualFuncInvoker0< int8_t >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.SByte>::get_MaxClampValue() */, __this);
		V_1 = L_7;
		goto IL_0042;
	}

IL_003d:
	{
		// return value;
		int8_t L_8 = ___0_value;
		V_1 = L_8;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		int8_t L_9 = V_1;
		return L_9;
	}
}
// System.Void ScriptableObjectArchitecture.SByteVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SByteVariable__ctor_m09ED9145DAF33BA1396630F8EB4F338F189899D9 (SByteVariable_t190FB798BEDF4572A88A261AF57B305F1A516664* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_mC6A4C11E3EC380A5F81AF7748082CEF71CAFFFAD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_mC6A4C11E3EC380A5F81AF7748082CEF71CAFFFAD(__this, BaseVariable_2__ctor_mC6A4C11E3EC380A5F81AF7748082CEF71CAFFFAD_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.SceneInfoEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInfoEvent__ctor_mC80086F3D05332125BCC0A14F67149690E14FE5B (SceneInfoEvent_t6E385A78EB8BBBB8C877D8A59ECBFDDFEE1B1112* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mB521550BB7E0E37A69FA8F0D9DB32616887A11F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mB521550BB7E0E37A69FA8F0D9DB32616887A11F6(__this, UnityEvent_1__ctor_mB521550BB7E0E37A69FA8F0D9DB32616887A11F6_RuntimeMethod_var);
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
// ScriptableObjectArchitecture.SceneInfo ScriptableObjectArchitecture.SceneVariable::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* SceneVariable_get_Value_mFBA1799DC120F39E58DEABED5DDBD5431AA20608 (SceneVariable_tB891AF435CC040522F30F22B078B93054D0684F8* __this, const RuntimeMethod* method) 
{
	SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* V_0 = NULL;
	{
		// get { return _value; }
		SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* L_0 = ((BaseVariable_1_tFBEEFAA9ABAE2E7588839ACE6CB1ACAB48E5018F*)__this)->____value_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _value; }
		SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean ScriptableObjectArchitecture.SceneVariable::get_ReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneVariable_get_ReadOnly_mF441B2EC516E281921EB0AB6D59C818212418AC0 (SceneVariable_tB891AF435CC040522F30F22B078B93054D0684F8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return true;
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void ScriptableObjectArchitecture.SceneVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneVariable__ctor_m540C005AC8D5DEC2071D59FFB6F77F6C92C213C5 (SceneVariable_tB891AF435CC040522F30F22B078B93054D0684F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_m69EB6A4245F97CD25C682ACE0BED540D38956081_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_m69EB6A4245F97CD25C682ACE0BED540D38956081(__this, BaseVariable_2__ctor_m69EB6A4245F97CD25C682ACE0BED540D38956081_RuntimeMethod_var);
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
// System.String ScriptableObjectArchitecture.SceneInfo::get_SceneName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SceneInfo_get_SceneName_m6AD8C41092BFA9341C0C1DA864114C5D76F13160 (SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return _sceneName; }
		String_t* L_0 = __this->____sceneName_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _sceneName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 ScriptableObjectArchitecture.SceneInfo::get_SceneIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneInfo_get_SceneIndex_m0C817856C4C63881CCBC971A72D2FDAF89954EA3 (SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return _sceneIndex; }
		int32_t L_0 = __this->____sceneIndex_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _sceneIndex; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void ScriptableObjectArchitecture.SceneInfo::set_SceneIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInfo_set_SceneIndex_m70B9A1A40FA14C0B575EF9D9B6FAE7819DBECA8D (SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set { _sceneIndex = value; }
		int32_t L_0 = ___0_value;
		__this->____sceneIndex_1 = L_0;
		// internal set { _sceneIndex = value; }
		return;
	}
}
// System.Boolean ScriptableObjectArchitecture.SceneInfo::get_IsSceneInBuildSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneInfo_get_IsSceneInBuildSettings_m801D139B4B62E70834D2E61905DAC79A4F61F21A (SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return _sceneIndex != -1; }
		int32_t L_0 = __this->____sceneIndex_1;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		// get { return _sceneIndex != -1; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean ScriptableObjectArchitecture.SceneInfo::get_IsSceneEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SceneInfo_get_IsSceneEnabled_m3C671640451F6BF4CF7A866A5492D74522A1143A (SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return _isSceneEnabled; }
		bool L_0 = __this->____isSceneEnabled_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _isSceneEnabled; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void ScriptableObjectArchitecture.SceneInfo::set_IsSceneEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInfo_set_IsSceneEnabled_mA3D7091500A90CEEC37D8EAE64DFA51D0F993702 (SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// internal set { _isSceneEnabled = value; }
		bool L_0 = ___0_value;
		__this->____isSceneEnabled_2 = L_0;
		// internal set { _isSceneEnabled = value; }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.SceneInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInfo__ctor_mDAAA8A42E0C0F493DEFDA461C22C5EAD75FE8D49 (SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* __this, const RuntimeMethod* method) 
{
	{
		// public SceneInfo()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _sceneIndex = -1;
		__this->____sceneIndex_1 = (-1);
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.SceneInfo::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInfo_OnBeforeSerialize_mE2A815901E75C72174875B3CC96B999E728211D2 (SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.SceneInfo::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInfo_OnAfterDeserialize_mD2380C7171D814EAE40E804B8804F18950CD8B84 (SceneInfo_tAE78F005C3CEEA75EE6A09522F43C2A0EEEDE355* __this, const RuntimeMethod* method) 
{
	{
		// public void OnAfterDeserialize(){}
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
// System.Void ScriptableObjectArchitecture.ShortEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortEvent__ctor_m4EE92C7726651B18DD0AAE13F8499C3EF29B4E1C (ShortEvent_t31F6A39B91142554E628891B33CCF506D2E92D02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m45C0A37807A6ABE8CC4022F191E14CBE9E89B8BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m45C0A37807A6ABE8CC4022F191E14CBE9E89B8BD(__this, UnityEvent_1__ctor_m45C0A37807A6ABE8CC4022F191E14CBE9E89B8BD_RuntimeMethod_var);
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
// System.Boolean ScriptableObjectArchitecture.ShortVariable::get_Clampable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShortVariable_get_Clampable_mCD9FBDAFDE512E883B9CF3BC0B0BF2357556B5B7 (ShortVariable_t98FE5356B5FC0642211510D152F9B8E279D0EB72* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public override bool Clampable { get { return true; } }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public override bool Clampable { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int16 ScriptableObjectArchitecture.ShortVariable::ClampValue(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ShortVariable_ClampValue_m16A7426827FE725BD14C20E57A724AB7ADB19D7B (ShortVariable_t98FE5356B5FC0642211510D152F9B8E279D0EB72* __this, int16_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int16_t V_1 = 0;
	bool V_2 = false;
	{
		// if (value.CompareTo(MinClampValue) < 0)
		int16_t L_0;
		L_0 = VirtualFuncInvoker0< int16_t >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Int16>::get_MinClampValue() */, __this);
		int32_t L_1;
		L_1 = Int16_CompareTo_mC2DEE36C53F9B2768B0A217A1986ED8C25D0CAC1((&___0_value), L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return MinClampValue;
		int16_t L_3;
		L_3 = VirtualFuncInvoker0< int16_t >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Int16>::get_MinClampValue() */, __this);
		V_1 = L_3;
		goto IL_0042;
	}

IL_001f:
	{
		// else if (value.CompareTo(MaxClampValue) > 0)
		int16_t L_4;
		L_4 = VirtualFuncInvoker0< int16_t >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Int16>::get_MaxClampValue() */, __this);
		int32_t L_5;
		L_5 = Int16_CompareTo_mC2DEE36C53F9B2768B0A217A1986ED8C25D0CAC1((&___0_value), L_4, NULL);
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// return MaxClampValue;
		int16_t L_7;
		L_7 = VirtualFuncInvoker0< int16_t >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.Int16>::get_MaxClampValue() */, __this);
		V_1 = L_7;
		goto IL_0042;
	}

IL_003d:
	{
		// return value;
		int16_t L_8 = ___0_value;
		V_1 = L_8;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		int16_t L_9 = V_1;
		return L_9;
	}
}
// System.Void ScriptableObjectArchitecture.ShortVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortVariable__ctor_m6A06323166E71C9055AE035EF17689FFA553425A (ShortVariable_t98FE5356B5FC0642211510D152F9B8E279D0EB72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_mF9EEF718D542846D02477ED1E731328768117AAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_mF9EEF718D542846D02477ED1E731328768117AAB(__this, BaseVariable_2__ctor_mF9EEF718D542846D02477ED1E731328768117AAB_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.StringEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEvent__ctor_m50BB8417DA53B08B74A038EAB3C362CA388E5AAB (StringEvent_t774918EF8789B33F5F83809DAB99159BDCB01B2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.StringVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringVariable__ctor_m40111EB69DA8D45C476B49B0A65894CACA14990F (StringVariable_tC768058ABC2B03C28B3FEE5DCB87C0C5FAAA5A95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_m400B8693D0D983CE72D8818DCFB2F72326623143_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_m400B8693D0D983CE72D8818DCFB2F72326623143(__this, BaseVariable_2__ctor_m400B8693D0D983CE72D8818DCFB2F72326623143_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.UIntEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntEvent__ctor_m97EA0908C4230CB4A74F9F271DD4BFBF76130127 (UIntEvent_t7F7B5A13C59AEAB14F4C52BEF1C4FA5495309535* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mF41381CD22DBDAD5BF8373F81680253F7761DE09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mF41381CD22DBDAD5BF8373F81680253F7761DE09(__this, UnityEvent_1__ctor_mF41381CD22DBDAD5BF8373F81680253F7761DE09_RuntimeMethod_var);
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
// System.Boolean ScriptableObjectArchitecture.UIntVariable::get_Clampable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIntVariable_get_Clampable_mCF2A201AD7C766CD7F6C4E08FA90F40382A5B549 (UIntVariable_t4A1E29FE58D9B677A392A87D9E8485F029A40CBD* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public override bool Clampable { get { return true; } }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public override bool Clampable { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.UInt32 ScriptableObjectArchitecture.UIntVariable::ClampValue(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UIntVariable_ClampValue_mFFBCA2C92F3CA8941F8250E0AC44C3FA395907BB (UIntVariable_t4A1E29FE58D9B677A392A87D9E8485F029A40CBD* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (value.CompareTo(MinClampValue) < 0)
		uint32_t L_0;
		L_0 = VirtualFuncInvoker0< uint32_t >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.UInt32>::get_MinClampValue() */, __this);
		int32_t L_1;
		L_1 = UInt32_CompareTo_mC96F15BE2B06C0268AD1D110D3251CE4DBA43907((&___0_value), L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return MinClampValue;
		uint32_t L_3;
		L_3 = VirtualFuncInvoker0< uint32_t >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.UInt32>::get_MinClampValue() */, __this);
		V_1 = L_3;
		goto IL_0042;
	}

IL_001f:
	{
		// else if (value.CompareTo(MaxClampValue) > 0)
		uint32_t L_4;
		L_4 = VirtualFuncInvoker0< uint32_t >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.UInt32>::get_MaxClampValue() */, __this);
		int32_t L_5;
		L_5 = UInt32_CompareTo_mC96F15BE2B06C0268AD1D110D3251CE4DBA43907((&___0_value), L_4, NULL);
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// return MaxClampValue;
		uint32_t L_7;
		L_7 = VirtualFuncInvoker0< uint32_t >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.UInt32>::get_MaxClampValue() */, __this);
		V_1 = L_7;
		goto IL_0042;
	}

IL_003d:
	{
		// return value;
		uint32_t L_8 = ___0_value;
		V_1 = L_8;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		uint32_t L_9 = V_1;
		return L_9;
	}
}
// System.Void ScriptableObjectArchitecture.UIntVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIntVariable__ctor_m83BBF6AF97C3AA0CBF7762994BAB1A3AF0B2FB3F (UIntVariable_t4A1E29FE58D9B677A392A87D9E8485F029A40CBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_m3C5512D65C483C1F1A2D6D2F6750F8B111F8317C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_m3C5512D65C483C1F1A2D6D2F6750F8B111F8317C(__this, BaseVariable_2__ctor_m3C5512D65C483C1F1A2D6D2F6750F8B111F8317C_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.ULongEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULongEvent__ctor_m4F5AC9D36CC0CC25BEA048871627F7E23B605929 (ULongEvent_tFF8028EC1F42A7409EEC0F658AF67E2F054581B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mF8CD7C858BE7945CE8860A0C5DFB7DC6B9F93283_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mF8CD7C858BE7945CE8860A0C5DFB7DC6B9F93283(__this, UnityEvent_1__ctor_mF8CD7C858BE7945CE8860A0C5DFB7DC6B9F93283_RuntimeMethod_var);
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
// System.Boolean ScriptableObjectArchitecture.ULongVariable::get_Clampable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ULongVariable_get_Clampable_m821481A4D5101EBC2E69D2820B37C003AE4AA0DF (ULongVariable_tD7CF88ECC9DE6573D0A8B1B8E697635ED166DA81* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public override bool Clampable { get { return true; } }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public override bool Clampable { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.UInt64 ScriptableObjectArchitecture.ULongVariable::ClampValue(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ULongVariable_ClampValue_m5D287F18DBADE261FC57F27C7A1CE20F6BB758E0 (ULongVariable_tD7CF88ECC9DE6573D0A8B1B8E697635ED166DA81* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint64_t V_1 = 0;
	bool V_2 = false;
	{
		// if (value.CompareTo(MinClampValue) < 0)
		uint64_t L_0;
		L_0 = VirtualFuncInvoker0< uint64_t >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.UInt64>::get_MinClampValue() */, __this);
		int32_t L_1;
		L_1 = UInt64_CompareTo_m1292E47C1FE2A1FC5BC5E6E2EB9C1FCDCEFE7745((&___0_value), L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return MinClampValue;
		uint64_t L_3;
		L_3 = VirtualFuncInvoker0< uint64_t >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.UInt64>::get_MinClampValue() */, __this);
		V_1 = L_3;
		goto IL_0042;
	}

IL_001f:
	{
		// else if (value.CompareTo(MaxClampValue) > 0)
		uint64_t L_4;
		L_4 = VirtualFuncInvoker0< uint64_t >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.UInt64>::get_MaxClampValue() */, __this);
		int32_t L_5;
		L_5 = UInt64_CompareTo_m1292E47C1FE2A1FC5BC5E6E2EB9C1FCDCEFE7745((&___0_value), L_4, NULL);
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// return MaxClampValue;
		uint64_t L_7;
		L_7 = VirtualFuncInvoker0< uint64_t >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.UInt64>::get_MaxClampValue() */, __this);
		V_1 = L_7;
		goto IL_0042;
	}

IL_003d:
	{
		// return value;
		uint64_t L_8 = ___0_value;
		V_1 = L_8;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		uint64_t L_9 = V_1;
		return L_9;
	}
}
// System.Void ScriptableObjectArchitecture.ULongVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ULongVariable__ctor_m2D716744FCF6381CCCFEC8AB850778F29D49910F (ULongVariable_tD7CF88ECC9DE6573D0A8B1B8E697635ED166DA81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_m2E0843EEFB79D294CD41C935FA91BAAD0471841B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_m2E0843EEFB79D294CD41C935FA91BAAD0471841B(__this, BaseVariable_2__ctor_m2E0843EEFB79D294CD41C935FA91BAAD0471841B_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.UShortEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UShortEvent__ctor_m4BD8E2CF7DD24ED7EB6A2F7028018E0EE1E16719 (UShortEvent_t1EC54C8B6BEC718046233ECA48C27B93EF04BCF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m89FB371E95EF8A989F257539389EE368643EC708_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m89FB371E95EF8A989F257539389EE368643EC708(__this, UnityEvent_1__ctor_m89FB371E95EF8A989F257539389EE368643EC708_RuntimeMethod_var);
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
// System.Boolean ScriptableObjectArchitecture.UShortVariable::get_Clampable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UShortVariable_get_Clampable_mBF031E52F3E4B9EFF1AD1E7BF69FA7F0FA400F5B (UShortVariable_tC6BA1B9071C758A9749549809AD4C2D84CBCB53C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public override bool Clampable { get { return true; } }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// public override bool Clampable { get { return true; } }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.UInt16 ScriptableObjectArchitecture.UShortVariable::ClampValue(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UShortVariable_ClampValue_m840C12E85EFD9403076DAA2C610EF0CB616948D8 (UShortVariable_tC6BA1B9071C758A9749549809AD4C2D84CBCB53C* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint16_t V_1 = 0;
	bool V_2 = false;
	{
		// if (value.CompareTo(MinClampValue) < 0)
		uint16_t L_0;
		L_0 = VirtualFuncInvoker0< uint16_t >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.UInt16>::get_MinClampValue() */, __this);
		int32_t L_1;
		L_1 = UInt16_CompareTo_m73A3F7183597E4CFBCB8A98A696B4C3DFEDF0845((&___0_value), L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return MinClampValue;
		uint16_t L_3;
		L_3 = VirtualFuncInvoker0< uint16_t >::Invoke(20 /* T ScriptableObjectArchitecture.BaseVariable`1<System.UInt16>::get_MinClampValue() */, __this);
		V_1 = L_3;
		goto IL_0042;
	}

IL_001f:
	{
		// else if (value.CompareTo(MaxClampValue) > 0)
		uint16_t L_4;
		L_4 = VirtualFuncInvoker0< uint16_t >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.UInt16>::get_MaxClampValue() */, __this);
		int32_t L_5;
		L_5 = UInt16_CompareTo_m73A3F7183597E4CFBCB8A98A696B4C3DFEDF0845((&___0_value), L_4, NULL);
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// return MaxClampValue;
		uint16_t L_7;
		L_7 = VirtualFuncInvoker0< uint16_t >::Invoke(21 /* T ScriptableObjectArchitecture.BaseVariable`1<System.UInt16>::get_MaxClampValue() */, __this);
		V_1 = L_7;
		goto IL_0042;
	}

IL_003d:
	{
		// return value;
		uint16_t L_8 = ___0_value;
		V_1 = L_8;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		uint16_t L_9 = V_1;
		return L_9;
	}
}
// System.Void ScriptableObjectArchitecture.UShortVariable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UShortVariable__ctor_m2502F766A387DBD559CB363B5792FFA2CB04D19D (UShortVariable_tC6BA1B9071C758A9749549809AD4C2D84CBCB53C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_mCF706170C36A8BAAF3999E88766E271736FE5BB1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_mCF706170C36A8BAAF3999E88766E271736FE5BB1(__this, BaseVariable_2__ctor_mCF706170C36A8BAAF3999E88766E271736FE5BB1_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector2Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Event__ctor_m1AE3B63C175D132F0B0DB39481282E856707D916 (Vector2Event_t718E0878AE1476B25FE6BE2343F3C32E0747E3BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D(__this, UnityEvent_1__ctor_m75F2CB288BDA04F9CA6542CCC40CC2CFE442FB0D_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector2Variable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Variable__ctor_m5CA4E9B32C78A4BEB2F079FC0E85F553ED72E66E (Vector2Variable_t46FE876F12DFF5E9D91984CB18904583B408A26B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_m1E99A3D5FEB51293C3EEB40EE52DE24BEC4865B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_m1E99A3D5FEB51293C3EEB40EE52DE24BEC4865B6(__this, BaseVariable_2__ctor_m1E99A3D5FEB51293C3EEB40EE52DE24BEC4865B6_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector3Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Event__ctor_m1D5182F7F4011B29678EE1B517BFDC6C885EA50A (Vector3Event_t0CD4C6E3DECAA6EE3FCF2CFB58CA78BACB2EA1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176(__this, UnityEvent_1__ctor_mFBEA4DDF9146FCAD598BA4AA2B11A247D9351176_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector3Variable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Variable__ctor_m7523F68C8A48FD700A6EC9DC0A94D17D323908B6 (Vector3Variable_t8E35BC8BDDBF5FF92B26B7D2C26F28CA27B1BEE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_mE902C29A2B4F9F1CB9F4A43BD753E3FB2119BDA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_mE902C29A2B4F9F1CB9F4A43BD753E3FB2119BDA7(__this, BaseVariable_2__ctor_mE902C29A2B4F9F1CB9F4A43BD753E3FB2119BDA7_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector4Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4Event__ctor_m9369C43945D5900429776911EE7751F3A969F00A (Vector4Event_t85EDBEF9DBDC30A24FD803E2349ECA9FF73C0328* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m72E5E9F77D48BEAC99A59F585626E00FE0DE9E52_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m72E5E9F77D48BEAC99A59F585626E00FE0DE9E52(__this, UnityEvent_1__ctor_m72E5E9F77D48BEAC99A59F585626E00FE0DE9E52_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Vector4Variable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4Variable__ctor_mE3BDCABD8CEA75FFADE33E3E95D16069C2F05A2D (Vector4Variable_tBC2CA6996A102415C9A87A4A378C75A0CD2D68BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVariable_2__ctor_mCB5D5F2D0546666A3479F1E93F72C7348FFEE93E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVariable_2__ctor_mCB5D5F2D0546666A3479F1E93F72C7348FFEE93E(__this, BaseVariable_2__ctor_mCB5D5F2D0546666A3479F1E93F72C7348FFEE93E_RuntimeMethod_var);
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
// System.Void ScriptableObjectArchitecture.Examples.CollectionCountDisplayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionCountDisplayer_Update_m24CCEF8825918426859088F5A58AD9B185529EA2 (CollectionCountDisplayer_t06DD005995A1E61037533220BA8DE6E36D547F7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _textTarget.text = string.Format(_textFormat, _setTarget.Count);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____textTarget_4;
		String_t* L_1 = __this->____textFormat_6;
		BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1* L_2 = __this->____setTarget_5;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BaseCollection_get_Count_m6704F8C15E0DA0228E53C6A7C86EB1E4DCC275B4(L_2, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_1, L_5, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_6);
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.Examples.CollectionCountDisplayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionCountDisplayer__ctor_mF81FE2C12B49A14D8601D98C19D0E332ACB99ABF (CollectionCountDisplayer_t06DD005995A1E61037533220BA8DE6E36D547F7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DEB37B5B6F59B92978EA53F8472A2EE83F04FF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Text _textTarget = default(Text);
		__this->____textTarget_4 = (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____textTarget_4), (void*)(Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)NULL);
		// private BaseCollection _setTarget = default(BaseCollection);
		__this->____setTarget_5 = (BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____setTarget_5), (void*)(BaseCollection_t4B3860668F3D7647FCD6A5A502A69BE07429A1C1*)NULL);
		// private string _textFormat = "There are {0} things.";
		__this->____textFormat_6 = _stringLiteral3DEB37B5B6F59B92978EA53F8472A2EE83F04FF3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____textFormat_6), (void*)_stringLiteral3DEB37B5B6F59B92978EA53F8472A2EE83F04FF3);
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
// System.Void ScriptableObjectArchitecture.Examples.DamageDealer::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDealer_OnTriggerEnter_m9871FE84053E9E8D38C569F956CCA30A00078FC3 (DamageDealer_t3CBE22A92F8B74E798381E22B3C57A7ABAD30BE2* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98_m061CC7A8DED0C57AF6EF4BD52466243BE1070110_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98* V_0 = NULL;
	bool V_1 = false;
	{
		// UnitHealth targetHealth = other.gameObject.GetComponent<UnitHealth>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		UnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98* L_2;
		L_2 = GameObject_GetComponent_TisUnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98_m061CC7A8DED0C57AF6EF4BD52466243BE1070110(L_1, GameObject_GetComponent_TisUnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98_m061CC7A8DED0C57AF6EF4BD52466243BE1070110_RuntimeMethod_var);
		V_0 = L_2;
		// if (targetHealth != null)
		UnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		// DealDamage(targetHealth);
		UnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98* L_6 = V_0;
		VirtualActionInvoker1< UnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98* >::Invoke(4 /* System.Void ScriptableObjectArchitecture.Examples.DamageDealer::DealDamage(ScriptableObjectArchitecture.Examples.UnitHealth) */, __this, L_6);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.Examples.DamageDealer::DealDamage(ScriptableObjectArchitecture.Examples.UnitHealth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDealer_DealDamage_mEDB6501DB06E2F3FF43C2DC07D19A604DB9518E5 (DamageDealer_t3CBE22A92F8B74E798381E22B3C57A7ABAD30BE2* __this, UnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2_set_Value_m2602A4E2613A195B3A5DF620B2C85E87458214B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target.Health.Value -= _damageAmount.Value;
		UnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98* L_0 = ___0_target;
		NullCheck(L_0);
		FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* L_1 = L_0->___Health_4;
		FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* L_2 = L_1;
		NullCheck(L_2);
		float L_3;
		L_3 = BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E(L_2, BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E_RuntimeMethod_var);
		FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* L_4 = __this->____damageAmount_4;
		NullCheck(L_4);
		float L_5;
		L_5 = BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E(L_4, BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E_RuntimeMethod_var);
		NullCheck(L_2);
		BaseReference_2_set_Value_m2602A4E2613A195B3A5DF620B2C85E87458214B6(L_2, ((float)il2cpp_codegen_subtract(L_3, L_5)), BaseReference_2_set_Value_m2602A4E2613A195B3A5DF620B2C85E87458214B6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.Examples.DamageDealer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDealer__ctor_m949876D6F3CBD4636B2016D089704CC35C312277 (DamageDealer_t3CBE22A92F8B74E798381E22B3C57A7ABAD30BE2* __this, const RuntimeMethod* method) 
{
	{
		// private FloatReference _damageAmount = default(FloatReference);
		__this->____damageAmount_4 = (FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____damageAmount_4), (void*)(FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA*)NULL);
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
// System.Void ScriptableObjectArchitecture.Examples.DamageDealerWithEvent::DealDamage(ScriptableObjectArchitecture.Examples.UnitHealth)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDealerWithEvent_DealDamage_m24829B9693D89D2845C2BC9AB72FBA0A2C8036CA (DamageDealerWithEvent_t880ED59A4E0D6601A33A2BCFA4189C0DF2DF9FC0* __this, UnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98* ___0_target, const RuntimeMethod* method) 
{
	{
		// base.DealDamage(target);
		UnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98* L_0 = ___0_target;
		DamageDealer_DealDamage_mEDB6501DB06E2F3FF43C2DC07D19A604DB9518E5(__this, L_0, NULL);
		// _onDamagedEvent.Raise();
		GameEvent_t65A32CE97E4D95E608D0EED1BADF578B3D75817E* L_1 = __this->____onDamagedEvent_5;
		NullCheck(L_1);
		GameEventBase_Raise_mDE0BFFA1CE0DA2EC14011CE4179DE80D5313527D(L_1, NULL);
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.Examples.DamageDealerWithEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageDealerWithEvent__ctor_m19997E766D8178FB72633F81B65CA3E5218FC29E (DamageDealerWithEvent_t880ED59A4E0D6601A33A2BCFA4189C0DF2DF9FC0* __this, const RuntimeMethod* method) 
{
	{
		// private GameEvent _onDamagedEvent = default(GameEvent);
		__this->____onDamagedEvent_5 = (GameEvent_t65A32CE97E4D95E608D0EED1BADF578B3D75817E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onDamagedEvent_5), (void*)(GameEvent_t65A32CE97E4D95E608D0EED1BADF578B3D75817E*)NULL);
		DamageDealer__ctor_m949876D6F3CBD4636B2016D089704CC35C312277(__this, NULL);
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
// System.Void ScriptableObjectArchitecture.Examples.Disabler::DisableRandom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Disabler_DisableRandom_m07127D3A816D04D344B0BE7D1439ADA50276BC39 (Disabler_t65314708659D5B8508C1CA82E23C6EFA25470550* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_get_Item_m2A002736E97F5AF2AFAF4C6319D71D77E93680D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// if (_targetSet.Count > 0)
		GameObjectCollection_t9C76F2B578978C3D59931E99C258454EC1EAAF2C* L_0 = __this->____targetSet_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BaseCollection_get_Count_m6704F8C15E0DA0228E53C6A7C86EB1E4DCC275B4(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// int index = Random.Range(0, _targetSet.Count);
		GameObjectCollection_t9C76F2B578978C3D59931E99C258454EC1EAAF2C* L_3 = __this->____targetSet_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = BaseCollection_get_Count_m6704F8C15E0DA0228E53C6A7C86EB1E4DCC275B4(L_3, NULL);
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_4, NULL);
		V_1 = L_5;
		// GameObject objToDisable = _targetSet[index];
		GameObjectCollection_t9C76F2B578978C3D59931E99C258454EC1EAAF2C* L_6 = __this->____targetSet_4;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Collection_1_get_Item_m2A002736E97F5AF2AFAF4C6319D71D77E93680D0(L_6, L_7, Collection_1_get_Item_m2A002736E97F5AF2AFAF4C6319D71D77E93680D0_RuntimeMethod_var);
		V_2 = L_8;
		// objToDisable.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_2;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.Examples.Disabler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Disabler__ctor_m862065882A5FE911C4BADB666858E160256218FE (Disabler_t65314708659D5B8508C1CA82E23C6EFA25470550* __this, const RuntimeMethod* method) 
{
	{
		// private GameObjectCollection _targetSet = default(GameObjectCollection);
		__this->____targetSet_4 = (GameObjectCollection_t9C76F2B578978C3D59931E99C258454EC1EAAF2C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____targetSet_4), (void*)(GameObjectCollection_t9C76F2B578978C3D59931E99C258454EC1EAAF2C*)NULL);
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
// System.Void ScriptableObjectArchitecture.Examples.ImageFillSetter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageFillSetter_Update_mD4990A5F4335D1546DD751CC2011A73A59D5ACD7 (ImageFillSetter_t9375940E434A0D4B33FE297F27C75A9D0E327FE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _imageTarget.fillAmount = Mathf.Clamp01(_variable.Value / _maxValue.Value);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____imageTarget_6;
		FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* L_1 = __this->____variable_4;
		NullCheck(L_1);
		float L_2;
		L_2 = BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E(L_1, BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E_RuntimeMethod_var);
		FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* L_3 = __this->____maxValue_5;
		NullCheck(L_3);
		float L_4;
		L_4 = BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E(L_3, BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E_RuntimeMethod_var);
		float L_5;
		L_5 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(L_2/L_4)), NULL);
		NullCheck(L_0);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.Examples.ImageFillSetter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageFillSetter__ctor_mCAC3374C27EAD12180D9DC3FD26A8754D9449076 (ImageFillSetter_t9375940E434A0D4B33FE297F27C75A9D0E327FE9* __this, const RuntimeMethod* method) 
{
	{
		// private FloatReference _variable = default(FloatReference);
		__this->____variable_4 = (FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____variable_4), (void*)(FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA*)NULL);
		// private FloatReference _maxValue = default(FloatReference);
		__this->____maxValue_5 = (FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____maxValue_5), (void*)(FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA*)NULL);
		// private Image _imageTarget = default(Image);
		__this->____imageTarget_6 = (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____imageTarget_6), (void*)(Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL);
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
// System.Void ScriptableObjectArchitecture.Examples.KeyboardMover::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardMover_Update_m0C3A358E8ADDD45A86B65F29CBD2092796164480 (KeyboardMover_t6C56E504C2A63CFA0444A2A84D158AE36EABF107* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow))
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)119), NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)273), NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		// transform.position += Vector3.up * _moveSpeed.Value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* L_7 = __this->____moveSpeed_4;
		NullCheck(L_7);
		float L_8;
		L_8 = BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E(L_7, BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_9, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_10, NULL);
	}

IL_0047:
	{
		// if (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow))
		bool L_11;
		L_11 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)115), NULL);
		if (L_11)
		{
			goto IL_005c;
		}
	}
	{
		bool L_12;
		L_12 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)274), NULL);
		G_B8_0 = ((int32_t)(L_12));
		goto IL_005d;
	}

IL_005c:
	{
		G_B8_0 = 1;
	}

IL_005d:
	{
		V_1 = (bool)G_B8_0;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_008d;
		}
	}
	{
		// transform.position += Vector3.down * _moveSpeed.Value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = L_14;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* L_18 = __this->____moveSpeed_4;
		NullCheck(L_18);
		float L_19;
		L_19 = BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E(L_18, BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_20, NULL);
		NullCheck(L_15);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_15, L_21, NULL);
	}

IL_008d:
	{
		// if (Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow))
		bool L_22;
		L_22 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)100), NULL);
		if (L_22)
		{
			goto IL_00a2;
		}
	}
	{
		bool L_23;
		L_23 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)275), NULL);
		G_B13_0 = ((int32_t)(L_23));
		goto IL_00a3;
	}

IL_00a2:
	{
		G_B13_0 = 1;
	}

IL_00a3:
	{
		V_2 = (bool)G_B13_0;
		bool L_24 = V_2;
		if (!L_24)
		{
			goto IL_00d3;
		}
	}
	{
		// transform.position += Vector3.right * _moveSpeed.Value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = L_25;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* L_29 = __this->____moveSpeed_4;
		NullCheck(L_29);
		float L_30;
		L_30 = BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E(L_29, BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_31, NULL);
		NullCheck(L_26);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_26, L_32, NULL);
	}

IL_00d3:
	{
		// if (Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
		bool L_33;
		L_33 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)97), NULL);
		if (L_33)
		{
			goto IL_00e8;
		}
	}
	{
		bool L_34;
		L_34 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)276), NULL);
		G_B18_0 = ((int32_t)(L_34));
		goto IL_00e9;
	}

IL_00e8:
	{
		G_B18_0 = 1;
	}

IL_00e9:
	{
		V_3 = (bool)G_B18_0;
		bool L_35 = V_3;
		if (!L_35)
		{
			goto IL_0119;
		}
	}
	{
		// transform.position += Vector3.left * _moveSpeed.Value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = L_36;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* L_40 = __this->____moveSpeed_4;
		NullCheck(L_40);
		float L_41;
		L_41 = BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E(L_40, BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_39, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_38, L_42, NULL);
		NullCheck(L_37);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_37, L_43, NULL);
	}

IL_0119:
	{
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.Examples.KeyboardMover::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyboardMover__ctor_m9CCAB797B4656676AF53C2B8635075F2AFF59306 (KeyboardMover_t6C56E504C2A63CFA0444A2A84D158AE36EABF107* __this, const RuntimeMethod* method) 
{
	{
		// private FloatReference _moveSpeed = default(FloatReference);
		__this->____moveSpeed_4 = (FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____moveSpeed_4), (void*)(FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA*)NULL);
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
// System.Void ScriptableObjectArchitecture.Examples.ObjectAdder::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectAdder_OnEnable_m3DEA0FE5070E256CEA0CCA17E63ED0AA18F7C949 (ObjectAdder_tAAFA230FFFDF028DE8AF9FA5DBDD70C49D95B30A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_Add_m2EAF0C430C378399FB2CA1DA48B72AAC19B6FA93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _targetCollection.Add(gameObject);
		GameObjectCollection_t9C76F2B578978C3D59931E99C258454EC1EAAF2C* L_0 = __this->____targetCollection_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Collection_1_Add_m2EAF0C430C378399FB2CA1DA48B72AAC19B6FA93(L_0, L_1, Collection_1_Add_m2EAF0C430C378399FB2CA1DA48B72AAC19B6FA93_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.Examples.ObjectAdder::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectAdder_OnDisable_mF704B7A23AE7C27CBC6540F01CF6D997561ADF94 (ObjectAdder_tAAFA230FFFDF028DE8AF9FA5DBDD70C49D95B30A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_Remove_m4DC756515010B1616F1668CE608D9F1D28300A2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _targetCollection.Remove(gameObject);
		GameObjectCollection_t9C76F2B578978C3D59931E99C258454EC1EAAF2C* L_0 = __this->____targetCollection_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Collection_1_Remove_m4DC756515010B1616F1668CE608D9F1D28300A2D(L_0, L_1, Collection_1_Remove_m4DC756515010B1616F1668CE608D9F1D28300A2D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.Examples.ObjectAdder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectAdder__ctor_m0514D4BA982B2547F007664C38B287CE780C3DF6 (ObjectAdder_tAAFA230FFFDF028DE8AF9FA5DBDD70C49D95B30A* __this, const RuntimeMethod* method) 
{
	{
		// private GameObjectCollection _targetCollection = default(GameObjectCollection);
		__this->____targetCollection_4 = (GameObjectCollection_t9C76F2B578978C3D59931E99C258454EC1EAAF2C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____targetCollection_4), (void*)(GameObjectCollection_t9C76F2B578978C3D59931E99C258454EC1EAAF2C*)NULL);
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
// System.Void ScriptableObjectArchitecture.Examples.UnitHealth::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitHealth_Start_m33EC8CC81D36402CB2BE347CA293386FDB726776 (UnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseReference_2_set_Value_m2602A4E2613A195B3A5DF620B2C85E87458214B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_resetOnStartup)
		bool L_0 = __this->____resetOnStartup_5;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// Health.Value = _startingHealth.Value;
		FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* L_2 = __this->___Health_4;
		FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA* L_3 = __this->____startingHealth_6;
		NullCheck(L_3);
		float L_4;
		L_4 = BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E(L_3, BaseReference_2_get_Value_m60F887C724252C51346073224D961C5ED7A2266E_RuntimeMethod_var);
		NullCheck(L_2);
		BaseReference_2_set_Value_m2602A4E2613A195B3A5DF620B2C85E87458214B6(L_2, L_4, BaseReference_2_set_Value_m2602A4E2613A195B3A5DF620B2C85E87458214B6_RuntimeMethod_var);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void ScriptableObjectArchitecture.Examples.UnitHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitHealth__ctor_m2EAA13E4DAB69225BFA4E9380582D3FAD19E4821 (UnitHealth_tB00890F0AC1DC91F8F0A4DDAE7BA26FDCFB7AA98* __this, const RuntimeMethod* method) 
{
	{
		// private bool _resetOnStartup = true;
		__this->____resetOnStartup_5 = (bool)1;
		// private FloatReference _startingHealth = default(FloatReference);
		__this->____startingHealth_6 = (FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____startingHealth_6), (void*)(FloatReference_t0223D9CCE3AEF8DDECDD1A9FBD1C7F59EB21DBFA*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
