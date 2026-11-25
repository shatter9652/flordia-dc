// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007b080  size: 331 bytes
// Name:    FUN_14007b080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14007b1d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined2 * FUN_14007b080(longlong param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined8 uVar4;
  undefined2 *in_RAX;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *apuStack_70 [4];
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_30;
  
  if (param_2 == 0x558e2d6d) {
    if (*(short *)(param_1 + 0x28) < 0) {
      if (*(short *)(param_1 + 0x28) == -1) {
        uStack_40 = 0x14007d1b7;
        in_RAX = (undefined2 *)FUN_14007d330();
        sVar3 = (short)in_RAX;
        *(short *)(param_1 + 0x28) = sVar3;
        if (sVar3 != -1) {
          if (param_3 != 0) {
            lVar7 = 0;
            if (-1 < sVar3) {
              lVar7 = ((ulonglong)in_RAX & 0xffff) * 0x18 + 0x14a9240e8;
            }
            uStack_40 = 0x14007d1e7;
            FUN_14007d3e0(lVar7,param_3);
            sVar3 = *(short *)(param_1 + 0x28);
          }
          lVar7 = 0;
          if (-1 < sVar3) {
            lVar7 = (longlong)sVar3 * 0x18 + 0x14a9240e8;
          }
          uStack_40 = 0x14007d20f;
          in_RAX = (undefined2 *)FUN_144f12fd0(param_1);
          *(short *)(lVar7 + 0x10) = (short)in_RAX;
        }
      }
      return in_RAX;
    }
  }
  else if (param_2 < 0xccd73f9) {
    if (param_2 == -0x67960140) {
      uStack_30 = 0x14007b1dd;
      FUN_14007b1f0((undefined2 *)(param_1 + 0x2a),param_3);
      return (undefined2 *)(param_1 + 0x2a);
    }
    if (param_2 == -0x2248e1a2) {
      uStack_30 = 0x14007b24d;
      FUN_144ddb110((undefined2 *)(param_1 + 0x32),param_3);
      return (undefined2 *)(param_1 + 0x32);
    }
    if (param_2 == -0x2df4fa74) {
      if (param_3 == -1) {
        *(undefined1 *)(param_1 + 0x37) = 0xff;
      }
      else {
        *(char *)(param_1 + 0x37) = (char)param_3;
      }
    }
  }
  else if (param_2 < 0x31ff1bc8) {
    if (param_2 == 0xccd73f9) {
      if (param_3 == 0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      else {
        uStack_40 = 0x14007b277;
        puVar5 = (undefined2 *)func_0x00014007b320(param_1);
        if ((char)puVar5 != '\0') {
          if (*(char *)(param_1 + 0x2c) == '\x01') {
            uVar1 = *(undefined2 *)(param_1 + 0x2a);
            puStack_50 = (undefined *)0x140035c20;
            puVar5 = (undefined2 *)func_0x000144ddb170(uVar1);
            if ((char)puVar5 != '\0') {
              puStack_50 = (undefined *)0x140035c29;
              uVar4 = func_0x000144da4590();
              puStack_50 = (undefined *)0x140035c39;
              puVar5 = (undefined2 *)func_0x000140035c50(uVar4,uVar1,0,0);
            }
            *(undefined1 *)(param_1 + 0x2c) = 0;
          }
          return puVar5;
        }
        if (*(char *)(param_1 + 0x2c) == '\0') {
          uStack_40 = 0x14007b28a;
          FUN_14007b2c0(param_1 + 0x2a);
        }
        in_RAX = (undefined2 *)(ulonglong)*(uint *)(param_1 + 0x14);
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x18 + (longlong)in_RAX * 4) = param_3;
      }
      return in_RAX;
    }
    if (param_2 == 0x24527498) {
      uStack_30 = 0x14007b12e;
      FUN_14007b1d0((undefined2 *)(param_1 + 0x2e),param_3);
      uVar1 = *(undefined2 *)(param_1 + 0x2e);
      uStack_40 = 0x14007b2d3;
      puVar5 = (undefined2 *)func_0x000144ddb170(uVar1);
      if (((char)puVar5 != '\0') && (*(char *)(param_1 + 0x30) == '\0')) {
        uStack_40 = 0x14007b2e2;
        uVar4 = func_0x000144da4590();
        uStack_40 = 0x14007b2ec;
        puVar5 = (undefined2 *)func_0x00014007b300(uVar4,uVar1);
        *(undefined1 *)(param_1 + 0x30) = 1;
      }
      return puVar5;
    }
  }
  else if (param_2 < 0x71581beb) {
    if (param_2 == 0x64a4571a) {
      puVar5 = (undefined2 *)(param_1 + 0x34);
      if (param_3 != 0xffff) {
        uStack_30 = 0x14007b4bd;
        FUN_14007c670(puVar5,param_3);
        return puVar5;
      }
      apuStack_70[0] = &UNK_14502694b;
      puVar6 = (undefined2 *)func_0x000144ddb170(*puVar5);
      if ((char)puVar6 != '\0') {
        puStack_50 = &UNK_145026964;
        lVar7 = FUN_145647140();
        lVar7 = -lVar7;
        *(undefined **)((longlong)apuStack_70 + lVar7) = &UNK_145026982;
        FUN_144e52aa0(auStack_48,0xf0a244ef,auStack_48 + lVar7,0x1000);
        uVar1 = *puVar5;
        *(undefined **)((longlong)apuStack_70 + lVar7) = &UNK_145026994;
        lVar8 = FUN_1451d3c50(uVar1);
        if (lVar8 != 0) {
          uVar2 = *(undefined2 *)(lVar8 + 0x45e);
          *(undefined **)((longlong)apuStack_70 + lVar7) = &UNK_1450269b0;
          FUN_14016b6e0(uVar2,uVar1);
        }
        *puVar5 = 0xffff;
        *(undefined **)((longlong)apuStack_70 + lVar7) = &UNK_1450269c6;
        puVar6 = (undefined2 *)FUN_144e529a0(auStack_48);
      }
      return puVar6;
    }
    if (param_2 == 0x31ff1bc8) {
      in_RAX = (undefined2 *)(ulonglong)(param_3 == 0);
      *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfe | param_3 == 0;
    }
  }
  else if (param_2 == 0x71581beb) {
    *(short *)(param_1 + 0x24) = (short)param_3;
  }
  else if (param_2 == 0x7bd31ef2) {
    *(int *)(param_1 + 0x20) = param_3;
  }
  return in_RAX;
}

