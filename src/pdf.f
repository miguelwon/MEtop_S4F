      subroutine pdf(Flav,x,Q,f,gg)
      implicit double precision (a-h,o-z)
      parameter (Pi=3.14159265)
      integer Flav,imem
      double precision pdf1(-6:6)

      imem=0
      call parden(x,Q,pdf1,imem)
      GG=sqrt(4*Pi*alphasPDF(Q))
      f=pdf1(Flav)

      return
      end

************************************************************************

      subroutine parden(xpdf,Q,f,imem)
      implicit none
      character*64 name

      data name /'cteq6ll.LHpdf'/
      double precision xpdf,Q,f(-6:6)
      integer imem,init,lmem
      data init/0/
      data lmem/-1/
      save init,lmem
      if (init.eq.0) then
       init=1
       call SetLHAPARM('SILENT')
       call InitPDFsetByName(name)
       call InitPDF(imem)
      endif
c      if (imem.ne.lmem) then
c       lmem=imem
c      call InitPDF(lmem)
c      endif
      call evolvePDF(xpdf,Q,f)
      return
      end subroutine parden

*****************************************************************************

