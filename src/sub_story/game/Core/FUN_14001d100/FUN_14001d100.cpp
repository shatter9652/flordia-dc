// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001d100  size: 188 bytes
// Name:    FUN_14001d100
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1447b1d30, FUN_1447b1810
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14001d100(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uStack_2c;
  
  iVar4 = (**(code **)(*param_1 + 0xd0))();
  if (iVar4 == 2) {
    lVar5 = (**(code **)(*param_1 + 0x20))(param_1);
    if (lVar5 != 0) {
      uVar6 = (ulonglong)*(byte *)(lVar5 + 0xc0 + (ulonglong)DAT_14a95df40);
      if (uVar6 == 0xff) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x10 + uVar6 * 8);
      }
      uVar1 = *(uint *)(param_2 + 1);
      if (((ulonglong)uVar1 != 0) && (lVar7 = *(longlong *)(lVar5 + 0x68), lVar7 != 0)) {
        lVar2 = *param_2;
        lVar8 = 0;
        while( true ) {
          if (lVar7 != 0) {
            cVar3 = FUN_1447b1d30(lVar7,*(undefined4 *)(lVar2 + lVar8));
            if (cVar3 != '\0') {
              uStack_2c = *(undefined4 *)(lVar2 + lVar8);
              if (*(longlong *)(lVar5 + 0x68) != 0) {
                FUN_1447b1810(*(longlong *)(lVar5 + 0x68),&uStack_2c);
              }
            }
          }
          if ((ulonglong)uVar1 * 4 + -4 == lVar8) break;
          lVar7 = *(longlong *)(lVar5 + 0x68);
          lVar8 = lVar8 + 4;
        }
      }
    }
  }
  return;
}

