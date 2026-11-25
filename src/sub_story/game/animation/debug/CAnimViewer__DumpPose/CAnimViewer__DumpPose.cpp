// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145ab72c0  size: 91 bytes
// Name:    CAnimViewer::DumpPose
// Subsystem: core
// Class:   CAnimViewer
//
// Evidence:
//   GTAVSRC: CAnimViewer::DumpPose  (game/animation/debug/AnimViewer.cpp)
//   literal: <?xml version="1.0" encoding="UTF-8"?>
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da7d30, FUN_140006590
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CAnimViewer.h"


void CAnimViewer__DumpPose(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = *(ulonglong *)(param_1 + 0x20);
    if ((uVar1 & 4) != 0) {
      FUN_140006590(*(undefined8 *)(param_1 + 8),0xef);
      FUN_140006590(*(undefined8 *)(param_1 + 8),0xbb);
      FUN_140006590(*(undefined8 *)(param_1 + 8),0xbf);
      uVar1 = *(ulonglong *)(param_1 + 0x20);
    }
    if ((uVar1 & 1) != 0) {
      FUN_144da7d30(*(undefined8 *)(param_1 + 8),&UNK_14678d058);
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}

