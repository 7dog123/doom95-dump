void** g4845c0 = reinterpret_cast<void**>(0xe8);

void** g4845b4 = reinterpret_cast<void**>(0xe7);

struct s271 {
    void** f0;
    signed char[53] pad54;
    int32_t f36;
};

void** fun_424538(int32_t a1);

void** fun_4244e0() {
    int32_t v1;
    int32_t ebx2;
    int32_t eax3;
    int32_t edx4;
    void** ebx5;
    void** eax6;
    int1_t less7;
    void** edx8;
    void** eax9;
    void** edx10;
    void* eax11;
    int32_t eax12;
    int32_t edx13;
    void** edx14;
    int16_t* edx15;
    int32_t eax16;
    void** ebx17;
    struct s271* eax18;
    int32_t edi19;

    v1 = ebx2;
    if (eax3 < 0 || (edx4 < 0 || ((ebx5 = g4845a4, reinterpret_cast<signed char>(eax6) >= reinterpret_cast<signed char>(ebx5)) || (less7 = reinterpret_cast<signed char>(edx8) < reinterpret_cast<signed char>(g4845bc), !less7)))) {
        addr_424547_2:
        eax9 = reinterpret_cast<void**>(1);
    } else {
        edx10 = g4845c0;
        eax11 = reinterpret_cast<void*>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(edx10 + (eax12 + edx13 * reinterpret_cast<unsigned char>(ebx5)) * 2))));
        edx14 = g4845b4;
        edx15 = reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(edx14) + (reinterpret_cast<uint32_t>(eax11) + reinterpret_cast<uint32_t>(eax11)));
        while (eax16 = *edx15, eax16 != -1) {
            ebx17 = g4845d8;
            eax18 = reinterpret_cast<struct s271*>(ebx17 + eax16 * 62);
            edi19 = g4654c4;
            if (edi19 == eax18->f36) 
                goto addr_42453c_6;
            eax18->f36 = edi19;
            eax9 = fun_424538(v1);
            if (!eax9) 
                goto addr_42454c_8;
            addr_42453c_6:
            ++edx15;
        }
        goto addr_424547_2;
    }
    addr_42454c_8:
    return eax9;
}

struct s272 {
    signed char[8] pad8;
    int32_t f8;
};

struct s274 {
    int32_t f0;
    int32_t f4;
};

struct s273 {
    struct s274* f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

unsigned char fun_423fd0(void** ecx) {
    struct s272* ebx2;
    struct s273* ebx3;
    int32_t edx4;
    int32_t eax5;
    struct s274* eax6;
    int32_t edx7;
    int32_t eax8;
    uint32_t eax9;
    uint32_t eax10;

    if (ebx2->f8) {
        if (ebx3->fc) {
            __asm__("shrd eax, edx, 0x10");
            __asm__("shrd eax, edx, 0x10");
            if ((edx4 - ebx3->f0->f4) * (ebx3->f8 >> 16) >= (ebx3->fc >> 16) * (eax5 - ebx3->f0->f0)) {
                return 1;
            } else {
                return 0;
            }
        } else {
            eax6 = ebx3->f0;
            if (edx7 > eax6->f4) {
                *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<uint1_t>(ebx3->f8 > 0);
                return reinterpret_cast<uint32_t>(eax6) & 0xff;
            } else {
                *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<uint1_t>(ebx3->f8 < 0);
                return reinterpret_cast<uint32_t>(eax6) & 0xff;
            }
        }
    } else {
        if (eax8 > ebx3->f0->f0) {
            *reinterpret_cast<unsigned char*>(&eax9) = reinterpret_cast<uint1_t>(ebx3->fc < 0);
            return eax9 & 0xff;
        } else {
            *reinterpret_cast<unsigned char*>(&eax10) = reinterpret_cast<uint1_t>(ebx3->fc > 0);
            return eax10 & 0xff;
        }
    }
}

struct s275 {
    signed char[42] pad42;
    void** f2a;
};

void** g483778 = reinterpret_cast<void**>(0xd0);

uint32_t g48377c = 0x211ffe8;

void fun_423380(void** ecx) {
    struct s275* eax2;
    void** eax3;
    unsigned char eax4;
    void** ecx5;
    void** eax6;
    void** esi7;
    void** ecx8;
    void** eax9;
    void* ecx10;
    void** ecx11;
    void** eax12;
    uint32_t* edx13;
    uint32_t esi14;
    uint32_t eax15;
    uint32_t* ebx16;
    uint32_t eax17;

    if (eax2->f2a) {
        if (!reinterpret_cast<int1_t>(eax2->f2a == 1)) {
            eax4 = fun_423fd0(eax3);
            ecx5 = *reinterpret_cast<void***>(eax3 + 12);
            eax6 = fun_42db10(ecx5);
            esi7 = eax6;
            if (eax4 == 1) {
                esi7 = eax6 + 0x80000000;
            }
            ecx8 = g483778;
            eax9 = fun_42db10(ecx8);
            ecx10 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax9) - reinterpret_cast<unsigned char>(esi7));
            if (reinterpret_cast<uint32_t>(ecx10) > 0x80000000) {
                ecx10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx10) + 0x80000000);
            }
            ecx11 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx10) >> 19);
            eax12 = fun_423fa0(ecx11);
            edx13 = image_base_;
            esi14 = reinterpret_cast<unsigned char>(esi7) >> 19;
            eax15 = reinterpret_cast<unsigned char>(eax12) * edx13[reinterpret_cast<unsigned char>(ecx11)];
            __asm__("shrd eax, edx, 0x10");
            ebx16 = image_base_;
            __asm__("shrd eax, edx, 0x10");
            g48377c = eax15 * ebx16[esi14];
            __asm__("shrd eax, edx, 0x10");
            g483778 = reinterpret_cast<void**>(eax15 * *reinterpret_cast<uint32_t*>(esi14 * 4 + 0x46a9e0));
        } else {
            g48377c = reinterpret_cast<unsigned char>(eax3) ^ eax17;
            return;
        }
    } else {
        g483778 = eax2->f2a;
    }
    return;
}

struct s276 {
    signed char[132] pad132;
    int32_t f84;
};

void** fun_4289f0(void** ecx) {
    struct s276* eax2;
    void** eax3;
    void** edx4;

    if (!eax2->f84) {
        eax3 = reinterpret_cast<void**>(0);
        if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx4 + 18) == 46)) {
            eax3 = reinterpret_cast<void**>(1);
        }
        if (!eax3) 
            goto addr_428a67_5;
    }
    eax3 = *reinterpret_cast<void***>(edx4 + 18);
    if (reinterpret_cast<unsigned char>(eax3) < reinterpret_cast<unsigned char>(46)) {
        if (!reinterpret_cast<int1_t>(eax3 == 24)) {
            addr_428a67_5:
            return eax3;
        } else {
            fun_420f30(edx4);
        }
    } else {
        if (reinterpret_cast<unsigned char>(eax3) <= reinterpret_cast<unsigned char>(46)) {
            fun_41e7a0(edx4);
            goto addr_428a62_11;
        } else {
            if (eax3 == 47) {
                fun_425c00(edx4);
            } else {
                return eax3;
            }
        }
    }
    addr_428a62_11:
    eax3 = fun_4292d0(edx4);
    goto addr_428a67_5;
}

struct s277 {
    signed char[8] pad8;
    int32_t f8;
};

struct s278 {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
};

struct s279 {
    signed char[12] pad12;
    int32_t fc;
};

unsigned char fun_4241a0(void** ecx) {
    uint32_t eax2;
    uint32_t edx3;
    struct s277* ebx4;
    int32_t eax5;
    int32_t* ebx6;
    struct s278* ebx7;
    struct s279* ebx8;
    uint32_t ebx9;
    uint32_t edi10;

    eax2 = edx3;
    if (!ebx4->f8) {
        if (eax5 > *ebx6) {
            *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx7->fc) < reinterpret_cast<int32_t>(0));
            return eax2 & 0xff;
        } else {
            *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx7->fc) > reinterpret_cast<int32_t>(0));
            return eax2 & 0xff;
        }
    }
    if (!ebx8->fc) {
        if (reinterpret_cast<int32_t>(eax2) > reinterpret_cast<int32_t>(ebx7->f4)) {
            *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx7->f8) > reinterpret_cast<int32_t>(0));
            return eax2 & 0xff;
        } else {
            *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx7->f8) < reinterpret_cast<int32_t>(0));
            return eax2 & 0xff;
        }
    }
    ebx9 = eax5 - ebx7->f0;
    edi10 = eax2 - ebx7->f4;
    if ((ebx7->fc ^ ebx7->f8 ^ ebx9 ^ edi10) & 0x80000000) 
        goto addr_424223_10;
    __asm__("shrd eax, edx, 0x10");
    __asm__("shrd eax, edx, 0x10");
    if ((reinterpret_cast<int32_t>(edi10) >> 8) * (reinterpret_cast<int32_t>(ebx7->f8) >> 8) >= (reinterpret_cast<int32_t>(ebx7->fc) >> 8) * (reinterpret_cast<int32_t>(ebx9) >> 8)) {
        addr_42425d_12:
        return 1;
    } else {
        addr_424256_13:
        return 0;
    }
    addr_424223_10:
    if (!((ebx9 ^ ebx7->fc) & 0x80000000)) 
        goto addr_424256_13;
    goto addr_42425d_12;
}

int32_t* g483ddc = reinterpret_cast<int32_t*>(0xf004816);

void** fun_42482c(int32_t a1);

void** fun_4247d0(void** ecx) {
    int32_t* ecx2;
    int32_t v3;
    int32_t eax4;
    int32_t edi5;
    int32_t edx6;
    int32_t esi7;
    int32_t* ebx8;
    int32_t* eax9;
    int32_t edx10;
    void** eax11;

    ecx2 = g483ddc;
    v3 = eax4;
    edi5 = edx6;
    esi7 = reinterpret_cast<int32_t>(ecx2 - 0x120df1) / 12;
    ebx8 = reinterpret_cast<int32_t*>(0);
    while (--esi7, esi7 != -1) {
        eax9 = reinterpret_cast<int32_t*>(0x4837c4);
        edx10 = 0x7fffffff;
        if (reinterpret_cast<uint32_t>(ecx2) > 0x4837c4) {
            do {
                if (edx10 > *eax9) {
                    ebx8 = eax9;
                    edx10 = *eax9;
                }
                eax9 = eax9 + 3;
            } while (reinterpret_cast<uint32_t>(eax9) < reinterpret_cast<uint32_t>(ecx2));
        }
        g483ddc = ecx2;
        if (edx10 > edi5) 
            break;
        eax11 = fun_42482c(v3);
        if (!eax11) 
            goto addr_424830_9;
        ecx2 = g483ddc;
        *ebx8 = 0x7fffffff;
    }
    eax11 = reinterpret_cast<void**>(1);
    addr_42484b_12:
    g483ddc = ecx2;
    return eax11;
    addr_424830_9:
    ecx2 = g483ddc;
    goto addr_42484b_12;
}

struct s280 {
    signed char[16] pad16;
    void* f10;
    signed char[44] pad64;
    void* f40;
    signed char[4] pad72;
    uint32_t f48;
    void** f4c;
};

struct s281 {
    signed char[20] pad20;
    uint32_t f14;
    signed char[44] pad68;
    void* f44;
};

struct s281* g483784 = reinterpret_cast<struct s281*>(0x4812);

void** g483774 = reinterpret_cast<void**>(0x83);

void** fun_423510(void** ecx) {
    struct s280* esi2;
    struct s280* eax3;
    struct s281* eax4;
    int32_t v5;
    int32_t ebx6;
    void* ebp7;
    void* eax8;
    void** ecx9;
    void** ecx10;
    void** ebx11;
    void** edi12;
    void** eax13;
    void** eax14;
    void** eax15;
    void** edx16;
    void** ebx17;
    void** ebx18;
    uint32_t eax19;
    void** eax20;

    esi2 = eax3;
    g483784 = eax4;
    v5 = 0;
    do {
        ebx6 = v5 + 1;
        v5 = ebx6;
        if (ebx6 == 3) 
            break;
        if (reinterpret_cast<int32_t>(esi2->f48) <= reinterpret_cast<int32_t>(0)) {
        }
        if (reinterpret_cast<signed char>(esi2->f4c) <= reinterpret_cast<signed char>(0)) {
            ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi2->f10) - reinterpret_cast<uint32_t>(esi2->f40));
            eax8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi2->f10) + reinterpret_cast<uint32_t>(esi2->f40));
        } else {
            eax8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi2->f10) - reinterpret_cast<uint32_t>(esi2->f40));
            ebp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi2->f10) + reinterpret_cast<uint32_t>(esi2->f40));
        }
        ecx9 = esi2->f4c;
        g483774 = reinterpret_cast<void**>(0x10001);
        fun_424860(reinterpret_cast<unsigned char>(ecx9) + reinterpret_cast<uint32_t>(ebp7), 1, 0x423460);
        ecx10 = esi2->f4c;
        fun_424860(reinterpret_cast<unsigned char>(ecx10) + reinterpret_cast<uint32_t>(ebp7), 1, 0x423460);
        ebx11 = esi2->f4c;
        fun_424860(reinterpret_cast<uint32_t>(eax8) + reinterpret_cast<unsigned char>(ebx11), 1, 0x423460);
        ecx = g483774;
        if (reinterpret_cast<int1_t>(ecx == 0x10001)) 
            break;
        edi12 = ecx + 0xfffff800;
        g483774 = edi12;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi12) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi12 == 0)) 
            goto addr_423668_11;
        __asm__("shrd eax, edx, 0x10");
        ecx = reinterpret_cast<void**>(esi2->f48 * reinterpret_cast<unsigned char>(edi12));
        __asm__("shrd eax, edx, 0x10");
        eax13 = fun_4231b0(ecx);
        if (!eax13) 
            break;
        addr_423668_11:
        eax14 = g483774;
        eax15 = eax14 + 0x800;
        edx16 = reinterpret_cast<void**>(0x10000 - reinterpret_cast<unsigned char>(eax15));
        g483774 = edx16;
        if (reinterpret_cast<signed char>(edx16) > reinterpret_cast<signed char>(0x10000)) {
            g483774 = reinterpret_cast<void**>(0x10000);
        }
        ebx17 = g483774;
    } while (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx17) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx17 == 0)) && (ebx18 = g483774, g48377c = esi2->f48 * reinterpret_cast<unsigned char>(ebx17), g483778 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi2->f4c) * reinterpret_cast<unsigned char>(ebx18)), fun_423380(ecx), eax19 = g48377c, esi2->f48 = eax19, eax20 = g483778, esi2->f4c = eax20, eax15 = fun_4231b0(ecx), eax15 == 0));
    goto addr_4236f6_15;
    eax15 = fun_4231b0(ecx);
    if (!eax15) {
        eax15 = fun_4231b0(ecx);
    }
    addr_4236f6_15:
    return eax15;
}

struct s282 {
    signed char[80] pad80;
    int32_t f50;
};

struct s283 {
    signed char[80] pad80;
    int32_t f50;
};

struct s284 {
    signed char[72] pad72;
    int32_t f48;
    int32_t f4c;
    signed char[12] pad92;
    void** f5c;
    signed char[3] pad96;
    uint32_t f60;
    signed char[6] pad106;
    unsigned char f6a;
};

void** fun_424b40(void** ecx) {
    struct s282* eax2;
    int32_t eax3;
    struct s283* eax4;
    struct s284* eax5;
    void** ebp6;
    void** esi7;
    void** eax8;
    uint32_t esi9;
    void** eax10;

    eax2->f50 = 0;
    eax3 = eax4->f50;
    eax5->f4c = eax3;
    eax5->f48 = eax3;
    fun_424ae0(ecx, ebp6, esi7);
    eax8 = fun_41d460(ecx, ebp6);
    esi9 = eax5->f60 - (reinterpret_cast<unsigned char>(eax8) & 3);
    eax5->f60 = esi9;
    if (reinterpret_cast<int32_t>(esi9) < reinterpret_cast<int32_t>(1)) {
        eax5->f60 = 1;
    }
    eax5->f6a = reinterpret_cast<unsigned char>(eax5->f6a & 0xfe);
    eax10 = eax5->f5c;
    if (*reinterpret_cast<void***>(eax10 + 56)) {
        eax10 = fun_4312d0(ecx, ebp6);
    }
    return eax10;
}

struct s285 {
    signed char[72] pad72;
    int32_t f48;
};

struct s286 {
    signed char[76] pad76;
    void** f4c;
};

struct s287 {
    signed char[10] pad10;
    int16_t fa;
};

void** g5ee6d4 = reinterpret_cast<void**>(0);

struct s288 {
    signed char[107] pad107;
    unsigned char f6b;
};

void** fun_424ba0(void** ecx) {
    void** v2;
    void** ebp3;
    void** ecx4;
    void** eax5;
    struct s285* eax6;
    struct s286* eax7;
    void** esi8;
    void** v9;
    void** edi10;
    void** esi11;
    void** eax12;
    int32_t ebp13;
    void** ebx14;
    struct s288* eax15;
    void** eax16;
    unsigned char dl17;
    void** v18;
    void** eax19;
    void** eax20;

    v2 = ebp3;
    ecx4 = eax5;
    if (eax6->f48 || eax7->f4c) {
        esi8 = *reinterpret_cast<void***>(ecx4 + 72);
        v9 = *reinterpret_cast<void***>(ecx4 + 0x84);
        if (reinterpret_cast<signed char>(esi8) <= reinterpret_cast<signed char>(0x1e0000)) {
            if (reinterpret_cast<signed char>(esi8) < reinterpret_cast<signed char>(0xffe20000)) {
                *reinterpret_cast<void***>(ecx4 + 72) = reinterpret_cast<void**>(0xffe20000);
            }
        } else {
            *reinterpret_cast<void***>(ecx4 + 72) = reinterpret_cast<void**>(0x1e0000);
        }
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx4 + 76)) <= reinterpret_cast<signed char>(0x1e0000)) {
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx4 + 76)) < reinterpret_cast<signed char>(0xffe20000)) {
                *reinterpret_cast<void***>(ecx4 + 76) = reinterpret_cast<void**>(0xffe20000);
            }
        } else {
            *reinterpret_cast<void***>(ecx4 + 76) = reinterpret_cast<void**>(0x1e0000);
        }
        edi10 = *reinterpret_cast<void***>(ecx4 + 72);
        esi11 = *reinterpret_cast<void***>(ecx4 + 76);
        do {
            if (reinterpret_cast<signed char>(edi10) > reinterpret_cast<signed char>(0xf0000) || reinterpret_cast<signed char>(esi11) > reinterpret_cast<signed char>(0xf0000)) {
                edi10 = reinterpret_cast<void**>(reinterpret_cast<signed char>(edi10) >> 1);
                esi11 = reinterpret_cast<void**>(reinterpret_cast<signed char>(esi11) >> 1);
            } else {
                esi11 = reinterpret_cast<void**>(0);
                edi10 = reinterpret_cast<void**>(0);
            }
            eax12 = fun_4231b0(ecx4);
            if (!eax12) {
                if (!*reinterpret_cast<void***>(ecx4 + 0x84)) {
                    if (!(*reinterpret_cast<unsigned char*>(ecx4 + 0x6a) & 1)) {
                        *reinterpret_cast<void***>(ecx4 + 76) = eax12;
                        *reinterpret_cast<void***>(ecx4 + 72) = eax12;
                    } else {
                        ebp13 = g4837a8;
                        if (!ebp13) 
                            goto addr_424cda_19;
                        if (!*reinterpret_cast<struct s287**>(ebp13 + 50)) 
                            goto addr_424cda_19;
                        ebx14 = g5ee6d4;
                        if (reinterpret_cast<int1_t>(static_cast<int32_t>((*reinterpret_cast<struct s287**>(ebp13 + 50))->fa) == ebx14)) 
                            goto addr_424cc9_22;
                        addr_424cda_19:
                        eax12 = fun_424b40(ecx4);
                    }
                } else {
                    eax12 = fun_423510(ecx4);
                }
            }
        } while (edi10 || esi11);
    } else {
        if (eax15->f6b & 1) {
            eax16 = eax7->f4c;
            dl17 = *reinterpret_cast<unsigned char*>(ecx4 + 0x6b);
            *reinterpret_cast<void***>(ecx4 + 80) = eax7->f4c;
            *reinterpret_cast<void***>(ecx4 + 76) = eax16;
            *reinterpret_cast<unsigned char*>(ecx4 + 0x6b) = reinterpret_cast<unsigned char>(dl17 & 0xfe);
            *reinterpret_cast<void***>(ecx4 + 72) = eax16;
            eax12 = fun_424ae0(ecx4, v18, v2);
            goto addr_424e19_27;
        }
    }
    if (!v9 || !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v9 + 0xc4)) & 4)) {
        if (!(*reinterpret_cast<unsigned char*>(ecx4 + 0x6a) & 0x101) && ((eax12 = *reinterpret_cast<void***>(ecx4 + 20), reinterpret_cast<signed char>(eax12) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx4 + 56))) && (!(*reinterpret_cast<unsigned char*>(ecx4 + 0x6a) & 16) || (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx4 + 72)) <= reinterpret_cast<signed char>(0x4000) && (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx4 + 72)) >= reinterpret_cast<signed char>(0xffffc000) && (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx4 + 76)) <= reinterpret_cast<signed char>(0x4000) && reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx4 + 76)) >= reinterpret_cast<signed char>(0xffffc000))) || (eax12 = *reinterpret_cast<void***>(ecx4 + 56), eax12 == *reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx4 + 52)))))))) {
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx4 + 72)) <= reinterpret_cast<signed char>(0xfffff000) || (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx4 + 72)) >= reinterpret_cast<signed char>(0x1000) || ((eax19 = *reinterpret_cast<void***>(ecx4 + 76), reinterpret_cast<signed char>(eax19) <= reinterpret_cast<signed char>(0xfffff000)) || (reinterpret_cast<signed char>(eax19) >= reinterpret_cast<signed char>(0x1000) || v9 && (*reinterpret_cast<void***>(v9 + 8) || *reinterpret_cast<signed char*>(v9 + 9)))))) {
                __asm__("shrd eax, edx, 0x10");
                *reinterpret_cast<void***>(ecx4 + 72) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx4 + 72)) * 0xe800);
                eax12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx4 + 76)) * 0xe800);
                __asm__("shrd eax, edx, 0x10");
                *reinterpret_cast<void***>(ecx4 + 76) = eax12;
            } else {
                if (v9 && (eax19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v9) + 100) - 0x45a184) / 28 - 0x96), reinterpret_cast<unsigned char>(eax19) < reinterpret_cast<unsigned char>(4))) {
                    eax19 = fun_424ae0(ecx4, v9, v2);
                }
                *reinterpret_cast<void***>(ecx4 + 72) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(ecx4 + 76) = reinterpret_cast<void**>(0);
                return eax19;
            }
        }
    } else {
        *reinterpret_cast<void***>(ecx4 + 76) = edi10;
        *reinterpret_cast<void***>(ecx4 + 72) = edi10;
        return eax12;
    }
    addr_424e19_27:
    return eax12;
    addr_424cc9_22:
    eax20 = fun_4252a0(ecx4);
    return eax20;
}

