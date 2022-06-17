//---------------------------------------------------------------------------


#pragma hdrstop

#include "shfold.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

__fastcall TShFolder::TShFolder():Inherited ( NULL )
{
        //TODO: Add your source code here
}

__fastcall TShFolder::~TShFolder()
{
        //TODO: Add your source code here
}

AnsiString __fastcall TShFolder::GetWindows()
{
        //TODO: Add your source code here
        GetPathdata ( CSIDL_WINDOWS );
        return LastCSIDL_data ;
}

AnsiString __fastcall TShFolder::GetSystem()
{
        //TODO: Add your source code here
        GetPathdata ( CSIDL_SYSTEM ) ;
        return LastCSIDL_data ;
}

AnsiString __fastcall TShFolder::GetProgramFiles()
{
        //TODO: Add your source code here
        GetPathdata ( CSIDL_PROGRAM_FILES )  ;
        return LastCSIDL_data ;
}

AnsiString __fastcall TShFolder::GetProgramFilesComon()
{
        //TODO: Add your source code here
        GetPathdata ( CSIDL_PROGRAM_FILES_COMMON )  ;
        return LastCSIDL_data ;
}

       //GetPathdata ( CSIDL_MYPICTURES )  ;

void __fastcall TShFolder::GetPathdata ( int folderConst )
{
        //TODO: Add your code here

        AnsiString szPath ;
        szPath.SetLength ( MAX_PATH + 1 ) ;
        HRESULT h = SHGetFolderPath(  NULL, folderConst , NULL, 0, szPath.c_str ( ) ) ;

        if ( h != NULL )
                szPath = "" ;

        LastCSIDL_data = static_cast < AnsiString > ( szPath.c_str ( ) ) ;
}

