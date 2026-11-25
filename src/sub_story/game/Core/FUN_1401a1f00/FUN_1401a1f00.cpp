// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a1f00  size: 599 bytes
// Name:    FUN_1401a1f00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e6bdc0, FUN_1452dd630, FUN_144f1b9b0, FUN_144e737c0, FUN_144feb630, FUN_144f661b0, FUN_1406dd560, FUN_140561350
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401a1f00(void)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = func_0x000144ee7630();
  if ((((*(char *)(lVar3 + 0x25e) != '\0') || (uVar4 = 0x1bb, *(int *)(lVar3 + 600) == 3)) &&
      ((lVar3 = func_0x000144e74840(), *(char *)(lVar3 + 0x25e) != '\0' ||
       (uVar4 = 0x1ac, *(int *)(lVar3 + 600) == 3)))) &&
     ((lVar3 = func_0x000144e74850(), *(char *)(lVar3 + 0x25e) != '\0' ||
      (uVar4 = 0x1bc, *(int *)(lVar3 + 600) == 3)))) {
    cVar1 = func_0x000144f862d0();
    uVar4 = 0x1be;
    if (cVar1 == '\0') {
      lVar3 = func_0x00014520d610();
      if (lVar3 == 0) {
        uVar4 = 0x21;
      }
      else {
        cVar1 = func_0x0001407c8560();
        if (cVar1 == '\0') {
          uVar2 = *(undefined4 *)(lVar3 + 0x9c);
          lVar5 = func_0x000144da6540(uVar2);
          if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1080) != 0)) &&
             (*(int *)(*(longlong *)(lVar5 + 0x1080) + 0xb8) != 0)) {
            return 0x1c2;
          }
          lVar5 = func_0x000144e23bb0(uVar2);
          if (lVar5 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = FUN_144feb630(lVar5,1);
          }
          lVar5 = FUN_144f1b9b0(uVar2);
          if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x3e) & 0x20) != 0)) {
            return 0x80;
          }
          lVar5 = func_0x00014504fd40(lVar3);
          if ((lVar5 != 0) &&
             (cVar1 = FUN_144e737c0(*(undefined8 *)(lVar5 + 0x70),*(undefined8 *)(lVar5 + 0x78),5),
             cVar1 != '\0')) {
            return 0x1c4;
          }
          lVar5 = func_0x00014504fd40(lVar3);
          if ((lVar5 != 0) &&
             (cVar1 = FUN_144e737c0(*(undefined8 *)(lVar5 + 0x70),*(undefined8 *)(lVar5 + 0x78),9),
             cVar1 != '\0')) {
            return 0x18d;
          }
          lVar5 = func_0x000144dd7540(*(undefined4 *)(lVar3 + 0x9c));
          if ((lVar5 != 0) &&
             (*(longlong *)(lVar5 + 0x898) != 0 && (*(byte *)(lVar5 + 0x10) & 0x20) != 0)) {
            uVar4 = func_0x000144eb3780(*(undefined4 *)(*(longlong *)(lVar5 + 0x898) + 0x9c));
            lVar5 = FUN_140561350(uVar4,lVar3);
            if ((lVar5 != 0) &&
               ((*(uint *)(lVar5 + 0x2c) < 8 &&
                ((0x8cU >> (*(uint *)(lVar5 + 0x2c) & 0x1f) & 1) != 0)))) {
              return 0x1c5;
            }
          }
          uVar4 = func_0x000145073c10();
          cVar1 = func_0x000140ba41e0(uVar4);
          if (cVar1 != '\0') {
            return 0x38;
          }
          cVar1 = FUN_1406dd560(lVar3);
          if (cVar1 != '\0') {
            return 0x141;
          }
        }
        cVar1 = FUN_144e6bdc0();
        uVar4 = 0x1b5;
        if (cVar1 == '\0') {
          cVar1 = FUN_1452dd630(*(undefined4 *)(lVar3 + 0x9c),5);
          uVar4 = 0x267;
          if (cVar1 == '\0') {
            cVar1 = FUN_1452dd630(*(undefined4 *)(lVar3 + 0x9c),6);
            uVar4 = 0x267;
            if (cVar1 == '\0') {
              lVar3 = FUN_144f661b0(lVar3,1);
              uVar4 = 0x30e;
              if (lVar3 == 0) {
                uVar4 = 1;
              }
            }
          }
        }
      }
    }
  }
  return uVar4;
}

