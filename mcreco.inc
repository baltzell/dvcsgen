*********************************************************
*                                                       *
* This file was generated by HUWFUN.                    *
*                                                       *
*********************************************************
*
*     Ntuple Id:      22   
*     Ntuple Title:   semiout
*     Creation:       23/10/2003 13.06.39
*
*********************************************************
*
      LOGICAL         CHAIN
      CHARACTER*128   CFILE
      INTEGER         IDNEVT,NCHEVT,ICHEVT
      REAL            OBS(13)
*
      COMMON /PAWIDN/ IDNEVT,OBS
      COMMON /PAWCHN/ CHAIN, NCHEVT, ICHEVT
      COMMON /PAWCHC/ CFILE
*
*--   Ntuple Variable Declarations
*
      REAL elee,elet,elef,elex,eley,elez,xb,q2,w,eleca,eleco,eleci,elece
     + ,elecx,elecy,elecz,pi0e,pi0t,pi0f,pi0v,pi0m,pi0tt,pi0fs,proe,prot
     + ,prof,prox,proy,proz,protm,protg,protl,protv,protmis,prott,profs
     + ,game,gamt,gamf,gaml,gamv,gamm,gamtt,gamfs,gam2t,gam2e,gam2f,pim
     + ,gamx,gamy,gamz,gam2x,gam2y,gam2z,gelee,gelet,gelef,gelex,geley
     + ,gelez,gxb,gq2,gw,gwgt,gpi0e,gpi0t,gpi0f,gpi0v,gpi0m,gpi0tt
     + ,gpi0fs,gproe,gprot,gprof,gprox,gproy,gproz,gprotm,gprotg,gprotl
     + ,gprotv,gprotmis,gprott,gprofs,ggame,ggamt,ggamf,ggaml,ggamv
     + ,ggamm,ggamtt,ggamfs,ggam2t,ggam2e,ggam2f,gpim,ggamx,ggamy,ggamz
     + ,ggam2x,ggam2y,ggam2z
      INTEGER nele,eleevtclass,eleh,elerun,eletype,eleevent,npi0,nch
     + ,npro,ngam,gnele,geleh,gproh,gnpi0,gnch,gnpro,gngam
*
      COMMON /PAWCR4/ nele,eleevtclass,eleh,elerun,eletype,eleevent,elee
     + ,elet,elef,elex,eley,elez,xb,q2,w,eleca,eleco,eleci,elece,elecx
     + ,elecy,elecz,npi0,nch,npro,ngam,pi0e,pi0t,pi0f,pi0v,pi0m,pi0tt
     + ,pi0fs,proe,prot,prof,prox,proy,proz,protm,protg,protl,protv
     + ,protmis,prott,profs,game,gamt,gamf,gaml,gamv,gamm,gamtt,gamfs
     + ,gam2t,gam2e,gam2f,pim,gamx,gamy,gamz,gam2x,gam2y,gam2z,gnele
     + ,geleh,gproh,gelee,gelet,gelef,gelex,geley,gelez,gxb,gq2,gw,gwgt
     + ,gnpi0,gnch,gnpro,gngam,gpi0e,gpi0t,gpi0f,gpi0v,gpi0m,gpi0tt
     + ,gpi0fs,gproe,gprot,gprof,gprox,gproy,gproz,gprotm,gprotg,gprotl
     + ,gprotv,gprotmis,gprott,gprofs,ggame,ggamt,ggamf,ggaml,ggamv
     + ,ggamm,ggamtt,ggamfs,ggam2t,ggam2e,ggam2f,gpim,ggamx,ggamy,ggamz
     + ,ggam2x,ggam2y,ggam2z
