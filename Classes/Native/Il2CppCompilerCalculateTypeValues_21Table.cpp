#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// GameFacade
struct GameFacade_t4180906540;
// System.Collections.Generic.List`1<UIPanelInfo>
struct List_1_t4126386396;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<Common.ActionCode,BaseRequest>
struct Dictionary_2_t1892831430;
// System.Void
struct Void_t1841601450;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Net.Sockets.Socket
struct Socket_t3821512045;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Transform
struct Transform_t3275118058;
// FollowTarget
struct FollowTarget_t2817477884;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// RoleData
struct RoleData_t2970593024;
// Assets.Scripts.Model.UserData
struct UserData_t4018655545;
// System.Collections.Generic.Dictionary`2<Common.RoleType,RoleData>
struct Dictionary_2_t2477433581;
// PlayerAttack
struct PlayerAttack_t1510648285;
// SyncRoleAttackRequest
struct SyncRoleAttackRequest_t2768771284;
// GameOverRequest
struct GameOverRequest_t2692618111;
// System.Collections.Generic.Dictionary`2<UIPanelType,System.String>
struct Dictionary_2_t2305905024;
// System.Collections.Generic.Dictionary`2<UIPanelType,BasePanel>
struct Dictionary_2_t819400224;
// System.Collections.Generic.Stack`1<BasePanel>
struct Stack_1_t1630443587;
// MessagePanel
struct MessagePanel_t1958872291;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// UIManager
struct UIManager_t2519183485;
// UnityEngine.Shader
struct Shader_t2430389951;
// UnityEngine.Material
struct Material_t193706927;
// CameraManager
struct CameraManager_t2379859346;
// AudioManager
struct AudioManager_t4222704959;
// PlayerManager
struct PlayerManager_t1596653588;
// RequestManager
struct RequestManager_t755409356;
// ClientManager
struct ClientManager_t4009004882;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// SyncRoleShootRequest
struct SyncRoleShootRequest_t287347991;
// UnityEngine.UI.Text
struct Text_t356221433;
// LeaveRoomRequest
struct LeaveRoomRequest_t147230195;
// StartGameRequest
struct StartGameRequest_t2744624181;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// ShowRoomRequest
struct ShowRoomRequest_t4000912775;
// CreateRoomRequest
struct CreateRoomRequest_t3704453372;
// JoinRoomRequest
struct JoinRoomRequest_t53532236;
// System.Collections.Generic.List`1<Assets.Scripts.Model.UserData>
struct List_1_t3387776677;
// RegisterPanel
struct RegisterPanel_t852150773;
// GamePanel
struct GamePanel_t539122112;
// RoomListPanel
struct RoomListPanel_t2151956597;
// RoomPanel
struct RoomPanel_t529970467;
// LoginPanel
struct LoginPanel_t257791075;
// PlayerHealth
struct PlayerHealth_t2894595013;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// LoginRequest
struct LoginRequest_t2273172322;
// QuitBattleRequest
struct QuitBattleRequest_t2423038290;
// RegisterRequest
struct RegisterRequest_t698226714;
// PlayerMove
struct PlayerMove_t195622780;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef BASEMANAGER_T2372802720_H
#define BASEMANAGER_T2372802720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseManager
struct  BaseManager_t2372802720  : public RuntimeObject
{
public:
	// GameFacade BaseManager::facade
	GameFacade_t4180906540 * ___facade_0;

public:
	inline static int32_t get_offset_of_facade_0() { return static_cast<int32_t>(offsetof(BaseManager_t2372802720, ___facade_0)); }
	inline GameFacade_t4180906540 * get_facade_0() const { return ___facade_0; }
	inline GameFacade_t4180906540 ** get_address_of_facade_0() { return &___facade_0; }
	inline void set_facade_0(GameFacade_t4180906540 * value)
	{
		___facade_0 = value;
		Il2CppCodeGenWriteBarrier((&___facade_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMANAGER_T2372802720_H
#ifndef UIPANELTYPEJSON_T4047001564_H
#define UIPANELTYPEJSON_T4047001564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager/UIPanelTypeJson
struct  UIPanelTypeJson_t4047001564  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UIPanelInfo> UIManager/UIPanelTypeJson::panelInfo
	List_1_t4126386396 * ___panelInfo_0;

public:
	inline static int32_t get_offset_of_panelInfo_0() { return static_cast<int32_t>(offsetof(UIPanelTypeJson_t4047001564, ___panelInfo_0)); }
	inline List_1_t4126386396 * get_panelInfo_0() const { return ___panelInfo_0; }
	inline List_1_t4126386396 ** get_address_of_panelInfo_0() { return &___panelInfo_0; }
	inline void set_panelInfo_0(List_1_t4126386396 * value)
	{
		___panelInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___panelInfo_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIPANELTYPEJSON_T4047001564_H
#ifndef DICTIONARYEXTENSION_T2699231967_H
#define DICTIONARYEXTENSION_T2699231967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DictionaryExtension
struct  DictionaryExtension_t2699231967  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYEXTENSION_T2699231967_H
#ifndef MESSAGE_T3927391693_H
#define MESSAGE_T3927391693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Message
struct  Message_t3927391693  : public RuntimeObject
{
public:

public:
};

struct Message_t3927391693_StaticFields
{
public:
	// System.Byte[] Message::data
	ByteU5BU5D_t3397334013* ___data_0;
	// System.Int32 Message::startIndex
	int32_t ___startIndex_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Message_t3927391693_StaticFields, ___data_0)); }
	inline ByteU5BU5D_t3397334013* get_data_0() const { return ___data_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ByteU5BU5D_t3397334013* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}

	inline static int32_t get_offset_of_startIndex_1() { return static_cast<int32_t>(offsetof(Message_t3927391693_StaticFields, ___startIndex_1)); }
	inline int32_t get_startIndex_1() const { return ___startIndex_1; }
	inline int32_t* get_address_of_startIndex_1() { return &___startIndex_1; }
	inline void set_startIndex_1(int32_t value)
	{
		___startIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGE_T3927391693_H
#ifndef USERDATA_T4018655545_H
#define USERDATA_T4018655545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Assets.Scripts.Model.UserData
struct  UserData_t4018655545  : public RuntimeObject
{
public:
	// System.Int32 Assets.Scripts.Model.UserData::<Userid>k__BackingField
	int32_t ___U3CUseridU3Ek__BackingField_0;
	// System.String Assets.Scripts.Model.UserData::<Username>k__BackingField
	String_t* ___U3CUsernameU3Ek__BackingField_1;
	// System.Int32 Assets.Scripts.Model.UserData::<Totalcount>k__BackingField
	int32_t ___U3CTotalcountU3Ek__BackingField_2;
	// System.Int32 Assets.Scripts.Model.UserData::<Wincount>k__BackingField
	int32_t ___U3CWincountU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CUseridU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UserData_t4018655545, ___U3CUseridU3Ek__BackingField_0)); }
	inline int32_t get_U3CUseridU3Ek__BackingField_0() const { return ___U3CUseridU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CUseridU3Ek__BackingField_0() { return &___U3CUseridU3Ek__BackingField_0; }
	inline void set_U3CUseridU3Ek__BackingField_0(int32_t value)
	{
		___U3CUseridU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CUsernameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UserData_t4018655545, ___U3CUsernameU3Ek__BackingField_1)); }
	inline String_t* get_U3CUsernameU3Ek__BackingField_1() const { return ___U3CUsernameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CUsernameU3Ek__BackingField_1() { return &___U3CUsernameU3Ek__BackingField_1; }
	inline void set_U3CUsernameU3Ek__BackingField_1(String_t* value)
	{
		___U3CUsernameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUsernameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CTotalcountU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UserData_t4018655545, ___U3CTotalcountU3Ek__BackingField_2)); }
	inline int32_t get_U3CTotalcountU3Ek__BackingField_2() const { return ___U3CTotalcountU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTotalcountU3Ek__BackingField_2() { return &___U3CTotalcountU3Ek__BackingField_2; }
	inline void set_U3CTotalcountU3Ek__BackingField_2(int32_t value)
	{
		___U3CTotalcountU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CWincountU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UserData_t4018655545, ___U3CWincountU3Ek__BackingField_3)); }
	inline int32_t get_U3CWincountU3Ek__BackingField_3() const { return ___U3CWincountU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CWincountU3Ek__BackingField_3() { return &___U3CWincountU3Ek__BackingField_3; }
	inline void set_U3CWincountU3Ek__BackingField_3(int32_t value)
	{
		___U3CWincountU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERDATA_T4018655545_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef VECTOR2_T2243707579_H
#define VECTOR2_T2243707579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2243707579 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2243707579_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2243707579  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2243707579  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2243707579  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2243707579  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2243707579  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2243707579  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2243707579  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2243707579  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2243707579  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2243707579 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2243707579  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___oneVector_3)); }
	inline Vector2_t2243707579  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2243707579 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2243707579  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___upVector_4)); }
	inline Vector2_t2243707579  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2243707579 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2243707579  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___downVector_5)); }
	inline Vector2_t2243707579  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2243707579 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2243707579  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___leftVector_6)); }
	inline Vector2_t2243707579  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2243707579 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2243707579  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___rightVector_7)); }
	inline Vector2_t2243707579  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2243707579 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2243707579  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2243707579  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2243707579 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2243707579  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2243707579  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2243707579 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2243707579  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2243707579_H
#ifndef VECTOR3_T2243707580_H
#define VECTOR3_T2243707580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2243707580 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2243707580_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2243707580  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2243707580  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2243707580  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2243707580  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2243707580  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2243707580  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2243707580  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2243707580  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2243707580  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2243707580  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2243707580  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2243707580 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2243707580  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___oneVector_5)); }
	inline Vector3_t2243707580  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2243707580 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2243707580  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___upVector_6)); }
	inline Vector3_t2243707580  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2243707580 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2243707580  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___downVector_7)); }
	inline Vector3_t2243707580  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2243707580 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2243707580  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___leftVector_8)); }
	inline Vector3_t2243707580  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2243707580 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2243707580  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___rightVector_9)); }
	inline Vector3_t2243707580  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2243707580 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2243707580  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2243707580  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2243707580 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2243707580  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___backVector_11)); }
	inline Vector3_t2243707580  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2243707580 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2243707580  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2243707580  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2243707580 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2243707580  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2243707580  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2243707580 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2243707580  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2243707580_H
