// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008ea70  size: 1038 bytes
// Name:    FUN_14008ea70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ee8620
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14008ea70(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  undefined8 uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0xd0);
  if (lVar2 != 0) {
    iVar1 = FUN_144ee8620(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30),
                          *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x40),param_2);
    if ((ulonglong)*(uint *)(lVar2 + 8) != 0) {
      piVar4 = (int *)(lVar2 + 0xc);
      uVar3 = 0;
      do {
        if (*piVar4 == iVar1) {
          if (*(char *)(param_1 + 0x4ec) == '\0') {
            lVar2 = param_1 + 0x4e0;
            uVar5 = 0;
          }
          else if (*(char *)(param_1 + 0x4fc) == '\0') {
            lVar2 = param_1 + 0x4f0;
            uVar5 = 1;
          }
          else if (*(char *)(param_1 + 0x50c) == '\0') {
            lVar2 = param_1 + 0x500;
            uVar5 = 2;
          }
          else if (*(char *)(param_1 + 0x51c) == '\0') {
            lVar2 = param_1 + 0x510;
            uVar5 = 3;
          }
          else if (*(char *)(param_1 + 0x52c) == '\0') {
            lVar2 = param_1 + 0x520;
            uVar5 = 4;
          }
          else if (*(char *)(param_1 + 0x53c) == '\0') {
            lVar2 = param_1 + 0x530;
            uVar5 = 5;
          }
          else if (*(char *)(param_1 + 0x54c) == '\0') {
            lVar2 = param_1 + 0x540;
            uVar5 = 6;
          }
          else if (*(char *)(param_1 + 0x55c) == '\0') {
            lVar2 = param_1 + 0x550;
            uVar5 = 7;
          }
          else if (*(char *)(param_1 + 0x56c) == '\0') {
            lVar2 = param_1 + 0x560;
            uVar5 = 8;
          }
          else if (*(char *)(param_1 + 0x57c) == '\0') {
            lVar2 = param_1 + 0x570;
            uVar5 = 9;
          }
          else if (*(char *)(param_1 + 0x58c) == '\0') {
            lVar2 = param_1 + 0x580;
            uVar5 = 10;
          }
          else if (*(char *)(param_1 + 0x59c) == '\0') {
            lVar2 = param_1 + 0x590;
            uVar5 = 0xb;
          }
          else if (*(char *)(param_1 + 0x5ac) == '\0') {
            lVar2 = param_1 + 0x5a0;
            uVar5 = 0xc;
          }
          else if (*(char *)(param_1 + 0x5bc) == '\0') {
            lVar2 = param_1 + 0x5b0;
            uVar5 = 0xd;
          }
          else if (*(char *)(param_1 + 0x5cc) == '\0') {
            lVar2 = param_1 + 0x5c0;
            uVar5 = 0xe;
          }
          else if (*(char *)(param_1 + 0x5dc) == '\0') {
            lVar2 = param_1 + 0x5d0;
            uVar5 = 0xf;
          }
          else if (*(char *)(param_1 + 0x5ec) == '\0') {
            lVar2 = param_1 + 0x5e0;
            uVar5 = 0x10;
          }
          else if (*(char *)(param_1 + 0x5fc) == '\0') {
            lVar2 = param_1 + 0x5f0;
            uVar5 = 0x11;
          }
          else if (*(char *)(param_1 + 0x60c) == '\0') {
            lVar2 = param_1 + 0x600;
            uVar5 = 0x12;
          }
          else if (*(char *)(param_1 + 0x61c) == '\0') {
            lVar2 = param_1 + 0x610;
            uVar5 = 0x13;
          }
          else if (*(char *)(param_1 + 0x62c) == '\0') {
            lVar2 = param_1 + 0x620;
            uVar5 = 0x14;
          }
          else if (*(char *)(param_1 + 0x63c) == '\0') {
            lVar2 = param_1 + 0x630;
            uVar5 = 0x15;
          }
          else if (*(char *)(param_1 + 0x64c) == '\0') {
            lVar2 = param_1 + 0x640;
            uVar5 = 0x16;
          }
          else if (*(char *)(param_1 + 0x65c) == '\0') {
            lVar2 = param_1 + 0x650;
            uVar5 = 0x17;
          }
          else if (*(char *)(param_1 + 0x66c) == '\0') {
            lVar2 = param_1 + 0x660;
            uVar5 = 0x18;
          }
          else if (*(char *)(param_1 + 0x67c) == '\0') {
            lVar2 = param_1 + 0x670;
            uVar5 = 0x19;
          }
          else if (*(char *)(param_1 + 0x68c) == '\0') {
            lVar2 = param_1 + 0x680;
            uVar5 = 0x1a;
          }
          else if (*(char *)(param_1 + 0x69c) == '\0') {
            lVar2 = param_1 + 0x690;
            uVar5 = 0x1b;
          }
          else if (*(char *)(param_1 + 0x6ac) == '\0') {
            lVar2 = param_1 + 0x6a0;
            uVar5 = 0x1c;
          }
          else if (*(char *)(param_1 + 0x6bc) == '\0') {
            lVar2 = param_1 + 0x6b0;
            uVar5 = 0x1d;
          }
          else if (*(char *)(param_1 + 0x6cc) == '\0') {
            lVar2 = param_1 + 0x6c0;
            uVar5 = 0x1e;
          }
          else {
            if (*(char *)(param_1 + 0x6dc) != '\0') {
              return 0xffffffff;
            }
            lVar2 = param_1 + 0x6d0;
            uVar5 = 0x1f;
          }
          *(undefined1 *)(lVar2 + 0xc) = 1;
          *(char *)(lVar2 + 0xd) = (char)uVar3;
          *(int *)(param_1 + 0x850) = *(int *)(param_1 + 0x850) + 1;
          return uVar5;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 4;
      } while (*(uint *)(lVar2 + 8) != uVar3);
    }
  }
  return 0xffffffff;
}

