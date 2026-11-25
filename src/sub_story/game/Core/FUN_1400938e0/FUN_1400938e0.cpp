// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400938e0  size: 699 bytes
// Name:    FUN_1400938e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140093bb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400938e0(longlong *param_1)

{
  ulonglong uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  longlong lVar8;
  char cVar9;
  byte bVar10;
  ushort uVar11;
  uint uVar12;
  undefined7 uVar13;
  ushort uVar14;
  longlong unaff_GS_OFFSET;
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  
  LOCK();
  _DAT_148562620 = _DAT_148562620 + -1;
  UNLOCK();
  LOCK();
  _DAT_149095b08 = _DAT_149095b08 + -1;
  UNLOCK();
  FUN_140093bb0(&cStack_1b);
  lVar8 = _DAT_14ab760a0;
  lVar5 = *param_1;
  pcVar6 = (code *)param_1[1];
  if (lVar5 == 0) {
    do {
      uVar14 = *(ushort *)(lVar8 + 0x4d0);
      if (uVar14 != *(ushort *)(lVar8 + 0x4d4)) {
        uVar1 = *(longlong *)(lVar8 + 0x4c0) + 0xf + (ulonglong)uVar14 * 0xa8;
        (**(code **)(uVar1 + 0x81))(uVar1 & 0xfffffffffffffff0);
        uVar12 = (uint)*(ushort *)(lVar8 + 0x4d0);
        do {
          uVar14 = (ushort)((uVar12 + 1) % (uint)*(ushort *)(lVar8 + 0x4d6));
          LOCK();
          uVar2 = *(ushort *)(lVar8 + 0x4d0);
          uVar11 = (ushort)uVar12;
          if (uVar11 == uVar2) {
            *(ushort *)(lVar8 + 0x4d0) = uVar14;
          }
          else {
            uVar12 = (uint)uVar2;
          }
          UNLOCK();
        } while (uVar11 != (ushort)uVar12);
      }
    } while ((uVar14 != *(ushort *)(lVar8 + 0x4d2)) && (cVar9 = (*pcVar6)(), cVar9 == '\0'));
  }
  else {
    do {
      uVar14 = *(ushort *)(lVar8 + 0x4d0);
      if (uVar14 != *(ushort *)(lVar8 + 0x4d4)) {
        uVar1 = *(longlong *)(lVar8 + 0x4c0) + 0xf + (ulonglong)uVar14 * 0xa8;
        (**(code **)(uVar1 + 0x81))(uVar1 & 0xfffffffffffffff0);
        uVar12 = (uint)*(ushort *)(lVar8 + 0x4d0);
        do {
          uVar14 = (ushort)((uVar12 + 1) % (uint)*(ushort *)(lVar8 + 0x4d6));
          LOCK();
          uVar2 = *(ushort *)(lVar8 + 0x4d0);
          uVar11 = (ushort)uVar12;
          if (uVar11 == uVar2) {
            *(ushort *)(lVar8 + 0x4d0) = uVar14;
          }
          else {
            uVar12 = (uint)uVar2;
          }
          UNLOCK();
        } while (uVar11 != (ushort)uVar12);
      }
    } while ((uVar14 != *(ushort *)(lVar8 + 0x4d2)) && (cVar9 = (*pcVar6)(lVar5), cVar9 == '\0'));
  }
  sVar3 = *(short *)(lVar8 + 0x4d0);
  sVar4 = *(short *)(lVar8 + 0x4d2);
  cVar9 = *(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  if (cStack_1b == '\x01') {
    if (cVar9 == '\0') {
      func_0x0001455db994();
    }
    bVar10 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1414) | 1;
  }
  else {
    if (cVar9 == '\0') {
      func_0x0001455db994();
    }
    bVar10 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1414) & 0xfe;
  }
  plVar7 = *(longlong **)(unaff_GS_OFFSET + 0x58);
  *(byte *)(*plVar7 + 0x1414) = bVar10;
  cVar9 = *(char *)(plVar7[__tls_index] + 8);
  if (cStack_1a == '\x01') {
    if (cVar9 == '\0') {
      func_0x0001455db994();
    }
    bVar10 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1418) | 1;
  }
  else {
    if (cVar9 == '\0') {
      func_0x0001455db994();
    }
    bVar10 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1418) & 0xfe;
  }
  plVar7 = *(longlong **)(unaff_GS_OFFSET + 0x58);
  *(byte *)(*plVar7 + 0x1418) = bVar10;
  cVar9 = *(char *)(plVar7[__tls_index] + 8);
  if (cStack_19 == '\x01') {
    if (cVar9 == '\0') {
      func_0x0001455db994();
    }
    uVar13 = (undefined7)((ulonglong)**(longlong **)(unaff_GS_OFFSET + 0x58) >> 8);
    bVar10 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1419) | 1;
  }
  else {
    if (cVar9 == '\0') {
      func_0x0001455db994();
    }
    uVar13 = (undefined7)((ulonglong)**(longlong **)(unaff_GS_OFFSET + 0x58) >> 8);
    bVar10 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1419) & 0xfe;
  }
  *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1419) = bVar10;
  LOCK();
  _DAT_149095b08 = _DAT_149095b08 + 1;
  UNLOCK();
  LOCK();
  _DAT_148562620 = _DAT_148562620 + 1;
  UNLOCK();
  return CONCAT71(uVar13,sVar3 != sVar4);
}

