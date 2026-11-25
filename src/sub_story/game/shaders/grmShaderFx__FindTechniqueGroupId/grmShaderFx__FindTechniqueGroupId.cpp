// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1422e5cd0  size: 253 bytes
// Name:    grmShaderFx::FindTechniqueGroupId
// Subsystem: renderer
// Class:   grmShaderFx
//
// Evidence:
//   GTAVSRC: grmShaderFx::FindTechniqueGroupId  (game/shaders/ShaderHairSort.cpp)
//   literal: deferredalphaclip
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14375cbd0, FUN_14100c3a0, FUN_140592930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/grmShaderFx.h"


undefined4
grmShaderFx__FindTechniqueGroupId
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,uint *param_9
          )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined4 uStack_78;
  undefined2 uStack_74;
  uint uStack_70;
  undefined2 uStack_6c;
  
  uStack_6c = (undefined2)param_9[1];
  uVar2 = 0;
  uStack_70 = *param_9;
  uStack_78 = 0;
  uStack_74 = 0xff00;
  uStack_8c = 0;
  iVar1 = FUN_140592930(&uStack_8c,4,CONCAT71((uint7)(byte)((ushort)uStack_6c >> 8),7),&uStack_78,
                        param_6,param_7,param_8,&uStack_70);
  if (iVar1 != 0) {
    uStack_70 = uStack_70 & 0xffffff00;
    FUN_14375cbd0(&uStack_70,uStack_8c);
    uStack_80 = 0;
    uStack_7c = 0xff01;
    uStack_88 = *param_5;
    uStack_84 = *(undefined1 *)(param_5 + 1);
    uStack_83 = *(undefined1 *)((longlong)param_5 + 5);
    uVar2 = FUN_14100c3a0(param_2,param_3,param_4,&uStack_88,&uStack_70,0x40,0xb,&uStack_80);
  }
  return uVar2;
}