struct s289 {
    signed char[132] pad132;
    int32_t f84;
};

struct s290 {
    signed char[16] pad16;
    void* f10;
    void** f14;
    signed char[1] pad22;
    int16_t f16;
    signed char[32] pad56;
    void** f38;
    signed char[3] pad60;
    void** f3c;
    signed char[7] pad68;
    void* f44;
    signed char[8] pad80;
    void* f50;
    signed char[21] pad105;
    unsigned char f69;
    unsigned char f6a;
    unsigned char f6b;
    signed char[12] pad120;
    void** f78;
    signed char[11] pad132;
    void** f84;
};

struct s291 {
    signed char[20] pad20;
    void** f14;
};

void** fun_424e30(void** ecx) {
    struct s289* eax2;
    struct s290* eax3;
    struct s291* eax4;
    unsigned char ah5;
    void** ecx6;
    void** eax7;
    void* eax8;
    void** ebp9;
    void** eax10;
    unsigned char dl11;

    if (eax2->f84 && (ecx = eax3->f38, reinterpret_cast<signed char>(eax4->f14) < reinterpret_cast<signed char>(ecx))) {
        *reinterpret_cast<void***>(eax3->f84 + 20) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3->f84 + 20)) - (reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(eax3->f14)));
        *reinterpret_cast<void***>(eax3->f84 + 24) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(0x290000 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3->f84 + 20))) >> 3);
    }
    ah5 = eax3->f69;
    eax3->f14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax3->f14) + reinterpret_cast<uint32_t>(eax3->f50));
    if (ah5 & 64 && ((ecx = eax3->f78, !!ecx) && (!(eax3->f6b & 1) && !(eax3->f6a & 32)))) {
        ecx6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax3->f10) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx + 16)));
        eax7 = fun_423fa0(ecx6);
        ecx = eax7;
        eax8 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(eax3->f44) >> 1) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3->f78 + 20)) - reinterpret_cast<unsigned char>(eax3->f14));
        if (reinterpret_cast<int32_t>(eax8) >= reinterpret_cast<int32_t>(0) || reinterpret_cast<signed char>(ecx) >= reinterpret_cast<signed char>(-(reinterpret_cast<uint32_t>(eax8) * 4 - reinterpret_cast<uint32_t>(eax8)))) {
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax8) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax8 == 0)) && reinterpret_cast<signed char>(eax7) < reinterpret_cast<signed char>(reinterpret_cast<uint32_t>(eax8) * 4 - reinterpret_cast<uint32_t>(eax8))) {
                eax3->f16 = reinterpret_cast<int16_t>(eax3->f16 + 4);
            }
        } else {
            eax3->f14 = eax3->f14 - 0x40000;
        }
    }
    if (reinterpret_cast<signed char>(eax3->f14) > reinterpret_cast<signed char>(eax3->f38)) {
        if (!(eax3->f69 & 2)) {
            if (eax3->f50) {
                eax3->f50 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax3->f50) + 0xffff0000);
            } else {
                eax3->f50 = reinterpret_cast<void*>(0xfffe0000);
            }
        }
    } else {
        if (eax3->f6b & 1) {
            eax3->f50 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(eax3->f50));
        }
        if (reinterpret_cast<int32_t>(eax3->f50) < reinterpret_cast<int32_t>(0)) {
            ecx = eax3->f84;
            if (ecx && reinterpret_cast<int32_t>(eax3->f50) < reinterpret_cast<int32_t>(0xfff80000)) {
                *reinterpret_cast<void***>(ecx + 24) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax3->f50) >> 3);
                fun_4312d0(ecx, ebp9);
            }
            eax3->f50 = reinterpret_cast<void*>(0);
        }
        eax3->f14 = eax3->f38;
        if (!(eax3->f6a & 1)) 
            goto addr_424f81_20;
        if (!(eax3->f69 & 16)) 
            goto addr_424f60_22;
    }
    addr_424f81_20:
    eax10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax3->f14) + reinterpret_cast<uint32_t>(eax3->f44));
    if (reinterpret_cast<signed char>(eax10) <= reinterpret_cast<signed char>(eax3->f3c)) {
        addr_424fc4_23:
        return eax10;
    } else {
        if (reinterpret_cast<int32_t>(eax3->f50) > reinterpret_cast<int32_t>(0)) {
            eax3->f50 = reinterpret_cast<void*>(0);
        }
        eax10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax3->f3c) - reinterpret_cast<uint32_t>(eax3->f44));
        dl11 = eax3->f6b;
        eax3->f14 = eax10;
        if (dl11 & 1) {
            eax3->f50 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(eax3->f50));
        }
        if (!(eax3->f6a & 1)) 
            goto addr_424fc4_23;
        if (eax3->f69 & 16) 
            goto addr_424fc4_23;
    }
    addr_424fbd_30:
    eax10 = fun_424b40(ecx);
    goto addr_424fc4_23;
    addr_424f60_22:
    goto addr_424fbd_30;
}

struct s292 {
    signed char[88] pad88;
    void** f58;
    signed char[51] pad140;
    void** f8c;
};

struct s293 {
    void** f0;
    signed char[3] pad4;
    int16_t f4;
    signed char[2] pad8;
    unsigned char f8;
};

struct s294 {
    void** f0;
    signed char[3] pad4;
    int16_t f4;
};

struct s295 {
    int16_t f0;
    signed char[2] pad4;
    int16_t f4;
};

struct s296 {
    int16_t f0;
    signed char[2] pad4;
    int16_t f4;
};

void** fun_424fd0(void** ecx) {
    void** eax2;
    void** v3;
    void** v4;
    void** ecx5;
    struct s292* eax6;
    void** eax7;
    struct s293* esi8;
    struct s294* edi9;
    struct s295* edi10;
    struct s296* esi11;

    eax2 = fun_423010(ecx);
    if (!eax2) {
        addr_4250ba_2:
        return eax2;
    } else {
        fun_425180(39);
        fun_4312d0(39, v3);
        fun_42e2f0(39);
        fun_425180(39);
        fun_4312d0(39, v4);
        ecx5 = eax6->f58;
        eax7 = fun_425180(ecx5);
        esi8 = reinterpret_cast<struct s293*>(&eax6->f8c);
        edi9 = reinterpret_cast<struct s294*>(eax7 + 0x8c);
        edi9->f0 = esi8->f0;
        edi10 = reinterpret_cast<struct s295*>(&edi9->f4);
        esi11 = reinterpret_cast<struct s296*>(&esi8->f4);
        edi10->f0 = esi11->f0;
        edi10->f4 = esi11->f4;
        *reinterpret_cast<void***>(eax7 + 32) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<int16_t*>(&eax6->f8c + 4) / 45) << 29);
        if (*reinterpret_cast<unsigned char*>(&eax6->f8c + 8) & 8) 
            goto addr_4250a8_13;
    }
    addr_4250ac_14:
    *reinterpret_cast<void***>(eax7 + 0x7c) = reinterpret_cast<void**>(18);
    eax2 = fun_4252a0(eax7);
    goto addr_4250ba_2;
    addr_4250a8_13:
    *reinterpret_cast<void***>(eax7 + 0x68) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax7 + 0x68)) | 32);
    goto addr_4250ac_14;
}

struct s297 {
    signed char[4] pad4;
    int32_t f4;
    signed char[24] pad32;
    int32_t f20;
    signed char[60] pad96;
    signed char f60;
    signed char[15] pad112;
    int32_t f70;
    int32_t f74;
    int32_t f78;
    int32_t f7c;
    signed char[28] pad156;
    int32_t f9c;
    signed char[8] pad168;
    int32_t fa8;
    signed char[16] pad188;
    int32_t fbc;
    int32_t fc0;
};

void fun_4172b0(void** ecx) {
    int32_t eax2;
    int32_t eax3;
    int32_t eax4;
    int32_t v5;
    struct s297* ebp6;
    int32_t edx7;
    signed char* eax8;
    signed char* esi9;
    signed char* v10;
    uint32_t ecx11;
    signed char v12;
    signed char v13;
    int32_t v14;
    int32_t v15;
    void** v16;
    signed char* edi17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    int32_t edx22;
    uint32_t ecx23;
    struct s297* edx24;
    int32_t eax25;

    eax2 = ((eax3 * 8 + eax4) * 4 - eax4) * 8;
    v5 = eax2;
    ebp6 = reinterpret_cast<struct s297*>(0x482518 + eax2);
    edx7 = eax2;
    eax8 = &ebp6->f60;
    esi9 = eax8;
    v10 = eax8;
    ecx11 = 4;
    do {
        if (!ecx11) 
            break;
        --ecx11;
        v12 = *esi9;
        esi9 = esi9 + 4;
    } while (1);
    *reinterpret_cast<unsigned char*>(&ecx11) = 0;
    do {
        if (!ecx11) 
            break;
        --ecx11;
        v13 = *esi9;
        ++esi9;
    } while (0);
    v14 = *reinterpret_cast<int32_t*>(edx7 + 0x4825e4);
    v15 = *reinterpret_cast<int32_t*>(edx7 + 0x4825e8);
    v16 = *reinterpret_cast<void***>(edx7 + 0x4825ec);
    edi17 = v10;
    fun_442b80(16, v18, v19, v20, v21, v16);
    edx22 = v5;
    ecx23 = 4;
    do {
        if (!ecx23) 
            break;
        --ecx23;
        *edi17 = v12;
        edi17 = edi17 + 4;
    } while (1);
    *reinterpret_cast<unsigned char*>(&ecx23) = 0;
    do {
        if (!ecx23) 
            break;
        --ecx23;
        *edi17 = v13;
        ++edi17;
    } while (0);
    *reinterpret_cast<int32_t*>(edx22 + 0x4825e4) = v14;
    *reinterpret_cast<int32_t*>(edx22 + 0x4825e8) = v15;
    *reinterpret_cast<void***>(edx22 + 0x4825ec) = v16;
    ebp6->fbc = 1;
    ebp6->f4 = 0;
    ebp6->f20 = 100;
    ebp6->f74 = 1;
    ebp6->f78 = 1;
    ebp6->f7c = 1;
    ebp6->f9c = 50;
    ebp6->fc0 = ebp6->fbc;
    edx24 = ebp6;
    ebp6->f70 = ebp6->f74;
    eax25 = 0;
    do {
        edx24 = reinterpret_cast<struct s297*>(&edx24->f4);
        ++eax25;
        edx24->fa8 = *reinterpret_cast<int32_t*>(eax25 * 4 + 0x464ca4);
    } while (eax25 < 4);
    return;
}

struct s298 {
    signed char[112] pad112;
    int32_t f70;
    int32_t f74;
};

struct s299 {
    signed char[228] pad228;
    int32_t fe4;
};

void** fun_426090(void** ecx);

void** fun_426bd0(void** ecx) {
    struct s298* ebx2;
    struct s298* eax3;
    struct s299* edx4;
    void* eax5;
    struct s299* eax6;
    struct s299* tmp32_7;
    void** eax8;

    ebx2 = eax3;
    edx4 = reinterpret_cast<struct s299*>(reinterpret_cast<int32_t>(eax5) + 32);
    do {
        eax6 = tmp32_7;
        eax6->fe4 = 0;
    } while (eax6 != edx4);
    ebx2->f74 = ebx2->f70;
    eax8 = fun_426090(ecx);
    return eax8;
}

struct s5* fun_444197(void** ecx) {
    struct s5* eax2;
    signed char edx3;
    void** v4;
    uint32_t ecx5;
    uint32_t ecx6;
    signed char edx7;
    uint32_t ecx8;
    signed char edx9;
    signed char edx10;
    uint32_t ecx11;
    signed char edx12;
    int32_t edx13;
    int32_t edx14;
    int32_t edx15;
    signed char edx16;
    int32_t edx17;
    uint32_t ecx18;
    int32_t edx19;
    int32_t edx20;
    int32_t edx21;
    int32_t edx22;
    int32_t edx23;
    int32_t edx24;

    if (!ecx) {
        addr_444202_2:
        return eax2;
    } else {
        do {
            if (!(*reinterpret_cast<unsigned char*>(&eax2) & 31)) 
                break;
            eax2->f0 = edx3;
            eax2 = reinterpret_cast<struct s5*>(&eax2->f4);
            --ecx;
        } while (ecx);
        v4 = ecx;
        ecx5 = reinterpret_cast<unsigned char>(ecx) >> 2;
        if (ecx5) 
            goto addr_4441ad_6;
    }
    addr_4441e7_7:
    ecx6 = reinterpret_cast<unsigned char>(v4) & 3;
    if (ecx6 && ((eax2->f0 = edx7, eax2 = reinterpret_cast<struct s5*>(&eax2->f4), ecx8 = ecx6 - 1, !!ecx8) && (eax2->f0 = edx9, eax2 = reinterpret_cast<struct s5*>(&eax2->f4), !!(ecx8 - 1)))) {
        eax2->f0 = edx10;
        eax2 = reinterpret_cast<struct s5*>(&eax2->f4);
        goto addr_444202_2;
    }
    addr_4441ad_6:
    ecx11 = ecx5 - 1;
    if (!ecx11) {
        addr_4441d9_9:
        eax2->f0 = edx12;
        eax2->f4 = edx13;
        eax2->f8 = edx14;
        eax2->fc = edx15;
        eax2 = reinterpret_cast<struct s5*>(&eax2->f10);
        goto addr_4441e7_7;
    } else {
        do {
            eax2->f0 = edx16;
            eax2->f4 = edx17;
            ecx18 = ecx11 - 1;
            eax2->f8 = edx19;
            eax2->fc = edx20;
            if (!ecx18) 
                break;
            eax2->f10 = edx21;
            eax2->f14 = edx22;
            ecx11 = ecx18 - 1;
            eax2->f18 = edx23;
            eax2->f1c = edx24;
            ++eax2;
        } while (ecx11);
        goto addr_4441d3_12;
    }
    addr_4441d6_13:
    eax2 = reinterpret_cast<struct s5*>(&eax2->f10);
    goto addr_4441d9_9;
    addr_4441d3_12:
    eax2 = reinterpret_cast<struct s5*>(reinterpret_cast<int32_t>(eax2) - 16);
    goto addr_4441d6_13;
}

void** g4669dc = reinterpret_cast<void**>(1);

void fun_433480(void** ecx);

void fun_433540(void** ecx, void** a2);

void fun_4338a0(void** ecx) {
    void** edx2;
    int1_t zf3;
    void** esi4;

    edx2 = g4669dc;
    zf3 = edx2 == 0;
    if (zf3 && zf3) {
        ecx = reinterpret_cast<void**>(1);
        fun_42ce70(1, esi4);
        fun_43c290(1, esi4);
        g4669dc = reinterpret_cast<void**>(1);
    }
    fun_433480(ecx);
    fun_433540(ecx, esi4);
    g4669dc = reinterpret_cast<void**>(0);
    return;
}

int32_t g459b08 = 0;

void** g482b70 = reinterpret_cast<void**>(69);

void** g482f00 = reinterpret_cast<void**>(0);

void** fun_418aa0(int32_t ecx, int32_t a2, int32_t a3);

void** fun_418df0(void** ecx) {
    int1_t zf2;
    void** esi3;
    int1_t zf4;
    void** esi5;
    void** esi6;
    void** ebx7;
    signed char* esi8;
    int1_t zf9;
    int1_t zf10;
    void** edx11;
    void** edx12;
    void** edx13;
    int32_t esi14;
    void** eax15;

    zf2 = g459b08 == 0;
    if (!zf2) {
        g459b08 = 0;
    }
    esi3 = g482a7c;
    g482b6c = reinterpret_cast<void**>(0);
    g482b70 = reinterpret_cast<void**>(0);
    g482f00 = reinterpret_cast<void**>(0);
    g482f04 = reinterpret_cast<void**>(0);
    g483004 = reinterpret_cast<void**>(0x482518 + (reinterpret_cast<uint32_t>(esi3 + reinterpret_cast<unsigned char>(esi3) * 8) * 4 - reinterpret_cast<unsigned char>(esi3)) * 8);
    fun_418860(1, 0x482f08, 33, 0x482b6c);
    fun_418690(0x482f08, 33);
    zf4 = g481264 == 0;
    if (zf4) {
        esi5 = g482a80;
        esi6 = esi5 - 1;
        ebx7 = g482a5c;
        esi8 = *reinterpret_cast<signed char**>((reinterpret_cast<uint32_t>(esi6 + reinterpret_cast<unsigned char>(esi6) * 8) + reinterpret_cast<unsigned char>(ebx7)) * 4 + 0x459b08);
    } else {
        zf9 = g48125c == 0;
        if (zf9) {
            zf10 = g48124c == 0;
            if (zf10) {
                edx11 = g482a5c;
                esi8 = *reinterpret_cast<signed char**>("p7E" + reinterpret_cast<unsigned char>(edx11) * 4);
            } else {
                edx12 = g482a5c;
                esi8 = *reinterpret_cast<signed char**>("0=E" + reinterpret_cast<unsigned char>(edx12) * 4);
            }
        } else {
            edx13 = g482a5c;
            esi8 = *reinterpret_cast<signed char**>("l:E" + reinterpret_cast<unsigned char>(edx13) * 4);
        }
    }
    while (*esi8) {
        ++esi8;
        fun_4186c0(0x482f08);
    }
    esi14 = 0x482b78;
    fun_418aa0(0x482f08, 33, 0x482f04);
    do {
        esi14 = esi14 + 0x75;
        eax15 = fun_418aa0(0, 0, 0x459b04);
    } while (!reinterpret_cast<int1_t>(esi14 == "H"));
    g459b08 = 1;
    return eax15;
}

void** fun_425850(void** ecx) {
    void** eax2;
    void** ebp3;
    void** eax4;
    void** edx5;
    void** edi6;
    void** ebp7;
    void** eax8;
    void** eax9;
    void** eax10;

    eax4 = fun_41d460(eax2, ebp3);
    edx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 96)) - (reinterpret_cast<unsigned char>(eax4) & 3));
    *reinterpret_cast<void***>(eax2 + 96) = edx5;
    if (reinterpret_cast<signed char>(edx5) < reinterpret_cast<signed char>(1)) {
        *reinterpret_cast<void***>(eax2 + 96) = reinterpret_cast<void**>(1);
    }
    edi6 = *reinterpret_cast<void***>(eax2 + 16);
    ebp7 = *reinterpret_cast<void***>(eax2 + 20);
    eax8 = *reinterpret_cast<void***>(eax2 + 76);
    *reinterpret_cast<void***>(eax2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 12)) + (reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax2 + 72)) >> 1));
    eax9 = *reinterpret_cast<void***>(eax2 + 80);
    *reinterpret_cast<void***>(eax2 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi6) + (reinterpret_cast<signed char>(eax8) >> 1));
    *reinterpret_cast<void***>(eax2 + 20) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp7) + (reinterpret_cast<signed char>(eax9) >> 1));
    eax10 = fun_4231b0(eax2);
    if (!eax10) {
        eax10 = fun_424b40(eax2);
    }
    return eax10;
}

