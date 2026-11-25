// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 144454e60  size: 349 bytes
// Name:    phBound::Load
// Subsystem: physics
// Class:   phBound
//
// Evidence:
//   GTAVSRC: phBound::Load  (rage/base/src/physics/archetype.cpp)
//   literal: IncludeFlags:
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1447ccc70, FUN_1428ca7b0, FUN_1428ca730, fiAssetManager::FileName
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/phBound.h"


void phBound__Load(longlong param_1,longlong *param_2,longlong param_3)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_98 [128];
  
  if (param_3 == 0) {
    cVar2 = FUN_1428ca730(param_2,&UNK_146788a81,1);
    if (cVar2 == '\0') {
      puVar6 = (undefined1 *)param_2[1];
    }
    else {
      (**(code **)(*param_2 + 0x10))(param_2,auStack_98,0x80);
      pvVar4 = _stricmp(auStack_98,&UNK_146782e04);
      if ((int)pvVar4 != 0) {
        pvVar4 = _stricmp(auStack_98,&UNK_14678035d);
        if ((int)pvVar4 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (**(code **)(*param_2 + 0x60))(param_2,&UNK_1467783cf);
        param_3 = FUN_1447ccc70(param_2);
        (**(code **)(*param_2 + 0x60))(param_2,&UNK_1467783bc);
        goto LAB_144454f0b;
      }
      puVar6 = auStack_98;
      (**(code **)(*param_2 + 0x10))(param_2,puVar6,0x80);
    }
    param_3 = fiAssetManager__FileName(puVar6);
  }
LAB_144454f0b:
  func_0x00014542c750(param_1,param_3);
  cVar2 = FUN_1428ca7b0(param_2,&UNK_146788905,1);
  if (cVar2 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0x38))(param_2,1);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
  }
  cVar2 = FUN_1428ca7b0(param_2,&UNK_146788910,1);
  if (cVar2 != '\0') {
    uVar5 = (**(code **)(*param_2 + 0x38))(param_2,1);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
  }
  cVar2 = FUN_1428ca7b0(param_2,&UNK_1467888f6,1);
  if (cVar2 != '\0') {
    uVar3 = (**(code **)(*param_2 + 0x28))(param_2,1);
    *(undefined2 *)(param_1 + 0x38) = uVar3;
  }
  return;
}

