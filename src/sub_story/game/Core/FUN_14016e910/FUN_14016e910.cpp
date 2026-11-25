// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016e910  size: 1018 bytes
// Name:    FUN_14016e910
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145077d60, FUN_140174bd0, FUN_145077d30, FUN_144da6330, FUN_14039a2e0, FUN_140008c80, FUN_14039a010, FUN_140acbfc0, FUN_144fac3c0, FUN_1410e7410, FUN_144e96700, FUN_145077d90, FUN_14039a0a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14016e910(undefined8 *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  char cStack_a1;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined4 uStack_68;
  undefined1 auStack_60 [32];
  
  lVar2 = *(longlong *)(param_2 + 4);
  puVar5 = (undefined8 *)FUN_144e96700(0x149ab0648);
  if (lVar2 == 0) {
    if (puVar5 == (undefined8 *)0x0) {
      uVar7 = func_0x000144fc99c0(0,0);
      puVar5 = (undefined8 *)FUN_144fac3c0(uVar7,0x88,0x10);
    }
    FUN_144da6330(puVar5);
    *(undefined4 *)(puVar5 + 2) = 0;
    puVar5[3] = 0;
    *puVar5 = &UNK_14669ee68;
    FUN_144da6330(puVar5 + 4);
    puVar3 = puVar5 + 7;
    puVar5[4] = &UNK_14669ee78;
    puVar5[6] = 0;
    FUN_1410e7410(puVar3);
    puVar5[0xd] = puVar5 + 4;
    puVar5[6] = puVar5;
    *puVar5 = &UNK_1465e8fb0;
    func_0x00014039a070(puVar3);
    LOCK();
    *(int *)(puVar5 + 2) = *(int *)(puVar5 + 2) + 1;
    UNLOCK();
    if (puVar5[3] != 0) {
      LOCK();
      piVar1 = (int *)(puVar5[3] + 0x10);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),puVar3);
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      uVar7 = func_0x000144fc99c0(0,0);
      puVar5 = (undefined8 *)FUN_144fac3c0(uVar7,0x88,0x10);
      if (puVar5 != (undefined8 *)0x0) goto LAB_14016e951;
      puVar5 = (undefined8 *)0x0;
    }
    else {
LAB_14016e951:
      lVar2 = *(longlong *)(param_2 + 4);
      FUN_144da6330(puVar5);
      *(undefined4 *)(puVar5 + 2) = 0;
      puVar5[3] = 0;
      *puVar5 = &UNK_14669ee68;
      FUN_144da6330(puVar5 + 4);
      puVar5[4] = &UNK_14669ee78;
      puVar5[6] = 0;
      FUN_14039a0a0(puVar5 + 7,lVar2 + 0x38);
      puVar5[0xd] = puVar5 + 4;
      puVar5[6] = puVar5;
      *puVar5 = &UNK_1465e8fb0;
      func_0x00014039a070(puVar5 + 7);
      LOCK();
      *(int *)(puVar5 + 2) = *(int *)(puVar5 + 2) + 1;
      UNLOCK();
      if (puVar5[3] != 0) {
        LOCK();
        piVar1 = (int *)(puVar5[3] + 0x10);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
    }
    if ((char)param_2[0xc] == '\x01') {
      *param_1 = puVar5;
      return;
    }
  }
  puVar3 = puVar5 + 7;
  FUN_145077d30(puVar3,&uStack_7c);
  FUN_145077d60(puVar3,&uStack_80);
  FUN_145077d90(&iStack_84,uStack_7c,uStack_80);
  if (iStack_84 != -1) {
    FUN_14039a010(auStack_60,*(undefined8 *)(param_2 + 6),param_3);
    FUN_14039a2e0(&cStack_a1,puVar3,auStack_60);
    if (cStack_a1 != '\0') {
      FUN_140acbfc0(puVar3,param_2[0xb]);
      FUN_140008c80(puVar3,&uStack_78);
      lVar2 = *(longlong *)(param_2 + 2);
      uVar11 = *param_2 << 4;
      if (uVar11 == 0) {
        uVar4 = 0;
      }
      else {
        uVar9 = 0;
        do {
          uVar4 = uVar9;
          if (!SBORROW1('\0',*(char *)((ulonglong)(uVar9 & 0xf) +
                                      (ulonglong)(uVar9 >> 4) * 0x50 + lVar2))) break;
          uVar9 = uVar9 + 1;
          uVar4 = uVar11;
        } while (uVar11 != uVar9);
      }
      uVar6 = (ulonglong)(uint)(*param_2 << 4);
      lVar8 = (ulonglong)(uVar4 >> 4) * 0x50;
      puStack_98 = param_1;
      if (lVar8 + (ulonglong)(uVar4 & 0xf) * 4 != uVar6 * 5) {
        lVar8 = lVar8 + 0x10 + (ulonglong)(uVar4 & 0xf) * 4;
        uStack_90 = uStack_78;
        uStack_a0 = uStack_68;
        do {
          iStack_9c = *(int *)(lVar2 + lVar8);
          uVar9 = uVar4;
          if (lStack_70 == 0) {
            lStack_70 = func_0x000140174bc0(uStack_90,uStack_a0);
            lStack_70 = lStack_70 + 0x10;
          }
          else {
            lVar8 = 0;
            if (*(longlong *)(lStack_70 + 8) != 1) {
              lVar8 = *(longlong *)(lStack_70 + 8) + 8 + lStack_70;
            }
            if ((*(uint *)(lStack_70 + 4) & 0x7fffffff) != 0) {
              lVar10 = 0;
              do {
                if (*(int *)(lVar8 + lVar10) == iStack_9c) goto joined_r0x00014016ebff;
                lVar10 = lVar10 + 4;
              } while (((ulonglong)*(uint *)(lStack_70 + 4) & 0x7fffffff) * 4 != lVar10);
            }
          }
          FUN_140174bd0(lStack_70,&iStack_9c);
joined_r0x00014016ebff:
          while (uVar4 = uVar11, uVar9 != uVar11) {
            while (uVar4 = uVar9 + 1, uVar9 = uVar4, uVar4 < uVar11) {
              if (!SBORROW1('\0',*(char *)((ulonglong)(uVar4 & 0xf) +
                                          (ulonglong)(uVar4 >> 4) * 0x50 + lVar2)))
              goto LAB_14016ec30;
            }
          }
LAB_14016ec30:
          lVar8 = (ulonglong)(uVar4 >> 4) * 0x50 + 0x10 + (ulonglong)(uVar4 & 0xf) * 4;
        } while (lVar8 != uVar6 * 5 + 0x10);
      }
      *puStack_98 = puVar5;
      puVar5 = (undefined8 *)0x0;
      goto LAB_14016ec5c;
    }
  }
  *param_1 = 0;
LAB_14016ec5c:
  if (puVar5 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)puVar5[3];
    LOCK();
    piVar1 = (int *)(puVar5 + 2);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  return;
}

