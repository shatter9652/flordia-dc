// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a2ec0  size: 555 bytes
// Name:    FUN_1401a2ec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f57870, FUN_144d9d7a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401a2ec0(ulonglong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uStack_68;
  int iStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  ulonglong uStack_50;
  uint uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  
  uVar6 = param_1 >> 0x10 & 0xffff;
  cVar3 = FUN_144d9d7a0(param_1,uVar6);
  if (cVar3 != '\0') {
    uVar2 = param_2 >> 0x10;
    cVar3 = FUN_144d9d7a0(param_2,uVar2);
    if (cVar3 == '\0') {
      return 0;
    }
    lVar4 = FUN_144f57870(param_1 & 0xffffffff);
    if (lVar4 == 0) {
      return 0;
    }
    lVar1 = *(longlong *)(lVar4 + 200);
    if (lVar1 == 0) {
      return 0;
    }
    lVar5 = *(longlong *)(lVar1 + 0x20);
    if (lVar5 == 0) {
      return 0;
    }
    uStack_5c = 0;
    iStack_64 = -1;
    uStack_68 = 0xffffffff;
    if (0xfffbffff < (uint)param_1) {
      return 0;
    }
    if ((param_1 >> 0x10 & 1) == 0) {
      return 0;
    }
    func_0x000144d9d8d0(uVar6,&uStack_3c);
    func_0x000144f578f0(*(undefined8 *)(lVar5 + 0xe0),uStack_3c,&iStack_64,&uStack_68,&uStack_5c);
    lVar5 = FUN_144f57870(param_2);
    if (((lVar5 == lVar4) && (uVar2 != 0xfffc)) && ((uVar2 & 3) == 0)) {
      func_0x000144d9d8a0(uVar2,&uStack_50);
      uVar6 = uStack_50 & 0xffffffff;
      if ((int)uStack_50 == iStack_64) goto LAB_1401a30e4;
      func_0x000144d9d8a0(uVar2,&uStack_60);
      uVar6 = (ulonglong)uStack_60;
      if (uStack_60 == uStack_68) goto LAB_1401a30e4;
    }
    if (((uStack_5c & 2) != 0) && (lVar4 = func_0x000144f57960(lVar1,uStack_3c), lVar4 != 0)) {
      uStack_50 = 0;
      uStack_60 = 0xffffffff;
      func_0x0001400c0ec0(lVar4,lVar1,&uStack_50);
      uVar6 = uStack_50;
      if (((uStack_50 != 0) && ((iStack_64 == 0 || (uStack_68 == 0)))) &&
         (*(longlong *)(uStack_50 + 0x20) != 0)) {
        uStack_54 = 0xffffffff;
        uStack_58 = 0xffffffff;
        func_0x000144f578f0(*(undefined8 *)(*(longlong *)(uStack_50 + 0x20) + 0xe0),
                            *(undefined4 *)
                             (*(longlong *)(*(longlong *)(uStack_50 + 0x118) + 0x30) +
                             (ulonglong)uStack_60 * 4),&uStack_54,&uStack_58,&uStack_5c);
        lVar4 = FUN_144f57870(param_2);
        if (((lVar4 == *(longlong *)(uVar6 + 0x188)) && (uVar2 != 0xfffc)) && ((uVar2 & 3) == 0)) {
          func_0x000144d9d8a0(uVar2,&uStack_40);
          uVar6 = (ulonglong)uStack_54;
          if (uStack_54 != uStack_40) {
            func_0x000144d9d8a0(uVar2,&uStack_44);
            uVar6 = (ulonglong)uStack_58;
            if (uStack_58 != uStack_44) {
              return 0;
            }
          }
LAB_1401a30e4:
          return CONCAT71((int7)(uVar6 >> 8),1);
        }
      }
    }
  }
  return 0;
}

