// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140fc2540  size: 370 bytes
// Name:    FUN_140fc2540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1428ce230, FUN_141fb2600, FUN_140a57f70, FUN_14087aec0, FUN_141fb2780
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140fc2540(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,byte param_6)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong unaff_GS_OFFSET;
  undefined1 auVar4 [16];
  undefined1 auStack_80 [72];
  
  func_0x00014165fa80();
  auVar4._0_12_ = ZEXT812(0);
  auVar4._12_4_ = 0;
  *param_1 = &UNK_1462fd480;
  param_1[1] = param_2;
  *(undefined1 (*) [16])(param_1 + 2) = auVar4;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 2;
  *(undefined1 (*) [32])(param_1 + 10) = ZEXT832(0) << 0x20;
  *(undefined1 (*) [32])(param_1 + 6) = ZEXT832(0) << 0x20;
  *(undefined1 (*) [32])((longlong)param_1 + 0x5c) = ZEXT832(0) << 0x20;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  bVar3 = *(byte *)((longlong)param_1 + 0x7c) & 0xfe;
  lVar1 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448);
  *(undefined2 *)((longlong)param_1 + 0x7d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7f) = 0;
  if (lVar1 == 0) {
    bVar3 = 0;
  }
  *(byte *)((longlong)param_1 + 0x7c) = bVar3 | param_6;
  FUN_140a57f70(param_1);
  lVar1 = param_1[1];
  cVar2 = FUN_141fb2600(param_1 + 3,param_1 + 4,param_3,param_4,*(undefined8 *)(lVar1 + 0x10),
                        *(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),param_5);
  if (cVar2 != '\0') {
    FUN_141fb2780(auStack_80,param_3,param_1[3],param_1[4]);
    cVar2 = func_0x0001408ec200(auStack_80,param_1[1]);
    if (cVar2 != '\0') {
      FUN_14087aec0(param_1 + 5,param_3,param_1[3],param_1[4]);
      if ((*(byte *)(param_1[1] + 8) & 1) != 0) {
        return param_1;
      }
      FUN_1428ce230(param_1[1],param_1);
      return param_1;
    }
  }
  param_1[1] = 0;
  return param_1;
}

