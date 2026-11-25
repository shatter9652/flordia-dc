// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b2e60  size: 794 bytes
// Name:    FUN_1401b2e60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145b13a90, FUN_140189080, FUN_14558f490
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401b2e60(void)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong *plVar6;
  ulonglong uVar7;
  ushort uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ushort uVar15;
  bool bVar16;
  
  if (-1 < (int)(_DAT_1498cc22c - 1)) {
    uVar10 = (ulonglong)(_DAT_1498cc22c - 1);
    uVar9 = _DAT_1498cc22c;
    do {
      lVar3 = *(longlong *)(_DAT_1498cc230 + uVar10 * 8);
      func_0x000144dab690(lVar3);
      if (*(char *)(lVar3 + 0xc) == '\x03') {
        if (_DAT_1498cc22c == uVar9) {
          _DAT_1498cc22c = uVar9 - 1;
        }
        else {
          _DAT_1498cc22c = _DAT_1498cc22c - 1;
          *(undefined8 *)(_DAT_1498cc230 + uVar10 * 8) =
               *(undefined8 *)(_DAT_1498cc230 + (ulonglong)_DAT_1498cc22c * 8);
        }
        FUN_14558f490(lVar3);
        plVar6 = _DAT_1498cc208;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = lVar3 - *_DAT_1498cc208;
        uVar8 = SUB162(auVar4 / ZEXT416(*(uint *)(_DAT_1498cc208 + 1)),0);
        LOCK();
        pbVar1 = (byte *)(_DAT_1498cc208[5] + (ulonglong)(uVar8 >> 3));
        *pbVar1 = *pbVar1 & ~(byte)(1 << (SUB161(auVar4 / ZEXT416(*(uint *)(_DAT_1498cc208 + 1)),0)
                                         & 7));
        UNLOCK();
        uVar9 = *(uint *)(plVar6 + 4);
        LOCK();
        *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
        UNLOCK();
        do {
          *(short *)(*plVar6 + (ulonglong)((int)plVar6[1] * (uint)uVar8)) = (short)uVar9;
          LOCK();
          uVar2 = *(uint *)(plVar6 + 4);
          bVar16 = uVar9 == uVar2;
          if (bVar16) {
            *(uint *)(plVar6 + 4) = (uVar9 & 0xffff0000) + 0x10000 + (uint)uVar8;
            uVar2 = uVar9;
          }
          uVar9 = uVar2;
          UNLOCK();
        } while (!bVar16);
        if (plVar6[3] != 0) {
          FUN_140189080();
        }
      }
      uVar9 = (uint)uVar10;
      bVar16 = 0 < (longlong)uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar16);
  }
  do {
    lVar14 = _DAT_1498cc278;
    uVar8 = _DAT_1498cc270;
    lVar3 = _DAT_1498cc260;
    uVar9 = (uint)_DAT_1498cc272;
    if (uVar9 == 0xffff) {
      LOCK();
      _DAT_1498cc270 = 0xffff;
      UNLOCK();
      if (uVar8 == 0xffff) {
        return;
      }
      uVar15 = 0xffff;
      do {
        uVar12 = uVar8;
        uVar10 = (ulonglong)uVar12;
        uVar8 = *(ushort *)(lVar14 + uVar10 * 2);
        *(ushort *)(lVar14 + uVar10 * 2) = uVar15;
        lVar3 = _DAT_1498cc260;
        uVar15 = uVar12;
      } while (uVar8 != 0xffff);
      _DAT_1498cc272 = *(ushort *)(lVar14 + uVar10 * 2);
      uVar13 = (ulonglong)(uVar12 * _DAT_1498cc26c);
      lVar14 = *(longlong *)(_DAT_1498cc260 + uVar13);
      uVar10 = (ulonglong)_DAT_1498cc26c;
      uVar11 = _DAT_1498cc258;
      do {
        *(short *)(lVar3 + uVar13) = (short)(uVar11 >> 0x20);
        LOCK();
        bVar16 = uVar11 != _DAT_1498cc258;
        uVar7 = (ulonglong)((int)uVar11 + 1) | (uVar13 / uVar10 & 0xffff) << 0x20 |
                (uVar11 & 0xffff000000000000) + 0x1000000000000;
        if (bVar16) {
          uVar11 = _DAT_1498cc258;
          uVar7 = _DAT_1498cc258;
        }
        _DAT_1498cc258 = uVar7;
        UNLOCK();
      } while (bVar16);
    }
    else {
      uVar13 = (ulonglong)(_DAT_1498cc26c * uVar9);
      _DAT_1498cc272 = *(ushort *)(_DAT_1498cc278 + (ulonglong)uVar9 * 2);
      lVar14 = *(longlong *)(_DAT_1498cc260 + uVar13);
      uVar10 = (ulonglong)_DAT_1498cc26c;
      uVar11 = _DAT_1498cc258;
      do {
        *(short *)(lVar3 + uVar13) = (short)(uVar11 >> 0x20);
        LOCK();
        bVar16 = uVar11 != _DAT_1498cc258;
        uVar7 = (ulonglong)((int)uVar11 + 1) | (uVar13 / uVar10 & 0xffff) << 0x20 |
                (uVar11 & 0xffff000000000000) + 0x1000000000000;
        if (bVar16) {
          uVar11 = _DAT_1498cc258;
          uVar7 = _DAT_1498cc258;
        }
        _DAT_1498cc258 = uVar7;
        UNLOCK();
      } while (bVar16);
    }
    func_0x000144dab690(lVar14);
    if (*(char *)(lVar14 + 0xc) == '\x03') {
      FUN_14558f490(lVar14);
      plVar6 = _DAT_1498cc208;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = lVar14 - *_DAT_1498cc208;
      uVar8 = SUB162(auVar5 / ZEXT416(*(uint *)(_DAT_1498cc208 + 1)),0);
      LOCK();
      pbVar1 = (byte *)(_DAT_1498cc208[5] + (ulonglong)(uVar8 >> 3));
      *pbVar1 = *pbVar1 & ~(byte)(1 << (SUB161(auVar5 / ZEXT416(*(uint *)(_DAT_1498cc208 + 1)),0) &
                                       7));
      UNLOCK();
      uVar9 = *(uint *)(plVar6 + 4);
      LOCK();
      *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
      UNLOCK();
      do {
        *(short *)(*plVar6 + (ulonglong)((int)plVar6[1] * (uint)uVar8)) = (short)uVar9;
        LOCK();
        uVar2 = *(uint *)(plVar6 + 4);
        bVar16 = uVar9 == uVar2;
        if (bVar16) {
          *(uint *)(plVar6 + 4) = (uVar9 & 0xffff0000) + 0x10000 + (uint)uVar8;
          uVar2 = uVar9;
        }
        uVar9 = uVar2;
        UNLOCK();
      } while (!bVar16);
      if (plVar6[3] != 0) {
        FUN_140189080(plVar6,lVar14);
      }
    }
    else {
      if (_DAT_1498cc22c == _DAT_1498cc228) {
        uVar9 = _DAT_1498cc22c >> 1;
        if (_DAT_1498cc22c < 2) {
          uVar9 = 1;
        }
        FUN_145b13a90(uVar9 + _DAT_1498cc22c);
      }
      uVar10 = (ulonglong)_DAT_1498cc22c;
      _DAT_1498cc22c = _DAT_1498cc22c + 1;
      *(longlong *)(_DAT_1498cc230 + uVar10 * 8) = lVar14;
    }
  } while( true );
}

