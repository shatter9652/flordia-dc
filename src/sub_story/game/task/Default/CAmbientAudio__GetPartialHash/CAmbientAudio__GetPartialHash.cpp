// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 142cd8400  size: 54 bytes
// Name:    CAmbientAudio::GetPartialHash
// Subsystem: audio
// Class:   CAmbientAudio
//
// Evidence:
//   GTAVSRC: CAmbientAudio::GetPartialHash  (game/task/Default/AmbientAudio.cpp)
//   literal: _CONV%02d_PART%d
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145373ee0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CAmbientAudio.h"


void CAmbientAudio__GetPartialHash(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [40];
  
  FUN_145373ee0(auStack_38,&UNK_14678538c,param_2,param_3);
  func_0x000140115aa0(auStack_38,param_1);
  return;
}