int32_t g4844ec = 0xca1241c;

struct s301 {
    signed char[74] pad74;
    int32_t f4a;
};

struct s300 {
    signed char[12] pad12;
    struct s301* fc;
};

void** fun_425f60(void** ecx) {
    void** v2;
    void** edx3;
    void** v4;
    void** esi5;
    int32_t ebx6;
    int32_t edx7;
    int32_t eax8;
    struct s300* eax9;
    void** eax10;
    void** eax11;

    v2 = edx3;
    v4 = esi5;
    ebx6 = g4844ec;
    edx7 = 0;
    if (eax8 != ebx6) {
        while (edx7 = edx7 + 4, edx7 < 0x78) {
            if (eax9 == *reinterpret_cast<struct s300**>(edx7 + 0x4844ec)) 
                goto addr_425f70_4;
        }
    } else {
        addr_425f70_4:
        (*reinterpret_cast<struct s300**>(edx7 + 0x4844ec))->fc->f4a = 0;
        eax10 = fun_42af50(ecx);
        *reinterpret_cast<struct s300**>(edx7 + 0x4844ec) = reinterpret_cast<struct s300*>(0);
        return eax10;
    }
    eax11 = fun_43bd40(ecx, "P_RemoveActivePlat: can't find plat!", v4, v2);
    return eax11;
}

struct s302 {
    signed char[8] pad8;
    int32_t f8;
    signed char[24] pad36;
    int32_t f24;
    int32_t f28;
    signed char[4] pad48;
    int32_t f30;
};

void fun_425e70(void** ecx) {
    int32_t ecx2;
    int32_t eax3;
    int32_t eax4;

    ecx2 = eax3;
    eax4 = 0;
    do {
        if (*reinterpret_cast<struct s302**>(eax4 + 0x4844ec) && (ecx2 == (*reinterpret_cast<struct s302**>(eax4 + 0x4844ec))->f30 && (*reinterpret_cast<struct s302**>(eax4 + 0x4844ec))->f24 == 3)) {
            (*reinterpret_cast<struct s302**>(eax4 + 0x4844ec))->f24 = (*reinterpret_cast<struct s302**>(eax4 + 0x4844ec))->f28;
            (*reinterpret_cast<struct s302**>(eax4 + 0x4844ec))->f8 = 0x425ab0;
        }
        eax4 = eax4 + 4;
    } while (eax4 != 0x78);
    return;
}

struct s303 {
    signed char[8] pad8;
    int32_t f8;
    signed char[24] pad36;
    int32_t f24;
    int32_t f28;
    signed char[4] pad48;
    int32_t f30;
};

void** fun_425f20(void** ecx, void** a2) {
    void** v3;
    void** v4;
    void** edx5;
    struct s303* edx6;
    struct s303* eax7;
    int32_t ebx8;
    void** eax9;
    void** eax10;

    v3 = ecx;
    v4 = edx5;
    edx6 = eax7;
    ebx8 = g4844ec;
    eax9 = reinterpret_cast<void**>(0);
    if (ebx8) {
        while (eax9 = eax9 + 4, reinterpret_cast<signed char>(eax9) < reinterpret_cast<signed char>(0x78)) {
            if (!*reinterpret_cast<struct s303**>(eax9 + 0x4844ec)) 
                goto addr_425f31_4;
        }
    } else {
        addr_425f31_4:
        *reinterpret_cast<struct s303**>(eax9 + 0x4844ec) = edx6;
        return eax9;
    }
    eax10 = fun_43bd40(ecx, "P_AddActivePlat: no more plats!", v4, v3);
    return eax10;
}

struct s304 {
    void** f0;
    signed char[77] pad78;
    int32_t f4e;
};

struct s305 {
    signed char[78] pad78;
    int32_t f4e;
};

struct s306 {
    signed char[16] pad16;
    unsigned char f10;
    signed char[29] pad46;
    struct s304* f2e;
    struct s304* f32;
};

struct s307 {
    signed char[82] pad82;
    struct s306** f52;
};

void** fun_427fc0(void** ecx, void** a2) {
    struct s304* ecx3;
    struct s304* eax4;
    void** esi5;
    int32_t edx6;
    struct s305* eax7;
    struct s306** ebx8;
    struct s307* eax9;
    struct s304* eax10;

    ecx3 = eax4;
    esi5 = reinterpret_cast<void**>(0xfe0c0000);
    edx6 = 0;
    if (!(reinterpret_cast<uint1_t>(eax7->f4e < 0) | reinterpret_cast<uint1_t>(eax7->f4e == 0))) {
        ebx8 = eax9->f52;
        do {
            if ((*ebx8)->f10 & 4) {
                if (ecx3 != (*ebx8)->f2e) {
                    eax10 = (*ebx8)->f2e;
                } else {
                    eax10 = (*ebx8)->f32;
                }
            } else {
                eax10 = reinterpret_cast<struct s304*>(0);
            }
            if (eax10 && reinterpret_cast<signed char>(esi5) < reinterpret_cast<signed char>(eax10->f0)) {
                esi5 = eax10->f0;
            }
            ++edx6;
            ++ebx8;
        } while (edx6 < ecx3->f4e);
    }
    return esi5;
}

struct s309 {
    signed char[8] pad8;
    int32_t f8;
    int32_t fc;
    void** f10;
    signed char[3] pad20;
    int32_t f14;
    int32_t f18;
};

struct s308 {
    struct s309* f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
};

struct s310 {
    signed char[244] pad244;
    struct s309* ff4;
};

void** fun_425fc0(void** ecx) {
    void** eax2;
    void** ebx3;
    struct s308* ebx4;
    struct s310* eax5;
    int32_t edx6;
    struct s309* ecx7;

    eax2 = ebx3;
    ebx4 = reinterpret_cast<struct s308*>(reinterpret_cast<int32_t>(&eax5->ff4) + (edx6 << 4));
    if (eax2) {
        while (1) {
            ecx7 = reinterpret_cast<struct s309*>(0x45a184 + reinterpret_cast<unsigned char>(eax2) * 28);
            ebx4->f0 = ecx7;
            ebx4->f4 = ecx7->f8;
            if (ecx7->f14) {
                ebx4->f8 = ecx7->f14 << 16;
                ebx4->fc = ecx7->f18 << 16;
            }
            if (!ecx7->fc) 
                goto addr_42601a_5;
            eax2 = reinterpret_cast<void**>(ecx7->fc());
            if (!ebx4->f0) 
                break;
            addr_42601a_5:
            eax2 = ebx4->f0->f10;
            if (ebx4->f4) 
                break;
            if (!eax2) 
                goto addr_425fd5_8;
        }
    } else {
        addr_425fd5_8:
        ebx4->f0 = reinterpret_cast<struct s309*>(0);
        return eax2;
    }
    return eax2;
}

void** fun_426420(void** ecx);

void** fun_41ed10(void** ecx);

void** fun_4263b0(void** ecx) {
    void** eax2;
    int1_t zf3;
    void** ebx4;
    void** esi5;
    void** edx6;

    eax2 = fun_426420(ecx);
    if (eax2) {
        zf3 = g618240 == 0;
        if (!zf3 && (ebx4 = g482a64, !ebx4)) {
            g618240(3, ebx4, ebx4, ebx4);
        }
        fun_424ae0(ecx, esi5, edx6);
        fun_425fc0(ecx);
        eax2 = fun_41ed10(ecx);
    }
    return eax2;
}

struct s311 {
    signed char[32] pad32;
    void** f20;
};

void** g484570 = reinterpret_cast<void**>(0);

void** fun_426780(void** ecx) {
    void** ecx2;
    struct s311* eax3;
    void** eax4;
    void** edx5;
    void** ecx6;
    void** ebx7;

    ecx2 = eax3->f20;
    eax4 = fun_423b30(ecx2);
    edx5 = g4837b0;
    g484570 = eax4;
    if (!edx5 && (ecx6 = ecx2 + 0x4000000, eax4 = fun_423b30(ecx6), ebx7 = g4837b0, g484570 = eax4, !ebx7)) {
        eax4 = fun_423b30(ecx6);
        g484570 = eax4;
    }
    return eax4;
}

void** fun_4267f0(void** ecx) {
    void** esi2;
    void** eax3;
    void*** edx4;
    void** ecx5;
    int32_t edx6;
    void** ecx7;
    void** eax8;

    eax3 = fun_41d460(ecx, esi2);
    edx4 = reinterpret_cast<void***>(reinterpret_cast<signed char>(eax3) % 3 + 1);
    ecx5 = reinterpret_cast<void**>(edx4 + reinterpret_cast<uint32_t>(edx4) * 4);
    if (!edx6) {
        fun_41d460(ecx5, esi2);
        fun_41d460(ecx5, esi2);
    }
    ecx7 = g484570;
    eax8 = fun_423be0(ecx7, ecx5);
    return eax8;
}

struct s312 {
    signed char[116] pad116;
    int32_t f74;
};

struct s313 {
    signed char[116] pad116;
    int32_t f74;
    signed char[136] pad256;
    int32_t f100;
};

struct s314 {
    signed char[112] pad112;
    int32_t f70;
};

void** fun_426090(void** ecx) {
    struct s312* eax2;
    struct s313* eax3;
    struct s314* eax4;
    void** ebp5;
    int1_t zf6;
    void** edi7;
    int32_t v8;
    void** eax9;

    if (eax2->f74 == 10) {
        eax3->f74 = eax4->f70;
    }
    if (eax3->f74 == 7) {
        fun_4312d0(ecx, ebp5);
    }
    zf6 = g618240 == 0;
    if (!zf6 && (edi7 = g482a64, !edi7)) {
        v8 = eax3->f74;
        g618240(2, v8, edi7, edi7);
    }
    eax3->f74 = 10;
    eax3->f100 = 0x800000;
    eax9 = fun_425fc0(ecx);
    return eax9;
}

void** g487f94 = reinterpret_cast<void**>(0x89);

void** fun_42cf60(void** ecx) {
    void** eax2;
    void** ebx3;
    void* esp4;
    void** ecx5;
    void** v6;
    int32_t v7;
    void** edx8;

    eax2 = fun_434640(ecx);
    ebx3 = eax2;
    if (reinterpret_cast<int1_t>(eax2 == 0xffffffff)) {
        esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 12 - 4 + 4 - 4);
        ecx5 = reinterpret_cast<void**>(2);
        do {
            if (!ecx5) 
                break;
            --ecx5;
        } while (1);
        *reinterpret_cast<unsigned char*>(&ecx5) = 0;
        do {
            if (!ecx5) 
                break;
            --ecx5;
        } while (0);
        fun_43bd40(ecx5, "R_FlatNumForName: %s not found", reinterpret_cast<int32_t>(esp4) + 4, v6, ecx5, "R_FlatNumForName: %s not found", reinterpret_cast<int32_t>(esp4) + 4, v7);
    }
    edx8 = g487f94;
    return reinterpret_cast<unsigned char>(ebx3) - reinterpret_cast<unsigned char>(edx8);
}

struct s315 {
    void** f0;
    signed char[3] pad4;
    int16_t f4;
    int16_t f6;
    unsigned char f8;
};

struct s316 {
    signed char[6] pad6;
    int16_t f6;
};

struct s317 {
    void** f0;
    signed char[3] pad4;
    int16_t f4;
};

struct s318 {
    int16_t f0;
    signed char[2] pad4;
    int16_t f4;
};

struct s319 {
    int16_t f0;
    signed char[2] pad4;
    int16_t f4;
};

struct s320 {
    signed char[8] pad8;
    unsigned char f8;
};

void** fun_425580(void** ecx) {
    void** v2;
    void** ebp3;
    struct s315* ebp4;
    struct s315* eax5;
    struct s316* eax6;
    signed char* edi7;
    signed char* esi8;
    signed char* eax9;
    void** eax10;
    uint32_t ecx11;
    signed char* tmp32_12;
    void*** edx13;
    struct s317* edi14;
    struct s318* edi15;
    struct s319* esi16;
    int1_t zf17;
    void** eax18;
    int1_t zf19;
    struct s320* eax20;
    void** ebx21;
    void** esi22;
    int1_t zf23;
    int1_t zf24;
    void** eax25;
    struct s294* edi26;
    struct s295* edi27;
    struct s319* esi28;
    void** eax29;
    void** v30;
    void** v31;

    v2 = ebp3;
    ebp4 = eax5;
    if (eax6->f6 == 11) {
        edi7 = g484660;
        if (reinterpret_cast<uint32_t>(edi7) < 0x484660) {
            esi8 = eax9;
            eax10 = reinterpret_cast<void**>(10);
            ecx11 = 2;
            do {
                if (!ecx11) 
                    break;
                --ecx11;
                *edi7 = *esi8;
                edi7 = edi7 + 4;
                esi8 = esi8 + 4;
            } while (1);
            *reinterpret_cast<unsigned char*>(&ecx11) = 2;
            do {
                if (!ecx11) 
                    break;
                --ecx11;
                *edi7 = *esi8;
                ++edi7;
                ++esi8;
            } while (1);
            tmp32_12 = g484660 + 10;
            g484660 = tmp32_12;
            goto addr_425752_10;
        }
    }
    if (eax6->f6 <= 4) {
        edx13 = reinterpret_cast<void***>(eax6->f6 + 0xffffffff);
        eax10 = reinterpret_cast<void**>(edx13 + reinterpret_cast<uint32_t>(edx13) * 4);
        edi14 = reinterpret_cast<struct s317*>(reinterpret_cast<unsigned char>(eax10) * 2 + 0x48457c);
        edi14->f0 = ebp4->f0;
        edi15 = reinterpret_cast<struct s318*>(&edi14->f4);
        esi16 = reinterpret_cast<struct s319*>(&ebp4->f4);
        edi15->f0 = esi16->f0;
        edi15->f4 = esi16->f4;
        zf17 = g482a6c == 0;
        if (!zf17) 
            goto addr_425752_10;
        eax18 = fun_425450(ecx);
        return eax18;
    }
    zf19 = g482a84 == 0;
    if (!zf19) 
        goto addr_425617_24;
    if (eax20->f8 & 16) 
        goto addr_425752_10;
    addr_425617_24:
    ebx21 = g482a58;
    if (ebx21) {
        if (!reinterpret_cast<int1_t>(ebx21 == 4)) {
            ecx = ebx21 + 0xffffffff;
            eax10 = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx));
        } else {
            eax10 = ebx21;
        }
    } else {
        eax10 = reinterpret_cast<void**>(1);
    }
    if (!(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(ebp4->f8))) & reinterpret_cast<unsigned char>(eax10))) 
        goto addr_425752_10;
    esi22 = reinterpret_cast<void**>(0);
    eax10 = reinterpret_cast<void**>(0);
    do {
        if (static_cast<int32_t>(ebp4->f6) == *reinterpret_cast<int32_t*>(eax10 + 0x460b48)) 
            break;
        eax10 = eax10 + 92;
        ++esi22;
    } while (reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(0x313c));
    if (reinterpret_cast<int1_t>(esi22 == 0x89)) 
        goto addr_42566a_35;
    addr_425686_36:
    zf23 = g482a6c == 0;
    if (!zf23 && (eax10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi22) * 92), !!(*reinterpret_cast<unsigned char*>(eax10 + 0x460b9f) & 2)) || (zf24 = g48126c == 0, !zf24) && (esi22 == 18 || (eax10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi22) * 92), !!(*reinterpret_cast<unsigned char*>(eax10 + 0x460b9e) & 64)))) {
        addr_425752_10:
        return eax10;
    } else {
        eax25 = fun_425180(esi22);
        edi26 = reinterpret_cast<struct s294*>(eax25 + 0x8c);
        edi26->f0 = ebp4->f0;
        edi27 = reinterpret_cast<struct s295*>(&edi26->f4);
        esi28 = reinterpret_cast<struct s319*>(&ebp4->f4);
        edi27->f0 = esi28->f0;
        edi27->f4 = esi28->f4;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax25 + 96)) > reinterpret_cast<signed char>(0)) 
            goto addr_425707_47;
    }
    addr_42571a_48:
    if (*reinterpret_cast<unsigned char*>(eax25 + 0x6a) & 64) {
        ++g482a70;
    }
    if (*reinterpret_cast<unsigned char*>(eax25 + 0x6a) & 0x80) {
        ++g482a4c;
    }
    eax10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp4->f4 / 45) << 29);
    *reinterpret_cast<void***>(eax25 + 32) = eax10;
    if (ebp4->f8 & 8) {
        *reinterpret_cast<void***>(eax25 + 0x68) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25 + 0x68)) | 32);
        goto addr_425752_10;
    }
    addr_425707_47:
    eax29 = fun_41d460(eax25, v2);
    *reinterpret_cast<void***>(eax25 + 96) = reinterpret_cast<void**>(reinterpret_cast<signed char>(eax29) % reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax25 + 96)) + 1);
    goto addr_42571a_48;
    addr_42566a_35:
    v30 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(ebp4->f0)));
    v31 = reinterpret_cast<void**>(static_cast<int32_t>(ebp4->f6));
    eax10 = fun_43bd40(ecx, "P_SpawnMapThing: Unknown type %i at (%i, %i)", v31, v30, ecx, "P_SpawnMapThing: Unknown type %i at (%i, %i)", v31, v30);
    goto addr_425686_36;
}

struct s321 {
    signed char[12] pad12;
    int32_t fc;
};

struct s322 {
    signed char[8] pad8;
    int32_t f8;
};

struct s323 {
    signed char[12] pad12;
    int32_t fc;
};

struct s324 {
    signed char[4] pad4;
    int32_t f4;
};

struct s325 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_41d4c0(void** ecx) {
    struct s321* eax2;
    struct s322* eax3;
    int32_t* eax4;
    struct s323* eax5;
    struct s324* eax6;
    struct s325* eax7;

    eax2->fc = 0x80000000;
    eax3->f8 = 0x7fffffff;
    *eax4 = eax5->fc;
    eax6->f4 = eax7->f8;
    return;
}

struct s326 {
    signed char[8] pad8;
    int32_t f8;
};

struct s327 {
    signed char[12] pad12;
    int32_t fc;
};

struct s328 {
    signed char[12] pad12;
    int32_t fc;
};

struct s329 {
    signed char[8] pad8;
    int32_t f8;
};

struct s330 {
    signed char[4] pad4;
    int32_t f4;
};

struct s331 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_41d4e0() {
    int32_t edx1;
    struct s326* eax2;
    int32_t edx3;
    struct s327* eax4;
    struct s328* eax5;
    int32_t edx6;
    struct s329* eax7;
    int32_t edx8;
    int32_t ebx9;
    struct s330* eax10;
    int32_t ebx11;
    int32_t* eax12;
    int32_t* eax13;
    int32_t ebx14;
    struct s331* eax15;
    int32_t ebx16;

    if (edx1 >= eax2->f8) {
        if (edx3 > eax4->fc) {
            eax5->fc = edx6;
        }
    } else {
        eax7->f8 = edx8;
    }
    if (ebx9 >= eax10->f4) {
        if (ebx11 > *eax12) {
            *eax13 = ebx14;
        }
        return;
    } else {
        eax15->f4 = ebx16;
        return;
    }
}

void** fun_41af00(void** ecx);

void** fun_41aea0(void** ecx);

int32_t g5f1340 = 0;

void** fun_431a90(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** ebx8;
    void** v9;
    void** v10;
    void** edx11;
    void** v12;
    void** esi13;
    void** v14;
    void** edi15;
    void** v16;
    void** ebp17;
    void** edx18;
    void** esi19;
    void** ecx20;
    void** edx21;
    int32_t* edx22;
    int1_t zf23;
    void** eax24;
    void** ebx25;
    void** ecx26;
    void** esi27;
    void** edi28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** eax38;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ebx8;
    v9 = ecx;
    v10 = edx11;
    v12 = esi13;
    v14 = edi15;
    v16 = ebp17;
    edx18 = g5f1364;
    esi19 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx18) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx18 == 0))) {
        ecx20 = reinterpret_cast<void**>(0);
        do {
            edx21 = g5f22cc;
            edx22 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx21) + reinterpret_cast<unsigned char>(ecx20));
            zf23 = *edx22 == 0;
            if (!zf23 && !zf23) {
                eax24 = fun_41af00(ecx20);
                if (eax24) {
                    fun_41aea0(ecx20);
                }
                *edx22 = 0;
            }
            ebx25 = g5f1364;
            ++esi19;
            ecx20 = ecx20 + 12;
        } while (reinterpret_cast<signed char>(esi19) < reinterpret_cast<signed char>(ebx25));
    }
    ecx26 = reinterpret_cast<void**>(0);
    esi27 = g481264;
    g5f22c0 = reinterpret_cast<void**>(0);
    if (!esi27) {
        ecx26 = reinterpret_cast<void**>(9);
        while (ecx26) {
            --ecx26;
        }
        edi28 = g482a80;
        if (reinterpret_cast<signed char>(edi28) < reinterpret_cast<signed char>(4)) 
            goto addr_431b16_13;
    } else {
        goto addr_431b37_15;
    }
    addr_431b37_15:
    eax38 = fun_430c80(ecx26, v29, v30, v31, v32, v33, v34, v35, v36, v37, v16, v14, v12, v10, v9, v7, v6, a2, a3, a4, a5);
    g5f1340 = 15;
    return eax38;
    addr_431b16_13:
    goto addr_431b37_15;
}

