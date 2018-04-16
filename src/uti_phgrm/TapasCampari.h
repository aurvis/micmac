#ifndef _ELISE_TAPAS_CAMPARI_H_
#define _ELISE_TAPAS_CAMPARI_H_

/*
   This file, who should have exist far before, contains some devlopment common to Tapas & Campari
*/


class cAppli_Tapas_Campari
{
    public :
       cAppli_Tapas_Campari();
       void AddParamBloc(std::string & mCom);
       LArgMain &     ArgATP();

       bool                        mWithBlock;
       std::string ExtendPattern(const std::string & aPatGlob,const std::string & aPatCenter,cInterfChantierNameManipulateur *);
       std::string TimeStamp(const std::string & aName,cInterfChantierNameManipulateur * anICNM);
       const cStructBlockCam &  SBC() const;

       void InitAllImages(const std::string & aPat,cInterfChantierNameManipulateur * anICNM);

       const std::vector<std::string> & BlocImagesByTime() const;
       const std::vector<std::string> & BlocTimeStamps() const;
       std::map<std::string,int> & BlocCptTime() ;

    private :
      
       std::string               mNameInputBloc;
       std::string               mNameOutputBloc;
       std::vector<std::string>  mVBlockRel;
       std::vector<std::string>  mVBlockGlob;
       std::vector<std::string>  mVBlockDistGlob;
       std::vector<std::string>  mVOptGlob;
       cStructBlockCam           mSBC;
       bool                      mNamesBlockInit;
       std::vector<std::string>  mBlocImagesByTime;
       std::vector<std::string>  mBlocTimeStamps;
       std::map<std::string,int> mBlocCptTime;
    private :
       void AddParamBloc(std::string & mCom,std::vector<std::string> & aVBL,const std::string & aPref,bool ModeRot);
       LArgMain                  *mArg;
};


#endif //  _ELISE_TAPAS_CAMPARI_H_