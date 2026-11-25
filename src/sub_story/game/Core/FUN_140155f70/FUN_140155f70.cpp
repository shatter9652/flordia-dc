// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140155f70  size: 853 bytes
// Name:    FUN_140155f70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140155f70(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  func_0x0001401566e0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156770(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156800(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156890(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401562d0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156920(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401569b0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156a40(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156ad0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156b60(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156bf0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156c80(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401564a0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156d10(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156da0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156e30(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156ec0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156f50(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401565c0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156fe0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157070(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157100(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157190(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157220(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401572b0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157340(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401573d0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157460(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401574f0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157580(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157610(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401576a0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157730(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401577c0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156410(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157850(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401578e0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157970(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157a00(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157a90(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157b20(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157bb0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157c40(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157cd0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156650(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156530(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157d60(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157df0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157e80(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157f10(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140157fa0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140158030(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401580c0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140158150(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401581e0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140158270(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140158300(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140156380(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140158390(*(undefined4 *)(*param_1 + 0x9c));
  uVar2 = *(uint *)(*param_1 + 0x9c);
  lVar5 = (ulonglong)(uVar2 >> 0x11 & 0x1f) * 0x238;
  if (*(int *)(lVar5 + 0x14abbf3c4) != 0) {
    bVar1 = *(byte *)(lVar5 + 0x14abbf42b);
    if ((bVar1 != 0xff) &&
       (uVar6 = (ulonglong)
                *(ushort *)
                 (*(longlong *)(lVar5 + 0x14abbf3d0) +
                 (ulonglong)(*(int *)(lVar5 + 0x14abbf3c4) * (uVar2 & 0x1ffff) + (uint)bVar1) * 2),
       uVar6 != 0xffff)) {
      lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x14abbf3e0) + (ulonglong)bVar1 * 0x10);
      if (lVar3 != 0) {
        plVar4 = *(longlong **)(*(longlong *)(lVar5 + 0x14abbf3b8) + (ulonglong)bVar1 * 8);
                    /* WARNING: Could not recover jumptable at 0x0001401584a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))
                  (plVar4,uVar2,
                   lVar3 + uVar6 * *(longlong *)
                                    (*(longlong *)(lVar5 + 0x14abbf3e0) + (ulonglong)bVar1 * 0x10 +
                                    8));
        return;
      }
    }
  }
  return;
}

