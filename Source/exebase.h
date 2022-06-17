//---------------------------------------------------------------------------

#ifndef exebaseH
#define exebaseH

/*****************************************
 *              © 2007
 *          Mr Gregory Hicks
 *
 *****************************************
*/
class PACKAGE TExeBase : public TComponent
{
        typedef TComponent Inherited ;
        
private:
        AnsiString FCommandLine ;
        AnsiString FExeName ;
        AnsiString FcmdTail ;

        STARTUPINFO sINFO ;
        PROCESS_INFORMATION pINFO ;
        SECURITY_ATTRIBUTES sProcATTRIB, sThreadATTRIB ;

        int FWshow ;

        bool FbInheritHandles ;
        int  FdwCreationFlags ;
        
        void InitSECAttribs(SECURITY_ATTRIBUTES);

protected:

public:
        __fastcall TExeBase(TComponent *);
        virtual __fastcall ~TExeBase();

__published:

};
//---------------------------------------------------------------------------
#endif
