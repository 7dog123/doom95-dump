struct s694 {
    void** f0;
    signed char[77] pad78;
    int32_t f4e;
};

struct s695 {
    signed char[78] pad78;
    int32_t f4e;
};

struct s696 {
    signed char[16] pad16;
    unsigned char f10;
    signed char[29] pad46;
    struct s694* f2e;
    struct s694* f32;
};

struct s697 {
    signed char[82] pad82;
    struct s696** f52;
};

void** fun_427f70(void** ecx, void** a2) {
    struct s694* ecx3;
    struct s694* eax4;
    void** esi5;
    void*** eax6;
    int32_t edx7;
    struct s695* eax8;
    struct s696** ebx9;
    struct s697* eax10;
    struct s694* eax11;

    ecx3 = eax4;
    esi5 = *eax6;
    edx7 = 0;
    if (!(reinterpret_cast<uint1_t>(eax8->f4e < 0) | reinterpret_cast<uint1_t>(eax8->f4e == 0))) {
        ebx9 = eax10->f52;
        do {
            if ((*ebx9)->f10 & 4) {
                if (ecx3 != (*ebx9)->f2e) {
                    eax11 = (*ebx9)->f2e;
                } else {
                    eax11 = (*ebx9)->f32;
                }
            } else {
                eax11 = reinterpret_cast<struct s694*>(0);
            }
            if (eax11 && reinterpret_cast<signed char>(esi5) > reinterpret_cast<signed char>(eax11->f0)) {
                esi5 = eax11->f0;
            }
            ++edx7;
            ++ebx9;
        } while (edx7 < ecx3->f4e);
    }
    return esi5;
}

struct s698 {
    void** f0;
    signed char[119] pad120;
    int32_t f78;
};

struct s699 {
    void** f0;
    signed char[119] pad120;
    int32_t f78;
};

void** fun_421610(void** ecx) {
    int1_t zf2;
    int1_t zf3;
    int32_t ebx4;
    void** edx5;
    void** eax6;
    int32_t ebx7;
    void** eax8;
    void** ebp9;
    void** esi10;
    struct s698* ebx11;
    int32_t edx12;
    struct s699* eax13;
    void** ebp14;
    void** esi15;

    zf2 = g482a84 == 0;
    if (zf2 || ((zf3 = reinterpret_cast<int1_t>(g482a6c == 2), zf3) || ebx4)) {
        if (*reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(edx5) * 4 - reinterpret_cast<unsigned char>(edx5)) * 8 + 0x464cc8) == 5) {
            eax6 = reinterpret_cast<void**>(0);
        } else {
            if (!ebx7) {
                eax6 = fun_4214b0(eax8, ebp9, esi10);
            } else {
                eax6 = fun_4214b0(eax8, ebp9, esi10);
            }
        }
        ebx11 = reinterpret_cast<struct s698*>(eax8 + reinterpret_cast<unsigned char>(edx5) * 4);
        if (!ebx11->f78) {
            edx12 = 1;
            ebx11->f78 = 1;
            *reinterpret_cast<void***>(eax8 + 0x74) = edx5;
        } else {
            edx12 = 0;
        }
        if (edx12 || eax6) {
            eax6 = reinterpret_cast<void**>(1);
        }
        return eax6;
    } else {
        eax13 = reinterpret_cast<struct s699*>(eax8 + reinterpret_cast<unsigned char>(edx5) * 4);
        if (!eax13->f78) {
            *reinterpret_cast<void***>(eax8 + 0xe0) = *reinterpret_cast<void***>(eax8 + 0xe0) + 6;
            eax13->f78 = 1;
            ebp14 = g482a6c;
            if (!ebp14) {
            }
            fun_4214b0(eax8, ebp9, esi10);
            *reinterpret_cast<void***>(eax8 + 0x74) = edx5;
            esi15 = g482a7c;
            if (reinterpret_cast<int1_t>(eax8 == (reinterpret_cast<uint32_t>(esi15 + reinterpret_cast<unsigned char>(esi15) * 8) * 4 - reinterpret_cast<unsigned char>(esi15)) * 8 + 0x482518)) {
                fun_4312d0(eax8, ebp9);
            }
            return 0;
        } else {
            return 0;
        }
    }
}

void** fun_426250(void** ecx) {
    void** eax2;
    void** eax3;

    eax3 = fun_425fc0(eax2);
    return eax3;
}

struct s700 {
    signed char[12] pad12;
    int16_t fc;
    signed char[64] pad78;
    int32_t f4e;
};

struct s701 {
    signed char[78] pad78;
    int32_t f4e;
};

struct s702 {
    signed char[16] pad16;
    unsigned char f10;
    signed char[29] pad46;
    struct s700* f2e;
    struct s700* f32;
};

struct s703 {
    signed char[82] pad82;
    struct s702** f52;
};

void** fun_4281e0(void** ecx) {
    struct s700* ecx2;
    struct s700* eax3;
    void** esi4;
    void** edx5;
    int32_t ebx6;
    struct s701* eax7;
    struct s702** edx8;
    struct s703* eax9;
    struct s700* eax10;
    void** eax11;

    ecx2 = eax3;
    esi4 = edx5;
    ebx6 = 0;
    if (!(reinterpret_cast<uint1_t>(eax7->f4e < 0) | reinterpret_cast<uint1_t>(eax7->f4e == 0))) {
        edx8 = eax9->f52;
        do {
            if ((*edx8)->f10 & 4) {
                if (ecx2 != (*edx8)->f2e) {
                    eax10 = (*edx8)->f2e;
                } else {
                    eax10 = (*edx8)->f32;
                }
            } else {
                eax10 = reinterpret_cast<struct s700*>(0);
            }
            if (eax10 && (eax11 = reinterpret_cast<void**>(static_cast<int32_t>(eax10->fc)), reinterpret_cast<signed char>(eax11) < reinterpret_cast<signed char>(esi4))) {
                esi4 = eax11;
            }
            ++ebx6;
            ++edx8;
        } while (ebx6 < ecx2->f4e);
    }
    return esi4;
}

void** fun_4257d0(void** ecx) {
    void** edi2;
    void** eax3;
    void** eax4;
    void** eax5;
    void** eax6;
    void** ecx7;
    void** esi8;

    eax3 = fun_41d460(ecx, edi2);
    fun_41d460(eax3, edi2);
    eax4 = fun_425180(38);
    *reinterpret_cast<void***>(eax4 + 80) = reinterpret_cast<void**>(0x20000);
    eax5 = fun_41d460(38, edi2);
    eax6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax5) & 3);
    ecx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 96)) - reinterpret_cast<unsigned char>(eax6));
    *reinterpret_cast<void***>(eax4 + 96) = ecx7;
    if (reinterpret_cast<signed char>(ecx7) < reinterpret_cast<signed char>(1)) {
        *reinterpret_cast<void***>(eax4 + 96) = reinterpret_cast<void**>(1);
    }
    if (reinterpret_cast<signed char>(ecx) > reinterpret_cast<signed char>(12) || reinterpret_cast<signed char>(ecx) < reinterpret_cast<signed char>(9)) {
        if (reinterpret_cast<signed char>(ecx) >= reinterpret_cast<signed char>(9)) {
            addr_425840_5:
            return eax6;
        }
    }
    eax6 = fun_424ae0(ecx7, edi2, esi8);
    goto addr_425840_5;
}

struct s704 {
    signed char[20] pad20;
    void** f14;
};

uint32_t fun_423310(void** ecx) {
    void** eax2;
    struct s704* eax3;
    void** eax4;
    void** eax5;
    void** eax6;
    void** eax7;
    void** eax8;

    eax2 = eax3->f14;
    *reinterpret_cast<unsigned char*>(&eax2) = reinterpret_cast<uint1_t>(eax2 == *reinterpret_cast<void***>(eax4 + 56));
    fun_423010(eax4);
    eax5 = g4837a0;
    *reinterpret_cast<void***>(eax4 + 56) = eax5;
    eax6 = g4837ac;
    *reinterpret_cast<void***>(eax4 + 60) = eax6;
    if (!(reinterpret_cast<unsigned char>(eax2) & 0xff)) {
        if (reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 20)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 68))) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax4 + 60))) {
            addr_423364_3:
            eax7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 60)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 56)));
            *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax7) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax4 + 68)));
            return reinterpret_cast<unsigned char>(eax7) & 0xff;
        } else {
            eax8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 60)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 68)));
        }
    } else {
        eax8 = *reinterpret_cast<void***>(eax4 + 56);
    }
    *reinterpret_cast<void***>(eax4 + 20) = eax8;
    goto addr_423364_3;
}

struct s705 {
    signed char[12] pad12;
    int32_t fc;
};

struct s706 {
    signed char[8] pad8;
    int32_t f8;
};

struct s707 {
    signed char[12] pad12;
    int32_t fc;
};

void** fun_424290(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    struct s705* edx6;
    struct s706* eax7;
    void** edx8;
    struct s707* eax9;
    void** ebp10;
    void** edi11;
    void** esi12;
    void** eax13;

    __asm__("shrd eax, edx, 0x10");
    __asm__("shrd eax, edx, 0x10");
    if ((edx6->fc >> 8) * eax7->f8 - (reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx8 + 8)) >> 8) * eax9->fc) {
        __asm__("shrd eax, edx, 0x10");
        __asm__("shrd eax, edx, 0x10");
        eax13 = fun_411d60(edx8, ebp10, edi11, esi12, ecx);
    } else {
        eax13 = reinterpret_cast<void**>(0);
    }
    return eax13;
}

struct s708 {
    int32_t f0;
    void** f4;
};

void** fun_430f50(void** ecx) {
    void** ecx2;
    void** eax3;
    void** edx4;
    void** eax5;
    void** ebx6;
    void** edx7;
    struct s708* edx8;
    void** eax9;

    ecx2 = eax3;
    edx4 = g5f1364;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx4) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx4 == 0)) {
        addr_430fb1_2:
        return eax5;
    } else {
        eax5 = reinterpret_cast<void**>(0);
        ebx6 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(edx4) * 4 - reinterpret_cast<unsigned char>(edx4)) * 4);
        do {
            edx7 = g5f22cc;
            edx8 = reinterpret_cast<struct s708*>(reinterpret_cast<unsigned char>(edx7) + reinterpret_cast<unsigned char>(eax5));
            if (!edx8->f0) 
                continue;
            if (ecx2 == edx8->f4) 
                break;
            eax5 = eax5 + 12;
        } while (reinterpret_cast<signed char>(eax5) < reinterpret_cast<signed char>(ebx6));
        goto addr_430fb1_2;
    }
    if (edx8->f0) {
        eax9 = fun_41af00(ecx2);
        if (eax9) {
            eax9 = fun_41aea0(ecx2);
        }
        edx8->f0 = 0;
        return eax9;
    }
}

struct s709 {
    signed char[112] pad112;
    int32_t f70;
};

struct s710 {
    signed char[112] pad112;
    int32_t f70;
};

struct s711 {
    signed char[140] pad140;
    void** f8c;
};

struct s712 {
    signed char[164] pad164;
    void** fa4;
};

struct s713 {
    signed char[152] pad152;
    void** f98;
};

struct s714 {
    signed char[160] pad160;
    int32_t fa0;
};

struct s715 {
    signed char[132] pad132;
    void** f84;
};

struct s716 {
    signed char[156] pad156;
    void** f9c;
};

struct s717 {
    signed char[128] pad128;
    void** f80;
};

struct s718 {
    signed char[160] pad160;
    void** fa0;
};

struct s719 {
    signed char[156] pad156;
    void** f9c;
};

struct s720 {
    signed char[148] pad148;
    void** f94;
};

struct s721 {
    signed char[136] pad136;
    void** f88;
};

struct s722 {
    signed char[168] pad168;
    void** fa8;
};

struct s723 {
    signed char[144] pad144;
    void** f90;
};

struct s724 {
    signed char[164] pad164;
    int32_t fa4;
};

struct s725 {
    signed char[116] pad116;
    void** f74;
};

struct s726 {
    signed char[116] pad116;
    int32_t f74;
};

struct s727 {
    signed char[116] pad116;
    int32_t f74;
};

struct s728 {
    signed char[116] pad116;
    int32_t f74;
};

struct s729 {
    signed char[116] pad116;
    int32_t f74;
};

struct s730 {
    signed char[116] pad116;
    int32_t f74;
};

struct s731 {
    signed char[116] pad116;
    int32_t f74;
};

struct s732 {
    signed char[116] pad116;
    int32_t f74;
};

struct s733 {
    signed char[116] pad116;
    int32_t f74;
};

struct s734 {
    signed char[116] pad116;
    int32_t f74;
};

void** fun_426420(void** ecx) {
    struct s709* eax2;
    int32_t edx3;
    struct s710* eax4;
    void* eax5;
    struct s711* eax6;
    struct s712* eax7;
    int1_t zf8;
    struct s713* eax9;
    struct s714* eax10;
    int1_t zf11;
    struct s715* eax12;
    struct s716* eax13;
    struct s717* eax14;
    struct s718* eax15;
    struct s719* eax16;
    struct s720* eax17;
    struct s721* eax18;
    struct s722* eax19;
    struct s723* eax20;
    struct s724* eax21;
    int1_t zf22;
    struct s725* eax23;
    struct s726* eax24;
    struct s727* eax25;
    struct s728* eax26;
    struct s729* eax27;
    struct s730* eax28;
    struct s731* eax29;
    struct s732* eax30;
    struct s733* eax31;
    struct s734* eax32;

    if (eax2->f70 != 6) {
        if (eax2->f70 != 8) {
            edx3 = 1;
        } else {
            edx3 = 2;
        }
    } else {
        edx3 = 40;
    }
    if (*reinterpret_cast<int32_t*>((eax4->f70 * 4 - eax4->f70) * 8 + 0x464cc8) == 5 || edx3 <= *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax5) + *reinterpret_cast<int32_t*>((eax4->f70 * 4 - eax4->f70) * 8 + 0x464cc8) * 4 + 0x9c)) {
        return 1;
    } else {
        do {
            if (!eax6->f8c || (!eax7->fa4 || (zf8 = 0 == g481250, !zf8))) {
                if (!eax9->f98 || (2 >= eax10->fa0 || (zf11 = 0 == g481264, zf11))) {
                    if (!eax12->f84 || !eax13->f9c) {
                        if (!eax14->f80 || !eax15->fa0) {
                            ecx = eax16->f9c;
                            if (!ecx) {
                                if (ecx == eax17->f94) {
                                    if (eax17->f94 == eax18->f88 || eax17->f94 == eax19->fa8) {
                                        if (!eax20->f90 || (eax21->fa4 <= 40 || (zf22 = 0 == g481250, !zf22))) {
                                            eax23->f74 = reinterpret_cast<void**>(0);
                                        } else {
                                            eax24->f74 = 6;
                                        }
                                    } else {
                                        eax25->f74 = 4;
                                    }
                                } else {
                                    eax26->f74 = 7;
                                }
                            } else {
                                eax27->f74 = 1;
                            }
                        } else {
                            eax28->f74 = 2;
                        }
                    } else {
                        eax29->f74 = 3;
                    }
                } else {
                    eax30->f74 = 8;
                }
            } else {
                eax31->f74 = 5;
            }
        } while (eax32->f74 == 10);
        fun_425fc0(ecx);
        return 0;
    }
}

struct s735 {
    signed char[18] pad18;
    void** f12;
    signed char[3] pad22;
    void** f16;
    signed char[43] pad66;
    int32_t f42;
    signed char[8] pad78;
    void** f4e;
    signed char[3] pad82;
    int32_t f52;
};

struct s736 {
    signed char[52] pad52;
    struct s735** f34;
};

struct s737 {
    signed char[16] pad16;
    unsigned char f10;
    signed char[5] pad22;
    int16_t f16;
};

struct s738 {
    void** f0;
    signed char[13] pad14;
    struct s735* fe;
};

void** fun_41ed10(void** ecx) {
    void** eax2;
    int32_t edx3;
    struct s735* eax4;
    struct s736* edx5;
    struct s735* ebx6;
    int32_t edx7;
    void** eax8;
    int32_t eax9;
    void** edi10;
    void** esi11;
    int32_t ebp12;
    struct s737* edx13;
    int1_t less_or_equal14;
    void** edi15;
    struct s738* eax16;

    g48370c = eax2;
    edx3 = g4654c4;
    eax4 = *edx5->f34;
    g4654c4 = edx3 + 1;
    ebx6 = eax4;
    edx7 = g4654c4;
    if ((edx7 != eax4->f42 || (eax8 = reinterpret_cast<void**>(1), reinterpret_cast<signed char>(1) < reinterpret_cast<signed char>(ebx6->f12))) && (eax9 = g4654c4, ebx6->f42 = eax9, edi10 = ebx6->f4e, ebx6->f12 = reinterpret_cast<void**>(1), eax8 = g48370c, esi11 = reinterpret_cast<void**>(0), ebx6->f16 = eax8, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi10 == 0)))) {
        ebp12 = 0;
        while (1) {
            edx13 = *reinterpret_cast<struct s737**>(ebx6->f52 + ebp12);
            if (!(edx13->f10 & 4)) 
                goto addr_41ecf6_5;
            fun_424300(0);
            less_or_equal14 = reinterpret_cast<int32_t>(g483dd8) <= reinterpret_cast<int32_t>(0);
            if (less_or_equal14) 
                goto addr_41ecf6_5;
            edi15 = g4845d4;
            eax16 = reinterpret_cast<struct s738*>(edi15 + edx13->f16 * 18);
            if (ebx6 != eax16->fe) {
            }
            if (edx13->f10 & 64) 
                goto addr_41ece4_11;
            addr_41ecf1_13:
            fun_41ec50(0);
            goto addr_41ecf6_5;
            addr_41ece4_11:
            if (0) {
                addr_41ecf6_5:
                ++esi11;
                eax8 = ebx6->f4e;
                ebp12 = ebp12 + 4;
                if (reinterpret_cast<signed char>(esi11) >= reinterpret_cast<signed char>(eax8)) 
                    break;
            } else {
                goto addr_41ecf1_13;
            }
        }
    }
    return eax8;
}

void** fun_427480(void** ecx, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** ebx6;
    void** v7;
    void** v8;
    void** edx9;
    void** v10;
    void** esi11;
    void** ecx12;
    void** eax13;
    void** eax14;
    int32_t eax15;
    void** ecx16;
    int32_t ebx17;
    int32_t eax18;
    void** eax19;
    void** eax20;
    void** eax21;

    v4 = reinterpret_cast<void**>(__return_address());
    v5 = ebx6;
    v7 = ecx;
    v8 = edx9;
    v10 = esi11;
    ecx12 = g4845b4;
    eax13 = fun_4348a0(ecx12, v10, v8);
    g4845c0 = eax13 + 8;
    g4845b4 = eax13;
    eax14 = fun_434700(eax13);
    eax15 = reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax14) - (reinterpret_cast<signed char>(eax14) >> 31)) >> 1;
    ecx16 = g4845b4;
    if (!(reinterpret_cast<uint1_t>(eax15 < 0) | reinterpret_cast<uint1_t>(eax15 == 0))) {
        ebx17 = eax15 * 2;
        eax18 = 0;
        do {
            eax18 = eax18 + 2;
        } while (eax18 < ebx17);
    }
    g4845ac = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx16)))) << 16;
    g4845b0 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx16 + 2)))) << 16);
    eax19 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx16 + 6))));
    g4845a4 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx16 + 4))));
    g4845bc = eax19;
    g4845b4 = ecx16;
    eax20 = fun_4375e0(ecx16, v10, v8);
    g4845b8 = eax20;
    eax21 = fun_442b80(ecx16, v10, v8, v7, v5, v4);
    return eax21;
}

void fun_426c60(void** ecx, void** a2, void** a3) {
    void** v4;
    void** esi5;
    void** ecx6;
    void** eax7;
    void** eax8;
    void** edi9;
    void** eax10;
    uint32_t ebx11;
    void** eax12;
    uint32_t esi13;
    void** edx14;

    v4 = esi5;
    ecx6 = eax7;
    eax8 = fun_434700(ecx6);
    g4845e4 = reinterpret_cast<unsigned char>(eax8) >> 2;
    eax10 = fun_4375e0(ecx6, edi9, v4);
    g4845f4 = eax10;
    ebx11 = 0;
    eax12 = fun_4348a0(ecx6, edi9, v4);
    esi13 = g4845e4;
    edx14 = g4845f4;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi13) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi13 == 0))) {
        do {
            *reinterpret_cast<void***>(edx14) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax12)))) << 16);
            ++ebx11;
            edx14 = edx14 + 8;
            ecx6 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax12 + 2)))) << 16);
            eax12 = eax12 + 4;
            *reinterpret_cast<void***>(edx14 + 0xfffffffc) = ecx6;
        } while (reinterpret_cast<int32_t>(ebx11) < reinterpret_cast<int32_t>(esi13));
    }
    g4845e4 = esi13;
    fun_437550(ecx6);
    return;
}

void fun_426ee0(void** ecx, void** a2, void** a3) {
    void** ecx4;
    void** eax5;
    void** eax6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    void** v11;
    void** ebp12;
    void** edi13;
    void** esi14;
    void** edi15;
    void** v16;
    void** v17;
    void** eax18;
    void** edx19;
    void** ebp20;
    void** ebx21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** eax26;

    ecx4 = eax5;
    eax6 = fun_434700(ecx4);
    g4845ec = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax6) / 26);
    eax9 = fun_4375e0(ecx4, v7, v8);
    g4845e0 = eax9;
    fun_442b80(ecx4, v10, v11, ebp12, edi13, esi14);
    edi15 = reinterpret_cast<void**>(0);
    eax18 = fun_4348a0(ecx4, v16, v17);
    edx19 = g4845e0;
    ebp20 = g4845ec;
    ebx21 = eax18;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebp20) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebp20 == 0))) {
        ecx4 = eax18 + 12;
        do {
            *reinterpret_cast<void***>(edx19) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebx21)))) << 16);
            *reinterpret_cast<void***>(edx19 + 4) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebx21 + 2)))) << 16);
            eax22 = fun_42cf60(ecx4);
            eax23 = eax22;
            *reinterpret_cast<void***>(edx19 + 8) = eax23;
            eax24 = fun_42cf60(ecx4);
            eax25 = eax24;
            *reinterpret_cast<void***>(edx19 + 10) = eax25;
            ++edi15;
            *reinterpret_cast<void***>(edx19 + 12) = *reinterpret_cast<void***>(ebx21 + 20);
            edx19 = edx19 + 86;
            ebx21 = ebx21 + 26;
            *reinterpret_cast<void***>(edx19 + 0xffffffb8) = *reinterpret_cast<void***>(ebx21 + 22);
            ecx4 = ecx4 + 26;
            *reinterpret_cast<void***>(edx19 + 0xffffffba) = *reinterpret_cast<void***>(ebx21 + 0xfffffffe);
            eax26 = g4845ec;
            *reinterpret_cast<int32_t*>(edx19 + 0xfffffff0) = 0;
        } while (reinterpret_cast<signed char>(edi15) < reinterpret_cast<signed char>(eax26));
    }
    fun_437550(ecx4);
    return;
}

void fun_427370(void** ecx, void** a2, void** a3) {
    void** eax4;
    void** eax5;
    void** v6;
    void** v7;
    void** eax8;
    void** v9;
    void** v10;
    void** ebp11;
    void** edi12;
    void** esi13;
    uint32_t ebp14;
    void** v15;
    void** v16;
    void** eax17;
    void** edx18;
    uint32_t esi19;
    void** ecx20;
    void** ebx21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** eax26;
    void** eax27;
    void** v28;
    void** eax29;
    uint32_t eax30;

    eax5 = fun_434700(eax4);
    g4845d0 = reinterpret_cast<unsigned char>(eax5) / 30;
    eax8 = fun_4375e0(eax4, v6, v7);
    g4845d4 = eax8;
    fun_442b80(eax4, v9, v10, ebp11, edi12, esi13);
    ebp14 = 0;
    eax17 = fun_4348a0(eax4, v15, v16);
    edx18 = g4845d4;
    esi19 = g4845d0;
    ecx20 = eax17;
    ebx21 = eax17;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi19) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi19 == 0))) {
        ecx20 = eax17 + 4;
        do {
            *reinterpret_cast<void***>(edx18) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebx21)))) << 16);
            *reinterpret_cast<void***>(edx18 + 4) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebx21 + 2)))) << 16);
            eax22 = fun_42d020(ecx20);
            eax23 = eax22;
            *reinterpret_cast<void***>(edx18 + 8) = eax23;
            eax24 = fun_42d020(ecx20);
            eax25 = eax24;
            *reinterpret_cast<void***>(edx18 + 10) = eax25;
            eax26 = fun_42d020(ecx20);
            eax27 = eax26;
            *reinterpret_cast<void***>(edx18 + 12) = eax27;
            ++ebp14;
            ebx21 = ebx21 + 30;
            edx18 = edx18 + 18;
            v28 = reinterpret_cast<void**>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebx21 + 28)) * 86);
            eax29 = g4845e0;
            ecx20 = ecx20 + 30;
            *reinterpret_cast<void***>(edx18 + 0xfffffffc) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax29) + reinterpret_cast<unsigned char>(v28));
            eax30 = g4845d0;
        } while (reinterpret_cast<int32_t>(ebp14) < reinterpret_cast<int32_t>(eax30));
    }
    fun_437550(ecx20);
    return;
}

