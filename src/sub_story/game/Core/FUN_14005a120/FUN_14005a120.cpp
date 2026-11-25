// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005a120  size: 29 bytes
// Name:    FUN_14005a120
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14005a120(undefined1 (*param_1) [16])

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  longlong unaff_GS_OFFSET;
  bool bVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  longlong lStack_38;
  
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  *param_1 = auVar11;
  puVar4 = (uint *)func_0x0001455aa450();
  lVar5 = *(longlong *)(puVar4 + 6);
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
    lVar6 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
  }
  else {
    lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    *(undefined1 *)(lVar1 + 0x1440) = 1;
    lVar6 = FUN_1400063f0();
    *(longlong *)(lVar1 + 0x1438) = lVar6;
  }
  if (lVar6 != lVar5) {
    LOCK();
    uVar8 = *puVar4;
    *puVar4 = *puVar4 - 1;
    UNLOCK();
    uVar8 = uVar8 - 1;
    if ((char)uVar8 == '\0') {
      if ((uVar8 & 0xff0000) == 0) {
        if ((uVar8 & 0xff00) != 0) {
          uVar8 = *puVar4;
          do {
            LOCK();
            uVar3 = *puVar4;
            bVar9 = uVar8 == uVar3;
            if (bVar9) {
              *puVar4 = uVar8 & 0xffff00ff;
              uVar3 = uVar8;
            }
            uVar8 = uVar3;
            UNLOCK();
          } while (!bVar9);
          uVar8 = uVar8 >> 8 & 0xff;
          if (uVar8 != 0) {
            puVar7 = puVar4 + 2;
            lStack_38 = *(longlong *)(puVar4 + 2);
            do {
              while (-1 < lStack_38) {
                LOCK();
                lVar5 = *(longlong *)puVar7;
                if (lStack_38 == lVar5) {
                  *(ulonglong *)puVar7 = lStack_38 + ((ulonglong)uVar8 << 0x20);
                  lVar5 = lStack_38;
                }
                UNLOCK();
                bVar9 = lStack_38 == lVar5;
                lStack_38 = lVar5;
                if (bVar9) {
                  return;
                }
              }
              cVar2 = FUN_1400062d0(puVar7,uVar8,&lStack_38);
            } while (cVar2 == '\0');
          }
        }
      }
      else {
        puVar7 = puVar4 + 4;
        do {
          if ((uVar8 & 0xff0000) == 0) {
            return;
          }
          LOCK();
          uVar3 = *puVar4;
          bVar9 = uVar8 == uVar3;
          if (bVar9) {
            *puVar4 = uVar8 - 0x10000;
            uVar3 = uVar8;
          }
          UNLOCK();
          if (bVar9) {
            lStack_38 = *(longlong *)puVar7;
            do {
              while (lStack_38 < 0) {
                cVar2 = FUN_1400062d0(puVar7,1,&lStack_38);
                uVar3 = uVar8;
                if (cVar2 != '\0') goto code_r0x0001402c5ac2;
              }
              LOCK();
              lVar5 = *(longlong *)puVar7;
              if (lStack_38 == lVar5) {
                *(longlong *)puVar7 = lStack_38 + 0x100000000;
                lVar5 = lStack_38;
              }
              UNLOCK();
              bVar10 = lStack_38 != lVar5;
              uVar3 = uVar8;
              lStack_38 = lVar5;
            } while (bVar10);
          }
code_r0x0001402c5ac2:
          uVar8 = uVar3;
        } while (!bVar9);
      }
    }
  }
  return;
}

