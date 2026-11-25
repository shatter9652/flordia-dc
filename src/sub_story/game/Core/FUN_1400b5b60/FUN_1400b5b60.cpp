// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b5b60  size: 152 bytes
// Name:    FUN_1400b5b60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f40cd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400b5b60(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_144f40cd0();
    if (lVar2 == 0) {
      bVar1 = *(byte *)(lVar3 + 0x9b);
      if ((bVar1 & 8) != 0) {
        if (_DAT_148d7ab38 < _DAT_148d58bcc) {
          LOCK();
          UNLOCK();
          if (_DAT_148d7ab38 < _DAT_148d58bcc) {
            lVar3 = *(longlong *)(_DAT_148d58bd0 + (ulonglong)_DAT_148d7ab38 * 8);
            _DAT_148d7ab38 = _DAT_148d7ab38 + 1;
          }
          else {
            _DAT_148d7ab38 = _DAT_148d7ab38 + 1;
            lVar3 = func_0x000144f97130(0x180);
          }
        }
        else {
          lVar3 = func_0x000144f97130(0x180);
        }
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1400b8040(lVar3,param_1,param_2);
        }
        return lVar3;
      }
      if ((bVar1 & 0x10) != 0) {
        if ((*(uint *)(param_1 + 0xb0) & 0x10) != 0) {
          if (_DAT_148d7ab00 < _DAT_148d4aaec) {
            LOCK();
            UNLOCK();
            if (_DAT_148d7ab00 < _DAT_148d4aaec) {
              lVar3 = *(longlong *)(_DAT_148d4aaf0 + (ulonglong)_DAT_148d7ab00 * 8);
              _DAT_148d7ab00 = _DAT_148d7ab00 + 1;
            }
            else {
              _DAT_148d7ab00 = _DAT_148d7ab00 + 1;
              lVar3 = func_0x000144f97130(0x1b0);
            }
          }
          else {
            lVar3 = func_0x000144f97130(0x1b0);
          }
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else {
            FUN_1400bad00(lVar3,param_1,param_2);
          }
          return lVar3;
        }
        if (_DAT_148d7aafc < _DAT_148d49adc) {
          LOCK();
          UNLOCK();
          if (_DAT_148d7aafc < _DAT_148d49adc) {
            lVar3 = *(longlong *)(_DAT_148d49ae0 + (ulonglong)_DAT_148d7aafc * 8);
            _DAT_148d7aafc = _DAT_148d7aafc + 1;
          }
          else {
            _DAT_148d7aafc = _DAT_148d7aafc + 1;
            lVar3 = func_0x000144f97130(0x150);
          }
        }
        else {
          lVar3 = func_0x000144f97130(0x150);
        }
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1400b9140(lVar3,param_1,param_2);
        }
        return lVar3;
      }
      if ((*(uint *)(param_1 + 0xb0) & 0x10) == 0) {
        if (_DAT_148d7aafc < _DAT_148d49adc) {
          LOCK();
          UNLOCK();
          if (_DAT_148d7aafc < _DAT_148d49adc) {
            lVar3 = *(longlong *)(_DAT_148d49ae0 + (ulonglong)_DAT_148d7aafc * 8);
            _DAT_148d7aafc = _DAT_148d7aafc + 1;
          }
          else {
            _DAT_148d7aafc = _DAT_148d7aafc + 1;
            lVar3 = func_0x000144f97130(0x150);
          }
        }
        else {
          lVar3 = func_0x000144f97130(0x150);
        }
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1400b62d0(lVar3,param_1,param_2,0x1a,unaff_RBX,unaff_RDI,unaff_RSI);
        }
        return lVar3;
      }
      if (_DAT_148d7ab00 < _DAT_148d4aaec) {
        LOCK();
        UNLOCK();
        if (_DAT_148d7ab00 < _DAT_148d4aaec) {
          lVar3 = *(longlong *)(_DAT_148d4aaf0 + (ulonglong)_DAT_148d7ab00 * 8);
          _DAT_148d7ab00 = _DAT_148d7ab00 + 1;
        }
        else {
          _DAT_148d7ab00 = _DAT_148d7ab00 + 1;
          lVar3 = func_0x000144f97130(0x1b0);
        }
      }
      else {
        lVar3 = func_0x000144f97130(0x1b0);
      }
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_1400b5c90(lVar3,param_1,param_2,7,unaff_RBX,unaff_RDI,unaff_RSI);
      }
      return lVar3;
    }
  }
  return lVar2;
}

