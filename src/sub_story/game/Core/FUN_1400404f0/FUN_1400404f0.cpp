// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400404f0  size: 19 bytes
// Name:    FUN_1400404f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e58ae0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400404f0(void)

{
  ulonglong *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  byte bVar20;
  int iVar21;
  bool bVar22;
  int iStack_64;
  int iStack_60;
  ulonglong uStack_50;
  int iStack_44;
  
  FUN_144e58ae0();
  iRam000000014927f9b0 = 0;
  iStack_60 = 0;
  func_0x000145f40580(0x14927f978,0,(ulonglong)uRam000000014927f974 << 2);
  iStack_64 = 0;
  uVar19 = *(uint *)((longlong)_DAT_14abb6918 + 0xc);
  if (0 < (int)uVar19) {
    lVar17 = _DAT_14abb6918[5];
    uVar3 = *(uint *)(_DAT_14abb6918 + 6);
    lVar4 = *_DAT_14abb6918;
    lVar5 = _DAT_14abb6918[1];
    iVar21 = 0;
    uVar18 = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    do {
      if ((~*(uint *)(lVar17 + (ulonglong)(uVar18 & 0x1ffff) * 4) & uVar3) == 0 && lVar4 != 0) {
        uVar15 = (ulonglong)((uVar18 & 0x1ffff) * (int)lVar5);
        uVar12 = *(undefined4 *)(lVar4 + 0x9c + uVar15);
        lVar13 = func_0x000144e59150(uVar12);
        if ((lVar13 != 0) && ((*(byte *)(lVar13 + 0x158) & 1) != 0)) {
          cVar7 = FUN_144e59120(uVar12);
          if (cVar7 == '\0') {
            lVar13 = func_0x000144e591d0(uVar12);
            if ((lVar13 != 0) && (*(int *)(lVar13 + 0xa0) != 0)) {
              iVar21 = iVar21 + 1;
              iRam000000014927f9b0 = iVar21;
            }
            uVar8 = FUN_144e59220(uVar12,*(undefined4 *)(lVar4 + 0xe8 + uVar15));
            if ((int)uVar8 < 0xd) {
              piVar2 = (int *)((ulonglong)uVar8 * 4 + 0x14927f978);
              *piVar2 = *piVar2 + 1;
            }
          }
          else {
            iStack_64 = iStack_64 + 1;
            lVar13 = func_0x000144e591d0(uVar12);
            if (lVar13 != 0) {
              iStack_60 = iStack_60 + (uint)*(byte *)(lVar13 + 0x138);
            }
          }
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar19 != uVar18);
  }
  iVar9 = FUN_140040610();
  iVar10 = func_0x000140040510(iVar9,iRam000000014927f9ac,iStack_64);
  iVar21 = iRam000000014927f9b0;
  iStack_44 = iRam000000014927f9b8;
  iRam000000014927f9ac = iVar10;
  iVar11 = FUN_144e593d0();
  puVar6 = _DAT_14aad3cd0;
  uVar3 = _DAT_14aad3cd0[0xe];
  puVar1 = (ulonglong *)(_DAT_14aad3cd0 + 2);
  uVar19 = *_DAT_14aad3cd0;
code_r0x000144e58ea4:
  do {
    do {
      while (uVar18 = uVar19, (uVar18 & 0x1ff0000) == 0) {
        LOCK();
        uVar19 = *puVar6;
        bVar22 = uVar18 == uVar19;
        if (bVar22) {
          *puVar6 = uVar18 + 1;
          uVar19 = uVar18;
        }
        UNLOCK();
        if (bVar22) {
          uVar19 = iVar21 - iStack_44;
          if ((ulonglong)puVar6[7] == 0) {
            iVar21 = 0;
          }
          else {
            lVar17 = 0;
            iVar21 = 0;
            do {
              lVar4 = *(longlong *)(*(longlong *)(puVar6 + 8) + lVar17);
              bVar20 = 1;
              if ((*(char *)(lVar4 + 0x494) == '\0') && ((*(byte *)(lVar4 + 0x5c0) & 4) == 0)) {
                bVar20 = (*(byte *)(lVar4 + 0x5c2) & 2) >> 1;
              }
              lVar17 = lVar17 + 8;
              iVar21 = iVar21 + (uint)bVar20;
            } while ((ulonglong)puVar6[7] << 3 != lVar17);
          }
          FUN_140323580(puVar6);
          iRam000000014927f9bc =
               ((iVar10 + iStack_60) - (iVar11 + (~((int)uVar19 >> 0x1f) & uVar19) + uVar3)) +
               iVar21;
          iVar10 = FUN_144e592d0(1);
          iVar21 = iRam000000014927f9ac;
          if ((iVar10 != iVar9) &&
             (cVar7 = func_0x0001407fe9a0(), iVar21 = iRam000000014927f9ac, cVar7 != '\0')) {
            iVar21 = func_0x000140040510(iVar10,iRam000000014927fa3c,iStack_64);
          }
          iRam000000014927fa3c = iVar21;
          uVar12 = FUN_144e592d0(3);
          iRam000000014927fa40 = func_0x000140040510(uVar12,iRam000000014927fa40,iStack_64);
          uVar16 = FUN_144e59290();
          FUN_1400406a0(uVar16);
          func_0x000145f40580(0x14927f9d8,0,(ulonglong)uRam000000014927f9d4 << 2);
          if (0 < iRam000000014927f9ac) {
            iRam000000014927f9d8 = iRam000000014927fa40;
            if (iRam000000014927fa40 < iRam000000014927f9ac) {
              iRam000000014927f9d8 = iRam000000014927f9ac;
            }
            if (iRam000000014927f9d8 <= iRam000000014927fa3c) {
              iRam000000014927f9d8 = iRam000000014927fa3c;
            }
            iRam000000014927f9d8 = (iRam000000014927f978 * 100) / iRam000000014927f9d8;
            iRam000000014927f9dc = (iRam000000014927f97c * 100) / iRam000000014927f9ac;
            iRam000000014927f9e0 = (iRam000000014927f980 * 100) / iRam000000014927f9ac;
            iRam000000014927f9e4 = (iRam000000014927f984 * 100) / iRam000000014927f9ac;
            iRam000000014927f9e8 = (iRam000000014927f988 * 100) / iRam000000014927f9ac;
            iRam000000014927f9ec = (iRam000000014927f98c * 100) / iRam000000014927f9ac;
            iRam000000014927f9f0 = (iRam000000014927f990 * 100) / iRam000000014927f9ac;
          }
          return;
        }
      }
      LOCK();
      uVar19 = *puVar6;
      bVar22 = uVar18 == uVar19;
      if (bVar22) {
        *puVar6 = uVar18 + 0x100;
        uVar19 = uVar18;
      }
      UNLOCK();
    } while (!bVar22);
    uVar8 = (uint)(*puVar1 >> 7) & 0xffffff;
    uVar15 = *puVar1;
    if ((*puVar1 >> 7 & 0xffffff) != 0) {
      do {
        if ((longlong)uVar15 < 0x100000000) {
          uVar14 = *puVar1;
        }
        else {
          LOCK();
          uVar14 = *puVar1;
          if (uVar15 == uVar14) {
            *puVar1 = uVar15 - 0x100000000;
            uVar14 = uVar15;
          }
          UNLOCK();
          uVar19 = uVar18;
          if (uVar15 == uVar14) goto code_r0x000144e58ea4;
        }
        uVar8 = uVar8 - 1;
        uVar15 = uVar14;
      } while (uVar8 != 0);
    }
    uVar15 = *puVar1;
    do {
      while (uStack_50 = uVar15, 0xffffffff < (longlong)uStack_50) {
        LOCK();
        uVar15 = *puVar1;
        if (uStack_50 == uVar15) {
          *puVar1 = uStack_50 - 0x100000000;
          uVar15 = uStack_50;
        }
        UNLOCK();
        uVar19 = uVar18;
        if (uStack_50 == uVar15) goto code_r0x000144e58ea4;
      }
      cVar7 = FUN_140006180(puVar1,1,&uStack_50);
      uVar19 = uVar18;
      uVar15 = uStack_50;
    } while (cVar7 == '\0');
  } while( true );
}

