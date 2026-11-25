// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140073540  size: 116 bytes
// Name:    FUN_140073540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400063f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140073540(uint *param_1)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong unaff_GS_OFFSET;
  bool bVar10;
  longlong lStack_38;
  undefined *puStack_30;
  
  lVar6 = *(longlong *)(param_1 + 6);
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
    lVar5 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
  }
  else {
    lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    *(undefined1 *)(lVar2 + 0x1440) = 1;
    lVar5 = FUN_1400063f0();
    *(longlong *)(lVar2 + 0x1438) = lVar5;
  }
  if (lVar5 == lVar6) {
    return;
  }
  cVar3 = FUN_144f16960();
  if (cVar3 != '\0') {
    FUN_144f16b00(param_1);
    cVar3 = FUN_144f16b90(param_1);
    if (cVar3 == '\0') {
      LOCK();
      uVar8 = *param_1;
      *param_1 = *param_1 - 1;
      UNLOCK();
      uVar8 = uVar8 - 1;
      if ((char)uVar8 == '\0') {
        if ((uVar8 & 0xff0000) == 0) {
          if ((uVar8 & 0xff00) != 0) {
            uVar8 = *param_1;
            do {
              LOCK();
              uVar4 = *param_1;
              bVar10 = uVar8 == uVar4;
              if (bVar10) {
                *param_1 = uVar8 & 0xffff00ff;
                uVar4 = uVar8;
              }
              uVar8 = uVar4;
              UNLOCK();
            } while (!bVar10);
            uVar8 = uVar8 >> 8 & 0xff;
            if (uVar8 != 0) {
              puVar1 = param_1 + 2;
              lVar6 = *(longlong *)(param_1 + 2);
              do {
                while (lStack_38 = lVar6, lStack_38 < 0) {
                  cVar3 = FUN_1400062d0(puVar1,uVar8,&lStack_38);
                  lVar6 = lStack_38;
                  if (cVar3 != '\0') goto code_r0x0001423633a9;
                }
                LOCK();
                lVar6 = *(longlong *)puVar1;
                if (lStack_38 == lVar6) {
                  *(ulonglong *)puVar1 = lStack_38 + ((ulonglong)uVar8 << 0x20);
                  lVar6 = lStack_38;
                }
                UNLOCK();
              } while (lStack_38 != lVar6);
            }
          }
        }
        else {
          puVar1 = param_1 + 4;
          do {
            if ((uVar8 & 0xff0000) == 0) break;
            LOCK();
            uVar4 = *param_1;
            bVar10 = uVar8 == uVar4;
            if (bVar10) {
              *param_1 = uVar8 - 0x10000;
              uVar4 = uVar8;
            }
            UNLOCK();
            if (bVar10) {
              lVar6 = *(longlong *)puVar1;
              do {
                while (lStack_38 = lVar6, lStack_38 < 0) {
                  cVar3 = FUN_1400062d0(puVar1,1,&lStack_38);
                  uVar4 = uVar8;
                  lVar6 = lStack_38;
                  if (cVar3 != '\0') goto code_r0x00014236342e;
                }
                LOCK();
                lVar6 = *(longlong *)puVar1;
                if (lStack_38 == lVar6) {
                  *(longlong *)puVar1 = lStack_38 + 0x100000000;
                  lVar6 = lStack_38;
                }
                UNLOCK();
                uVar4 = uVar8;
              } while (lStack_38 != lVar6);
            }
code_r0x00014236342e:
            uVar8 = uVar4;
          } while (!bVar10);
        }
      }
code_r0x0001423633a9:
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        puStack_30 = &UNK_144f16cbc;
        func_0x0001455db994();
      }
      uVar8 = *(uint *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x468);
      if ((ulonglong)uVar8 != 0) {
        puVar9 = (undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x420);
        uVar7 = 0;
        do {
          if ((uint *)*puVar9 == param_1) {
            lVar6 = **(longlong **)(unaff_GS_OFFSET + 0x58);
            *puVar9 = *(undefined8 *)(lVar6 + 0x420 + (ulonglong)(uVar8 - 1) * 8);
            *(undefined1 *)(lVar6 + 0x460 + uVar7) =
                 *(undefined1 *)(lVar6 + 0x460 + (ulonglong)(uVar8 - 1));
            *(int *)(lVar6 + 0x468) = *(int *)(lVar6 + 0x468) + -1;
            return;
          }
          uVar7 = uVar7 + 1;
          puVar9 = puVar9 + 1;
        } while (uVar8 != uVar7);
      }
      return;
    }
  }
  return;
}

