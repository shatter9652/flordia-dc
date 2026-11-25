// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bb540  size: 36 bytes
// Name:    FUN_1400bb540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bb540(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  
  if ((*(byte *)(param_1 + 0x91) & 4) != 0) {
    plVar2 = (longlong *)func_0x000145032b30();
    auVar7._0_12_ = ZEXT812(0);
    auVar7._12_4_ = 0;
    auVar7 = vcmpps_avx(*(undefined1 (*) [16])(plVar2 + 0x18),auVar7,0);
    if ((((SUB161(auVar7 >> 0x1f,0) & 1) == 0 && (SUB161(auVar7 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar7 >> 0x5f,0) & 1) == 0) && -1 < auVar7[0xf]) {
      plVar6 = (longlong *)*plVar2;
      plVar1 = (longlong *)plVar2[1];
      if (plVar6 != (longlong *)0x0) {
        bVar4 = *(byte *)((longlong)plVar6 + 0x26e);
        if ((bVar4 & 2) == 0) {
          plVar5 = plVar6 + 0x1c;
        }
        else {
          lVar3 = FUN_145031fd0(plVar6 + 0x60,(char)plVar2[0x1c]);
          bVar4 = *(byte *)((longlong)plVar6 + 0x26e);
          plVar5 = (longlong *)(lVar3 + 0x10);
        }
        if (-1 < (char)bVar4) {
          if ((bVar4 & 2) == 0) {
            (**(code **)(*plVar6 + 0x38))(plVar6);
            (**(code **)(*plVar6 + 0x40))(plVar6);
          }
          else {
            FUN_145032800(plVar6 + 0x60,CONCAT71((int7)((ulonglong)plVar5 >> 8),(char)plVar2[0x1c]))
            ;
          }
        }
      }
      if (plVar1 != (longlong *)0x0) {
        bVar4 = *(byte *)((longlong)plVar1 + 0x26e);
        if ((bVar4 & 2) == 0) {
          plVar6 = plVar1 + 0x1c;
        }
        else {
          lVar3 = FUN_145031fd0(plVar1 + 0x60,*(undefined1 *)((longlong)plVar2 + 0xe1));
          bVar4 = *(byte *)((longlong)plVar1 + 0x26e);
          plVar6 = (longlong *)(lVar3 + 0x10);
        }
        if (-1 < (char)bVar4) {
          if ((bVar4 & 2) == 0) {
            (**(code **)(*plVar1 + 0x38))(plVar1);
            (**(code **)(*plVar1 + 0x40))(plVar1);
          }
          else {
            FUN_145032800(plVar1 + 0x60,
                          CONCAT71((int7)((ulonglong)plVar6 >> 8),
                                   *(undefined1 *)((longlong)plVar2 + 0xe1)));
          }
        }
      }
    }
    return;
  }
  return;
}

