// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140108000  size: 788 bytes
// Name:    FUN_140108000
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ec6670, FUN_144ec6720, FUN_140324490, FUN_140324570
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140108000(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  int *piVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_98 [88];
  
  if (*(byte *)(param_2 + 0xf) < 2) {
    iVar15 = 1;
    if (*(int *)(param_1 + 0xc) != 1) goto LAB_140108040;
  }
  else if ((*(byte *)(param_2 + 0xf) & 0xfe) == 2) {
    iVar15 = *(int *)(param_1 + 0xc);
  }
  else {
LAB_140108040:
    iVar15 = *(int *)(param_1 + 0x10);
  }
  cVar8 = *(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  plVar14 = param_2;
  if (cVar8 == '\0') {
    func_0x0001455db994();
    cVar8 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
  }
  lVar9 = _DAT_14aad45b0;
  plVar2 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x13a8);
  lVar12 = *plVar2;
  if (*plVar2 == 0) {
    if (cVar8 == '\0') {
      func_0x0001455db994();
      cVar8 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    }
    *plVar2 = lVar9;
    lVar12 = lVar9;
  }
  if (cVar8 == '\0') {
    func_0x0001455db994();
    lVar12 = *plVar2;
  }
  if ((iVar15 == 1) || (*(char *)((longlong)param_2 + 0x7a) == '\x01')) {
    bVar7 = true;
    uVar13 = CONCAT71((int7)((ulonglong)plVar14 >> 8),*(undefined1 *)((longlong)param_2 + 0x7e)) &
             0xfffffffd;
    if ((char)uVar13 != '\x01' || (*(byte *)(param_2 + 0xf) & 0xfe) != 2) {
      lVar9 = func_0x000144fc99c0(CONCAT71((int7)(uVar13 >> 8),
                                           *(undefined1 *)((longlong)param_2 + 0x7d)));
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *plVar2 = lVar9;
      goto LAB_1401080f5;
    }
  }
  else {
    if (iVar15 == 2) {
      FUN_144ec6720();
    }
LAB_1401080f5:
    bVar7 = false;
  }
  lVar9 = *param_2;
  plVar14 = param_3;
  if (lVar9 != 0) {
    do {
      uVar13 = (ulonglong)*(ushort *)(plVar14 + 0xc);
      if (uVar13 != 0) {
        piVar10 = (int *)plVar14[0xb];
        do {
          uVar16 = uVar13 >> 1;
          uVar17 = ~uVar16 + uVar13;
          uVar13 = uVar16;
          if ((uint)(piVar10 + uVar16 * 4 + 4)[-4] < 0xfd3c9685) {
            piVar10 = piVar10 + uVar16 * 4 + 4;
            uVar13 = uVar17;
          }
        } while (0 < (longlong)uVar13);
        if (((piVar10 != (int *)plVar14[0xb] + (ulonglong)*(ushort *)(plVar14 + 0xc) * 4) &&
            (*piVar10 == -0x2c3697b)) && (*(longlong *)(piVar10 + 2) != 0)) {
          (**(code **)(*(longlong *)(piVar10 + 2) + 8))(lVar9);
        }
      }
      plVar1 = plVar14 + 1;
      plVar14 = (longlong *)*plVar1;
    } while ((longlong *)*plVar1 != (longlong *)0x0);
    if ((((*(byte *)((longlong)param_3 + 0x79) & 2) != 0) ||
        ((*(byte *)(param_2 + 0xf) & 0xfe) != 2)) || ((*(byte *)(param_1 + 8) & 8) != 0)) {
      lVar9 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      *(longlong **)(lVar9 + 0x608) = param_2;
      FUN_140324570(auStack_98,param_2,1);
      uVar11 = (**(code **)(*param_3 + 8))(param_3,*param_2);
      func_0x000140c10480(uVar11,*param_2);
      *(undefined8 *)(lVar9 + 0x608) = 0;
      FUN_140324490(auStack_98);
    }
    *param_2 = 0;
  }
  bVar3 = *(byte *)(param_2 + 0xf);
  if ((bVar3 < 5) && ((0x16U >> (bVar3 & 0x1f) & 1) != 0)) {
    if (bVar7) goto LAB_14010824e;
  }
  else if ((param_4 != '\x01' || bVar7) || bVar3 == 0) goto LAB_14010824e;
  bVar5 = *(char *)((longlong)param_2 + 9) != '\0';
  bVar6 = (char)param_2[1] != '\0';
  puVar4 = (undefined8 *)param_2[4];
  if (*(char *)((longlong)param_2 + 0x79) == '\x01') {
    if (puVar4 != (undefined8 *)0x0 && (bVar5 || bVar6)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  else if (puVar4 != (undefined8 *)0x0 && (bVar5 || bVar6)) {
    func_0x000144d9c130(puVar4,1);
  }
LAB_14010824e:
  if ((iVar15 == 1) || (*(char *)((longlong)param_2 + 0x7a) == '\x01')) {
    if (!bVar7) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *plVar2 = lVar12;
    }
  }
  else if (iVar15 == 2) {
    FUN_144ec6670();
  }
  *(undefined1 *)(param_2 + 0xf) = 0;
  return;
}

