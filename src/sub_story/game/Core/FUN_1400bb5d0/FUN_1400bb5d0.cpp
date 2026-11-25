// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bb5d0  size: 433 bytes
// Name:    FUN_1400bb5d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145031fd0, FUN_145032800
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bb5d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  auVar6 = vcmpps_avx(*(undefined1 (*) [16])(param_1 + 0x18),auVar6,0);
  if ((((SUB161(auVar6 >> 0x1f,0) & 1) == 0 && (SUB161(auVar6 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar6 >> 0x5f,0) & 1) == 0) && -1 < auVar6[0xf]) {
    plVar4 = (longlong *)*param_1;
    plVar1 = (longlong *)param_1[1];
    if (plVar4 != (longlong *)0x0) {
      bVar3 = *(byte *)((longlong)plVar4 + 0x26e);
      if ((bVar3 & 2) == 0) {
        plVar5 = plVar4 + 0x1c;
      }
      else {
        lVar2 = FUN_145031fd0(plVar4 + 0x60,(char)param_1[0x1c]);
        bVar3 = *(byte *)((longlong)plVar4 + 0x26e);
        plVar5 = (longlong *)(lVar2 + 0x10);
      }
      if (-1 < (char)bVar3) {
        if ((bVar3 & 2) == 0) {
          (**(code **)(*plVar4 + 0x38))(plVar4);
          (**(code **)(*plVar4 + 0x40))(plVar4);
        }
        else {
          FUN_145032800(plVar4 + 0x60,CONCAT71((int7)((ulonglong)plVar5 >> 8),(char)param_1[0x1c]));
        }
      }
    }
    if (plVar1 != (longlong *)0x0) {
      bVar3 = *(byte *)((longlong)plVar1 + 0x26e);
      if ((bVar3 & 2) == 0) {
        plVar4 = plVar1 + 0x1c;
      }
      else {
        lVar2 = FUN_145031fd0(plVar1 + 0x60,*(undefined1 *)((longlong)param_1 + 0xe1));
        bVar3 = *(byte *)((longlong)plVar1 + 0x26e);
        plVar4 = (longlong *)(lVar2 + 0x10);
      }
      if (-1 < (char)bVar3) {
        if ((bVar3 & 2) == 0) {
          (**(code **)(*plVar1 + 0x38))(plVar1);
          (**(code **)(*plVar1 + 0x40))(plVar1);
        }
        else {
          FUN_145032800(plVar1 + 0x60,
                        CONCAT71((int7)((ulonglong)plVar4 >> 8),
                                 *(undefined1 *)((longlong)param_1 + 0xe1)));
        }
      }
    }
  }
  return;
}