void fun_4376e0(void** ecx) {
    void** ecx2;
    void** eax3;
    void** ebx4;
    void** edx5;
    void** eax6;
    void** eax7;
    void** edx8;
    void** edx9;

    ecx2 = eax3;
    ebx4 = edx5;
    eax6 = g60aff8;
    eax7 = *reinterpret_cast<void***>(eax6 + 20);
    while (edx8 = g60aff8, eax7 != edx8 + 4) {
        edx9 = *reinterpret_cast<void***>(eax7 + 16);
        if (*reinterpret_cast<void***>(eax7 + 4) && (reinterpret_cast<signed char>(ecx2) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax7 + 8)) && reinterpret_cast<signed char>(ebx4) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax7 + 8)))) {
            fun_437550(ecx2);
        }
        eax7 = edx9;
    }
    return;
}

void fun_42af10() {
    g484cfc = reinterpret_cast<void**>("H");
    g484cf8 = reinterpret_cast<void**>("H");
    return;
}

void** g60ae68 = reinterpret_cast<void**>(0);

unsigned char* fun_444203();

void** fun_44430e(void** ecx, void** a2);

void** g60ae6c = reinterpret_cast<void**>(0);

struct s332 {
    void** f0;
    signed char[11] pad12;
    void** fc;
};

void** fun_434470(void** ecx) {
    void** edx2;
    void** v3;
    void** eax4;
    void* esp5;
    void** v6;
    unsigned char* esi7;
    void* v8;
    void* v9;
    unsigned char* eax10;
    void** esp11;
    void** esi12;
    void** esp13;
    void** esp14;
    void** esp15;
    void** edx16;
    void** ecx17;
    void** ebx18;
    void** edx19;
    void* esi20;
    struct s332* edx21;
    void** eax22;
    void** eax23;
    void** esp24;
    void** esp25;
    void** eax26;

    edx2 = g60ae68;
    if (edx2) {
        eax4 = fun_44367f(ecx, edx2, 0x200, v3);
        esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 20 - 4 - 4 - 4 + 4 + 8);
        if (reinterpret_cast<int1_t>(eax4 == 0xffffffff)) {
            ecx = g60ae68;
            fun_43bd40(ecx, "W_Reload: couldn't open %s", ecx, v6);
            esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 + 4 + 8);
        }
        fun_44385a(ecx);
        esi7 = reinterpret_cast<unsigned char*>((reinterpret_cast<uint32_t>(v8) << 4) + 3);
        v9 = v8;
        *reinterpret_cast<uint16_t*>(&esi7) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi7) & 0xfffc);
        eax10 = fun_444203();
        esp11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp5) - 4 + 4 - 4 + 4);
        if (reinterpret_cast<uint32_t>(esi7) >= reinterpret_cast<uint32_t>(eax10)) {
            esi12 = reinterpret_cast<void**>(0);
        } else {
            esp11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esp11) - reinterpret_cast<uint32_t>(esi7));
            esi12 = esp11;
        }
        esp13 = esp11 - 4;
        *reinterpret_cast<void***>(esp13) = reinterpret_cast<void**>(0x4344f5);
        fun_44430e(ecx, *reinterpret_cast<void***>(esp13 + 4));
        esp14 = esp13 + 4 - 4;
        *reinterpret_cast<void***>(esp14) = reinterpret_cast<void**>(0x434501);
        fun_44385a(ecx);
        esp15 = esp14 + 4;
        edx16 = g60ae6c;
        ecx17 = esi12;
        ebx18 = g60ae6c;
        edx19 = g60ae70;
        esi20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx18) * 4);
        edx21 = reinterpret_cast<struct s332*>(edx19 + reinterpret_cast<uint32_t>(edx16 + reinterpret_cast<unsigned char>(edx16) * 4) * 4);
        while (eax22 = g60ae6c, reinterpret_cast<unsigned char>(ebx18) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<uint32_t>(v9))) {
            eax23 = g60ae64;
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax23) + reinterpret_cast<uint32_t>(esi20))) {
                esp24 = esp15 - 4;
                *reinterpret_cast<void***>(esp24) = reinterpret_cast<void**>(0x434544);
                fun_437550(ecx17);
                esp15 = esp24 + 4;
            }
            esi20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi20) + 4);
            ++ebx18;
            edx21->fc = *reinterpret_cast<void***>(ecx17);
            edx21 = reinterpret_cast<struct s332*>(reinterpret_cast<uint32_t>(edx21) + 20);
            ecx17 = ecx17 + 16;
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx21) - 4) = *reinterpret_cast<void***>(ecx17 + 4);
        }
        esp25 = esp15 - 4;
        *reinterpret_cast<void***>(esp25) = reinterpret_cast<void**>(0x43456f);
        eax26 = fun_4439d1(ecx17, *reinterpret_cast<void***>(esp25 + 4), *reinterpret_cast<void***>(esp25 + 8), *reinterpret_cast<void***>(esp25 + 12));
    }
    return eax26;
}

void** g487f8c = reinterpret_cast<void**>(0);

int32_t g487f5c = 0x478802c6;

void** g487f80 = reinterpret_cast<void**>(83);

uint32_t g4845d0 = 0x250f2404;

void** g487f60 = reinterpret_cast<void**>(1);

void** g487f6c = reinterpret_cast<void**>(42);

void** g5f1338 = reinterpret_cast<void**>(0);

void** g487f58 = reinterpret_cast<void**>(0x8a);

struct s333 {
    int32_t f0;
    int32_t f4;
};

struct s334 {
    signed char[4] pad4;
    int16_t f4;
};

void** g487f98 = reinterpret_cast<void**>(72);

void** fun_42d050(void** ecx, void** a2, void** a3) {
    int1_t zf4;
    void** edx5;
    unsigned char* edx6;
    unsigned char* eax7;
    void** esp8;
    void** eax9;
    void** esi10;
    void** esp11;
    void** esp12;
    void** ecx13;
    void** ebx14;
    void* eax15;
    void** edx16;
    void** edi17;
    void** edx18;
    void** ebx19;
    void** ecx20;
    void** eax21;
    void** esi22;
    int32_t esi23;
    void** esp24;
    void** esi25;
    void** edx26;
    unsigned char* edx27;
    void** esp28;
    unsigned char* eax29;
    void** esp30;
    void** eax31;
    void** ecx32;
    void** esp33;
    void** esp34;
    uint32_t edi35;
    uint32_t edx36;
    void* esi37;
    void** eax38;
    uint32_t edi39;
    void** eax40;
    void** ebx41;
    void** v42;
    void** v43;
    void** v44;
    void** eax45;
    void** edi46;
    int32_t ebx47;
    void** ecx48;
    void** esi49;
    void** esi50;
    void** esp51;
    void** edx52;
    void** edi53;
    void** edx54;
    unsigned char* edx55;
    void** esp56;
    unsigned char* eax57;
    void** esp58;
    void** eax59;
    void** ecx60;
    void** esp61;
    void** esp62;
    void** ebx63;
    void** eax64;
    void** v65;
    void** v66;
    void** v67;
    int32_t edi68;
    int32_t v69;
    void** v70;
    void** eax71;
    struct s333* eax72;
    struct s334* esi73;
    struct s334* ebx74;
    struct s334* esi75;
    void** ecx76;
    void** edx77;
    void** ecx78;
    void** ecx79;
    void** esp80;
    void** ebx81;
    void** edx82;

    zf4 = g482a64 == 0;
    if (zf4) {
        edx5 = g487f8c;
        edx6 = reinterpret_cast<unsigned char*>(edx5 + 3);
        *reinterpret_cast<unsigned char*>(&edx6) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx6) & 0xfc);
        eax7 = fun_444203();
        esp8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 32 - 4 + 4);
        if (reinterpret_cast<uint32_t>(edx6) >= reinterpret_cast<uint32_t>(eax7)) {
            eax9 = reinterpret_cast<void**>(0);
        } else {
            esp8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esp8) - reinterpret_cast<uint32_t>(edx6));
            eax9 = esp8;
        }
        esi10 = eax9;
        esp11 = esp8 - 4;
        *reinterpret_cast<void***>(esp11) = reinterpret_cast<void**>(0x42d096);
        fun_442b80(ecx, *reinterpret_cast<void***>(esp11 + 4), *reinterpret_cast<void***>(esp11 + 8), *reinterpret_cast<void***>(esp11 + 12), *reinterpret_cast<void***>(esp11 + 16), *reinterpret_cast<void***>(esp11 + 20));
        esp12 = esp11 + 4;
        ecx13 = g4845ec;
        ebx14 = reinterpret_cast<void**>(0);
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx13) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx13 == 0))) {
            eax15 = reinterpret_cast<void*>(0);
            do {
                edx16 = g4845e0;
                eax15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax15) + 86);
                *reinterpret_cast<signed char*>(*reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(edx16) + reinterpret_cast<uint32_t>(eax15) + 8) + reinterpret_cast<unsigned char>(esi10)) = 1;
                ++ebx14;
                edi17 = g4845ec;
                *reinterpret_cast<signed char*>(*reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(edx16) + reinterpret_cast<uint32_t>(eax15) - 76) + reinterpret_cast<unsigned char>(esi10)) = 1;
            } while (reinterpret_cast<signed char>(ebx14) < reinterpret_cast<signed char>(edi17));
        }
        edx18 = g487f8c;
        ebx19 = reinterpret_cast<void**>(0);
        g487f5c = 0;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx18) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx18 == 0))) {
            ecx20 = esi10;
            do {
                if (*reinterpret_cast<void***>(ecx20)) {
                    eax21 = g487f94;
                    esi22 = g60ae70;
                    esi23 = g487f5c;
                    g487f5c = esi23 + *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esi22 + (reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<unsigned char>(ebx19)) * 20) + 16);
                    esp24 = esp12 - 4;
                    *reinterpret_cast<void***>(esp24) = reinterpret_cast<void**>(0x42d110);
                    fun_4348a0(ecx20, *reinterpret_cast<void***>(esp24 + 4), *reinterpret_cast<void***>(esp24 + 8));
                    esp12 = esp24 + 4;
                }
                esi25 = g487f8c;
                ++ebx19;
                ++ecx20;
            } while (reinterpret_cast<signed char>(ebx19) < reinterpret_cast<signed char>(esi25));
        }
        edx26 = g487f80;
        edx27 = reinterpret_cast<unsigned char*>(edx26 + 3);
        *reinterpret_cast<unsigned char*>(&edx27) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx27) & 0xfc);
        esp28 = esp12 - 4;
        *reinterpret_cast<void***>(esp28) = reinterpret_cast<void**>(0x42d12d);
        eax29 = fun_444203();
        esp30 = esp28 + 4;
        if (reinterpret_cast<uint32_t>(edx27) >= reinterpret_cast<uint32_t>(eax29)) {
            eax31 = reinterpret_cast<void**>(0);
        } else {
            esp30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esp30) - reinterpret_cast<uint32_t>(edx27));
            eax31 = esp30;
        }
        ecx32 = eax31;
        esp33 = esp30 - 4;
        *reinterpret_cast<void***>(esp33) = reinterpret_cast<void**>(0x42d14a);
        fun_442b80(ecx32, *reinterpret_cast<void***>(esp33 + 4), *reinterpret_cast<void***>(esp33 + 8), *reinterpret_cast<void***>(esp33 + 12), *reinterpret_cast<void***>(esp33 + 16), *reinterpret_cast<void***>(esp33 + 20));
        esp34 = esp33 + 4;
        edi35 = g4845d0;
        edx36 = 0;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edi35) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edi35 == 0))) {
            esi37 = reinterpret_cast<void*>(0);
            do {
                eax38 = g4845d4;
                *reinterpret_cast<signed char*>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esi37) + reinterpret_cast<unsigned char>(eax38) + 8) + reinterpret_cast<unsigned char>(ecx32)) = 1;
                esi37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi37) + 18);
                *reinterpret_cast<signed char*>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esi37) + reinterpret_cast<unsigned char>(eax38) + 12) + reinterpret_cast<unsigned char>(ecx32)) = 1;
                ++edx36;
                edi39 = g4845d0;
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx32) + static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(esi37) + reinterpret_cast<unsigned char>(eax38) - 8))) = 1;
            } while (reinterpret_cast<int32_t>(edx36) < reinterpret_cast<int32_t>(edi39));
        }
        eax40 = g5ee6e0;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx32) + reinterpret_cast<unsigned char>(eax40)) = 1;
        ebx41 = g487f80;
        g487f60 = reinterpret_cast<void**>(0);
        v42 = reinterpret_cast<void**>(0);
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx41) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx41 == 0))) {
            v43 = ecx32;
            v44 = reinterpret_cast<void**>(0);
            do {
                if (*reinterpret_cast<void***>(v43)) {
                    eax45 = g487f6c;
                    edi46 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax45) + reinterpret_cast<unsigned char>(v44));
                    ebx47 = 0;
                    ecx48 = edi46;
                    while (ebx47 < static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(edi46 + 12)))) {
                        esi49 = g60ae70;
                        ecx48 = ecx48 + 12;
                        esi50 = g487f60;
                        ++ebx47;
                        g487f60 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi50) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi49 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx48 + 22)) * 20) + 16)));
                        esp51 = esp34 - 4;
                        *reinterpret_cast<void***>(esp51) = reinterpret_cast<void**>(0x42d1f5);
                        fun_4348a0(ecx48, *reinterpret_cast<void***>(esp51 + 4), *reinterpret_cast<void***>(esp51 + 8));
                        esp34 = esp51 + 4;
                    }
                }
                edx52 = g487f80;
                edi53 = v42 + 1;
                ++v43;
                v44 = v44 + 4;
                v42 = edi53;
            } while (reinterpret_cast<signed char>(edi53) < reinterpret_cast<signed char>(edx52));
        }
        edx54 = g5f1338;
        edx55 = reinterpret_cast<unsigned char*>(edx54 + 3);
        *reinterpret_cast<unsigned char*>(&edx55) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx55) & 0xfc);
        esp56 = esp34 - 4;
        *reinterpret_cast<void***>(esp56) = reinterpret_cast<void**>(0x42d22f);
        eax57 = fun_444203();
        esp58 = esp56 + 4;
        if (reinterpret_cast<uint32_t>(edx55) >= reinterpret_cast<uint32_t>(eax57)) {
            eax59 = reinterpret_cast<void**>(0);
        } else {
            esp58 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esp58) - reinterpret_cast<uint32_t>(edx55));
            eax59 = esp58;
        }
        ecx60 = eax59;
        esp61 = esp58 - 4;
        *reinterpret_cast<void***>(esp61) = reinterpret_cast<void**>(0x42d24c);
        fun_442b80(ecx60, *reinterpret_cast<void***>(esp61 + 4), *reinterpret_cast<void***>(esp61 + 8), *reinterpret_cast<void***>(esp61 + 12), *reinterpret_cast<void***>(esp61 + 16), *reinterpret_cast<void***>(esp61 + 20));
        esp62 = esp61 + 4;
        ebx63 = g484cfc;
        if (ebx63 != "H") {
            do {
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx63 + 8) == 0x4250d0)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx60) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx63 + 36))) = 1;
                }
                ebx63 = *reinterpret_cast<void***>(ebx63 + 4);
            } while (!reinterpret_cast<int1_t>(ebx63 == "H"));
        }
        eax64 = g5f1338;
        g487f58 = reinterpret_cast<void**>(0);
        v65 = reinterpret_cast<void**>(0);
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax64) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax64 == 0))) {
            v66 = ecx60;
            v67 = reinterpret_cast<void**>(0);
            do {
                if (*reinterpret_cast<void***>(v66)) {
                    edi68 = 0;
                    v69 = 0;
                    v70 = v67;
                    while (eax71 = g5f133c, eax72 = reinterpret_cast<struct s333*>(reinterpret_cast<unsigned char>(eax71) + reinterpret_cast<unsigned char>(v70)), v69 < eax72->f0) {
                        esi73 = reinterpret_cast<struct s334*>(eax72->f4 + edi68);
                        ebx74 = esi73;
                        esi75 = reinterpret_cast<struct s334*>(reinterpret_cast<int32_t>(esi73) + 16);
                        do {
                            ecx76 = g487f98;
                            edx77 = g60ae70;
                            ecx78 = g487f58;
                            ebx74 = reinterpret_cast<struct s334*>(reinterpret_cast<int32_t>(ebx74) + 2);
                            ecx79 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx78) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx77 + (ebx74->f4 + reinterpret_cast<unsigned char>(ecx76)) * 20) + 16)));
                            g487f58 = ecx79;
                            esp80 = esp62 - 4;
                            *reinterpret_cast<void***>(esp80) = reinterpret_cast<void**>(0x42d2e8);
                            fun_4348a0(ecx79, 0, 0);
                            esp62 = esp80 + 4;
                        } while (ebx74 != esi75);
                        edi68 = edi68 + 28;
                        ++v69;
                    }
                }
                ebx81 = g5f1338;
                eax64 = v67 + 8;
                edx82 = v65 + 1;
                ++v66;
                v67 = eax64;
                v65 = edx82;
            } while (reinterpret_cast<signed char>(edx82) < reinterpret_cast<signed char>(ebx81));
        }
    }
    return eax64;
}

struct s335 {
    signed char[8] pad8;
    int32_t f8;
};

struct s336 {
    signed char[12] pad12;
    int32_t fc;
};

struct s337 {
    signed char[8] pad8;
    int32_t f8;
};

struct s338 {
    signed char[4] pad4;
    int32_t f4;
};

struct s339 {
    signed char[4] pad4;
    int32_t f4;
};

struct s340 {
    signed char[8] pad8;
    int32_t f8;
};

struct s341 {
    signed char[8] pad8;
    int32_t f8;
};

struct s342 {
    signed char[12] pad12;
    int32_t fc;
};

struct s343 {
    signed char[12] pad12;
    int32_t fc;
};

void** fun_427930(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    struct s335* ebx6;
    struct s336* ebx7;
    int32_t edx8;
    int32_t eax9;
    int32_t* ebx10;
    int32_t eax11;
    struct s337* ebx12;
    int32_t edx13;
    struct s338* ebx14;
    int32_t eax15;
    struct s339* ebx16;
    int32_t edx17;
    uint32_t eax18;
    struct s340* ebx19;
    uint32_t eax20;
    struct s341* ebx21;
    int32_t eax22;
    int32_t* ebx23;
    int32_t eax24;
    uint32_t eax25;
    struct s342* ebx26;
    uint32_t eax27;
    struct s343* ebx28;

    if (ebx6->f8) {
        if (ebx7->fc) {
            edx8 = (ebx7->fc >> 16) * (eax9 - *ebx10 >> 16);
            eax11 = (ebx12->f8 >> 16) * (edx13 - ebx14->f4 >> 16);
            if (eax11 >= edx8) {
                if (edx8 != eax11) {
                    return 1;
                } else {
                    return 2;
                }
            } else {
                return 0;
            }
        } else {
            if (eax15 != ebx16->f4) {
                if (edx17 > ebx16->f4) {
                    *reinterpret_cast<unsigned char*>(&eax18) = reinterpret_cast<uint1_t>(ebx19->f8 > 0);
                    return eax18 & 0xff;
                } else {
                    *reinterpret_cast<unsigned char*>(&eax20) = reinterpret_cast<uint1_t>(ebx21->f8 < 0);
                    return eax20 & 0xff;
                }
            } else {
                return 2;
            }
        }
    } else {
        if (eax22 != *ebx23) {
            if (eax24 > *ebx23) {
                *reinterpret_cast<unsigned char*>(&eax25) = reinterpret_cast<uint1_t>(ebx26->fc < 0);
                return eax25 & 0xff;
            } else {
                *reinterpret_cast<unsigned char*>(&eax27) = reinterpret_cast<uint1_t>(ebx28->fc > 0);
                return eax27 & 0xff;
            }
        } else {
            return 2;
        }
    }
}

struct s344 {
    void** f0;
    signed char[3] pad4;
    int16_t f4;
    int16_t f6;
};

void** g4845e8 = reinterpret_cast<void**>(0xf8);

struct s347 {
    void* f0;
    void* f4;
};

struct s346 {
    void** f0;
    signed char[3] pad4;
    struct s347* f4;
    signed char[8] pad16;
    unsigned char f10;
    signed char[37] pad54;
    int32_t f36;
};

struct s348 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s345 {
    void** f0;
    signed char[19] pad20;
    struct s346* f14;
    struct s348* f18;
    void** f1c;
};

