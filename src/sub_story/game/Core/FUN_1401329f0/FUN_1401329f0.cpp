// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401329f0  size: 1290 bytes
// Name:    FUN_1401329f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1426a3630, FUN_140132f00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401329f0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  ulonglong param_5)

{
  char *pcVar1;
  undefined4 uVar2;
  uint *puVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar16 [64];
  ulonglong in_stack_ffffffffffffff78;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar3 = *(uint **)(param_4 + 8);
  if (puVar3 == (uint *)0x0) {
    func_0x0001403ad2a0(param_4);
LAB_140132cfc:
    *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) & 0xfb;
    return;
  }
  uVar7 = *(uint *)(param_4 + 0x10);
  if ((uVar7 & 0xfffffffe) == 2) {
    cVar6 = FUN_140132f00(param_1,param_2,param_3,param_4,param_5);
    in_stack_ffffffffffffff78 = param_5;
    if (cVar6 == '\0') {
      bVar5 = false;
    }
    else {
      *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) | 4;
      bVar5 = true;
    }
  }
  else {
    bVar5 = false;
  }
  if (uVar7 == 4) {
    fVar14 = *(float *)(param_4 + 0x30);
    if (*(int *)(param_4 + 0x28) == 0) {
      fVar12 = 0.0;
    }
    else {
      uVar7 = func_0x000144dc06c0();
      fVar12 = (float)uVar7 * _DAT_146159ec4;
    }
    if (fVar12 <= fVar14) {
      return;
    }
    uStack_78 = *(undefined8 *)(param_2 + 0x70);
    uStack_70 = *(undefined8 *)(param_2 + 0x78);
    cVar6 = FUN_1426a3630(&uStack_78,*(undefined8 *)(param_4 + 8));
    if (cVar6 == '\0') {
      return;
    }
    uVar11 = 5;
    goto LAB_140132ba7;
  }
  switch(uVar7) {
  case 1:
    uVar11 = 5;
    if (cRam000000014997837e != '\0') break;
    fVar14 = *(float *)(param_4 + 0x14);
    fVar15 = 0.0;
    fVar12 = (float)func_0x00014503ff50(0,_DAT_145fc6ed8);
    if (fVar12 <= fVar14) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = *(ulonglong *)(puVar3 + 6);
      if ((*puVar3 & 0xfffffffe) == 0xe) {
        auVar16 = ZEXT1664(auVar13);
        cVar6 = func_0x000144e52860(*(undefined4 *)(param_3 + 0x9c));
        auVar13 = auVar16._0_16_;
        if (cVar6 != '\0') {
          iVar8 = FUN_140082c90(param_2,0x23,param_3);
          uVar7 = func_0x000144dc06c0(iVar8);
          auVar13 = auVar16._0_16_;
          if ((iVar8 != 0) && (uVar7 <= uRam000000014a9ae128)) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = *(ulonglong *)(puVar3 + 8);
          }
        }
      }
      auVar13 = vmovshdup_avx(auVar13);
      fVar14 = 0.0;
      uVar11 = 3;
      if ((auVar13._0_4_ <= 0.0) || (fVar12 = (float)func_0x00014503ff50(), fVar12 <= fVar14))
      break;
      goto code_r0x000140132b9c;
    }
    if ((float)puVar3[0xd] <= fVar15) break;
    uVar7 = puVar3[0xc];
