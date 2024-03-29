/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreGpuProgramManager.h"
#include "MogreResourceManager.h"
#include "MogrePrerequisites.h"
#include "MogreGpuProgram.h"

namespace Mogre
{
	//################################################################
	//GpuProgramManager
	//################################################################
	
	public ref class GpuProgramManager : public ResourceManager
	{
		//Nested Types
		public: ref class SyntaxCodes;
		public: ref class SharedParametersMap;
	
		#define STLDECL_MANAGEDTYPE String^
		#define STLDECL_NATIVETYPE Ogre::String
		public: INC_DECLARE_STLSET( SyntaxCodes, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::GpuSharedParametersPtr^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::GpuSharedParametersPtr
		public: INC_DECLARE_STLMAP( SharedParametersMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		//Private Declarations
	private protected:
		static GpuProgramManager^ _singleton;
	
		//Internal Declarations
	public protected:
		GpuProgramManager( Ogre::GpuProgramManager* obj ) : ResourceManager(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
		static property GpuProgramManager^ Singleton
		{
			GpuProgramManager^ get()
			{
				Ogre::GpuProgramManager* ptr = Ogre::GpuProgramManager::getSingletonPtr();
				if (_singleton == CLR_NULL || _singleton->_native != ptr)
				{
					if (_singleton != CLR_NULL)
					{
						_singleton->_native = 0;
						_singleton = nullptr;
					}
					if ( ptr ) _singleton = gcnew GpuProgramManager( ptr );
				}
				return _singleton;
			}
		}
	
		Mogre::GpuProgramPtr^ Load( String^ name, String^ groupName, String^ filename, Mogre::GpuProgramType gptype, String^ syntaxCode );
	
		Mogre::GpuProgramPtr^ LoadFromString( String^ name, String^ groupName, String^ code, Mogre::GpuProgramType gptype, String^ syntaxCode );
	
		Mogre::GpuProgramManager::Const_SyntaxCodes^ GetSupportedSyntax( );
	
		bool IsSyntaxSupported( String^ syntaxCode );
	
		Mogre::GpuProgramParametersSharedPtr^ CreateParameters( );
	
		Mogre::GpuProgramPtr^ CreateProgram( String^ name, String^ groupName, String^ filename, Mogre::GpuProgramType gptype, String^ syntaxCode );
	
		Mogre::GpuProgramPtr^ CreateProgramFromString( String^ name, String^ groupName, String^ code, Mogre::GpuProgramType gptype, String^ syntaxCode );
	
		Mogre::ResourcePtr^ Create( String^ name, String^ group, Mogre::GpuProgramType gptype, String^ syntaxCode, bool isManual, Mogre::IManualResourceLoader^ loader );
		Mogre::ResourcePtr^ Create( String^ name, String^ group, Mogre::GpuProgramType gptype, String^ syntaxCode, bool isManual );
		Mogre::ResourcePtr^ Create( String^ name, String^ group, Mogre::GpuProgramType gptype, String^ syntaxCode );
	
		Mogre::ResourcePtr^ GetByName( String^ name, bool preferHighLevelPrograms );
		Mogre::ResourcePtr^ GetByName( String^ name );
	
		Mogre::GpuSharedParametersPtr^ CreateSharedParameters( String^ name );
	
		Mogre::GpuSharedParametersPtr^ GetSharedParameters( String^ name );
	
		Mogre::GpuProgramManager::Const_SharedParametersMap^ GetAvailableSharedParameters( );
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
