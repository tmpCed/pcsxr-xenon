#if 0
//
// Generated by 2.0.20675.0
//
//   fxc /Fh s2xsal.ps.h /Tps_3_0 filters\super2xSal.cg /Emain_fragment
//    /VnPS2xSal
//
//
// Parameters:
//
//   struct
//   {
//       float2 video_size;
//       float2 texture_size;
//       float2 output_size;
//
//   } $IN;
//   
//   sampler2D $decal;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   $IN          c0       2
//   $decal       s0       1
//

// Shader type: pixel 

xps_3_0
defconst $IN.video_size, float, vector, [1, 2], c0
defconst $IN.texture_size, float, vector, [1, 2], c1
defconst $IN.output_size, float, vector, [1, 2], cX
defconst $decal, sampler2d, object, [1, 1], s0
config AutoSerialize=false
config AutoResource=false
config PsMaxReg=25
// PsExportColorCount=1
// PsSampleControl=centers

dcl_texcoord r0.xy
dcl_texcoord1 r1
dcl_texcoord2 r2
dcl_texcoord3 r3
dcl_texcoord4 r4
dcl_texcoord5 r5
dcl_texcoord6 r6
dcl_texcoord7 r7
dcl_texcoord8 r8

def c252, 0, 0, 0, 0
def c253, 0, 0, 0, 0
def c254, 0, 0.25, 3, 0.5
def c255, 65536, 255, -1, 1


    exec
    tfetch2D r12.xyz_, r5.xy, tf0
    tfetch2D r11.xyz_, r5.zw, tf0
    tfetch2D r8.yxz_, r8.xy, tf0
    tfetch2D r10.xyz_, r0.xy, tf0
    tfetch2D r14.xyz_, r4.xy, tf0
    tfetch2D r5.yxz_, r6.xy, tf0
    exec
    tfetch2D r13.xyz_, r7.zw, tf0
    tfetch2D r15.xyz_, r2.zw, tf0
    tfetch2D r6.yxz_, r6.zw, tf0
    tfetch2D r16.xyz_, r7.xy, tf0
    tfetch2D r7.xyz_, r3.zw, tf0
    tfetch2D r4.yxz_, r4.zw, tf0
    exec
    tfetch2D r17.xyz_, r3.xy, tf0
    tfetch2D r18.xyz_, r2.xy, tf0
    tfetch2D r2.yxz_, r1.zw, tf0
    tfetch2D r20.xyz_, r1.xy, tf0
    alloc colors
    exec
    mul r0.xy, r0.yx, c1.yx
    frc r9.xy, r0.yx
    mul r21.xy, r20.xy, c255.xy
    mul r19.xy, r18.xy, c255.xy
  + mulsc r21.z, c255.x, r2.y
    mul r19.zw, r17.xxxy, c255.xxxy
  + mulsc r21.w, c255.y, r2.x
    mul r23.zw, r7.xxxy, c255.xxxy
  + mulsc r23.x, c255.x, r4.y
    exec
    mul r24.xy, r16.xy, c255.xy
  + mulsc r23.y, c255.y, r4.x
    mul r22.xy, r15.xy, c255.xy
  + mulsc r24.z, c255.x, r6.y
    mul r22.zw, r13.xxxy, c255.xxxy
  + mulsc r24.w, c255.y, r6.x
    mul r3.zw, r14.xxxy, c255.xxxy
  + mulsc r3.x, c255.x, r5.y
    mul r0.xy, r10.xy, c255.xy
  + mulsc r3.y, c255.y, r5.x
    mul r25.xy, r11.xy, c255.xy
  + mulsc r0.z, c255.x, r8.y
    exec
    mul r25.zw, r12.xxxy, c255.xxxy
  + mulsc r0.w, c255.y, r8.x
    add r1.zw, r0.xxxz, r0.yyyw
  + adds r0.y, r25.xy
    add r3.zw, r3.xxxz, r3.yyyw
  + adds r0.z, r25.zw
    add r4.xw, r24.zx, r24.wy
  + adds r1.x, r22.xy
    add r3.xy, r23.xz, r23.yw
  + adds r0.w, r22.zw
    add r5.xw, r21.zx, r21.wy
  + adds r1.y, r19.xy
    exec
    add r5.w, r5.w, r20.z
  + adds r0.x, r19.zw
    add r4.y, r1.y, r18.z
  + movs r0._, r5.x
    add r5.x, r0.x, r17.z
  + adds_prev r0.x, r2.z
    add r4.x, r4.x, r6.z
  + movs r0._, r3.x
    add r1.y, r4.w, r16.z
  + adds_prev r4.z, r4.z
    add r1.x, r1.x, r15.z
  + movs r0._, r0.w
    exec
    add r0.w, r3.w, r14.z
  + adds_prev r6.z, r13.z
    add r5.y, r1.z, r10.z
  + movs r0._, r3.z
    add r4.w, r0.z, r12.z
  + adds_prev r0.z, r5.z
    add r3.w, r3.y, r7.z
  + movs r0._, r0.y
    seq r0.y, r4.w, r3.w
  + adds_prev r5.z, r11.z
    sne r1.z, r5.y, r5.z
  + movs r0._, r1.w
    exec    // PredicateClean=false
    mul r1.w, r0.y, r1.z
  + adds_prev r1.z, r8.z
    setp_ne_push r6.x, c254.x, r1.w
  + snes r6.y, r1.w
    (p0) mov r7.xyz, r12.xyz
    (p0) mov r2.xyz, r12.xyz
    setp_inv r6.x, r6.x
    (p0) seq r1.w, r5.y, r5.z
    exec    // PredicateClean=false
    (p0) sne r2.x, r4.w, r3.w
    (p0) mul r2.x, r1.w, r2.x
    setp_ne_push r6.x, r6.x, r2.x
    (p0) mov r7.xyz, r10.xyz
    (p0) mov r2.xyz, r10.xyz
    setp_inv r6.x, r6.x
    exec    // PredicateClean=false
    (p0) mul r0.y, r1.w, r0.y
    setp_ne_push r6.x, r6.x, r0.y
    (p0) seq r8.x, r5.y, r0.x
    (p0) seq r9.z, r5.y, r1.y
    (p0) seq r9.w, r3.w, r1.y
    (p0) seq r0.y, r3.w, r4.z
