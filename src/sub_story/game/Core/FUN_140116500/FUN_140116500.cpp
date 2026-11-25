// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140116500  size: 681 bytes
// Name:    FUN_140116500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fc3270, FUN_144f5baf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140116500(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uStack_142;
  byte bStack_141;
  byte *pbStack_140;
  byte **ppbStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined1 *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [88];
  code *pcStack_98;
  undefined1 auStack_90 [96];
  code *pcStack_30;
  
  if (param_2 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_2 + 8);
  bVar3 = *(byte *)(param_1 + 0x48);
  if ((bVar3 & 1) == 0) {
    if ((bVar3 & 4) == 0) goto LAB_1401165f2;
    puStack_118 = &uStack_142;
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    pbStack_140 = &bStack_141;
    ppbStack_138 = &pbStack_140;
    puStack_110 = &UNK_145955790;
    puStack_108 = &UNK_145955790;
    bStack_141 = 1;
    puStack_100 = &UNK_144e89130;
    pcStack_130 = FUN_144f5bf80;
    puStack_128 = &UNK_1401167b0;
    puStack_120 = &SUB_140004380;
    FUN_144fc3270(auStack_f8);
    FUN_144f5baf0(auStack_f8,2,uVar2);
    bVar4 = bStack_141;
    if (pcStack_30 != (code *)0x0) {
      (*pcStack_30)(auStack_90);
    }
    if (pcStack_98 != (code *)0x0) {
      (*pcStack_98)(auStack_f0);
    }
    bVar4 = bVar4 << 2;
    bVar3 = *(byte *)(param_1 + 0x48) & 0xfb;
  }
  else {
    puStack_118 = &uStack_142;
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    pbStack_140 = &bStack_141;
    ppbStack_138 = &pbStack_140;
    puStack_110 = &UNK_145955790;
    puStack_108 = &UNK_145955790;
    bStack_141 = 1;
    puStack_100 = &UNK_144e89130;
    pcStack_130 = FUN_144f5bf80;
    puStack_128 = &UNK_1401167b0;
    puStack_120 = &SUB_140004380;
    FUN_144fc3270(auStack_f8);
    FUN_144f5baf0(auStack_f8,2,uVar2);
    bVar4 = bStack_141;
    if (pcStack_30 != (code *)0x0) {
      (*pcStack_30)(auStack_90);
    }
    if (pcStack_98 != (code *)0x0) {
      (*pcStack_98)(auStack_f0);
    }
    bVar3 = *(byte *)(param_1 + 0x48) & 0xfe;
  }
  bVar3 = bVar3 | bVar4;
  *(byte *)(param_1 + 0x48) = bVar3;
LAB_1401165f2:
  if ((bVar3 & 2) != 0) {
    puStack_118 = &uStack_142;
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    pbStack_140 = &bStack_141;
    ppbStack_138 = &pbStack_140;
    puStack_110 = &UNK_145955790;
    puStack_108 = &UNK_145955790;
    bStack_141 = 1;
    puStack_100 = &UNK_144e89130;
    pcStack_130 = FUN_144f5bf80;
    puStack_128 = &UNK_1401167b0;
    puStack_120 = &SUB_140004380;
    FUN_144fc3270(auStack_f8);
    FUN_144f5baf0(auStack_f8,5,uVar2);
    bVar3 = bStack_141;
    if (pcStack_30 != (code *)0x0) {
      (*pcStack_30)(auStack_90);
    }
    if (pcStack_98 != (code *)0x0) {
      (*pcStack_98)(auStack_f0);
    }
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xfd | bVar3 * '\x02';
  }
  return;
}

