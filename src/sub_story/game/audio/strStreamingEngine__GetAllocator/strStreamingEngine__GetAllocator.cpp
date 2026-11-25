// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 142a9b9a0  size: 488 bytes
// Name:    strStreamingEngine::GetAllocator
// Subsystem: streaming
// Class:   strStreamingEngine
//
// Evidence:
//   GTAVSRC: strStreamingEngine::GetAllocator  (game/audio/speechaudioentity.cpp)
//   literal: Viseme animation data
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fac3c0, FUN_144e65ca0, FUN_140004b40, FUN_1450f7620, FUN_144efc8c0, FUN_1450f7570, FUN_14023c460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/strStreamingEngine.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * strStreamingEngine__GetAllocator(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 *puStack_b8;
  int iStack_b0;
  int iStack_ac;
  ulonglong uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_90;
  longlong alStack_88 [10];
  
  FUN_140004b40(0x147bd1170);
  uVar4 = (ulonglong)_DAT_147bd1168;
  if (uVar4 == 0) {
LAB_142a9b9fb:
    if ((*param_1 == 0x38435352) && (param_1[6] = 0, param_1[7] = 0, (char)param_1[1] == 'A')) {
      uStack_a8 = 0;
      FUN_144efc8c0();
      uVar4 = uStack_a8;
      if ((byte)uStack_a8 != 0) {
        param_1 = param_1 + 4;
        lVar3 = 0;
        lVar5 = 0;
        do {
          lVar5 = lVar5 + *(longlong *)((longlong)alStack_88 + lVar3);
          lVar3 = lVar3 + 0x18;
        } while ((ulonglong)((uint)(byte)uStack_a8 * 8) * 3 != lVar3);
        uVar6 = lVar5 + 0x1fffU & 0xffffffffffffe000;
        if (uVar6 != 0) {
          lVar3 = FUN_144fac3c0(_DAT_147bd1198,uVar6,0x10);
          if (lVar3 != 0) {
            lVar5 = 0;
            do {
              lVar1 = *(longlong *)((longlong)alStack_88 + lVar5);
              func_0x000145f40560(lVar3,param_1,lVar1);
              *(longlong *)((longlong)alStack_88 + lVar5 + -8) = lVar3;
              param_1 = (int *)((longlong)param_1 + lVar1);
              lVar3 = lVar3 + lVar1;
              lVar5 = lVar5 + 0x18;
            } while ((uVar4 & 0xff) * 0x18 != lVar5);
            puStack_a0 = puStack_90;
            FUN_1450f7620(auStack_d8,&uStack_a8,&UNK_146785d67,0);
            if (puStack_90 != (undefined8 *)0x0) {
              FUN_14023c460(puStack_90,auStack_d8);
              *puStack_90 = &UNK_14631fb60;
            }
            LOCK();
            *(int *)(puStack_90 + 2) = *(int *)(puStack_90 + 2) + 1;
            UNLOCK();
            LOCK();
            *(int *)(puStack_90 + 2) = *(int *)(puStack_90 + 2) + 1;
            UNLOCK();
            FUN_144e65ca0(&iStack_b0,0xffffffff);
            puStack_b8 = puStack_90;
            lVar3 = (longlong)(int)_DAT_147bd1168;
            _DAT_147bd1168 = _DAT_147bd1168 + 1;
            *(undefined8 **)(lVar3 * 0x10 + 0x147bd0e48) = puStack_90;
            *(ulonglong *)(lVar3 * 0x10 + 0x147bd0e50) = CONCAT44(param_3,param_2);
            iStack_b0 = param_2;
            iStack_ac = param_3;
            FUN_1450f7570(uStack_c8);
            goto LAB_142a9bb66;
          }
        }
      }
    }
  }
  else {
    plVar2 = (longlong *)0x147bd0e48;
    do {
      if (((int)plVar2[1] == param_2) && (*(int *)((longlong)plVar2 + 0xc) == param_3)) {
        LOCK();
        *(int *)(*plVar2 + 0x10) = *(int *)(*plVar2 + 0x10) + 1;
        UNLOCK();
        puStack_90 = (undefined8 *)*plVar2;
        goto LAB_142a9bb66;
      }
      plVar2 = plVar2 + 2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    if (_DAT_147bd1168 != 0x32) goto LAB_142a9b9fb;
  }
  puStack_90 = (undefined8 *)0x0;
LAB_142a9bb66:
  func_0x000144d9dab0(0x147bd1170);
  return puStack_90;
}