void** fun_4279f0(void** ecx, void** a2, void** a3, void** a4, void** a5);

void** fun_427a60(void** ecx) {
    void** eax2;
    struct s344* eax3;
    int32_t eax4;
    int32_t edx5;
    void** eax6;
    void* edi7;
    int32_t v8;
    struct s345* edi9;
    void** eax10;
    struct s346* esi11;
    int32_t ebp12;
    void** ecx13;
    struct s347* ebp14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** eax19;
    void** eax20;
    void** eax21;
    void** eax22;
    int32_t ebx23;
    struct s348* ebx24;
    void** ecx25;
    void** ebp26;
    void** esi27;
    void** edx28;
    void** eax29;
    int1_t less_or_equal30;
    void** eax31;
    int1_t less32;
    void** eax33;
    int1_t less_or_equal34;

    eax2 = g4845dc;
    eax3 = reinterpret_cast<struct s344*>(eax2 + eax4 * 8);
    edx5 = eax3->f4;
    eax6 = g4845e8;
    edi7 = reinterpret_cast<void*>(static_cast<int32_t>(eax3->f6) << 5);
    v8 = edx5;
    edi9 = reinterpret_cast<struct s345*>(reinterpret_cast<int32_t>(edi7) + reinterpret_cast<unsigned char>(eax6));
    if (!edx5) {
        addr_427c01_2:
        eax10 = reinterpret_cast<void**>(1);
    } else {
        while (1) {
            esi11 = edi9->f14;
            ebp12 = g4654c4;
            if (ebp12 == esi11->f36 || ((ecx13 = esi11->f0, esi11->f36 = ebp12, ebp14 = esi11->f4, eax19 = fun_427930(ecx13, v15, v16, v17, v18), eax20 = fun_427930(ecx13, v15, v16, v17, v18), eax20 == eax19) || (v15 = *reinterpret_cast<void***>(ecx13), v16 = *reinterpret_cast<void***>(ecx13 + 4), v17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp14->f0) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx13))), v18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp14->f4) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx13 + 4))), eax21 = fun_427930(ecx13, v15, v16, v17, v18), eax22 = fun_427930(eax21, v15, v16, v17, v18), eax21 == eax22))) {
                addr_427bef_4:
                edi9 = reinterpret_cast<struct s345*>(reinterpret_cast<uint32_t>(edi9) + 32);
                ebx23 = v8 - 1;
                v8 = ebx23;
                if (ebx23) 
                    continue; else 
                    goto addr_427c01_2;
            } else {
                if (!(esi11->f10 & 4)) 
                    goto addr_427b33_6;
                ebx24 = edi9->f18;
                ecx25 = edi9->f1c;
                if (ebx24->f0 != *reinterpret_cast<void***>(ecx25)) 
                    goto addr_427b52_8;
                if (ebx24->f4 == *reinterpret_cast<void***>(ecx25 + 4)) 
                    goto addr_427bef_4;
            }
            addr_427b52_8:
            ebp26 = *reinterpret_cast<void***>(ecx25 + 4);
            if (reinterpret_cast<signed char>(ebx24->f4) < reinterpret_cast<signed char>(ebp26)) {
                ebp26 = ebx24->f4;
            }
            if (reinterpret_cast<signed char>(ebx24->f0) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx25))) {
                esi27 = *reinterpret_cast<void***>(ecx25);
            } else {
                esi27 = ebx24->f0;
            }
            if (reinterpret_cast<signed char>(esi27) >= reinterpret_cast<signed char>(ebp26)) 
                goto addr_427b70_15;
            fun_4279f0(ecx25, v15, v16, v17, v18);
            edx28 = ebx24->f0;
            if (edx28 != *reinterpret_cast<void***>(ecx25) && (eax29 = fun_411d60(ecx25, v15, v16, v17, v18), less_or_equal30 = reinterpret_cast<signed char>(eax29) <= reinterpret_cast<signed char>(g484684), !less_or_equal30)) {
                g484684 = eax29;
            }
            if (ebx24->f4 != *reinterpret_cast<void***>(ecx25 + 4) && (eax31 = fun_411d60(ecx25, v15, v16, v17, v18), less32 = reinterpret_cast<signed char>(eax31) < reinterpret_cast<signed char>(g48468c), less32)) {
                g48468c = eax31;
            }
            eax33 = g48468c;
            less_or_equal34 = reinterpret_cast<signed char>(eax33) <= reinterpret_cast<signed char>(g484684);
            if (!less_or_equal34) 
                goto addr_427bef_4; else 
                goto addr_427be3_21;
        }
    }
    addr_427c06_22:
    return eax10;
    addr_427b33_6:
    eax10 = reinterpret_cast<void**>(0);
    goto addr_427c06_22;
    addr_427b70_15:
    return 0;
    addr_427be3_21:
    return 0;
}

void** fun_427c10(void** ecx) {
    void** v2;
    void** ebx3;
    void** v4;
    void** v5;
    void** edx6;
    void** v7;
    void** esi8;
    unsigned char ah9;
    void** ecx10;
    uint32_t eax11;
    void** eax12;
    void** esi13;
    void** eax14;
    void** eax15;
    void** eax16;
    void** eax17;

    v2 = ebx3;
    v4 = ecx;
    v5 = edx6;
    v7 = esi8;
    if (!(ah9 & 0x80)) {
        while (1) {
            ecx10 = g4845c4;
            ecx = ecx10 + eax11 * 52;
            eax12 = fun_427930(ecx, v7, v5, v4, v2);
            esi13 = eax12;
            if (reinterpret_cast<int1_t>(eax12 == 2)) {
                esi13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi13) ^ reinterpret_cast<unsigned char>(eax12));
            }
            eax14 = fun_427c10(ecx);
            if (!eax14) 
                break;
            eax15 = fun_427930(ecx, v7, v5, v4, v2);
            if (esi13 == eax15) 
                goto addr_427c86_6;
            *reinterpret_cast<uint16_t*>(&esi13) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&esi13) ^ 1);
            *reinterpret_cast<int16_t*>(&eax15) = *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(ecx + reinterpret_cast<unsigned char>(esi13) * 2) + 48);
            eax11 = reinterpret_cast<unsigned char>(eax15) & 0xffff;
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax11) + 1) & 0x80) 
                goto addr_427c19_8;
        }
    } else {
        addr_427c19_8:
        if (1) {
            eax16 = fun_427a60(ecx);
            return eax16;
        } else {
            eax17 = fun_427a60(ecx);
            return eax17;
        }
    }
    return eax14;
    addr_427c86_6:
    return 1;
}

uint32_t fun_444232(void** ecx);

void** fun_42cfc0(void** ecx) {
    signed char* eax2;
    void** edx3;
    void** ecx4;
    void** eax5;
    uint32_t eax6;
    void** ebx7;

    if (*eax2 != 45) {
        edx3 = g487f80;
        ecx4 = reinterpret_cast<void**>(0);
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx3) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx3 == 0)) {
            addr_42d00c_3:
            eax5 = reinterpret_cast<void**>(0xffffffff);
        } else {
            do {
                eax6 = fun_444232(ecx4);
                if (!eax6) 
                    goto addr_42cff6_6;
                ebx7 = g487f80;
                ++ecx4;
            } while (reinterpret_cast<signed char>(ecx4) < reinterpret_cast<signed char>(ebx7));
            goto addr_42d00c_3;
        }
    } else {
        eax5 = reinterpret_cast<void**>(0);
    }
    return eax5;
    addr_42cff6_6:
    return ecx4;
}

struct s350 {
    signed char[16] pad16;
    int32_t f10;
    int32_t f14;
};

struct s349 {
    signed char[12] pad12;
    void** fc;
    signed char[7] pad20;
    int32_t f14;
    signed char[8] pad32;
    void** f20;
    signed char[23] pad56;
    int32_t f38;
    signed char[12] pad72;
    int32_t f48;
    int32_t f4c;
    int32_t f50;
    signed char[40] pad124;
    int32_t f7c;
    signed char[4] pad132;
    struct s350* f84;
};

struct s351 {
    signed char[106] pad106;
    unsigned char f6a;
};

struct s352 {
    signed char[20] pad20;
    int16_t f14;
};

void** fun_429e30(void** ecx) {
    struct s349* v2;
    struct s349* ebx3;
    struct s351* ebx4;
    int32_t edx5;
    void** edx6;
    void** ecx7;
    int32_t v8;
    struct s352* eax9;
    void* edi10;
    void* ebp11;
    void** eax12;
    void** ebx13;
    void** eax14;
    void* edx15;
    void** v16;
    void** eax17;
    void** eax18;
    int32_t eax19;

    v2 = ebx3;
    if (ebx4->f6a & 1 || (edx5 == 1 || (edx6 = g4845ec, ecx7 = reinterpret_cast<void**>(0), v8 = eax9->f14, reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx6) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx6 == 0)))) {
        addr_42a003_2:
        return 0;
    } else {
        edi10 = reinterpret_cast<void*>(0);
        ebp11 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx6) * 86);
        do {
            eax12 = g4845e0;
            if (static_cast<int32_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edi10) + reinterpret_cast<unsigned char>(eax12) + 16)) == v8 && (ebx13 = g484cfc, ebx13 != "H")) {
                do {
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx13 + 8) == 0x4250d0)) 
                        continue;
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx13 + 88) == 41)) 
                        continue;
                    eax14 = g4845e0;
                    edx15 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ebx13 + 52))) - reinterpret_cast<unsigned char>(eax14));
                    if (reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(edx15) / 86 == ecx7)) 
                        goto addr_429ed3_8;
                    ebx13 = *reinterpret_cast<void***>(ebx13 + 4);
                } while (!reinterpret_cast<int1_t>(ebx13 == "H"));
            }
            edi10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi10) + 86);
            ++ecx7;
        } while (reinterpret_cast<int32_t>(edi10) < reinterpret_cast<int32_t>(ebp11));
        goto addr_42a003_2;
    }
    addr_429ed3_8:
    v16 = v2->fc;
    eax17 = fun_422ba0(ecx7);
    if (eax17) {
        v2->f14 = v2->f38;
        if (v2->f84) {
            v2->f84->f10 = v2->f14 + v2->f84->f14;
        }
        fun_425180(39);
        fun_4312d0(39, v16);
        fun_425180(39);
        fun_4312d0(39, v16);
        if (v2->f84) {
            v2->f7c = 18;
        }
        eax18 = *reinterpret_cast<void***>(ebx13 + 32);
        v2->f50 = 0;
        v2->f20 = eax18;
        eax19 = v2->f50;
        v2->f4c = eax19;
        v2->f48 = eax19;
        return 1;
    }
}

void** fun_440190(void** ecx) {
    void* esp2;
    int32_t ebx3;
    int32_t eax4;
    void* esp5;
    int1_t zf6;
    int32_t ebx7;
    int32_t eax8;
    void** esp9;
    void* v10;
    void* v11;
    void* v12;
    int32_t v13;
    int1_t zf14;
    int32_t edx15;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 40);
    ebx3 = 0;
    eax4 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001));
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 4 + 4);
    if (!eax4) {
        RegQueryValueExA(reinterpret_cast<int32_t>(esp2) + 8, "timer");
        RegCloseKey(0, reinterpret_cast<int32_t>(esp2) + 8, "timer");
        esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4);
        if (1) {
            ebx3 = 0;
        } else {
            ebx3 = 1;
        }
    }
    zf6 = ebx3 == 0;
    if (zf6) {
    }
    if (zf6) {
        addr_440295_8:
    } else {
        ebx7 = 0;
        eax8 = reinterpret_cast<int32_t>(RegOpenKeyA());
        esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 + 4);
        if (!eax8) {
            esp9 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp5) - 4);
            v10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) + 36);
            v11 = reinterpret_cast<void*>(esp9 + 9);
            v12 = reinterpret_cast<void*>(esp9 - 1 + 9);
            RegQueryValueExA(v13, "timervalue", 0, v12, v11, v10);
            RegCloseKey(0x80000001, v13, "timervalue", 0, v12, v11, v10);
            if (1) {
                ebx7 = 0;
            } else {
                ebx7 = 1;
            }
        }
        zf14 = ebx7 == 0;
        if (zf14) {
        }
        if (zf14) 
            goto addr_440295_8; else 
            goto addr_440290_16;
    }
    addr_440297_17:
    goto edx15;
    addr_440290_16:
    goto addr_440297_17;
}

struct s353 {
    signed char[22] pad22;
    int16_t f16;
    signed char[22] pad46;
    int32_t f2e;
};

int32_t g484bbc = 0x81d8b00;

void** fun_429250(void** ecx) {
    void** v2;
    void** esi3;
    void** v4;
    void** edi5;
    struct s353* esi6;
    struct s353* eax7;
    void** eax8;
    int32_t edi9;
    void** eax10;
    uint32_t edx11;
    int16_t ebx12;

    v2 = esi3;
    v4 = edi5;
    esi6 = eax7;
    eax8 = reinterpret_cast<void**>(0);
    do {
        if (!*reinterpret_cast<void***>(eax8 + 0x484bbc)) 
            continue;
        if (esi6 == *reinterpret_cast<struct s353**>(eax8 + 0x484bb0)) 
            break;
        eax8 = eax8 + 20;
    } while (reinterpret_cast<signed char>(eax8) < reinterpret_cast<signed char>(0x140));
    goto addr_429271_5;
    addr_4292c6_6:
    return eax8;
    addr_429271_5:
    edi9 = g484bbc;
    eax10 = reinterpret_cast<void**>(0);
    if (edi9) {
        while (eax10 = eax10 + 20, reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(0x140)) {
            if (!*reinterpret_cast<void***>(eax10 + 0x484bbc)) 
                goto addr_42927d_9;
        }
    } else {
        addr_42927d_9:
        *reinterpret_cast<struct s353**>(eax10 + 0x484bb0) = esi6;
        *reinterpret_cast<uint32_t*>(eax10 + 0x484bb4) = edx11;
        *reinterpret_cast<int16_t*>(eax10 + 0x484bb8) = ebx12;
        *reinterpret_cast<void***>(eax10 + 0x484bbc) = ecx;
        *reinterpret_cast<int32_t*>(eax10 + 0x484bc0) = esi6->f2e + 42;
        return eax10;
    }
    eax8 = fun_43bd40(ecx, "P_StartButton: no button slots left!", v4, v2);
    goto addr_4292c6_6;
}

struct s354 {
    signed char[18] pad18;
    int16_t f12;
    signed char[2] pad22;
    int16_t f16;
};

struct s355 {
    signed char[18] pad18;
    int16_t f12;
};

struct s356 {
    signed char[8] pad8;
    int16_t f8;
    int16_t fa;
    int16_t fc;
};

void* g484cf0 = reinterpret_cast<void*>(0x481408);

struct s357 {
    signed char[8] pad8;
    int16_t f8;
};

struct s358 {
    signed char[12] pad12;
    int16_t fc;
};

struct s359 {
    signed char[10] pad10;
    int16_t fa;
};

void** fun_4292d0(void** ecx) {
    struct s354* v2;
    struct s354* eax3;
    void** v4;
    void** edx5;
    int32_t edx6;
    struct s355* eax7;
    void* edx8;
    void* eax9;
    void** edi10;
    struct s356* edi11;
    int32_t eax12;
    int32_t v13;
    int32_t ebp14;
    int32_t edi15;
    void* esi16;
    void** eax17;
    void** esi18;
    int32_t ebx19;
    void** edx20;
    void** ecx21;
    void* edx22;
    void* edx23;
    struct s357* edx24;
    void* edx25;
    void* edx26;
    struct s358* edx27;
    void** eax28;
    void* edx29;
    void* eax30;
    void** edx31;
    struct s359* edx32;
    void** eax33;

    v2 = eax3;
    v4 = edx5;
    if (!edx6) {
        eax7->f12 = 0;
    }
    edx8 = reinterpret_cast<void*>(static_cast<int32_t>(v2->f16));
    eax9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx8) * 8 + reinterpret_cast<int32_t>(edx8));
    edi10 = g4845d4;
    edi11 = reinterpret_cast<struct s356*>(reinterpret_cast<unsigned char>(edi10) + (reinterpret_cast<int32_t>(eax9) + reinterpret_cast<int32_t>(eax9)));
    eax12 = edi11->fc;
    v13 = eax12;
    ebp14 = edi11->f8;
    edi15 = edi11->fa;
    if (v2->f12 == 11) {
    }
    esi16 = g484cf0;
    eax17 = reinterpret_cast<void**>(0);
    esi18 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi16) + reinterpret_cast<uint32_t>(esi16));
    ebx19 = 0;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi18) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi18 == 0)) {
        addr_429489_6:
        return eax17;
    } else {
        do {
            edx20 = eax17;
            *reinterpret_cast<unsigned char*>(&edx20) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx20) ^ 1);
            ecx21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx20) * 4);
            if (ebp14 == *reinterpret_cast<int32_t*>(ebx19 + 0x484a20)) 
                break;
            if (*reinterpret_cast<int32_t*>(ebx19 + 0x484a20) == v13) 
                goto addr_4293bc_9;
            if (edi15 == *reinterpret_cast<int32_t*>(ebx19 + 0x484a20)) 
                goto addr_429420_11;
            ++eax17;
            ebx19 = ebx19 + 4;
        } while (reinterpret_cast<signed char>(eax17) < reinterpret_cast<signed char>(esi18));
        goto addr_429489_6;
    }
    fun_4312d0(ecx21, v4);
    edx22 = reinterpret_cast<void*>(static_cast<int32_t>(v2->f16));
    edx23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx22) + reinterpret_cast<int32_t>(edx22) * 8);
    eax17 = g4845d4;
    edx24 = reinterpret_cast<struct s357*>(reinterpret_cast<int32_t>(edx23) + reinterpret_cast<int32_t>(edx23) + reinterpret_cast<unsigned char>(eax17));
    *reinterpret_cast<int16_t*>(&eax17) = *reinterpret_cast<int16_t*>(ecx21 + 0x484a20);
    edx24->f8 = *reinterpret_cast<int16_t*>(&eax17);
    if (v4) {
        eax17 = fun_429250(35);
        goto addr_429489_6;
    }
    addr_4293bc_9:
    fun_4312d0(ecx21, v4);
    edx25 = reinterpret_cast<void*>(static_cast<int32_t>(v2->f16));
    edx26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx25) + reinterpret_cast<int32_t>(edx25) * 8);
    eax17 = g4845d4;
    edx27 = reinterpret_cast<struct s358*>(reinterpret_cast<int32_t>(edx26) + reinterpret_cast<int32_t>(edx26) + reinterpret_cast<unsigned char>(eax17));
    *reinterpret_cast<int16_t*>(&eax17) = *reinterpret_cast<int16_t*>(ecx21 + 0x484a20);
    edx27->fc = *reinterpret_cast<int16_t*>(&eax17);
    if (v4) {
        eax28 = fun_429250(35);
        return eax28;
    }
    addr_429420_11:
    fun_4312d0(ecx21, v4);
    edx29 = reinterpret_cast<void*>(static_cast<int32_t>(v2->f16));
    eax30 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx29) * 8 + reinterpret_cast<uint32_t>(edx29));
    edx31 = g4845d4;
    eax17 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax30) + reinterpret_cast<uint32_t>(eax30));
    edx32 = reinterpret_cast<struct s359*>(reinterpret_cast<unsigned char>(edx31) + reinterpret_cast<unsigned char>(eax17));
    *reinterpret_cast<int16_t*>(&eax17) = *reinterpret_cast<int16_t*>(ecx21 + 0x484a20);
    edx32->fa = *reinterpret_cast<int16_t*>(&eax17);
    if (v4) {
        eax33 = fun_429250(35);
        return eax33;
    }
}

struct s360 {
    signed char[196] pad196;
    unsigned char fc4;
};

struct s362 {
    signed char[52] pad52;
    void*** f34;
    signed char[48] pad104;
    unsigned char f68;
    unsigned char f69;
    unsigned char f6a;
    signed char[17] pad124;
    void** f7c;
};

struct s361 {
    struct s362* f0;
    int32_t f4;
    signed char f8;
    signed char[35] pad44;
    unsigned char f2c;
    signed char[3] pad48;
    int32_t f30;
    int32_t f34;
    int32_t f38;
    signed char[4] pad64;
    unsigned char f40;
    signed char[47] pad112;
    int32_t f70;
    int32_t f74;
    signed char[28] pad148;
    int32_t f94;
    int32_t f98;
    signed char[36] pad192;
    int32_t fc0;
    signed char[24] pad220;
    int32_t fdc;
    int32_t fe0;
    signed char[8] pad236;
    unsigned char fec;
};

struct s363 {
    signed char f0;
    signed char f1;
    int16_t f2;
    signed char[3] pad7;
    unsigned char f7;
};

void** fun_42b1d0(void** ecx);

void fun_42b090(void** ecx);

void** g46532c = reinterpret_cast<void**>(0xff);

void** fun_423cd0(void** ecx);

