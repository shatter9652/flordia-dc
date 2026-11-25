// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140129a70  size: 90 bytes
// Name:    FUN_140129a70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fda820
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000140fdf000) */
/* WARNING: Removing unreachable block (ram,0x000140fdf014) */
/* WARNING: Removing unreachable block (ram,0x000140fdf01d) */
/* WARNING: Removing unreachable block (ram,0x000140fdf022) */
/* WARNING: Removing unreachable block (ram,0x000140fdf029) */
/* WARNING: Removing unreachable block (ram,0x000140fdf00a) */
/* WARNING: Removing unreachable block (ram,0x000140fdf0ad) */
/* WARNING: Removing unreachable block (ram,0x000140fdf0e6) */
/* WARNING: Removing unreachable block (ram,0x000140fdf123) */
/* WARNING: Removing unreachable block (ram,0x000140fdf137) */
/* WARNING: Removing unreachable block (ram,0x000140fdf147) */
/* WARNING: Removing unreachable block (ram,0x000140fdf18d) */
/* WARNING: Removing unreachable block (ram,0x000140fdf1ec) */
/* WARNING: Removing unreachable block (ram,0x000140fdf1f5) */
/* WARNING: Removing unreachable block (ram,0x000140fdf205) */
/* WARNING: Removing unreachable block (ram,0x000140fdf20f) */
/* WARNING: Removing unreachable block (ram,0x000140fdf224) */
/* WARNING: Removing unreachable block (ram,0x000140fdf230) */
/* WARNING: Removing unreachable block (ram,0x000140fdf236) */
/* WARNING: Removing unreachable block (ram,0x000140fdf256) */
/* WARNING: Removing unreachable block (ram,0x000140fdf262) */
/* WARNING: Removing unreachable block (ram,0x000140fdf270) */
/* WARNING: Removing unreachable block (ram,0x000140fdf328) */
/* WARNING: Removing unreachable block (ram,0x000140fdf32c) */
/* WARNING: Removing unreachable block (ram,0x000140fdf356) */
/* WARNING: Removing unreachable block (ram,0x000140fdf33d) */
/* WARNING: Removing unreachable block (ram,0x000140fdf360) */
/* WARNING: Removing unreachable block (ram,0x000140fdf34b) */
/* WARNING: Removing unreachable block (ram,0x000140fdf368) */
/* WARNING: Removing unreachable block (ram,0x000140fdf493) */
/* WARNING: Removing unreachable block (ram,0x000140fdf489) */
/* WARNING: Removing unreachable block (ram,0x000140fdf1a1) */
/* WARNING: Removing unreachable block (ram,0x000140fdf23e) */
/* WARNING: Removing unreachable block (ram,0x000140fdf251) */
/* WARNING: Removing unreachable block (ram,0x000140fdf0fa) */
/* WARNING: Removing unreachable block (ram,0x000140fdf10b) */
/* WARNING: Removing unreachable block (ram,0x000140fdf1a3) */

