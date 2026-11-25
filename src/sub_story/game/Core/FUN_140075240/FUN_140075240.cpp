// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140075240  size: 468 bytes
// Name:    FUN_140075240
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140075240(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (1 < (uint)(_DAT_14840d904 - *(int *)(param_1 + 0x4c)))) {
    uVar6 = 0x180;
    if (DAT_1484207d8 != '\0') {
      uVar6 = 0x400;
    }
    if (_DAT_14840d8f8 < uVar6) {
      if (*(longlong *)(param_1 + 0x20) == 0) {
        uVar4 = func_0x00014051aaa0(*(undefined8 *)(param_1 + 0x68));
        uVar4 = uVar4 & 0xffffffffffff;
        *(ulonglong *)(param_1 + 0x38) = (ulonglong)*(ushort *)(param_1 + 0x3e) << 0x30 | uVar4;
        if (0x40 < uVar4) {
          lVar5 = func_0x000140075230(uVar4,0);
          *(longlong *)(param_1 + 0x20) = lVar5;
          if (lVar5 == 0) {
            plVar1 = (longlong *)((ulonglong)_DAT_14840d8a8 * 8 + 0x14840db20);
            *plVar1 = *plVar1 + 1;
          }
          else {
            *(int *)(param_1 + 0x50) = _DAT_14840d904;
            _DAT_14840db10 = _DAT_14840db10 + (*(ulonglong *)(param_1 + 0x38) & 0xffffffffffff);
            uVar2 = *(undefined8 *)(param_1 + 8);
            uVar6 = _DAT_14840635c;
            uVar7 = _DAT_148406358;
            lVar5 = _DAT_148406360;
            if (_DAT_14840635c == _DAT_148406358) {
              uVar7 = 1;
              if (1 < _DAT_14840635c) {
                uVar7 = _DAT_14840635c >> 1;
              }
              uVar7 = uVar7 + _DAT_14840635c;
              lVar5 = func_0x000144d9c140(8,(ulonglong)uVar7 << 4);
              lVar3 = _DAT_148406360;
              uVar6 = _DAT_14840635c;
              if ((ulonglong)_DAT_14840635c != 0) {
                func_0x000145f40560(lVar5,_DAT_148406360,(ulonglong)_DAT_14840635c << 4);
              }
              if (lVar3 != 0) {
                func_0x000144d9c130(lVar3);
                uVar6 = _DAT_14840635c;
              }
            }
            _DAT_148406360 = lVar5;
            _DAT_148406358 = uVar7;
            lVar5 = _DAT_148406360;
            _DAT_14840635c = uVar6 + 1;
            *(undefined8 *)(_DAT_148406360 + (ulonglong)uVar6 * 0x10) = uVar2;
            *(undefined1 *)(lVar5 + 8 + (ulonglong)uVar6 * 0x10) = 1;
            _DAT_14840d8f8 = _DAT_14840d8f8 + 1;
          }
        }
      }
      else if (1 < (uint)(_DAT_14840d904 - *(int *)(param_1 + 0x50))) {
        func_0x000140bfafa0(*(longlong *)(param_1 + 0x18));
        if (*(longlong *)(param_1 + 0x68) != 0) {
          func_0x000144faf600();
          *(undefined8 *)(param_1 + 0x68) = 0;
        }
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
  }
  return;
}

