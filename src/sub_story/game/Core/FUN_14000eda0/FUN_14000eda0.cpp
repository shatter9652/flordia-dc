// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000eda0  size: 37 bytes
// Name:    FUN_14000eda0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dc9ff0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000eda0(void)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uStack_85c;
  undefined1 auStack_858 [16];
  uint auStack_83c [512];
  int iStack_3c;
  
  FUN_144dc9ff0();
  if (DAT_14aa31c55 != '\0') {
    if (DAT_149ab8068 == '\0') {
      uVar4 = FUN_144e4ba80();
      if (100 < uVar4) {
        DAT_149ab8068 = 1;
                    /* WARNING: Could not recover jumptable at 0x000140007333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSemaphore(_DAT_149ab8058,1,(void *)0x0);
        return;
      }
    }
    return;
  }
  FUN_140004b40(0x149ab80c0);
  auStack_858._0_12_ = ZEXT812(0);
  auStack_858._12_4_ = 0;
  iStack_3c = 0;
  if (_DAT_14a9246e8 == 0 || uRam0000000149ab806c == 0) {
    iRam0000000149ab7fdc = 0;
    func_0x0001400fc110();
    uVar8 = 0;
  }
  else {
    iVar10 = 0;
    uVar8 = 0;
    uVar11 = 0;
    iVar5 = 0;
    uVar9 = 0;
    lVar7 = _DAT_14a9246e8;
    uVar4 = uRam0000000149ab806c;
    do {
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        plVar6 = (longlong *)(lVar7 + iVar10);
        bVar3 = *(byte *)((longlong)plVar6 + 0xbc);
        if ((bVar3 & 0x10) == 0) {
          if (uVar11 < 4) {
            cVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
            if (cVar2 != '\0') goto code_r0x00014081cb6e;
            bVar3 = *(byte *)((longlong)plVar6 + 0xbc);
          }
          if ((bVar3 & 2) == 0) {
            FUN_144e65ca0(&uStack_85c,0xffffffff);
            cVar2 = func_0x000145366450((int)plVar6[0x16],uStack_85c);
            if (cVar2 != '\0') {
              FUN_1443b01c0(plVar6);
            }
          }
          else {
            iVar5 = iVar5 + 1;
            *(int *)(auStack_858 + (ulonglong)*(byte *)((longlong)plVar6 + 0xba) * 4) =
                 *(int *)(auStack_858 + (ulonglong)*(byte *)((longlong)plVar6 + 0xba) * 4) + 1;
            lVar7 = (longlong)iStack_3c;
            iStack_3c = iStack_3c + 1;
            auStack_83c[lVar7] = uVar9;
          }
        }
        else {
code_r0x00014081cb6e:
          func_0x000144fb97f0(plVar6);
          if ((*(byte *)((longlong)plVar6 + 0xbc) & 0x10) != 0) {
            uVar8 = uVar8 + 1;
            bVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
            uVar11 = uVar11 + bVar3;
          }
        }
        FUN_1455cbf00(plVar6);
        lVar7 = _DAT_14a9246e8;
        uVar4 = uRam0000000149ab806c;
      }
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 0x868;
    } while (uVar9 < uVar4);
    iRam0000000149ab7fdc = iVar5;
    func_0x0001400fc110();
    if (3 < uVar8) goto code_r0x00014081ccb3;
  }
  FUN_1443b0230();
  uVar8 = bRam0000000149ab7e70 + uVar8;
  if (uVar8 < 4) {
    qsort(auStack_83c,(longlong)iStack_3c,4,&UNK_1443b03d0);
    if (0 < iStack_3c) {
      lVar7 = 0;
      do {
        lVar1 = _DAT_14a9246e8;
        uVar4 = auStack_83c[lVar7];
        func_0x000144fb97f0(_DAT_14a9246e8 + (longlong)(int)uVar4 * 0x868);
        bVar3 = *(byte *)(lVar1 + 0xbc + (longlong)(int)uVar4 * 0x868);
        if (((bVar3 & 0x10) != 0) && (3 < uVar8 + 1)) break;
        uVar4 = uVar8 + 1;
        if ((bVar3 & 0x10) == 0) {
          uVar4 = uVar8;
        }
        uVar8 = uVar4;
        lVar7 = lVar7 + 1;
      } while (lVar7 < iStack_3c);
    }
  }
code_r0x00014081ccb3:
  func_0x000144d9dab0(0x149ab80c0);
  return;
}