void fun_4271c0(void** ecx, void** a2, void** a3) {
    void** v4;
    void** esi5;
    void** v6;
    void** edi7;
    void** v8;
    void** ebp9;
    void** eax10;
    void** eax11;
    void** v12;
    void** eax13;
    void** v14;
    void** edx15;
    void** ebp16;
    void** v17;
    void** eax18;
    void** ebx19;
    void** edx20;
    void** v21;
    void** ecx22;
    void** eax23;
    void** esi24;
    void** eax25;
    void** eax26;
    void** eax27;
    void** eax28;
    int32_t eax29;
    void** edx30;
    int32_t eax31;
    void** edx32;
    void** esi33;

    v4 = esi5;
    v6 = edi7;
    v8 = ebp9;
    eax11 = fun_434700(eax10);
    g4845c8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax11) / 14);
    eax13 = fun_4375e0(eax10, v12, v8);
    g4845d8 = eax13;
    fun_442b80(eax10, v14, v8, v6, v4, edx15);
    ebp16 = reinterpret_cast<void**>(0);
    eax18 = fun_4348a0(eax10, v17, v8);
    ebx19 = g4845d8;
    edx20 = g4845c8;
    v21 = eax18;
    ecx22 = eax18;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx20) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx20 == 0))) {
        do {
            *reinterpret_cast<void***>(ebx19 + 16) = *reinterpret_cast<void***>(ecx22 + 4);
            *reinterpret_cast<void***>(ebx19 + 18) = *reinterpret_cast<void***>(ecx22 + 6);
            *reinterpret_cast<void***>(ebx19 + 20) = *reinterpret_cast<void***>(ecx22 + 8);
            eax23 = g4845f4;
            esi24 = eax23 + reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx22)) * 8;
            *reinterpret_cast<void***>(ebx19) = esi24;
            eax25 = eax23 + reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx22 + 2)) * 8;
            *reinterpret_cast<void***>(ebx19 + 4) = eax25;
            *reinterpret_cast<void***>(ebx19 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi24)));
            *reinterpret_cast<void***>(ebx19 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax25 + 4)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi24 + 4)));
            if (*reinterpret_cast<void***>(ebx19 + 8)) {
                if (*reinterpret_cast<void***>(ebx19 + 12)) {
                    eax26 = fun_411d60(ecx22, v21, v8, v6, v4);
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax26) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax26 == 0)) {
                        *reinterpret_cast<void***>(ebx19 + 42) = reinterpret_cast<void**>(3);
                    } else {
                        *reinterpret_cast<void***>(ebx19 + 42) = reinterpret_cast<void**>(2);
                    }
                } else {
                    *reinterpret_cast<void***>(ebx19 + 42) = *reinterpret_cast<void***>(ebx19 + 12);
                }
            } else {
                *reinterpret_cast<void***>(ebx19 + 42) = reinterpret_cast<void**>(1);
            }
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi24)) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax25))) {
                *reinterpret_cast<void***>(ebx19 + 34) = *reinterpret_cast<void***>(eax25);
                eax27 = *reinterpret_cast<void***>(esi24);
            } else {
                *reinterpret_cast<void***>(ebx19 + 34) = *reinterpret_cast<void***>(esi24);
                eax27 = *reinterpret_cast<void***>(eax25);
            }
            *reinterpret_cast<void***>(ebx19 + 38) = eax27;
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi24 + 4)) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax25 + 4))) {
                *reinterpret_cast<void***>(ebx19 + 30) = *reinterpret_cast<void***>(eax25 + 4);
                eax28 = *reinterpret_cast<void***>(esi24 + 4);
            } else {
                *reinterpret_cast<void***>(ebx19 + 30) = *reinterpret_cast<void***>(esi24 + 4);
                eax28 = *reinterpret_cast<void***>(eax25 + 4);
            }
            *reinterpret_cast<void***>(ebx19 + 26) = eax28;
            *reinterpret_cast<void***>(ebx19 + 22) = *reinterpret_cast<void***>(ecx22 + 10);
            *reinterpret_cast<void***>(ebx19 + 24) = *reinterpret_cast<void***>(ecx22 + 12);
            eax29 = reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebx19 + 22));
            if (eax29 == -1) {
                *reinterpret_cast<void***>(ebx19 + 46) = reinterpret_cast<void**>(0);
            } else {
                edx30 = g4845d4;
                *reinterpret_cast<void***>(ebx19 + 46) = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx30 + eax29 * 18) + 14);
            }
            eax31 = reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebx19 + 24));
            if (eax31 == -1) {
                *reinterpret_cast<void***>(ebx19 + 50) = reinterpret_cast<void**>(0);
            } else {
                edx32 = g4845d4;
                *reinterpret_cast<void***>(ebx19 + 50) = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx32 + eax31 * 18) + 14);
            }
            esi33 = g4845c8;
            ++ebp16;
            ecx22 = ecx22 + 14;
            ebx19 = ebx19 + 62;
        } while (reinterpret_cast<signed char>(ebp16) < reinterpret_cast<signed char>(esi33));
    }
    fun_437550(ecx22);
    return;
}

void** g4845f0 = reinterpret_cast<void**>(66);

void fun_426e30(void** ecx, void** a2, void** a3) {
    void** v4;
    void** esi5;
    void** eax6;
    void** eax7;
    void** edi8;
    void** eax9;
    void** eax10;
    void** ecx11;
    void** edx12;
    void** ebx13;
    void** esi14;
    void** eax15;
    void** edx16;

    v4 = esi5;
    eax7 = fun_434700(eax6);
    g4845f0 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax7) >> 2);
    eax9 = fun_4375e0(eax6, edi8, v4);
    g4845dc = eax9;
    eax10 = fun_4348a0(eax6, edi8, v4);
    ecx11 = eax10;
    fun_442b80(ecx11, edi8, v4, edx12, ecx, ebx13);
    esi14 = g4845f0;
    eax15 = g4845dc;
    edx16 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi14) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi14 == 0))) {
        do {
            ++edx16;
            *reinterpret_cast<void***>(eax15 + 4) = *reinterpret_cast<void***>(ecx11);
            eax15 = eax15 + 8;
            ecx11 = ecx11 + 4;
            *reinterpret_cast<void***>(eax15 + 0xfffffffe) = *reinterpret_cast<void***>(ecx11 + 2);
        } while (reinterpret_cast<signed char>(edx16) < reinterpret_cast<signed char>(esi14));
    }
    g4845f0 = esi14;
    fun_437550(ecx11);
    return;
}

void fun_426fd0(void** ecx, void** a2, void** a3) {
    void** eax4;
    void** eax5;
    void** v6;
    void** v7;
    void** eax8;
    void** v9;
    void** v10;
    void** eax11;
    void** v12;
    void** v13;
    void** eax14;
    void** ecx15;
    void** v16;
    int32_t esi17;
    void** ebp18;
    void** edi19;
    void** v20;
    void** v21;
    void** ecx22;
    void** edx23;
    void** eax24;
    void** edx25;
    void** esi26;

    eax5 = fun_434700(eax4);
    g4845cc = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax5) / 28);
    eax8 = fun_4375e0(eax4, v6, v7);
    g4845c4 = eax8;
    eax11 = fun_4348a0(eax4, v9, v10);
    v12 = reinterpret_cast<void**>(0);
    v13 = eax11;
    eax14 = g4845c4;
    ecx15 = g4845cc;
    v16 = eax14;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx15) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx15 == 0))) {
        do {
            *reinterpret_cast<void***>(v16) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v13)))) << 16);
            *reinterpret_cast<void***>(v16 + 4) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v13 + 2)))) << 16);
            *reinterpret_cast<void***>(v16 + 8) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v13 + 4)))) << 16);
            esi17 = 0;
            ebp18 = v13 + 8;
            edi19 = v16;
            *reinterpret_cast<void***>(v16 + 12) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v13 + 6)))) << 16);
            v20 = v16;
            v21 = v13;
            do {
                ecx22 = ebp18;
                *reinterpret_cast<void***>(v20 + 48) = *reinterpret_cast<void***>(v21 + 24);
                edx23 = edi19;
                eax24 = v13 + esi17 * 8;
                do {
                    edx23 = edx23 + 4;
                    eax24 = eax24 + 2;
                    *reinterpret_cast<void***>(edx23 + 12) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax24 + 8)))) << 16);
                } while (eax24 != ecx22);
                ebp18 = ebp18 + 8;
                edi19 = edi19 + 16;
                ++esi17;
                ecx15 = v20 + 2;
                v20 = ecx15;
                v21 = v21 + 2;
            } while (esi17 < 2);
            edx25 = g4845cc;
            esi26 = v12 + 1;
            v12 = esi26;
            v16 = v16 + 52;
            v13 = v13 + 28;
        } while (reinterpret_cast<signed char>(esi26) < reinterpret_cast<signed char>(edx25));
    }
    fun_437550(ecx15);
    return;
}

void** g4845f8 = reinterpret_cast<void**>(0xc0);

void fun_426cf0(void** ecx, void** a2, void** a3) {
    void** ecx4;
    void** eax5;
    void** eax6;
    void** v7;
    void** v8;
    void** eax9;
    void** v10;
    void** v11;
    void** v12;
    void** ebp13;
    void** edi14;
    void** esi15;
    void** v16;
    void** v17;
    void** eax18;
    void** ebx19;
    void** edx20;
    void** eax21;
    void** ebx22;
    void** ecx23;
    void** ebx24;
    int32_t ecx25;
    void* v26;
    void** ecx27;
    int32_t edi28;

    ecx4 = eax5;
    eax6 = fun_434700(ecx4);
    g4845f8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax6) / 12);
    eax9 = fun_4375e0(ecx4, v7, v8);
    g4845e8 = eax9;
    fun_442b80(ecx4, v10, v11, v12, ebp13, edi14);
    esi15 = reinterpret_cast<void**>(0);
    eax18 = fun_4348a0(ecx4, v16, v17);
    ebx19 = g4845f8;
    edx20 = eax18;
    eax21 = g4845e8;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx19) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx19 == 0))) {
        do {
            ebx22 = g4845f4;
            *reinterpret_cast<void***>(eax21) = ebx22 + reinterpret_cast<int16_t>(*reinterpret_cast<void***>(edx20)) * 8;
            *reinterpret_cast<void***>(eax21 + 4) = ebx22 + reinterpret_cast<int16_t>(*reinterpret_cast<void***>(edx20 + 2)) * 8;
            *reinterpret_cast<void***>(eax21 + 12) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(edx20 + 4)))) << 16);
            *reinterpret_cast<void***>(eax21 + 8) = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(edx20 + 10)))) << 16);
            ecx23 = g4845d8;
            ebx24 = ecx23 + reinterpret_cast<int16_t>(*reinterpret_cast<void***>(edx20 + 6)) * 62;
            *reinterpret_cast<void***>(eax21 + 20) = ebx24;
            ecx25 = reinterpret_cast<int16_t>(*reinterpret_cast<void***>(edx20 + 8));
            v26 = reinterpret_cast<void*>(*reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(ebx24 + ecx25 * 2) + 22) * 18);
            ecx27 = g4845d4;
            *reinterpret_cast<void***>(eax21 + 16) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v26) + reinterpret_cast<unsigned char>(ecx27));
            *reinterpret_cast<void***>(eax21 + 24) = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ecx27 + *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(ebx24 + ecx25 * 2) + 22) * 18) + 14);
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx24 + 16)) & 4)) {
                *reinterpret_cast<void***>(eax21 + 28) = reinterpret_cast<void**>(0);
            } else {
                edi28 = ecx25;
                *reinterpret_cast<uint16_t*>(&edi28) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&edi28) ^ 1);
                *reinterpret_cast<void***>(eax21 + 28) = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ecx27 + *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(ebx24 + edi28 * 2) + 22) * 18) + 14);
            }
            ecx4 = g4845f8;
            ++esi15;
            eax21 = eax21 + 32;
            edx20 = edx20 + 12;
        } while (reinterpret_cast<signed char>(esi15) < reinterpret_cast<signed char>(ecx4));
    }
    fun_437550(ecx4);
    return;
}

struct s739 {
    signed char[14] pad14;
    signed char fe;
};

void fun_427540(void** ecx, void** a2, void** a3) {
    void** eax4;
    void** ebx5;
    void** edx6;
    void** ecx7;
    void** eax8;
    void** edi9;
    void** esi10;
    void** ebp11;
    void** v12;
    void** v13;
    void** eax14;
    void** ebp15;
    void** esi16;
    void** edx17;
    void** v18;
    void** edi19;
    void** ecx20;
    void** ebx21;
    void** eax22;
    void** v23;
    void** v24;
    int32_t edx25;
    int32_t v26;
    int32_t v27;
    int32_t edx28;
    int32_t v29;
    int32_t v30;
    void** edx31;
    void** ebx32;
    void** eax33;
    int32_t v34;
    void** eax35;
    int32_t v36;
    uint32_t edi37;
    void** edx38;
    void** eax39;
    int32_t v40;
    uint32_t ebx41;
    int32_t eax42;
    int32_t v43;
    void** edx44;
    void** edi45;

    eax4 = g4845dc;
    ebx5 = g4845f0;
    edx6 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx5) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx5 == 0))) {
        do {
            ecx7 = g4845e8;
            ++edx6;
            eax4 = eax4 + 8;
            ecx = g4845f0;
            *reinterpret_cast<signed char*>(eax4 + 0xfffffff8) = (*reinterpret_cast<struct s739**>(reinterpret_cast<unsigned char>(ecx7) + (reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax4 + 6)))) << 5) + 16))->fe;
        } while (reinterpret_cast<signed char>(edx6) < reinterpret_cast<signed char>(ecx));
    }
    eax8 = g4845d8;
    edi9 = g4845c8;
    esi10 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi9 == 0))) {
        do {
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax8 + 46) + 78) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax8 + 46) + 78) + 1;
            if (*reinterpret_cast<void***>(eax8 + 50) && *reinterpret_cast<void***>(eax8 + 50) != *reinterpret_cast<void***>(eax8 + 46)) {
                ecx = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax8 + 50) + 78) + 1;
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax8 + 50) + 78) = ecx;
            }
            ebp11 = g4845c8;
            ++esi10;
            eax8 = eax8 + 62;
        } while (reinterpret_cast<signed char>(esi10) < reinterpret_cast<signed char>(ebp11));
    }
    eax14 = fun_4375e0(ecx, v12, v13);
    ebp15 = g4845e0;
    esi16 = eax14;
    edx17 = g4845ec;
    v18 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx17) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx17 == 0))) {
        do {
            fun_41d4c0(ecx);
            edi19 = reinterpret_cast<void**>(0);
            ecx20 = g4845d8;
            ebx21 = g4845c8;
            *reinterpret_cast<void***>(ebp15 + 82) = esi16;
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx21) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx21 == 0))) {
                do {
                    if (ebp15 == *reinterpret_cast<void***>(ecx20 + 46) || ebp15 == *reinterpret_cast<void***>(ecx20 + 50)) {
                        *reinterpret_cast<void***>(esi16) = ecx20;
                        fun_41d4e0();
                        esi16 = esi16 + 4;
                        fun_41d4e0();
                    }
                    eax22 = g4845c8;
                    ++edi19;
                    ecx20 = ecx20 + 62;
                } while (reinterpret_cast<signed char>(edi19) < reinterpret_cast<signed char>(eax22));
            }
            if (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(esi16) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp15 + 82))) >> 2 != *reinterpret_cast<void***>(ebp15 + 78)) {
                fun_43bd40(ecx20, "P_GroupLines: miscounted", v23, v24);
            }
            edx25 = v26 + v27;
            *reinterpret_cast<int32_t*>(ebp15 + 54) = edx25 - (edx25 >> 31) >> 1;
            edx28 = v29 + v30;
            *reinterpret_cast<int32_t*>(ebp15 + 58) = edx28 - (edx28 >> 31) >> 1;
            edx31 = g4845b0;
            ebx32 = g4845bc;
            eax33 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v34 - reinterpret_cast<unsigned char>(edx31) + 0x200000) >> 23);
            if (reinterpret_cast<signed char>(eax33) >= reinterpret_cast<signed char>(ebx32)) {
                eax33 = ebx32 + 0xffffffff;
            }
            *reinterpret_cast<void***>(ebp15 + 26) = eax33;
            ecx = g4845b0;
            eax35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v36 - reinterpret_cast<unsigned char>(ecx) - 0x200000) >> 23);
            if (reinterpret_cast<signed char>(eax35) < reinterpret_cast<signed char>(0)) {
                eax35 = reinterpret_cast<void**>(0);
            }
            *reinterpret_cast<void***>(ebp15 + 30) = eax35;
            edi37 = g4845ac;
            edx38 = g4845a4;
            eax39 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v40 - edi37 + 0x200000) >> 23);
            if (reinterpret_cast<signed char>(eax39) >= reinterpret_cast<signed char>(edx38)) {
                eax39 = edx38 + 0xffffffff;
            }
            *reinterpret_cast<void***>(ebp15 + 38) = eax39;
            ebx41 = g4845ac;
            eax42 = reinterpret_cast<int32_t>(v43 - ebx41 - 0x200000) >> 23;
            if (eax42 < 0) {
                eax42 = 0;
            }
            ebp15 = ebp15 + 86;
            edx44 = g4845ec;
            edi45 = v18 + 1;
            *reinterpret_cast<int32_t*>(ebp15 + 0xffffffcc) = eax42;
            v18 = edi45;
        } while (reinterpret_cast<signed char>(edi45) < reinterpret_cast<signed char>(edx44));
    }
    return;
}

void fun_427120(void** ecx, void** a2, void** a3) {
    int32_t v4;
    int32_t edi5;
    void** ebp6;
    void** eax7;
    void** ecx8;
    void** eax9;
    uint32_t eax10;
    uint32_t esi11;
    void** edx12;
    uint32_t ebx13;
    void** edi14;

    v4 = edi5;
    eax7 = fun_4348a0(ecx, ebp6, *reinterpret_cast<void***>(&v4));
    ecx8 = eax7;
    eax9 = fun_434700(ecx8);
    eax10 = reinterpret_cast<unsigned char>(eax9) / 10;
    esi11 = eax10;
    edx12 = ecx8;
    ebx13 = 0;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax10) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax10 == 0))) {
        while (1) {
            edi14 = g481264;
            ecx8 = reinterpret_cast<void**>(1);
            if (edi14) 
                goto addr_427193_3;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx12 + 6)) < reinterpret_cast<unsigned char>(71)) {
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx12 + 6)) < reinterpret_cast<unsigned char>(64) || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx12 + 6)) > reinterpret_cast<unsigned char>(69)) {
                    addr_427193_3:
                    if (!ecx8) 
                        break;
                    fun_425580(ecx8);
                    ++ebx13;
                    edx12 = edx12 + 10;
                    if (reinterpret_cast<int32_t>(ebx13) >= reinterpret_cast<int32_t>(esi11)) 
                        break;
                } else {
                    addr_427191_7:
                    ecx8 = reinterpret_cast<void**>(0);
                    goto addr_427193_3;
                }
            } else {
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx12 + 6)) <= reinterpret_cast<unsigned char>(71)) 
                    goto addr_427191_7;
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx12 + 6)) < reinterpret_cast<unsigned char>(84)) 
                    goto addr_427193_3;
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx12 + 6)) <= reinterpret_cast<unsigned char>(84)) 
                    goto addr_427191_7;
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx12 + 6)) < reinterpret_cast<unsigned char>(88)) 
                    goto addr_427193_3;
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx12 + 6)) <= reinterpret_cast<unsigned char>(89)) 
                    goto addr_427191_7;
                goto addr_427193_3;
            }
        }
    }
    fun_437550(ecx8);
    return;
}

struct s740 {
    signed char[12] pad12;
    int32_t fc;
};

struct s741 {
    signed char[8] pad8;
    int32_t f8;
};

struct s742 {
    signed char[12] pad12;
    int32_t fc;
};

void** fun_4279f0(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    struct s740* edx6;
    struct s741* eax7;
    void** edx8;
    struct s742* eax9;
    void** ebp10;
    void** edi11;
    void** esi12;
    void** eax13;

    __asm__("shrd eax, edx, 0x10");
    __asm__("shrd eax, edx, 0x10");
    if ((edx6->fc >> 8) * eax7->f8 - (reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx8 + 8)) >> 8) * eax9->fc) {
        __asm__("shrd eax, edx, 0x10");
        __asm__("shrd eax, edx, 0x10");
        eax13 = fun_411d60(edx8, ebp10, edi11, esi12, ecx);
    } else {
        eax13 = reinterpret_cast<void**>(0);
    }
    return eax13;
}

void** fun_4212e0(void** ecx) {
    void** v2;
    void** edx3;
    void** v4;
    void** eax5;
    void** v6;
    void** ebp7;
    void** ebp8;
    void** eax9;
    void** v10;
    void** v11;
    void** edi12;
    int32_t v13;
    void** ebx14;
    void** esi15;
    int32_t v16;
    void** ebx17;
    void** ecx18;
    void** eax19;
    void* edx20;
    void** eax21;
    void** eax22;

    v2 = edx3;
    v4 = reinterpret_cast<void**>(0);
    while (eax5 = fun_428190(ecx), v6 = eax5, reinterpret_cast<signed char>(eax5) >= reinterpret_cast<signed char>(0)) {
        ebp7 = g4845e0;
        ebp8 = ebp7 + reinterpret_cast<unsigned char>(eax5) * 86;
        if (*reinterpret_cast<void***>(ebp8 + 74)) 
            continue;
        eax9 = fun_4375e0(ecx, v4, v2);
        fun_42af30();
        *reinterpret_cast<void***>(ebp8 + 74) = eax9;
        *reinterpret_cast<void***>(eax9 + 8) = reinterpret_cast<void**>(0x420e50);
        *reinterpret_cast<void***>(eax9 + 24) = reinterpret_cast<void**>(1);
        v4 = reinterpret_cast<void**>(1);
        *reinterpret_cast<void***>(eax9 + 20) = ebp8;
        if (!v2) {
            v10 = reinterpret_cast<void**>(0x4000);
            v11 = reinterpret_cast<void**>(0x80000);
        } else {
            if (v2 == 1) {
                ecx = reinterpret_cast<void**>(0x100000);
                v10 = reinterpret_cast<void**>(0x40000);
                v11 = reinterpret_cast<void**>(0x100000);
            }
        }
        *reinterpret_cast<void***>(eax9 + 38) = v10;
        edi12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp8)) + reinterpret_cast<unsigned char>(v11));
        *reinterpret_cast<void***>(eax9 + 34) = edi12;
        v13 = reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebp8 + 8));
        while (1) {
            ebx14 = *reinterpret_cast<void***>(ebp8 + 78);
            esi15 = reinterpret_cast<void**>(0);
            v16 = 0;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx14) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx14 == 0)) {
                addr_421477_11:
                if (v16) 
                    continue; else 
                    break;
            } else {
                ebx17 = *reinterpret_cast<void***>(ebp8 + 82);
                do {
                    ecx18 = *reinterpret_cast<void***>(ebx17);
                    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx18 + 16)) & 4)) 
                        continue;
                    eax19 = g4845e0;
                    edx20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx18 + 46)) - reinterpret_cast<unsigned char>(eax19));
                    if (!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(edx20) / 86 == v6)) 
                        continue;
                    ecx = *reinterpret_cast<void***>(ecx18 + 50);
                    eax21 = g4845e0;
                    if (static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx + 8))) != v13) 
                        continue;
                    edi12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi12) + reinterpret_cast<unsigned char>(v11));
                    if (!*reinterpret_cast<void***>(ecx + 74)) 
                        break;
                    ++esi15;
                    ecx = *reinterpret_cast<void***>(ebp8 + 78);
                    ebx17 = ebx17 + 4;
                } while (reinterpret_cast<signed char>(esi15) < reinterpret_cast<signed char>(ecx));
                goto addr_421477_11;
            }
            v6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(eax21)) / 86);
            eax22 = fun_4375e0(ecx, 1, v2);
            fun_42af30();
            *reinterpret_cast<void***>(ecx + 74) = eax22;
            *reinterpret_cast<void***>(eax22 + 8) = reinterpret_cast<void**>(0x420e50);
            ebp8 = ecx;
            *reinterpret_cast<void***>(eax22 + 24) = reinterpret_cast<void**>(1);
            *reinterpret_cast<void***>(eax22 + 20) = ecx;
            *reinterpret_cast<void***>(eax22 + 38) = v10;
            v16 = 1;
            *reinterpret_cast<void***>(eax22 + 34) = edi12;
            goto addr_421477_11;
        }
    }
    return v4;
}

