// window.elf d53960482354c9699902d859c4c2bc8b45357d43882a00ef57046c2f70004d8f
// FUN_008d8240 @ 008d8240 size=610
// undefined FUN_008d8240()


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_008d8240(ulong param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(_DAT_0ddb0438 + 0x28 + (param_1 & 0xffffffff) * 0x58);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x83ac830) {
                    /* WARNING: Could not recover jumptable at 0x008d86b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*UNRECOVERED_JUMPTABLE_00)(param_2);
    return uVar10;
  }
  if (param_2 != 0) {
    uVar9 = func_0x08f66580();
    if (uVar9 < 0x10) {
      uVar15 = 0;
      uVar14 = 0;
    }
    else {
      uVar11 = 0;
      uVar14 = 0;
      uVar15 = 0;
      do {
        pbVar1 = (byte *)(param_2 + 8 + uVar11);
        lVar12 = CONCAT17(*(undefined1 *)((ulong)*(byte *)(param_2 + 7 + uVar11) + 0x9eb82d0),
                          CONCAT16(*(undefined1 *)
                                    ((ulong)*(byte *)(param_2 + 6 + uVar11) + 0x9eb82d0),
                                   CONCAT15(*(undefined1 *)
                                             ((ulong)*(byte *)(param_2 + 5 + uVar11) + 0x9eb82d0),
                                            CONCAT14(*(undefined1 *)
                                                      ((ulong)*(byte *)(param_2 + 4 + uVar11) +
                                                      0x9eb82d0),
                                                     CONCAT13(*(undefined1 *)
                                                               ((ulong)*(byte *)(param_2 + 3 +
                                                                                uVar11) + 0x9eb82d0)
                                                              ,CONCAT12(*(undefined1 *)
                                                                         ((ulong)*(byte *)(param_2 +
                                                                                           2 + 
                                                  uVar11) + 0x9eb82d0),
                                                  CONCAT11(*(undefined1 *)
                                                            ((ulong)*(byte *)(param_2 + 1 + uVar11)
                                                            + 0x9eb82d0),
                                                           *(undefined1 *)
                                                            ((ulong)*(byte *)(param_2 + uVar11) +
                                                            0x9eb82d0))))))));
        pbVar2 = (byte *)(param_2 + 9 + uVar11);
        pbVar3 = (byte *)(param_2 + 10 + uVar11);
        pbVar4 = (byte *)(param_2 + 0xb + uVar11);
        pbVar5 = (byte *)(param_2 + 0xc + uVar11);
        pbVar6 = (byte *)(param_2 + 0xd + uVar11);
        pbVar7 = (byte *)(param_2 + 0xe + uVar11);
        pbVar8 = (byte *)(param_2 + 0xf + uVar11);
        uVar11 = uVar11 + 0x10;
        lVar13 = CONCAT17(*(undefined1 *)((ulong)*pbVar8 + 0x9eb82d0),
                          CONCAT16(*(undefined1 *)((ulong)*pbVar7 + 0x9eb82d0),
                                   CONCAT15(*(undefined1 *)((ulong)*pbVar6 + 0x9eb82d0),
                                            CONCAT14(*(undefined1 *)((ulong)*pbVar5 + 0x9eb82d0),
                                                     CONCAT13(*(undefined1 *)
                                                               ((ulong)*pbVar4 + 0x9eb82d0),
                                                              CONCAT12(*(undefined1 *)
                                                                        ((ulong)*pbVar3 + 0x9eb82d0)
                                                                       ,CONCAT11(*(undefined1 *)
                                                                                  ((ulong)*pbVar2 +
                                                                                  0x9eb82d0),
                                                                                 *(undefined1 *)
                                                                                  ((ulong)*pbVar1 +
                                                                                  0x9eb82d0))))))));
        uVar14 = ((ulong)(lVar12 * -0x783c846eeebdac2b) >> 0x21 | lVar12 * -0x775ed61580000000) *
                 0x4cf5ad432745937f ^ uVar14;
        lVar12 = (uVar14 >> 0x25 | uVar14 << 0x1b) + uVar15;
        uVar14 = lVar12 * 5 + 0x52dce729;
        uVar15 = ((ulong)(lVar13 * 0x4cf5ad432745937f) >> 0x1f | lVar13 * 0x4e8b26fe00000000) *
                 -0x783c846eeebdac2b ^ uVar15;
        uVar15 = ((uVar15 >> 0x21 | uVar15 << 0x1f) + 0x52dce729 + lVar12 * 5) * 5 + 0x38495ab5;
      } while ((uVar9 & 0xfffffff0) != uVar11);
    }
    UNRECOVERED_JUMPTABLE_00 =
         (code *)((long)*(int *)((ulong)(uVar9 & 0xf) * 4 + 0x9d48830) + 0x9d48830);
                    /* WARNING: Could not emulate address calculation at 0x008d8464 */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*UNRECOVERED_JUMPTABLE_00)
                       (0,uVar9 & 0xfffffff0,uVar14,uVar15,UNRECOVERED_JUMPTABLE_00);
    return uVar10;
  }
  return 0;
}


