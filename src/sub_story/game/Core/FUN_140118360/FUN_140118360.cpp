// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140118360  size: 241 bytes
// Name:    FUN_140118360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140118360(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 uVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 auStack_150 [16];
  int iStack_d0;
  longlong alStack_c8 [16];
  undefined4 uStack_48;
  
  if ((*(ushort *)(param_1 + 3) & *(ushort *)(param_3 + 0x7a)) != 0) {
    iStack_d0 = 0;
    uStack_48 = 0;
    func_0x00014553b9c0(auStack_150,param_3,param_2);
    uVar1 = *(undefined1 *)((longlong)param_1 + 0x24);
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
    lVar5 = (longlong)iStack_d0;
    if (0 < (longlong)iStack_d0) {
      do {
        if ((*(char *)((longlong)param_1 + 0x24) != '\0') ||
           (*(char *)((longlong)param_1 + 0x25) == '\x01')) break;
        lVar6 = lVar5 + -1;
        lVar3 = alStack_c8[lVar6];
        uVar7 = (ulonglong)*(ushort *)(lVar3 + 0x28);
        if (uVar7 != 0) {
          uVar8 = 0;
          do {
            if ((*(char *)((longlong)param_1 + 0x24) != '\0') ||
               (*(char *)((longlong)param_1 + 0x25) == '\x01')) break;
            bVar2 = *(byte *)(*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar3 + 0x20) + uVar8 * 8) + 8) + 0x1c);
            if ((*(uint *)((longlong)param_1 + (ulonglong)(bVar2 >> 5) * 4 + 0x1c) >> (bVar2 & 0x1f)
                & 1) != 0) {
              param_1[2] = param_3;
              (**(code **)(*param_1 + 0x238))(param_1,auStack_150[lVar6]);
            }
            uVar8 = uVar8 + 1;
          } while (uVar7 != uVar8);
        }
        bVar4 = 1 < lVar5;
        lVar5 = lVar6;
      } while (bVar4);
    }
    *(undefined1 *)((longlong)param_1 + 0x24) = uVar1;
    param_1[2] = 0;
  }
  return;
}