struct s743 {
    signed char[20] pad20;
    void** f14;
};

void** fun_4229d0(void** ecx) {
    struct s743* v2;
    struct s743* eax3;
    int32_t edi4;
    int32_t edx5;
    void** ebx6;
    void** edx7;
    void** ebp8;
    void** eax9;
    void** ecx10;
    struct s258* eax11;
    int32_t eax12;
    void** ecx13;

    v2 = eax3;
    edi4 = edx5;
    ebx6 = g4845e0;
    edx7 = g4845ec;
    ebp8 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx7) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx7 == 0))) {
        do {
            eax9 = *reinterpret_cast<void***>(ebx6 + 16);
            if (eax9 == v2->f14) {
                if (!edi4 && (ecx10 = reinterpret_cast<void**>(0), !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx6 + 78)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(ebx6 + 78) == 0)))) {
                    do {
                        eax11 = fun_427f50();
                        if (eax11 && (eax12 = eax11->fc, eax12 > edi4)) {
                            edi4 = eax12;
                        }
                        ++ecx10;
                        eax9 = *reinterpret_cast<void***>(ebx6 + 78);
                    } while (reinterpret_cast<signed char>(ecx10) < reinterpret_cast<signed char>(eax9));
                }
                *reinterpret_cast<void***>(ebx6 + 12) = *reinterpret_cast<void***>(&edi4);
            }
            ecx13 = g4845ec;
            ++ebp8;
            ebx6 = ebx6 + 86;
        } while (reinterpret_cast<signed char>(ebp8) < reinterpret_cast<signed char>(ecx13));
    }
    return eax9;
}

void** fun_422900(void** ecx) {
    void** ecx2;
    void** eax3;
    void** edx4;

    ecx2 = reinterpret_cast<void**>(0xffffffff);
    while (eax3 = fun_428190(ecx2), ecx2 = eax3, reinterpret_cast<signed char>(eax3) >= reinterpret_cast<signed char>(0)) {
        edx4 = g4845e0;
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edx4 + reinterpret_cast<unsigned char>(eax3) * 86) + 74)) 
            continue;
        fun_422870(ecx2);
    }
    return eax3;
}

struct s744 {
    signed char[20] pad20;
    int16_t f14;
};

void** fun_425ec0(void** ecx) {
    struct s744* ecx2;
    struct s744* eax3;
    void** eax4;

    ecx2 = eax3;
    eax4 = reinterpret_cast<void**>(0);
    do {
        if (*reinterpret_cast<struct s303**>(eax4 + 0x4844ec) && ((*reinterpret_cast<struct s303**>(eax4 + 0x4844ec))->f24 != 3 && static_cast<int32_t>(ecx2->f14) == (*reinterpret_cast<struct s303**>(eax4 + 0x4844ec))->f30)) {
            (*reinterpret_cast<struct s303**>(eax4 + 0x4844ec))->f28 = (*reinterpret_cast<struct s303**>(eax4 + 0x4844ec))->f24;
            (*reinterpret_cast<struct s303**>(eax4 + 0x4844ec))->f24 = 3;
            (*reinterpret_cast<struct s303**>(eax4 + 0x4844ec))->f8 = 0;
        }
        eax4 = eax4 + 4;
    } while (!reinterpret_cast<int1_t>(eax4 == 0x78));
    return eax4;
}

struct s745 {
    signed char[20] pad20;
    int16_t f14;
};

struct s746 {
    signed char[8] pad8;
    struct s746* f8;
    signed char[24] pad36;
    struct s746* f24;
    int32_t f28;
    struct s746* f2c;
};

void** fun_41e450(void** ecx) {
    struct s745* esi2;
    struct s745* eax3;
    void** ecx4;
    int32_t eax5;

    esi2 = eax3;
    ecx4 = reinterpret_cast<void**>(0);
    eax5 = 0;
    do {
        if (*reinterpret_cast<struct s746**>(eax5 + 0x4835fc) && (static_cast<int32_t>(esi2->f14) == (*reinterpret_cast<struct s746**>(eax5 + 0x4835fc))->f28 && (*reinterpret_cast<struct s746**>(eax5 + 0x4835fc))->f24)) {
            (*reinterpret_cast<struct s746**>(eax5 + 0x4835fc))->f2c = (*reinterpret_cast<struct s746**>(eax5 + 0x4835fc))->f24;
            (*reinterpret_cast<struct s746**>(eax5 + 0x4835fc))->f8 = reinterpret_cast<struct s746*>(0);
            ecx4 = reinterpret_cast<void**>(1);
            (*reinterpret_cast<struct s746**>(eax5 + 0x4835fc))->f24 = reinterpret_cast<struct s746*>(0);
        }
        eax5 = eax5 + 4;
    } while (eax5 != 0x78);
    return ecx4;
}

struct s747 {
    signed char[20] pad20;
    void** f14;
};

void** fun_422950(void** ecx) {
    struct s747* v2;
    struct s747* eax3;
    void** ebx4;
    void** edx5;
    void** ebp6;
    void** eax7;
    int32_t edi8;
    void** ecx9;
    struct s258* eax10;
    int32_t eax11;
    void** ecx12;

    v2 = eax3;
    ebx4 = g4845e0;
    edx5 = g4845ec;
    ebp6 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx5) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx5 == 0))) {
        do {
            eax7 = *reinterpret_cast<void***>(ebx4 + 16);
            if (eax7 == v2->f14) {
                edi8 = reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebx4 + 12));
                ecx9 = reinterpret_cast<void**>(0);
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx4 + 78)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(ebx4 + 78) == 0))) {
                    do {
                        eax10 = fun_427f50();
                        if (eax10 && (eax11 = eax10->fc, eax11 < edi8)) {
                            edi8 = eax11;
                        }
                        ++ecx9;
                        eax7 = *reinterpret_cast<void***>(ebx4 + 78);
                    } while (reinterpret_cast<signed char>(ecx9) < reinterpret_cast<signed char>(eax7));
                }
                *reinterpret_cast<void***>(ebx4 + 12) = *reinterpret_cast<void***>(&edi8);
            }
            ecx12 = g4845ec;
            ++ebp6;
            ebx4 = ebx4 + 86;
        } while (reinterpret_cast<signed char>(ebp6) < reinterpret_cast<signed char>(ecx12));
    }
    return eax7;
}

void** fun_417740(void** ecx) {
    int1_t zf2;
    void** eax3;

    zf2 = g481264 == 0;
    if (zf2 || (eax3 = fun_434640(ecx), reinterpret_cast<signed char>(eax3) >= reinterpret_cast<signed char>(0))) {
        g482998 = 1;
    } else {
        g482998 = 0;
    }
    g482a8c = reinterpret_cast<void**>(6);
    return eax3;
}

struct s748 {
    signed char[14] pad14;
    int16_t fe;
};

void fun_4227d0(void** ecx) {
    struct s748* eax2;
    void** eax3;
    void** edx4;
    void** eax5;
    void** eax6;
    void** eax7;

    eax2->fe = 0;
    eax5 = fun_4375e0(eax3, edx4, ecx);
    fun_42af30();
    *reinterpret_cast<void***>(eax5 + 8) = reinterpret_cast<void**>(fun_422780);
    *reinterpret_cast<void***>(eax5 + 12) = eax3;
    *reinterpret_cast<void***>(eax5 + 20) = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax3 + 12))));
    eax6 = fun_4281e0(eax3);
    *reinterpret_cast<void***>(eax5 + 28) = reinterpret_cast<void**>(64);
    *reinterpret_cast<void***>(eax5 + 32) = reinterpret_cast<void**>(7);
    *reinterpret_cast<void***>(eax5 + 24) = eax6;
    eax7 = fun_41d460(eax3, edx4);
    *reinterpret_cast<void***>(eax5 + 16) = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax7) & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5 + 28))) + 1);
    return;
}

void fun_422ac0(void** ecx) {
    void** eax2;
    void** edx3;
    void** eax4;
    void** eax5;
    void** eax6;

    eax4 = fun_4375e0(eax2, edx3, ecx);
    fun_42af30();
    *reinterpret_cast<void***>(eax4 + 12) = eax2;
    eax5 = fun_4281e0(eax2);
    *reinterpret_cast<void***>(eax4 + 16) = eax5;
    eax6 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax2 + 12))));
    *reinterpret_cast<void***>(eax4 + 8) = reinterpret_cast<void**>(0x422a50);
    *reinterpret_cast<void***>(eax4 + 24) = reinterpret_cast<void**>(0xffffffff);
    *reinterpret_cast<void***>(eax4 + 20) = eax6;
    *reinterpret_cast<void***>(eax2 + 14) = reinterpret_cast<void**>(0);
    return;
}

void fun_41eb90(void** ecx) {
    void** eax2;
    void** edx3;
    void** eax4;

    eax4 = fun_4375e0(eax2, edx3, ecx);
    fun_42af30();
    *reinterpret_cast<void***>(eax2 + 14) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax2 + 74) = eax4;
    *reinterpret_cast<void***>(eax4 + 8) = reinterpret_cast<void**>(0x41e500);
    *reinterpret_cast<void***>(eax4 + 28) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax4 + 12) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax4 + 24) = reinterpret_cast<void**>(0x20000);
    *reinterpret_cast<void***>(eax4 + 36) = reinterpret_cast<void**>(0x41a);
    *reinterpret_cast<void***>(eax4 + 16) = eax2;
    return;
}

void fun_41ebe0(void** ecx) {
    void** eax2;
    void** ebx3;
    void** eax4;
    void** eax5;

    eax4 = fun_4375e0(eax2, ecx, ebx3);
    fun_42af30();
    *reinterpret_cast<void***>(eax2 + 14) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax2 + 74) = eax4;
    *reinterpret_cast<void***>(eax4 + 8) = reinterpret_cast<void**>(0x41e500);
    *reinterpret_cast<void***>(eax4 + 28) = reinterpret_cast<void**>(2);
    *reinterpret_cast<void***>(eax4 + 12) = reinterpret_cast<void**>(4);
    *reinterpret_cast<void***>(eax4 + 24) = reinterpret_cast<void**>(0x20000);
    *reinterpret_cast<void***>(eax4 + 16) = eax2;
    eax5 = fun_4280d0(eax2, ecx);
    *reinterpret_cast<void***>(eax4 + 32) = reinterpret_cast<void**>(0x96);
    *reinterpret_cast<void***>(eax4 + 36) = reinterpret_cast<void**>(0x2904);
    *reinterpret_cast<void***>(eax4 + 20) = eax5;
    *reinterpret_cast<void***>(eax4 + 20) = eax5 + 0xfffc0000;
    return;
}

struct s749 {
    signed char[14] pad14;
    int16_t fe;
};

void fun_422730(void** ecx) {
    struct s749* eax2;
    void** eax3;
    void** edx4;
    void** eax5;
    void** eax6;

    eax2->fe = 0;
    eax5 = fun_4375e0(eax3, edx4, ecx);
    fun_42af30();
    *reinterpret_cast<void***>(eax5 + 8) = reinterpret_cast<void**>(0x4226e0);
    *reinterpret_cast<void***>(eax5 + 12) = eax3;
    *reinterpret_cast<void***>(eax5 + 20) = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax3 + 12))));
    eax6 = fun_4281e0(eax3);
    *reinterpret_cast<void***>(eax5 + 16) = reinterpret_cast<void**>(4);
    *reinterpret_cast<void***>(eax5 + 24) = eax6 + 16;
    return;
}

struct s750 {
    signed char[18] pad18;
    uint16_t f12;
};

struct s751 {
    signed char[132] pad132;
    void** f84;
};

struct s752 {
    signed char[132] pad132;
    int32_t f84;
};

void** fun_41e970(void** ecx) {
    int32_t ebx2;
    struct s750* eax3;
    void** eax4;
    struct s751* edx5;
    uint32_t ebx6;
    void** esi7;
    void** eax8;
    void** eax9;
    void** eax10;
    int32_t ebx11;
    void** ebx12;
    void** ecx13;
    void** ebx14;
    struct s752* edx15;
    void** eax16;

    *reinterpret_cast<uint16_t*>(&ebx2) = eax3->f12;
    eax4 = edx5->f84;
    ebx6 = reinterpret_cast<uint32_t>(ebx2 - 26);
    if (*reinterpret_cast<uint16_t*>(&ebx6) <= 8) {
        switch (ebx6 & 0xffff) {
        case 0:
        case 6:
            if (!eax4) {
                addr_41eb87_4:
                return eax4;
            } else {
                if (!*reinterpret_cast<void***>(eax4 + 68) && !*reinterpret_cast<void***>(eax4 + 80)) {
                    *reinterpret_cast<void***>(eax4 + 0xd8) = reinterpret_cast<void**>("You need a blue key to open this door");
                    eax8 = fun_4312d0(0, esi7);
                    return eax8;
                }
            }
        case 1:
        case 8:
            if (!eax4) 
                goto addr_41eb87_4;
            if (!*reinterpret_cast<void***>(eax4 + 72) && !*reinterpret_cast<void***>(eax4 + 84)) {
                *reinterpret_cast<void***>(eax4 + 0xd8) = reinterpret_cast<void**>("You need a yellow key to open this door");
                eax9 = fun_4312d0(0, esi7);
                return eax9;
            }
        case 2:
        case 7:
            if (!eax4) 
                goto addr_41eb87_4;
            if (!*reinterpret_cast<void***>(eax4 + 76) && !*reinterpret_cast<void***>(eax4 + 88)) {
                *reinterpret_cast<void***>(eax4 + 0xd8) = reinterpret_cast<void**>("You need a red key to open this door");
                eax10 = fun_4312d0(0, esi7);
                return eax10;
            }
        case 3:
        case 4:
        case 5:
            goto 0x41ea2e;
        }
    }
    ebx11 = *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(eax3) + 2 + 22);
    ebx12 = g4845d4;
    ecx13 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebx12 + (ebx11 * 8 + ebx11) * 2) + 14);
    eax4 = *reinterpret_cast<void***>(ecx13 + 74);
    if (!eax4) 
        goto addr_41ea99_14;
    ebx14 = eax4;
    *reinterpret_cast<uint16_t*>(&eax4) = eax3->f12;
    if (*reinterpret_cast<uint16_t*>(&eax4) >= 26) {
        if (*reinterpret_cast<uint16_t*>(&eax4) <= 28) 
            goto addr_41ea70_17;
        if (*reinterpret_cast<uint16_t*>(&eax4) == 0x75) 
            goto addr_41ea70_17;
        goto addr_41ea99_14;
    }
    if (*reinterpret_cast<uint16_t*>(&eax4) != 1) {
        addr_41ea99_14:
        if (eax3->f12 < 31) {
            if (eax3->f12 != 1) {
                goto addr_41eac2_23;
            }
        }
    } else {
        addr_41ea70_17:
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx14 + 28) == 0xffffffff)) {
            if (edx15->f84) {
                *reinterpret_cast<void***>(ebx14 + 28) = reinterpret_cast<void**>(0xffffffff);
                return eax4;
            }
        } else {
            *reinterpret_cast<void***>(ebx14 + 28) = reinterpret_cast<void**>(1);
            return eax4;
        }
    }
    if (eax3->f12 <= 31 || eax3->f12 < 0x75) {
        addr_41eac2_23:
    } else {
        if (eax3->f12 > 0x76) {
            goto addr_41eac2_23;
        }
    }
    fun_4312d0(ecx13, esi7);
    eax16 = fun_4375e0(ecx13, esi7, ecx);
    fun_42af30();
    *reinterpret_cast<void***>(ecx13 + 74) = eax16;
    *reinterpret_cast<void***>(eax16 + 8) = reinterpret_cast<void**>(0x41e500);
    *reinterpret_cast<void***>(eax16 + 28) = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(eax16 + 24) = reinterpret_cast<void**>(0x20000);
    *reinterpret_cast<void***>(eax16 + 32) = reinterpret_cast<void**>(0x96);
    *reinterpret_cast<void***>(eax16 + 16) = ecx13;
    if (eax3->f12 < 31) {
        if (eax3->f12 >= 1 && (eax3->f12 <= 1 || eax3->f12 >= 26 && eax3->f12 <= 28)) {
            *reinterpret_cast<void***>(eax16 + 12) = reinterpret_cast<void**>(0);
            goto addr_41eb74_34;
        }
    }
    if (eax3->f12 <= 34) {
        *reinterpret_cast<void***>(eax16 + 12) = reinterpret_cast<void**>(3);
        eax3->f12 = 0;
        goto addr_41eb74_34;
    }
    if (eax3->f12 < 0x75) {
        addr_41eb74_34:
        eax4 = fun_4280d0(ecx13, esi7);
        *reinterpret_cast<void***>(eax16 + 20) = eax4;
        *reinterpret_cast<void***>(eax16 + 20) = eax4 + 0xfffc0000;
        goto addr_41eb87_4;
    } else {
        if (eax3->f12 <= 0x75) {
            *reinterpret_cast<void***>(eax16 + 12) = reinterpret_cast<void**>(5);
        } else {
            if (eax3->f12 == 0x76) {
                *reinterpret_cast<void***>(eax16 + 12) = reinterpret_cast<void**>(6);
                eax3->f12 = 0;
            } else {
                goto addr_41eb74_34;
            }
        }
    }
    *reinterpret_cast<void***>(eax16 + 24) = reinterpret_cast<void**>(0x80000);
    goto addr_41eb74_34;
}

int32_t fun_428da0(void** ecx) {
    void** v2;
    void** eax3;
    void** v4;
    int32_t v5;
    void** esi6;
    void** ecx7;
    void** edx8;
    void** edi9;
    void* eax10;
    void* ecx11;
    void** ecx12;
    void** eax13;
    void** eax14;
    void** eax15;
    void** esi16;
    void** edx17;
    void** eax18;
    void** ebp19;
    void** eax20;
    void** ax21;
    void** eax22;

    v2 = eax3;
    v4 = reinterpret_cast<void**>(0xffffffff);
    v5 = 0;
    while (1) {
        esi6 = v2;
        ecx7 = g4845ec;
        edx8 = v4 + 1;
        edi9 = g4845e0;
        if (reinterpret_cast<signed char>(edx8) >= reinterpret_cast<signed char>(ecx7)) {
            addr_428df4_3:
            edx8 = reinterpret_cast<void**>(0xffffffff);
        } else {
            eax10 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx8) * 86);
            ecx11 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx7) * 86);
            do {
                if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi9) + reinterpret_cast<uint32_t>(eax10) + 16) == *reinterpret_cast<void***>(esi6 + 20)) 
                    break;
                eax10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax10) + 86);
                ++edx8;
            } while (reinterpret_cast<int32_t>(eax10) < reinterpret_cast<int32_t>(ecx11));
            goto addr_428df4_3;
        }
        v4 = edx8;
        if (reinterpret_cast<signed char>(edx8) < reinterpret_cast<signed char>(0)) 
            break;
        ecx12 = edi9 + reinterpret_cast<unsigned char>(edx8) * 86;
        eax13 = *reinterpret_cast<void***>(ecx12 + 74);
        g4845e0 = edi9;
        if (eax13) 
            continue;
        eax14 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx12 + 82));
        v5 = 1;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax14 + 16)) & 4) {
            if (ecx12 != *reinterpret_cast<void***>(eax14 + 46)) {
                eax15 = *reinterpret_cast<void***>(eax14 + 46);
            } else {
                eax15 = *reinterpret_cast<void***>(eax14 + 50);
            }
        } else {
            eax15 = reinterpret_cast<void**>(0);
        }
        esi16 = eax15;
        g4845e0 = edi9;
        edx17 = reinterpret_cast<void**>(0);
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax15 + 78)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(eax15 + 78) == 0)) 
            continue;
        eax18 = *reinterpret_cast<void***>(eax15 + 82);
        do {
            ebp19 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax18) + 50);
            if (ecx12 != ebp19) 
                break;
            ++edx17;
            eax18 = eax18 + 4;
        } while (reinterpret_cast<signed char>(edx17) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(esi16 + 78)));
        goto addr_428f13_18;
        eax20 = fun_4375e0(ecx12, v4, v2);
        fun_42af30();
        *reinterpret_cast<void***>(esi16 + 74) = eax20;
        *reinterpret_cast<void***>(eax20 + 8) = reinterpret_cast<void**>(0x420e50);
        *reinterpret_cast<void***>(eax20 + 12) = reinterpret_cast<void**>(11);
        *reinterpret_cast<void***>(eax20 + 16) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax20 + 24) = reinterpret_cast<void**>(1);
        *reinterpret_cast<void***>(eax20 + 38) = reinterpret_cast<void**>(0x8000);
        *reinterpret_cast<void***>(eax20 + 20) = esi16;
        ax21 = *reinterpret_cast<void***>(ebp19 + 8);
        *reinterpret_cast<void***>(eax20 + 28) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax20 + 32) = ax21;
        *reinterpret_cast<void***>(eax20 + 34) = *reinterpret_cast<void***>(ebp19);
        eax22 = fun_4375e0(ecx12, v4, v2);
        fun_42af30();
        *reinterpret_cast<void***>(ecx12 + 74) = eax22;
        *reinterpret_cast<void***>(eax22 + 8) = reinterpret_cast<void**>(0x420e50);
        *reinterpret_cast<void***>(eax22 + 12) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax22 + 16) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax22 + 24) = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<void***>(eax22 + 38) = reinterpret_cast<void**>(0x8000);
        *reinterpret_cast<void***>(eax22 + 20) = ecx12;
        *reinterpret_cast<void***>(eax22 + 34) = *reinterpret_cast<void***>(ebp19);
        continue;
        addr_428f13_18:
    }
    g4845e0 = edi9;
    return v5;
}

struct s753 {
    signed char[132] pad132;
    void** f84;
};

void** fun_41e6a0(void** ecx) {
    void** eax2;
    struct s753* ebx3;
    void** eax4;
    void** esi5;

    eax2 = ebx3->f84;
    if (!eax2) 
        goto addr_41e778_2;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 18)) < reinterpret_cast<unsigned char>(0x85)) {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax4 + 18) == 99)) {
            addr_41e76f_5:
            eax2 = fun_41e7a0(eax4);
            goto addr_41e778_2;
        } else {
            addr_41e6e2_6:
            if (!eax2) {
                addr_41e778_2:
                return eax2;
            } else {
                if (!*reinterpret_cast<void***>(eax2 + 68) && !*reinterpret_cast<void***>(eax2 + 80)) {
                    *reinterpret_cast<void***>(eax2 + 0xd8) = reinterpret_cast<void**>("You need a blue key to activate this object");
                    fun_4312d0(eax4, esi5);
                    return 0;
                }
            }
        }
    } else {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 18)) <= reinterpret_cast<unsigned char>(0x85)) 
            goto addr_41e6e2_6;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 18)) <= reinterpret_cast<unsigned char>(0x87)) {
            if (!eax2) 
                goto addr_41e778_2;
            if (!*reinterpret_cast<void***>(eax2 + 76) && !*reinterpret_cast<void***>(eax2 + 88)) {
                *reinterpret_cast<void***>(eax2 + 0xd8) = reinterpret_cast<void**>("You need a red key to activate this object");
                fun_4312d0(eax4, esi5);
                return 0;
            }
        } else {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4 + 18)) <= reinterpret_cast<unsigned char>(0x89)) {
                if (!eax2) 
                    goto addr_41e778_2;
                if (!*reinterpret_cast<void***>(eax2 + 72) && !*reinterpret_cast<void***>(eax2 + 84)) {
                    *reinterpret_cast<void***>(eax2 + 0xd8) = reinterpret_cast<void**>("You need a yellow key to activate this object");
                    fun_4312d0(eax4, esi5);
                    return 0;
                }
            } else {
                goto addr_41e76f_5;
            }
        }
    }
}

