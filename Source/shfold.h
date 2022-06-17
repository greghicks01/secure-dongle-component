//---------------------------------------------------------------------------

#ifndef shfoldH
#define shfoldH

#include <vcl.h>
#include <shfolder.h>

class TShFolder : public TComponent
{
        typedef TComponent Inherited ;

public:
                __fastcall  TShFolder ( ) ;
        virtual __fastcall ~TShFolder ( ) ;
        
private:
        AnsiString __fastcall GetWindows ( ) ;
        AnsiString __fastcall GetSystem  ( ) ;
        AnsiString __fastcall GetProgramFiles ( ) ;
        AnsiString __fastcall GetProgramFilesComon ( ) ;

        void       __fastcall GetPathdata ( int ) ;

        AnsiString LastCSIDL_data ;

__published:
        __property AnsiString Windows            = { read = GetWindows           } ;
        __property AnsiString System             = { read = GetSystem            } ;
        __property AnsiString ProgramFiles       = { read = GetProgramFiles      } ;
        __property AnsiString ProgramFilesComon  = { read = GetProgramFilesComon } ;

} ;
//---------------------------------------------------------------------------
#endif