#ifndef REQUESTMANAGER_T755409356_H
#define REQUESTMANAGER_T755409356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RequestManager
struct  RequestManager_t755409356  : public BaseManager_t2372802720
{
public:
	// System.Collections.Generic.Dictionary`2<Common.ActionCode,BaseRequest> RequestManager::requests
	Dictionary_2_t1892831430 * ___requests_1;

public:
	inline static int32_t get_offset_of_requests_1() { return static_cast<int32_t>(offsetof(RequestManager_t755409356, ___requests_1)); }
	inline Dictionary_2_t1892831430 * get_requests_1() const { return ___requests_1; }
	inline Dictionary_2_t1892831430 ** get_address_of_requests_1() { return &___requests_1; }
	inline void set_requests_1(Dictionary_2_t1892831430 * value)
	{
		___requests_1 = value;
		Il2CppCodeGenWriteBarrier((&___requests_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTMANAGER_T755409356_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef AUDIOMANAGER_T4222704959_H
#define AUDIOMANAGER_T4222704959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioManager
struct  AudioManager_t4222704959  : public BaseManager_t2372802720
{
public:
	// UnityEngine.AudioSource AudioManager::bgAudioSource
	AudioSource_t1135106623 * ___bgAudioSource_9;
	// UnityEngine.AudioSource AudioManager::soundAudioSource
	AudioSource_t1135106623 * ___soundAudioSource_10;

public:
	inline static int32_t get_offset_of_bgAudioSource_9() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959, ___bgAudioSource_9)); }
	inline AudioSource_t1135106623 * get_bgAudioSource_9() const { return ___bgAudioSource_9; }
	inline AudioSource_t1135106623 ** get_address_of_bgAudioSource_9() { return &___bgAudioSource_9; }
	inline void set_bgAudioSource_9(AudioSource_t1135106623 * value)
	{
		___bgAudioSource_9 = value;
		Il2CppCodeGenWriteBarrier((&___bgAudioSource_9), value);
	}

	inline static int32_t get_offset_of_soundAudioSource_10() { return static_cast<int32_t>(offsetof(AudioManager_t4222704959, ___soundAudioSource_10)); }
	inline AudioSource_t1135106623 * get_soundAudioSource_10() const { return ___soundAudioSource_10; }
	inline AudioSource_t1135106623 ** get_address_of_soundAudioSource_10() { return &___soundAudioSource_10; }
	inline void set_soundAudioSource_10(AudioSource_t1135106623 * value)
	{
		___soundAudioSource_10 = value;
		Il2CppCodeGenWriteBarrier((&___soundAudioSource_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOMANAGER_T4222704959_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1328083999* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1328083999* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1328083999* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef CLIENTMANAGER_T4009004882_H
#define CLIENTMANAGER_T4009004882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ClientManager
struct  ClientManager_t4009004882  : public BaseManager_t2372802720
{
public:
	// System.Net.Sockets.Socket ClientManager::clientSocket
	Socket_t3821512045 * ___clientSocket_3;

public:
	inline static int32_t get_offset_of_clientSocket_3() { return static_cast<int32_t>(offsetof(ClientManager_t4009004882, ___clientSocket_3)); }
	inline Socket_t3821512045 * get_clientSocket_3() const { return ___clientSocket_3; }
	inline Socket_t3821512045 ** get_address_of_clientSocket_3() { return &___clientSocket_3; }
	inline void set_clientSocket_3(Socket_t3821512045 * value)
	{
		___clientSocket_3 = value;
		Il2CppCodeGenWriteBarrier((&___clientSocket_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTMANAGER_T4009004882_H
#ifndef UIPANELTYPE_T1329734852_H
#define UIPANELTYPE_T1329734852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPanelType
struct  UIPanelType_t1329734852 
{
public:
	// System.Int32 UIPanelType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UIPanelType_t1329734852, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIPANELTYPE_T1329734852_H
#ifndef ABERRATIONMODE_T3949418959_H
#define ABERRATIONMODE_T3949418959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode
struct  AberrationMode_t3949418959 
{
public:
	// System.Int32 UnityStandardAssets.ImageEffects.VignetteAndChromaticAberration/AberrationMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AberrationMode_t3949418959, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABERRATIONMODE_T3949418959_H
#ifndef RETURNCODE_T762471243_H
#define RETURNCODE_T762471243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Common.ReturnCode
struct  ReturnCode_t762471243 
{
public:
	// System.Int32 Common.ReturnCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReturnCode_t762471243, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RETURNCODE_T762471243_H
#ifndef OBJECT_T1021602117_H
#define OBJECT_T1021602117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1021602117  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021602117, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1021602117_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1021602117_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1021602117_H
#ifndef ACTIONCODE_T2512013651_H
#define ACTIONCODE_T2512013651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Common.ActionCode
struct  ActionCode_t2512013651 
{
public:
	// System.Int32 Common.ActionCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ActionCode_t2512013651, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIONCODE_T2512013651_H
#ifndef ROLETYPE_T3394558854_H
#define ROLETYPE_T3394558854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Common.RoleType
struct  RoleType_t3394558854 
{
public:
	// System.Int32 Common.RoleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RoleType_t3394558854, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROLETYPE_T3394558854_H
#ifndef REQUESTCODE_T4097313422_H
#define REQUESTCODE_T4097313422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Common.RequestCode
struct  RequestCode_t4097313422 
{
public:
	// System.Int32 Common.RequestCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RequestCode_t4097313422, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCODE_T4097313422_H
#ifndef CAMERAMANAGER_T2379859346_H
#define CAMERAMANAGER_T2379859346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraManager
struct  CameraManager_t2379859346  : public BaseManager_t2372802720
{
public:
	// UnityEngine.Animator CameraManager::cameraAnimator
	Animator_t69676727 * ___cameraAnimator_1;
	// UnityEngine.Transform CameraManager::cameraTrans
	Transform_t3275118058 * ___cameraTrans_2;
	// FollowTarget CameraManager::followTarget
	FollowTarget_t2817477884 * ___followTarget_3;
	// UnityEngine.Vector3 CameraManager::roamPosition
	Vector3_t2243707580  ___roamPosition_4;
	// UnityEngine.Vector3 CameraManager::roamRotation
	Vector3_t2243707580  ___roamRotation_5;

public:
	inline static int32_t get_offset_of_cameraAnimator_1() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ___cameraAnimator_1)); }
	inline Animator_t69676727 * get_cameraAnimator_1() const { return ___cameraAnimator_1; }
	inline Animator_t69676727 ** get_address_of_cameraAnimator_1() { return &___cameraAnimator_1; }
	inline void set_cameraAnimator_1(Animator_t69676727 * value)
	{
		___cameraAnimator_1 = value;
		Il2CppCodeGenWriteBarrier((&___cameraAnimator_1), value);
	}

	inline static int32_t get_offset_of_cameraTrans_2() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ___cameraTrans_2)); }
	inline Transform_t3275118058 * get_cameraTrans_2() const { return ___cameraTrans_2; }
	inline Transform_t3275118058 ** get_address_of_cameraTrans_2() { return &___cameraTrans_2; }
	inline void set_cameraTrans_2(Transform_t3275118058 * value)
	{
		___cameraTrans_2 = value;
		Il2CppCodeGenWriteBarrier((&___cameraTrans_2), value);
	}

	inline static int32_t get_offset_of_followTarget_3() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ___followTarget_3)); }
	inline FollowTarget_t2817477884 * get_followTarget_3() const { return ___followTarget_3; }
	inline FollowTarget_t2817477884 ** get_address_of_followTarget_3() { return &___followTarget_3; }
	inline void set_followTarget_3(FollowTarget_t2817477884 * value)
	{
		___followTarget_3 = value;
		Il2CppCodeGenWriteBarrier((&___followTarget_3), value);
	}

	inline static int32_t get_offset_of_roamPosition_4() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ___roamPosition_4)); }
	inline Vector3_t2243707580  get_roamPosition_4() const { return ___roamPosition_4; }
	inline Vector3_t2243707580 * get_address_of_roamPosition_4() { return &___roamPosition_4; }
	inline void set_roamPosition_4(Vector3_t2243707580  value)
	{
		___roamPosition_4 = value;
	}

	inline static int32_t get_offset_of_roamRotation_5() { return static_cast<int32_t>(offsetof(CameraManager_t2379859346, ___roamRotation_5)); }
	inline Vector3_t2243707580  get_roamRotation_5() const { return ___roamRotation_5; }
	inline Vector3_t2243707580 * get_address_of_roamRotation_5() { return &___roamRotation_5; }
	inline void set_roamRotation_5(Vector3_t2243707580  value)
	{
		___roamRotation_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAMANAGER_T2379859346_H
#ifndef PLAYERMANAGER_T1596653588_H
#define PLAYERMANAGER_T1596653588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerManager
struct  PlayerManager_t1596653588  : public BaseManager_t2372802720
{
public:
	// Common.RoleType PlayerManager::<CurrentRoleType>k__BackingField
	int32_t ___U3CCurrentRoleTypeU3Ek__BackingField_1;
	// UnityEngine.GameObject PlayerManager::<CurrentRole>k__BackingField
	GameObject_t1756533147 * ___U3CCurrentRoleU3Ek__BackingField_2;
	// UnityEngine.GameObject PlayerManager::remoteRole
	GameObject_t1756533147 * ___remoteRole_3;
	// RoleData PlayerManager::currentRoleData
	RoleData_t2970593024 * ___currentRoleData_4;
	// RoleData PlayerManager::remoteRoleData
	RoleData_t2970593024 * ___remoteRoleData_5;
	// Assets.Scripts.Model.UserData PlayerManager::userData
	UserData_t4018655545 * ___userData_6;
	// System.Collections.Generic.Dictionary`2<Common.RoleType,RoleData> PlayerManager::roleDatas
	Dictionary_2_t2477433581 * ___roleDatas_7;
	// UnityEngine.Transform PlayerManager::spawnPointBlue
	Transform_t3275118058 * ___spawnPointBlue_8;
	// UnityEngine.Transform PlayerManager::spawnPointRed
	Transform_t3275118058 * ___spawnPointRed_9;
	// PlayerAttack PlayerManager::playerAttack
	PlayerAttack_t1510648285 * ___playerAttack_10;
	// SyncRoleAttackRequest PlayerManager::syncRoleAttackRequest
	SyncRoleAttackRequest_t2768771284 * ___syncRoleAttackRequest_11;
	// GameOverRequest PlayerManager::gameOverRequest
	GameOverRequest_t2692618111 * ___gameOverRequest_12;

public:
	inline static int32_t get_offset_of_U3CCurrentRoleTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___U3CCurrentRoleTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CCurrentRoleTypeU3Ek__BackingField_1() const { return ___U3CCurrentRoleTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CCurrentRoleTypeU3Ek__BackingField_1() { return &___U3CCurrentRoleTypeU3Ek__BackingField_1; }
	inline void set_U3CCurrentRoleTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CCurrentRoleTypeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentRoleU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___U3CCurrentRoleU3Ek__BackingField_2)); }
	inline GameObject_t1756533147 * get_U3CCurrentRoleU3Ek__BackingField_2() const { return ___U3CCurrentRoleU3Ek__BackingField_2; }
	inline GameObject_t1756533147 ** get_address_of_U3CCurrentRoleU3Ek__BackingField_2() { return &___U3CCurrentRoleU3Ek__BackingField_2; }
	inline void set_U3CCurrentRoleU3Ek__BackingField_2(GameObject_t1756533147 * value)
	{
		___U3CCurrentRoleU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentRoleU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_remoteRole_3() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___remoteRole_3)); }
	inline GameObject_t1756533147 * get_remoteRole_3() const { return ___remoteRole_3; }
	inline GameObject_t1756533147 ** get_address_of_remoteRole_3() { return &___remoteRole_3; }
	inline void set_remoteRole_3(GameObject_t1756533147 * value)
	{
		___remoteRole_3 = value;
		Il2CppCodeGenWriteBarrier((&___remoteRole_3), value);
	}

	inline static int32_t get_offset_of_currentRoleData_4() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___currentRoleData_4)); }
	inline RoleData_t2970593024 * get_currentRoleData_4() const { return ___currentRoleData_4; }
	inline RoleData_t2970593024 ** get_address_of_currentRoleData_4() { return &___currentRoleData_4; }
	inline void set_currentRoleData_4(RoleData_t2970593024 * value)
	{
		___currentRoleData_4 = value;
		Il2CppCodeGenWriteBarrier((&___currentRoleData_4), value);
	}

	inline static int32_t get_offset_of_remoteRoleData_5() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___remoteRoleData_5)); }
	inline RoleData_t2970593024 * get_remoteRoleData_5() const { return ___remoteRoleData_5; }
	inline RoleData_t2970593024 ** get_address_of_remoteRoleData_5() { return &___remoteRoleData_5; }
	inline void set_remoteRoleData_5(RoleData_t2970593024 * value)
	{
		___remoteRoleData_5 = value;
		Il2CppCodeGenWriteBarrier((&___remoteRoleData_5), value);
	}

	inline static int32_t get_offset_of_userData_6() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___userData_6)); }
	inline UserData_t4018655545 * get_userData_6() const { return ___userData_6; }
	inline UserData_t4018655545 ** get_address_of_userData_6() { return &___userData_6; }
	inline void set_userData_6(UserData_t4018655545 * value)
	{
		___userData_6 = value;
		Il2CppCodeGenWriteBarrier((&___userData_6), value);
	}

	inline static int32_t get_offset_of_roleDatas_7() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___roleDatas_7)); }
	inline Dictionary_2_t2477433581 * get_roleDatas_7() const { return ___roleDatas_7; }
	inline Dictionary_2_t2477433581 ** get_address_of_roleDatas_7() { return &___roleDatas_7; }
	inline void set_roleDatas_7(Dictionary_2_t2477433581 * value)
	{
		___roleDatas_7 = value;
		Il2CppCodeGenWriteBarrier((&___roleDatas_7), value);
	}

	inline static int32_t get_offset_of_spawnPointBlue_8() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___spawnPointBlue_8)); }
	inline Transform_t3275118058 * get_spawnPointBlue_8() const { return ___spawnPointBlue_8; }
	inline Transform_t3275118058 ** get_address_of_spawnPointBlue_8() { return &___spawnPointBlue_8; }
	inline void set_spawnPointBlue_8(Transform_t3275118058 * value)
	{
		___spawnPointBlue_8 = value;
		Il2CppCodeGenWriteBarrier((&___spawnPointBlue_8), value);
	}

	inline static int32_t get_offset_of_spawnPointRed_9() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___spawnPointRed_9)); }
	inline Transform_t3275118058 * get_spawnPointRed_9() const { return ___spawnPointRed_9; }
	inline Transform_t3275118058 ** get_address_of_spawnPointRed_9() { return &___spawnPointRed_9; }
	inline void set_spawnPointRed_9(Transform_t3275118058 * value)
	{
		___spawnPointRed_9 = value;
		Il2CppCodeGenWriteBarrier((&___spawnPointRed_9), value);
	}

	inline static int32_t get_offset_of_playerAttack_10() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___playerAttack_10)); }
	inline PlayerAttack_t1510648285 * get_playerAttack_10() const { return ___playerAttack_10; }
	inline PlayerAttack_t1510648285 ** get_address_of_playerAttack_10() { return &___playerAttack_10; }
	inline void set_playerAttack_10(PlayerAttack_t1510648285 * value)
	{
		___playerAttack_10 = value;
		Il2CppCodeGenWriteBarrier((&___playerAttack_10), value);
	}

	inline static int32_t get_offset_of_syncRoleAttackRequest_11() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___syncRoleAttackRequest_11)); }
	inline SyncRoleAttackRequest_t2768771284 * get_syncRoleAttackRequest_11() const { return ___syncRoleAttackRequest_11; }
	inline SyncRoleAttackRequest_t2768771284 ** get_address_of_syncRoleAttackRequest_11() { return &___syncRoleAttackRequest_11; }
	inline void set_syncRoleAttackRequest_11(SyncRoleAttackRequest_t2768771284 * value)
	{
		___syncRoleAttackRequest_11 = value;
		Il2CppCodeGenWriteBarrier((&___syncRoleAttackRequest_11), value);
	}

	inline static int32_t get_offset_of_gameOverRequest_12() { return static_cast<int32_t>(offsetof(PlayerManager_t1596653588, ___gameOverRequest_12)); }
	inline GameOverRequest_t2692618111 * get_gameOverRequest_12() const { return ___gameOverRequest_12; }
	inline GameOverRequest_t2692618111 ** get_address_of_gameOverRequest_12() { return &___gameOverRequest_12; }
	inline void set_gameOverRequest_12(GameOverRequest_t2692618111 * value)
	{
		___gameOverRequest_12 = value;
		Il2CppCodeGenWriteBarrier((&___gameOverRequest_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERMANAGER_T1596653588_H
#ifndef UIMANAGER_T2519183485_H
#define UIMANAGER_T2519183485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager
struct  UIManager_t2519183485  : public BaseManager_t2372802720
{
public:
	// UIPanelType UIManager::panelTypeToPush
	int32_t ___panelTypeToPush_1;
	// UnityEngine.Transform UIManager::uiTrans
	Transform_t3275118058 * ___uiTrans_2;
	// System.Collections.Generic.Dictionary`2<UIPanelType,System.String> UIManager::panelPaths
	Dictionary_2_t2305905024 * ___panelPaths_3;
	// System.Collections.Generic.Dictionary`2<UIPanelType,BasePanel> UIManager::panels
	Dictionary_2_t819400224 * ___panels_4;
	// System.Collections.Generic.Stack`1<BasePanel> UIManager::panelsStack
	Stack_1_t1630443587 * ___panelsStack_5;
	// MessagePanel UIManager::messagePanel
	MessagePanel_t1958872291 * ___messagePanel_6;

public:
	inline static int32_t get_offset_of_panelTypeToPush_1() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___panelTypeToPush_1)); }
	inline int32_t get_panelTypeToPush_1() const { return ___panelTypeToPush_1; }
	inline int32_t* get_address_of_panelTypeToPush_1() { return &___panelTypeToPush_1; }
	inline void set_panelTypeToPush_1(int32_t value)
	{
		___panelTypeToPush_1 = value;
	}

	inline static int32_t get_offset_of_uiTrans_2() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___uiTrans_2)); }
	inline Transform_t3275118058 * get_uiTrans_2() const { return ___uiTrans_2; }
	inline Transform_t3275118058 ** get_address_of_uiTrans_2() { return &___uiTrans_2; }
	inline void set_uiTrans_2(Transform_t3275118058 * value)
	{
		___uiTrans_2 = value;
		Il2CppCodeGenWriteBarrier((&___uiTrans_2), value);
	}

	inline static int32_t get_offset_of_panelPaths_3() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___panelPaths_3)); }
	inline Dictionary_2_t2305905024 * get_panelPaths_3() const { return ___panelPaths_3; }
	inline Dictionary_2_t2305905024 ** get_address_of_panelPaths_3() { return &___panelPaths_3; }
	inline void set_panelPaths_3(Dictionary_2_t2305905024 * value)
	{
		___panelPaths_3 = value;
		Il2CppCodeGenWriteBarrier((&___panelPaths_3), value);
	}

	inline static int32_t get_offset_of_panels_4() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___panels_4)); }
	inline Dictionary_2_t819400224 * get_panels_4() const { return ___panels_4; }
	inline Dictionary_2_t819400224 ** get_address_of_panels_4() { return &___panels_4; }
	inline void set_panels_4(Dictionary_2_t819400224 * value)
	{
		___panels_4 = value;
		Il2CppCodeGenWriteBarrier((&___panels_4), value);
	}

	inline static int32_t get_offset_of_panelsStack_5() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___panelsStack_5)); }
	inline Stack_1_t1630443587 * get_panelsStack_5() const { return ___panelsStack_5; }
	inline Stack_1_t1630443587 ** get_address_of_panelsStack_5() { return &___panelsStack_5; }
	inline void set_panelsStack_5(Stack_1_t1630443587 * value)
	{
		___panelsStack_5 = value;
		Il2CppCodeGenWriteBarrier((&___panelsStack_5), value);
	}

	inline static int32_t get_offset_of_messagePanel_6() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___messagePanel_6)); }
	inline MessagePanel_t1958872291 * get_messagePanel_6() const { return ___messagePanel_6; }
	inline MessagePanel_t1958872291 ** get_address_of_messagePanel_6() { return &___messagePanel_6; }
	inline void set_messagePanel_6(MessagePanel_t1958872291 * value)
	{
		___messagePanel_6 = value;
		Il2CppCodeGenWriteBarrier((&___messagePanel_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIMANAGER_T2519183485_H
#ifndef UIPANELINFO_T462297968_H
#define UIPANELINFO_T462297968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIPanelInfo
struct  UIPanelInfo_t462297968  : public RuntimeObject
{
public:
	// UIPanelType UIPanelInfo::panelType
	int32_t ___panelType_0;
	// System.String UIPanelInfo::panelTypeName
	String_t* ___panelTypeName_1;
	// System.String UIPanelInfo::path
	String_t* ___path_2;

public:
	inline static int32_t get_offset_of_panelType_0() { return static_cast<int32_t>(offsetof(UIPanelInfo_t462297968, ___panelType_0)); }
	inline int32_t get_panelType_0() const { return ___panelType_0; }
	inline int32_t* get_address_of_panelType_0() { return &___panelType_0; }
	inline void set_panelType_0(int32_t value)
	{
		___panelType_0 = value;
	}

	inline static int32_t get_offset_of_panelTypeName_1() { return static_cast<int32_t>(offsetof(UIPanelInfo_t462297968, ___panelTypeName_1)); }
	inline String_t* get_panelTypeName_1() const { return ___panelTypeName_1; }
	inline String_t** get_address_of_panelTypeName_1() { return &___panelTypeName_1; }
	inline void set_panelTypeName_1(String_t* value)
	{
		___panelTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___panelTypeName_1), value);
	}

	inline static int32_t get_offset_of_path_2() { return static_cast<int32_t>(offsetof(UIPanelInfo_t462297968, ___path_2)); }
	inline String_t* get_path_2() const { return ___path_2; }
	inline String_t** get_address_of_path_2() { return &___path_2; }
	inline void set_path_2(String_t* value)
	{
		___path_2 = value;
		Il2CppCodeGenWriteBarrier((&___path_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIPANELINFO_T462297968_H
#ifndef ROLEDATA_T2970593024_H
#define ROLEDATA_T2970593024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoleData
struct  RoleData_t2970593024  : public RuntimeObject
{
public:
	// Common.RoleType RoleData::<RoleType>k__BackingField
	int32_t ___U3CRoleTypeU3Ek__BackingField_0;
	// UnityEngine.GameObject RoleData::<RolePrefab>k__BackingField
	GameObject_t1756533147 * ___U3CRolePrefabU3Ek__BackingField_1;
	// UnityEngine.GameObject RoleData::<ArrowPrefab>k__BackingField
	GameObject_t1756533147 * ___U3CArrowPrefabU3Ek__BackingField_2;
	// UnityEngine.Transform RoleData::<SpawnPoint>k__BackingField
	Transform_t3275118058 * ___U3CSpawnPointU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CRoleTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RoleData_t2970593024, ___U3CRoleTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CRoleTypeU3Ek__BackingField_0() const { return ___U3CRoleTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CRoleTypeU3Ek__BackingField_0() { return &___U3CRoleTypeU3Ek__BackingField_0; }
	inline void set_U3CRoleTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CRoleTypeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CRolePrefabU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RoleData_t2970593024, ___U3CRolePrefabU3Ek__BackingField_1)); }
	inline GameObject_t1756533147 * get_U3CRolePrefabU3Ek__BackingField_1() const { return ___U3CRolePrefabU3Ek__BackingField_1; }
	inline GameObject_t1756533147 ** get_address_of_U3CRolePrefabU3Ek__BackingField_1() { return &___U3CRolePrefabU3Ek__BackingField_1; }
	inline void set_U3CRolePrefabU3Ek__BackingField_1(GameObject_t1756533147 * value)
	{
		___U3CRolePrefabU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRolePrefabU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CArrowPrefabU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RoleData_t2970593024, ___U3CArrowPrefabU3Ek__BackingField_2)); }
	inline GameObject_t1756533147 * get_U3CArrowPrefabU3Ek__BackingField_2() const { return ___U3CArrowPrefabU3Ek__BackingField_2; }
	inline GameObject_t1756533147 ** get_address_of_U3CArrowPrefabU3Ek__BackingField_2() { return &___U3CArrowPrefabU3Ek__BackingField_2; }
	inline void set_U3CArrowPrefabU3Ek__BackingField_2(GameObject_t1756533147 * value)
	{
		___U3CArrowPrefabU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CArrowPrefabU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CSpawnPointU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RoleData_t2970593024, ___U3CSpawnPointU3Ek__BackingField_3)); }
	inline Transform_t3275118058 * get_U3CSpawnPointU3Ek__BackingField_3() const { return ___U3CSpawnPointU3Ek__BackingField_3; }
	inline Transform_t3275118058 ** get_address_of_U3CSpawnPointU3Ek__BackingField_3() { return &___U3CSpawnPointU3Ek__BackingField_3; }
	inline void set_U3CSpawnPointU3Ek__BackingField_3(Transform_t3275118058 * value)
	{
		___U3CSpawnPointU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSpawnPointU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROLEDATA_T2970593024_H
#ifndef COMPONENT_T3819376471_H
#define COMPONENT_T3819376471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3819376471  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3819376471_H
#ifndef BEHAVIOUR_T955675639_H
#define BEHAVIOUR_T955675639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t955675639  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T955675639_H
#ifndef MONOBEHAVIOUR_T1158329972_H
#define MONOBEHAVIOUR_T1158329972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1158329972  : public Behaviour_t955675639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1158329972_H
#ifndef PLAYERMOVE_T195622780_H
#define PLAYERMOVE_T195622780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMove
struct  PlayerMove_t195622780  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerMove::<Forward>k__BackingField
	float ___U3CForwardU3Ek__BackingField_2;
	// System.Single PlayerMove::speed
	float ___speed_3;
	// UnityEngine.Animator PlayerMove::playerAnimator
	Animator_t69676727 * ___playerAnimator_4;

public:
	inline static int32_t get_offset_of_U3CForwardU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayerMove_t195622780, ___U3CForwardU3Ek__BackingField_2)); }
	inline float get_U3CForwardU3Ek__BackingField_2() const { return ___U3CForwardU3Ek__BackingField_2; }
	inline float* get_address_of_U3CForwardU3Ek__BackingField_2() { return &___U3CForwardU3Ek__BackingField_2; }
	inline void set_U3CForwardU3Ek__BackingField_2(float value)
	{
		___U3CForwardU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(PlayerMove_t195622780, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_playerAnimator_4() { return static_cast<int32_t>(offsetof(PlayerMove_t195622780, ___playerAnimator_4)); }
	inline Animator_t69676727 * get_playerAnimator_4() const { return ___playerAnimator_4; }
	inline Animator_t69676727 ** get_address_of_playerAnimator_4() { return &___playerAnimator_4; }
	inline void set_playerAnimator_4(Animator_t69676727 * value)
	{
		___playerAnimator_4 = value;
		Il2CppCodeGenWriteBarrier((&___playerAnimator_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERMOVE_T195622780_H
#ifndef PLAYERHEALTH_T2894595013_H
#define PLAYERHEALTH_T2894595013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerHealth
struct  PlayerHealth_t2894595013  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerHealth::hp
	float ___hp_2;
	// System.Single PlayerHealth::maxHp
	float ___maxHp_3;
	// UnityEngine.UI.Slider PlayerHealth::bloodSlider
	Slider_t297367283 * ___bloodSlider_4;
	// System.Boolean PlayerHealth::isUpdateBlood
	bool ___isUpdateBlood_5;

public:
	inline static int32_t get_offset_of_hp_2() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___hp_2)); }
	inline float get_hp_2() const { return ___hp_2; }
	inline float* get_address_of_hp_2() { return &___hp_2; }
	inline void set_hp_2(float value)
	{
		___hp_2 = value;
	}

	inline static int32_t get_offset_of_maxHp_3() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___maxHp_3)); }
	inline float get_maxHp_3() const { return ___maxHp_3; }
	inline float* get_address_of_maxHp_3() { return &___maxHp_3; }
	inline void set_maxHp_3(float value)
	{
		___maxHp_3 = value;
	}

	inline static int32_t get_offset_of_bloodSlider_4() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___bloodSlider_4)); }
	inline Slider_t297367283 * get_bloodSlider_4() const { return ___bloodSlider_4; }
	inline Slider_t297367283 ** get_address_of_bloodSlider_4() { return &___bloodSlider_4; }
	inline void set_bloodSlider_4(Slider_t297367283 * value)
	{
		___bloodSlider_4 = value;
		Il2CppCodeGenWriteBarrier((&___bloodSlider_4), value);
	}

	inline static int32_t get_offset_of_isUpdateBlood_5() { return static_cast<int32_t>(offsetof(PlayerHealth_t2894595013, ___isUpdateBlood_5)); }
	inline bool get_isUpdateBlood_5() const { return ___isUpdateBlood_5; }
	inline bool* get_address_of_isUpdateBlood_5() { return &___isUpdateBlood_5; }
	inline void set_isUpdateBlood_5(bool value)
	{
		___isUpdateBlood_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERHEALTH_T2894595013_H
#ifndef DESTROYBYTIME_T1319923286_H
#define DESTROYBYTIME_T1319923286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyByTime
struct  DestroyByTime_t1319923286  : public MonoBehaviour_t1158329972
{
public:
	// System.Single DestroyByTime::time
	float ___time_2;

public:
	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(DestroyByTime_t1319923286, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTROYBYTIME_T1319923286_H
#ifndef BASEREQUEST_T3099896954_H
#define BASEREQUEST_T3099896954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseRequest
struct  BaseRequest_t3099896954  : public MonoBehaviour_t1158329972
{
public:
	// Common.RequestCode BaseRequest::requestCode
	int32_t ___requestCode_2;
	// Common.ActionCode BaseRequest::actionCode
	int32_t ___actionCode_3;
	// GameFacade BaseRequest::facade
	GameFacade_t4180906540 * ___facade_4;

public:
	inline static int32_t get_offset_of_requestCode_2() { return static_cast<int32_t>(offsetof(BaseRequest_t3099896954, ___requestCode_2)); }
	inline int32_t get_requestCode_2() const { return ___requestCode_2; }
	inline int32_t* get_address_of_requestCode_2() { return &___requestCode_2; }
	inline void set_requestCode_2(int32_t value)
	{
		___requestCode_2 = value;
	}

	inline static int32_t get_offset_of_actionCode_3() { return static_cast<int32_t>(offsetof(BaseRequest_t3099896954, ___actionCode_3)); }
	inline int32_t get_actionCode_3() const { return ___actionCode_3; }
	inline int32_t* get_address_of_actionCode_3() { return &___actionCode_3; }
	inline void set_actionCode_3(int32_t value)
	{
		___actionCode_3 = value;
	}

	inline static int32_t get_offset_of_facade_4() { return static_cast<int32_t>(offsetof(BaseRequest_t3099896954, ___facade_4)); }
	inline GameFacade_t4180906540 * get_facade_4() const { return ___facade_4; }
	inline GameFacade_t4180906540 ** get_address_of_facade_4() { return &___facade_4; }
	inline void set_facade_4(GameFacade_t4180906540 * value)
	{
		___facade_4 = value;
		Il2CppCodeGenWriteBarrier((&___facade_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEREQUEST_T3099896954_H
#ifndef BASEPANEL_T542715433_H
#define BASEPANEL_T542715433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BasePanel
struct  BasePanel_t542715433  : public MonoBehaviour_t1158329972
{
public:
	// UIManager BasePanel::uiManager
	UIManager_t2519183485 * ___uiManager_2;
	// GameFacade BasePanel::facade
	GameFacade_t4180906540 * ___facade_3;

public:
	inline static int32_t get_offset_of_uiManager_2() { return static_cast<int32_t>(offsetof(BasePanel_t542715433, ___uiManager_2)); }
	inline UIManager_t2519183485 * get_uiManager_2() const { return ___uiManager_2; }
	inline UIManager_t2519183485 ** get_address_of_uiManager_2() { return &___uiManager_2; }
	inline void set_uiManager_2(UIManager_t2519183485 * value)
	{
		___uiManager_2 = value;
		Il2CppCodeGenWriteBarrier((&___uiManager_2), value);
	}

	inline static int32_t get_offset_of_facade_3() { return static_cast<int32_t>(offsetof(BasePanel_t542715433, ___facade_3)); }
	inline GameFacade_t4180906540 * get_facade_3() const { return ___facade_3; }
	inline GameFacade_t4180906540 ** get_address_of_facade_3() { return &___facade_3; }
	inline void set_facade_3(GameFacade_t4180906540 * value)
	{
		___facade_3 = value;
		Il2CppCodeGenWriteBarrier((&___facade_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEPANEL_T542715433_H
#ifndef IMAGEEFFECTBASE_T517806655_H
#define IMAGEEFFECTBASE_T517806655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ImageEffectBase
struct  ImageEffectBase_t517806655  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ImageEffectBase::shader
	Shader_t2430389951 * ___shader_2;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ImageEffectBase::m_Material
	Material_t193706927 * ___m_Material_3;

public:
	inline static int32_t get_offset_of_shader_2() { return static_cast<int32_t>(offsetof(ImageEffectBase_t517806655, ___shader_2)); }
	inline Shader_t2430389951 * get_shader_2() const { return ___shader_2; }
	inline Shader_t2430389951 ** get_address_of_shader_2() { return &___shader_2; }
	inline void set_shader_2(Shader_t2430389951 * value)
	{
		___shader_2 = value;
		Il2CppCodeGenWriteBarrier((&___shader_2), value);
	}

	inline static int32_t get_offset_of_m_Material_3() { return static_cast<int32_t>(offsetof(ImageEffectBase_t517806655, ___m_Material_3)); }
	inline Material_t193706927 * get_m_Material_3() const { return ___m_Material_3; }
	inline Material_t193706927 ** get_address_of_m_Material_3() { return &___m_Material_3; }
	inline void set_m_Material_3(Material_t193706927 * value)
	{
		___m_Material_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEEFFECTBASE_T517806655_H
#ifndef FOLLOWTARGET_T2817477884_H
#define FOLLOWTARGET_T2817477884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FollowTarget
struct  FollowTarget_t2817477884  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform FollowTarget::target
	Transform_t3275118058 * ___target_2;
	// UnityEngine.Vector3 FollowTarget::offset
	Vector3_t2243707580  ___offset_3;
	// System.Single FollowTarget::smoothing
	float ___smoothing_4;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(FollowTarget_t2817477884, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(FollowTarget_t2817477884, ___offset_3)); }
	inline Vector3_t2243707580  get_offset_3() const { return ___offset_3; }
	inline Vector3_t2243707580 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t2243707580  value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_smoothing_4() { return static_cast<int32_t>(offsetof(FollowTarget_t2817477884, ___smoothing_4)); }
	inline float get_smoothing_4() const { return ___smoothing_4; }
	inline float* get_address_of_smoothing_4() { return &___smoothing_4; }
	inline void set_smoothing_4(float value)
	{
		___smoothing_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOWTARGET_T2817477884_H
#ifndef GAMEFACADE_T4180906540_H
#define GAMEFACADE_T4180906540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameFacade
struct  GameFacade_t4180906540  : public MonoBehaviour_t1158329972
{
public:
	// UIManager GameFacade::uiManager
	UIManager_t2519183485 * ___uiManager_2;
	// CameraManager GameFacade::cameraManager
	CameraManager_t2379859346 * ___cameraManager_3;
	// AudioManager GameFacade::audioManager
	AudioManager_t4222704959 * ___audioManager_4;
	// PlayerManager GameFacade::playerManager
	PlayerManager_t1596653588 * ___playerManager_5;
	// RequestManager GameFacade::requestManager
	RequestManager_t755409356 * ___requestManager_6;
	// ClientManager GameFacade::clientManager
	ClientManager_t4009004882 * ___clientManager_7;

public:
	inline static int32_t get_offset_of_uiManager_2() { return static_cast<int32_t>(offsetof(GameFacade_t4180906540, ___uiManager_2)); }
	inline UIManager_t2519183485 * get_uiManager_2() const { return ___uiManager_2; }
	inline UIManager_t2519183485 ** get_address_of_uiManager_2() { return &___uiManager_2; }
	inline void set_uiManager_2(UIManager_t2519183485 * value)
	{
		___uiManager_2 = value;
		Il2CppCodeGenWriteBarrier((&___uiManager_2), value);
	}

	inline static int32_t get_offset_of_cameraManager_3() { return static_cast<int32_t>(offsetof(GameFacade_t4180906540, ___cameraManager_3)); }
	inline CameraManager_t2379859346 * get_cameraManager_3() const { return ___cameraManager_3; }
	inline CameraManager_t2379859346 ** get_address_of_cameraManager_3() { return &___cameraManager_3; }
	inline void set_cameraManager_3(CameraManager_t2379859346 * value)
	{
		___cameraManager_3 = value;
		Il2CppCodeGenWriteBarrier((&___cameraManager_3), value);
	}

	inline static int32_t get_offset_of_audioManager_4() { return static_cast<int32_t>(offsetof(GameFacade_t4180906540, ___audioManager_4)); }
	inline AudioManager_t4222704959 * get_audioManager_4() const { return ___audioManager_4; }
	inline AudioManager_t4222704959 ** get_address_of_audioManager_4() { return &___audioManager_4; }
	inline void set_audioManager_4(AudioManager_t4222704959 * value)
	{
		___audioManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___audioManager_4), value);
	}

	inline static int32_t get_offset_of_playerManager_5() { return static_cast<int32_t>(offsetof(GameFacade_t4180906540, ___playerManager_5)); }
	inline PlayerManager_t1596653588 * get_playerManager_5() const { return ___playerManager_5; }
	inline PlayerManager_t1596653588 ** get_address_of_playerManager_5() { return &___playerManager_5; }
	inline void set_playerManager_5(PlayerManager_t1596653588 * value)
	{
		___playerManager_5 = value;
		Il2CppCodeGenWriteBarrier((&___playerManager_5), value);
	}

	inline static int32_t get_offset_of_requestManager_6() { return static_cast<int32_t>(offsetof(GameFacade_t4180906540, ___requestManager_6)); }
	inline RequestManager_t755409356 * get_requestManager_6() const { return ___requestManager_6; }
	inline RequestManager_t755409356 ** get_address_of_requestManager_6() { return &___requestManager_6; }
	inline void set_requestManager_6(RequestManager_t755409356 * value)
	{
		___requestManager_6 = value;
		Il2CppCodeGenWriteBarrier((&___requestManager_6), value);
	}

	inline static int32_t get_offset_of_clientManager_7() { return static_cast<int32_t>(offsetof(GameFacade_t4180906540, ___clientManager_7)); }
	inline ClientManager_t4009004882 * get_clientManager_7() const { return ___clientManager_7; }
	inline ClientManager_t4009004882 ** get_address_of_clientManager_7() { return &___clientManager_7; }
	inline void set_clientManager_7(ClientManager_t4009004882 * value)
	{
		___clientManager_7 = value;
		Il2CppCodeGenWriteBarrier((&___clientManager_7), value);
	}
};

struct GameFacade_t4180906540_StaticFields
{
public:
	// GameFacade GameFacade::instance
	GameFacade_t4180906540 * ___instance_8;

public:
	inline static int32_t get_offset_of_instance_8() { return static_cast<int32_t>(offsetof(GameFacade_t4180906540_StaticFields, ___instance_8)); }
	inline GameFacade_t4180906540 * get_instance_8() const { return ___instance_8; }
	inline GameFacade_t4180906540 ** get_address_of_instance_8() { return &___instance_8; }
	inline void set_instance_8(GameFacade_t4180906540 * value)
	{
		___instance_8 = value;
		Il2CppCodeGenWriteBarrier((&___instance_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEFACADE_T4180906540_H
#ifndef ARROW_T3589335331_H
#define ARROW_T3589335331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Arrow
struct  Arrow_t3589335331  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Arrow::explosionEffect
	GameObject_t1756533147 * ___explosionEffect_2;
	// System.Single Arrow::speed
	float ___speed_3;
	// UnityEngine.Rigidbody Arrow::rb
	Rigidbody_t4233889191 * ___rb_4;
	// System.Single Arrow::attack
	float ___attack_5;
	// System.Boolean Arrow::<IsCurrent>k__BackingField
	bool ___U3CIsCurrentU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_explosionEffect_2() { return static_cast<int32_t>(offsetof(Arrow_t3589335331, ___explosionEffect_2)); }
	inline GameObject_t1756533147 * get_explosionEffect_2() const { return ___explosionEffect_2; }
	inline GameObject_t1756533147 ** get_address_of_explosionEffect_2() { return &___explosionEffect_2; }
	inline void set_explosionEffect_2(GameObject_t1756533147 * value)
	{
		___explosionEffect_2 = value;
		Il2CppCodeGenWriteBarrier((&___explosionEffect_2), value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Arrow_t3589335331, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(Arrow_t3589335331, ___rb_4)); }
	inline Rigidbody_t4233889191 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody_t4233889191 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((&___rb_4), value);
	}

	inline static int32_t get_offset_of_attack_5() { return static_cast<int32_t>(offsetof(Arrow_t3589335331, ___attack_5)); }
	inline float get_attack_5() const { return ___attack_5; }
	inline float* get_address_of_attack_5() { return &___attack_5; }
	inline void set_attack_5(float value)
	{
		___attack_5 = value;
	}

	inline static int32_t get_offset_of_U3CIsCurrentU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Arrow_t3589335331, ___U3CIsCurrentU3Ek__BackingField_6)); }
	inline bool get_U3CIsCurrentU3Ek__BackingField_6() const { return ___U3CIsCurrentU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsCurrentU3Ek__BackingField_6() { return &___U3CIsCurrentU3Ek__BackingField_6; }
	inline void set_U3CIsCurrentU3Ek__BackingField_6(bool value)
	{
		___U3CIsCurrentU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARROW_T3589335331_H
#ifndef PLAYERATTACK_T1510648285_H
#define PLAYERATTACK_T1510648285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerAttack
struct  PlayerAttack_t1510648285  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject PlayerAttack::arrowPrefab
	GameObject_t1756533147 * ___arrowPrefab_2;
	// UnityEngine.Animator PlayerAttack::playerAnimator
	Animator_t69676727 * ___playerAnimator_3;
	// UnityEngine.Transform PlayerAttack::leftHandTrans
	Transform_t3275118058 * ___leftHandTrans_4;
	// UnityEngine.Vector3 PlayerAttack::shootDir
	Vector3_t2243707580  ___shootDir_5;
	// SyncRoleShootRequest PlayerAttack::<SyncRoleShootRequest>k__BackingField
	SyncRoleShootRequest_t287347991 * ___U3CSyncRoleShootRequestU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_arrowPrefab_2() { return static_cast<int32_t>(offsetof(PlayerAttack_t1510648285, ___arrowPrefab_2)); }
	inline GameObject_t1756533147 * get_arrowPrefab_2() const { return ___arrowPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_arrowPrefab_2() { return &___arrowPrefab_2; }
	inline void set_arrowPrefab_2(GameObject_t1756533147 * value)
	{
		___arrowPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___arrowPrefab_2), value);
	}

	inline static int32_t get_offset_of_playerAnimator_3() { return static_cast<int32_t>(offsetof(PlayerAttack_t1510648285, ___playerAnimator_3)); }
	inline Animator_t69676727 * get_playerAnimator_3() const { return ___playerAnimator_3; }
	inline Animator_t69676727 ** get_address_of_playerAnimator_3() { return &___playerAnimator_3; }
	inline void set_playerAnimator_3(Animator_t69676727 * value)
	{
		___playerAnimator_3 = value;
		Il2CppCodeGenWriteBarrier((&___playerAnimator_3), value);
	}

	inline static int32_t get_offset_of_leftHandTrans_4() { return static_cast<int32_t>(offsetof(PlayerAttack_t1510648285, ___leftHandTrans_4)); }
	inline Transform_t3275118058 * get_leftHandTrans_4() const { return ___leftHandTrans_4; }
	inline Transform_t3275118058 ** get_address_of_leftHandTrans_4() { return &___leftHandTrans_4; }
	inline void set_leftHandTrans_4(Transform_t3275118058 * value)
	{
		___leftHandTrans_4 = value;
		Il2CppCodeGenWriteBarrier((&___leftHandTrans_4), value);
	}

	inline static int32_t get_offset_of_shootDir_5() { return static_cast<int32_t>(offsetof(PlayerAttack_t1510648285, ___shootDir_5)); }
	inline Vector3_t2243707580  get_shootDir_5() const { return ___shootDir_5; }
	inline Vector3_t2243707580 * get_address_of_shootDir_5() { return &___shootDir_5; }
	inline void set_shootDir_5(Vector3_t2243707580  value)
	{
		___shootDir_5 = value;
	}

	inline static int32_t get_offset_of_U3CSyncRoleShootRequestU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PlayerAttack_t1510648285, ___U3CSyncRoleShootRequestU3Ek__BackingField_6)); }
	inline SyncRoleShootRequest_t287347991 * get_U3CSyncRoleShootRequestU3Ek__BackingField_6() const { return ___U3CSyncRoleShootRequestU3Ek__BackingField_6; }
	inline SyncRoleShootRequest_t287347991 ** get_address_of_U3CSyncRoleShootRequestU3Ek__BackingField_6() { return &___U3CSyncRoleShootRequestU3Ek__BackingField_6; }
	inline void set_U3CSyncRoleShootRequestU3Ek__BackingField_6(SyncRoleShootRequest_t287347991 * value)
	{
		___U3CSyncRoleShootRequestU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSyncRoleShootRequestU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERATTACK_T1510648285_H
#ifndef ROOMPANEL_T529970467_H
#define ROOMPANEL_T529970467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomPanel
struct  RoomPanel_t529970467  : public BasePanel_t542715433
{
public:
	// UnityEngine.Transform RoomPanel::bluePanel
	Transform_t3275118058 * ___bluePanel_4;
	// UnityEngine.Transform RoomPanel::redPanel
	Transform_t3275118058 * ___redPanel_5;
	// UnityEngine.UI.Text RoomPanel::blueUsername
	Text_t356221433 * ___blueUsername_6;
	// UnityEngine.UI.Text RoomPanel::blueTotalcount
	Text_t356221433 * ___blueTotalcount_7;
	// UnityEngine.UI.Text RoomPanel::blueWincount
	Text_t356221433 * ___blueWincount_8;
	// UnityEngine.UI.Text RoomPanel::redUsername
	Text_t356221433 * ___redUsername_9;
	// UnityEngine.UI.Text RoomPanel::redTotalcount
	Text_t356221433 * ___redTotalcount_10;
	// UnityEngine.UI.Text RoomPanel::redTotal
	Text_t356221433 * ___redTotal_11;
	// UnityEngine.UI.Text RoomPanel::redWincount
	Text_t356221433 * ___redWincount_12;
	// UnityEngine.UI.Text RoomPanel::redWin
	Text_t356221433 * ___redWin_13;
	// UnityEngine.Transform RoomPanel::startButton
	Transform_t3275118058 * ___startButton_14;
	// UnityEngine.Transform RoomPanel::leaveButton
	Transform_t3275118058 * ___leaveButton_15;
	// Assets.Scripts.Model.UserData RoomPanel::blueUserData
	UserData_t4018655545 * ___blueUserData_16;
	// Assets.Scripts.Model.UserData RoomPanel::redUserData
	UserData_t4018655545 * ___redUserData_17;
	// LeaveRoomRequest RoomPanel::leaveRoomRequest
	LeaveRoomRequest_t147230195 * ___leaveRoomRequest_18;
	// StartGameRequest RoomPanel::startGameRequest
	StartGameRequest_t2744624181 * ___startGameRequest_19;
	// System.Boolean RoomPanel::isPopPanel
	bool ___isPopPanel_20;

public:
	inline static int32_t get_offset_of_bluePanel_4() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___bluePanel_4)); }
	inline Transform_t3275118058 * get_bluePanel_4() const { return ___bluePanel_4; }
	inline Transform_t3275118058 ** get_address_of_bluePanel_4() { return &___bluePanel_4; }
	inline void set_bluePanel_4(Transform_t3275118058 * value)
	{
		___bluePanel_4 = value;
		Il2CppCodeGenWriteBarrier((&___bluePanel_4), value);
	}

	inline static int32_t get_offset_of_redPanel_5() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___redPanel_5)); }
	inline Transform_t3275118058 * get_redPanel_5() const { return ___redPanel_5; }
	inline Transform_t3275118058 ** get_address_of_redPanel_5() { return &___redPanel_5; }
	inline void set_redPanel_5(Transform_t3275118058 * value)
	{
		___redPanel_5 = value;
		Il2CppCodeGenWriteBarrier((&___redPanel_5), value);
	}

	inline static int32_t get_offset_of_blueUsername_6() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___blueUsername_6)); }
	inline Text_t356221433 * get_blueUsername_6() const { return ___blueUsername_6; }
	inline Text_t356221433 ** get_address_of_blueUsername_6() { return &___blueUsername_6; }
	inline void set_blueUsername_6(Text_t356221433 * value)
	{
		___blueUsername_6 = value;
		Il2CppCodeGenWriteBarrier((&___blueUsername_6), value);
	}

	inline static int32_t get_offset_of_blueTotalcount_7() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___blueTotalcount_7)); }
	inline Text_t356221433 * get_blueTotalcount_7() const { return ___blueTotalcount_7; }
	inline Text_t356221433 ** get_address_of_blueTotalcount_7() { return &___blueTotalcount_7; }
	inline void set_blueTotalcount_7(Text_t356221433 * value)
	{
		___blueTotalcount_7 = value;
		Il2CppCodeGenWriteBarrier((&___blueTotalcount_7), value);
	}

	inline static int32_t get_offset_of_blueWincount_8() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___blueWincount_8)); }
	inline Text_t356221433 * get_blueWincount_8() const { return ___blueWincount_8; }
	inline Text_t356221433 ** get_address_of_blueWincount_8() { return &___blueWincount_8; }
	inline void set_blueWincount_8(Text_t356221433 * value)
	{
		___blueWincount_8 = value;
		Il2CppCodeGenWriteBarrier((&___blueWincount_8), value);
	}

	inline static int32_t get_offset_of_redUsername_9() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___redUsername_9)); }
	inline Text_t356221433 * get_redUsername_9() const { return ___redUsername_9; }
	inline Text_t356221433 ** get_address_of_redUsername_9() { return &___redUsername_9; }
	inline void set_redUsername_9(Text_t356221433 * value)
	{
		___redUsername_9 = value;
		Il2CppCodeGenWriteBarrier((&___redUsername_9), value);
	}

	inline static int32_t get_offset_of_redTotalcount_10() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___redTotalcount_10)); }
	inline Text_t356221433 * get_redTotalcount_10() const { return ___redTotalcount_10; }
	inline Text_t356221433 ** get_address_of_redTotalcount_10() { return &___redTotalcount_10; }
	inline void set_redTotalcount_10(Text_t356221433 * value)
	{
		___redTotalcount_10 = value;
		Il2CppCodeGenWriteBarrier((&___redTotalcount_10), value);
	}

	inline static int32_t get_offset_of_redTotal_11() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___redTotal_11)); }
	inline Text_t356221433 * get_redTotal_11() const { return ___redTotal_11; }
	inline Text_t356221433 ** get_address_of_redTotal_11() { return &___redTotal_11; }
	inline void set_redTotal_11(Text_t356221433 * value)
	{
		___redTotal_11 = value;
		Il2CppCodeGenWriteBarrier((&___redTotal_11), value);
	}

	inline static int32_t get_offset_of_redWincount_12() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___redWincount_12)); }
	inline Text_t356221433 * get_redWincount_12() const { return ___redWincount_12; }
	inline Text_t356221433 ** get_address_of_redWincount_12() { return &___redWincount_12; }
	inline void set_redWincount_12(Text_t356221433 * value)
	{
		___redWincount_12 = value;
		Il2CppCodeGenWriteBarrier((&___redWincount_12), value);
	}

	inline static int32_t get_offset_of_redWin_13() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___redWin_13)); }
	inline Text_t356221433 * get_redWin_13() const { return ___redWin_13; }
	inline Text_t356221433 ** get_address_of_redWin_13() { return &___redWin_13; }
	inline void set_redWin_13(Text_t356221433 * value)
	{
		___redWin_13 = value;
		Il2CppCodeGenWriteBarrier((&___redWin_13), value);
	}

	inline static int32_t get_offset_of_startButton_14() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___startButton_14)); }
	inline Transform_t3275118058 * get_startButton_14() const { return ___startButton_14; }
	inline Transform_t3275118058 ** get_address_of_startButton_14() { return &___startButton_14; }
	inline void set_startButton_14(Transform_t3275118058 * value)
	{
		___startButton_14 = value;
		Il2CppCodeGenWriteBarrier((&___startButton_14), value);
	}

	inline static int32_t get_offset_of_leaveButton_15() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___leaveButton_15)); }
	inline Transform_t3275118058 * get_leaveButton_15() const { return ___leaveButton_15; }
	inline Transform_t3275118058 ** get_address_of_leaveButton_15() { return &___leaveButton_15; }
	inline void set_leaveButton_15(Transform_t3275118058 * value)
	{
		___leaveButton_15 = value;
		Il2CppCodeGenWriteBarrier((&___leaveButton_15), value);
	}

	inline static int32_t get_offset_of_blueUserData_16() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___blueUserData_16)); }
	inline UserData_t4018655545 * get_blueUserData_16() const { return ___blueUserData_16; }
	inline UserData_t4018655545 ** get_address_of_blueUserData_16() { return &___blueUserData_16; }
	inline void set_blueUserData_16(UserData_t4018655545 * value)
	{
		___blueUserData_16 = value;
		Il2CppCodeGenWriteBarrier((&___blueUserData_16), value);
	}

	inline static int32_t get_offset_of_redUserData_17() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___redUserData_17)); }
	inline UserData_t4018655545 * get_redUserData_17() const { return ___redUserData_17; }
	inline UserData_t4018655545 ** get_address_of_redUserData_17() { return &___redUserData_17; }
	inline void set_redUserData_17(UserData_t4018655545 * value)
	{
		___redUserData_17 = value;
		Il2CppCodeGenWriteBarrier((&___redUserData_17), value);
	}

	inline static int32_t get_offset_of_leaveRoomRequest_18() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___leaveRoomRequest_18)); }
	inline LeaveRoomRequest_t147230195 * get_leaveRoomRequest_18() const { return ___leaveRoomRequest_18; }
	inline LeaveRoomRequest_t147230195 ** get_address_of_leaveRoomRequest_18() { return &___leaveRoomRequest_18; }
	inline void set_leaveRoomRequest_18(LeaveRoomRequest_t147230195 * value)
	{
		___leaveRoomRequest_18 = value;
		Il2CppCodeGenWriteBarrier((&___leaveRoomRequest_18), value);
	}

	inline static int32_t get_offset_of_startGameRequest_19() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___startGameRequest_19)); }
	inline StartGameRequest_t2744624181 * get_startGameRequest_19() const { return ___startGameRequest_19; }
	inline StartGameRequest_t2744624181 ** get_address_of_startGameRequest_19() { return &___startGameRequest_19; }
	inline void set_startGameRequest_19(StartGameRequest_t2744624181 * value)
	{
		___startGameRequest_19 = value;
		Il2CppCodeGenWriteBarrier((&___startGameRequest_19), value);
	}

	inline static int32_t get_offset_of_isPopPanel_20() { return static_cast<int32_t>(offsetof(RoomPanel_t529970467, ___isPopPanel_20)); }
	inline bool get_isPopPanel_20() const { return ___isPopPanel_20; }
	inline bool* get_address_of_isPopPanel_20() { return &___isPopPanel_20; }
	inline void set_isPopPanel_20(bool value)
	{
		___isPopPanel_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROOMPANEL_T529970467_H
#ifndef ROOMLISTPANEL_T2151956597_H
#define ROOMLISTPANEL_T2151956597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomListPanel
struct  RoomListPanel_t2151956597  : public BasePanel_t542715433
{
public:
	// UnityEngine.RectTransform RoomListPanel::userDetailPanel
	RectTransform_t3349966182 * ___userDetailPanel_4;
	// UnityEngine.RectTransform RoomListPanel::roomListPanel
	RectTransform_t3349966182 * ___roomListPanel_5;
	// UnityEngine.UI.Text RoomListPanel::userNameText
	Text_t356221433 * ___userNameText_6;
	// UnityEngine.UI.Text RoomListPanel::totalCountText
	Text_t356221433 * ___totalCountText_7;
	// UnityEngine.UI.Text RoomListPanel::winCountText
	Text_t356221433 * ___winCountText_8;
	// UnityEngine.RectTransform RoomListPanel::layout
	RectTransform_t3349966182 * ___layout_9;
	// UnityEngine.GameObject RoomListPanel::roomItem
	GameObject_t1756533147 * ___roomItem_10;
	// System.Single RoomListPanel::layoutHeight
	float ___layoutHeight_11;
	// ShowRoomRequest RoomListPanel::showRoomRequest
	ShowRoomRequest_t4000912775 * ___showRoomRequest_12;
	// CreateRoomRequest RoomListPanel::createRoomRequest
	CreateRoomRequest_t3704453372 * ___createRoomRequest_13;
	// JoinRoomRequest RoomListPanel::joinRoomRequest
	JoinRoomRequest_t53532236 * ___joinRoomRequest_14;
	// System.Collections.Generic.List`1<Assets.Scripts.Model.UserData> RoomListPanel::userList
	List_1_t3387776677 * ___userList_15;
	// Assets.Scripts.Model.UserData RoomListPanel::blueUserData
	UserData_t4018655545 * ___blueUserData_16;
	// Assets.Scripts.Model.UserData RoomListPanel::redUserData
	UserData_t4018655545 * ___redUserData_17;

public:
	inline static int32_t get_offset_of_userDetailPanel_4() { return static_cast<int32_t>(offsetof(RoomListPanel_t2151956597, ___userDetailPanel_4)); }
	inline RectTransform_t3349966182 * get_userDetailPanel_4() const { return ___userDetailPanel_4; }
	inline RectTransform_t3349966182 ** get_address_of_userDetailPanel_4() { return &___userDetailPanel_4; }
	inline void set_userDetailPanel_4(RectTransform_t3349966182 * value)
	{
		___userDetailPanel_4 = value;
		Il2CppCodeGenWriteBarrier((&___userDetailPanel_4), value);
	}

	inline static int32_t get_offset_of_roomListPanel_5() { return static_cast<int32_t>(offsetof(RoomListPanel_t2151956597, ___roomListPanel_5)); }
	inline RectTransform_t3349966182 * get_roomListPanel_5() const { return ___roomListPanel_5; }
	inline RectTransform_t3349966182 ** get_address_of_roomListPanel_5() { return &___roomListPanel_5; }
	inline void set_roomListPanel_5(RectTransform_t3349966182 * value)
	{
		___roomListPanel_5 = value;
		Il2CppCodeGenWriteBarrier((&___roomListPanel_5), value);
	}

	inline static int32_t get_offset_of_userNameText_6() { return static_cast<int32_t>(offsetof(RoomListPanel_t2151956597, ___userNameText_6)); }
	inline Text_t356221433 * get_userNameText_6() const { return ___userNameText_6; }
	inline Text_t356221433 ** get_address_of_userNameText_6() { return &___userNameText_6; }
	inline void set_userNameText_6(Text_t356221433 * value)
	{
		___userNameText_6 = value;
		Il2CppCodeGenWriteBarrier((&___userNameText_6), value);
	}

	inline static int32_t get_offset_of_totalCountText_7() { return static_cast<int32_t>(offsetof(RoomListPanel_t2151956597, ___totalCountText_7)); }
	inline Text_t356221433 * get_totalCountText_7() const { return ___totalCountText_7; }
	inline Text_t356221433 ** get_address_of_totalCountText_7() { return &___totalCountText_7; }
	inline void set_totalCountText_7(Text_t356221433 * value)
	{
		___totalCountText_7 = value;
		Il2CppCodeGenWriteBarrier((&___totalCountText_7), value);
	}

	inline static int32_t get_offset_of_winCountText_8() { return static_cast<int32_t>(offsetof(RoomListPanel_t2151956597, ___winCountText_8)); }
	inline Text_t356221433 * get_winCountText_8() const { return ___winCountText_8; }
	inline Text_t356221433 ** get_address_of_winCountText_8() { return &___winCountText_8; }
	inline void set_winCountText_8(Text_t356221433 * value)
	{
		___winCountText_8 = value;
		Il2CppCodeGenWriteBarrier((&___winCountText_8), value);
	}

	inline static int32_t get_offset_of_layout_9() { return static_cast<int32_t>(offsetof(RoomListPanel_t2151956597, ___layout_9)); }
	inline RectTransform_t3349966182 * get_layout_9() const { return ___layout_9; }
	inline RectTransform_t3349966182 ** get_address_of_layout_9() { return &___layout_9; }
	inline void set_layout_9(RectTransform_t3349966182 * value)
	{
		___layout_9 = value;
		Il2CppCodeGenWriteBarrier((&___layout_9), value);
	}

	inline static int32_t get_offset_of_roomItem_10() { return static_cast<int32_t>(offsetof(RoomListPanel_t2151956597, ___roomItem_10)); }
	inline GameObject_t1756533147 * get_roomItem_10() const { return ___roomItem_10; }
	inline GameObject_t1756533147 ** get_address_of_roomItem_10() { return &___roomItem_10; }
	inline void set_roomItem_10(GameObject_t1756533147 * value)
	{
		___roomItem_10 = value;
		Il2CppCodeGenWriteBarrier((&___roomItem_10), value);
	}

	inline static int32_t get_offset_of_layoutHeight_11() { return static_cast<int32_t>(offsetof(RoomListPanel_t2151956597, ___layoutHeight_11)); }
	inline float get_layoutHeight_11() const { return ___layoutHeight_11; }
	inline float* get_address_of_layoutHeight_11() { return &___layoutHeight_11; }
	inline void set_layoutHeight_11(float value)
	{
		___layoutHeight_11 = value;
	}

	inline static int32_t get_offset_of_showRoomRequest_12() { return static_cast<int32_t>(offsetof(RoomListPanel_t2151956597, ___showRoomRequest_12)); }
	inline ShowRoomRequest_t4000912775 * get_showRoomRequest_12() const { return ___showRoomRequest_12; }
	inline ShowRoomRequest_t4000912775 ** get_address_of_showRoomRequest_12() { return &___showRoomRequest_12; }
	inline void set_showRoomRequest_12(ShowRoomRequest_t4000912775 * value)
	{
		___showRoomRequest_12 = value;
		Il2CppCodeGenWriteBarrier((&___showRoomRequest_12), value);
	}

	inline static int32_t get_offset_of_createRoomRequest_13() { return static_cast<int32_t>(offsetof(RoomListPanel_t2151956597, ___createRoomRequest_13)); }
	inline CreateRoomRequest_t3704453372 * get_createRoomRequest_13() const { return ___createRoomRequest_13; }
	inline CreateRoomRequest_t3704453372 ** get_address_of_createRoomRequest_13() { return &___createRoomRequest_13; }
	inline void set_createRoomRequest_13(CreateRoomRequest_t3704453372 * value)
	{
		___createRoomRequest_13 = value;
		Il2CppCodeGenWriteBarrier((&___createRoomRequest_13), value);
	}

	inline static int32_t get_offset_of_joinRoomRequest_14() { return static_cast<int32_t>(offsetof(RoomListPanel_t2151956597, ___joinRoomRequest_14)); }
	inline JoinRoomRequest_t53532236 * get_joinRoomRequest_14() const { return ___joinRoomRequest_14; }
	inline JoinRoomRequest_t53532236 ** get_address_of_joinRoomRequest_14() { return &___joinRoomRequest_14; }
	inline void set_joinRoomRequest_14(JoinRoomRequest_t53532236 * value)
	{
		___joinRoomRequest_14 = value;
		Il2CppCodeGenWriteBarrier((&___joinRoomRequest_14), value);
	}

	inline static int32_t get_offset_of_userList_15() { return static_cast<int32_t>(offsetof(RoomListPanel_t2151956597, ___userList_15)); }
	inline List_1_t3387776677 * get_userList_15() const { return ___userList_15; }
	inline List_1_t3387776677 ** get_address_of_userList_15() { return &___userList_15; }
	inline void set_userList_15(List_1_t3387776677 * value)
	{
		___userList_15 = value;
		Il2CppCodeGenWriteBarrier((&___userList_15), value);
	}

	inline static int32_t get_offset_of_blueUserData_16() { return static_cast<int32_t>(offsetof(RoomListPanel_t2151956597, ___blueUserData_16)); }
	inline UserData_t4018655545 * get_blueUserData_16() const { return ___blueUserData_16; }
	inline UserData_t4018655545 ** get_address_of_blueUserData_16() { return &___blueUserData_16; }
	inline void set_blueUserData_16(UserData_t4018655545 * value)
	{
		___blueUserData_16 = value;
		Il2CppCodeGenWriteBarrier((&___blueUserData_16), value);
	}

	inline static int32_t get_offset_of_redUserData_17() { return static_cast<int32_t>(offsetof(RoomListPanel_t2151956597, ___redUserData_17)); }
	inline UserData_t4018655545 * get_redUserData_17() const { return ___redUserData_17; }
	inline UserData_t4018655545 ** get_address_of_redUserData_17() { return &___redUserData_17; }
	inline void set_redUserData_17(UserData_t4018655545 * value)
	{
		___redUserData_17 = value;
		Il2CppCodeGenWriteBarrier((&___redUserData_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROOMLISTPANEL_T2151956597_H
#ifndef STARTPANEL_T247594438_H
#define STARTPANEL_T247594438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartPanel
struct  StartPanel_t247594438  : public BasePanel_t542715433
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTPANEL_T247594438_H
#ifndef VORTEX_T4170634026_H
#define VORTEX_T4170634026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.Vortex
struct  Vortex_t4170634026  : public ImageEffectBase_t517806655
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::radius
	Vector2_t2243707579  ___radius_4;
	// System.Single UnityStandardAssets.ImageEffects.Vortex::angle
	float ___angle_5;
	// UnityEngine.Vector2 UnityStandardAssets.ImageEffects.Vortex::center
	Vector2_t2243707579  ___center_6;

public:
	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(Vortex_t4170634026, ___radius_4)); }
	inline Vector2_t2243707579  get_radius_4() const { return ___radius_4; }
	inline Vector2_t2243707579 * get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(Vector2_t2243707579  value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_angle_5() { return static_cast<int32_t>(offsetof(Vortex_t4170634026, ___angle_5)); }
	inline float get_angle_5() const { return ___angle_5; }
	inline float* get_address_of_angle_5() { return &___angle_5; }
	inline void set_angle_5(float value)
	{
		___angle_5 = value;
	}

	inline static int32_t get_offset_of_center_6() { return static_cast<int32_t>(offsetof(Vortex_t4170634026, ___center_6)); }
	inline Vector2_t2243707579  get_center_6() const { return ___center_6; }
	inline Vector2_t2243707579 * get_address_of_center_6() { return &___center_6; }
	inline void set_center_6(Vector2_t2243707579  value)
	{
		___center_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VORTEX_T4170634026_H
#ifndef SYNCROLEBLOODREQUEST_T1077129738_H
#define SYNCROLEBLOODREQUEST_T1077129738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SyncRoleBloodRequest
struct  SyncRoleBloodRequest_t1077129738  : public BaseRequest_t3099896954
{
public:
	// UnityEngine.UI.Slider SyncRoleBloodRequest::bloodSlider
	Slider_t297367283 * ___bloodSlider_5;
	// System.Single SyncRoleBloodRequest::maxHp
	float ___maxHp_6;
	// System.Single SyncRoleBloodRequest::hp
	float ___hp_7;
	// System.Boolean SyncRoleBloodRequest::isUpdateBlood
	bool ___isUpdateBlood_8;

public:
	inline static int32_t get_offset_of_bloodSlider_5() { return static_cast<int32_t>(offsetof(SyncRoleBloodRequest_t1077129738, ___bloodSlider_5)); }
	inline Slider_t297367283 * get_bloodSlider_5() const { return ___bloodSlider_5; }
	inline Slider_t297367283 ** get_address_of_bloodSlider_5() { return &___bloodSlider_5; }
	inline void set_bloodSlider_5(Slider_t297367283 * value)
	{
		___bloodSlider_5 = value;
		Il2CppCodeGenWriteBarrier((&___bloodSlider_5), value);
	}

	inline static int32_t get_offset_of_maxHp_6() { return static_cast<int32_t>(offsetof(SyncRoleBloodRequest_t1077129738, ___maxHp_6)); }
	inline float get_maxHp_6() const { return ___maxHp_6; }
	inline float* get_address_of_maxHp_6() { return &___maxHp_6; }
	inline void set_maxHp_6(float value)
	{
		___maxHp_6 = value;
	}

	inline static int32_t get_offset_of_hp_7() { return static_cast<int32_t>(offsetof(SyncRoleBloodRequest_t1077129738, ___hp_7)); }
	inline float get_hp_7() const { return ___hp_7; }
	inline float* get_address_of_hp_7() { return &___hp_7; }
	inline void set_hp_7(float value)
	{
		___hp_7 = value;
	}

	inline static int32_t get_offset_of_isUpdateBlood_8() { return static_cast<int32_t>(offsetof(SyncRoleBloodRequest_t1077129738, ___isUpdateBlood_8)); }
	inline bool get_isUpdateBlood_8() const { return ___isUpdateBlood_8; }
	inline bool* get_address_of_isUpdateBlood_8() { return &___isUpdateBlood_8; }
	inline void set_isUpdateBlood_8(bool value)
	{
		___isUpdateBlood_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCROLEBLOODREQUEST_T1077129738_H
#ifndef REGISTERREQUEST_T698226714_H
#define REGISTERREQUEST_T698226714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RegisterRequest
struct  RegisterRequest_t698226714  : public BaseRequest_t3099896954
{
public:
	// RegisterPanel RegisterRequest::registerPanel
	RegisterPanel_t852150773 * ___registerPanel_5;

public:
	inline static int32_t get_offset_of_registerPanel_5() { return static_cast<int32_t>(offsetof(RegisterRequest_t698226714, ___registerPanel_5)); }
	inline RegisterPanel_t852150773 * get_registerPanel_5() const { return ___registerPanel_5; }
	inline RegisterPanel_t852150773 ** get_address_of_registerPanel_5() { return &___registerPanel_5; }
	inline void set_registerPanel_5(RegisterPanel_t852150773 * value)
	{
		___registerPanel_5 = value;
		Il2CppCodeGenWriteBarrier((&___registerPanel_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTERREQUEST_T698226714_H
#ifndef QUITBATTLEREQUEST_T2423038290_H
#define QUITBATTLEREQUEST_T2423038290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuitBattleRequest
struct  QuitBattleRequest_t2423038290  : public BaseRequest_t3099896954
{
public:
	// GamePanel QuitBattleRequest::gamePanel
	GamePanel_t539122112 * ___gamePanel_5;
	// System.Boolean QuitBattleRequest::isQuit
	bool ___isQuit_6;

public:
	inline static int32_t get_offset_of_gamePanel_5() { return static_cast<int32_t>(offsetof(QuitBattleRequest_t2423038290, ___gamePanel_5)); }
	inline GamePanel_t539122112 * get_gamePanel_5() const { return ___gamePanel_5; }
	inline GamePanel_t539122112 ** get_address_of_gamePanel_5() { return &___gamePanel_5; }
	inline void set_gamePanel_5(GamePanel_t539122112 * value)
	{
		___gamePanel_5 = value;
		Il2CppCodeGenWriteBarrier((&___gamePanel_5), value);
	}

	inline static int32_t get_offset_of_isQuit_6() { return static_cast<int32_t>(offsetof(QuitBattleRequest_t2423038290, ___isQuit_6)); }
	inline bool get_isQuit_6() const { return ___isQuit_6; }
	inline bool* get_address_of_isQuit_6() { return &___isQuit_6; }
	inline void set_isQuit_6(bool value)
	{
		___isQuit_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUITBATTLEREQUEST_T2423038290_H
#ifndef SHOWROOMREQUEST_T4000912775_H
#define SHOWROOMREQUEST_T4000912775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShowRoomRequest
struct  ShowRoomRequest_t4000912775  : public BaseRequest_t3099896954
{
public:
	// RoomListPanel ShowRoomRequest::roomListPanel
	RoomListPanel_t2151956597 * ___roomListPanel_5;

public:
	inline static int32_t get_offset_of_roomListPanel_5() { return static_cast<int32_t>(offsetof(ShowRoomRequest_t4000912775, ___roomListPanel_5)); }
	inline RoomListPanel_t2151956597 * get_roomListPanel_5() const { return ___roomListPanel_5; }
	inline RoomListPanel_t2151956597 ** get_address_of_roomListPanel_5() { return &___roomListPanel_5; }
	inline void set_roomListPanel_5(RoomListPanel_t2151956597 * value)
	{
		___roomListPanel_5 = value;
		Il2CppCodeGenWriteBarrier((&___roomListPanel_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOWROOMREQUEST_T4000912775_H
#ifndef STARTGAMEREQUEST_T2744624181_H
#define STARTGAMEREQUEST_T2744624181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartGameRequest
struct  StartGameRequest_t2744624181  : public BaseRequest_t3099896954
{
public:
	// RoomPanel StartGameRequest::roomPanel
	RoomPanel_t529970467 * ___roomPanel_5;

public:
	inline static int32_t get_offset_of_roomPanel_5() { return static_cast<int32_t>(offsetof(StartGameRequest_t2744624181, ___roomPanel_5)); }
	inline RoomPanel_t529970467 * get_roomPanel_5() const { return ___roomPanel_5; }
	inline RoomPanel_t529970467 ** get_address_of_roomPanel_5() { return &___roomPanel_5; }
	inline void set_roomPanel_5(RoomPanel_t529970467 * value)
	{
		___roomPanel_5 = value;
		Il2CppCodeGenWriteBarrier((&___roomPanel_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTGAMEREQUEST_T2744624181_H
#ifndef STARTBATTLEREQUEST_T1286880561_H
#define STARTBATTLEREQUEST_T1286880561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartBattleRequest
struct  StartBattleRequest_t1286880561  : public BaseRequest_t3099896954
{
public:
	// System.Boolean StartBattleRequest::isStartBattle
	bool ___isStartBattle_5;

public:
	inline static int32_t get_offset_of_isStartBattle_5() { return static_cast<int32_t>(offsetof(StartBattleRequest_t1286880561, ___isStartBattle_5)); }
	inline bool get_isStartBattle_5() const { return ___isStartBattle_5; }
	inline bool* get_address_of_isStartBattle_5() { return &___isStartBattle_5; }
	inline void set_isStartBattle_5(bool value)
	{
		___isStartBattle_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTBATTLEREQUEST_T1286880561_H
#ifndef GAMEOVERREQUEST_T2692618111_H
#define GAMEOVERREQUEST_T2692618111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameOverRequest
struct  GameOverRequest_t2692618111  : public BaseRequest_t3099896954
{
public:
	// GamePanel GameOverRequest::gamePanel
	GamePanel_t539122112 * ___gamePanel_5;
	// System.Boolean GameOverRequest::isGameOver
	bool ___isGameOver_6;
	// Common.ReturnCode GameOverRequest::returnCode
	int32_t ___returnCode_7;

public:
	inline static int32_t get_offset_of_gamePanel_5() { return static_cast<int32_t>(offsetof(GameOverRequest_t2692618111, ___gamePanel_5)); }
	inline GamePanel_t539122112 * get_gamePanel_5() const { return ___gamePanel_5; }
	inline GamePanel_t539122112 ** get_address_of_gamePanel_5() { return &___gamePanel_5; }
	inline void set_gamePanel_5(GamePanel_t539122112 * value)
	{
		___gamePanel_5 = value;
		Il2CppCodeGenWriteBarrier((&___gamePanel_5), value);
	}

	inline static int32_t get_offset_of_isGameOver_6() { return static_cast<int32_t>(offsetof(GameOverRequest_t2692618111, ___isGameOver_6)); }
	inline bool get_isGameOver_6() const { return ___isGameOver_6; }
	inline bool* get_address_of_isGameOver_6() { return &___isGameOver_6; }
	inline void set_isGameOver_6(bool value)
	{
		___isGameOver_6 = value;
	}

	inline static int32_t get_offset_of_returnCode_7() { return static_cast<int32_t>(offsetof(GameOverRequest_t2692618111, ___returnCode_7)); }
	inline int32_t get_returnCode_7() const { return ___returnCode_7; }
	inline int32_t* get_address_of_returnCode_7() { return &___returnCode_7; }
	inline void set_returnCode_7(int32_t value)
	{
		___returnCode_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOVERREQUEST_T2692618111_H
#ifndef CREATEROOMREQUEST_T3704453372_H
#define CREATEROOMREQUEST_T3704453372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreateRoomRequest
struct  CreateRoomRequest_t3704453372  : public BaseRequest_t3099896954
{
public:
	// RoomPanel CreateRoomRequest::roomPanel
	RoomPanel_t529970467 * ___roomPanel_5;

public:
	inline static int32_t get_offset_of_roomPanel_5() { return static_cast<int32_t>(offsetof(CreateRoomRequest_t3704453372, ___roomPanel_5)); }
	inline RoomPanel_t529970467 * get_roomPanel_5() const { return ___roomPanel_5; }
	inline RoomPanel_t529970467 ** get_address_of_roomPanel_5() { return &___roomPanel_5; }
	inline void set_roomPanel_5(RoomPanel_t529970467 * value)
	{
		___roomPanel_5 = value;
		Il2CppCodeGenWriteBarrier((&___roomPanel_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEROOMREQUEST_T3704453372_H
#ifndef JOINROOMREQUEST_T53532236_H
#define JOINROOMREQUEST_T53532236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JoinRoomRequest
struct  JoinRoomRequest_t53532236  : public BaseRequest_t3099896954
{
public:
	// RoomListPanel JoinRoomRequest::roomListPanel
	RoomListPanel_t2151956597 * ___roomListPanel_5;

public:
	inline static int32_t get_offset_of_roomListPanel_5() { return static_cast<int32_t>(offsetof(JoinRoomRequest_t53532236, ___roomListPanel_5)); }
	inline RoomListPanel_t2151956597 * get_roomListPanel_5() const { return ___roomListPanel_5; }
	inline RoomListPanel_t2151956597 ** get_address_of_roomListPanel_5() { return &___roomListPanel_5; }
	inline void set_roomListPanel_5(RoomListPanel_t2151956597 * value)
	{
		___roomListPanel_5 = value;
		Il2CppCodeGenWriteBarrier((&___roomListPanel_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOINROOMREQUEST_T53532236_H
#ifndef LOGINREQUEST_T2273172322_H
#define LOGINREQUEST_T2273172322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoginRequest
struct  LoginRequest_t2273172322  : public BaseRequest_t3099896954
{
public:
	// LoginPanel LoginRequest::loginPanel
	LoginPanel_t257791075 * ___loginPanel_5;

public:
	inline static int32_t get_offset_of_loginPanel_5() { return static_cast<int32_t>(offsetof(LoginRequest_t2273172322, ___loginPanel_5)); }
	inline LoginPanel_t257791075 * get_loginPanel_5() const { return ___loginPanel_5; }
	inline LoginPanel_t257791075 ** get_address_of_loginPanel_5() { return &___loginPanel_5; }
	inline void set_loginPanel_5(LoginPanel_t257791075 * value)
	{
		___loginPanel_5 = value;
		Il2CppCodeGenWriteBarrier((&___loginPanel_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINREQUEST_T2273172322_H
#ifndef LEAVEROOMREQUEST_T147230195_H
#define LEAVEROOMREQUEST_T147230195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeaveRoomRequest
struct  LeaveRoomRequest_t147230195  : public BaseRequest_t3099896954
{
public:
	// RoomPanel LeaveRoomRequest::roomPanel
	RoomPanel_t529970467 * ___roomPanel_5;

public:
	inline static int32_t get_offset_of_roomPanel_5() { return static_cast<int32_t>(offsetof(LeaveRoomRequest_t147230195, ___roomPanel_5)); }
	inline RoomPanel_t529970467 * get_roomPanel_5() const { return ___roomPanel_5; }
	inline RoomPanel_t529970467 ** get_address_of_roomPanel_5() { return &___roomPanel_5; }
	inline void set_roomPanel_5(RoomPanel_t529970467 * value)
	{
		___roomPanel_5 = value;
		Il2CppCodeGenWriteBarrier((&___roomPanel_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAVEROOMREQUEST_T147230195_H
#ifndef SYNCROLEATTACKREQUEST_T2768771284_H
#define SYNCROLEATTACKREQUEST_T2768771284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SyncRoleAttackRequest
struct  SyncRoleAttackRequest_t2768771284  : public BaseRequest_t3099896954
{
public:
	// PlayerHealth SyncRoleAttackRequest::<CurrentPlayerHealth>k__BackingField
	PlayerHealth_t2894595013 * ___U3CCurrentPlayerHealthU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CCurrentPlayerHealthU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SyncRoleAttackRequest_t2768771284, ___U3CCurrentPlayerHealthU3Ek__BackingField_5)); }
	inline PlayerHealth_t2894595013 * get_U3CCurrentPlayerHealthU3Ek__BackingField_5() const { return ___U3CCurrentPlayerHealthU3Ek__BackingField_5; }
	inline PlayerHealth_t2894595013 ** get_address_of_U3CCurrentPlayerHealthU3Ek__BackingField_5() { return &___U3CCurrentPlayerHealthU3Ek__BackingField_5; }
	inline void set_U3CCurrentPlayerHealthU3Ek__BackingField_5(PlayerHealth_t2894595013 * value)
	{
		___U3CCurrentPlayerHealthU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CCurrentPlayerHealthU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCROLEATTACKREQUEST_T2768771284_H
#ifndef LOGINPANEL_T257791075_H
#define LOGINPANEL_T257791075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoginPanel
struct  LoginPanel_t257791075  : public BasePanel_t542715433
{
public:
	// UnityEngine.UI.InputField LoginPanel::usernameInput
	InputField_t1631627530 * ___usernameInput_4;
	// UnityEngine.UI.InputField LoginPanel::passwordInput
	InputField_t1631627530 * ___passwordInput_5;
	// LoginRequest LoginPanel::loginRequest
	LoginRequest_t2273172322 * ___loginRequest_6;

public:
	inline static int32_t get_offset_of_usernameInput_4() { return static_cast<int32_t>(offsetof(LoginPanel_t257791075, ___usernameInput_4)); }
	inline InputField_t1631627530 * get_usernameInput_4() const { return ___usernameInput_4; }
	inline InputField_t1631627530 ** get_address_of_usernameInput_4() { return &___usernameInput_4; }
	inline void set_usernameInput_4(InputField_t1631627530 * value)
	{
		___usernameInput_4 = value;
		Il2CppCodeGenWriteBarrier((&___usernameInput_4), value);
	}

	inline static int32_t get_offset_of_passwordInput_5() { return static_cast<int32_t>(offsetof(LoginPanel_t257791075, ___passwordInput_5)); }
	inline InputField_t1631627530 * get_passwordInput_5() const { return ___passwordInput_5; }
	inline InputField_t1631627530 ** get_address_of_passwordInput_5() { return &___passwordInput_5; }
	inline void set_passwordInput_5(InputField_t1631627530 * value)
	{
		___passwordInput_5 = value;
		Il2CppCodeGenWriteBarrier((&___passwordInput_5), value);
	}

	inline static int32_t get_offset_of_loginRequest_6() { return static_cast<int32_t>(offsetof(LoginPanel_t257791075, ___loginRequest_6)); }
	inline LoginRequest_t2273172322 * get_loginRequest_6() const { return ___loginRequest_6; }
	inline LoginRequest_t2273172322 ** get_address_of_loginRequest_6() { return &___loginRequest_6; }
	inline void set_loginRequest_6(LoginRequest_t2273172322 * value)
	{
		___loginRequest_6 = value;
		Il2CppCodeGenWriteBarrier((&___loginRequest_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGINPANEL_T257791075_H
#ifndef GAMEPANEL_T539122112_H
#define GAMEPANEL_T539122112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GamePanel
struct  GamePanel_t539122112  : public BasePanel_t542715433
{
public:
	// UnityEngine.UI.Text GamePanel::timerText
	Text_t356221433 * ___timerText_4;
	// System.Int32 GamePanel::time
	int32_t ___time_5;
	// System.Boolean GamePanel::isStart
	bool ___isStart_6;
	// System.Boolean GamePanel::isGameOver
	bool ___isGameOver_7;
	// UnityEngine.Transform GamePanel::victoryTrans
	Transform_t3275118058 * ___victoryTrans_8;
	// UnityEngine.Transform GamePanel::defeatTrans
	Transform_t3275118058 * ___defeatTrans_9;
	// UnityEngine.GameObject GamePanel::quitButton
	GameObject_t1756533147 * ___quitButton_10;
	// QuitBattleRequest GamePanel::quitBattleRequest
	QuitBattleRequest_t2423038290 * ___quitBattleRequest_11;

public:
	inline static int32_t get_offset_of_timerText_4() { return static_cast<int32_t>(offsetof(GamePanel_t539122112, ___timerText_4)); }
	inline Text_t356221433 * get_timerText_4() const { return ___timerText_4; }
	inline Text_t356221433 ** get_address_of_timerText_4() { return &___timerText_4; }
	inline void set_timerText_4(Text_t356221433 * value)
	{
		___timerText_4 = value;
		Il2CppCodeGenWriteBarrier((&___timerText_4), value);
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(GamePanel_t539122112, ___time_5)); }
	inline int32_t get_time_5() const { return ___time_5; }
	inline int32_t* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(int32_t value)
	{
		___time_5 = value;
	}

	inline static int32_t get_offset_of_isStart_6() { return static_cast<int32_t>(offsetof(GamePanel_t539122112, ___isStart_6)); }
	inline bool get_isStart_6() const { return ___isStart_6; }
	inline bool* get_address_of_isStart_6() { return &___isStart_6; }
	inline void set_isStart_6(bool value)
	{
		___isStart_6 = value;
	}

	inline static int32_t get_offset_of_isGameOver_7() { return static_cast<int32_t>(offsetof(GamePanel_t539122112, ___isGameOver_7)); }
	inline bool get_isGameOver_7() const { return ___isGameOver_7; }
	inline bool* get_address_of_isGameOver_7() { return &___isGameOver_7; }
	inline void set_isGameOver_7(bool value)
	{
		___isGameOver_7 = value;
	}

	inline static int32_t get_offset_of_victoryTrans_8() { return static_cast<int32_t>(offsetof(GamePanel_t539122112, ___victoryTrans_8)); }
	inline Transform_t3275118058 * get_victoryTrans_8() const { return ___victoryTrans_8; }
	inline Transform_t3275118058 ** get_address_of_victoryTrans_8() { return &___victoryTrans_8; }
	inline void set_victoryTrans_8(Transform_t3275118058 * value)
	{
		___victoryTrans_8 = value;
		Il2CppCodeGenWriteBarrier((&___victoryTrans_8), value);
	}

	inline static int32_t get_offset_of_defeatTrans_9() { return static_cast<int32_t>(offsetof(GamePanel_t539122112, ___defeatTrans_9)); }
	inline Transform_t3275118058 * get_defeatTrans_9() const { return ___defeatTrans_9; }
	inline Transform_t3275118058 ** get_address_of_defeatTrans_9() { return &___defeatTrans_9; }
	inline void set_defeatTrans_9(Transform_t3275118058 * value)
	{
		___defeatTrans_9 = value;
		Il2CppCodeGenWriteBarrier((&___defeatTrans_9), value);
	}

	inline static int32_t get_offset_of_quitButton_10() { return static_cast<int32_t>(offsetof(GamePanel_t539122112, ___quitButton_10)); }
	inline GameObject_t1756533147 * get_quitButton_10() const { return ___quitButton_10; }
	inline GameObject_t1756533147 ** get_address_of_quitButton_10() { return &___quitButton_10; }
	inline void set_quitButton_10(GameObject_t1756533147 * value)
	{
		___quitButton_10 = value;
		Il2CppCodeGenWriteBarrier((&___quitButton_10), value);
	}

	inline static int32_t get_offset_of_quitBattleRequest_11() { return static_cast<int32_t>(offsetof(GamePanel_t539122112, ___quitBattleRequest_11)); }
	inline QuitBattleRequest_t2423038290 * get_quitBattleRequest_11() const { return ___quitBattleRequest_11; }
	inline QuitBattleRequest_t2423038290 ** get_address_of_quitBattleRequest_11() { return &___quitBattleRequest_11; }
	inline void set_quitBattleRequest_11(QuitBattleRequest_t2423038290 * value)
	{
		___quitBattleRequest_11 = value;
		Il2CppCodeGenWriteBarrier((&___quitBattleRequest_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEPANEL_T539122112_H
#ifndef MESSAGEPANEL_T1958872291_H
#define MESSAGEPANEL_T1958872291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MessagePanel
struct  MessagePanel_t1958872291  : public BasePanel_t542715433
{
public:
	// UnityEngine.UI.Text MessagePanel::text
	Text_t356221433 * ___text_4;
	// System.String MessagePanel::message
	String_t* ___message_5;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(MessagePanel_t1958872291, ___text_4)); }
	inline Text_t356221433 * get_text_4() const { return ___text_4; }
	inline Text_t356221433 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t356221433 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((&___text_4), value);
	}

	inline static int32_t get_offset_of_message_5() { return static_cast<int32_t>(offsetof(MessagePanel_t1958872291, ___message_5)); }
	inline String_t* get_message_5() const { return ___message_5; }
	inline String_t** get_address_of_message_5() { return &___message_5; }
	inline void set_message_5(String_t* value)
	{
		___message_5 = value;
		Il2CppCodeGenWriteBarrier((&___message_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEPANEL_T1958872291_H
#ifndef ROOMITEM_T419916276_H
#define ROOMITEM_T419916276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomItem
struct  RoomItem_t419916276  : public BasePanel_t542715433
{
public:
	// UnityEngine.UI.Text RoomItem::userNameText
	Text_t356221433 * ___userNameText_4;
	// UnityEngine.UI.Text RoomItem::totalCountText
	Text_t356221433 * ___totalCountText_5;
	// UnityEngine.UI.Text RoomItem::winCountText
	Text_t356221433 * ___winCountText_6;
	// RoomListPanel RoomItem::roomListPanel
	RoomListPanel_t2151956597 * ___roomListPanel_7;
	// System.Int32 RoomItem::roomId
	int32_t ___roomId_8;

public:
	inline static int32_t get_offset_of_userNameText_4() { return static_cast<int32_t>(offsetof(RoomItem_t419916276, ___userNameText_4)); }
	inline Text_t356221433 * get_userNameText_4() const { return ___userNameText_4; }
	inline Text_t356221433 ** get_address_of_userNameText_4() { return &___userNameText_4; }
	inline void set_userNameText_4(Text_t356221433 * value)
	{
		___userNameText_4 = value;
		Il2CppCodeGenWriteBarrier((&___userNameText_4), value);
	}

	inline static int32_t get_offset_of_totalCountText_5() { return static_cast<int32_t>(offsetof(RoomItem_t419916276, ___totalCountText_5)); }
	inline Text_t356221433 * get_totalCountText_5() const { return ___totalCountText_5; }
	inline Text_t356221433 ** get_address_of_totalCountText_5() { return &___totalCountText_5; }
	inline void set_totalCountText_5(Text_t356221433 * value)
	{
		___totalCountText_5 = value;
		Il2CppCodeGenWriteBarrier((&___totalCountText_5), value);
	}

	inline static int32_t get_offset_of_winCountText_6() { return static_cast<int32_t>(offsetof(RoomItem_t419916276, ___winCountText_6)); }
	inline Text_t356221433 * get_winCountText_6() const { return ___winCountText_6; }
	inline Text_t356221433 ** get_address_of_winCountText_6() { return &___winCountText_6; }
	inline void set_winCountText_6(Text_t356221433 * value)
	{
		___winCountText_6 = value;
		Il2CppCodeGenWriteBarrier((&___winCountText_6), value);
	}

	inline static int32_t get_offset_of_roomListPanel_7() { return static_cast<int32_t>(offsetof(RoomItem_t419916276, ___roomListPanel_7)); }
	inline RoomListPanel_t2151956597 * get_roomListPanel_7() const { return ___roomListPanel_7; }
	inline RoomListPanel_t2151956597 ** get_address_of_roomListPanel_7() { return &___roomListPanel_7; }
	inline void set_roomListPanel_7(RoomListPanel_t2151956597 * value)
	{
		___roomListPanel_7 = value;
		Il2CppCodeGenWriteBarrier((&___roomListPanel_7), value);
	}

	inline static int32_t get_offset_of_roomId_8() { return static_cast<int32_t>(offsetof(RoomItem_t419916276, ___roomId_8)); }
	inline int32_t get_roomId_8() const { return ___roomId_8; }
	inline int32_t* get_address_of_roomId_8() { return &___roomId_8; }
	inline void set_roomId_8(int32_t value)
	{
		___roomId_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROOMITEM_T419916276_H
#ifndef REGISTERPANEL_T852150773_H
#define REGISTERPANEL_T852150773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RegisterPanel
struct  RegisterPanel_t852150773  : public BasePanel_t542715433
{
public:
	// UnityEngine.UI.InputField RegisterPanel::usernameInput
	InputField_t1631627530 * ___usernameInput_4;
	// UnityEngine.UI.InputField RegisterPanel::passwordInput
	InputField_t1631627530 * ___passwordInput_5;
	// UnityEngine.UI.InputField RegisterPanel::repasswordInput
	InputField_t1631627530 * ___repasswordInput_6;
	// RegisterRequest RegisterPanel::registerRequest
	RegisterRequest_t698226714 * ___registerRequest_7;

public:
	inline static int32_t get_offset_of_usernameInput_4() { return static_cast<int32_t>(offsetof(RegisterPanel_t852150773, ___usernameInput_4)); }
	inline InputField_t1631627530 * get_usernameInput_4() const { return ___usernameInput_4; }
	inline InputField_t1631627530 ** get_address_of_usernameInput_4() { return &___usernameInput_4; }
	inline void set_usernameInput_4(InputField_t1631627530 * value)
	{
		___usernameInput_4 = value;
		Il2CppCodeGenWriteBarrier((&___usernameInput_4), value);
	}

	inline static int32_t get_offset_of_passwordInput_5() { return static_cast<int32_t>(offsetof(RegisterPanel_t852150773, ___passwordInput_5)); }
	inline InputField_t1631627530 * get_passwordInput_5() const { return ___passwordInput_5; }
	inline InputField_t1631627530 ** get_address_of_passwordInput_5() { return &___passwordInput_5; }
	inline void set_passwordInput_5(InputField_t1631627530 * value)
	{
		___passwordInput_5 = value;
		Il2CppCodeGenWriteBarrier((&___passwordInput_5), value);
	}

	inline static int32_t get_offset_of_repasswordInput_6() { return static_cast<int32_t>(offsetof(RegisterPanel_t852150773, ___repasswordInput_6)); }
	inline InputField_t1631627530 * get_repasswordInput_6() const { return ___repasswordInput_6; }
	inline InputField_t1631627530 ** get_address_of_repasswordInput_6() { return &___repasswordInput_6; }
	inline void set_repasswordInput_6(InputField_t1631627530 * value)
	{
		___repasswordInput_6 = value;
		Il2CppCodeGenWriteBarrier((&___repasswordInput_6), value);
	}

	inline static int32_t get_offset_of_registerRequest_7() { return static_cast<int32_t>(offsetof(RegisterPanel_t852150773, ___registerRequest_7)); }
	inline RegisterRequest_t698226714 * get_registerRequest_7() const { return ___registerRequest_7; }
	inline RegisterRequest_t698226714 ** get_address_of_registerRequest_7() { return &___registerRequest_7; }
	inline void set_registerRequest_7(RegisterRequest_t698226714 * value)
	{
		___registerRequest_7 = value;
		Il2CppCodeGenWriteBarrier((&___registerRequest_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTERPANEL_T852150773_H
#ifndef SYNCROLEMOVEREQUEST_T4136376837_H
#define SYNCROLEMOVEREQUEST_T4136376837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SyncRoleMoveRequest
struct  SyncRoleMoveRequest_t4136376837  : public BaseRequest_t3099896954
{
public:
	// UnityEngine.GameObject SyncRoleMoveRequest::remoteRole
	GameObject_t1756533147 * ___remoteRole_5;
	// UnityEngine.Animator SyncRoleMoveRequest::remoteRoleAnim
	Animator_t69676727 * ___remoteRoleAnim_6;
	// UnityEngine.GameObject SyncRoleMoveRequest::currentRole
	GameObject_t1756533147 * ___currentRole_7;
	// PlayerMove SyncRoleMoveRequest::currentPlayerMove
	PlayerMove_t195622780 * ___currentPlayerMove_8;
	// UnityEngine.Vector3 SyncRoleMoveRequest::remoteRolePos
	Vector3_t2243707580  ___remoteRolePos_9;
	// UnityEngine.Vector3 SyncRoleMoveRequest::remoteRoleRot
	Vector3_t2243707580  ___remoteRoleRot_10;
	// System.Single SyncRoleMoveRequest::remoteForward
	float ___remoteForward_11;
	// System.Boolean SyncRoleMoveRequest::isSync
	bool ___isSync_12;

public:
	inline static int32_t get_offset_of_remoteRole_5() { return static_cast<int32_t>(offsetof(SyncRoleMoveRequest_t4136376837, ___remoteRole_5)); }
	inline GameObject_t1756533147 * get_remoteRole_5() const { return ___remoteRole_5; }
	inline GameObject_t1756533147 ** get_address_of_remoteRole_5() { return &___remoteRole_5; }
	inline void set_remoteRole_5(GameObject_t1756533147 * value)
	{
		___remoteRole_5 = value;
		Il2CppCodeGenWriteBarrier((&___remoteRole_5), value);
	}

	inline static int32_t get_offset_of_remoteRoleAnim_6() { return static_cast<int32_t>(offsetof(SyncRoleMoveRequest_t4136376837, ___remoteRoleAnim_6)); }
	inline Animator_t69676727 * get_remoteRoleAnim_6() const { return ___remoteRoleAnim_6; }
	inline Animator_t69676727 ** get_address_of_remoteRoleAnim_6() { return &___remoteRoleAnim_6; }
	inline void set_remoteRoleAnim_6(Animator_t69676727 * value)
	{
		___remoteRoleAnim_6 = value;
		Il2CppCodeGenWriteBarrier((&___remoteRoleAnim_6), value);
	}

	inline static int32_t get_offset_of_currentRole_7() { return static_cast<int32_t>(offsetof(SyncRoleMoveRequest_t4136376837, ___currentRole_7)); }
	inline GameObject_t1756533147 * get_currentRole_7() const { return ___currentRole_7; }
	inline GameObject_t1756533147 ** get_address_of_currentRole_7() { return &___currentRole_7; }
	inline void set_currentRole_7(GameObject_t1756533147 * value)
	{
		___currentRole_7 = value;
		Il2CppCodeGenWriteBarrier((&___currentRole_7), value);
	}

	inline static int32_t get_offset_of_currentPlayerMove_8() { return static_cast<int32_t>(offsetof(SyncRoleMoveRequest_t4136376837, ___currentPlayerMove_8)); }
	inline PlayerMove_t195622780 * get_currentPlayerMove_8() const { return ___currentPlayerMove_8; }
	inline PlayerMove_t195622780 ** get_address_of_currentPlayerMove_8() { return &___currentPlayerMove_8; }
	inline void set_currentPlayerMove_8(PlayerMove_t195622780 * value)
	{
		___currentPlayerMove_8 = value;
		Il2CppCodeGenWriteBarrier((&___currentPlayerMove_8), value);
	}

	inline static int32_t get_offset_of_remoteRolePos_9() { return static_cast<int32_t>(offsetof(SyncRoleMoveRequest_t4136376837, ___remoteRolePos_9)); }
	inline Vector3_t2243707580  get_remoteRolePos_9() const { return ___remoteRolePos_9; }
	inline Vector3_t2243707580 * get_address_of_remoteRolePos_9() { return &___remoteRolePos_9; }
	inline void set_remoteRolePos_9(Vector3_t2243707580  value)
	{
		___remoteRolePos_9 = value;
	}

	inline static int32_t get_offset_of_remoteRoleRot_10() { return static_cast<int32_t>(offsetof(SyncRoleMoveRequest_t4136376837, ___remoteRoleRot_10)); }
	inline Vector3_t2243707580  get_remoteRoleRot_10() const { return ___remoteRoleRot_10; }
	inline Vector3_t2243707580 * get_address_of_remoteRoleRot_10() { return &___remoteRoleRot_10; }
	inline void set_remoteRoleRot_10(Vector3_t2243707580  value)
	{
		___remoteRoleRot_10 = value;
	}

	inline static int32_t get_offset_of_remoteForward_11() { return static_cast<int32_t>(offsetof(SyncRoleMoveRequest_t4136376837, ___remoteForward_11)); }
	inline float get_remoteForward_11() const { return ___remoteForward_11; }
	inline float* get_address_of_remoteForward_11() { return &___remoteForward_11; }
	inline void set_remoteForward_11(float value)
	{
		___remoteForward_11 = value;
	}

	inline static int32_t get_offset_of_isSync_12() { return static_cast<int32_t>(offsetof(SyncRoleMoveRequest_t4136376837, ___isSync_12)); }
	inline bool get_isSync_12() const { return ___isSync_12; }
	inline bool* get_address_of_isSync_12() { return &___isSync_12; }
	inline void set_isSync_12(bool value)
	{
		___isSync_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCROLEMOVEREQUEST_T4136376837_H
#ifndef COUNTDOWNREQUEST_T4169500584_H
#define COUNTDOWNREQUEST_T4169500584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CountDownRequest
struct  CountDownRequest_t4169500584  : public BaseRequest_t3099896954
{
public:
	// GamePanel CountDownRequest::gamePanel
	GamePanel_t539122112 * ___gamePanel_5;

public:
	inline static int32_t get_offset_of_gamePanel_5() { return static_cast<int32_t>(offsetof(CountDownRequest_t4169500584, ___gamePanel_5)); }
	inline GamePanel_t539122112 * get_gamePanel_5() const { return ___gamePanel_5; }
	inline GamePanel_t539122112 ** get_address_of_gamePanel_5() { return &___gamePanel_5; }
	inline void set_gamePanel_5(GamePanel_t539122112 * value)
	{
		___gamePanel_5 = value;
		Il2CppCodeGenWriteBarrier((&___gamePanel_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COUNTDOWNREQUEST_T4169500584_H
#ifndef SYNCROLESHOOTREQUEST_T287347991_H
#define SYNCROLESHOOTREQUEST_T287347991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SyncRoleShootRequest
struct  SyncRoleShootRequest_t287347991  : public BaseRequest_t3099896954
{
public:
	// RoleData SyncRoleShootRequest::remoteRoleData
	RoleData_t2970593024 * ___remoteRoleData_5;
	// UnityEngine.Animator SyncRoleShootRequest::remoteRoleAnim
	Animator_t69676727 * ___remoteRoleAnim_6;
	// UnityEngine.Vector3 SyncRoleShootRequest::remoteArrowPos
	Vector3_t2243707580  ___remoteArrowPos_7;
	// UnityEngine.Vector3 SyncRoleShootRequest::remoteArrowRot
	Vector3_t2243707580  ___remoteArrowRot_8;
	// System.Boolean SyncRoleShootRequest::isShoot
	bool ___isShoot_9;

public:
	inline static int32_t get_offset_of_remoteRoleData_5() { return static_cast<int32_t>(offsetof(SyncRoleShootRequest_t287347991, ___remoteRoleData_5)); }
	inline RoleData_t2970593024 * get_remoteRoleData_5() const { return ___remoteRoleData_5; }
	inline RoleData_t2970593024 ** get_address_of_remoteRoleData_5() { return &___remoteRoleData_5; }
	inline void set_remoteRoleData_5(RoleData_t2970593024 * value)
	{
		___remoteRoleData_5 = value;
		Il2CppCodeGenWriteBarrier((&___remoteRoleData_5), value);
	}

	inline static int32_t get_offset_of_remoteRoleAnim_6() { return static_cast<int32_t>(offsetof(SyncRoleShootRequest_t287347991, ___remoteRoleAnim_6)); }
	inline Animator_t69676727 * get_remoteRoleAnim_6() const { return ___remoteRoleAnim_6; }
	inline Animator_t69676727 ** get_address_of_remoteRoleAnim_6() { return &___remoteRoleAnim_6; }
	inline void set_remoteRoleAnim_6(Animator_t69676727 * value)
	{
		___remoteRoleAnim_6 = value;
		Il2CppCodeGenWriteBarrier((&___remoteRoleAnim_6), value);
	}

	inline static int32_t get_offset_of_remoteArrowPos_7() { return static_cast<int32_t>(offsetof(SyncRoleShootRequest_t287347991, ___remoteArrowPos_7)); }
	inline Vector3_t2243707580  get_remoteArrowPos_7() const { return ___remoteArrowPos_7; }
	inline Vector3_t2243707580 * get_address_of_remoteArrowPos_7() { return &___remoteArrowPos_7; }
	inline void set_remoteArrowPos_7(Vector3_t2243707580  value)
	{
		___remoteArrowPos_7 = value;
	}

	inline static int32_t get_offset_of_remoteArrowRot_8() { return static_cast<int32_t>(offsetof(SyncRoleShootRequest_t287347991, ___remoteArrowRot_8)); }
	inline Vector3_t2243707580  get_remoteArrowRot_8() const { return ___remoteArrowRot_8; }
	inline Vector3_t2243707580 * get_address_of_remoteArrowRot_8() { return &___remoteArrowRot_8; }
	inline void set_remoteArrowRot_8(Vector3_t2243707580  value)
	{
		___remoteArrowRot_8 = value;
	}

	inline static int32_t get_offset_of_isShoot_9() { return static_cast<int32_t>(offsetof(SyncRoleShootRequest_t287347991, ___isShoot_9)); }
	inline bool get_isShoot_9() const { return ___isShoot_9; }
	inline bool* get_address_of_isShoot_9() { return &___isShoot_9; }
	inline void set_isShoot_9(bool value)
	{
		___isShoot_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCROLESHOOTREQUEST_T287347991_H
#ifndef UPDATEROOMREQUEST_T4091153737_H
#define UPDATEROOMREQUEST_T4091153737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdateRoomRequest
struct  UpdateRoomRequest_t4091153737  : public BaseRequest_t3099896954
{
public:
	// RoomPanel UpdateRoomRequest::roomPanel
	RoomPanel_t529970467 * ___roomPanel_5;

public:
	inline static int32_t get_offset_of_roomPanel_5() { return static_cast<int32_t>(offsetof(UpdateRoomRequest_t4091153737, ___roomPanel_5)); }
	inline RoomPanel_t529970467 * get_roomPanel_5() const { return ___roomPanel_5; }
	inline RoomPanel_t529970467 ** get_address_of_roomPanel_5() { return &___roomPanel_5; }
	inline void set_roomPanel_5(RoomPanel_t529970467 * value)
	{
		___roomPanel_5 = value;
		Il2CppCodeGenWriteBarrier((&___roomPanel_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEROOMREQUEST_T4091153737_H
#ifndef UPDATERECORDREQUEST_T2266817799_H
#define UPDATERECORDREQUEST_T2266817799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UpdateRecordRequest
struct  UpdateRecordRequest_t2266817799  : public BaseRequest_t3099896954
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATERECORDREQUEST_T2266817799_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2100 = { sizeof (AberrationMode_t3949418959)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2100[3] = 
{
	AberrationMode_t3949418959::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2101 = { sizeof (Vortex_t4170634026), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2101[3] = 
{
	Vortex_t4170634026::get_offset_of_radius_4(),
	Vortex_t4170634026::get_offset_of_angle_5(),
	Vortex_t4170634026::get_offset_of_center_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2102 = { sizeof (FollowTarget_t2817477884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2102[3] = 
{
	FollowTarget_t2817477884::get_offset_of_target_2(),
	FollowTarget_t2817477884::get_offset_of_offset_3(),
	FollowTarget_t2817477884::get_offset_of_smoothing_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2103 = { sizeof (GameFacade_t4180906540), -1, sizeof(GameFacade_t4180906540_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2103[7] = 
{
	GameFacade_t4180906540::get_offset_of_uiManager_2(),
	GameFacade_t4180906540::get_offset_of_cameraManager_3(),
	GameFacade_t4180906540::get_offset_of_audioManager_4(),
	GameFacade_t4180906540::get_offset_of_playerManager_5(),
	GameFacade_t4180906540::get_offset_of_requestManager_6(),
	GameFacade_t4180906540::get_offset_of_clientManager_7(),
	GameFacade_t4180906540_StaticFields::get_offset_of_instance_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2104 = { sizeof (AudioManager_t4222704959), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2104[10] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	AudioManager_t4222704959::get_offset_of_bgAudioSource_9(),
	AudioManager_t4222704959::get_offset_of_soundAudioSource_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2105 = { sizeof (BaseManager_t2372802720), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2105[1] = 
{
	BaseManager_t2372802720::get_offset_of_facade_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2106 = { sizeof (CameraManager_t2379859346), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2106[5] = 
{
	CameraManager_t2379859346::get_offset_of_cameraAnimator_1(),
	CameraManager_t2379859346::get_offset_of_cameraTrans_2(),
	CameraManager_t2379859346::get_offset_of_followTarget_3(),
	CameraManager_t2379859346::get_offset_of_roamPosition_4(),
	CameraManager_t2379859346::get_offset_of_roamRotation_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2107 = { sizeof (ClientManager_t4009004882), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2107[3] = 
{
	0,
	0,
	ClientManager_t4009004882::get_offset_of_clientSocket_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2108 = { sizeof (PlayerManager_t1596653588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2108[12] = 
{
	PlayerManager_t1596653588::get_offset_of_U3CCurrentRoleTypeU3Ek__BackingField_1(),
	PlayerManager_t1596653588::get_offset_of_U3CCurrentRoleU3Ek__BackingField_2(),
	PlayerManager_t1596653588::get_offset_of_remoteRole_3(),
	PlayerManager_t1596653588::get_offset_of_currentRoleData_4(),
	PlayerManager_t1596653588::get_offset_of_remoteRoleData_5(),
	PlayerManager_t1596653588::get_offset_of_userData_6(),
	PlayerManager_t1596653588::get_offset_of_roleDatas_7(),
	PlayerManager_t1596653588::get_offset_of_spawnPointBlue_8(),
	PlayerManager_t1596653588::get_offset_of_spawnPointRed_9(),
	PlayerManager_t1596653588::get_offset_of_playerAttack_10(),
	PlayerManager_t1596653588::get_offset_of_syncRoleAttackRequest_11(),
	PlayerManager_t1596653588::get_offset_of_gameOverRequest_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2109 = { sizeof (RequestManager_t755409356), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2109[1] = 
{
	RequestManager_t755409356::get_offset_of_requests_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2110 = { sizeof (UIManager_t2519183485), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2110[6] = 
{
	UIManager_t2519183485::get_offset_of_panelTypeToPush_1(),
	UIManager_t2519183485::get_offset_of_uiTrans_2(),
	UIManager_t2519183485::get_offset_of_panelPaths_3(),
	UIManager_t2519183485::get_offset_of_panels_4(),
	UIManager_t2519183485::get_offset_of_panelsStack_5(),
	UIManager_t2519183485::get_offset_of_messagePanel_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2111 = { sizeof (UIPanelTypeJson_t4047001564), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2111[1] = 
{
	UIPanelTypeJson_t4047001564::get_offset_of_panelInfo_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2112 = { sizeof (RoleData_t2970593024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2112[4] = 
{
	RoleData_t2970593024::get_offset_of_U3CRoleTypeU3Ek__BackingField_0(),
	RoleData_t2970593024::get_offset_of_U3CRolePrefabU3Ek__BackingField_1(),
	RoleData_t2970593024::get_offset_of_U3CArrowPrefabU3Ek__BackingField_2(),
	RoleData_t2970593024::get_offset_of_U3CSpawnPointU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2113 = { sizeof (UserData_t4018655545), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2113[4] = 
{
	UserData_t4018655545::get_offset_of_U3CUseridU3Ek__BackingField_0(),
	UserData_t4018655545::get_offset_of_U3CUsernameU3Ek__BackingField_1(),
	UserData_t4018655545::get_offset_of_U3CTotalcountU3Ek__BackingField_2(),
	UserData_t4018655545::get_offset_of_U3CWincountU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2114 = { sizeof (Message_t3927391693), -1, sizeof(Message_t3927391693_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2114[2] = 
{
	Message_t3927391693_StaticFields::get_offset_of_data_0(),
	Message_t3927391693_StaticFields::get_offset_of_startIndex_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2115 = { sizeof (Arrow_t3589335331), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2115[5] = 
{
	Arrow_t3589335331::get_offset_of_explosionEffect_2(),
	Arrow_t3589335331::get_offset_of_speed_3(),
	Arrow_t3589335331::get_offset_of_rb_4(),
	Arrow_t3589335331::get_offset_of_attack_5(),
	Arrow_t3589335331::get_offset_of_U3CIsCurrentU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2116 = { sizeof (PlayerAttack_t1510648285), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2116[5] = 
{
	PlayerAttack_t1510648285::get_offset_of_arrowPrefab_2(),
	PlayerAttack_t1510648285::get_offset_of_playerAnimator_3(),
	PlayerAttack_t1510648285::get_offset_of_leftHandTrans_4(),
	PlayerAttack_t1510648285::get_offset_of_shootDir_5(),
	PlayerAttack_t1510648285::get_offset_of_U3CSyncRoleShootRequestU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2117 = { sizeof (PlayerHealth_t2894595013), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2117[4] = 
{
	PlayerHealth_t2894595013::get_offset_of_hp_2(),
	PlayerHealth_t2894595013::get_offset_of_maxHp_3(),
	PlayerHealth_t2894595013::get_offset_of_bloodSlider_4(),
	PlayerHealth_t2894595013::get_offset_of_isUpdateBlood_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2118 = { sizeof (PlayerMove_t195622780), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2118[3] = 
{
	PlayerMove_t195622780::get_offset_of_U3CForwardU3Ek__BackingField_2(),
	PlayerMove_t195622780::get_offset_of_speed_3(),
	PlayerMove_t195622780::get_offset_of_playerAnimator_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2119 = { sizeof (BaseRequest_t3099896954), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2119[3] = 
{
	BaseRequest_t3099896954::get_offset_of_requestCode_2(),
	BaseRequest_t3099896954::get_offset_of_actionCode_3(),
	BaseRequest_t3099896954::get_offset_of_facade_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2120 = { sizeof (CountDownRequest_t4169500584), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2120[1] = 
{
	CountDownRequest_t4169500584::get_offset_of_gamePanel_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2121 = { sizeof (CreateRoomRequest_t3704453372), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2121[1] = 
{
	CreateRoomRequest_t3704453372::get_offset_of_roomPanel_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2122 = { sizeof (GameOverRequest_t2692618111), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2122[3] = 
{
	GameOverRequest_t2692618111::get_offset_of_gamePanel_5(),
	GameOverRequest_t2692618111::get_offset_of_isGameOver_6(),
	GameOverRequest_t2692618111::get_offset_of_returnCode_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2123 = { sizeof (JoinRoomRequest_t53532236), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2123[1] = 
{
	JoinRoomRequest_t53532236::get_offset_of_roomListPanel_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2124 = { sizeof (LeaveRoomRequest_t147230195), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2124[1] = 
{
	LeaveRoomRequest_t147230195::get_offset_of_roomPanel_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2125 = { sizeof (LoginRequest_t2273172322), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2125[1] = 
{
	LoginRequest_t2273172322::get_offset_of_loginPanel_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2126 = { sizeof (QuitBattleRequest_t2423038290), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2126[2] = 
{
	QuitBattleRequest_t2423038290::get_offset_of_gamePanel_5(),
	QuitBattleRequest_t2423038290::get_offset_of_isQuit_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2127 = { sizeof (RegisterRequest_t698226714), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2127[1] = 
{
	RegisterRequest_t698226714::get_offset_of_registerPanel_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2128 = { sizeof (ShowRoomRequest_t4000912775), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2128[1] = 
{
	ShowRoomRequest_t4000912775::get_offset_of_roomListPanel_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2129 = { sizeof (StartBattleRequest_t1286880561), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2129[1] = 
{
	StartBattleRequest_t1286880561::get_offset_of_isStartBattle_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2130 = { sizeof (StartGameRequest_t2744624181), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2130[1] = 
{
	StartGameRequest_t2744624181::get_offset_of_roomPanel_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2131 = { sizeof (SyncRoleAttackRequest_t2768771284), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2131[1] = 
{
	SyncRoleAttackRequest_t2768771284::get_offset_of_U3CCurrentPlayerHealthU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2132 = { sizeof (SyncRoleBloodRequest_t1077129738), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2132[4] = 
{
	SyncRoleBloodRequest_t1077129738::get_offset_of_bloodSlider_5(),
	SyncRoleBloodRequest_t1077129738::get_offset_of_maxHp_6(),
	SyncRoleBloodRequest_t1077129738::get_offset_of_hp_7(),
	SyncRoleBloodRequest_t1077129738::get_offset_of_isUpdateBlood_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2133 = { sizeof (SyncRoleMoveRequest_t4136376837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2133[8] = 
{
	SyncRoleMoveRequest_t4136376837::get_offset_of_remoteRole_5(),
	SyncRoleMoveRequest_t4136376837::get_offset_of_remoteRoleAnim_6(),
	SyncRoleMoveRequest_t4136376837::get_offset_of_currentRole_7(),
	SyncRoleMoveRequest_t4136376837::get_offset_of_currentPlayerMove_8(),
	SyncRoleMoveRequest_t4136376837::get_offset_of_remoteRolePos_9(),
	SyncRoleMoveRequest_t4136376837::get_offset_of_remoteRoleRot_10(),
	SyncRoleMoveRequest_t4136376837::get_offset_of_remoteForward_11(),
	SyncRoleMoveRequest_t4136376837::get_offset_of_isSync_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2134 = { sizeof (SyncRoleShootRequest_t287347991), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2134[5] = 
{
	SyncRoleShootRequest_t287347991::get_offset_of_remoteRoleData_5(),
	SyncRoleShootRequest_t287347991::get_offset_of_remoteRoleAnim_6(),
	SyncRoleShootRequest_t287347991::get_offset_of_remoteArrowPos_7(),
	SyncRoleShootRequest_t287347991::get_offset_of_remoteArrowRot_8(),
	SyncRoleShootRequest_t287347991::get_offset_of_isShoot_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2135 = { sizeof (UpdateRecordRequest_t2266817799), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2136 = { sizeof (UpdateRoomRequest_t4091153737), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2136[1] = 
{
	UpdateRoomRequest_t4091153737::get_offset_of_roomPanel_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2137 = { sizeof (DestroyByTime_t1319923286), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2137[1] = 
{
	DestroyByTime_t1319923286::get_offset_of_time_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2138 = { sizeof (BasePanel_t542715433), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2138[2] = 
{
	BasePanel_t542715433::get_offset_of_uiManager_2(),
	BasePanel_t542715433::get_offset_of_facade_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2139 = { sizeof (GamePanel_t539122112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2139[8] = 
{
	GamePanel_t539122112::get_offset_of_timerText_4(),
	GamePanel_t539122112::get_offset_of_time_5(),
	GamePanel_t539122112::get_offset_of_isStart_6(),
	GamePanel_t539122112::get_offset_of_isGameOver_7(),
	GamePanel_t539122112::get_offset_of_victoryTrans_8(),
	GamePanel_t539122112::get_offset_of_defeatTrans_9(),
	GamePanel_t539122112::get_offset_of_quitButton_10(),
	GamePanel_t539122112::get_offset_of_quitBattleRequest_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2140 = { sizeof (LoginPanel_t257791075), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2140[3] = 
{
	LoginPanel_t257791075::get_offset_of_usernameInput_4(),
	LoginPanel_t257791075::get_offset_of_passwordInput_5(),
	LoginPanel_t257791075::get_offset_of_loginRequest_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2141 = { sizeof (MessagePanel_t1958872291), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2141[2] = 
{
	MessagePanel_t1958872291::get_offset_of_text_4(),
	MessagePanel_t1958872291::get_offset_of_message_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2142 = { sizeof (RegisterPanel_t852150773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2142[4] = 
{
	RegisterPanel_t852150773::get_offset_of_usernameInput_4(),
	RegisterPanel_t852150773::get_offset_of_passwordInput_5(),
	RegisterPanel_t852150773::get_offset_of_repasswordInput_6(),
	RegisterPanel_t852150773::get_offset_of_registerRequest_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2143 = { sizeof (RoomItem_t419916276), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2143[5] = 
{
	RoomItem_t419916276::get_offset_of_userNameText_4(),
	RoomItem_t419916276::get_offset_of_totalCountText_5(),
	RoomItem_t419916276::get_offset_of_winCountText_6(),
	RoomItem_t419916276::get_offset_of_roomListPanel_7(),
	RoomItem_t419916276::get_offset_of_roomId_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2144 = { sizeof (RoomListPanel_t2151956597), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2144[14] = 
{
	RoomListPanel_t2151956597::get_offset_of_userDetailPanel_4(),
	RoomListPanel_t2151956597::get_offset_of_roomListPanel_5(),
	RoomListPanel_t2151956597::get_offset_of_userNameText_6(),
	RoomListPanel_t2151956597::get_offset_of_totalCountText_7(),
	RoomListPanel_t2151956597::get_offset_of_winCountText_8(),
	RoomListPanel_t2151956597::get_offset_of_layout_9(),
	RoomListPanel_t2151956597::get_offset_of_roomItem_10(),
	RoomListPanel_t2151956597::get_offset_of_layoutHeight_11(),
	RoomListPanel_t2151956597::get_offset_of_showRoomRequest_12(),
	RoomListPanel_t2151956597::get_offset_of_createRoomRequest_13(),
	RoomListPanel_t2151956597::get_offset_of_joinRoomRequest_14(),
	RoomListPanel_t2151956597::get_offset_of_userList_15(),
	RoomListPanel_t2151956597::get_offset_of_blueUserData_16(),
	RoomListPanel_t2151956597::get_offset_of_redUserData_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2145 = { sizeof (RoomPanel_t529970467), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2145[17] = 
{
	RoomPanel_t529970467::get_offset_of_bluePanel_4(),
	RoomPanel_t529970467::get_offset_of_redPanel_5(),
	RoomPanel_t529970467::get_offset_of_blueUsername_6(),
	RoomPanel_t529970467::get_offset_of_blueTotalcount_7(),
	RoomPanel_t529970467::get_offset_of_blueWincount_8(),
	RoomPanel_t529970467::get_offset_of_redUsername_9(),
	RoomPanel_t529970467::get_offset_of_redTotalcount_10(),
	RoomPanel_t529970467::get_offset_of_redTotal_11(),
	RoomPanel_t529970467::get_offset_of_redWincount_12(),
	RoomPanel_t529970467::get_offset_of_redWin_13(),
	RoomPanel_t529970467::get_offset_of_startButton_14(),
	RoomPanel_t529970467::get_offset_of_leaveButton_15(),
	RoomPanel_t529970467::get_offset_of_blueUserData_16(),
	RoomPanel_t529970467::get_offset_of_redUserData_17(),
	RoomPanel_t529970467::get_offset_of_leaveRoomRequest_18(),
	RoomPanel_t529970467::get_offset_of_startGameRequest_19(),
	RoomPanel_t529970467::get_offset_of_isPopPanel_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2146 = { sizeof (StartPanel_t247594438), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2147 = { sizeof (DictionaryExtension_t2699231967), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2148 = { sizeof (UIPanelInfo_t462297968), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2148[3] = 
{
	UIPanelInfo_t462297968::get_offset_of_panelType_0(),
	UIPanelInfo_t462297968::get_offset_of_panelTypeName_1(),
	UIPanelInfo_t462297968::get_offset_of_path_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2149 = { sizeof (UIPanelType_t1329734852)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2149[9] = 
{
	UIPanelType_t1329734852::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