(p0) exec
    (p0) seq r2.z, r3.w, r6.z
    (p0) seq r2.y, r3.w, r4.y
    (p0) seq r3.y, r3.w, r5.x
    (p0) seq r1.x, r5.y, r5.x
    (p0) seq r1.y, r5.y, r6.z
    (p0) seq r8.yzw, r3.w, r0.xxzw
(p0) exec
    (p0) seq r11.yz, r3.w, r0.wwz
    (p0) seq r1.zw, r5.y, r4.zzzy
    (p0) sne r1, r1.wzxy, c254.x
    (p0) cndeq r3.x, r3.y, r1.z, c254.x
    (p0) cndeq r2.x, r2.y, r1.x, c254.x
    (p0) cndeq r2.w, r2.z, r1.w, c254.x
(p0) exec
    (p0) cndeq r0.x, r0.y, r1.y, c254.x
    (p0) seq r11.xw, r5.y, r0.wz
  + (p0) addsc r0.z, c255.w, r0.x
    (p0) add r1, r2.wzxy, c255.w
  + (p0) addsc r0.w, c255.w, r0.y
    (p0) cndeq r0.yz, r9.zzw, r0.xxy, r0.zzw
    (p0) cndeq r1, r11.wzyx, r2.wzyx, r1.xywz
    (p0) cndeq r2.xy, r8.zw, r1.xw, r2.wx