void fun_41e380() {
    int32_t edx1;
    int32_t eax2;
    void** ebx3;
    int32_t eax4;

    edx1 = eax2;
    ebx3 = g4835fc;
    eax4 = 0;
    if (ebx3) {
        while (eax4 = eax4 + 4, eax4 < 0x78) {
            if (!*reinterpret_cast<int32_t*>(eax4 + 0x4835fc)) 
                goto addr_41e390_4;
        }
    } else {
        addr_41e390_4:
        *reinterpret_cast<int32_t*>(eax4 + 0x4835fc) = edx1;
        return;
    }
    return;
}

struct s754 {
    signed char[72] pad72;
    int32_t f48;
};

struct s756 {
    signed char[20] pad20;
    int32_t f14;
    signed char[36] pad60;
    int32_t f3c;
    signed char[12] pad76;
    int32_t f4c;
};

struct s755 {
    struct s756* f0;
    int32_t f4;
    signed char[8] pad16;
    int32_t f10;
    int32_t f14;
    int32_t f18;
    int32_t f1c;
    signed char[164] pad196;
    unsigned char fc4;
};

void fun_42b090(void** ecx) {
    int32_t esi2;
    struct s754** eax3;
    struct s755* eax4;
    int32_t edx5;
    int1_t zf6;
    int32_t eax7;
    int32_t eax8;
    uint32_t eax9;
    int32_t ebp10;
    int32_t ebx11;
    int32_t edx12;
    int32_t ebp13;
    int32_t edx14;

    __asm__("shrd eax, edx, 0x10");
    __asm__("shrd eax, edx, 0x10");
    esi2 = (*eax3)->f48 * (*eax3)->f48 + eax4->f0->f4c * eax4->f0->f4c;
    eax4->f1c = esi2;
    edx5 = esi2 >> 2;
    eax4->f1c = edx5;
    if (edx5 > 0x100000) {
        eax4->f1c = 0x100000;
    }
    if (eax4->fc4 & 4 || (zf6 = g484d10 == 0, zf6)) {
        eax4->f10 = eax4->f0->f14 + 0x290000;
        eax7 = eax4->f0->f3c - 0x40000;
        if (eax7 < eax4->f10) {
            eax4->f10 = eax7;
        }
        eax8 = eax4->f0->f14 + eax4->f14;
    } else {
        eax9 = g484d04 * 0x199;
        __asm__("shrd eax, edx, 0x10");
        ebp10 = eax4->f4;
        ebx11 = (eax4->f1c - (eax4->f1c >> 31) >> 1) * *reinterpret_cast<int32_t*>((eax9 & 0x1fff) * 4 + 0x46a9e0);
        if (!ebp10) {
            edx12 = eax4->f14 + eax4->f18;
            eax4->f14 = edx12;
            if (edx12 > 0x290000) {
                eax4->f14 = 0x290000;
                eax4->f18 = ebp10;
            }
            if (eax4->f14 < 0x148000 && (ebp13 = eax4->f18, eax4->f14 = 0x148000, reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(ebp13 < 0) | reinterpret_cast<uint1_t>(ebp13 == 0)))) {
                eax4->f18 = 1;
            }
            if (eax4->f18 && (edx14 = eax4->f18 + 0x4000, eax4->f18 = edx14, !edx14)) {
                eax4->f18 = 1;
            }
        }
        eax4->f10 = eax4->f0->f14 + eax4->f14 + ebx11;
        eax8 = eax4->f0->f3c - 0x40000;
        if (eax8 >= eax4->f10) 
            goto addr_42b1bc_15;
    }
    eax4->f10 = eax8;
    addr_42b1bc_15:
    return;
}

struct s757 {
    signed char[252] pad252;
    int32_t ffc;
    int32_t f100;
    signed char[8] pad268;
    int32_t f10c;
    int32_t f110;
};

struct s758 {
    signed char[244] pad244;
    void** ff4;
};

void** fun_426c00(void** ecx) {
    struct s757* edi2;
    struct s757* eax3;
    void** ecx4;
    struct s758* eax5;
    int32_t esi6;
    void** ebx7;
    void** eax8;

    edi2 = eax3;
    ecx4 = reinterpret_cast<void**>(&eax5->ff4);
    esi6 = 0;
    do {
        if (*reinterpret_cast<void***>(ecx4) && (*reinterpret_cast<void***>(ecx4 + 4) != 0xffffffff && (ebx7 = *reinterpret_cast<void***>(ecx4 + 4) + 0xffffffff, *reinterpret_cast<void***>(ecx4 + 4) = ebx7, !ebx7))) {
            eax8 = fun_425fc0(ecx4);
        }
        ++esi6;
        ecx4 = ecx4 + 16;
    } while (esi6 < 2);
    edi2->f10c = edi2->ffc;
    edi2->f110 = edi2->f100;
    return eax8;
}

struct s759 {
    signed char f0;
    signed char f1;
    int16_t f2;
};

struct s760 {
    signed char[8] pad8;
    signed char f8;
};

struct s761 {
    signed char[32] pad32;
    int32_t f20;
};

void** fun_42b1d0(void** ecx) {
    struct s759* esi2;
    struct s760* eax3;
    struct s761** eax4;
    void** eax5;
    void** eax6;
    void** eax7;
    signed char dl8;
    void** ebp9;
    uint32_t* ebx10;
    void** eax11;
    int32_t edi12;
    void** v13;
    int1_t zf14;
    void** ebp15;
    uint32_t* ebx16;
    void** eax17;
    int32_t edi18;
    void** ebp19;

    esi2 = reinterpret_cast<struct s759*>(&eax3->f8);
    (*eax4)->f20 = (*eax4)->f20 + (static_cast<int32_t>(esi2->f2) << 16);
    eax5 = *reinterpret_cast<void***>(eax6);
    *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax5 + 20)) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax5 + 56)));
    eax7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax5) & 0xff);
    dl8 = esi2->f0;
    g484d10 = eax7;
    if (dl8 && eax7) {
        ebp9 = *reinterpret_cast<void***>(eax6);
        ebx10 = image_base_;
        eax11 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp9 + 32)) >> 19) * 4);
        edi12 = static_cast<int32_t>(dl8) << 11;
        v13 = eax11;
        __asm__("shrd eax, edx, 0x10");
        *reinterpret_cast<void***>(ebp9 + 72) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp9 + 72)) + edi12 * *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ebx10) + reinterpret_cast<unsigned char>(eax11)));
        eax7 = reinterpret_cast<void**>(edi12 * *reinterpret_cast<uint32_t*>(v13 + 0x46a9e0));
        __asm__("shrd eax, edx, 0x10");
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax6) + 76) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax6) + 76)) + reinterpret_cast<unsigned char>(eax7));
    }
    if (esi2->f1 && (zf14 = g484d10 == 0, !zf14)) {
        ebp15 = *reinterpret_cast<void***>(eax6);
        ebx16 = image_base_;
        eax17 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ebp15 + 32) - 0x40000000) >> 19) * 4);
        edi18 = static_cast<int32_t>(esi2->f1) << 11;
        v13 = eax17;
        __asm__("shrd eax, edx, 0x10");
        *reinterpret_cast<void***>(ebp15 + 72) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp15 + 72)) + edi18 * *reinterpret_cast<uint32_t*>(reinterpret_cast<int32_t>(ebx16) + reinterpret_cast<unsigned char>(eax17)));
        eax7 = reinterpret_cast<void**>(edi18 * *reinterpret_cast<uint32_t*>(v13 + 0x46a9e0));
        __asm__("shrd eax, edx, 0x10");
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax6) + 76) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax6) + 76)) + reinterpret_cast<unsigned char>(eax7));
    }
    if ((esi2->f0 || esi2->f1) && (eax7 = *reinterpret_cast<void***>(eax6), reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax7 + 100) == 0x45b1d0))) {
        eax7 = fun_424ae0(eax6, v13, ebp19);
    }
    return eax7;
}

struct s762 {
    int32_t f0;
    struct s370* f4;
};

void fun_42b650(int32_t ecx) {
    int32_t ebx2;
    int32_t eax3;
    struct s370* ebp4;
    struct s370* edx5;
    struct s370* edx6;
    struct s370* eax7;
    void* eax8;
    struct s370* ecx9;
    struct s370* eax10;
    struct s370* edi11;
    struct s762* esi12;
    struct s370* ebx13;
    struct s370* edi14;
    struct s370* eax15;
    struct s370* ecx16;

    ebx2 = eax3;
    ebp4 = edx5;
    edx6 = g484d18;
    eax7 = reinterpret_cast<struct s370*>(reinterpret_cast<int32_t>(eax8) - 1);
    ecx9 = reinterpret_cast<struct s370*>(0x484d14);
    if (reinterpret_cast<int32_t>(eax7) > reinterpret_cast<int32_t>(edx6)) {
        do {
            ecx9 = reinterpret_cast<struct s370*>(&ecx9->f8);
        } while (reinterpret_cast<int32_t>(eax7) > reinterpret_cast<int32_t>(ecx9->fc));
    }
    if (ebx2 < ecx9->f0) {
        if (reinterpret_cast<int32_t>(ebp4) >= ecx9->f0 - 1) {
            fun_42f160(ecx9);
            ecx9->f0 = ebx2;
        } else {
            fun_42f160(ecx9);
            eax10 = g487e14;
            g487e14 = reinterpret_cast<struct s370*>(&eax10->f8);
            if (eax10 != ecx9) {
                do {
                    edi11 = eax10;
                    esi12 = reinterpret_cast<struct s762*>(reinterpret_cast<int32_t>(eax10) - 8);
                    eax10 = reinterpret_cast<struct s370*>(reinterpret_cast<int32_t>(eax10) - 8);
                    edi11->f0 = esi12->f0;
                    edi11->f4 = esi12->f4;
                } while (eax10 != ecx9);
            }
            eax10->f0 = ebx2;
            eax10->f4 = ebp4;
            goto addr_42b712_15;
        }
    }
    if (reinterpret_cast<int32_t>(ebp4) <= reinterpret_cast<int32_t>(ecx9->f4)) {
        addr_42b712_15:
        return;
    } else {
        ebx13 = ecx9;
        do {
            if (reinterpret_cast<int32_t>(ebp4) < reinterpret_cast<int32_t>(ebx13->f8) - 1) 
                break;
            fun_42f160(ecx9);
            ebx13 = reinterpret_cast<struct s370*>(&ebx13->f8);
        } while (reinterpret_cast<int32_t>(ebp4) > reinterpret_cast<int32_t>(ebx13->fc));
        goto addr_42b6db_20;
    }
    fun_42f160(ecx9);
    ecx9->f4 = ebp4;
    addr_42b6ee_22:
    if (ebx13 != ecx9) {
        while (edi14 = reinterpret_cast<struct s370*>(&ecx9->f8), eax15 = ebx13, ecx16 = g487e14, ebx13 = reinterpret_cast<struct s370*>(&ebx13->f8), eax15 != ecx16) {
            ecx9 = edi14;
            edi14->f0 = ebx13->f0;
            edi14->f4 = ebx13->f4;
        }
        g487e14 = edi14;
        goto addr_42b712_15;
    }
    addr_42b6db_20:
    ecx9->f4 = ebx13->fc;
    goto addr_42b6ee_22;
}

struct s763 {
    signed char[66] pad66;
    int32_t f42;
};

struct s764 {
    signed char[12] pad12;
    int16_t fc;
};

struct s765 {
    signed char[66] pad66;
    int32_t f42;
};

struct s766 {
    signed char[24] pad24;
    struct s766* f18;
};

struct s767 {
    signed char[70] pad70;
    struct s766* f46;
};

void fun_4303e0(void** ecx) {
    int32_t ebx2;
    struct s763* eax3;
    int32_t ecx4;
    int32_t edx5;
    struct s764* eax6;
    struct s765* eax7;
    struct s766* edx8;
    struct s767* eax9;

    ebx2 = g4654c4;
    if (ebx2 != eax3->f42) {
        ecx4 = g4925a4;
        edx5 = (static_cast<int32_t>(eax6->fc) >> 4) + ecx4;
        eax7->f42 = ebx2;
        if (edx5 >= 0) {
            if (edx5 < 16) {
                g5f0fac = reinterpret_cast<void***>(0x48aeb0 + (edx5 * 4 - edx5 << 6));
            } else {
                g5f0fac = reinterpret_cast<void***>(0x48b9f0);
            }
        } else {
            g5f0fac = reinterpret_cast<void***>(0x48aeb0);
        }
        edx8 = eax9->f46;
        if (edx8) {
            do {
                fun_430130(ecx4);
                edx8 = edx8->f18;
            } while (edx8);
        }
    }
    return;
}

uint32_t fun_42b910(void** ecx);

void fun_42bb50(void** ecx) {
    unsigned char ah2;
    void** ecx3;
    uint32_t eax4;
    uint32_t eax5;
    uint32_t edx6;
    uint32_t eax7;

    if (!(ah2 & 0x80)) {
        while (ecx3 = g4845c4, ecx = ecx3 + eax4 * 52, eax5 = fun_42d730(ecx), edx6 = eax5, *reinterpret_cast<unsigned char*>(&edx6) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx6) ^ 1), fun_42bb50(ecx), eax7 = fun_42b910(ecx), !!eax7) {
            *reinterpret_cast<int16_t*>(&eax7) = *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(ecx + edx6 * 2) + 48);
            eax4 = eax7 & 0xffff;
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax4) + 1) & 0x80) 
                goto addr_42bb58_4;
        }
    } else {
        addr_42bb58_4:
        if (1) {
            fun_42ba80(ecx);
            return;
        } else {
            fun_42ba80(ecx);
            return;
        }
    }
    return;
}

struct s768 {
    signed char[8] pad8;
    uint32_t f8;
};

struct s769 {
    signed char[12] pad12;
    uint32_t fc;
};

struct s770 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s771 {
    void* f0;
    struct s370* f4;
    signed char[4] pad12;
    struct s370* fc;
};

uint32_t fun_42b910(void** ecx) {
    uint32_t edx2;
    struct s768* eax3;
    struct s769* eax4;
    int32_t edx5;
    uint32_t ebx6;
    uint32_t* eax7;
    struct s770* eax8;
    int32_t ebx9;
    int32_t edx10;
    void** ecx11;
    void*** eax12;
    void** eax13;
    uint32_t ebp14;
    void** eax15;
    void* ebx16;
    uint32_t edx17;
    void* eax18;
    void* ecx19;
    uint32_t eax20;
    void* edx21;
    void* esi22;
    void* edx23;
    void* esi24;
    void* edx25;
    void* esi26;
    void* edx27;
    void* esi28;
    void* eax29;
    void* ebx30;
    struct s370* ecx31;
    struct s370* edx32;
    struct s771* eax33;

    edx2 = g4925e0;
    if (reinterpret_cast<int32_t>(edx2) > reinterpret_cast<int32_t>(eax3->f8)) {
        if (reinterpret_cast<int32_t>(edx2) >= reinterpret_cast<int32_t>(eax4->fc)) {
            edx5 = 2;
        } else {
            edx5 = 1;
        }
    } else {
        edx5 = 0;
    }
    ebx6 = g4925dc;
    if (reinterpret_cast<int32_t>(ebx6) < reinterpret_cast<int32_t>(*eax7)) {
        if (reinterpret_cast<int32_t>(ebx6) <= reinterpret_cast<int32_t>(eax8->f4)) {
            ebx9 = 2;
        } else {
            ebx9 = 1;
        }
    } else {
        ebx9 = 0;
    }
    edx10 = edx5 + ebx9 * 4;
    if (edx10 == 5 || (ecx11 = eax12[*reinterpret_cast<int32_t*>((edx10 << 4) + 0x465330) * 4], eax13 = fun_42d8e0(ecx11), ebp14 = g4925c4, eax15 = fun_42d8e0(ecx11), ebx16 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax13) - ebp14), edx17 = g4925c4, eax18 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax15) - edx17), ecx19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx16) - reinterpret_cast<uint32_t>(eax18)), reinterpret_cast<uint32_t>(ecx19) >= 0x80000000)) {
        eax20 = 1;
    } else {
        edx21 = g4925b4;
        esi22 = g4925b4;
        edx23 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx21) + reinterpret_cast<uint32_t>(ebx16));
        esi24 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi22) + reinterpret_cast<uint32_t>(esi22));
        if (reinterpret_cast<uint32_t>(edx23) <= reinterpret_cast<uint32_t>(esi24)) {
            addr_42b9e9_14:
            edx25 = g4925b4;
            esi26 = g4925b4;
            edx27 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx25) - reinterpret_cast<uint32_t>(eax18));
            esi28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi26) + reinterpret_cast<uint32_t>(esi26));
            if (reinterpret_cast<uint32_t>(edx27) > reinterpret_cast<uint32_t>(esi28)) {
                if (reinterpret_cast<uint32_t>(edx27) - reinterpret_cast<uint32_t>(esi28) < reinterpret_cast<uint32_t>(ecx19)) {
                    eax29 = g4925b4;
                    eax18 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(eax29));
                    goto addr_42ba13_17;
                } else {
                    return 0;
                }
            }
        } else {
            if (reinterpret_cast<uint32_t>(edx23) - reinterpret_cast<uint32_t>(esi24) < reinterpret_cast<uint32_t>(ecx19)) {
                ebx16 = g4925b4;
                goto addr_42b9e9_14;
            } else {
                eax20 = 0;
            }
        }
    }
    return eax20;
    addr_42ba13_17:
    ebx30 = *reinterpret_cast<void**>((reinterpret_cast<uint32_t>(ebx16) + 0x40000000 >> 19) * 4 + 0x48bab0);
    if (ebx30 != *reinterpret_cast<void**>((reinterpret_cast<uint32_t>(eax18) + 0x40000000 >> 19) * 4 + 0x48bab0)) {
        ecx31 = g484d18;
        edx32 = reinterpret_cast<struct s370*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<uint32_t>(eax18) + 0x40000000 >> 19) * 4 + 0x48bab0)) - 1);
        eax33 = reinterpret_cast<struct s771*>(0x484d14);
        if (reinterpret_cast<int32_t>(edx32) > reinterpret_cast<int32_t>(ecx31)) {
            do {
                eax33 = reinterpret_cast<struct s771*>(&eax33->pad12);
            } while (reinterpret_cast<int32_t>(edx32) > reinterpret_cast<int32_t>(eax33->fc));
        }
        if (reinterpret_cast<int32_t>(ebx30) >= reinterpret_cast<int32_t>(eax33->f0) && reinterpret_cast<int32_t>(edx32) <= reinterpret_cast<int32_t>(eax33->f4)) {
            return 0;
        }
    } else {
        return 0;
    }
}

int32_t fun_440920(void** ecx) {
    void** edx2;
    int32_t eax3;

    edx2 = g60b70c;
    if (!edx2) {
        return 0;
    } else {
        SendMessageA();
        goto eax3;
    }
}

void fun_439b80(void** ecx, void** a2) {
    void* esp3;
    int1_t zf4;
    void** eax5;
    void** ebx6;
    void** eax7;
    void** edx8;
    void*** esp9;
    void** eax10;
    void* v11;
    void** eax12;
    void** edx13;
    void** eax14;
    void** edx15;
    void** eax16;
    void** eax17;
    void** ebx18;
    void** eax19;
    void** edx20;
    void** eax21;

    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 100);
    zf4 = reinterpret_cast<int1_t>(g4775e8 == 1);
    if (!zf4) {
        eax5 = g60b270;
        ebx6 = *reinterpret_cast<void***>(eax5);
        *reinterpret_cast<void***>(ebx6 + 20)(eax5, 0, 0, 0, 0x1000400, esp3, 100);
        eax7 = g60b268;
        edx8 = *reinterpret_cast<void***>(eax7);
        esp9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp3) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4);
        eax10 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx8 + 44)(eax7, 0, 1, eax5, 0, 0, 0, 0x1000400, esp3, 100));
        v11 = reinterpret_cast<void*>(esp9 + 12);
        g60b3a0 = eax10;
        eax12 = g60b270;
        edx13 = *reinterpret_cast<void***>(eax12);
        *reinterpret_cast<void***>(edx13 + 20)(eax12, 0, 0, 0, 0x1000400, v11, eax7, 0, 1, eax5, 0, 0, 0, 0x1000400, esp3, 100);
        eax14 = g60b268;
        edx15 = *reinterpret_cast<void***>(eax14);
        eax16 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx15 + 44)(eax14, 0, 1, eax12, 0, 0, 0, 0x1000400, v11, eax7, 0, 1, eax5, 0, 0, 0, 0x1000400, esp3, 100));
        g60b3a0 = eax16;
        eax17 = g60b270;
        ebx18 = *reinterpret_cast<void***>(eax17);
        *reinterpret_cast<void***>(ebx18 + 20)(eax17, 0, 0, 0, 0x1000400, esp9 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4, eax14, 0, 1, eax12, 0, 0, 0, 0x1000400, v11, eax7, 0, 1, eax5, 0, 0, 0, 0x1000400, esp3, 100);
        eax19 = g60b268;
        edx20 = *reinterpret_cast<void***>(eax19);
        eax21 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx20 + 44)(eax19, 0, 1, eax17, 0, 0, 0, 0x1000400, esp9 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4, eax14, 0, 1, eax12, 0, 0, 0, 0x1000400, v11, eax7, 0, 1, eax5, 0, 0, 0, 0x1000400, esp3, 100));
        g60b3a0 = eax21;
    }
    return;
}

void fun_42d640(void** ecx) {
    void** ecx2;
    void** eax3;
    uint32_t esi4;
    uint32_t edx5;
    void** eax6;
    struct s25* eax7;
    struct s25* edx8;
    struct s25* ebx9;
    void** edx10;
    void** edi11;
    void** edi12;
    void** ebx13;
    uint32_t eax14;
    void* edx15;
    uint32_t ecx16;
    void** ecx17;
    uint32_t esi18;
    uint32_t eax19;
    void* edx20;
    void*** ebx21;
    void* ebx22;

    ecx2 = eax3;
    esi4 = edx5;
    eax6 = g4775d0;
    eax7 = reinterpret_cast<struct s25*>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax6) - reinterpret_cast<unsigned char>(ecx2)) >> 1);
    g48ae9c = eax7;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx2) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx2 == 0))) {
        edx8 = g48ae9c;
        ebx9 = reinterpret_cast<struct s25*>(reinterpret_cast<unsigned char>(ecx2) * 4);
        eax7 = reinterpret_cast<struct s25*>(0);
        do {
            eax7->f488cc0 = edx8;
            eax7 = reinterpret_cast<struct s25*>(reinterpret_cast<uint32_t>(eax7) + 4);
            edx8 = reinterpret_cast<struct s25*>(reinterpret_cast<uint32_t>(edx8) + 1);
        } while (reinterpret_cast<int32_t>(eax7) < reinterpret_cast<int32_t>(ebx9));
    }
    edx10 = g4775d0;
    if (ecx2 != edx10) {
        *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edx10 == 0x140));
        edi11 = g4775d4;
        edi12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edi11) - ((reinterpret_cast<uint32_t>(eax7) & 0xff) + 1 << 5) - esi4) >> 1);
    } else {
        edi12 = reinterpret_cast<void**>(0);
    }
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi4) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi4 == 0))) {
        ebx13 = g60b9e8;
        eax14 = 0;
        edx15 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi12) * reinterpret_cast<unsigned char>(ebx13));
        ecx16 = esi4 * 4;
        do {
            *reinterpret_cast<void**>(eax14 + 0x487fc0) = edx15;
            eax14 = eax14 + 4;
            edx15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx15) + reinterpret_cast<unsigned char>(ebx13));
        } while (reinterpret_cast<int32_t>(eax14) < reinterpret_cast<int32_t>(ecx16));
    }
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi4) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi4 == 0))) {
        ecx17 = g4775d0;
        esi18 = esi4 * 4;
        eax19 = 0;
        edx20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi12) * reinterpret_cast<unsigned char>(ecx17));
        do {
            ebx21 = g5f27a0;
            eax19 = eax19 + 4;
            ebx22 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx21) + reinterpret_cast<uint32_t>(edx20));
            edx20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx20) + reinterpret_cast<unsigned char>(ecx17));
            *reinterpret_cast<void**>(eax19 + 0x48a13c) = ebx22;
        } while (reinterpret_cast<int32_t>(eax19) < reinterpret_cast<int32_t>(esi18));
    }
    g48aea0 = edi12;
    return;
}