void** fun_426c00(void** ecx);

void fun_42b2e0(void** ecx);

void fun_42b3d0(void** ecx) {
    struct s360* eax2;
    struct s361* eax3;
    struct s363* esi4;
    void** ecx5;
    int1_t zf6;
    int1_t zf7;
    void** dx8;
    void** eax9;
    int32_t eax10;
    int32_t edx11;
    int1_t zf12;
    int1_t zf13;
    int32_t ecx14;

    if (!(eax2->fc4 & 1)) {
        eax3->f0->f69 = reinterpret_cast<unsigned char>(eax3->f0->f69 & 0xef);
    } else {
        eax3->f0->f69 = reinterpret_cast<unsigned char>(eax3->f0->f69 | 16);
    }
    *reinterpret_cast<unsigned char*>(&ecx) = eax3->f0->f68;
    esi4 = reinterpret_cast<struct s363*>(&eax3->f8);
    if (*reinterpret_cast<unsigned char*>(&ecx) & 0x80) {
        esi4->f2 = 0;
        esi4->f0 = 100;
        esi4->f1 = 0;
        eax3->f0->f68 = reinterpret_cast<unsigned char>(eax3->f0->f68 & 0x7f);
    }
    if (eax3->f4 != 1) {
        ecx5 = eax3->f0->f7c;
        if (!ecx5) {
            fun_42b1d0(ecx5);
        } else {
            eax3->f0->f7c = ecx5 + 0xffffffff;
        }
        fun_42b090(ecx5);
        zf6 = g618240 == 0;
        if (!zf6 && ((zf7 = g482a64 == 0, zf7) && (ecx5 = g46532c, dx8 = *reinterpret_cast<void***>(*eax3->f0->f34 + 14), dx8 != ecx5))) {
            g46532c = dx8;
            g618240(7, static_cast<int32_t>(reinterpret_cast<int16_t>(dx8)), 0, 0);
        }
        eax9 = *eax3->f0->f34;
        if (*reinterpret_cast<void***>(eax9 + 14)) {
            eax9 = fun_428aa0(ecx5);
        }
        if (esi4->f7 & 0x80) {
            esi4->f7 = 0;
        }
        *reinterpret_cast<unsigned char*>(&eax9 + 1) = esi4->f7;
        if (*reinterpret_cast<unsigned char*>(&eax9 + 1) & 4) {
            *reinterpret_cast<unsigned char*>(&eax9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax9 + 1) & 56);
            eax10 = reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax9) & 0xff) >> 3;
            if (!eax10 && eax3->f94) {
                if (eax3->f70 != 7 || !eax3->f30) {
                    edx11 = 1;
                } else {
                    edx11 = 0;
                }
                if (edx11) {
                    eax10 = 7;
                }
            }
            zf12 = g481264 == 0;
            if (!zf12 && (eax10 == 2 && (eax3->f98 && eax3->f70 != 8))) {
                eax10 = 8;
            }
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax3) + eax10 * 4 + 0x78) && (eax10 != eax3->f70 && (eax10 != 5 && eax10 != 6 || (zf13 = g481250 == 0, zf13)))) {
                eax3->f74 = eax10;
            }
        }
        if (!(esi4->f7 & 2)) {
            eax3->fc0 = 0;
        } else {
            if (!eax3->fc0) {
                fun_423cd0(ecx5);
                eax3->fc0 = 1;
            }
        }
        fun_426c00(ecx5);
        if (eax3->f30) {
            eax3->f30 = eax3->f30 + 1;
        }
        if (eax3->f2c) {
            eax3->f2c = reinterpret_cast<unsigned char>(eax3->f2c + 0xffffffff);
        }
        if (eax3->f34 && (ecx14 = eax3->f34 - 1, eax3->f34 = ecx14, !ecx14)) {
            eax3->f0->f6a = reinterpret_cast<unsigned char>(eax3->f0->f6a & 0xfb);
        }
        if (eax3->f40) {
            eax3->f40 = reinterpret_cast<unsigned char>(eax3->f40 + 0xffffffff);
        }
        if (eax3->f38) {
            eax3->f38 = eax3->f38 - 1;
        }
        if (eax3->fdc) {
            eax3->fdc = eax3->fdc - 1;
        }
        if (eax3->fe0) {
            eax3->fe0 = eax3->fe0 - 1;
        }
        if (!eax3->f2c) {
            if (!eax3->f40 || reinterpret_cast<signed char>(eax3->f40) <= reinterpret_cast<signed char>(0x80) && !(eax3->f40 & 8)) {
                eax3->fec = eax3->f2c;
            } else {
                eax3->fec = reinterpret_cast<unsigned char>(1);
                return;
            }
        } else {
            if (reinterpret_cast<signed char>(eax3->f2c) > reinterpret_cast<signed char>(0x80) || eax3->f2c & 8) {
                eax3->fec = reinterpret_cast<unsigned char>(32);
                return;
            } else {
                eax3->fec = reinterpret_cast<unsigned char>(0);
                return;
            }
        }
    } else {
        fun_42b2e0(ecx);
    }
    return;
}

void fun_42af70(void** ecx) {
    void** edx2;
    void** eax3;

    edx2 = g484cfc;
    if (edx2 != "H") {
        do {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(edx2 + 8) == 0xffffffff)) {
                if (*reinterpret_cast<void***>(edx2 + 8)) {
                    *reinterpret_cast<void***>(edx2 + 8)();
                }
            } else {
                eax3 = *reinterpret_cast<void***>(edx2);
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(edx2 + 4)) = eax3;
                *reinterpret_cast<void***>(eax3 + 4) = *reinterpret_cast<void***>(edx2 + 4);
                fun_437550(ecx);
            }
            edx2 = *reinterpret_cast<void***>(edx2 + 4);
        } while (!reinterpret_cast<int1_t>(edx2 == "H"));
    }
    return;
}

void** g484a18 = reinterpret_cast<void**>(12);

void** g487fbc = reinterpret_cast<void**>(0xe8);

void** g487fb0 = reinterpret_cast<void**>(0xe0);

struct s364 {
    signed char[18] pad18;
    int16_t f12;
    signed char[2] pad22;
    int16_t f16;
};

void** fun_428bc0(void** ecx) {
    void** v2;
    void** edx3;
    void** v4;
    void** esi5;
    void** v6;
    void** edi7;
    void** v8;
    void** ebp9;
    void** edx10;
    uint32_t ebx11;
    uint32_t ebx12;
    void** ebx13;
    uint32_t ebp14;
    void** esi15;
    void** edi16;
    void** ecx17;
    void* esi18;
    void** eax19;
    void** eax20;
    int32_t esi21;
    int32_t ecx22;
    int32_t eax23;
    void* eax24;
    void** edx25;
    void** ecx26;
    void** eax27;
    void** edx28;
    void** ebx29;
    void** ebx30;
    void** v31;
    void** edx32;
    void** ebx33;

    v2 = edx3;
    v4 = esi5;
    v6 = edi7;
    v8 = ebp9;
    edx10 = g484a10;
    if (reinterpret_cast<int1_t>(edx10 == 1) && (ebx11 = g484a14, ebx12 = ebx11 - reinterpret_cast<unsigned char>(edx10), g484a14 = ebx12, !ebx12)) {
        fun_417720(ecx);
    }
    ebx13 = reinterpret_cast<void**>(0x484690);
    ebp14 = g484d04;
    esi15 = g484a18;
    edi16 = g487fbc;
    if (reinterpret_cast<unsigned char>(esi15) > reinterpret_cast<unsigned char>(0x484690)) {
        do {
            ecx17 = *reinterpret_cast<void***>(ebx13 + 8);
            esi18 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx17) * 4);
            while (reinterpret_cast<signed char>(ecx17) < reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx13 + 8)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx13 + 12)))) {
                if (!*reinterpret_cast<void***>(ebx13)) {
                    eax19 = g487fb0;
                } else {
                    eax19 = edi16;
                }
                *reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esi18) + reinterpret_cast<unsigned char>(eax19)) = reinterpret_cast<void*>(reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(ebp14) / reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx13 + 16)) + reinterpret_cast<unsigned char>(ecx17)) % reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx13 + 12)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx13 + 8)));
                esi18 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi18) + 4);
                ++ecx17;
            }
            eax20 = g484a18;
            ebx13 = ebx13 + 20;
        } while (reinterpret_cast<unsigned char>(ebx13) < reinterpret_cast<unsigned char>(eax20));
    }
    esi21 = 0;
    ecx22 = 0;
    while (eax23 = g484a1c, esi21 < eax23) {
        if ((*reinterpret_cast<struct s364**>(ecx22 + 0x484910))->f12 == 48) {
            eax24 = reinterpret_cast<void*>((*reinterpret_cast<struct s364**>(ecx22 + 0x484910))->f16 * 18);
            edx25 = g4845d4;
            *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(edx25) + reinterpret_cast<uint32_t>(eax24) + 2) = reinterpret_cast<int16_t>(*reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(edx25) + reinterpret_cast<uint32_t>(eax24) + 2) + 1);
        }
        ecx22 = ecx22 + 4;
        ++esi21;
    }
    ecx26 = reinterpret_cast<void**>(0);
    do {
        eax27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx26) * 20);
        g487fbc = edi16;
        edx28 = *reinterpret_cast<void***>(eax27 + 0x484bbc);
        g484d04 = ebp14;
        if (edx28 && (ebx29 = edx28 + 0xffffffff, *reinterpret_cast<void***>(eax27 + 0x484bbc) = ebx29, !ebx29)) {
            if (*reinterpret_cast<uint32_t*>(eax27 + 0x484bb4) < 1) {
                if (!*reinterpret_cast<uint32_t*>(eax27 + 0x484bb4)) {
                    ebx30 = g4845d4;
                    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(ebx30 + (*reinterpret_cast<struct s353**>(eax27 + 0x484bb0))->f16 * 18) + 8) = *reinterpret_cast<int16_t*>(eax27 + 0x484bb8);
                }
            } else {
                if (*reinterpret_cast<uint32_t*>(eax27 + 0x484bb4) <= 1) {
                    v31 = reinterpret_cast<void**>((*reinterpret_cast<struct s353**>(eax27 + 0x484bb0))->f16 * 18);
                    edx32 = g4845d4;
                    *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(edx32) + reinterpret_cast<unsigned char>(v31) + 12) = *reinterpret_cast<int16_t*>(eax27 + 0x484bb8);
                } else {
                    if (*reinterpret_cast<uint32_t*>(eax27 + 0x484bb4) == 2) {
                        ebx33 = g4845d4;
                        *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(ebx33 + (*reinterpret_cast<struct s353**>(eax27 + 0x484bb0))->f16 * 18) + 10) = *reinterpret_cast<int16_t*>(eax27 + 0x484bb8);
                    }
                }
            }
            fun_4312d0(ecx26, 0x484bb0 + reinterpret_cast<unsigned char>(ecx26) * 20);
            eax27 = fun_442b80(ecx26, 0x484bb0 + reinterpret_cast<unsigned char>(ecx26) * 20, v8, v6, v4, v2);
        }
        ebp14 = g484d04;
        edi16 = g487fbc;
        ++ecx26;
    } while (reinterpret_cast<signed char>(ecx26) < reinterpret_cast<signed char>(16));
    return eax27;
}

int32_t g60b25c = 0;

void** g4775ac = reinterpret_cast<void**>(30);

struct s365 {
    void** f0;
    signed char[3] pad4;
    int16_t f4;
    int16_t f6;
};

struct s366 {
    int16_t f0;
    signed char[2] pad4;
    int16_t f4;
};

void fun_425330(void** ecx) {
    int1_t zf2;
    int1_t zf3;
    void* eax4;
    void* ecx5;
    void** edx6;
    uint32_t ebx7;
    void* eax8;
    struct s365* ebp9;
    void** ebp10;
    void** ecx11;
    int32_t eax12;
    void** eax13;
    struct s294* edi14;
    struct s295* edi15;
    struct s366* esi16;
    void* eax17;

    zf2 = g60b25c == 0;
    if ((!zf2 || (zf3 = reinterpret_cast<int1_t>(g482a6c == 2), zf3)) && ((eax4 = g4844e4, ecx5 = g4844e8, eax4 != ecx5) && (edx6 = g4775ac, ebx7 = g484d04, reinterpret_cast<int32_t>(ebx7 - *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ecx5) * 4 + 0x4842e0)) >= reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(edx6 + reinterpret_cast<unsigned char>(edx6) * 8) * 4 - reinterpret_cast<unsigned char>(edx6))))) {
        eax8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx5) * 4 + reinterpret_cast<uint32_t>(ecx5));
        ebp9 = reinterpret_cast<struct s365*>(0x483de0 + (reinterpret_cast<uint32_t>(eax8) + reinterpret_cast<uint32_t>(eax8)));
        fun_42e2f0(40);
        fun_425180(40);
        fun_4312d0(40, ebp10);
        ecx11 = reinterpret_cast<void**>(0);
        eax12 = 0;
        do {
            if (static_cast<int32_t>(ebp9->f6) == *reinterpret_cast<int32_t*>(eax12 + 0x460b48)) 
                break;
            eax12 = eax12 + 92;
            ++ecx11;
        } while (eax12 < 0x313c);
        eax13 = fun_425180(ecx11);
        edi14 = reinterpret_cast<struct s294*>(eax13 + 0x8c);
        edi14->f0 = ebp9->f0;
        edi15 = reinterpret_cast<struct s295*>(&edi14->f4);
        esi16 = reinterpret_cast<struct s366*>(&ebp9->f4);
        edi15->f0 = esi16->f0;
        edi15->f4 = esi16->f4;
        *reinterpret_cast<void***>(eax13 + 32) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp9->f4 / 45) << 29);
        eax17 = g4844e8;
        g4844e8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax17) + 1 & 0x7f);
    }
    return;
}

struct s368 {
    signed char[16] pad16;
    void** f10;
    signed char[3] pad20;
    int32_t f14;
    signed char[8] pad32;
    void** f20;
    signed char[23] pad56;
    int32_t f38;
};

struct s367 {
    struct s368* f0;
    int32_t f4;
    signed char[7] pad15;
    unsigned char ff;
    signed char[4] pad20;
    int32_t f14;
    int32_t f18;
    signed char[192] pad220;
    int32_t fdc;
    signed char[4] pad228;
    struct s368* fe4;
};

void** g484d10 = reinterpret_cast<void**>(8);

void fun_42b2e0(void** ecx) {
    struct s367* eax2;
    struct s368* eax3;
    int32_t ebx4;
    void** ecx5;
    void** eax6;
    void* edx7;

    fun_426c00(ecx);
    if (eax2->f14 > 0x60000) {
        eax2->f14 = eax2->f14 - 0x10000;
    }
    if (eax2->f14 < 0x60000) {
        eax2->f14 = 0x60000;
    }
    eax3 = eax2->f0;
    eax2->f18 = 0;
    *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<uint1_t>(eax3->f14 <= eax3->f38);
    g484d10 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax3) & 0xff);
    fun_42b090(ecx);
    if (!eax2->fe4 || eax2->fe4 == eax2->f0) {
        ebx4 = eax2->fdc;
        if (!ebx4) {
            addr_42b3b8_7:
            if (eax2->ff & 2) {
                eax2->f4 = 2;
            }
        } else {
            addr_42b3af_9:
            eax2->fdc = ebx4 - 1;
            goto addr_42b3b8_7;
        }
        return;
    } else {
        ecx5 = eax2->fe4->f10;
        eax6 = fun_42db10(ecx5);
        edx7 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax6) - reinterpret_cast<unsigned char>(eax2->f0->f20));
        if (reinterpret_cast<uint32_t>(edx7) < 0x38e38e3 || reinterpret_cast<uint32_t>(edx7) > 0xfc71c71d) {
            eax2->f0->f20 = eax6;
            ebx4 = eax2->fdc;
            if (!ebx4) 
                goto addr_42b3b8_7;
            goto addr_42b3af_9;
        } else {
            if (reinterpret_cast<uint32_t>(edx7) >= 0x80000000) {
                eax2->f0->f20 = eax2->f0->f20 + 0xfc71c71d;
                goto addr_42b3b8_7;
            } else {
                eax2->f0->f20 = eax2->f0->f20 + 0x38e38e3;
                goto addr_42b3b8_7;
            }
        }
    }
}

struct s369 {
    signed char[16] pad16;
    void* f10;
    signed char[12] pad32;
    uint32_t f20;
};

struct s369* g483754 = reinterpret_cast<struct s369*>(0xa718);

void** fun_423cd0(void** ecx) {
    struct s369* edx2;
    struct s369** eax3;
    uint32_t ebx4;
    void* ecx5;
    void** eax6;

    edx2 = *eax3;
    ebx4 = edx2->f20;
    g483754 = edx2;
    ecx5 = reinterpret_cast<void*>((*reinterpret_cast<int32_t*>((ebx4 >> 19) * 4 + 0x46a9e0) << 6) + reinterpret_cast<uint32_t>(edx2->f10));
    eax6 = fun_424860(ecx5, 1, 0x423c60);
    return eax6;
}

struct s370 {
    int32_t f0;
    struct s370* f4;
    void* f8;
    struct s370* fc;
};

struct s373 {
    int32_t f0;
    int32_t f4;
};

struct s374 {
    int32_t f0;
    int32_t f4;
};

struct s375 {
    int32_t f0;
    void* f4;
    int16_t f8;
    int16_t fa;
    int16_t fc;
};

struct s376 {
    signed char[16] pad16;
    unsigned char f10;
    unsigned char f11;
};

struct s377 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[1] pad10;
    void** fa;
    signed char[1] pad12;
    void** fc;
};

struct s372 {
    struct s373* f0;
    struct s374* f4;
    uint32_t f8;
    int32_t fc;
    struct s375* f10;
    struct s376* f14;
    void** f18;
    signed char[3] pad28;
    struct s377* f1c;
};

struct s371 {
    struct s372* f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
    signed char[3] pad16;
    void** f10;
    signed char[3] pad20;
    void* f14;
    unsigned char f18;
    signed char[3] pad28;
    void** f1c;
    signed char[3] pad32;
    void** f20;
    signed char[3] pad36;
    void*** f24;
    void*** f28;
    void** f2c;
};

struct s371* g487e2c = reinterpret_cast<struct s371*>(0x8b000000);

struct s372* g487e20 = reinterpret_cast<struct s372*>(0x34890000);

struct s375* g487e28 = reinterpret_cast<struct s375*>(0x1bf877c);

void** g5ee748 = reinterpret_cast<void**>(0);

uint32_t g5ee760 = 0;

struct s376* g487e1c = reinterpret_cast<struct s376*>(0x118c381);

void** fun_42db30(void** ecx);

uint32_t g5ee764 = 0;

void** g5ee74c = reinterpret_cast<void**>(0);

void** g5ee758 = reinterpret_cast<void**>(0);

void** fun_42dba0(void** ecx);

void** g5ee73c = reinterpret_cast<void**>(0);

void* g5ee728 = reinterpret_cast<void*>(0);

void** g487e18 = reinterpret_cast<void**>(66);

void** g4925d8 = reinterpret_cast<void**>(0);

void** g5ee6ec = reinterpret_cast<void**>(0);

void** g5ee72c = reinterpret_cast<void**>(0);

void** g5ee740 = reinterpret_cast<void**>(0);

void** g5ee704 = reinterpret_cast<void**>(0);

void** g5ee734 = reinterpret_cast<void**>(0);

void** g5ee738 = reinterpret_cast<void**>(0);

struct s377* g487e24 = reinterpret_cast<struct s377*>(0x4fa8324);

void** g5ee71c = reinterpret_cast<void**>(0);

void** g5ee718 = reinterpret_cast<void**>(0);

int32_t g5ee754 = 0;

int32_t g5ee75c = 0;

void** g487fa0 = reinterpret_cast<void**>(16);

void** g5ee6e8 = reinterpret_cast<void**>(0);

void** g5ee6f4 = reinterpret_cast<void**>(0);

void** g5ee6d0 = reinterpret_cast<void**>(0);

void** g5ee720 = reinterpret_cast<void**>(0);

void** g5ee730 = reinterpret_cast<void**>(0);

uint32_t g5ee750 = 0;

uint32_t g5ee744 = 0;

uint32_t g4925c4 = 0xd5;

void** g4925a8 = reinterpret_cast<void**>(76);

uint32_t g5ee724 = 0;

int32_t g4925a4 = 0xc43d8b46;

void*** g5ee70c = reinterpret_cast<void***>(0);

uint32_t g5ee710 = 0;

uint32_t g5ee6e4 = 0;

uint32_t g5ee6f0 = 0;

uint32_t g5ee6fc = 0;

uint32_t g5ee6f8 = 0;

uint32_t g5ee708 = 0;

uint32_t g5ee700 = 0;

uint32_t g5ee714 = 0;

void** fun_42e7f0(uint32_t ecx);

void** g5ee6dc = reinterpret_cast<void**>(0);

void** g5ee6d8 = reinterpret_cast<void**>(0);