(p0) exec
    (p0) cndeq r2.w, r9.w, r0.y, r0.x
    (p0) sge r1.yz, c255.w, r1.yyz
    (p0) sge r3.z, c255.w, r0.z
    (p0) add r0.xyw, r3.xyz, c255.wwz
    (p0) cndeq r0.xy, r8.xy, r3.xy, r0.xy
    (p0) cndeq r2.z, r8.y, r0.x, r3.x
(p0) exec
    (p0) sge r1.x, c255.w, r0.y
    (p0) add r0.xyz, r1.xzy, c255.z
    (p0) sge r2, c255.w, r2
    (p0) cndeq r0.xyz, r2.yxz, r1.zyx, r0.yzx
    (p0) cndeq r0.w, r2.w, r3.z, r0.w
    (p0) dp4 r0.x, r0, c255.w
    exec    // PredicateClean=false
    setp_ge_push r6.x, r6.x, -r0.x
    setp_gt_push r6.x, r6.x, -r0.x
    (p0) mov r7.xyz, r10.xyz
    setp_inv r6.x, r6.x
    (p0) add r0.xyz, r10.xyz, r7.xyz
    (p0) mul r7.xyz, r0.xyz, c254.w
    exec    // PredicateClean=false
    setp_pop r6.x, r6.x
    setp_pop r6.x, r6.x
    (p0) mov r2.xyz, r7.xyz
    setp_inv r6.x, r6.x
    (p0) sne r0.w, r4.w, r6.z
    (p0) seq r0.y, r3.w, r5.z
(p0) exec
    (p0) seq r0.z, r5.z, r1.y
    (p0) mul r1.w, r0.y, r0.z
    (p0) sne r0.z, r5.z, r4.x
  + (p0) snes r1.w, r1.w
    (p0) mul r0.w, r1.w, r0.w
    (p0) snes r0.w, r0.w
    (p0) mul r0.z, r0.w, r0.z
    exec    // PredicateClean=false
    setp_ne_push r6.x, r6.x, r0.z
    (p0) mad r1.yzw, r11.xxyz, c254.z, r12.xxyz
    (p0) mul r2.xyz, r1.yzw, c254.y
    setp_inv r6.x, r6.x
    (p0) sne r0.w, r1.y, r5.z
    (p0) seq r1.y, r5.y, r4.w
(p0) exec
    (p0) seq r0.z, r4.w, r6.z
    (p0) mul r1.y, r1.y, r0.z
    (p0) sne r0.z, r4.w, r1.z
  + (p0) snes r1.y, r1.y
    (p0) mul r0.w, r1.y, r0.w
    (p0) snes r0.w, r0.w
    (p0) mul r0.z, r0.w, r0.z
    exec    // PredicateClean=false
    setp_ne_push r6.x, r6.x, r0.z
    (p0) mad r1.yzw, r12.xxyz, c254.z, r11.xxyz
    (p0) mul r2.xyz, r1.yzw, c254.y
    setp_inv r6.x, r6.x
    (p0) add r1.yzw, r12.xxyz, r11.xxyz
    (p0) mul r2.xyz, r1.yzw, c254.w
    exec    // PredicateClean=false
    setp_pop r6.x, r6.x
    setp_pop r6.x, r6.x
    (p0) sne r0.z, r5.y, r4.y
    (p0) seq r0.w, r3.w, r0.x
    (p0) mul r0.w, r0.y, r0.w
    (p0) sne r0.y, r3.w, r5.w
  + (p0) snes r0.w, r0.w
    exec    // PredicateClean=false
    (p0) mul r0.z, r0.w, r0.z
    (p0) snes r0.z, r0.z
    (p0) mul r0.y, r0.z, r0.y
    setp_ne_push r6.x, r6.x, r0.y
    (p0) mad r0.xyz, r7.xyz, c254.z, r10.xyz
    (p0) mul r7.xyz, r0.xyz, c254.y
    exec    // PredicateClean=false
    setp_inv r6.x, r6.x
    (p0) seq r0.zw, r5.y, r4.wwwy
    (p0) sne r0.y, r5.y, r1.x
  + (p0) muls r0.z, r0.zw
    (p0) sne r0.x, r0.x, r3.w
  + (p0) snes r0.z, r0.z
    (p0) mul r0.x, r0.z, r0.x
    (p0) snes r0.x, r0.x
    exec    // PredicateClean=false
    (p0) mul r0.x, r0.x, r0.y
    setp_ne_push r6.x, r6.x, r0.x
    (p0) mad r0.xyz, r10.xyz, c254.z, r7.xyz
    (p0) mul r7.xyz, r0.xyz, c254.y
    setp_inv r6.x, r6.x
    (p0) add r0.xyz, r10.xyz, r7.xyz
    exec
    (p0) mul r7.xyz, r0.xyz, c254.w
    sne r0.y, r4.w, r3.w
    seq r0.xz, r5.yx, r5.zy
    mul r0.y, r0.x, r0.y
    sne r0.x, r5.y, r6.z
  + snes r0.y, r0.y
    mul r0.y, r0.z, r0.y
    exec    // PredicateClean=false
    snes r0.y, r0.y
    mul r0.x, r0.y, r0.x
    setp_ne_push r0.x, c254.x, r0.x
    (p0) add r0.yzw, r12.xxyz, r10.xxyz
    (p0) mul r1.xyz, r0.yzw, c254.w
    setp_inv r0.x, r0.x
