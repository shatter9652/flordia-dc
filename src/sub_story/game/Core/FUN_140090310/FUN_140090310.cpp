// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140090310  size: 287 bytes
// Name:    FUN_140090310
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da60a0, FUN_143c96a00, FUN_14123a7a0, FUN_1431a7760
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140090310(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [8];
  longlong lStack_68;
  char cStack_4f;
  undefined1 auStack_48 [16];
  
  if ((*param_2 == 3) && (lVar1 = *(longlong *)(param_1 + 0x10), lVar1 != 0)) {
    FUN_144da60a0(auStack_70,lVar1 + 0x80 + (ulonglong)*(uint *)(lVar1 + 0x78) * 0x30,0x1a,
                  0xfcd8d79e);
    if ((cStack_4f == '\0') &&
       (lVar1 = **(longlong **)(*(longlong *)(lVar1 + 0x1d0) + 8), *(char *)(lVar1 + 0x30) == '\x03'
       )) {
      lVar3 = func_0x000140512920(*(undefined4 *)(lVar1 + 0x9c));
      if (lVar3 != 0) {
        do {
          if (*(longlong *)(lStack_68 + 0x28) != 0) {
            FUN_1431a7760(*(longlong *)(lStack_68 + 0x28),&iStack_8c);
            if (iStack_8c != 0) {
              iVar2 = func_0x000142d75220();
              FUN_14123a7a0(lVar3,iVar2,0,0);
              if (iVar2 == 0) {
                uStack_88 = *(undefined8 *)(lVar1 + 0x70);
                uStack_80 = *(undefined8 *)(lVar1 + 0x78);
                func_0x000144dc3790(&uStack_88,auStack_48);
                FUN_143c96a00(lVar3,auStack_48);
              }
            }
          }
          func_0x000144db7670(auStack_70);
        } while (cStack_4f != '\x01');
      }
    }
  }
  return;
}

