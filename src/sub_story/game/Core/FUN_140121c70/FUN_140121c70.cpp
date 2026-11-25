// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140121c70  size: 674 bytes
// Name:    FUN_140121c70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1428cb9b0, FUN_14555eb70, FUN_14221c130, FUN_1403716a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140121c70(uint *param_1,ulonglong *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar7 = _DAT_149c3e108;
  uVar6 = *param_2;
  if ((uVar6 & 7) != 0) {
    lVar11 = (ulonglong)(*param_1 & 0xfff) * 0x38;
    puVar10 = (undefined8 *)((ulonglong)*(ushort *)((longlong)param_1 + 6) * 0x10 + _DAT_149c3e108);
    uVar12 = *(byte *)(lVar11 + 0x149c3e1d7) & 7;
    bVar4 = (byte)(uVar6 >> 0x3d);
    if (uVar12 < ((byte)uVar6 & 7)) {
      if ((uint)(uVar6 >> 0x3d) <= uVar12) {
        *(byte *)((longlong)puVar10 + 0xc) = bVar4;
        LOCK();
        *(char *)((longlong)puVar10 + 0xb) = *(char *)((longlong)puVar10 + 0xb) + -1;
        UNLOCK();
        if (*(char *)((longlong)puVar10 + 0xb) == '\0') {
          *(byte *)((longlong)puVar10 + 0xe) = (byte)(*param_2 >> 0x3d);
          lVar13 = (ulonglong)*(ushort *)((longlong)param_1 + 6) * 0x10;
          bVar4 = *(byte *)(lVar7 + 0xe + lVar13);
          bVar8 = (byte)*(undefined4 *)(lVar7 + 0xc + lVar13);
          if (bVar4 < bVar8) {
            bVar8 = bVar4;
          }
          if (bVar8 == 0) {
            iVar9 = 0xf;
          }
          else {
            lVar7 = (ulonglong)(*param_1 & 0xfff) * 0x38;
            iVar9 = (((*(uint *)(lVar7 + 0x149c3e1d4) & 7) - (uint)bVar8) + 1) -
                    (uint)(*(uint *)(lVar7 + 0x149c3e1d0) < 0x10000000);
          }
          func_0x000144ecc4f0(*(ushort *)((longlong)param_1 + 6),iVar9);
        }
        lVar7 = (ulonglong)(*param_1 & 0xfff) * 0x38;
        uVar6 = (ulonglong)
                ((((*(uint *)(lVar7 + 0x149c3e1d4) & 7) - ((uint)*param_2 & 7)) + 1) -
                (uint)(*(uint *)(lVar7 + 0x149c3e1d0) < 0x10000000));
        uVar6 = (ulonglong)
                (((uint)*(ushort *)(lVar11 + 0x149c3e1f0 + uVar6 * 2) +
                 (uint)*(ushort *)(lVar11 + 0x149c3e1e8 + uVar6 * 2)) * 0x1000 + 0xffff & 0x3fff0000
                );
        FUN_1428cb9b0(5,(_DAT_149e1dac0 + param_2[1]) - _DAT_149e1dad0,uVar6);
        func_0x00014041dbe0(param_2[1],*(undefined4 *)(lVar11 + 0x149c3e1fc));
        FUN_140004b40(0x1471bfad8);
        if (uVar6 <= uRam00000001498d26d8) {
          uRam00000001498d26d8 = uRam00000001498d26d8 - uVar6;
          iRam00000001471bfae8 = iRam00000001471bfae8 + -1;
          uVar6 = uRam00000001471bfad8;
          if (iRam00000001471bfae8 == 0) {
            do {
              uVar5 = uVar6;
              LOCK();
              uVar6 = uVar5;
              uVar2 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
              if (uVar5 != uRam00000001471bfad8) {
                uVar6 = uRam00000001471bfad8;
                uVar2 = uRam00000001471bfad8;
              }
              uRam00000001471bfad8 = uVar2;
              UNLOCK();
            } while (uVar5 != uVar6);
            if ((uVar5 & 0xfffffffe) != 0) {
              iRam00000001471bfae8 = 0;
              lVar7 = lRam00000001471bfae0;
              do {
                while (lVar7 < 0) {
                  cVar3 = FUN_1400062d0(0x1471bfae0,1,&stack0xffffffffffffffe0);
                  if (cVar3 != '\0') {
                    return;
                  }
                }
                LOCK();
                lVar11 = lVar7;
                lVar13 = lVar7 + 0x100000000;
                if (lVar7 != lRam00000001471bfae0) {
                  lVar11 = lRam00000001471bfae0;
                  lVar13 = lRam00000001471bfae0;
                }
                lRam00000001471bfae0 = lVar13;
                UNLOCK();
                bVar14 = lVar7 != lVar11;
                lVar7 = lVar11;
              } while (bVar14);
              return;
            }
          }
          return;
        }
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      *(byte *)((longlong)puVar10 + 0xc) = bVar4;
      LOCK();
      *(char *)((longlong)puVar10 + 0xb) = *(char *)((longlong)puVar10 + 0xb) + -1;
      UNLOCK();
      if (*(char *)((longlong)puVar10 + 0xb) == '\0') {
        *(byte *)((longlong)puVar10 + 0xe) = (byte)(*param_2 >> 0x3d);
        lVar13 = (ulonglong)*(ushort *)((longlong)param_1 + 6) * 0x10;
        uVar12 = *(uint *)(lVar7 + 0xc + lVar13);
        bVar4 = *(byte *)(lVar7 + 0xe + lVar13);
        if (bVar4 < (byte)uVar12) {
          uVar12 = (uint)bVar4;
        }
        if ((*(byte *)(lVar11 + 0x149c3e1d7) & 8) == 0) {
          if ((char)uVar12 == '\0') {
            iVar9 = 0xf;
          }
          else {
            lVar7 = (ulonglong)(*param_1 & 0xfff) * 0x38;
            iVar9 = (((*(uint *)(lVar7 + 0x149c3e1d4) & 7) - (uVar12 & 0xff)) + 1) -
                    (uint)(*(uint *)(lVar7 + 0x149c3e1d0) < 0x10000000);
          }
          func_0x000144ecc4f0(*(ushort *)((longlong)param_1 + 6),iVar9);
        }
        else {
          if ((char)uVar12 == '\0') {
            iVar9 = 0xf;
          }
          else {
            lVar7 = (ulonglong)(*param_1 & 0xfff) * 0x38;
            iVar9 = (((*(uint *)(lVar7 + 0x149c3e1d4) & 7) - (uVar12 & 0xff)) + 1) -
                    (uint)(*(uint *)(lVar7 + 0x149c3e1d0) < 0x10000000);
          }
          FUN_14555eb70(*puVar10,2,iVar9);
        }
      }
      lVar7 = (ulonglong)(*param_1 & 0xfff) * 0x38;
      iVar9 = func_0x000144fd2840((ulonglong)
                                  *(ushort *)
                                   (lVar11 + 0x149c3e1f0 +
                                   (ulonglong)
                                   ((((*(uint *)(lVar7 + 0x149c3e1d4) & 7) - ((uint)*param_2 & 7)) +
                                    1) - (uint)(*(uint *)(lVar7 + 0x149c3e1d0) < 0x10000000)) * 2)
                                  << 0xc);
      FUN_1403716a0(param_2[1],iVar9);
      if ((short)iVar9 == 0) {
        iVar9 = -iVar9;
      }
      else {
        iVar9 = 0;
      }
      if (iVar9 != 0) {
        FUN_14221c130((longlong)-iVar9);
      }
    }
  }
  return;
}

