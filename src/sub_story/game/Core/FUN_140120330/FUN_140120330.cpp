// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140120330  size: 497 bytes
// Name:    FUN_140120330
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451d1b40, FUN_145003f30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140120330(void)

{
  float fVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong *plVar9;
  longlong unaff_GS_OFFSET;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    plVar9 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12b8);
    lVar6 = *plVar9;
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
      func_0x0001455db994();
      bVar8 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110);
      if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
        func_0x0001455db994();
      }
      goto LAB_14012037f;
    }
  }
  else {
    plVar9 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12b8);
    lVar6 = *plVar9;
  }
  bVar8 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1110);
LAB_14012037f:
  lVar6 = FUN_145003f30(*(undefined8 *)
                         ((ulonglong)
                          (((uint)*(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1294) +
                           ((bVar8 + 1) - (uint)(lVar6 == 0))) * 8) + 0x1487669c0),1);
  if ((DAT_14a9438f4 == '\x01') && (lVar6 != 0)) {
    FUN_1451d1b40(lVar6);
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar7 = *plVar9;
  if (lVar7 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar7 = *plVar9;
    }
    fVar1 = *(float *)(lVar7 + 0x71c);
    func_0x000145432060(fVar1,*(float *)(lVar7 + 0x718),
                        *(float *)(lVar7 + 0x718) + *(float *)(lVar7 + 0x720),
                        fVar1 + *(float *)(lVar7 + 0x724),fVar1,0,0x3f800000);
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    plVar9 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12b8);
    lVar7 = *plVar9;
    if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
      func_0x0001455db994();
    }
  }
  else {
    lVar7 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12b8);
    plVar9 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12b8);
  }
  *plVar9 = lVar6;
  if (lVar6 != 0) {
    *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x10d8) =
         *(undefined1 *)(lVar6 + 0x6cc);
    FUN_144fa2c70(lVar6);
    if (lRam0000000148fdc508 != 0) {
      FUN_1450040d0();
      FUN_145004200(lVar6);
      FUN_1450050d0(lVar6);
    }
    lVar2 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
    if ((lVar2 != 0) &&
       (auVar3._8_8_ = 0,
       auVar3._0_8_ = *(ulonglong *)(lVar6 + 0x728) ^ *(ulonglong *)(lVar2 + 0x12348),
       auVar3 = vpor_avx(auVar3,*(undefined1 (*) [16])(lVar6 + 0x718) ^
                                *(undefined1 (*) [16])(lVar2 + 0x12338)),
       auVar3 != (undefined1  [16])0x0)) {
      *(undefined8 *)(lVar2 + 0x12348) = *(undefined8 *)(lVar6 + 0x728);
      uVar5 = *(undefined8 *)(lVar6 + 0x720);
      *(undefined8 *)(lVar2 + 0x12338) = *(undefined8 *)(lVar6 + 0x718);
      *(undefined8 *)(lVar2 + 0x12340) = uVar5;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)(lVar2 + 0x12348) ^ *(ulonglong *)(lVar2 + 0x123c8);
      auVar3 = vpor_avx(auVar4,*(undefined1 (*) [16])(lVar2 + 0x12338) ^
                               *(undefined1 (*) [16])(lVar2 + 0x123b8));
      *(ulonglong *)(lVar2 + 0x12520) =
           (ulonglong)((uint)(auVar3 != (undefined1  [16])0x0) << 0x1b) |
           *(ulonglong *)(lVar2 + 0x12520) & 0xfffffffff7ffffff;
    }
  }
  return lVar7;
}