code_r0x000140132c9e:
    uVar11 = 5;
    fVar12 = (float)func_0x00014503ff50(uVar7);
    if (0.0 < fVar12) {
code_r0x000140132cb1:
      *(float *)(param_4 + 0x30) = fVar12;
      uVar11 = 4;
      if ((*(longlong *)(param_4 + 8) != 0) && (*(char *)(param_4 + 0x35) == '\x01')) {
        LOCK();
        pcVar1 = (char *)(*(longlong *)(param_4 + 8) + 0x54);
        *pcVar1 = *pcVar1 + -1;
        UNLOCK();
        *(undefined1 *)(param_4 + 0x35) = 0;
      }
    }
    break;
  case 2:
    uVar11 = 5;
    if (cRam000000014997837e == '\0') {
      bVar4 = *(byte *)(param_4 + 0x34);
      if (bVar5) {
        if ((bVar4 & 2) == 0) {
          lVar10 = func_0x000144f01400(*(undefined4 *)(param_2 + 0x9c));
          lVar10 = func_0x000144f01450(lVar10 + 0x10);
          if (((lVar10 != 0) &&
              (lVar9 = func_0x000144f200a0(*(undefined4 *)(lVar10 + 0x68)), lVar9 == param_3)) &&
             (*(int *)(lVar10 + 0x1220) != 0)) {
            *(int *)(param_4 + 0x28) = *(int *)(lVar10 + 0x1220);
          }
          *(byte *)(param_4 + 0x34) = bVar4 | 2;
        }
        if (*(int *)(param_4 + 0x28) == 0) {
          fVar14 = 0.0;
        }
        else {
          uVar7 = func_0x000144dc06c0();
          fVar14 = (float)uVar7 * _DAT_146159ec4;
        }
        if (fVar14 <= *(float *)(param_4 + 0x2c)) {
          return;
        }
        uVar11 = 3;
      }
      else if ((((bVar4 & 1) != 0) && (fVar14 = 0.0, 0.0 < (float)puVar3[0xb])) &&
              (fVar12 = (float)func_0x00014503ff50(puVar3[10]), fVar14 < fVar12))
      goto code_r0x000140132cb1;
    }
    break;
  case 3:
    uVar11 = 5;
    if ((!bVar5) || (cVar6 = FUN_1401328c0(param_2,param_3,puVar3[0x14]), cVar6 == '\0')) break;
    *(byte *)(param_4 + 0x34) = *(byte *)(param_4 + 0x34) | 1;
    uVar2 = *(undefined4 *)(param_2 + 0x9c);
    if ((*puVar3 == 0xf) &&
       ((((lVar10 = func_0x000144f02de0(), lVar10 != 0 &&
          (lVar10 = FUN_144f02e30(lVar10,0), lVar10 != 0)) &&
         (lVar10 = func_0x000144f3a220(*(undefined4 *)(lVar10 + 0xe80)),
         lVar10 != param_2 && lVar10 != 0)) &&
        (cVar6 = func_0x00014506d5a0(*(undefined4 *)(lVar10 + 0x9c)), cVar6 != '\0')))) {
      lVar9 = FUN_140871a00(uVar2);
      FUN_141743130(lVar9,param_3,*puVar3,0,in_stack_ffffffffffffff78 & 0xffffffff00000000,
                    0xffffffff);
      *(byte *)(lVar9 + 0x28) = *(byte *)(lVar9 + 0x28) | 0x10;
      *(uint *)(lVar9 + 0xc4) = puVar3[1];
code_r0x000140132c69:
      FUN_140871790(*(undefined4 *)(lVar10 + 0x9c),lVar9);
    }
    else {
      cVar6 = func_0x00014506d5a0(uVar2);
      if (cVar6 != '\0') {
        lVar9 = FUN_140871a00();
        FUN_141743130(lVar9,param_3,*puVar3,0,in_stack_ffffffffffffff78 & 0xffffffff00000000,
                      0xffffffff);
        *(uint *)(lVar9 + 0xc4) = puVar3[1];
        *(byte *)(lVar9 + 0x28) = *(byte *)(lVar9 + 0x28) | 0x10;
        lVar10 = param_2;
        goto code_r0x000140132c69;
      }
    }
    fVar14 = 0.0;
    if (((float)puVar3[9] <= 0.0) ||
       (fVar14 = 0.0, fVar12 = (float)func_0x00014503ff50(puVar3[8]), fVar12 <= fVar14)) {
      if (fVar14 < (float)puVar3[0xb]) {
        uVar7 = puVar3[10];
        goto code_r0x000140132c9e;
      }
    }
    else {
code_r0x000140132b9c:
      *(float *)(param_4 + 0x2c) = fVar12;
      uVar11 = 2;
    }
    break;
  default:
    goto LAB_140132a65;
  case 5:
    func_0x0001403ad2a0(param_4);
    bVar4 = (byte)*puVar3 & 0x1f;
    puVar3 = (uint *)(param_1 + (ulonglong)(*puVar3 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    goto LAB_140132cfc;
  }
LAB_140132ba7:
  *(undefined4 *)(param_4 + 0x10) = uVar11;
  *(undefined4 *)(param_4 + 0x28) = _DAT_14abbef40;
LAB_140132a65:
  return;
}