void** g48bab0 = reinterpret_cast<void**>(82);

void* g491b98 = reinterpret_cast<void*>(0x808dc35b);

void fun_42dc40(void** ecx) {
    void** ebp2;
    void** edi3;
    void** esi4;
    void** edx5;
    void** eax6;
    void** esi7;
    int32_t ecx8;
    void** ebx9;
    void* edx10;
    void** eax11;
    void** edx12;
    void** edx13;
    void** eax14;
    void** ecx15;
    void** edx16;
    void** ebp17;
    int32_t ecx18;
    int32_t ebx19;
    void** edi20;
    int32_t ecx21;
    void** eax22;
    void** eax23;
    void* eax24;

    eax6 = fun_411d60(ecx, ebp2, edi3, esi4, edx5);
    esi7 = eax6;
    ecx8 = 0;
    ebx9 = esi7;
    do {
        if (*reinterpret_cast<int32_t*>(ecx8 + 0x4669e0) <= 0x20000) {
            if (*reinterpret_cast<int32_t*>(ecx8 + 0x4669e0) >= 0xfffe0000) {
                __asm__("shrd eax, edx, 0x10");
                edx10 = g4925b8;
                eax11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(edx10) - *reinterpret_cast<int32_t*>(ecx8 + 0x4669e0) * reinterpret_cast<unsigned char>(ebx9) + 0xffff) >> 16);
                if (reinterpret_cast<signed char>(eax11) >= reinterpret_cast<signed char>(0xffffffff)) {
                    edx12 = g48aea4;
                    edx13 = edx12 + 1;
                    if (reinterpret_cast<signed char>(eax11) > reinterpret_cast<signed char>(edx13)) {
                        eax11 = edx13;
                    }
                } else {
                    eax11 = reinterpret_cast<void**>(0xffffffff);
                }
            } else {
                eax14 = g48aea4;
                eax11 = eax14 + 1;
            }
        } else {
            eax11 = reinterpret_cast<void**>(0xffffffff);
        }
        ecx8 = ecx8 + 4;
        *reinterpret_cast<void***>(ecx8 + 0x48baac) = eax11;
    } while (ecx8 != 0x4000);
    ecx15 = g48aea4;
    edx16 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<signed char>(ecx15) >= reinterpret_cast<signed char>(0)) {
        ebp17 = g48bab0;
        ecx18 = 0;
        do {
            ebx19 = 0;
            eax11 = reinterpret_cast<void**>(0);
            if (reinterpret_cast<signed char>(edx16) < reinterpret_cast<signed char>(ebp17)) {
                do {
                    eax11 = eax11 + 4;
                    ++ebx19;
                } while (reinterpret_cast<signed char>(edx16) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax11 + 0x48bab4)));
            }
            edi20 = g48aea4;
            ecx18 = ecx18 + 4;
            ++edx16;
            *reinterpret_cast<int32_t*>(ecx18 + 0x491b94) = (ebx19 << 19) - 0x40000000;
        } while (reinterpret_cast<signed char>(edx16) <= reinterpret_cast<signed char>(edi20));
    }
    ecx21 = 0;
    do {
        __asm__("shrd eax, edx, 0x10");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx21 + 0x48bab0) == 0xffffffff)) {
            eax22 = g48aea4;
            if (eax22 + 1 == *reinterpret_cast<void***>(ecx21 + 0x48bab0)) {
                eax23 = g48aea4;
                *reinterpret_cast<void***>(ecx21 + 0x48bab0) = eax23;
            }
        } else {
            *reinterpret_cast<void***>(ecx21 + 0x48bab0) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi7) ^ reinterpret_cast<unsigned char>(esi7));
        }
        ecx21 = ecx21 + 4;
    } while (ecx21 != 0x4000);
    eax24 = g491b98;
    g4925b4 = eax24;
    return;
}

void** g48ae5c = reinterpret_cast<void**>(0xad);

struct s772 {
    void** f0;
    signed char[21] pad22;
    int16_t f16;
    signed char[1282] pad1306;
    int16_t f51a;
};

void fun_42e8a0(void** ecx, void** a2);

void** g5ee6b0 = reinterpret_cast<void**>(0);

struct s773 {
    void** f0;
    signed char[21] pad22;
    int16_t f16;
    signed char[1282] pad1306;
    int16_t f51a;
};

void** fun_42e980(void** ecx) {
    void** v2;
    void** ebx3;
    void** v4;
    void** v5;
    void** edx6;
    void** v7;
    void** esi8;
    void** v9;
    void** edi10;
    void** v11;
    void** ebp12;
    void** ebp13;
    int1_t cf14;
    void** eax15;
    void** ecx16;
    void** esi17;
    void** v18;
    void** eax19;
    void** edx20;
    int32_t ebx21;
    int32_t eax22;
    void** eax23;
    void** eax24;
    void** edi25;
    struct s772* esi26;
    void** v27;
    void** eax28;
    void** eax29;
    void** eax30;
    void** esi31;
    struct s773* edi32;
    int1_t less_or_equal33;
    void* eax34;
    void** ebx35;

    v2 = ebx3;
    v4 = ecx;
    v5 = edx6;
    v7 = esi8;
    v9 = edi10;
    v11 = ebp12;
    ebp13 = reinterpret_cast<void**>(0x495330);
    cf14 = reinterpret_cast<unsigned char>(0x495330) < reinterpret_cast<unsigned char>(g5ee6b8);
    if (cf14) {
        do {
            eax15 = *reinterpret_cast<void***>(ebp13 + 12);
            ecx16 = *reinterpret_cast<void***>(ebp13 + 16);
            if (reinterpret_cast<signed char>(eax15) <= reinterpret_cast<signed char>(ecx16)) {
                esi17 = g5ee6d4;
                if (*reinterpret_cast<void***>(ebp13 + 4) != esi17) {
                    eax19 = fun_4348a0(ecx16, v18, v11);
                    edx20 = g4925d8;
                    g48ae5c = eax19;
                    __asm__("cdq ");
                    g5ee6b4 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp13)) - reinterpret_cast<unsigned char>(edx20) ^ reinterpret_cast<unsigned char>(edx20)) - reinterpret_cast<unsigned char>(edx20);
                    ebx21 = g4925a4;
                    eax22 = (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebp13 + 8)) >> 4) + ebx21;
                    if (eax22 >= 16) {
                        eax22 = 15;
                    }
                    if (eax22 < 0) {
                        eax22 = 0;
                    }
                    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(ebp13 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp13 + 16)) * 2) + 24) = 0x7fff;
                    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(ebp13 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp13 + 12)) * 2) + 20) = 0x7fff;
                    eax23 = *reinterpret_cast<void***>(ebp13 + 16);
                    g5ee6bc = reinterpret_cast<void***>(0x48fab0 + (eax22 << 9));
                    eax24 = eax23 + 1;
                    edi25 = *reinterpret_cast<void***>(ebp13 + 12);
                    v18 = eax24;
                    if (reinterpret_cast<signed char>(edi25) <= reinterpret_cast<signed char>(eax24)) {
                        esi26 = reinterpret_cast<struct s772*>(ebp13 + reinterpret_cast<unsigned char>(edi25) * 2);
                        do {
                            if (static_cast<int32_t>(esi26->f16) == -1) {
                                esi26->f16 = 0x7fff;
                            }
                            ecx16 = reinterpret_cast<void**>(static_cast<int32_t>(esi26->f16));
                            v27 = reinterpret_cast<void**>(static_cast<int32_t>(esi26->f51a));
                            fun_42e8a0(ecx16, v27);
                            ++edi25;
                            esi26 = reinterpret_cast<struct s772*>(reinterpret_cast<uint32_t>(esi26) + 2);
                        } while (reinterpret_cast<signed char>(edi25) <= reinterpret_cast<signed char>(v18));
                    }
                    eax28 = g48ae5c;
                    if (*reinterpret_cast<int32_t*>(eax28 + 0xfffffff4) != 0x1d4a11) {
                        fun_43bd40(ecx16, "Z_CT at r_plane.c:%i", 0x1c6, v18);
                    }
                    eax15 = fun_437910(ecx16, v18, v11, v9, v7, v5, v4, v2);
                } else {
                    eax29 = g5f12e8;
                    g48ae7c = eax29;
                    eax30 = g487fb4;
                    g48ae90 = eax30;
                    eax15 = g5ee6b0;
                    esi31 = *reinterpret_cast<void***>(ebp13 + 12);
                    g48ae78 = eax15;
                    if (reinterpret_cast<signed char>(esi31) <= reinterpret_cast<signed char>(ecx16)) {
                        edi32 = reinterpret_cast<struct s773*>(ebp13 + reinterpret_cast<unsigned char>(esi31) * 2);
                        while (1) {
                            g48ae8c = reinterpret_cast<void**>(static_cast<int32_t>(edi32->f16));
                            g48ae88 = reinterpret_cast<void**>(static_cast<int32_t>(edi32->f51a));
                            eax15 = g48ae8c;
                            less_or_equal33 = reinterpret_cast<signed char>(eax15) <= reinterpret_cast<signed char>(g48ae88);
                            if (less_or_equal33 && reinterpret_cast<signed char>(eax15) > reinterpret_cast<signed char>(0xffffffff)) {
                                g48ae84 = esi31;
                                eax34 = fun_42c000(ecx16);
                                g48ae80 = eax34;
                                eax15 = reinterpret_cast<void**>(g491b90());
                            }
                            edi32 = reinterpret_cast<struct s773*>(reinterpret_cast<uint32_t>(edi32) + 2);
                            ++esi31;
                            ecx16 = *reinterpret_cast<void***>(ebp13 + 16);
                            if (reinterpret_cast<signed char>(esi31) > reinterpret_cast<signed char>(ecx16)) 
                                break;
                        }
                    }
                }
            }
            ebx35 = g5ee6b8;
            ebp13 = ebp13 + 0xa1c;
        } while (reinterpret_cast<unsigned char>(ebp13) < reinterpret_cast<unsigned char>(ebx35));
    }
    return eax15;
}

void fun_42e8a0(void** ecx, void** a2) {
    int32_t v3;
    int32_t eax4;
    void** esi5;
    void** edx6;
    void** edi7;
    void** ebx8;
    void** edx9;
    int32_t ebp10;
    uint32_t eax11;
    uint32_t esi12;
    uint32_t edx13;
    int32_t eax14;
    uint32_t ecx15;
    uint32_t edi16;
    uint32_t esi17;

    v3 = eax4;
    esi5 = edx6;
    edi7 = ebx8;
    if (reinterpret_cast<signed char>(edx9) < reinterpret_cast<signed char>(ecx)) {
        do {
            if (reinterpret_cast<signed char>(esi5) > reinterpret_cast<signed char>(edi7)) 
                break;
            fun_42e530(ecx);
            ++esi5;
        } while (reinterpret_cast<signed char>(esi5) < reinterpret_cast<signed char>(ecx));
    }
    while (reinterpret_cast<signed char>(edi7) > reinterpret_cast<signed char>(a2) && reinterpret_cast<signed char>(edi7) >= reinterpret_cast<signed char>(esi5)) {
        fun_42e530(ecx);
        --edi7;
    }
    ebp10 = v3;
    eax11 = reinterpret_cast<unsigned char>(ecx) * 4;
    esi12 = reinterpret_cast<unsigned char>(esi5) * 4;
    edx13 = reinterpret_cast<unsigned char>(a2) * 4;
    while (reinterpret_cast<int32_t>(eax11) < reinterpret_cast<int32_t>(esi12) && reinterpret_cast<int32_t>(eax11) <= reinterpret_cast<int32_t>(edx13)) {
        eax11 = eax11 + 4;
        ++ecx;
        *reinterpret_cast<int32_t*>(eax11 + 0x49352c) = ebp10;
    }
    eax14 = v3;
    ecx15 = reinterpret_cast<unsigned char>(ecx) * 4;
    edi16 = reinterpret_cast<unsigned char>(edi7) * 4;
    esi17 = reinterpret_cast<unsigned char>(a2) * 4;
    while (reinterpret_cast<int32_t>(esi17) > reinterpret_cast<int32_t>(edi16) && reinterpret_cast<int32_t>(esi17) >= reinterpret_cast<int32_t>(ecx15)) {
        esi17 = esi17 - 4;
        *reinterpret_cast<int32_t*>(esi17 + 0x493534) = eax14;
    }
    return;
}

void** fun_42db30(void** ecx) {
    void** eax2;
    void** eax3;
    void** ecx4;
    void** esi5;
    void** ebx6;
    void** eax7;

    eax2 = fun_444285();
    eax3 = fun_444285();
    ecx4 = eax3;
    if (reinterpret_cast<signed char>(eax3) > reinterpret_cast<signed char>(eax2)) {
        ecx4 = eax2;
    }
    fun_411d60(ecx4, esi5, ecx, ebx6, __return_address());
    eax7 = fun_411d60(ecx4, esi5, ecx, ebx6, __return_address());
    return eax7;
}

void** g5eec68 = reinterpret_cast<void**>(0);

void** g5f12fc = reinterpret_cast<void**>(0);

void** fun_4306c0(void** ecx) {
    void** esp2;
    struct s419* edx3;
    int32_t edi4;
    void** eax5;
    struct s419* eax6;
    int1_t cf7;
    int1_t cf8;
    struct s419* eax9;
    void** ecx10;
    int32_t esi11;
    void** eax12;
    void** edx13;
    void** edx14;

    esp2 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 60);
    edx3 = g5f12f8;
    edi4 = reinterpret_cast<int32_t>(edx3 - 0xbdd8d) / 60;
    eax5 = esp2;
    if (edi4) {
        eax6 = reinterpret_cast<struct s419*>(0x5eec68);
        cf7 = 0x5eec68 < reinterpret_cast<uint32_t>(g5f12f8);
        if (cf7) {
            do {
                eax6->f4 = reinterpret_cast<uint32_t>(eax6) + 60;
                eax6->f0 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax6) + 0xffffffc4);
                eax6 = reinterpret_cast<struct s419*>(reinterpret_cast<uint32_t>(eax6) + 60);
                cf8 = reinterpret_cast<uint32_t>(eax6) < reinterpret_cast<uint32_t>(g5f12f8);
            } while (cf8);
        }
        g5eec68 = esp2;
        eax9 = g5f12f8;
        eax5 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax9) - 60);
        *reinterpret_cast<void***>(eax5 + 4) = esp2;
        ecx10 = reinterpret_cast<void**>(0);
        g5f12fc = reinterpret_cast<void**>(0x5f12fc);
        g5f1300 = reinterpret_cast<void**>(0x5f12fc);
        esi11 = 0;
        if (!(reinterpret_cast<uint1_t>(edi4 < 0) | reinterpret_cast<uint1_t>(edi4 == 0))) {
            do {
                eax12 = reinterpret_cast<void**>(0x5eec68);
                edx13 = reinterpret_cast<void**>(0x7fffffff);
                if (esp2 != 0x5eec68) {
                    do {
                        if (reinterpret_cast<signed char>(edx13) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax12 + 36))) {
                            edx13 = *reinterpret_cast<void***>(eax12 + 36);
                            ecx10 = eax12;
                        }
                        eax12 = *reinterpret_cast<void***>(eax12 + 4);
                    } while (eax12 != esp2);
                }
                edx14 = *reinterpret_cast<void***>(ecx10);
                *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx10 + 4)) = edx14;
                *reinterpret_cast<void***>(edx14 + 4) = *reinterpret_cast<void***>(ecx10 + 4);
                *reinterpret_cast<void***>(ecx10 + 4) = reinterpret_cast<void**>(0x5f12fc);
                eax5 = g5f12fc;
                *reinterpret_cast<void***>(ecx10) = eax5;
                *reinterpret_cast<void***>(eax5 + 4) = ecx10;
                ++esi11;
                g5f12fc = ecx10;
            } while (esi11 < edi4);
        }
    }
    return eax5;
}

int32_t midiOutGetNumDevs = 0x22086e;

int32_t midiOutSetVolume = 0x2208aa;

uint32_t g48318c = 0x8bc03100;

void fun_41abf0(void** ecx) {
    void** v2;
    uint32_t ebp3;
    uint32_t eax4;
    int32_t eax5;
    int32_t edi6;
    int32_t edx7;
    uint32_t esi8;
    int32_t eax9;
    uint32_t esi10;
    int32_t ebx11;
    int32_t v12;

    v2 = ecx;
    ebp3 = eax4;
    eax5 = reinterpret_cast<int32_t>(midiOutGetNumDevs());
    edi6 = eax5;
    edx7 = reinterpret_cast<int32_t>(ebp3) >> 31 << 3;
    esi8 = 0;
    eax9 = reinterpret_cast<int32_t>(ebp3 - (edx7 + reinterpret_cast<uint1_t>(ebp3 < edx7 + __intrinsic()))) >> 3 << 12;
    *reinterpret_cast<int16_t*>(&esi8) = *reinterpret_cast<int16_t*>(&eax9);
    esi10 = esi8 | esi8 << 16;
    midiOutSetVolume();
    ebx11 = 0;
    if (!(reinterpret_cast<uint1_t>(edi6 < 0) | reinterpret_cast<uint1_t>(edi6 == 0))) {
        do {
            v12 = ebx11;
            ++ebx11;
            midiOutSetVolume(v12, esi10);
        } while (ebx11 < edi6);
    }
    g48318c = ebp3;
    goto v2;
}

struct s774 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[7] pad16;
    unsigned char f10;
};

int32_t fun_41aca0(void** ecx) {
    int32_t v2;
    void** v3;
    void** edi4;
    void** v5;
    void** ebp6;
    struct s774* edi7;
    int32_t eax8;
    int32_t eax9;
    void** edx10;
    void** v11;
    int32_t ebx12;
    void** esi13;
    void** v14;
    int32_t eax15;
    void** v16;
    void** v17;
    unsigned char dh18;

    v2 = reinterpret_cast<int32_t>(__return_address());
    v3 = edi4;
    v5 = ebp6;
    edi7 = reinterpret_cast<struct s774*>(0x618080 + (eax8 * 4 + eax9) * 4);
    edx10 = edi7->f8;
    edi7->f10 = reinterpret_cast<unsigned char>(edi7->f10 | 2);
    if (edx10) {
        v11 = edx10;
        midiOutReset(v11);
        ebx12 = edi7->f0;
        esi13 = edi7->f4;
        edi7->f10 = reinterpret_cast<unsigned char>(edi7->f10 & 0xfd);
        while (--ebx12, ebx12 != -1) {
            v14 = edi7->f8;
            eax15 = reinterpret_cast<int32_t>(midiOutUnprepareHeader(v14, esi13, 64, v11));
            if (eax15 && eax15 == 5) {
                v16 = edi7->f8;
                fun_437a90(ecx, "[Invalid] Handle is %08X", v16, v14, esi13, 64, v11, v5, v3);
            }
            esi13 = esi13 + 64;
        }
        v17 = edi7->f8;
        midiStreamClose(v17, v11);
        dh18 = edi7->f10;
        edi7->f8 = reinterpret_cast<void**>(0);
        edi7->f10 = reinterpret_cast<unsigned char>(dh18 & 0xf8);
    }
    goto v2;
}

int32_t fun_41ac80(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17) {
    void** v18;
    void** v19;
    void** ebx20;
    void** v21;
    void** v22;
    void** edx23;
    void** ecx24;
    int32_t eax25;
    int32_t eax26;
    void** edx27;

    v18 = reinterpret_cast<void**>(__return_address());
    v19 = ebx20;
    v21 = ecx;
    v22 = edx23;
    ecx24 = reinterpret_cast<void**>(0x618080 + (eax25 * 4 + eax26) * 4);
    if (!*reinterpret_cast<void***>(ecx24 + 8)) {
        edx27 = *reinterpret_cast<void***>(ecx24);
        while ((--edx27, !reinterpret_cast<int1_t>(edx27 == 0xffffffff)) && (fun_4440d1(ecx24, v22, v21, v19, v18, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17), !(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx24 + 16)) & 8))) {
        }
        fun_4440d1(ecx24, v22, v21, v19, v18, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
        fun_442b80(ecx24, v22, v21, v19, v18, a2);
        return 0;
    } else {
        return -1;
    }
}

struct s775 {
    signed char[6] pad6;
    int16_t f6;
};

struct s776 {
    signed char[4] pad4;
    int16_t f4;
};

uint32_t g4776b8 = 15;

