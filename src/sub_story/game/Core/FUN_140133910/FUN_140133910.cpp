// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140133910  size: 85 bytes
// Name:    FUN_140133910
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400fd6e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140133910(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  longlong lStack_38;
  
  FUN_1400fd6e0(0x149fe5f10);
  LOCK();
  cVar3 = *(char *)(param_2 + 0x16);
  *(char *)(param_2 + 0x16) = '\x01';
  UNLOCK();
  if (cVar3 == '\0') {
    uVar6 = *(uint *)(param_1 + 0x3c);
    do {
      if (uVar6 == *(uint *)(param_1 + 0x38)) goto LAB_140133953;
      LOCK();
      uVar4 = *(uint *)(param_1 + 0x3c);
      bVar7 = uVar6 == uVar4;
      if (bVar7) {
        *(uint *)(param_1 + 0x3c) = uVar6 + 1;
        uVar4 = uVar6;
      }
      uVar6 = uVar4;
      UNLOCK();
    } while (!bVar7);
    *(undefined2 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar6 * 2) =
         *(undefined2 *)(param_2 + 0x10);
  }
LAB_140133953:
  cRam0000000149fe5f30 = cRam0000000149fe5f30 + -1;
  if (cRam0000000149fe5f30 == '\0') {
    uRam0000000149fe5f28 = 0xffffffffffffffff;
    uVar6 = uRam0000000149fe5f10;
    do {
      LOCK();
      bVar7 = uVar6 != uRam0000000149fe5f10;
      uVar4 = uVar6 & 0xfeffffff;
      if (bVar7) {
        uVar6 = uRam0000000149fe5f10;
        uVar4 = uRam0000000149fe5f10;
      }
      uRam0000000149fe5f10 = uVar4;
      UNLOCK();
    } while (bVar7);
    if ((uVar6 & 0xff0000) == 0) {
      uVar4 = uRam0000000149fe5f10;
      if ((uVar6 & 0xff00) != 0) {
        do {
          LOCK();
          bVar7 = uVar4 != uRam0000000149fe5f10;
          uVar6 = uVar4 & 0xffff00ff;
          if (bVar7) {
            uVar4 = uRam0000000149fe5f10;
            uVar6 = uRam0000000149fe5f10;
          }
          uRam0000000149fe5f10 = uVar6;
          UNLOCK();
        } while (bVar7);
        uVar6 = uVar4 >> 8 & 0xff;
        if (uVar6 != 0) {
          lStack_38 = lRam0000000149fe5f18;
          do {
            while (-1 < lStack_38) {
              LOCK();
              lVar5 = lStack_38;
              lVar2 = lStack_38 + ((ulonglong)uVar6 << 0x20);
              if (lStack_38 != lRam0000000149fe5f18) {
                lVar5 = lRam0000000149fe5f18;
                lVar2 = lRam0000000149fe5f18;
              }
              lRam0000000149fe5f18 = lVar2;
              UNLOCK();
              bVar7 = lStack_38 == lVar5;
              lStack_38 = lVar5;
              if (bVar7) {
                return;
              }
            }
            cVar3 = FUN_1400062d0(0x149fe5f18,uVar6,&lStack_38);
          } while (cVar3 == '\0');
        }
      }
    }
    else {
      uVar6 = uVar6 & 0xfeffffff;
      do {
        if ((uVar6 & 0xff0000) == 0) {
          return;
        }
        LOCK();
        bVar7 = uVar6 != uRam0000000149fe5f10;
        uVar4 = uVar6;
        uVar1 = uVar6 - 0x10000;
        if (bVar7) {
          uVar4 = uRam0000000149fe5f10;
          uVar1 = uRam0000000149fe5f10;
        }
        uRam0000000149fe5f10 = uVar1;
        UNLOCK();
        lStack_38 = lRam0000000149fe5f20;
        if (!bVar7) {
          do {
            while (lStack_38 < 0) {
              cVar3 = FUN_1400062d0(0x149fe5f20,1,&lStack_38);
              uVar4 = uVar6;
              if (cVar3 != '\0') goto code_r0x0001405224e4;
            }
            LOCK();
            lVar5 = lStack_38;
            lVar2 = lStack_38 + 0x100000000;
            if (lStack_38 != lRam0000000149fe5f20) {
              lVar5 = lRam0000000149fe5f20;
              lVar2 = lRam0000000149fe5f20;
            }
            lRam0000000149fe5f20 = lVar2;
            UNLOCK();
            bVar8 = lStack_38 != lVar5;
            uVar4 = uVar6;
            lStack_38 = lVar5;
          } while (bVar8);
        }
code_r0x0001405224e4:
        uVar6 = uVar4;
      } while (bVar7);
    }
  }
  return;
}