void fun_42ede0(uint32_t ecx);

struct s378 {
    signed char[6134320] pad6134320;
    void** f5d9a30;
};

struct s379 {
    signed char[6133040] pad6133040;
    void** f5d9530;
};

void fun_42f160(struct s370* ecx) {
    void** ebp2;
    void** eax3;
    int1_t zf4;
    struct s372* eax5;
    struct s376* edx6;
    uint32_t eax7;
    void** ebx8;
    uint32_t eax9;
    uint32_t edx10;
    void** edx11;
    void** eax12;
    struct s371* eax13;
    struct s372* edx14;
    void** eax15;
    struct s371* eax16;
    void** eax17;
    struct s371* ebx18;
    void** edi19;
    void* eax20;
    void** ecx21;
    void** edx22;
    void** eax23;
    struct s371* eax24;
    struct s377* edi25;
    void** ebx26;
    void** edx27;
    struct s377* eax28;
    int1_t less29;
    struct s371* eax30;
    unsigned char bh31;
    struct s371* eax32;
    struct s377* edx33;
    void** eax34;
    struct s371* eax35;
    unsigned char ch36;
    struct s377* eax37;
    void** edx38;
    struct s371* eax39;
    unsigned char dl40;
    struct s377* eax41;
    void** edi42;
    void** edx43;
    void** ecx44;
    void** eax45;
    void** eax46;
    int1_t zf47;
    struct s377* edx48;
    void** eax49;
    void** eax50;
    int1_t zf51;
    struct s377* edx52;
    void** eax53;
    struct s377* eax54;
    void** edx55;
    void** eax56;
    int1_t less57;
    struct s375* eax58;
    void** edx59;
    void* eax60;
    struct s376* edx61;
    void** edx62;
    struct s377* eax63;
    void** eax64;
    void** eax65;
    void** eax66;
    int1_t less_or_equal67;
    struct s375* eax68;
    void** edx69;
    struct s376* eax70;
    void** eax71;
    struct s375* eax72;
    void** ebx73;
    void** ecx74;
    void** ecx75;
    int16_t dx76;
    void** edx77;
    void** eax78;
    void** eax79;
    struct s371* edx80;
    void** eax81;
    void* eax82;
    void** ebx83;
    struct s375* eax84;
    void** edx85;
    void* eax86;
    struct s376* edx87;
    unsigned char bl88;
    void** eax89;
    void** edx90;
    void** eax91;
    struct s375* eax92;
    void** ecx93;
    void** ecx94;
    struct s371* eax95;
    void** eax96;
    void** edi97;
    void** edx98;
    void** eax99;
    uint32_t edx100;
    uint32_t eax101;
    uint32_t eax102;
    uint32_t eax103;
    uint32_t edx104;
    uint32_t edx105;
    struct s375* eax106;
    struct s372* edx107;
    uint32_t edi108;
    uint32_t ebx109;
    uint32_t eax110;
    void** eax111;
    void** eax112;
    int32_t ebx113;
    int32_t eax114;
    void** eax115;
    void** ebx116;
    void** eax117;
    void** esi118;
    void** edi119;
    void** edx120;
    void** ebx121;
    void* eax122;
    void** edx123;
    uint32_t eax124;
    void** ebx125;
    void** eax126;
    uint32_t ecx127;
    void** ebx128;
    void* eax129;
    uint32_t eax130;
    uint32_t ecx131;
    void** ebx132;
    void** eax133;
    uint32_t ecx134;
    struct s377* edi135;
    void** eax136;
    void** edx137;
    void** ebx138;
    void** eax139;
    void** ebx140;
    uint32_t ecx141;
    void** ebx142;
    void* eax143;
    uint32_t eax144;
    void** eax145;
    int1_t less_or_equal146;
    void** ebx147;
    uint32_t ecx148;
    void** ebx149;
    void* eax150;
    uint32_t eax151;
    int1_t zf152;
    void** eax153;
    int1_t zf154;
    void** eax155;
    struct s371* eax156;
    int1_t zf157;
    struct s371* eax158;
    void** ecx159;
    void** edi160;
    void* ecx161;
    struct s378* edx162;
    void* ecx163;
    void*** esi164;
    void* eax165;
    uint32_t ecx166;
    int1_t zf167;
    int1_t zf168;
    void** eax169;
    struct s371* eax170;
    void** eax171;
    void* eax172;
    void** esi173;
    struct s371* eax174;
    int1_t zf175;
    struct s371* eax176;
    void** ecx177;
    void** edi178;
    void* ecx179;
    struct s379* edx180;
    void* ecx181;
    void*** esi182;
    void* eax183;
    uint32_t ecx184;
    int1_t zf185;
    int1_t zf186;
    void** eax187;
    struct s371* eax188;
    void** eax189;
    void* eax190;
    void** ebx191;
    int1_t zf192;
    struct s371* eax193;
    unsigned char dl194;
    int1_t zf195;
    struct s371* eax196;
    unsigned char bl197;
    struct s371* tmp32_198;

    ebp2 = eax3;
    zf4 = reinterpret_cast<int1_t>(g487e2c == 0x487e14);
    if (!zf4) {
        eax5 = g487e20;
        g487e28 = eax5->f10;
        edx6 = eax5->f14;
        edx6->f11 = reinterpret_cast<unsigned char>(edx6->f11 | 1);
        eax7 = eax5->fc + 0x40000000;
        ebx8 = g5ee748;
        g5ee760 = eax7;
        g487e1c = edx6;
        __asm__("cdq ");
        eax9 = (eax7 - reinterpret_cast<unsigned char>(ebx8) ^ reinterpret_cast<uint32_t>(edx6)) - reinterpret_cast<uint32_t>(edx6);
        edx10 = eax9;
        if (eax9 > 0x40000000) {
            edx10 = 0x40000000;
        }
        eax12 = fun_42db30(edx11);
        __asm__("shrd eax, edx, 0x10");
        g5ee764 = reinterpret_cast<unsigned char>(eax12) * *reinterpret_cast<uint32_t*>((0x40000000 - edx10 >> 19) * 4 + 0x46a9e0);
        eax13 = g487e2c;
        eax13->f4 = ebp2;
        edx14 = g487e20;
        eax13->f8 = edx11;
        eax13->f0 = edx14;
        g5ee74c = edx11 + 1;
        g5ee758 = ebp2;
        eax15 = fun_42dba0(edx11);
        g5ee73c = eax15;
        eax16 = g487e2c;
        eax16->fc = eax15;
        if (reinterpret_cast<signed char>(edx11) <= reinterpret_cast<signed char>(ebp2)) {
            eax16->f10 = eax15;
        } else {
            eax17 = fun_42dba0(edx11);
            ebx18 = g487e2c;
            edi19 = g5ee73c;
            ebx18->f10 = eax17;
            eax20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax17) - reinterpret_cast<unsigned char>(edi19)) / reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edx11) - reinterpret_cast<unsigned char>(ebp2)));
            g5ee728 = eax20;
            ebx18->f14 = eax20;
        }
        ecx21 = g487e18;
        edx22 = g4925d8;
        g5ee6ec = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx21 + 4)) - reinterpret_cast<unsigned char>(edx22));
        eax23 = *reinterpret_cast<void***>(ecx21);
        g5ee72c = reinterpret_cast<void**>(0);
        g5ee740 = reinterpret_cast<void**>(0);
        g5ee704 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax23) - reinterpret_cast<unsigned char>(edx22));
        eax24 = g487e2c;
        g5ee734 = reinterpret_cast<void**>(0);
        g5ee738 = reinterpret_cast<void**>(0);
        eax24->f2c = reinterpret_cast<void**>(0);
        edi25 = g487e24;
        if (edi25) {
            eax24->f28 = reinterpret_cast<void***>(0);
            eax24->f18 = reinterpret_cast<unsigned char>(0);
            eax24->f24 = eax24->f28;
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx21)) <= reinterpret_cast<signed char>(edi25->f0)) {
                ebx26 = g4925d8;
                if (reinterpret_cast<signed char>(ebx26) < reinterpret_cast<signed char>(edi25->f0)) {
                    eax24->f18 = reinterpret_cast<unsigned char>(1);
                    eax24->f1c = reinterpret_cast<void**>(0x7fffffff);
                }
            } else {
                eax24->f18 = reinterpret_cast<unsigned char>(1);
                eax24->f1c = *reinterpret_cast<void***>(ecx21);
            }
            edx27 = g487e18;
            eax28 = g487e24;
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx27 + 4)) >= reinterpret_cast<signed char>(eax28->f4)) {
                less29 = reinterpret_cast<signed char>(eax28->f4) < reinterpret_cast<signed char>(g4925d8);
                if (less29) {
                    eax30 = g487e2c;
                    bh31 = eax30->f18;
                    eax30->f20 = reinterpret_cast<void**>(0x80000000);
                    eax30->f18 = reinterpret_cast<unsigned char>(bh31 | 2);
                }
            } else {
                eax32 = g487e2c;
                eax32->f18 = reinterpret_cast<unsigned char>(eax32->f18 | 2);
                eax32->f20 = *reinterpret_cast<void***>(edx27 + 4);
            }
            edx33 = g487e24;
            eax34 = g487e18;
            if (reinterpret_cast<signed char>(edx33->f4) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax34))) {
                eax35 = g487e2c;
                eax35->f28 = reinterpret_cast<void***>(0x5ee768);
                ch36 = eax35->f18;
                eax35->f1c = reinterpret_cast<void**>(0x7fffffff);
                eax35->f18 = reinterpret_cast<unsigned char>(ch36 | 1);
            }
            eax37 = g487e24;
            edx38 = g487e18;
            if (reinterpret_cast<signed char>(eax37->f0) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx38 + 4))) {
                eax39 = g487e2c;
                eax39->f24 = reinterpret_cast<void***>(0x5f0a68);
                dl40 = eax39->f18;
                eax39->f20 = reinterpret_cast<void**>(0x80000000);
                eax39->f18 = reinterpret_cast<unsigned char>(dl40 | 2);
            }
            eax41 = g487e24;
            edi42 = g4925d8;
            g5ee71c = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax41->f4) - reinterpret_cast<unsigned char>(edi42));
            g5ee718 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax41->f0) - reinterpret_cast<unsigned char>(edi42));
            edx43 = g487e18;
            ecx44 = g5ee6d4;
            if (reinterpret_cast<int1_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(edx43 + 10))) == ecx44) && reinterpret_cast<int1_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(eax41->fa)) == ecx44)) {
                eax45 = g5ee71c;
                g5ee6ec = eax45;
            }
            eax46 = g5ee718;
            zf47 = eax46 == g5ee704;
            if (!zf47 || ((edx48 = g487e24, eax49 = g487e18, edx48->f8 != *reinterpret_cast<void***>(eax49 + 8)) || edx48->fc != *reinterpret_cast<void***>(eax49 + 12))) {
                g5ee754 = 1;
            } else {
                g5ee754 = 0;
            }
            eax50 = g5ee71c;
            zf51 = eax50 == g5ee6ec;
            if (!zf51 || ((edx52 = g487e24, eax53 = g487e18, edx52->fa != *reinterpret_cast<void***>(eax53 + 10)) || edx52->fc != *reinterpret_cast<void***>(eax53 + 12))) {
                g5ee75c = 1;
            } else {
                g5ee75c = 0;
            }
            eax54 = g487e24;
            edx55 = g487e18;
            if (reinterpret_cast<signed char>(eax54->f4) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx55)) || reinterpret_cast<signed char>(eax54->f0) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx55 + 4))) {
                g5ee754 = 1;
                g5ee75c = 1;
            }
            eax56 = g5ee71c;
            less57 = reinterpret_cast<signed char>(eax56) < reinterpret_cast<signed char>(g5ee6ec);
            if (less57) {
                eax58 = g487e28;
                edx59 = g487fbc;
                eax60 = reinterpret_cast<void*>(eax58->f8 * 4);
                g5ee734 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx59) + reinterpret_cast<uint32_t>(eax60));
                edx61 = g487e1c;
                if (!(edx61->f10 & 8)) {
                    edx62 = g487fa0;
                    eax63 = g487e24;
                    eax64 = g4925d8;
                    g5ee6e8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax63->f4) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx62) + reinterpret_cast<uint32_t>(eax60))) - reinterpret_cast<unsigned char>(eax64));
                } else {
                    eax65 = g5ee6ec;
                    g5ee6e8 = eax65;
                }
            }
            eax66 = g5ee718;
            less_or_equal67 = reinterpret_cast<signed char>(eax66) <= reinterpret_cast<signed char>(g5ee704);
            if (!less_or_equal67) {
                eax68 = g487e28;
                edx69 = g487fbc;
                g5ee740 = *reinterpret_cast<void***>(edx69 + eax68->fa * 4);
                eax70 = g487e1c;
                if (!(eax70->f10 & 16)) {
                    eax71 = g5ee718;
                } else {
                    eax71 = g5ee6ec;
                }
                g5ee6f4 = eax71;
            }
            eax72 = g487e28;
            ebx73 = g5ee6e8;
            ecx74 = g5ee6f4;
            ecx75 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx74) + reinterpret_cast<uint32_t>(eax72->f4));
            g5ee6e8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx73) + reinterpret_cast<uint32_t>(eax72->f4));
            dx76 = eax72->fc;
            g5ee6f4 = ecx75;
            if (dx76) {
                edx77 = g5ee758;
                eax78 = g5ee6d0;
                eax79 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax78) - (reinterpret_cast<unsigned char>(edx77) + reinterpret_cast<unsigned char>(edx77)));
                edx80 = g487e2c;
                g5ee720 = eax79;
                edx80->f2c = eax79;
                eax81 = g5ee74c;
                eax82 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax81) - reinterpret_cast<unsigned char>(g5ee758));
                ebx83 = g5ee6d0;
                g5ee72c = reinterpret_cast<void**>(1);
                g5ee6d0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx83) + (reinterpret_cast<uint32_t>(eax82) + reinterpret_cast<uint32_t>(eax82)));
            }
        } else {
            eax84 = g487e28;
            edx85 = g487fbc;
            eax86 = reinterpret_cast<void*>(eax84->fc * 4);
            g5ee738 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx85) + reinterpret_cast<uint32_t>(eax86));
            edx87 = g487e1c;
            g5ee75c = 1;
            bl88 = edx87->f10;
            g5ee754 = 1;
            if (!(bl88 & 16)) {
                eax89 = g5ee6ec;
                g5ee730 = eax89;
            } else {
                edx90 = g487fa0;
                eax91 = g4925d8;
                g5ee730 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx21)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx90) + reinterpret_cast<uint32_t>(eax86))) - reinterpret_cast<unsigned char>(eax91));
            }
            eax92 = g487e28;
            ecx93 = g5ee730;
            ecx94 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx93) + reinterpret_cast<uint32_t>(eax92->f4));
            eax95 = g487e2c;
            eax95->f18 = reinterpret_cast<unsigned char>(3);
            eax95->f24 = reinterpret_cast<void***>(0x5f0a68);
            eax95->f28 = reinterpret_cast<void***>(0x5ee768);
            eax95->f1c = reinterpret_cast<void**>(0x7fffffff);
            g5ee730 = ecx94;
            eax95->f20 = reinterpret_cast<void**>(0x80000000);
        }
        eax96 = g5ee738;
        edi97 = g5ee734;
        edx98 = g5ee740;
        eax99 = g5ee72c;
        edx100 = reinterpret_cast<unsigned char>(edx98) | (reinterpret_cast<unsigned char>(eax96) | reinterpret_cast<unsigned char>(edi97)) | reinterpret_cast<unsigned char>(eax99);
        g5ee750 = edx100;
        if (edx100) {
            eax101 = g5ee760;
            eax102 = eax101 - reinterpret_cast<unsigned char>(g5ee748);
            if (eax102 > 0x80000000) {
                eax102 = -eax102;
            }
            if (eax102 > 0x40000000) {
                eax102 = 0x40000000;
            }
            eax103 = reinterpret_cast<unsigned char>(eax12) * *reinterpret_cast<uint32_t*>((eax102 >> 19) * 4 + 0x46a9e0);
            __asm__("shrd eax, edx, 0x10");
            edx104 = g5ee760;
            edx105 = edx104 - reinterpret_cast<unsigned char>(g5ee748);
            g5ee744 = eax103;
            if (edx105 < 0x80000000) {
                g5ee744 = -eax103;
            }
            eax106 = g487e28;
            edx107 = g487e20;
            edi108 = g5ee744;
            ebx109 = g4925c4;
            eax110 = g5ee760;
            g5ee744 = edi108 + (eax106->f0 + edx107->f8);
            eax111 = g4925a8;
            g5ee724 = ebx109 + 0x40000000 - eax110;
            if (!eax111) {
                eax112 = g487e18;
                ebx113 = g4925a4;
                eax114 = (static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax112 + 12))) >> 4) + ebx113;
                if (edx107->f4->f4 != edx107->f0->f4) {
                    if (edx107->f0->f0 == edx107->f4->f0) {
                        ++eax114;
                    }
                } else {
                    --eax114;
                }
                if (eax114 >= 0) {
                    if (eax114 < 16) {
                        g5ee70c = reinterpret_cast<void***>(0x48aeb0 + (eax114 * 4 - eax114 << 6));
                    } else {
                        g5ee70c = reinterpret_cast<void***>(0x48b9f0);
                    }
                } else {
                    g5ee70c = reinterpret_cast<void***>(0x48aeb0);
                }
            }
        }
        eax115 = g487e18;
        ebx116 = g4925d8;
        if (reinterpret_cast<signed char>(ebx116) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax115))) {
            g5ee754 = 0;
        }
        eax117 = g487e18;
        esi118 = g4925d8;
        if (reinterpret_cast<signed char>(esi118) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax117 + 4)) && (edi119 = g5ee6d4, static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax117 + 10))) != edi119)) {
            g5ee75c = 0;
        }
        edx120 = g5ee6ec;
        ebx121 = g5ee704;
        eax122 = g5ee728;
        edx123 = reinterpret_cast<void**>(reinterpret_cast<signed char>(edx120) >> 4);
        g5ee704 = reinterpret_cast<void**>(reinterpret_cast<signed char>(ebx121) >> 4);
        g5ee6ec = edx123;
        eax124 = reinterpret_cast<uint32_t>(eax122) * reinterpret_cast<unsigned char>(edx123);
        __asm__("shrd eax, edx, 0x10");
        ebx125 = g5ee73c;
        g5ee710 = eax124;
        eax126 = g5ee6ec;
        g5ee710 = -eax124;
        ecx127 = g4925b0;
        __asm__("shrd eax, edx, 0x10");
        ebx128 = g5ee704;
        eax129 = g5ee728;
        g5ee6e4 = (reinterpret_cast<int32_t>(ecx127) >> 4) - reinterpret_cast<unsigned char>(eax126) * reinterpret_cast<unsigned char>(ebx125);
        eax130 = reinterpret_cast<uint32_t>(eax129) * reinterpret_cast<unsigned char>(ebx128);
        __asm__("shrd eax, edx, 0x10");
        ecx131 = g4925b0;
        ebx132 = g5ee73c;
        g5ee6f0 = eax130;
        eax133 = g5ee704;
        g5ee6f0 = -eax130;
        __asm__("shrd eax, edx, 0x10");
        ecx134 = (reinterpret_cast<int32_t>(ecx131) >> 4) - reinterpret_cast<unsigned char>(eax133) * reinterpret_cast<unsigned char>(ebx132);
        edi135 = g487e24;
        g5ee6fc = ecx134;
        if (edi135) {
            eax136 = g5ee71c;
            edx137 = g5ee718;
            ebx138 = g5ee6ec;
            eax139 = reinterpret_cast<void**>(reinterpret_cast<signed char>(eax136) >> 4);
            g5ee71c = eax139;
            g5ee718 = reinterpret_cast<void**>(reinterpret_cast<signed char>(edx137) >> 4);
            if (reinterpret_cast<signed char>(eax139) < reinterpret_cast<signed char>(ebx138)) {
                ebx140 = g5ee73c;
                ecx141 = g4925b0;
                __asm__("shrd eax, edx, 0x10");
                ebx142 = g5ee71c;
                eax143 = g5ee728;
                g5ee6f8 = (reinterpret_cast<int32_t>(ecx141) >> 4) - reinterpret_cast<unsigned char>(eax139) * reinterpret_cast<unsigned char>(ebx140);
                eax144 = reinterpret_cast<uint32_t>(eax143) * reinterpret_cast<unsigned char>(ebx142);
                __asm__("shrd eax, edx, 0x10");
                g5ee708 = eax144;
                ecx134 = -eax144;
                g5ee708 = ecx134;
            }
            eax145 = g5ee718;
            less_or_equal146 = reinterpret_cast<signed char>(eax145) <= reinterpret_cast<signed char>(g5ee704);
            if (!less_or_equal146) {
                ebx147 = g5ee73c;
                ecx148 = g4925b0;
                __asm__("shrd eax, edx, 0x10");
                ebx149 = g5ee718;
                ecx134 = (reinterpret_cast<int32_t>(ecx148) >> 4) - reinterpret_cast<unsigned char>(eax145) * reinterpret_cast<unsigned char>(ebx147);
                eax150 = g5ee728;
                g5ee700 = ecx134;
                eax151 = reinterpret_cast<uint32_t>(eax150) * reinterpret_cast<unsigned char>(ebx149);
                __asm__("shrd eax, edx, 0x10");
                g5ee714 = eax151;
                g5ee714 = -eax151;
            }
        }
        zf152 = g5ee75c == 0;
        if (!zf152) {
            eax153 = fun_42e7f0(ecx134);
            g5ee6dc = eax153;
        }
        zf154 = g5ee754 == 0;
        if (!zf154) {
            eax155 = fun_42e7f0(ecx134);
            g5ee6d8 = eax155;
        }
        fun_42ede0(ecx134);
        eax156 = g487e2c;
        if ((eax156->f18 & 2 || (zf157 = g5ee72c == 0, !zf157)) && (eax158 = g487e2c, !eax158->f24)) {
            ecx159 = g5ee74c;
            edi160 = g5ee6d0;
            ecx161 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx159) - reinterpret_cast<unsigned char>(ebp2));
            edx162 = reinterpret_cast<struct s378*>(reinterpret_cast<unsigned char>(ebp2) * 2);
            ecx163 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx161) + reinterpret_cast<uint32_t>(ecx161));
            esi164 = &edx162->f5d9a30;
            eax165 = ecx163;
            ecx166 = reinterpret_cast<uint32_t>(ecx163) >> 2;
            zf167 = ecx166 == 0;
            do {
                if (!ecx166) 
                    break;
                --ecx166;
                *reinterpret_cast<void***>(edi160) = *esi164;
                edi160 = edi160 + 4;
                esi164 = esi164 + 4;
            } while (!zf167);
            *reinterpret_cast<unsigned char*>(&ecx166) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax165) & 3);
            zf168 = *reinterpret_cast<unsigned char*>(&ecx166) == 0;
            do {
                if (!ecx166) 
                    break;
                --ecx166;
                *reinterpret_cast<void***>(edi160) = *esi164;
                ++edi160;
                ++esi164;
            } while (!zf168);
            eax169 = g5ee6d0;
            eax170 = g487e2c;
            eax170->f24 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax169) - reinterpret_cast<uint32_t>(edx162));
            eax171 = g5ee74c;
            eax172 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax171) - reinterpret_cast<unsigned char>(ebp2));
            esi173 = g5ee6d0;
            g5ee6d0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi173) + (reinterpret_cast<uint32_t>(eax172) + reinterpret_cast<uint32_t>(eax172)));
        }
        eax174 = g487e2c;
        if ((eax174->f18 & 1 || (zf175 = g5ee72c == 0, !zf175)) && (eax176 = g487e2c, !eax176->f28)) {
            ecx177 = g5ee74c;
            edi178 = g5ee6d0;
            ecx179 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx177) - reinterpret_cast<unsigned char>(ebp2));
            edx180 = reinterpret_cast<struct s379*>(reinterpret_cast<unsigned char>(ebp2) * 2);
            ecx181 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx179) + reinterpret_cast<uint32_t>(ecx179));
            esi182 = &edx180->f5d9530;
            eax183 = ecx181;
            ecx184 = reinterpret_cast<uint32_t>(ecx181) >> 2;
            zf185 = ecx184 == 0;
            do {
                if (!ecx184) 
                    break;
                --ecx184;
                *reinterpret_cast<void***>(edi178) = *esi182;
                edi178 = edi178 + 4;
                esi182 = esi182 + 4;
            } while (!zf185);
            *reinterpret_cast<unsigned char*>(&ecx184) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax183) & 3);
            zf186 = *reinterpret_cast<unsigned char*>(&ecx184) == 0;
            do {
                if (!ecx184) 
                    break;
                --ecx184;
                *reinterpret_cast<void***>(edi178) = *esi182;
                ++edi178;
                ++esi182;
            } while (!zf186);
            eax187 = g5ee6d0;
            eax188 = g487e2c;
            eax188->f28 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax187) - reinterpret_cast<uint32_t>(edx180));
            eax189 = g5ee74c;
            eax190 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax189) - reinterpret_cast<unsigned char>(ebp2));
            ebx191 = g5ee6d0;
            g5ee6d0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx191) + (reinterpret_cast<uint32_t>(eax190) + reinterpret_cast<uint32_t>(eax190)));
        }
        zf192 = g5ee72c == 0;
        if (!zf192 && (eax193 = g487e2c, !(eax193->f18 & 2))) {
            dl194 = eax193->f18;
            eax193->f20 = reinterpret_cast<void**>(0x80000000);
            eax193->f18 = reinterpret_cast<unsigned char>(dl194 | 2);
        }
        zf195 = g5ee72c == 0;
        if (!zf195 && (eax196 = g487e2c, !(eax196->f18 & 1))) {
            bl197 = eax196->f18;
            eax196->f1c = reinterpret_cast<void**>(0x7fffffff);
            eax196->f18 = reinterpret_cast<unsigned char>(bl197 | 1);
        }
        tmp32_198 = reinterpret_cast<struct s371*>(reinterpret_cast<int32_t>(g487e2c) + 48);
        g487e2c = tmp32_198;
    }
    return;
}

