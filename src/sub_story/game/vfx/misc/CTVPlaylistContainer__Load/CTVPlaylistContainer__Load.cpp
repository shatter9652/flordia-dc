// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 144056c80  size: 57 bytes
// Name:    CTVPlaylistContainer::Load
// Subsystem: core
// Class:   CTVPlaylistContainer
//
// Evidence:
//   GTAVSRC: CTVPlaylistContainer::Load  (game/vfx/misc/TVPlaylistManager.cpp)
//   literal: common:/data/TVPlaylists
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141795170
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CTVPlaylistContainer.h"


void CTVPlaylistContainer__Load(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x000144054fd0();
  FUN_141795170(param_1,&UNK_14677b192,&UNK_14677fdd0,uVar1,0x149188528);
  return;
}

