// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145984110  size: 286 bytes
// Name:    parXmlWriterVisitor::BeginArrayMember
// Subsystem: core
// Class:   parXmlWriterVisitor
//
// Evidence:
//   GTAVSRC: parXmlWriterVisitor::BeginArrayMember  (rage/base/src/parser/visitorxml.cpp)
//   literal: xValuesPerLine
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1410424f0, FUN_141306ac0, FUN_141894cb0, FUN_1411cd930, FUN_141be6350, FUN_140c884b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/parXmlWriterVisitor.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong parXmlWriterVisitor__BeginArrayMember(void)

{
  longlong lVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  lVar1 = _DAT_146dcad70;
  if (_DAT_146dcad70 == 0) {
    lVar1 = FUN_140c884b0(&DAT_146dcad70,&UNK_144ad6c40);
    func_0x0001403aa8f0(lVar1,FUN_144ad6c50,&UNK_144ad6c90,&SUB_140004380);
    _DAT_146dcacb7 = 0x10;
    _DAT_146dcad2b = 0x10;
    FUN_141be6350(0x146dcac93,&UNK_146782827,&UNK_146788fb3);
    FUN_141be6350(0x146dcad07,&UNK_146782827,&UNK_146789603);
    FUN_1410424f0(lVar1,2);
    uStack_20 = 0;
    func_0x000145984230(&uStack_20);
    uStack_28 = 0;
    FUN_141306ac0(lVar1,0x4049095c,&uStack_28);
    uStack_30 = 0;
    func_0x000145984240(&uStack_30);
    uStack_38 = 0;
    FUN_141894cb0(lVar1,&uStack_38);
    uStack_40 = 0;
    func_0x000145984250(&uStack_40);
    uStack_48 = 0;
    FUN_141306ac0(lVar1,0x8244d7ac,&uStack_48);
    FUN_1411cd930(lVar1);
  }
  return lVar1;
}

