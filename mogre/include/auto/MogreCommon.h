/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreCommon.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	public enum class ClipResult
	{
		CLIPPED_NONE = Ogre::CLIPPED_NONE,
		CLIPPED_SOME = Ogre::CLIPPED_SOME,
		CLIPPED_ALL = Ogre::CLIPPED_ALL
	};
	
	public enum class FrameBufferType
	{
		FBT_COLOUR = Ogre::FBT_COLOUR,
		FBT_DEPTH = Ogre::FBT_DEPTH,
		FBT_STENCIL = Ogre::FBT_STENCIL
	};
	
	public enum class SortMode
	{
		SM_DIRECTION = Ogre::SM_DIRECTION,
		SM_DISTANCE = Ogre::SM_DISTANCE
	};
	
	public enum class TrackVertexColourEnum
	{
		TVC_NONE = Ogre::TVC_NONE,
		TVC_AMBIENT = Ogre::TVC_AMBIENT,
		TVC_DIFFUSE = Ogre::TVC_DIFFUSE,
		TVC_SPECULAR = Ogre::TVC_SPECULAR,
		TVC_EMISSIVE = Ogre::TVC_EMISSIVE
	};
	
	public enum class ShadowTechnique
	{
		SHADOWTYPE_NONE = Ogre::SHADOWTYPE_NONE,
		SHADOWDETAILTYPE_ADDITIVE = Ogre::SHADOWDETAILTYPE_ADDITIVE,
		SHADOWDETAILTYPE_MODULATIVE = Ogre::SHADOWDETAILTYPE_MODULATIVE,
		SHADOWDETAILTYPE_INTEGRATED = Ogre::SHADOWDETAILTYPE_INTEGRATED,
		SHADOWDETAILTYPE_STENCIL = Ogre::SHADOWDETAILTYPE_STENCIL,
		SHADOWDETAILTYPE_TEXTURE = Ogre::SHADOWDETAILTYPE_TEXTURE,
		SHADOWTYPE_STENCIL_MODULATIVE = Ogre::SHADOWTYPE_STENCIL_MODULATIVE,
		SHADOWTYPE_STENCIL_ADDITIVE = Ogre::SHADOWTYPE_STENCIL_ADDITIVE,
		SHADOWTYPE_TEXTURE_MODULATIVE = Ogre::SHADOWTYPE_TEXTURE_MODULATIVE,
		SHADOWTYPE_TEXTURE_ADDITIVE = Ogre::SHADOWTYPE_TEXTURE_ADDITIVE,
		SHADOWTYPE_TEXTURE_ADDITIVE_INTEGRATED = Ogre::SHADOWTYPE_TEXTURE_ADDITIVE_INTEGRATED,
		SHADOWTYPE_TEXTURE_MODULATIVE_INTEGRATED = Ogre::SHADOWTYPE_TEXTURE_MODULATIVE_INTEGRATED
	};
	
	public enum class PolygonMode
	{
		PM_POINTS = Ogre::PM_POINTS,
		PM_WIREFRAME = Ogre::PM_WIREFRAME,
		PM_SOLID = Ogre::PM_SOLID
	};
	
	public enum class WaveformType
	{
		WFT_SINE = Ogre::WFT_SINE,
		WFT_TRIANGLE = Ogre::WFT_TRIANGLE,
		WFT_SQUARE = Ogre::WFT_SQUARE,
		WFT_SAWTOOTH = Ogre::WFT_SAWTOOTH,
		WFT_INVERSE_SAWTOOTH = Ogre::WFT_INVERSE_SAWTOOTH,
		WFT_PWM = Ogre::WFT_PWM
	};
	
	public enum class ManualCullingMode
	{
		MANUAL_CULL_NONE = Ogre::MANUAL_CULL_NONE,
		MANUAL_CULL_BACK = Ogre::MANUAL_CULL_BACK,
		MANUAL_CULL_FRONT = Ogre::MANUAL_CULL_FRONT
	};
	
	public enum class CullingMode
	{
		CULL_NONE = Ogre::CULL_NONE,
		CULL_CLOCKWISE = Ogre::CULL_CLOCKWISE,
		CULL_ANTICLOCKWISE = Ogre::CULL_ANTICLOCKWISE
	};
	
	public enum class FogMode
	{
		FOG_NONE = Ogre::FOG_NONE,
		FOG_EXP = Ogre::FOG_EXP,
		FOG_EXP2 = Ogre::FOG_EXP2,
		FOG_LINEAR = Ogre::FOG_LINEAR
	};
	
	public enum class ShadeOptions
	{
		SO_FLAT = Ogre::SO_FLAT,
		SO_GOURAUD = Ogre::SO_GOURAUD,
		SO_PHONG = Ogre::SO_PHONG
	};
	
	public enum class FilterOptions
	{
		FO_NONE = Ogre::FO_NONE,
		FO_POINT = Ogre::FO_POINT,
		FO_LINEAR = Ogre::FO_LINEAR,
		FO_ANISOTROPIC = Ogre::FO_ANISOTROPIC
	};
	
	public enum class FilterType
	{
		FT_MIN = Ogre::FT_MIN,
		FT_MAG = Ogre::FT_MAG,
		FT_MIP = Ogre::FT_MIP
	};
	
	public enum class CompareFunction
	{
		CMPF_ALWAYS_FAIL = Ogre::CMPF_ALWAYS_FAIL,
		CMPF_ALWAYS_PASS = Ogre::CMPF_ALWAYS_PASS,
		CMPF_LESS = Ogre::CMPF_LESS,
		CMPF_LESS_EQUAL = Ogre::CMPF_LESS_EQUAL,
		CMPF_EQUAL = Ogre::CMPF_EQUAL,
		CMPF_NOT_EQUAL = Ogre::CMPF_NOT_EQUAL,
		CMPF_GREATER_EQUAL = Ogre::CMPF_GREATER_EQUAL,
		CMPF_GREATER = Ogre::CMPF_GREATER
	};
	
	public enum class TextureFilterOptions
	{
		TFO_NONE = Ogre::TFO_NONE,
		TFO_BILINEAR = Ogre::TFO_BILINEAR,
		TFO_TRILINEAR = Ogre::TFO_TRILINEAR,
		TFO_ANISOTROPIC = Ogre::TFO_ANISOTROPIC
	};
	
	typedef Ogre::TrackVertexColourType TrackVertexColourType;
	
	#define STLDECL_MANAGEDTYPE Mogre::Light^
	#define STLDECL_NATIVETYPE Ogre::Light*
	INC_DECLARE_STLHASHEDVECTOR( LightList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE bool
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE bool
	INC_DECLARE_STLMAP( UnaryOptionList, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public, private )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE String^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::String
	INC_DECLARE_STLMAP( BinaryOptionList, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public, private )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE String^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::String
	INC_DECLARE_STLMAP( NameValuePairList, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public, private )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE String^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::String
	INC_DECLARE_STLMAP( AliasTextureNamePairList, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public, private )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDTYPE Mogre::RenderWindow^
	#define STLDECL_NATIVETYPE Ogre::RenderWindow*
	INC_DECLARE_STLVECTOR( RenderWindowList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	

}