ulonglong FUN_140129a70(longlong param_1,longlong param_2,byte param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong in_RAX;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 unaff_RDI;
  longlong lVar13;
  uint uStack_34;
  
  if (*(char *)(param_1 + 0x30) != '\x02') {
    return in_RAX;
  }
  FUN_144fda820(param_2);
  if (((param_3 & 0x21) == 1) &&
     (lVar10 = func_0x000144e34680(*(undefined4 *)(param_1 + 0x9c)), lVar10 != 0)) {
    func_0x0001456a7b80(lVar10,1);
  }
  uVar1 = *(ushort *)(param_2 + 0x4a0);
  uVar12 = 0;
  if (uVar1 != 0) {
    lVar10 = *(longlong *)(param_2 + 0x498);
    uVar2 = *(undefined4 *)(param_2 + 0x304);
    uVar3 = *(undefined8 *)(param_2 + 0x308);
    lVar13 = 0;
    do {
      lVar9 = FUN_143d44f40(uVar2,uVar3);
      uVar12 = 0;
      if ((lVar9 != 0) &&
         (uVar12 = (ulonglong)*(uint *)(lVar9 + 0x20),
         *(uint *)(lVar9 + 0x20) != *(uint *)(lVar10 + 4 + lVar13))) {
        FUN_140ad4980(param_2);
        lVar10 = func_0x000144ece580(*(undefined8 *)(param_2 + 8));
        lVar10 = func_0x000144ed8740(*(undefined4 *)(lVar10 + 0x9c));
        if (lVar10 == 0) {
          return 0;
        }
        FUN_140159450();
        uVar12 = *(ulonglong *)(lVar10 + 8) & 0xfffffffffffffff0;
        if ((*(char *)(uVar12 + 0x30) == '\x04') || (*(char *)(uVar12 + 0x30) == '\x02')) {
          lVar13 = func_0x000140a96700(*(undefined8 *)(*(longlong *)(uVar12 + 0x20) + 0x60));
          lVar10 = 0;
          if ((lVar13 != 0) && (*(char *)(lVar13 + 0xe) == '\0')) {
            lVar10 = lVar13;
          }
          uVar7 = (uint)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar10 != 0);
        }
        else {
          uVar7 = 0;
        }
        cVar5 = FUN_140a96750(uVar12,0,uVar7,0,0);
        if ((char)uVar7 == '\0') {
          if (cVar5 == '\0') {
            return 0;
          }
          LOCK();
          iVar6 = iRam0000000149247e4c;
          if (iRam0000000149247e4c == 0) {
            iRam0000000149247e4c = 1;
            iVar6 = 0;
          }
          UNLOCK();
          if (iVar6 != 1) goto code_r0x000145461f35;
          uVar7 = 8;
          do {
            for (uStack_34 = 0; uStack_34 < uVar7; uStack_34 = uStack_34 + 1) {
            }
            LOCK();
            iVar6 = iRam0000000149247e4c;
            if (iRam0000000149247e4c == 0) {
              iRam0000000149247e4c = 1;
              iVar6 = 0;
            }
            UNLOCK();
            uVar7 = uVar7 << (uVar7 < 0x400);
          } while (iVar6 == 1);
          if (uVar12 == 0) {
            uVar12 = 0x1ffff;
          }
          else {
code_r0x000145461f35:
            plVar4 = *(longlong **)((ulonglong)*(byte *)(uVar12 + 0x30) * 8 + 0x14abbe7c0);
            uVar7 = (uint)((uVar12 - *plVar4) / (ulonglong)*(uint *)(plVar4 + 1)) & 0x1ffff;
            uVar12 = (ulonglong)
                     ((*(byte *)(uVar12 + 0x30) & 0x1f) << 0x11 | uVar7 |
                     (*(uint *)(plVar4[5] + (ulonglong)uVar7 * 4) & 0x7fe0000) << 5);
          }
          if (uRam0000000149247e0c == uRam0000000149247e08) {
            uVar7 = 1;
            if (1 < uRam0000000149247e0c) {
              uVar7 = uRam0000000149247e0c >> 1;
            }
            FUN_1456eb5f0(uVar7 + uRam0000000149247e0c);
          }
          uVar11 = (ulonglong)uRam0000000149247e0c;
          uRam0000000149247e0c = uRam0000000149247e0c + 1;
          *(ulonglong *)(lRam0000000149247e10 + uVar11 * 8) = uVar12;
        }
        else {
          if (cVar5 == '\0') {
            return 0;
          }
          LOCK();
          iVar6 = iRam0000000149247e4c;
          if (iRam0000000149247e4c == 0) {
            iRam0000000149247e4c = 1;
            iVar6 = 0;
          }
          UNLOCK();
          if (iVar6 != 1) goto code_r0x000145462041;
          uVar8 = 8;
          do {
            for (uStack_34 = 0; uStack_34 < uVar8; uStack_34 = uStack_34 + 1) {
            }
            LOCK();
            iVar6 = iRam0000000149247e4c;
            if (iRam0000000149247e4c == 0) {
              iRam0000000149247e4c = 1;
              iVar6 = 0;
            }
            UNLOCK();
            uVar8 = uVar8 << (uVar8 < 0x400);
          } while (iVar6 == 1);
          if (uVar12 == 0) {
            uVar12 = 0x1ffff;
          }
          else {
code_r0x000145462041:
            plVar4 = *(longlong **)((ulonglong)*(byte *)(uVar12 + 0x30) * 8 + 0x14abbe7c0);
            uVar8 = (uint)((uVar12 - *plVar4) / (ulonglong)*(uint *)(plVar4 + 1)) & 0x1ffff;
            uVar12 = (ulonglong)
                     ((*(byte *)(uVar12 + 0x30) & 0x1f) << 0x11 | uVar8 |
                     (*(uint *)(plVar4[5] + (ulonglong)uVar8 * 4) & 0x7fe0000) << 5);
          }
          if (uRam0000000149247e0c == uRam0000000149247e08) {
            uVar8 = 1;
            if (1 < uRam0000000149247e0c) {
              uVar8 = uRam0000000149247e0c >> 1;
            }
            FUN_1456eb5f0(uVar8 + uRam0000000149247e0c);
          }
          uVar11 = (ulonglong)uRam0000000149247e0c;
          uRam0000000149247e0c = uRam0000000149247e0c + 1;
          *(ulonglong *)(lRam0000000149247e10 + uVar11 * 8) =
               (ulonglong)(uVar7 & 0xff) << 0x20 | uVar12;
        }
        iRam0000000149247e4c = 0;
        return 2;
      }
      lVar13 = lVar13 + 0xc;
    } while ((ulonglong)uVar1 * 0xc != lVar13);
  }
  return uVar12;
}