void** fun_41ac70(void** ecx) {
    void** v2;
    void** v3;
    void** ebx4;
    void** v5;
    void** v6;
    void** edx7;
    void** v8;
    void** esi9;
    void** v10;
    void** edi11;
    void** v12;
    void** ebp13;
    void* esp14;
    void* ecx15;
    struct s775* eax16;
    void** ecx17;
    void* eax18;
    uint32_t eax19;
    struct s776* eax20;
    void** ebp21;
    void** v22;
    void** eax23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** eax32;
    void** esi33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** v51;
    void** eax52;
    void* esp53;
    void** v54;
    void** v55;
    void** v56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** edi72;
    void** v73;
    void* eax74;
    void** eax75;
    void** edi76;
    void** edx77;
    void** v78;
    void** edi79;
    void** v80;
    void** v81;
    void** edi82;
    void** al83;
    void** v84;
    uint32_t eax85;
    void* ebx86;
    void** v87;
    void** ebx88;
    void** v89;
    void* eax90;
    void** edx91;
    void** ebx92;
    void** v93;
    uint32_t ebx94;
    int32_t eax95;
    uint32_t ebx96;
    int1_t cf97;
    uint32_t ebx98;
    uint32_t edx99;
    void** ebx100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** eax105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** eax110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** eax119;
    void** eax120;
    void** edx121;
    void** eax122;
    void** edi123;
    uint32_t eax124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** eax130;
    void** ecx131;
    uint32_t eax132;
    void** esi133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void** eax138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** eax143;
    void** eax144;
    void** eax145;
    void** bh146;
    void** v147;
    void** v148;
    void** v149;
    void** v150;
    void** v151;
    void** v152;
    void** v153;
    void** v154;
    void** v155;
    void** v156;
    void** v157;
    void** v158;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = ebx4;
    v5 = ecx;
    v6 = edx7;
    v8 = esi9;
    v10 = edi11;
    v12 = ebp13;
    esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 52);
    ecx15 = reinterpret_cast<void*>(0);
    *reinterpret_cast<int16_t*>(&ecx15) = eax16->f6;
    ecx17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx15) + reinterpret_cast<uint32_t>(eax18));
    *reinterpret_cast<int16_t*>(&eax19) = eax20->f4;
    ebp21 = reinterpret_cast<void**>(0x618080);
    v22 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx17) + (eax19 & 0xffff));
    eax23 = reinterpret_cast<void**>(0);
    do {
        if (!*reinterpret_cast<void***>(ebp21)) 
            break;
        ++eax23;
        ebp21 = ebp21 + 20;
    } while (reinterpret_cast<unsigned char>(eax23) < reinterpret_cast<unsigned char>(16));
    if (!reinterpret_cast<int1_t>(eax23 == 16)) {
        eax32 = fun_442e73(ecx17, v24, v25, v26, v27, v22, v28, v29, v30, v31);
        esi33 = eax32;
        if (!eax32) {
            fun_437a90(ecx17, "Out of memory building MIDI data", v34, v35, v36, v37, v22, v38, v39);
            return 0xffffffff;
        }
        fun_442b80(ecx17, v40, v41, v42, v43, v22);
        eax52 = fun_442e73(ecx17, v44, v45, v46, v47, v22, v48, v49, v50, v51);
        esp53 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 + 4 - 4 + 4 - 4 + 4);
        *reinterpret_cast<void***>(esi33) = eax52;
        if (!eax52) {
            fun_4440d1(ecx17, v54, v55, v56, v57, v22, v58, v59, v60, v61, v62, v63, v64, v65, v12, v10, v8, v6, v5, v3, v2);
            fun_437a90(ecx17, "Out of memory building MIDI data", v66, v67, v68, v69, v22, v70, v71);
            return 0xffffffff;
        }
        *reinterpret_cast<void***>(esi33 + 4) = reinterpret_cast<void**>(0x4b0);
        *reinterpret_cast<void***>(esi33 + 12) = ebp21;
        *reinterpret_cast<void***>(ebp21) = reinterpret_cast<void**>(1);
        *reinterpret_cast<void***>(ebp21 + 4) = esi33;
        edi72 = *reinterpret_cast<void***>(esi33);
        v73 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi33 + 4)) + reinterpret_cast<unsigned char>(edi72));
        eax74 = reinterpret_cast<void*>(0);
        while (eax74 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax74) + 1), *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp53) + reinterpret_cast<uint32_t>(eax74) - 1) = 0x7f, reinterpret_cast<uint32_t>(eax74) < 16) {
        }
        eax75 = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<void***>(edi72) = reinterpret_cast<void**>(0);
        edi76 = edi72 + 4;
        edx77 = reinterpret_cast<void**>(0);
        v78 = reinterpret_cast<void**>(0xffffffff);
        *reinterpret_cast<void***>(edi76) = reinterpret_cast<void**>(0);
        edi79 = edi76 + 4;
        v80 = reinterpret_cast<void**>(0);
        v81 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(edi79) = reinterpret_cast<void**>(0x10f4240);
        edi82 = edi79 + 4;
        do {
            if (reinterpret_cast<unsigned char>(ecx17) >= reinterpret_cast<unsigned char>(v22)) 
                break;
            al83 = *reinterpret_cast<void***>(ecx17);
            v84 = al83;
            *reinterpret_cast<unsigned char*>(&eax75) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al83) & 0x70);
            eax85 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax75) & 0xff) >> 4);
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&eax85) + 1) = *reinterpret_cast<void***>(&eax85);
            *reinterpret_cast<void***>(&eax85) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v84) & 15);
            ++ecx17;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax85) == 15)) {
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&eax85) == 9)) {
                    *reinterpret_cast<void***>(&eax85) = reinterpret_cast<void**>(15);
                }
            } else {
                *reinterpret_cast<void***>(&eax85) = reinterpret_cast<void**>(9);
            }
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&eax85) + 1)) <= 6) {
                edx77 = reinterpret_cast<void**>(0);
                edx77 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&eax85) + 1);
                switch (edx77) {
                case 0:
                case 1:
                    edx77 = *reinterpret_cast<void***>(ecx17);
                    ++ecx17;
                    if (reinterpret_cast<unsigned char>(edx77) & 0x80) {
                        ++ecx17;
                        ebx86 = reinterpret_cast<void*>(0);
                        edx77 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx77) & 0x7f);
                        *reinterpret_cast<void***>(&ebx86) = *reinterpret_cast<void***>(&eax85);
                        (&edx77)[1] = *reinterpret_cast<void***>(ecx17 + 0xffffffff);
                        *reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp53) + reinterpret_cast<int32_t>(ebx86)) = (&edx77)[1];
                    }
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&eax85) + 1) == 1)) {
                        v87 = reinterpret_cast<void**>(0x80);
                    } else {
                        v87 = reinterpret_cast<void**>(0x90);
                    }
                    ebx88 = reinterpret_cast<void**>(0);
                    ebx88 = *reinterpret_cast<void***>(&eax85);
                    v89 = ebx88;
                    eax90 = reinterpret_cast<void*>(eax85 & 0xff);
                    *reinterpret_cast<signed char*>(&eax90) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp53) + reinterpret_cast<uint32_t>(eax90));
                    edx77 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(edx77) & 0xff) << 8 | (reinterpret_cast<unsigned char>(v87) | reinterpret_cast<unsigned char>(v89)) | (reinterpret_cast<uint32_t>(eax90) & 0xff) << 16);
                    v78 = edx77;
                    break;
                case 2:
                    (&edx77)[1] = reinterpret_cast<void**>(0);
                    edx77 = *reinterpret_cast<void***>(ecx17);
                    edx91 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx77) << 6);
                    ebx92 = edx91;
                    *reinterpret_cast<unsigned char*>(&ebx92 + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx92 + 1) ^ *reinterpret_cast<unsigned char*>(&edx91 + 1));
                    *reinterpret_cast<unsigned char*>(&ebx92) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ebx92) & 0x7f);
                    v93 = ebx92;
                    ebx94 = 0;
                    *reinterpret_cast<int16_t*>(&ebx94) = *reinterpret_cast<int16_t*>(&v93);
                    *reinterpret_cast<void***>(&eax85) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&eax85)) | 0xe0);
                    eax95 = 0;
                    *reinterpret_cast<int16_t*>(&eax95) = *reinterpret_cast<int16_t*>(&edx91);
                    ++ecx17;
                    edx77 = reinterpret_cast<void**>(ebx94 << 8 | eax85 & 0xff | reinterpret_cast<uint32_t>(eax95 >> 7) << 16);
                    v78 = edx77;
                    break;
                case 3:
                case 4:
                    edx77 = *reinterpret_cast<void***>(ecx17);
                    ++ecx17;
                    (&edx77)[1] = reinterpret_cast<void**>(0);
                    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(&eax85) + 1) == 4)) {
                        ++ecx17;
                        (&edx77)[1] = *reinterpret_cast<void***>(ecx17 + 0xffffffff);
                    }
                    *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&eax85) + 1) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>((&edx77)[1]) & 0x7f);
                    if (edx77) {
                        ebx96 = 0;
                        *reinterpret_cast<void***>(&ebx96) = edx77;
                        cf97 = ebx96 < g4776b8;
                        if (cf97) {
                            ebx98 = 0;
                            *reinterpret_cast<unsigned char*>(&ebx98) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&eax85)) | 0xb0);
                            *reinterpret_cast<void***>(&eax85) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&eax85) + 1);
                            edx77 = reinterpret_cast<void**>(ebx98 | *reinterpret_cast<uint32_t*>((reinterpret_cast<unsigned char>(edx77) & 0xff) * 4 + 0x47767c) | (eax85 & 0xff) << 16);
                            v78 = edx77;
                            break;
                        }
                    } else {
                        edx99 = 0;
                        *reinterpret_cast<void***>(&edx99) = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(&eax85) + 1);
                        edx77 = reinterpret_cast<void**>(edx99 << 8);
                        *reinterpret_cast<void***>(&eax85) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&eax85)) | 0xc0);
                        v78 = reinterpret_cast<void**>(eax85 & 0xff | reinterpret_cast<unsigned char>(edx77));
                        break;
                    }
                case 6:
                    edx77 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi82) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi33)));
                    *reinterpret_cast<void***>(esi33 + 8) = edx77;
                    v81 = reinterpret_cast<void**>(1);
                case 5:
                    goto 0x440e1e;
                }
            }
            if (v78 != 0xffffffff) {
                edx77 = v73;
                if (reinterpret_cast<unsigned char>(edi82 + 12) >= reinterpret_cast<unsigned char>(edx77)) {
                    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi33 + 4) + 0x4b0) <= reinterpret_cast<unsigned char>(0x8000)) {
                        ebx100 = *reinterpret_cast<void***>(esi33);
                        eax105 = fun_444348(ecx17, v101, v102, v103, v104, v22, v81, v87, v89, v73, v80, v78, v93, v84, v12);
                        esp53 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp53) - 4 + 4);
                        if (!eax105) 
                            goto addr_440f08_39;
                        *reinterpret_cast<void***>(esi33) = eax105;
                        *reinterpret_cast<void***>(esi33 + 4) = *reinterpret_cast<void***>(esi33 + 4) + 0x4b0;
                        edx77 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi33 + 4)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi33)));
                        edi82 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi82) - reinterpret_cast<unsigned char>(ebx100) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi33)));
                        v73 = edx77;
                    } else {
                        *reinterpret_cast<void***>(esi33 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi82) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi33)));
                        eax110 = fun_444348(ecx17, v106, v107, v108, v109, v22, v81, v87, v89, v73, v80, v78, v93, v84, v12);
                        if (!eax110) 
                            goto addr_440e69_42;
                        fun_442b80(ecx17, v111, v112, v113, v114, v22);
                        eax119 = fun_442e73(ecx17, v115, v116, v117, v118, v22, v81, v87, v89, v73);
                        esp53 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp53) - 4 + 4 - 4 + 4 - 4 + 4);
                        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax110) + (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp21)) << 6)) = eax119;
                        if (!eax119) 
                            goto addr_440eb4_44;
                        eax120 = *reinterpret_cast<void***>(ebp21);
                        edx121 = *reinterpret_cast<void***>(ebp21);
                        *reinterpret_cast<void***>(ebp21 + 4) = eax110;
                        edx77 = edx121 + 1;
                        esi33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax110) + (reinterpret_cast<unsigned char>(eax120) << 6));
                        *reinterpret_cast<void***>(ebp21) = edx77;
                        *reinterpret_cast<void***>(esi33 + 4) = reinterpret_cast<void**>(0x4b0);
                        edi82 = *reinterpret_cast<void***>(esi33);
                        eax122 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi33 + 4)) + reinterpret_cast<unsigned char>(edi82));
                        *reinterpret_cast<void***>(esi33 + 12) = ebp21;
                        v73 = eax122;
                    }
                }
                edi123 = edi82 + 4;
                *reinterpret_cast<void***>(edi123 + 0xfffffffc) = v80;
                *reinterpret_cast<void***>(edi123) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(edi123 + 4) = v78;
                v78 = reinterpret_cast<void**>(0xffffffff);
                edi82 = edi123 + 4 + 4;
                v80 = reinterpret_cast<void**>(0);
            }
            (&edx77)[1] = v84;
            eax124 = 0;
            if (reinterpret_cast<unsigned char>((&edx77)[1]) & 0x80) {
                do {
                    edx77 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx17)) & 0x7f);
                    eax124 = eax124 << 7 | reinterpret_cast<unsigned char>(edx77) & 0xff;
                    edx77 = ecx17;
                    ++ecx17;
                } while (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx77)) & 0x80);
            }
            eax75 = reinterpret_cast<void**>(eax124 * 4);
            edx77 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v80) + reinterpret_cast<unsigned char>(eax75));
            v80 = edx77;
        } while (!v81);
        goto addr_440fa4_50;
    } else {
        fun_437a90(ecx17, "%u MUS handles was not enough.\n", eax23, v125, v126, v127, v128, v22, v129);
        eax130 = reinterpret_cast<void**>(0xffffffff);
        goto addr_44107a_52;
    }
    addr_440fde_53:
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebp21) == 1) && ((ecx131 = *reinterpret_cast<void***>(ebp21 + 4), eax132 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx131 + 8)) >> 1) / 12, esi133 = reinterpret_cast<void**>((eax132 * 4 - eax132) * 4), !!esi133) && (reinterpret_cast<unsigned char>(esi133) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx131 + 8)) && (eax138 = fun_444348(ecx131, v134, v135, v136, v137, v22, v81, v87, v89, v73, v80, v78, v93, v84, v12), !!eax138)))) {
        fun_442b80(eax138, v139, v140, v141, v142, v22);
        *reinterpret_cast<void***>(eax138 + 64) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax138)) + reinterpret_cast<unsigned char>(esi133));
        eax143 = *reinterpret_cast<void***>(eax138 + 4);
        *reinterpret_cast<void***>(eax138 + 76) = ebp21;
        *reinterpret_cast<void***>(eax138 + 68) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax143) - reinterpret_cast<unsigned char>(esi133));
        eax144 = *reinterpret_cast<void***>(eax138 + 8);
        *reinterpret_cast<void***>(eax138 + 4) = esi133;
        *reinterpret_cast<void***>(eax138 + 8) = esi133;
        *reinterpret_cast<void***>(eax138 + 72) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax144) - reinterpret_cast<unsigned char>(esi133));
        eax145 = *reinterpret_cast<void***>(ebp21);
        bh146 = *reinterpret_cast<void***>(ebp21 + 16);
        *reinterpret_cast<void***>(ebp21 + 4) = eax138;
        *reinterpret_cast<void***>(ebp21) = eax145 + 1;
        *reinterpret_cast<void***>(ebp21 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(bh146) | 8);
    }
    eax130 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebp21 - 0x618080) / 20);
    addr_44107a_52:
    return eax130;
    addr_440fa4_50:
    goto addr_440fde_53;
    addr_440f08_39:
    fun_437a90(ecx17, "Out of memory building MIDI data", v147, v148, v149, v150, v22, v81, v87);
    return 0xffffffff;
    addr_440e69_42:
    fun_437a90(ecx17, "Out of memory building MIDI data", v151, v152, v153, v154, v22, v81, v87);
    return 0xffffffff;
    addr_440eb4_44:
    fun_437a90(ecx17, "Out of memory building MIDI data", v155, v156, v157, v158, v22, v81, v87);
    return 0xffffffff;
}

struct s777 {
    int32_t f0;
    int32_t f4;
    void** f8;
    signed char[3] pad12;
    void** fc;
    signed char[3] pad16;
    unsigned char f10;
};

int32_t midiStreamOpen = 0x2208ea;

void** g6181c0 = reinterpret_cast<void**>(0);

int32_t midiStreamProperty = 0x22091e;

int32_t midiOutPrepareHeader = 0x220882;

int32_t midiStreamOut = 0x2208fc;

void** fun_41acb0(void** ecx) {
    int32_t v2;
    int1_t zf3;
    void** eax4;
    void** ecx5;
    struct s777* ebx6;
    int32_t eax7;
    int32_t eax8;
    int32_t edx9;
    void** edi10;
    void* esp11;
    void* v12;
    void*** v13;
    int32_t eax14;
    void* v15;
    void** v16;
    int32_t eax17;
    int32_t esi18;
    int32_t edi19;
    void** v20;
    int32_t eax21;
    void** edx22;
    int32_t eax23;
    unsigned char dl24;
    void** v25;
    int32_t eax26;

    v2 = reinterpret_cast<int32_t>(__return_address());
    zf3 = g48318c == 0;
    if (zf3) {
        return eax4;
    }
    ecx5 = reinterpret_cast<void**>(0xffffffff);
    ebx6 = reinterpret_cast<struct s777*>(0x618080 + (eax7 * 4 + eax8) * 4);
    if (edx9) 
        goto addr_4411f2_5;
    addr_4411f6_6:
    edi10 = ebx6->f8;
    if (!edi10) {
        esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 16 - 4 - 4 - 4 - 4);
        v12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) + 24);
        v13 = &ebx6->f8;
        eax14 = reinterpret_cast<int32_t>(midiStreamOpen(v13, v12, 1));
        if (eax14 || (g6181c0 = ebx6->f8, v13 = reinterpret_cast<void***>(8), v12 = reinterpret_cast<void*>(0x230), v15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 - 4 - 4 + 4 - 4 + 4), ecx5 = ebx6->f8, v16 = ecx5, eax17 = reinterpret_cast<int32_t>(midiStreamProperty(v16, v15, 0x80000001, 8, 0x230, 1)), !!eax17)) {
            addr_4412bb_8:
            if (!0) {
                fun_441120(ecx5, v13, v12, 1);
            }
        } else {
            ebx6->fc = edi10;
            esi18 = ebx6->f4;
            edi19 = ebx6->f0;
            while (--edi19, edi19 != -1) {
                v20 = ebx6->f8;
                eax21 = reinterpret_cast<int32_t>(midiOutPrepareHeader(v20, esi18, 64, v16, v15, 0x80000001, 8, 0x230, 1));
                if (eax21) 
                    goto addr_4412bb_8;
                edx22 = ebx6->fc;
                ecx5 = ebx6->f8;
                ebx6->fc = edx22 + 1;
                eax23 = reinterpret_cast<int32_t>(midiStreamOut(ecx5, esi18, 64, v20, esi18, 64, v16, v15, 0x80000001, 8, 0x230, 1));
                if (eax23) 
                    goto addr_441291_14;
                esi18 = esi18 + 64;
            }
            goto addr_44129f_16;
        }
    } else {
        goto addr_4412cd_18;
    }
    addr_4412cd_18:
    goto v2;
    addr_44129f_16:
    dl24 = reinterpret_cast<unsigned char>(ebx6->f10 & 0xfc);
    v25 = ebx6->f8;
    ebx6->f10 = dl24;
    eax26 = reinterpret_cast<int32_t>(midiStreamRestart(v25, v16, v15, 0x80000001, 8, 0x230, 1));
    if (!eax26) {
        goto addr_4412bb_8;
    }
    addr_441291_14:
    ebx6->fc = ebx6->fc - 1;
    goto addr_4412bb_8;
    addr_4411f2_5:
    ebx6->f10 = reinterpret_cast<unsigned char>(ebx6->f10 | 4);
    goto addr_4411f6_6;
}

struct s778 {
    signed char[8] pad8;
    void** f8;
};

struct s779 {
    int32_t f0;
    void** f4;
};

void** fun_430fc0(void** ecx) {
    void** ecx2;
    void** eax3;
    void** edi4;
    void** edx5;
    void** ebx6;
    void** edx7;
    void** ebx8;
    void* ebx9;
    void** eax10;
    void** eax11;
    void* eax12;
    void* esi13;
    void** ebx14;
    int1_t zf15;
    void* eax16;
    void* esi17;
    void** ebx18;
    struct s779* ebx19;
    void** ebx20;
    void*** ebx21;
    void** eax22;
    void** eax23;

    ecx2 = eax3;
    edi4 = edx5;
    ebx6 = g5f1364;
    edx7 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx6) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx6 == 0)) {
        addr_431029_2:
        ebx8 = g5f1364;
        if (edx7 != ebx8) {
            addr_4310ae_3:
            ebx9 = reinterpret_cast<void*>((reinterpret_cast<unsigned char>(edx7) * 4 - reinterpret_cast<unsigned char>(edx7)) * 4);
            eax10 = g5f22cc;
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebx9) + reinterpret_cast<unsigned char>(eax10)) = edi4;
            *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(ebx9) + reinterpret_cast<unsigned char>(eax10) + 4) = ecx2;
            eax11 = edx7;
        } else {
            edx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx7) ^ reinterpret_cast<unsigned char>(ebx8));
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx8) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx8 == 0))) {
                eax12 = reinterpret_cast<void*>(0);
                esi13 = reinterpret_cast<void*>((reinterpret_cast<unsigned char>(ebx8) * 4 - reinterpret_cast<unsigned char>(ebx8)) * 4);
                do {
                    ebx14 = g5f22cc;
                    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi4 + 8)) <= reinterpret_cast<signed char>((*reinterpret_cast<struct s778**>(reinterpret_cast<unsigned char>(ebx14) + reinterpret_cast<uint32_t>(eax12)))->f8)) 
                        break;
                    eax12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax12) + 12);
                    ++edx7;
                } while (reinterpret_cast<int32_t>(eax12) < reinterpret_cast<int32_t>(esi13));
            }
            zf15 = edx7 == g5f1364;
            if (!zf15) 
                goto addr_431077_9; else 
                goto addr_431070_10;
        }
    } else {
        eax16 = reinterpret_cast<void*>(0);
        esi17 = reinterpret_cast<void*>((reinterpret_cast<unsigned char>(ebx6) * 4 - reinterpret_cast<unsigned char>(ebx6)) * 4);
        do {
            ebx18 = g5f22cc;
            ebx19 = reinterpret_cast<struct s779*>(reinterpret_cast<unsigned char>(ebx18) + reinterpret_cast<uint32_t>(eax16));
            if (!ebx19->f0) 
                goto addr_431029_2;
            if (!ecx2) 
                continue;
            if (ecx2 == ebx19->f4) 
                goto addr_430ffd_15;
            eax16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax16) + 12);
            ++edx7;
        } while (reinterpret_cast<int32_t>(eax16) < reinterpret_cast<int32_t>(esi17));
        goto addr_431029_2;
    }
    addr_4310cc_17:
    return eax11;
    addr_431077_9:
    ebx20 = g5f22cc;
    ebx21 = reinterpret_cast<void***>(ebx20 + (reinterpret_cast<unsigned char>(edx7) * 4 - reinterpret_cast<unsigned char>(edx7)) * 4);
    if (*ebx21) {
        eax22 = fun_41af00(ecx2);
        if (eax22) {
            fun_41aea0(ecx2);
        }
        *ebx21 = reinterpret_cast<void**>(0);
        goto addr_4310ae_3;
    }
    addr_431070_10:
    eax11 = reinterpret_cast<void**>(0xffffffff);
    goto addr_4310cc_17;
    addr_430ffd_15:
    if (ebx19->f0) {
        eax23 = fun_41af00(ecx2);
        if (eax23) {
            fun_41aea0(ecx2);
        }
        ebx19->f0 = 0;
        goto addr_431029_2;
    }
}

struct s780 {
    signed char[60] pad60;
    int32_t f3c;
    int32_t f40;
    int32_t f44;
};

void** fun_41af80(void** ecx) {
    void* ebp2;
    int32_t eax3;
    void** eax4;
    struct s780** ebx5;
    uint32_t eax6;
    int1_t zf7;
    int32_t eax8;
    struct s780* ecx9;
    int32_t edx10;
    int32_t edx11;
    int32_t eax12;
    struct s780* ecx13;
    int32_t esi14;
    int32_t eax15;
    int32_t v16;
    struct s780* edx17;

    ebp2 = reinterpret_cast<void*>(eax3 >> 8);
    eax4 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp2) * 8);
    ebx5 = *reinterpret_cast<struct s780***>((reinterpret_cast<unsigned char>(eax4) + reinterpret_cast<uint32_t>(ebp2)) * 4 + (eax6 & 0xff) * 4 + 0x5f136c);
    zf7 = g4654d0 == 0;
    if (!zf7 && (eax8 != -1 && eax8)) {
        ecx9 = *ebx5;
        ecx9->f40();
        edx10 = edx11 - 0x78;
        eax12 = edx10 * 4 + edx10;
        ecx13 = *ebx5;
        esi14 = reinterpret_cast<int32_t>(ebx5 - 16);
        ecx13->f3c(ebx5, eax12 + eax12);
        eax15 = esi14 * 4 + esi14;
        v16 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp2) * 4 + 0x4831a8) - (eax15 + eax15);
        edx17 = *ebx5;
        eax4 = reinterpret_cast<void**>(edx17->f44(ebx5, v16, ebx5, eax12 + eax12));
    }
    return eax4;
}

void** fun_4339a0(void** ecx, void** a2, void** a3, uint32_t a4, int32_t a5) {
    void** ebp6;
    void** v7;
    void** eax8;
    void** edx9;
    void** ebx10;
    signed char* ebx11;
    int32_t ebx12;
    void* eax13;
    void* edi14;
    signed char* edx15;
    signed char* esi16;
    signed char* edi17;
    uint32_t ecx18;
    int1_t zf19;
    int1_t zf20;
    void** edi21;

    ebp6 = a2;
    v7 = ecx;
    fun_41d4e0();
    fun_41d4e0();
    eax8 = edx9;
    ebx10 = g4775d0;
    ebx11 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx10) * reinterpret_cast<unsigned char>(eax8) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(ebx12 * 4 + 0x5f27a0)) + reinterpret_cast<int32_t>(eax13));
    edi14 = reinterpret_cast<void*>(a4 * reinterpret_cast<unsigned char>(g4775d0));
    edx15 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(a5 * 4 + 0x5f27a0)) + reinterpret_cast<uint32_t>(edi14) + reinterpret_cast<unsigned char>(a3));
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebp6) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebp6 == 0))) {
        do {
            esi16 = ebx11;
            edi17 = edx15;
            eax8 = v7;
            ecx18 = reinterpret_cast<unsigned char>(v7) >> 2;
            zf19 = ecx18 == 0;
            do {
                if (!ecx18) 
                    break;
                --ecx18;
                *edi17 = *esi16;
                edi17 = edi17 + 4;
                esi16 = esi16 + 4;
            } while (!zf19);
            *reinterpret_cast<unsigned char*>(&ecx18) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax8) & 3);
            zf20 = *reinterpret_cast<unsigned char*>(&ecx18) == 0;
            do {
                if (!ecx18) 
                    break;
                --ecx18;
                *edi17 = *esi16;
                ++edi17;
                ++esi16;
            } while (!zf20);
            edi21 = g4775d0;
            --ebp6;
            ebx11 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx11) + reinterpret_cast<unsigned char>(edi21));
            edx15 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx15) + reinterpret_cast<unsigned char>(edi21));
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebp6) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebp6 == 0)));
    }
    return eax8;
}

