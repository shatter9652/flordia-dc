// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140167c80  size: 107 bytes
// Name:    FUN_140167c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400fd6e0, FUN_140167d60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140167c80(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  longlong lStack_38;
  
  FUN_1400fd6e0(0x1477aee78);
  lVar6 = *(longlong *)(param_1 + 0x450);
  uVar7 = uRam00000001477aee78;
  while (uRam00000001477aee78 = uVar7, lVar6 != 0) {
    if ((*(byte *)(lVar6 + 0x51a) & 0x20) == 0) {
      lVar6 = *(longlong *)(lVar6 + 0x438);
    }
    else {
      *(byte *)(lVar6 + 0x51a) = *(byte *)(lVar6 + 0x51a) & 0xdf;
      piVar1 = (int *)(lVar6 + 0x510);
      lVar6 = *(longlong *)(lVar6 + 0x438);
      uVar7 = uRam00000001477aee78;
      if (*piVar1 == -1) {
        FUN_140167d60();
        uVar7 = uRam00000001477aee78;
      }
    }
  }
  cRam00000001477aee98 = cRam00000001477aee98 + -1;
  if (cRam00000001477aee98 == '\0') {
    uRam00000001477aee90 = 0xffffffffffffffff;
    do {
      LOCK();
      bVar8 = uVar7 != uRam00000001477aee78;
      uVar5 = uVar7 & 0xfeffffff;
      if (bVar8) {
        uVar7 = uRam00000001477aee78;
        uVar5 = uRam00000001477aee78;
      }
      uRam00000001477aee78 = uVar5;
      UNLOCK();
    } while (bVar8);
    if ((uVar7 & 0xff0000) == 0) {
      uVar5 = uRam00000001477aee78;
      if ((uVar7 & 0xff00) != 0) {
        do {
          LOCK();
          bVar8 = uVar5 != uRam00000001477aee78;
          uVar7 = uVar5 & 0xffff00ff;
          if (bVar8) {
            uVar5 = uRam00000001477aee78;
            uVar7 = uRam00000001477aee78;
          }
          uRam00000001477aee78 = uVar7;
          UNLOCK();
        } while (bVar8);
        uVar7 = uVar5 >> 8 & 0xff;
        if (uVar7 != 0) {
          lStack_38 = lRam00000001477aee80;
          do {
            while (-1 < lStack_38) {
              LOCK();
              lVar6 = lStack_38;
              lVar3 = lStack_38 + ((ulonglong)uVar7 << 0x20);
              if (lStack_38 != lRam00000001477aee80) {
                lVar6 = lRam00000001477aee80;
                lVar3 = lRam00000001477aee80;
              }
              lRam00000001477aee80 = lVar3;
              UNLOCK();
              bVar8 = lStack_38 == lVar6;
              lStack_38 = lVar6;
              if (bVar8) {
                return;
              }
            }
            cVar4 = FUN_1400062d0(0x1477aee80,uVar7,&lStack_38);
          } while (cVar4 == '\0');
        }
      }
    }
    else {
      uVar7 = uVar7 & 0xfeffffff;
      do {
        if ((uVar7 & 0xff0000) == 0) {
          return;
        }
        LOCK();
        bVar8 = uVar7 != uRam00000001477aee78;
        uVar5 = uVar7;
        uVar2 = uVar7 - 0x10000;
        if (bVar8) {
          uVar5 = uRam00000001477aee78;
          uVar2 = uRam00000001477aee78;
        }
        uRam00000001477aee78 = uVar2;
        UNLOCK();
        lStack_38 = lRam00000001477aee88;
        if (!bVar8) {
          do {
            while (lStack_38 < 0) {
              cVar4 = FUN_1400062d0(0x1477aee88,1,&lStack_38);
              uVar5 = uVar7;
              if (cVar4 != '\0') goto code_r0x0001405224e4;
            }
            LOCK();
            lVar6 = lStack_38;
            lVar3 = lStack_38 + 0x100000000;
            if (lStack_38 != lRam00000001477aee88) {
              lVar6 = lRam00000001477aee88;
              lVar3 = lRam00000001477aee88;
            }
            lRam00000001477aee88 = lVar3;
            UNLOCK();
            bVar9 = lStack_38 != lVar6;
            uVar5 = uVar7;
            lStack_38 = lVar6;
          } while (bVar9);
        }
code_r0x0001405224e4:
        uVar7 = uVar5;
      } while (bVar8);
    }
  }
  return;
}

