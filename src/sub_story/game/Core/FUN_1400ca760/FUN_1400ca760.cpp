// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ca760  size: 513 bytes
// Name:    FUN_1400ca760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e58940, FUN_1400ca9a0, FUN_1400ca970
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400ca760(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte bVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  byte bVar8;
  undefined8 uStack_58;
  int iStack_50;
  undefined8 uStack_48;
  int iStack_40;
  
  if ((*(byte *)(param_1 + 0x90) & 2) != 0) {
    uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c);
    lVar5 = FUN_144e58940(uVar4);
    if (lVar5 == 0) {
      uVar4 = FUN_1400ca970(uVar4);
      bVar6 = (byte)uVar4;
      bVar3 = 0;
      if ((bVar6 != 0) && (bVar3 = 0, *(char *)(param_1 + 0x394) != '\0')) {
        bVar3 = (*(byte *)(*(longlong *)(param_1 + 0x188) + 0x1a4) & 0x20) >> 5;
      }
      iStack_50 = *(int *)(param_1 + 0x170);
      uStack_58 = param_2;
      if (iStack_50 == -1) {
        uStack_58 = 0;
      }
      iStack_40 = *(int *)(param_1 + 0x178);
      uStack_48 = param_2;
      if (iStack_40 == -1) {
        uStack_48 = 0;
      }
      bVar8 = 0;
      cVar2 = FUN_1400ca9a0(*(undefined8 *)(param_1 + 0x2f8),param_2,uVar4,0,&uStack_48,&uStack_58,
                            bVar3);
      *(byte *)(*(longlong *)(param_1 + 0x188) + 0x1a4) =
           *(byte *)(*(longlong *)(param_1 + 0x188) + 0x1a4) & 0xdf | cVar2 << 5;
      if ((*(byte *)(param_1 + 0x394) & bVar6) == 1) {
        bVar8 = (*(byte *)(*(longlong *)(param_1 + 0x188) + 0x354) & 0x20) >> 5;
      }
      iStack_50 = *(int *)(param_1 + 0x174);
      uStack_58 = param_2;
      if (iStack_50 == -1) {
        uStack_58 = 0;
      }
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x188) + 0x1a4);
      iStack_40 = *(int *)(param_1 + 0x178);
      uStack_48 = param_2;
      if (iStack_40 == -1) {
        uStack_48 = 0;
      }
      cVar2 = FUN_1400ca9a0(*(undefined8 *)(param_1 + 0x2f8),param_2,uVar4,1,&uStack_48,&uStack_58,
                            bVar8);
      *(byte *)(*(longlong *)(param_1 + 0x188) + 0x354) =
           *(byte *)(*(longlong *)(param_1 + 0x188) + 0x354) & 0xdf | cVar2 << 5;
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),
                       (bVar3 | *(byte *)(*(longlong *)(param_1 + 0x188) + 0x354)) >> 5) &
              0xffffffffffffff01;
      uVar7 = CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 | bVar6);
      goto LAB_1400ca8e9;
    }
  }
  uVar7 = 0;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x188) + 0x1a4);
  *pbVar1 = *pbVar1 & 0xdf;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x188) + 0x354);
  *pbVar1 = *pbVar1 & 0xdf;
LAB_1400ca8e9:
  return uVar7 & 0xffffffff;
}

