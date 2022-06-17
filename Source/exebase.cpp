//---------------------------------------------------------------------------
/*
 *                     Copyright © 2007
 *                     Mr Gregory Hicks
 *
 *                 Software Project Engineer
 *                 Mr Gregory Hicks BIT CQU
 *
 *  $Revision: 1.2 $
 *
 *  $Log: exebase.cpp $
 *  Revision 1.2  2007/08/21 03:43:28  Administrator
 *  updated copyright
 *
 *
 *
*/


#include <vcl.h>
#pragma hdrstop

#include "exebase.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)


__fastcall TExeBase::TExeBase(TComponent * Owner ) : TComponent ( Owner )
{
        //TODO: Add your source code here
        sINFO.cb              = sizeof ( sINFO ) ;
        sINFO.lpReserved      = NULL ;
        sINFO.lpDesktop       = NULL ;
        sINFO.lpTitle         = NULL ;
        sINFO.dwX             = NULL ;
        sINFO.dwY             = NULL ;
        sINFO.dwXSize         = NULL ;
        sINFO.dwYSize         = NULL ;
        sINFO.dwXCountChars   = NULL ;
        sINFO.dwYCountChars   = NULL ;
        sINFO.dwFillAttribute = 0 ;
        sINFO.dwFlags         = STARTF_USESHOWWINDOW ;
        sINFO.wShowWindow     = NULL ;
        sINFO.cbReserved2     = NULL ;
        sINFO.lpReserved2     = NULL ;

        InitSECAttribs ( sProcATTRIB   ) ;
        InitSECAttribs ( sThreadATTRIB ) ;

}

__fastcall TExeBase::~TExeBase()
{
        //TODO: Add your source code here
}

void TExeBase::InitSECAttribs(SECURITY_ATTRIBUTES sATTRIB )
{
    //TODO: Add your source code here
    sATTRIB.nLength                = sizeof ( sATTRIB ) ;
    sATTRIB.lpSecurityDescriptor   = 0 ;
    sATTRIB.bInheritHandle         = 0 ;
}