(p0) exec
    (p0) seq r0.z, r5.y, r4.z
    (p0) seq r0.y, r3.w, r5.y
    (p0) mul r0.w, r0.z, r0.y
    (p0) sne r0.yz, r5.xxy, r4.wwx
  + (p0) snes r0.w, r0.w
    (p0) mul r0.w, r0.w, r0.y
    (p0) snes r0.w, r0.w
    exec    // PredicateClean=false
    (p0) mul r0.y, r0.w, r0.z
    setp_ne_push r0.x, r0.x, r0.y
    (p0) add r0.yzw, r12.xxyz, r10.xxyz
    (p0) mul r1.xyz, r0.yzw, c254.w
    setp_inv r0.x, r0.x
    (p0) mov r1.xyz, r12.xyz
    exec    // PredicateClean=false
    seq r0.x, r4.z, r4.w
    mul r0.y, r0.x, r6.y
    sne r0.x, r4.w, r4.y
  + snes r0.y, r0.y
    mul r0.x, r0.y, r0.x
    setp_ne r0._, r0.x
    (p0) add r0.xyz, r12.xyz, r10.xyz
    exec
    (p0) mul r0.xyz, r0.xyz, c254.w
    (!p0) seq r3.xy, r5.xz, r4.w
    (!p0) add r0.xyz, r12.xyz, r10.xyz
  + (!p0) muls r0.w, r3.xy
    (!p0) sne r3.xy, r4.zw, r5.yw
  + (!p0) snes r0.w, r0.w
    (!p0) mul r0.w, r0.w, r3.x
  + (!p0) mulsc r0.z, c254.w, r0.z
    (!p0) sne r0.w, r0.w, c254.x
  + (!p0) mulsc r0.y, c254.w, r0.y
    exece
    (!p0) mul r0.w, r0.w, r3.y
  + (!p0) mulsc r0.x, c254.w, r0.x
    (!p0) cndeq r0.xyz, r0.w, r10.xyz, r0.xyz
    sgt r3.xy, c254.w, r9.xy
    cndge r1.xyz, -r3_abs.y, r1.xyz, r0.xyz
    cndge r0.xyz, -r3_abs.y, r2.xyz, r7.xyz
    cndgt oC0.xyz1, r3.x, r1.xyz, r0.xyz

// PDB hint 00000000-00000000-00000000

#endif

// This microcode is in native DWORD byte order.