int32_t g5f271c = 0;

int32_t g5f2714 = 0;

void** fun_432f30(void** ecx) {
    int1_t zf2;
    int1_t zf3;
    int32_t ecx4;
    void** esi5;
    int1_t zf6;
    int32_t ecx7;
    void** ecx8;
    void** ecx9;
    void** ecx10;
    void** eax11;

    zf2 = g5f26bc == 0;
    if (zf2 || (zf3 = g482a6c == 0, !zf3)) {
        ecx4 = 0;
    } else {
        ecx4 = 1;
    }
    esi5 = g482a6c;
    g5f271c = ecx4;
    if (!esi5 || (zf6 = g5f26bc == 0, zf6)) {
        ecx7 = 0;
    } else {
        ecx7 = 1;
    }
    g5f2714 = ecx7;
    ecx8 = reinterpret_cast<void**>(0x5f22e0);
    fun_431df0(0x5f22e0);
    do {
        fun_431df0(ecx8);
        fun_431df0(ecx8);
        ecx8 = ecx8 + 32;
    } while (!reinterpret_cast<int1_t>(ecx8 == 0x5f2360));
    fun_431e30(ecx8);
    ecx9 = reinterpret_cast<void**>(0x5f2460);
    fun_431e30(0x5f2460);
    fun_432150(0x5f2460);
    do {
        ecx9 = ecx9 + 28;
        fun_431ef0(ecx9);
    } while (!reinterpret_cast<int1_t>(ecx9 == 0x5f2508));
    ecx10 = reinterpret_cast<void**>(0x5f26c0);
    fun_431ef0(0x5f26c0);
    do {
        ecx10 = ecx10 + 28;
        fun_431ef0(ecx10);
    } while (!reinterpret_cast<int1_t>(ecx10 == 0x5f2714));
    eax11 = fun_431df0(ecx10);
    return eax11;
}

struct s781 {
    signed char[9] pad9;
    void** f9;
};

struct s782 {
    signed char[1] pad1;
    void** f1;
};

void** g4669d4 = reinterpret_cast<void**>(0);

void** fun_432d70(void** ecx) {
    void** edx2;
    void** eax3;
    void** edx4;
    void** ebx5;
    void** edx6;
    void** edx7;
    struct s781* edx8;
    struct s782* edx9;
    int1_t zf10;
    void** edx11;

    edx2 = g5f274c;
    if (edx2) {
        eax3 = edx2;
        edx4 = *reinterpret_cast<void***>(edx2 + 0xdc);
        if (*reinterpret_cast<void***>(eax3 + 48) && (ebx5 = reinterpret_cast<void**>(12 - reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax3 + 48)) >> 6)), eax3 = ebx5, reinterpret_cast<signed char>(ebx5) > reinterpret_cast<signed char>(edx4))) {
            edx4 = ebx5;
        }
        if (!edx4) {
            edx6 = g5f274c;
            ecx = *reinterpret_cast<void***>(edx6 + 0xe0);
            if (!ecx) {
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx6 + 56)) > reinterpret_cast<signed char>(0x80) || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx6 + 56)) & 8) {
                    edx7 = reinterpret_cast<void**>(13);
                } else {
                    edx7 = reinterpret_cast<void**>(0);
                }
            } else {
                edx8 = reinterpret_cast<struct s781*>(reinterpret_cast<int32_t>(ecx + 7) >> 3);
                if (reinterpret_cast<int32_t>(edx8) >= 4) {
                    edx8 = reinterpret_cast<struct s781*>(3);
                }
                edx7 = reinterpret_cast<void**>(&edx8->f9);
            }
        } else {
            edx9 = reinterpret_cast<struct s782*>(reinterpret_cast<int32_t>(edx4 + 7) >> 3);
            if (reinterpret_cast<int32_t>(edx9) >= 8) {
                edx9 = reinterpret_cast<struct s782*>(7);
            }
            edx7 = reinterpret_cast<void**>(&edx9->f1);
        }
        zf10 = edx7 == g4669d4;
        if (!zf10) {
            g4669d4 = edx7;
            fun_42ce70(ecx, edx11);
            eax3 = fun_43c290(ecx, edx11);
        }
    }
    return eax3;
}

void** g5f26b8 = reinterpret_cast<void**>(0);

void** g5f2740 = reinterpret_cast<void**>(0);

void** g5f26a8 = reinterpret_cast<void**>(0);

void** g5f2718 = reinterpret_cast<void**>(0);

struct s783 {
    signed char[6235656] pad6235656;
    int32_t f5f2608;
};

void fun_433480(void** ecx) {
    void** edx2;
    void** ebx3;
    struct s783* eax4;

    g5f2754 = reinterpret_cast<void**>(1);
    g5f2750 = reinterpret_cast<void**>(0);
    g5f26b8 = reinterpret_cast<void**>(0);
    g5f2720 = reinterpret_cast<void**>(1);
    g5f26bc = reinterpret_cast<void**>(1);
    g5f2740 = reinterpret_cast<void**>(0);
    edx2 = g482a7c;
    g5f26a8 = reinterpret_cast<void**>(0);
    g5f2718 = reinterpret_cast<void**>(0);
    g46688c = reinterpret_cast<void**>(0);
    g4669d4 = reinterpret_cast<void**>(0xffffffff);
    g466884 = reinterpret_cast<void**>(0xffffffff);
    ebx3 = reinterpret_cast<void**>(0x482518 + (reinterpret_cast<uint32_t>(edx2 + reinterpret_cast<unsigned char>(edx2) * 8) * 4 - reinterpret_cast<unsigned char>(edx2)) * 8);
    eax4 = reinterpret_cast<struct s783*>(0);
    do {
        eax4 = reinterpret_cast<struct s783*>(reinterpret_cast<uint32_t>(eax4) + 4);
        eax4->f5f2608 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx3) + reinterpret_cast<uint32_t>(eax4) + 0x74);
    } while (!reinterpret_cast<int1_t>(eax4 == 36));
    g5f274c = ebx3;
    fun_444197(3);
    fun_431b60(3);
    return;
}

int32_t fun_445cc6(void** ecx);

void fun_445ebe();

void fun_445eea();

int32_t g477ad8 = 0;

int32_t g477b74 = 0;

void** fun_4436a3(void** ecx, void** a2, uint32_t a3, void** a4, void** a5) {
    void** v6;
    void** edi7;
    int32_t eax8;
    uint32_t esi9;
    int32_t edx10;
    void** ebx11;
    uint32_t eax12;
    void** eax13;
    int32_t eax14;
    void** v15;
    void** eax16;
    void** ebx17;
    void** v18;
    void** v19;
    void** v20;
    void** ebp21;
    void** eax22;
    void** v23;
    void** v24;
    void* eax25;
    void** eax26;
    int32_t eax27;
    void** edi28;
    int1_t zf29;
    void** v30;

    v6 = edi7;
    eax8 = fun_445cc6(ecx);
    if (!eax8) {
        esi9 = a3 & 7;
        fun_445ebe();
        fun_445eea();
        edx10 = g477ad8;
        ebx11 = reinterpret_cast<void**>(0x80);
        if (!edx10 || (eax12 = fun_442f62(ecx), !!eax12)) {
            if (!(*reinterpret_cast<unsigned char*>(&a3) & 32)) {
                if (*reinterpret_cast<unsigned char*>(&a3) & 64) {
                    addr_443789_5:
                    eax13 = reinterpret_cast<void**>(5);
                } else {
                    addr_44379c_6:
                    eax13 = reinterpret_cast<void**>(3);
                }
            } else {
                eax14 = g477b74;
                ecx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a5) & reinterpret_cast<uint32_t>(~eax14));
                v15 = ecx;
                if (*reinterpret_cast<unsigned char*>(&v15 + 1) & 1 && !(*reinterpret_cast<unsigned char*>(&v15) & 0x80)) {
                    ebx11 = reinterpret_cast<void**>(1);
                }
                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&a3) + 1) & 4)) 
                    goto addr_44377d_10; else 
                    goto addr_443774_11;
            }
        } else {
            fun_445e7f();
            eax16 = reinterpret_cast<void**>(image_base_());
            ebx17 = eax16;
            g477ad8(0, eax16, 0xff);
            goto addr_443800_13;
        }
    } else {
        fun_44515b(v18, v19, v20, ebp21, v6);
        eax22 = reinterpret_cast<void**>(0xffffffff);
        goto addr_443850_15;
    }
    addr_4437a1_16:
    eax25 = fun_449da8(a2, v23, v24, 0, eax13, ebx11, 0);
    if (!reinterpret_cast<int1_t>(eax25 == -1)) {
        addr_4437e8_17:
        eax26 = reinterpret_cast<void**>(image_base_());
        ebx17 = eax26;
        eax27 = fun_445f19(ecx);
        if (eax27) {
        }
    } else {
        if (*reinterpret_cast<unsigned char*>(&v6) & 32) {
            ecx = v23;
            eax25 = fun_449da8(a2, ecx, a2, 0, edi28, ebx11, 0);
        }
        if (!reinterpret_cast<int1_t>(eax25 == -1)) 
            goto addr_4437e8_17; else 
            goto addr_4437de_22;
    }
    addr_443800_13:
    if (esi9 != 2) {
        if (esi9) {
            if (esi9 == 1) {
            }
        }
    }
    if (*reinterpret_cast<unsigned char*>(&a3) & 16) {
    }
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&a3) + 1) & 3)) {
        zf29 = g477a5d == 0x200;
        if (!zf29) {
            addr_443847_32:
            fun_445faf();
            eax22 = ebx17;
        } else {
            addr_443845_33:
            goto addr_443847_32;
        }
    } else {
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&a3) + 1) & 2)) 
            goto addr_443847_32;
        goto addr_443845_33;
    }
    addr_443850_15:
    return eax22;
    addr_4437de_22:
    eax22 = fun_4457b6(ecx, a2, v23, v24, 0, eax13, ebx11, 0, v30);
    goto addr_443850_15;
    addr_44377d_10:
    if (!(*reinterpret_cast<unsigned char*>(&a3) & 64)) {
        edi28 = reinterpret_cast<void**>(4);
        goto addr_44379c_6;
    } else {
        edi28 = reinterpret_cast<void**>(2);
        goto addr_443789_5;
    }
    addr_443774_11:
    edi28 = reinterpret_cast<void**>(1);
    eax13 = reinterpret_cast<void**>(1);
    goto addr_4437a1_16;
}

struct s784 {
    signed char[15] pad15;
    unsigned char ff;
    signed char[172] pad188;
    int32_t fbc;
    int32_t fc0;
};

void fun_4364f0() {
    void** ebx1;
    struct s784* eax2;
    int32_t edx3;

    ebx1 = g60aff0;
    eax2 = reinterpret_cast<struct s784*>(0x482518);
    edx3 = 0;
    do {
        if (*reinterpret_cast<int32_t*>(edx3 + 0x482978)) {
            if (!(eax2->ff & 1)) {
                eax2->fbc = 0;
            } else {
                if (!eax2->fbc) {
                    ebx1 = reinterpret_cast<void**>(1);
                }
                eax2->fbc = 1;
            }
            if (!(eax2->ff & 2)) {
                eax2->fc0 = 0;
            } else {
                if (!eax2->fc0) {
                    ebx1 = reinterpret_cast<void**>(1);
                }
                eax2->fc0 = 1;
            }
        }
        edx3 = edx3 + 4;
        eax2 = reinterpret_cast<struct s784*>(reinterpret_cast<int32_t>(eax2) + 0x118);
    } while (edx3 != 16);
    g60aff0 = ebx1;
    return;
}

struct s785 {
    uint32_t f0;
    void* f4;
    void** f8;
    signed char[11] pad20;
    void** f14;
    signed char[3] pad24;
    void* f18;
    signed char[12] pad40;
    void** f28;
    signed char[7] pad48;
    void** f30;
};

void** fun_434f50(void** ecx) {
    void** edi2;
    int1_t zf3;
    void** eax4;
    void** ecx5;
    int32_t esi6;
    void** eax7;
    struct s785* ebx8;
    void** edx9;
    void** edx10;
    void** edx11;
    uint32_t eax12;
    void** eax13;
    void** eax14;
    void** eax15;
    void** edx16;

    edi2 = g60afe8;
    zf3 = g481264 == 0;
    if (zf3 && (eax4 = g60afe4, reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax4)) <= reinterpret_cast<signed char>(2))) {
        ecx5 = reinterpret_cast<void**>(0);
        esi6 = 0;
        while (eax7 = g60afe4, eax4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax7)) * 4), reinterpret_cast<signed char>(ecx5) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax4) + reinterpret_cast<uint32_t>("\n")))) {
            ebx8 = reinterpret_cast<struct s785*>(*reinterpret_cast<int32_t*>(eax4 + 0x47758c) + esi6);
            if (edi2 != ebx8->f28) 
                goto addr_435048_5;
            if (ebx8->f0 < 1) {
                if (ebx8->f0) {
                    addr_435048_5:
                    esi6 = esi6 + 56;
                    ++ecx5;
                    continue;
                } else {
                    edx9 = ebx8->f30 + 1;
                    ebx8->f30 = edx9;
                    if (reinterpret_cast<signed char>(edx9) >= reinterpret_cast<signed char>(ebx8->f8)) {
                        ebx8->f30 = reinterpret_cast<void**>(0);
                    }
                }
            } else {
                if (ebx8->f0 <= 1) {
                    edx10 = ebx8->f30 + 1;
                    ebx8->f30 = edx10;
                    if (edx10 != ebx8->f8) {
                        edx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi2) + reinterpret_cast<uint32_t>(ebx8->f4));
                        goto addr_435045_13;
                    } else {
                        g60afe8 = edi2;
                        ebx8->f30 = reinterpret_cast<void**>(0xffffffff);
                        eax12 = fun_41d480(ecx5);
                        edi2 = g60afe8;
                        edx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi2) + reinterpret_cast<uint32_t>(ebx8->f18) + reinterpret_cast<int32_t>(eax12) % reinterpret_cast<signed char>(ebx8->f14));
                        goto addr_435045_13;
                    }
                } else {
                    if (ebx8->f0 == 2) {
                        eax13 = g60afe0;
                        if (eax13 || ecx5 != 7) {
                            eax13 = reinterpret_cast<void**>(1);
                        }
                        if (!eax13) 
                            goto addr_435048_5;
                        eax14 = g60afe4;
                        if (ebx8->f14 != *reinterpret_cast<void***>(eax14 + 12)) 
                            goto addr_435048_5;
                        eax15 = ebx8->f30 + 1;
                        edx16 = ebx8->f8;
                        ebx8->f30 = eax15;
                        if (eax15 == edx16) {
                            ebx8->f30 = ebx8->f30 - 1;
                        }
                    } else {
                        goto addr_435048_5;
                    }
                }
            }
            edx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi2) + reinterpret_cast<uint32_t>(ebx8->f4));
            addr_435045_13:
            ebx8->f28 = edx11;
            goto addr_435048_5;
        }
    }
    g60afe8 = edi2;
    return eax4;
}

struct s786 {
    signed char[4] pad4;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
};

void** fun_435f40(void** ecx) {
    void** eax2;
    int1_t zf3;
    int1_t zf4;
    void** edx5;
    void* ecx6;
    struct s786* ecx7;
    void** ebx8;
    int32_t edx9;
    int32_t edx10;
    void** edx11;
    void** ebp12;
    void** edx13;
    int1_t zf14;
    void** ebp15;
    void** ebp16;
    void** ebx17;
    int1_t zf18;
    void** eax19;
    void** esi20;
    void** eax21;
    int1_t zf22;
    void** edx23;
    void* edx24;
    void** eax25;
    void** esi26;
    void** esi27;
    void** edx28;
    void** ebp29;
    void** ebp30;
    void** edx31;
    void* edx32;
    int1_t less_or_equal33;
    void** eax34;
    void** esi35;
    unsigned char dh36;
    void** edx37;
    void* edx38;
    void** ebx39;
    int1_t less_or_equal40;
    void** eax41;
    void** ecx42;
    void** ecx43;
    unsigned char bl44;
    void** edx45;
    void* eax46;
    void** ebx47;
    int1_t less_or_equal48;
    void** eax49;
    void** edx50;
    unsigned char bh51;
    void** edx52;
    void* eax53;
    void** ebx54;
    int1_t less_or_equal55;
    void** eax56;

    eax2 = fun_434f50(ecx);
    zf3 = g60aff0 == 0;
    if (!zf3 && (zf4 = reinterpret_cast<int1_t>(g60af64 == 10), !zf4)) {
        edx5 = g60afec;
        g60aff0 = reinterpret_cast<void**>(0);
        ecx6 = g60afdc;
        ecx7 = reinterpret_cast<struct s786*>(reinterpret_cast<uint32_t>(ecx6) + reinterpret_cast<uint32_t>(edx5 + reinterpret_cast<unsigned char>(edx5) * 4) * 8);
        ebx8 = g60afe4;
        edx9 = ecx7->f8 * 100;
        g60af44 = reinterpret_cast<void**>(ecx7->f4 * 100 / reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx8 + 16)));
        edx10 = ecx7->fc * 100;
        g60af2c = reinterpret_cast<void**>(edx9 / reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx8 + 20)));
        g60af54 = reinterpret_cast<void**>(edx10 / reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx8 + 24)));
        ecx = reinterpret_cast<void**>(35);
        edx11 = *reinterpret_cast<void***>(ebx8 + 32);
        g60afbc = reinterpret_cast<void**>(ecx7->f10 / reinterpret_cast<signed char>(35));
        g60afa8 = reinterpret_cast<void**>(reinterpret_cast<signed char>(edx11) / reinterpret_cast<signed char>(35));
        eax2 = fun_4312d0(35, ebp12);
        g60af64 = reinterpret_cast<void**>(10);
    }
    edx13 = g60af64;
    if (!reinterpret_cast<int1_t>(edx13 == 2)) {
        if (!reinterpret_cast<int1_t>(edx13 == 4)) {
            if (!reinterpret_cast<int1_t>(edx13 == 6)) {
                if (!reinterpret_cast<int1_t>(edx13 == 8)) {
                    if (!reinterpret_cast<int1_t>(edx13 == 10)) {
                        zf14 = (*reinterpret_cast<unsigned char*>(&g60af64) & 1) == 0;
                        if (!zf14 && (ebp15 = g60afd4, ebp16 = ebp15 - 1, g60afd4 = ebp16, !ebp16)) {
                            ebx17 = g60af64;
                            g60afd4 = reinterpret_cast<void**>(35);
                            g60af64 = ebx17 + 1;
                        }
                    } else {
                        zf18 = g60aff0 == 0;
                        if (!zf18) {
                            eax19 = fun_4312d0(ecx, ebp12);
                            esi20 = g481264;
                            if (!esi20) {
                                g60aff0 = esi20;
                                g60afe0 = reinterpret_cast<void**>(1);
                                g60aff4 = reinterpret_cast<void**>(0x8c);
                                eax21 = fun_434ea0(ecx);
                                return eax21;
                            } else {
                                g60afe0 = reinterpret_cast<void**>(0xffffffff);
                                g60aff0 = reinterpret_cast<void**>(0);
                                g60aff4 = reinterpret_cast<void**>(10);
                                return eax19;
                            }
                        }
                    }
                } else {
                    zf22 = (*reinterpret_cast<unsigned char*>(&g60afe8) & 3) == 0;
                    if (zf22) {
                        fun_4312d0(ecx, ebp12);
                    }
                    edx23 = g60afec;
                    edx24 = g60afdc;
                    eax25 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edx24) + reinterpret_cast<uint32_t>(edx23 + reinterpret_cast<unsigned char>(edx23) * 4) * 8 + 16) / 35);
                    esi26 = g60afbc;
                    esi27 = esi26 + 3;
                    g60afbc = esi27;
                    if (reinterpret_cast<signed char>(eax25) <= reinterpret_cast<signed char>(esi27)) {
                        g60afbc = eax25;
                    }
                    edx28 = g60afe4;
                    eax2 = reinterpret_cast<void**>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx28 + 32)) / 35);
                    ebp29 = g60afa8;
                    ebp30 = ebp29 + 3;
                    g60afa8 = ebp30;
                    if (reinterpret_cast<signed char>(eax2) <= reinterpret_cast<signed char>(ebp30) && (edx31 = g60afec, g60afa8 = eax2, edx32 = g60afdc, eax2 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edx32) + reinterpret_cast<uint32_t>(edx31 + reinterpret_cast<unsigned char>(edx31) * 4) * 8 + 16) / 35), less_or_equal33 = reinterpret_cast<signed char>(eax2) <= reinterpret_cast<signed char>(g60afbc), less_or_equal33)) {
                        eax34 = fun_4312d0(ecx, ebp12);
                        ++g60af64;
                        return eax34;
                    }
                }
            } else {
                esi35 = g60af54;
                dh36 = *reinterpret_cast<unsigned char*>(&g60afe8);
                g60af54 = esi35 + 2;
                if (!(dh36 & 3)) {
                    fun_4312d0(ecx, ebp12);
                }
                edx37 = g60afec;
                edx38 = g60afdc;
                ebx39 = g60afe4;
                eax2 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edx38) + reinterpret_cast<uint32_t>(edx37 + reinterpret_cast<unsigned char>(edx37) * 4) * 8 + 12) * 100 / reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx39 + 24)));
                less_or_equal40 = reinterpret_cast<signed char>(eax2) <= reinterpret_cast<signed char>(g60af54);
                if (less_or_equal40) {
                    g60af54 = eax2;
                    eax41 = fun_4312d0(ecx, ebp12);
                    ++g60af64;
                    return eax41;
                }
            }
        } else {
            ecx42 = g60af2c;
            ecx43 = ecx42 + 2;
            bl44 = *reinterpret_cast<unsigned char*>(&g60afe8);
            g60af2c = ecx43;
            if (!(bl44 & 3)) {
                fun_4312d0(ecx43, ebp12);
            }
            edx45 = g60afec;
            eax46 = g60afdc;
            ebx47 = g60afe4;
            eax2 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edx45 + reinterpret_cast<unsigned char>(edx45) * 4) * 8 + reinterpret_cast<uint32_t>(eax46) + 8) * 100 / reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx47 + 20)));
            less_or_equal48 = reinterpret_cast<signed char>(eax2) <= reinterpret_cast<signed char>(g60af2c);
            if (less_or_equal48) {
                g60af2c = eax2;
                eax49 = fun_4312d0(ecx43, ebp12);
                ++g60af64;
                return eax49;
            }
        }
    } else {
        edx50 = g60af44;
        bh51 = *reinterpret_cast<unsigned char*>(&g60afe8);
        g60af44 = edx50 + 2;
        if (!(bh51 & 3)) {
            fun_4312d0(ecx, ebp12);
        }
        edx52 = g60afec;
        eax53 = g60afdc;
        ebx54 = g60afe4;
        eax2 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(edx52 + reinterpret_cast<unsigned char>(edx52) * 4) * 8 + reinterpret_cast<uint32_t>(eax53) + 4) * 100 / reinterpret_cast<signed char>(*reinterpret_cast<void***>(ebx54 + 16)));
        less_or_equal55 = reinterpret_cast<signed char>(eax2) <= reinterpret_cast<signed char>(g60af44);
        if (less_or_equal55) {
            g60af44 = eax2;
            eax56 = fun_4312d0(ecx, ebp12);
            ++g60af64;
            return eax56;
        }
    }
    return eax2;
}

int32_t DirectDrawCreate = 0x22113a;

void** fun_449dc0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23) {
    goto DirectDrawCreate;
}