struct s370* g484d18 = reinterpret_cast<struct s370*>(0xffff578c);

struct s380 {
    int32_t f0;
    struct s370* f4;
    void* f8;
    struct s370* fc;
};

void fun_42b720(int32_t ecx) {
    int32_t esi2;
    int32_t eax3;
    struct s370* ecx4;
    struct s370* edx5;
    struct s370* edx6;
    struct s370* eax7;
    void* eax8;
    struct s380* ebx9;
    int1_t less_or_equal10;

    esi2 = eax3;
    ecx4 = edx5;
    edx6 = g484d18;
    eax7 = reinterpret_cast<struct s370*>(reinterpret_cast<int32_t>(eax8) - 1);
    ebx9 = reinterpret_cast<struct s380*>(0x484d14);
    if (reinterpret_cast<int32_t>(eax7) > reinterpret_cast<int32_t>(edx6)) {
        do {
            ebx9 = reinterpret_cast<struct s380*>(&ebx9->f8);
        } while (reinterpret_cast<int32_t>(eax7) > reinterpret_cast<int32_t>(ebx9->fc));
    }
    if (esi2 >= ebx9->f0) {
        addr_42b75d_4:
        less_or_equal10 = reinterpret_cast<int32_t>(ecx4) <= reinterpret_cast<int32_t>(ebx9->f4);
    } else {
        if (reinterpret_cast<int32_t>(ecx4) >= ebx9->f0 - 1) {
            fun_42f160(ecx4);
            goto addr_42b75d_4;
        } else {
            goto addr_42b783_8;
        }
    }
    while (!less_or_equal10) {
        if (reinterpret_cast<int32_t>(ecx4) < reinterpret_cast<int32_t>(ebx9->f8) - 1) 
            goto addr_42b77d_11;
        fun_42f160(ecx4);
        ebx9 = reinterpret_cast<struct s380*>(&ebx9->f8);
        less_or_equal10 = reinterpret_cast<int32_t>(ecx4) <= reinterpret_cast<int32_t>(ebx9->fc);
    }
    addr_42b788_13:
    return;
    addr_42b77d_11:
    addr_42b783_8:
    fun_42f160(ecx4);
    goto addr_42b788_13;
}

struct s381 {
    signed char[1073741824] pad1073741824;
    void** f40000000;
};

void** fun_42d8e0(void** ecx) {
    uint32_t edx2;
    uint32_t ecx3;
    void** ebx4;
    void* eax5;
    void** eax6;
    void* edx7;
    uint32_t ebp8;
    uint32_t esi9;
    void** ebx10;
    uint32_t edi11;
    uint32_t ecx12;
    void** eax13;
    uint32_t eax14;
    uint32_t eax15;
    uint32_t eax16;
    uint32_t eax17;
    uint32_t eax18;
    uint32_t eax19;
    uint32_t eax20;
    uint32_t eax21;
    uint32_t edi22;
    uint32_t ecx23;
    void** eax24;
    uint32_t eax25;
    uint32_t eax26;
    uint32_t eax27;
    uint32_t eax28;
    uint32_t eax29;
    uint32_t eax30;
    uint32_t eax31;
    uint32_t eax32;

    edx2 = g4925e0;
    ecx3 = g4925dc;
    ebx4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax5) - edx2);
    eax6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx7) - ecx3);
    if (ebx4 || eax6) {
        ebp8 = reinterpret_cast<unsigned char>(eax6) >> 8;
        esi9 = reinterpret_cast<unsigned char>(eax6) * 8;
        if (reinterpret_cast<signed char>(ebx4) < reinterpret_cast<signed char>(0)) {
            ebx10 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(ebx4));
            edi11 = reinterpret_cast<unsigned char>(ebx10) >> 8;
            ecx12 = reinterpret_cast<unsigned char>(ebx10) * 8;
            if (reinterpret_cast<signed char>(eax6) < reinterpret_cast<signed char>(0)) {
                eax13 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax6));
                if (reinterpret_cast<signed char>(ebx10) <= reinterpret_cast<signed char>(eax13)) {
                    if (reinterpret_cast<unsigned char>(eax13) >= reinterpret_cast<unsigned char>(0x200)) {
                        eax14 = ecx12 / (reinterpret_cast<unsigned char>(eax13) >> 8);
                        eax15 = (eax14 - 0x800 & ecx12 - (ecx12 + reinterpret_cast<uint1_t>(ecx12 < ecx12 + reinterpret_cast<uint1_t>(eax14 < 0x800)))) + 0x800;
                    } else {
                        eax15 = 0x800;
                    }
                    eax6 = reinterpret_cast<void**>(0xbfffffff - *reinterpret_cast<uint32_t*>(eax15 * 4 + 0x4749e0));
                } else {
                    if (reinterpret_cast<unsigned char>(ebx10) >= reinterpret_cast<unsigned char>(0x200)) {
                        eax16 = reinterpret_cast<unsigned char>(eax13) * 8 / edi11;
                        eax17 = (eax16 - 0x800 & ecx12 - (ecx12 + reinterpret_cast<uint1_t>(ecx12 < ecx12 + reinterpret_cast<uint1_t>(eax16 < 0x800)))) + 0x800;
                    } else {
                        eax17 = 0x800;
                    }
                    return reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax17 * 4 + 0x4749e0)) + 0x80000000;
                }
            } else {
                if (reinterpret_cast<signed char>(ebx10) <= reinterpret_cast<signed char>(eax6)) {
                    if (reinterpret_cast<unsigned char>(eax6) >= reinterpret_cast<unsigned char>(0x200)) {
                        eax18 = ecx12 / ebp8;
                        eax19 = (eax18 - 0x800 & ecx12 - (ecx12 + reinterpret_cast<uint1_t>(ecx12 < ecx12 + reinterpret_cast<uint1_t>(eax18 < 0x800)))) + 0x800;
                    } else {
                        eax19 = 0x800;
                    }
                    return *reinterpret_cast<struct s381**>(eax19 * 4 + 0x4749e0) + 0x40000000;
                } else {
                    if (reinterpret_cast<unsigned char>(ebx10) >= reinterpret_cast<unsigned char>(0x200)) {
                        eax20 = esi9 / edi11;
                        eax21 = (eax20 - 0x800 & ecx12 - (ecx12 + reinterpret_cast<uint1_t>(ecx12 < ecx12 + reinterpret_cast<uint1_t>(eax20 < 0x800)))) + 0x800;
                    } else {
                        eax21 = 0x800;
                    }
                    return 0x7fffffff - *reinterpret_cast<uint32_t*>(eax21 * 4 + 0x4749e0);
                }
            }
        } else {
            edi22 = reinterpret_cast<unsigned char>(ebx4) >> 8;
            ecx23 = reinterpret_cast<unsigned char>(ebx4) * 8;
            if (reinterpret_cast<signed char>(eax6) < reinterpret_cast<signed char>(0)) {
                eax24 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax6));
                if (reinterpret_cast<signed char>(ebx4) <= reinterpret_cast<signed char>(eax24)) {
                    if (reinterpret_cast<unsigned char>(eax24) >= reinterpret_cast<unsigned char>(0x200)) {
                        eax25 = ecx23 / (reinterpret_cast<unsigned char>(eax24) >> 8);
                        eax26 = (eax25 - 0x800 & ecx23 - (ecx23 + reinterpret_cast<uint1_t>(ecx23 < ecx23 + reinterpret_cast<uint1_t>(eax25 < 0x800)))) + 0x800;
                    } else {
                        eax26 = 0x800;
                    }
                    return reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax26 * 4 + 0x4749e0)) - 0x40000000;
                } else {
                    if (reinterpret_cast<unsigned char>(ebx4) >= reinterpret_cast<unsigned char>(0x200)) {
                        eax27 = reinterpret_cast<unsigned char>(eax24) * 8 / edi22;
                        eax28 = (eax27 - 0x800 & ecx23 - (ecx23 + reinterpret_cast<uint1_t>(ecx23 < ecx23 + reinterpret_cast<uint1_t>(eax27 < 0x800)))) + 0x800;
                    } else {
                        eax28 = 0x800;
                    }
                    return -*reinterpret_cast<int32_t*>(eax28 * 4 + 0x4749e0);
                }
            } else {
                if (reinterpret_cast<signed char>(ebx4) <= reinterpret_cast<signed char>(eax6)) {
                    if (reinterpret_cast<unsigned char>(eax6) >= reinterpret_cast<unsigned char>(0x200)) {
                        eax29 = ecx23 / ebp8;
                        eax30 = (eax29 - 0x800 & ecx23 - (ecx23 + reinterpret_cast<uint1_t>(ecx23 < ecx23 + reinterpret_cast<uint1_t>(eax29 < 0x800)))) + 0x800;
                    } else {
                        eax30 = 0x800;
                    }
                    eax6 = reinterpret_cast<void**>(0x3fffffff - *reinterpret_cast<uint32_t*>(eax30 * 4 + 0x4749e0));
                } else {
                    if (reinterpret_cast<unsigned char>(ebx4) >= reinterpret_cast<unsigned char>(0x200)) {
                        eax31 = esi9 / edi22;
                        eax32 = (eax31 - 0x800 & ecx23 - (ecx23 + reinterpret_cast<uint1_t>(ecx23 < ecx23 + reinterpret_cast<uint1_t>(eax31 < 0x800)))) + 0x800;
                    } else {
                        eax32 = 0x800;
                    }
                    eax6 = *reinterpret_cast<void***>(eax32 * 4 + 0x4749e0);
                }
            }
        }
    }
    return eax6;
}

void** g5ee6b8 = reinterpret_cast<void**>(0);

void** fun_42e740(void** ecx) {
    void** v2;
    void** v3;
    void** v4;
    void** esi5;
    void** v6;
    void** edi7;
    void** v8;
    void** ebp9;
    void** edi10;
    void** eax11;
    void** ebp12;
    void** edx13;
    int1_t zf14;
    uint32_t eax15;
    void** esi16;
    int1_t cf17;
    void** eax18;
    void** edx19;
    void** eax20;
    void** ebx21;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = ecx;
    v4 = esi5;
    v6 = edi7;
    v8 = ebp9;
    edi10 = eax11;
    ebp12 = edx13;
    zf14 = ebp12 == g5ee6d4;
    if (zf14) {
        edi10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi10) ^ eax15);
    }
    esi16 = reinterpret_cast<void**>(0x495330);
    cf17 = reinterpret_cast<unsigned char>(0x495330) < reinterpret_cast<unsigned char>(g5ee6b8);
    if (cf17) {
        do {
            if (edi10 != *reinterpret_cast<void***>(esi16)) 
                continue;
            if (ebp12 != *reinterpret_cast<void***>(esi16 + 4)) 
                continue;
            if (!*reinterpret_cast<void***>(esi16 + 8)) 
                break;
            eax18 = g5ee6b8;
            esi16 = esi16 + 0xa1c;
        } while (reinterpret_cast<unsigned char>(esi16) < reinterpret_cast<unsigned char>(eax18));
    }
    edx19 = g5ee6b8;
    if (reinterpret_cast<unsigned char>(esi16) >= reinterpret_cast<unsigned char>(edx19)) {
        if (reinterpret_cast<int32_t>(edx19 - 0x495330) / reinterpret_cast<signed char>(0xa1c) == 0x200) {
            fun_43bd40(0xa1c, "R_FindPlane: no more visplanes", v8, v6);
        }
        *reinterpret_cast<void***>(esi16 + 16) = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<void***>(esi16) = edi10;
        eax20 = g4775d0;
        *reinterpret_cast<void***>(esi16 + 8) = reinterpret_cast<void**>(0);
        ebx21 = g5ee6b8;
        *reinterpret_cast<void***>(esi16 + 12) = eax20;
        g5ee6b8 = ebx21 + 0xa1c;
        *reinterpret_cast<void***>(esi16 + 4) = ebp12;
        fun_442b80(0xa1c, v8, v6, v4, v3, v2);
    }
    return esi16;
}

void* g4925b4 = reinterpret_cast<void*>(0x482a843d);

struct s382 {
    signed char[28] pad28;
    struct s377* f1c;
};

void fun_42b650(int32_t ecx);

void fun_42b7d0(void** ecx) {
    struct s372* eax2;
    void** eax3;
    void** eax4;
    void* esi5;
    uint32_t edx6;
    void* edx7;
    uint32_t ecx8;
    void* edi9;
    void* eax10;
    void* ecx11;
    void* edi12;
    void* ecx13;
    void* ecx14;
    void* edi15;
    void* ecx16;
    void* edi17;
    void* eax18;
    int32_t ecx19;
    struct s377* eax20;
    struct s382* eax21;
    void** eax22;
    struct s372* eax23;

    g487e20 = eax2;
    eax3 = fun_42d8e0(ecx);
    eax4 = fun_42d8e0(eax3);
    esi5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax3) - reinterpret_cast<unsigned char>(eax4));
    if (reinterpret_cast<uint32_t>(esi5) >= 0x80000000) 
        goto addr_42b905_2;
    edx6 = g4925c4;
    g5ee748 = eax3;
    edx7 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax3) - edx6);
    ecx8 = g4925c4;
    edi9 = g4925b4;
    eax10 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax4) - ecx8);
    ecx11 = g4925b4;
    edi12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi9) + reinterpret_cast<uint32_t>(edi9));
    ecx13 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx11) + reinterpret_cast<uint32_t>(edx7));
    if (reinterpret_cast<uint32_t>(ecx13) > reinterpret_cast<uint32_t>(edi12)) {
        if (reinterpret_cast<uint32_t>(ecx13) - reinterpret_cast<uint32_t>(edi12) >= reinterpret_cast<uint32_t>(esi5)) 
            goto addr_42b905_2;
        edx7 = g4925b4;
    }
    ecx14 = g4925b4;
    edi15 = g4925b4;
    ecx16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx14) - reinterpret_cast<uint32_t>(eax10));
    edi17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi15) + reinterpret_cast<uint32_t>(edi15));
    if (reinterpret_cast<uint32_t>(ecx16) > reinterpret_cast<uint32_t>(edi17)) {
        if (reinterpret_cast<uint32_t>(ecx16) - reinterpret_cast<uint32_t>(edi17) >= reinterpret_cast<uint32_t>(esi5)) {
            addr_42b905_2:
            return;
        } else {
            eax18 = g4925b4;
            eax10 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(eax18));
        }
    }
    ecx19 = *reinterpret_cast<int32_t*>((reinterpret_cast<uint32_t>(edx7) + 0x40000000 >> 19) * 4 + 0x48bab0);
    if (ecx19 != *reinterpret_cast<int32_t*>((reinterpret_cast<uint32_t>(eax10) + 0x40000000 >> 19) * 4 + 0x48bab0)) {
        eax20 = eax21->f1c;
        g487e24 = eax20;
        if (!eax20 || ((eax22 = g487e18, reinterpret_cast<signed char>(eax20->f4) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax22))) || reinterpret_cast<signed char>(eax20->f0) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax22 + 4)))) {
            fun_42b650(ecx19);
            goto addr_42b905_2;
        } else {
            if (*reinterpret_cast<void***>(eax22 + 4) != eax20->f4 || (*reinterpret_cast<void***>(eax22) != eax20->f0 || (eax20->fa != *reinterpret_cast<void***>(eax22 + 10) || (eax20->f8 != *reinterpret_cast<void***>(eax22 + 8) || (eax20->fc != *reinterpret_cast<void***>(eax22 + 12) || (eax23 = g487e20, !!eax23->f10->fc)))))) {
                fun_42b720(ecx19);
                goto addr_42b905_2;
            }
        }
    }
}

int32_t g4925d0 = 0xd0290000;

struct s383 {
    void** f0;
    signed char[3] pad4;
    int16_t f4;
    int16_t f6;
};

