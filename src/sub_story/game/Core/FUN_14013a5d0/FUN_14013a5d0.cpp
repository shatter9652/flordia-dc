// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013a5d0  size: 285 bytes
// Name:    FUN_14013a5d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452159b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a5d0(char param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong unaff_GS_OFFSET;
  undefined1 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_18 [16];
  
  uStack_48 = _DAT_149188680;
  uStack_40 = uRam0000000149188688;
  uStack_38 = uRam0000000149188690;
  uStack_30 = uRam0000000149188698;
  uStack_28 = _DAT_1491886a0;
  uStack_20 = uRam00000001491886a8;
  auStack_18 = ZEXT816(0) << 0x20;
  if (param_1 == '\0') {
    if ((char)param_2 == '\0') {
      uVar1 = func_0x0001452159a0();
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      uVar4 = 0;
      uVar3 = *(undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
      goto LAB_14013a659;
    }
    puVar2 = (undefined8 *)0x148d59bf8;
  }
  else if ((char)param_2 == '\0') {
    puVar2 = (undefined8 *)0x1491aca00;
  }
  else {
    puVar2 = (undefined8 *)0x149188b78;
  }
  uVar1 = *puVar2;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994(*(longlong *)(unaff_GS_OFFSET + 0x58),param_2,param_3,uVar1);
  }
  uVar4 = 1;
  uVar3 = *(undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
LAB_14013a659:
  FUN_1452159b0(uVar3,8,&uStack_48,uVar1,0,uVar4);
  return;
}