void fun_4106c0(void** ecx, void** a2) {
    void** eax3;
    uint32_t eax4;
    void** edx5;
    void** esi6;
    void** edx7;
    void** eax8;
    void** esi9;
    void** eax10;
    void** eax11;

    eax3 = g4775d0;
    g4800e0 = reinterpret_cast<void**>(0);
    g4800dc = reinterpret_cast<void**>(0);
    g4800cc = eax3;
    if (!reinterpret_cast<int1_t>(eax3 == 0x140)) {
        eax4 = 64;
    } else {
        eax4 = 32;
    }
    edx5 = g4775d4;
    g4800c8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx5) - eax4);
    fun_4102a0(ecx);
    eax8 = fun_411d60(ecx, esi6, edx7, __return_address(), a2);
    esi9 = g4800bc;
    g459748 = eax8;
    if (reinterpret_cast<signed char>(eax8) > reinterpret_cast<signed char>(esi9)) {
        eax10 = g4800b8;
        g459748 = eax10;
    }
    eax11 = fun_411d60(ecx, esi6, edx7, __return_address(), a2);
    g4800b0 = eax11;
    return;
}

struct s787 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    int32_t f8;
    void** fc;
    signed char[3] pad16;
    void** f10;
    signed char[3] pad20;
    void** f14;
};

void fun_4320d0(void** ecx, void** a2, void** a3) {
    int32_t edi4;
    int32_t edx5;
    int1_t zf6;
    void* ebx7;
    void* ebx8;
    void* ebx9;
    int1_t zf10;
    uint32_t eax11;
    void** edx12;
    void** ebx13;
    int1_t less_or_equal14;
    void** ebp15;
    void** edi16;
    void** esi17;
    void** ebx18;
    struct s787* eax19;

    edi4 = edx5;
    zf6 = reinterpret_cast<int1_t>(g4775d0 == 0x280);
    if (zf6) {
        edi4 = edi4 + edi4;
        ebx7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx8) + reinterpret_cast<uint32_t>(ebx9));
    }
    zf10 = reinterpret_cast<int1_t>(g4775d0 == 0x140);
    if (!zf10) {
        eax11 = 64;
    } else {
        eax11 = 32;
    }
    edx12 = g4775d4;
    ebx13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx7) + (reinterpret_cast<unsigned char>(edx12) - eax11 + reinterpret_cast<uint32_t>(ebx7)));
    less_or_equal14 = reinterpret_cast<signed char>(ebx13) <= reinterpret_cast<signed char>(g4775d4);
    if (!less_or_equal14) {
        fun_437a90(ecx, "STlib_initNum: y too big %d", ebx13, ebp15, edi16, esi17, __return_address(), a2, a3);
        ebx18 = g4775d4;
        ebx13 = ebx18 - 64;
    }
    eax19->f8 = 0;
    eax19->f0 = edi4;
    eax19->f4 = ebx13;
    eax19->f14 = ecx;
    eax19->fc = a2;
    eax19->f10 = a3;
    return;
}

void fun_442a90() {
    int1_t cf1;
    uint32_t eax2;
    int32_t eax3;
    uint32_t eax4;
    uint32_t eax5;
    uint32_t eax6;
    uint32_t eax7;
    uint32_t edx8;
    uint32_t eax9;
    int1_t below_or_equal10;
    uint32_t eax11;
    uint32_t eax12;
    int32_t eax13;
    uint32_t eax14;
    uint32_t eax15;
    uint32_t eax16;
    uint32_t edx17;
    int32_t ebx18;
    uint32_t v19;
    int32_t v20;
    int32_t v21;
    int32_t eax22;

    __asm__("daa ");
    if (cf1) {
        if (eax2 < 19) {
            if (eax3 == 16) {
                eax4 = 0xb6;
            } else {
                goto addr_442b07_6;
            }
        } else {
            if (eax5 <= 19) {
                eax4 = 0xff;
            } else {
                if (eax6 < 37) {
                    addr_442b07_6:
                    eax7 = edx8 >> 16 & 0x7f;
                    *reinterpret_cast<signed char*>(&eax7) = *reinterpret_cast<signed char*>(eax7 + 0x4776d4);
                    eax4 = eax7 & 0xff;
                } else {
                    if (eax9 <= 37) {
                        addr_442add_11:
                        eax4 = 0xac;
                    } else {
                        goto addr_442ae4_13;
                    }
                }
            }
        }
    } else {
        if (below_or_equal10) {
            addr_442aeb_15:
            eax4 = 0xae;
        } else {
            if (eax11 < 100) {
                if (eax12 <= 40 || eax13 == 98) {
                    eax4 = 0xaf;
                } else {
                    goto addr_442b07_6;
                }
            } else {
                if (eax14 <= 100) 
                    goto addr_442add_11;
                if (eax15 < 0x66) 
                    goto addr_442b07_6;
                if (eax16 <= 0x66) 
                    goto addr_442aeb_15; else 
                    goto addr_442ab0_23;
            }
        }
    }
    addr_442b1a_24:
    *reinterpret_cast<unsigned char*>(&edx17) = reinterpret_cast<uint1_t>(ebx18 == 0);
    fun_411cc0(edx17 & 0xff, eax4, v19, v20);
    goto v21;
    addr_442ae4_13:
    eax4 = 0xad;
    goto addr_442b1a_24;
    addr_442ab0_23:
    if (eax22 != 0x68) {
        goto addr_442b07_6;
    }
}

struct s788 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_4317d0(void** ecx) {
    int1_t zf2;
    int32_t edi3;
    int32_t ebp4;
    int32_t esi5;
    int32_t ebx6;
    struct s788** ecx7;
    struct s788* edx8;
    void** eax9;
    void** edx10;

    zf2 = g4654d8 == 0;
    if (!zf2) {
        edi3 = 1;
        ebp4 = 72;
        do {
            esi5 = ebp4;
            ebx6 = edi3 * 36;
            do {
                ecx7 = *reinterpret_cast<struct s788***>(ebx6 + 0x5f136c);
                if (ecx7) {
                    edx8 = *ecx7;
                    edx8->f8(ecx7);
                }
                ebx6 = ebx6 + 4;
            } while (ebx6 != esi5);
            ++edi3;
            ebp4 = ebp4 + 36;
        } while (edi3 < 0x6d);
        eax9 = g4654d8;
        edx10 = *reinterpret_cast<void***>(eax9);
        *reinterpret_cast<void***>(edx10 + 8)(eax9);
    }
    return;
}

int32_t g459edc = 0;

int32_t ShowWindow = 0x220d78;

int32_t SetFocus = 0x220d1a;

int32_t CreateDialogParamA = 0x220ad6;

void fun_41a690(void** ecx) {
    int32_t edx2;
    int32_t eax3;
    int32_t edx4;

    edx2 = g459edc;
    if (edx2) {
        ShowWindow();
        SetFocus();
        goto 5;
    } else {
        eax3 = reinterpret_cast<int32_t>(CreateDialogParamA());
        g459edc = eax3;
        goto edx4;
    }
}

void fun_41aba0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15) {
    signed char tmp8_16;
    signed char tmp8_17;
    signed char tmp8_18;
    signed char tmp8_19;
    int32_t ebx20;

    tmp8_16 = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&g0)));
    *reinterpret_cast<signed char*>(&g0) = tmp8_16;
    tmp8_17 = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&g0)));
    *reinterpret_cast<signed char*>(&g0) = tmp8_17;
    tmp8_18 = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&g0)));
    *reinterpret_cast<signed char*>(&g0) = tmp8_18;
    tmp8_19 = reinterpret_cast<signed char>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&g0)));
    *reinterpret_cast<signed char*>(&g0) = tmp8_19;
    goto ebx20;
}

int32_t fun_43d3d0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24) {
    int32_t ebx25;
    int32_t eax26;
    int32_t* edx27;
    int32_t eax28;
    int32_t esi29;

    ebx25 = 0;
    eax26 = reinterpret_cast<int32_t>(RegOpenKeyA());
    if (!eax26) {
        RegQueryValueExA();
        RegCloseKey(0x80000001);
        if (1) {
            ebx25 = 0;
        } else {
            ebx25 = 1;
            *edx27 = eax28;
        }
    }
    if (!ebx25) {
        *edx27 = ebx25;
    }
    goto esi29;
}

int32_t g60b6f8 = 0;

void fun_43b710(void** ecx, void** a2, int32_t a3, int32_t a4);

int32_t g60b708 = 0;

int32_t GetObjectA = 0x2209be;

void** g60b6fc = reinterpret_cast<void**>(0);

int32_t SetWindowTextA = 0x220d52;

void** g60b438 = reinterpret_cast<void**>(0);

int32_t g60b700 = 0;

int32_t CreateFontA = 0x220974;

int32_t g60b704 = 0;

void fun_4406b0(int32_t a1, int32_t a2, int32_t a3);

int32_t fun_43b8d0(void** ecx) {
    int32_t eax2;
    int32_t eax3;
    void** eax4;
    int32_t ebx5;
    void** eax6;
    void** ecx7;
    void** edi8;
    int32_t eax9;
    int32_t eax10;
    int32_t eax11;

    g60b6f8 = 0;
    eax3 = reinterpret_cast<int32_t>(GetDC(eax2));
    ReleaseDC(eax4, eax3, eax2);
    fun_43b710(ecx, eax4, eax3, eax2);
    ebx5 = g60b708;
    GetObjectA(ebx5, 24, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 24 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 + 4, eax4, eax3, eax2);
    SetWindowPos();
    g60b6fc = eax4;
    eax6 = fun_4407f0(ecx, eax4, 0, 0, 0, 0x280, 0x17c, 22, ebx5, 24, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 24 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 + 4, eax4, eax3, eax2);
    ecx7 = g60b6fc;
    SetWindowTextA(ecx7, eax6);
    edi8 = g60b438;
    eax9 = reinterpret_cast<int32_t>(CreateWindowExA(0, "EDIT", 0x457768, 0x54001844, 10, eax4 + 10, 0x26c, 0x168 - reinterpret_cast<unsigned char>(eax4), eax4, 0xca, edi8, 0, ecx7, eax6));
    g60b700 = eax9;
    eax10 = reinterpret_cast<int32_t>(CreateFontA());
    g60b704 = eax10;
    eax11 = g60b700;
    SendMessageA(eax11, 48, eax10);
    fun_4406b0(eax11, 48, eax10);
    ShowWindow(eax4, 5, eax11, 48, eax10);
    UpdateWindow(eax4, eax4, 5, eax11, 48, eax10);
    goto 0;
}

int32_t FindResourceA = 0x2206ea;

int32_t LoadResource = 0x22077e;

int32_t LockResource = 0x2207a8;

int32_t SizeofResource = 0x2207c6;

int32_t CreatePalette = 0x220982;

int32_t SelectPalette = 0x220a0a;

int32_t RealizePalette = 0x2209f8;

int32_t StretchDIBits = 0x220a38;

int32_t DeleteObject = 0x22099e;

void fun_43afe0(void** ecx, void** a2, void** a3, int32_t a4, int32_t a5, int32_t a6, uint32_t a7, void* a8) {
    void** v9;
    void** v10;
    void** esi11;
    void** v12;
    void** edi13;
    void** v14;
    void** ebp15;
    void** v16;
    void** eax17;
    void** v18;
    void** edx19;
    void** v20;
    void** ebx21;
    void** v22;
    void** v23;
    void** edx24;
    void** v25;
    void** eax26;
    void** ebx27;
    void** ebx28;
    void** eax29;
    void** v30;
    void** ecx31;
    void** v32;
    void** eax33;
    void** v34;
    void*** eax35;
    void*** esi36;
    void** v37;
    void** edi38;
    void** v39;
    void** eax40;
    void** v41;
    void** eax42;
    void** edx43;
    void** ebp44;
    void** edi45;
    void** eax46;
    void** ecx47;
    int1_t zf48;
    int1_t zf49;
    void** esi50;
    void** v51;
    void** eax52;
    void** edi53;
    void** ebx54;
    void** edx55;
    void** eax56;
    void** v57;
    void** v58;
    int32_t eax59;
    int32_t v60;
    void** v61;
    void** v62;
    void** v63;
    int32_t v64;

    v9 = reinterpret_cast<void**>(__return_address());
    v10 = esi11;
    v12 = edi13;
    v14 = ebp15;
    v16 = eax17;
    v18 = edx19;
    v20 = ebx21;
    v22 = ecx;
    v23 = a3;
    edx24 = g60b438;
    v25 = edx24;
    eax26 = reinterpret_cast<void**>(FindResourceA(v25));
    ebx27 = eax26;
    if (!eax26) {
        ebx28 = g60b438;
        eax29 = reinterpret_cast<void**>(FindResourceA(ebx28, a3, 10, v25));
        ebx27 = eax29;
    }
    if (ebx27) {
        v30 = ebx27;
        ecx31 = g60b438;
        v32 = ecx31;
        eax33 = reinterpret_cast<void**>(LoadResource());
        v34 = eax33;
        eax35 = reinterpret_cast<void***>(LockResource());
        esi36 = eax35;
        if (!ebx27) {
            goto v18;
        }
        v37 = ebx27;
        edi38 = g60b438;
        v39 = edi38;
        eax40 = reinterpret_cast<void**>(SizeofResource(v39));
        if (!eax40) 
            goto addr_43b1c5_7;
        eax42 = fun_442e73(eax40, v39, v37, v34, v32, v30, v25, v23, 2, v41);
        edx43 = eax42;
        ebp44 = eax42;
        if (eax42) 
            goto addr_43b081_9;
    }
    addr_43b1c5_7:
    goto v14;
    addr_43b081_9:
    edi45 = eax42;
    eax46 = eax40;
    ecx47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax40) >> 2);
    zf48 = ecx47 == 0;
    do {
        if (!ecx47) 
            break;
        --ecx47;
        *reinterpret_cast<void***>(edi45) = *esi36;
        edi45 = edi45 + 4;
        esi36 = esi36 + 4;
    } while (!zf48);
    ecx47 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(&eax46) & 3);
    zf49 = ecx47 == 0;
    do {
        if (!ecx47) 
            break;
        --ecx47;
        *reinterpret_cast<void***>(edi45) = *esi36;
        ++edi45;
        ++esi36;
    } while (!zf49);
    esi50 = *reinterpret_cast<void***>(edx43 + 32);
    if (!esi50) 
        goto addr_43b09a_17;
    addr_43b0a5_18:
    eax52 = fun_442e73(ecx47, v39, v37, v34, v32, v30, v25, v23, 2, v51);
    edi53 = eax52;
    if (eax52) {
        *reinterpret_cast<void***>(eax52) = reinterpret_cast<void**>(0x300);
        ebx54 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax52 + 2) = esi50;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi50) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi50 == 0))) {
            edx55 = ebp44;
            do {
                *reinterpret_cast<void***>(eax52 + 4) = *reinterpret_cast<void***>(edx55 + 42);
                edx55 = edx55 + 4;
                *reinterpret_cast<unsigned char*>(eax52 + 5) = *reinterpret_cast<unsigned char*>(edx55 + 41);
                eax52 = eax52 + 4;
                ecx47 = *reinterpret_cast<void***>(edx55 + 36);
                *reinterpret_cast<unsigned char*>(eax52 + 3) = 4;
                ++ebx54;
                *reinterpret_cast<void***>(eax52 + 2) = ecx47;
            } while (reinterpret_cast<signed char>(ebx54) < reinterpret_cast<signed char>(esi50));
        }
        eax56 = reinterpret_cast<void**>(CreatePalette(edi53, v39));
        fun_4440d1(ecx47, edi53, eax56, v37, v34, v32, v30, v25, v23, 2, v57, v58, v20, v18, v16, v22, v14, v12, v10, v9, a2);
        if (eax56) {
            eax59 = reinterpret_cast<int32_t>(SelectPalette(v32, eax56, 0, edi53));
            RealizePalette(eax56, eax59, eax56, 0, edi53);
        }
        if (!v30) {
            v30 = *reinterpret_cast<void***>(ebp44 + 4);
        }
        if (!v60) {
            v61 = *reinterpret_cast<void***>(ebp44 + 8);
        }
        StretchDIBits();
        fun_4440d1(v18, v32, v34, v37, v30, v61, v18, v16, v30, v61, reinterpret_cast<unsigned char>(esi50) * 4 + reinterpret_cast<uint32_t>(ebp44 + 40), ebp44, 0, v22, edi53, eax56, v37, v34, v32, v30, v25);
        SelectPalette(v61, v32, 0);
        DeleteObject(v34, v61, v32, 0);
        goto addr_43b1c5_7;
    } else {
        fun_4440d1(ecx47, v39, v37, v34, v32, v30, v25, v23, 2, v62, v63, v20, v18, v16, v22, v14, v12, v10, v9, a2, a3);
        goto v64;
    }
    addr_43b09a_17:
    ecx47 = *reinterpret_cast<void***>(edx43 + 14);
    esi50 = reinterpret_cast<void**>(1 << reinterpret_cast<unsigned char>(ecx47));
    goto addr_43b0a5_18;
}

void** fun_414590(void** ecx) {
    void** edx2;
    void** ebp3;
    void** edi4;
    void** esi5;
    void** edx6;
    void** eax7;
    int1_t zf8;
    int1_t zf9;
    int1_t zf10;
    int1_t zf11;
    void** eax12;
    void** bl13;
    int32_t esi14;
    int32_t ebx15;
    void** ecx16;
    void** eax17;

    edx2 = g481244;
    if (edx2) {
        eax7 = fun_443392(ecx, ebp3, edi4, esi5, edx6, ecx);
    }
    zf8 = g482a84 == 0;
    if (!zf8 && ((zf9 = g482a90 == 0, !zf9) && ((zf10 = reinterpret_cast<int1_t>(g482a7c == 0xffffffff), !zf10) && (zf11 = g482a64 == 0, zf11)))) {
        eax12 = g481610;
        bl13 = g482a7c;
        *reinterpret_cast<void***>(eax12 + 7) = reinterpret_cast<void**>(0);
        esi14 = 0;
        *reinterpret_cast<void***>(eax12 + 6) = bl13;
        do {
            ebx15 = 1;
            ecx16 = reinterpret_cast<void**>(4);
            while (eax17 = g48160c, ebx15 < static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax17 + 12)))) {
                if (*reinterpret_cast<int32_t*>(ecx16 + 0x4813c8)) {
                    fun_4138d0(ecx16);
                }
                ecx16 = ecx16 + 4;
                ++ebx15;
            }
            ++esi14;
            eax7 = fun_43c200(ecx16);
        } while (esi14 < 4);
    }
    return eax7;
}

int32_t CloseHandle = 0x2206bc;

void fun_43cfd0(void** ecx) {
    int32_t eax2;
    void* esp3;
    void* esp4;
    void* v5;
    int32_t v6;
    void* esp7;
    void** edi8;
    int1_t zf9;
    int1_t zf10;
    void** edx11;
    void* esp12;
    void** eax13;
    void* esp14;
    void* esp15;
    void** ebx16;
    void** ebp17;
    void** edx18;
    void** eax19;
    void** edx20;
    void** edx21;
    void* esp22;
    void* v23;
    int32_t eax24;
    void* esp25;
    void* esp26;
    void* v27;
    void** v28;
    int1_t zf29;
    int1_t zf30;
    int1_t zf31;
    int1_t zf32;
    int1_t zf33;
    int1_t zf34;
    int1_t zf35;
    int1_t zf36;
    void* v37;
    int32_t eax38;
    void* v39;
    int32_t v40;
    int1_t zf41;
    int32_t v42;

    eax2 = reinterpret_cast<int32_t>(RegOpenKeyA());
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 56 - 4 - 4 - 4 - 4 + 4);
    if (!eax2) {
        esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4);
        v5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) + 36);
        RegSetValueExA(v6, "timer", 0, 4, v5, 4);
        ecx = reinterpret_cast<void**>("Software\\id\\Doom95\\Session");
        RegCloseKey("Software\\id\\Doom95\\Session", v6, "timer", 0, 4, v5, 4);
        esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4);
    }
    fun_4426c0(ecx);
    fun_41b090();
    fun_41abc0();
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 + 4 - 4 + 4 - 4 + 4);
    edi8 = g60b88c;
    if (edi8) {
        zf9 = g60b110 == 0;
        if (!zf9 || (zf10 = g482a88 == 0, !zf10)) {
        }
        if (0) {
            edx11 = g5f22d0;
            GetClientRect(edx11, esp7);
            ecx = g5f22d0;
            MapWindowPoints();
            esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4);
            ClipCursor();
            SetCursorPos(reinterpret_cast<int32_t>(esp12) + 2, ecx + 2);
            esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 + 4 - 4 - 4 - 4 + 4);
            eax13 = g60b844;
            if (eax13 && eax13 != 0xffffffff) {
                esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4);
                esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4);
                DeviceIoControl(eax13, 1, 1, 1, reinterpret_cast<int32_t>(esp15) + 28, 12, reinterpret_cast<int32_t>(esp14) + 40, 1, reinterpret_cast<int32_t>(esp12) + 2, ecx + 2);
                esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            }
        } else {
            ClipCursor(0);
            esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4);
        }
        g60b890 = 1;
        g477624 = 1;
    }
    ebx16 = g60b844;
    g60b88c = reinterpret_cast<void**>(0);
    if (ebx16 && ebx16 != 0xffffffff) {
        CloseHandle(ebx16);
        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4);
    }
    ebp17 = g60b83c;
    if (ebp17) {
        edx18 = *reinterpret_cast<void***>(ebp17);
        *reinterpret_cast<void***>(edx18 + 16)(ebp17);
        eax19 = g60b83c;
        edx20 = *reinterpret_cast<void***>(eax19);
        *reinterpret_cast<void***>(edx20 + 8)(eax19, ebp17);
        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 - 4 - 4 + 4);
        g60b83c = reinterpret_cast<void**>(0);
    }
    edx21 = g60b874;
    FreeLibrary(edx21);
    fun_441e30(ecx, edx21);
    esp22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 - 4 + 4);
    v23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) + 44);
    eax24 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v23, edx21));
    esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) - 4 - 4 - 4 - 4 + 4);
    if (!eax24) {
        esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4);
        v27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) + 44);
        ecx = v28;
        RegSetValueExA(ecx, "fullscreen", 0, 4, v27, 4, 0x80000001, "Software\\id\\Doom95\\Session", v23, edx21);
        RegCloseKey("Software\\id\\Doom95\\Session", ecx, "fullscreen", 0, 4, v27, 4, 0x80000001, "Software\\id\\Doom95\\Session", v23, edx21);
        esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4);
    }
    zf29 = reinterpret_cast<int1_t>(g4775d0 == 0x140);
    if (!zf29 || (zf30 = reinterpret_cast<int1_t>(g4775d4 == 0xc8), !zf30)) {
        zf31 = reinterpret_cast<int1_t>(g4775d0 == 0x140);
        if (!zf31 || (zf32 = reinterpret_cast<int1_t>(g4775d4 == 0xf0), !zf32)) {
            zf33 = reinterpret_cast<int1_t>(g4775d0 == 0x280);
            if (!zf33 || (zf34 = reinterpret_cast<int1_t>(g4775d4 == 0x190), !zf34)) {
                zf35 = reinterpret_cast<int1_t>(g4775d0 == 0x280);
                if (zf35 && (zf36 = reinterpret_cast<int1_t>(g4775d4 == 0x1e0), zf36)) {
                }
            }
        }
    }
    v37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) + 52);
    eax38 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "Software\\id\\Doom95\\Session", v37, 0x80000001, "Software\\id\\Doom95\\Session", v23, edx21));
    if (!eax38) {
        v39 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 - 4 - 4 - 4 + 4 - 4 + 52);
        RegSetValueExA(v40, "screenrez", 0, 4, v39, 4, 0x80000001, "Software\\id\\Doom95\\Session", v37, 0x80000001, "Software\\id\\Doom95\\Session", v23, edx21);
        RegCloseKey(0x80000001, v40, "screenrez", 0, 4, v39, 4, 0x80000001, "Software\\id\\Doom95\\Session", v37, 0x80000001, "Software\\id\\Doom95\\Session", v23, edx21);
    }
    zf41 = g618320 == 0;
    if (!zf41) {
        fun_442650(ecx, 0x80000001, "Software\\id\\Doom95\\Session", v37, 0x80000001, "Software\\id\\Doom95\\Session", v23, edx21);
    }
    goto v42;
}

