// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400be850  size: 649 bytes
// Name:    FUN_1400be850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_1400be850(undefined1 (*param_1) [16],longlong param_2,uint param_3,longlong param_4)

{
  byte *pbVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  byte *pbVar6;
  longlong unaff_GS_OFFSET;
  undefined1 auVar7 [16];
  
  auVar7._0_12_ = ZEXT812(0);
  auVar7._12_4_ = 0;
  *param_1 = auVar7;
  if (param_4 == 0) {
    func_0x0001455db800();
  }
  else {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      bVar5 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
      if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) != '\0')
      goto LAB_1400be8dd;
      func_0x0001455db994();
      cVar2 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
      *(longlong *)
       ((ulonglong)((uint)bVar5 + (uint)*(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110))
        * 8 + 0x14908f690) = param_4;
      if (cVar2 == '\0') {
        func_0x0001455db994();
      }
    }
    else {
      bVar5 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
LAB_1400be8dd:
      *(longlong *)
       ((ulonglong)((uint)bVar5 + (uint)*(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110))
        * 8 + 0x14908f690) = param_4;
    }
    *(undefined8 *)(*param_1 + 8) =
         *(undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1118);
    func_0x0001455db7e0();
  }
  uVar3 = *(undefined8 *)(param_2 + (ulonglong)(param_3 & 0xff) * 8);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    bVar5 = *(byte *)(lVar4 + 0x1294);
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
      pbVar1 = (byte *)(lVar4 + 0x1294);
      func_0x0001455db994();
      pbVar6 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110);
      cVar2 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
      *(undefined8 *)((ulonglong)((uint)bVar5 + (uint)*pbVar6) * 8 + 0x14908f660) = uVar3;
      if (cVar2 == '\0') {
        func_0x0001455db994();
        bVar5 = *pbVar1;
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
      }
      else {
        bVar5 = *pbVar1;
      }
      goto LAB_1400be9aa;
    }
  }
  else {
    bVar5 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294);
  }
  pbVar6 = (byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110);
  *(undefined8 *)((ulonglong)((uint)bVar5 + (uint)*pbVar6) * 8 + 0x14908f660) = uVar3;
LAB_1400be9aa:
  if (*(longlong *)((ulonglong)((uint)bVar5 + (uint)*pbVar6) * 8 + 0x14908f660) != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    *(undefined8 *)*param_1 = *(undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1218);
    func_0x000144d978e0();
  }
  return param_1;
}