const DWORD PS2xSal[] =
{
    0x102a1100, 0x00000168, 0x00000a48, 0x00000000, 0x00000024, 0x000000fc, 
    0x00000124, 0x00000000, 0x00000000, 0x000000d4, 0x0000001c, 0x000000c7, 
    0xffff0300, 0x00000002, 0x0000001c, 0x00000000, 0x000000c0, 0x00000044, 
    0x00020000, 0x00020000, 0x00000098, 0x00000000, 0x000000a8, 0x00030000, 
    0x00010000, 0x000000b0, 0x00000000, 0x24494e00, 0x76696465, 0x6f5f7369, 
    0x7a6500ab, 0x00010003, 0x00010002, 0x00010000, 0x00000000, 0x74657874, 
    0x7572655f, 0x73697a65, 0x006f7574, 0x7075745f, 0x73697a65, 0x00ababab, 
    0x00000048, 0x00000054, 0x00000064, 0x00000054, 0x00000071, 0x00000054, 
    0x00050000, 0x00010006, 0x00010003, 0x00000080, 0x24646563, 0x616c00ab, 
    0x0004000c, 0x00010001, 0x00010000, 0x00000000, 0x70735f33, 0x5f300032, 
    0x2e302e32, 0x30363735, 0x2e3000ab, 0x00000000, 0x00000001, 0x00000000, 
    0x00000000, 0x00000014, 0x01fc0010, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000040, 0x00000a08, 0x10001900, 0x00000004, 0x00000000, 
    0x00008929, 0x01ff01ff, 0x00000001, 0x00003050, 0x0000f151, 0x0000f252, 
    0x0000f353, 0x0000f454, 0x0000f555, 0x0000f656, 0x0000f757, 0x0000f858, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x3e800000, 0x40400000, 0x3f000000, 
    0x47800000, 0x437f0000, 0xbf800000, 0x3f800000, 0x05556011, 0x60171200, 
    0x12000555, 0x0055401d, 0x00001200, 0xc4000000, 0x00006021, 0x60271200, 
    0x12000000, 0x0000602d, 0x60331200, 0x12000000, 0x00006039, 0x603f1200, 
    0x10000000, 0x00006045, 0x604b1000, 0x10000000, 0x00006051, 0x60575600, 
    0x56000000, 0x0000605d, 0x60635600, 0x56000000, 0x00006069, 0x606f5600, 
    0x10000000, 0x00006075, 0x607b1000, 0x56000000, 0x00006081, 0x60871000, 
    0x56000000, 0x0000608d, 0x60931000, 0x10000000, 0x00006099, 0x609f1000, 
    0x10000000, 0x000060a5, 0x60ab1000, 0x12000000, 0x000060b1, 0x60b71000, 
    0x56000000, 0x000060bd, 0x60c31000, 0x10000000, 0x000060c9, 0x60cf1200, 
    0x22000000, 0x1008c0a1, 0x1f1ffe88, 0x00004000, 0xb808b0a1, 0x1f1ffe88, 
    0x00004000, 0x10088101, 0x1f1ffe81, 0x00004000, 0x1008a001, 0x1f1ffe88, 
    0x00004000, 0x1008e081, 0x1f1ffe88, 0x00004000, 0x100850c1, 0x1f1ffe81, 
    0x00004000, 0xb808d0e1, 0x1f1ffe88, 0x00004000, 0xb808f041, 0x1f1ffe88, 
    0x00004000, 0xb80860c1, 0x1f1ffe81, 0x00004000, 0x100900e1, 0x1f1ffe88, 
    0x00004000, 0xb8087061, 0x1f1ffe88, 0x00004000, 0xb8084081, 0x1f1ffe81, 
    0x00004000, 0x10091061, 0x1f1ffe88, 0x00004000, 0x10092041, 0x1f1ffe88, 
    0x00004000, 0xb8082021, 0x1f1ffe81, 0x00004000, 0x10094021, 0x1f1ffe88, 
    0x00004000, 0xc8030000, 0x006d6d00, 0xa1000100, 0xc8030009, 0x006d0000, 
    0xe8000000, 0xc8030015, 0x00b0b000, 0xa114ff00, 0xa8431513, 0x00b0b041, 
    0xa112ffff, 0xa88c1513, 0x00acac80, 0xa111ffff, 0xa81c1717, 0x00acac45, 
    0x8107ffff, 0xa8231718, 0x00b0b084, 0x8110ffff, 0xa8431816, 0x00b0b045, 
    0xa10fffff, 0xa88c1816, 0x00acac84, 0xa10dffff, 0xac1c0303, 0x00acac45, 
    0x810effff, 0xac230300, 0x00b0b084, 0x810affff, 0xa8430019, 0x00b0b049, 
    0x810bffff, 0xa88c0019, 0x00acac88, 0x810cffff, 0x002c0001, 0x00ec3161, 
    0xe0000019, 0x004c0003, 0x00ec31cb, 0xe0030319, 0x00190104, 0x006eb361, 
    0xe0181816, 0x00830003, 0x00c419cb, 0xe0171716, 0x00290105, 0x006eb361, 
    0xe0151513, 0x00180005, 0x001bc6cb, 0xe0051413, 0x14020004, 0x00b1c66c, 
    0xe0011205, 0x04110005, 0x006cc6c6, 0xe0001102, 0x14010004, 0x006cc66c, 
    0xe0040603, 0x04420401, 0x001bc6c6, 0xe0041004, 0x14010001, 0x006cc61b, 
    0xe0010f00, 0x04480600, 0x001bc6c6, 0xe0030e0d, 0x14020005, 0x00c6c6c6, 
    0xe0010a03, 0x04480004, 0x00c6c6c6, 0xe0000c05, 0x14080003, 0x00b1c6b1, 
    0xe0030700, 0x04420500, 0x001b1bc6, 0xe404030b, 0x14040001, 0x00b1c61b, 
    0xe7050501, 0x04480101, 0x00b1c6c6, 0xe1000108, 0x28210606, 0x006c1b1b, 
    0x75fe0101, 0xc8070007, 0x18c0c000, 0xe20c0c00, 0xc8070002, 0x18c0c000, 
    0xe20c0c00, 0x7c100600, 0x0000006c, 0xe2000006, 0xc8080001, 0x18b1c600, 
    0xe4050500, 0xc8010002, 0x181b1b00, 0xe7040300, 0xc8010002, 0x181b6c00, 
    0xe1010200, 0xc8010006, 0x006c6c00, 0xf5060200, 0xc8070007, 0x18c0c000, 
    0xe20a0a00, 0xc8070002, 0x18c0c000, 0xe20a0a00, 0x7c100600, 0x0000006c, 
    0xe2000006, 0xc8020000, 0x181bb100, 0xe1010000, 0xc8010006, 0x006cb100, 
    0xf5060000, 0xc8010008, 0x18b16c00, 0xe4050000, 0xc8040009, 0x18b1b100, 
    0xe4050100, 0xc8080009, 0x181bb100, 0xe4030100, 0xc8020000, 0x181bc600, 
    0xe4030400, 0xc8040002, 0x181bc600, 0xe4030600, 0xc8020002, 0x181bb100, 
    0xe4030400, 0xc8020003, 0x181b6c00, 0xe4030500, 0xc8010001, 0x18b16c00, 
    0xe4050500, 0xc8020001, 0x18b1c600, 0xe4050600, 0xc80e0008, 0x181b0c00, 
    0xe4030000, 0xc806000b, 0x181bcb00, 0xe4030000, 0xc80c0001, 0x18b18600, 
    0xe4050400, 0xc80f0001, 0x18a76c00, 0xa701fe00, 0xc8010003, 0x18b1c66c, 
    0xcc0301fe, 0xc8010002, 0x18b16c6c, 0xcc0201fe, 0xc8080002, 0x18c61b6c, 
    0xcc0201fe, 0xc8010000, 0x18b1b16c, 0xcc0001fe, 0xb049000b, 0x18b1c700, 
    0xc40500ff, 0xb08f0001, 0x18a71b01, 0x8002ffff, 0xc8060000, 0x1816bc16, 
    0xec090000, 0xc80f0001, 0x187777d0, 0xec0b0201, 0xc8030002, 0x181a186f, 
    0xec080102, 0xc8080002, 0x181bb16c, 0xec090000, 0xc8060001, 0x181bc100, 
    0x66ff0100, 0xc8040003, 0x181bc600, 0x66ff0000, 0xc80b0000, 0x18c0cb00, 
    0xa003ff00, 0xc8030000, 0x18b0b0b0, 0xec080300, 0xc8040002, 0x18b16c6c, 
    0xec080003, 0xc8010001, 0x181bb100, 0x66ff0000, 0xc8070000, 0x18b4c600, 
    0xa001ff00, 0xc80f0002, 0x181b0000, 0x66ff0200, 0xc8070000, 0x18cd6265, 
    0xec020100, 0xc8080000, 0x181bc61b, 0xec020300, 0xc8010000, 0x18001b00, 
    0xaf00ff00, 0xc8010006, 0x026c6c00, 0xf7060000, 0xc8010006, 0x026c6c00, 
    0xf6060000, 0xc8070007, 0x18c0c000, 0xe20a0a00, 0x7c100600, 0x0000006c, 
    0xe2000006, 0xc8070000, 0x18c0c000, 0xe00a0700, 0xc8070007, 0x18c01b00, 
    0xa100fe00, 0x80100600, 0x0000006c, 0xe2000006, 0x80100600, 0x0000006c, 
    0xe2000006, 0xc8070002, 0x18c0c000, 0xe2070700, 0x7c100600, 0x0000006c, 
    0xe2000006, 0xc8080000, 0x181bc600, 0xe7040600, 0xc8020000, 0x181bc600, 
    0xe4030500, 0xc8040000, 0x18c6b100, 0xe4050100, 0xc8080001, 0x18b1c600, 
    0xe1000000, 0x28840100, 0x18c66c1b, 0xe7050401, 0xc8080000, 0x181b1b00, 
    0xe1010000, 0x28800000, 0x1800001b, 0xe2000000, 0xc8040000, 0x181bc600, 
    0xe1000000, 0xc8010006, 0x006cc600, 0xf5060000, 0xc80e0001, 0x18fcc6fc, 
    0xab0bfe0c, 0xc8070002, 0x1815b100, 0xa101fe00, 0x7c100600, 0x0000006c, 
    0xe2000006, 0xc8080000, 0x18b1c600, 0xe7010500, 0xc8020001, 0x18b11b00, 
    0xe4050400, 0xc8040000, 0x181bc600, 0xe4040600, 0xc8020001, 0x18b1c600, 
    0xe1010000, 0x28240100, 0x181bc6b1, 0xe7040101, 0xc8080000, 0x18b11b00, 
    0xe1010000, 0x28800000, 0x1800001b, 0xe2000000, 0xc8040000, 0x181bc600, 
    0xe1000000, 0xc8010006, 0x006cc600, 0xf5060000, 0xc80e0001, 0x18fcc6fc, 
    0xab0cfe0b, 0xc8070002, 0x1815b100, 0xa101fe00, 0x7c100600, 0x0000006c, 
    0xe2000006, 0xc80e0001, 0x18fcfc00, 0xe00c0b00, 0xc8070002, 0x18151b00, 
    0xa101fe00, 0x80100600, 0x0000006c, 0xe2000006, 0x80100600, 0x0000006c, 
    0xe2000006, 0xc8040000, 0x18b1b100, 0xe7050400, 0xc8080000, 0x181b6c00, 
    0xe4030000, 0xc8080000, 0x18b11b00, 0xe1000000, 0x28820000, 0x181b1b1b, 
    0xe7030500, 0xc8040000, 0x181bc600, 0xe1000000, 0x28400000, 0x180000c6, 
    0xe2000000, 0xc8020000, 0x18c6b100, 0xe1000000, 0xc8010006, 0x006cb100, 
    0xf5060000, 0xc8070000, 0x18c0c6c0, 0xab07fe0a, 0xc8070007, 0x18c0b100, 
    0xa100fe00, 0x7c100600, 0x0000006c, 0xe2000006, 0xc80c0000, 0x18b19b00, 
    0xe4050400, 0x08420000, 0x18b16ccb, 0xe7050100, 0x28410000, 0x186c1bc6, 
    0xe7000300, 0xc8010000, 0x18c66c00, 0xe1000000, 0x28100000, 0x1800006c, 
    0xe2000000, 0xc8010000, 0x186cb100, 0xe1000000, 0xc8010006, 0x006c6c00, 
    0xf5060000, 0xc8070000, 0x18c0c6c0, 0xab0afe07, 0xc8070007, 0x18c0b100, 
    0xa100fe00, 0x7c100600, 0x0000006c, 0xe2000006, 0xc8070000, 0x18c0c000, 
    0xe00a0700, 0xc8070007, 0x18c01b00, 0xa100fe00, 0xc8020000, 0x001b1b00, 
    0xe7040300, 0xc8050000, 0x006db200, 0xe4050500, 0xc8020000, 0x006cb100, 
    0xe1000000, 0x28210000, 0x00b1c6b1, 0xe7050600, 0xc8020000, 0x00c6b100, 
    0xe1000000, 0x28200000, 0x000000b1, 0xe2000000, 0xc8010000, 0x00b16c00, 
    0xe1000000, 0xc8010000, 0x006c6c00, 0x75fe0000, 0xc80e0000, 0x18fcfc00, 
    0xe00c0a00, 0xc8070001, 0x18151b00, 0xa100fe00, 0x7c100000, 0x0000006c, 
    0xe2000000, 0xc8040000, 0x18b1c600, 0xe4050400, 0xc8020000, 0x181bb100, 
    0xe4030500, 0xc8080000, 0x18c6b100, 0xe1000000, 0x28860000, 0x18bc6b1b, 
    0xe7050400, 0xc8080000, 0x181bb100, 0xe1000000, 0x28800000, 0x1800001b, 
    0xe2000000, 0xc8020000, 0x181bc600, 0xe1000000, 0xc8010000, 0x006cb100, 
    0xf5000000, 0xc80e0000, 0x18fcfc00, 0xe00c0a00, 0xc8070001, 0x18151b00, 
    0xa100fe00, 0x7c100000, 0x0000006c, 0xe2000000, 0xc8070001, 0x18c0c000, 
    0xe20c0c00, 0xc8010000, 0x00c61b00, 0xe4040400, 0xc8020000, 0x006cb100, 
    0xe1000600, 0x28210000, 0x001bb1b1, 0xe7040400, 0xc8010000, 0x00b16c00, 
    0xe1000000, 0x70000000, 0x0000006c, 0xe2000000, 0xc8070000, 0x18c0c000, 
    0xe00c0a00, 0xc8070000, 0x18c01b00, 0xa100fe00, 0xc8030003, 0x10c41b00, 
    0xe4050400, 0x08870000, 0x10c0c061, 0xe00c0a03, 0x28830003, 0x101a191b, 
    0xe7040500, 0xa8480000, 0x101b6c02, 0xc10003fe, 0xa8280000, 0x101b6c01, 
    0x8700fefe, 0xa8180000, 0x101bb100, 0xc10003fe, 0xc8070000, 0x101bc0c0, 
    0xec000a00, 0xc8030003, 0x001bb000, 0x65fe0900, 0xc8070001, 0x04b1c0c0, 
    0xed830100, 0xc8070000, 0x04b1c0c0, 0xed830207, 0xc88fc000, 0x006cc0c0, 
    0xee030100, 0x00000000, 0x00000000, 0x00000000
};
