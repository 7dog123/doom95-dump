void fun_438e40(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** edx7;
    void** edx8;
    void** edx9;

    fun_437c30(ecx, edx7);
    fun_4317d0(ecx);
    edx8 = g60b264;
    if (edx8) {
        edx9 = *reinterpret_cast<void***>(edx8);
        *reinterpret_cast<void***>(edx9 + 8)(edx8);
    }
    return;
}

struct s789 {
    int32_t f0;
    int32_t f4;
};

struct s790 {
    int32_t f0;
    int32_t f4;
};

struct s791 {
    int32_t f0;
    int32_t f4;
};

struct s792 {
    int32_t f0;
    int32_t f4;
};

struct s793 {
    int32_t f0;
    int32_t f4;
};

struct s794 {
    int32_t f0;
    int32_t f4;
};

void fun_411cc0(uint32_t a1, uint32_t a2, uint32_t a3, int32_t a4) {
    void** edx5;
    struct s789* edi6;
    struct s790* eax7;
    struct s791* edi8;
    struct s792* esi9;
    struct s793* edi10;
    struct s794* esi11;

    edx5 = g481274;
    edi6 = reinterpret_cast<struct s789*>((reinterpret_cast<unsigned char>(edx5) << 4) + 0x480e20);
    g481274 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx5 + 1) & 63);
    edi6->f0 = eax7->f0;
    edi8 = reinterpret_cast<struct s791*>(&edi6->f4);
    esi9 = reinterpret_cast<struct s792*>(&eax7->f4);
    edi8->f0 = esi9->f0;
    edi10 = reinterpret_cast<struct s793*>(&edi8->f4);
    esi11 = reinterpret_cast<struct s794*>(&esi9->f4);
    edi10->f0 = esi11->f0;
    edi10->f4 = esi11->f4;
    return;
}

int32_t RegCreateKeyA = 0x2207fa;

struct s795 {
    signed char[4605916] pad4605916;
    int32_t f4647dc;
    void** f4647e0;
    signed char[3] pad4605924;
    int32_t f4647e4;
    int32_t f4647e8;
};

void fun_41d6d0(void** ecx) {
    int32_t v2;
    int32_t esi3;
    void* esp4;
    void** ecx5;
    void* esp6;
    void* esp7;
    void* esp8;
    void* v9;
    void* v10;
    int32_t eax11;
    int32_t edx12;
    void** edx13;
    void** esi14;
    struct s795* ebx15;
    void** edi16;
    uint32_t ecx17;
    int32_t v18;
    void** v19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    int32_t v23;
    int32_t v24;
    int32_t v25;

    v2 = esi3;
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x40c);
    ecx5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp4) + 0x204);
    fun_443f01(ecx5, reinterpret_cast<int32_t>(esp4) + 0x104);
    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 + 4 + 4);
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4);
    wsprintfA(reinterpret_cast<int32_t>(esp7) + 8, "SOFTWARE\\ID\\Doom95\\Config\\%s", reinterpret_cast<int32_t>(esp6) + 0x204);
    esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 12);
    v9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) + 0x404);
    v10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 + 4);
    eax11 = reinterpret_cast<int32_t>(RegCreateKeyA(0x80000001, v10, v9));
    if (eax11) {
        GetLastError(0x80000001, v10, v9);
        goto edx12;
    } else {
        edx13 = g4835e0;
        esi14 = reinterpret_cast<void**>(0);
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx13) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx13 == 0))) {
            ebx15 = reinterpret_cast<struct s795*>(0);
            do {
                if (ebx15->f4647e8) {
                    ecx5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(",ME") + reinterpret_cast<int32_t>(ebx15) + 16);
                    ebx15->f4647e0 = ecx5;
                }
                if (ebx15->f4647e4 <= 0xffff0001 || ebx15->f4647e4 >= 0xffff) {
                    edi16 = *reinterpret_cast<void***>(ebx15->f4647e0);
                    ecx17 = reinterpret_cast<unsigned char>(ecx5) - reinterpret_cast<unsigned char>(ecx5) - 1;
                    do {
                        if (!ecx17) 
                            break;
                        --ecx17;
                        ++edi16;
                        ++esi14;
                    } while (*reinterpret_cast<void***>(edi16));
                    v18 = reinterpret_cast<int32_t>(~ecx17) - 1;
                    v19 = *reinterpret_cast<void***>(ebx15->f4647e0);
                    v20 = 1;
                    v21 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx15) + reinterpret_cast<int32_t>(",ME"));
                    v22 = v23;
                } else {
                    v18 = 4;
                    v19 = ebx15->f4647e0;
                    v20 = 4;
                    v21 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx15) + reinterpret_cast<int32_t>(",ME"));
                    v22 = v24;
                }
                RegSetValueExA(v22, v21, 0, v20, v19, v18, 0x80000001, v10, v9);
                ecx5 = g4835e0;
                ++esi14;
                ebx15 = reinterpret_cast<struct s795*>(reinterpret_cast<int32_t>(ebx15) + 20);
            } while (reinterpret_cast<signed char>(esi14) < reinterpret_cast<signed char>(ecx5));
        }
        RegCloseKey(v25, 0x80000001, v10, v9);
        goto v2;
    }
}

int32_t fun_44405c();

void fun_444085();

uint32_t fun_444089(void** ecx, void* a2) {
    int32_t eax3;
    uint32_t eax4;

    eax4 = fun_446618(fun_44405c, fun_44405c, fun_444085, eax3);
    return eax4;
}

void fun_448293(void** ecx) {
    void** eax2;
    void** ecx3;
    void** ebx4;

    eax2 = g477a68;
    while (eax2) {
        ecx3 = *reinterpret_cast<void***>(eax2) - 44;
        ebx4 = *reinterpret_cast<void***>(eax2 + 8);
        if (ecx3 == *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2 + 36))) {
            fun_4482fa(ecx3);
        }
        eax2 = ebx4;
    }
    return;
}

int32_t GetLastError = 0x220f9e;

void fun_449d54() {
    goto GetLastError;
}

struct s796 {
    signed char[84] pad84;
    int32_t* f54;
};

struct s797 {
    signed char[84] pad84;
    int32_t f54;
};

void fun_447d8a() {
    struct s796* eax1;
    struct s797* eax2;

    eax1 = reinterpret_cast<struct s796*>(image_base_());
    g0 = *eax1->f54;
    eax2 = reinterpret_cast<struct s797*>(image_base_());
    eax2->f54 = 0;
    return;
}

struct s798 {
    signed char f0;
    unsigned char f1;
    int32_t f2;
};

void fun_448223() {
    int32_t edx1;
    unsigned char dl2;
    unsigned char al3;
    struct s798* esi4;
    struct s798* ebx5;
    unsigned char al6;
    int32_t eax7;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1) = dl2;
    *reinterpret_cast<unsigned char*>(&edx1) = al3;
    while (1) {
        esi4 = reinterpret_cast<struct s798*>(0x477e7a);
        ebx5 = reinterpret_cast<struct s798*>(0x477e8c);
        al6 = *reinterpret_cast<unsigned char*>(&edx1);
        while (reinterpret_cast<uint32_t>(esi4) < 0x477e8c) {
            if (esi4->f0 != 2 && al6 <= esi4->f1) {
                ebx5 = esi4;
                al6 = esi4->f1;
            }
            ++esi4;
        }
        if (ebx5 == 0x477e8c) 
            break;
        if (al6 <= *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&edx1) + 1) && (eax7 = ebx5->f2, !!eax7)) {
            eax7();
            edx1 = edx1;
        }
        ebx5->f0 = 2;
    }
    return;
}

void* fun_4458af(void** ecx) {
    void** eax2;
    void** edx3;
    int32_t eax4;
    void** edx5;
    void** ebx6;
    int32_t eax7;

    eax2 = g61835c;
    edx3 = *reinterpret_cast<void***>(eax2 + eax4 * 4);
    image_base_(edx5, ecx, ebx6, __return_address());
    eax7 = fun_449d9c(edx3, 0, 0, 1, edx5, ecx, ebx6, __return_address());
    if (eax7 == -1) {
        fun_4457b6(ecx, edx3, 0, 0, 1, edx5, ecx, ebx6, __return_address());
    }
    image_base_();
    goto 1;
}

void** fun_445963(void** ecx) {
    void* esp2;
    int1_t zf3;
    int32_t eax4;
    void** ecx5;
    void** eax6;
    int32_t eax7;
    void** ecx8;
    int32_t eax9;
    void** edx10;
    void** ebx11;
    void** v12;
    void** esi13;

    image_base_();
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 + 4);
    zf3 = g477af8 == 0;
    if (zf3 || (eax4 = reinterpret_cast<int32_t>(g477ad0()), esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4), eax4 == 0)) {
        ecx5 = g61835c;
        eax6 = *reinterpret_cast<void***>(ecx5 + eax7 * 4);
        ecx8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp2) - 4 + 4);
        eax9 = fun_449da2();
        if (eax9) {
            image_base_();
        } else {
            image_base_();
            fun_4457b6(ecx8, eax6, edx10, ebx11, ecx8, 0, v12, esi13, ecx);
        }
    } else {
        g477af8();
    }
    goto __return_address();
}

void** fun_4433cb(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** ebx10;
    void** eax11;

    eax11 = fun_443451(ecx, ebx10, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    fun_445246(ecx);
    return eax11;
}

int32_t fun_449d4e();

int32_t fun_445b44(signed char* ecx) {
    int32_t eax2;

    eax2 = fun_449d4e();
    return eax2;
}

void fun_445ebe() {
    int32_t eax1;
    int32_t eax2;
    int32_t* edx3;
    int32_t* ebx4;
    int32_t* edx5;
    int32_t* edx6;
    int32_t* ebx7;

    if (eax1 != 2) {
        if (eax2 != 1) {
            *edx3 = 0x80000000;
            *ebx4 = 1;
            return;
        } else {
            *edx5 = 0x40000000;
        }
    } else {
        *edx6 = 0xc0000000;
    }
    *ebx7 = 0x80;
    return;
}

void fun_445eea() {
    int32_t eax1;
    int32_t eax2;
    int32_t* edx3;
    int32_t eax4;
    int32_t eax5;
    int32_t* edx6;
    int32_t* edx7;
    int32_t* edx8;

    if (!eax1 || eax2 == 64) {
        *edx3 = 3;
        return;
    } else {
        if (eax4 != 32) {
            if (eax5 != 48) {
                *edx6 = 0;
                return;
            } else {
                *edx7 = 2;
                return;
            }
        } else {
            *edx8 = 1;
            return;
        }
    }
}

void fun_445faf() {
    void** edx1;
    unsigned char dh2;
    void*** eax3;
    int32_t eax4;

    *reinterpret_cast<unsigned char*>(&edx1 + 1) = reinterpret_cast<unsigned char>(dh2 | 64);
    eax3 = image_base_;
    *reinterpret_cast<void***>((eax4 << 2) + reinterpret_cast<int32_t>(eax3)) = edx1;
    return;
}

int32_t ReadFile = 0x22107a;

int32_t fun_449da2() {
    goto ReadFile;
}

int32_t GetFileType = 0x220f90;

int32_t fun_449d90(void** a1) {
    goto GetFileType;
}

int32_t GetFileSize = 0x220f74;

int32_t fun_449d8a() {
    goto GetFileSize;
}

int32_t GetFileTime = 0x220f82;

int32_t fun_449d84() {
    goto GetFileTime;
}

int32_t FileTimeToLocalFileTime = 0x220eac;

void fun_449d36() {
    goto FileTimeToLocalFileTime;
}

int32_t FileTimeToDosDateTime = 0x220e94;

void fun_449d30(void* a1, int32_t a2) {
    goto FileTimeToDosDateTime;
}

void** fun_446111(int32_t ecx) {
    int1_t zf2;
    void** eax3;
    void** edx4;
    void** ecx5;
    signed char* esi6;
    int32_t eax7;
    int32_t edx8;
    signed char* eax9;
    int32_t v10;

    zf2 = g477be4 == 0;
    if (zf2) {
        eax3 = edx4;
    } else {
        ecx5 = reinterpret_cast<void**>(0);
        esi6 = reinterpret_cast<signed char*>(eax7 + edx8);
        while ((eax9 = fun_44862b(ecx5), !!v10) && reinterpret_cast<uint32_t>(eax9) <= reinterpret_cast<uint32_t>(esi6)) {
            ++ecx5;
        }
        eax3 = ecx5;
    }
    return eax3;
}

struct s799 {
    signed char f0;
    signed char f1;
};

struct s799* fun_4463fd(void** ecx);

void** fun_4463de(void** ecx, void* a2, void** a3) {
    void** eax4;
    void* esi5;

    fun_44614f(eax4, esi5, ecx, __return_address(), a2, a3);
    fun_4463fd(eax4);
    return eax4;
}

struct s800 {
    signed char* f0;
    uint32_t f4;
    signed char[4] pad12;
    unsigned char fc;
};

uint32_t fun_4459cb(void** ecx) {
    struct s800* eax2;
    uint32_t ebx3;
    uint32_t ebx4;
    uint32_t eax5;
    void** esi6;
    void** edx7;
    void** ebx8;
    uint32_t esi9;
    uint32_t eax10;

    image_base_();
    if (eax2->fc & 1) {
        ebx3 = eax2->f4 - 1;
        eax2->f4 = ebx3;
        if (reinterpret_cast<int32_t>(ebx3) >= reinterpret_cast<int32_t>(0)) {
            *reinterpret_cast<signed char*>(&ebx3) = *eax2->f0;
            ebx4 = ebx3 & 0xff;
            eax2->f0 = eax2->f0 + 1;
        } else {
            eax5 = fun_445a69(ecx);
            ebx4 = eax5;
        }
    } else {
        fun_44515b(esi6, edx7, ecx, ebx8, __return_address());
        eax2->fc = reinterpret_cast<unsigned char>(eax2->fc | 32);
        ebx4 = 0xffffffff;
    }
    if (!(eax2->fc & 64)) {
        if (ebx4 == 13) {
            esi9 = eax2->f4 - 1;
            eax2->f4 = esi9;
            if (reinterpret_cast<int32_t>(esi9) >= reinterpret_cast<int32_t>(0)) {
                *reinterpret_cast<signed char*>(&ebx4) = *eax2->f0;
                ebx4 = ebx4 & 0xff;
                eax2->f0 = eax2->f0 + 1;
            } else {
                eax10 = fun_445a69(ecx);
                ebx4 = eax10;
            }
        }
        if (ebx4 == 26) {
            ebx4 = 0xffffffff;
            eax2->fc = reinterpret_cast<unsigned char>(eax2->fc | 16);
        }
    }
    image_base_();
    return ebx4;
}

uint32_t fun_44723a() {
    int32_t eax1;
    int32_t eax2;

    eax1 = *reinterpret_cast<int32_t*>(eax2 - 4);
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1) & 0xfe);
    return eax1 - 4;
}

void** fun_447243(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    void*** ecx9;
    void** v10;
    void** esi11;
    void** ebx12;
    int32_t eax13;
    void** eax14;
    void** eax15;

    image_base_();
    ecx9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 + 4);
    eax13 = fun_44727d(ecx9, v10, esi11, ecx, ebx12, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    if (eax13) {
        image_base_(ecx9);
        eax14 = reinterpret_cast<void**>(0);
    } else {
        image_base_(ecx9);
        eax14 = eax15;
    }
    return eax14;
}

signed char g477d84 = 0;

int32_t fun_448842() {
    int1_t zf1;

    zf1 = g477d84 == 0;
    if (zf1) {
        return 0;
    } else {
        return 1;
    }
}

struct s801 {
    signed char[23] pad23;
    signed char f17;
};

struct s802 {
    signed char[22] pad22;
    signed char f16;
};

struct s624* fun_4449b3(void** ecx);

struct s803 {
    signed char[4] pad4;
    int32_t f4;
};

struct s804 {
    signed char[4] pad4;
    int32_t f4;
};

struct s805 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s806 {
    signed char[4] pad4;
    int32_t f4;
};

struct s807 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s808 {
    signed char[4] pad4;
    int32_t f4;
};

struct s809 {
    signed char[4] pad4;
    int32_t f4;
};

struct s810 {
    signed char[8] pad8;
    int32_t f8;
};

struct s811 {
    signed char[8] pad8;
    int32_t f8;
};

struct s812 {
    signed char[8] pad8;
    int32_t f8;
};

struct s813 {
    signed char[8] pad8;
    int32_t f8;
};

struct s814 {
    signed char[8] pad8;
    int32_t f8;
};

struct s815 {
    signed char[8] pad8;
    int32_t f8;
};

struct s816 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s817 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s818 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s819 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s820 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s821 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s822 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s823 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s824 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s624* fun_444875(void** ecx) {
    int32_t* esi2;
    int32_t* edx3;
    struct s801* ebx4;
    uint32_t edx5;
    uint32_t ebx6;
    struct s802* ebx7;
    struct s624* eax8;
    struct s803* ebx9;
    uint32_t edx10;
    int32_t edx11;
    int32_t edx12;
    int32_t edx13;
    struct s804* ebx14;
    unsigned char dl15;
    struct s805* ebx16;
    struct s806* ebx17;
    struct s807* ebx18;
    int32_t edx19;
    int32_t edx20;
    struct s808* ebx21;
    struct s809* ebx22;
    struct s810* ebx23;
    int32_t edx24;
    struct s811* ebx25;
    int32_t edx26;
    int32_t edx27;
    struct s812* ebx28;
    struct s813* ebx29;
    int32_t edx30;
    int32_t edx31;
    struct s814* ebx32;
    struct s815* ebx33;
    struct s624* ecx34;
    unsigned char dh35;
    struct s816* ebx36;
    struct s624* eax37;
    struct s817* ebx38;
    struct s818* ebx39;
    struct s819* ebx40;
    struct s820* ebx41;
    struct s821* ebx42;
    struct s822* ebx43;
    struct s823* ebx44;
    struct s824* ebx45;

    esi2 = edx3;
    ebx4->f17 = 0;
    edx5 = ebx6;
    ebx7->f16 = 32;
    eax8 = fun_4449b3(ecx);
    ebx9->f4 = 0;
    *reinterpret_cast<unsigned char*>(&edx5) = eax8->f0;
    edx10 = edx5 & 0xff;
    if (reinterpret_cast<int32_t>(edx10) < reinterpret_cast<int32_t>(48) || reinterpret_cast<int32_t>(edx10) > reinterpret_cast<int32_t>(57)) {
        edx11 = 0;
        *reinterpret_cast<unsigned char*>(&edx11) = eax8->f0;
        if (edx11 == 42) {
            edx12 = *esi2 + 4;
            *esi2 = edx12;
            edx13 = *reinterpret_cast<int32_t*>(edx12 - 4);
            ebx14->f4 = edx13;
            if (edx13 < 0) {
                dl15 = reinterpret_cast<unsigned char>(ebx16->f14 | 8);
                ebx17->f4 = -edx13;
                ebx18->f14 = dl15;
            }
            eax8 = reinterpret_cast<struct s624*>(&eax8->f1);
        }
    } else {
        do {
            edx19 = 0;
            *reinterpret_cast<unsigned char*>(&edx19) = eax8->f0;
            eax8 = reinterpret_cast<struct s624*>(&eax8->f1);
            edx20 = 0;
            ebx21->f4 = ebx22->f4 * 10 + (edx19 - 48);
            *reinterpret_cast<unsigned char*>(&edx20) = eax8->f0;
            if (edx20 < 48) 
                break;
        } while (edx20 <= 57);
        goto addr_4448c1_8;
    }
    addr_4448ee_9:
    ebx23->f8 = -1;
    edx24 = 0;
    *reinterpret_cast<unsigned char*>(&edx24) = eax8->f0;
    if (edx24 == 46) {
        eax8 = reinterpret_cast<struct s624*>(&eax8->f1);
        ebx25->f8 = 0;
        edx26 = 0;
        *reinterpret_cast<unsigned char*>(&edx26) = eax8->f0;
        if (edx26 != 42) {
            while ((edx27 = 0, *reinterpret_cast<unsigned char*>(&edx27) = eax8->f0, edx27 >= 48) && edx27 <= 57) {
                eax8 = reinterpret_cast<struct s624*>(&eax8->f1);
                ebx28->f8 = ebx29->f8 * 10 + (edx27 - 48);
            }
        } else {
            edx30 = *esi2 + 4;
            *esi2 = edx30;
            edx31 = *reinterpret_cast<int32_t*>(edx30 - 4);
            ebx32->f8 = edx31;
            if (edx31 < 0) {
                ebx33->f8 = -1;
            }
            eax8 = reinterpret_cast<struct s624*>(&eax8->f1);
        }
    }
    ecx34 = reinterpret_cast<struct s624*>(&eax8->f1);
    if (eax8->f0 < 78) {
        if (eax8->f0 < 70) {
            addr_4449af_18:
            return eax8;
        } else {
            if (eax8->f0 <= 70) {
                dh35 = reinterpret_cast<unsigned char>(ebx36->f14 | 0x80);
                eax37 = ecx34;
            } else {
                if (eax8->f0 == 76) {
                    ebx38->f14 = reinterpret_cast<unsigned char>(ebx39->f14 | 64);
                    return ecx34;
                } else {
                    return eax8;
                }
            }
        }
    } else {
        if (eax8->f0 <= 78) {
            ebx40->f14 = reinterpret_cast<unsigned char>(ebx41->f14 | 64);
            goto addr_4449ad_26;
        } else {
            if (eax8->f0 < 0x6c) {
                if (eax8->f0 == 0x68) {
                    ebx42->f14 = reinterpret_cast<unsigned char>(ebx43->f14 | 16);
                    goto addr_4449ad_26;
                } else {
                    return eax8;
                }
            } else {
                if (eax8->f0 <= 0x6c || eax8->f0 == 0x77) {
                    dh35 = reinterpret_cast<unsigned char>(ebx44->f14 | 32);
                    eax37 = reinterpret_cast<struct s624*>(&eax8->f1);
                } else {
                    return eax8;
                }
            }
        }
    }
    ebx45->f14 = dh35;
    return eax37;
    addr_4449ad_26:
    eax8 = ecx34;
    goto addr_4449af_18;
    addr_4448c1_8:
    goto addr_4448ee_9;
}

struct s825 {
    signed char[21] pad21;
    unsigned char f15;
};

struct s826 {
    signed char[12] pad12;
    int32_t fc;
};

struct s827 {
    signed char[4] pad4;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    signed char[4] pad20;
    unsigned char f14;
    void** f15;
    signed char f16;
    signed char f17;
    void** f18;
    signed char f19;
};

void** fun_444bac();

uint32_t fun_444a12(void** ecx);

void** fun_444bb3(void** ecx) {
    void** edi2;
    void** eax3;
    uint32_t* eax4;
    uint32_t* edx5;
    void** v6;
    uint32_t edx7;
    uint16_t ds8;
    void** ecx9;
    unsigned char dl10;
    struct s825* ebx11;
    struct s826* ebx12;
    struct s827* ebx13;
    int1_t zf14;
    uint32_t edx15;
    uint32_t ebx16;
    uint32_t ecx17;
    uint32_t edi18;
    void** ebp19;
    void** al20;
    void** al21;
    unsigned char al22;
    uint32_t eax23;
    uint32_t ebp24;
    void** al25;
    unsigned char dh26;
    uint32_t edx27;
    uint32_t ebx28;
    uint32_t ebp29;
    void** eax30;
    int32_t edx31;
    unsigned char dl32;
    uint32_t edx33;
    uint32_t edx34;
    int32_t edx35;
    uint32_t eax36;
    uint32_t ebx37;
    unsigned char v38;
    int32_t edx39;
    int32_t eax40;
    uint32_t eax41;
    unsigned char bl42;
    int32_t eax43;
    int32_t eax44;
    uint32_t edx45;
    int1_t zf46;

    edi2 = eax3;
    eax4 = edx5;
    v6 = reinterpret_cast<void**>(1);
    edx7 = ds8;
    ecx9 = edi2;
    dl10 = ebx11->f15;
    ebx12->fc = 0;
    if (dl10 < 0x69) {
        if (dl10 < 88) {
            addr_444c57_3:
            if (reinterpret_cast<unsigned char>(ebx13->f15) < 0x65) {
                if (reinterpret_cast<unsigned char>(ebx13->f15) < 80) {
                    if (reinterpret_cast<unsigned char>(ebx13->f15) < 70) {
                        zf14 = reinterpret_cast<int1_t>(ebx13->f15 == 69);
                    } else {
                        if (reinterpret_cast<unsigned char>(ebx13->f15) <= 70) {
                            addr_444d12_8:
                            *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(ebx13->f14 & 16);
                            if (!(edx7 & 0xff)) 
                                goto addr_444d44_9; else 
                                goto addr_444d20_10;
                        } else {
                            zf14 = reinterpret_cast<int1_t>(ebx13->f15 == 71);
                        }
                    }
                } else {
                    if (reinterpret_cast<unsigned char>(ebx13->f15) <= 80) {
                        if (!ebx13->f4) {
                            *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(ebx13->f14 & 0x80);
                            if (!(edx7 & 0xff)) {
                                ebx13->f4 = 8;
                                goto addr_444f22_16;
                            } else {
                                ebx13->f4 = 13;
                                goto addr_444f22_16;
                            }
                        }
                    } else {
                        if (reinterpret_cast<unsigned char>(ebx13->f15) < 88) {
                            if (ebx13->f15 == 83) {
                                addr_444def_20:
                                *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(ebx13->f14 & 0x80);
                                edx15 = edx7 & 0xff;
                                if (!edx15) {
                                    *reinterpret_cast<unsigned char*>(&edx15) = reinterpret_cast<unsigned char>(ebx13->f14 & 64);
                                    if (!(edx15 & 0xff)) {
                                        ebx16 = *eax4 + 4;
                                        *eax4 = ebx16;
                                        ecx9 = *reinterpret_cast<void***>(ebx16 - 4);
                                        if (ecx9) {
                                            addr_444e3c_23:
                                            goto addr_444e54_24;
                                        } else {
                                            ecx9 = ecx;
                                            goto addr_444e54_24;
                                        }
                                    } else {
                                        ecx17 = *eax4 + 4;
                                        *eax4 = ecx17;
                                        ecx9 = *reinterpret_cast<void***>(ecx17 - 4);
                                        if (!ecx9) 
                                            goto addr_444e18_27; else 
                                            goto addr_444e3c_23;
                                    }
                                } else {
                                    edi18 = *eax4 + 8;
                                    *eax4 = edi18;
                                    ecx9 = *reinterpret_cast<void***>(edi18 - 8);
                                    if (ecx9 || *reinterpret_cast<void***>(edi18 - 4)) {
                                        goto addr_444e56_30;
                                    } else {
                                        addr_444e18_27:
                                        ecx9 = ecx;
                                        goto addr_444e54_24;
                                    }
                                }
                            } else {
                                goto addr_444fc1_32;
                            }
                        } else {
                            if (reinterpret_cast<unsigned char>(ebx13->f15) <= 88) {
                                *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<unsigned char>(ebx13->f14 & 1);
                                if (reinterpret_cast<uint32_t>(eax4) & 0xff && ebp19) {
                                    ebx13->f17 = 48;
                                    al20 = ebx13->f15;
                                    ebx13->f19 = 0;
                                    ebx13->f18 = al20;
                                    goto addr_444ed6_36;
                                }
                            } else {
                                if (reinterpret_cast<unsigned char>(ebx13->f15) < 99) {
                                    addr_444fc1_32:
                                    ebx13->f4 = 0;
                                    al21 = ebx13->f15;
                                    *reinterpret_cast<void***>(edi2 + 1) = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<void***>(edi2) = al21;
                                    ebx13->f8 = 1;
                                    al22 = reinterpret_cast<unsigned char>(ebx13->f14 & 0xf9);
                                    v6 = reinterpret_cast<void**>(0);
                                    ebx13->f14 = al22;
                                    eax23 = 1;
                                    goto addr_444fea_38;
                                } else {
                                    if (reinterpret_cast<unsigned char>(ebx13->f15) <= 99) {
                                        ebp24 = *eax4 + 4;
                                        *eax4 = ebp24;
                                        al25 = *reinterpret_cast<void***>(ebp24 - 4);
                                        *reinterpret_cast<void***>(edi2 + 1) = reinterpret_cast<void**>(0);
                                        *reinterpret_cast<void***>(edi2) = al25;
                                        ebx13->f8 = 1;
                                        dh26 = reinterpret_cast<unsigned char>(ebx13->f14 & 0xf9);
                                        v6 = reinterpret_cast<void**>(0);
                                        eax23 = 1;
                                        ebx13->f14 = dh26;
                                        goto addr_444fea_38;
                                    } else {
                                        goto addr_444d9e_42;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (reinterpret_cast<unsigned char>(ebx13->f15) <= 0x65) 
                    goto addr_444d44_9;
                if (reinterpret_cast<unsigned char>(ebx13->f15) < 0x6f) 
                    goto addr_444cab_45; else 
                    goto addr_444c6f_46;
            }
        } else {
            if (dl10 <= 88) {
                addr_444c0a_48:
                *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(ebx13->f14 & 32);
                edx27 = edx7 & 0xff;
                if (!edx27) {
                    *reinterpret_cast<unsigned char*>(&edx27) = reinterpret_cast<unsigned char>(ebx13->f14 & 16);
                    edx7 = edx27 & 0xff;
                    if (!edx7) {
                        ebx28 = *eax4 + 4;
                        *eax4 = ebx28;
                        ebp19 = *reinterpret_cast<void***>(ebx28 - 4);
                        goto addr_444c49_51;
                    } else {
                        ebp29 = *eax4 + 4;
                        *eax4 = ebp29;
                        ebp19 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(ebp29 - 4))));
                        goto addr_444c49_51;
                    }
                } else {
                    edx7 = *eax4 + 4;
                    *eax4 = edx7;
                    ebp19 = *reinterpret_cast<void***>(edx7 - 4);
                    goto addr_444c49_51;
                }
            } else {
                if (dl10 == 100) {
                    addr_444c4d_55:
                    if (ebx13->f8 != 0xffffffff) {
                        ebx13->f16 = 32;
                        goto addr_444c57_3;
                    }
                } else {
                    goto addr_444c57_3;
                }
            }
        }
    } else {
        if (dl10 <= 0x69) 
            goto addr_444c4d_55;
        if (dl10 < 0x75) 
            goto addr_444bf7_60; else 
            goto addr_444beb_61;
    }
    if (zf14) {
        addr_444d44_9:
        eax30 = fun_444bac();
        ecx9 = eax30;
    } else {
        goto addr_444fc1_32;
    }
    addr_444d94_64:
    eax23 = fun_444a12(ecx9);
    addr_444fea_38:
    if (!v6) {
        addr_44503f_65:
        edx31 = 0;
        *reinterpret_cast<signed char*>(&edx31) = ebx13->f16;
        if (edx31 == 42) {
            dl32 = ebx13->f14;
            ebx13->f17 = 0;
            ebx13->f14 = reinterpret_cast<unsigned char>(dl32 & 0xf9);
        }
    } else {
        edx33 = 0;
        *reinterpret_cast<void***>(&edx33) = *reinterpret_cast<void***>(ecx9);
        if (edx33 != 45) {
            *reinterpret_cast<void***>(&edx33) = reinterpret_cast<void**>(ebx13->f14 & 2);
            edx34 = edx33 & 0xff;
            if (!edx34) {
                *reinterpret_cast<unsigned char*>(&edx34) = reinterpret_cast<unsigned char>(ebx13->f14 & 4);
                if (!(edx34 & 0xff)) {
                    addr_44502c_70:
                    if (reinterpret_cast<int32_t>(eax23) <= reinterpret_cast<int32_t>(ebx13->f8)) {
                        ebx13->fc = ebx13->f8 - eax23;
                        goto addr_44503f_65;
                    } else {
                        ebx13->f8 = eax23;
                        goto addr_44503f_65;
                    }
                } else {
                    ebx13->f17 = 43;
                    goto addr_445028_74;
                }
            } else {
                ebx13->f17 = 32;
                goto addr_445028_74;
            }
        } else {
            ++ecx9;
            ebx13->f17 = 45;
            --eax23;
            goto addr_445028_74;
        }
    }
    if ((ebx13->f8 == 0xffffffff || reinterpret_cast<int32_t>(eax23) < reinterpret_cast<int32_t>(ebx13->f8)) && (edx35 = 0, *reinterpret_cast<void***>(&edx35) = ebx13->f15, edx35 != 99)) {
        ebx13->f8 = eax23;
    }
    eax36 = fun_444a12(ecx9);
    ebx13->f4 = ebx13->f4 - (eax36 + ebx13->f8 + ebx13->fc);
    return ecx9;
    addr_445028_74:
    ebx13->f18 = reinterpret_cast<void**>(0);
    goto addr_44502c_70;
    addr_444d20_10:
    *eax4 = *eax4 + 4;
    fun_444ab7(ecx9);
    ecx9 = edi2;
    goto addr_444d94_64;
    addr_444f22_16:
    ebx13->f14 = reinterpret_cast<unsigned char>(ebx13->f14 & 0xf9);
    ebx37 = *eax4 + 4;
    *eax4 = ebx37;
    v38 = reinterpret_cast<unsigned char>(ebx13->f14 & 0x80);
    edx39 = 0;
    *reinterpret_cast<unsigned char*>(&edx39) = v38;
    if (edx39) {
        *eax4 = ebx37 + 4;
        fun_444a59(ecx9);
        *reinterpret_cast<void***>(edi2 + 4) = reinterpret_cast<void**>(58);
    }
    fun_444a59(ecx9);
    eax40 = 0;
    *reinterpret_cast<void***>(&eax40) = ebx13->f15;
    if (eax40 == 80) {
        fun_44509c(ecx9, 1);
    }
    addr_444d8b_84:
    goto addr_444d94_64;
    addr_444e54_24:
    addr_444e56_30:
    eax41 = 0;
    bl42 = reinterpret_cast<unsigned char>(ebx13->f14 & 0xf9);
    v6 = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(&eax41) = ebx13->f15;
    ebx13->f14 = bl42;
    if (eax41 != 83) {
        *reinterpret_cast<void***>(&eax41) = reinterpret_cast<void**>(bl42 & 32);
        if (!(eax41 & 0xff)) {
            goto addr_444d94_64;
        } else {
            eax23 = fun_444a36(ecx9);
            goto addr_444fea_38;
        }
    } else {
        *reinterpret_cast<void***>(&eax41) = reinterpret_cast<void**>(bl42 & 32);
        eax23 = eax41 & 0xff;
        if (!eax23) {
            *reinterpret_cast<void***>(&eax23) = *reinterpret_cast<void***>(ecx9);
            ++ecx9;
            goto addr_444fea_38;
        } else {
            eax23 = 0;
            *reinterpret_cast<void***>(&eax23) = *reinterpret_cast<void***>(ecx9);
            ecx9 = ecx9 + 2;
            goto addr_444fea_38;
        }
    }
    addr_444ed6_36:
    addr_444edb_91:
    fun_44760b(ecx9);
    eax43 = 0;
    *reinterpret_cast<void***>(&eax43) = ebx13->f15;
    if (eax43 == 88) {
        fun_44509c(ecx9, 1);
    }
    addr_444d78_93:
    if (!ebx13->f8 && (eax44 = 0, *reinterpret_cast<void***>(&eax44) = *reinterpret_cast<void***>(edi2), eax44 == 48)) {
        *reinterpret_cast<void***>(ecx9) = reinterpret_cast<void**>(0);
        goto addr_444d8b_84;
    }
    addr_444d9e_42:
    *reinterpret_cast<unsigned char*>(&edx7) = reinterpret_cast<unsigned char>(ebx13->f14 & 32);
    edx45 = edx7 & 0xff;
    if (!edx45) {
        *reinterpret_cast<unsigned char*>(&edx45) = reinterpret_cast<unsigned char>(ebx13->f14 & 16);
        if (!(edx45 & 0xff)) {
            *eax4 = *eax4 + 4;
            fun_4475b9(ecx9, 1, ecx);
            goto addr_444d78_93;
        } else {
            *eax4 = *eax4 + 4;
        }
    } else {
        *eax4 = *eax4 + 4;
    }
    fun_447655(ecx9);
    goto addr_444d78_93;
    addr_444cab_45:
    if (reinterpret_cast<unsigned char>(ebx13->f15) < 0x67) 
        goto addr_444d12_8;
    if (reinterpret_cast<unsigned char>(ebx13->f15) <= 0x67) 
        goto addr_444d44_9;
    if (ebx13->f15 == 0x69) 
        goto addr_444d9e_42;
    goto addr_444fc1_32;
    addr_444c6f_46:
    if (reinterpret_cast<unsigned char>(ebx13->f15) <= 0x6f) {
        *reinterpret_cast<unsigned char*>(&eax4) = reinterpret_cast<unsigned char>(ebx13->f14 & 1);
        if (reinterpret_cast<uint32_t>(eax4) & 0xff) {
            *reinterpret_cast<void***>(edi2) = reinterpret_cast<void**>(48);
            ++edi2;
        }
        fun_447655(ecx9);
        goto addr_444d78_93;
    } else {
        if (reinterpret_cast<unsigned char>(ebx13->f15) < 0x73) {
            if (ebx13->f15 != 0x70) {
                goto addr_444fc1_32;
            }
        }
        if (reinterpret_cast<unsigned char>(ebx13->f15) <= 0x73) 
            goto addr_444def_20;
        if (reinterpret_cast<unsigned char>(ebx13->f15) < 0x75) 
            goto addr_444fc1_32;
        if (reinterpret_cast<unsigned char>(ebx13->f15) <= 0x75) 
            goto addr_444edb_91;
    }
    if (ebx13->f15 != 0x78) {
        goto addr_444fc1_32;
    }
    addr_444c49_51:
    ebx13->f14 = reinterpret_cast<unsigned char>(ebx13->f14 & 0xf9);
    goto addr_444c4d_55;
    addr_444bf7_60:
    zf46 = dl10 == 0x6f;
    addr_444bf0_114:
    if (zf46) 
        goto addr_444c0a_48;
    goto addr_444c57_3;
    addr_444beb_61:
    if (dl10 <= 0x75) 
        goto addr_444c0a_48;
    zf46 = dl10 == 0x78;
    goto addr_444bf0_114;
}

struct s828 {
    signed char[20] pad20;
    signed char f14;
};

struct s829 {
    signed char[22] pad22;
    signed char f16;
};

struct s830 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s831 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s832 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s833 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s834 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s835 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s836 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s837 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s838 {
    signed char[20] pad20;
    unsigned char f14;
};

struct s624* fun_4449b3(void** ecx) {
    struct s624* ebx2;
    struct s624* eax3;
    struct s828* edx4;
    uint32_t eax5;
    struct s829* edx6;
    struct s830* edx7;
    struct s831* edx8;
    struct s832* edx9;
    struct s833* edx10;
    struct s834* edx11;
    struct s835* edx12;
    struct s836* edx13;
    struct s837* edx14;
    struct s838* edx15;

    ebx2 = eax3;
    edx4->f14 = 0;
    while (1) {
        eax5 = 0;
        *reinterpret_cast<unsigned char*>(&eax5) = ebx2->f0;
        if (eax5 != 45) {
            if (eax5 != 35) {
                if (eax5 != 43) {
                    if (eax5 != 32) {
                        if (eax5 != 48) 
                            break;
                        edx6->f16 = 48;
                    } else {
                        *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<unsigned char>(edx7->f14 & 4);
                        if (!(eax5 & 0xff)) {
                            edx8->f14 = reinterpret_cast<unsigned char>(edx9->f14 | 2);
                        }
                    }
                } else {
                    edx10->f14 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(edx11->f14 | 4) & 0xfd);
                }
            } else {
                edx12->f14 = reinterpret_cast<unsigned char>(edx13->f14 | 1);
            }
        } else {
            edx14->f14 = reinterpret_cast<unsigned char>(edx15->f14 | 8);
        }
        ebx2 = reinterpret_cast<struct s624*>(&ebx2->f1);
    }
    return ebx2;
}

/* (image base) */
int32_t image_base_ = 0x4475d4;

void** fun_444bac() {
    void** eax1;

    eax1 = reinterpret_cast<void**>(image_base_());
    return eax1;
}

uint32_t fun_444a12(void** ecx) {
    uint32_t edi2;
    uint32_t ebx3;
    signed char* edx4;
    signed char* eax5;
    uint32_t eax6;

    edi2 = ebx3;
    edx4 = eax5;
    eax6 = 0;
    while ((++edx4, !!*edx4) && eax6 != edi2) {
        ++eax6;
    }
    return eax6;
}

void** fun_449d60();

void** fun_4452ea(void** ecx);

void fun_447d4c();

/* (image base) */
int32_t image_base_ = 0x447957;

void fun_4453ee(void** ecx) {
    int32_t* eax2;
    int32_t ebx3;

    fun_449d60();
    fun_4452ea(ecx);
    fun_447d4c();
    image_base_();
    eax2 = reinterpret_cast<int32_t*>(image_base_());
    *eax2 = 0;
    fun_4481d8();
    goto ebx3;
}

int32_t GetStdHandle = 0x220fea;

void fun_449d3c() {
    goto GetStdHandle;
}

void** fun_445d0b(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** v11;
    void** v12;
    void** ebx13;
    void** v14;
    void** v15;
    void** edx16;
    void** v17;
    void** esi18;
    void** esi19;
    void** eax20;
    void** ecx21;
    void** ebx22;
    void** eax23;
    void** ecx24;
    void** edx25;
    void*** edx26;
    void** eax27;
    void** edx28;
    void** eax29;

    v11 = reinterpret_cast<void**>(__return_address());
    v12 = ebx13;
    v14 = ecx;
    v15 = edx16;
    v17 = esi18;
    esi19 = eax20;
    image_base_();
    ecx21 = g618358;
    ebx22 = reinterpret_cast<void**>(0);
    eax23 = reinterpret_cast<void**>(0);
    ecx24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx21) << 2);
    while (reinterpret_cast<signed char>(eax23) < reinterpret_cast<signed char>(ecx24)) {
        edx25 = g61835c;
        edx26 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx25) + reinterpret_cast<unsigned char>(eax23));
        if (!*edx26) 
            goto addr_445d33_4;
        eax23 = eax23 + 4;
        ++ebx22;
    }
    eax27 = fun_444348(ecx24, v17, v15, v14, v12, v11, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    edx28 = g618358;
    g61835c = eax27;
    *reinterpret_cast<void***>(eax27 + reinterpret_cast<unsigned char>(edx28) * 4) = esi19;
    g618358 = edx28 + 1;
    image_base_();
    eax29 = g618358;
    return eax29 - 1;
    addr_445d33_4:
    *edx26 = esi19;
    image_base_();
    return ebx22;
}

int32_t GetModuleHandleA = 0x220fc4;

void** fun_449d60() {
    goto GetModuleHandleA;
}

int32_t g477b04 = 0;

void* fun_44972d(void** ecx);

void fun_449cb8(void* a1, void* a2);

void fun_449cb2(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6);

void* fun_448a1b(void** ecx);

int32_t fun_448b26(void** ecx) {
    int32_t eax2;
    int1_t zf3;
    void* eax4;
    void* v5;
    void* esi6;

    eax2 = g477b50;
    if (!eax2) {
        zf3 = g477b04 == 0;
        if (zf3) {
            image_base_();
            eax4 = fun_44972d(ecx);
            fun_449cb8(eax4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
            fun_449cb2(eax4, 0, eax4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4, v5, esi6);
            fun_448a1b(ecx);
            fun_449cb2(eax4, eax4, eax4, 0, eax4, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
            image_base_(eax4, eax4);
        } else {
            g477ad0();
            g477b04();
        }
    } else {
        g477b50 = 0;
    }
    goto __return_address();
}

int32_t GetCurrentProcessId = 0x220f06;

int32_t fun_449d4e() {
    goto GetCurrentProcessId;
}

int32_t fun_445cc6(void** ecx) {
    void** ecx2;
    void** eax3;
    int1_t cf4;
    void** ebx5;
    void** edx6;
    void* eax7;
    void* ebx8;
    int32_t eax9;

    ecx2 = g61835c;
    eax3 = g618358;
    cf4 = reinterpret_cast<unsigned char>(eax3) < reinterpret_cast<unsigned char>(g477b78);
    if (!cf4) {
        ebx5 = g618358;
        edx6 = ecx2;
        eax7 = reinterpret_cast<void*>(0);
        ebx8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx5) << 2);
        while (reinterpret_cast<int32_t>(eax7) < reinterpret_cast<int32_t>(ebx8)) {
            if (!*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx6) + reinterpret_cast<uint32_t>(eax7))) 
                goto addr_445cdc_5;
            eax7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax7) + 4);
        }
    } else {
        addr_445cdc_5:
        eax9 = 0;
        goto addr_445d01_7;
    }
    eax9 = 1;
    addr_445d01_7:
    g61835c = ecx2;
    return eax9;
}

int32_t SetStdHandle = 0x2210c6;

void fun_449d42(int32_t a1, void** a2) {
    goto SetStdHandle;
}

void fun_445e20() {
    int1_t less1;
    void** eax2;
    void** edx3;

    image_base_();
    less1 = reinterpret_cast<signed char>(eax2) < reinterpret_cast<signed char>(g618358);
    if (less1) {
        edx3 = g61835c;
        *reinterpret_cast<void***>(edx3 + reinterpret_cast<unsigned char>(eax2) * 4) = reinterpret_cast<void**>(0);
    }
    image_base_();
    return;
}

int32_t LocalFileTimeToFileTime = 0x221040;

void fun_449d24(void* a1, int32_t a2) {
    goto LocalFileTimeToFileTime;
}

signed char* fun_4487b6(void* ecx, void* a2, void** a3, int32_t a4, void* a5, void** a6) {
    signed char* ebp7;
    signed char* eax8;
    signed char* esi9;
    signed char* edx10;
    int32_t ecx11;
    signed char* edi12;
    int1_t zf13;
    signed char* eax14;
    int32_t ebx15;
    signed char dl16;

    ebp7 = eax8;
    esi9 = edx10;
    ecx11 = -1;
    edi12 = ebp7;
    zf13 = 1;
    if (1) {
        addr_4487d5_2:
        eax14 = edi12;
    } else {
        do {
            if (!ecx11) 
                break;
            --ecx11;
            zf13 = *edi12 == 0;
            ++edi12;
            ++esi9;
        } while (!zf13);
        if (!zf13) 
            goto addr_4487d5_2; else 
            goto addr_4487d2_7;
    }
    while (ebx15 && (dl16 = *esi9, *eax14 = dl16, !!dl16)) {
        ++eax14;
        ++esi9;
        --ebx15;
    }
    *eax14 = 0;
    return ebp7;
    addr_4487d2_7:
    --edi12;
    goto addr_4487d5_2;
}

struct s839 {
    signed char[16] pad16;
    unsigned char f10;
};

struct s540* fun_446ce6(struct s540* ecx);

struct s540* fun_446ffd(struct s540* ecx);

struct s540* fun_446a28(struct s540* ecx);

uint32_t fun_446618(int32_t ecx, int32_t a2, int32_t a3, int32_t a4) {
    struct s540* esi5;
    struct s540* eax6;
    struct s540* v7;
    struct s540* edx8;
    struct s540* eax9;
    struct s839* eax10;
    uint32_t v11;
    struct s540* ebx12;
    struct s540* ecx13;
    struct s540* ebx14;
    uint32_t eax15;
    struct s540* ebx16;
    uint32_t eax17;
    struct s540* eax18;
    struct s540* eax19;
    struct s540* v20;

    esi5 = eax6;
    v7 = edx8;
    *reinterpret_cast<unsigned char*>(&eax9 + 1) = reinterpret_cast<unsigned char>(eax10->f10 & 0xfd);
    v11 = 0;
    esi5->f10 = *reinterpret_cast<unsigned char*>(&eax9 + 1);
    do {
        ebx12 = v7;
        ecx13 = reinterpret_cast<struct s540*>(&ebx12->pad16);
        v7 = ecx13;
        ebx12 = *reinterpret_cast<struct s540**>(&ebx12->f0);
        ebx14 = reinterpret_cast<struct s540*>(reinterpret_cast<unsigned char>(ebx12) & 0xff);
        if (!ebx14) 
            break;
        *reinterpret_cast<signed char*>(&eax9) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ebx14) + 1);
        eax15 = reinterpret_cast<unsigned char>(eax9) & 0xff;
        *reinterpret_cast<unsigned char*>(&eax15) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax15 + 0x459418) & 2);
        if (!(eax15 & 0xff)) {
            if (ebx14 == 37) {
                eax9 = fun_44685f(ecx13);
                ebx16 = reinterpret_cast<struct s540*>(0);
                v7 = eax9;
                ebx16 = *reinterpret_cast<struct s540**>(&eax9->f0);
                if (ebx16) {
                    eax9 = reinterpret_cast<struct s540*>(&eax9->pad16);
                    v7 = eax9;
                }
                if (reinterpret_cast<unsigned char>(ebx16) >= reinterpret_cast<unsigned char>(0x65)) 
                    goto addr_4466bb_8;
            } else {
                eax9 = fun_446609();
                if (eax9 == ebx14) 
                    goto addr_4467fe_10; else 
                    goto addr_446688_11;
            }
        } else {
            eax9 = fun_446954();
            continue;
        }
        if (reinterpret_cast<unsigned char>(ebx16) < reinterpret_cast<unsigned char>(88)) {
            if (reinterpret_cast<unsigned char>(ebx16) < reinterpret_cast<unsigned char>(69)) {
                if (ebx16 == 37) {
                    eax9 = fun_446609();
                    if (eax9 != ebx16) 
                        goto addr_446688_11;
                } else {
                    continue;
                }
            } else {
                if (reinterpret_cast<unsigned char>(ebx16) <= reinterpret_cast<unsigned char>(69) || ebx16 == 71) {
                    addr_44679c_19:
                    eax9 = fun_446ce6(ecx13);
                    goto addr_4467c8_20;
                } else {
                    continue;
                }
            }
        } else {
            if (reinterpret_cast<unsigned char>(ebx16) <= reinterpret_cast<unsigned char>(88)) {
                addr_446790_23:
                ecx13 = reinterpret_cast<struct s540*>(1);
                goto addr_44675f_24;
            } else {
                if (reinterpret_cast<unsigned char>(ebx16) < reinterpret_cast<unsigned char>(99)) {
                    if (ebx16 == 91) {
                        eax9 = fun_446bec(ecx13);
                        goto addr_4467c8_20;
                    } else {
                        continue;
                    }
                } else {
                    if (reinterpret_cast<unsigned char>(ebx16) <= reinterpret_cast<unsigned char>(99)) {
                        eax9 = fun_446993(ecx13);
                        goto addr_4467c8_20;
                    } else {
                        ecx13 = reinterpret_cast<struct s540*>(1);
                        goto addr_44675f_24;
                    }
                }
            }
        }
        addr_4467fe_10:
        continue;
        addr_4467c8_20:
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax9 == 0)) 
            break;
        if (esi5->f10 & 1) {
            ++v11;
            continue;
        }
        addr_44675f_24:
        addr_446763_35:
        eax9 = fun_446ffd(ecx13);
        goto addr_4467c8_20;
        addr_4466bb_8:
        if (reinterpret_cast<unsigned char>(ebx16) <= reinterpret_cast<unsigned char>(0x67)) 
            goto addr_44679c_19;
        if (reinterpret_cast<unsigned char>(ebx16) < reinterpret_cast<unsigned char>(0x70)) {
            if (reinterpret_cast<unsigned char>(ebx16) < reinterpret_cast<unsigned char>(0x6e)) {
                if (ebx16 == 0x69) {
                    ecx13 = reinterpret_cast<struct s540*>(1);
                    goto addr_446763_35;
                } else {
                    continue;
                }
            } else {
                if (reinterpret_cast<unsigned char>(ebx16) <= reinterpret_cast<unsigned char>(0x6e)) {
                    eax9 = esi5;
                    fun_446b4b(ecx13, v7);
                    continue;
                } else {
                    ecx13 = reinterpret_cast<struct s540*>(1);
                    goto addr_44675f_24;
                }
            }
        } else {
            if (reinterpret_cast<unsigned char>(ebx16) <= reinterpret_cast<unsigned char>(0x70)) 
                goto addr_446790_23;
            if (reinterpret_cast<unsigned char>(ebx16) >= reinterpret_cast<unsigned char>(0x75)) 
                goto addr_4466d4_47;
        }
        if (ebx16 == 0x73) {
            eax9 = fun_446a28(ecx13);
            goto addr_4467c8_20;
        } else {
            continue;
        }
        addr_4466d4_47:
        if (reinterpret_cast<unsigned char>(ebx16) <= reinterpret_cast<unsigned char>(0x75)) {
            ecx13 = reinterpret_cast<struct s540*>(0);
            goto addr_446763_35;
        } else {
            if (ebx16 == 0x78) 
                goto addr_446790_23;
        }
    } while (!(esi5->f10 & 2));
    goto addr_446809_55;
    addr_44683f_56:
    if (v11 || !(esi5->f10 & 2)) {
        eax17 = v11;
    } else {
        eax17 = 0xffffffff;
    }
    return eax17;
    addr_446688_11:
    if (!(esi5->f10 & 2)) {
        fun_446610();
        goto addr_44683f_56;
    }
    addr_446809_55:
    eax18 = v7;
    eax18 = *reinterpret_cast<struct s540**>(&eax18->f0);
    if ((reinterpret_cast<unsigned char>(eax18) & 0xff) == 37 && (eax19 = fun_44685f(ecx13), v20 = eax19, eax19 = *reinterpret_cast<struct s540**>(&eax19->f0), (reinterpret_cast<unsigned char>(eax19) & 0xff) == 0x6e)) {
        fun_446b4b(ecx13, v20);
        goto addr_44683f_56;
    }
}

struct s840 {
    signed char[12] pad12;
    int32_t fc;
    unsigned char f10;
};

struct s841 {
    unsigned char f0;
    signed char[3] pad4;
    int32_t f4;
};

/* (image base) */
int32_t image_base_ = 0x4475d4;

unsigned char fun_4487f6();

struct s540* fun_446ce6(struct s540* ecx) {
    uint64_t v2;
    int32_t ebp3;
    struct s840* esi4;
    struct s840* eax5;
    int32_t* v6;
    int32_t* edx7;
    struct s540* edi8;
    struct s841* ebx9;
    struct s540* v10;
    struct s540* eax11;
    struct s540* ecx12;
    uint32_t edx13;
    int32_t edx14;
    unsigned char v15;
    uint32_t eax16;
    unsigned char eax17;
    int32_t ebp18;
    uint32_t eax19;
    uint32_t ecx20;
    struct s540* eax21;
    uint32_t eax22;
    struct s540* eax23;
    int32_t eax24;
    int32_t edx25;
    int32_t ebx26;
    uint32_t eax27;
    struct s540* eax28;
    uint32_t eax29;
    unsigned char v30;
    struct s540* eax31;
    uint32_t eax32;
    uint32_t eax33;
    unsigned char v34;
    int32_t v35;
    unsigned char eax36;
    uint32_t v37;
    int32_t eax38;
    uint32_t eax39;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 4) = ebp3;
    esi4 = eax5;
    v6 = edx7;
    edi8 = reinterpret_cast<struct s540*>(0);
    ebx9 = reinterpret_cast<struct s841*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 2 - 4 - 0x6c);
    v10 = reinterpret_cast<struct s540*>(0);
    while (eax11 = fun_446609(), ecx12 = eax11, *reinterpret_cast<unsigned char*>(&edx13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax11) + 1) + 0x459418) & 2), edx13 = edx13 & 0xff, !!edx13) {
        v10 = reinterpret_cast<struct s540*>(&v10->pad16);
    }
    if (esi4->f10 & 2) 
        goto addr_446f37_5;
    edx14 = esi4->fc;
    esi4->fc = edx14 - 1;
    if (!edx14) 
        goto addr_446f2e_7;
    if (eax11 == 43) 
        goto addr_446d49_9;
    if (!reinterpret_cast<int1_t>(eax11 == 45)) 
        goto addr_446d67_11;
    addr_446d49_9:
    v15 = *reinterpret_cast<unsigned char*>(&ecx12);
    eax11 = fun_447214();
    ebx9 = reinterpret_cast<struct s841*>(&ebx9->pad4);
    ecx12 = eax11;
    v10 = reinterpret_cast<struct s540*>(&v10->pad16);
    if (eax11 == 0xffffffff) 
        goto addr_446f37_5;
    addr_446d67_11:
    *reinterpret_cast<unsigned char*>(&eax11) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx12) + 1);
    eax16 = reinterpret_cast<unsigned char>(eax11) & 0xff;
    *reinterpret_cast<unsigned char*>(&eax16) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax16 + 0x459418) & 32);
    if (eax16 & 0xff) 
        goto addr_446d88_12;
    if (!reinterpret_cast<int1_t>(ecx12 == 46)) 
        goto addr_446f2e_7;
    addr_446d88_12:
    eax17 = reinterpret_cast<unsigned char>(0);
    *reinterpret_cast<unsigned char*>(&v2) = reinterpret_cast<unsigned char>(0);
    ebp18 = 0;
    eax17 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx12) + 1);
    eax19 = eax17 & 0xff;
    *reinterpret_cast<unsigned char*>(&eax19) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax19 + 0x459418) & 32);
    if (eax19 & 0xff) {
        ebp18 = 1;
        do {
            ebx9 = reinterpret_cast<struct s841*>(&ebx9->pad4);
            if (esi4->f10 & 16) {
                ecx20 = reinterpret_cast<unsigned char>(ecx12) + *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v2) + 2) * 10 - 48;
                *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v2) + 2) = *reinterpret_cast<int16_t*>(&ecx20);
            }
            edi8 = reinterpret_cast<struct s540*>(&edi8->pad16);
            eax21 = fun_447214();
            ecx12 = eax21;
            if (eax21 == 0xffffffff) 
                goto addr_446f37_5;
            *reinterpret_cast<signed char*>(&eax21) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax21) + 1);
            eax22 = reinterpret_cast<unsigned char>(eax21) & 0xff;
            *reinterpret_cast<unsigned char*>(&eax22) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax22 + 0x459418) & 32);
        } while (eax22 & 0xff);
    }
    if (!reinterpret_cast<int1_t>(ecx12 == 46)) {
        addr_446ea0_20:
        if (esi4->f10 & 16 || ecx12 != 0x65 && !reinterpret_cast<int1_t>(ecx12 == 69)) {
            addr_446f2e_7:
            fun_446610();
            goto addr_446f37_5;
        } else {
            edi8 = reinterpret_cast<struct s540*>(&edi8->pad16);
            eax23 = fun_447214();
            ebx9 = reinterpret_cast<struct s841*>(&ebx9->pad4);
            ecx12 = eax23;
            if (eax23 == 0xffffffff || (eax23 == 43 || reinterpret_cast<int1_t>(eax23 == 45)) && (edi8 = reinterpret_cast<struct s540*>(&edi8->pad16), eax23 = fun_447214(), ebx9 = reinterpret_cast<struct s841*>(&ebx9->pad4), ecx12 = eax23, eax23 == 0xffffffff)) {
                addr_446f37_5:
                if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi8) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi8 == 0) || (edi8 = reinterpret_cast<struct s540*>(reinterpret_cast<unsigned char>(edi8) + reinterpret_cast<unsigned char>(v10)), (esi4->f10 & 1) == 0)) {
                    addr_446ff2_22:
                } else {
                    if (!(esi4->f10 & 16)) {
                        image_base_();
                    } else {
                        eax24 = 0;
                        *reinterpret_cast<unsigned char*>(&eax24) = v15;
                        if (eax24 == 45) {
                            *reinterpret_cast<unsigned char*>(&v2) = -*reinterpret_cast<unsigned char*>(&v2);
                        }
                    }
                    *reinterpret_cast<unsigned char*>(&ebx9) = esi4->f10;
                    if (!(*reinterpret_cast<unsigned char*>(&ebx9) & 4)) {
                        if (!(*reinterpret_cast<unsigned char*>(&ebx9) & 8)) {
                            edx25 = *v6 + 4;
                            *v6 = edx25;
                            ebx9 = *reinterpret_cast<struct s841**>(edx25 - 4);
                        } else {
                            ebx26 = *v6 + 4;
                            *v6 = ebx26;
                            ebx9 = *reinterpret_cast<struct s841**>(ebx26 - 4);
                        }
                    } else {
                        *v6 = *v6 + 8;
                        __asm__("les ebx, [ecx-0x8]");
                    }
                    if (!(esi4->f10 & 16)) 
                        goto addr_446fc7_33; else 
                        goto addr_446fc1_34;
                }
            } else {
                *reinterpret_cast<unsigned char*>(&eax23) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx12) + 1);
                eax27 = reinterpret_cast<unsigned char>(eax23) & 0xff;
                *reinterpret_cast<unsigned char*>(&eax27) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax27 + 0x459418) & 32);
                if (eax27 & 0xff) {
                    do {
                        edi8 = reinterpret_cast<struct s540*>(&edi8->pad16);
                        eax28 = fun_447214();
                        ebx9 = reinterpret_cast<struct s841*>(&ebx9->pad4);
                        if (eax28 == 0xffffffff) 
                            goto addr_446f37_5;
                        *reinterpret_cast<signed char*>(&eax28) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax28) + 1);
                        eax29 = reinterpret_cast<unsigned char>(eax28) & 0xff;
                        *reinterpret_cast<unsigned char*>(&eax29) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax29 + 0x459418) & 32);
                    } while (eax29 & 0xff);
                    goto addr_446f2e_7;
                } else {
                    edi8 = reinterpret_cast<struct s540*>(0);
                    goto addr_446f2e_7;
                }
            }
        }
    } else {
        v30 = *reinterpret_cast<unsigned char*>(&ecx12);
        eax31 = fun_447214();
        ebx9 = reinterpret_cast<struct s841*>(&ebx9->pad4);
        ecx12 = eax31;
        if (eax31 == 0xffffffff) 
            goto addr_446f37_5;
        if (ebp18) 
            goto addr_446e2c_41;
        *reinterpret_cast<unsigned char*>(&eax31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax31) + 1);
        eax32 = reinterpret_cast<unsigned char>(eax31) & 0xff;
        *reinterpret_cast<unsigned char*>(&eax32) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax32 + 0x459418) & 32);
        eax31 = reinterpret_cast<struct s540*>(eax32 & 0xff);
        if (!eax31) 
            goto addr_446f2e_7;
        addr_446e2c_41:
        edi8 = reinterpret_cast<struct s540*>(&edi8->pad16);
        do {
            *reinterpret_cast<unsigned char*>(&eax31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx12) + 1);
            eax33 = reinterpret_cast<unsigned char>(eax31) & 0xff;
            *reinterpret_cast<unsigned char*>(&eax33) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax33 + 0x459418) & 32);
            if (!(eax33 & 0xff)) 
                break;
            edi8 = reinterpret_cast<struct s540*>(&edi8->pad16);
            eax31 = fun_447214();
            ebx9 = reinterpret_cast<struct s841*>(&ebx9->pad4);
            ecx12 = eax31;
        } while (!reinterpret_cast<int1_t>(eax31 == 0xffffffff));
        if (!(esi4->f10 & 16)) 
            goto addr_446e97_46; else 
            goto addr_446e5d_47;
    }
    return edi8;
    addr_446fc7_33:
    if (esi4->f10 & 32 || esi4->f10 & 64) {
        ebx9->f0 = v34;
        ebx9->f4 = v35;
        goto addr_446ff2_22;
    } else {
        eax36 = fun_4487f6();
    }
    addr_446fef_51:
    ebx9->f0 = eax36;
    goto addr_446ff2_22;
    addr_446fc1_34:
    eax36 = *reinterpret_cast<unsigned char*>(&v2);
    goto addr_446fef_51;
    addr_446e97_46:
    if (ecx12 == 0xffffffff) 
        goto addr_446f37_5; else 
        goto addr_446ea0_20;
    addr_446e5d_47:
    v37 = 0;
    while (eax38 = 0, *reinterpret_cast<unsigned char*>(&eax38) = v30, eax38 != 46) {
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&v37) + 2) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax38) - 48);
        v37 = v37 / 10;
    }
    eax39 = v37;
    *reinterpret_cast<int16_t*>(&v2) = *reinterpret_cast<int16_t*>(&eax39);
    goto addr_446e97_46;
}

struct s842 {
    signed char[12] pad12;
    int32_t fc;
    unsigned char f10;
};

struct s843 {
    signed char[16] pad16;
    unsigned char f10;
};

struct s540* fun_446a28(struct s540* ecx) {
    struct s842* ebx2;
    struct s842* eax3;
    struct s843* eax4;
    signed char v5;
    int32_t ecx6;
    int32_t* edx7;
    int32_t* edx8;
    int32_t esi9;
    int32_t* edx10;
    int32_t* edx11;
    int32_t* edx12;
    int32_t* edx13;
    struct s540* esi14;
    struct s540* eax15;
    struct s540* v16;
    uint32_t eax17;
    int32_t eax18;
    int32_t eax19;
    struct s540* eax20;
    void* eax21;
    struct s540* eax22;
    uint32_t eax23;
    int32_t eax24;

    ebx2 = eax3;
    if (!(eax4->f10 & 32)) {
        v5 = 1;
    } else {
        v5 = 2;
    }
    if (ebx2->f10 & 1) {
        if (!(ebx2->f10 & 4)) {
            if (!(ebx2->f10 & 8)) {
                ecx6 = *edx7 + 4;
                *edx8 = ecx6;
                ecx = *reinterpret_cast<struct s540**>(ecx6 - 4);
            } else {
                esi9 = *edx10 + 4;
                *edx11 = esi9;
                ecx = *reinterpret_cast<struct s540**>(esi9 - 4);
            }
        } else {
            *edx12 = *edx13 + 8;
            __asm__("les ecx, [edi-0x8]");
        }
    }
    esi14 = reinterpret_cast<struct s540*>(0);
    while (eax15 = fun_446609(), v16 = eax15, *reinterpret_cast<unsigned char*>(&eax15) = reinterpret_cast<unsigned char>(&v16->pad16), eax17 = reinterpret_cast<unsigned char>(eax15) & 0xff, *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax17 + 0x459418) & 2), !!(eax17 & 0xff)) {
        esi14 = reinterpret_cast<struct s540*>(&esi14->pad16);
    }
    if (!(ebx2->f10 & 2)) {
        eax18 = ebx2->fc;
        ebx2->fc = eax18 - 1;
        if (!eax18) {
            addr_446b16_15:
            fun_446610();
        } else {
            do {
                esi14 = reinterpret_cast<struct s540*>(&esi14->pad16);
                if (ebx2->f10 & 1) {
                    eax19 = 0;
                    *reinterpret_cast<signed char*>(&eax19) = v5;
                    if (eax19 != 1) {
                        eax20 = v16;
                        *reinterpret_cast<struct s540**>(&ecx->f0) = eax20;
                    } else {
                        *reinterpret_cast<struct s540**>(&ecx->f0) = v16;
                    }
                    eax21 = reinterpret_cast<void*>(0);
                    *reinterpret_cast<signed char*>(&eax21) = v5;
                    ecx = reinterpret_cast<struct s540*>(reinterpret_cast<unsigned char>(ecx) + reinterpret_cast<uint32_t>(eax21));
                }
                eax22 = fun_447214();
                v16 = eax22;
                if (eax22 == 0xffffffff) 
                    break;
                *reinterpret_cast<unsigned char*>(&eax22) = reinterpret_cast<unsigned char>(&v16->pad16);
                eax23 = reinterpret_cast<unsigned char>(eax22) & 0xff;
                *reinterpret_cast<unsigned char*>(&eax23) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax23 + 0x459418) & 2);
            } while (!(eax23 & 0xff));
            goto addr_446b16_15;
        }
    } else {
        esi14 = reinterpret_cast<struct s540*>(0);
    }
    if (ebx2->f10 & 1 && !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi14) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi14 == 0))) {
        eax24 = 0;
        *reinterpret_cast<signed char*>(&eax24) = v5;
        if (eax24 != 1) {
            *reinterpret_cast<struct s540**>(&ecx->f0) = reinterpret_cast<struct s540*>(0);
        } else {
            *reinterpret_cast<struct s540**>(&ecx->f0) = reinterpret_cast<struct s540*>(0);
        }
    }
    return esi14;
}

struct s844 {
    signed char[12] pad12;
    int32_t fc;
    unsigned char f10;
};

struct s540* fun_446ffd(struct s540* ecx) {
    struct s844* esi2;
    struct s844* eax3;
    void** v4;
    void** edx5;
    struct s540* v6;
    void* edx7;
    void* ebx8;
    void* edi9;
    struct s540* ecx10;
    void* v11;
    struct s540* eax12;
    struct s540* ebx13;
    int32_t eax14;
    struct s540* v15;
    struct s540* eax16;
    void* eax17;
    struct s540* eax18;
    struct s540* eax19;
    struct s540* eax20;
    struct s540* eax21;
    void* eax22;
    void* ebx23;
    void** eax24;
    void* ebp25;
    struct s540* eax26;

    esi2 = eax3;
    v4 = edx5;
    v6 = ecx;
    edx7 = ebx8;
    edi9 = reinterpret_cast<void*>(0);
    ecx10 = reinterpret_cast<struct s540*>(0);
    v11 = reinterpret_cast<void*>(0);
    while (eax12 = fun_446609(), ebx13 = eax12, *reinterpret_cast<unsigned char*>(&eax12) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax12) + 1) + 0x459418) & 2), !!(reinterpret_cast<unsigned char>(eax12) & 0xff)) {
        v11 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(v11) + 1);
    }
    if (esi2->f10 & 2) 
        goto addr_447175_5;
    eax14 = esi2->fc;
    esi2->fc = eax14 - 1;
    if (!eax14) 
        goto addr_44716c_7;
    v15 = reinterpret_cast<struct s540*>(43);
    if (!v6) 
        goto addr_447088_9;
    if (ebx13 == 43) 
        goto addr_44706f_11;
    if (!reinterpret_cast<int1_t>(ebx13 == 45)) 
        goto addr_447088_9;
    addr_44706f_11:
    v11 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(v11) + 1);
    v15 = ebx13;
    eax16 = fun_447214();
    ebx13 = eax16;
    if (eax16 == 0xffffffff) 
        goto addr_447175_5;
    addr_447088_9:
    if (edx7) {
        if (!reinterpret_cast<int1_t>(edx7 == 16) || !reinterpret_cast<int1_t>(ebx13 == 48)) {
            do {
                addr_447128_14:
                eax17 = fun_4471ed();
                if (reinterpret_cast<int32_t>(eax17) >= reinterpret_cast<int32_t>(edx7)) 
                    break;
                edi9 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(edi9) * reinterpret_cast<uint32_t>(edx7) + reinterpret_cast<uint32_t>(eax17));
                ecx10 = reinterpret_cast<struct s540*>(&ecx10->pad16);
                eax18 = fun_447214();
                addr_447121_16:
                ebx13 = eax18;
            } while (eax18 != 0xffffffff);
            goto addr_447175_5;
        } else {
            ecx10 = reinterpret_cast<struct s540*>(1);
            eax19 = fun_447214();
            ebx13 = eax19;
            if (eax19 == 0xffffffff) {
                addr_447175_5:
                if (reinterpret_cast<int1_t>(v15 == 45)) {
                    edi9 = reinterpret_cast<void*>(-reinterpret_cast<uint16_t>(edi9));
                    goto addr_44717e_19;
                }
            } else {
                if (eax19 == 0x78 || reinterpret_cast<int1_t>(eax19 == 88)) {
                    eax18 = fun_447214();
                    ecx10 = reinterpret_cast<struct s540*>(0);
                    v11 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(v11) + 2);
                    goto addr_447121_16;
                }
            }
        }
    } else {
        if (!reinterpret_cast<int1_t>(ebx13 == 48)) {
            edx7 = reinterpret_cast<void*>(10);
            goto addr_447128_14;
        }
        ecx10 = reinterpret_cast<struct s540*>(1);
        eax20 = fun_447214();
        ebx13 = eax20;
        if (eax20 == 0xffffffff) 
            goto addr_447175_5;
        if (eax20 == 0x78) 
            goto addr_4470b2_26;
        if (!reinterpret_cast<int1_t>(eax20 == 88)) 
            goto addr_4470d6_28; else 
            goto addr_4470b2_26;
    }
    if (!reinterpret_cast<int1_t>(ebx13 == 58) || !(esi2->f10 & 0x80)) {
        addr_44716c_7:
        fun_446610();
        goto addr_447175_5;
    } else {
        while (ecx10 = reinterpret_cast<struct s540*>(&ecx10->pad16), eax21 = fun_447214(), eax21 != 0xffffffff) {
            eax22 = fun_4471ed();
            if (reinterpret_cast<int32_t>(eax22) >= reinterpret_cast<int32_t>(edx7)) 
                goto addr_44716c_7;
            edi9 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(edi9) * reinterpret_cast<uint32_t>(edx7) + reinterpret_cast<uint32_t>(eax22));
        }
        goto addr_447175_5;
    }
    addr_44717e_19:
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx10 == 0)) && (ecx10 = reinterpret_cast<struct s540*>(reinterpret_cast<unsigned char>(ecx10) + reinterpret_cast<uint16_t>(v11)), !!(esi2->f10 & 1))) {
        if (!(esi2->f10 & 4)) {
            if (!(esi2->f10 & 8)) {
                ebx23 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(*v4) + 4);
                *v4 = ebx23;
                eax24 = *reinterpret_cast<void***>(reinterpret_cast<uint16_t>(ebx23) + 0xfffffffc);
            } else {
                ebp25 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(*v4) + 4);
                *v4 = ebp25;
                eax24 = *reinterpret_cast<void***>(reinterpret_cast<uint16_t>(ebp25) + 0xfffffffc);
            }
        } else {
            eax24 = v4;
            *eax24 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(*eax24) + 8);
            __asm__("les eax, [edx-0x8]");
        }
        if (!(esi2->f10 & 16)) {
            *eax24 = edi9;
        } else {
            *eax24 = edi9;
        }
    }
    return ecx10;
    addr_4470b2_26:
    eax26 = fun_447214();
    ecx10 = reinterpret_cast<struct s540*>(0);
    ebx13 = eax26;
    v11 = reinterpret_cast<void*>(reinterpret_cast<uint16_t>(v11) + 2);
    if (eax26 == 0xffffffff) 
        goto addr_447175_5;
    edx7 = reinterpret_cast<void*>(16);
    goto addr_447128_14;
    addr_4470d6_28:
    edx7 = reinterpret_cast<void*>(8);
    goto addr_447128_14;
}

unsigned char fun_4487f6() {
    unsigned char eax1;

    return eax1;
}

void fun_44887d() {
    g477d74 = reinterpret_cast<struct s34*>(0x8000);
    return;
}

int32_t fun_4476f8(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** ebx7;
    void** v8;
    void** v9;
    void** edx10;
    void** v11;
    void** esi12;
    void* eax13;
    int32_t eax14;
    void* eax15;
    int32_t ebx16;
    void** esi17;
    void** eax18;
    void** ecx19;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = ebx7;
    v8 = ecx;
    v9 = edx10;
    v11 = esi12;
    eax13 = reinterpret_cast<void*>(((eax14 << 2) - reinterpret_cast<uint32_t>(eax15) << 2) + reinterpret_cast<uint32_t>(eax15));
    ebx16 = 0;
    esi17 = reinterpret_cast<void**>(0x477854 + (reinterpret_cast<uint32_t>(eax13) + reinterpret_cast<uint32_t>(eax13)));
    eax18 = g618348;
    while (eax18) {
        ecx19 = *reinterpret_cast<void***>(eax18);
        if (!(*reinterpret_cast<unsigned char*>(*reinterpret_cast<void***>(eax18 + 4) + 13) & 64) && !(*reinterpret_cast<unsigned char*>(*reinterpret_cast<void***>(eax18 + 4) + 13) & 8)) {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax18 + 4)) < reinterpret_cast<unsigned char>(esi17)) {
                addr_447743_5:
                eax18 = ecx19;
                continue;
            } else {
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax18 + 4)) < reinterpret_cast<unsigned char>(0x4778a2)) {
                }
            }
        }
        fun_4433cb(ecx19, v11, v9, v8, v6, v5, a2, a3, a4);
        ++ebx16;
        goto addr_447743_5;
    }
    return ebx16;
}

struct s845 {
    signed char[84] pad84;
    int32_t f54;
};

struct s846 {
    signed char[84] pad84;
    int32_t* f54;
};

struct s848 {
    signed char[4] pad4;
    int32_t f4;
};

struct s847 {
    signed char[84] pad84;
    struct s848* f54;
};

int32_t fun_4479a3();

struct s849 {
    signed char[84] pad84;
    int32_t f54;
};

void fun_447d4c() {
    struct s845* eax1;
    int32_t eax2;
    int32_t eax3;
    struct s846* eax4;
    struct s847* eax5;
    struct s849* eax6;

    eax1 = reinterpret_cast<struct s845*>(image_base_());
    eax1->f54 = eax2;
    eax3 = g0;
    eax4 = reinterpret_cast<struct s846*>(image_base_());
    *eax4->f54 = eax3;
    eax5 = reinterpret_cast<struct s847*>(image_base_());
    eax5->f54->f4 = reinterpret_cast<int32_t>(fun_4479a3);
    eax6 = reinterpret_cast<struct s849*>(image_base_());
    g0 = eax6->f54;
    return;
}

void fun_449d12(void* a1, int32_t a2, void** a3, int32_t a4, int32_t a5) {
    goto wsprintfA;
}

int32_t GetActiveWindow = 0x220dd4;

int32_t fun_449d0c() {
    goto GetActiveWindow;
}

int32_t WaitForSingleObject = 0x221108;

void fun_449cee(void** a1, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    goto WaitForSingleObject;
}

struct s850 {
    signed char[12] pad12;
    int32_t fc;
};

struct s851 {
    signed char[12] pad12;
    int32_t fc;
};

struct s852 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_447ec0(void** ecx) {
    struct s850* eax2;
    int32_t ebx3;
    struct s851* eax4;
    int32_t v5;
    int32_t* eax6;
    struct s852* eax7;

    if (eax2->fc && (ebx3 = eax2->fc - 1, eax4->fc = ebx3, !ebx3)) {
        v5 = *eax6;
        eax7->f8 = ebx3;
        fun_449ce8(v5);
    }
    return;
}

uint32_t g477d90 = 0;

int32_t fun_449cbe(int32_t a1, void* a2);

uint32_t g6184d8 = 0;

void* g6184d4 = reinterpret_cast<void*>(0);

void* g6184d0 = reinterpret_cast<void*>(0);

void* fun_448a1b(void** ecx) {
    void* esp2;
    int32_t ebx3;
    int32_t eax4;
    uint32_t eax5;
    void* v6;
    void* esp7;
    void* v8;
    int32_t eax9;
    int32_t eax10;
    uint32_t ebx11;
    uint32_t ebx12;
    void* ecx13;
    int1_t zf14;
    void* eax15;
    void* eax16;
    unsigned char v17;
    int1_t zf18;
    void* eax19;
    int1_t zf20;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 24);
    ebx3 = eax4;
    eax5 = g477d90;
    if (eax5 < 1) {
        do {
            addr_448a8c_2:
            v6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) + 20);
            esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4);
            v8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) + 8);
            eax9 = fun_449cbe(ebx3, v8);
            if (!eax9) 
                break;
            eax10 = fun_449698(ebx3, v8);
            esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 + 4 - 4 + 4);
        } while (!eax10);
        goto addr_448ab1_4;
    } else {
        if (eax5 <= 1) {
            ebx11 = g6184d8;
            ebx12 = ebx11 - 1;
            ecx13 = g6184d4;
            g6184d8 = ebx12;
            if (!ecx13) {
                g477d90 = 2;
                goto addr_448a64_8;
            } else {
                if (!ebx12) {
                    g477d90 = ebx12;
                    goto addr_448a64_8;
                }
            }
        } else {
            if (eax5 == 2) {
                zf14 = g6184d8 == 0;
                *reinterpret_cast<unsigned char*>(&eax5) = reinterpret_cast<uint1_t>(!zf14);
                g477d90 = eax5 & 0xff;
                eax15 = g6184d0;
                goto addr_448b1e_13;
            } else {
                goto addr_448a8c_2;
            }
        }
    }
    eax15 = reinterpret_cast<void*>(-1);
    addr_448b1e_13:
    return eax15;
    addr_448ab1_4:
    g6184d8 = 0;
    eax16 = reinterpret_cast<void*>(0);
    *reinterpret_cast<void**>(&eax16) = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&v6) + 2);
    g6184d4 = eax16;
    if (v17 & 1 || (zf18 = g6184d4 == 0, zf18)) {
        eax19 = reinterpret_cast<void*>(0);
        *reinterpret_cast<void**>(&eax19) = *reinterpret_cast<void**>(&v6);
        g6184d4 = reinterpret_cast<void*>(0);
        g477d90 = 2;
        g6184d0 = eax19;
    } else {
        zf20 = g6184d8 == 0;
        if (!zf20) {
            g477d90 = 1;
        }
    }
    addr_448a64_8:
    eax15 = g6184d4;
    goto addr_448b1e_13;
}

struct s853 {
    signed char[8] pad8;
    void** f8;
};

int32_t fun_449cca();

int32_t fun_4482a1(void** ecx) {
    void** esi2;
    struct s853* eax3;
    int32_t eax4;
    int1_t zf5;
    void** eax6;
    void** eax7;
    int1_t zf8;
    int32_t ebx9;

    esi2 = eax3->f8;
    eax4 = fun_449cca();
    if (!eax4) {
        zf5 = eax6 == g477a6c;
        if (zf5) {
            if (!esi2) {
                eax7 = g477a68;
                g477a6c = eax7;
                g477a70 = reinterpret_cast<void**>(0);
            } else {
                g477a6c = esi2;
            }
        }
        zf8 = eax6 == g618344;
        if (zf8) {
            g618344 = reinterpret_cast<void**>(0);
        }
    }
    goto ebx9;
}

struct s576* fun_449045(struct s576* ecx) {
    uint32_t edx2;
    int32_t ebx3;
    int32_t ebx4;
    int32_t esi5;
    int32_t edx6;
    int32_t ebx7;
    uint32_t edi8;
    int32_t eax9;
    int32_t edx10;
    int32_t ebx11;
    uint32_t ebx12;
    uint32_t ebx13;
    uint32_t eax14;
    uint32_t edx15;
    uint32_t eax16;
    uint32_t ebx17;
    int32_t eax18;
    uint32_t eax19;
    int16_t* esi20;
    int32_t eax21;
    uint32_t eax22;

    if (edx2 >= 0xa8c0 || reinterpret_cast<uint1_t>(ebx3 < 0) | reinterpret_cast<uint1_t>(ebx4 == 0)) {
        esi5 = edx6 - ebx7;
        edi8 = eax9 + esi5 / reinterpret_cast<uint32_t>(0x15180);
    } else {
        esi5 = edx10 + 0x15180 - ebx11;
        edi8 = eax9 + esi5 / reinterpret_cast<uint32_t>(0x15180) - 1;
    }
    ebx12 = esi5 % reinterpret_cast<uint32_t>(0x15180);
    ecx->f8 = ebx12 / 0xe10;
    ebx13 = ebx12 % 0xe10;
    ecx->f4 = ebx13 / 60;
    ecx->f0 = reinterpret_cast<unsigned char>(ebx13 % 60);
    eax14 = edi8 / 0x16e;
    edx15 = eax14;
    eax16 = ((eax14 << 3) + edx15 << 3) + edx15;
    ebx17 = edi8 - ((eax16 << 2) + eax16);
    if (edx15) {
        ebx17 = ebx17 - (edx15 + 0xffffffff >> 2);
    }
    eax18 = fun_448bfe(ecx);
    eax19 = eax18 + 0x16d;
    while (ebx17 >= eax19) {
        ++edx15;
        ebx17 = ebx17 - eax19;
    }
    esi20 = reinterpret_cast<int16_t*>(0x45952c);
    ecx->f14 = edx15;
    ecx->f1c = ebx17;
    eax21 = fun_448bfe(ecx);
    if (eax21) {
        esi20 = reinterpret_cast<int16_t*>(0x459546);
    }
    eax22 = ebx17 / 31;
    if (ebx17 >= reinterpret_cast<uint32_t>(esi20[eax22] >> 16)) {
        ++eax22;
    }
    ecx->f10 = eax22;
    ecx->fc = ebx17 - static_cast<int32_t>(esi20[eax22]) + 1;
    ecx->f18 = (edi8 + 1) % 7;
    return ecx;
}

struct s576* fun_449743(struct s576* ecx);

int32_t g477de4 = 1;

int32_t g477dc0 = 1;

int32_t g477dbc = 0;

int32_t g477db8 = 0;

unsigned char g477e07 = 69;

uint32_t g477e2e = 1;

struct s576* fun_4492d9(struct s576* ecx) {
    struct s576* eax2;
    struct s576* eax3;
    struct s576* ecx4;
    uint32_t eax5;
    struct s576* eax6;
    uint32_t ebx7;
    int32_t ebx8;
    struct s576* edx9;
    struct s576* eax10;
    uint32_t eax11;
    int32_t esi12;
    uint32_t eax13;
    int32_t edi14;
    uint32_t eax15;
    int32_t ebp16;
    unsigned char dh17;
    uint32_t eax18;
    uint32_t v19;
    uint32_t ebx20;
    void* edx21;
    void* v22;
    unsigned char* eax23;
    unsigned char v24;
    unsigned char v25;
    unsigned char v26;
    unsigned char v27;
    unsigned char v28;
    unsigned char v29;

    eax2 = fun_449743(ecx);
    if (eax2) {
        g477de4 = 0;
        eax3 = fun_449346(ecx);
        ecx4 = eax3;
        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1) = eax3->f0;
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1)) {
            eax5 = g477ddc;
            g477de4 = 1;
            eax6 = fun_449346(ecx4);
            ebx7 = g477ddc;
            g477de0 = ebx7 - (eax5 - 0xe10);
            ebx8 = 0;
            *reinterpret_cast<unsigned char*>(&ebx8) = eax6->f0;
            edx9 = eax6;
            if (ebx8 == 44) {
                eax10 = fun_44946f(eax5 - 0xe10);
                edx9 = eax10;
            }
            eax3 = reinterpret_cast<struct s576*>(0);
            *reinterpret_cast<unsigned char*>(&eax3) = edx9->f0;
            if (reinterpret_cast<int1_t>(eax3 == 44)) {
                fun_44946f(eax5 - 0xe10);
                eax11 = g477de0;
                esi12 = g477dc0;
                eax13 = g477de0;
                edi14 = g477dbc;
                eax15 = g477de0;
                eax3 = reinterpret_cast<struct s576*>(reinterpret_cast<int32_t>(eax15) / 60);
                ebp16 = g477db8;
                g477dc0 = esi12 - reinterpret_cast<int32_t>(eax11) / 0xe10;
                g477dbc = edi14 - reinterpret_cast<int32_t>(eax13) / 60 % 60;
                g477db8 = ebp16 - reinterpret_cast<int32_t>(eax15) % 60;
            }
        } else {
            g477e07 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax3) + 1);
        }
        return eax3;
    }
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax2) + 1) = *reinterpret_cast<unsigned char*>(&g477e2e);
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax2) + 1) & 1)) 
        goto addr_449201_10;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax2) + 1) & 2) 
        goto addr_4492ce_12;
    addr_449201_10:
    dh17 = *reinterpret_cast<unsigned char*>(&g477e2e);
    *reinterpret_cast<unsigned char*>(&g477e2e) = reinterpret_cast<unsigned char>(dh17 | 2);
    eax2 = fun_449ca6();
    if (reinterpret_cast<uint32_t>(eax2) < 1) 
        goto addr_4492ce_12;
    if (reinterpret_cast<uint32_t>(eax2) <= 1) {
        g477de4 = 0;
    } else {
        if (!reinterpret_cast<int1_t>(eax2 == 2)) {
            addr_4492ce_12:
            return eax2;
        } else {
            g477de4 = 1;
            eax18 = (v19 << 4) - v19 << 2;
            g477de0 = eax18;
            ebx20 = -eax18;
            g477de0 = ebx20;
        }
    }
    edx21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v22) + (reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 + 4 - 4 - 4 - 4 - 4 - 0xac));
    *reinterpret_cast<unsigned char*>(&ebx20) = 32;
    g477ddc = (reinterpret_cast<uint32_t>(edx21) << 4) - reinterpret_cast<uint32_t>(edx21) << 2;
    eax23 = reinterpret_cast<unsigned char*>("EST");
    while (v24) {
        ebx20 = ebx20 & 0xff;
        if (ebx20 == 32) {
            *eax23 = v25;
            ++eax23;
        }
        *reinterpret_cast<unsigned char*>(&ebx20) = v26;
    }
    *reinterpret_cast<unsigned char*>(&ebx20) = 32;
    *eax23 = 0;
    eax2 = reinterpret_cast<struct s576*>("EDT");
    while (v27) {
        ebx20 = ebx20 & 0xff;
        if (ebx20 == 32) {
            eax2->f0 = v28;
            eax2 = reinterpret_cast<struct s576*>(&eax2->pad4);
        }
        *reinterpret_cast<unsigned char*>(&ebx20) = v29;
    }
    eax2->f0 = 0;
    goto addr_4492ce_12;
}

int32_t ReadConsoleInputA = 0x221066;

int32_t fun_449cbe(int32_t a1, void* a2) {
    goto ReadConsoleInputA;
}

void fun_4496c4(void** ecx);

void* g477e40 = reinterpret_cast<void*>(0xffffffff);

void* fun_44972d(void** ecx) {
    void* eax2;

    fun_4496c4(ecx);
    eax2 = g477e40;
    return eax2;
}

int32_t GetConsoleMode = 0x220ef4;

void fun_449cb8(void* a1, void* a2) {
    goto GetConsoleMode;
}

int32_t SetConsoleMode = 0x221096;

void fun_449cb2(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6) {
    goto SetConsoleMode;
}

void* g477e44 = reinterpret_cast<void*>(0xffffffff);

void* fun_449738(void** ecx) {
    void* eax2;

    fun_4496c4(ecx);
    eax2 = g477e44;
    return eax2;
}

int32_t WriteConsoleA = 0x22111e;

void fun_449cac(void* a1, void* a2, int32_t a3, void* a4, int32_t a5) {
    goto WriteConsoleA;
}

struct s854 {
    signed char[32] pad32;
    int32_t f20;
};

struct s576* fun_44915a(int32_t ecx) {
    struct s854* edx2;
    struct s576* edx3;
    struct s576* eax4;

    edx2->f20 = 0;
    eax4 = fun_449045(edx3);
    return eax4;
}

void fun_4496c4(void** ecx) {
    int1_t zf2;
    void* eax3;
    int1_t zf4;
    void* eax5;

    image_base_();
    zf2 = reinterpret_cast<int1_t>(g477e40 == -1);
    if (zf2) {
        eax3 = fun_449da8("conin$", 0x80000000, 1, 0, 3, 0x80, 0);
        g477e40 = eax3;
    }
    zf4 = reinterpret_cast<int1_t>(g477e44 == -1);
    if (zf4) {
        eax5 = fun_449da8("conout$", 0x40000000, 2, 0, 3, 0x80, 0);
        g477e44 = eax5;
    }
    image_base_();
    return;
}

int32_t SetEvent = 0x2210a8;

void fun_449ca0() {
    goto SetEvent;
}

/* (image base) */
int32_t image_base_ = 0x449911;

struct s515* fun_44964b() {
    struct s515* eax1;

    eax1 = reinterpret_cast<struct s515*>(image_base_());
    return eax1;
}

int32_t GetCurrentThread = 0x220f32;

int32_t fun_449c9a() {
    goto GetCurrentThread;
}

void** g481814 = reinterpret_cast<void**>(5);

uint32_t g4815ec = 0x5b595e5f;

int32_t g4813e8 = 0;

int32_t g4815e8 = 0x5d10c483;

void** g481290 = reinterpret_cast<void**>(0xd1);

int32_t g481294 = 0x480104;

int32_t g481298 = 0xca1c329;

int32_t g48129c = 0x8b004801;

struct s855 {
    signed char[6] pad6;
    unsigned char f6;
    unsigned char f7;
};

void** fun_414640(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40, void** a41, void** a42, void** a43, void** a44, void** a45, void** a46, void** a47) {
    void** v48;
    void** v49;
    void** ebx50;
    void** v51;
    void** v52;
    void** edx53;
    void** v54;
    void** esi55;
    void** v56;
    void** edi57;
    void** v58;
    void** ebp59;
    void* eax60;
    void** ebx61;
    void** eax62;
    void** esi63;
    void** ecx64;
    int32_t edi65;
    void** ebp66;
    void** ebx67;
    int32_t eax68;
    void** edx69;
    void** edx70;
    void** edi71;
    void** eax72;
    void** edi73;
    uint32_t edx74;
    void** ecx75;
    void** edx76;
    void** ebx77;
    int32_t eax78;
    int1_t zf79;
    int32_t ebx80;
    int32_t eax81;
    int32_t edx82;
    uint32_t eax83;
    int32_t eax84;
    int1_t zf85;
    int1_t zf86;
    int1_t zf87;
    void** edx88;
    void** ebx89;
    void** eax90;
    int32_t edx91;
    int32_t eax92;
    void** ebx93;
    void** edx94;
    void* eax95;
    void** ebx96;
    void** ecx97;
    void** ebx98;
    void** edx99;
    int1_t zf100;
    void** edx101;
    void** eax102;
    void** edx103;
    void** ecx104;
    int32_t edx105;
    struct s855* eax106;
    struct s855* edx107;
    void** eax108;
    void** eax109;

    v48 = reinterpret_cast<void**>(__return_address());
    v49 = ebx50;
    v51 = ecx;
    v52 = edx53;
    v54 = esi55;
    v56 = edi57;
    v58 = ebp59;
    eax60 = fun_43c1e0(ecx);
    ebx61 = g481608;
    eax62 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax60) / reinterpret_cast<signed char>(ebx61));
    esi63 = reinterpret_cast<void**>(0x7fffffff);
    ecx64 = g481814;
    edi65 = 0;
    ebp66 = eax62;
    g481814 = eax62;
    fun_413f10(ecx64, v58, v56, v54, v52, v51, v49, v48, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40);
    ebx67 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax62) - reinterpret_cast<unsigned char>(ecx64));
    eax68 = 0;
    while (edx69 = g48160c, edi65 < static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(edx69 + 12)))) {
        if (*reinterpret_cast<int32_t*>(eax68 + 0x4813c8) && reinterpret_cast<signed char>(esi63) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax68 + 0x4813e8))) {
            esi63 = *reinterpret_cast<void***>(eax68 + 0x4813e8);
        }
        eax68 = eax68 + 4;
        ++edi65;
    }
    edx70 = g482a44;
    edi71 = g481608;
    eax72 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi63) - reinterpret_cast<signed char>(edx70) / reinterpret_cast<signed char>(edi71));
    if (reinterpret_cast<signed char>(ebx67) >= reinterpret_cast<signed char>(eax72 + 0xffffffff)) {
        if (reinterpret_cast<signed char>(ebx67) >= reinterpret_cast<signed char>(eax72)) {
            edi73 = eax72;
        } else {
            edi73 = ebx67;
        }
    } else {
        edi73 = ebx67 + 1;
    }
    if (reinterpret_cast<signed char>(edi73) < reinterpret_cast<signed char>(1)) {
        edi73 = reinterpret_cast<void**>(1);
    }
    edx74 = g4815ec;
    ecx75 = g481244;
    g4815ec = edx74 + 1;
    if (ecx75) {
        fun_442b98(ecx75, ecx75, "=======real: %i  avail: %i  game: %i\n", ebx67, eax72, ecx75, ecx75, "=======real: %i  avail: %i  game: %i\n", ebx67, eax72);
    }
    edx76 = g482a64;
    if (!edx76) {
        ebx77 = g482978;
        eax78 = 0;
        if (!ebx77) {
            do {
                eax78 = eax78 + 4;
                ++edx76;
                if (eax78 >= 16) 
                    break;
            } while (!*reinterpret_cast<int32_t*>(eax78 + 0x482978));
        }
        zf79 = edx76 == g482a7c;
        if (!zf79) {
            ebx80 = g4813e8;
            if (ebx80 <= *reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx76) * 4 + 0x481310) * 4 + 0x4813e8)) {
                g4815f0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(g4815f0) - 1);
            }
            eax81 = g4815e8;
            edx82 = 0;
            *reinterpret_cast<unsigned char*>(&edx82) = reinterpret_cast<uint1_t>(eax81 > *reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx76) * 4 + 0x481310) * 4 + 0x4813e8));
            eax83 = g4815ec;
            *reinterpret_cast<int32_t*>((eax83 & 3) * 4 + 0x481290) = edx82;
            eax84 = g4813e8;
            ecx75 = g481290;
            g4815e8 = eax84;
            if (ecx75 && ((zf85 = g481294 == 0, !zf85) && ((zf86 = g481298 == 0, !zf86) && (zf87 = g48129c == 0, !zf87)))) {
                g481600 = reinterpret_cast<void**>(1);
            }
        }
    }
    do {
        edx88 = g482a44;
        ebx89 = g481608;
        eax90 = reinterpret_cast<void**>(reinterpret_cast<signed char>(edx88) / reinterpret_cast<signed char>(ebx89) + reinterpret_cast<unsigned char>(edi73));
        if (reinterpret_cast<signed char>(esi63) >= reinterpret_cast<signed char>(eax90)) 
            break;
        fun_413f10(ecx75, v58, v56, v54, v52, v51, v49, v48, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40);
        esi63 = reinterpret_cast<void**>(0x7fffffff);
        edx91 = 0;
        eax92 = 0;
        while (ebx93 = g48160c, edx91 < static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ebx93 + 12)))) {
            if (*reinterpret_cast<int32_t*>(eax92 + 0x4813c8) && reinterpret_cast<signed char>(esi63) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax92 + 0x4813e8))) {
                esi63 = *reinterpret_cast<void***>(eax92 + 0x4813e8);
            }
            eax92 = eax92 + 4;
            ++edx91;
        }
        edx94 = g482a44;
        ecx75 = g481608;
        if (reinterpret_cast<signed char>(esi63) < reinterpret_cast<signed char>(reinterpret_cast<signed char>(edx94) / reinterpret_cast<signed char>(ecx75))) {
            fun_43bd40(ecx75, "TryRunTics: lowtic < gametic", v58, v56);
        }
        eax95 = fun_43c1e0(ecx75);
        ebx96 = g481608;
    } while (reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(eax95) / reinterpret_cast<signed char>(ebx96) - reinterpret_cast<unsigned char>(ebp66)) < reinterpret_cast<int32_t>(20));
    goto addr_41484c_33;
    while (--edi73, edi73 != 0xffffffff) {
        ecx97 = g481608;
        ebx98 = reinterpret_cast<void**>(0);
        if (reinterpret_cast<signed char>(0) < reinterpret_cast<signed char>(ecx97)) {
            do {
                edx99 = g482a44;
                ecx97 = g481608;
                if (reinterpret_cast<signed char>(reinterpret_cast<signed char>(edx99) / reinterpret_cast<signed char>(ecx97)) > reinterpret_cast<signed char>(esi63)) {
                    fun_43bd40(ecx97, "gametic>lowtic", v58, v56);
                }
                zf100 = g48122c == 0;
                if (!zf100) {
                    fun_4124a0(ecx97, v58, v56, v54, v52, v51, v49, v48, a2, a3, a4, a5);
                }
                fun_41d260();
                fun_416e20(ecx97, v58, v56, v54, v52, v51, v49, v48, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47);
                edx101 = g482a44;
                eax102 = g481608;
                edx103 = edx101 + 1;
                g482a44 = edx103;
                if (ebx98 != eax102 - 1) {
                    ecx104 = g481608;
                    ecx97 = reinterpret_cast<void**>(12);
                    edx105 = reinterpret_cast<signed char>(edx103) / reinterpret_cast<signed char>(ecx104) % reinterpret_cast<signed char>(12) * 8;
                    eax106 = reinterpret_cast<struct s855*>(edx105 + 0x481408);
                    edx107 = reinterpret_cast<struct s855*>(edx105 + 0x180 + 0x481408);
                    *reinterpret_cast<unsigned char*>(&ecx97) = 0;
                    do {
                        eax106->f6 = 0;
                        if (eax106->f7 & 0x80) {
                            eax106->f7 = 0;
                        }
                        eax106 = eax106 + 12;
                    } while (eax106 != edx107);
                }
                eax108 = g481608;
                ++ebx98;
            } while (reinterpret_cast<signed char>(ebx98) < reinterpret_cast<signed char>(eax108));
        }
        eax90 = fun_413f10(ecx97, v58, v56, v54, v52, v51, v49, v48, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40);
    }
    return eax90;
    addr_41484c_33:
    eax109 = fun_41d260();
    return eax109;
}

struct s857 {
    signed char[12] pad12;
    int32_t fc;
    void** f10;
    signed char[3] pad20;
    void** f14;
};

struct s856 {
    struct s857* f0;
    void** f4;
};

void** fun_4312f0(void** ecx) {
    void*** esp2;
    void** v3;
    void** eax4;
    void** edx5;
    void** ebp6;
    void* edi7;
    void** esi8;
    struct s856* esi9;
    struct s857* edx10;
    void** eax11;
    void** edx12;
    int32_t* edx13;
    void** eax14;
    void** v15;
    void** esi16;
    int32_t* esi17;
    void** edx18;
    void** esi19;
    int32_t* esi20;
    void** ebx21;

    esp2 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 20);
    v3 = eax4;
    edx5 = g5f1364;
    ebp6 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx5) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx5 == 0))) {
        edi7 = reinterpret_cast<void*>(0);
        do {
            esi8 = g5f22cc;
            esi9 = reinterpret_cast<struct s856*>(reinterpret_cast<unsigned char>(esi8) + reinterpret_cast<uint32_t>(edi7));
            edx10 = esi9->f0;
            if (edx10) {
                eax11 = fun_41af00(ecx);
                esp2 = esp2 - 4 + 4;
                if (!eax11) {
                    edx12 = g5f22cc;
                    edx13 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx12) + reinterpret_cast<uint32_t>(edi7));
                    if (*edx13) {
                        eax11 = fun_41af00(ecx);
                        esp2 = esp2 - 4 + 4;
                        if (eax11) {
                            eax11 = fun_41aea0(ecx);
                            esp2 = esp2 - 4 + 4;
                        }
                        *edx13 = 0;
                    }
                } else {
                    eax14 = g5f1368;
                    eax11 = reinterpret_cast<void**>(0x80);
                    v15 = reinterpret_cast<void**>(0x80);
                    if (!edx10->fc) {
                        addr_4313a6_10:
                        if (esi9->f4 && (eax11 = v3, eax11 != esi9->f4)) {
                            ecx = reinterpret_cast<void**>(esp2 + 4);
                            eax11 = fun_430d90(ecx, esp2);
                            esp2 = esp2 - 4 - 4 + 4 + 4;
                            if (eax11) {
                                ecx = v15;
                                eax11 = fun_41af80(ecx);
                                esp2 = esp2 - 4 + 4;
                            } else {
                                esi16 = g5f22cc;
                                esi17 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi16) + reinterpret_cast<uint32_t>(edi7));
                                if (*esi17) {
                                    eax11 = fun_41af00(ecx);
                                    esp2 = esp2 - 4 + 4;
                                    if (eax11) {
                                        eax11 = fun_41aea0(ecx);
                                        esp2 = esp2 - 4 + 4;
                                    }
                                    *esi17 = 0;
                                }
                            }
                        }
                    } else {
                        v15 = edx10->f10;
                        eax11 = edx10->f14;
                        edx18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax14) + reinterpret_cast<unsigned char>(eax11));
                        if (reinterpret_cast<signed char>(edx18) >= reinterpret_cast<signed char>(1)) {
                            ecx = g5f1368;
                            if (reinterpret_cast<signed char>(edx18) > reinterpret_cast<signed char>(ecx)) {
                                goto addr_4313a6_10;
                            }
                        } else {
                            esi19 = g5f22cc;
                            esi20 = reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi19) + reinterpret_cast<uint32_t>(edi7));
                            if (*esi20) {
                                eax11 = fun_41af00(ecx);
                                esp2 = esp2 - 4 + 4;
                                if (eax11) {
                                    eax11 = fun_41aea0(ecx);
                                    esp2 = esp2 - 4 + 4;
                                }
                                *esi20 = 0;
                            }
                        }
                    }
                }
            }
            ebx21 = g5f1364;
            ++ebp6;
            edi7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi7) + 12);
        } while (reinterpret_cast<signed char>(ebp6) < reinterpret_cast<signed char>(ebx21));
    }
    return eax11;
}

void** g4597f4 = reinterpret_cast<void**>(0xff);

void** g48127c = reinterpret_cast<void**>(0xf7);

int32_t g4597e0 = 0;

void** g4597e4 = reinterpret_cast<void**>(0);

void** g4597e8 = reinterpret_cast<void**>(0);

void** g4597ec = reinterpret_cast<void**>(0);

uint32_t g4597f0 = 0;

void fun_411dc0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40) {
    void** v41;
    void** v42;
    void** ebx43;
    void** v44;
    void** v45;
    void** edx46;
    void** v47;
    void** esi48;
    void** v49;
    void** edi50;
    void** v51;
    void** ebp52;
    int1_t zf53;
    int32_t ebx54;
    int1_t zf55;
    void** ecx56;
    void** eax57;
    int1_t zf58;
    int1_t zf59;
    int1_t zf60;
    void** eax61;
    int1_t zf62;
    int32_t edi63;
    int1_t zf64;
    int1_t zf65;
    void** eax66;
    int1_t zf67;
    int1_t zf68;
    int1_t zf69;
    int1_t zf70;
    int1_t zf71;
    void** eax72;
    int1_t zf73;
    void** ebp74;
    int1_t zf75;
    int1_t zf76;
    int1_t zf77;
    void** eax78;
    int1_t zf79;
    int1_t zf80;
    int1_t zf81;
    void** eax82;
    void** eax83;
    void** eax84;
    void** eax85;
    void** ebp86;
    int1_t zf87;
    int1_t zf88;
    void** eax89;
    void** eax90;
    void** ebx91;
    int1_t zf92;
    int1_t zf93;
    int1_t zf94;
    int1_t zf95;
    void** ecx96;
    void** ecx97;
    void* eax98;
    void* esi99;
    void* eax100;
    void* edx101;
    void** ecx102;
    uint32_t eax103;
    int1_t zf104;
    int1_t zf105;
    void** eax106;
    int1_t zf107;
    int1_t zf108;
    int1_t zf109;
    int1_t zf110;
    void** eax111;
    uint1_t zf112;
    void** eax113;

    v41 = reinterpret_cast<void**>(__return_address());
    v42 = ebx43;
    v44 = ecx;
    v45 = edx46;
    v47 = esi48;
    v49 = edi50;
    v51 = ebp52;
    zf53 = g482a38 == 0;
    if (!zf53) {
        addr_4122d2_2:
        return;
    } else {
        ebx54 = g491b70;
        if (ebx54) {
            fun_42de80(ecx, v51, v49, v47, v45, v44, v42, v41, a2, a3, a4, a5, a6, a7, a8, a9);
            g4597f4 = reinterpret_cast<void**>(0xffffffff);
            g48127c = reinterpret_cast<void**>(3);
        }
        zf55 = g4597e0 == 0;
        if (!zf55) {
            g4597e0 = 0;
            g4597f4 = reinterpret_cast<void**>(0xffffffff);
            g48127c = reinterpret_cast<void**>(3);
        }
        ecx56 = g482a68;
        if ((ecx56 == 1 || (ecx56 == 2 || reinterpret_cast<int1_t>(ecx56 == 3))) && (eax57 = g482a68, zf58 = eax57 == g4597f4, !zf58)) {
            zf59 = reinterpret_cast<int1_t>(g4775d4 == 0xf0);
            if (zf59) {
                fun_442b80(ecx56, v51, v49, v47, v45, v44);
                fun_442b80(ecx56, v51, v49, v47, v45, v44);
            }
            zf60 = reinterpret_cast<int1_t>(g4775d4 == 0x1e0);
            if (zf60) {
                fun_442b80(ecx56, v51, v49, v47, v45, v44);
                fun_442b80(ecx56, v51, v49, v47, v45, v44);
            }
        }
        eax61 = g482a68;
        zf62 = eax61 == g4597dc;
        if (zf62) {
            edi63 = 0;
        } else {
            ecx56 = g4775d4;
            edi63 = 1;
            fun_4153a0(ecx56, v51, v49, v47, v45, v44, v42);
        }
        zf64 = g482a68 == 0;
        if (zf64 && (zf65 = g482a44 == 0, !zf65)) {
            fun_418ff0(ecx56);
        }
        eax66 = g482a68;
        if (reinterpret_cast<unsigned char>(eax66) <= reinterpret_cast<unsigned char>(3)) 
            goto addr_411f72_18;
    }
    addr_41202b_19:
    fun_43c5a0(ecx56, v51, v49);
    zf67 = g482a68 == 0;
    if (zf67 && ((zf68 = g45973c == 0, zf68) && (zf69 = g482a44 == 0, !zf69))) {
        fun_42e450(ecx56, v51, v49, v47, v45, v44, v42, v41, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37);
    }
    zf70 = g482a68 == 0;
    if (zf70 && (zf71 = g482a44 == 0, !zf71)) {
        fun_418f70(ecx56);
    }
    eax72 = g482a68;
    zf73 = eax72 == g4597f4;
    if (!zf73 && eax72) {
        fun_42ce70(ecx56, v51);
        fun_43c290(ecx56, v51);
    }
    ebp74 = g482a68;
    if (!ebp74 && (zf75 = g4597f4 == 0, !zf75)) {
        g4597e4 = ebp74;
        fun_43eed0(ecx56, v51, v49, v47, v45, v44, v42, v41, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }
    zf76 = g482a68 == 0;
    if (!zf76 || ((zf77 = g45973c == 0, !zf77) || (eax78 = g48ae94, zf79 = eax78 == g4775d0, zf79))) {
        zf80 = g482a68 == 0;
        if (!zf80 || (zf81 = g48127c == 0, zf81)) {
            addr_412182_29:
            eax82 = g4835cc;
            g4597e8 = eax82;
            eax83 = g482a2c;
            g4597e4 = eax83;
            eax84 = g483590;
            g4597ec = eax84;
            eax85 = g482a68;
            ebp86 = g482a88;
            g4597dc = eax85;
            g4597f4 = eax85;
            if (ebp86) {
                zf87 = g45973c == 0;
                if (zf87) {
                }
                zf88 = reinterpret_cast<int1_t>(g4775d0 == 0x140);
                if (!zf88) {
                    eax89 = fun_434890(ecx56, v51, v49);
                    ecx56 = eax89;
                } else {
                    eax90 = fun_434890(ecx56, v51, v49);
                    ecx56 = eax90;
                }
                fun_433eb0(ecx56, v51, v49, v47);
            }
        } else {
            fun_43f680(ecx56);
            ebx91 = g48127c;
            ecx56 = g4775d4;
            g48127c = ebx91 - 1;
            goto addr_412175_38;
        }
    } else {
        zf92 = g4835cc == 0;
        if (!zf92 || ((zf93 = g4597e8 == 0, !zf93) || (zf94 = g4597e4 == 0, zf94))) {
            g48127c = reinterpret_cast<void**>(3);
        }
        zf95 = g48127c == 0;
        if (zf95) 
            goto addr_412182_29;
        fun_43f680(ecx56);
        ecx96 = g48127c;
        ecx56 = ecx96 - 1;
        g48127c = ecx56;
        goto addr_412175_38;
    }
    fun_41cfe0(ecx56);
    fun_413f10(ecx56, v51, v49, v47, v45, v44, v42, v41, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40);
    if (edi63) {
        ecx97 = g4775d4;
        fun_4153c0(ecx97, v51, v49);
        eax98 = fun_43c1e0(ecx97);
        esi99 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax98) + 0xffffffff);
        addr_412294_45:
        eax100 = fun_43c1e0(ecx97);
        edx101 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax100) - reinterpret_cast<uint32_t>(esi99));
        if (!edx101) 
            goto addr_412294_45;
        ecx102 = g4775d4;
        esi99 = eax100;
        ecx97 = g4775d0;
        eax103 = fun_4154e0(ecx97, ecx102, edx101);
        fun_43c5a0(ecx97, v51, v49);
        fun_41cfe0(ecx97);
        fun_43c6e0(ecx97, v51, v49, v47, v45, v44, v42, v41, a2);
        if (!eax103) 
            goto addr_412294_45; else 
            goto addr_4122d2_2;
    } else {
        fun_43c6e0(ecx56, v51, v49, v47, v45, v44, v42, v41, a2);
        goto addr_4122d2_2;
    }
    addr_412175_38:
    fun_432f60(ecx56);
    goto addr_412182_29;
    addr_411f72_18:
    switch (eax66) {
    case 0:
        zf104 = g482a44 == 0;
        if (!zf104) {
            zf105 = g45973c == 0;
            if (!zf105) {
                fun_411b50(ecx56, v51);
            }
            if (edi63 || (eax106 = g48ae98, zf107 = eax106 == g4775d4, !zf107) && (zf108 = g4597f0 == 0, !zf108)) {
            }
            zf109 = g4597ec == 0;
            if (!zf109 && (zf110 = g483590 == 0, zf110)) {
            }
            fun_432f60(ecx56);
            eax111 = g48ae98;
            zf112 = reinterpret_cast<uint1_t>(eax111 == g4775d4);
            *reinterpret_cast<unsigned char*>(&eax111) = zf112;
            g4597f0 = reinterpret_cast<unsigned char>(eax111) & 0xff;
            goto addr_41202b_19;
        }
    case 1:
        fun_437030(ecx56);
        goto addr_41202b_19;
    case 2:
        fun_416580(ecx56);
        goto addr_41202b_19;
    case 3:
        eax113 = fun_434890(ecx56, v51, v49);
        ecx56 = eax113;
        fun_433a50(ecx56, v51, v49, *reinterpret_cast<signed char*>(&v47));
        goto addr_41202b_19;
    }
}

int32_t GlobalAlloc = 0x220760;

int32_t fun_43d320(void** ecx) {
    int32_t edx2;

    GlobalAlloc();
    goto edx2;
}

void** fun_43d2c0(void** ecx) {
    void** v2;
    void*** edi3;
    void*** eax4;
    void** ebx5;
    int32_t eax6;

    v2 = ecx;
    edi3 = eax4;
    ebx5 = reinterpret_cast<void**>(0x820000);
    do {
        ebx5 = ebx5 - 0x20000;
        eax6 = reinterpret_cast<int32_t>(GlobalAlloc());
        if (eax6) 
            break;
    } while (ebx5);
    if (reinterpret_cast<signed char>(ebx5) < reinterpret_cast<signed char>(0x180000)) {
        fun_43bd40(ecx, "Insufficient Memory to run Doom95!", 64, ebx5, ecx, "Insufficient Memory to run Doom95!", 64, ebx5);
    }
    *edi3 = ebx5;
    goto v2;
}

struct s858 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
};

struct s859 {
    int32_t f0;
    signed char[4] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
};

struct s860 {
    void** f0;
    signed char[11] pad12;
    void** fc;
    signed char[1] pad14;
    void** fe;
    signed char[5] pad20;
    int16_t f14;
    int16_t f16;
};

struct s861 {
    int16_t f0;
    int16_t f2;
    int16_t f4;
};

struct s862 {
    int32_t f0;
    signed char[4] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
};

void fun_42c070(void** ecx) {
    void** v2;
    void** v3;
    int32_t v4;
    int32_t v5;
    void** eax6;
    void** edx7;
    void** v8;
    unsigned char* edx9;
    unsigned char* eax10;
    void*** esp11;
    void*** eax12;
    void*** v13;
    void** ecx14;
    void*** edi15;
    struct s858* esp16;
    struct s858* esp17;
    void** eax18;
    struct s858* esp19;
    struct s858* esp20;
    void** eax21;
    void** v22;
    void** v23;
    struct s858* esp24;
    struct s858* esp25;
    void** eax26;
    void** v27;
    void** v28;
    struct s858* esp29;
    void** eax30;
    void*** esp31;
    void** edx32;
    void** v33;
    void** v34;
    struct s858* esp35;
    void** eax36;
    struct s858* esp37;
    struct s858* esp38;
    void** eax39;
    struct s858* esp40;
    void** eax41;
    struct s858* esp42;
    void** eax43;
    struct s858* esp44;
    void** eax45;
    struct s858* esp46;
    void** eax47;
    struct s858* esp48;
    void** eax49;
    struct s858* esp50;
    void** eax51;
    struct s858* esp52;
    void** eax53;
    struct s858* esp54;
    struct s858* esp55;
    struct s858* esp56;
    void*** esp57;
    void** eax58;
    void** v59;
    void** v60;
    void** v61;
    struct s858* esp62;
    void** ebx63;
    struct s858* esp64;
    struct s859* esp65;
    struct s860* v66;
    struct s858* esp67;
    void** eax68;
    void** ebx69;
    void** v70;
    void** edi71;
    struct s386* ebx72;
    struct s860* esi73;
    struct s858* esp74;
    void** ecx75;
    void*** esp76;
    int32_t edi77;
    struct s861* esi78;
    void** eax79;
    struct s858* esp80;
    struct s859* esp81;
    struct s862* esp82;
    struct s858* esp83;
    void** eax84;
    void** ebx85;
    struct s858* esp86;
    void** eax87;
    void** ebx88;
    int32_t eax89;
    int32_t ebx90;
    void** ebx91;
    void** edi92;
    void** ebx93;
    void** edx94;
    struct s858* esp95;
    void*** esp96;
    struct s858* esp97;
    void** ecx98;
    void** ebx99;
    struct s858* esp100;
    struct s858* esp101;
    void** eax102;
    void** esi103;
    void** eax104;
    void* ebx105;
    void** ecx106;
    void** edi107;

    eax6 = fun_434890(ecx, v2, v3, ecx, v4, v5);
    edx7 = *reinterpret_cast<void***>(eax6);
    v8 = edx7;
    edx9 = reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(edx7) * 4 + 3);
    *reinterpret_cast<unsigned char*>(&edx9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx9) & 0xfc);
    eax10 = fun_444203();
    esp11 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 72 - 4 + 4 - 4 + 4);
    if (reinterpret_cast<uint32_t>(edx9) >= reinterpret_cast<uint32_t>(eax10)) {
        eax12 = reinterpret_cast<void***>(0);
    } else {
        esp11 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esp11) - reinterpret_cast<uint32_t>(edx9));
        eax12 = esp11;
    }
    v13 = eax12;
    ecx14 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v8) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v8 == 0))) {
        edi15 = eax12;
        do {
            esp16 = reinterpret_cast<struct s858*>(esp11 - 4);
            esp16->f0 = reinterpret_cast<void**>(0x42c0d9);
            fun_4439f9(ecx14);
            edi15 = edi15 + 4;
            ++ecx14;
            esp17 = reinterpret_cast<struct s858*>(&esp16->f4 - 4);
            esp17->f0 = reinterpret_cast<void**>(0x42c0e8);
            eax18 = fun_434640(ecx14);
            esp11 = &esp17->f4;
            *(edi15 - 4) = eax18;
        } while (reinterpret_cast<signed char>(ecx14) < reinterpret_cast<signed char>(v8));
    }
    esp19 = reinterpret_cast<struct s858*>(esp11 - 4);
    esp19->f0 = reinterpret_cast<void**>(0x42c0ff);
    fun_437550(ecx14);
    esp20 = reinterpret_cast<struct s858*>(&esp19->f4 - 4);
    esp20->f0 = reinterpret_cast<void**>(0x42c109);
    eax21 = fun_434890(ecx14, esp20->f4, esp20->f8);
    v22 = eax21;
    v23 = *reinterpret_cast<void***>(eax21);
    esp24 = reinterpret_cast<struct s858*>(&esp20->f4 - 4);
    esp24->f0 = reinterpret_cast<void**>(0x42c123);
    fun_4346d0(ecx14, esp24->f4, esp24->f8);
    esp25 = reinterpret_cast<struct s858*>(&esp24->f4 - 4);
    esp25->f0 = reinterpret_cast<void**>(0x42c128);
    eax26 = fun_434700(ecx14);
    v27 = eax26;
    v28 = eax21 + 4;
    esp29 = reinterpret_cast<struct s858*>(&esp25->f4 - 4);
    esp29->f0 = reinterpret_cast<void**>(0x42c138);
    eax30 = fun_434640(ecx14);
    esp31 = &esp29->f4;
    if (eax30 == 0xffffffff) {
        ecx14 = reinterpret_cast<void**>(0);
        edx32 = reinterpret_cast<void**>(0);
        v33 = reinterpret_cast<void**>(0);
        v34 = reinterpret_cast<void**>(0);
    } else {
        esp35 = reinterpret_cast<struct s858*>(esp31 - 4);
        esp35->f0 = reinterpret_cast<void**>(0x42c14c);
        eax36 = fun_434890(ecx14, esp35->f4, esp35->f8);
        v33 = eax36;
        edx32 = *reinterpret_cast<void***>(eax36);
        esp37 = reinterpret_cast<struct s858*>(&esp35->f4 - 4);
        esp37->f0 = reinterpret_cast<void**>(0x42c15b);
        fun_4346d0(ecx14, esp37->f4, esp37->f8);
        esp38 = reinterpret_cast<struct s858*>(&esp37->f4 - 4);
        esp38->f0 = reinterpret_cast<void**>(0x42c160);
        eax39 = fun_434700(ecx14);
        esp31 = &esp38->f4;
        v34 = eax39;
    }
    g487f80 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v23) + reinterpret_cast<unsigned char>(edx32));
    esp40 = reinterpret_cast<struct s858*>(esp31 - 4);
    esp40->f0 = reinterpret_cast<void**>(0x42c18c);
    eax41 = fun_4375e0(ecx14, esp40->f4, esp40->f8);
    g487f6c = eax41;
    esp42 = reinterpret_cast<struct s858*>(&esp40->f4 - 4);
    esp42->f0 = reinterpret_cast<void**>(0x42c1a9);
    eax43 = fun_4375e0(ecx14, esp42->f4, esp42->f8);
    g487f7c = eax43;
    esp44 = reinterpret_cast<struct s858*>(&esp42->f4 - 4);
    esp44->f0 = reinterpret_cast<void**>(0x42c1c6);
    eax45 = fun_4375e0(ecx14, esp44->f4, esp44->f8);
    g487f84 = eax45;
    esp46 = reinterpret_cast<struct s858*>(&esp44->f4 - 4);
    esp46->f0 = reinterpret_cast<void**>(0x42c1e3);
    eax47 = fun_4375e0(ecx14, esp46->f4, esp46->f8);
    g487f90 = eax47;
    esp48 = reinterpret_cast<struct s858*>(&esp46->f4 - 4);
    esp48->f0 = reinterpret_cast<void**>(0x42c200);
    eax49 = fun_4375e0(ecx14, esp48->f4, esp48->f8);
    g487f88 = eax49;
    esp50 = reinterpret_cast<struct s858*>(&esp48->f4 - 4);
    esp50->f0 = reinterpret_cast<void**>(0x42c21d);
    eax51 = fun_4375e0(ecx14, esp50->f4, esp50->f8);
    g487f74 = eax51;
    esp52 = reinterpret_cast<struct s858*>(&esp50->f4 - 4);
    esp52->f0 = reinterpret_cast<void**>(0x42c23a);
    eax53 = fun_4375e0(ecx14, esp52->f4, esp52->f8);
    g487fa0 = eax53;
    esp54 = reinterpret_cast<struct s858*>(&esp52->f4 - 4);
    esp54->f0 = reinterpret_cast<void**>(0x42c249);
    fun_4346d0(ecx14, esp54->f4, esp54->f8);
    esp55 = reinterpret_cast<struct s858*>(&esp54->f4 - 4);
    esp55->f0 = reinterpret_cast<void**>(0x42c255);
    fun_4346d0(ecx14, esp55->f4, esp55->f8);
    esp56 = reinterpret_cast<struct s858*>(&esp55->f4 - 4);
    esp56->f0 = reinterpret_cast<void**>(0x42c28c);
    fun_440920(ecx14);
    esp57 = &esp56->f4;
    eax58 = g487f80;
    v59 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax58) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax58 == 0))) {
        v60 = reinterpret_cast<void**>(0);
        v61 = v33 + 4;
        do {
            if (!(*reinterpret_cast<unsigned char*>(&v59) & 63)) {
                esp62 = reinterpret_cast<struct s858*>(esp57 - 4);
                esp62->f0 = reinterpret_cast<void**>(0x42c2b3);
                fun_440950(ecx14);
                esp57 = &esp62->f4;
            }
            if (v59 == v23) {
                v22 = v33;
                v27 = v34;
                v28 = v61;
            }
            ebx63 = *reinterpret_cast<void***>(v28);
            if (reinterpret_cast<signed char>(ebx63) > reinterpret_cast<signed char>(v27)) {
                esp64 = reinterpret_cast<struct s858*>(esp57 - 4);
                esp64->f0 = reinterpret_cast<void**>("R_InitTextures: bad texture directory");
                esp65 = reinterpret_cast<struct s859*>(reinterpret_cast<uint32_t>(esp64) - 4);
                esp65->f0 = 0x42c2e3;
                fun_43bd40(ecx14, "R_InitTextures: bad texture directory", esp65->f8, esp65->fc);
                esp57 = reinterpret_cast<void***>(&esp65->pad8 + 1);
            }
            v66 = reinterpret_cast<struct s860*>(reinterpret_cast<unsigned char>(v22) + reinterpret_cast<unsigned char>(ebx63));
            esp67 = reinterpret_cast<struct s858*>(esp57 - 4);
            esp67->f0 = reinterpret_cast<void**>(0x42c305);
            eax68 = fun_4375e0(ecx14, esp67->f4, esp67->f8);
            ebx69 = g487f6c;
            v70 = eax68;
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ebx69) + reinterpret_cast<unsigned char>(v60)) = eax68;
            *reinterpret_cast<void***>(eax68 + 8) = v66->fc;
            *reinterpret_cast<void***>(eax68 + 10) = v66->fe;
            edi71 = eax68;
            ebx72 = reinterpret_cast<struct s386*>(eax68 + 14);
            esi73 = v66;
            *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(ebx72) - 2) = v66->f14;
            esp74 = reinterpret_cast<struct s858*>(&esp67->f4 - 4);
            esp74->f0 = edi71;
            ecx75 = reinterpret_cast<void**>(2);
            do {
                if (!ecx75) 
                    break;
                --ecx75;
                *reinterpret_cast<void***>(edi71) = esi73->f0;
                edi71 = edi71 + 4;
                esi73 = reinterpret_cast<struct s860*>(reinterpret_cast<uint32_t>(esi73) + 4);
            } while (1);
            *reinterpret_cast<unsigned char*>(&ecx75) = 0;
            do {
                if (!ecx75) 
                    break;
                --ecx75;
                *reinterpret_cast<void***>(edi71) = esi73->f0;
                ++edi71;
                esi73 = reinterpret_cast<struct s860*>(&esi73->pad12);
            } while (0);
            esp76 = &esp74->f4;
            edi77 = 0;
            esi78 = reinterpret_cast<struct s861*>(&v66->f16);
            while (edi77 < static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v70 + 12)))) {
                ebx72->f0 = reinterpret_cast<void**>(static_cast<int32_t>(esi78->f0));
                ebx72->f4 = reinterpret_cast<void**>(static_cast<int32_t>(esi78->f2));
                eax79 = v13[esi78->f4 * 4];
                ebx72->f8 = eax79;
                if (reinterpret_cast<int1_t>(eax79 == 0xffffffff)) {
                    esp80 = reinterpret_cast<struct s858*>(esp76 - 4);
                    esp80->f0 = v70;
                    esp81 = reinterpret_cast<struct s859*>(reinterpret_cast<uint32_t>(esp80) - 4);
                    esp81->f0 = reinterpret_cast<int32_t>("R_InitTextures: Missing patch in texture %s");
                    esp82 = reinterpret_cast<struct s862*>(reinterpret_cast<uint32_t>(esp81) - 4);
                    esp82->f0 = 0x42c393;
                    fun_43bd40(ecx75, "R_InitTextures: Missing patch in texture %s", esp82->f8, esp82->fc);
                    esp76 = reinterpret_cast<void***>(&esp82->pad8 + 2);
                }
                ++edi77;
                esi78 = reinterpret_cast<struct s861*>(reinterpret_cast<uint32_t>(esi78) + 10);
                ebx72 = reinterpret_cast<struct s386*>(reinterpret_cast<uint32_t>(ebx72) + 12);
            }
            esp83 = reinterpret_cast<struct s858*>(esp76 - 4);
            esp83->f0 = reinterpret_cast<void**>(0x42c3bd);
            eax84 = fun_4375e0(ecx75, esp83->f4, esp83->f8);
            ebx85 = g487f7c;
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ebx85) + reinterpret_cast<unsigned char>(v60)) = eax84;
            ecx14 = v60;
            esp86 = reinterpret_cast<struct s858*>(&esp83->f4 - 4);
            esp86->f0 = reinterpret_cast<void**>(0x42c3e2);
            eax87 = fun_4375e0(ecx14, esp86->f4, esp86->f8);
            esp57 = &esp86->f4;
            ebx88 = g487f84;
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ebx88) + reinterpret_cast<unsigned char>(ecx14)) = eax87;
            eax89 = 1;
            while (ebx90 = eax89 * 2, ebx90 <= static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v70 + 8)))) {
                eax89 = ebx90;
            }
            ebx91 = g487f74;
            edi92 = v59 + 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx91) + reinterpret_cast<unsigned char>(v60)) = eax89 - 1;
            v59 = edi92;
            ebx93 = g487fa0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx93) + reinterpret_cast<unsigned char>(v60)) = static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v70 + 10))) << 16;
            edx94 = g487f80;
            v60 = v60 + 4;
            v28 = v28 + 4;
        } while (reinterpret_cast<signed char>(edi92) < reinterpret_cast<signed char>(edx94));
    }
    esp95 = reinterpret_cast<struct s858*>(esp57 - 4);
    esp95->f0 = reinterpret_cast<void**>(0x42c458);
    fun_437550(ecx14);
    esp96 = &esp95->f4;
    if (v33) {
        esp97 = reinterpret_cast<struct s858*>(esp96 - 4);
        esp97->f0 = reinterpret_cast<void**>(0x42c463);
        fun_437550(ecx14);
        esp96 = &esp97->f4;
    }
    ecx98 = g487f80;
    ebx99 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx98) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx98 == 0))) {
        do {
            esp100 = reinterpret_cast<struct s858*>(esp96 - 4);
            esp100->f0 = reinterpret_cast<void**>(0x42c476);
            fun_42bde0(ecx98);
            esp96 = &esp100->f4;
            ecx98 = g487f80;
            ++ebx99;
        } while (reinterpret_cast<signed char>(ebx99) < reinterpret_cast<signed char>(ecx98));
    }
    esp101 = reinterpret_cast<struct s858*>(esp96 - 4);
    esp101->f0 = reinterpret_cast<void**>(0x42c49a);
    eax102 = fun_4375e0(ecx98, esp101->f4, esp101->f8);
    esi103 = g487f80;
    g487fbc = eax102;
    eax104 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi103) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi103 == 0))) {
        ebx105 = reinterpret_cast<void*>(0);
        do {
            ecx106 = g487fbc;
            edi107 = g487f80;
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx106) + reinterpret_cast<uint32_t>(ebx105)) = eax104;
            ++eax104;
            ebx105 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx105) + 4);
        } while (reinterpret_cast<signed char>(eax104) < reinterpret_cast<signed char>(edi107));
    }
    return;
}

void** g487f64 = reinterpret_cast<void**>(60);

void fun_42c4d0(void** ecx) {
    void** v2;
    void** edx3;
    void** ecx4;
    void** esi5;
    void** eax6;
    void** eax7;
    void** eax8;
    void** edx9;
    void** ecx10;
    void** eax11;
    void** ecx12;
    void** esi13;
    void** eax14;
    void** ebx15;
    void* edx16;

    v2 = edx3;
    ecx4 = g487f8c;
    eax6 = fun_4346d0(ecx4, esi5, v2);
    g487f94 = eax6 + 1;
    eax7 = fun_4346d0(ecx4, esi5, v2);
    eax8 = eax7 - 1;
    edx9 = g487f94;
    g487f64 = eax8;
    ecx10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8) - reinterpret_cast<unsigned char>(edx9) + 1);
    g487f8c = ecx10;
    eax11 = fun_4375e0(ecx10, esi5, v2);
    ecx12 = g487f8c;
    esi13 = eax11;
    eax14 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx12) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx12 == 0))) {
        ebx15 = esi13;
        edx16 = reinterpret_cast<void*>(0);
        do {
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(edx16) + reinterpret_cast<unsigned char>(ebx15)) = eax14;
            ++eax14;
            edx16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx16) + 4);
        } while (reinterpret_cast<signed char>(eax14) < reinterpret_cast<signed char>(ecx12));
    }
    g487fb0 = esi13;
    g487f8c = ecx12;
    return;
}

void** g487fb8 = reinterpret_cast<void**>(64);

void fun_42c560(void** ecx) {
    void** v2;
    void** edx3;
    void** v4;
    void** esi5;
    void** eax6;
    void** eax7;
    void** eax8;
    void** edx9;
    void** eax10;
    void** eax11;
    void** ecx12;
    void** eax13;
    void** ebx14;
    void* ebx15;
    void** eax16;
    void** esi17;
    void** esi18;
    void** eax19;
    void** esi20;

    v2 = edx3;
    v4 = esi5;
    eax6 = fun_4346d0(ecx, v4, v2);
    g487f98 = eax6 + 1;
    eax7 = fun_4346d0(ecx, v4, v2);
    eax8 = eax7 - 1;
    edx9 = g487f98;
    g487fa8 = eax8;
    g487fb8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8) - reinterpret_cast<unsigned char>(edx9) + 1);
    eax10 = fun_4375e0(ecx, v4, v2);
    g487fac = eax10;
    eax11 = fun_4375e0(ecx, v4, v2);
    g487fa4 = eax11;
    ecx12 = reinterpret_cast<void**>(0);
    eax13 = fun_4375e0(0, v4, v2);
    ebx14 = g487fb8;
    g487f9c = eax13;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx14) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx14 == 0))) {
        ebx15 = reinterpret_cast<void*>(0);
        do {
            if (!(*reinterpret_cast<unsigned char*>(&ecx12) & 63)) {
                fun_440950(ecx12);
            }
            eax16 = fun_4348a0(ecx12, v4, v2);
            esi17 = g487fac;
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi17) + reinterpret_cast<uint32_t>(ebx15)) = static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax16))) << 16;
            ebx15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx15) + 4);
            esi18 = g487fa4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi18) + reinterpret_cast<uint32_t>(ebx15) - 4) = static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax16 + 4))) << 16;
            ++ecx12;
            eax19 = g487f9c;
            esi20 = g487fb8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx15) + reinterpret_cast<unsigned char>(eax19) - 4) = static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax16 + 6))) << 16;
        } while (reinterpret_cast<signed char>(ecx12) < reinterpret_cast<signed char>(esi20));
    }
    return;
}

void fun_42ceb0(void** ecx) {
    void** v2;
    void** edx3;
    void** eax4;
    void** eax5;
    void** eax6;

    v2 = ecx;
    eax4 = fun_4346d0(ecx, edx3, v2);
    fun_434700(eax4);
    eax5 = fun_4375e0(eax4, edx3, v2);
    eax6 = eax5 + 0xff;
    *reinterpret_cast<signed char*>(&eax6) = 0;
    g487fb4 = eax6;
    fun_434740(eax4);
    return;
}

void** fun_42c6c0(void** ecx) {
    void** v2;
    void** v3;
    void** eax4;
    void** v5;
    void** v6;
    void** v7;
    void** eax8;
    void** v9;
    int32_t ebp10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void* esp16;
    void* eax17;
    void** ecx18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** eax34;
    void** v35;
    void** v36;
    void** ebx37;
    void** v38;
    int32_t edx39;
    void*** v40;
    int32_t ecx41;
    void** edi42;
    void** esi43;
    uint32_t eax44;
    uint1_t cf45;
    int1_t zf46;
    uint1_t cf47;
    uint32_t eax48;
    void** v49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void* esp54;
    void** v55;
    void** edi56;
    void** eax57;
    signed char* eax58;
    void** esi59;
    void* edx60;
    void** v61;
    void** ecx62;
    void** v63;
    void** eax64;
    void** v65;
    void** edi66;
    void** v67;
    void** ebx68;
    void*** ecx69;
    void** esi70;
    void** v71;
    int32_t ebx72;
    void* ecx73;
    void* eax74;

    eax4 = fun_434890(ecx, v2, v3);
    v5 = eax4;
    if (eax4) {
        fun_4346d0(ecx, v6, v7);
        eax8 = fun_434700(ecx);
        v9 = eax8;
        ebp10 = 0;
        fun_442b80(ecx, v11, v12, v13, v14, v15);
        esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x720 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
        eax17 = reinterpret_cast<void*>(0);
        do {
            eax17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax17) + 5);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp16) + reinterpret_cast<int32_t>(eax17) - 4) = 0x7fffffff;
        } while (!reinterpret_cast<int1_t>(eax17 == 0x500));
        ecx18 = reinterpret_cast<void**>(0);
        v19 = reinterpret_cast<void**>(0);
        if (!1) 
            goto addr_42c75c_5;
    } else {
        eax34 = fun_412670(ecx, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33);
        goto addr_42cb09_7;
    }
    v35 = v5;
    do {
        if (reinterpret_cast<signed char>(v19) >= reinterpret_cast<signed char>(0x100)) 
            break;
        v36 = v35;
        ebx37 = v19 + 1;
        if (ebp10 < 20) {
            v38 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx37 + reinterpret_cast<unsigned char>(ebx37) * 2) + reinterpret_cast<unsigned char>(v5));
            edx39 = ebp10 * 2;
            v40 = reinterpret_cast<void***>(ebx37 + reinterpret_cast<unsigned char>(ebx37) * 4);
            while (reinterpret_cast<signed char>(ebx37) < reinterpret_cast<signed char>(0x100)) {
                if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp16) + reinterpret_cast<unsigned char>(ebx37) + 0x600)) {
                    addr_42c7f6_14:
                    ++ebx37;
                    ecx18 = v38 + 3;
                    v38 = ecx18;
                    v40 = v40 + 5;
                    if (edx39 < 40) 
                        continue; else 
                        goto addr_42c81e_15;
                } else {
                    ecx41 = 3;
                    edi42 = v38;
                    esi43 = v36;
                    eax44 = 0;
                    cf45 = 0;
                    zf46 = 1;
                    do {
                        if (!ecx41) 
                            break;
                        --ecx41;
                        cf45 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi43)) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi42)));
                        zf46 = *reinterpret_cast<void***>(esi43) == *reinterpret_cast<void***>(edi42);
                        ++edi42;
                        ++esi43;
                    } while (zf46);
                    if (!zf46) 
                        goto addr_42c7a8_20;
                }
                addr_42c7ad_21:
                if (!eax44) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp16) + reinterpret_cast<unsigned char>(ebx37) + 0x600) = 1;
                    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp16) + reinterpret_cast<unsigned char>(v19) + 0x600) = 1;
                    edx39 = edx39 + 2;
                    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp16) + reinterpret_cast<uint32_t>(v40)) = *reinterpret_cast<signed char*>(&v19);
                    *reinterpret_cast<signed char*>(edx39 + 0x487f2e) = *reinterpret_cast<signed char*>(&ebx37);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp16) + reinterpret_cast<uint32_t>(v40) + 1) = 0;
                    ++ebp10;
                    *reinterpret_cast<signed char*>(edx39 + 0x487f2f) = *reinterpret_cast<signed char*>(&v19);
                    goto addr_42c7f6_14;
                }
                addr_42c7a8_20:
                cf47 = reinterpret_cast<uint1_t>(0 < static_cast<uint32_t>(cf45));
                eax48 = -static_cast<uint32_t>(cf47);
                eax44 = eax48 - (1 - reinterpret_cast<uint1_t>(eax48 < 1 - cf47));
                goto addr_42c7ad_21;
            }
            continue;
        } else {
            continue;
        }
        addr_42c81e_15:
        v35 = v35 + 3;
        ++v19;
    } while (ebp10 < 20);
    goto addr_42c875_25;
    addr_42c896_26:
    fun_442b80(ecx18, v49, v50, v51, v52, v53);
    esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 + 4);
    v55 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v9 == 0))) {
        edi56 = v9;
        do {
            eax57 = g487fb4;
            eax58 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax57) + reinterpret_cast<unsigned char>(v55));
            *reinterpret_cast<signed char*>(&eax58) = *eax58;
            esi59 = v55 + 1;
            v55 = esi59;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp54) + (reinterpret_cast<uint32_t>(eax58) & 0xff) + 0x500) = 1;
        } while (reinterpret_cast<signed char>(esi59) < reinterpret_cast<signed char>(edi56));
    }
    edx60 = reinterpret_cast<void*>(0);
    v61 = reinterpret_cast<void**>(0);
    do {
        eax34 = v61;
        if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp54) + reinterpret_cast<unsigned char>(eax34) + 0x500)) {
            ecx62 = g481244;
            if (ecx62) {
                fun_442b98(ecx62, ecx62, "Palette index %i is never referenced\n", eax34, v63);
                esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 - 4 - 4 - 4 + 4 + 12);
            }
            eax34 = v61;
            if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp54) + reinterpret_cast<unsigned char>(eax34) + 0x600)) {
                eax64 = g481244;
                if (eax64) {
                    fun_442b98(v61, eax64, "Palette index %i is being dropped\n", v61, v65);
                    esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 - 4 - 4 - 4 + 4 + 12);
                }
                eax34 = v61;
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp54) + reinterpret_cast<int32_t>(edx60) + 1) = reinterpret_cast<void**>(0);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp54) + reinterpret_cast<unsigned char>(eax34) + 0x600) = 1;
                *reinterpret_cast<signed char*>(&eax34) = *reinterpret_cast<signed char*>(&v61);
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp54) + reinterpret_cast<int32_t>(edx60)) = *reinterpret_cast<signed char*>(&eax34);
            }
        }
        edi66 = v61 + 1;
        edx60 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx60) + 5);
        v61 = edi66;
    } while (reinterpret_cast<signed char>(edi66) < reinterpret_cast<signed char>(0x100));
    v67 = reinterpret_cast<void**>(0);
    if (ebp10 < 20) {
        while (eax34 = v67, reinterpret_cast<signed char>(eax34) < reinterpret_cast<signed char>(0x100)) {
            if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp54) + reinterpret_cast<unsigned char>(eax34) + 0x600)) {
                addr_42ca12_42:
                ++v67;
                if (ebp10 < 20) 
                    continue; else 
                    goto addr_42ca37_43;
            } else {
                ebx68 = eax34 + 1;
                if (ebp10 < 20) {
                    ecx69 = reinterpret_cast<void***>(ebx68 + reinterpret_cast<unsigned char>(ebx68) * 4);
                    do {
                        if (reinterpret_cast<signed char>(ebx68) >= reinterpret_cast<signed char>(0x100)) 
                            goto addr_42ca12_42;
                        if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp54) + reinterpret_cast<unsigned char>(ebx68) + 0x600) && (eax34 = fun_42c650(ecx69), esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 + 4), reinterpret_cast<signed char>(eax34) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp54) + reinterpret_cast<uint32_t>(ecx69) + 1)))) {
                            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp54) + reinterpret_cast<uint32_t>(ecx69) + 1) = eax34;
                            *reinterpret_cast<signed char*>(&eax34) = *reinterpret_cast<signed char*>(&v67);
                            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp54) + reinterpret_cast<uint32_t>(ecx69)) = *reinterpret_cast<signed char*>(&eax34);
                        }
                        ecx69 = ecx69 + 5;
                        ++ebx68;
                    } while (ebp10 < 20);
                } else {
                    goto addr_42ca12_42;
                }
            }
            goto addr_42ca12_42;
        }
    }
    addr_42ca59_53:
    esi70 = reinterpret_cast<void**>(1);
    if (ebp10 < 20) {
        do {
            v71 = reinterpret_cast<void**>(0);
            if (ebp10 < 20) {
                ebx72 = ebp10 * 2;
                ecx73 = reinterpret_cast<void*>(0);
                do {
                    eax34 = v71;
                    if (reinterpret_cast<signed char>(eax34) >= reinterpret_cast<signed char>(0x100)) 
                        goto addr_42caff_57;
                    if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp54) + reinterpret_cast<unsigned char>(eax34) + 0x600) && (reinterpret_cast<int1_t>(esi70 == 0x7fffffff) && (eax74 = fun_42c6a0(ecx73), esp54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp54) - 4 + 4), eax34 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax74) + reinterpret_cast<uint32_t>(eax74)), reinterpret_cast<signed char>(0x7fffffff) < reinterpret_cast<signed char>(eax34)))) {
                        ebx72 = ebx72 + 2;
                        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp54) + reinterpret_cast<unsigned char>(v71) + 0x600) = 1;
                        *reinterpret_cast<signed char*>(ebx72 + 0x487f2f) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp54) + reinterpret_cast<int32_t>(ecx73));
                        *reinterpret_cast<signed char*>(&eax34) = *reinterpret_cast<signed char*>(&v71);
                        ++ebp10;
                        *reinterpret_cast<signed char*>(ebx72 + 0x487f2e) = *reinterpret_cast<signed char*>(&eax34);
                    }
                    ecx73 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx73) + 5);
                    ++v71;
                } while (ebx72 < 40);
            } else {
                continue;
            }
            addr_42caff_57:
            ++esi70;
        } while (ebp10 < 20);
    }
    addr_42cb09_7:
    return eax34;
    addr_42ca37_43:
    goto addr_42ca59_53;
    addr_42c875_25:
    goto addr_42c896_26;
    addr_42c75c_5:
    goto addr_42c896_26;
}

struct s863 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** fun_414db0(void** ecx) {
    int32_t eax2;
    void** ebp3;
    void** edi4;
    struct s863* eax5;
    void** ecx6;
    void** edx7;
    void** edx8;
    void** eax9;

    if (!eax2) {
        fun_43bd40(ecx, "Bad list in dll_DelNode", ebp3, edi4);
    }
    if (!eax5->f0) {
        fun_43bd40(ecx, "Empty list in dll_DelNode", ebp3, edi4);
    }
    ecx6 = *reinterpret_cast<void***>(edx7 + 4);
    edx8 = *reinterpret_cast<void***>(edx7);
    if (ecx6) {
        eax9 = ecx6;
        ecx6 = *reinterpret_cast<void***>(edx7 + 8);
        *reinterpret_cast<void***>(eax9 + 8) = ecx6;
    }
    if (*reinterpret_cast<void***>(edx7 + 8)) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(edx7 + 8) + 4) = *reinterpret_cast<void***>(edx7 + 4);
    }
    if (edx7 == eax5->f0) {
        eax5->f0 = *reinterpret_cast<void***>(eax5->f0 + 8);
    }
    if (edx7 == eax5->f4) {
        eax5->f4 = *reinterpret_cast<void***>(eax5->f4 + 4);
    }
    fun_437550(ecx6);
    return edx8;
}

void** fun_41d560(void** ecx) {
    void** eax2;
    void** eax3;
    void** eax4;
    void** v5;
    int32_t eax6;
    void** v7;
    void** v8;
    void** v9;
    void** eax10;
    void** eax11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void*** edx17;

    eax3 = fun_44367f(ecx, eax2, 0x200, 0x1b6);
    if (reinterpret_cast<int1_t>(eax3 == 0xffffffff)) {
        fun_43bd40(ecx, "Couldn't read file %s", eax4, v5);
    }
    eax6 = fun_443cd6(ecx);
    if (eax6 == -1) {
        fun_43bd40(ecx, "Couldn't read file %s", eax4, v7);
    }
    eax10 = fun_4375e0(ecx, v8, v9);
    eax11 = fun_44385a(ecx);
    fun_4439d1(ecx, v12, v13, v14);
    if (reinterpret_cast<signed char>(eax11) < reinterpret_cast<signed char>(v15)) {
        fun_43bd40(ecx, "Couldn't read file %s", eax4, v16);
    }
    *edx17 = eax10;
    return v15;
}

void** g5f2630 = reinterpret_cast<void**>(0);

void*** g5f2450 = reinterpret_cast<void***>(0);

struct s864 {
    signed char[6235700] pad6235700;
    int32_t f5f2634;
};

uint32_t g5f26a4 = 0;

int32_t g466880 = 0;

void fun_432bd0(void** ecx) {
    void** ecx2;
    void** esi3;
    int32_t edx4;
    struct s864* eax5;
    void** esi6;
    void** ecx7;
    int32_t ebx8;
    void** eax9;
    void** ebp10;
    int1_t zf11;
    void** esi12;
    int32_t eax13;
    void** ebx14;
    int1_t zf15;
    int32_t eax16;
    void** edi17;
    void** ecx18;
    void** edx19;
    void* eax20;
    int32_t ebp21;
    int32_t ebp22;
    void** eax23;

    ecx2 = g5f2630;
    esi3 = g5f274c;
    if (*reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi3 + 0x70)) * 4 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi3 + 0x70))) * 8 + 0x464cc8) != 5) {
        g5f2450 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(esi3 + 0x9c) + *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi3 + 0x70)) * 4 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi3 + 0x70))) * 8 + 0x464cc8) * 4);
    } else {
        g5f2450 = reinterpret_cast<void***>(0x4669d0);
    }
    edx4 = 0;
    g5f245c = *reinterpret_cast<void***>(esi3 + 0x70);
    eax5 = reinterpret_cast<struct s864*>(0);
    g5f2630 = ecx2;
    g5f274c = esi3;
    do {
        esi6 = g5f274c;
        ecx7 = g5f2630;
        if (!*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi6) + reinterpret_cast<uint32_t>(eax5) + 68)) {
            ebx8 = -1;
        } else {
            ebx8 = edx4;
        }
        eax5->f5f2634 = ebx8;
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi6) + reinterpret_cast<uint32_t>(eax5) + 80)) {
            eax5->f5f2634 = edx4 + 3;
        }
        eax5 = reinterpret_cast<struct s864*>(reinterpret_cast<uint32_t>(eax5) + 4);
        ++edx4;
        g5f2630 = ecx7;
        g5f274c = esi6;
    } while (edx4 < 3);
    eax9 = fun_4328f0(ecx7);
    ebp10 = g482a6c;
    *reinterpret_cast<unsigned char*>(&eax9) = reinterpret_cast<uint1_t>(ebp10 == 0);
    g5f26a4 = reinterpret_cast<unsigned char>(eax9) & 0xff;
    zf11 = g5f26bc == 0;
    if (zf11 || ebp10) {
        esi12 = g5f274c;
        eax13 = 0;
    } else {
        eax13 = 1;
        esi12 = g5f274c;
    }
    ebx14 = g482a6c;
    g5f271c = eax13;
    if (!ebx14 || (zf15 = g5f26bc == 0, zf15)) {
        eax16 = 0;
    } else {
        eax16 = 1;
    }
    edi17 = g482a7c;
    g5f2714 = eax16;
    ecx18 = reinterpret_cast<void**>(0);
    edx19 = reinterpret_cast<void**>(0);
    eax20 = reinterpret_cast<void*>(0);
    do {
        if (edx19 == edi17) {
            ecx18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx18) - *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(esi12) + reinterpret_cast<uint32_t>(eax20) + 96));
        } else {
            ecx18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx18) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi12) + reinterpret_cast<uint32_t>(eax20) + 96)));
        }
        ++edx19;
        eax20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax20) + 4);
    } while (reinterpret_cast<signed char>(edx19) < reinterpret_cast<signed char>(4));
    ebp21 = g466880;
    ebp22 = ebp21 - 1;
    g466880 = ebp22;
    if (!ebp22) {
        eax23 = g5f26a8;
        g5f2740 = eax23;
    }
    g5f274c = esi12;
    g5f2630 = ecx18;
    return;
}

void** g456c34 = reinterpret_cast<void**>(73);

void** g456c38 = reinterpret_cast<void**>(82);

signed char g456c3c = 0;

void** g60afd0 = reinterpret_cast<void**>(0);

/* (image base) */
void* image_base_ = reinterpret_cast<void*>(0x477234);

void fun_436660(void** ecx) {
    void* esp2;
    int1_t zf3;
    void** eax4;
    void** v5;
    void* esp6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    signed char v11;
    int1_t zf12;
    void** eax13;
    void** eax14;
    void** ecx15;
    void* esp16;
    int1_t zf17;
    void** eax18;
    void* esp19;
    void** ebx20;
    void** eax21;
    void** v22;
    void* esp23;
    void* v24;
    void** eax25;
    void** edx26;
    void** eax27;
    void** eax28;
    void** eax29;
    void* esp30;
    void** eax31;
    void** eax32;
    void** eax33;
    void** ebx34;
    void* esp35;
    void* v36;
    void** eax37;
    void** edx38;
    void** esi39;
    void** eax40;
    void* esp41;
    void** ebx42;
    void** ecx43;
    void* esp44;
    void* v45;
    void** eax46;
    void** eax47;
    void** eax48;
    void** eax49;
    void** eax50;
    void** eax51;
    void** eax52;
    void** ebx53;
    int1_t zf54;
    int1_t zf55;
    void** eax56;
    void** eax57;
    void** eax58;
    void** eax59;
    void** eax60;
    void** eax61;
    void** eax62;
    void** eax63;
    void** eax64;
    void** ecx65;
    void** eax66;
    int32_t ebx67;
    void** eax68;
    void* esp69;
    void* esp70;
    void* v71;
    void** eax72;
    void* esp73;
    void* v74;
    void** eax75;
    void** esi76;
    void* ebp77;
    void** eax78;
    uint32_t eax79;
    void** edi80;
    void** ebx81;
    void** eax82;
    void** eax83;
    void** v84;
    void* esp85;
    void* v86;
    void** eax87;
    void* eax88;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 12);
    zf3 = g481264 == 0;
    if (zf3) {
        eax4 = g60afe4;
        v5 = *reinterpret_cast<void***>(eax4);
        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4);
        fun_442b4a(ecx, reinterpret_cast<int32_t>(esp6) + 8, "WIMAP%d", v5, v7, v8);
        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 + 4 + 12);
    } else {
        v9 = g456c34;
        v10 = g456c38;
        v11 = g456c3c;
    }
    zf12 = g481258 == 0;
    if (!zf12 && (eax13 = g60afe4, reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax13) == 3))) {
        v9 = g456c34;
        v10 = g456c38;
        v11 = g456c3c;
    }
    eax14 = fun_434890(ecx, v9, v10, ecx, v9, v10);
    g60afd0 = eax14;
    ecx15 = eax14;
    fun_433a50(ecx15, v9, v10, v11);
    esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4 - 4 + 4);
    zf17 = g481264 == 0;
    if (zf17) {
        eax18 = fun_4375e0(ecx15, v9, v10, ecx15, v9, v10);
        esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 + 4);
        ecx15 = reinterpret_cast<void**>(0);
        g60af88 = eax18;
        ebx20 = reinterpret_cast<void**>(0);
        do {
            eax21 = g60afe4;
            v22 = *reinterpret_cast<void***>(eax21);
            esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 - 4);
            v24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) + 12);
            fun_442b4a(ecx15, v24, "WILV%d%d", v22, ebx20, v9, ecx15, v24, "WILV%d%d", v22, ebx20, v9);
            ecx15 = ecx15 + 4;
            eax25 = fun_434890(ecx15, v9, v10, ecx15, v9, v10);
            esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 + 4 + 16 - 4 + 4);
            edx26 = g60af88;
            ++ebx20;
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx15) + reinterpret_cast<unsigned char>(edx26) + 0xfffffffc) = eax25;
        } while (reinterpret_cast<signed char>(ebx20) < reinterpret_cast<signed char>(9));
        eax27 = fun_434890(ecx15, v9, v10, ecx15, v9, v10);
        g60af3c = eax27;
        eax28 = fun_434890(ecx15, v9, v10, ecx15, v9, v10);
        g60af40 = eax28;
        eax29 = fun_434890(ecx15, v9, v10, ecx15, v9, v10);
        esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 + 4 - 4 + 4 - 4 + 4);
        g60af9c = eax29;
        eax31 = g60afe4;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax31)) < reinterpret_cast<signed char>(3)) 
            goto addr_4367ee_27;
    } else {
        g60afb8 = reinterpret_cast<void**>(32);
        eax32 = fun_4375e0(ecx15, v9, v10, ecx15, v9, v10);
        esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 + 4);
        g60af88 = eax32;
        eax33 = g60afb8;
        ebx34 = reinterpret_cast<void**>(0);
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax33) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax33 == 0))) {
            ecx15 = reinterpret_cast<void**>(0);
            while (esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4), v36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) + 8), fun_442b4a(ecx15, v36, "CWILV%2.2d", ebx34, v9, v10, ecx15, v36, "CWILV%2.2d", ebx34, v9, v10), ecx15 = ecx15 + 4, eax37 = fun_434890(ecx15, v9, v10, ecx15, v9, v10), esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 - 4 + 4 + 12 - 4 + 4), edx38 = g60af88, ++ebx34, esi39 = g60afb8, *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx15) + reinterpret_cast<unsigned char>(edx38) + 0xfffffffc) = eax37, reinterpret_cast<signed char>(ebx34) < reinterpret_cast<signed char>(esi39)) {
            }
        }
    }
    addr_436874_32:
    eax40 = fun_434890(ecx15, v9, v10, ecx15, v9, v10);
    esp41 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 + 4);
    ebx42 = reinterpret_cast<void**>(0);
    ecx43 = reinterpret_cast<void**>(0);
    g60af94 = eax40;
    do {
        esp44 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp41) - 4 - 4);
        v45 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp44) + 8);
        ecx43 = ecx43 + 4;
        fun_442b4a(ecx43, v45, "WINUM%d", ebx42, v9, v10, ecx43, v45, "WINUM%d", ebx42, v9, v10);
        ++ebx42;
        eax46 = fun_434890(ecx43, v9, v10, ecx43, v9, v10);
        esp41 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp44) - 4 - 4 + 4 + 12 - 4 + 4);
        *reinterpret_cast<void***>(ecx43 + 0x60af00) = eax46;
    } while (reinterpret_cast<signed char>(ebx42) < reinterpret_cast<signed char>(10));
    eax47 = fun_434890(ecx43, v9, v10, ecx43, v9, v10);
    g60afc4 = eax47;
    eax48 = fun_434890(ecx43, v9, v10, ecx43, v9, v10);
    g60afac = eax48;
    eax49 = fun_434890(ecx43, v9, v10, ecx43, v9, v10);
    g60afb0 = eax49;
    eax50 = fun_434890(ecx43, v9, v10, ecx43, v9, v10);
    g60afa0 = eax50;
    eax51 = fun_434890(ecx43, v9, v10, ecx43, v9, v10);
    g60afa4 = eax51;
    eax52 = fun_434890(ecx43, v9, v10, ecx43, v9, v10);
    ebx53 = g481260;
    g60afc0 = eax52;
    if (!ebx53 || ((zf54 = g482a84 == 0, zf54) || (zf55 = g482a6c == 0, !zf55))) {
    }
    eax56 = fun_434890(ecx43, v9, v10, ecx43, v9, v10);
    g60afc8 = eax56;
    eax57 = fun_434890(ecx43, v9, v10, ecx43, v9, v10);
    g60afd8 = eax57;
    eax58 = fun_434890(ecx43, v9, v10, ecx43, v9, v10);
    g60afb4 = eax58;
    eax59 = fun_434890(ecx43, v9, v10, ecx43, v9, v10);
    g60af8c = eax59;
    eax60 = fun_434890(ecx43, v9, v10, ecx43, v9, v10);
    g60af98 = eax60;
    eax61 = fun_434890(ecx43, v9, v10, ecx43, v9, v10);
    g60afcc = eax61;
    eax62 = fun_434890(ecx43, v9, v10, ecx43, v9, v10);
    g60af74 = eax62;
    eax63 = fun_434890(ecx43, v9, v10, ecx43, v9, v10);
    g60af84 = eax63;
    eax64 = fun_434890(ecx43, v9, v10, ecx43, v9, v10);
    g60af80 = eax64;
    ecx65 = reinterpret_cast<void**>(0);
    eax66 = fun_434890(0, v9, v10, 0, v9, v10);
    g60af78 = eax66;
    ebx67 = 0;
    eax68 = fun_434890(0, v9, v10, 0, v9, v10);
    esp69 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp41) - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
    g60af7c = eax68;
    do {
        esp70 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp69) - 4 - 4);
        v71 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp70) + 8);
        fun_442b4a(ecx65, v71, "STPB%d", ecx65, v9, v10, ecx65, v71, "STPB%d", ecx65, v9, v10);
        ++ecx65;
        eax72 = fun_434890(ecx65, v9, v10, ecx65, v9, v10);
        esp73 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp70) - 4 - 4 + 4 + 12 - 4 + 4 - 4 - 4);
        *reinterpret_cast<void***>(ebx67 + 0x60aee4) = eax72;
        v74 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp73) + 8);
        fun_442b4a(ecx65, v74, "WIBP%d", ecx65, v9, v10, ecx65, v74, "WIBP%d", ecx65, v9, v10);
        ebx67 = ebx67 + 4;
        eax75 = fun_434890(ecx65, v9, v10, ecx65, v9, v10);
        esp69 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp73) - 4 - 4 + 4 + 12 - 4 + 4);
        *reinterpret_cast<void***>(ebx67 + 0x60aef0) = eax75;
    } while (reinterpret_cast<signed char>(ecx65) < reinterpret_cast<signed char>(4));
    return;
    addr_4367ee_27:
    esi76 = reinterpret_cast<void**>(0);
    ebp77 = reinterpret_cast<void*>(0);
    while (eax78 = g60afe4, eax79 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax78)) * 4, reinterpret_cast<signed char>(esi76) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax79 + reinterpret_cast<int32_t>("\n")))) {
        edi80 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax79 + 0x47758c)) + reinterpret_cast<uint32_t>(ebp77));
        ebx81 = reinterpret_cast<void**>(0);
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi80 + 8)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(edi80 + 8) == 0))) {
            ecx15 = edi80;
            do {
                eax82 = g60afe4;
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax82) == 1) || esi76 != 8) {
                    eax83 = g60afe4;
                    v84 = *reinterpret_cast<void***>(eax83);
                    esp85 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 - 4);
                    v86 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp85) + 16);
                    fun_442b4a(ecx15, v86, "WIA%d%.2d%.2d", v84, esi76, ebx81, ecx15, v86, "WIA%d%.2d%.2d", v84, esi76, ebx81);
                    eax87 = fun_434890(ecx15, v9, v10, ecx15, v9, v10);
                    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp85) - 4 - 4 + 4 + 20 - 4 + 4);
                } else {
                    eax88 = image_base_;
                    eax87 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(eax88) + reinterpret_cast<unsigned char>(ebx81) * 4 + 0xfc);
                }
                *reinterpret_cast<void***>(ecx15 + 28) = eax87;
                ++ebx81;
                ecx15 = ecx15 + 4;
            } while (reinterpret_cast<signed char>(ebx81) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(edi80 + 8)));
        }
        ebp77 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp77) + 56);
        ++esi76;
    }
    goto addr_436874_32;
}

void** fun_41c060(void** ecx) {
    void** v2;
    void** eax3;
    void** v4;
    void** ebx5;
    void** v6;
    void** eax7;
    void** ecx8;
    void** edi9;
    void** eax10;
    void** eax11;
    void** eax12;
    void** eax13;

    v2 = eax3;
    v4 = ebx5;
    v6 = ecx;
    eax7 = fun_434890(ecx, v6, v2);
    ecx8 = eax7;
    edi9 = reinterpret_cast<void**>(0);
    fun_433eb0(ecx8, v6, v2, v4);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v4) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v4 == 0))) {
        do {
            eax10 = fun_434890(ecx8, v6, v2);
            ecx8 = eax10;
            ++edi9;
            fun_433eb0(ecx8, v6, v2, v4);
        } while (reinterpret_cast<signed char>(edi9) < reinterpret_cast<signed char>(v4));
    }
    eax11 = fun_434890(ecx8, v6, v2);
    fun_433eb0(eax11, v6, v2, v4);
    eax12 = fun_434890(eax11, v6, v2);
    eax13 = fun_433eb0(eax12, v6, v2, v4);
    return eax13;
}

struct s865 {
    signed char[124] pad124;
    int32_t f7c;
};

struct s866 {
    signed char[124] pad124;
    int32_t f7c;
};

void** fun_420b00(void** ecx) {
    int32_t edx2;
    struct s865* eax3;
    struct s866* eax4;
    void** edi5;
    void** eax6;
    void** ecx7;
    void** eax8;
    void** eax9;
    void** esi10;
    void** eax11;

    edx2 = eax3->f7c - 1;
    eax4->f7c = edx2;
    if (!edx2) {
        fun_425180(29);
        fun_4312d0(29, edi5);
        eax6 = fun_41d460(29, edi5);
        if (reinterpret_cast<signed char>(eax6) >= reinterpret_cast<signed char>(50)) {
            if (reinterpret_cast<signed char>(eax6) >= reinterpret_cast<signed char>(90)) {
                if (reinterpret_cast<signed char>(eax6) >= reinterpret_cast<signed char>(0x78)) {
                    if (reinterpret_cast<signed char>(eax6) >= reinterpret_cast<signed char>(0x82)) {
                        if (reinterpret_cast<signed char>(eax6) >= reinterpret_cast<signed char>(0xa0)) {
                            if (reinterpret_cast<signed char>(eax6) >= reinterpret_cast<signed char>(0xa2)) {
                                if (reinterpret_cast<signed char>(eax6) >= reinterpret_cast<signed char>(0xac)) {
                                    if (reinterpret_cast<signed char>(eax6) >= reinterpret_cast<signed char>(0xc0)) {
                                        if (reinterpret_cast<signed char>(eax6) >= reinterpret_cast<signed char>(0xde)) {
                                            if (reinterpret_cast<signed char>(eax6) >= reinterpret_cast<signed char>(0xf6)) {
                                                ecx7 = reinterpret_cast<void**>(15);
                                            } else {
                                                ecx7 = reinterpret_cast<void**>(17);
                                            }
                                        } else {
                                            ecx7 = reinterpret_cast<void**>(8);
                                        }
                                    } else {
                                        ecx7 = reinterpret_cast<void**>(20);
                                    }
                                } else {
                                    ecx7 = reinterpret_cast<void**>(5);
                                }
                            } else {
                                ecx7 = reinterpret_cast<void**>(3);
                            }
                        } else {
                            ecx7 = reinterpret_cast<void**>(14);
                        }
                    } else {
                        ecx7 = reinterpret_cast<void**>(22);
                    }
                } else {
                    ecx7 = reinterpret_cast<void**>(13);
                }
            } else {
                ecx7 = reinterpret_cast<void**>(12);
            }
        } else {
            ecx7 = reinterpret_cast<void**>(11);
        }
        eax8 = fun_425180(ecx7);
        eax9 = fun_41f260(eax8);
        if (eax9) {
            fun_424ae0(eax8, edi5, esi10);
        }
        fun_422ba0(eax8);
        eax11 = fun_4252a0(eax8);
    }
    return eax11;
}

struct s867 {
    signed char[32] pad32;
    void** f20;
};

void** fun_4259b0(void** ecx) {
    void** esi2;
    struct s867* eax3;
    void** edx4;
    void** eax5;
    void** edx6;
    void** ebp7;
    void** eax8;
    void** ebx9;
    void** eax10;
    int1_t zf11;
    void** eax12;
    void** eax13;
    void** ebp14;
    uint32_t* eax15;
    uint32_t esi16;
    void** eax17;

    esi2 = eax3->f20;
    eax5 = fun_423b30(edx4);
    edx6 = g4837b0;
    ebp7 = eax5;
    if (!edx6) {
        esi2 = esi2 + 0x4000000;
        eax8 = fun_423b30(edx4);
        ebx9 = g4837b0;
        ebp7 = eax8;
        if (!ebx9) {
            esi2 = esi2 - 0x8000000;
            eax10 = fun_423b30(edx4);
            ebp7 = eax10;
        }
        zf11 = g4837b0 == 0;
        if (zf11) {
            esi2 = *reinterpret_cast<void***>(eax12 + 32);
            ebp7 = reinterpret_cast<void**>(0);
        }
    }
    eax13 = fun_425180(edx4);
    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax13 + 92) + 16)) {
        fun_4312d0(eax13, ebp14);
    }
    eax15 = image_base_;
    *reinterpret_cast<void***>(eax13 + 32) = esi2;
    esi16 = reinterpret_cast<unsigned char>(esi2) >> 19;
    *reinterpret_cast<void***>(eax13 + 0x78) = eax12;
    __asm__("shrd eax, edx, 0x10");
    *reinterpret_cast<void***>(eax13 + 72) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax13 + 92) + 60)) * eax15[esi16]);
    __asm__("shrd eax, edx, 0x10");
    *reinterpret_cast<void***>(eax13 + 76) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax13 + 92) + 60)) * *reinterpret_cast<uint32_t*>(esi16 * 4 + 0x46a9e0));
    __asm__("shrd eax, edx, 0x10");
    *reinterpret_cast<void***>(eax13 + 80) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax13 + 92) + 60)) * reinterpret_cast<unsigned char>(ebp7));
    eax17 = fun_425850(eax13);
    return eax17;
}

int32_t LocalAlloc = 0x22078e;

struct s868 {
    signed char f0;
    signed char[13] pad14;
    int16_t fe;
    signed char[16] pad32;
    int32_t f20;
    signed char f24;
    signed char[4] pad41;
    signed char f29;
    signed char f2a;
};

struct s869 {
    int16_t f0;
    signed char f2;
    signed char f3;
    signed char f4;
    signed char f5;
};

int32_t LocalFree = 0x22079c;

int32_t g40;

int32_t CreateDCA = 0x220956;

int32_t CreateDIBitmap = 0x220962;

int32_t DeleteDC = 0x220992;

void fun_43b710(void** ecx, void** a2, int32_t a3, int32_t a4) {
    int32_t v5;
    int32_t edi6;
    int32_t eax7;
    int32_t ebx8;
    void** ebx9;
    int32_t eax10;
    int32_t eax11;
    void** ecx12;
    int32_t eax13;
    signed char* eax14;
    signed char* esi15;
    int32_t edx16;
    int32_t v17;
    uint32_t eax18;
    struct s868* eax19;
    struct s868* edx20;
    struct s868* ebp21;
    struct s868* edi22;
    uint32_t eax23;
    uint32_t ecx24;
    int1_t zf25;
    int1_t zf26;
    int32_t esi27;
    int32_t* v28;
    struct s869* eax29;
    struct s869* edi30;
    int32_t ebx31;
    struct s868* edx32;
    signed char cl33;
    int32_t eax34;
    int1_t zf35;
    int32_t eax36;
    int32_t ecx37;
    int32_t eax38;
    signed char eax39;
    int16_t cx40;

    v5 = edi6;
    eax7 = reinterpret_cast<int32_t>(FindResourceA());
    ebx8 = eax7;
    if (!eax7) {
        ebx9 = g60b438;
        eax11 = reinterpret_cast<int32_t>(FindResourceA(ebx9, eax10, 10));
        ebx8 = eax11;
    }
    if (ebx8) {
        ecx12 = g60b438;
        eax13 = reinterpret_cast<int32_t>(LoadResource(ecx12, ebx8));
        eax14 = reinterpret_cast<signed char*>(LockResource(eax13, ecx12, ebx8));
        esi15 = eax14;
        if (!ebx8) {
            goto edx16;
        }
        v17 = ebx8;
        eax18 = reinterpret_cast<uint32_t>(SizeofResource());
        if (!eax18) 
            goto addr_43b8c5_7;
        eax19 = reinterpret_cast<struct s868*>(LocalAlloc(64));
        edx20 = eax19;
        ebp21 = eax19;
        if (eax19) 
            goto addr_43b7ac_9;
    }
    addr_43b8c5_7:
    goto v5;
    addr_43b7ac_9:
    edi22 = eax19;
    eax23 = eax18;
    ecx24 = eax18 >> 2;
    zf25 = ecx24 == 0;
    do {
        if (!ecx24) 
            break;
        --ecx24;
        edi22->f0 = *esi15;
        edi22 = reinterpret_cast<struct s868*>(reinterpret_cast<int32_t>(edi22) + 4);
        esi15 = esi15 + 4;
    } while (!zf25);
    *reinterpret_cast<unsigned char*>(&ecx24) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax23) & 3);
    zf26 = *reinterpret_cast<unsigned char*>(&ecx24) == 0;
    do {
        if (!ecx24) 
            break;
        --ecx24;
        edi22->f0 = *esi15;
        edi22 = reinterpret_cast<struct s868*>(&edi22->pad14);
        ++esi15;
    } while (!zf26);
    esi27 = edx20->f20;
    if (!esi27) 
        goto addr_43b7c7_17;
    addr_43b7d2_18:
    v28 = reinterpret_cast<int32_t*>(esi27 * 4 + 4);
    eax29 = reinterpret_cast<struct s869*>(LocalAlloc());
    edi30 = eax29;
    if (eax29) {
        eax29->f0 = 0x300;
        ebx31 = 0;
        eax29->f2 = *reinterpret_cast<signed char*>(&esi27);
        if (!(reinterpret_cast<uint1_t>(esi27 < 0) | reinterpret_cast<uint1_t>(esi27 == 0))) {
            edx32 = ebp21;
            do {
                eax29->f4 = edx32->f2a;
                edx32 = reinterpret_cast<struct s868*>(reinterpret_cast<int32_t>(edx32) + 4);
                eax29->f5 = edx32->f29;
                eax29 = reinterpret_cast<struct s869*>(&eax29->f4);
                cl33 = edx32->f24;
                eax29->f3 = 4;
                ++ebx31;
                eax29->f2 = cl33;
            } while (ebx31 < esi27);
        }
        eax34 = reinterpret_cast<int32_t>(CreatePalette(edi30));
        *v28 = eax34;
        LocalFree(edi30, edi30);
        zf35 = g40 == 0;
        if (!zf35) {
            eax36 = reinterpret_cast<int32_t>(CreateDCA("DISPLAY", 0, 0, 0, edi30, edi30));
            if (eax36) {
                ecx37 = g60b6f8;
                eax38 = reinterpret_cast<int32_t>(SelectPalette(eax36, ecx37, 0, "DISPLAY", 0, 0, 0, edi30, edi30));
                RealizePalette();
                eax39 = reinterpret_cast<signed char>(CreateDIBitmap(eax36));
                ebp21->f0 = eax39;
                SelectPalette(eax36, eax38, 0, eax36);
                RealizePalette(eax36, eax36, eax38, 0, eax36);
                DeleteDC(eax36, eax36, eax36, eax38, 0, eax36);
            }
            LocalFree(ebp21, "DISPLAY", 0, 0, 0, edi30, edi30);
            goto addr_43b8c5_7;
        } else {
            goto v17;
        }
    }
    addr_43b7c7_17:
    cx40 = edx20->fe;
    esi27 = 1 << *reinterpret_cast<unsigned char*>(&cx40);
    goto addr_43b7d2_18;
}

int32_t g61706c = 0;

int32_t g617070 = 0;

int32_t g617074 = 0;

int32_t g617078 = 0;

int32_t GetSystemMetrics = 0x220bb8;

void fun_4406b0(int32_t a1, int32_t a2, int32_t a3) {
    void* ebp4;
    int32_t ebx5;
    int32_t edx6;
    void* v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t eax12;
    int32_t esi13;
    int32_t v14;
    int32_t v15;
    int32_t edi16;
    int32_t v17;
    int32_t v18;
    void* v19;
    int32_t eax20;
    int32_t eax21;
    int32_t eax22;
    int32_t eax23;
    void* v24;
    int32_t eax25;
    int32_t eax26;
    int32_t eax27;
    int32_t edx28;
    int32_t v29;
    int32_t v30;
    int32_t ebx31;
    int32_t v32;
    int32_t edx33;
    int32_t v34;
    int32_t v35;
    int32_t eax36;
    int32_t v37;

    ebp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4);
    ebx5 = edx6;
    v7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp4) - 24);
    v8 = g61706c;
    v9 = g617070;
    v10 = g617074;
    v11 = g617078;
    GetWindowRect(eax12, v7);
    esi13 = v14 - v15;
    edi16 = v17 - v18;
    v19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp4) - 56);
    if (!ebx5) {
        eax20 = reinterpret_cast<int32_t>(GetDesktopWindow(v19, eax12, v7));
        ebx5 = eax20;
    }
    eax21 = reinterpret_cast<int32_t>(GetWindowRect(ebx5, v19, eax12, v7));
    if (!eax21) {
        eax22 = reinterpret_cast<int32_t>(GetSystemMetrics(1, ebx5, v19, eax12, v7));
        eax23 = reinterpret_cast<int32_t>(GetSystemMetrics(0, eax22, 1, ebx5, v19, eax12, v7));
        SetRect(reinterpret_cast<int32_t>(ebp4) - 56, 0, 0, eax23, 0, eax22, 1, ebx5, v19, eax12, v7);
    }
    v24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebp4) - 40);
    eax25 = reinterpret_cast<int32_t>(SystemParametersInfoA(48, 16, v24, 0, ebx5, v19, eax12, v7));
    if (!eax25) {
        eax26 = reinterpret_cast<int32_t>(GetSystemMetrics(1, 48, 16, v24, 0, ebx5, v19, eax12, v7));
        eax27 = reinterpret_cast<int32_t>(GetSystemMetrics(0, eax26, 1, 48, 16, v24, 0, ebx5, v19, eax12, v7));
        SetRect(reinterpret_cast<int32_t>(ebp4) - 40, 0, 0, eax27, 0, eax26, 1, 48, 16, v24, 0, ebx5, v19, eax12, v7);
    }
    edx28 = v29 - v30 - edi16;
    ebx31 = v32 + (edx28 - (edx28 >> 31) >> 1);
    if (ebx31 >= v8) {
        if (ebx31 + edi16 > v10) {
            ebx31 = v10 - edi16;
        }
    } else {
        ebx31 = v8;
    }
    edx33 = v34 - v35 - esi13;
    eax36 = (edx33 - (edx33 >> 31) >> 1) + v37;
    if (eax36 >= v9) {
        if (eax36 + esi13 > v11) {
            eax36 = v11 - esi13;
        }
    } else {
        eax36 = v9;
    }
    SetWindowPos(eax12, 0, ebx31, eax36, 0, 0, 5, 48, 16, v24, 0, ebx5, v19, eax12, v7);
    goto a2;
}

struct s870 {
    signed char[20] pad20;
    uint32_t f14;
};

struct s871 {
    uint32_t f0;
    struct s871* f4;
    struct s871* f8;
};

struct s872 {
    signed char[12] pad12;
    struct s871* fc;
};

struct s873 {
    signed char[16] pad16;
    uint32_t f10;
};

struct s874 {
    signed char[40] pad40;
    struct s871* f28;
};

struct s875 {
    signed char[32] pad32;
    uint32_t f20;
};

struct s876 {
    signed char[16] pad16;
    uint32_t f10;
};

struct s877 {
    signed char[24] pad24;
    int32_t f18;
};

struct s878 {
    signed char[24] pad24;
    int32_t f18;
};

struct s879 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s880 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s881 {
    signed char[12] pad12;
    struct s871* fc;
};

struct s882 {
    signed char[12] pad12;
    struct s871* fc;
};

struct s883 {
    signed char[20] pad20;
    uint32_t f14;
};

void** fun_445450(void** ecx, void** a2, void** a3) {
    int32_t eax4;
    uint32_t tmp32_5;
    int32_t eax6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t ecx9;
    struct s870* ebx10;
    struct s871* esi11;
    struct s872* ebx12;
    uint32_t edi13;
    struct s873* ebx14;
    struct s874* ebx15;
    struct s875* ebx16;
    uint32_t edx17;
    struct s876* ebx18;
    struct s877* ebx19;
    struct s878* ebx20;
    struct s871* ecx21;
    struct s879* ebx22;
    struct s880* ebx23;
    struct s871* esi24;
    struct s881* ebx25;
    struct s871* edi26;
    struct s882* ebx27;
    struct s871* ebx28;
    struct s883* ebx29;

    if (!eax4 || ((tmp32_5 = reinterpret_cast<uint32_t>(eax6 + 7), eax7 = tmp32_5, tmp32_5 < eax8) || (*reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) & 0xfc), ecx9 = reinterpret_cast<unsigned char>(ecx) - (reinterpret_cast<unsigned char>(ecx) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(ecx) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(ecx) + reinterpret_cast<uint1_t>(eax7 >= 12)))), eax7 = (eax7 - 12 & ecx9) + 12, eax7 > ebx10->f14))) {
        addr_44549f_2:
    } else {
        esi11 = ebx12->fc;
        edi13 = ebx14->f10;
        if (eax7 <= edi13) {
            esi11 = ebx15->f28;
            edi13 = edi13 - edi13;
        }
        do {
            if (eax7 <= esi11->f0) 
                goto addr_4454a3_6;
            ecx9 = ecx9 - (ecx9 + reinterpret_cast<uint1_t>(ecx9 < ecx9 + reinterpret_cast<uint1_t>(edi13 >= esi11->f0)));
            edi13 = (edi13 - esi11->f0 & ecx9) + esi11->f0;
            esi11 = esi11->f8;
        } while (!reinterpret_cast<int1_t>(esi11 == &ebx16->f20));
        goto addr_44549c_8;
    }
    addr_4454ee_9:
    goto a3;
    addr_4454a3_6:
    edx17 = esi11->f0 - eax7;
    ebx18->f10 = edi13;
    ebx19->f18 = ebx20->f18 + 1;
    ecx21 = esi11->f8;
    if (edx17 < 12) {
        ebx22->f1c = ebx23->f1c - 1;
        esi24 = esi11->f4;
        esi24->f8 = ecx21;
        ecx21->f4 = esi24;
        ebx25->fc = esi24;
        esi11 = esi11;
    } else {
        edi26 = reinterpret_cast<struct s871*>(reinterpret_cast<uint32_t>(esi11) + eax7);
        ebx27->fc = edi26;
        edi26->f0 = edx17;
        esi11->f0 = eax7;
        ebx28 = esi11->f4;
        edi26->f4 = ebx28;
        edi26->f8 = ecx21;
        ebx28->f8 = edi26;
        ecx21->f4 = edi26;
    }
    esi11->f0 = esi11->f0 | 1;
    goto addr_4454ee_9;
    addr_44549c_8:
    ebx29->f14 = edi13;
    goto addr_44549f_2;
}

int32_t DeleteFileA = 0x220e52;

int32_t fun_449cc4() {
    goto DeleteFileA;
}

int32_t DosDateTimeToFileTime = 0x220e60;

void fun_449d2a() {
    goto DosDateTimeToFileTime;
}

struct s884 {
    signed char f0;
    signed char f1;
};

struct s799* fun_4463fd(void** ecx) {
    void** v2;
    void** v3;
    void** v4;
    void** esi5;
    void** v6;
    void** edi7;
    void** v8;
    void** ebp9;
    struct s799* ebp10;
    struct s799* eax11;
    int1_t zf12;
    signed char* edi13;
    signed char* edx14;
    uint32_t ecx15;
    void** ecx16;
    void* esi17;
    void** ebx18;
    void** ebx19;
    void* ebx20;
    void** eax21;
    struct s884* esi22;
    struct s884* edx23;
    struct s799* edi24;
    signed char al25;
    signed char al26;
    signed char* esi27;
    signed char* edx28;
    struct s799* edi29;
    void** eax30;
    uint32_t ecx31;
    int1_t zf32;
    int1_t zf33;
    int32_t edx34;
    int32_t ebx35;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = ecx;
    v4 = esi5;
    v6 = edi7;
    v8 = ebp9;
    ebp10 = eax11;
    zf12 = g477be4 == 0;
    if (zf12) {
        fun_4439f9(ecx);
    } else {
        edi13 = edx14;
        ecx15 = reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(ecx) - 1;
        do {
            if (!ecx15) 
                break;
            --ecx15;
            ++edi13;
        } while (*edi13);
        ecx16 = reinterpret_cast<void**>(~ecx15 - 1);
        esi17 = g477be4;
        if (!esi17) 
            goto addr_44643b_7; else 
            goto addr_44642c_8;
    }
    addr_4462e5_9:
    return ebp10;
    addr_44643b_7:
    if (esi17 && reinterpret_cast<signed char>(ebx18) < reinterpret_cast<signed char>(ecx16)) {
        ebx19 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ebx20) - 1);
    }
    eax21 = ecx16 + 1;
    if (reinterpret_cast<signed char>(eax21) >= reinterpret_cast<signed char>(ebx19)) {
        esi22 = edx23;
        edi24 = ebp10;
        do {
            al25 = esi22->f0;
            edi24->f0 = al25;
            if (!al25) 
                break;
            al26 = esi22->f1;
            ++esi22;
            edi24->f1 = al26;
            ++edi24;
        } while (al26);
        if (ecx16 == ebx19) 
            goto addr_4462e5_9;
    } else {
        esi27 = edx28;
        edi29 = ebp10;
        eax30 = eax21;
        ecx31 = reinterpret_cast<unsigned char>(eax21) >> 2;
        zf32 = ecx31 == 0;
        do {
            if (!ecx31) 
                break;
            --ecx31;
            edi29->f0 = *esi27;
            edi29 = edi29 + 2;
            esi27 = esi27 + 4;
        } while (!zf32);
        *reinterpret_cast<unsigned char*>(&ecx31) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax30) & 3);
        zf33 = *reinterpret_cast<unsigned char*>(&ecx31) == 0;
        do {
            if (!ecx31) 
                break;
            --ecx31;
            edi29->f0 = *esi27;
            edi29 = reinterpret_cast<struct s799*>(&edi29->f1);
            ++esi27;
        } while (!zf33);
        goto addr_4462e5_9;
    }
    fun_442b80(ecx16, v8, v6, v4, v3, v2);
    goto addr_4462e5_9;
    addr_44642c_8:
    esi17 = reinterpret_cast<void*>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(*reinterpret_cast<unsigned char*>(edx34 + ebx35) + 0x477be9) & 1)));
    goto addr_44643b_7;
}

int32_t g61834c = 0;

void*** g477b61 = reinterpret_cast<void***>(0);

void** g477b34 = reinterpret_cast<void**>(0);

void** g477b30 = reinterpret_cast<void**>(0);

void** g477b38 = reinterpret_cast<void**>(0);

signed char g477b67 = 0;

unsigned char g477b68 = 0;

void** fun_4452ea(void** ecx) {
    int32_t esi2;
    int32_t eax3;
    void** v4;
    void** v5;
    void** v6;
    void** eax7;
    void* esp8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void*** eax14;
    void* esp15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** eax28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** eax35;
    void* esp36;
    uint32_t edx37;
    uint32_t edx38;
    uint32_t edx39;
    void** v40;
    void** ebx41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** eax47;
    uint32_t eax48;
    uint32_t ebx49;
    int32_t edx50;
    uint32_t eax51;
    int32_t edx52;

    esi2 = eax3;
    g61834c = esi2;
    eax7 = fun_447f05(ecx, v4, v5, v6);
    esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 0x104 - 4 + 4);
    g618350 = eax7;
    if (!eax7) {
        if (esi2) {
            addr_4453e5_3:
            return eax7;
        } else {
            fun_449d7e(1);
            esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 - 4 + 4);
        }
    }
    fun_445e48(ecx, v9, v10, v11, v12, v13);
    eax14 = fun_449d78();
    esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 + 4 - 4 + 4 - 4);
    g477b61 = eax14;
    v16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp15) + 4);
    fun_449d72(0, v16, 0x104, v17, v18, v19, v20, v21);
    eax28 = fun_444556(ecx, 0, v16, 0x104, v22, v23, v24, v25, v26, v27);
    g477b34 = eax28;
    fun_449d6c(0, v16, 0x104);
    eax35 = fun_444556(ecx, 0, v16, 0x104, v29, v30, v31, v32, v33, v34);
    esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) - 4 - 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
    while ((*reinterpret_cast<void***>(&edx37) = *reinterpret_cast<void***>(eax35) + 1, edx38 = edx37 & 0xff, *reinterpret_cast<unsigned char*>(&edx38) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx38 + 0x459418) & 2), edx37 = edx38 & 0xff, !edx37) && *reinterpret_cast<void***>(eax35)) {
        ++eax35;
    }
    while (*reinterpret_cast<void***>(&edx37) = *reinterpret_cast<void***>(eax35) + 1, edx39 = edx37 & 0xff, *reinterpret_cast<unsigned char*>(&edx39) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx39 + 0x459418) & 2), edx37 = edx39 & 0xff, !!edx37) {
        ++eax35;
    }
    g477b30 = eax35;
    if (esi2) {
        v40 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp36) - 4 + 4);
        fun_449d72(ebx41, v40, 0x104, 0, v16, 0x104, v42, v43);
        eax47 = fun_444556(ecx, ebx41, v40, 0x104, 0, v16, 0x104, v44, v45, v46);
        g477b38 = eax47;
    }
    eax48 = fun_449d66(0, v16, 0x104);
    ebx49 = eax48;
    edx50 = 0;
    eax51 = eax48 >> 16 & 0xffff;
    *reinterpret_cast<int16_t*>(&edx50) = *reinterpret_cast<int16_t*>(&eax51);
    g477b69 = *reinterpret_cast<int16_t*>(&ebx49);
    edx52 = edx50 >> 8;
    g477b67 = *reinterpret_cast<signed char*>(&edx52);
    g477b68 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax51) & 15);
    eax7 = reinterpret_cast<void**>(1);
    goto addr_4453e5_3;
}

int32_t GetCPInfo = 0x220ed6;

int32_t fun_449d18(int32_t a1) {
    goto GetCPInfo;
}

int32_t LocalFree = 0x22105a;

int32_t fun_449cca() {
    goto LocalFree;
}

void** g477e48 = reinterpret_cast<void**>(0);

struct s576* fun_449743(struct s576* ecx) {
    void** esi2;
    int32_t eax3;
    struct s576* eax4;
    signed char* edi5;
    signed char* eax6;
    uint32_t ecx7;
    void* edi8;
    void** ecx9;
    uint32_t eax10;

    esi2 = g477e48;
    if (!esi2 || !eax3) {
        addr_44979b_2:
        eax4 = reinterpret_cast<struct s576*>(0);
    } else {
        edi5 = eax6;
        ecx7 = reinterpret_cast<uint32_t>(ecx) - reinterpret_cast<uint32_t>(ecx) - 1;
        do {
            if (!ecx7) 
                break;
            --ecx7;
            ++edi5;
            ++esi2;
        } while (*edi5);
        edi8 = reinterpret_cast<void*>(~ecx7 - 1);
        while (ecx9 = *reinterpret_cast<void***>(esi2), !!ecx9) {
            eax10 = fun_444232(ecx9);
            if (eax10) 
                goto addr_449792_9;
            *reinterpret_cast<signed char*>(&eax10) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx9) + reinterpret_cast<uint32_t>(edi8));
            if ((eax10 & 0xff) == 61) 
                goto addr_44978b_11;
            addr_449792_9:
            esi2 = esi2 + 4;
        }
        goto addr_44979b_2;
    }
    addr_44979d_12:
    return eax4;
    addr_44978b_11:
    eax4 = reinterpret_cast<struct s576*>(reinterpret_cast<uint32_t>(edi8) + 1 + reinterpret_cast<unsigned char>(ecx9));
    goto addr_44979d_12;
}

struct s885 {
    signed char[4] pad4;
    int32_t f4;
};

struct s886 {
    signed char[4] pad4;
    int32_t f4;
    int32_t f8;
    int32_t fc;
};

struct s515* fun_447dab(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    struct s885* eax10;
    void** v11;
    void*** eax12;
    void** edx13;
    void** ebx14;
    struct s515* eax15;
    struct s886* eax16;

    if (eax10->f4) {
        v11 = *eax12;
        eax15 = fun_449d48(v11, edx13, ecx, ebx14, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    }
    eax16->f4 = 0;
    eax16->f8 = 0;
    eax16->fc = 0;
    return eax15;
}

struct s887 {
    signed char[15] pad15;
    unsigned char ff;
};

struct s888 {
    signed char[116] pad116;
    int32_t f74;
};

struct s889 {
    signed char[32] pad32;
    int32_t f20;
};

struct s890 {
    signed char[200] pad200;
    int32_t fc8;
};

struct s891 {
    signed char[112] pad112;
    int32_t f70;
    void** f74;
    signed char[11] pad128;
    void** f80;
    signed char[3] pad132;
    void** f84;
    signed char[3] pad136;
    void** f88;
    signed char[3] pad140;
    void** f8c;
    signed char[3] pad144;
    void** f90;
    signed char[3] pad148;
    void** f94;
    signed char[3] pad152;
    void** f98;
    signed char[3] pad156;
    void** f9c;
    signed char[3] pad160;
    void** fa0;
    signed char[3] pad164;
    void** fa4;
    signed char[3] pad168;
    void** fa8;
};

struct s892 {
    signed char[200] pad200;
    int32_t fc8;
};

struct s893 {
    signed char[200] pad200;
    int32_t fc8;
};

void** fun_426380(void** ecx) {
    struct s887* eax2;
    struct s888* eax3;
    struct s889* eax4;
    struct s890* eax5;
    struct s891* eax6;
    struct s891* eax7;
    struct s892* eax8;
    struct s893* eax9;
    void** eax10;
    int32_t edx11;
    int1_t zf12;
    int1_t zf13;
    int1_t zf14;
    int1_t zf15;
    void** ebx16;
    void** esi17;
    void** edx18;

    if (!(eax2->ff & 1) || (eax3->f74 != 10 || !eax4->f20)) {
        eax5->fc8 = 0;
        eax6 = eax7;
        if (eax6->f70 == 6) 
            goto addr_426443_4;
    } else {
        eax8->fc8 = eax9->fc8 + 1;
        eax10 = fun_426420(ecx);
        if (!eax10) 
            goto addr_42640e_7; else 
            goto addr_4263bf_8;
    }
    if (eax6->f70 != 8) {
        edx11 = 1;
    } else {
        edx11 = 2;
    }
    addr_42611c_12:
    if (*reinterpret_cast<int32_t*>((eax6->f70 * 4 - eax6->f70) * 8 + 0x464cc8) == 5 || edx11 <= *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax6) + *reinterpret_cast<int32_t*>((eax6->f70 * 4 - eax6->f70) * 8 + 0x464cc8) * 4 + 0x9c)) {
        return 1;
    } else {
        do {
            if (!eax6->f8c || (!eax6->fa4 || (zf12 = 0 == g481250, !zf12))) {
                if (!eax6->f98 || (reinterpret_cast<signed char>(2) >= reinterpret_cast<signed char>(eax6->fa0) || (zf13 = 0 == g481264, zf13))) {
                    if (!eax6->f84 || !eax6->f9c) {
                        if (!eax6->f80 || !eax6->fa0) {
                            ecx = eax6->f9c;
                            if (!ecx) {
                                if (ecx == eax6->f94) {
                                    if (eax6->f94 == eax6->f88 || eax6->f94 == eax6->fa8) {
                                        if (!eax6->f90 || (reinterpret_cast<signed char>(eax6->fa4) <= reinterpret_cast<signed char>(40) || (zf14 = 0 == g481250, !zf14))) {
                                            eax6->f74 = reinterpret_cast<void**>(0);
                                        } else {
                                            eax6->f74 = reinterpret_cast<void**>(6);
                                        }
                                    } else {
                                        eax6->f74 = reinterpret_cast<void**>(4);
                                    }
                                } else {
                                    eax6->f74 = reinterpret_cast<void**>(7);
                                }
                            } else {
                                eax6->f74 = reinterpret_cast<void**>(1);
                            }
                        } else {
                            eax6->f74 = reinterpret_cast<void**>(2);
                        }
                    } else {
                        eax6->f74 = reinterpret_cast<void**>(3);
                    }
                } else {
                    eax6->f74 = reinterpret_cast<void**>(8);
                }
            } else {
                eax6->f74 = reinterpret_cast<void**>(5);
            }
        } while (eax6->f74 == 10);
        fun_425fc0(ecx);
        return 0;
    }
    addr_426443_4:
    edx11 = 40;
    goto addr_42611c_12;
    addr_42640e_7:
    return eax10;
    addr_4263bf_8:
    zf15 = g618240 == 0;
    if (!zf15 && (ebx16 = g482a64, !ebx16)) {
        g618240(3, ebx16, ebx16, ebx16);
    }
    fun_424ae0(ecx, esi17, edx18);
    fun_425fc0(ecx);
    eax10 = fun_41ed10(ecx);
    goto addr_42640e_7;
}

void fun_411db4() {
}

void fun_412498() {
}

void fun_416574() {
}

void fun_416b64() {
}

void fun_416e18() {
}

void fun_417788() {
}

void fun_417f6c() {
}

int32_t CallWindowProcA = 0x220aa4;

int32_t fun_419e74(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    switch (a2 - 0x201) {
    default:
        CallWindowProcA();
        goto a4;
    case 0:
        GetWindowLongA();
        PostMessageA();
        goto 0xf4;
    case 3:
        GetWindowLongA();
        PostMessageA();
        goto 0xf4;
    case 4:
        return 1;
    case 6:
        GetWindowLongA();
        PostMessageA();
        goto 0xf4;
    }
}

struct s895 {
    signed char[74] pad74;
    int32_t f4a;
};

struct s894 {
    signed char[12] pad12;
    void** fc;
    signed char[3] pad16;
    struct s895* f10;
    signed char[8] pad28;
    void** f1c;
    signed char[3] pad32;
    void** f20;
    signed char[3] pad36;
    void** f24;
};

void** fun_41e4fc(void** ecx) {
    void** eax2;
    struct s894* eax3;
    void** esi4;
    void** edx5;
    void** eax6;
    void** eax7;
    void** eax8;
    void** eax9;
    void** eax10;
    void** edx11;
    void** eax12;

    eax2 = eax3->f1c;
    switch (eax2 + 1) {
    case 0:
        ecx = reinterpret_cast<void**>(0);
        eax2 = fun_420ca0(0, 1, eax2, esi4, edx5);
        if (!reinterpret_cast<int1_t>(eax2 == 2)) {
            if (!reinterpret_cast<int1_t>(eax2 == 1) || (eax2 = eax3->fc, reinterpret_cast<unsigned char>(eax2) >= reinterpret_cast<unsigned char>(2)) && (reinterpret_cast<unsigned char>(eax2) <= reinterpret_cast<unsigned char>(2) || eax2 == 7)) {
                addr_41e69a_5:
                return eax2;
            } else {
                eax3->f1c = reinterpret_cast<void**>(1);
                eax6 = fun_4312d0(ecx, esi4);
                return eax6;
            }
        }
        eax2 = eax3->fc;
        if (reinterpret_cast<unsigned char>(eax2) > reinterpret_cast<unsigned char>(7)) 
            goto addr_41e69a_5;
        goto *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax2) * 4 + 0x41e4c0);
        eax3->f1c = reinterpret_cast<void**>(0);
        eax3->f24 = reinterpret_cast<void**>(0x41a);
        return eax2;
        eax3->f10->f4a = 0;
        fun_42af50(ecx);
        eax7 = fun_4312d0(ecx, esi4);
        return eax7;
    case 1:
        ecx = eax3->f24 - 1;
        eax3->f24 = ecx;
        if (ecx) 
            goto addr_41e69a_5;
        if (reinterpret_cast<unsigned char>(eax3->fc) < reinterpret_cast<unsigned char>(1)) {
            if (!eax3->fc) {
                eax3->f1c = reinterpret_cast<void**>(0xffffffff);
                eax8 = fun_4312d0(ecx, esi4);
                return eax8;
            } else {
                return eax3->fc;
            }
        } else {
            if (reinterpret_cast<unsigned char>(eax3->fc) > reinterpret_cast<unsigned char>(1)) {
                if (eax3->fc == 5) {
                    eax3->f1c = reinterpret_cast<void**>(0xffffffff);
                    eax9 = fun_4312d0(ecx, esi4);
                    return eax9;
                } else {
                    return eax3->fc;
                }
            }
        }
    case 2:
        ecx = reinterpret_cast<void**>(0);
        eax2 = fun_420ca0(0, 1, eax2, esi4, edx5);
        if (!reinterpret_cast<int1_t>(eax2 == 2)) 
            goto addr_41e69a_5;
        eax2 = eax3->fc;
        if (reinterpret_cast<unsigned char>(eax2) > reinterpret_cast<unsigned char>(6)) 
            goto addr_41e69a_5;
        switch (eax2) {
        case 0:
        case 5:
            eax3->f1c = reinterpret_cast<void**>(0);
            eax2 = eax3->f20;
            eax3->f24 = eax2;
            goto addr_41e69a_5;
        case 1:
        case 3:
        case 6:
            eax3->f10->f4a = 0;
            eax10 = fun_42af50(ecx);
            return eax10;
        case 2:
        case 4:
            goto 0x41e69a;
        }
    case 3:
        edx11 = eax3->f24 - 1;
        eax3->f24 = edx11;
        if (!edx11 && (eax2 = eax3->fc, reinterpret_cast<int1_t>(eax2 == 4))) {
            eax3->fc = edx11;
            eax3->f1c = reinterpret_cast<void**>(1);
            eax12 = fun_4312d0(ecx, esi4);
            return eax12;
        }
    }
}

void fun_41e79c() {
}

void fun_41e968() {
}

void** fun_4205e4(int32_t ecx) {
    void** eax2;
    void** eax3;
    void** ebx4;
    int1_t zf5;
    void** eax6;
    int1_t zf7;
    int1_t zf8;
    int1_t zf9;
    int1_t zf10;
    int1_t zf11;
    void** ecx12;
    int32_t edx13;
    int1_t zf14;
    void** eax15;
    void** eax16;
    void** eax17;
    void** eax18;
    void** eax19;
    void** eax20;
    int1_t zf21;

    eax2 = eax3;
    ebx4 = eax2;
    zf5 = g481264 == 0;
    if (zf5) {
        eax6 = g482a80;
        eax2 = eax6 - 1;
        switch (eax2) {
        default:
            zf7 = reinterpret_cast<int1_t>(g482a5c == 8);
            break;
        case 0:
            zf8 = reinterpret_cast<int1_t>(g482a5c == 8);
            if (!zf8) 
                goto addr_4207f8_6;
            zf7 = reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx4 + 88) == 15);
            break;
        case 1:
            zf9 = reinterpret_cast<int1_t>(g482a5c == 8);
            if (!zf9) 
                goto addr_4207f8_6; else 
                goto addr_420656_9;
        case 2:
            zf10 = reinterpret_cast<int1_t>(g482a5c == 8);
            if (!zf10) 
                goto addr_4207f8_6;
            zf7 = reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx4 + 88) == 19);
            break;
        case 3:
            eax2 = g482a5c;
            if (reinterpret_cast<unsigned char>(eax2) < reinterpret_cast<unsigned char>(6)) 
                goto addr_4207f8_6;
            if (reinterpret_cast<unsigned char>(eax2) <= reinterpret_cast<unsigned char>(6)) {
                addr_420656_9:
                zf7 = reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx4 + 88) == 21);
            } else {
                if (!reinterpret_cast<int1_t>(eax2 == 8)) 
                    goto addr_4207f8_6;
                zf7 = reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx4 + 88) == 19);
            }
        }
    } else {
        zf11 = reinterpret_cast<int1_t>(g482a5c == 7);
        if (!zf11) 
            goto addr_4207f8_6;
        if (*reinterpret_cast<void***>(eax2 + 88) == 8) 
            goto addr_42069b_18; else 
            goto addr_42061a_19;
    }
    addr_420695_20:
    if (!zf7) 
        goto addr_4207f8_6;
    addr_42069b_18:
    ecx12 = reinterpret_cast<void**>(0);
    eax2 = reinterpret_cast<void**>(0);
    edx13 = 0;
    do {
        if (!*reinterpret_cast<void***>(eax2 + 0x482978)) 
            continue;
        if (*reinterpret_cast<int32_t*>(edx13 + reinterpret_cast<int32_t>("H")) > 0) 
            break;
        eax2 = eax2 + 4;
        edx13 = edx13 + 0x118;
        ++ecx12;
    } while (reinterpret_cast<signed char>(eax2) < reinterpret_cast<signed char>(16));
    if (ecx12 == 4) {
        addr_4207f8_6:
        return eax2;
    } else {
        eax2 = g484cfc;
        if (eax2 == "H") {
            addr_420700_26:
            zf14 = g481264 == 0;
            if (zf14) {
                eax15 = g482a80;
                if (reinterpret_cast<unsigned char>(eax15) >= reinterpret_cast<unsigned char>(1)) {
                    if (reinterpret_cast<unsigned char>(eax15) <= reinterpret_cast<unsigned char>(1)) {
                        eax16 = fun_420f30(0x29a);
                        return eax16;
                    } else {
                        if (eax15 == 4) {
                            eax17 = g482a5c;
                            if (reinterpret_cast<unsigned char>(eax17) >= reinterpret_cast<unsigned char>(6)) {
                                if (reinterpret_cast<unsigned char>(eax17) <= reinterpret_cast<unsigned char>(6)) {
                                    eax18 = fun_41e7a0(ecx12);
                                    return eax18;
                                } else {
                                    if (eax17 == 8) {
                                        eax19 = fun_420f30(ecx12);
                                        return eax19;
                                    } else {
                                        eax20 = fun_417720(ecx12);
                                        return eax20;
                                    }
                                }
                            }
                        } else {
                            goto addr_4207f3_38;
                        }
                    }
                }
            }
        } else {
            do {
                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax2 + 8) == 0x4250d0)) 
                    continue;
                if (eax2 == ebx4) 
                    continue;
                if (*reinterpret_cast<void***>(eax2 + 88) != *reinterpret_cast<void***>(ebx4 + 88)) 
                    continue;
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax2 + 0x6c)) > reinterpret_cast<signed char>(0)) 
                    goto addr_4207f8_6;
                eax2 = *reinterpret_cast<void***>(eax2 + 4);
            } while (!reinterpret_cast<int1_t>(eax2 == "H"));
            goto addr_420700_26;
        }
    }
    zf21 = reinterpret_cast<int1_t>(g482a5c == 7);
    if (!zf21) 
        goto addr_4207f3_38;
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx4 + 88) == 8)) 
        goto addr_42071e_46;
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx4 + 88) == 20)) {
        addr_4207f3_38:
        eax2 = fun_417720(ecx12);
        goto addr_4207f8_6;
    } else {
        eax2 = fun_420f30(ecx12);
        goto addr_4207f8_6;
    }
    addr_42071e_46:
    eax2 = fun_420f30(ecx12);
    goto addr_4207f8_6;
    addr_42061a_19:
    zf7 = reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx4 + 88) == 20);
    goto addr_420695_20;
}

void fun_420f28() {
}

void fun_421928() {
}

void fun_424084() {
}

void fun_4296c4() {
}

void fun_42aac4() {
}

void fun_42b64a() {
    return;
}

void fun_42e506(void** ecx) {
    void** eax2;

    eax2 = fun_42cf60(ecx);
    g5ee6d4 = eax2;
    g5ee6b0 = reinterpret_cast<void**>(0x640000);
}

void fun_434a56(void** ecx, void** a2, void** a3) {
    fun_442b98(ecx, 0x477888, __return_address(), a2, a3);
    goto fun_442fdc;
}

int32_t g60b010 = 0;

void** g60b3c4 = reinterpret_cast<void**>(0);

void** g60b3c8 = reinterpret_cast<void**>(0);

void* g60b4c8 = reinterpret_cast<void*>(0);

int32_t AdjustWindowRect = 0x220a5a;

void* g60b3cc = reinterpret_cast<void*>(0);

void** g60b3d0 = reinterpret_cast<void**>(0);

void** g60b3d8 = reinterpret_cast<void**>(0);

void** g60b3d4 = reinterpret_cast<void**>(0);

struct s896 {
    signed char f0;
    signed char f1;
};

struct s897 {
    signed char f0;
    signed char f1;
};

int32_t DestroyWindow = 0x220b10;

int32_t GetSystemInfo = 0x220740;

struct s898 {
    signed char[8] pad8;
    int32_t f8;
    int32_t fc;
    signed char[68] pad84;
    int32_t f54;
};

int32_t fun_439750(struct s898* a1);

int32_t GetDeviceCaps = 0x2209ae;

void** g60b434 = reinterpret_cast<void**>(0);

int32_t g60b00c = 0;

int32_t g4775cc = 1;

int32_t GetCurrentThreadId = 0x220708;

int32_t SetWindowsHookExA = 0x220d64;

void** g60b454 = reinterpret_cast<void**>(0);

void fun_43a1e4(void** ecx, void** a2) {
    int32_t v3;
    int32_t ebx4;
    void** ebp5;
    void** esi6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    int32_t ebx14;
    void* esp15;
    void** ecx16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** eax25;
    void** ecx26;
    int32_t eax27;
    int32_t v28;
    int32_t v29;
    int32_t v30;
    int32_t v31;
    int32_t v32;
    int32_t v33;
    int32_t v34;
    int32_t v35;
    void* v36;
    void** v37;
    int32_t v38;
    int32_t v39;
    void** eax40;
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
    void** v52;
    void** v53;
    int32_t v54;
    int32_t v55;
    int32_t v56;
    int32_t v57;
    int32_t v58;
    int32_t v59;
    int32_t v60;
    int32_t v61;
    void* v62;
    void** v63;
    int32_t v64;
    int32_t v65;
    void** eax66;
    void** v67;
    void** v68;
    void** v69;
    void** v70;
    void** v71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** v103;
    void** v104;
    void** v105;
    void** v106;
    void** eax107;
    void* esp108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** v132;
    void** v133;
    void** v134;
    void** v135;
    void** eax136;
    void* esp137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
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
    void** v159;
    void** v160;
    void** v161;
    void** v162;
    void** v163;
    void** v164;
    void** eax165;
    int32_t eax166;
    void** eax167;
    void** eax168;
    void** v169;
    void* esp170;
    void** ecx171;
    void** v172;
    int16_t ax173;
    void*** esp174;
    void** v175;
    void** v176;
    void* v177;
    void** v178;
    void** v179;
    void* v180;
    uint32_t v181;
    void** v182;
    void** v183;
    uint32_t v184;
    void** eax185;
    void* ebx186;
    void** edx187;
    void** v188;
    void** v189;
    void** v190;
    void** v191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** eax196;
    void** esi197;
    struct s896* edi198;
    struct s897* esi199;
    void* esp200;
    signed char al201;
    signed char al202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** v208;
    void** v209;
    void** v210;
    void** v211;
    void** v212;
    void** v213;
    void** v214;
    void** v215;
    void** v216;
    void** v217;
    void** v218;
    void** v219;
    void** v220;
    void** v221;
    void** v222;
    void** v223;
    void** v224;
    void** v225;
    void** v226;
    void** v227;
    void** v228;
    void** v229;
    void** eax230;
    void** esi231;
    void*** esp232;
    int32_t eax233;
    void* esp234;
    void** edi235;
    void** ebp236;
    void** eax237;
    void** edx238;
    void* esp239;
    uint32_t ebp240;
    uint32_t v241;
    void** v242;
    void** v243;
    void** v244;
    void** eax245;
    void** ecx246;
    int32_t eax247;
    void** v248;
    void** v249;
    void** v250;
    void** eax251;
    void* esp252;
    void** v253;
    void*** esp254;
    void** v255;
    void** eax256;
    void** esi257;
    void** edi258;
    void** eax259;
    void** ecx260;
    void** eax261;
    void** edx262;
    void** eax263;
    void* esp264;
    void** eax265;
    void** v266;
    void** v267;
    void** eax268;
    void** v269;
    void** edx270;
    void** v271;
    void** eax272;
    void* esp273;
    void** v274;
    void* esp275;
    void** ecx276;
    void** ebx277;
    void** esi278;
    uint32_t ebx279;
    uint32_t eax280;
    void** eax281;
    void** esi282;
    void** edi283;
    uint32_t ebx284;
    uint32_t eax285;
    void** eax286;
    void** esi287;
    void** edi288;
    uint32_t ebx289;
    uint32_t eax290;
    void** eax291;
    void** ebp292;
    int1_t less_or_equal293;
    void** ebx294;
    uint32_t eax295;
    uint32_t ebx296;
    void** eax297;
    int32_t eax298;
    int32_t v299;
    int32_t eax300;
    uint32_t v301;
    void** eax302;
    int32_t eax303;
    void** eax304;
    void** eax305;
    void** eax306;
    void** eax307;
    void** eax308;
    void** esi309;
    void** edi310;
    uint32_t ebx311;
    uint32_t eax312;
    void** eax313;
    void** esi314;
    void** edi315;
    uint32_t ebx316;
    uint32_t eax317;
    void** eax318;
    void** esi319;
    void** edi320;
    uint32_t ebx321;
    uint32_t eax322;
    void** eax323;
    void** ebp324;
    int1_t less_or_equal325;
    void** ebx326;
    uint32_t eax327;
    uint32_t ebx328;
    void** eax329;
    void** eax330;
    void** eax331;
    void** eax332;
    void** eax333;
    void** eax334;
    int1_t zf335;
    int1_t zf336;
    void** eax337;
    int32_t eax338;
    int32_t eax339;
    int32_t eax340;
    void** edx341;
    void** eax342;
    void* esp343;
    void* esp344;
    void** v345;
    void** v346;
    void** v347;
    void** v348;
    void** v349;
    void** v350;
    void** v351;
    void** v352;
    void** v353;
    void** v354;
    void** v355;
    void** v356;
    void** v357;
    void** v358;
    void** v359;
    void** v360;
    void** v361;
    void** v362;
    void** v363;
    void** v364;
    void** v365;
    void** v366;
    void** v367;
    void** v368;
    void** v369;
    void** v370;
    void** v371;
    void** v372;
    void** eax373;

    v3 = ebx4;
    ebp5 = a2;
    esi6 = v7;
    g60b438 = ebp5;
    fun_437a90(ecx, "Doom95 startup: %s", esi6, v8, v9, v10, v11, v12, v13);
    ebx14 = 4;
    GetAsyncKeyState(27);
    esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 0x67c - 4 - 4 - 4 + 4 + 8 - 4 - 4 + 4);
    ecx16 = reinterpret_cast<void**>(1);
    g60b010 = reinterpret_cast<int32_t>("DOOM95.EXE");
    do {
        eax25 = fun_444434(ecx16, 27, v17, v18, v19, v20, v21, v22, v23, v24);
        esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) - 4 + 4);
        *reinterpret_cast<void***>(ebx14 + 0x60b010) = eax25;
        if (!eax25) 
            break;
        ebx14 = ebx14 + 4;
        ++ecx16;
    } while (ebx14 < 0x100);
    goto addr_43a33a_4;
    addr_43a254_5:
    g4835f4 = ecx16;
    g4835f8 = reinterpret_cast<void**>(0x60b010);
    ecx26 = esi6;
    eax27 = fun_43b540(ecx26, 27);
    if (!eax27) 
        goto addr_43afcd_6;
    eax40 = fun_4407f0(ecx26, 27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39);
    fun_440840(ecx26, eax40, 27, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53);
    eax66 = fun_4407f0(ecx26, 27, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65);
    fun_440840(ecx26, eax66, 27, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79);
    g60b6e0 = 0;
    eax107 = fun_41d410(ecx26, 27, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97, v98, v99, v100, v101, v102, v103, v104, v105, v106);
    esp108 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) - 4 + 4 - 4 + 4 - 4 - 4 + 4 + 4 - 4 + 4 - 4 - 4 + 4 + 4 - 4 + 4);
    if (!eax107) {
        eax136 = fun_41d410(ecx26, 27, v109, v110, v111, v112, v113, v114, v115, v116, v117, v118, v119, v120, v121, v122, v123, v124, v125, v126, v127, v128, v129, v130, v131, v132, v133, v134, v135);
        esp137 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp108) - 4 + 4);
        if (eax136 || (eax165 = fun_41d410(ecx26, 27, v138, v139, v140, v141, v142, v143, v144, v145, v146, v147, v148, v149, v150, v151, v152, v153, v154, v155, v156, v157, v158, v159, v160, v161, v162, v163, v164), esp137 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp137) - 4 + 4), !!eax165)) {
            addr_43a374_9:
            g60b6dc = 1;
        } else {
            eax166 = fun_43d4e0(ecx26, 27);
            esp137 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp137) - 4 + 4);
            if (!eax166) 
                goto addr_43afcd_6;
            g60b6e0 = 1;
        }
        eax167 = reinterpret_cast<void**>(GetSystemMetrics(ecx26, 0, 27));
        g60b3c4 = eax167;
        eax168 = reinterpret_cast<void**>(GetSystemMetrics(ecx26, 1, 0, 27));
        g60b3c8 = eax168;
        v169 = ebp5;
        LoadIconA(ecx26, v169, 0x69, 1, 0, 27);
        LoadCursorA(ecx26, 0, 0x7f00, v169, 0x69, 1, 0, 27);
        GetStockObject(ecx26, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
        esp170 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp137) - 4 - 4 + 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4);
        ecx171 = reinterpret_cast<void**>(0);
        v172 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp170) + 0x600);
        ax173 = reinterpret_cast<int16_t>(RegisterClassA(v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27));
        esp137 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp170) - 4 - 4 + 4);
        if (ax173) {
            esp174 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp137) - 4 - 4);
            v175 = reinterpret_cast<void**>(0x80ca0000);
            v176 = reinterpret_cast<void**>(esp174 + 0x670);
            v177 = g60b4c8;
            AdjustWindowRect(v176, 0x80ca0000, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
            v178 = reinterpret_cast<void**>(0);
            v179 = ebp5;
            g60b3cc = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v180) - v181);
            v182 = reinterpret_cast<void**>(0);
            v183 = reinterpret_cast<void**>(0);
            g60b3d0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v177) - v184);
            eax185 = g60b3d8;
            ecx171 = g60b3d0;
            ebx186 = g60b3cc;
            edx187 = g60b3d4;
            v188 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax185) + reinterpret_cast<unsigned char>(ecx171));
            v189 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx187) + reinterpret_cast<uint32_t>(ebx186));
            v190 = reinterpret_cast<void**>(0);
            v191 = reinterpret_cast<void**>(0);
            v192 = reinterpret_cast<void**>(0x80ca0000);
            v193 = reinterpret_cast<void**>("Doom 95");
            v194 = reinterpret_cast<void**>("Doom95Class");
            v195 = reinterpret_cast<void**>(0x40000);
            eax196 = reinterpret_cast<void**>(CreateWindowExA(0x40000, "Doom95Class", "Doom 95", 0x80ca0000, 0, 0, v189, v188, 0, 0, v179, 0, v176, 0x80ca0000, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27));
            esp137 = reinterpret_cast<void*>(esp174 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            if (eax196) 
                goto addr_43a4cc_26;
        } else {
            eax196 = reinterpret_cast<void**>(0);
        }
    } else {
        esi197 = g4835f8;
        edi198 = reinterpret_cast<struct s896*>(0x60b4dc);
        esi199 = *reinterpret_cast<struct s897**>(reinterpret_cast<uint32_t>(esi197 + reinterpret_cast<unsigned char>(eax107) * 4) + 4);
        esp200 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp108) - 4);
        do {
            al201 = esi199->f0;
            edi198->f0 = al201;
            if (!al201) 
                break;
            al202 = esi199->f1;
            ++esi199;
            edi198->f1 = al202;
            ++edi198;
        } while (al202);
        eax230 = fun_41d410(ecx26, 27, v203, v204, v205, v206, v207, v208, v209, v210, v211, v212, v213, v214, v215, v216, v217, v218, v219, v220, v221, v222, v223, v224, v225, v226, v227, v228, v229);
        esp137 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp200) + 4 - 4 + 4);
        if (!eax230) 
            goto addr_43a310_32; else 
            goto addr_43a2fc_33;
    }
    addr_43a4e6_34:
    if (!eax196) 
        goto addr_43afcd_6;
    while (v175 = reinterpret_cast<void**>(0), v176 = reinterpret_cast<void**>(0), esi231 = g60b70c, esp232 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp137) - 4 - 4 - 4 - 4), v178 = esi231, v179 = reinterpret_cast<void**>(esp232 + 0x65c), eax233 = reinterpret_cast<int32_t>(PeekMessageA(v179, v178, 0, 0, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27)), esp234 = reinterpret_cast<void*>(esp232 - 4 - 4 + 4), !!eax233) {
        DispatchMessageA(reinterpret_cast<int32_t>(esp234) + 0x64c, v179, v178, 0, 0, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
        esp137 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp234) - 4 - 4 + 4);
    }
    fun_41aba0(ecx171, v179, v178, 0, 0, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    edi235 = g60b70c;
    v182 = edi235;
    DestroyWindow(v182, v179, v178, 0, 0, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    v183 = reinterpret_cast<void**>(10);
    ebp236 = g5f22d0;
    v188 = ebp236;
    ShowWindow(v188, 10, v182, v179, v178, 0, 0, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    eax237 = g5f22d0;
    v189 = eax237;
    UpdateWindow(v189, v188, 10, v182, v179, v178, 0, 0, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    edx238 = g5f22d0;
    v190 = edx238;
    SetFocus(v190, v189, v188, 10, v182, v179, v178, 0, 0, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    esp239 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp234) - 4 + 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 - 4 - 4 + 4);
    v191 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp239) + 0x628);
    GetSystemInfo(v191, v190, v189, v188, 10, v182, v179, v178, 0, 0, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    ebp240 = reinterpret_cast<uint1_t>(v241 >= 0x24a);
    eax245 = fun_41d410(ecx171, v191, v190, v189, v188, 10, v182, v179, v178, 0, 0, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27, 0, v242, 0, v243, 0x80ca0000, 1, v244, 4);
    esp137 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp239) - 4 - 4 + 4 - 4 + 4);
    if (eax245) 
        goto addr_43a58b_39;
    addr_43a590_40:
    ecx246 = g60b264;
    if (ecx246) {
        addr_43a62f_41:
        eax247 = 1;
    } else {
        eax251 = fun_41d410(ecx246, v191, v190, v189, v188, 10, v182, v179, v178, 0, 0, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27, 0, v248, 0, v249, 0x80ca0000, 1, v250, 4);
        esp252 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp137) - 4 + 4);
        if (!eax251) {
            v253 = ecx246;
            esp254 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp252) - 4 - 4 - 4);
            v255 = ecx246;
        } else {
            v253 = ecx246;
            esp254 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp252) - 4 - 4 - 4);
            v255 = reinterpret_cast<void**>(2);
        }
        eax256 = fun_449dc0(v255, 0x60b264, v253, v191, v190, v189, v188, 10, v182, v179, v178, 0, 0, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
        g60b3a0 = eax256;
        esi257 = g60b264;
        edi258 = g60b3a0;
        fun_437a90(ecx246, "DirectDrawCreate %d %p", edi258, esi257, v255, 0x60b264, v253, v191, v190, ecx246, "DirectDrawCreate %d %p", edi258, esi257, v255, 0x60b264, v253, v191, v190);
        eax259 = g60b3a0;
        esp137 = reinterpret_cast<void*>(esp254 - 4 + 4 - 4 - 4 - 4 - 4 + 4 + 12);
        if (!eax259) 
            goto addr_43a62f_41; else 
            goto addr_43a5eb_46;
    }
    addr_43a634_47:
    if (!eax247) {
        addr_43afcd_6:
        goto v3;
    } else {
        v192 = reinterpret_cast<void**>(85);
        ecx260 = g5f22d0;
        eax261 = g60b264;
        v193 = ecx260;
        edx262 = *reinterpret_cast<void***>(eax261);
        v194 = eax261;
        eax263 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx262 + 80)(v194, v193, 85, v191, v190, v189, v188, 10, v182, v179, v178, 0, 0, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27));
        esp264 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp137) - 4 - 4 - 4 - 4 + 4);
        g60b3a0 = eax263;
        if (!eax263) {
            g60b254 = eax263;
            eax265 = eax263;
            do {
                eax265 = eax265 + 8;
                *reinterpret_cast<void***>(eax265 + 0x60b110) = reinterpret_cast<void**>(0);
                *reinterpret_cast<void***>(eax265 + 0x60b10c) = reinterpret_cast<void**>(0);
            } while (!reinterpret_cast<int1_t>(eax265 == 0xa0));
            v195 = reinterpret_cast<void**>(fun_439750);
            v266 = reinterpret_cast<void**>(0);
            v267 = reinterpret_cast<void**>(0);
            eax268 = g60b264;
            v269 = reinterpret_cast<void**>(0);
            edx270 = *reinterpret_cast<void***>(eax268);
            v271 = eax268;
            eax272 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx270 + 32)(v271, 0, 0, 0, fun_439750, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27));
            g60b3a0 = eax272;
            esp273 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp264) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4);
            g60b430 = reinterpret_cast<void**>(1);
            wsprintfA(reinterpret_cast<int32_t>(esp273) + 0x208, "EnumerateVideoModes: EnumDisplayModes %d", reinterpret_cast<unsigned char>(eax272) & 0xfff, v271, 0, 0, 0, fun_439750, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
            v274 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp273) - 4 - 4 + 4 + 12 + 0x200);
            fun_437a90(ecx260, v274, v271, 0, 0, 0, fun_439750, v194, v193, ecx260, v274, v271, 0, 0, 0, fun_439750, v194, v193);
            g60b430 = reinterpret_cast<void**>(0);
            fun_439a20(0, v271, 0, 0, 0, fun_439750, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
        } else {
            esp275 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp264) - 4 - 4);
            g60b430 = reinterpret_cast<void**>(1);
            wsprintfA(reinterpret_cast<int32_t>(esp275) + 8, "Set enum Coop %d", reinterpret_cast<unsigned char>(eax263) & 0xfff, v194, v193, 85, v191, v190, v189, v188, 10, v182, v179, v178, 0, 0, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
            fun_437a90(ecx260, reinterpret_cast<int32_t>(esp275) - 4 - 4 + 4 + 12, v194, v193, 85, v191, v190, v189, v188, ecx260, reinterpret_cast<int32_t>(esp275) - 4 - 4 + 4 + 12, v194, v193, 85, v191, v190, v189, v188);
            g60b430 = reinterpret_cast<void**>(0);
        }
        g4775d0 = reinterpret_cast<void**>(0xffffffff);
        g4775d8 = reinterpret_cast<void**>(0xffffffff);
        g4775d4 = reinterpret_cast<void**>(0xffffffff);
        g4775dc = reinterpret_cast<void**>(0xffffffff);
        if (ebp240) 
            goto addr_43a7e2_54;
        ecx276 = reinterpret_cast<void**>(0x140);
        ebx277 = g4775e0;
        if (reinterpret_cast<int1_t>(ebx277 == 1)) 
            goto addr_43a752_56;
    }
    esi278 = g60b254;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi278) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi278 == 0))) {
        ebx279 = reinterpret_cast<unsigned char>(esi278) * 8;
        eax280 = 0;
        do {
            if (0x140 == *reinterpret_cast<int32_t*>(eax280 + 0x60b1b4)) 
                goto addr_43a78b_60;
            if (*reinterpret_cast<int32_t*>(eax280 + 0x60b1b4) != 0x280) 
                continue;
            addr_43a78b_60:
            if (0x140 != *reinterpret_cast<int32_t*>(eax280 + 0x60b1b4)) 
                continue;
            if (*reinterpret_cast<int32_t*>(eax280 + 0x60b1b8) == 0xc8) 
                break;
            eax280 = eax280 + 8;
        } while (reinterpret_cast<int32_t>(eax280) < reinterpret_cast<int32_t>(ebx279));
        goto addr_43a76c_64;
    } else {
        goto addr_43a7a6_66;
    }
    eax281 = reinterpret_cast<void**>(1);
    addr_43a7b7_68:
    if (!eax281) {
        addr_43a7e2_54:
        if (ebp240) 
            goto addr_43a88f_69;
    } else {
        g4775d0 = reinterpret_cast<void**>(0x140);
        g4775d8 = reinterpret_cast<void**>(0x140);
        g4775d4 = reinterpret_cast<void**>(0xc8);
        g4775dc = reinterpret_cast<void**>(0xc8);
        goto addr_43a9d7_71;
    }
    esi282 = g4775e0;
    ecx276 = reinterpret_cast<void**>(0xf0);
    if (!reinterpret_cast<int1_t>(esi282 == 1)) {
        edi283 = g60b254;
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi283) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi283 == 0))) {
            ebx284 = reinterpret_cast<unsigned char>(edi283) * 8;
            eax285 = 0;
            do {
                if (0x140 == *reinterpret_cast<int32_t*>(eax285 + 0x60b1b4)) 
                    goto addr_43a838_76;
                if (*reinterpret_cast<int32_t*>(eax285 + 0x60b1b4) != 0x280) 
                    continue;
                addr_43a838_76:
                if (0x140 != *reinterpret_cast<int32_t*>(eax285 + 0x60b1b4)) 
                    continue;
                if (*reinterpret_cast<int32_t*>(eax285 + 0x60b1b8) == 0xf0) 
                    break;
                eax285 = eax285 + 8;
            } while (reinterpret_cast<int32_t>(eax285) < reinterpret_cast<int32_t>(ebx284));
            goto addr_43a819_80;
        } else {
            goto addr_43a853_82;
        }
    } else {
        eax286 = esi282;
        goto addr_43a864_84;
    }
    eax286 = reinterpret_cast<void**>(1);
    addr_43a864_84:
    if (!eax286) {
        addr_43a88f_69:
        esi287 = g4775e0;
        if (!reinterpret_cast<int1_t>(esi287 == 1)) {
            edi288 = g60b254;
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi288) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi288 == 0))) {
                ebx289 = reinterpret_cast<unsigned char>(edi288) * 8;
                eax290 = 0;
                do {
                    if (*reinterpret_cast<int32_t*>(eax290 + 0x60b1b4) == 0x140) 
                        goto addr_43a8dd_89;
                    if (0x280 != *reinterpret_cast<int32_t*>(eax290 + 0x60b1b4)) 
                        continue;
                    addr_43a8dd_89:
                    if (0x280 != *reinterpret_cast<int32_t*>(eax290 + 0x60b1b4)) 
                        continue;
                    if (*reinterpret_cast<int32_t*>(eax290 + 0x60b1b8) == 0x190) 
                        break;
                    eax290 = eax290 + 8;
                } while (reinterpret_cast<int32_t>(eax290) < reinterpret_cast<int32_t>(ebx289));
                goto addr_43a8be_93;
            } else {
                goto addr_43a8f8_95;
            }
        } else {
            eax291 = esi287;
            goto addr_43a909_97;
        }
    } else {
        g4775d0 = reinterpret_cast<void**>(0x140);
        g4775d8 = reinterpret_cast<void**>(0x140);
        g4775d4 = reinterpret_cast<void**>(0xf0);
        g4775dc = reinterpret_cast<void**>(0xf0);
        goto addr_43a9d7_71;
    }
    eax291 = reinterpret_cast<void**>(1);
    addr_43a909_97:
    if (!eax291) {
        ecx276 = reinterpret_cast<void**>(0x280);
        ebp292 = g4775e0;
        if (!reinterpret_cast<int1_t>(ebp292 == 1)) {
            less_or_equal293 = reinterpret_cast<signed char>(g60b254) <= reinterpret_cast<signed char>(0);
            if (!less_or_equal293) {
                ebx294 = g60b254;
                eax295 = 0;
                ebx296 = reinterpret_cast<unsigned char>(ebx294) * 8;
                do {
                    if (*reinterpret_cast<int32_t*>(eax295 + 0x60b1b4) == 0x140) 
                        goto addr_43a987_104;
                    if (0x280 != *reinterpret_cast<int32_t*>(eax295 + 0x60b1b4)) 
                        continue;
                    addr_43a987_104:
                    if (0x280 != *reinterpret_cast<int32_t*>(eax295 + 0x60b1b4)) 
                        continue;
                    if (*reinterpret_cast<int32_t*>(eax295 + 0x60b1b8) == 0x1e0) 
                        break;
                    eax295 = eax295 + 8;
                } while (reinterpret_cast<int32_t>(eax295) < reinterpret_cast<int32_t>(ebx296));
                goto addr_43a962_108;
            } else {
                goto addr_43a9a2_110;
            }
        } else {
            eax297 = ebp292;
            goto addr_43a9b3_112;
        }
    } else {
        ecx276 = reinterpret_cast<void**>(0x190);
        g4775d0 = reinterpret_cast<void**>(0x280);
        g4775d8 = reinterpret_cast<void**>(0x280);
        g4775d4 = reinterpret_cast<void**>(0x190);
        g4775dc = reinterpret_cast<void**>(0x190);
        goto addr_43a9d7_71;
    }
    eax297 = reinterpret_cast<void**>(1);
    addr_43a9b3_112:
    if (eax297) {
        g4775d0 = reinterpret_cast<void**>(0x280);
        g4775d8 = reinterpret_cast<void**>(0x280);
        g4775d4 = reinterpret_cast<void**>(0x1e0);
        g4775dc = reinterpret_cast<void**>(0x1e0);
    }
    addr_43a9d7_71:
    eax298 = fun_43d3d0(ecx276, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    if (eax298) {
        if (!v299) {
            g4775e0 = reinterpret_cast<void**>(1);
        } else {
            g4775e0 = reinterpret_cast<void**>(0);
        }
    }
    eax300 = fun_43d3d0(ecx276, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    if (eax300 && v301 <= 3) {
        switch (v301) {
        case 0:
            g4775d0 = reinterpret_cast<void**>(0x140);
            g4775d8 = reinterpret_cast<void**>(0x140);
            g4775d4 = reinterpret_cast<void**>(0xc8);
            g4775dc = reinterpret_cast<void**>(0xc8);
            break;
        case 1:
            g4775d0 = reinterpret_cast<void**>(0x140);
            g4775d8 = reinterpret_cast<void**>(0x140);
            g4775d4 = reinterpret_cast<void**>(0xf0);
            g4775dc = reinterpret_cast<void**>(0xf0);
            break;
        case 2:
            g4775d0 = reinterpret_cast<void**>(0x280);
            g4775d8 = reinterpret_cast<void**>(0x280);
            g4775d4 = reinterpret_cast<void**>(0x190);
            g4775dc = reinterpret_cast<void**>(0x190);
            break;
        case 3:
            ecx276 = reinterpret_cast<void**>(0x1e0);
            g4775d0 = reinterpret_cast<void**>(0x280);
            g4775d8 = reinterpret_cast<void**>(0x280);
            g4775d4 = reinterpret_cast<void**>(0x1e0);
            g4775dc = reinterpret_cast<void**>(0x1e0);
        }
    }
    v195 = reinterpret_cast<void**>(0);
    eax302 = reinterpret_cast<void**>(GetDC(0, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27));
    v266 = reinterpret_cast<void**>(12);
    v267 = eax302;
    eax303 = reinterpret_cast<int32_t>(GetDeviceCaps(v267, 12, 0, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27));
    if (eax303 == 8) {
        g60b434 = reinterpret_cast<void**>(1);
    } else {
        g4775e0 = reinterpret_cast<void**>(0);
        g60b434 = reinterpret_cast<void**>(0);
    }
    v269 = eax302;
    v271 = reinterpret_cast<void**>(0);
    ReleaseDC(0, v269, v267, 12, 0, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    eax304 = fun_41d410(ecx276, 0, v269, v267, 12, 0, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    if (!eax304) {
        addr_43abc9_129:
        eax305 = fun_41d410(ecx276, v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
        if (!eax305) {
            addr_43ac7b_130:
            eax306 = fun_41d410(ecx276, v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
            if (!eax306) {
                addr_43ad2d_131:
                eax307 = fun_41d410(ecx276, v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
                if (!eax307) {
                    addr_43addf_132:
                    eax308 = fun_41d410(ecx276, v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
                    if (eax308) {
                        ecx276 = reinterpret_cast<void**>(0x140);
                        g4775d0 = reinterpret_cast<void**>(0x140);
                        g4775d8 = reinterpret_cast<void**>(0x140);
                        g4775d4 = reinterpret_cast<void**>(0xc8);
                        g4775dc = reinterpret_cast<void**>(0xc8);
                        g4775e0 = reinterpret_cast<void**>(1);
                    }
                } else {
                    ecx276 = reinterpret_cast<void**>(0x280);
                    esi309 = g4775e0;
                    if (!reinterpret_cast<int1_t>(esi309 == 1)) {
                        edi310 = g60b254;
                        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi310) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi310 == 0))) {
                            ebx311 = reinterpret_cast<unsigned char>(edi310) * 8;
                            eax312 = 0;
                            do {
                                if (*reinterpret_cast<int32_t*>(eax312 + 0x60b1b4) == 0x140) 
                                    goto addr_43ad8d_138;
                                if (0x280 != *reinterpret_cast<int32_t*>(eax312 + 0x60b1b4)) 
                                    continue;
                                addr_43ad8d_138:
                                if (0x280 != *reinterpret_cast<int32_t*>(eax312 + 0x60b1b4)) 
                                    continue;
                                if (*reinterpret_cast<int32_t*>(eax312 + 0x60b1b8) == 0x1e0) 
                                    goto addr_43ada1_141;
                                eax312 = eax312 + 8;
                            } while (reinterpret_cast<int32_t>(eax312) < reinterpret_cast<int32_t>(ebx311));
                            goto addr_43ad6e_143;
                        } else {
                            goto addr_43ada8_145;
                        }
                    } else {
                        eax313 = esi309;
                        goto addr_43adb9_147;
                    }
                }
            } else {
                esi314 = g4775e0;
                ecx276 = reinterpret_cast<void**>(0x190);
                if (!reinterpret_cast<int1_t>(esi314 == 1)) {
                    edi315 = g60b254;
                    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi315) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi315 == 0))) {
                        ebx316 = reinterpret_cast<unsigned char>(edi315) * 8;
                        eax317 = 0;
                        do {
                            if (*reinterpret_cast<int32_t*>(eax317 + 0x60b1b4) == 0x140) 
                                goto addr_43acdb_152;
                            if (0x280 != *reinterpret_cast<int32_t*>(eax317 + 0x60b1b4)) 
                                continue;
                            addr_43acdb_152:
                            if (0x280 != *reinterpret_cast<int32_t*>(eax317 + 0x60b1b4)) 
                                continue;
                            if (*reinterpret_cast<int32_t*>(eax317 + 0x60b1b8) == 0x190) 
                                goto addr_43acef_155;
                            eax317 = eax317 + 8;
                        } while (reinterpret_cast<int32_t>(eax317) < reinterpret_cast<int32_t>(ebx316));
                        goto addr_43acbc_157;
                    } else {
                        goto addr_43acf6_159;
                    }
                } else {
                    eax318 = esi314;
                    goto addr_43ad07_161;
                }
            }
        } else {
            esi319 = g4775e0;
            ecx276 = reinterpret_cast<void**>(0xf0);
            if (!reinterpret_cast<int1_t>(esi319 == 1)) {
                edi320 = g60b254;
                if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi320) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi320 == 0))) {
                    ebx321 = reinterpret_cast<unsigned char>(edi320) * 8;
                    eax322 = 0;
                    do {
                        if (0x140 == *reinterpret_cast<int32_t*>(eax322 + 0x60b1b4)) 
                            goto addr_43ac29_166;
                        if (*reinterpret_cast<int32_t*>(eax322 + 0x60b1b4) != 0x280) 
                            continue;
                        addr_43ac29_166:
                        if (0x140 != *reinterpret_cast<int32_t*>(eax322 + 0x60b1b4)) 
                            continue;
                        if (*reinterpret_cast<int32_t*>(eax322 + 0x60b1b8) == 0xf0) 
                            goto addr_43ac3d_169;
                        eax322 = eax322 + 8;
                    } while (reinterpret_cast<int32_t>(eax322) < reinterpret_cast<int32_t>(ebx321));
                    goto addr_43ac0a_171;
                } else {
                    goto addr_43ac44_173;
                }
            } else {
                eax323 = esi319;
                goto addr_43ac55_175;
            }
        }
    } else {
        ecx276 = reinterpret_cast<void**>(0x140);
        ebp324 = g4775e0;
        if (!reinterpret_cast<int1_t>(ebp324 == 1)) {
            less_or_equal325 = reinterpret_cast<signed char>(g60b254) <= reinterpret_cast<signed char>(0);
            if (!less_or_equal325) {
                ebx326 = g60b254;
                eax327 = 0;
                ebx328 = reinterpret_cast<unsigned char>(ebx326) * 8;
                do {
                    if (0x140 == *reinterpret_cast<int32_t*>(eax327 + 0x60b1b4)) 
                        goto addr_43ab79_180;
                    if (*reinterpret_cast<int32_t*>(eax327 + 0x60b1b4) != 0x280) 
                        continue;
                    addr_43ab79_180:
                    if (0x140 != *reinterpret_cast<int32_t*>(eax327 + 0x60b1b4)) 
                        continue;
                    if (*reinterpret_cast<int32_t*>(eax327 + 0x60b1b8) == 0xc8) 
                        goto addr_43ab8d_183;
                    eax327 = eax327 + 8;
                } while (reinterpret_cast<int32_t>(eax327) < reinterpret_cast<int32_t>(ebx328));
                goto addr_43ab54_185;
            } else {
                goto addr_43ab94_187;
            }
        } else {
            eax329 = ebp324;
            goto addr_43aba5_189;
        }
    }
    eax330 = fun_41d410(ecx276, v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    if (eax330) {
        ecx276 = reinterpret_cast<void**>(0xf0);
        g4775d0 = reinterpret_cast<void**>(0x140);
        g4775d8 = reinterpret_cast<void**>(0x140);
        g4775d4 = reinterpret_cast<void**>(0xf0);
        g4775dc = reinterpret_cast<void**>(0xf0);
        g4775e0 = reinterpret_cast<void**>(1);
    }
    eax331 = fun_41d410(ecx276, v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    if (eax331) {
        ecx276 = reinterpret_cast<void**>(1);
        g4775d0 = reinterpret_cast<void**>(0x280);
        g4775d8 = reinterpret_cast<void**>(0x280);
        g4775d4 = reinterpret_cast<void**>(0x190);
        g4775dc = reinterpret_cast<void**>(0x190);
        g4775e0 = reinterpret_cast<void**>(1);
    }
    eax332 = fun_41d410(ecx276, v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    if (eax332) {
        g4775d0 = reinterpret_cast<void**>(0x280);
        g4775d8 = reinterpret_cast<void**>(0x280);
        g4775d4 = reinterpret_cast<void**>(0x1e0);
        g4775dc = reinterpret_cast<void**>(0x1e0);
        g4775e0 = reinterpret_cast<void**>(1);
    }
    eax333 = fun_41d410(ecx276, v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    if (eax333) {
        g60b25c = 1;
        eax334 = fun_443534(ecx276, v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
        g4775ac = eax334;
    }
    zf335 = reinterpret_cast<int1_t>(g4775d8 == 0xffffffff);
    if (zf335 || (zf336 = reinterpret_cast<int1_t>(g4775dc == 0xffffffff), zf336)) {
        MessageBoxA(0, "No Supported video modes!", "ERROR", 0, v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
        goto 0x4392e0;
    } else {
        fun_42de60(v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
        eax337 = g4775e0;
        g4775e4 = eax337;
        eax338 = fun_438b50(ecx276, v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
        if (eax338) {
            eax339 = g60b00c;
            g60b450 = 1;
            g4775cc = 0;
            if (eax339 != 1) {
                eax340 = reinterpret_cast<int32_t>(GetCurrentThreadId(v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27));
                edx341 = g60b438;
                eax342 = reinterpret_cast<void**>(SetWindowsHookExA(2, 0x438e70, edx341, eax340, v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27));
                g60b454 = eax342;
                g60b00c = 1;
            }
            fun_43cd30(ecx276, v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
            SetCursor(0, v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
            fun_413630(ecx276, 0, v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
        } else {
            MessageBoxA(eax338, "Couldn't set up screen!", eax338, eax338, v271, v269, v267, v266, v195, v194, v193, v192, v191, v190, v189, v188, v183, v182, v179, v178, v176, v175, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
            goto 0x4392e0;
        }
    }
    addr_43afcb_205:
    goto addr_43afcd_6;
    addr_43ada1_141:
    eax313 = reinterpret_cast<void**>(1);
    addr_43adb9_147:
    if (eax313) {
        g4775d0 = reinterpret_cast<void**>(0x280);
        g4775d8 = reinterpret_cast<void**>(0x280);
        g4775d4 = reinterpret_cast<void**>(0x1e0);
        g4775dc = reinterpret_cast<void**>(0x1e0);
        goto addr_43addf_132;
    }
    addr_43ad6e_143:
    addr_43ada8_145:
    fun_437a90(0x280, "IsModeSupported - no match for %d x %d", 0x280, 0x1e0, v271, v269, v267, v266, v195, 0x280, "IsModeSupported - no match for %d x %d", 0x280, 0x1e0, v271, v269, v267, v266, v195);
    eax313 = reinterpret_cast<void**>(0);
    goto addr_43adb9_147;
    addr_43acef_155:
    eax318 = reinterpret_cast<void**>(1);
    addr_43ad07_161:
    if (eax318) {
        g4775d0 = reinterpret_cast<void**>(0x280);
        g4775d8 = reinterpret_cast<void**>(0x280);
        g4775d4 = reinterpret_cast<void**>(0x190);
        g4775dc = reinterpret_cast<void**>(0x190);
        goto addr_43ad2d_131;
    }
    addr_43acbc_157:
    addr_43acf6_159:
    fun_437a90(0x190, "IsModeSupported - no match for %d x %d", 0x280, 0x190, v271, v269, v267, v266, v195, 0x190, "IsModeSupported - no match for %d x %d", 0x280, 0x190, v271, v269, v267, v266, v195);
    eax318 = reinterpret_cast<void**>(0);
    goto addr_43ad07_161;
    addr_43ac3d_169:
    eax323 = reinterpret_cast<void**>(1);
    addr_43ac55_175:
    if (eax323) {
        g4775d0 = reinterpret_cast<void**>(0x140);
        g4775d8 = reinterpret_cast<void**>(0x140);
        g4775d4 = reinterpret_cast<void**>(0xf0);
        g4775dc = reinterpret_cast<void**>(0xf0);
        goto addr_43ac7b_130;
    }
    addr_43ac0a_171:
    addr_43ac44_173:
    fun_437a90(0xf0, "IsModeSupported - no match for %d x %d", 0x140, 0xf0, v271, v269, v267, v266, v195, 0xf0, "IsModeSupported - no match for %d x %d", 0x140, 0xf0, v271, v269, v267, v266, v195);
    eax323 = reinterpret_cast<void**>(0);
    goto addr_43ac55_175;
    addr_43ab8d_183:
    eax329 = reinterpret_cast<void**>(1);
    addr_43aba5_189:
    if (eax329) {
        g4775d0 = reinterpret_cast<void**>(0x140);
        g4775d8 = reinterpret_cast<void**>(0x140);
        g4775d4 = reinterpret_cast<void**>(0xc8);
        g4775dc = reinterpret_cast<void**>(0xc8);
        goto addr_43abc9_129;
    }
    addr_43ab54_185:
    addr_43ab94_187:
    fun_437a90(0x140, "IsModeSupported - no match for %d x %d", 0x140, 0xc8, v271, v269, v267, v266, v195, 0x140, "IsModeSupported - no match for %d x %d", 0x140, 0xc8, v271, v269, v267, v266, v195);
    eax329 = reinterpret_cast<void**>(0);
    goto addr_43aba5_189;
    addr_43a962_108:
    addr_43a9a2_110:
    fun_437a90(0x280, "IsModeSupported - no match for %d x %d", 0x280, 0x1e0, v194, v193, v192, v191, v190, 0x280, "IsModeSupported - no match for %d x %d", 0x280, 0x1e0, v194, v193, v192, v191, v190);
    eax297 = reinterpret_cast<void**>(0);
    goto addr_43a9b3_112;
    addr_43a8be_93:
    addr_43a8f8_95:
    fun_437a90(0x190, "IsModeSupported - no match for %d x %d", 0x280, 0x190, v194, v193, v192, v191, v190, 0x190, "IsModeSupported - no match for %d x %d", 0x280, 0x190, v194, v193, v192, v191, v190);
    eax291 = reinterpret_cast<void**>(0);
    goto addr_43a909_97;
    addr_43a819_80:
    addr_43a853_82:
    fun_437a90(0xf0, "IsModeSupported - no match for %d x %d", 0x140, 0xf0, v194, v193, v192, v191, v190, 0xf0, "IsModeSupported - no match for %d x %d", 0x140, 0xf0, v194, v193, v192, v191, v190);
    eax286 = reinterpret_cast<void**>(0);
    goto addr_43a864_84;
    addr_43a76c_64:
    addr_43a7a6_66:
    fun_437a90(0x140, "IsModeSupported - no match for %d x %d", 0x140, 0xc8, v194, v193, v192, v191, v190, 0x140, "IsModeSupported - no match for %d x %d", 0x140, 0xc8, v194, v193, v192, v191, v190);
    eax281 = reinterpret_cast<void**>(0);
    goto addr_43a7b7_68;
    addr_43a752_56:
    eax281 = ebx277;
    goto addr_43a7b7_68;
    addr_43a5eb_46:
    esp343 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp137) - 4 - 4);
    g60b430 = reinterpret_cast<void**>(1);
    wsprintfA(reinterpret_cast<int32_t>(esp343) + 0x408, "DirectDrawCreate %d", reinterpret_cast<unsigned char>(eax259) & 0xfff, v255, 0x60b264, v253, v191, v190, v189, v188, 10, v182, v179, v178, 0, 0, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    esp344 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp343) - 4 - 4 + 4 + 12);
    v345 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp344) + 0x400);
    fun_437a90(ecx246, v345, v255, 0x60b264, v253, v191, v190, v189, v188, ecx246, v345, v255, 0x60b264, v253, v191, v190, v189, v188);
    esp137 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp344) - 4 - 4 + 4 + 4);
    g60b430 = reinterpret_cast<void**>(0);
    eax247 = 0;
    goto addr_43a634_47;
    addr_43a58b_39:
    ebp240 = 1;
    goto addr_43a590_40;
    addr_43a4cc_26:
    g5f22d0 = eax196;
    UpdateWindow(eax196, 0x40000, "Doom95Class", "Doom 95", 0x80ca0000, 0, 0, v189, v188, 0, 0, v179, 0, v176, 0x80ca0000, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    SetFocus(eax196, eax196, 0x40000, "Doom95Class", "Doom 95", 0x80ca0000, 0, 0, v189, v188, 0, 0, v179, 0, v176, 0x80ca0000, 1, v172, 4, 0, 0x7f00, v169, 0x69, 1, 0, 27);
    esp137 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp137) - 4 - 4 + 4 - 4 - 4 + 4);
    eax196 = reinterpret_cast<void**>(1);
    goto addr_43a4e6_34;
    addr_43a310_32:
    if (eax230) 
        goto addr_43a374_9;
    MessageBoxA(ecx26, eax230, "Incorrect Command line Parameters", eax230, eax230, 27);
    goto addr_43afcb_205;
    addr_43a2fc_33:
    eax373 = fun_443534(ecx26, 27, v346, v347, v348, v349, v350, v351, v352, v353, v354, v355, v356, v357, v358, v359, v360, v361, v362, v363, v364, v365, v366, v367, v368, v369, v370, v371, v372);
    esp137 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp137) - 4 + 4);
    g60b4d8 = eax373;
    goto addr_43a310_32;
    addr_43a33a_4:
    goto addr_43a254_5;
}

void fun_4409aa() {
    void*** edi1;
    void** ebx2;
    void*** edi3;
    int32_t eax4;
    void** ebp5;
    uint32_t ebp6;
    uint32_t eax7;
    void** ecx8;
    uint32_t eax9;
    int32_t eax10;
    void** edx11;
    uint32_t edx12;
    uint32_t ecx13;
    void* esi14;
    void** eax15;
    void* ebx16;
    void*** tmp32_17;

    edi1 = g60ba04;
    ebx2 = g48ae84;
    edi3 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi1) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(eax4 * 4 + 0x487fc0)) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx2) * 4 + 0x488cc0)));
    ebp5 = g48ae88;
    ebp6 = reinterpret_cast<unsigned char>(ebp5 + 1) - eax7;
    if (ebp6 && reinterpret_cast<int32_t>(ebp6) >= reinterpret_cast<int32_t>(0)) {
        ecx8 = g48ae7c;
        eax9 = eax10 - g4925c0;
        edx11 = g48ae78;
        edx12 = reinterpret_cast<unsigned char>(edx11) + eax9 * reinterpret_cast<unsigned char>(ecx8) << 9;
        ecx13 = reinterpret_cast<unsigned char>(ecx8) << 9;
        esi14 = g48ae80;
        eax15 = g48ae90;
        ebx16 = reinterpret_cast<void*>(edx12 >> 25);
        do {
            *reinterpret_cast<signed char*>(&eax15) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx16) + reinterpret_cast<uint32_t>(esi14));
            edx12 = edx12 + ecx13;
            *edi3 = *reinterpret_cast<void***>(eax15);
            ebx16 = reinterpret_cast<void*>(edx12 >> 25);
            tmp32_17 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi3) + reinterpret_cast<unsigned char>(g60b9e8));
            edi3 = tmp32_17;
            --ebp6;
        } while (ebp6);
    }
    __asm__("popad ");
    return;
}

void fun_440bcc() {
}

void fun_4419a4() {
}

struct s899 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s900 {
    unsigned char f0;
    signed char[107] pad108;
    unsigned char f6c;
    signed char[1] pad110;
    unsigned char f6e;
};

struct s901 {
    signed char[47] pad47;
    unsigned char f2f;
};

struct s902 {
    signed char[65] pad65;
    unsigned char f41;
};

struct s903 {
    signed char[111] pad111;
    unsigned char f6f;
    signed char[9] pad121;
    unsigned char f79;
};

struct s904 {
    signed char[117] pad117;
    unsigned char f75;
};

struct s905 {
    signed char[117] pad117;
    unsigned char f75;
};

struct s906 {
    signed char[111] pad111;
    unsigned char f6f;
};

struct s907 {
    signed char[105] pad105;
    unsigned char f69;
};

struct s908 {
    signed char[105] pad105;
    unsigned char f69;
};

void fun_4444eb(struct s899* ecx) {
    struct s900* ecx2;
    struct s901* ebx3;
    void* ebx4;
    struct s902* edi5;
    void* edi6;
    unsigned char al7;
    struct s903* ebx8;
    struct s904* edx9;
    struct s905* edx10;
    unsigned char dl11;
    unsigned char* eax12;
    void* eax13;
    unsigned char dh14;
    unsigned char dl15;
    struct s906* ebx16;
    int1_t zf17;
    unsigned char dh18;
    struct s907* edx19;
    struct s908* edx20;
    unsigned char dh21;

    ecx2 = reinterpret_cast<struct s900*>(&ecx->f1);
    ebx3 = reinterpret_cast<struct s901*>(reinterpret_cast<int32_t>(ebx4) + 1);
    edi5 = reinterpret_cast<struct s902*>(reinterpret_cast<int32_t>(edi6) - 1);
    ebx3->f2f = reinterpret_cast<unsigned char>(ebx3->f2f & al7);
    ebx8 = reinterpret_cast<struct s903*>(reinterpret_cast<int32_t>(ebx3) + 1);
    edx9->f75 = reinterpret_cast<unsigned char>(edx10->f75 & dl11);
    __asm__("outsb ");
    eax12 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax13) - 0x656d6954);
    ebx8->f79 = reinterpret_cast<unsigned char>(ebx8->f79 & dh14);
    if (!1) {
        __asm__("insd ");
        *eax12 = 0;
        __asm__("arpl [ecx], bp");
        ebx8->f6f = reinterpret_cast<unsigned char>(ebx8->f6f & *reinterpret_cast<unsigned char*>(&eax12));
        if (0) 
            goto 0x44458c;
        if (0) 
            goto 0x44457e;
        edi5->f41 = reinterpret_cast<unsigned char>(edi5->f41 & dl15);
        ebx16 = reinterpret_cast<struct s906*>(reinterpret_cast<int32_t>(ebx8) + 1);
        ecx2->f6e = reinterpret_cast<unsigned char>(ecx2->f6e & *reinterpret_cast<unsigned char*>(&ecx2));
        zf17 = ecx2->f6e == 0;
        if (zf17) 
            goto 0x44458c;
        if (0) 
            goto 0x444597;
        __asm__("popad ");
        if (zf17) 
            goto 0x444595;
        __asm__("outsd ");
        __asm__("outsb ");
        __asm__("popad ");
        __asm__("insb ");
        ebx16->f6f = reinterpret_cast<unsigned char>(ebx16->f6f & *reinterpret_cast<unsigned char*>(&eax12));
        if (0) 
            goto 0x4445a5;
        ecx2->f0 = reinterpret_cast<unsigned char>(ecx2->f0 & dh18);
        ecx2->f6c = reinterpret_cast<unsigned char>(ecx2->f6c & *reinterpret_cast<unsigned char*>(&eax12));
        __asm__("insb ");
        edx19->f69 = reinterpret_cast<unsigned char>(edx20->f69 & dh21);
        if (1) 
            goto 0x4445b6;
        if (0) 
            goto 0x4445c9;
    }
}

struct s910 {
    signed char f0;
    signed char f1;
};

struct s909 {
    struct s910* f0;
    unsigned char f4;
    signed char[7] pad12;
    void** fc;
    signed char[7] pad20;
    int32_t f14;
    int32_t f18;
};

struct s911 {
    unsigned char f0;
    unsigned char f1;
};

struct s912 {
    signed char[32] pad32;
    uint16_t f20;
    unsigned char f21;
    signed char[1] pad36;
    uint32_t f24;
    struct s911* f28;
};

signed char g618368 = 0;

void** g459327 = reinterpret_cast<void**>(65);

void** g45932b = reinterpret_cast<void**>(0x69);

void** g45932f = reinterpret_cast<void**>(0x69);

void** g459333 = reinterpret_cast<void**>(69);

void** g459337 = reinterpret_cast<void**>(0x72);

int32_t fun_4479a3() {
    void* esp1;
    struct s909* ebx2;
    struct s909* v3;
    int32_t v4;
    int32_t eax5;
    struct s911* edx6;
    struct s912* v7;
    int32_t ecx8;
    int1_t zf9;
    uint32_t ecx10;
    uint32_t ecx11;
    uint32_t ecx12;
    uint32_t ecx13;
    void** ecx14;
    int32_t edx15;
    int32_t eax16;
    int32_t eax17;
    int32_t eax18;
    int32_t eax19;
    void** v20;
    int32_t* esp21;
    int32_t v22;
    int32_t eax23;
    int32_t v24;
    void** v25;
    void* esp26;
    void* esp27;
    int1_t zf28;
    int32_t eax29;
    int32_t eax30;
    int1_t zf31;
    uint16_t dx32;
    uint16_t dx33;
    int32_t v34;
    int32_t v35;
    int32_t eax36;
    void** ebx37;
    void** eax38;
    int32_t eax39;
    void* esp40;
    void** v41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    struct s910* esi47;
    void* esp48;
    signed char v49;
    signed char al50;
    signed char al51;
    void* esp52;
    void** esp53;
    int32_t v54;
    void*** esp55;
    void** v56;
    void** v57;
    void* esp58;
    uint32_t ecx59;
    signed char v60;
    void** eax61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    int32_t v66;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 2 - 4 - 0x220);
    ebx2 = v3;
    if (!v4) 
        goto addr_447d39_2;
    if (ebx2->f4 & 1) 
        goto addr_447d39_2;
    if (ebx2->f4 & 6) 
        goto addr_447d39_2;
    switch (reinterpret_cast<uint32_t>(ebx2->f0) + 0x3fffff73) {
    default:
        eax5 = -1;
        break;
    case 0:
        eax5 = 0x82;
        break;
        addr_447abf_9:
    case 1:
        eax5 = 0x83;
        break;
    case 2:
        eax5 = 0x86;
        break;
    case 3:
        edx6 = v7->f28;
        ecx8 = 0;
        *reinterpret_cast<unsigned char*>(&ecx8) = edx6->f0;
        eax5 = 0x81;
        if (ecx8 != 0xfad9) {
            zf9 = ecx8 == 0xf1d9;
            if (!zf9) {
                if (!zf9) {
                    ecx10 = 0;
                    *reinterpret_cast<unsigned char*>(&ecx10) = edx6->f0;
                    if ((ecx10 == 0xdb || ecx10 == 0xdf) && (*reinterpret_cast<unsigned char*>(&ecx10) = reinterpret_cast<unsigned char>(edx6->f1 & 48), ecx10 = ecx10 & 0xff, ecx10 == 16)) {
                        eax5 = 0x8d;
                    }
                    *reinterpret_cast<unsigned char*>(&ecx10) = reinterpret_cast<unsigned char>(edx6->f0 & 1);
                    if (ecx10 & 0xff) 
                        break;
                    *reinterpret_cast<unsigned char*>(&edx6) = reinterpret_cast<unsigned char>(edx6->f1 & 48);
                    if ((reinterpret_cast<uint32_t>(edx6) & 0xff) != 48) 
                        break;
                    ecx11 = (v7->f20 & 0xffff) << 2;
                    *reinterpret_cast<uint16_t*>(&ecx11) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&ecx11) >> 13);
                    ecx12 = ecx11 & 0xffff;
                    ecx13 = ecx12 + ecx12;
                    if (((v7->f24 & 0xffff) >> *reinterpret_cast<signed char*>(&ecx13) & 1) != 1) 
                        break; else 
                        goto addr_447abf_9;
                } else {
                    eax5 = 0x8f;
                    break;
                }
            } else {
                eax5 = 0x8e;
                break;
            }
        } else {
            eax5 = 0x88;
            break;
        }
    case 4:
        eax5 = 0x84;
        break;
    case 5:
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v7) + 33) & 2)) {
            eax5 = 0x8b;
            break;
        } else {
            eax5 = 0x8a;
            break;
        }
    case 6:
        eax5 = 0x85;
    }
    if (eax5 == -1) {
        ecx14 = reinterpret_cast<void**>(1);
        edx15 = 8;
        do {
            eax16 = reinterpret_cast<int32_t>(image_base_());
            esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) - 4 + 4);
            if (ebx2->f0 == *reinterpret_cast<struct s910**>(edx15 + eax16 + 92)) 
                break;
            edx15 = edx15 + 8;
            ++ecx14;
        } while (edx15 <= 96);
        goto addr_447b98_31;
        eax17 = reinterpret_cast<int32_t>(image_base_());
        esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) - 4 + 4);
        if (*reinterpret_cast<int32_t*>(edx15 + eax17 + 88) == 1 || ((eax18 = reinterpret_cast<int32_t>(image_base_()), esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) - 4 + 4), *reinterpret_cast<int32_t*>(edx15 + eax18 + 88) == 2) || (eax19 = reinterpret_cast<int32_t>(image_base_()), esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) - 4 + 4), *reinterpret_cast<int32_t*>(edx15 + eax19 + 88) == 3))) {
            addr_447b98_31:
            if (reinterpret_cast<uint32_t>(ebx2->f0) < 0xc0000094) {
                if (reinterpret_cast<uint32_t>(ebx2->f0) < 0xc0000005) {
                    addr_447c38_34:
                    v20 = ebx2->fc;
                    esp21 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp1) - 4 - 4);
                    v22 = reinterpret_cast<int32_t>("The program encountered a problem at address %08lx and cannot continue");
                } else {
                    if (reinterpret_cast<uint32_t>(ebx2->f0) <= 0xc0000005) {
                        if (ebx2->f14) {
                            eax23 = reinterpret_cast<int32_t>("written");
                        } else {
                            eax23 = reinterpret_cast<int32_t>("read from");
                        }
                        v24 = ebx2->f18;
                        v25 = ebx2->fc;
                        esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) - 4 - 4 - 4 - 4);
                        fun_449d12(reinterpret_cast<int32_t>(esp26) + 0x128, "The instruction at %08lx referenced memory at %08lx\nThe memory could not be %s", v25, v24, eax23);
                        esp27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 + 4 + 20);
                        goto addr_447c51_40;
                    } else {
                        if (ebx2->f0 == 0xc000001d) {
                            ecx14 = ebx2->fc;
                            v20 = ecx14;
                            esp21 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp1) - 4 - 4);
                            v22 = reinterpret_cast<int32_t>("An illegal instruction was executed at address %08lx");
                        } else {
                            goto addr_447c38_34;
                        }
                    }
                }
            } else {
                if (reinterpret_cast<uint32_t>(ebx2->f0) <= 0xc0000094) {
                    v20 = ebx2->fc;
                    esp21 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp1) - 4 - 4);
                    v22 = reinterpret_cast<int32_t>("An integer divide by zero was encountered at address %08lx");
                } else {
                    if (reinterpret_cast<uint32_t>(ebx2->f0) < 0xc0000096) 
                        goto addr_447c38_34;
                    if (reinterpret_cast<uint32_t>(ebx2->f0) <= 0xc0000096) 
                        goto addr_447c0c_48; else 
                        goto addr_447bb4_49;
                }
            }
        } else {
            g618368 = 1;
            fun_447818(ecx14);
            zf28 = g618368 == 0;
            if (zf28) {
                addr_447d39_2:
                eax29 = 1;
                goto addr_447d3e_51;
            } else {
                eax29 = 0;
                goto addr_447d3e_51;
            }
        }
    } else {
        g618368 = 1;
        eax30 = fun_447851();
        if (eax30 || (zf31 = g618368 == 0, zf31)) {
            fun_445c75();
            goto addr_447d39_2;
        } else {
            fun_445c75();
            dx32 = v7->f20;
            *reinterpret_cast<signed char*>(&dx33) = 0;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx33) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&dx32) + 1) & 0x7f);
            eax29 = 0;
            v7->f20 = dx33;
            goto addr_447d3e_51;
        }
    }
    addr_447c41_56:
    fun_449d12(esp21 + 72, v22, v20, v34, v35);
    esp27 = reinterpret_cast<void*>(esp21 - 1 - 1 + 1 + 3);
    addr_447c51_40:
    eax36 = fun_449d0c();
    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp27) - 4 + 4);
    ebx37 = reinterpret_cast<void**>(0);
    if (eax36 && (eax38 = fun_449d06("user32.dll"), esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) - 4 - 4 + 4), ebx37 = eax38, !!eax38)) {
        eax39 = fun_449d00(eax38, "MessageBoxExA", "user32.dll");
        esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) - 4 - 4 - 4 + 4);
        if (!eax39) {
            ebx37 = reinterpret_cast<void**>(0);
        } else {
            esp40 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp1) - 4);
            v41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp40) + 23);
            v42 = g459327;
            v43 = g45932b;
            v44 = g45932f;
            v45 = g459333;
            v46 = g459337;
            esi47 = reinterpret_cast<struct s910*>("\n\nClick on OK to terminate the application");
            fun_449d72(0, v41, 0x104, v42, v43, v44, v45, v46);
            esp48 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp40) - 4 - 4 - 4 + 4 - 2 - 2 + 2 - 4);
            ecx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx14) - reinterpret_cast<unsigned char>(ecx14) - 1);
            do {
                if (!ecx14) 
                    break;
                --ecx14;
                esi47 = reinterpret_cast<struct s910*>(&esi47->f1);
            } while (v49);
            do {
                al50 = esi47->f0;
                if (!al50) 
                    break;
                al51 = esi47->f1;
                ++esi47;
            } while (al51);
            esp52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp48) + 4 + 2 - 4 - 4);
            esp53 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp52) - 4);
            v54(0, esp53 + 73, reinterpret_cast<int32_t>(esp52) + 8, 0x2010, 0, 0, v41, 0x104, v42, v43, v44, v45, v46);
            esp1 = reinterpret_cast<void*>(esp53 - 1 - 1 - 1 + 1);
        }
    }
    if (!ebx37) {
        esp55 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp1) - 4);
        v56 = ebx37;
        v57 = reinterpret_cast<void**>(esp55 + 0x220);
        esp58 = reinterpret_cast<void*>(esp55 - 4 - 2);
        ecx59 = reinterpret_cast<unsigned char>(ecx14) - reinterpret_cast<unsigned char>(ecx14) - 1;
        do {
            if (!ecx59) 
                break;
            --ecx59;
        } while (v60);
        eax61 = g61835c;
        v62 = *reinterpret_cast<void***>(eax61 + 8);
        fun_449d96(v62, reinterpret_cast<int32_t>(esp58) + 2 - 4 + 0x124, ~ecx59 - 1, v57, v56, v45, v46, v63, v64, v65, v66);
        goto addr_447d39_2;
    }
    addr_447c0c_48:
    v20 = ebx2->fc;
    esp21 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp1) - 4 - 4);
    v22 = reinterpret_cast<int32_t>("An privileged instruction was executed at address %08lx");
    goto addr_447c41_56;
    addr_447bb4_49:
    if (ebx2->f0 == 0xc00000fd) {
        v20 = ebx2->fc;
        esp21 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp1) - 4 - 4);
        v22 = reinterpret_cast<int32_t>("A stack overflow was encountered at address %08lx");
        goto addr_447c41_56;
    } else {
        goto addr_447c38_34;
    }
    addr_447d3e_51:
    return eax29;
}

struct s913 {
    signed char[81] pad81;
    signed char f51;
};

struct s914 {
    signed char[81] pad81;
    signed char f51;
};

struct s915 {
    signed char[4] pad4;
    int32_t f4;
};

struct s916 {
    signed char[12] pad12;
    int32_t fc;
};

struct s917 {
    signed char[8] pad8;
    void* f8;
};

struct s918 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void fun_410007(void** a1, int32_t a2) {
    signed char* eax3;
    signed char* eax4;
    signed char al5;
    signed char* eax6;
    signed char* eax7;
    signed char al8;
    signed char* eax9;
    signed char* eax10;
    signed char al11;
    signed char* eax12;
    signed char* eax13;
    signed char al14;
    struct s913* ebx15;
    struct s914* ebx16;
    signed char dl17;
    int32_t ebx18;
    struct s915* eax19;
    struct s916* eax20;
    void** ecx21;
    struct s917* eax22;
    uint32_t* eax23;
    void** edi24;
    void** esi25;
    void** eax26;
    struct s918* edx27;
    void** eax28;

    *eax3 = reinterpret_cast<signed char>(*eax4 + al5);
    *eax6 = reinterpret_cast<signed char>(*eax7 + al8);
    *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
    *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
    ebx15->f51 = reinterpret_cast<signed char>(ebx16->f51 + dl17);
    ebx18 = eax19->f4 - eax20->fc;
    ecx21 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax22->f8) - *eax23);
    if (ebx18) {
        eax26 = fun_411d60(ecx21, edi24, esi25, __return_address(), a1);
    } else {
        if (reinterpret_cast<signed char>(ecx21) >= reinterpret_cast<signed char>(0)) {
            eax26 = reinterpret_cast<void**>(0x7fffffff);
        } else {
            eax26 = reinterpret_cast<void**>(0x80000001);
        }
    }
    edx27->f4 = eax26;
    if (ecx21) {
        eax28 = fun_411d60(ecx21, edi24, esi25, __return_address(), a1);
    } else {
        if (ebx18 >= 0) {
            eax28 = reinterpret_cast<void**>(0x7fffffff);
        } else {
            eax28 = reinterpret_cast<void**>(0x80000001);
        }
    }
    edx27->f0 = eax28;
    goto a2;
}

void fun_4105e4() {
}

void fun_410635() {
}

void fun_41068d() {
    int32_t eax1;

    eax1 = 0;
    do {
        eax1 = eax1 + 8;
        *reinterpret_cast<int32_t*>(eax1 + 0x480010) = -1;
    } while (eax1 != 80);
    g45974c = reinterpret_cast<void**>(0);
    return;
}

void fun_4106b9() {
}

void fun_411637() {
}

void fun_4118e4() {
}

void fun_4119dd() {
}

void fun_411a55() {
}

void fun_411b18() {
    int32_t ebx1;
    int32_t eax2;
    void** eax3;
    void** edx4;
    uint32_t edx5;
    void*** edx6;

    ebx1 = eax2;
    eax3 = g4800c8;
    edx4 = g4800cc;
    edx5 = reinterpret_cast<unsigned char>(edx4) * reinterpret_cast<unsigned char>(eax3 + 1);
    edx6 = g4800d8;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx6) + (reinterpret_cast<int32_t>(edx5 - (reinterpret_cast<int32_t>(edx5) >> 31)) >> 1)) = *reinterpret_cast<signed char*>(&ebx1);
    return;
}

struct s919 {
    signed char[50] pad50;
    signed char f32;
};

struct s920 {
    signed char[50] pad50;
    signed char f32;
};

struct s921 {
    signed char[50] pad50;
    signed char f32;
};

struct s922 {
    signed char[50] pad50;
    signed char f32;
};

struct s923 {
    signed char[50] pad50;
    signed char f32;
};

struct s924 {
    signed char[50] pad50;
    signed char f32;
};

struct s925 {
    signed char[50] pad50;
    signed char f32;
};

struct s926 {
    signed char[50] pad50;
    signed char f32;
};

struct s927 {
    signed char[50] pad50;
    signed char f32;
};

struct s928 {
    signed char[50] pad50;
    signed char f32;
};

struct s929 {
    unsigned char f0;
    signed char[100] pad101;
    unsigned char f65;
};

struct s930 {
    signed char[54] pad54;
    unsigned char f36;
};

struct s931 {
    signed char[55] pad55;
    unsigned char f37;
};

struct s932 {
    signed char[56] pad56;
    unsigned char f38;
};

struct s933 {
    signed char[57] pad57;
    unsigned char f39;
};

struct s934 {
    signed char[121] pad121;
    signed char f79;
};

struct s935 {
    signed char[121] pad121;
    signed char f79;
};

struct s936 {
    signed char[112] pad112;
    signed char f70;
};

struct s937 {
    signed char[112] pad112;
    signed char f70;
};

void fun_411bfb() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    struct s919* ebp7;
    struct s920* ebp8;
    signed char ah9;
    uint32_t* eax10;
    uint32_t* eax11;
    uint32_t eax12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    struct s921* ebp16;
    struct s922* ebp17;
    signed char ah18;
    unsigned char* eax19;
    unsigned char al20;
    unsigned char* eax21;
    struct s923* ebp22;
    struct s924* ebp23;
    signed char ah24;
    unsigned char* eax25;
    struct s925* ebp26;
    struct s926* ebp27;
    struct s927* ebp28;
    struct s928* ebp29;
    struct s929* eax30;
    unsigned char ch31;
    unsigned char ch32;
    struct s930* ebp33;
    unsigned char ch34;
    struct s931* ebp35;
    unsigned char ch36;
    struct s932* ebp37;
    int32_t ecx38;
    struct s933* ebp39;
    struct s934* ebx40;
    struct s935* ebx41;
    struct s936* ebx42;
    struct s937* ebx43;
    signed char dh44;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    ebp7->f32 = reinterpret_cast<signed char>(ebp8->f32 + ah9);
    __asm__("insd ");
    *eax10 = *eax11 ^ eax12;
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    ebp16->f32 = reinterpret_cast<signed char>(ebp17->f32 + ah18);
    __asm__("insd ");
    *reinterpret_cast<unsigned char*>(&eax19) = reinterpret_cast<unsigned char>(al20 ^ *eax21);
    *eax19 = reinterpret_cast<unsigned char>(*eax19 + *reinterpret_cast<unsigned char*>(&eax19));
    ebp22->f32 = reinterpret_cast<signed char>(ebp23->f32 + ah24);
    __asm__("insd ");
    eax25 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax19) ^ *eax19);
    *eax25 = reinterpret_cast<unsigned char>(*eax25 + *reinterpret_cast<unsigned char*>(&eax25));
    ebp26->f32 = reinterpret_cast<signed char>(ebp27->f32 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax25) + 1));
    __asm__("insd ");
    *reinterpret_cast<unsigned char*>(&eax25) = reinterpret_cast<unsigned char>(static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(&eax25)));
    *eax25 = reinterpret_cast<unsigned char>(*eax25 + *reinterpret_cast<unsigned char*>(&eax25));
    ebp28->f32 = reinterpret_cast<signed char>(ebp29->f32 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax25) + 1));
    __asm__("insd ");
    eax30 = reinterpret_cast<struct s929*>(eax25);
    ch31 = reinterpret_cast<unsigned char>(ch32 ^ ebp33->f36);
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    ch34 = reinterpret_cast<unsigned char>(ch31 ^ ebp35->f37);
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    ch36 = reinterpret_cast<unsigned char>(ch34 ^ ebp37->f38);
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx38) + 1) = reinterpret_cast<unsigned char>(ch36 ^ ebp39->f39);
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    if (!__intrinsic()) {
        __asm__("outsd ");
        __asm__("outsd ");
        eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
        __asm__("a16 popad ");
        eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 ^ *reinterpret_cast<unsigned char*>(&eax30));
        eax30->f65 = reinterpret_cast<unsigned char>(eax30->f65 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx38) + 1));
        __asm__("popad ");
        __asm__("popad ");
        eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 ^ reinterpret_cast<uint32_t>(eax30));
        ebx40->f79 = reinterpret_cast<signed char>(ebx41->f79 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax30) + 1));
        eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 ^ reinterpret_cast<uint32_t>(eax30));
        ebx42->f70 = reinterpret_cast<signed char>(ebx43->f70 + dh44);
        eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
        eax30->f0 = reinterpret_cast<unsigned char>(eax30->f0 + *reinterpret_cast<unsigned char*>(&eax30));
    }
}

void fun_411ce8() {
}

void fun_411d52() {
}

void fun_4122d9() {
}

void fun_412414() {
}

void** fun_41243e(void** ecx) {
    int32_t v2;
    int32_t ebx3;
    void** edx4;
    void** eax5;
    void** eax6;

    v2 = ebx3;
    eax5 = fun_434890(ecx, edx4, ecx);
    eax6 = fun_433a50(eax5, edx4, ecx, *reinterpret_cast<signed char*>(&v2));
    return eax6;
}

void fun_4126f7() {
}

struct s938 {
    void** f0;
    signed char[3] pad4;
    signed char* f4;
    signed char* f8;
};

struct s939 {
    void** f0;
    signed char[3] pad4;
    signed char* f4;
    signed char* f8;
};

void** fun_412e0e(void** ecx) {
    void** v2;
    void** v3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
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
    void** v52;
    void** v53;
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
    void** v72;
    void** v73;
    void** eax74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** v80;
    void** v81;
    void** v82;
    void** v83;
    void** v84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** v89;
    void** v90;
    void** v91;
    void** v92;
    void** v93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void** v98;
    void** v99;
    void** v100;
    void** v101;
    void** v102;
    void** eax103;
    void** v104;
    void** v105;
    void** v106;
    void** v107;
    void** v108;
    void** v109;
    void** v110;
    void** v111;
    void** v112;
    void** v113;
    void** v114;
    void** v115;
    void** v116;
    void** v117;
    void** v118;
    void** v119;
    void** v120;
    void** v121;
    void** v122;
    void** v123;
    void** v124;
    void** v125;
    void** v126;
    void** v127;
    void** v128;
    void** v129;
    void** v130;
    void** v131;
    void** eax132;
    void** v133;
    void** v134;
    void** v135;
    void** v136;
    void** v137;
    void** v138;
    void** v139;
    void** v140;
    void** v141;
    void** v142;
    void** v143;
    void** v144;
    void** v145;
    void** v146;
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
    void** v159;
    void** v160;
    void** eax161;
    void** v162;
    void** v163;
    void** v164;
    void** v165;
    void** v166;
    void** v167;
    void** v168;
    void** v169;
    void** v170;
    void** v171;
    void** v172;
    void** v173;
    void** v174;
    void** v175;
    void** v176;
    void** v177;
    void** v178;
    void** v179;
    void** v180;
    void** v181;
    void** v182;
    void** v183;
    void** v184;
    void** v185;
    void** v186;
    void** v187;
    void** v188;
    void** v189;
    void** eax190;
    void* esp191;
    void** v192;
    void** v193;
    void** v194;
    void** v195;
    void** v196;
    void** v197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** v202;
    void** v203;
    void** v204;
    void** v205;
    void** v206;
    void** v207;
    void** v208;
    void** v209;
    void** v210;
    void** v211;
    void** v212;
    void** v213;
    void** v214;
    void** v215;
    void** v216;
    void** v217;
    void** v218;
    void** v219;
    void** eax220;
    void** v221;
    void** v222;
    void** v223;
    void** v224;
    void** v225;
    void** v226;
    void** v227;
    void** v228;
    void** v229;
    void** v230;
    void** v231;
    void** v232;
    void** v233;
    void** v234;
    void** esi235;
    void* esp236;
    void** v237;
    void** v238;
    void** v239;
    void** v240;
    void** v241;
    void** v242;
    void** v243;
    void** v244;
    void** v245;
    void** v246;
    void** v247;
    void** v248;
    void** v249;
    void** v250;
    void** v251;
    void** v252;
    void** v253;
    void** v254;
    void** v255;
    void** v256;
    void** v257;
    void** v258;
    void** v259;
    void** v260;
    void** v261;
    void** v262;
    void** v263;
    void** v264;
    void** v265;
    void** v266;
    void** v267;
    void** v268;
    void** v269;
    void** v270;
    void** v271;
    void** v272;
    void** v273;
    void** v274;
    void** v275;
    void** v276;
    void** v277;
    void** v278;
    void** v279;
    void** v280;
    void** v281;
    void** v282;
    void** v283;
    void** v284;
    void** v285;
    void** eax286;
    void* esp287;
    void*** edi288;
    void** v289;
    void** v290;
    void** v291;
    void** v292;
    void** v293;
    void** v294;
    void** v295;
    void** v296;
    void** v297;
    void** v298;
    void** v299;
    void** v300;
    void** v301;
    void** v302;
    void** v303;
    void** v304;
    void** v305;
    void** v306;
    void** v307;
    void** v308;
    void** v309;
    void** v310;
    void** v311;
    void** v312;
    void** v313;
    void** v314;
    void** v315;
    void** v316;
    void** v317;
    void** v318;
    void** v319;
    void** v320;
    void** v321;
    void** v322;
    void** v323;
    void** v324;
    void** v325;
    void** v326;
    void** v327;
    void** v328;
    void** v329;
    void** v330;
    void** v331;
    void** v332;
    void** v333;
    void** eax334;
    void* esp335;
    void* esp336;
    void** edx337;
    void** ebx338;
    void** v339;
    void** v340;
    void** v341;
    void** v342;
    void** v343;
    void** v344;
    void** v345;
    void** v346;
    void** v347;
    void** v348;
    void** v349;
    void** v350;
    void** v351;
    void** v352;
    void** v353;
    void** v354;
    void** v355;
    void** v356;
    void** v357;
    void** v358;
    void** v359;
    void** v360;
    void** v361;
    void** v362;
    void** v363;
    void** v364;
    void** v365;
    void** v366;
    void** eax367;
    void** v368;
    void** v369;
    void** v370;
    void** v371;
    void** v372;
    void** v373;
    void** v374;
    void** v375;
    void** v376;
    void** v377;
    void** v378;
    void** v379;
    void** v380;
    int32_t edx381;
    void** edx382;
    int32_t edx383;
    int32_t edx384;
    void** v385;
    void** v386;
    void** v387;
    void** v388;
    void** v389;
    void** v390;
    void** v391;
    void** v392;
    void** v393;
    void** v394;
    void** v395;
    void** v396;
    void** v397;
    void** v398;
    void** v399;
    void** v400;
    void** v401;
    void** v402;
    void** v403;
    void** v404;
    void** v405;
    void** v406;
    void** v407;
    void** v408;
    void** v409;
    void** v410;
    void** v411;
    void** v412;
    void** eax413;
    void* esp414;
    void* edx415;
    void** eax416;
    struct s938* eax417;
    void** edi418;
    signed char* eax419;
    void** v420;
    void** v421;
    void* esp422;
    void** v423;
    void** eax424;
    void** v425;
    void** v426;
    void** v427;
    void** v428;
    void** v429;
    void** v430;
    void** v431;
    void** v432;
    void** v433;
    void** v434;
    void** v435;
    void** v436;
    void** v437;
    void** v438;
    void* esp439;
    void** v440;
    void** v441;
    void** v442;
    void** v443;
    void** v444;
    void** v445;
    void** v446;
    void** v447;
    void** v448;
    void** v449;
    void** v450;
    void** v451;
    void** v452;
    void** v453;
    void** v454;
    void** v455;
    void** v456;
    void** v457;
    void** v458;
    void** v459;
    void** v460;
    void** v461;
    void** v462;
    void** v463;
    void** v464;
    void** v465;
    void** v466;
    void** v467;
    void** eax468;
    void* esp469;
    void* esp470;
    void** v471;
    void** v472;
    void* esp473;
    void** v474;
    void** v475;
    void** v476;
    void** v477;
    void** v478;
    int32_t v479;
    int32_t v480;
    void* v481;
    void** v482;
    void** v483;
    void** v484;
    void** v485;
    void** v486;
    void** v487;
    void** v488;
    void** v489;
    void** v490;
    void** v491;
    void** v492;
    void** v493;
    void** v494;
    void** v495;
    void** v496;
    void** v497;
    void** v498;
    void** v499;
    void** v500;
    void** v501;
    void** v502;
    void** v503;
    void** v504;
    void** v505;
    void** v506;
    void** v507;
    void** v508;
    void** v509;
    void** eax510;
    void* esp511;
    void** edx512;
    void* ebx513;
    void** eax514;
    void** v515;
    void** v516;
    void** v517;
    int32_t v518;
    int32_t v519;
    void* v520;
    int1_t zf521;
    void** v522;
    void** v523;
    void** v524;
    void** v525;
    void** v526;
    void** v527;
    void** v528;
    void** v529;
    void** v530;
    void** v531;
    void** v532;
    void** v533;
    void** v534;
    void** v535;
    void** v536;
    void** v537;
    void** v538;
    void** v539;
    void** v540;
    void** v541;
    void** v542;
    void** v543;
    void** v544;
    void** v545;
    void** v546;
    void** v547;
    void** v548;
    void** v549;
    void** eax550;
    void* esp551;
    void** v552;
    void** v553;
    void** v554;
    void** v555;
    void** v556;
    void** v557;
    void** v558;
    void** v559;
    void** v560;
    void** v561;
    void** v562;
    void** v563;
    void** v564;
    void** v565;
    void** v566;
    void** v567;
    void** v568;
    void** v569;
    void** v570;
    void** v571;
    void** v572;
    void** v573;
    void** v574;
    void** v575;
    void** v576;
    void** v577;
    void** v578;
    void** v579;
    uint32_t ecx580;
    signed char v581;
    void** edx582;
    void* esp583;
    void* edx584;
    void** eax585;
    void** v586;
    void* esp587;
    void** v588;
    void** v589;
    void** v590;
    void** v591;
    void** v592;
    int32_t v593;
    int32_t v594;
    void* v595;
    void** eax596;
    void** v597;
    void** v598;
    void** v599;
    void** v600;
    void** v601;
    void** v602;
    void** v603;
    void** v604;
    void** v605;
    void** v606;
    void** v607;
    void** v608;
    void** v609;
    void** v610;
    void** ecx611;
    void** v612;
    void** v613;
    void** v614;
    void** v615;
    void** v616;
    void** v617;
    void** v618;
    void** v619;
    void** v620;
    void** v621;
    void** v622;
    void** v623;
    void** v624;
    void** v625;
    void** v626;
    void** v627;
    void** v628;
    void** v629;
    void** v630;
    void** v631;
    void** v632;
    void** v633;
    void** v634;
    void** v635;
    void** v636;
    void** v637;
    void** v638;
    void** v639;
    void** eax640;
    void** edx641;
    void** edx642;
    void** eax643;
    void** v644;
    void** v645;
    void** v646;
    void** v647;
    void** v648;
    void** v649;
    void** v650;
    void** v651;
    void** v652;
    void** v653;
    void** v654;
    void** v655;
    void** v656;
    void** v657;
    void** v658;
    void** v659;
    void** v660;
    void** v661;
    void** v662;
    void** v663;
    void** v664;
    void** v665;
    void** v666;
    void** v667;
    void** v668;
    void** v669;
    void** v670;
    void** v671;
    void** eax672;
    void** edx673;
    void** eax674;
    void** eax675;
    void** v676;
    void** v677;
    void** v678;
    void** v679;
    void** v680;
    void** v681;
    void** v682;
    void** v683;
    void** v684;
    void** v685;
    void** v686;
    void** v687;
    void** v688;
    void** v689;
    void** v690;
    void** v691;
    void** v692;
    void** v693;
    void** v694;
    void** v695;
    void** v696;
    void** v697;
    void** v698;
    void** v699;
    void** v700;
    void** v701;
    void** v702;
    void** v703;
    void** eax704;
    void* esp705;
    void** edx706;
    int1_t zf707;
    void** eax708;
    void* esp709;
    void** v710;
    void** v711;
    void** v712;
    void** v713;
    void** v714;
    void** v715;
    void** v716;
    void** v717;
    void** v718;
    void** v719;
    void** v720;
    void** v721;
    void** v722;
    void** v723;
    void** v724;
    void** v725;
    void** v726;
    void** v727;
    void** v728;
    void** v729;
    void** v730;
    void** v731;
    void** v732;
    void** v733;
    void** v734;
    void** v735;
    void** v736;
    void** v737;
    void** eax738;
    void* esp739;
    void** edx740;
    int1_t zf741;
    void** v742;
    void** v743;
    void** v744;
    void** v745;
    void** v746;
    void** v747;
    void** v748;
    void** v749;
    void** v750;
    void** v751;
    void** v752;
    void** v753;
    void** v754;
    void** v755;
    void** v756;
    void** v757;
    void** v758;
    void** v759;
    void** v760;
    void** v761;
    void** v762;
    void** v763;
    void** v764;
    void** v765;
    void** v766;
    void** v767;
    void** v768;
    void* esp769;
    void** v770;
    void** v771;
    void** v772;
    void** v773;
    void** v774;
    void** v775;
    void** v776;
    void** v777;
    void** v778;
    void** v779;
    void** v780;
    void** v781;
    void** v782;
    void** v783;
    void** v784;
    void** v785;
    void** v786;
    void** v787;
    void** v788;
    void** v789;
    void** v790;
    void** v791;
    void** v792;
    void** v793;
    void** v794;
    void** v795;
    void** v796;
    void** v797;
    void** v798;
    void** v799;
    void** v800;
    void** v801;
    void** v802;
    void** v803;
    void** v804;
    void** v805;
    void** v806;
    void** v807;
    void** v808;
    void** v809;
    void** v810;
    void** v811;
    void** eax812;
    void** v813;
    void** v814;
    void** v815;
    void** v816;
    void** v817;
    void** v818;
    void** v819;
    void** v820;
    void** v821;
    void** v822;
    void** v823;
    void** v824;
    void** v825;
    void** v826;
    void** v827;
    void** v828;
    void** v829;
    void** v830;
    void** v831;
    void** v832;
    void** v833;
    void** v834;
    void** v835;
    void** v836;
    void** v837;
    void** v838;
    void** v839;
    void** v840;
    void** v841;
    void** v842;
    void** v843;
    void** v844;
    void** v845;
    void** v846;
    void** v847;
    void** v848;
    void** v849;
    void** v850;
    void** v851;
    void** v852;
    void** v853;
    void** v854;
    void** v855;
    void** v856;
    void** v857;
    void** v858;
    void** v859;
    void** v860;
    void** v861;
    void** v862;
    void** v863;
    void** v864;
    void** v865;
    void** v866;
    void** v867;
    void** eax868;
    void* esp869;
    void** edx870;
    void** edi871;
    void** edx872;
    struct s939* eax873;
    void** eax874;
    void** v875;
    void** v876;
    void** v877;
    void** v878;
    void** v879;
    void** v880;
    void** v881;
    void** v882;
    void** v883;
    void** v884;
    void** v885;
    void** v886;
    void** v887;
    void** v888;
    void** v889;
    void** v890;
    void** v891;
    void** v892;
    void** v893;
    void** v894;
    void** v895;
    void** v896;
    void** v897;
    void** v898;
    void** v899;
    void** v900;
    void** v901;
    void** v902;
    void** v903;
    void** v904;
    void** v905;
    void** v906;
    void** v907;
    void** v908;
    void** v909;
    void** v910;
    void** v911;
    void** v912;
    void** v913;
    void** v914;
    void** v915;
    void** v916;
    void** v917;
    void** v918;
    void** v919;
    void** v920;
    void** v921;
    void** v922;
    void** v923;
    void** v924;
    void** v925;
    void** v926;
    void** v927;
    void** v928;
    void** v929;
    void** v930;
    void** v931;
    void** v932;
    void** v933;
    void** v934;
    void** v935;
    void** v936;
    void** v937;
    void** v938;
    void** v939;
    void** v940;
    void** v941;
    void** v942;
    void** v943;
    void** v944;
    void** v945;
    void** v946;
    void** v947;
    void** v948;
    void** v949;
    void** v950;
    void** v951;
    void** v952;
    void** v953;
    void** v954;
    void** v955;
    void** v956;
    void** v957;
    void** v958;
    void** v959;
    void** v960;
    void** v961;
    void** v962;
    void* esp963;
    int1_t zf964;
    int1_t zf965;
    void** v966;
    void** v967;
    void** v968;
    void** v969;
    void** v970;
    void** v971;
    void** v972;
    void** v973;
    void** v974;
    void** v975;
    void** v976;
    void** v977;
    void** v978;
    void** v979;
    void** v980;
    void** v981;
    void** v982;
    void** v983;
    void** v984;
    void** v985;
    void** v986;
    void** v987;
    void** v988;
    void** v989;
    void** v990;
    void** v991;
    void** v992;
    void** v993;
    void** eax994;
    void** edx995;
    int1_t zf996;
    void** v997;
    void** v998;
    void** v999;
    void** v1000;
    void** v1001;
    void** v1002;
    void** v1003;
    void** v1004;
    void** v1005;
    void** v1006;
    void** v1007;
    void** v1008;
    void** v1009;
    void** v1010;
    void** v1011;
    void** v1012;
    void** v1013;
    void** v1014;
    void** v1015;
    void** v1016;
    void** v1017;
    void** v1018;
    void** v1019;
    void** v1020;
    void** v1021;
    void** v1022;
    void** v1023;
    void** v1024;
    void** v1025;
    void** v1026;
    void** v1027;
    void** v1028;
    void** v1029;
    void** v1030;
    void** v1031;
    void** v1032;
    void** v1033;
    void** v1034;
    void** v1035;
    void** v1036;
    void** v1037;
    void** v1038;
    int1_t zf1039;
    void** v1040;
    void** v1041;
    void** v1042;
    void** v1043;
    void** v1044;
    void** v1045;
    void** v1046;
    void** v1047;
    void** v1048;
    void** v1049;
    void** v1050;
    void** v1051;
    void** v1052;
    void** v1053;
    void** v1054;
    void** v1055;
    void** v1056;
    void** v1057;
    void** v1058;
    void** v1059;
    void** v1060;
    int1_t zf1061;
    void** v1062;
    void** v1063;
    void** v1064;
    void** v1065;
    void** v1066;
    void** v1067;
    void** v1068;
    void** v1069;
    void** v1070;
    void** v1071;
    void** v1072;
    void** v1073;
    void** v1074;
    void** v1075;
    void** v1076;
    void** v1077;
    void** v1078;
    void** v1079;
    void** v1080;
    void** v1081;
    void** v1082;
    void** v1083;
    void** v1084;
    void** v1085;
    void** v1086;
    void** v1087;
    void** v1088;
    void** v1089;
    void** v1090;
    void** v1091;
    void** v1092;
    void** v1093;
    void** v1094;
    void** v1095;
    void** v1096;
    void** v1097;
    void** v1098;
    void** v1099;
    void** v1100;
    void** v1101;
    void** v1102;
    void** v1103;
    void** v1104;
    void** v1105;
    void** v1106;
    void** v1107;
    void** v1108;
    void** v1109;
    void** v1110;
    void** v1111;
    void** v1112;
    void** v1113;
    void** v1114;
    void** v1115;
    void** v1116;
    void** v1117;
    void** v1118;
    void** v1119;
    void** v1120;
    void** v1121;
    void** v1122;
    void** v1123;
    void** v1124;
    void** v1125;
    void** v1126;
    void** v1127;
    void** v1128;
    void** v1129;
    void** v1130;
    void** v1131;
    void** v1132;
    void** v1133;
    void** v1134;
    void** v1135;
    void** v1136;
    void** v1137;
    void** v1138;
    void** v1139;
    void** v1140;
    void** v1141;
    void** v1142;
    void** v1143;
    void** v1144;
    void** v1145;
    void** v1146;
    void** v1147;
    void** v1148;
    void** v1149;
    void** v1150;
    void** v1151;
    void** v1152;
    void** v1153;
    void** v1154;
    void** v1155;
    void** v1156;
    void** v1157;
    void** v1158;
    void** v1159;
    void** v1160;
    void** v1161;
    void** v1162;
    void** v1163;
    void** v1164;
    void** v1165;
    void** v1166;
    int32_t v1167;
    void** v1168;
    void** v1169;
    void** v1170;
    void** v1171;
    void** v1172;
    void** v1173;
    void** v1174;
    void** v1175;
    void** v1176;
    void** v1177;
    void** v1178;
    void** v1179;
    void** v1180;
    void** v1181;
    void** v1182;
    void** v1183;
    void** v1184;
    void** v1185;
    void** v1186;
    void** v1187;
    void** v1188;
    void** v1189;
    void** v1190;
    void** v1191;
    void** v1192;
    void** v1193;
    void** v1194;
    void** v1195;
    void** v1196;
    void** v1197;
    void** v1198;
    void** v1199;
    void** v1200;
    void** v1201;
    void** v1202;
    void** v1203;
    void** v1204;
    void** v1205;
    void** v1206;
    void** v1207;
    void** v1208;
    void** v1209;
    void** v1210;
    void** v1211;
    void** v1212;
    void** v1213;
    void** v1214;
    void** v1215;
    void** v1216;
    void** v1217;
    void** v1218;
    void** v1219;
    void** v1220;
    void** v1221;
    void** v1222;
    void** v1223;
    void** v1224;
    void** v1225;
    void** v1226;
    void** v1227;
    void** v1228;
    void** v1229;
    void** v1230;
    void** v1231;
    void** v1232;
    void** v1233;
    void** v1234;
    void** v1235;
    void** v1236;
    void** v1237;
    void** v1238;
    void** v1239;
    void** v1240;
    void** v1241;
    void** v1242;
    void** v1243;
    void** v1244;
    void** v1245;
    void** v1246;
    void** v1247;
    void** v1248;
    void** v1249;
    void** v1250;
    void** v1251;
    void** v1252;
    void** v1253;
    void** v1254;
    void** v1255;
    void** v1256;
    void** v1257;
    void** v1258;
    void** v1259;
    void** v1260;
    void** v1261;
    void** v1262;
    void** v1263;
    void** v1264;
    void** v1265;
    void** v1266;
    void** v1267;
    void** v1268;
    void** v1269;
    void** v1270;
    void** v1271;
    void** v1272;
    void** v1273;
    void** v1274;
    void** v1275;
    void** v1276;
    void** v1277;
    void** v1278;
    void** v1279;
    void** v1280;
    void** v1281;
    void** v1282;
    void** v1283;
    void** v1284;
    void** v1285;
    void** v1286;
    void** v1287;
    void** v1288;
    void** v1289;
    void** v1290;
    void** v1291;
    void** v1292;
    void** v1293;
    void** v1294;
    void** v1295;
    void** v1296;
    void** v1297;
    void** v1298;
    void** v1299;
    void** v1300;
    void** v1301;
    void** v1302;
    void** v1303;
    void** v1304;
    void** v1305;
    void** v1306;
    void** v1307;
    void** v1308;
    void** v1309;
    void** v1310;
    void** v1311;
    void** v1312;
    void** v1313;
    void** v1314;
    void** v1315;
    void** v1316;
    void** v1317;
    void** v1318;
    void** v1319;
    void** v1320;
    void** v1321;
    void** v1322;
    void** v1323;
    void** v1324;
    void** v1325;
    void** v1326;
    void** v1327;
    void** v1328;
    void** v1329;
    void** v1330;
    void** v1331;
    void** v1332;
    void** v1333;
    void** v1334;
    void** v1335;
    void** v1336;
    void** v1337;
    void** v1338;
    void** v1339;
    void** eax1340;
    void** edx1341;
    void** v1342;
    void** v1343;
    void** v1344;
    void** v1345;
    void** v1346;
    void** v1347;
    void** v1348;
    void** v1349;
    void** v1350;
    void** v1351;
    void** v1352;
    void** v1353;
    void** v1354;
    void** v1355;
    void** v1356;
    void** v1357;
    void** v1358;
    void** v1359;
    void** v1360;
    void** v1361;
    void** v1362;
    void** v1363;
    void** v1364;
    void** v1365;
    void** v1366;
    void** v1367;
    void** v1368;
    void** v1369;
    void** eax1370;
    void** v1371;
    void** v1372;
    void** v1373;
    void** v1374;
    void** v1375;
    void** v1376;
    void** v1377;
    void** v1378;
    void** v1379;
    void** v1380;
    void** v1381;
    void** v1382;
    void** v1383;
    void** v1384;
    void** v1385;
    void** v1386;
    void** v1387;
    void** v1388;
    void** v1389;
    void** v1390;
    void** v1391;
    int1_t zf1392;
    void* ebx1393;
    void* esi1394;
    void** eax1395;
    void** v1396;
    void** v1397;
    void** v1398;
    void** v1399;
    void** v1400;
    void** v1401;
    void** v1402;
    void** v1403;
    void** v1404;
    void** v1405;
    void** v1406;
    void** v1407;
    void** v1408;
    void** v1409;
    void** v1410;
    void** v1411;
    void** v1412;
    void** v1413;
    void** v1414;
    void** v1415;
    void** v1416;
    int32_t v1417;
    int32_t v1418;
    void* v1419;

    fun_412bf0(ecx, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44);
    fun_412700(ecx);
    fun_4434fc(ecx, v45);
    g481238 = reinterpret_cast<void**>(0);
    eax74 = fun_41d410(ecx, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73);
    g48126c = eax74;
    eax103 = fun_41d410(ecx, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, v92, v93, v94, v95, v96, v97, v98, v99, v100, v101, v102);
    g481278 = eax103;
    eax132 = fun_41d410(ecx, v104, v105, v106, v107, v108, v109, v110, v111, v112, v113, v114, v115, v116, v117, v118, v119, v120, v121, v122, v123, v124, v125, v126, v127, v128, v129, v130, v131);
    g481270 = eax132;
    eax161 = fun_41d410(ecx, v133, v134, v135, v136, v137, v138, v139, v140, v141, v142, v143, v144, v145, v146, v147, v148, v149, v150, v151, v152, v153, v154, v155, v156, v157, v158, v159, v160);
    g481254 = eax161;
    eax190 = fun_41d410(ecx, v162, v163, v164, v165, v166, v167, v168, v169, v170, v171, v172, v173, v174, v175, v176, v177, v178, v179, v180, v181, v182, v183, v184, v185, v186, v187, v188, v189);
    esp191 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x2b8 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4 - 4 + 4);
    if (!eax190) {
        eax220 = fun_41d410(ecx, v192, v193, v194, v195, v196, v197, v198, v199, v200, v201, v202, v203, v204, v205, v206, v207, v208, v209, v210, v211, v212, v213, v214, v215, v216, v217, v218, v219);
        esp191 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp191) - 4 + 4);
        if (eax220) {
            g482a6c = reinterpret_cast<void**>(1);
        }
    } else {
        g482a6c = reinterpret_cast<void**>(2);
    }
    fun_442b4a(ecx, 0x480150, "                         DOOM For Windows 95 Startup v%i.%i                        ", 1, 9, v221);
    fun_440840(ecx, "%s\n", 0x480150, v222, v223, v224, v225, v226, v227, v228, v229, v230, v231, v232, v233, v234);
    esi235 = g481254;
    esp236 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp191) - 4 - 4 - 4 - 4 - 4 + 4 + 16 - 4 - 4 - 4 + 4 + 8);
    if (esi235) {
        fun_440840(ecx, "Development mode ON.\n", v237, v238, v239, v240, v241, v242, v243, v244, v245, v246, v247, v248, v249, v250);
        fun_437a90(ecx, "Development mode ON.\n", v251, v252, v253, v254, v255, v256, v257);
        esp236 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp236) - 4 - 4 + 4 + 4 - 4 - 4 + 4 + 4);
    }
    eax286 = fun_41d410(ecx, v258, v259, v260, v261, v262, v263, v264, v265, v266, v267, v268, v269, v270, v271, v272, v273, v274, v275, v276, v277, v278, v279, v280, v281, v282, v283, v284, v285);
    esp287 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp236) - 4 + 4);
    if (eax286) {
        ecx = reinterpret_cast<void**>(6);
        edi288 = reinterpret_cast<void***>(0x480a20);
        fun_440840(6, "CD-ROM Version: default.cfg from c:\\doomdata\n", v289, v290, v291, v292, v293, v294, v295, v296, v297, v298, v299, v300, v301, v302);
        esi235 = reinterpret_cast<void**>("c:/doomdata/default.cfg");
        fun_443519(6, v303, v304, v305);
        esp287 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp287) - 4 - 4 + 4 + 4 - 4 + 4);
        while (ecx) {
            --ecx;
            *edi288 = *reinterpret_cast<void***>(esi235);
            edi288 = edi288 + 4;
            esi235 = esi235 + 4;
        }
    }
    eax334 = fun_41d410(ecx, v306, v307, v308, v309, v310, v311, v312, v313, v314, v315, v316, v317, v318, v319, v320, v321, v322, v323, v324, v325, v326, v327, v328, v329, v330, v331, v332, v333);
    esp335 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp287) - 4 + 4);
    if (!eax334) {
        fun_43ffb0(ecx);
        esp336 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp335) - 4 + 4);
    } else {
        edx337 = g4835f4;
        ebx338 = reinterpret_cast<void**>(0xc8);
        if (reinterpret_cast<signed char>(eax334) < reinterpret_cast<signed char>(edx337 - 1)) {
            eax367 = fun_443534(ecx, v339, v340, v341, v342, v343, v344, v345, v346, v347, v348, v349, v350, v351, v352, v353, v354, v355, v356, v357, v358, v359, v360, v361, v362, v363, v364, v365, v366);
            esp335 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp335) - 4 + 4);
            ebx338 = eax367;
        }
        if (reinterpret_cast<signed char>(ebx338) < reinterpret_cast<signed char>(10)) {
            ebx338 = reinterpret_cast<void**>(10);
        }
        if (reinterpret_cast<signed char>(ebx338) > reinterpret_cast<signed char>(0x190)) {
            ebx338 = reinterpret_cast<void**>(0x190);
        }
        fun_440840(ecx, "turbo scale: %i%%\n", ebx338, v368, v369, v370, v371, v372, v373, v374, v375, v376, v377, v378, v379, v380);
        edx381 = g459984;
        ecx = reinterpret_cast<void**>(100);
        edx382 = g459988;
        g459984 = reinterpret_cast<int32_t>(edx381 * reinterpret_cast<unsigned char>(ebx338)) / reinterpret_cast<signed char>(100);
        edx383 = g45998c;
        g459988 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edx382) * reinterpret_cast<unsigned char>(ebx338)) / reinterpret_cast<signed char>(100));
        edx384 = g459990;
        g45998c = reinterpret_cast<int32_t>(edx383 * reinterpret_cast<unsigned char>(ebx338)) / reinterpret_cast<signed char>(100);
        esp336 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp335) - 4 - 4 - 4 + 4 + 8);
        g459990 = reinterpret_cast<int32_t>(edx384 * reinterpret_cast<unsigned char>(ebx338)) / reinterpret_cast<signed char>(100);
    }
    eax413 = fun_41d410(ecx, v385, v386, v387, v388, v389, v390, v391, v392, v393, v394, v395, v396, v397, v398, v399, v400, v401, v402, v403, v404, v405, v406, v407, v408, v409, v410, v411, v412);
    esp414 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp336) - 4 + 4);
    if (eax413) {
        edx415 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax413) * 4);
        eax416 = g4835f8;
        eax417 = reinterpret_cast<struct s938*>(reinterpret_cast<unsigned char>(eax416) + reinterpret_cast<uint32_t>(edx415));
        edi418 = g481264;
        *reinterpret_cast<void***>(eax417->f0 + 4) = reinterpret_cast<void**>(0x70);
        if (!edi418) {
            eax419 = eax417->f4;
            v420 = reinterpret_cast<void**>(static_cast<int32_t>(*eax417->f8));
            v421 = reinterpret_cast<void**>(static_cast<int32_t>(*eax419));
            esp422 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp414) - 4 - 4 - 4);
            fun_442b4a(ecx, reinterpret_cast<int32_t>(esp422) + 12, "~e:/users/id/E%cM%c.wad", v421, v420, v423);
            eax424 = g4835f8;
            v425 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx415) + reinterpret_cast<unsigned char>(eax424) + 8);
            v426 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx415) + reinterpret_cast<unsigned char>(eax424) + 4);
            fun_440840(ecx, "Warping to Episode %s, Map %s.\n", v426, v425, v427, v428, v429, v430, v431, v432, v433, v434, v435, v436, v437, v438);
            esp439 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp422) - 4 - 4 + 4 + 16 - 4 - 4 - 4 - 4 + 4);
        } else {
            eax468 = fun_443534(ecx, v440, v441, v442, v443, v444, v445, v446, v447, v448, v449, v450, v451, v452, v453, v454, v455, v456, v457, v458, v459, v460, v461, v462, v463, v464, v465, v466, v467);
            esp469 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp414) - 4 + 4);
            if (reinterpret_cast<signed char>(eax468) >= reinterpret_cast<signed char>(10)) {
                esp470 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp469) - 4 - 4);
                fun_442b4a(ecx, reinterpret_cast<int32_t>(esp470) + 8, "~e:/users/id/cdata/map%i.wad", eax468, v471, v472);
                esp439 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp470) - 4 - 4 + 4);
            } else {
                esp473 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp469) - 4 - 4);
                fun_442b4a(ecx, reinterpret_cast<int32_t>(esp473) + 8, "~e:/users/id/cdata/map0%i.wad", eax468, v474, v475);
                esp439 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp473) - 4 - 4 + 4);
            }
        }
        fun_412690(ecx, v476, v477, v478, v479, v480, v481);
        esp414 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp439) + 12 - 4 + 4);
    }
    eax510 = fun_41d410(ecx, v482, v483, v484, v485, v486, v487, v488, v489, v490, v491, v492, v493, v494, v495, v496, v497, v498, v499, v500, v501, v502, v503, v504, v505, v506, v507, v508, v509);
    esp511 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp414) - 4 + 4);
    edx512 = eax510;
    if (eax510) {
        ecx = reinterpret_cast<void**>(1);
        ebx513 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax510) * 4);
        g481238 = reinterpret_cast<void**>(1);
        while ((esi235 = g4835f4, ++edx512, ebx513 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx513) + 4), edx512 != esi235) && (eax514 = g4835f8, **reinterpret_cast<signed char**>(reinterpret_cast<uint32_t>(ebx513) + reinterpret_cast<unsigned char>(eax514)) != 45)) {
            fun_412690(1, v515, v516, v517, v518, v519, v520);
            esp511 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp511) - 4 + 4);
        }
    }
    zf521 = g60b6dc == 0;
    if (!zf521) {
        addr_4130fb_32:
        eax550 = fun_41d410(ecx, v522, v523, v524, v525, v526, v527, v528, v529, v530, v531, v532, v533, v534, v535, v536, v537, v538, v539, v540, v541, v542, v543, v544, v545, v546, v547, v548, v549);
        esp551 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp511) - 4 + 4);
        if (!eax550) {
            eax550 = fun_41d410(ecx, v552, v553, v554, v555, v556, v557, v558, v559, v560, v561, v562, v563, v564, v565, v566, v567, v568, v569, v570, v571, v572, v573, v574, v575, v576, v577, v578, v579);
            esp551 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp551) - 4 + 4);
        }
    } else {
        fun_43d330(ecx);
        esp511 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp511) - 4 + 4);
        ecx580 = reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(ecx) - 1;
        do {
            if (!ecx580) 
                break;
            --ecx580;
        } while (v581);
        ecx = reinterpret_cast<void**>(~ecx580 - 1);
        if (!ecx) 
            goto addr_4130fb_32; else 
            goto addr_4130f4_38;
    }
    if (!eax550 || (edx582 = g4835f4, reinterpret_cast<signed char>(eax550) >= reinterpret_cast<signed char>(edx582 - 1))) {
        fun_43fa40(ecx);
        esp583 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp551) - 4 + 4);
    } else {
        edx584 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax550) * 4);
        eax585 = g4835f8;
        v586 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx584) + reinterpret_cast<unsigned char>(eax585) + 4);
        esp587 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp551) - 4 - 4);
        fun_442b4a(ecx, reinterpret_cast<int32_t>(esp587) + 8, "%s.lmp", v586, v588, v589);
        fun_412690(ecx, v590, v591, v592, v593, v594, v595);
        eax596 = g4835f8;
        v597 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx584) + reinterpret_cast<unsigned char>(eax596) + 4);
        fun_440840(ecx, "Playing demo %s.lmp.\n", v597, v598, v599, v600, v601, v602, v603, v604, v605, v606, v607, v608, v609, v610);
        esp583 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp587) - 4 - 4 + 4 + 12 - 4 + 4 - 4 - 4 - 4 + 4 + 8);
    }
    ecx611 = reinterpret_cast<void**>(2);
    g481240 = reinterpret_cast<void**>(2);
    g481248 = reinterpret_cast<void**>(1);
    g481234 = reinterpret_cast<void**>(1);
    g48123c = reinterpret_cast<void**>(0);
    eax640 = fun_41d410(2, v612, v613, v614, v615, v616, v617, v618, v619, v620, v621, v622, v623, v624, v625, v626, v627, v628, v629, v630, v631, v632, v633, v634, v635, v636, v637, v638, v639);
    if (eax640 && (edx641 = g4835f4, reinterpret_cast<signed char>(eax640) < reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(edx641) - reinterpret_cast<unsigned char>(1)))) {
        edx642 = g4835f8;
        eax643 = reinterpret_cast<void**>(**reinterpret_cast<signed char**>(reinterpret_cast<uint32_t>(edx642 + reinterpret_cast<unsigned char>(eax640) * 4) + 4) - 49);
        g48123c = reinterpret_cast<void**>(1);
        g481240 = eax643;
    }
    eax672 = fun_41d410(2, v644, v645, v646, v647, v648, v649, v650, v651, v652, v653, v654, v655, v656, v657, v658, v659, v660, v661, v662, v663, v664, v665, v666, v667, v668, v669, v670, v671);
    if (eax672 && (edx673 = g4835f4, reinterpret_cast<signed char>(eax672) < reinterpret_cast<signed char>(edx673 - 1))) {
        eax674 = g4835f8;
        eax675 = reinterpret_cast<void**>(**reinterpret_cast<signed char**>(reinterpret_cast<uint32_t>(eax674 + reinterpret_cast<unsigned char>(eax672) * 4) + 4) - 48);
        g481234 = reinterpret_cast<void**>(1);
        g48123c = reinterpret_cast<void**>(1);
        g481248 = eax675;
    }
    eax704 = fun_41d410(2, v676, v677, v678, v679, v680, v681, v682, v683, v684, v685, v686, v687, v688, v689, v690, v691, v692, v693, v694, v695, v696, v697, v698, v699, v700, v701, v702, v703);
    esp705 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp583) - 4 + 4 - 4 + 4 - 4 + 4);
    if (!eax704 || ((edx706 = g4835f4, reinterpret_cast<signed char>(eax704) >= reinterpret_cast<signed char>(edx706 - 1)) || (zf707 = g482a6c == 0, zf707))) {
        eax708 = fun_440190(2);
        esp709 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp705) - 4 + 4);
        if (!eax708) {
            addr_41329b_48:
            eax738 = fun_41d410(2, v710, v711, v712, v713, v714, v715, v716, v717, v718, v719, v720, v721, v722, v723, v724, v725, v726, v727, v728, v729, v730, v731, v732, v733, v734, v735, v736, v737);
            esp739 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp709) - 4 + 4);
            if (eax738 && ((edx740 = g4835f4, reinterpret_cast<signed char>(eax738) < reinterpret_cast<signed char>(edx740 - 1)) && (zf741 = g482a6c == 0, !zf741))) {
                fun_440840(2, "Austin Virtual Gaming: Levels will end after 20 minutes\n", v742, v743, v744, v745, v746, v747, v748, v749, v750, v751, v752, v753, v754, v755);
                esp739 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp739) - 4 - 4 + 4 + 4);
            }
        } else {
            fun_440840(2, "Levels will end after %d minute", eax708, v756, v757, v758, v759, v760, v761, v762, v763, v764, v765, v766, v767, v768);
            esp769 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp709) - 4 - 4 - 4 + 4 + 8);
            if (reinterpret_cast<signed char>(eax708) > reinterpret_cast<signed char>(1)) {
                fun_440840(2, "s", v770, v771, v772, v773, v774, v775, v776, v777, v778, v779, v780, v781, v782, v783);
                esp769 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp769) - 4 - 4 + 4 + 4);
                goto addr_41328e_52;
            }
        }
    } else {
        eax812 = fun_443534(2, v784, v785, v786, v787, v788, v789, v790, v791, v792, v793, v794, v795, v796, v797, v798, v799, v800, v801, v802, v803, v804, v805, v806, v807, v808, v809, v810, v811);
        fun_440840(2, "Levels will end after %d minute", eax812, v813, v814, v815, v816, v817, v818, v819, v820, v821, v822, v823, v824, v825);
        esp769 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp705) - 4 + 4 - 4 - 4 - 4 + 4 + 8);
        if (reinterpret_cast<signed char>(eax812) > reinterpret_cast<signed char>(1)) {
            fun_440840(2, "s", v826, v827, v828, v829, v830, v831, v832, v833, v834, v835, v836, v837, v838, v839);
            esp769 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp769) - 4 - 4 + 4 + 4);
            goto addr_41328e_52;
        }
    }
    eax868 = fun_41d410(2, v840, v841, v842, v843, v844, v845, v846, v847, v848, v849, v850, v851, v852, v853, v854, v855, v856, v857, v858, v859, v860, v861, v862, v863, v864, v865, v866, v867);
    esp869 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp739) - 4 + 4);
    if (eax868 && (edx870 = g4835f4, reinterpret_cast<signed char>(eax868) < reinterpret_cast<signed char>(edx870 - 1))) {
        edi871 = g481264;
        if (!edi871) {
            edx872 = g4835f8;
            eax873 = reinterpret_cast<struct s939*>(edx872 + reinterpret_cast<unsigned char>(eax868) * 4);
            eax874 = reinterpret_cast<void**>(*eax873->f8 - 48);
            g481248 = reinterpret_cast<void**>(*eax873->f4 - 48);
        } else {
            eax874 = fun_443534(2, v875, v876, v877, v878, v879, v880, v881, v882, v883, v884, v885, v886, v887, v888, v889, v890, v891, v892, v893, v894, v895, v896, v897, v898, v899, v900, v901, v902);
            esp869 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp869) - 4 + 4);
        }
        g481234 = eax874;
        g48123c = reinterpret_cast<void**>(1);
    }
    fun_440840(2, "V_Init: allocate screens.\n", v903, v904, v905, v906, v907, v908, v909, v910, v911, v912, v913, v914, v915, v916);
    fun_434180(2);
    fun_440840(2, "M_LoadConfig: Load system defaults.\n", v917, v918, v919, v920, v921, v922, v923, v924, v925, v926, v927, v928, v929, v930);
    fun_41da70(2);
    fun_440840(2, "Z_Init: Init zone memory allocation daemon. \n", v931, v932, v933, v934, v935, v936, v937, v938, v939, v940, v941, v942, v943, v944);
    fun_437500(2);
    fun_440840(2, "W_Init: Init WADfiles.\n", v945, v946, v947, v948, v949, v950, v951, v952, v953, v954, v955, v956, v957, v958);
    fun_434580(2, v959, v960, v961, v962);
    esp963 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp869) - 4 - 4 + 4 + 4 - 4 + 4 - 4 - 4 + 4 + 4 - 4 + 4 - 4 - 4 + 4 + 4 - 4 + 4 - 4 - 4 + 4 + 4 - 4 + 4);
    zf964 = g481238 == 0;
    if (zf964) {
        addr_4133ef_61:
        zf965 = g481238 == 0;
        if (!zf965 && (eax994 = fun_41d410(ecx611, v966, v967, v968, v969, v970, v971, v972, v973, v974, v975, v976, v977, v978, v979, v980, v981, v982, v983, v984, v985, v986, v987, v988, v989, v990, v991, v992, v993), !eax994)) {
            MessageBoxA(eax994, "=============================================================\nATTENTION:  This version of DOOM has been modified.  If you would like to\nget a copy of the original game, call 1-800-IDGAMES or see the readme file.\n                      You will not receive technical support for modified games.\n                                       press enter to continue\n=============================================================\n", 0x450748, eax994);
        }
    } else {
        ecx611 = reinterpret_cast<void**>(46);
        edx995 = g481250;
        while (ecx611) {
            --ecx611;
        }
        if (!edx995) 
            goto addr_4133b8_67; else 
            goto addr_4133ab_68;
    }
    zf996 = g481258 == 0;
    if (!zf996) {
        fun_440840(ecx611, "\tregistered version.\n", v997, v998, v999, v1000, v1001, v1002, v1003, v1004, v1005, v1006, v1007, v1008, v1009, v1010);
        fun_437a90(ecx611, "\tregistered version.\n", v1011, v1012, v1013, v1014, v1015, v1016, v1017);
        fun_440840(ecx611, "===========================================================================\n             This version is NOT SHAREWARE, do not distribute!\n         Please report software piracy to the SPA: 1-800-388-PIR8\n===========================================================================\n", v1018, v1019, v1020, v1021, v1022, v1023, v1024, v1025, v1026, v1027, v1028, v1029, v1030, v1031);
        fun_437a90(ecx611, "===========================================================================\n             This version is NOT SHAREWARE, do not distribute!\n         Please report software piracy to the SPA: 1-800-388-PIR8\n===========================================================================\n", v1032, v1033, v1034, v1035, v1036, v1037, v1038);
    }
    zf1039 = g481250 == 0;
    if (!zf1039) {
        fun_440840(ecx611, "\tshareware version.\n", v1040, v1041, v1042, v1043, v1044, v1045, v1046, v1047, v1048, v1049, v1050, v1051, v1052, v1053);
        fun_437a90(ecx611, "\tshareware version.\n", v1054, v1055, v1056, v1057, v1058, v1059, v1060);
    }
    zf1061 = g481264 == 0;
    if (!zf1061) {
        fun_440840(ecx611, "\tcommercial version.\n", v1062, v1063, v1064, v1065, v1066, v1067, v1068, v1069, v1070, v1071, v1072, v1073, v1074, v1075);
        fun_437a90(ecx611, "\tcommercial version.\n", v1076, v1077, v1078, v1079, v1080, v1081, v1082);
        fun_440840(ecx611, "===========================================================================\n                            Do not distribute!\n         Please report software piracy to the SPA: 1-800-388-PIR8\n===========================================================================\n", v1083, v1084, v1085, v1086, v1087, v1088, v1089, v1090, v1091, v1092, v1093, v1094, v1095, v1096);
        fun_437a90(ecx611, "===========================================================================\n                            Do not distribute!\n         Please report software piracy to the SPA: 1-800-388-PIR8\n===========================================================================\n", v1097, v1098, v1099, v1100, v1101, v1102, v1103);
    }
    fun_440840(ecx611, "M_Init: Init miscellaneous info.\n", v1104, v1105, v1106, v1107, v1108, v1109, v1110, v1111, v1112, v1113, v1114, v1115, v1116, v1117);
    fun_437a90(ecx611, "M_Init: Init miscellaneous info.\n", v1118, v1119, v1120, v1121, v1122, v1123, v1124);
    fun_41d290(ecx611);
    fun_440840(ecx611, "R_Init: Init DOOM refresh daemon - ", v1125, v1126, v1127, v1128, v1129, v1130, v1131, v1132, v1133, v1134, v1135, v1136, v1137, v1138);
    fun_437a90(ecx611, "R_Init: Init DOOM refresh daemon - ", v1139, v1140, v1141, v1142, v1143, v1144, v1145);
    fun_42e280(ecx611);
    fun_440840(ecx611, "\nP_Init: Init Playloop state.\n", v1146, v1147, v1148, v1149, v1150, v1151, v1152, v1153, v1154, v1155, v1156, v1157, v1158, v1159);
    fun_437a90(ecx611, "\nP_Init: Init Playloop state.\n", v1160, v1161, v1162, v1163, v1164, v1165, v1166);
    fun_427910(ecx611, v1167);
    fun_440840(ecx611, "I_Init: Setting up machine state.\n", v1168, v1169, v1170, v1171, v1172, v1173, v1174, v1175, v1176, v1177, v1178, v1179, v1180, v1181);
    fun_437a90(ecx611, "I_Init: Setting up machine state.\n", v1182, v1183, v1184, v1185, v1186, v1187, v1188);
    fun_43ce50(ecx611, v1189, v1190, v1191, v1192, v1193, v1194, v1195, v1196, v1197, v1198, v1199, v1200, v1201, v1202, v1203, v1204);
    fun_440840(ecx611, "D_CheckNetGame: Checking network game status.\n", v1205, v1206, v1207, v1208, v1209, v1210, v1211, v1212, v1213, v1214, v1215, v1216, v1217, v1218);
    fun_437a90(ecx611, "D_CheckNetGame: Checking network game status.\n", v1219, v1220, v1221, v1222, v1223, v1224, v1225);
    fun_414350(ecx611, v1226, v1227, v1228, v1229, v1230, v1231, v1232, v1233, v1234, v1235, v1236, v1237, v1238, v1239, v1240, v1241, v1242, v1243, v1244, v1245, v1246);
    fun_440840(ecx611, "S_Init: Setting up sound.\n", v1247, v1248, v1249, v1250, v1251, v1252, v1253, v1254, v1255, v1256, v1257, v1258, v1259, v1260);
    fun_437a90(ecx611, "S_Init: Setting up sound.\n", v1261, v1262, v1263, v1264, v1265, v1266, v1267);
    fun_431830(ecx611, v1268, v1269);
    fun_440840(ecx611, "HU_Init: Setting up heads up display.\n", v1270, v1271, v1272, v1273, v1274, v1275, v1276, v1277, v1278, v1279, v1280, v1281, v1282, v1283);
    fun_437a90(ecx611, "HU_Init: Setting up heads up display.\n", v1284, v1285, v1286, v1287, v1288, v1289, v1290);
    fun_418d70(ecx611);
    fun_440840(ecx611, "ST_Init: Init status bar.\n", v1291, v1292, v1293, v1294, v1295, v1296, v1297, v1298, v1299, v1300, v1301, v1302, v1303, v1304);
    fun_437a90(ecx611, "ST_Init: Init status bar.\n", v1305, v1306, v1307, v1308, v1309, v1310, v1311);
    fun_433910(ecx611);
    eax1340 = fun_41d410(ecx611, v1312, v1313, v1314, v1315, v1316, v1317, v1318, v1319, v1320, v1321, v1322, v1323, v1324, v1325, v1326, v1327, v1328, v1329, v1330, v1331, v1332, v1333, v1334, v1335, v1336, v1337, v1338, v1339);
    if (eax1340 && (edx1341 = g4835f4, reinterpret_cast<signed char>(eax1340) < reinterpret_cast<signed char>(edx1341 - 1))) {
        eax1370 = fun_443534(ecx611, v1342, v1343, v1344, v1345, v1346, v1347, v1348, v1349, v1350, v1351, v1352, v1353, v1354, v1355, v1356, v1357, v1358, v1359, v1360, v1361, v1362, v1363, v1364, v1365, v1366, v1367, v1368, v1369);
        g4829a4 = eax1370;
        fun_440840(ecx611, "External statistics registered.\n", v1371, v1372, v1373, v1374, v1375, v1376, v1377, v1378, v1379, v1380, v1381, v1382, v1383, v1384);
        eax1340 = fun_437a90(ecx611, "External statistics registered.\n", v1385, v1386, v1387, v1388, v1389, v1390, v1391);
    }
    return eax1340;
    addr_4133b8_67:
    zf1392 = g481258 == 0;
    if (!zf1392) {
        ebx1393 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp963) + 0x200);
        esi1394 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx1393) + 0xb8);
        do {
            eax1395 = fun_434640(ecx611);
            if (reinterpret_cast<signed char>(eax1395) < reinterpret_cast<signed char>(0)) {
                fun_43bd40(ecx611, "\nThis is not the registered version.", v1396, v1397);
            }
            ebx1393 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx1393) + 8);
        } while (ebx1393 != esi1394);
        goto addr_4133ef_61;
    }
    addr_4133ab_68:
    fun_43bd40(ecx611, "\nYou cannot -file with the shareware version. Register!", v1398, v1399);
    esp963 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp963) - 4 - 4 + 4 + 4);
    goto addr_4133b8_67;
    addr_41328e_52:
    fun_440840(2, ".\n", v1400, v1401, v1402, v1403, v1404, v1405, v1406, v1407, v1408, v1409, v1410, v1411, v1412, v1413);
    esp709 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp769) - 4 - 4 + 4 + 4);
    goto addr_41329b_48;
    addr_4130f4_38:
    fun_412690(ecx, v1414, v1415, v1416, v1417, v1418, v1419);
    esp511 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp511) - 4 + 4);
    goto addr_4130fb_32;
}

void fun_41384c() {
}

void fun_41415d() {
}

void fun_41434a() {
}

void fun_414584() {
}

void fun_414634() {
}

struct s940 {
    signed char[81] pad81;
    signed char f51;
};

struct s941 {
    signed char[81] pad81;
    signed char f51;
};

void* g481818 = reinterpret_cast<void*>(0x62be889);

void fun_414927(int32_t a1, int32_t a2) {
    signed char* eax3;
    signed char* eax4;
    signed char al5;
    signed char* eax6;
    signed char* eax7;
    signed char al8;
    signed char* eax9;
    signed char* eax10;
    signed char al11;
    signed char* eax12;
    signed char* eax13;
    signed char al14;
    struct s940* ebx15;
    struct s941* ebx16;
    signed char dl17;
    void* esp18;
    void* eax19;
    int32_t edx20;
    int32_t v21;
    int32_t ebp22;
    int32_t edi23;
    int32_t esi24;
    int32_t edx25;
    void* eax26;
    unsigned char bh27;
    int32_t ecx28;
    int32_t edx29;
    int32_t eax30;
    int32_t ebx31;
    void* esi32;
    int32_t eax33;

    *eax3 = reinterpret_cast<signed char>(*eax4 + al5);
    *eax6 = reinterpret_cast<signed char>(*eax7 + al8);
    *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
    *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
    ebx15->f51 = reinterpret_cast<signed char>(ebx16->f51 + dl17);
    esp18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 0x308);
    eax19 = reinterpret_cast<void*>(0);
    edx20 = 0;
    do {
        eax19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax19) + 1);
        ++edx20;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp18) + reinterpret_cast<int32_t>(eax19) + 0x2ff) = 0;
        *reinterpret_cast<signed char*>(edx20 + 0x481c17) = 0;
    } while (reinterpret_cast<int32_t>(eax19) < 4);
    v21 = 1;
    ebp22 = 1;
    do {
        edi23 = ebp22 * 4;
        esi24 = 0;
        do {
            edx25 = *reinterpret_cast<int32_t*>(esi24 + 0x4597f8) + *reinterpret_cast<int32_t*>(esi24 + 0x4597f8);
            eax26 = *reinterpret_cast<void**>(esi24 + 0x4597fc);
            bh27 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp18) + reinterpret_cast<int32_t>(eax26) + 0x300) & reinterpret_cast<unsigned char>(~reinterpret_cast<signed char>(3 << *reinterpret_cast<unsigned char*>(&edx25))));
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp18) + reinterpret_cast<int32_t>(eax26) + 0x300) = bh27;
            *reinterpret_cast<unsigned char*>(&ecx28) = reinterpret_cast<unsigned char>(bh27 | reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&v21) << *reinterpret_cast<unsigned char*>(&edx25)));
            edx29 = edi23;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp18) + reinterpret_cast<int32_t>(eax26) + 0x300) = *reinterpret_cast<unsigned char*>(&ecx28);
            eax30 = 0;
            do {
                ++edx29;
                ++eax30;
                *reinterpret_cast<signed char*>(edx29 + 0x481c17) = 0;
            } while (eax30 < 4);
            edi23 = edi23 + 4;
            esi24 = esi24 + 8;
            ++ebp22;
        } while (esi24 != 0x80);
        ebx31 = v21 + 1;
        v21 = ebx31;
    } while (ebx31 <= 3);
    esi32 = g481818;
    if (!esi32) {
        do {
            eax33 = reinterpret_cast<int32_t>(esi32) / 3;
            esi32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi32) + 1);
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp18) + reinterpret_cast<int32_t>(esi32) - 1) = *reinterpret_cast<signed char*>(&eax33);
        } while (reinterpret_cast<int32_t>(esi32) < 0x300);
        fun_414a30(ecx28);
    }
    goto a2;
}

struct s942 {
    signed char f0;
    signed char f1;
    signed char f2;
    signed char f3;
};

void fun_414ad0(int32_t ecx) {
    signed char* ebp2;
    signed char* eax3;
    void* v4;
    void* ebx5;
    int32_t v6;
    void* v7;
    void* ebx8;
    void* ebx9;
    void* v10;
    int32_t ebx11;
    int32_t ebx12;
    int32_t v13;
    signed char* eax14;
    signed char* edx15;
    void* esi16;
    void* ebx17;
    signed char* v18;
    signed char* edi19;
    int32_t eax20;
    struct s942* eax21;
    int32_t edi22;

    ebp2 = eax3;
    v4 = ebx5;
    v6 = ecx;
    v7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx8) + reinterpret_cast<int32_t>(ebx9));
    v10 = reinterpret_cast<void*>(ebx11 * 4 - ebx12);
    v13 = 0;
    if (!(reinterpret_cast<uint1_t>(ecx < 0) | reinterpret_cast<uint1_t>(ecx == 0))) {
        do {
            eax14 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(v4) + reinterpret_cast<int32_t>(edx15));
            esi16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v10) + reinterpret_cast<int32_t>(edx15));
            ebx17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(v7) + reinterpret_cast<int32_t>(edx15));
            v18 = eax14;
            edi19 = eax14;
            do {
                eax20 = 0;
                *reinterpret_cast<signed char*>(&eax20) = *ebp2;
                eax21 = *reinterpret_cast<struct s942**>(eax20 * 4 + 0x481818);
                *edx15 = eax21->f0;
                ++ebp2;
                esi16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi16) + 1);
                *edi19 = eax21->f1;
                ebx17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx17) + 1);
                ++edi19;
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx17) - 1) = eax21->f2;
                ++edx15;
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esi16) - 1) = eax21->f3;
            } while (edx15 != v18);
            edi22 = v13 + 1;
            edx15 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edx15) + reinterpret_cast<int32_t>(v10));
            v13 = edi22;
        } while (edi22 < v6);
    }
    return;
}

struct s943 {
    unsigned char f0;
    unsigned char f1;
};

void fun_414b60(uint32_t ecx) {
    uint32_t v2;
    int32_t ebx3;
    unsigned char bl4;
    void* v5;
    uint32_t v6;
    unsigned char* ebx7;
    unsigned char* edx8;
    uint32_t ebp9;
    unsigned char* v10;
    uint32_t ebp11;
    void* edi12;
    struct s943* eax13;
    void* esi14;
    unsigned char v15;
    unsigned char v16;
    uint32_t edi17;

    v2 = ecx;
    *reinterpret_cast<unsigned char*>(&ebx3) = reinterpret_cast<unsigned char>(bl4 & 0xfe);
    v5 = reinterpret_cast<void*>(ebx3 >> 1);
    v6 = 0;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ecx) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ecx == 0))) {
        do {
            ebx7 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v5) + reinterpret_cast<int32_t>(edx8));
            ebp9 = v6 & 1;
            v10 = ebx7;
            ebp11 = ebp9 + ebp9;
            do {
                edi12 = *reinterpret_cast<void**>(eax13->f0 * 4 + 0x481818);
                esi14 = *reinterpret_cast<void**>(eax13->f1 * 4 + 0x481818);
                v15 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi12) + ebp11) & 0xf0);
                *edx8 = reinterpret_cast<unsigned char>(v15 | reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi14) + ebp11) & 15));
                v16 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi12) + ebp11 + 1) & 0xf0);
                ++ebx7;
                ++edx8;
                *(ebx7 - 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esi14) + ebp11 + 1) & 15) | v16);
                eax13 = reinterpret_cast<struct s943*>(&eax13->f1 + 1);
            } while (edx8 != v10);
            edi17 = v6 + 1;
            edx8 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edx8) + reinterpret_cast<int32_t>(v5));
            v6 = edi17;
        } while (reinterpret_cast<int32_t>(edi17) < reinterpret_cast<int32_t>(v2));
    }
    return;
}

struct s944 {
    signed char f0;
    signed char f1;
    signed char f2;
    signed char f3;
};

void fun_414c03(uint32_t ecx) {
    struct s944* eax2;
    struct s944* eax3;
    int32_t edx4;
    int32_t edx5;
    uint32_t v6;
    int32_t ebx7;
    unsigned char bl8;
    int32_t v9;
    uint32_t v10;
    uint32_t ebx11;
    int32_t v12;
    int32_t ecx13;
    void* v14;
    int32_t ecx15;
    void* edi16;
    int32_t ecx17;
    void* ebp18;
    int32_t ecx19;
    void* v20;
    unsigned char v21;
    uint32_t esi22;

    eax2 = eax3;
    edx4 = edx5;
    v6 = ecx;
    *reinterpret_cast<unsigned char*>(&ebx7) = reinterpret_cast<unsigned char>(bl8 & 0xfb);
    v9 = ebx7 >> 2;
    v10 = 0;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ecx) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ecx == 0))) {
        do {
            ebx11 = v10 & 3;
            v12 = v9 + edx4;
            do {
                ecx13 = 0;
                *reinterpret_cast<signed char*>(&ecx13) = eax2->f0;
                v14 = *reinterpret_cast<void**>(ecx13 * 4 + 0x481818);
                ecx15 = 0;
                *reinterpret_cast<signed char*>(&ecx15) = eax2->f1;
                edi16 = *reinterpret_cast<void**>(ecx15 * 4 + 0x481818);
                ecx17 = 0;
                *reinterpret_cast<signed char*>(&ecx17) = eax2->f2;
                ebp18 = *reinterpret_cast<void**>(ecx17 * 4 + 0x481818);
                ecx19 = 0;
                *reinterpret_cast<signed char*>(&ecx19) = eax2->f3;
                v20 = *reinterpret_cast<void**>(ecx19 * 4 + 0x481818);
                v21 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v14) + ebx11) & 0xc0);
                ++edx4;
                eax2 = reinterpret_cast<struct s944*>(&eax2->f1 + 1 + 1 + 1);
                *reinterpret_cast<unsigned char*>(edx4 - 1) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx11 + reinterpret_cast<int32_t>(ebp18)) & 12) | reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi16) + ebx11) & 48) | v21)) | reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(v20) + ebx11) & 3));
            } while (edx4 != v12);
            esi22 = v10 + 1;
            v10 = esi22;
        } while (reinterpret_cast<int32_t>(esi22) < reinterpret_cast<int32_t>(v6));
    }
    return;
}

void fun_414cd0(void** ecx) {
    void** edx2;
    void** ebx3;
    void** eax4;

    eax4 = fun_4375e0(ecx, edx2, ebx3);
    *reinterpret_cast<void***>(eax4 + 4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax4) = *reinterpret_cast<void***>(eax4 + 4);
    return;
}

void fun_41502b(int32_t ecx) {
}

void fun_41505a() {
}

void fun_4151ce() {
}

void fun_415c48() {
}

void fun_416267() {
}

void fun_4163f9() {
}

void fun_4173dd() {
}

void fun_417b73() {
}

void fun_417cc3() {
}

void fun_417d06() {
}

void fun_4183d4() {
}

void fun_418654() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    return;
}

void fun_418852() {
}

void fun_4188d7() {
}

void fun_41895c() {
}

void fun_418a39() {
}

void fun_418a97() {
}

void fun_418b32() {
}

void fun_418b9c() {
}

void fun_418c15() {
}

uint32_t fun_418d61() {
    uint32_t eax1;

    return eax1 & 0xff;
}

int32_t fun_418dd8() {
    int32_t eax1;

    g459b08 = 0;
    return eax1;
}

void fun_418f6c() {
}

void fun_418fe2() {
}

void fun_419c04() {
}

signed char g459ee4 = 0;

int32_t g483140 = 0xf0391189;

int32_t g459ee0 = 0;

int32_t fun_419c7e(int32_t ecx, int32_t a2, uint32_t a3, int32_t a4, int32_t a5) {
    int1_t zf6;
    int32_t edx7;
    int1_t zf8;
    void* eax9;
    int32_t eax10;
    int32_t eax11;
    int1_t zf12;
    int32_t eax13;
    void* eax14;
    int32_t eax15;
    int32_t esi16;
    int32_t edi17;

    if (a3 < 0x104) {
        if (a3 < 0x100) {
            addr_419e33_3:
            CallWindowProcA();
            goto a5;
        } else {
            if (a3 <= 0x100) {
                if (a4 != 16) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1) = 0;
                    g459ee4 = 0;
                    fun_41a6e0(ecx);
                    GetWindowLongA();
                    PostMessageA();
                    goto 0xf4;
                } else {
                    g459ee4 = 1;
                    return 0;
                }
            }
            if (a3 != 0x101) 
                goto addr_419ce8_9;
        }
    } else {
        if (a3 <= 0x104) {
            if (a4 != 16) {
                g459ee4 = 0;
            }
            zf6 = g459eac == 0;
            if (!zf6) 
                goto addr_419d1a_14; else 
                goto addr_419d03_15;
        } else {
            if (a3 < 0x112) {
                if (a3 != 0x105) {
                    goto addr_419e33_3;
                }
            } else {
                if (a3 <= 0x112) {
                    g459ee4 = 0;
                    return 0;
                } else {
                    if (a3 == 0x202) {
                        edx7 = g483140;
                        CallWindowProcA();
                        PostMessageA();
                        goto edx7;
                    } else {
                        goto addr_419e33_3;
                    }
                }
            }
        }
    }
    if (a4 == 16) {
        zf8 = g459ee4 == 0;
        if (!zf8) {
            eax9 = fun_41a6e0(ecx);
            eax10 = reinterpret_cast<int32_t>(GetWindowLongA(a2, 0xf4, eax9));
            eax11 = g459ee0;
            PostMessageA(eax11, 0x40b, eax10, a2, 0xf4, eax9);
        }
    } else {
        g459ee4 = 0;
    }
    zf12 = g459eac == 0;
    if (zf12) {
        CallWindowProcA();
        goto a5;
    }
    addr_419e4c_30:
    eax13 = 0;
    addr_419e4e_31:
    return eax13;
    addr_419ce8_9:
    goto addr_419e33_3;
    addr_419d1a_14:
    eax14 = fun_41a6e0(ecx);
    eax15 = reinterpret_cast<int32_t>(GetWindowLongA(a2, 0xf4, eax14));
    esi16 = g459ee0;
    PostMessageA(esi16, 0x40b, eax15, a2, 0xf4, eax14);
    goto addr_419e4c_30;
    addr_419d03_15:
    edi17 = g483140;
    eax13 = reinterpret_cast<int32_t>(CallWindowProcA(edi17, a2, a3, a4, a5));
    goto addr_419e4e_31;
}

int32_t g459eb0 = 0;

int32_t g459ea8 = 0;

int32_t UnrealizeObject = 0x220a48;

int32_t g483144 = 0x2a8a127d;

uint32_t g459ef0 = 0;

uint32_t g459eec = 0;

uint32_t g459ee8 = 0;

int32_t IsDlgButtonChecked = 0x220c14;

int32_t g459ef8 = 0;

int32_t GetFocus = 0x220b9e;

uint32_t g459ef4 = 0;

int32_t SetDlgItemTextA = 0x220d08;

int32_t fun_41a0aa(int32_t a1, uint32_t a2, int32_t a3, int32_t a4) {
    int32_t edi5;
    int32_t edx6;
    int32_t ecx7;
    int32_t edx8;
    int1_t zf9;
    int32_t esi10;
    int32_t edi11;
    int32_t ebp12;
    int32_t v13;
    int32_t eax14;
    int32_t v15;
    uint32_t esi16;
    int32_t ebp17;
    int32_t eax18;
    uint32_t ecx19;
    int32_t edx20;
    uint32_t eax21;
    int32_t ecx22;
    int32_t v23;
    int32_t v24;
    int32_t v25;
    int32_t eax26;
    int32_t v27;
    int32_t eax28;
    int32_t eax29;
    int32_t eax30;
    int32_t v31;
    uint32_t esi32;
    int32_t eax33;
    int32_t ebp34;
    int32_t esi35;
    int32_t eax36;
    int32_t eax37;
    int32_t ebx38;
    int1_t less_or_equal39;
    int32_t eax40;
    int32_t v41;
    int32_t eax42;
    int32_t v43;
    int32_t eax44;
    int32_t eax45;
    int32_t eax46;
    int32_t eax47;
    int1_t zf48;
    int32_t v49;
    int32_t eax50;
    int32_t edx51;
    int32_t v52;
    int32_t v53;
    int32_t v54;
    int32_t v55;
    int32_t v56;
    int32_t v57;
    int32_t v58;
    int32_t v59;
    int32_t v60;
    int32_t ebp61;
    int32_t v62;
    int32_t v63;
    int32_t v64;
    void* v65;
    int32_t eax66;
    void* esp67;
    uint32_t ebx68;
    int32_t esi69;
    int1_t zf70;
    int1_t zf71;
    int1_t zf72;
    int32_t v73;
    int1_t zf74;
    int32_t esi75;
    void* esp76;
    uint32_t ebx77;
    void* esp78;
    uint32_t eax79;
    int1_t zf80;
    int32_t v81;
    int1_t zf82;
    int32_t eax83;
    int32_t eax84;
    int32_t v85;

    edi5 = a1;
    edx6 = a3;
    ecx7 = a4;
    if (a2 < 0x110) {
        if (a2 == 16) {
            addr_41a5fa_3:
            DestroyWindow(edi5);
            edx8 = g459eb0;
            g459edc = 0;
            if (edx8 && (zf9 = g459ea8 == 0, !zf9)) {
                UnrealizeObject(edx8, edi5);
                esi10 = g459eb0;
                edi11 = g483144;
                SelectPalette(edi11, esi10, 0, edx8, edi5);
                ebp12 = g483144;
                RealizePalette(ebp12, edi11, esi10, 0, edx8, edi5);
            }
        }
    } else {
        if (a2 <= 0x110) {
            v13 = edi5;
            g459ee0 = edi5;
            eax14 = reinterpret_cast<int32_t>(GetDlgItem(v13, 0x3fa, 0xfc));
            v15 = eax14;
            esi16 = 0;
            ebp17 = 0;
            eax18 = reinterpret_cast<int32_t>(GetWindowLongA(v15, v13, 0x3fa, 0xfc));
            g483140 = eax18;
            do {
                ecx19 = reinterpret_cast<unsigned char>(g4835e0) * 20;
                edx20 = ebp17;
                eax21 = 0;
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ecx19) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ecx19 == 0))) {
                    do {
                        if (*reinterpret_cast<int32_t**>(edx20 + 0x459ddc) == *reinterpret_cast<int32_t**>(eax21 + 0x4647e0)) {
                            *reinterpret_cast<int32_t*>(edx20 + 0x459de4) = *reinterpret_cast<int32_t*>(eax21 + 0x4647e4);
                        }
                        eax21 = eax21 + 20;
                    } while (reinterpret_cast<int32_t>(eax21) < reinterpret_cast<int32_t>(ecx19));
                }
                ecx22 = *reinterpret_cast<int32_t*>(edx20 + 0x459dd8);
                *reinterpret_cast<int32_t*>(edx20 + 0x459de0) = **reinterpret_cast<int32_t**>(edx20 + 0x459ddc);
                if (ecx22 != 0x404) {
                    if (ecx22 != 0x405) {
                        if (ecx22 != 0x406) {
                            v23 = 0x419c80;
                            v24 = ecx22;
                            v25 = edi5;
                            eax26 = reinterpret_cast<int32_t>(GetDlgItem(v25, v24, 0xfc, 0x419c80, v15, v13, 0x3fa, 0xfc));
                            v27 = eax26;
                            SetWindowLongA(v27, v25, v24, 0xfc, 0x419c80, v15, v13, 0x3fa, 0xfc);
                        } else {
                            v23 = 0x419e80;
                            v24 = ecx22;
                            v25 = edi5;
                            eax28 = reinterpret_cast<int32_t>(GetDlgItem(v25, v24, 0xfc, 0x419e80, v15, v13, 0x3fa, 0xfc));
                            v27 = eax28;
                            SetWindowLongA(v27, v25, v24, 0xfc, 0x419e80, v15, v13, 0x3fa, 0xfc);
                            g459ef0 = esi16;
                        }
                    } else {
                        v23 = 0x419e80;
                        v24 = ecx22;
                        v25 = edi5;
                        eax29 = reinterpret_cast<int32_t>(GetDlgItem(v25, v24, 0xfc, 0x419e80, v15, v13, 0x3fa, 0xfc));
                        v27 = eax29;
                        SetWindowLongA(v27, v25, v24, 0xfc, 0x419e80, v15, v13, 0x3fa, 0xfc);
                        g459eec = esi16;
                    }
                } else {
                    v23 = 0x419e80;
                    v24 = ecx22;
                    v25 = edi5;
                    eax30 = reinterpret_cast<int32_t>(GetDlgItem(v25, v24, 0xfc, 0x419e80, v15, v13, 0x3fa, 0xfc));
                    v27 = eax30;
                    SetWindowLongA(v27, v25, v24, 0xfc, 0x419e80, v15, v13, 0x3fa, 0xfc);
                    g459ee8 = esi16;
                }
                ++esi16;
                ebp17 = ebp17 + 16;
            } while (esi16 < 13);
            fun_419f50(ecx22, v27, v25, v24, 0xfc, v23, v15, v13, 0x3fa, 0xfc);
            fun_419fe0(ecx22, v27, v25, v24, 0xfc, v23, v15, v13, 0x3fa, 0xfc);
            goto v31;
        }
        if (a2 <= 0x111) 
            goto addr_41a3d5_22; else 
            goto addr_41a0db_23;
    }
    addr_41a649_24:
    return 0;
    addr_41a3d5_22:
    esi32 = 0;
    *reinterpret_cast<int16_t*>(&esi32) = *reinterpret_cast<int16_t*>(&edx6);
    if (esi32 < 0x407) {
        if (esi32 < 2) {
            if (esi32 != 1) {
                return 0;
            }
        } else {
            if (esi32 > 2) {
                if (esi32 == 0x3f5) {
                    eax33 = reinterpret_cast<int32_t>(GetDlgItem(edi5, 0x412, 1));
                    EnableWindow(eax33, edi5, 0x412, 1);
                    goto ebp34;
                } else {
                    return 0;
                }
            }
        }
    } else {
        if (esi32 <= 0x407) {
            esi35 = g459eac;
            eax36 = 0;
            goto addr_41a470_34;
        } else {
            if (esi32 < 0x411) {
                if (esi32 != 0x410) {
                    return 0;
                }
            } else {
                if (esi32 <= 0x411) {
                    eax37 = reinterpret_cast<int32_t>(IsDlgButtonChecked(edi5, 0x411));
                    ebx38 = g459eac;
                    if (eax37 != ebx38) {
                        if (eax37 || (less_or_equal39 = g459ef8 <= 0, less_or_equal39)) {
                            g459eac = eax37;
                            eax40 = reinterpret_cast<int32_t>(GetDlgItem(edi5, 0x412, 1, edi5, 0x411));
                            EnableWindow(eax40, edi5, 0x412, 1, edi5, 0x411);
                            goto v41;
                        } else {
                            eax42 = reinterpret_cast<int32_t>(GetFocus("You can't turn off this option because you are using the ALT or F10 keys.", "DOOM II For Windows", 48, edi5, 0x411));
                            MessageBoxA(eax42, "You can't turn off this option because you are using the ALT or F10 keys.", "DOOM II For Windows", 48, edi5, 0x411);
                            CheckDlgButton(edi5, 0x411, 1, eax42, "You can't turn off this option because you are using the ALT or F10 keys.", "DOOM II For Windows", 48, edi5, 0x411);
                            goto v43;
                        }
                    }
                } else {
                    if (esi32 == 0x412) {
                        eax44 = reinterpret_cast<int32_t>(GetDlgItem(edi5, 2, 0));
                        EnableWindow(eax44, edi5, 2, 0);
                        eax45 = reinterpret_cast<int32_t>(GetDlgItem(edi5, esi32, 0, eax44, edi5, 2, 0));
                        EnableWindow(eax45, edi5, esi32, 0, eax44, edi5, 2, 0);
                    } else {
                        return 0;
                    }
                }
            }
        }
    }
    eax46 = 0;
    do {
        eax46 = eax46 + 16;
        **reinterpret_cast<int32_t**>(eax46 + 0x459ddc) = *reinterpret_cast<int32_t*>(eax46 + 0x459de0);
    } while (eax46 != 0xd0);
    fun_419c10();
    eax47 = reinterpret_cast<int32_t>(IsDlgButtonChecked(edi5, 0x3f5));
    g4835ec = eax47;
    if (!eax47) {
        zf48 = g459eac == 0;
        if (zf48) {
            addr_41a5f5_50:
            if (esi32 != 1) 
                goto addr_41a649_24; else 
                goto addr_41a5fa_3;
        } else {
            v49 = reinterpret_cast<int32_t>("WARNING:\n\nBy turning on the 'All Keys' option, you will be unable to access the menu options from the keyboard.\n\nIn order to access the menu bar, you will need to press the 'Pause' key.\n\n(Yes, there really is a key on your keyboard labeled 'Pause', take a look)");
        }
    } else {
        v49 = reinterpret_cast<int32_t>("WARNING:\n\nBy turning on the 'Use Mouse' option, you will be unable to access the menu options by either the mouse -or- keyboard.\n\nIn order to access the menu bar, you will need to press the 'Pause' key.\n\n(Yes, there really is a key on your keyboard labeled 'Pause', take a look)");
    }
    eax50 = reinterpret_cast<int32_t>(GetFocus(v49, "DOOM For Windows 95", 48, edi5, 0x3f5));
    MessageBoxA(eax50, v49, "DOOM For Windows 95", 48, edi5, 0x3f5);
    goto addr_41a5f5_50;
    do {
        addr_41a470_34:
        edx51 = *reinterpret_cast<int32_t*>(eax36 + 0x459de4);
        if (esi35 && edx51 == 99) {
            eax36 = eax36;
            edx51 = 0xb8;
        }
        eax36 = eax36 + 16;
        *reinterpret_cast<int32_t*>(eax36 + reinterpret_cast<int32_t>("gibr")) = edx51;
    } while (eax36 != 0xd0);
    fun_419f50(ecx7, v52, v53, v54, v55, v56, v57, v58, v59, v60);
    return 0;
    addr_41a0db_23:
    if (a2 == 0x40b) {
        ebp61 = edx6;
        g459ef4 = 0;
        v62 = ecx7;
        eax66 = fun_419610(ecx7, v63, v64, v65);
        esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 84 - 4 + 4);
        if (eax66) {
            ebx68 = 0;
            esi69 = 0;
            do {
                if (v62 == *reinterpret_cast<int32_t*>(esi69 + 0x459de0) && ebp61 != *reinterpret_cast<int32_t*>(esi69 + 0x459dd8)) {
                    zf70 = ebx68 == g459ee8;
                    if (zf70 || ((zf71 = ebx68 == g459eec, zf71) || (zf72 = ebx68 == g459ef0, zf72))) {
                        g459ef4 = ebx68;
                    }
                    v73 = *reinterpret_cast<int32_t*>(esi69 + 0x459dd8);
                    SetDlgItemTextA(edi5, v73, 0x454190);
                    esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) - 4 - 4 - 4 - 4 + 4);
                    zf74 = *reinterpret_cast<int32_t*>(esi69 + 0x459de0) == 0xb8;
                    if (zf74 || (zf74 || *reinterpret_cast<int32_t*>(esi69 + 0x459de0) == 0xc4)) {
                        --g459ef8;
                    }
                    ecx7 = 0;
                    *reinterpret_cast<int32_t*>(esi69 + 0x459de0) = 0;
                }
                ++ebx68;
                esi69 = esi69 + 16;
            } while (ebx68 < 13);
            esi75 = 0;
            do {
                if (ebp61 == *reinterpret_cast<int32_t*>(esi75 + 0x459dd8)) {
                    SetDlgItemTextA(edi5, ebp61, esp67);
                    esp76 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp67) - 4 - 4 - 4 - 4 + 4);
                    ebx77 = g459ef4;
                    if (ebx77) {
                        *reinterpret_cast<int32_t*>((ebx77 << 4) + 0x459de0) = *reinterpret_cast<int32_t*>(esi75 + 0x459de0);
                        fun_419610(ecx7, edi5, ebp61, esp67);
                        esp78 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp76) - 4 + 4);
                        eax79 = g459ef4;
                        ecx7 = *reinterpret_cast<int32_t*>((eax79 << 4) + 0x459dd8);
                        SetDlgItemTextA(edi5, ecx7, esp78, edi5, ebp61, esp67);
                        esp76 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp78) - 4 - 4 - 4 - 4 + 4);
                    }
                    zf80 = *reinterpret_cast<int32_t*>(esi75 + 0x459de0) == 0xb8;
                    if (zf80 || (zf80 || *reinterpret_cast<int32_t*>(esi75 + 0x459de0) == 0xc4)) {
                        --g459ef8;
                    }
                    *reinterpret_cast<int32_t*>(esi75 + 0x459de0) = v81;
                    zf82 = v81 == 0xb8;
                    if (zf82 || (zf82 || v81 == 0xc4)) {
                        ++g459ef8;
                    }
                    eax83 = reinterpret_cast<int32_t>(GetDlgItem(edi5, 0x412, 1, edi5, ebp61, esp67));
                    EnableWindow(eax83, edi5, 0x412, 1, edi5, ebp61, esp67);
                    esp67 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp76) - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4);
                }
                esi75 = esi75 + 16;
            } while (esi75 != 0xd0);
        }
        eax84 = reinterpret_cast<int32_t>(GetDlgItem(edi5, ebp61, 0xb1, 0, 0xff));
        PostMessageA(eax84, edi5, ebp61, 0xb1, 0, 0xff);
        goto v85;
    } else {
        goto addr_41a649_24;
    }
}

int32_t g483184 = 0x2c8d0000;

void fun_41ac51() {
    int32_t eax1;

    g483184 = eax1;
}

void fun_41acbe() {
}

void fun_41b191(void** ecx) {
    void** esi2;
    void** edx3;
    void** eax4;
    void** ecx5;

    eax4 = fun_434890(ecx, esi2, edx3);
    fun_433eb0(eax4, esi2, edx3, ecx);
    ecx5 = reinterpret_cast<void**>(0);
    do {
        fun_41b210(ecx5);
        ecx5 = ecx5 + 16;
        fun_41c2a0(ecx5);
    } while (!reinterpret_cast<int1_t>(ecx5 == 96));
    return;
}

void fun_41b209() {
}

void fun_41b287() {
}

struct s945 {
    signed char f0;
    signed char f1;
};

struct s946 {
    signed char f0;
    signed char f1;
};

void fun_41b450(int32_t ecx) {
    void** ecx2;
    void** eax3;
    void** eax4;
    int32_t ebp5;
    int32_t eax6;
    int32_t eax7;
    struct s945* edi8;
    struct s946* esi9;
    signed char al10;
    signed char al11;
    void** eax12;
    signed char* edi13;
    uint32_t ecx14;

    ecx2 = eax3;
    g4835a0 = eax4;
    ebp5 = (eax6 * 4 - eax7) * 8;
    edi8 = reinterpret_cast<struct s945*>(0x483540);
    g483594 = 1;
    esi9 = reinterpret_cast<struct s946*>(0x483450 + ebp5);
    do {
        al10 = esi9->f0;
        edi8->f0 = al10;
        if (!al10) 
            break;
        al11 = esi9->f1;
        ++esi9;
        edi8->f1 = al11;
        ++edi8;
    } while (al11);
    eax12 = fun_4435d0(ecx2);
    if (!eax12) {
        *reinterpret_cast<signed char*>(ebp5 + 0x483450) = 0;
    }
    edi13 = reinterpret_cast<signed char*>(0x483450 + (reinterpret_cast<unsigned char>(ecx2) * 4 - reinterpret_cast<unsigned char>(ecx2)) * 8);
    ecx14 = reinterpret_cast<unsigned char>(ecx2) - reinterpret_cast<unsigned char>(ecx2) - 1;
    do {
        if (!ecx14) 
            break;
        --ecx14;
        ++edi13;
    } while (*edi13);
    g483598 = ~ecx14 - 1;
    return;
}

void fun_41b4e6() {
}

void** fun_41b560(void** ecx) {
    int32_t eax2;
    void** ebx3;
    int1_t zf4;
    void** edx5;
    void** eax6;

    if (eax2 == 0x79) {
        ebx3 = g4835bc;
        fun_417cd0();
        fun_41d240();
        zf4 = reinterpret_cast<int1_t>(g4835bc == 0xfffffffe);
        if (zf4) {
            g4835bc = ebx3;
        }
        eax6 = fun_4312d0(ecx, edx5);
    }
    return eax6;
}

void fun_41b6ce() {
}

void fun_41baf8(int32_t ecx) {
    int32_t eax2;
    void** eax3;

    if (eax2 != 4) {
        fun_417ed0();
        g4835cc = reinterpret_cast<void**>(0);
        return;
    } else {
        eax3 = g4835cc;
        g48358c = eax3;
        g4835b8 = reinterpret_cast<void**>(1);
        g4835b0 = reinterpret_cast<void**>("are you sure? this skill level\nisn't even remotely fair.\n\npress y or n.");
        g48359c = reinterpret_cast<void**>(0x41bad0);
        g483588 = reinterpret_cast<void**>(1);
        g4835cc = reinterpret_cast<void**>(1);
        return;
    }
}

void fun_41bdb5() {
}

void** fun_41c11c(void** ecx) {
    void** esi2;
    void** eax3;
    void** ebx4;
    void** eax5;

    eax3 = fun_434890(ecx, esi2, ecx);
    eax5 = fun_433eb0(eax3, esi2, ecx, ebx4);
    return eax5;
}

int32_t fun_41c250(uint32_t ecx) {
    signed char* ebp2;
    signed char* eax3;
    struct s27* edx4;
    int32_t edx5;
    signed char* ebx6;
    signed char* eax7;
    int32_t v8;
    int32_t esi9;
    uint32_t edx10;
    signed char* edi11;
    uint32_t ecx12;

    ebp2 = eax3;
    edx4 = g482f08;
    edx5 = edx4->f2;
    ebx6 = eax7;
    v8 = edx5;
    esi9 = edx5;
    edx10 = 0;
    while (1) {
        edi11 = ebp2;
        ecx12 = ecx - ecx - 1;
        do {
            if (!ecx12) 
                break;
            --ecx12;
            ++edi11;
            ++esi9;
        } while (*edi11);
        ecx = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(~ecx12) - 1);
        if (edx10 >= ecx) 
            break;
        if (*ebx6 == 10) {
            esi9 = esi9 + v8;
        }
        ++ebx6;
        ++edx10;
    }
    return esi9;
}

void fun_41c296() {
}

void fun_41cfa5() {
}

void fun_41d28b(int32_t ecx) {
}

void fun_41d408() {
}

void fun_41d502() {
}

void** fun_41d603(void** ecx) {
    void** v2;
    void** v3;
    void** edx4;
    void** v5;
    void** esi6;
    void** v7;
    void** edi8;
    void** v9;
    void** ebp10;
    void** eax11;
    void** ecx12;
    void** edx13;
    void** ebx14;
    int32_t edx15;
    void** v16;
    void** v17;
    int32_t v18;
    void** esi19;

    v2 = ecx;
    v3 = edx4;
    v5 = esi6;
    v7 = edi8;
    v9 = ebp10;
    eax11 = fun_442d87(ecx);
    ecx12 = eax11;
    if (eax11) {
        edx13 = g4835e0;
        ebx14 = reinterpret_cast<void**>(0);
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx13) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx13 == 0))) {
            edx15 = 0;
            do {
                if (*reinterpret_cast<int32_t*>(edx15 + 0x4647e8)) {
                    *reinterpret_cast<void****>(edx15 + 0x4647e0) = reinterpret_cast<void***>(reinterpret_cast<int32_t>(",ME") + edx15 + 16);
                }
                if (*reinterpret_cast<int32_t*>(edx15 + 0x4647e4) <= 0xfffff001 || *reinterpret_cast<int32_t*>(edx15 + 0x4647e4) >= 0xfff) {
                    v16 = **reinterpret_cast<void****>(edx15 + 0x4647e0);
                    v17 = *reinterpret_cast<void***>(edx15 + reinterpret_cast<int32_t>(",ME"));
                    v18 = reinterpret_cast<int32_t>("%s\t\t\"%s\"\n");
                } else {
                    v16 = **reinterpret_cast<void****>(edx15 + 0x4647e0);
                    v17 = *reinterpret_cast<void***>(edx15 + reinterpret_cast<int32_t>(",ME"));
                    v18 = reinterpret_cast<int32_t>("%s\t\t%i\n");
                }
                fun_442b98(ecx12, ecx12, v18, v17, v16);
                esi19 = g4835e0;
                ++ebx14;
                edx15 = edx15 + 20;
            } while (reinterpret_cast<signed char>(ebx14) < reinterpret_cast<signed char>(esi19));
        }
        eax11 = fun_443392(ecx12, v9, v7, v5, v3, v2);
    }
    return eax11;
}

void fun_41d6c1() {
}

void fun_41da64() {
}

void fun_41de96() {
}

void fun_41dfc4() {
}

struct s947 {
    signed char[32] pad32;
    int32_t f20;
};

struct s948 {
    signed char[24] pad24;
    int32_t f18;
};

struct s949 {
    signed char[4] pad4;
    int32_t f4;
};

struct s950 {
    signed char[36] pad36;
    int32_t f24;
};

struct s951 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s952 {
    signed char[20] pad20;
    int32_t f14;
};

void fun_41e2bd() {
    struct s947* edx1;
    struct s948* edx2;
    struct s949* esi3;
    uint48_t v4;
    int32_t* esi5;
    int32_t eax6;
    struct s950* edx7;
    struct s951* edx8;
    struct s952* edx9;

    edx1->f20 = 1;
    edx2->f18 = esi3->f4;
    *reinterpret_cast<int32_t*>(&v4) = *esi5;
    eax6 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v4) + 2) + 8;
    edx7->f24 = -1;
    *reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(&v4) + 2) = *reinterpret_cast<int16_t*>(&eax6);
    edx8->f1c = 0x20000;
    edx9->f14 = *reinterpret_cast<int32_t*>(&v4);
    goto 0x41e338;
}

struct s953 {
    signed char[36] pad36;
    int32_t f24;
};

struct s954 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s955 {
    signed char[24] pad24;
    int32_t f18;
};

void fun_41e320(int32_t ecx) {
    int32_t eax2;
    struct s953* edx3;
    struct s954* edx4;
    struct s955* edx5;

    eax2 = fun_428130(ecx, __return_address());
    edx3->f24 = 1;
    edx4->f1c = 0x10000;
    edx5->f18 = eax2;
}

void fun_41e448() {
}

void fun_41e4a4() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
}

struct s956 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s957 {
    signed char[24] pad24;
    int32_t f18;
};

struct s958 {
    signed char[20] pad20;
    void** f14;
};

struct s959 {
    signed char[20] pad20;
    void** f14;
};

void fun_41e836(void** ecx) {
    void** eax2;
    struct s956* edx3;
    struct s957* edx4;
    struct s958* edx5;
    struct s959* edx6;

    eax2 = fun_4280d0(ecx, __return_address());
    edx3->f1c = -1;
    edx4->f18 = 0x80000;
    edx5->f14 = eax2;
    edx6->f14 = eax2 + 0xfffc0000;
    fun_4312d0(ecx, __return_address());
    goto 0x41e7c3;
}

struct s960 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s961 {
    signed char[20] pad20;
    void** f14;
};

struct s962 {
    signed char[20] pad20;
    void** f14;
};

void fun_41e8fe(void** ecx) {
    struct s960* ebx2;
    void** eax3;
    struct s961* ebx4;
    void** eax5;
    struct s962* ebx6;

    ebx2->f1c = 1;
    eax3 = fun_4280d0(ecx, __return_address());
    ebx4->f14 = eax3;
    eax5 = eax3 - 0x40000;
    ebx6->f14 = eax5;
    if (eax5 == *reinterpret_cast<void***>(ecx + 4)) 
        goto 0x41e7c3;
    fun_4312d0(ecx, __return_address());
    goto 0x41e7c3;
}

void fun_41ed0a() {
}

void fun_41efee() {
}

void** fun_41f746(void** ecx) {
    void** eax2;
    void** eax3;
    void** v4;
    int32_t esi5;
    void** eax6;
    void** v7;
    void** eax8;
    void*** edx9;

    eax2 = eax3;
    if (*reinterpret_cast<void***>(eax2 + 0x78)) {
        fun_4312d0(ecx, v4);
        fun_41f670(ecx);
        esi5 = 0;
        eax6 = fun_423b30(ecx);
        v7 = eax6;
        do {
            fun_41d460(ecx, v7);
            fun_41d460(ecx, v7);
            eax8 = fun_41d460(ecx, v7);
            ecx = v7;
            edx9 = reinterpret_cast<void***>(reinterpret_cast<signed char>(eax8) % 5 + 1);
            ++esi5;
            eax2 = fun_423be0(ecx, edx9 + reinterpret_cast<int32_t>(edx9) * 2);
        } while (esi5 < 3);
    }
    return eax2;
}

void** fun_41f7da(void** ecx) {
    void** eax2;
    void** eax3;
    void** edi4;
    void** ecx5;
    void** eax6;
    void** eax7;
    uint32_t edx8;

    eax2 = eax3;
    if (*reinterpret_cast<void***>(eax2 + 0x78)) {
        fun_4312d0(ecx, edi4);
        fun_41f670(ecx);
        ecx5 = *reinterpret_cast<void***>(eax2 + 32);
        eax6 = fun_423b30(ecx5);
        fun_41d460(ecx5, edi4);
        fun_41d460(ecx5, edi4);
        eax7 = fun_41d460(ecx5, edi4);
        edx8 = reinterpret_cast<signed char>(eax7) % 5 + 1;
        eax2 = fun_423be0(eax6, edx8 * 4 - edx8);
    }
    return eax2;
}

struct s964 {
    signed char[108] pad108;
    int32_t f6c;
};

struct s963 {
    signed char[120] pad120;
    struct s964* f78;
};

void** fun_41f858(void** ecx) {
    void** edx2;
    void** eax3;
    struct s963* eax4;
    void** ebx5;

    fun_41f670(ecx);
    eax3 = fun_41d460(ecx, edx2);
    if (reinterpret_cast<signed char>(eax3) >= reinterpret_cast<signed char>(40) && (!eax4->f78 || (eax4->f78->f6c <= 0 || (eax3 = fun_427cb0(ecx), !eax3)))) {
        eax3 = fun_424ae0(ecx, edx2, ebx5);
    }
    return eax3;
}

void** fun_41f903(void** ecx) {
    void** eax2;
    void** eax3;
    void** eax4;
    void** esi5;
    void** eax6;
    uint32_t eax7;
    void** eax8;

    eax2 = eax3;
    if (*reinterpret_cast<void***>(eax2 + 0x78)) {
        fun_41f670(ecx);
        eax4 = fun_41ed30(ecx);
        if (!eax4) {
            eax2 = fun_4258c0(ecx);
        } else {
            fun_4312d0(ecx, esi5);
            eax6 = fun_41d460(ecx, esi5);
            eax7 = reinterpret_cast<signed char>(eax6) % 8 + 1;
            eax8 = fun_422370(eax7 * 4 - eax7);
            return eax8;
        }
    }
    return eax2;
}

void** fun_41fa53(void** ecx) {
    void** eax2;
    void** eax3;
    void** eax4;
    void** edi5;
    void** eax6;
    void* edx7;
    void* ecx8;

    eax2 = eax3;
    if (*reinterpret_cast<void***>(eax2 + 0x78)) {
        eax4 = fun_41ed30(ecx);
        if (!eax4) {
            eax2 = fun_4258c0(ecx);
        } else {
            fun_4312d0(ecx, edi5);
            eax6 = fun_41d460(ecx, edi5);
            edx7 = reinterpret_cast<void*>(reinterpret_cast<signed char>(eax6) % 8 + 1);
            ecx8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx7) * 4 + reinterpret_cast<uint32_t>(edx7));
            eax2 = fun_422370(reinterpret_cast<uint32_t>(ecx8) + reinterpret_cast<uint32_t>(ecx8));
        }
    }
    return eax2;
}

struct s965 {
    signed char[16] pad16;
    void** f10;
    signed char[3] pad20;
    int32_t f14;
    signed char[84] pad108;
    int32_t f6c;
};

struct s967 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s966 {
    signed char[20] pad20;
    int32_t f14;
    signed char[8] pad32;
    void** f20;
    signed char[39] pad72;
    uint32_t f48;
    int32_t f4c;
    int32_t f50;
    signed char[8] pad92;
    struct s967* f5c;
    signed char[54] pad150;
    struct s965* f96;
};

void* g464c9c = reinterpret_cast<void*>(0xc000000);

void fun_41fb28(void** ecx) {
    int1_t zf2;
    void** eax3;
    void** ebp4;
    void** eax5;
    void** ebp6;
    struct s965* edi7;
    struct s966* eax8;
    void** ecx9;
    void** eax10;
    void* edx11;
    void** ebp12;
    uint32_t* eax13;
    void** ecx14;
    void** eax15;
    int32_t eax16;
    int32_t ebx17;
    void* edx18;
    void** ecx19;

    zf2 = (*reinterpret_cast<unsigned char*>(&g482a44) & 3) == 0;
    if (!zf2) {
        addr_41fc9a_2:
        return;
    } else {
        fun_425760(ecx);
        eax3 = fun_425180(7);
        *reinterpret_cast<void***>(eax3 + 80) = reinterpret_cast<void**>(0x10000);
        eax5 = fun_41d460(7, ebp4);
        ebp6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3 + 96)) - (reinterpret_cast<unsigned char>(eax5) & 3));
        *reinterpret_cast<void***>(eax3 + 96) = ebp6;
        if (reinterpret_cast<signed char>(ebp6) < reinterpret_cast<signed char>(1)) {
            *reinterpret_cast<void***>(eax3 + 96) = reinterpret_cast<void**>(1);
        }
        edi7 = eax8->f96;
        if (!edi7) 
            goto addr_41fc9a_2;
        if (edi7->f6c <= 0) 
            goto addr_41fc9a_2;
    }
    ecx9 = edi7->f10;
    eax10 = fun_42db10(ecx9);
    if (eax10 == eax8->f20) 
        goto addr_41fc07_8;
    if (reinterpret_cast<unsigned char>(eax10) - reinterpret_cast<unsigned char>(eax8->f20) <= 0x80000000) {
        edx11 = g464c9c;
        ebp12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8->f20) + reinterpret_cast<uint32_t>(edx11));
        eax8->f20 = ebp12;
        if (reinterpret_cast<unsigned char>(eax10) - reinterpret_cast<unsigned char>(ebp12) <= 0x80000000) {
            addr_41fc07_8:
            eax13 = image_base_;
            ecx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8->f20) >> 19);
            __asm__("shrd eax, edx, 0x10");
            eax8->f48 = eax8->f5c->f3c * eax13[reinterpret_cast<unsigned char>(ecx14)];
            __asm__("shrd eax, edx, 0x10");
            eax8->f4c = eax8->f5c->f3c * *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx14) * 4 + 0x46a9e0);
            eax15 = fun_423fa0(ecx14);
            eax16 = reinterpret_cast<signed char>(eax15) / eax8->f5c->f3c;
            ebx17 = eax16;
            if (eax16 < 1) {
                ebx17 = 1;
            }
        } else {
            addr_41fc04_12:
            eax8->f20 = eax10;
            goto addr_41fc07_8;
        }
        if ((edi7->f14 + 0x280000 - eax8->f14) / ebx17 >= eax8->f50) {
            eax8->f50 = eax8->f50 + 0x2000;
            goto addr_41fc9a_2;
        } else {
            eax8->f50 = eax8->f50 - 0x2000;
            goto addr_41fc9a_2;
        }
    } else {
        edx18 = g464c9c;
        ecx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8->f20) - reinterpret_cast<uint32_t>(edx18));
        eax8->f20 = ecx19;
        if (reinterpret_cast<unsigned char>(eax10) - reinterpret_cast<unsigned char>(ecx19) >= 0x80000000) 
            goto addr_41fc07_8;
        goto addr_41fc04_12;
    }
}

void** fun_41fcce(void** ecx) {
    void** eax2;
    void** eax3;
    void** esi4;
    void** eax5;
    uint32_t edx6;
    void** ecx7;

    eax2 = eax3;
    if (*reinterpret_cast<void***>(eax2 + 0x78) && (fun_41f670(ecx), eax2 = fun_41ed30(ecx), !!eax2)) {
        eax5 = fun_41d460(ecx, esi4);
        edx6 = reinterpret_cast<signed char>(eax5) % 10 + 1;
        ecx7 = reinterpret_cast<void**>(edx6 * 4 - edx6);
        fun_4312d0(ecx7, esi4);
        eax2 = fun_422370(reinterpret_cast<unsigned char>(ecx7) + reinterpret_cast<unsigned char>(ecx7));
    }
    return eax2;
}

void** fun_420062(void** ecx) {
    void** eax2;
    void** eax3;
    void** esi4;
    void** ebp5;
    void** ecx6;
    uint32_t edi7;
    uint32_t* eax8;

    eax2 = eax3;
    esi4 = eax2;
    if (*reinterpret_cast<void***>(eax2 + 0x78) && ((fun_41f670(ecx), eax2 = fun_427cb0(ecx), !!eax2) && (fun_4312d0(20, ebp5), fun_422370(20), eax2 = reinterpret_cast<void**>(0x3e80000 / reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(esi4 + 0x78) + 92) + 72))), *reinterpret_cast<void***>(*reinterpret_cast<void***>(esi4 + 0x78) + 80) = eax2, ecx6 = *reinterpret_cast<void***>(esi4 + 0x96), edi7 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi4 + 32)) >> 19, !!ecx6))) {
        eax8 = image_base_;
        __asm__("shrd eax, edx, 0x10");
        *reinterpret_cast<void***>(ecx6 + 12) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(esi4 + 0x78) + 12) - 0x180000 * eax8[edi7];
        __asm__("shrd eax, edx, 0x10");
        *reinterpret_cast<void***>(ecx6 + 16) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(esi4 + 0x78) + 16) - 0x180000 * *reinterpret_cast<uint32_t*>(edi7 * 4 + 0x46a9e0);
        eax2 = fun_423dc0(ecx6);
    }
    return eax2;
}

struct s968 {
    signed char[104] pad104;
    unsigned char f68;
};

void** fun_4204cc(void** ecx) {
    struct s968* eax2;
    void** eax3;

    eax2->f68 = reinterpret_cast<unsigned char>(eax2->f68 & 0xfd);
    fun_4203d0(ecx);
    fun_4203d0(ecx);
    eax3 = fun_4203d0(ecx);
    return eax3;
}

struct s969 {
    signed char[104] pad104;
    unsigned char f68;
};

void fun_4205a6() {
    struct s969* eax1;

    eax1->f68 = reinterpret_cast<unsigned char>(eax1->f68 & 0xfd);
    return;
}

void** fun_420906(void** ecx) {
    void** edx2;
    void** eax3;

    eax3 = fun_4312d0(ecx, edx2);
    return eax3;
}

void fun_4209ae(void** ecx) {
    void** esi2;
    void** eax3;
    void** eax4;
    void** edx5;
    void** eax6;
    void** ecx7;

    fun_41d460(ecx, esi2);
    fun_41d460(ecx, esi2);
    fun_41d460(ecx, esi2);
    eax3 = fun_425180(33);
    eax4 = fun_41d460(33, esi2);
    *reinterpret_cast<void***>(eax3 + 80) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax4) << 9);
    fun_424ae0(33, esi2, edx5);
    eax6 = fun_41d460(33, esi2);
    ecx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3 + 96)) - (reinterpret_cast<unsigned char>(eax6) & 7));
    *reinterpret_cast<void***>(eax3 + 96) = ecx7;
    if (reinterpret_cast<signed char>(ecx7) < reinterpret_cast<signed char>(1)) {
        *reinterpret_cast<void***>(eax3 + 96) = reinterpret_cast<void**>(1);
    }
    return;
}

void fun_420a25() {
    goto fun_417720;
}

struct s970 {
    signed char[108] pad108;
    int32_t f6c;
};

void** fun_420c17(void** ecx) {
    void** ebx2;
    struct s970* eax3;
    void** edx4;
    void** eax5;

    ebx2 = g481264;
    if (ebx2 && eax3->f6c < -50) {
    }
    eax5 = fun_4312d0(ecx, edx4);
    return eax5;
}

struct s971 {
    signed char[87] pad87;
    signed char f57;
};

struct s972 {
    signed char[87] pad87;
    signed char f57;
};

void fun_420c97() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    struct s971* esi13;
    struct s972* esi14;
    signed char dl15;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    esi13->f57 = reinterpret_cast<signed char>(esi14->f57 + dl15);
}

struct s973 {
    signed char[24] pad24;
    int32_t f18;
};

struct s974 {
    signed char[38] pad38;
    int32_t f26;
};

struct s975 {
    signed char[20] pad20;
    void** f14;
};

struct s976 {
    signed char[34] pad34;
    void** f22;
};

void fun_420fce(void** ecx) {
    struct s973* ebx2;
    struct s974* ebx3;
    struct s975* ebx4;
    void** eax5;
    struct s976* ebx6;

    ebx2->f18 = -1;
    ebx3->f26 = 0x10000;
    ebx4->f14 = ecx;
    eax5 = fun_427fc0(ecx, __return_address());
    ebx6->f22 = eax5;
    goto 0x420f61;
}

struct s977 {
    signed char[16] pad16;
    int32_t f10;
};

struct s978 {
    signed char[24] pad24;
    int32_t f18;
};

struct s979 {
    signed char[38] pad38;
    int32_t f26;
};

struct s980 {
    signed char[20] pad20;
    void** f14;
};

struct s981 {
    signed char[34] pad34;
    void** f22;
};

struct s982 {
    signed char[34] pad34;
    void** f22;
};

struct s983 {
    signed char[34] pad34;
    int32_t f22;
};

struct s984 {
    signed char[34] pad34;
    int32_t f22;
};

void fun_42103b(void** ecx) {
    struct s977* ebx2;
    struct s978* ebp3;
    struct s979* ebp4;
    struct s980* ebp5;
    void** eax6;
    struct s981* ebp7;
    struct s982* ebp8;
    int32_t eax9;
    signed char v10;
    struct s983* ebp11;
    struct s984* ebp12;

    ebx2->f10 = 1;
    ebp3->f18 = 1;
    ebp4->f26 = 0x10000;
    ebp5->f14 = ecx;
    eax6 = fun_4280d0(ecx, __return_address());
    ebp7->f22 = eax6;
    if (reinterpret_cast<signed char>(eax6) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx + 4))) {
        ebp8->f22 = *reinterpret_cast<void***>(ecx + 4);
    }
    eax9 = 0;
    *reinterpret_cast<signed char*>(&eax9) = v10;
    ebp11->f22 = ebp12->f22 - (eax9 << 19);
    goto 0x420f61;
}

struct s985 {
    signed char[24] pad24;
    int32_t f18;
};

struct s986 {
    signed char[38] pad38;
    int32_t f26;
};

struct s987 {
    signed char[20] pad20;
    void** f14;
};

struct s988 {
    signed char[34] pad34;
    int32_t f22;
};

void fun_421080(void** ecx) {
    struct s985* ebx2;
    struct s986* ebx3;
    struct s987* ebx4;
    int32_t eax5;
    struct s988* ebx6;

    ebx2->f18 = 1;
    ebx3->f26 = 0x40000;
    ebx4->f14 = ecx;
    eax5 = fun_428020(ecx, __return_address());
    ebx6->f22 = eax5;
    goto 0x420f61;
}

struct s989 {
    signed char[24] pad24;
    int32_t f18;
};

struct s990 {
    signed char[38] pad38;
    int32_t f26;
};

struct s991 {
    signed char[20] pad20;
    void** f14;
};

struct s992 {
    signed char[34] pad34;
    void** f22;
};

struct s993 {
    signed char[32] pad32;
    void** f20;
};

struct s994 {
    signed char[34] pad34;
    void** f22;
};

struct s995 {
    signed char[34] pad34;
    void** f22;
};

struct s996 {
    signed char[32] pad32;
    void** f20;
};

struct s997 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s998 {
    signed char[32] pad32;
    void** f20;
};

struct s999 {
    signed char[28] pad28;
    int32_t f1c;
};

void fun_421202(void** ecx) {
    void** v2;
    struct s989* ebx3;
    struct s990* ebx4;
    struct s991* ebx5;
    void** eax6;
    struct s992* ebx7;
    struct s993* ebx8;
    int32_t eax9;
    struct s251* eax10;
    void** ebx11;
    int32_t esi12;
    void** eax13;
    struct s994* ebp14;
    void** eax15;
    struct s995* ebp16;
    void** edi17;
    struct s996* ebp18;
    struct s997* ebp19;
    struct s998* ebp20;
    struct s999* ebp21;

    v2 = reinterpret_cast<void**>(__return_address());
    ebx3->f18 = -1;
    ebx4->f26 = 0x10000;
    ebx5->f14 = ecx;
    eax6 = fun_427f70(ecx, v2);
    ebx7->f22 = eax6;
    ebx8->f20 = *reinterpret_cast<void***>(ecx + 8);
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx + 78)) <= reinterpret_cast<signed char>(0)) 
        goto 0x420f61;
    do {
        eax9 = fun_427f30(v2);
        if (eax9) {
            eax10 = fun_427ed0(ecx, v2);
            ebx11 = g4845e0;
            if (reinterpret_cast<int32_t>(eax10->fe - reinterpret_cast<unsigned char>(ebx11)) / 86 != esi12) {
                eax13 = fun_427f00(ecx, v2);
                ecx = eax13;
                if (*reinterpret_cast<void***>(eax13) == ebp14->f22) 
                    goto addr_4212a7_5;
            } else {
                eax15 = fun_427f00(ecx, v2);
                ecx = eax15;
                if (*reinterpret_cast<void***>(eax15) == ebp16->f22) 
                    goto addr_42127d_7;
            }
        }
        ++edi17;
    } while (reinterpret_cast<signed char>(edi17) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx + 78)));
    goto 0x420f61;
    addr_4212a7_5:
    ebp18->f20 = *reinterpret_cast<void***>(eax13 + 8);
    ebp19->f1c = reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax13 + 14));
    goto 0x420f61;
    addr_42127d_7:
    ebp20->f20 = *reinterpret_cast<void***>(eax15 + 8);
    ebp21->f1c = reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax15 + 14));
    goto 0x420f61;
}

struct s1000 {
    signed char[36] pad36;
    int32_t f24;
    int32_t f28;
};

int32_t fun_421771() {
    int32_t ebx1;
    int32_t edx2;
    struct s1000* eax3;

    ebx1 = edx2 * 100;
    if (ebx1 > eax3->f24) {
        eax3->f28 = edx2;
        eax3->f24 = ebx1;
        return 1;
    } else {
        return 0;
    }
}

void fun_4217c1() {
}

void fun_4229cc() {
}

struct s1002 {
    signed char[12] pad12;
    int16_t fc;
};

struct s1001 {
    signed char[12] pad12;
    struct s1002* fc;
    int32_t f10;
    int32_t f14;
    int32_t f18;
};

void fun_422a4c(int32_t ecx) {
    struct s1001* eax2;

    if (eax2->f18 >= -1) {
        if (eax2->f18 <= -1) {
            eax2->fc->fc = reinterpret_cast<int16_t>(eax2->fc->fc - 8);
            if (static_cast<int32_t>(eax2->fc->fc) <= eax2->f10) {
                eax2->fc->fc = reinterpret_cast<int16_t>(eax2->fc->fc + 8);
                eax2->f18 = 1;
                return;
            }
        } else {
            if (eax2->f18 == 1) {
                eax2->fc->fc = reinterpret_cast<int16_t>(eax2->fc->fc + 8);
                if (static_cast<int32_t>(eax2->fc->fc) >= eax2->f14) {
                    eax2->fc->fc = reinterpret_cast<int16_t>(eax2->fc->fc - 8);
                    eax2->f18 = -1;
                }
            } else {
                return;
            }
        }
    }
    return;
}

void fun_422ab6() {
}

struct s1003 {
    signed char[4] pad4;
    int32_t f4;
};

struct s1004 {
    signed char[8] pad8;
    void** f8;
};

struct s1005 {
    signed char[8] pad8;
    void** f8;
};

int32_t fun_423700(int32_t ecx) {
    struct s1003* eax2;
    void** esi3;
    void** ecx4;
    struct s1004* eax5;
    void** ebp6;
    void** edi7;
    void** esi8;
    void** edx9;
    void** eax10;
    void** edi11;
    int1_t less12;
    void** eax13;
    void** ebx14;
    void** edx15;
    int32_t eax16;
    void** ecx17;
    struct s1005* eax18;
    void** eax19;
    int1_t less20;
    void** eax21;
    int1_t less_or_equal22;
    void** eax23;
    int1_t less24;
    void** eax25;
    int1_t less_or_equal26;
    void** eax27;
    void* edx28;

    if (!eax2->f4) {
        esi3 = g483760;
        ecx4 = eax5->f8;
        if (ecx4 != esi3) {
            if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx4 + 0x68)) & 4)) {
                return 1;
            }
            __asm__("shrd eax, edx, 0x10");
            eax10 = fun_411d60(ecx4, ebp6, edi7, esi8, edx9);
            edi11 = eax10;
            less12 = reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(g484684);
            if (less12) {
                return 1;
            }
            eax13 = fun_411d60(ecx4, ebp6, edi7, esi8, edx9);
            ebx14 = g48468c;
            edx15 = eax13;
            if (reinterpret_cast<signed char>(eax13) > reinterpret_cast<signed char>(ebx14)) 
                goto addr_423844_8;
        } else {
            eax16 = 1;
            goto addr_423879_10;
        }
    } else {
        ecx17 = eax18->f8;
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx17 + 16)) & 4) || (fun_424300(ecx17), eax19 = g483dd4, less20 = reinterpret_cast<signed char>(eax19) < reinterpret_cast<signed char>(g483dcc), !less20)) {
            addr_423877_12:
            eax16 = 0;
            goto addr_423879_10;
        } else {
            __asm__("shrd eax, edx, 0x10");
            if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx17 + 46)) != *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx17 + 50)) && (eax21 = fun_411d60(ecx17, ebp6, edi7, esi8, edx9), less_or_equal22 = reinterpret_cast<signed char>(eax21) <= reinterpret_cast<signed char>(g484684), !less_or_equal22)) {
                g484684 = eax21;
            }
            if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx17 + 46) + 4) != *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx17 + 50) + 4) && (eax23 = fun_411d60(ecx17, ebp6, edi7, esi8, edx9), less24 = reinterpret_cast<signed char>(eax23) < reinterpret_cast<signed char>(g48468c), less24)) {
                g48468c = eax23;
            }
            eax25 = g48468c;
            less_or_equal26 = reinterpret_cast<signed char>(eax25) <= reinterpret_cast<signed char>(g484684);
            if (less_or_equal26) {
                return 0;
            }
        }
    }
    if (reinterpret_cast<signed char>(eax10) > reinterpret_cast<signed char>(ebx14)) {
        edi11 = ebx14;
    }
    eax27 = g484684;
    if (reinterpret_cast<signed char>(edx15) < reinterpret_cast<signed char>(eax27)) {
        edx15 = eax27;
    }
    edx28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx15) + reinterpret_cast<unsigned char>(edi11));
    g4837b0 = ecx4;
    g483764 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(edx28) - (reinterpret_cast<int32_t>(edx28) >> 31)) >> 1);
    goto addr_423877_12;
    addr_423844_8:
    return 1;
    addr_423879_10:
    return eax16;
}

struct s1006 {
    signed char[64] pad64;
    int32_t f40;
    int32_t f44;
    signed char[32] pad104;
    unsigned char f68;
    signed char[1] pad106;
    unsigned char f6a;
    signed char[1] pad108;
    int32_t f6c;
};

int32_t fun_423e5b(void** ecx) {
    uint32_t eax2;
    struct s1006* eax3;
    int32_t ecx4;
    int1_t zf5;
    void** eax6;
    void** esi7;
    void** eax8;
    void** eax9;
    void** eax10;
    void** eax11;
    void** edx12;
    unsigned char bl13;

    eax2 = fun_423310(ecx);
    if (!eax2) {
        if (eax3->f6c > 0) {
            if (!(eax3->f6a & 2)) {
                if (eax3->f68 & 4 && ((ecx4 = g483740, g483744 = reinterpret_cast<void**>(1), !!ecx4) && (zf5 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&g484d04)) & 3) == 0, zf5))) {
                    fun_422370(10);
                    eax6 = fun_425180(38);
                    eax8 = fun_41d460(38, esi7);
                    eax9 = fun_41d460(38, esi7);
                    *reinterpret_cast<void***>(eax6 + 72) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8) - reinterpret_cast<unsigned char>(eax9) << 12);
                    eax10 = fun_41d460(38, esi7);
                    eax11 = fun_41d460(38, esi7);
                    *reinterpret_cast<void***>(eax6 + 76) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax10) - reinterpret_cast<unsigned char>(eax11) << 12);
                }
            } else {
                fun_4252a0(ecx);
            }
        } else {
            fun_424ae0(ecx, esi7, edx12);
            eax3->f44 = 0;
            bl13 = eax3->f68;
            eax3->f40 = 0;
            eax3->f68 = reinterpret_cast<unsigned char>(bl13 & 0xfd);
            return 1;
        }
    }
    return 1;
}

void fun_423f9e() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
}

void fun_423fc4() {
}

void fun_42557b(int32_t ecx) {
}

void fun_4259ae() {
}

struct s1007 {
    signed char[16] pad16;
    int32_t f10;
};

struct s1008 {
    signed char[22] pad22;
    int16_t f16;
};

struct s1009 {
    signed char[8] pad8;
    void** f8;
};

struct s1010 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s1011 {
    signed char[36] pad36;
    int32_t f24;
};

struct s1012 {
    signed char[24] pad24;
    int32_t f18;
};

void fun_425cc0(void** ecx) {
    struct s1007* ebx2;
    void** v3;
    struct s1008* edi4;
    void** eax5;
    int32_t eax6;
    struct s1010* ebx7;
    struct s1011* ebx8;
    struct s1012* ebx9;

    ebx2->f10 = 0x8000;
    v3 = reinterpret_cast<void**>(edi4->f16 * 18);
    eax5 = g4845d4;
    *reinterpret_cast<void***>(ecx + 8) = (*reinterpret_cast<struct s1009**>(reinterpret_cast<unsigned char>(eax5) + reinterpret_cast<unsigned char>(v3) + 14))->f8;
    eax6 = fun_428020(ecx, v3);
    ebx7->f1c = 0;
    ebx8->f24 = 0;
    ebx9->f18 = eax6;
    *reinterpret_cast<void***>(ecx + 14) = reinterpret_cast<void**>(0);
    fun_4312d0(ecx, v3);
    fun_425f20(ecx, v3);
    goto 0x425c3f;
}

struct s1013 {
    signed char[16] pad16;
    int32_t f10;
};

struct s1014 {
    signed char[20] pad20;
    void** f14;
};

struct s1015 {
    signed char[20] pad20;
    void** f14;
};

struct s1016 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s1017 {
    signed char[24] pad24;
    void** f18;
};

struct s1018 {
    signed char[36] pad36;
    int32_t f24;
};

void fun_425db8(void** ecx) {
    struct s1013* ebx2;
    void** eax3;
    struct s1014* ebx4;
    struct s1015* ebx5;
    void** eax6;
    struct s1016* esi7;
    struct s1017* esi8;
    struct s1018* esi9;

    ebx2->f10 = 0x80000;
    eax3 = fun_427f70(ecx, __return_address());
    ebx4->f14 = eax3;
    if (reinterpret_cast<signed char>(eax3) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx))) {
        ebx5->f14 = *reinterpret_cast<void***>(ecx);
    }
    eax6 = *reinterpret_cast<void***>(ecx);
    esi7->f1c = 0x69;
    esi8->f18 = eax6;
    esi9->f24 = 1;
    fun_4312d0(ecx, __return_address());
    fun_425f20(ecx, __return_address());
    goto 0x425c3f;
}

struct s1019 {
    signed char[16] pad16;
    int32_t f10;
};

struct s1020 {
    signed char[20] pad20;
    void** f14;
};

struct s1021 {
    signed char[20] pad20;
    void** f14;
};

struct s1022 {
    signed char[24] pad24;
    void** f18;
};

struct s1023 {
    signed char[24] pad24;
    void** f18;
};

struct s1024 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s1025 {
    signed char[36] pad36;
    uint32_t f24;
};

void fun_425dfe(void** ecx) {
    struct s1019* ebx2;
    void** eax3;
    struct s1020* ebx4;
    struct s1021* ebx5;
    void** eax6;
    struct s1022* esi7;
    struct s1023* esi8;
    struct s1024* esi9;
    void** eax10;
    struct s1025* esi11;

    ebx2->f10 = 0x10000;
    eax3 = fun_427f70(ecx, __return_address());
    ebx4->f14 = eax3;
    if (reinterpret_cast<signed char>(eax3) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx))) {
        ebx5->f14 = *reinterpret_cast<void***>(ecx);
    }
    eax6 = fun_427fc0(ecx, __return_address());
    esi7->f18 = eax6;
    if (reinterpret_cast<signed char>(eax6) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx))) {
        esi8->f18 = *reinterpret_cast<void***>(ecx);
    }
    esi9->f1c = 0x69;
    eax10 = fun_41d460(ecx, __return_address());
    esi11->f24 = reinterpret_cast<unsigned char>(eax10) & 1;
    fun_4312d0(ecx, __return_address());
}

void fun_425eb4() {
}

void fun_425f15() {
}

void fun_426246() {
}

struct s1026 {
    signed char[14] pad14;
    int16_t fe;
};

struct s1027 {
    signed char[14] pad14;
    int16_t fe;
};

struct s1028 {
    signed char[12] pad12;
    int32_t fc;
};

struct s1029 {
    signed char[12] pad12;
    int32_t fc;
};

void** fun_42644d(void** ecx) {
    void** eax2;
    void** eax3;
    struct s1026* edx4;
    struct s1027* edx5;
    struct s1028* edx6;
    void** eax7;
    struct s1029* edx8;

    eax2 = eax3;
    edx4->fe = reinterpret_cast<int16_t>(edx5->fe + 6);
    if (edx6->fc >= 0x800000) {
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax2 + 4) == 1)) {
            if (*reinterpret_cast<void***>(eax2 + 32)) {
                *reinterpret_cast<void***>(eax2 + 0x70) = *reinterpret_cast<void***>(eax2 + 0x74);
                eax2 = fun_426090(ecx);
            } else {
                eax7 = fun_425fc0(ecx);
                return eax7;
            }
        } else {
            edx8->fc = 0x800000;
            return eax2;
        }
    }
    return eax2;
}

void** fun_4264ce(void** ecx) {
    void** eax2;
    void** ebx3;
    void** eax4;

    fun_424ae0(eax2, ecx, ebx3);
    eax4 = fun_425fc0(eax2);
    return eax4;
}

void** fun_426845(void** ecx) {
    void** eax2;
    void** ebx3;
    void** eax4;

    fun_4312d0(eax2, ecx);
    fun_424ae0(eax2, ecx, ebx3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2 + *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x70)) * 4 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x70))) * 8 + 0x464cc8) * 4) + 0x9c) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2 + *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x70)) * 4 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x70))) * 8 + 0x464cc8) * 4) + 0x9c) - 1;
    fun_425fc0(eax2);
    fun_426780(eax2);
    eax4 = fun_4267f0(eax2);
    return eax4;
}

struct s1030 {
    signed char[112] pad112;
    int32_t f70;
};

void** fun_426940(void** ecx) {
    void** v2;
    void** edi3;
    void** esi4;
    struct s1030* eax5;
    int32_t esi6;
    void** eax7;
    void*** edx8;
    void** ecx9;
    void** eax10;
    void** eax11;
    void** ebx12;
    void** eax13;

    v2 = edi3;
    fun_4312d0(ecx, v2);
    fun_424ae0(ecx, v2, esi4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax5) + *reinterpret_cast<int32_t*>((eax5->f70 * 4 - eax5->f70) * 8 + 0x464cc8) * 4 + 0x9c) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax5) + *reinterpret_cast<int32_t*>((eax5->f70 * 4 - eax5->f70) * 8 + 0x464cc8) * 4 + 0x9c) - 2;
    fun_425fc0(ecx);
    esi6 = 0;
    fun_426780(ecx);
    do {
        eax7 = fun_41d460(ecx, v2);
        edx8 = reinterpret_cast<void***>(reinterpret_cast<signed char>(eax7) % 3 + 1);
        ecx9 = reinterpret_cast<void**>(edx8 + reinterpret_cast<int32_t>(edx8) * 4);
        fun_41d460(ecx9, v2);
        fun_41d460(ecx9, v2);
        eax10 = fun_41d460(ecx9, ecx9);
        eax11 = fun_41d460(eax10, ecx9);
        ebx12 = g484570;
        ecx = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax10) - reinterpret_cast<unsigned char>(eax11) << 5) + reinterpret_cast<unsigned char>(ebx12));
        ++esi6;
        eax13 = fun_423be0(ecx, ecx9);
    } while (esi6 < 20);
    return eax13;
}

void** fun_426a12(void** ecx) {
    void** eax2;
    void** edi3;
    void** eax4;

    fun_4312d0(eax2, edi3);
    eax4 = *reinterpret_cast<void***>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x70)) * 4 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x70))) * 8 + 0x464cc8);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2 + reinterpret_cast<unsigned char>(eax4) * 4) + 0x9c)) {
        fun_424ae0(eax2, edi3, ecx);
        *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2 + *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x70)) * 4 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x70))) * 8 + 0x464cc8) * 4) + 0x9c) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2 + *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x70)) * 4 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x70))) * 8 + 0x464cc8) * 4) + 0x9c) - 1;
        fun_425fc0(eax2);
        fun_426780(eax2);
        eax4 = fun_4267f0(eax2);
    }
    return eax4;
}

struct s1031 {
    signed char[232] pad232;
    int32_t fe8;
};

void fun_426ae2() {
    struct s1031* eax1;

    eax1->fe8 = 0;
    return;
}

void fun_426bb4() {
    goto fun_4312d0;
}

void fun_426bf8() {
}

void fun_426c5c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_426ceb(int32_t ecx) {
}

void fun_426e24() {
}

void fun_426ed2() {
}

void fun_426fc8() {
}

void fun_427119() {
}

void fun_4271b4() {
}

void fun_42736e() {
}

void fun_42747b(int32_t ecx) {
}

void fun_427535() {
}

void fun_42772b(int32_t ecx) {
}

void fun_427ca9() {
}

void fun_427eca() {
}

void fun_428013() {
}

void fun_428124() {
}

void fun_428181() {
}

void fun_428d9b(int32_t ecx) {
}

void fun_4291ac() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_429247() {
}

void fun_429492() {
}

struct s1032 {
    signed char[81] pad81;
    signed char f51;
};

struct s1033 {
    signed char[81] pad81;
    signed char f51;
};

void fun_42a00f() {
    struct s1032* ebx1;
    struct s1033* ebx2;
    signed char dl3;

    ebx1->f51 = reinterpret_cast<signed char>(ebx2->f51 + dl3);
}

void fun_42a0d1() {
}

void fun_42a1d8() {
}

void fun_42a331() {
}

void fun_42a491() {
}

void fun_42afb7() {
}

void fun_42b1c3() {
}

void fun_42b3cc() {
}

void fun_42b64b(int32_t ecx) {
}

void fun_42bb4a() {
}

struct s1034 {
    signed char[87] pad87;
    signed char f57;
};

struct s1035 {
    signed char[87] pad87;
    signed char f57;
};

void fun_42bbcd() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    struct s1034* esi4;
    struct s1035* esi5;
    signed char dl6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    esi4->f57 = reinterpret_cast<signed char>(esi5->f57 + dl6);
}

void fun_42bc38() {
}

void fun_42bdd2() {
}

void fun_42bff5() {
}

void fun_42c4cd() {
}

void fun_42c555() {
}

void fun_42cf5d() {
}

void fun_42cfb6() {
}

void fun_42d045() {
}

struct s1036 {
    signed char[81] pad81;
    signed char f51;
};

struct s1037 {
    signed char[81] pad81;
    signed char f51;
};

void fun_42d335(int32_t a1, int32_t a2) {
    signed char* eax3;
    signed char* eax4;
    signed char al5;
    signed char* eax6;
    signed char* eax7;
    signed char al8;
    signed char* eax9;
    signed char* eax10;
    signed char al11;
    signed char* eax12;
    signed char* eax13;
    signed char al14;
    signed char* eax15;
    signed char* eax16;
    signed char al17;
    struct s1036* ebx18;
    struct s1037* ebx19;
    signed char dl20;
    void** eax21;
    void** edx22;
    void* eax23;
    void** edi24;
    uint32_t ebp25;
    void** ecx26;
    void** ecx27;
    signed char* ebx28;
    void*** edx29;
    void* ecx30;
    void** esi31;
    void** esi32;

    *eax3 = reinterpret_cast<signed char>(*eax4 + al5);
    *eax6 = reinterpret_cast<signed char>(*eax7 + al8);
    *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
    *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
    *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
    ebx18->f51 = reinterpret_cast<signed char>(ebx19->f51 + dl20);
    eax21 = g48ae88;
    edx22 = g48ae8c;
    eax23 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax21) - reinterpret_cast<unsigned char>(edx22));
    if (reinterpret_cast<int32_t>(eax23) >= reinterpret_cast<int32_t>(0)) {
        edi24 = g48ae7c;
        ebp25 = g4925c0;
        ecx26 = g48ae84;
        ecx27 = g48ae78;
        ebx28 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>("b" + reinterpret_cast<unsigned char>(edx22) * 4)) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx26) * 4 + 0x488cc0)));
        edx29 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(edx22) - ebp25) * reinterpret_cast<unsigned char>(edi24) + reinterpret_cast<unsigned char>(ecx27));
        do {
            ecx30 = g48ae80;
            *reinterpret_cast<signed char*>(&ecx30) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx30) + (reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(edx29) >> 16) & 0x7f));
            esi31 = g48ae90;
            eax23 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax23) - 1);
            edx29 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx29) + reinterpret_cast<unsigned char>(edi24));
            esi32 = g4775d0;
            *ebx28 = *reinterpret_cast<signed char*>((reinterpret_cast<uint32_t>(ecx30) & 0xff) + reinterpret_cast<unsigned char>(esi31));
            ebx28 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx28) + reinterpret_cast<unsigned char>(esi32));
        } while (!reinterpret_cast<int1_t>(eax23 == 0xffffffff));
    }
    goto a2;
}

int32_t g4654c0 = 0;

void fun_42d3c0(int32_t ecx) {
    int32_t edx2;
    void** edi3;
    void** ebp4;
    int1_t zf5;
    void** eax6;
    void** esi7;
    void** eax8;
    void** ebx9;
    void** eax10;
    void* ebx11;
    void*** ecx12;
    void** ecx13;
    signed char* eax14;
    void** esi15;
    void* ecx16;
    uint32_t ecx17;

    edx2 = g4654c0;
    edi3 = g487fb4;
    ebp4 = g60b9e8;
    zf5 = g48ae8c == 0;
    if (zf5) {
        g48ae8c = reinterpret_cast<void**>(1);
    }
    eax6 = g48ae98;
    esi7 = g48ae88;
    if (eax6 - 1 == esi7) {
        eax8 = g48ae98;
        g48ae88 = eax8 - 2;
    }
    ebx9 = g48ae88;
    eax10 = g48ae8c;
    ebx11 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx9) - reinterpret_cast<unsigned char>(eax10));
    if (reinterpret_cast<int32_t>(ebx11) >= reinterpret_cast<int32_t>(0)) {
        ecx12 = g60ba04;
        ecx13 = g48ae84;
        eax14 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax10) * 4 + 0x487fc0)) + reinterpret_cast<uint32_t>(ecx12) + reinterpret_cast<int32_t>(*reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx13) * 4 + 0x488cc0)));
        esi15 = edi3;
        do {
            ecx16 = *reinterpret_cast<void**>(edx2 * 4 + 0x4653f8);
            *reinterpret_cast<signed char*>(&ecx16) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx16) + reinterpret_cast<uint32_t>(eax14));
            ecx17 = reinterpret_cast<uint32_t>(ecx16) & 0xff;
            *reinterpret_cast<signed char*>(&ecx17) = *reinterpret_cast<signed char*>(ecx17 + 0x487e30);
            ++edx2;
            *eax14 = *reinterpret_cast<signed char*>((ecx17 & 0xff) + reinterpret_cast<unsigned char>(esi15) + 0x600);
            if (edx2 == 50) {
                edx2 = 0;
            }
            ebx11 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx11) - 1);
            eax14 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax14) + reinterpret_cast<unsigned char>(ebp4));
        } while (!reinterpret_cast<int1_t>(ebx11 == 0xffffffff));
    }
    g60b9e8 = ebp4;
    g487fb4 = edi3;
    g4654c0 = edx2;
    return;
}

void fun_42d485(int32_t ecx) {
    void** eax2;
    void** edx3;
    void* eax4;
    void* edx5;
    void* ebx6;
    uint32_t esi7;
    void** edx8;
    void** edi9;
    void** ecx10;
    void** ebp11;
    signed char* ebx12;
    void*** edx13;
    void* esi14;
    void* ecx15;
    void** esi16;
    void** ecx17;

    eax2 = g48ae88;
    edx3 = g48ae8c;
    eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax2) - reinterpret_cast<unsigned char>(edx3));
    if (reinterpret_cast<int32_t>(eax4) >= reinterpret_cast<int32_t>(0)) {
        edx5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx3) * reinterpret_cast<unsigned char>(g60b9e8));
        ebx6 = g60ba08;
        esi7 = g4925c0;
        edx8 = g48ae8c;
        edi9 = g48ae7c;
        ecx10 = g48ae84;
        ebp11 = g48ae78;
        ebx12 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx6) + reinterpret_cast<uint32_t>(edx5) + reinterpret_cast<unsigned char>(ecx10));
        edx13 = reinterpret_cast<void***>((reinterpret_cast<unsigned char>(edx8) - esi7) * reinterpret_cast<unsigned char>(edi9) + reinterpret_cast<unsigned char>(ebp11));
        do {
            esi14 = g48ae80;
            ecx15 = g48ae74;
            *reinterpret_cast<signed char*>(&ecx15) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ecx15) + *reinterpret_cast<unsigned char*>((reinterpret_cast<int32_t>(edx13) >> 16) + reinterpret_cast<uint32_t>(esi14)));
            esi16 = g48ae90;
            eax4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax4) - 1);
            *ebx12 = *reinterpret_cast<signed char*>((reinterpret_cast<uint32_t>(ecx15) & 0xff) + reinterpret_cast<unsigned char>(esi16));
            ecx17 = g60b9e8;
            edx13 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx13) + reinterpret_cast<unsigned char>(edi9));
            ebx12 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx12) + reinterpret_cast<unsigned char>(ecx17));
        } while (!reinterpret_cast<int1_t>(eax4 == 0xffffffff));
    }
    return;
}

void fun_42d51d() {
}

void fun_42d5a6(int32_t ecx) {
    uint32_t esi2;
    uint32_t eax3;
    int32_t ebx4;
    uint32_t edx5;
    uint32_t edi6;
    int32_t edx7;
    int32_t ebx8;
    uint32_t edx9;
    void** ecx10;
    void** edi11;
    uint32_t ebp12;
    uint32_t ecx13;

    esi2 = g48ae70;
    eax3 = g48ae58;
    ebx4 = g48ae68;
    edx5 = g48ae50;
    edi6 = g48ae50;
    edx7 = g48ae54;
    ebx8 = *reinterpret_cast<int32_t*>("b" + ebx4 * 4) + *reinterpret_cast<int32_t*>(edx5 * 4 + 0x488cc0);
    edx9 = edx7 - edi6;
    do {
        ecx10 = g48ae5c;
        *reinterpret_cast<signed char*>(&ecx10) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx10) + ((reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(eax3) >> 10) & 0xfc0) + (reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(esi2) >> 16) & 63)));
        edi11 = g48ae6c;
        ebp12 = g48ae48;
        ++ebx8;
        --edx9;
        *reinterpret_cast<signed char*>(ebx8 - 1) = *reinterpret_cast<signed char*>((reinterpret_cast<unsigned char>(ecx10) & 0xff) + reinterpret_cast<unsigned char>(edi11));
        ecx13 = g48ae4c;
        esi2 = esi2 + ebp12;
        eax3 = eax3 + ecx13;
    } while (edx9 != 0xffffffff);
    return;
}

void fun_42d639() {
}

struct s1038 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1039 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1040 {
    signed char[12] pad12;
    int32_t fc;
};

struct s1041 {
    signed char[12] pad12;
    int32_t fc;
};

struct s1042 {
    signed char[4] pad4;
    int32_t f4;
};

struct s1043 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_42d70e() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    int32_t eax4;
    struct s1038* ebx5;
    struct s1039* ebx6;
    int32_t eax7;
    int32_t eax8;
    struct s1040* ebx9;
    struct s1041* ebx10;
    int32_t eax11;
    int32_t edx12;
    struct s1042* ebx13;
    struct s1043* ebx14;
    int32_t edx15;
    int32_t edx16;
    int32_t* ebx17;
    int32_t* ebx18;
    int32_t edx19;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    if (eax4 < ebx5->f8) {
        ebx6->f8 = eax7;
    }
    if (eax8 > ebx9->fc) {
        ebx10->fc = eax11;
    }
    if (edx12 < ebx13->f4) {
        ebx14->f4 = edx15;
    }
    if (edx16 > *ebx17) {
        *ebx18 = edx19;
    }
    return;
}

void fun_42db91() {
}

void fun_42dd78() {
}

void fun_42de51() {
}

void fun_42e27a() {
}

void fun_42e521() {
}

void fun_42e739() {
}

struct s1044 {
    signed char[86] pad86;
    signed char f56;
};

void fun_42eb71(struct s1044* ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    signed char* eax20;
    signed char* eax21;
    signed char al22;
    signed char dl23;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
    *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
    *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
    *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
    *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
    ecx->f56 = reinterpret_cast<signed char>(ecx->f56 + dl23);
}

void fun_42eddb(int32_t ecx) {
}

void fun_42f15d() {
}

void fun_42fea3() {
}

void fun_42fee1() {
}

void fun_430019() {
}

void fun_430128() {
}

void fun_430455() {
}

void fun_4306ba() {
}

void fun_4307a8() {
}

void fun_430c72() {
}

void fun_430fb6() {
}

void fun_4312e7() {
}

void fun_431458() {
}

void fun_4317c6() {
}

void fun_431827() {
}

void fun_431c05() {
}

void fun_431e69() {
}

void fun_431eee() {
}

void fun_4328e9() {
}

void fun_432bcc() {
}

void** fun_432f00(void** ecx) {
    int32_t edx2;
    void** eax3;

    g5f2754 = reinterpret_cast<void**>(0);
    fun_432260(edx2, __return_address());
    eax3 = fun_432f30(ecx);
    return eax3;
}

void fun_432f5b(int32_t ecx) {
}

void** fun_433273(void** ecx, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** ebx6;
    void** v7;
    void** v8;
    void** edx9;
    void** v10;
    void** esi11;
    int32_t ebx12;
    void** ecx13;
    void** eax14;
    void** eax15;
    int32_t ebx16;
    int32_t ebx17;
    void** eax18;
    void** eax19;
    int32_t ebx20;
    void** eax21;

    v4 = reinterpret_cast<void**>(__return_address());
    v5 = ebx6;
    v7 = ecx;
    v8 = edx9;
    v10 = esi11;
    ebx12 = 0;
    ecx13 = ecx;
    do {
        if (*reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(ebx12 + 0x5f2508) - 12) != 0x1d4a11) {
            fun_43bd40(ecx13, "Z_CT at st_stuff.c:%i", 0x324, v10);
        }
        fun_437910(ecx13, v10, v8, v7, v5, v4, a2, a3);
        if (*reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(ebx12 + 0x5f2418) - 12) != 0x1d4a11) {
            fun_43bd40(ecx13, "Z_CT at st_stuff.c:%i", 0x325, v10);
        }
        ebx12 = ebx12 + 4;
        fun_437910(ecx13, v10, v8, v7, v5, v4, a2, a3);
    } while (ebx12 != 40);
    eax14 = g5f2744;
    if (*reinterpret_cast<int32_t*>(eax14 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx13, "Z_CT at st_stuff.c:%i", 0x327, v10);
    }
    fun_437910(ecx13, v10, v8, v7, v5, v4, a2, a3);
    eax15 = g5f26ac;
    if (*reinterpret_cast<int32_t*>(eax15 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx13, "Z_CT at st_stuff.c:%i", 0x329, v10);
    }
    fun_437910(ecx13, v10, v8, v7, v5, v4, a2, a3);
    ebx16 = 0;
    do {
        if (*reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(ebx16 + 0x5f2530) - 12) != 0x1d4a11) {
            fun_43bd40(ecx13, "Z_CT at st_stuff.c:%i", 0x32a, v10);
        }
        ebx16 = ebx16 + 8;
        fun_437910(ecx13, v10, v8, v7, v5, v4, a2, a3);
    } while (ebx16 != 48);
    ebx17 = 0;
    do {
        if (*reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(ebx17 + 0x5f2400) - 12) != 0x1d4a11) {
            fun_43bd40(ecx13, "Z_CT at st_stuff.c:%i", 0x32d, v10);
        }
        ebx17 = ebx17 + 4;
        fun_437910(ecx13, v10, v8, v7, v5, v4, a2, a3);
    } while (ebx17 != 24);
    eax18 = g5f26b4;
    if (*reinterpret_cast<int32_t*>(eax18 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx13, "Z_CT at st_stuff.c:%i", 0x32f, v10);
    }
    fun_437910(ecx13, v10, v8, v7, v5, v4, a2, a3);
    eax19 = g5f26b0;
    if (*reinterpret_cast<int32_t*>(eax19 + 0xfffffff4) != 0x1d4a11) {
        fun_43bd40(ecx13, "Z_CT at st_stuff.c:%i", 0x330, v10);
    }
    fun_437910(ecx13, v10, v8, v7, v5, v4, a2, a3);
    ebx20 = 0;
    do {
        if (*reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(ebx20 + 0x5f2560) - 12) != 0x1d4a11) {
            fun_43bd40(ecx13, "Z_CT at st_stuff.c:%i", 0x332, v10);
        }
        ebx20 = ebx20 + 4;
        eax21 = fun_437910(ecx13, v10, v8, v7, v5, v4, a2, a3);
    } while (ebx20 != 0xa8);
    return eax21;
}

void fun_43347e() {
}

void fun_43353d() {
}

void fun_433896() {
}

void fun_433906() {
}

void fun_433a47() {
}

void fun_433d33() {
}

void fun_433ead() {
}

struct s1045 {
    signed char[81] pad81;
    signed char f51;
};

struct s1046 {
    signed char[81] pad81;
    signed char f51;
};

void fun_4341a5() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    struct s1045* ebx16;
    struct s1046* ebx17;
    signed char dl18;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    ebx16->f51 = reinterpret_cast<signed char>(ebx17->f51 + dl18);
}

void fun_434238() {
}

void fun_434578() {
}

void** fun_434605(void** ecx) {
    void** eax2;
    void** edx3;
    void** eax4;

    eax4 = fun_434580(ecx, eax2, 0, edx3, __return_address());
    return eax4;
}

void fun_4346f4() {
}

void fun_434738() {
}

int32_t g60ae60 = 0;

void** fun_4348c7(int32_t ecx) {
    void* esp2;
    int1_t less_or_equal3;
    int32_t edx4;
    void** ebp5;
    void* eax6;
    int32_t edx7;
    void* ebp8;
    void** ebx9;
    signed char bl10;
    int32_t ebx11;
    void** ecx12;
    void** v13;
    void** eax14;
    void* esp15;
    void** ebp16;
    void** esi17;
    void** v18;
    void** v19;
    void** v20;
    void* esp21;
    void** ecx22;
    void** esp23;
    void* eax24;
    int1_t zf25;
    void** v26;
    int32_t ebx27;
    void** v28;
    int32_t v29;
    int32_t edx30;
    void* esp31;
    void** edx32;
    void** v33;
    int32_t v34;
    int32_t esi35;
    void** v36;
    void** v37;
    int32_t v38;
    int32_t v39;
    void** ebx40;
    void** v41;
    void** v42;
    void** eax43;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 24);
    less_or_equal3 = reinterpret_cast<signed char>(g60ae74) <= reinterpret_cast<signed char>(0);
    if (!less_or_equal3) {
        edx4 = g60ae60;
        ebp5 = g60ae74;
        eax6 = reinterpret_cast<void*>(0);
        edx7 = edx4 * 4;
        ebp8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebp5) * 4);
        do {
            ebx9 = g60ae64;
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<uint32_t>(eax6))) {
                if (*reinterpret_cast<int32_t*>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ebx9) + reinterpret_cast<uint32_t>(eax6)) - 16) >= 100) {
                    bl10 = 80;
                } else {
                    bl10 = 83;
                }
                *reinterpret_cast<int32_t*>(edx7 + 0x5f27c0) = bl10;
            }
            eax6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax6) + 4);
            edx7 = edx7 + 40;
        } while (reinterpret_cast<int32_t>(eax6) < reinterpret_cast<int32_t>(ebp8));
    }
    ebx11 = g60ae60;
    ecx12 = reinterpret_cast<void**>(0);
    v13 = reinterpret_cast<void**>(0);
    g60ae60 = ebx11 + 1;
    eax14 = fun_442d87(0);
    esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4);
    ebp16 = eax14;
    esi17 = g60ae74;
    *reinterpret_cast<signed char*>(&v18) = 0;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi17) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi17 == 0))) {
        v19 = reinterpret_cast<void**>(0);
        v20 = reinterpret_cast<void**>(0);
        do {
            esp21 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp15) - 4);
            ecx22 = reinterpret_cast<void**>(2);
            do {
                if (!ecx22) 
                    break;
                --ecx22;
            } while (1);
            *reinterpret_cast<unsigned char*>(&ecx22) = 0;
            do {
                if (!ecx22) 
                    break;
                --ecx22;
            } while (0);
            esp23 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp21) + 4);
            eax24 = reinterpret_cast<void*>(0);
            zf25 = v26 == 0;
            while (!zf25 && (eax24 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax24) + 1), reinterpret_cast<int32_t>(eax24) < reinterpret_cast<int32_t>(8))) {
                zf25 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esp23) + reinterpret_cast<uint32_t>(eax24)) == 0;
            }
            while (reinterpret_cast<int32_t>(eax24) < reinterpret_cast<int32_t>(8)) {
                eax24 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax24) + 1);
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esp23) + reinterpret_cast<uint32_t>(eax24) + 0xffffffff) = 32;
            }
            ebx27 = 0;
            fun_442b98(ecx22, ebp16, "%s ", esp23, v28, ecx22, ebp16, "%s ", esp23, v29);
            edx30 = g60ae60;
            esp31 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp23 - 4) - 4 - 4 - 4 + 4 + 12);
            if (!(reinterpret_cast<uint1_t>(edx30 < 0) | reinterpret_cast<uint1_t>(edx30 == 0))) {
                edx32 = v20;
                do {
                    ecx22 = *reinterpret_cast<void***>(edx32 + 0x5f27c0);
                    edx32 = edx32 + 4;
                    ++ebx27;
                    fun_442b98(ecx22, ebp16, "    %c", ecx22, v33, ecx22, ebp16, "    %c", ecx22, v34);
                    esi35 = g60ae60;
                    esp31 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp31) - 4 - 4 - 4 - 4 + 4 + 12);
                } while (ebx27 < esi35);
            }
            fun_442b98(ecx22, ebp16, "\n", v36, v37, ecx22, ebp16, "\n", v38, v39);
            esp15 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp31) - 4 - 4 - 4 + 4 + 8);
            ecx12 = g60ae74;
            ebx40 = v13 + 1;
            v19 = v19 + 20;
            v20 = v20 + 40;
            v13 = ebx40;
        } while (reinterpret_cast<signed char>(ebx40) < reinterpret_cast<signed char>(ecx12));
    }
    eax43 = fun_443392(ecx12, v41, v42, v18, v19, v13);
    return eax43;
}

struct s1047 {
    signed char[104] pad104;
    signed char f68;
};

struct s1048 {
    signed char[104] pad104;
    signed char f68;
};

void fun_434a45() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    struct s1047* eax16;
    struct s1048* eax17;
    signed char dl18;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    eax16->f68 = reinterpret_cast<signed char>(eax17->f68 + dl18);
}

void fun_434a50();

struct s1049 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

void** fun_434a6d(void** ecx) {
    void** eax2;
    void** v3;
    void** eax4;
    void** v5;
    int32_t eax6;
    void** v7;
    void** ecx8;
    uint32_t v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** ebp14;
    void** edi15;
    void** esi16;
    void** edx17;
    void** eax18;
    void*** v19;
    void** v20;
    void** eax21;
    void** edx22;
    void** ecx23;
    void* edi24;
    struct s1049* ebp25;
    void** ebp26;

    eax4 = fun_44367f(ecx, eax2, 0, v3);
    v5 = eax4;
    if (reinterpret_cast<signed char>(eax4) < reinterpret_cast<signed char>(0)) {
        fun_434a50();
    }
    fun_44385a(ecx);
    eax6 = fun_4442e5(ecx);
    if (eax6) {
        fun_434a50();
    }
    g60ae74 = v7;
    ecx8 = reinterpret_cast<void**>(v9 << 4);
    eax18 = fun_442e73(ecx8, v10, v11, v12, v13, v5, ebp14, edi15, esi16, edx17);
    g60ae70 = eax18;
    v19 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax18 + reinterpret_cast<uint32_t>(v7 + reinterpret_cast<unsigned char>(v7) * 4) * 4) - reinterpret_cast<unsigned char>(ecx8));
    fun_44430e(ecx8, v20);
    eax21 = fun_44385a(ecx8);
    edx22 = g60ae74;
    ecx23 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx22) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx22 == 0))) {
        edi24 = reinterpret_cast<void*>(0);
        do {
            ebp25 = reinterpret_cast<struct s1049*>((reinterpret_cast<unsigned char>(ecx23) << 4) + reinterpret_cast<uint32_t>(v19));
            fun_4439f9(ecx23);
            eax21 = g60ae70;
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(edi24) + reinterpret_cast<unsigned char>(eax21)) = v5;
            ++ecx23;
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(edi24) + reinterpret_cast<unsigned char>(eax21) + 4) = ebp25->f0;
            edi24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edi24) + 20);
            ebp26 = g60ae74;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(edi24) + reinterpret_cast<unsigned char>(eax21) - 12) = ebp25->f4;
        } while (reinterpret_cast<signed char>(ecx23) < reinterpret_cast<signed char>(ebp26));
    }
    return eax21;
}

void** fun_434b86(void** ecx, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** ebx7;
    void** v8;
    void** v9;
    void** esi10;
    void** v11;
    void** edi12;
    void** v13;
    void** ebp14;
    int32_t* ebp15;
    int32_t* edx16;
    void** edx17;
    void** ecx18;
    uint32_t eax19;
    void** ebx20;
    int1_t zf21;
    void** ecx22;
    void** eax23;
    void** edi24;
    void** eax25;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = ebx7;
    v8 = ecx;
    v9 = esi10;
    v11 = edi12;
    v13 = ebp14;
    ebp15 = edx16;
    edx17 = g60ae74;
    ecx18 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx17) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx17 == 0))) {
        do {
            eax19 = fun_444232(ecx18);
            if (!eax19) 
                break;
            ebx20 = g60ae74;
            ++ecx18;
        } while (reinterpret_cast<signed char>(ecx18) < reinterpret_cast<signed char>(ebx20));
    }
    zf21 = ecx18 == g60ae74;
    if (!zf21) {
        ecx22 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx18 + reinterpret_cast<unsigned char>(ecx18) * 4) * 4);
        eax23 = fun_442e73(ecx22, v13, v11, v9, v8, v6, v5, a2, a3, a4);
        edi24 = eax23;
        fun_44430e(ecx22, v13);
        fun_44385a(ecx22);
        eax25 = g60ae70;
        *ebp15 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx22) + reinterpret_cast<unsigned char>(eax25) + 8);
    } else {
        edi24 = reinterpret_cast<void**>(0);
    }
    return edi24;
}

int32_t fun_434c89() {
    return 0;
}

void fun_434f4b(int32_t ecx) {
}

void fun_435073() {
}

void fun_4350e2() {
}

void** fun_435301(int32_t ecx) {
    void** eax2;

    g60afe0 = reinterpret_cast<void**>(1);
    g60aff0 = reinterpret_cast<void**>(0);
    g60aff4 = reinterpret_cast<void**>(0x8c);
    eax2 = fun_434ea0(0x8c);
    return eax2;
}

void fun_435495() {
}

void fun_43550c() {
}

void fun_43557e() {
}

void fun_435a78() {
}

void fun_435b0b(int32_t ecx) {
}

void fun_4364ea() {
}

void fun_43656b(int32_t ecx) {
}

void fun_436653() {
}

void fun_436aa7() {
}

void fun_437723(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** v10;
    void** v11;
    void** ebx12;
    void** v13;
    void** v14;
    void** esi15;
    void** v16;
    void** edi17;
    void** v18;
    void** ebp19;
    void** ecx20;
    void** eax21;
    void** ebx22;
    void** edx23;
    void** edx24;
    void** v25;
    void** edx26;
    void** edx27;
    void** v28;
    void** v29;
    void** v30;
    void** eax31;

    v10 = reinterpret_cast<void**>(__return_address());
    v11 = ebx12;
    v13 = ecx;
    v14 = esi15;
    v16 = edi17;
    v18 = ebp19;
    ecx20 = eax21;
    ebx22 = edx23;
    edx24 = g60aff8;
    v25 = *reinterpret_cast<void***>(edx24);
    fun_440840(ecx20, "zone size: %i  location: %p\n", v25, edx24, v18, v16, v14, v13, v11, v10, a2, a3, a4, a5, a6, a7);
    fun_440840(ecx20, "tag range: %i to %i\n", ecx20, ebx22, v18, v16, v14, v13, v11, v10, a2, a3, a4, a5, a6, a7);
    edx26 = g60aff8;
    edx27 = *reinterpret_cast<void***>(edx26 + 20);
    while (1) {
        if (reinterpret_cast<signed char>(ecx20) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx27 + 8)) && reinterpret_cast<signed char>(ebx22) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx27 + 8))) {
            v28 = *reinterpret_cast<void***>(edx27 + 8);
            v29 = *reinterpret_cast<void***>(edx27 + 4);
            v30 = *reinterpret_cast<void***>(edx27);
            fun_440840(ecx20, "block:%p    size:%7i    user:%p    tag:%3i\n", edx27, v30, v29, v28, v18, v16, v14, v13, v11, v10, a2, a3, a4, a5);
        }
        eax31 = g60aff8;
        if (eax31 + 4 == *reinterpret_cast<void***>(edx27 + 16)) 
            break;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx27)) + reinterpret_cast<unsigned char>(edx27) != *reinterpret_cast<void***>(edx27 + 16)) {
            fun_440840(ecx20, "ERROR: block size does not touch the next block\n", v18, v16, v14, v13, v11, v10, a2, a3, a4, a5, a6, a7, a8, a9);
        }
        if (edx27 != *reinterpret_cast<void***>(*reinterpret_cast<void***>(edx27 + 16) + 20)) {
            fun_440840(ecx20, "ERROR: next block doesn't have proper back link\n", v18, v16, v14, v13, v11, v10, a2, a3, a4, a5, a6, a7, a8, a9);
        }
        if (!*reinterpret_cast<void***>(edx27 + 4) && !*reinterpret_cast<void***>(*reinterpret_cast<void***>(edx27 + 16) + 4)) {
            fun_440840(ecx20, "ERROR: two consecutive free blocks\n", v18, v16, v14, v13, v11, v10, a2, a3, a4, a5, a6, a7, a8, a9);
        }
        edx27 = *reinterpret_cast<void***>(edx27 + 16);
    }
    return;
}

void** g60b3bc = reinterpret_cast<void**>(0);

void** g60b3c0 = reinterpret_cast<void**>(0);

void fun_437984() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    void** eax19;
    void** eax20;
    void** eax21;
    void** eax22;
    void** eax23;
    void** eax24;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    eax19 = g4775d0;
    g60b3bc = eax19;
    eax20 = g4775d4;
    g60b3c0 = eax20;
    eax21 = g4775d0;
    g60b3c4 = eax21;
    eax22 = g4775d4;
    g60b3c8 = eax22;
    eax23 = g4775d0;
    g60b3d4 = eax23;
    eax24 = g4775d4;
    g60b3d8 = eax24;
    return;
}

void fun_437a8a() {
}

void** fun_437bae(void** ecx) {
    int32_t* esp2;
    int32_t edx3;
    int32_t eax4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** eax12;

    esp2 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 0x200 - 4 - 4);
    wsprintfA(esp2 + 2, edx3, eax4);
    eax12 = fun_437a90(ecx, esp2 - 1 - 1 + 1 + 3, v5, v6, v7, v8, v9, v10, v11);
    return eax12;
}

void** g60b008 = reinterpret_cast<void**>(0);

int32_t CallNextHookEx = 0x220a92;

int32_t fun_438e61(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    uint32_t eax9;
    uint32_t eax10;
    void** v11;
    void** ebx12;
    void** esp13;
    void** esi14;
    uint32_t ebx15;
    void** v16;
    uint32_t eax17;
    void** v18;
    int16_t ax19;
    void** v20;
    int16_t ax21;
    void** ebp22;
    void** edi23;
    int16_t ax24;
    int32_t eax25;
    void** v26;
    void** v27;
    void** ebx28;
    void** v29;
    void** ecx30;
    int16_t ax31;
    int32_t eax32;
    int16_t ax33;
    int32_t eax34;
    int16_t ax35;
    int32_t eax36;
    uint32_t ecx37;
    void** edx38;
    void** esi39;
    uint32_t eax40;
    void** v41;
    void** ecx42;
    void** v43;
    void** v44;
    void** eax45;
    void** ebx46;
    uint32_t eax47;
    void** v48;
    void** edi49;
    void** v50;
    void** v51;
    void** v52;
    void** v53;
    void** v54;
    void** ebp55;
    void** esi56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** v61;
    void** ebp62;
    void** edi63;
    void** eax64;
    int32_t esi65;
    void** ebx66;
    uint32_t eax67;
    uint32_t ebx68;
    void** edx69;
    uint32_t eax70;
    int1_t zf71;
    int1_t zf72;

    eax9 = eax10;
    v11 = ebx12;
    esp13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 28);
    esi14 = a3;
    ebx15 = reinterpret_cast<uint32_t>(reinterpret_cast<signed char>(a4) >> 16);
    *reinterpret_cast<unsigned char*>(&eax9) = reinterpret_cast<uint1_t>((*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx15) + 1) & 0x80) == 0);
    v16 = reinterpret_cast<void**>(eax9 & 0xff);
    eax17 = ebx15;
    *reinterpret_cast<unsigned char*>(&eax17) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) ^ *reinterpret_cast<unsigned char*>(&ebx15));
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax17) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax17) + 1) & 64);
    v18 = reinterpret_cast<void**>(eax17 & 0xffff);
    if (!reinterpret_cast<int1_t>(esi14 == 46) || (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx15) + 1) & 32) || (ax19 = reinterpret_cast<int16_t>(GetAsyncKeyState(17)), esp13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp13 - 4) - 4 + 4), !(reinterpret_cast<uint32_t>(static_cast<int32_t>(ax19)) & 0x80000000)))) {
        if (!reinterpret_cast<int1_t>(esi14 == 27) || (v20 = reinterpret_cast<void**>(17), ax21 = reinterpret_cast<int16_t>(GetAsyncKeyState(17)), esp13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp13 - 4) - 4 + 4), (reinterpret_cast<uint32_t>(static_cast<int32_t>(ax21)) & 0x80000000) == 0)) {
            if (!reinterpret_cast<int1_t>(esi14 == 9) || !(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx15) + 1) & 32)) {
                if (!v16 || 1) {
                    fun_442a90();
                    if (esi14 == 0x79 || reinterpret_cast<int1_t>(esi14 == 18)) {
                        return 1;
                    }
                } else {
                    ebp22 = g4775d4;
                    edi23 = g4775d0;
                    if (reinterpret_cast<int1_t>(esi14 == 0x6d)) {
                        esi14 = reinterpret_cast<void**>(0xbd);
                    }
                    if (reinterpret_cast<int1_t>(esi14 == 0x6b)) {
                        esi14 = reinterpret_cast<void**>(0xbb);
                    }
                    g4775d0 = edi23;
                    g4775d4 = ebp22;
                    if (!reinterpret_cast<int1_t>(esi14 == 13)) 
                        goto addr_439068_12;
                    ax24 = reinterpret_cast<int16_t>(GetAsyncKeyState(18));
                    esp13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp13 - 4) - 4 + 4);
                    eax25 = ax24;
                    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax25) + 1) & 0x80) 
                        goto addr_438f77_14;
                }
            } else {
                v20 = a4;
                v26 = esi14;
                v27 = a2;
                ebx28 = g60b454;
                v29 = ebx28;
                goto addr_439269_16;
            }
        } else {
            v26 = a3;
            v27 = esi14;
            v29 = reinterpret_cast<void**>(__return_address());
            goto addr_439269_16;
        }
    } else {
        v20 = a4;
        v26 = esi14;
        v27 = a2;
        ecx30 = g60b454;
        v29 = ecx30;
        goto addr_439269_16;
    }
    addr_439068_12:
    if (!reinterpret_cast<int1_t>(esi14 == 0xbb) || (ax31 = reinterpret_cast<int16_t>(GetAsyncKeyState(18)), esp13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp13 - 4) - 4 + 4), eax32 = ax31, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax32) + 1) & 0x80) == 0)) {
        if (!reinterpret_cast<int1_t>(esi14 == 0xbd) || (ax33 = reinterpret_cast<int16_t>(GetAsyncKeyState(18)), esp13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp13 - 4) - 4 + 4), eax34 = ax33, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax34) + 1) & 0x80) == 0)) {
            if (reinterpret_cast<int1_t>(esi14 == 0x72) && (ax35 = reinterpret_cast<int16_t>(GetAsyncKeyState(18)), esp13 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp13 - 4) - 4 + 4), eax36 = ax35, !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax36) + 1) & 0x80))) {
                ecx37 = g4654d0;
                if (ecx37) {
                    edx38 = g482a7c;
                    esi39 = g60b008;
                    eax40 = (reinterpret_cast<uint32_t>(edx38 + reinterpret_cast<unsigned char>(edx38) * 8) * 4 - reinterpret_cast<unsigned char>(edx38)) * 8;
                    if (!esi39) {
                        *reinterpret_cast<int16_t*>(&v41) = 4;
                        *reinterpret_cast<int16_t*>(&v41 + 2) = 16;
                        ecx42 = reinterpret_cast<void**>(1);
                        v43 = reinterpret_cast<void**>(0x5622);
                        v44 = reinterpret_cast<void**>(0x15888);
                        g60b008 = reinterpret_cast<void**>(1);
                        *reinterpret_cast<int32_t*>(eax40 + 0x4825f0) = reinterpret_cast<int32_t>("Sound set to High");
                    } else {
                        v43 = reinterpret_cast<void**>(0x2b11);
                        *reinterpret_cast<int16_t*>(&v41) = 2;
                        *reinterpret_cast<int32_t*>(eax40 + 0x4825f0) = reinterpret_cast<int32_t>("Sound set to Normal");
                        ecx42 = reinterpret_cast<void**>(0);
                        v44 = reinterpret_cast<void**>(0x5622);
                        *reinterpret_cast<int16_t*>(&v41 + 2) = 8;
                        g60b008 = reinterpret_cast<void**>(0);
                    }
                    eax45 = g5f22c8;
                    ebx46 = *reinterpret_cast<void***>(eax45);
                    eax47 = reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ebx46 + 56)(eax45, esp13, 0x20001, v43, v44, v41, 0));
                    g4654dc = eax47;
                    if (eax47) {
                        v48 = reinterpret_cast<void**>(eax47 & 0xfff);
                        fun_437a90(ecx42, "set Primary format %d", v48, eax45, esp13, 0x20001, v43, v44, v41, ecx42, "set Primary format %d", v48, eax45, esp13, 0x20001, v43, v44, v41);
                    }
                    goto edi49;
                } else {
                    goto v11;
                }
            }
        } else {
            fun_4398e0(ecx, 18, v50, v51, v52, v53, v54, v18, v16, ebp55, edi49, esi56, v11, __return_address(), a2, a3, a4, a5, a6, a7, a8);
            goto v11;
        }
    } else {
        fun_4398e0(ecx, 18, v57, v58, v59, v60, v61, v18, v16, ebp55, edi49, esi56, v11, __return_address(), a2, a3, a4, a5, a6, a7, a8);
        goto v11;
    }
    addr_438f77_14:
    ebp62 = g4775d4;
    edi63 = g4775d0;
    eax64 = g60b254;
    esi65 = 0;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax64) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax64 == 0))) {
        ebx66 = g60b254;
        eax67 = 0;
        ebx68 = reinterpret_cast<unsigned char>(ebx66) * 8;
        do {
            if (*reinterpret_cast<void***>(eax67 + 0x60b1b4) != edi63) 
                continue;
            if (*reinterpret_cast<void***>(eax67 + 0x60b1b8) == ebp62) 
                break;
            eax67 = eax67 + 8;
        } while (reinterpret_cast<int32_t>(eax67) < reinterpret_cast<int32_t>(ebx68));
        goto addr_438f97_35;
    } else {
        goto addr_438fc1_37;
    }
    esi65 = 1;
    addr_438fc1_37:
    edx69 = g482a7c;
    eax70 = (reinterpret_cast<uint32_t>(edx69 + reinterpret_cast<unsigned char>(edx69) * 8) * 4 - reinterpret_cast<unsigned char>(edx69)) * 8;
    if (esi65) {
        zf71 = reinterpret_cast<int1_t>(g4775e0 == 1);
        if (!zf71) {
            zf72 = g60b434 == 0;
            if (!zf72) {
                g4775e4 = reinterpret_cast<void**>(1);
            } else {
                *reinterpret_cast<int32_t*>(eax70 + 0x4825f0) = reinterpret_cast<int32_t>("Unsupported Mode");
                goto addr_439047_43;
            }
        } else {
            g4775e4 = reinterpret_cast<void**>(0);
        }
    } else {
        g4775d0 = edi63;
        g4775d4 = ebp62;
        *reinterpret_cast<int32_t*>(eax70 + 0x4825f0) = reinterpret_cast<int32_t>("Unsupported Video Mode Requested");
        goto addr_439270_46;
    }
    g491b70 = 1;
    g60b260 = 1;
    addr_439047_43:
    g4775d0 = edi63;
    g4775d4 = ebp62;
    goto v11;
    addr_439270_46:
    goto v11;
    addr_438f97_35:
    goto addr_438fc1_37;
    addr_439269_16:
    CallNextHookEx(v29, v27, v26, v20);
    goto addr_439270_46;
}

void fun_439609(int32_t ecx) {
    void** eax2;
    void** eax3;
    int32_t eax4;
    uint32_t eax5;
    void* esp6;
    int16_t ax7;
    void* v8;
    void* v9;
    void** edx10;
    void** eax11;
    void** edi12;
    void* esi13;
    void** eax14;

    eax2 = reinterpret_cast<void**>(GetSystemMetrics(0));
    g60b3c4 = eax2;
    eax3 = reinterpret_cast<void**>(GetSystemMetrics(1, 0));
    g60b3c8 = eax3;
    LoadIconA(eax4, 0x69, 8);
    LoadCursorA(0, 0x7f00, eax4, 0x69, 8);
    eax5 = reinterpret_cast<uint32_t>(GetStockObject(4, 0, 0x7f00, eax4, 0x69, 8));
    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 56 - 4 - 4 + 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4);
    ax7 = reinterpret_cast<int16_t>(RegisterClassA(esp6, 4, 0, 0x7f00, eax4, 0x69, 8));
    if (ax7) {
        v8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 + 4 - 4 - 4 + 48);
        v9 = g60b4c8;
        AdjustWindowRect(v8, 0x80ca0000, 1, esp6, 4, 0, 0x7f00, eax4, 0x69, 8);
        g60b3cc = reinterpret_cast<void*>(0xffbc6d20);
        edx10 = g60b3d4;
        g60b3d0 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v9) - eax5);
        eax11 = g60b3d8;
        edi12 = g60b3d0;
        esi13 = g60b3cc;
        eax14 = reinterpret_cast<void**>(CreateWindowExA(0x40000, "Doom95Class", "Doom 95", 0x80ca0000, 0, 0, reinterpret_cast<unsigned char>(edx10) + reinterpret_cast<uint32_t>(esi13), reinterpret_cast<unsigned char>(eax11) + reinterpret_cast<unsigned char>(edi12), 0, 0, eax4, 0, v8, 0x80ca0000, 1, esp6, 4, 0, 0x7f00, eax4, 0x69, 8));
        if (eax14) 
            goto addr_43972e_15;
    }
    addr_439748_17:
    goto 0x7f00;
    addr_43972e_15:
    g5f22d0 = eax14;
    UpdateWindow(eax14, 0x40000, "Doom95Class", "Doom 95", 0x80ca0000, 0, 0, reinterpret_cast<unsigned char>(edx10) + reinterpret_cast<uint32_t>(esi13), reinterpret_cast<unsigned char>(eax11) + reinterpret_cast<unsigned char>(edi12), 0, 0, eax4, 0, v8, 0x80ca0000, 1, esp6, 4, 0, 0x7f00, eax4, 0x69, 8);
    SetFocus(eax14, eax14, 0x40000, "Doom95Class", "Doom 95", 0x80ca0000, 0, 0, reinterpret_cast<unsigned char>(edx10) + reinterpret_cast<uint32_t>(esi13), reinterpret_cast<unsigned char>(eax11) + reinterpret_cast<unsigned char>(edi12), 0, 0, eax4, 0, v8, 0x80ca0000, 1, esp6, 4, 0, 0x7f00, eax4, 0x69, 8);
    goto addr_439748_17;
}

void** fun_439abc(void** ecx) {
    void** v2;
    void** v3;
    void** ebx4;
    void** v5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    void** ebx10;
    void** eax11;
    void** ecx12;
    void** edx13;
    void** edx14;
    void** esi15;
    uint32_t edx16;
    uint32_t eax17;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = ebx4;
    v5 = ecx;
    v6 = esi7;
    v8 = edi9;
    ebx10 = eax11;
    ecx12 = edx13;
    edx14 = g4775e0;
    if (reinterpret_cast<int1_t>(edx14 == 1)) {
        return edx14;
    }
    esi15 = g60b254;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi15) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi15 == 0))) {
        edx16 = reinterpret_cast<unsigned char>(esi15) * 8;
        eax17 = 0;
        do {
            if (*reinterpret_cast<void***>(eax17 + 0x60b1b4) == 0x140) 
                goto addr_439b0e_6;
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax17 + 0x60b1b4) == 0x280)) 
                continue;
            addr_439b0e_6:
            if (ebx10 != *reinterpret_cast<void***>(eax17 + 0x60b1b4)) 
                continue;
            if (ecx12 == *reinterpret_cast<void***>(eax17 + 0x60b1b8)) 
                break;
            eax17 = eax17 + 8;
        } while (reinterpret_cast<int32_t>(eax17) < reinterpret_cast<int32_t>(edx16));
        goto addr_439aed_10;
    } else {
        goto addr_439b28_12;
    }
    return 1;
    addr_439aed_10:
    addr_439b28_12:
    fun_437a90(ecx12, "IsModeSupported - no match for %d x %d", ebx10, ecx12, v8, v6, v5, v3, v2);
    return 0;
}

void fun_439c30(void** ecx) {
    int32_t v2;
    int32_t edx3;
    void** ebx4;
    void** eax5;
    void** v6;
    void** edx7;
    void** v8;
    void** eax9;
    void* esp10;
    void** eax11;
    void** eax12;
    void** edx13;
    void** eax14;
    void* esp15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void* esp36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;

    v2 = edx3;
    ebx4 = g5f22d0;
    eax5 = g60b264;
    v6 = ebx4;
    edx7 = *reinterpret_cast<void***>(eax5);
    v8 = eax5;
    eax9 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx7 + 80)(v8, v6, 85));
    esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x400 - 4 - 4 - 4 - 4 + 4);
    g60b3a0 = eax9;
    if (!eax9) {
        g60b254 = eax9;
        eax11 = eax9;
        do {
            eax11 = eax11 + 8;
            *reinterpret_cast<void***>(eax11 + 0x60b110) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(eax11 + 0x60b10c) = reinterpret_cast<void**>(0);
        } while (!reinterpret_cast<int1_t>(eax11 == 0xa0));
        eax12 = g60b264;
        edx13 = *reinterpret_cast<void***>(eax12);
        eax14 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx13 + 32)(eax12, 0, 0, 0, fun_439750, v8, v6, 85));
        g60b3a0 = eax14;
        esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4);
        g60b430 = reinterpret_cast<void**>(1);
        wsprintfA(reinterpret_cast<int32_t>(esp15) + 8, "EnumerateVideoModes: EnumDisplayModes %d", reinterpret_cast<unsigned char>(eax14) & 0xfff, eax12, 0, 0, 0, fun_439750, v8, v6, 85);
        fun_437a90(ecx, reinterpret_cast<int32_t>(esp15) - 4 - 4 + 4 + 12, eax12, 0, 0, 0, fun_439750, v8, v6, ecx, reinterpret_cast<int32_t>(esp15) - 4 - 4 + 4 + 12, eax12, 0, 0, 0, fun_439750, v8, v6);
        g60b430 = reinterpret_cast<void**>(0);
        fun_439a20(ecx, eax12, 0, 0, 0, fun_439750, v8, v6, 85, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v34, v35);
    } else {
        esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 - 4);
        g60b430 = reinterpret_cast<void**>(1);
        wsprintfA(reinterpret_cast<int32_t>(esp36) + 0x208, "Set enum Coop %d", reinterpret_cast<unsigned char>(eax9) & 0xfff, v8, v6, 85);
        fun_437a90(ecx, reinterpret_cast<int32_t>(esp36) - 4 - 4 + 4 + 12 + 0x200, v8, v6, 85, v37, v38, v39, v40);
        g60b430 = reinterpret_cast<void**>(0);
    }
    goto v2;
}

void fun_43ba2a(int32_t ecx) {
    int32_t eax2;

    if (eax2 && eax2 != -1) {
        CloseHandle(eax2);
    }
    return;
}

void fun_43bb94() {
}

void fun_43c1d4() {
}

void fun_43c288() {
}

void fun_43c941() {
}

void fun_43ce31() {
    goto fun_441e30;
}

void fun_43cfc5() {
}

void fun_43d3c1() {
}

void fun_43d44c(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    int32_t v4;

    eax2 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001));
    if (!eax2) {
        RegSetValueExA("Software\\id\\Doom95\\Session");
        RegCloseKey(eax3, "Software\\id\\Doom95\\Session");
    }
    goto v4;
}

void fun_43d49e(int32_t ecx) {
    void** edx2;
    void** edx3;
    void** eax4;
    void** edx5;
    int32_t ebx6;

    edx2 = g60b83c;
    if (edx2) {
        edx3 = *reinterpret_cast<void***>(edx2);
        *reinterpret_cast<void***>(edx3 + 16)(edx2);
        eax4 = g60b83c;
        edx5 = *reinterpret_cast<void***>(eax4);
        *reinterpret_cast<void***>(edx5 + 8)(eax4, edx2);
        g60b83c = reinterpret_cast<void**>(0);
    }
    FreeLibrary();
    goto ebx6;
}

void fun_43d4da() {
}

void fun_43e227() {
}

void fun_43eecb(int32_t ecx) {
}

void fun_43f674() {
}

void fun_440836() {
}

void fun_440a16() {
    int32_t ebp1;
    uint32_t ebp2;
    void** esi3;
    int32_t eax4;
    void*** edi5;
    uint32_t eax6;
    void** eax7;
    void* ebx8;
    uint32_t ebx9;
    void*** edi10;

    __asm__("pushad ");
    ebp1 = g48ae54;
    ebp2 = ebp1 + 1 - g48ae50;
    if (ebp2 && reinterpret_cast<int32_t>(ebp2) >= reinterpret_cast<int32_t>(0)) {
        esi3 = g48ae5c;
        eax4 = g48ae68;
        edi5 = g60ba04;
        eax6 = g48ae50;
        eax7 = g48ae6c;
        __asm__("shld ebx, ecx, 0x16");
        __asm__("shld ebx, ecx, 0x6");
        ebx8 = reinterpret_cast<void*>(ebx9 & 0xfff);
        edi10 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi5) + *reinterpret_cast<uint32_t*>(eax4 * 4 + 0x487fc0) + *reinterpret_cast<int32_t*>(eax6 * 4 + 0x488cc0) - 1);
        do {
            ++edi10;
            *reinterpret_cast<signed char*>(&eax7) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx8) + reinterpret_cast<unsigned char>(esi3));
            __asm__("shld ebx, ecx, 0x16");
            __asm__("shld ebx, ecx, 0x6");
            ebx8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx8) & 0xfff);
            *edi10 = *reinterpret_cast<void***>(eax7);
            --ebp2;
        } while (ebp2);
    }
    __asm__("popad ");
    return;
}

struct s1050 {
    void** f0;
    void** f1;
};

struct s1051 {
    void** f0;
    void** f1;
};

void fun_440ac3() {
    int32_t ebp1;
    uint32_t ebp2;
    void** esi3;
    int32_t edi4;
    uint32_t eax5;
    void** eax6;
    void* ebx7;
    uint32_t ebx8;
    struct s1050* edi9;
    uint32_t ebp10;
    struct s1051* edi11;
    void* ebx12;

    __asm__("pushad ");
    ebp1 = g48ae54;
    ebp2 = ebp1 + 1 - g48ae50;
    if (ebp2 && (reinterpret_cast<int32_t>(ebp2) >= reinterpret_cast<int32_t>(0) && ((esi3 = g48ae5c, edi4 = g48ae68, eax5 = g48ae50, eax6 = g48ae6c, ebx7 = reinterpret_cast<void*>(ebx8 & 0xfff), edi9 = reinterpret_cast<struct s1050*>(*reinterpret_cast<int32_t*>(edi4 * 4 + 0x487fc0) + *reinterpret_cast<int32_t*>(eax5 * 4 + 0x488cc0) - 1), (ebp2 & 1) == 0) || (edi9 = reinterpret_cast<struct s1050*>(&edi9->f1), *reinterpret_cast<signed char*>(&eax6) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx7) + reinterpret_cast<unsigned char>(esi3)), ebx7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx7) & 0xfff), edi9->f0 = *reinterpret_cast<void***>(eax6), --ebp2, !!ebp2)))) {
        ebp10 = ebp2 >> 1;
        do {
            edi11 = reinterpret_cast<struct s1051*>(&edi9->f1);
            *reinterpret_cast<signed char*>(&eax6) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx7) + reinterpret_cast<unsigned char>(esi3));
            __asm__("shld ebx, ecx, 0x16");
            __asm__("shld ebx, ecx, 0x6");
            ebx12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx7) & 0xfff);
            edi11->f0 = *reinterpret_cast<void***>(eax6);
            edi9 = reinterpret_cast<struct s1050*>(&edi11->f1);
            *reinterpret_cast<signed char*>(&eax6) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebx12) + reinterpret_cast<unsigned char>(esi3));
            __asm__("shld ebx, ecx, 0x16");
            __asm__("shld ebx, ecx, 0x6");
            ebx7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx12) & 0xfff);
            edi9->f0 = *reinterpret_cast<void***>(eax6);
            --ebp10;
        } while (ebp10);
    }
    __asm__("popad ");
    return;
}

void fun_440ba6() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
}

uint32_t fun_4410f4() {
    uint32_t eax1;
    int32_t eax2;

    eax1 = reinterpret_cast<uint32_t>(eax2 * 4 + eax2);
    *reinterpret_cast<unsigned char*>(&eax1) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<int32_t*>(eax1 * 4 + 0x618088));
    return eax1 & 0xff;
}

void fun_441e7e() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
}

void fun_44264e() {
}

void fun_442a89() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    int32_t ebx10;
    int32_t ebx11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *reinterpret_cast<signed char*>(ebx10 - 0x77cef14) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx11 - 0x77cef14) + al12);
}

void fun_4435a1() {
    int32_t eax1;
    int32_t eax2;
    signed char dl3;

    *reinterpret_cast<signed char*>(eax1 - 0x65) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax2 - 0x65) + dl3);
}

struct s1052 {
    signed char[16] pad16;
    unsigned char f10;
};

uint32_t fun_443fda(void** ecx) {
    uint32_t eax2;
    struct s1052* eax3;

    eax2 = fun_4459cb(ecx);
    if (eax2 == 0xffffffff) {
        eax3->f10 = reinterpret_cast<unsigned char>(eax3->f10 | 2);
    }
    return eax2;
}

struct s1053 {
    signed char* f0;
    int32_t f4;
    signed char* f8;
    unsigned char fc;
    unsigned char fd;
    signed char[6] pad20;
    void* f14;
};

struct s1054 {
    signed char[8] pad8;
    struct s1053* f8;
};

int32_t fun_443ff6(void** ecx, void** a2, void** a3) {
    struct s1053* edx4;
    struct s1054* edx5;
    uint32_t ebx6;
    uint32_t eax7;
    int32_t eax8;
    int32_t eax9;
    void** ebp10;
    void** esi11;
    void** ebx12;
    signed char* eax13;
    signed char* eax14;

    edx4 = edx5->f8;
    ebx6 = eax7;
    if (eax8 == -1) {
        addr_446605_3:
        return eax9;
    } else {
        image_base_();
        if (edx4->fd & 16) 
            goto addr_44658b_5;
        if (!(edx4->fc & 1)) 
            goto addr_44658b_5;
        if (!edx4->f8) {
            fun_4458ec(ecx, ebp10, esi11, ebx12, __return_address(), a2, a3);
        }
        if (!edx4->f4) 
            goto addr_4465b7_10;
    }
    if (edx4->f0 == edx4->f8) {
        addr_44658b_5:
        image_base_();
        return -1;
    } else {
        eax13 = edx4->f0 - 1;
        edx4->f4 = edx4->f4 + 1;
        edx4->f0 = eax13;
        *reinterpret_cast<signed char*>(&eax13) = *eax13;
        if ((reinterpret_cast<uint32_t>(eax13) & 0xff) != ebx6) {
            edx4->fc = reinterpret_cast<unsigned char>(edx4->fc | 4);
        }
        eax14 = edx4->f0;
    }
    addr_4465f2_15:
    *eax14 = *reinterpret_cast<signed char*>(&ebx6);
    edx4->fc = reinterpret_cast<unsigned char>(edx4->fc & 0xef);
    image_base_();
    eax9 = 0;
    *reinterpret_cast<signed char*>(&eax9) = *reinterpret_cast<signed char*>(&ebx6);
    goto addr_446605_3;
    addr_4465b7_10:
    edx4->f0 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx4->f8) + reinterpret_cast<int32_t>(edx4->f14) - 1);
    edx4->fc = reinterpret_cast<unsigned char>(edx4->fc | 4);
    eax14 = edx4->f0;
    edx4->f4 = 1;
    goto addr_4465f2_15;
}

struct s1055 {
    signed char[16] pad16;
    int32_t f10;
};

struct s1056 {
    signed char[16] pad16;
    int32_t f10;
};

void fun_44440c(int32_t ecx) {
    signed char* edx2;
    signed char** eax3;
    int32_t* eax4;
    signed char dl5;
    struct s1055* eax6;
    struct s1056* eax7;

    edx2 = *eax3;
    *eax4 = reinterpret_cast<int32_t>(edx2 + 1);
    *edx2 = dl5;
    eax6->f10 = eax7->f10 + 1;
    return;
}

void fun_445c3b() {
    __asm__("wait ");
    __asm__("fnsave [eax]");
    __asm__("wait ");
    return;
}

signed char g477b5c = 0;

void fun_445c7f() {
    int32_t eax1;
    uint32_t eax2;
    signed char dl3;
    signed char al4;
    int1_t zf5;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1) = g477a80;
    if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1)) {
        g477a81 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax1) + 1);
        __asm__("fninit ");
        __asm__("fnstcw word [esp]");
        eax2 = reinterpret_cast<uint32_t>(eax1 - eax1);
        *reinterpret_cast<signed char*>(&eax2) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax2) + 1);
        dl3 = 0;
        if ((eax2 & 0xff) == 3) {
            al4 = fun_445c44();
            dl3 = al4;
        }
        zf5 = g477b5c == 0;
        if (zf5) {
            g477a80 = dl3;
            g477a81 = dl3;
        }
    }
    return;
}

void fun_445cc5() {
    return;
}

void fun_445d84(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** edi11;
    void** eax12;
    void** esi13;
    void** edx14;
    uint32_t edx15;
    int32_t edx16;
    void** edx17;
    void** ecx18;
    void** edi19;
    void** esi20;
    void** ebx21;
    void** eax22;
    void** ebx23;
    void** eax24;
    void** edx25;
    void** edx26;
    void** eax27;
    void** v28;
    int32_t v29;
    uint32_t edx30;
    int32_t edx31;

    edi11 = eax12;
    esi13 = edx14;
    image_base_();
    if (edx15 < 1) {
        if (edx16) {
            addr_445db6_3:
            edx17 = g618358;
            ecx18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi13) << 2);
            if (reinterpret_cast<signed char>(esi13) >= reinterpret_cast<signed char>(edx17)) {
                eax22 = fun_444348(ecx18, edi19, esi20, ecx, ebx21, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10);
                ebx23 = g618358;
                g61835c = eax22;
                eax24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx23) << 2);
                while (reinterpret_cast<signed char>(eax24) < reinterpret_cast<signed char>(ecx18)) {
                    edx25 = g61835c;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx25) + reinterpret_cast<unsigned char>(eax24)) = 0;
                    eax24 = eax24 + 4;
                }
                edx26 = g61835c;
                *reinterpret_cast<void***>(edx26 + reinterpret_cast<unsigned char>(esi13) * 4) = edi11;
                g618358 = esi13 + 1;
            } else {
                eax27 = g61835c;
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx18) + reinterpret_cast<unsigned char>(eax27)) = edi11;
            }
        } else {
            v28 = edi11;
            v29 = 0xf6;
            goto addr_445db1_10;
        }
    } else {
        if (edx30 <= 1) {
            v28 = edi11;
            v29 = 0xf5;
            goto addr_445db1_10;
        } else {
            if (edx31 == 2) {
                v28 = edi11;
                v29 = 0xf4;
                goto addr_445db1_10;
            } else {
                goto addr_445db6_3;
            }
        }
    }
    image_base_();
    return;
    addr_445db1_10:
    fun_449d42(v29, v28);
    goto addr_445db6_3;
}

signed char* fun_44622f(int32_t ecx) {
    signed char* ebx2;
    signed char* eax3;
    signed char* edi4;
    signed char* edx5;
    int32_t ecx6;
    signed char* esi7;
    signed char* edx8;
    uint32_t ecx9;
    signed char* edi10;
    signed char* v11;
    uint32_t eax12;
    uint32_t ecx13;
    int1_t zf14;
    int1_t zf15;

    ebx2 = eax3;
    edi4 = edx5;
    ecx6 = ecx - ecx - 1;
    do {
        if (!ecx6) 
            break;
        --ecx6;
        ++edi4;
    } while (*edi4);
    esi7 = edx8;
    ecx9 = reinterpret_cast<uint32_t>(~ecx6 - 1 + 1);
    edi10 = ebx2;
    v11 = edi10;
    eax12 = ecx9;
    ecx13 = ecx9 >> 2;
    zf14 = ecx13 == 0;
    do {
        if (!ecx13) 
            break;
        --ecx13;
        *edi10 = *esi7;
        edi10 = edi10 + 4;
        esi7 = esi7 + 4;
    } while (!zf14);
    *reinterpret_cast<unsigned char*>(&ecx13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax12) & 3);
    zf15 = *reinterpret_cast<unsigned char*>(&ecx13) == 0;
    do {
        if (!ecx13) 
            break;
        --ecx13;
        *edi10 = *esi7;
        ++edi10;
        ++esi7;
    } while (!zf15);
    return v11;
}

void** fun_44624e(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** v7;
    void** v8;
    void** v9;
    void** esi10;
    void** v11;
    void** edi12;
    void*** esi13;
    void*** eax14;
    signed char* edi15;
    signed char* eax16;
    uint32_t ecx17;
    void** ecx18;
    void** eax19;
    void** edi20;
    void** v21;
    void** eax22;
    uint32_t ecx23;
    int1_t zf24;
    int1_t zf25;

    v7 = reinterpret_cast<void**>(__return_address());
    v8 = ecx;
    v9 = esi10;
    v11 = edi12;
    esi13 = eax14;
    edi15 = eax16;
    ecx17 = reinterpret_cast<unsigned char>(ecx) - reinterpret_cast<unsigned char>(ecx) - 1;
    do {
        if (!ecx17) 
            break;
        --ecx17;
        ++edi15;
        ++esi13;
    } while (*edi15);
    ecx18 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(~ecx17) - 1 + 1);
    eax19 = fun_442e73(ecx18, v11, v9, v8, v7, a2, a3, a4, a5, a6);
    edi20 = eax19;
    if (eax19) {
        v21 = edi20;
        eax22 = ecx18;
        ecx23 = reinterpret_cast<unsigned char>(ecx18) >> 2;
        zf24 = ecx23 == 0;
        do {
            if (!ecx23) 
                break;
            --ecx23;
            *reinterpret_cast<void***>(edi20) = *esi13;
            edi20 = edi20 + 4;
            esi13 = esi13 + 4;
        } while (!zf24);
        *reinterpret_cast<unsigned char*>(&ecx23) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax22) & 3);
        zf25 = *reinterpret_cast<unsigned char*>(&ecx23) == 0;
        do {
            if (!ecx23) 
                break;
            --ecx23;
            *reinterpret_cast<void***>(edi20) = *esi13;
            ++edi20;
            ++esi13;
        } while (!zf25);
        edi20 = v21;
    }
    return edi20;
}

int32_t fun_4476e7(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19) {
    void** v20;
    int32_t eax21;
    void** v22;
    void** edx23;
    void** edx24;
    void** edx25;

    v20 = reinterpret_cast<void**>(__return_address());
    eax21 = fun_4476f8(ecx, v20, a2, a3);
    v22 = edx23;
    while (edx24 = g618340, !!edx24) {
        edx25 = *reinterpret_cast<void***>(edx24);
        eax21 = fun_4440d1(ecx, v22, v20, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
        g618340 = edx25;
    }
    return eax21;
}

void fun_447985() {
}

void fun_447dd7() {
    goto fun_447e5e;
}

void fun_448856(int32_t ecx) {
}

struct s1057 {
    signed char[81] pad81;
    signed char f51;
};

struct s1058 {
    signed char[81] pad81;
    signed char f51;
};

struct s1059 {
    signed char[4] pad4;
    void** f4;
};

void* g477e4c = reinterpret_cast<void*>(0);

void fun_44993b(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16) {
    void** v17;
    struct s1057* ebx18;
    struct s1058* ebx19;
    signed char dl20;
    void** v21;
    void** edx22;
    void** v23;
    void** esi24;
    void** v25;
    void** edi26;
    int1_t zf27;
    void*** edi28;
    void** ecx29;
    void*** eax30;
    void*** ebx31;
    void** eax32;
    void** ebx33;
    void** eax34;
    struct s1059* ecx35;
    void*** eax36;
    void** edx37;
    void** dl38;
    void** edx39;
    void** ecx40;

    v17 = reinterpret_cast<void**>(__return_address());
    ebx18->f51 = reinterpret_cast<signed char>(ebx19->f51 + dl20);
    v21 = edx22;
    v23 = esi24;
    v25 = edi26;
    zf27 = g477e48 == 0;
    if (!zf27) {
        addr_4499ee_2:
        goto a2;
    } else {
        edi28 = g477b61;
        ecx29 = reinterpret_cast<void**>(0);
        eax30 = edi28;
        while (*eax30) {
            while (ebx31 = eax30 + 1, !!*eax30) {
                eax30 = ebx31;
            }
            ++ecx29;
            eax30 = ebx31;
        }
        if (!(reinterpret_cast<int32_t>(eax30) - reinterpret_cast<int32_t>(edi28))) 
            goto addr_449974_9;
    }
    addr_449979_10:
    eax32 = fun_442e73(ecx29, v25, v23, v21, v17, a1, a2, a3, a4, a5);
    ebx33 = eax32;
    if (eax32) {
        eax34 = fun_442e73(ecx29, v25, v23, v21, v17, a1, a2, a3, a4, a5);
        if (!eax34) {
            fun_4440d1(ecx29, v25, v23, v21, v17, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
            goto addr_4499ee_2;
        } else {
            g477e48 = eax34;
            ecx35 = reinterpret_cast<struct s1059*>(0);
            eax36 = edi28;
            while (*eax36) {
                edx37 = g477e48;
                *reinterpret_cast<void***>(reinterpret_cast<int32_t>(ecx35) + reinterpret_cast<unsigned char>(edx37)) = ebx33;
                do {
                    dl38 = *eax36;
                    ++eax36;
                    *reinterpret_cast<void***>(ebx33) = dl38;
                    ++ebx33;
                } while (dl38);
                ecx35 = reinterpret_cast<struct s1059*>(&ecx35->f4);
            }
            edx39 = g477e48;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx35) + reinterpret_cast<unsigned char>(edx39)) = 0;
            ecx40 = reinterpret_cast<void**>(&ecx35->f4);
            g477e4c = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edx39) + reinterpret_cast<unsigned char>(ecx40));
            fun_442b80(ecx40, v25, v23, v21, v17, a1);
            goto addr_4499ee_2;
        }
    }
    addr_449974_9:
    goto addr_449979_10;
}

void fun_41006d() {
}

int32_t fun_41022d(int32_t ecx) {
    void** ecx2;
    void** esi3;
    void* edi4;
    void* tmp32_5;
    void** ebx6;
    void** eax7;

    ecx2 = g45974c;
    esi3 = g480104;
    edi4 = g480100;
    tmp32_5 = reinterpret_cast<void*>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(esi3) - (reinterpret_cast<signed char>(esi3) >> 31)) >> 1) + reinterpret_cast<unsigned char>(g48010c));
    *reinterpret_cast<void**>("@" + reinterpret_cast<unsigned char>(ecx2) * 8) = tmp32_5;
    ebx6 = g480108;
    *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx2) * 8 + 0x48001c) = reinterpret_cast<void*>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(edi4) - (reinterpret_cast<int32_t>(edi4) >> 31)) >> 1) + reinterpret_cast<unsigned char>(ebx6));
    eax7 = ecx2 + 1;
    g45974c = reinterpret_cast<void**>(reinterpret_cast<signed char>(eax7) % 10);
    return reinterpret_cast<signed char>(eax7) / 10;
}

void fun_4103cc() {
}

void fun_41049b(int32_t ecx) {
}

void fun_4107ec() {
}

void fun_410817() {
}

void fun_41087a() {
}

void fun_410d71(void** ecx, void** a2) {
    uint32_t ebx3;
    void** eax4;
    void** edx5;
    void** ebx6;
    void** eax7;
    void** edx8;
    void** eax9;
    void** ebx10;
    void** eax11;

    ebx3 = g480110;
    eax4 = g459748;
    __asm__("shrd eax, edx, 0x10");
    g459748 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax4) * ebx3);
    eax7 = fun_411d60(ecx, edx5, ebx6, __return_address(), a2);
    edx8 = g4800b8;
    g4800b0 = eax7;
    eax9 = g459748;
    if (reinterpret_cast<signed char>(eax9) >= reinterpret_cast<signed char>(edx8)) {
        ebx10 = g4800bc;
        if (reinterpret_cast<signed char>(eax9) <= reinterpret_cast<signed char>(ebx10)) {
            addr_410de6_3:
            fun_410070(ecx);
            return;
        } else {
            g459748 = ebx10;
        }
    } else {
        g459748 = edx8;
    }
    eax11 = fun_411d60(ecx, edx5, ebx6, __return_address(), a2);
    g4800b0 = eax11;
    goto addr_410de6_3;
}

void fun_410132() {
    void** eax1;
    void** eax2;
    void** eax3;
    void* eax4;

    eax1 = g48010c;
    g4800a4 = eax1;
    eax2 = g480108;
    g4800a8 = eax2;
    eax3 = g480104;
    g4800a0 = eax3;
    eax4 = g480100;
    g480098 = eax4;
    return;
}

void fun_410dee() {
}

int32_t g4597bc = 0;

void** g459798 = reinterpret_cast<void**>(0);

int32_t fun_410ed8(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    void** ebx4;
    int32_t edi5;
    int1_t less_or_equal6;

    eax2 = eax3;
    ebx4 = g4800c4;
    edi5 = g4597bc;
    less_or_equal6 = reinterpret_cast<signed char>(ebx4) <= reinterpret_cast<signed char>(g459798);
    if (!less_or_equal6) {
        ++edi5;
        g4800c0 = *reinterpret_cast<void***>(edi5 * 4 + 0x45979c);
        if (edi5 == 8) {
            edi5 = 0;
        }
        eax2 = reinterpret_cast<signed char>(ebx4) / 6;
        g459798 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx4 + 6) - reinterpret_cast<signed char>(ebx4) % 6);
    }
    g4597bc = edi5;
    g4800c4 = ebx4;
    return eax2;
}

void fun_410f39() {
}

void fun_4108a3() {
}

void fun_4108d3() {
}

void** fun_410fe6(void** ecx, void** a2, void** a3) {
    void** edx4;
    void** ebx5;
    void** eax6;

    eax6 = fun_442b80(ecx, edx4, ebx5, __return_address(), a2, a3);
    return eax6;
}

void fun_4113ac() {
}

void fun_411526() {
}

void fun_4117ec() {
}

void fun_411b48() {
}

void fun_43399d() {
}

void fun_411da1() {
}

void fun_4153b2() {
}

void fun_41900e() {
}

void fun_442b7a() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
}

void fun_43bb03() {
}

void fun_412463() {
}

void** fun_430d4a(void** ecx) {
    void** edx2;
    void** eax3;
    int32_t eax4;
    void*** edx5;

    edx2 = g5f22cc;
    eax3 = reinterpret_cast<void**>((eax4 * 4 - eax4) * 4);
    edx5 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx2) + reinterpret_cast<unsigned char>(eax3));
    if (*edx5) {
        eax3 = fun_41af00(ecx);
        if (eax3) {
            eax3 = fun_41aea0(ecx);
        }
        *edx5 = reinterpret_cast<void**>(0);
    }
    return eax3;
}

void fun_412be1() {
}

void fun_42e2e7() {
}

void fun_427924() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
}

void fun_413621() {
}

void fun_4183f3() {
}

void fun_418529() {
}

void fun_4138c2() {
}

void fun_413a05() {
}

void fun_413aa4() {
}

void fun_413cba() {
}

void fun_413f0a() {
}

void fun_414111() {
}

void fun_412689() {
}

void fun_414a2a() {
}

struct s1060 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** fun_414cf2(void** ecx) {
    struct s1060* eax2;
    void** edi3;
    void** esi4;
    void** eax5;
    void** edx6;
    void** edi7;

    if (!eax2) {
        fun_43bd40(ecx, "Bad list in dll_AddEndNode", edi3, esi4);
    }
    eax5 = fun_4375e0(ecx, edi3, esi4);
    *reinterpret_cast<void***>(eax5 + 8) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax5) = edx6;
    edi7 = eax2->f4;
    *reinterpret_cast<void***>(eax5 + 4) = edi7;
    if (!edi7) {
        eax2->f0 = eax5;
    } else {
        *reinterpret_cast<void***>(edi7 + 8) = eax5;
    }
    eax2->f4 = eax5;
    return eax5;
}

struct s1061 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** fun_414d50(void** ecx) {
    int32_t eax2;
    void** edi3;
    void** esi4;
    void** eax5;
    void** edx6;
    void** edi7;
    struct s1061* eax8;

    if (!eax2) {
        fun_43bd40(ecx, "Bad list in dll_AddStartNode", edi3, esi4);
    }
    eax5 = fun_4375e0(ecx, edi3, esi4);
    *reinterpret_cast<void***>(eax5) = edx6;
    edi7 = eax8->f0;
    *reinterpret_cast<void***>(eax5 + 4) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax5 + 8) = edi7;
    if (!eax8->f0) {
        eax8->f4 = eax5;
    } else {
        *reinterpret_cast<void***>(eax8->f0 + 4) = eax5;
    }
    eax8->f0 = eax5;
    return eax5;
}

void fun_414da1() {
}

void** fun_414e21(void** ecx) {
    void** eax2;

    eax2 = fun_414db0(ecx);
    return eax2;
}

void fun_414f23() {
}

void fun_414f5d() {
}

void fun_41d49c() {
}

void fun_415387() {
}

void fun_4150e3() {
}

void fun_41539d() {
}

struct s1062 {
    signed char[89] pad89;
    signed char f59;
};

struct s1063 {
    signed char[89] pad89;
    signed char f59;
};

struct s1064 {
    signed char[89] pad89;
    signed char f59;
};

struct s1065 {
    signed char[89] pad89;
    signed char f59;
};

void fun_41558b(void* ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    struct s1062* edx8;
    struct s1063* edx9;
    signed char dl10;
    void* ecx11;
    int32_t ebx12;
    int32_t ebx13;
    signed char ah14;
    struct s1064* esi15;
    struct s1065* esi16;
    signed char dh17;
    int32_t edi18;
    int32_t edi19;
    signed char al20;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    edx8->f59 = reinterpret_cast<signed char>(edx9->f59 + dl10);
    ecx11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx) + 1);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx11) + ebx12 * 2 + 65) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx11) + ebx13 * 2 + 65) + ah14);
    esi15->f59 = reinterpret_cast<signed char>(esi16->f59 + dh17);
    *reinterpret_cast<signed char*>(edi18 + 0x53004159) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi19 + 0x53004159) + al20);
}

void fun_415cd2() {
}

void fun_415ab9() {
}

void fun_4161c7() {
}

void fun_41631e() {
}

void fun_416561() {
}

void fun_416a52() {
}

void fun_43c1fc() {
}

void fun_416dde() {
}

void fun_41722e() {
}

void fun_41759e() {
}

void fun_41d47c() {
}

void fun_417628() {
}

void fun_417706() {
}

void fun_4172a5() {
}

void** fun_417b06(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;
    void** edx7;
    void** eax8;

    eax6 = g48245c;
    g482a68 = reinterpret_cast<void**>(0);
    g482a5c = eax6 + 1;
    eax8 = fun_416a60(1, edx7, ecx, __return_address(), a2, a3, a4, a5);
    g482a8c = reinterpret_cast<void**>(0);
    g482a2c = reinterpret_cast<void**>(1);
    return eax8;
}

void fun_4181e5() {
}

void fun_4184d8() {
}

void fun_418661() {
}

void fun_4186f2() {
}

void fun_41872a() {
}

void fun_4187f4() {
}

void fun_418683() {
}

void fun_4189ed() {
}

struct s1066 {
    signed char[97] pad97;
    int32_t f61;
    int32_t f65;
    int32_t f69;
};

void fun_418ace() {
    struct s1066* eax1;
    int32_t esi2;

    if (eax1->f61 != eax1->f69 && eax1->f61) {
        esi2 = eax1->f61 - 1;
        eax1->f61 = esi2;
        *reinterpret_cast<signed char*>(esi2 + reinterpret_cast<int32_t>(eax1) + 16) = 0;
        eax1->f65 = 4;
    }
    return;
}

struct s1067 {
    signed char[97] pad97;
    int32_t f61;
    int32_t f65;
    int32_t f69;
};

void fun_418af5() {
    struct s1067* eax1;
    struct s1067* eax2;
    int32_t edi3;

    eax1 = eax2;
    if (eax1->f69 != eax1->f61) {
        do {
            if (eax1->f61) {
                edi3 = eax1->f61 - 1;
                eax1->f61 = edi3;
                *reinterpret_cast<signed char*>(edi3 + reinterpret_cast<int32_t>(eax1) + 16) = 0;
                eax1->f65 = 4;
            }
        } while (eax1->f69 != eax1->f61);
    }
    return;
}

void fun_418bf5() {
}

struct s1068 {
    signed char[34] pad34;
    uint32_t f22;
};

struct s1069 {
    signed char f0;
    signed char[151521029] pad151521030;
    int32_t f9080706;
};

uint32_t g282a265e;

struct s1070 {
    signed char[34] pad34;
    uint32_t f22;
};

struct s1071 {
    int32_t f0;
    int32_t f4;
};

struct s1072 {
    int32_t f0;
    int32_t f4;
};

struct s1073 {
    int32_t f0;
    uint32_t f4;
};

struct s1074 {
    uint32_t f0;
    void* f4;
};

void fun_418c49(int16_t cx) {
    unsigned char* ecx1;
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    int32_t* edx14;
    int32_t* edx15;
    int32_t eax16;
    int32_t eax17;
    int32_t eax18;
    int32_t eax19;
    unsigned char* ebx20;
    unsigned char al21;
    unsigned char tmp8_22;
    signed char dl23;
    signed char* ebx24;
    int32_t* edx25;
    uint1_t cf26;
    signed char bl27;
    unsigned char dl28;
    signed char bl29;
    void* ebx30;
    signed char bl31;
    signed char* ebx32;
    unsigned char bl33;
    signed char* ebx34;
    int32_t ebp35;
    unsigned char dh36;
    struct s1068* ebp37;
    void* ebp38;
    void* esi39;
    void* esi40;
    void** esp41;
    void** ebx42;
    int32_t* ebp43;
    void** esi44;
    struct s1069* edi45;
    int1_t pf46;
    uint1_t less47;
    uint1_t less_or_equal48;
    void** v49;
    struct s1069* eax50;
    void** ecx51;
    int32_t* edx52;
    int32_t eax53;
    unsigned char al54;
    unsigned char tmp8_55;
    uint1_t cf56;
    unsigned char tmp8_57;
    uint1_t cf58;
    uint1_t cf59;
    void* esp60;
    int32_t edi61;
    uint32_t esp62;
    struct s1070* ebp63;
    int32_t esi64;
    int32_t* esp65;
    int32_t* esp66;
    struct s1070** esp67;
    uint32_t* esp68;
    void** esp69;
    struct s1070** esp70;
    int32_t* esp71;
    struct s1071* esp72;
    int32_t eax73;
    struct s1072* esp74;
    int32_t ecx75;
    struct s1073* esp76;
    int32_t edx77;
    struct s1074* esp78;
    uint32_t ebx79;
    void** esp80;
    struct s1069* edi81;
    int32_t* esp82;
    int32_t* esp83;
    int32_t* esp84;
    void*** esp85;
    void** esp86;
    int32_t* esp87;
    int32_t* esp88;
    struct s1069** esp89;

    *reinterpret_cast<int16_t*>(&ecx1) = cx;
    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
    *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
    *edx14 = *edx15 + eax16;
    eax17 = eax18 + *reinterpret_cast<int32_t*>(eax19 + 0x9080706);
    *reinterpret_cast<unsigned char*>(&ecx1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx1) | *ebx20);
    al21 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax17) | 13);
    __asm__("movups xmm2, [ecx]");
    tmp8_22 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(dl23 + *ebx24)));
    *reinterpret_cast<unsigned char*>(&edx25) = tmp8_22;
    cf26 = reinterpret_cast<uint1_t>(*ecx1 < reinterpret_cast<unsigned char>(bl27 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al21 + 21) + reinterpret_cast<uint1_t>(tmp8_22 < dl28)) < al21)));
    *ecx1 = reinterpret_cast<unsigned char>(*ecx1 - reinterpret_cast<unsigned char>(bl29 + cf26));
    *reinterpret_cast<unsigned char*>(&ebx30) = reinterpret_cast<unsigned char>(bl31 - reinterpret_cast<unsigned char>(*ebx32 + reinterpret_cast<uint1_t>(bl33 < reinterpret_cast<unsigned char>(*ebx34 + cf26))));
    *ecx1 = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = 0;
    *edx25 = *edx25 - ebp35;
    __asm__("aas ");
    *ecx1 = reinterpret_cast<unsigned char>(*ecx1 ^ dh36);
    __asm__("aaa ");
    __asm__("das ");
    __asm__("aas ");
    ebp37 = reinterpret_cast<struct s1068*>(reinterpret_cast<int32_t>(ebp38) + 1 - 1);
    esi39 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi40) + 1 - 1);
    esp41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 - 2 + 2 - 2 + 2 + 4 + 1 - 1 - 4 - 4 - 4 - 4 - 4);
    ebp37->f22 = ebp37->f22 & reinterpret_cast<uint32_t>(esp41);
    __asm__("daa ");
    ebx42 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp41) + 1 - 1);
    ebp43 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebp37) + 1 - 1);
    esi44 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi39) + 1 - 1);
    edi45 = reinterpret_cast<struct s1069*>(reinterpret_cast<int32_t>(ebx30) + 1 - 1 + 1 - 1);
    pf46 = __intrinsic();
    less47 = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edi45) < 0 != __intrinsic());
    less_or_equal48 = reinterpret_cast<uint1_t>(less47 | reinterpret_cast<uint1_t>(edi45 == 0));
    v49 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esi39) + 1 - 1);
    eax50 = edi45;
    ecx51 = esi44;
    edx52 = ebp43;
    if (!pf46) {
        addr_418d49_2:
        if (!pf46) 
            goto 0x418dc9; else 
            goto addr_418d4d_3;
    } else {
        if (!less47) {
            addr_418d4d_3:
            if (!less47) 
                goto 0x418dcd;
        } else {
            if (!less_or_equal48) 
                goto addr_418cd1_6; else 
                goto addr_418cd1_6;
        }
    }
    if (!less_or_equal48) 
        goto "d+H";
    eax50->f0 = reinterpret_cast<signed char>(eax50->f0 + 1);
    eax50->f0 = reinterpret_cast<signed char>(eax50->f0 + *reinterpret_cast<signed char*>(&eax50));
    goto reinterpret_cast<int32_t>(ebp37) + 1 - 1;
    addr_418cd1_6:
    *edx52 = *edx52 + reinterpret_cast<int32_t>(eax50);
    eax53 = reinterpret_cast<int32_t>(eax50) + eax50->f9080706;
    *reinterpret_cast<unsigned char*>(&ecx51) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx51) | reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&v49)));
    al54 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax53) | 13);
    __asm__("movups xmm2, [ecx]");
    tmp8_55 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx52) + reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&v49)))));
    cf56 = reinterpret_cast<uint1_t>(tmp8_55 < *reinterpret_cast<unsigned char*>(&edx52));
    *reinterpret_cast<unsigned char*>(&edx52) = tmp8_55;
    tmp8_57 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(al54 + 21) + cf56);
    cf58 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*ecx51) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx42)) + reinterpret_cast<uint1_t>(tmp8_57 < al54)));
    *ecx51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*ecx51) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx42)) + cf58));
    cf59 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx42)) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&v49)) + cf58));
    *reinterpret_cast<void**>(&ebx42) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&ebx42)) - reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void**>(&v49)) + cf59));
    esp60 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp41 - 1 - 1 - 1 + 1 + 1 + 1 + 1 + 1) + 1 - 1 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 4 + 4 - 2 - 2 + 2 - 2 + 2);
    *ecx51 = reinterpret_cast<void*>(0);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&eax53) + 1) = 0;
    *reinterpret_cast<unsigned char*>(&eax53) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(tmp8_57 - reinterpret_cast<unsigned char>(29 + reinterpret_cast<uint1_t>(tmp8_57 < reinterpret_cast<unsigned char>(29 + cf59)))) & 37);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx51) + 1) = 0;
    *edx52 = *edx52 - reinterpret_cast<int32_t>(ebp43);
    edi61 = reinterpret_cast<int32_t>(edi45) - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi45) + reinterpret_cast<uint32_t>(ebx42) * 2);
    __asm__("aas ");
    *ecx51 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*ecx51) - reinterpret_cast<uint32_t>(esp60));
    esp62 = reinterpret_cast<uint32_t>(esp60) & g282a265e;
    __asm__("aas ");
    ebp63 = reinterpret_cast<struct s1070*>(reinterpret_cast<int32_t>(ebp43) + 1 - 1);
    esi64 = reinterpret_cast<int32_t>(esi44 + 1 - 1);
    esp65 = reinterpret_cast<int32_t*>(esp62 + 1 - 1 - 4);
    *esp65 = eax53 + 1 + 1 - 1;
    esp66 = esp65 - 1;
    *esp66 = reinterpret_cast<int32_t>(ecx51 + 1 - 1);
    esp67 = reinterpret_cast<struct s1070**>(esp66 - 1);
    *esp67 = reinterpret_cast<struct s1070*>(reinterpret_cast<int32_t>(edx52) + 1 - 1);
    esp68 = reinterpret_cast<uint32_t*>(esp67 - 1);
    *esp68 = reinterpret_cast<uint32_t>(ebx42 + 1 - 1);
    esp69 = reinterpret_cast<void**>(esp68 - 1);
    *reinterpret_cast<void***>(esp69) = esp69;
    esp70 = reinterpret_cast<struct s1070**>(esp69 - 1);
    *esp70 = ebp63;
    esp71 = reinterpret_cast<int32_t*>(esp70 - 1);
    *esp71 = esi64;
    esp72 = reinterpret_cast<struct s1071*>(esp71 - 1);
    esp72->f0 = edi61 + 1 - 1;
    eax73 = esp72->f0;
    esp74 = reinterpret_cast<struct s1072*>(&esp72->f4);
    ecx75 = esp74->f0;
    esp76 = reinterpret_cast<struct s1073*>(&esp74->f4);
    edx77 = esp76->f0;
    esp78 = reinterpret_cast<struct s1074*>(&esp76->f4);
    ebx79 = esp78->f0;
    esp80 = &esp78->f4;
    ebp63->f22 = ebp63->f22 & ebx79;
    __asm__("daa ");
    edi81 = reinterpret_cast<struct s1069*>(reinterpret_cast<int32_t>(*esp80) + 1 - 1);
    pf46 = __intrinsic();
    less47 = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edi81) < 0 != __intrinsic());
    less_or_equal48 = reinterpret_cast<uint1_t>(less47 | reinterpret_cast<uint1_t>(edi81 == 0));
    esp82 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(esp80 + 1) + 1 - 1 - 4);
    *esp82 = eax73 - 1;
    esp83 = esp82 - 1;
    *esp83 = ecx75 + 1 - 1;
    esp84 = esp83 - 1;
    *esp84 = edx77 + 1 - 1;
    esp85 = reinterpret_cast<void***>(esp84 - 1);
    *esp85 = reinterpret_cast<void**>(ebx79 + 1 - 1);
    esp86 = reinterpret_cast<void**>(esp85 - 1);
    *reinterpret_cast<void***>(esp86) = esp86;
    esp87 = reinterpret_cast<int32_t*>(esp86 - 1);
    *esp87 = reinterpret_cast<int32_t>(ebp63) + 1 - 1;
    esp88 = esp87 - 1;
    *esp88 = esi64 + 1 - 1;
    esp89 = reinterpret_cast<struct s1069**>(esp88 - 1);
    *esp89 = edi81;
    eax50 = *esp89;
    goto addr_418d49_2;
}

void fun_418d67() {
}

void fun_418deb(int32_t ecx) {
}

void fun_4186b4() {
}

void fun_419252() {
}

void fun_41928c() {
}

void fun_419602() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
}

struct s1075 {
    signed char[97] pad97;
    int32_t f61;
    int32_t f65;
    int32_t f69;
};

void fun_418b5a(int32_t ecx) {
    struct s1075* eax2;
    struct s1075* eax3;
    signed char* edx4;
    signed char* edx5;
    int32_t ebx6;
    signed char cl7;

    eax2 = eax3;
    if (*edx4) {
        do {
            ++edx5;
            ebx6 = eax2->f61;
            cl7 = *(edx5 - 1);
            if (ebx6 != 80) {
                eax2->f61 = ebx6 + 1;
                *reinterpret_cast<signed char*>(ebx6 + reinterpret_cast<int32_t>(eax2) + 16) = cl7;
                *reinterpret_cast<signed char*>(eax2->f61 + reinterpret_cast<int32_t>(eax2) + 16) = 0;
                eax2->f65 = 4;
            }
        } while (*edx5);
    }
    eax2->f69 = eax2->f61;
    return;
}

void fun_419e55() {
}

void fun_419f4d() {
}

int32_t IsDialogMessageA = 0x220c00;

int32_t fun_41a655(int32_t ecx) {
    int32_t edx2;
    int32_t eax3;
    int32_t edx4;

    edx2 = g459edc;
    if (!edx2 || (eax3 = reinterpret_cast<int32_t>(IsDialogMessageA()), eax3 == 0)) {
        return 0;
    } else {
        goto edx4;
    }
}

void fun_41a686() {
}

void fun_41a6d4() {
}

void fun_41ab91(int16_t cx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    signed char* eax20;
    signed char* eax21;
    signed char al22;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
    *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
    *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
    *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
    *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
}

void fun_41ac66() {
}

void fun_41ad1b(int32_t ecx) {
}

void fun_41ae94() {
}

void fun_41aefe() {
}

void fun_41af75() {
}

void fun_41b021() {
}

void fun_41b2d9() {
}

int16_t g4645d6 = 80;

void fun_41b347(void** ecx) {
    void** esi2;
    void** edx3;
    void** eax4;
    void** ecx5;
    int1_t zf6;
    void** ecx7;

    eax4 = fun_434890(ecx, esi2, edx3);
    fun_433eb0(eax4, esi2, edx3, ecx);
    ecx5 = reinterpret_cast<void**>(0);
    do {
        fun_41b210(ecx5);
        ecx5 = ecx5 + 16;
        fun_41c2a0(ecx5);
    } while (!reinterpret_cast<int1_t>(ecx5 == 96));
    zf6 = g483594 == 0;
    if (!zf6) {
        fun_41c200(ecx5);
        ecx7 = reinterpret_cast<void**>(static_cast<int32_t>(g4645d6));
        fun_41c2a0(ecx7);
    }
    return;
}

void fun_41b407(int32_t ecx) {
    void** ecx2;
    void** eax3;

    fun_417cd0();
    ecx2 = g4835bc;
    g4835cc = reinterpret_cast<void**>(0);
    if (reinterpret_cast<int1_t>(ecx2 == 0xfffffffe)) {
        g4835bc = eax3;
    }
    return;
}

void fun_41d24b(int32_t ecx) {
    void** eax2;

    g48357c = eax2;
    g4835d4 = *reinterpret_cast<void***>(eax2 + 18);
    return;
}

void** fun_41b6a3(void** ecx) {
    void** eax2;
    void** eax3;
    void** edx4;

    eax2 = eax3;
    if (reinterpret_cast<int1_t>(eax2 == 0x79)) {
        fun_41b290(ecx);
        eax2 = fun_4312d0(ecx, edx4);
    }
    return eax2;
}

void** fun_41b7c4(void** ecx) {
    void** edx2;
    void** eax3;
    void** ebx4;
    void** eax5;

    g483590 = reinterpret_cast<void**>(1);
    eax3 = fun_434890(ecx, edx2, ecx);
    eax5 = fun_433eb0(eax3, edx2, ecx, ebx4);
    return eax5;
}

void fun_41b92a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** edx7;
    void* eax8;
    void** edx9;

    edx7 = g4835c4;
    if (!eax8) {
        if (edx7) {
            --edx7;
        }
    } else {
        if (eax8 == 1) {
            if (reinterpret_cast<signed char>(edx7) < reinterpret_cast<signed char>(15)) {
                edx7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx7) + reinterpret_cast<uint32_t>(eax8));
            }
        }
    }
    g4835c4 = edx7;
    fun_430ac0(ecx, edx9, __return_address(), a2, a3, a4, a5, a6);
    return;
}

void** fun_41b96a(void** ecx) {
    void** edx2;
    void** eax3;
    void** ebx4;
    void** eax5;

    eax3 = fun_434890(ecx, edx2, ecx);
    eax5 = fun_433eb0(eax3, edx2, ecx, ebx4);
    return eax5;
}

void** fun_41ba91(void** ecx) {
    void** edx2;
    void** eax3;
    void** ebx4;
    void** eax5;

    eax3 = fun_434890(ecx, edx2, ecx);
    eax5 = fun_433eb0(eax3, edx2, ecx, ebx4);
    return eax5;
}

void** fun_417eed(void** ecx) {
    void** edx2;
    void** eax3;

    g482a64 = reinterpret_cast<void**>(0);
    g482a00 = reinterpret_cast<void**>(0);
    g482a84 = reinterpret_cast<void**>(0);
    g482a6c = reinterpret_cast<void**>(0);
    g482984 = reinterpret_cast<void**>(0);
    g482980 = reinterpret_cast<void**>(0);
    g48297c = reinterpret_cast<void**>(0);
    g481278 = reinterpret_cast<void**>(0);
    g481270 = reinterpret_cast<void**>(0);
    g48126c = reinterpret_cast<void**>(0);
    g482a7c = reinterpret_cast<void**>(0);
    eax3 = fun_417f70(0, edx2, ecx);
    g482a8c = reinterpret_cast<void**>(0);
    return eax3;
}

int32_t g483558 = 0xe8004505;

void** g4643be = reinterpret_cast<void**>(2);

void** g46441a = reinterpret_cast<void**>(2);

void** g4644de = reinterpret_cast<void**>(0);

void fun_41bb63(int32_t ecx) {
    int1_t zf2;
    int32_t eax3;
    void** ebx4;
    void** edx5;
    void** bx6;
    void** bx7;
    void** eax8;

    zf2 = g481250 == 0;
    if (zf2 || !eax3) {
        ebx4 = g481250;
        g483558 = eax3;
        if (!ebx4) {
            edx5 = reinterpret_cast<void**>(0x4643ac);
            bx6 = g4643be;
        } else {
            bx7 = g46441a;
            g4835d4 = bx7;
            g48357c = reinterpret_cast<void**>(0x464408);
            return;
        }
    } else {
        edx5 = reinterpret_cast<void**>(0x4644cc);
        eax8 = g4835cc;
        bx6 = g4644de;
        g48358c = eax8;
        g4835b8 = reinterpret_cast<void**>(1);
        g4835b0 = reinterpret_cast<void**>("this is the shareware version of doom.\n\nyou need to order the entire trilogy.\n\npress a key.");
        g48359c = reinterpret_cast<void**>(0);
        g483588 = reinterpret_cast<void**>(0);
        g4835cc = reinterpret_cast<void**>(1);
    }
    g4835d4 = bx6;
    g48357c = edx5;
    return;
}

void** fun_41bc11(void** ecx) {
    void** esi2;
    void** edx3;
    void** eax4;
    void** eax5;
    void** eax6;
    void** ecx7;
    void** ecx8;
    void** eax9;

    eax4 = fun_434890(ecx, esi2, edx3);
    fun_433eb0(eax4, esi2, edx3, ecx);
    eax5 = fun_434890(eax4, esi2, edx3);
    fun_433eb0(eax5, esi2, edx3, ecx);
    eax6 = fun_434890(eax5, esi2, edx3);
    fun_433eb0(eax6, esi2, edx3, ecx);
    ecx7 = g4835c8;
    fun_41c060(ecx7);
    ecx8 = g4835b4;
    eax9 = fun_41c060(ecx8);
    return eax9;
}

void fun_41bd8e(int32_t ecx) {
    int32_t eax2;
    void** eax3;
    void** dx4;

    if (eax2 == 0x79) {
        eax3 = g48357c;
        dx4 = g4835d4;
        *reinterpret_cast<void***>(eax3 + 18) = dx4;
        g4835cc = reinterpret_cast<void**>(0);
        fun_412640(ecx);
    }
    return;
}

void fun_412665() {
}

void fun_41be60() {
    void** ax1;

    ax1 = g4644de;
    g48357c = reinterpret_cast<void**>(0x4644cc);
    g4835d4 = ax1;
    return;
}

void fun_41bf14() {
}

void* fun_41bfbc() {
    void** edx1;
    void* eax2;

    edx1 = g4835c8;
    if (!eax2) {
        if (edx1) {
            --edx1;
        }
    } else {
        if (eax2 == 1) {
            if (reinterpret_cast<signed char>(edx1) < reinterpret_cast<signed char>(9)) {
                edx1 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx1) + reinterpret_cast<uint32_t>(eax2));
            }
        }
    }
    g4835c8 = edx1;
    return eax2;
}

void fun_41bff1(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25) {
    void** ebx26;
    void* eax27;
    void* ecx28;
    void* edx29;
    void** edx30;
    void** ebx31;

    ebx26 = g4835b4;
    if (!eax27) {
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx26) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx26 == 0))) {
            ecx28 = g4835ac;
            --ebx26;
            g4835ac = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx28) - 1);
        }
    } else {
        if (eax27 == 1) {
            if (reinterpret_cast<signed char>(ebx26) < reinterpret_cast<signed char>(8)) {
                edx29 = g4835ac;
                ebx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx26) + reinterpret_cast<uint32_t>(eax27));
                g4835ac = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx29) + reinterpret_cast<uint32_t>(eax27));
            }
        }
    }
    g4835b4 = ebx26;
    fun_42de60(edx30, ecx, ebx31, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25);
    return;
}

void fun_41c05d() {
}

void** fun_41c156(void** ecx) {
    void** esi2;
    void** eax3;
    void** ebx4;
    void** eax5;

    eax3 = fun_434890(ecx, esi2, ecx);
    eax5 = fun_433eb0(eax3, esi2, ecx, ebx4);
    return eax5;
}

void fun_41771b(int32_t ecx) {
}

void fun_41d239() {
}

struct s1076 {
    signed char[87] pad87;
    signed char f57;
};

struct s1077 {
    signed char[87] pad87;
    signed char f57;
};

void fun_41d381(void** ecx, int32_t a2, int32_t a3) {
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    struct s1076* esi25;
    struct s1077* esi26;
    signed char dl27;
    void** v28;
    void** ebp29;
    void* esi30;
    void* eax31;
    void** v32;
    void** ebx33;
    void** edi34;
    void** v35;
    void** eax36;
    void** eax37;
    void** edx38;

    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
    esi25->f57 = reinterpret_cast<signed char>(esi26->f57 + dl27);
    v28 = ebp29;
    esi30 = eax31;
    v32 = ebx33;
    edi34 = ecx;
    if (*reinterpret_cast<void***>(ecx)) {
        do {
            eax36 = fun_4435c2(ecx, v32, v35, v28);
            ecx = eax36 + 0xffffffdf;
            ++edi34;
            if (reinterpret_cast<signed char>(ecx) < reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(ecx) > reinterpret_cast<signed char>(63)) {
                esi30 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi30) + 4);
                continue;
            } else {
                ecx = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx) * 4 + 0x482f08);
                eax37 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx))));
                edx38 = g4775d0;
                v35 = eax37;
                if (reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(eax37) + reinterpret_cast<uint32_t>(esi30)) > reinterpret_cast<signed char>(edx38)) 
                    break;
                if (v32) 
                    goto addr_41d3e0_6;
            }
            fun_433a50(ecx, v32, v35, *reinterpret_cast<signed char*>(&v28));
            addr_41d3f6_8:
            esi30 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi30) + reinterpret_cast<unsigned char>(v35));
            continue;
            addr_41d3e0_6:
            fun_433eb0(ecx, v32, v35, v28);
            goto addr_41d3f6_8;
        } while (*reinterpret_cast<void***>(edi34));
    }
    goto a3;
}

void fun_41d456() {
}

void fun_41d552() {
}

void** fun_41d817(int32_t ecx) {
    void* esp2;
    int32_t eax3;
    void** edx4;
    void** ecx5;
    void** ebx6;
    void** ebx7;
    int1_t less8;
    uint32_t eax9;
    void** edi10;
    void** eax11;
    void** eax12;
    void** eax13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** eax27;
    signed char* esp28;
    void** v29;
    signed char** esp30;
    int32_t ebp31;
    uint32_t eax32;
    signed char v33;
    signed char v34;
    void* v35;
    int32_t* esp36;
    int32_t v37;
    void* eax38;
    uint32_t ecx39;
    signed char v40;
    void** ecx41;
    void** v42;
    void** v43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void** v50;
    void** eax51;
    void* esp52;
    void** v53;
    void** edi54;
    void* esp55;
    void** v56;
    void** v57;
    void** ebx58;
    int32_t ebx59;
    void** eax60;
    void** esi61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;
    void** edi68;
    void** ebx69;
    int32_t edx70;
    uint32_t eax71;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0xc0);
    eax3 = 0;
    g4835e0 = reinterpret_cast<void**>(55);
    edx4 = reinterpret_cast<void**>(0);
    do {
        ecx5 = *reinterpret_cast<void***>(eax3 + 0x4647e0);
        ++edx4;
        *reinterpret_cast<void***>(ecx5) = *reinterpret_cast<void***>(eax3 + 0x4647e4);
        ebx6 = g4835e0;
        eax3 = eax3 + 20;
    } while (reinterpret_cast<signed char>(edx4) < reinterpret_cast<signed char>(ebx6));
    ebx7 = reinterpret_cast<void**>(1);
    less8 = reinterpret_cast<signed char>(1) < reinterpret_cast<signed char>(g4835f4);
    if (!less8) {
        addr_41d88f_4:
        ebx7 = reinterpret_cast<void**>(0);
    } else {
        ecx5 = reinterpret_cast<void**>(4);
        do {
            eax9 = fun_442f62(ecx5);
            esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4);
            if (!eax9) 
                break;
            edi10 = g4835f4;
            ++ebx7;
            ecx5 = ecx5 + 4;
        } while (reinterpret_cast<signed char>(ebx7) < reinterpret_cast<signed char>(edi10));
        goto addr_41d88f_4;
    }
    if (!ebx7 || (eax11 = g4835f4, reinterpret_cast<signed char>(ebx7) >= reinterpret_cast<signed char>(eax11 - 1))) {
        g4835e4 = reinterpret_cast<void**>(0x480a20);
    } else {
        eax12 = g4835f8;
        eax13 = *reinterpret_cast<void***>(reinterpret_cast<uint32_t>(eax12 + reinterpret_cast<unsigned char>(ebx7) * 4) + 4);
        g4835e4 = eax13;
        fun_440840(ecx5, "\tdefault file: %s\n", eax13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26);
        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 + 4 + 8);
    }
    eax27 = fun_442d87(ecx5);
    esp28 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp2) - 4 + 4);
    v29 = eax27;
    if (eax27) {
        while (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v29 + 12)) & 16)) {
            esp30 = reinterpret_cast<signed char**>(esp28 - 4);
            ebp31 = 0;
            eax32 = fun_44403b(ecx5, v29, "%79s %[^\n]\n", esp30 + 26, esp28);
            esp28 = reinterpret_cast<signed char*>(esp30 - 1 - 1 - 1 - 1 + 1 + 4);
            if (eax32 != 2) 
                continue;
            if (v33 != 34) {
                if (v33 != 48 || v34 != 0x78) {
                    v35 = reinterpret_cast<void*>(esp28 + 0xb4);
                    esp36 = reinterpret_cast<int32_t*>(esp28 - 4 - 4);
                    v37 = reinterpret_cast<int32_t>("%i");
                    eax38 = reinterpret_cast<void*>(esp36 + 2);
                } else {
                    v35 = reinterpret_cast<void*>(esp28 + 0xb4);
                    esp36 = reinterpret_cast<int32_t*>(esp28 - 4 - 4);
                    v37 = reinterpret_cast<int32_t>("%x");
                    eax38 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) + 10);
                }
                fun_4440b0(ecx5, eax38, v37, v35);
                esp28 = reinterpret_cast<signed char*>(esp36 - 1 - 1 + 1 + 3);
            } else {
                ebp31 = 1;
                ecx39 = reinterpret_cast<unsigned char>(ecx5) - reinterpret_cast<unsigned char>(ecx5) - 1;
                do {
                    if (!ecx39) 
                        break;
                    --ecx39;
                } while (v40);
                ecx41 = reinterpret_cast<void**>(~ecx39 - 1);
                eax51 = fun_442e73(ecx41, v42, v43, v44, v45, v46, v47, v48, v49, v50);
                esp52 = reinterpret_cast<void*>(esp28 - 4 + 4);
                v53 = eax51;
                edi54 = eax51;
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp52) + reinterpret_cast<unsigned char>(ecx41) - 1) = 0;
                esp55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp52) - 4);
                do {
                    *reinterpret_cast<void***>(edi54) = v56;
                    if (!v56) 
                        break;
                    *reinterpret_cast<void***>(edi54 + 1) = v57;
                    edi54 = edi54 + 2;
                } while (v57);
                esp28 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp55) + 4);
            }
            ebx58 = g4835e0;
            ecx5 = reinterpret_cast<void**>(0);
            if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx58) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx58 == 0)) 
                continue;
            ebx59 = 0;
            do {
                eax60 = fun_4435d0(ecx5);
                esp28 = esp28 - 4 + 4;
                if (!eax60) 
                    break;
                esi61 = g4835e0;
                ++ecx5;
                ebx59 = ebx59 + 20;
            } while (reinterpret_cast<signed char>(ecx5) < reinterpret_cast<signed char>(esi61));
            goto addr_41da01_30;
            if (ebp31) {
                **reinterpret_cast<void****>(ebx59 + 0x4647e0) = v53;
                continue;
            } else {
                **reinterpret_cast<void****>(ebx59 + 0x4647e0) = v62;
                continue;
            }
            addr_41da01_30:
        }
        eax27 = fun_443392(ecx5, v63, v64, v65, v66, v67);
    }
    edi68 = g4835e0;
    ebx69 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi68) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi68 == 0))) {
        edx70 = 0;
        do {
            if (*reinterpret_cast<int32_t*>(edx70 + 0x4647e8)) {
                eax71 = **reinterpret_cast<uint32_t**>(edx70 + 0x4647e0);
                *reinterpret_cast<uint32_t*>(edx70 + 0x4647ec) = eax71;
                *reinterpret_cast<signed char*>(&eax71) = *reinterpret_cast<signed char*>(eax71 + 0x4776d4);
                **reinterpret_cast<uint32_t**>(edx70 + 0x4647e0) = eax71 & 0xff;
            }
            eax27 = g4835e0;
            ++ebx69;
            edx70 = edx70 + 20;
        } while (reinterpret_cast<signed char>(ebx69) < reinterpret_cast<signed char>(eax27));
    }
    return eax27;
}

struct s1078 {
    signed char[8] pad8;
    signed char* f8;
};

struct s1079 {
    signed char[16] pad16;
    unsigned char f10;
};

struct s1080 {
    signed char[16] pad16;
    unsigned char f10;
};

struct s1081 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t fun_44405c() {
    int32_t edx1;
    struct s1078* eax2;
    struct s1079* eax3;
    struct s1080* eax4;
    struct s1081* eax5;

    edx1 = 0;
    *reinterpret_cast<signed char*>(&edx1) = *eax2->f8;
    if (!edx1) {
        eax3->f10 = reinterpret_cast<unsigned char>(eax4->f10 | 2);
        return -1;
    } else {
        eax5->f8 = reinterpret_cast<int32_t>(eax2->f8 + 1);
        return edx1;
    }
}

struct s1082 {
    signed char[12] pad12;
    void** fc;
    signed char[15] pad28;
    int32_t f1c;
    void** f20;
    signed char[3] pad36;
    int32_t f24;
};

struct s1083 {
    signed char[36] pad36;
    void** f24;
};

void** fun_41e093(int32_t ecx, void** a2, void** a3, void** a4, int32_t a5, int32_t a6, int32_t a7) {
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    signed char* eax20;
    signed char* eax21;
    signed char al22;
    signed char* eax23;
    signed char* eax24;
    signed char al25;
    signed char* eax26;
    signed char* eax27;
    signed char al28;
    int32_t ecx29;
    void* ecx30;
    int32_t ebx31;
    signed char bh32;
    void* ecx33;
    void** ecx34;
    void** edx35;
    signed char dh36;
    signed char dl37;
    void** eax38;
    int1_t zf39;
    struct s1082* esi40;
    int32_t edi41;
    int32_t edi42;
    signed char* eax43;
    signed char* eax44;
    signed char* eax45;
    signed char* eax46;
    signed char al47;
    struct s1082* eax48;
    uint1_t less49;
    struct s1083* eax50;
    void** v51;
    void** esi52;
    void** eax53;
    void** dl54;
    void** eax55;

    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
    *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
    *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
    *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
    *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
    *eax23 = reinterpret_cast<signed char>(*eax24 + al25);
    *reinterpret_cast<signed char*>(ecx - 31) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ecx - 31) + *reinterpret_cast<signed char*>(&ecx));
    *eax26 = reinterpret_cast<signed char>(*eax27 + al28);
    ecx29 = ecx + 1 - 1;
    if (ecx29) {
        addr_41e0e8_2:
        goto a3;
    } else {
        *reinterpret_cast<signed char*>(ecx29 - 31) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ecx29 - 31) + *reinterpret_cast<signed char*>(&ecx29));
        ecx30 = reinterpret_cast<void*>(ecx29 + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx31) + 1) = reinterpret_cast<signed char>(bh32 + *reinterpret_cast<signed char*>(&ecx30));
        ecx33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ecx30) - 1);
        if (reinterpret_cast<uint1_t>(!!ecx33) & reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx31) + 1) == 0)) {
            addr_41e0f0_4:
            ecx34 = reinterpret_cast<void**>(0);
            goto addr_41e0f4_5;
        } else {
            *reinterpret_cast<signed char*>(&edx35 + 1) = reinterpret_cast<signed char>(dh36 + dl37);
            ecx34 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx33) - 1);
            if (reinterpret_cast<uint1_t>(!!ecx34) & reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&edx35 + 1) == 0)) {
                addr_41e0f4_5:
                eax38 = fun_420ca0(ecx34, __return_address(), a2, a3, a4);
                zf39 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&g484d04)) & 7) == 0;
                if (zf39 && esi40->fc != 5) {
                    fun_4312d0(ecx34, a3);
                }
            } else {
                *reinterpret_cast<signed char*>(edi41 - 0x72ffbe1f) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edi42 - 0x72ffbe1f) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx31) + 1));
                *eax43 = reinterpret_cast<signed char>(static_cast<int32_t>(*eax44));
                *eax45 = reinterpret_cast<signed char>(*eax46 + al47);
                esi40 = eax48;
                less49 = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax50->f24) < reinterpret_cast<signed char>(0));
                if (less49) {
                    if (eax50->f24 == 0xffffffff) {
                        v51 = eax50->f24;
                        ecx34 = esi40->f20;
                        eax53 = fun_420ca0(ecx34, 1, v51, esi52, edx35);
                        dl54 = *reinterpret_cast<void***>(&g484d04);
                        if (!(reinterpret_cast<unsigned char>(dl54) & 7) && esi40->fc != 5) {
                            fun_4312d0(ecx34, esi52);
                        }
                        if (!reinterpret_cast<int1_t>(eax53 == 2)) 
                            goto addr_41e1e2_13; else 
                            goto addr_41e1af_14;
                    } else {
                        goto addr_41e0e8_2;
                    }
                } else {
                    if (less49 | reinterpret_cast<uint1_t>(eax50->f24 == 0)) 
                        goto addr_41e200_17;
                    if (eax50->f24 == 1) {
                        goto addr_41e0f0_4;
                    } else {
                        return eax50->f24;
                    }
                }
            }
        }
    }
    if (!reinterpret_cast<int1_t>(eax38 == 2)) {
        addr_41e200_17:
        goto a7;
    } else {
        if (reinterpret_cast<unsigned char>(esi40->fc) >= reinterpret_cast<unsigned char>(3)) {
            if (reinterpret_cast<unsigned char>(esi40->fc) > reinterpret_cast<unsigned char>(4)) {
                if (esi40->fc == 5) {
                    fun_4312d0(ecx34, a3);
                } else {
                    goto a7;
                }
            }
            esi40->f24 = -1;
            goto a7;
        }
        if (!reinterpret_cast<int1_t>(esi40->fc == 1)) 
            goto addr_41e200_17; else 
            goto addr_41e149_29;
    }
    addr_41e1e2_13:
    if (reinterpret_cast<int1_t>(eax53 == 1) && (reinterpret_cast<unsigned char>(esi40->fc) >= reinterpret_cast<unsigned char>(2) && (reinterpret_cast<unsigned char>(esi40->fc) <= reinterpret_cast<unsigned char>(3) || reinterpret_cast<int1_t>(esi40->fc == 5)))) {
        esi40->f1c = 0x2000;
        goto addr_41e200_17;
    }
    addr_41e1af_14:
    eax55 = esi40->fc;
    switch (eax55) {
        addr_41e149_29:
    case 0:
    case 2:
        fun_41e3b0(ecx34);
        goto a7;
        addr_41e1cf_32:
    case 3:
        esi40->f1c = 0x10000;
    case 4:
        esi40->f24 = 1;
        return eax55;
    case 5:
        eax55 = fun_4312d0(ecx34, esi52);
        goto addr_41e1cf_32;
    case 1:
        goto 0x41e200;
    }
}

void fun_41e205() {
}

void fun_42af4a() {
}

struct s1084 {
    signed char[32] pad32;
    int32_t f20;
};

struct s1085 {
    signed char[24] pad24;
    int32_t f18;
};

struct s1086 {
    signed char[4] pad4;
    int32_t f4;
};

struct s1087 {
    signed char[20] pad20;
    int32_t f14;
};

struct s1088 {
    signed char[22] pad22;
    int16_t f16;
};

struct s1089 {
    signed char[22] pad22;
    int16_t f16;
};

struct s1090 {
    signed char[36] pad36;
    int32_t f24;
};

struct s1091 {
    signed char[28] pad28;
    int32_t f1c;
};

void fun_41e2f5() {
    struct s1084* ebx1;
    struct s1085* ebx2;
    struct s1086* esi3;
    struct s1087* ebx4;
    int32_t* esi5;
    int32_t ebp6;
    struct s1088* ebx7;
    struct s1089* ebx8;
    struct s1090* ebx9;
    struct s1091* ebx10;

    ebx1->f20 = 1;
    ebx2->f18 = esi3->f4;
    ebx4->f14 = *esi5;
    if (ebp6) {
        ebx7->f16 = reinterpret_cast<int16_t>(ebx8->f16 + 8);
    }
    ebx9->f24 = -1;
    ebx10->f1c = 0x10000;
    goto 0x41e338;
}

void fun_41e37c() {
}

void fun_42af61() {
}

void fun_41e3fc() {
}

void fun_41e942() {
}

struct s1092 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s1093 {
    signed char[20] pad20;
    void** f14;
};

struct s1094 {
    signed char[20] pad20;
    void** f14;
};

void fun_41e86c(void** ecx) {
    void** eax2;
    struct s1092* edx3;
    struct s1093* edx4;
    struct s1094* edx5;

    eax2 = fun_4280d0(ecx, __return_address());
    edx3->f1c = -1;
    edx4->f14 = eax2;
    edx5->f14 = eax2 + 0xfffc0000;
    fun_4312d0(ecx, __return_address());
    goto 0x41e7c3;
}

void fun_41ed2e() {
}

void fun_41ed8a() {
}

void fun_41ee81() {
}

void fun_41efcb(int32_t ecx) {
}

void fun_41f253() {
}

void** fun_41f358(void** ecx) {
    void** edx2;
    void** eax3;
    void** eax4;

    edx2 = eax3;
    *reinterpret_cast<void***>(edx2 + 0x68) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3 + 0x68)) & 0xfd);
    eax4 = g484cfc;
    if (eax4 == "H") {
        addr_41f3a1_2:
        eax4 = fun_41e7a0(ecx);
    } else {
        do {
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax4 + 8) == 0x4250d0)) 
                continue;
            if (eax4 == edx2) 
                continue;
            if (*reinterpret_cast<void***>(eax4 + 88) != *reinterpret_cast<void***>(edx2 + 88)) 
                continue;
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax4 + 0x6c)) > reinterpret_cast<signed char>(0)) 
                break;
            eax4 = *reinterpret_cast<void***>(eax4 + 4);
        } while (!reinterpret_cast<int1_t>(eax4 == "H"));
        goto addr_41f3a1_2;
    }
    return eax4;
}

void fun_42db2e() {
}

struct s1096 {
    signed char[104] pad104;
    unsigned char f68;
};

struct s1095 {
    signed char[22] pad22;
    struct s1096* f16;
};

struct s1098 {
    signed char[16] pad16;
    void** f10;
};

struct s1097 {
    signed char[52] pad52;
    struct s1095** f34;
    signed char[32] pad88;
    int32_t f58;
    struct s1098* f5c;
    signed char[8] pad104;
    unsigned char f68;
    signed char[15] pad120;
    struct s1096* f78;
    signed char[4] pad128;
    int32_t f80;
};

void** fun_41f3bd(void** ecx) {
    struct s1095** edx2;
    struct s1097* eax3;
    void** eax4;
    void** eax5;
    void** ecx6;
    void** esi7;
    void** edx8;

    edx2 = eax3->f34;
    eax3->f80 = 0;
    if ((*edx2)->f16 && ((*edx2)->f16->f68 & 4 && ((eax3->f78 = (*edx2)->f16, (eax3->f68 & 32) == 0) || (eax4 = fun_427cb0(ecx), !!eax4))) || (eax5 = fun_41f260(ecx), !!eax5)) {
        ecx6 = eax3->f5c->f10;
        if (ecx6) {
            if (reinterpret_cast<unsigned char>(ecx6) < reinterpret_cast<unsigned char>(36)) {
                addr_41f453_4:
            } else {
                if (reinterpret_cast<unsigned char>(ecx6) <= reinterpret_cast<unsigned char>(38)) {
                    fun_41d460(ecx6, esi7);
                    ecx6 = reinterpret_cast<void**>(3);
                } else {
                    if (reinterpret_cast<unsigned char>(ecx6) <= reinterpret_cast<unsigned char>(40)) {
                        fun_41d460(ecx6, esi7);
                        ecx6 = reinterpret_cast<void**>(2);
                    } else {
                        goto addr_41f453_4;
                    }
                }
            }
            if (eax3->f58 == 19 || eax3->f58 == 21) {
            }
            fun_4312d0(ecx6, esi7);
        }
        eax5 = fun_424ae0(ecx6, esi7, edx8);
    }
    return eax5;
}

void fun_41f483() {
}

void fun_41f664() {
}

void** fun_41f6c3(void** ecx) {
    void** eax2;
    void** eax3;
    void** eax4;
    void** edi5;
    void** eax6;
    uint32_t eax7;

    eax2 = eax3;
    if (*reinterpret_cast<void***>(eax2 + 0x78)) {
        fun_41f670(ecx);
        eax4 = fun_423b30(ecx);
        fun_4312d0(eax4, edi5);
        fun_41d460(eax4, edi5);
        fun_41d460(eax4, edi5);
        eax6 = fun_41d460(eax4, edi5);
        eax7 = reinterpret_cast<signed char>(eax6) % 5 + 1;
        eax2 = fun_423be0(eax4, eax7 * 4 - eax7);
    }
    return eax2;
}

int32_t fun_423c54(int32_t ecx) {
    void** eax2;
    unsigned char eax3;
    int1_t less_or_equal4;
    int32_t eax5;
    void** edi6;

    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2 + 8) + 18)) {
        eax3 = fun_423fd0(eax2);
        if (eax3 == 1) {
        }
        fun_4296d0(eax2);
    } else {
        fun_424300(eax2);
        less_or_equal4 = reinterpret_cast<int32_t>(g483dd8) <= reinterpret_cast<int32_t>(0);
        if (!less_or_equal4) {
            eax5 = 1;
            goto addr_423cc6_7;
        } else {
            fun_4312d0(eax2, edi6);
        }
    }
    eax5 = 0;
    addr_423cc6_7:
    return eax5;
}

struct s1100 {
    signed char[108] pad108;
    int32_t f6c;
};

struct s1099 {
    signed char[120] pad120;
    struct s1100* f78;
};

void** fun_41f89b(void** ecx) {
    void** edx2;
    void** eax3;
    struct s1099* eax4;
    void** ebx5;

    fun_41f670(ecx);
    eax3 = fun_41d460(ecx, edx2);
    if (reinterpret_cast<signed char>(eax3) >= reinterpret_cast<signed char>(10) && (!eax4->f78 || (eax4->f78->f6c <= 0 || (eax3 = fun_427cb0(ecx), !eax3)))) {
        eax3 = fun_424ae0(ecx, edx2, ebx5);
    }
    return eax3;
}

void** fun_41f8db(int32_t ecx) {
    void** eax2;
    void** eax3;

    eax2 = eax3;
    if (*reinterpret_cast<void***>(eax2 + 0x78)) {
        fun_41f670(eax2);
        eax2 = fun_4258c0(eax2);
    }
    return eax2;
}

void** fun_41f9c8(void** ecx) {
    void** eax2;
    void** eax3;
    void** eax4;
    void** edi5;
    void** eax6;
    void* edx7;
    void* ecx8;

    eax2 = eax3;
    if (*reinterpret_cast<void***>(eax2 + 0x78)) {
        fun_41f670(ecx);
        eax4 = fun_41ed30(ecx);
        if (!eax4) {
            eax2 = fun_4258c0(ecx);
        } else {
            eax6 = fun_41d460(ecx, edi5);
            edx7 = reinterpret_cast<void*>(reinterpret_cast<signed char>(eax6) % 6 + 1);
            ecx8 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx7) * 4 + reinterpret_cast<uint32_t>(edx7));
            eax2 = fun_422370(reinterpret_cast<uint32_t>(ecx8) + reinterpret_cast<uint32_t>(ecx8));
        }
    }
    return eax2;
}

void** fun_41fa2d(int32_t ecx) {
    void** eax2;
    void** eax3;

    eax2 = eax3;
    if (*reinterpret_cast<void***>(eax2 + 0x78)) {
        fun_41f670(eax2);
        eax2 = fun_4258c0(eax2);
    }
    return eax2;
}

void fun_41fac2(int32_t ecx) {
    int32_t edx2;
    int32_t edx3;
    void** eax4;
    int32_t edx5;
    void** eax6;
    void** edi7;
    void** edx8;

    edx2 = edx3;
    if (*reinterpret_cast<void***>(eax4 + 0x78)) {
        fun_41f670(eax4);
        *reinterpret_cast<void***>(&edx2) = *reinterpret_cast<void***>(eax4 + 22);
        edx5 = edx2 + 16;
        *reinterpret_cast<void***>(eax4 + 22) = *reinterpret_cast<void***>(&edx5);
        eax6 = fun_4258c0(eax4);
        *reinterpret_cast<void***>(eax4 + 20) = *reinterpret_cast<void***>(eax4 + 20) - 0x100000;
        edi7 = *reinterpret_cast<void***>(eax6 + 16);
        edx8 = *reinterpret_cast<void***>(eax6 + 76);
        *reinterpret_cast<void***>(eax6 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax6 + 12)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax6 + 72)));
        *reinterpret_cast<void***>(eax6 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi7) + reinterpret_cast<unsigned char>(edx8));
        *reinterpret_cast<void***>(eax6 + 0x96) = *reinterpret_cast<void***>(eax4 + 0x78);
    }
    return;
}

void** fun_41fca1(void** ecx) {
    void** eax2;
    void** eax3;
    void** edx4;

    eax2 = eax3;
    if (*reinterpret_cast<void***>(eax2 + 0x78)) {
        fun_41f670(ecx);
        eax2 = fun_4312d0(ecx, edx4);
    }
    return eax2;
}

uint32_t g483700 = 0xeb000302;

void* g460c9c = reinterpret_cast<void*>(0x140000);

void*** g4836fc = reinterpret_cast<void***>(0x31e80402);

void** g483704 = reinterpret_cast<void**>(32);

int32_t fun_41fd26(int32_t ecx) {
    void** eax2;
    uint32_t edi3;
    void* esi4;
    void* ebx5;
    uint32_t edx6;
    void*** ebp7;
    void** eax8;
    void** eax9;
    int32_t eax10;

    if (*reinterpret_cast<unsigned char*>(eax2 + 0x6a) & 16) {
        if (*reinterpret_cast<void***>(eax2 + 96) == 0xffffffff) {
            if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2 + 92) + 88)) {
                edi3 = g483700;
                esi4 = g460c9c;
                ebx5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2 + 92) + 64)) + reinterpret_cast<uint32_t>(esi4));
                __asm__("cdq ");
                if (reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 12)) - edi3 ^ edx6) - edx6) > reinterpret_cast<int32_t>(ebx5) || (ebp7 = g4836fc, reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 16)) - reinterpret_cast<uint32_t>(ebp7) ^ edx6) - edx6) > reinterpret_cast<int32_t>(ebx5))) {
                    return 1;
                } else {
                    *reinterpret_cast<void***>(eax2 + 76) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<void***>(eax2 + 72) = *reinterpret_cast<void***>(eax2 + 76);
                    *reinterpret_cast<void***>(eax2 + 68) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 68)) * 4);
                    g483704 = eax2;
                    eax8 = fun_423010(eax2);
                    eax9 = g483704;
                    *reinterpret_cast<void***>(eax9 + 68) = reinterpret_cast<void**>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax9 + 68)) >> 2);
                    if (eax8) {
                        eax10 = 0;
                    } else {
                        return 1;
                    }
                }
            } else {
                return 1;
            }
        } else {
            return 1;
        }
    } else {
        eax10 = 1;
    }
    return eax10;
}

struct s1101 {
    signed char[112] pad112;
    int32_t f70;
};

struct s1103 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s1102 {
    signed char[92] pad92;
    struct s1103* f5c;
};

struct s1104 {
    signed char[12] pad12;
    int32_t fc;
};

void** g483708 = reinterpret_cast<void**>(53);

void** fun_41fe00(void** ecx) {
    void** v2;
    void** eax3;
    struct s1101* eax4;
    void* edx5;
    struct s1102* eax6;
    struct s1104* eax7;
    uint32_t edi8;
    uint32_t eax9;
    uint32_t eax10;
    void** ebp11;
    void** v12;
    void*** eax13;
    void* eax14;
    void** esi15;
    void** ebp16;
    void** edi17;
    void** eax18;
    void** eax19;
    void** eax20;
    void** edx21;
    void** eax22;
    void** ecx23;
    void** edx24;

    v2 = eax3;
    if (eax4->f70 == 8 || (edx5 = reinterpret_cast<void*>(eax6->f5c->f3c * *reinterpret_cast<uint32_t*>(eax4->f70 * 4 + 0x464c48)), g483700 = eax7->fc + eax6->f5c->f3c * *reinterpret_cast<uint32_t*>(eax4->f70 * 4 + 0x464c28), edi8 = g4845ac, g4836fc = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v2 + 16)) + reinterpret_cast<uint32_t>(edx5)), eax9 = g483700, eax10 = eax9 - edi8, ebp11 = g4845b0, v12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax10 + 0x400000) >> 23), eax13 = g4836fc, eax14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax13) - reinterpret_cast<unsigned char>(ebp11)), ecx = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax10 + 0xffc00000) >> 23), esi15 = ecx, ebp16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax14) + 0xffc00000) >> 23), g483708 = v2, edi17 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax14) + 0x400000) >> 23), reinterpret_cast<signed char>(ecx) > reinterpret_cast<signed char>(v12))) {
        addr_41ff35_2:
        eax18 = fun_41f490(ecx);
    } else {
        do {
            ecx = ebp16;
            if (reinterpret_cast<signed char>(ebp16) <= reinterpret_cast<signed char>(edi17)) {
                do {
                    eax19 = fun_424560();
                    if (!eax19) 
                        goto addr_41febf_5;
                    ++ecx;
                } while (reinterpret_cast<signed char>(ecx) <= reinterpret_cast<signed char>(edi17));
            }
            ++esi15;
        } while (reinterpret_cast<signed char>(esi15) <= reinterpret_cast<signed char>(v12));
        goto addr_41ff35_2;
    }
    addr_41ff3d_8:
    return eax18;
    addr_41febf_5:
    eax20 = g483704;
    edx21 = *reinterpret_cast<void***>(v2 + 0x78);
    *reinterpret_cast<void***>(v2 + 0x78) = eax20;
    fun_41f670(v2);
    *reinterpret_cast<void***>(v2 + 0x78) = edx21;
    fun_424ae0(v2, v2, v12);
    fun_4312d0(v2, v2);
    eax22 = g483704;
    ecx23 = *reinterpret_cast<void***>(eax22 + 92);
    fun_424ae0(ecx23, v2, v12);
    eax18 = g483704;
    *reinterpret_cast<void***>(eax18 + 68) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax18 + 68)) << 2);
    *reinterpret_cast<void***>(eax18 + 0x68) = *reinterpret_cast<void***>(ecx23 + 84);
    edx24 = *reinterpret_cast<void***>(ecx23 + 8);
    *reinterpret_cast<void***>(eax18 + 0x78) = reinterpret_cast<void**>(0);
    *reinterpret_cast<void***>(eax18 + 0x6c) = edx24;
    goto addr_41ff3d_8;
}

void** fun_41ff47(void** ecx) {
    void** edx2;
    void** eax3;

    eax3 = fun_4312d0(ecx, edx2);
    return eax3;
}

void fun_420019(void** ecx) {
    void** eax2;
    void** eax3;

    if (*reinterpret_cast<void***>(eax2 + 0x78)) {
        fun_41f670(ecx);
        eax3 = fun_425180(4);
        *reinterpret_cast<void***>(eax2 + 0x96) = eax3;
        *reinterpret_cast<void***>(eax3 + 0x78) = eax2;
        *reinterpret_cast<void***>(eax3 + 0x96) = *reinterpret_cast<void***>(eax2 + 0x78);
        fun_41ffa0(4);
    }
    return;
}

void** fun_420132(void** ecx) {
    void** edx2;
    void** eax3;

    fun_41f670(ecx);
    eax3 = fun_4312d0(ecx, edx2);
    return eax3;
}

void** fun_4204ac(void** ecx) {
    void** eax2;
    void** eax3;

    eax2 = eax3;
    if (*reinterpret_cast<void***>(eax2 + 0x78)) {
        fun_41f670(ecx);
        eax2 = fun_4203d0(ecx);
    }
    return eax2;
}

struct s1106 {
    signed char[56] pad56;
    uint32_t f38;
};

struct s1105 {
    signed char[92] pad92;
    struct s1106* f5c;
};

struct s1107 {
    signed char[88] pad88;
    void** f58;
};

void** fun_420510(void** ecx) {
    struct s1105* eax2;
    void** eax3;
    void** edx4;
    void** ecx5;
    struct s1107* eax6;

    if (eax2->f5c->f38 < 59) {
        if (!eax2->f5c->f38) {
            addr_42057c_3:
            return eax3;
        }
    } else {
        if (eax2->f5c->f38 <= 61) {
            fun_41d460(ecx, edx4);
            goto addr_420564_7;
        } else {
            if (eax2->f5c->f38 <= 63) {
                fun_41d460(ecx, edx4);
                goto addr_420564_7;
            }
        }
    }
    addr_420564_7:
    ecx5 = eax6->f58;
    if (ecx5 == 19 || reinterpret_cast<int1_t>(ecx5 == 21)) {
    }
    eax3 = fun_4312d0(ecx5, edx4);
    goto addr_42057c_3;
}

void** fun_4205b5(void** ecx) {
    void** eax2;

    eax2 = fun_423dc0(ecx);
    return eax2;
}

void** fun_420801(void** ecx) {
    void** edx2;
    void** eax3;

    fun_4312d0(ecx, edx2);
    eax3 = fun_41f490(ecx);
    return eax3;
}

void fun_417738() {
}

struct s1108 {
    signed char[12] pad12;
    int32_t fc;
};

struct s1109 {
    signed char[12] pad12;
    int32_t fc;
};

void** fun_420920(void** ecx) {
    void** v2;
    void** esi3;
    void** v4;
    void** edi5;
    struct s1108* edi6;
    struct s1108* eax7;
    int32_t esi8;
    struct s1109* eax9;
    void** eax10;
    void** eax11;
    void** eax12;
    void** edx13;
    void** eax14;

    v2 = esi3;
    v4 = edi5;
    edi6 = eax7;
    esi8 = eax9->fc - 0xc40000;
    while (esi8 < edi6->fc + 0x1400000) {
        fun_41d460(ecx, v4);
        ecx = reinterpret_cast<void**>(33);
        eax10 = fun_425180(33);
        eax11 = fun_41d460(33, v4);
        *reinterpret_cast<void***>(eax10 + 80) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax11) << 9);
        fun_424ae0(33, v4, v2);
        eax12 = fun_41d460(33, v4);
        edx13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax10 + 96)) - (reinterpret_cast<unsigned char>(eax12) & 7));
        *reinterpret_cast<void***>(eax10 + 96) = edx13;
        if (reinterpret_cast<signed char>(edx13) < reinterpret_cast<signed char>(1)) {
            *reinterpret_cast<void***>(eax10 + 96) = reinterpret_cast<void**>(1);
        }
        esi8 = esi8 + 0x80000;
    }
    eax14 = fun_4312d0(ecx, v4);
    return eax14;
}

int32_t g464ca0 = 0;

int32_t g4836f4 = 0x35f8158b;

int32_t g4836f8 = 0x448b0048;

void** fun_420a35(int32_t ecx) {
    void** eax2;
    void** eax3;
    void** ecx4;
    unsigned char ah5;
    void** edx6;
    int1_t zf7;
    int32_t edx8;
    int32_t ebx9;
    int32_t esi10;
    void** esi11;
    void** eax12;
    void** ecx13;
    void** edi14;

    eax2 = eax3;
    ecx4 = eax2;
    ah5 = *reinterpret_cast<unsigned char*>(&g464ca0);
    *reinterpret_cast<unsigned char*>(&eax2 + 1) = reinterpret_cast<unsigned char>(ah5 ^ 1);
    edx6 = g482a58;
    *reinterpret_cast<unsigned char*>(&g464ca0) = *reinterpret_cast<unsigned char*>(&eax2 + 1);
    if (reinterpret_cast<signed char>(edx6) > reinterpret_cast<signed char>(1) || (zf7 = g464ca0 == 0, !zf7)) {
        edx8 = g4836f4;
        ebx9 = g4836f8;
        esi10 = g4836f4;
        esi11 = *reinterpret_cast<void***>(esi10 * 4 + 0x483674);
        g4836f4 = (edx8 + 1) % ebx9;
        eax12 = fun_4258c0(ecx4);
        *reinterpret_cast<void***>(eax12 + 0x78) = esi11;
        ecx13 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax12 + 100) + 8);
        *reinterpret_cast<void***>(eax12 + 0x7c) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi11 + 16)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx4 + 16))) / reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax12 + 76)) / reinterpret_cast<signed char>(ecx13));
        eax2 = fun_4312d0(ecx13, edi14);
    }
    return eax2;
}

void** fun_420ad8(void** ecx) {
    void** edx2;
    void** eax3;

    fun_4312d0(ecx, edx2);
    eax3 = fun_420b00(ecx);
    return eax3;
}

void fun_420c44() {
}

struct s1111 {
    signed char[8] pad8;
    int16_t f8;
    signed char[4] pad14;
    int16_t fe;
    signed char[58] pad74;
    int32_t f4a;
};

struct s1110 {
    signed char[12] pad12;
    int32_t fc;
    void** f10;
    signed char[3] pad20;
    struct s1111* f14;
    void** f18;
    signed char[3] pad28;
    int16_t f1c;
    signed char[2] pad32;
    int16_t f20;
};

void** fun_420e48(int32_t ecx) {
    void** v2;
    struct s1110* eax3;
    void** ecx4;
    void** esi5;
    void** edx6;
    void** eax7;
    void** ebx8;
    int1_t zf9;

    v2 = eax3->f18;
    ecx4 = eax3->f10;
    eax7 = fun_420ca0(ecx4, 0, v2, esi5, edx6);
    ebx8 = eax7;
    zf9 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&g484d04)) & 7) == 0;
    if (zf9) {
        eax7 = fun_4312d0(ecx4, esi5);
    }
    if (!reinterpret_cast<int1_t>(ebx8 == 2)) {
        addr_420eee_4:
        return eax7;
    } else {
        eax3->f14->f4a = 0;
        if (!reinterpret_cast<int1_t>(eax3->f18 == 1)) {
            if (!reinterpret_cast<int1_t>(eax3->f18 == 0xffffffff) || eax3->fc != 6) {
                addr_420ed7_7:
                fun_42af50(ecx4);
                eax7 = fun_4312d0(ecx4, esi5);
                goto addr_420eee_4;
            } else {
                eax3->f14->fe = eax3->f1c;
            }
        } else {
            if (eax3->fc != 11) 
                goto addr_420ed7_7;
            eax3->f14->fe = eax3->f1c;
        }
    }
    eax3->f14->f8 = eax3->f20;
    goto addr_420ed7_7;
}

struct s1112 {
    signed char[24] pad24;
    int32_t f18;
};

struct s1113 {
    signed char[38] pad38;
    int32_t f26;
};

struct s1114 {
    signed char[20] pad20;
    void** f14;
};

struct s1115 {
    signed char[34] pad34;
    void** f22;
};

void fun_420fee(void** ecx) {
    struct s1112* ebx2;
    struct s1113* ebx3;
    struct s1114* ebx4;
    void** eax5;
    struct s1115* ebx6;

    ebx2->f18 = -1;
    ebx3->f26 = 0x10000;
    ebx4->f14 = ecx;
    eax5 = fun_427f70(ecx, __return_address());
    ebx6->f22 = eax5;
    goto 0x420f61;
}

struct s1116 {
    signed char[24] pad24;
    int32_t f18;
};

struct s1117 {
    signed char[38] pad38;
    int32_t f26;
};

struct s1118 {
    signed char[20] pad20;
    void** f14;
};

struct s1119 {
    signed char[34] pad34;
    int32_t f22;
};

void fun_4210a2(void** ecx) {
    struct s1116* ebx2;
    struct s1117* ebx3;
    struct s1118* ebx4;
    int32_t eax5;
    struct s1119* ebx6;

    ebx2->f18 = 1;
    ebx3->f26 = 0x10000;
    ebx4->f14 = ecx;
    eax5 = fun_428020(ecx, __return_address());
    ebx6->f22 = eax5;
    goto 0x420f61;
}

void fun_427f4c() {
}

void fun_427efb(int32_t ecx) {
}

void fun_427f2a() {
}

void fun_4212d7() {
}

struct s1120 {
    signed char[21] pad21;
    signed char f15;
    signed char[64] pad86;
    signed char f56;
};

void fun_421493(struct s1120* ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    signed char bl20;
    int32_t edx21;
    int32_t edx22;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
    *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
    *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
    *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
    ecx->f15 = reinterpret_cast<signed char>(ecx->f15 + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx) + 1));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) - 0x40ffbdeb) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx) - 0x40ffbdeb) + bl20);
    edx21 = edx22 + 1 + 1;
    ecx->f56 = reinterpret_cast<signed char>(ecx->f56 + *reinterpret_cast<signed char*>(&edx21));
}

void fun_421605() {
}

struct s1122 {
    signed char[108] pad108;
    int32_t f6c;
};

struct s1121 {
    struct s1122* f0;
    signed char[28] pad32;
    int32_t f20;
};

int32_t fun_42173e(int32_t ecx) {
    struct s1121* eax2;
    int32_t ecx3;
    int32_t edx4;

    if (eax2->f20 < 100) {
        ecx3 = eax2->f20 + edx4;
        eax2->f20 = ecx3;
        if (ecx3 > 100) {
            eax2->f20 = 100;
        }
        eax2->f0->f6c = eax2->f20;
        return 1;
    } else {
        return 0;
    }
}

struct s1123 {
    signed char[68] pad68;
    int32_t f44;
};

struct s1124 {
    signed char[224] pad224;
    int32_t fe0;
};

void fun_42179a() {
    struct s1123* edx1;
    int32_t edx2;
    struct s1124* eax3;

    edx1 = reinterpret_cast<struct s1123*>(edx2 * 4 + reinterpret_cast<int32_t>(eax3));
    if (!edx1->f44) {
        eax3->fe0 = 6;
        edx1->f44 = 1;
    }
    return;
}

void fun_422117() {
}

void fun_422369() {
}

struct s1125 {
    signed char[16] pad16;
    int32_t f10;
};

struct s1126 {
    signed char[16] pad16;
    int32_t f10;
};

struct s1128 {
    signed char[12] pad12;
    uint16_t fc;
};

struct s1127 {
    signed char[12] pad12;
    struct s1128* fc;
    int32_t f10;
    int16_t f14;
    signed char[2] pad24;
    uint16_t f18;
};

void fun_4226dc(void** ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    int32_t ebx8;
    struct s1125* eax9;
    struct s1126* eax10;
    void** esi11;
    void** eax12;
    uint32_t ebx13;
    uint16_t ecx14;
    struct s1127* eax15;
    uint32_t ecx16;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    ebx8 = eax9->f10 - 1;
    eax10->f10 = ebx8;
    if (!ebx8) {
        eax12 = fun_41d460(ecx, esi11);
        ebx13 = (reinterpret_cast<unsigned char>(eax12) & 3) << 4;
        ecx14 = reinterpret_cast<uint16_t>(reinterpret_cast<int16_t>(eax15->fc->fc) - ebx13);
        if (reinterpret_cast<int16_t>(ecx14) >= reinterpret_cast<int16_t>(eax15->f18)) {
            *reinterpret_cast<int16_t*>(&ecx14) = eax15->f14;
            ecx16 = ecx14 - ebx13;
            eax15->fc->fc = *reinterpret_cast<uint16_t*>(&ecx16);
        } else {
            eax15->fc->fc = eax15->f18;
        }
        eax15->f10 = 4;
    }
    return;
}

void fun_42272c() {
}

void fun_4227c6() {
}

void fun_422869() {
}

void fun_4228f2() {
}

void fun_422943() {
}

struct s1129 {
    signed char[81] pad81;
    signed char f51;
};

struct s1130 {
    signed char[81] pad81;
    signed char f51;
};

struct s1131 {
    signed char[104] pad104;
    unsigned char f68;
};

void fun_422b0d(int32_t a1, int32_t a2) {
    signed char* eax3;
    signed char* eax4;
    signed char al5;
    struct s1129* ebx6;
    struct s1130* ebx7;
    signed char dl8;
    struct s1131* eax9;
    void** edx10;
    void** ecx11;
    void* ebx12;
    void** eax13;
    uint32_t edi14;
    void** ebp15;
    int1_t zf16;

    *eax3 = reinterpret_cast<signed char>(*eax4 + al5);
    ebx6->f51 = reinterpret_cast<signed char>(ebx7->f51 + dl8);
    if (!(eax9->f68 & 4) || ((edx10 = g48379c, ecx11 = g483794, ebx12 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx10 + 64)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax13 + 64))), reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax13 + 12)) - reinterpret_cast<unsigned char>(ecx11) ^ reinterpret_cast<unsigned char>(edx10)) - reinterpret_cast<unsigned char>(edx10)) >= reinterpret_cast<int32_t>(ebx12)) || ((edi14 = g483790, reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax13 + 16)) - edi14 ^ reinterpret_cast<unsigned char>(edx10)) - reinterpret_cast<unsigned char>(edx10)) >= reinterpret_cast<int32_t>(ebx12)) || (ebp15 = g48379c, eax13 == ebp15)))) {
        addr_422b8c_2:
    } else {
        if (*reinterpret_cast<void***>(ebp15 + 0x84) || (zf16 = reinterpret_cast<int1_t>(g482a5c == 30), zf16)) {
            fun_422370(0x2710);
            goto addr_422b8c_2;
        }
    }
    goto a2;
}

void fun_422b98() {
}

int32_t fun_422d0e(void** ecx) {
    void* eax2;
    int32_t eax3;
    void** eax4;
    uint32_t eax5;
    uint32_t eax6;
    unsigned char eax7;
    void** eax8;
    void** eax9;
    int1_t less10;
    void** eax11;
    int1_t less_or_equal12;
    void** eax13;
    int1_t less14;
    int32_t eax15;

    eax2 = g48373c;
    if (reinterpret_cast<int32_t>(eax2) > reinterpret_cast<int32_t>(*reinterpret_cast<void**>(eax3 + 34)) && ((eax4 = g483738, reinterpret_cast<signed char>(eax4) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax3 + 38))) && ((eax5 = g483730, reinterpret_cast<int32_t>(eax5) > *reinterpret_cast<int32_t*>(eax3 + 30)) && ((eax6 = g483734, reinterpret_cast<int32_t>(eax6) < *reinterpret_cast<int32_t*>(eax3 + 26)) && (eax7 = fun_424090(ecx), eax7 == 0xffffffff))))) {
        if (*reinterpret_cast<struct s287**>(eax3 + 50)) {
            eax8 = g48379c;
            if (!(*reinterpret_cast<unsigned char*>(eax8 + 0x6a) & 1)) {
                if (!(*reinterpret_cast<unsigned char*>(eax3 + 16) & 1)) {
                    if (!*reinterpret_cast<void***>(eax8 + 0x84) && *reinterpret_cast<unsigned char*>(eax3 + 16) & 2) {
                        return 0;
                    }
                } else {
                    return 0;
                }
            }
            fun_424300(ecx);
            eax9 = g483dcc;
            less10 = reinterpret_cast<signed char>(eax9) < reinterpret_cast<signed char>(g4837ac);
            if (less10) {
                g4837ac = eax9;
                g4837a8 = eax3;
            }
            eax11 = g483dd4;
            less_or_equal12 = reinterpret_cast<signed char>(eax11) <= reinterpret_cast<signed char>(g4837a0);
            if (!less_or_equal12) {
                g4837a0 = eax11;
            }
            eax13 = g483dd0;
            less14 = reinterpret_cast<signed char>(eax13) < reinterpret_cast<signed char>(g483788);
            if (less14) {
                g483788 = eax13;
            }
            if (*reinterpret_cast<int16_t*>(eax3 + 18)) {
                eax15 = g48378c;
                *reinterpret_cast<int32_t*>(eax15 * 4 + 0x483710) = eax3;
                g48378c = eax15 + 1;
            }
        } else {
            return 0;
        }
    }
    return 1;
}

uint32_t fun_422e02(int32_t ecx) {
    void** eax2;
    void** edx3;
    void** ecx4;
    void* ebx5;
    uint32_t edi6;
    void** ebp7;
    void** eax8;
    uint1_t zf9;
    uint32_t ebx10;
    void** ecx11;
    void** eax12;
    void** ebp13;
    void** eax14;
    void** edx15;
    void** ecx16;
    uint32_t eax17;
    void** eax18;
    void** edx19;
    void** ecx20;
    void** eax21;
    unsigned char dl22;
    void** edx23;
    void** edi24;

    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x68)) & 7) {
        edx3 = g48379c;
        ecx4 = g483794;
        ebx5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx3 + 64)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 64)));
        __asm__("cdq ");
        if (reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 12)) - reinterpret_cast<unsigned char>(ecx4) ^ reinterpret_cast<unsigned char>(edx3)) - reinterpret_cast<unsigned char>(edx3)) >= reinterpret_cast<int32_t>(ebx5) || (edi6 = g483790, reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 16)) - edi6 ^ reinterpret_cast<unsigned char>(edx3)) - reinterpret_cast<unsigned char>(edx3)) >= reinterpret_cast<int32_t>(ebx5))) {
            return 1;
        } else {
            ebp7 = g48379c;
            if (eax2 != ebp7) {
                eax8 = ebp7;
                if (!(*reinterpret_cast<unsigned char*>(ebp7 + 0x6b) & 1)) {
                    if (!(*reinterpret_cast<unsigned char*>(ebp7 + 0x6a) & 1)) {
                        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x68)) & 1)) {
                            zf9 = reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x68)) & 2) == 0);
                        } else {
                            *reinterpret_cast<unsigned char*>(&ecx4) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&g483798) + 1);
                            ebx10 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x68)) & 2;
                            if (*reinterpret_cast<unsigned char*>(&ecx4) & 8) {
                                eax8 = fun_421930(ecx4);
                            }
                            *reinterpret_cast<unsigned char*>(&eax8) = reinterpret_cast<uint1_t>(ebx10 == 0);
                            return reinterpret_cast<unsigned char>(eax8) & 0xff;
                        }
                    } else {
                        ecx11 = *reinterpret_cast<void***>(ebp7 + 20);
                        if (reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 20)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 68))) >= reinterpret_cast<signed char>(ecx11)) {
                            if (reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(ecx11) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp7 + 68))) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax2 + 20))) {
                                if (*reinterpret_cast<void***>(eax8 + 0x78) && (*reinterpret_cast<void***>(eax2 + 88) == *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax8 + 0x78) + 88) || (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax8 + 0x78) + 88) == 17) && *reinterpret_cast<void***>(eax2 + 88) == 15 || (eax12 = g48379c, eax8 = *reinterpret_cast<void***>(eax12 + 0x78), reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax8 + 88) == 15)) && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax2 + 88) == 17)))) {
                                    eax8 = g48379c;
                                    if (eax2 != *reinterpret_cast<void***>(eax8 + 0x78)) {
                                        if (*reinterpret_cast<void***>(eax2 + 88)) {
                                            return 0;
                                        }
                                    } else {
                                        return 1;
                                    }
                                }
                                (&ecx11)[1] = *reinterpret_cast<void***>(eax2 + 0x68);
                                if (reinterpret_cast<unsigned char>((&ecx11)[1]) & 4) {
                                    eax14 = fun_41d460(ecx11, ebp13);
                                    edx15 = g48379c;
                                    ecx16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(edx15 + 92) + 76)) * (reinterpret_cast<signed char>(eax14) % 8 + 1));
                                    fun_422370(ecx16);
                                    return 0;
                                } else {
                                    zf9 = reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>((&ecx11)[1]) & 2) == 0);
                                }
                            } else {
                                return 1;
                            }
                        } else {
                            return 1;
                        }
                    }
                    *reinterpret_cast<unsigned char*>(&eax8) = zf9;
                    eax17 = reinterpret_cast<unsigned char>(eax8) & 0xff;
                } else {
                    eax18 = fun_41d460(ecx4, ebp13);
                    edx19 = g48379c;
                    ecx20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(edx19 + 92) + 76)) * (reinterpret_cast<signed char>(eax18) % 8 + 1));
                    fun_422370(ecx20);
                    eax21 = g48379c;
                    dl22 = *reinterpret_cast<unsigned char*>(eax21 + 0x6b);
                    *reinterpret_cast<void***>(eax21 + 80) = reinterpret_cast<void**>(0);
                    *reinterpret_cast<unsigned char*>(eax21 + 0x6b) = reinterpret_cast<unsigned char>(dl22 & 0xfe);
                    edx23 = *reinterpret_cast<void***>(eax21 + 80);
                    *reinterpret_cast<void***>(eax21 + 76) = edx23;
                    *reinterpret_cast<void***>(eax21 + 72) = edx23;
                    fun_424ae0(ecx20, ebp13, edi24);
                    return 0;
                }
            } else {
                return 1;
            }
        }
    } else {
        eax17 = 1;
    }
    return eax17;
}

void fun_423003() {
}

void fun_42330a() {
}

struct s1132 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
    void** f8;
};

void** g483770 = reinterpret_cast<void**>(0xcc);

void** g483780 = reinterpret_cast<void**>(0);

void** g48376c = reinterpret_cast<void**>(6);

int32_t fun_42345a(void** ecx) {
    struct s1132* eax2;
    void** edi3;
    void** esi4;
    void** ecx5;
    struct s281* eax6;
    void* edx7;
    void** edx8;
    void** edx9;
    void** edi10;
    void** eax11;
    void** eax12;
    int32_t eax13;
    unsigned char eax14;

    if (!eax2->f4) {
        fun_43bd40(ecx, "PTR_SlideTraverse: not a line?", edi3, esi4);
    }
    ecx5 = eax2->f8;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx5 + 16)) & 4) {
        fun_424300(ecx5);
        eax6 = g483784;
        edx7 = g483dd8;
        if (reinterpret_cast<int32_t>(edx7) < reinterpret_cast<int32_t>(eax6->f44) || ((edx8 = g483dcc, reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edx8) - eax6->f14) < reinterpret_cast<int32_t>(eax6->f44)) || (edx9 = g483dd4, reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edx9) - eax6->f14) > reinterpret_cast<int32_t>(0x180000)))) {
            addr_4234df_5:
            edi10 = g483774;
            if (reinterpret_cast<signed char>(edi10) > reinterpret_cast<signed char>(eax2->f0)) {
                eax11 = g483770;
                g483780 = edi10;
                g48376c = eax11;
                eax12 = eax2->f0;
                g483770 = ecx5;
                g483774 = eax12;
            }
        } else {
            eax13 = 1;
            goto addr_423508_8;
        }
    } else {
        eax14 = fun_423fd0(ecx5);
        if (!eax14) 
            goto addr_4234df_5;
        eax13 = 1;
        goto addr_423508_8;
    }
    eax13 = 0;
    addr_423508_8:
    return eax13;
}

void fun_42350e() {
}

struct s1133 {
    signed char[4] pad4;
    int32_t f4;
};

struct s1134 {
    signed char[8] pad8;
    void** f8;
};

struct s1136 {
    signed char[106] pad106;
    unsigned char f6a;
};

struct s1135 {
    void* f0;
    signed char[4] pad8;
    struct s1136* f8;
};

struct s1137 {
    signed char[8] pad8;
    void** f8;
};

uint32_t fun_423880(int32_t ecx) {
    struct s1133* eax2;
    void** ebx3;
    struct s1134* eax4;
    uint32_t eax5;
    void** ecx6;
    struct s1135* eax7;
    void** v8;
    void** ebp9;
    void** edi10;
    void** esi11;
    void** eax12;
    int1_t less13;
    void** v14;
    void** eax15;
    int1_t less_or_equal16;
    void** v17;
    void** eax18;
    void** ecx19;
    void** ecx20;
    void** ebx21;
    void** ecx22;
    struct s1137* eax23;
    void** v24;
    void** eax25;
    int1_t less_or_equal26;
    void** v27;
    void** eax28;
    int1_t less29;
    void** v30;
    void** eax31;
    uint32_t ebx32;
    void** edx33;
    void*** ebx34;
    void** esi35;
    uint32_t eax36;
    void** edx37;
    void** eax38;

    if (!eax2->f4) {
        ebx3 = g483760;
        if (eax4->f8 != ebx3) {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax4->f8 + 0x68)) & 4) {
                eax5 = g483758;
                __asm__("shrd eax, edx, 0x10");
                ecx6 = reinterpret_cast<void**>(eax5 * reinterpret_cast<uint32_t>(eax7->f0));
                eax12 = fun_411d60(ecx6, v8, ebp9, edi10, esi11);
                less13 = reinterpret_cast<signed char>(eax12) < reinterpret_cast<signed char>(g483764);
                if (!less13) {
                    eax15 = fun_411d60(ecx6, v14, ebp9, edi10, esi11);
                    less_or_equal16 = reinterpret_cast<signed char>(eax15) <= reinterpret_cast<signed char>(g483764);
                    if (less_or_equal16) {
                        eax18 = fun_411d60(ecx6, v17, ebp9, edi10, esi11);
                        ecx19 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax7->f0) - reinterpret_cast<unsigned char>(eax18));
                        __asm__("shrd eax, edx, 0x10");
                        __asm__("shrd eax, edx, 0x10");
                        __asm__("shrd eax, edx, 0x10");
                        __asm__("shrd eax, edx, 0x10");
                        if (!(eax7->f8->f6a & 8)) {
                            ecx20 = g48375c;
                            fun_4257d0(ecx20);
                        } else {
                            fun_425760(ecx19);
                        }
                        ebx21 = g48375c;
                        if (ebx21) {
                            fun_422370(ebx21);
                            goto addr_423b1c_11;
                        }
                    } else {
                        return 1;
                    }
                } else {
                    return 1;
                }
            } else {
                return 1;
            }
        } else {
            return 1;
        }
    }
    ecx22 = eax23->f8;
    if (*reinterpret_cast<void***>(ecx22 + 18)) {
        fun_4289f0(ecx22);
    }
    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx22 + 16)) & 4)) 
        goto addr_42392e_19;
    fun_424300(ecx22);
    __asm__("shrd eax, edx, 0x10");
    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx22 + 46)) == *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx22 + 50))) 
        goto addr_4238fa_21;
    eax25 = fun_411d60(ecx22, v24, ebp9, edi10, esi11);
    less_or_equal26 = reinterpret_cast<signed char>(eax25) <= reinterpret_cast<signed char>(g483764);
    if (!less_or_equal26) 
        goto addr_42392e_19;
    addr_4238fa_21:
    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx22 + 46) + 4) == *reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx22 + 50) + 4)) 
        goto addr_423924_23;
    eax28 = fun_411d60(ecx22, v27, ebp9, edi10, esi11);
    less29 = reinterpret_cast<signed char>(eax28) < reinterpret_cast<signed char>(g483764);
    if (!less29) 
        goto addr_423924_23;
    addr_42392e_19:
    eax31 = fun_411d60(ecx22, v30, ebp9, edi10, esi11);
    __asm__("shrd eax, edx, 0x10");
    __asm__("shrd eax, edx, 0x10");
    ebx32 = g483758;
    __asm__("shrd eax, edx, 0x10");
    edx33 = g483764;
    __asm__("shrd eax, edx, 0x10");
    ebx34 = g483768;
    esi35 = g5ee6d4;
    if (!reinterpret_cast<int1_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx22 + 46) + 10))) == esi35)) {
        fun_425760(ecx22);
        return 0;
    } else {
        if (reinterpret_cast<signed char>(reinterpret_cast<int32_t>(ebx34) + reinterpret_cast<unsigned char>(edx33) * ((reinterpret_cast<uint32_t>(eax7->f0) - reinterpret_cast<unsigned char>(eax31)) * ebx32)) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx22 + 46) + 4))) {
            addr_423b1c_11:
            eax36 = 0;
        } else {
            if (*reinterpret_cast<void***>(ecx22 + 50) && (edx37 = g5ee6d4, eax38 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(ecx22 + 50) + 10)))), eax38 == edx37)) {
                return reinterpret_cast<unsigned char>(eax38) ^ reinterpret_cast<unsigned char>(edx37);
            }
        }
    }
    addr_423b1e_29:
    return eax36;
    addr_423924_23:
    eax36 = 1;
    goto addr_423b1e_29;
}

void fun_423b28() {
}

void fun_423bd1() {
}

void fun_423db7() {
}

void fun_423f45() {
}

void fun_42419d() {
}

struct s1138 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
    int32_t fc;
};

struct s1140 {
    int32_t f0;
    int32_t f4;
};

struct s1139 {
    struct s1140* f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

void fun_424267() {
    struct s1138* edx1;
    struct s1139* eax2;

    edx1->f0 = eax2->f0->f0;
    edx1->f4 = eax2->f0->f4;
    edx1->f8 = eax2->f8;
    edx1->fc = eax2->fc;
    return;
}

void fun_4242f4() {
}

void fun_42436a() {
}

void fun_424419() {
}

void fun_4244d3() {
}

void fun_424551() {
}

int32_t fun_4245ab(int32_t ecx) {
    uint32_t edx2;
    uint32_t ebx3;
    void** eax4;
    unsigned char eax5;
    unsigned char esi6;
    unsigned char eax7;
    unsigned char eax8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** eax13;
    int1_t zf14;
    int32_t* edx15;
    int32_t* edx16;

    edx2 = g4837bc;
    if (reinterpret_cast<int32_t>(edx2) > reinterpret_cast<int32_t>(0x100000) || ((ebx3 = g4837c0, reinterpret_cast<int32_t>(ebx3) > reinterpret_cast<int32_t>(0x100000)) || (reinterpret_cast<int32_t>(edx2) < reinterpret_cast<int32_t>(0xfff00000) || reinterpret_cast<int32_t>(ebx3) < reinterpret_cast<int32_t>(0xfff00000)))) {
        eax5 = fun_4241a0(eax4);
        esi6 = eax5;
        eax7 = fun_4241a0(eax4);
    } else {
        eax8 = fun_423fd0(eax4);
        esi6 = eax8;
        eax7 = fun_423fd0(eax4);
    }
    if (esi6 != eax7) {
        v9 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax4));
        v10 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax4) + 4);
        v11 = *reinterpret_cast<void***>(eax4 + 8);
        v12 = *reinterpret_cast<void***>(eax4 + 12);
        eax13 = fun_424290(eax4, v9, v10, v11, v12);
        if (reinterpret_cast<signed char>(eax13) >= reinterpret_cast<signed char>(0)) {
            zf14 = g483dc8 == 0;
            if (zf14 || (reinterpret_cast<signed char>(eax13) >= reinterpret_cast<signed char>(0x10000) || *reinterpret_cast<void***>(eax4 + 50))) {
                edx15 = g483ddc;
                edx16 = edx15 + 3;
                edx16[0xfffffffe] = 1;
                *reinterpret_cast<void***>(edx16 + 0xfffffffd) = eax13;
                *reinterpret_cast<void***>(edx16 + 0xffffffff) = eax4;
                g483ddc = edx16;
            } else {
                return 0;
            }
        } else {
            return 1;
        }
    }
    return 1;
}

int32_t fun_4246da(int32_t ecx) {
    uint32_t eax2;
    uint32_t eax3;
    void** edi4;
    void** eax5;
    void** esi6;
    void* ebp7;
    void* v8;
    void** ebx9;
    void** ebp10;
    unsigned char eax11;
    unsigned char eax12;
    void** eax13;
    int32_t* esi14;
    int32_t* esi15;

    eax2 = g4837bc;
    eax3 = eax2 ^ g4837c0;
    *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax3) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax3 == 0)));
    if (!(eax3 & 0xff)) {
        edi4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5 + 12)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5 + 64)));
        esi6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5 + 16)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5 + 64)));
        ebp7 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5 + 16)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5 + 64)));
        v8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5 + 12)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5 + 64)));
    } else {
        ebx9 = *reinterpret_cast<void***>(eax5 + 64);
        edi4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5 + 12)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5 + 64)));
        esi6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5 + 16)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5 + 64)));
        ebp10 = *reinterpret_cast<void***>(eax5 + 16);
        v8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5 + 12)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax5 + 64)));
        ebp7 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebp10) - reinterpret_cast<unsigned char>(ebx9));
    }
    eax11 = fun_4241a0(eax5);
    eax12 = fun_4241a0(eax5);
    if (eax12 != eax11) {
        eax13 = fun_424290(eax5, edi4, esi6, reinterpret_cast<uint32_t>(v8) - reinterpret_cast<unsigned char>(edi4), reinterpret_cast<uint32_t>(ebp7) - reinterpret_cast<unsigned char>(esi6));
        if (reinterpret_cast<signed char>(eax13) >= reinterpret_cast<signed char>(0)) {
            esi14 = g483ddc;
            esi15 = esi14 + 3;
            esi15[0xfffffffe] = 0;
            *reinterpret_cast<void***>(esi15 + 0xfffffffd) = eax13;
            *reinterpret_cast<void***>(esi15 + 0xffffffff) = eax5;
            g483ddc = esi15;
        } else {
            return 1;
        }
    }
    return 1;
}

void fun_424859() {
}

struct s1141 {
    signed char[86] pad86;
    signed char f56;
};

struct s1142 {
    signed char[86] pad86;
    signed char f56;
};

void fun_424ad7() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    struct s1141* ebx13;
    struct s1142* ebx14;
    signed char dl15;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    ebx13->f56 = reinterpret_cast<signed char>(ebx14->f56 + dl15);
}

void fun_424b3b(int32_t ecx) {
}

void fun_424e23() {
}

void fun_424fcb(int32_t ecx) {
}

struct s1143 {
    signed char[8] pad8;
    int32_t f8;
    signed char[8] pad20;
    void** f14;
    signed char[35] pad56;
    void** f38;
    signed char[15] pad72;
    int32_t f48;
    int32_t f4c;
    int32_t f50;
    signed char[12] pad96;
    int32_t f60;
    signed char[6] pad106;
    unsigned char f6a;
    unsigned char f6b;
    signed char[8] pad116;
    int32_t f74;
};

void** fun_4250c4(void** ecx) {
    struct s1143* eax2;
    void** eax3;
    int1_t zf4;
    int32_t esi5;
    int1_t zf6;
    void** ebp7;
    int32_t ebp8;
    void** esi9;
    void** eax10;

    if ((!eax2->f48 && (!eax2->f4c && !(eax2->f6b & 1)) || (eax3 = fun_424ba0(ecx), eax2->f8 != -1)) && ((eax3 = eax2->f14, eax3 == eax2->f38) && !eax2->f50 || (eax3 = fun_424e30(ecx), eax2->f8 != -1))) {
        if (eax2->f60 == -1) {
            if (eax2->f6a & 64 && ((zf4 = g482a60 == 0, !zf4) && ((esi5 = eax2->f74 + 1, eax2->f74 = esi5, esi5 >= 0x1a4) && ((zf6 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&g484d04)) & 31) == 0, zf6) && (eax3 = fun_41d460(ecx, ebp7), reinterpret_cast<signed char>(eax3) <= reinterpret_cast<signed char>(4)))))) {
                eax3 = fun_424fd0(ecx);
            }
        } else {
            ebp8 = eax2->f60 - 1;
            eax2->f60 = ebp8;
            if (!ebp8) {
                eax10 = fun_424ae0(ecx, ebp7, esi9);
                return eax10;
            }
        }
    }
    return eax3;
}

void fun_425175() {
}

void fun_425295() {
}

void fun_425325() {
}

void fun_425447() {
}

void fun_425759() {
}

void fun_4257c5() {
}

void fun_4258ba() {
}

struct s1144 {
    signed char[81] pad81;
    signed char f51;
};

struct s1145 {
    signed char[91] pad91;
    signed char f5b;
};

struct s1146 {
    signed char[36] pad36;
    int32_t f24;
};

struct s1147 {
    signed char[12] pad12;
    void*** fc;
    signed char[4] pad20;
    void** f14;
    signed char[7] pad28;
    int32_t f1c;
    int32_t f20;
    void** f24;
    signed char[7] pad44;
    void** f2c;
    signed char[7] pad52;
    void** f34;
};

void fun_425a93(signed char cl, struct s1144* a2, int32_t a3, int32_t a4, int32_t a5) {
    signed char* eax6;
    signed char* eax7;
    signed char al8;
    signed char* eax9;
    signed char* eax10;
    signed char al11;
    signed char* eax12;
    signed char* eax13;
    signed char al14;
    signed char* eax15;
    signed char* eax16;
    signed char al17;
    signed char* eax18;
    signed char* eax19;
    signed char al20;
    signed char* eax21;
    signed char* eax22;
    signed char al23;
    struct s1145* edx24;
    signed char bh25;
    int32_t edx26;
    int32_t esi27;
    int32_t esi28;
    int32_t edx29;
    struct s1146* eax30;
    void** ecx31;
    struct s1147* eax32;
    void** edi33;
    void** esi34;
    void** eax35;
    int1_t zf36;
    void** eax37;
    int32_t edx38;
    void** eax39;

    *eax6 = reinterpret_cast<signed char>(*eax7 + al8);
    *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
    *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
    *eax15 = reinterpret_cast<signed char>(*eax16 + al17);
    *eax18 = reinterpret_cast<signed char>(*eax19 + al20);
    *eax21 = reinterpret_cast<signed char>(*eax22 + al23);
    edx24 = reinterpret_cast<struct s1145*>(reinterpret_cast<int32_t>(__return_address()) + 1);
    edx24->f5b = reinterpret_cast<signed char>(edx24->f5b + bh25);
    edx26 = reinterpret_cast<int32_t>(edx24) + 1;
    *reinterpret_cast<signed char*>(esi27 - 0x1bffbda5) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(esi28 - 0x1bffbda5) + *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx26) + 1));
    edx29 = edx26 + 1;
    a2->f51 = reinterpret_cast<signed char>(a2->f51 + *reinterpret_cast<signed char*>(&edx29));
    switch (eax30->f24) {
    case 0:
        ecx31 = eax32->f2c;
        eax35 = fun_420ca0(ecx31, 0, 1, edi33, esi34);
        if ((eax32->f34 == 2 || reinterpret_cast<int1_t>(eax32->f34 == 3)) && (zf36 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&g484d04)) & 7) == 0, zf36)) {
            fun_4312d0(ecx31, edi33);
        }
        if (!reinterpret_cast<int1_t>(eax35 == 1) || eax32->f2c) {
            if (!reinterpret_cast<int1_t>(eax35 == 2)) 
                goto addr_425be4_7;
            eax32->f20 = eax32->f1c;
            eax32->f24 = eax35;
            fun_4312d0(ecx31, edi33);
            if (reinterpret_cast<unsigned char>(eax32->f34) >= reinterpret_cast<unsigned char>(eax35)) 
                goto addr_425b55_9;
        } else {
            eax32->f20 = eax32->f1c;
            eax32->f24 = eax35;
            break;
        }
        if (!reinterpret_cast<int1_t>(eax32->f34 == 1)) {
            addr_425be4_7:
        case 3:
            goto a5;
        } else {
            addr_425b6d_12:
            fun_425f60(ecx31);
            goto a5;
        }
        addr_425b55_9:
        if (reinterpret_cast<unsigned char>(eax32->f34) <= reinterpret_cast<unsigned char>(3)) 
            goto addr_425b6d_12;
        if (eax32->f34 == 4) 
            goto addr_425b6d_12;
        goto addr_425be4_7;
    case 1:
        eax37 = fun_420ca0(0, 0, 0xff, edi33, esi34);
        if (reinterpret_cast<int1_t>(eax37 == 2)) {
            eax32->f20 = eax32->f1c;
            eax32->f24 = reinterpret_cast<void**>(2);
            fun_4312d0(0, edi33);
            goto a5;
        }
    case 2:
        edx38 = eax32->f20 - 1;
        eax32->f20 = edx38;
        if (edx38) 
            goto addr_425be4_7;
        ecx31 = eax32->f14;
        eax39 = *eax32->fc;
        *reinterpret_cast<unsigned char*>(&eax39) = reinterpret_cast<uint1_t>(eax39 != ecx31);
        eax32->f24 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax39) & 0xff);
    }
    fun_4312d0(ecx31, edi33);
    goto addr_425be4_7;
}

void fun_425bea() {
}

struct s1148 {
    signed char[16] pad16;
    int32_t f10;
};

struct s1149 {
    signed char[22] pad22;
    int16_t f16;
};

struct s1150 {
    signed char[8] pad8;
    void** f8;
};

struct s1151 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s1152 {
    signed char[24] pad24;
    uint32_t f18;
};

struct s1153 {
    signed char[36] pad36;
    int32_t f24;
};

void fun_425d1f(void** ecx) {
    struct s1148* ebx2;
    void** edx3;
    struct s1149* edi4;
    void** eax5;
    struct s1151* ebx6;
    struct s1152* ebx7;
    uint32_t v8;
    struct s1153* ebx9;

    ebx2->f10 = 0x8000;
    edx3 = g4845d4;
    *reinterpret_cast<void***>(ecx + 8) = (*reinterpret_cast<struct s1150**>(reinterpret_cast<uint32_t>(edx3 + edi4->f16 * 18) + 14))->f8;
    eax5 = *reinterpret_cast<void***>(ecx);
    ebx6->f1c = 0;
    ebx7->f18 = reinterpret_cast<unsigned char>(eax5) + v8;
    ebx9->f24 = 0;
    fun_4312d0(ecx, __return_address());
    fun_425f20(ecx, __return_address());
    goto 0x425c3f;
}

void fun_425fbc() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

struct s1154 {
    signed char[28] pad28;
    int32_t f1c;
};

int32_t g484574 = 0x3c1589e0;

int32_t g484578 = 0x31004812;

void fun_426030() {
    uint32_t ebx1;
    int32_t eax2;
    struct s1154* eax3;
    uint32_t ebx4;
    int32_t ebx5;
    int32_t eax6;

    ebx1 = g484d04 * 0x75;
    eax2 = eax3->f1c * *reinterpret_cast<int32_t*>((ebx1 & 0x1fff) * 4 + 0x46a9e0);
    __asm__("shrd eax, edx, 0x10");
    ebx4 = g484d04 * 0x75;
    ebx5 = *reinterpret_cast<int32_t*>((ebx4 + 0x1000 & 0x1fff) * 4 + 0x46a9e0);
    g484574 = eax2;
    eax6 = eax2 * ebx5;
    __asm__("shrd eax, edx, 0x10");
    g484578 = eax6;
    g484578 = -eax6;
    return;
}

void fun_426377() {
}

struct s1156 {
    signed char[32] pad32;
    void** f20;
};

struct s1155 {
    struct s1156* f0;
    signed char[44] pad48;
    int32_t f30;
};

void** fun_426502(void** ecx) {
    void** ebp2;
    void** eax3;
    void* edx4;
    void** ecx5;
    struct s1155* eax6;
    void*** ecx7;
    void** eax8;
    void** eax9;
    int1_t zf10;
    void** eax11;
    void** ecx12;

    eax3 = fun_41d460(ecx, ebp2);
    edx4 = reinterpret_cast<void*>(reinterpret_cast<signed char>(eax3) % 10);
    ecx5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx4) + reinterpret_cast<int32_t>(edx4) + 2);
    if (eax6->f30) {
        ecx7 = reinterpret_cast<void***>(ecx5 + reinterpret_cast<unsigned char>(ecx5) * 4);
        ecx5 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ecx7) + reinterpret_cast<uint32_t>(ecx7));
    }
    fun_41d460(ecx5, ebp2);
    fun_41d460(ecx5, ebp2);
    eax8 = fun_423b30(ecx5);
    eax9 = fun_423be0(eax8, ecx5);
    zf10 = g4837b0 == 0;
    if (!zf10) {
        fun_4312d0(eax8, ebp2);
        eax11 = g4837b0;
        ecx12 = *reinterpret_cast<void***>(eax11 + 16);
        eax9 = fun_42db10(ecx12);
        eax6->f0->f20 = eax9;
    }
    return eax9;
}

void** fun_4265b1(void** ecx) {
    void** ebp2;
    void** eax3;
    void* edx4;
    void** ecx5;
    void** eax6;
    int1_t zf7;
    void** ebx8;
    void** ecx9;
    void** eax10;
    void* edi11;
    void*** eax12;
    void** eax13;
    void** eax14;

    eax3 = fun_41d460(ecx, ebp2);
    edx4 = reinterpret_cast<void*>(reinterpret_cast<signed char>(eax3) % 10);
    ecx5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx4) + reinterpret_cast<int32_t>(edx4) + 2);
    fun_41d460(ecx5, ebp2);
    fun_41d460(ecx5, ebp2);
    eax6 = fun_423b30(ecx5);
    fun_423be0(eax6, ecx5);
    zf7 = g4837b0 == 0;
    if (!zf7) {
        fun_4312d0(eax6, ebp2);
        ebx8 = g4837b0;
        ecx9 = *reinterpret_cast<void***>(ebx8 + 16);
        eax10 = fun_42db10(ecx9);
        edi11 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax10) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*eax12 + 32)));
        if (reinterpret_cast<uint32_t>(edi11) <= 0x80000000) {
            if (reinterpret_cast<uint32_t>(edi11) <= 0x3333333) {
                *reinterpret_cast<void***>(*eax12 + 32) = *reinterpret_cast<void***>(*eax12 + 32) + 0x3333333;
            } else {
                *reinterpret_cast<void***>(*eax12 + 32) = eax10 - 0x30c30c3;
                eax13 = *eax12;
                *reinterpret_cast<void***>(eax13 + 0x68) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax13 + 0x68)) | 0x80);
                return eax13;
            }
        } else {
            if (reinterpret_cast<uint32_t>(edi11) >= 0xfccccccd) {
                *reinterpret_cast<void***>(*eax12 + 32) = *reinterpret_cast<void***>(*eax12 + 32) + 0xfccccccd;
            } else {
                *reinterpret_cast<void***>(*eax12 + 32) = eax10 + 0x30c30c3;
            }
        }
        eax14 = *eax12;
        *reinterpret_cast<void***>(eax14 + 0x68) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax14 + 0x68)) | 0x80);
    } else {
        eax14 = fun_4312d0(eax6, ebp2);
    }
    return eax14;
}

struct s1157 {
    signed char[112] pad112;
    int32_t f70;
};

void** fun_4266b8(void** ecx) {
    struct s1157* eax2;
    void** eax3;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax2) + *reinterpret_cast<int32_t*>((eax2->f70 * 4 - eax2->f70) * 8 + 0x464cc8) * 4 + 0x9c) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax2) + *reinterpret_cast<int32_t*>((eax2->f70 * 4 - eax2->f70) * 8 + 0x464cc8) * 4 + 0x9c) - 1;
    eax3 = fun_4259b0(ecx);
    return eax3;
}

void fun_4267e3() {
}

void** fun_4268c5(void** ecx) {
    void** ecx2;
    void** eax3;
    void** ebx4;
    int32_t ebx5;
    void** eax6;

    ecx2 = eax3;
    fun_4312d0(ecx2, ecx);
    fun_424ae0(ecx2, ecx, ebx4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx2 + *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx2 + 0x70)) * 4 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx2 + 0x70))) * 8 + 0x464cc8) * 4) + 0x9c) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ecx2 + *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx2 + 0x70)) * 4 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx2 + 0x70))) * 8 + 0x464cc8) * 4) + 0x9c) - 1;
    fun_425fc0(ecx2);
    fun_426780(ecx2);
    ebx5 = 0;
    do {
        ++ebx5;
        eax6 = fun_4267f0(ecx2);
    } while (ebx5 < 7);
    return eax6;
}

struct s1158 {
    signed char[232] pad232;
    int32_t fe8;
};

void fun_426afb(int32_t ecx) {
    struct s1158* eax2;

    eax2->fe8 = 1;
    return;
}

void fun_426bcc() {
}

void fun_41d4dc() {
}

void fun_42af24() {
}

void fun_427903() {
}

void fun_4279e7() {
}

void fun_427a54() {
}

struct s1159 {
    signed char[81] pad81;
    signed char f51;
};

struct s1160 {
    signed char[81] pad81;
    signed char f51;
};

void fun_427dc5() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    struct s1159* ebx16;
    struct s1160* ebx17;
    signed char dl18;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    ebx16->f51 = reinterpret_cast<signed char>(ebx17->f51 + dl18);
}

void fun_427f6b(int32_t ecx) {
}

void fun_4280c9() {
}

void fun_4281d6() {
}

void fun_4289ea() {
}

void fun_428bbe() {
}

void fun_4292c9() {
}

void fun_429e24() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
}

void fun_42a6dd() {
}

void fun_42af0a() {
}

struct s1161 {
    signed char[86] pad86;
    signed char f56;
};

struct s1162 {
    signed char[4631008] pad4631008;
    int32_t f46a9e0;
};

struct s1163 {
    signed char[72] pad72;
    uint32_t f48;
};

struct s1164 {
    signed char[76] pad76;
    int32_t f4c;
};

void fun_42b049(struct s1161* ecx, int32_t a2, int32_t a3) {
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char dl13;
    uint32_t* ebx14;
    struct s1162* edi15;
    uint32_t edx16;
    struct s1163** eax17;
    int32_t ebx18;
    struct s1164** eax19;

    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    ecx->f56 = reinterpret_cast<signed char>(ecx->f56 + dl13);
    ebx14 = image_base_;
    edi15 = reinterpret_cast<struct s1162*>((edx16 >> 19) * 4);
    __asm__("shrd eax, edx, 0x10");
    (*eax17)->f48 = (*eax17)->f48 + ebx18 * *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(edi15) + reinterpret_cast<int32_t>(ebx14));
    __asm__("shrd eax, edx, 0x10");
    (*eax19)->f4c = (*eax19)->f4c + ebx18 * edi15->f46a9e0;
    goto a3;
}

void fun_42b2d8() {
}

void fun_42b633() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
}

struct s1165 {
    signed char[12] pad12;
    int32_t fc;
    int32_t f10;
    signed char[44] pad64;
    uint32_t f40;
    signed char[20] pad88;
    int32_t f58;
    signed char[12] pad104;
    unsigned char f68;
};

int32_t fun_423d1b(void** ecx) {
    struct s1165* eax2;
    uint32_t edx3;
    uint32_t edx4;
    uint32_t ebx5;
    uint32_t eax6;
    void* ebx7;
    int1_t less8;
    void** eax9;
    void* ecx10;

    if (eax2->f68 & 4 && (eax2->f58 != 21 && eax2->f58 != 19)) {
        edx3 = g483750;
        __asm__("cdq ");
        edx4 = g483750;
        ebx5 = (reinterpret_cast<uint32_t>(eax2->fc - *reinterpret_cast<int32_t*>(edx3 + 12)) ^ edx3) - edx3;
        __asm__("cdq ");
        eax6 = (reinterpret_cast<uint32_t>(eax2->f10 - *reinterpret_cast<int32_t*>(edx4 + 16)) ^ edx4) - edx4;
        if (reinterpret_cast<int32_t>(ebx5) > reinterpret_cast<int32_t>(eax6)) {
            eax6 = ebx5;
        }
        ebx7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax6 - eax2->f40) >> 16);
        if (reinterpret_cast<int32_t>(ebx7) < reinterpret_cast<int32_t>(0)) {
            ebx7 = reinterpret_cast<void*>(0);
        }
        less8 = reinterpret_cast<int32_t>(ebx7) < reinterpret_cast<int32_t>(g48374c);
        if (less8 && (eax9 = fun_427cb0(ecx), !!eax9)) {
            ecx10 = g48374c;
            fun_422370(reinterpret_cast<uint32_t>(ecx10) - reinterpret_cast<uint32_t>(ebx7));
        }
    }
    return 1;
}

void fun_42b718() {
}

void fun_42b78e() {
}

void fun_42b90c() {
}

void fun_42ba77() {
}

void fun_42c06a() {
}

void fun_42c691() {
}

void fun_42c6ba() {
}

void fun_42ce6d() {
}

void fun_42cea1() {
}

void fun_42d017() {
}

uint32_t fun_42d8a0(uint32_t ecx) {
    uint32_t edx2;
    uint32_t eax3;
    int32_t eax4;
    uint32_t edx5;

    if (edx2 >= 0x200) {
        eax3 = eax4 * 8 / (edx5 >> 8);
        return (eax3 - 0x800 & ecx - (ecx + reinterpret_cast<uint1_t>(ecx < ecx + reinterpret_cast<uint1_t>(eax3 < 0x800)))) + 0x800;
    } else {
        return 0x800;
    }
}

void fun_42d8d2() {
}

void fun_42db05() {
}

void fun_42dc31() {
}

void fun_42e44d() {
}

void fun_42e4f1() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    int32_t edx22;
    int32_t edx23;
    signed char dl24;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    *reinterpret_cast<signed char*>(edx22 - 72) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(edx23 - 72) + dl24);
}

void fun_42e681() {
}

void fun_42e893() {
}

void fun_42e97d() {
}

void fun_42fc18() {
}

void fun_42ff24() {
}

void fun_4303d6() {
}

void fun_430613() {
}

signed char gf000000;

struct s1166 {
    signed char[128] pad128;
    signed char f80;
};

struct s1167 {
    signed char[128] pad128;
    signed char f80;
};

void fun_430a65(signed char* ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* esi17;
    signed char* esi18;
    signed char dl19;
    signed char* eax20;
    signed char* eax21;
    signed char al22;
    int32_t eax23;
    int32_t eax24;
    int32_t eax25;
    int32_t eax26;
    signed char dl27;
    unsigned char tmp8_28;
    signed char* eax29;
    signed char al30;
    uint1_t cf31;
    unsigned char* eax32;
    unsigned char* eax33;
    unsigned char* eax34;
    void* eax35;
    signed char dl36;
    signed char tmp8_37;
    signed char* esi38;
    signed char* esi39;
    signed char* esi40;
    signed char* esi41;
    signed char dl42;
    signed char dl43;
    unsigned char tmp8_44;
    uint1_t cf45;
    signed char* eax46;
    signed char dl47;
    signed char tmp8_48;
    signed char* esi49;
    signed char* esi50;
    struct s1166* ebp51;
    struct s1167* ebp52;
    int32_t ebx53;
    int32_t ebx54;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
    *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
    *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
    *esi17 = reinterpret_cast<signed char>(*esi18 + dl19);
    *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
    *reinterpret_cast<signed char*>(eax23 + eax24) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax25 + eax26) + dl27);
    tmp8_28 = reinterpret_cast<unsigned char>(*eax29 + al30);
    cf31 = reinterpret_cast<uint1_t>(tmp8_28 < *eax32);
    *eax33 = tmp8_28;
    eax34 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax35) + 0x5000000 + cf31);
    *eax34 = reinterpret_cast<unsigned char>(*eax34 + *reinterpret_cast<signed char*>(&eax34));
    *eax34 = reinterpret_cast<unsigned char>(*eax34 + dl36);
    *eax34 = reinterpret_cast<unsigned char>(*eax34 + *reinterpret_cast<signed char*>(&eax34));
    tmp8_37 = reinterpret_cast<signed char>(gf000000 + *reinterpret_cast<signed char*>(&ecx));
    gf000000 = tmp8_37;
    *eax34 = reinterpret_cast<unsigned char>(*eax34 + *reinterpret_cast<signed char*>(&eax34));
    *esi38 = reinterpret_cast<signed char>(*esi39 + *reinterpret_cast<signed char*>(&ecx));
    *eax34 = reinterpret_cast<unsigned char>(*eax34 + *reinterpret_cast<signed char*>(&eax34));
    *ecx = reinterpret_cast<signed char>(*ecx + *reinterpret_cast<signed char*>(&ecx));
    *eax34 = reinterpret_cast<unsigned char>(*eax34 + *reinterpret_cast<signed char*>(&eax34));
    *esi40 = reinterpret_cast<signed char>(*esi41 + dl42);
    *eax34 = reinterpret_cast<unsigned char>(*eax34 + *reinterpret_cast<signed char*>(&eax34));
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax34) + reinterpret_cast<uint32_t>(eax34)) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax34) + reinterpret_cast<uint32_t>(eax34)) + dl43);
    tmp8_44 = reinterpret_cast<unsigned char>(*eax34 + *reinterpret_cast<signed char*>(&eax34));
    cf45 = reinterpret_cast<uint1_t>(tmp8_44 < *eax34);
    *eax34 = tmp8_44;
    eax46 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax34 + 0x5000000) + cf45);
    *eax46 = reinterpret_cast<signed char>(*eax46 + *reinterpret_cast<signed char*>(&eax46));
    *eax46 = reinterpret_cast<signed char>(*eax46 + dl47);
    *eax46 = reinterpret_cast<signed char>(*eax46 + *reinterpret_cast<signed char*>(&eax46));
    tmp8_48 = reinterpret_cast<signed char>(gf000000 + *reinterpret_cast<signed char*>(&ecx));
    gf000000 = tmp8_48;
    *eax46 = reinterpret_cast<signed char>(*eax46 + *reinterpret_cast<signed char*>(&eax46));
    *esi49 = reinterpret_cast<signed char>(*esi50 + *reinterpret_cast<signed char*>(&ecx));
    *eax46 = reinterpret_cast<signed char>(*eax46 + *reinterpret_cast<signed char*>(&eax46));
    *ecx = reinterpret_cast<signed char>(*ecx + *reinterpret_cast<signed char*>(&ecx));
    *eax46 = reinterpret_cast<signed char>(*eax46 + *reinterpret_cast<signed char*>(&eax46));
    ebp51->f80 = reinterpret_cast<signed char>(ebp52->f80 + *reinterpret_cast<signed char*>(&ecx));
    *reinterpret_cast<signed char*>(ebx53 + 0x525153d2) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx54 + 0x525153d2) + *reinterpret_cast<signed char*>(&ecx));
}

void fun_41abd5() {
}

void fun_41abe5() {
}

void fun_430d8c() {
}

void fun_430ebb(int32_t ecx) {
}

void fun_430ee6() {
}

void fun_430f1b(int32_t ecx) {
}

void fun_430f48() {
}

void fun_4310d2() {
}

void fun_4312c9() {
}

void fun_431a89() {
}

void fun_449dcc() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    signed char* eax22;
    signed char* eax23;
    signed char al24;
    signed char* eax25;
    signed char* eax26;
    signed char al27;
    signed char* eax28;
    signed char* eax29;
    signed char al30;
    signed char* eax31;
    signed char* eax32;
    signed char al33;
    signed char* eax34;
    signed char* eax35;
    signed char al36;
    signed char* eax37;
    signed char* eax38;
    signed char al39;
    signed char* eax40;
    signed char* eax41;
    signed char al42;
    signed char* eax43;
    signed char* eax44;
    signed char al45;
    signed char* eax46;
    signed char* eax47;
    signed char al48;
    signed char* eax49;
    signed char* eax50;
    signed char al51;
    signed char* eax52;
    signed char* eax53;
    signed char al54;
    signed char* eax55;
    signed char* eax56;
    signed char al57;
    signed char* eax58;
    signed char* eax59;
    signed char al60;
    signed char* eax61;
    signed char* eax62;
    signed char al63;
    signed char* eax64;
    signed char* eax65;
    signed char al66;
    signed char* eax67;
    signed char* eax68;
    signed char al69;
    signed char* eax70;
    signed char* eax71;
    signed char al72;
    signed char* eax73;
    signed char* eax74;
    signed char al75;
    signed char* eax76;
    signed char* eax77;
    signed char al78;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    *eax22 = reinterpret_cast<signed char>(*eax23 + al24);
    *eax25 = reinterpret_cast<signed char>(*eax26 + al27);
    *eax28 = reinterpret_cast<signed char>(*eax29 + al30);
    *eax31 = reinterpret_cast<signed char>(*eax32 + al33);
    *eax34 = reinterpret_cast<signed char>(*eax35 + al36);
    *eax37 = reinterpret_cast<signed char>(*eax38 + al39);
    *eax40 = reinterpret_cast<signed char>(*eax41 + al42);
    *eax43 = reinterpret_cast<signed char>(*eax44 + al45);
    *eax46 = reinterpret_cast<signed char>(*eax47 + al48);
    *eax49 = reinterpret_cast<signed char>(*eax50 + al51);
    *eax52 = reinterpret_cast<signed char>(*eax53 + al54);
    *eax55 = reinterpret_cast<signed char>(*eax56 + al57);
    *eax58 = reinterpret_cast<signed char>(*eax59 + al60);
    *eax61 = reinterpret_cast<signed char>(*eax62 + al63);
    *eax64 = reinterpret_cast<signed char>(*eax65 + al66);
    *eax67 = reinterpret_cast<signed char>(*eax68 + al69);
    *eax70 = reinterpret_cast<signed char>(*eax71 + al72);
    *eax73 = reinterpret_cast<signed char>(*eax74 + al75);
    *eax76 = reinterpret_cast<signed char>(*eax77 + al78);
}

void fun_431b56() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
}

void fun_431e23() {
}

void fun_4320c5() {
}

struct s1168 {
    signed char[81] pad81;
    signed char f51;
};

struct s1169 {
    signed char[81] pad81;
    signed char f51;
};

void fun_432255() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    struct s1168* ebx16;
    struct s1169* ebx17;
    signed char dl18;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    ebx16->f51 = reinterpret_cast<signed char>(ebx17->f51 + dl18);
}

void fun_432315() {
}

void fun_432887() {
}

void fun_432f1a() {
}

void fun_432fd9() {
}

void fun_431b77() {
}

void** fun_4338e0(void** ecx) {
    int1_t zf2;
    void** ebx3;
    void** eax4;

    zf2 = g4669dc == 0;
    if (zf2) {
        fun_42ce70(ecx, ebx3);
        eax4 = fun_43c290(ecx, ebx3);
        g4669dc = reinterpret_cast<void**>(1);
    }
    return eax4;
}

void fun_43396c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_4340e2() {
}

void fun_43417b(int32_t ecx) {
}

void fun_43446e() {
}

void** fun_434629() {
    void** eax1;

    eax1 = g60ae74;
    return eax1;
}

void fun_4346c5() {
}

void fun_43d311() {
}

void fun_434886() {
}

struct s1170 {
    signed char[81] pad81;
    signed char f51;
};

struct s1171 {
    signed char[81] pad81;
    signed char f51;
};

void fun_434c37(int32_t a1, int32_t a2) {
    signed char* eax3;
    signed char* eax4;
    signed char al5;
    signed char* eax6;
    signed char* eax7;
    signed char al8;
    signed char* eax9;
    signed char* eax10;
    signed char al11;
    signed char* eax12;
    signed char* eax13;
    signed char al14;
    struct s1170* ebx15;
    struct s1171* ebx16;
    signed char dl17;
    void** ecx18;
    uint32_t ecx19;
    struct s29* esi20;
    void*** edi21;
    uint32_t eax22;
    uint32_t ecx23;
    int1_t zf24;
    int1_t zf25;
    void** ecx26;

    *eax3 = reinterpret_cast<signed char>(*eax4 + al5);
    *eax6 = reinterpret_cast<signed char>(*eax7 + al8);
    *eax9 = reinterpret_cast<signed char>(*eax10 + al11);
    *eax12 = reinterpret_cast<signed char>(*eax13 + al14);
    ebx15->f51 = reinterpret_cast<signed char>(ebx16->f51 + dl17);
    ecx18 = g4775d0;
    ecx19 = reinterpret_cast<unsigned char>(ecx18) * reinterpret_cast<unsigned char>(g4775d4);
    esi20 = g5f27a4;
    edi21 = g5f27a0;
    eax22 = ecx19;
    ecx23 = ecx19 >> 2;
    zf24 = ecx23 == 0;
    do {
        if (!ecx23) 
            break;
        --ecx23;
        *edi21 = esi20->f0;
        edi21 = edi21 + 4;
        esi20 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(esi20) + 4);
    } while (!zf24);
    *reinterpret_cast<unsigned char*>(&ecx23) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax22) & 3);
    zf25 = *reinterpret_cast<unsigned char*>(&ecx23) == 0;
    do {
        if (!ecx23) 
            break;
        --ecx23;
        *edi21 = esi20->f0;
        ++edi21;
        esi20 = reinterpret_cast<struct s29*>(&esi20->pad16384);
    } while (!zf25);
    ecx26 = g4775d4;
    fun_433970(ecx26);
    goto a2;
}

void fun_434c93() {
}

void fun_434e96() {
}

void** fun_4351ba(int32_t ecx) {
    void** eax2;
    void** eax3;
    int32_t v4;
    int32_t esi5;
    int32_t ebx6;
    void** ecx7;
    void** ebp8;
    void** edi9;

    eax2 = eax3;
    v4 = esi5;
    if (ebx6 >= 0) {
        ecx7 = g60afc4;
        fun_433a50(ecx7, ebp8, edi9, *reinterpret_cast<signed char*>(&v4));
        eax2 = fun_4350f0(0xffffffff);
    }
    return eax2;
}

void** fun_43533a(void** ecx) {
    void** eax2;
    void** edx3;
    void** edx4;
    int1_t zf5;
    uint32_t eax6;
    void** eax7;

    eax2 = fun_434f50(ecx);
    edx3 = g60aff4;
    edx4 = edx3 - 1;
    g60aff4 = edx4;
    if (!edx4 || (zf5 = g60aff0 == 0, !zf5)) {
        g60afe0 = reinterpret_cast<void**>(0xffffffff);
        g60aff0 = reinterpret_cast<void**>(0);
        g60aff4 = reinterpret_cast<void**>(10);
        return eax2;
    } else {
        eax6 = reinterpret_cast<unsigned char>(edx4) & 31;
        *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax6) < reinterpret_cast<int32_t>(20));
        eax7 = reinterpret_cast<void**>(eax6 & 0xff);
        g4775a0 = eax7;
        return eax7;
    }
}

void fun_434da8() {
}

void fun_435831() {
}

void fun_434d28() {
}

void** fun_435ed5(int32_t ecx) {
    void** eax2;

    g60afe0 = reinterpret_cast<void**>(0);
    g60aff0 = reinterpret_cast<void**>(0);
    g60af64 = reinterpret_cast<void**>(1);
    g60af54 = reinterpret_cast<void**>(0xffffffff);
    g60af2c = reinterpret_cast<void**>(0xffffffff);
    g60af44 = reinterpret_cast<void**>(0xffffffff);
    g60afa8 = reinterpret_cast<void**>(0xffffffff);
    g60afbc = reinterpret_cast<void**>(0xffffffff);
    g60afd4 = reinterpret_cast<void**>(35);
    eax2 = fun_434ea0(1);
    return eax2;
}

void fun_436328() {
}

void** fun_4352d5(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    void** eax11;
    void** edx12;
    void** edx13;
    void** edx14;

    eax11 = fun_434f50(ecx);
    edx12 = g60aff4;
    edx13 = edx12 - 1;
    g60aff4 = edx13;
    if (!edx13) {
        fun_436ab0(ecx);
        eax11 = fun_417a80(ecx, edx14, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }
    return eax11;
}

void fun_437425() {
}

struct s1172 {
    int32_t f0;
    int32_t f4;
    signed char[8] pad16;
    int32_t f10;
    int32_t f14;
};

struct s1173 {
    signed char[32] pad32;
    int32_t f20;
};

struct s1174 {
    signed char[12] pad12;
    int32_t fc;
};

struct s1175 {
    signed char[24] pad24;
    struct s1172* f18;
};

struct s1176 {
    signed char[20] pad20;
    struct s1172* f14;
};

struct s1177 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1178 {
    signed char[28] pad28;
    struct s1172* f1c;
};

void fun_4374b4() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    struct s1172* edx19;
    struct s1173* eax20;
    struct s1174* eax21;
    struct s1175* eax22;
    struct s1176* eax23;
    struct s1177* eax24;
    int32_t eax25;
    struct s1178* eax26;
    int32_t ebx27;
    int32_t eax28;
    int32_t* eax29;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    edx19 = reinterpret_cast<struct s1172*>(&eax20->f20);
    eax21->fc = 1;
    eax22->f18 = edx19;
    eax23->f14 = edx19;
    eax24->f8 = eax25;
    eax26->f1c = edx19;
    ebx27 = eax28 + 4;
    edx19->f4 = 0;
    edx19->f10 = ebx27;
    edx19->f14 = ebx27;
    edx19->f0 = *eax29 - 32;
    return;
}

void fun_4376d1() {
}

void fun_437906() {
}

uint32_t fun_437950(int32_t ecx) {
    void** ecx2;
    void** eax3;
    uint32_t edx4;

    ecx2 = g60aff8;
    eax3 = *reinterpret_cast<void***>(ecx2 + 20);
    edx4 = 0;
    while (eax3 != ecx2 + 4) {
        if (!*reinterpret_cast<void***>(eax3 + 4) || reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax3 + 8)) >= reinterpret_cast<signed char>(100)) {
            edx4 = edx4 + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3));
        }
        eax3 = *reinterpret_cast<void***>(eax3 + 16);
    }
    g60aff8 = ecx2;
    return edx4;
}

int32_t fun_4379cd() {
    return 1;
}

void fun_437bdb(int32_t ecx) {
}

void** fun_437d62(void** ecx) {
    void** eax2;
    void** eax3;
    void** edx4;
    void** v5;
    void** v6;

    eax2 = eax3;
    if (eax2 && (edx4 = *reinterpret_cast<void***>(eax2), v5 = eax2, eax2 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx4 + 20)(v5, 0, 0, 0, 0x1000400, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 100, 100)), g60b3a0 = eax2, !!eax2)) {
        v6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax2) & 0xfff);
        eax2 = fun_437a90(ecx, "EraseSurface: blt returned %d", v6, v5, 0, 0, 0, 0x1000400, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 100, ecx, "EraseSurface: blt returned %d", v6, v5, 0, 0, 0, 0x1000400, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 100);
    }
    return eax2;
}

void** fun_437dc0(void** ecx) {
    void* esp2;
    int1_t zf3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void* esp12;
    void** v13;
    void** ebx14;
    void** eax15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void* esp23;
    void** eax24;
    void** v25;
    void** ebx26;
    void** eax27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** eax35;
    void** v36;
    void** v37;
    void** v38;
    void** v39;
    void** v40;
    void** edx41;
    void** v42;
    void** ebx43;
    void** v44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    void* esp50;
    void** eax51;
    void** v52;
    void** eax53;
    void** eax54;
    void** edx55;
    void** ebx56;
    void** v57;
    void** v58;
    void** v59;
    void** v60;
    void** eax61;
    void** v62;
    void** ebx63;
    void** eax64;
    void** v65;
    void** v66;
    void** v67;
    void** v68;
    void** edx69;
    void** v70;
    void** v71;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x258);
    zf3 = reinterpret_cast<int1_t>(g4775e0 == 1);
    if (zf3) {
        fun_437a90(ecx, "EraseVRAM: lpDDSBack", v4, v5, v6, v7, v8, v9, v10);
        eax11 = g60b26c;
        esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 + 4 + 4);
        ecx = reinterpret_cast<void**>(0);
        if (eax11 && (v13 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp12) + 0xc8), ebx14 = *reinterpret_cast<void***>(eax11), eax15 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx14 + 20)(eax11, 0, 0, 0, 0x1000400, v13)), esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4), g60b3a0 = eax15, !!eax15)) {
            fun_437a90(0, "EraseSurface: blt returned %d", reinterpret_cast<unsigned char>(eax15) & 0xfff, eax11, 0, 0, 0, 0x1000400, v13);
            esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 - 4 + 4 + 8);
        }
        fun_437a90(0, "EraseVRAM: lpDDSOff", v16, v17, v18, v19, v20, v21, v22);
        esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 + 4 + 4);
        eax24 = g60b270;
        if (eax24 && (v25 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp23) + 100), ebx26 = *reinterpret_cast<void***>(eax24), eax27 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx26 + 20)(eax24, 0, 0, 0, 0x1000400, v25)), esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4), g60b3a0 = eax27, !!eax27)) {
            fun_437a90(0, "EraseSurface: blt returned %d", reinterpret_cast<unsigned char>(eax27) & 0xfff, eax24, 0, 0, 0, 0x1000400, v25);
            esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 + 4 + 8);
        }
        fun_437a90(0, "EraseVRAM: lpDDSPage4", v28, v29, v30, v31, v32, v33, v34);
        eax35 = g60b278;
        if (!eax35) 
            goto addr_438018_7;
        v36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp23) - 4 - 4 + 4 + 4);
        v37 = reinterpret_cast<void**>(0x1000400);
        v38 = reinterpret_cast<void**>(0);
        v39 = reinterpret_cast<void**>(0);
        v40 = reinterpret_cast<void**>(0);
        edx41 = *reinterpret_cast<void***>(eax35);
        v42 = eax35;
        eax35 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx41 + 20)(v42, 0, 0, 0, 0x1000400, v36, 100));
        g60b3a0 = eax35;
        if (!eax35) 
            goto addr_438018_7;
        goto addr_438005_10;
    }
    ebx43 = reinterpret_cast<void**>(0);
    do {
        fun_437a90(ecx, "EraseVRAM: back %d", ebx43, v44, v45, v46, v47, v48, v49);
        esp50 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 + 4 + 8);
        eax51 = g60b26c;
        if (eax51 && (v52 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp50) + 0x1f4), ecx = *reinterpret_cast<void***>(eax51), eax53 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ecx + 20)(eax51, 0, 0, 0, 0x1000400, v52)), esp50 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp50) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4), g60b3a0 = eax53, !!eax53)) {
            fun_437a90(ecx, "EraseSurface: blt returned %d", reinterpret_cast<unsigned char>(eax53) & 0xfff, eax51, 0, 0, 0, 0x1000400, v52);
            esp50 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp50) - 4 - 4 - 4 + 4 + 8);
        }
        v36 = reinterpret_cast<void**>(1);
        eax54 = g60b268;
        v37 = reinterpret_cast<void**>(0);
        edx55 = *reinterpret_cast<void***>(eax54);
        v38 = eax54;
        ++ebx43;
        *reinterpret_cast<void***>(edx55 + 44)(v38, 0, 1);
        esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp50) - 4 - 4 - 4 - 4 + 4);
    } while (reinterpret_cast<signed char>(ebx43) < reinterpret_cast<signed char>(4));
    ebx56 = g4775c8;
    if (ebx56) 
        goto addr_437fbb_16;
    fun_437a90(ecx, "EraseVRAM: lpDDSOff", v38, 0, 1, v57, v58, v59, v60);
    ecx = reinterpret_cast<void**>(100);
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 + 4 + 4);
    eax61 = g60b270;
    if (!eax61) 
        goto addr_437fbb_16;
    v62 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp2) + 0x12c);
    ebx63 = *reinterpret_cast<void***>(eax61);
    eax64 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx63 + 20)(eax61, 0, 0, 0, 0x1000400, v62, v38, 0, 1));
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    g60b3a0 = eax64;
    if (eax64) 
        goto addr_437fa8_19;
    addr_437fbb_16:
    fun_437a90(ecx, "EraseVRAM: lpDDSPage4", v38, 0, 1, v65, v66, v67, v68);
    eax35 = g60b278;
    if (!eax35 || (v39 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(reinterpret_cast<int32_t>(esp2) - 4 - 4 + 4 + 4) + 0x190), v40 = reinterpret_cast<void**>(0x1000400), v42 = reinterpret_cast<void**>(0), edx69 = *reinterpret_cast<void***>(eax35), eax35 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx69 + 20)(eax35, 0, 0, 0, 0x1000400, v39, v38, 0, 1)), g60b3a0 = eax35, eax35 == 0)) {
        addr_438018_7:
        return eax35;
    } else {
        addr_438005_10:
        v70 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax35) & 0xfff);
        eax35 = fun_437a90(ecx, "EraseSurface: blt returned %d", v70, v42, v40, v39, v38, v37, v36, ecx, "EraseSurface: blt returned %d", v70, v42, v40, v39, v38, v37, v36);
        goto addr_438018_7;
    }
    addr_437fa8_19:
    v71 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax64) & 0xfff);
    fun_437a90(100, "EraseSurface: blt returned %d", v71, eax61, 0, 0, 0, 0x1000400, v62, 100, "EraseSurface: blt returned %d", v71, eax61, 0, 0, 0, 0x1000400, v62);
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 + 4 + 8);
    goto addr_437fbb_16;
}

void fun_438025() {
}

void fun_4386fb(int32_t ecx) {
}

int32_t fun_438b22() {
    int32_t eax1;

    g491b70 = 1;
    g60b260 = 1;
    return eax1;
}

uint32_t fun_438dce() {
    int1_t zf1;
    int1_t zf2;
    void** edx3;
    uint32_t eax4;
    uint32_t eax5;

    zf1 = reinterpret_cast<int1_t>(g4775e0 == 1);
    if (!zf1) {
        zf2 = g60b434 == 0;
        if (!zf2) {
            g4775e4 = reinterpret_cast<void**>(1);
        } else {
            edx3 = g482a7c;
            eax4 = reinterpret_cast<uint32_t>(edx3 + reinterpret_cast<unsigned char>(edx3) * 8) * 4 - reinterpret_cast<unsigned char>(edx3);
            *reinterpret_cast<int32_t*>(eax4 * 8 + 0x4825f0) = reinterpret_cast<int32_t>("Unsupported Mode");
            return eax4;
        }
    } else {
        g4775e4 = reinterpret_cast<void**>(0);
    }
    g491b70 = 1;
    g60b260 = 1;
    return eax5;
}

void fun_43c598() {
}

void fun_438e35() {
}

int32_t UnhookWindowsHookEx = 0x220d9e;

void fun_439280(int32_t ecx) {
    int1_t zf2;
    int1_t zf3;
    int32_t eax4;
    int32_t eax5;
    void** esi6;
    int32_t eax7;
    void** edi8;
    void** eax9;
    int32_t eax10;

    zf2 = g4775cc == 0;
    if (zf2 && (zf3 = eax4 == g60b00c, !zf3)) {
        if (!eax5) {
            esi6 = g60b454;
            UnhookWindowsHookEx(esi6);
        } else {
            eax7 = reinterpret_cast<int32_t>(GetCurrentThreadId());
            edi8 = g60b438;
            eax9 = reinterpret_cast<void**>(SetWindowsHookExA(2, 0x438e70, edi8, eax7));
            g60b454 = eax9;
        }
        g60b00c = eax10;
    }
    return;
}

int32_t PostQuitMessage = 0x220cac;

int32_t g60b3ac = 0;

int32_t g60b3b0 = 0;

int32_t ValidateRect = 0x220dc4;

int32_t g60b894 = 0;

int32_t g60b43c = 0;

int32_t DefWindowProcA = 0x220afe;

int32_t fun_4392da(void** ecx, int32_t a2, uint32_t a3, int32_t a4, uint32_t a5) {
    uint32_t edi6;
    void** ebp7;
    void** ebp8;
    void** edx9;
    uint32_t eax10;
    void** edi11;
    int1_t zf12;
    int1_t zf13;
    void** edi14;
    int32_t eax15;
    int32_t eax16;
    int32_t eax17;
    int32_t eax18;
    int32_t eax19;
    int32_t eax20;
    int32_t eax21;
    int32_t eax22;
    int32_t eax23;
    int32_t eax24;
    int32_t ebp25;
    int1_t zf26;
    int32_t eax27;
    void** edx28;
    void** eax29;
    int1_t zf30;
    int1_t zf31;
    int1_t zf32;
    int32_t ebp33;
    int1_t zf34;
    int32_t eax35;
    int32_t ebx36;
    int1_t zf37;
    int1_t zf38;
    int32_t edx39;
    void** edx40;
    void** edx41;

    edi6 = a5;
    if (a3 < 15) {
        if (a3 < 3) {
            if (a3 == 2) {
                fun_437c30(ecx, ebp7);
                fun_4317d0(ecx);
                ebp8 = g60b264;
                if (ebp8) {
                    edx9 = *reinterpret_cast<void***>(ebp8);
                    *reinterpret_cast<void***>(edx9 + 8)(ebp8);
                }
                g4597d8 = 0;
                PostQuitMessage(0);
            }
        } else {
            if (a3 <= 3 || a3 == 5) {
                g60b3ac = *reinterpret_cast<int16_t*>(&edi6);
                eax10 = edi6 >> 16 & 0xffff;
                g60b3b0 = *reinterpret_cast<int16_t*>(&eax10);
                GetWindowRect(a2, 0x60b3fc);
                GetClientRect(a2, 0x60b3dc, a2, 0x60b3fc);
                GetClientRect(a2, 0x60b3ec, a2, 0x60b3dc, a2, 0x60b3fc);
                MapWindowPoints(a2, 0, 0x60b3ec, 2, a2, 0x60b3ec, a2, 0x60b3dc, a2, 0x60b3fc);
            }
        }
    } else {
        if (a3 <= 15) {
            ValidateRect(a2, 0);
        } else {
            if (a3 < 32) {
                if (a3 == 28) {
                    if (!a4) {
                        g60b110 = 1;
                        fun_43ca60(ecx, ebp7, edi11);
                        fun_430ef0(ecx);
                        zf12 = g4775cc == 0;
                        if (zf12 && (zf13 = g60b00c == 0, !zf13)) {
                            edi14 = g60b454;
                            UnhookWindowsHookEx(edi14);
                            g60b00c = 0;
                        }
                    } else {
                        SetCursor(0);
                        g60b110 = 0;
                        fun_43ca60(ecx, 0, ebp7);
                        fun_430f20(ecx, 0);
                        eax15 = g482a10;
                        *reinterpret_cast<int32_t*>(eax15 * 4 + 0x481f30) = 0;
                        eax16 = g4829d4;
                        *reinterpret_cast<int32_t*>(eax16 * 4 + 0x481f30) = 0;
                        eax17 = g4829e8;
                        *reinterpret_cast<int32_t*>(eax17 * 4 + 0x481f30) = 0;
                        eax18 = g482a08;
                        *reinterpret_cast<int32_t*>(eax18 * 4 + 0x481f30) = 0;
                        eax19 = g482a14;
                        *reinterpret_cast<int32_t*>(eax19 * 4 + 0x481f30) = 0;
                        eax20 = g4829e4;
                        *reinterpret_cast<int32_t*>(eax20 * 4 + 0x481f30) = 0;
                        eax21 = g4829d8;
                        *reinterpret_cast<int32_t*>(eax21 * 4 + 0x481f30) = 0;
                        eax22 = g482a0c;
                        *reinterpret_cast<int32_t*>(eax22 * 4 + 0x481f30) = 0;
                        eax23 = g4829dc;
                        *reinterpret_cast<int32_t*>(eax23 * 4 + 0x481f30) = 0;
                        eax24 = g4829cc;
                        ebp25 = g4775cc;
                        g4597e0 = 1;
                        *reinterpret_cast<int32_t*>(eax24 * 4 + 0x481f30) = 0;
                        if (!ebp25 && (zf26 = 1 == g60b00c, !zf26)) {
                            eax27 = reinterpret_cast<int32_t>(GetCurrentThreadId(0));
                            edx28 = g60b438;
                            eax29 = reinterpret_cast<void**>(SetWindowsHookExA(2, 0x438e70, edx28, eax27, 0));
                            g60b454 = eax29;
                            g60b00c = 1;
                        }
                    }
                    zf30 = g60b450 == 0;
                    if (!zf30 && ((zf31 = g60b264 == 0, !zf31) && (zf32 = g60b27c == 0, !zf32))) {
                        fun_42ce70(ecx, ebp7);
                        fun_43c290(ecx, ebp7);
                    }
                    return 0;
                }
            } else {
                if (a3 <= 32) {
                    ebp33 = g60b890;
                    if (ebp33 || (zf34 = g60b894 == 0, !zf34)) {
                        eax35 = reinterpret_cast<int32_t>(LoadCursorA(0, 0x7f00));
                        SetCursor(eax35, 0, 0x7f00);
                    } else {
                        SetCursor();
                        goto ebx36;
                    }
                } else {
                    if (a3 >= 70) {
                        if (a3 <= 70) {
                            zf37 = reinterpret_cast<int1_t>(g4775e0 == 1);
                            if (zf37 && (zf38 = g60b43c == 0, !zf38)) {
                                *reinterpret_cast<unsigned char*>(edi6 + 24) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edi6 + 24) | 3);
                            }
                            return 0;
                        } else {
                            if (a3 == 0x111) {
                                edx39 = a4;
                                if (*reinterpret_cast<uint16_t*>(&edx39) >= 0x9c43) {
                                    if (*reinterpret_cast<uint16_t*>(&edx39) <= 0x9c43) {
                                        fun_41a690(ecx);
                                    } else {
                                        if (*reinterpret_cast<uint16_t*>(&edx39) == 0x9c4b) {
                                            fun_437c30(ecx, ebp7);
                                            fun_4317d0(ecx);
                                            edx40 = g60b264;
                                            if (edx40) {
                                                edx41 = *reinterpret_cast<void***>(edx40);
                                                *reinterpret_cast<void***>(edx41 + 8)(edx40);
                                            }
                                            DestroyWindow(a2);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    DefWindowProcA();
    goto ebp7;
}

int32_t fun_439750(struct s898* a1) {
    void** ecx2;
    struct s898* edx3;
    int32_t eax4;

    ecx2 = g60b254;
    edx3 = a1;
    if (reinterpret_cast<signed char>(ecx2) >= reinterpret_cast<signed char>(20)) {
        addr_4397a3_2:
        g60b254 = ecx2;
        return 1;
    } else {
        if (edx3->f54 == 8) {
            eax4 = 0;
            do {
                if (*reinterpret_cast<int32_t*>(eax4 + 0x60b114) != edx3->fc) 
                    continue;
                if (*reinterpret_cast<int32_t*>(eax4 + 0x60b118) == edx3->f8) 
                    break;
                eax4 = eax4 + 8;
            } while (eax4 < 0xa0);
            goto addr_439772_8;
        } else {
            goto addr_4397a3_2;
        }
    }
    goto addr_4397a3_2;
    addr_439772_8:
    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx2) * 8 + 0x60b114) = edx3->fc;
    ++ecx2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx2) * 8 + 0x60b110) = edx3->f8;
    goto addr_4397a3_2;
}

void fun_4397b4(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22) {
    void** v23;
    void** v24;
    void** ebx25;
    void** v26;
    void** v27;
    void** edx28;
    void** v29;
    void** esi30;
    void** v31;
    void** edi32;
    void** v33;
    void** ebp34;
    void* esi35;
    void* eax36;
    void** edx37;
    void** ebx38;
    void** ebp39;
    void** edi40;
    uint32_t ecx41;
    uint32_t eax42;
    void** eax43;
    void** ebx44;
    void** edi45;
    void** esi46;
    void** ecx47;
    void** edx48;
    uint32_t eax49;
    uint32_t edx50;
    void** eax51;

    v23 = reinterpret_cast<void**>(__return_address());
    v24 = ebx25;
    v26 = ecx;
    v27 = edx28;
    v29 = esi30;
    v31 = edi32;
    v33 = ebp34;
    esi35 = eax36;
    edx37 = g60b254;
    ebx38 = reinterpret_cast<void**>(0);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx37) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx37 == 0))) {
        ebp39 = g4775d4;
        edi40 = g4775d0;
        ecx41 = reinterpret_cast<unsigned char>(edx37) * 8;
        eax42 = 0;
        do {
            if (edi40 != *reinterpret_cast<void***>(eax42 + 0x60b1b4)) 
                continue;
            if (ebp39 == *reinterpret_cast<void***>(eax42 + 0x60b1b8)) 
                break;
            eax42 = eax42 + 8;
            ++ebx38;
        } while (reinterpret_cast<int32_t>(eax42) < reinterpret_cast<int32_t>(ecx41));
        goto addr_4397de_6;
    }
    addr_439805_8:
    eax43 = g60b254;
    if (ebx38 == eax43 || ((ebx44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx38) + reinterpret_cast<uint32_t>(esi35)), reinterpret_cast<signed char>(ebx44) < reinterpret_cast<signed char>(0)) || reinterpret_cast<signed char>(ebx44) >= reinterpret_cast<signed char>(eax43))) {
        addr_4398d8_9:
        return;
    } else {
        edi45 = g4775e0;
        esi46 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ebx44) * 8 + 0x60b1b4);
        ecx47 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ebx44) * 8 + 0x60b1b8);
        if (!reinterpret_cast<int1_t>(edi45 == 1)) {
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax43) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax43 == 0))) {
                edx48 = g60b254;
                eax49 = 0;
                edx50 = reinterpret_cast<unsigned char>(edx48) * 8;
                do {
                    if (*reinterpret_cast<void***>(eax49 + 0x60b1b4) == 0x140) 
                        goto addr_439875_14;
                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax49 + 0x60b1b4) == 0x280)) 
                        continue;
                    addr_439875_14:
                    if (esi46 != *reinterpret_cast<void***>(eax49 + 0x60b1b4)) 
                        continue;
                    if (ecx47 == *reinterpret_cast<void***>(eax49 + 0x60b1b8)) 
                        break;
                    eax49 = eax49 + 8;
                } while (reinterpret_cast<int32_t>(eax49) < reinterpret_cast<int32_t>(edx50));
                goto addr_43984e_18;
            } else {
                goto addr_43988c_20;
            }
        } else {
            eax51 = edi45;
            goto addr_43989d_22;
        }
    }
    eax51 = reinterpret_cast<void**>(1);
    addr_43989d_22:
    if (eax51) {
        g4775d8 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ebx44) * 8 + 0x60b1b4);
        g4775dc = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ebx44) * 8 + 0x60b1b8);
        g491b70 = 1;
        g60b260 = 1;
        fun_42de60(v33, v31, v29, v27, v26, v24, v23, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
        goto addr_4398d8_9;
    }
    addr_43984e_18:
    addr_43988c_20:
    fun_437a90(ecx47, "IsModeSupported - no match for %d x %d", esi46, ecx47, v33, v31, v29, v27, v26);
    eax51 = reinterpret_cast<void**>(0);
    goto addr_43989d_22;
    addr_4397de_6:
    goto addr_439805_8;
}

void fun_42de79() {
}

void fun_439a16() {
}

int32_t g60b258 = 0;

void** fun_439b3e() {
    int1_t zf1;
    void** eax2;
    int32_t eax3;

    zf1 = g4775e0 == 0;
    if (!zf1) {
        eax2 = g60b3c0;
        return eax2;
    } else {
        eax3 = g60b258;
        return *reinterpret_cast<void***>(eax3 * 8 + 0x60b1b8);
    }
}

void** fun_439b5c() {
    int1_t zf1;
    void** eax2;
    int32_t eax3;

    zf1 = g4775e0 == 0;
    if (!zf1) {
        eax2 = g60b3bc;
        return eax2;
    } else {
        eax3 = g60b258;
        return *reinterpret_cast<void***>(eax3 * 8 + 0x60b1b4);
    }
}

void fun_439b7c() {
}

int32_t fun_439d28(void** ecx) {
    void** edx2;
    int32_t eax3;
    void** v4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** v11;
    void** v12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** v29;
    void** v30;
    void** v31;
    void** eax32;
    void* esp33;
    void** v34;
    void*** esp35;
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
    void** v52;
    void** v53;
    void** v54;
    void** v55;
    void** v56;
    void** eax57;
    void** ebx58;
    void** ecx59;
    void** v60;
    void** v61;
    void** esi62;
    void* esp63;
    void** v64;
    void** v65;
    void** v66;
    void** v67;

    edx2 = g60b264;
    if (edx2) {
        addr_439dd6_2:
        eax3 = 1;
    } else {
        eax32 = fun_41d410(ecx, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31);
        esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x200 - 4 + 4);
        if (!eax32) {
            v34 = edx2;
            esp35 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp33) - 4 - 4 - 4);
            v36 = edx2;
        } else {
            v34 = edx2;
            esp35 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp33) - 4 - 4 - 4);
            v36 = reinterpret_cast<void**>(2);
        }
        eax57 = fun_449dc0(v36, 0x60b264, v34, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56);
        g60b3a0 = eax57;
        ebx58 = g60b264;
        ecx59 = g60b3a0;
        fun_437a90(ecx59, "DirectDrawCreate %d %p", ecx59, ebx58, v36, 0x60b264, v34, v60, v61);
        esi62 = g60b3a0;
        if (!esi62) 
            goto addr_439dd6_2; else 
            goto addr_439d98_7;
    }
    addr_439ddb_8:
    return eax3;
    addr_439d98_7:
    esp63 = reinterpret_cast<void*>(esp35 - 4 + 4 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4);
    g60b430 = reinterpret_cast<void**>(1);
    wsprintfA(reinterpret_cast<int32_t>(esp63) + 8, "DirectDrawCreate %d", reinterpret_cast<unsigned char>(esi62) & 0xfff, v36, 0x60b264, v34);
    fun_437a90(ecx59, reinterpret_cast<int32_t>(esp63) - 4 - 4 + 4 + 12, v36, 0x60b264, v34, v64, v65, v66, v67);
    g60b430 = reinterpret_cast<void**>(0);
    eax3 = 0;
    goto addr_439ddb_8;
}

void fun_439de8() {
}

void** fun_43a174(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** v6;
    void** v7;
    void** ebx8;
    void** v9;
    void** v10;
    void** edx11;
    void** v12;
    void** edi13;
    void** ecx14;
    int32_t ebx15;
    void** eax16;

    v6 = reinterpret_cast<void**>(__return_address());
    v7 = ebx8;
    v9 = ecx;
    v10 = edx11;
    v12 = edi13;
    ecx14 = reinterpret_cast<void**>(1);
    ebx15 = 4;
    g60b010 = reinterpret_cast<int32_t>("DOOM95.EXE");
    do {
        eax16 = fun_444434(ecx14, v12, v10, v9, v7, v6, a2, a3, a4, a5);
        *reinterpret_cast<void***>(ebx15 + 0x60b010) = eax16;
        if (!eax16) 
            break;
        ebx15 = ebx15 + 4;
        ++ecx14;
        eax16 = reinterpret_cast<void**>(0);
    } while (ebx15 < 0x100);
    goto addr_43a1d1_4;
    addr_43a1ad_5:
    g4835f4 = ecx14;
    g4835f8 = reinterpret_cast<void**>(0x60b010);
    return eax16;
    addr_43a1d1_4:
    goto addr_43a1ad_5;
}

void fun_43afda() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
}

int32_t BeginPaint = 0x220a84;

int32_t EndPaint = 0x220b44;

int32_t SetTextColor = 0x220a28;

int32_t SetBkColor = 0x220a1a;

int32_t g60b6e4 = 0;

uint32_t g47760c = 32;

uint32_t g60b6ec = 0;

uint32_t g60b6e8 = 0;

int32_t fun_43b1ce(void** ecx, uint32_t a2, uint32_t a3, uint32_t a4, void** a5) {
    void* esp6;
    int32_t eax7;
    int32_t ebp8;
    int32_t edx9;
    int32_t ebx10;
    int32_t ebx11;
    uint32_t eax12;
    int32_t eax13;
    int32_t eax14;
    void* v15;
    int32_t v16;
    int32_t v17;
    int32_t eax18;
    int32_t ecx19;
    int32_t eax20;
    int32_t eax21;
    int32_t eax22;
    uint32_t ebx23;
    int32_t eax24;
    uint32_t eax25;
    int32_t eax26;
    int32_t edi27;
    void** ebp28;
    int32_t esi29;
    void** v30;
    void** v31;
    void** v32;
    void** v33;
    void** v34;
    void** v35;
    void** v36;
    int32_t edx37;
    int32_t ecx38;
    int32_t esi39;
    int32_t edi40;

    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 76);
    if (a3 < 0x133) {
        if (a3 < 2) {
            if (a3 == 1) {
                eax7 = fun_43b8d0(ecx);
            } else {
                DefWindowProcA(a2, a3, a4, a5);
                goto ebp8;
            }
        } else {
            if (a3 <= 2) {
                edx9 = g60b6f8;
                DeleteObject(edx9);
                goto ebx10;
            } else {
                if (a3 >= 12) {
                    if (a3 <= 12) {
                        InvalidateRect(a2, 0, 0);
                        goto addr_43b499_11;
                    } else {
                        if (a3 == 15) {
                            BeginPaint(a2, esp6);
                            fun_43afe0(0, 0, 0x84, 0, 0, 0xcc0020, a2, esp6);
                            EndPaint(a2, reinterpret_cast<int32_t>(esp6) - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 + 20 + 4, a2, esp6);
                            goto ebp8;
                        } else {
                            DefWindowProcA(a2, a3, a4, a5);
                            goto ebp8;
                        }
                    }
                }
            }
        }
    } else {
        if (a3 <= 0x133) 
            goto addr_43b3e8_16;
        if (a3 < 0x311) 
            goto addr_43b4ae_18; else 
            goto addr_43b205_19;
    }
    addr_43b529_20:
    return eax7;
    addr_43b4ae_18:
    if (a3 < 0x138) {
        addr_43b499_11:
        DefWindowProcA(a2, a3, a4, a5);
        goto ebp8;
    } else {
        if (a3 <= 0x138) {
            addr_43b3e8_16:
            ebx11 = 0;
            eax12 = reinterpret_cast<uint32_t>(GetWindowLongA(a5, 0xf4));
            esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 - 4 + 4);
            if (eax12 >= 0xc9) {
                if (eax12 <= 0xc9) {
                    eax13 = reinterpret_cast<int32_t>(GetStockObject(1, a5, 0xf4));
                    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 + 4);
                    ebx11 = eax13;
                } else {
                    if (eax12 == 0xca) {
                        eax14 = reinterpret_cast<int32_t>(GetStockObject(4, a5, 0xf4));
                        ebx11 = eax14;
                        SetTextColor(a4, 0xff00, 4, a5, 0xf4);
                        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 + 4 - 4 - 4 - 4 + 4);
                    }
                }
            }
        } else {
            if (a3 != 0x30f) {
                DefWindowProcA(a2, a3, a4, a5);
                goto ebp8;
            }
        }
    }
    if (ebx11) {
        v15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) + 64);
        GetObjectA(ebx11, 12, v15, a5, 0xf4);
        SetBkColor(a4, v16, ebx11, 12, v15, a5, 0xf4);
        goto v17;
    }
    addr_43b205_19:
    if (a3 <= 0x311) {
        if (a4 == a2) {
            addr_43b527_31:
            eax7 = 0;
            goto addr_43b529_20;
        } else {
            eax18 = reinterpret_cast<int32_t>(GetDC(a2));
            ecx19 = g60b6f8;
            if (ecx19) {
                eax20 = reinterpret_cast<int32_t>(SelectPalette(eax18, ecx19, 0, a2));
                eax21 = reinterpret_cast<int32_t>(RealizePalette(eax18, eax18, ecx19, 0, a2));
                if (eax21 != -1) {
                    InvalidateRect(a2, 0, 0, eax18, eax18, ecx19, 0, a2);
                }
                SelectPalette(eax18, eax20, 1, eax18, eax18, ecx19, 0, a2);
                RealizePalette(eax18, eax18, eax20, 1, eax18, eax18, ecx19, 0, a2);
            }
        }
    } else {
        if (a3 < 0x401) 
            goto addr_43b499_11;
        if (a3 <= 0x401) {
            if (!a4) {
                eax22 = g60b6e4;
                ebx23 = g47760c;
                eax24 = eax22 + 1;
                g60b6e4 = eax24;
                eax25 = (eax24 << 4) / ebx23;
                g60b6ec = eax25;
                g60b6e8 = eax25;
                if (eax25 > 16) {
                    g60b6e8 = 16;
                }
            } else {
                g47760c = a4;
            }
            eax26 = g60b6e4;
            return eax26;
        }
        if (a3 == 0x402) 
            goto addr_43b326_45; else 
            goto addr_43b225_46;
    }
    ReleaseDC(a2, eax18, a2);
    goto edi27;
    addr_43b326_45:
    if (a4 < 3) {
        if (!a4) {
            ebp28 = g60b6fc;
            SetWindowTextA(ebp28, a5);
            goto esi29;
        } else {
            return 0;
        }
    } else {
        if (a4 <= 3) {
            fun_437a90(ecx, a5, v30, v31, v32, v33, v34, v35, v36);
            return 1;
        } else {
            if (a4 == 4) {
                edx37 = g60b700;
                if (edx37) {
                    SendMessageA(edx37, 0xb1, 0xff, 0xff);
                    ecx38 = g60b700;
                    SendMessageA(ecx38, 0xc2, 0, a5, edx37, 0xb1, 0xff, 0xff);
                    esi39 = g60b700;
                    SendMessageA(esi39, 0xb1, 0xff, 0xff, ecx38, 0xc2, 0, a5, edx37, 0xb1, 0xff, 0xff);
                    edi40 = g60b700;
                    SendMessageA(edi40, 0xb7, 0, 0, esi39, 0xb1, 0xff, 0xff, ecx38, 0xc2, 0, a5, edx37, 0xb1, 0xff, 0xff);
                }
                return 1;
            } else {
                goto addr_43b527_31;
            }
        }
    }
    addr_43b225_46:
    goto addr_43b499_11;
}

void fun_43b5dd(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    void** v9;
    void** v10;
    void** esi11;
    void** v12;
    void** edi13;
    void** v14;
    void** ebp15;
    void** v16;
    void** ebx17;
    void** v18;
    void** edx19;
    void** v20;
    void** eax21;
    void** eax22;
    void** ebx23;
    int32_t edx24;
    void** eax25;
    void** v26;
    void** v27;
    void** eax28;
    void** v29;
    void*** eax30;
    void** v31;
    void** v32;
    void** eax33;
    void** eax34;
    void** edx35;
    void** ebp36;
    void*** esi37;
    void** edi38;
    void** ebx39;
    void** eax40;
    void** ecx41;
    int1_t zf42;
    int1_t zf43;
    void** esi44;
    void** eax45;
    void** edi46;
    void** ebx47;
    void** edx48;
    void** eax49;

    v8 = reinterpret_cast<void**>(__return_address());
    v9 = ecx;
    v10 = esi11;
    v12 = edi13;
    v14 = ebp15;
    v16 = ebx17;
    v18 = edx19;
    v20 = eax21;
    eax22 = reinterpret_cast<void**>(FindResourceA());
    ebx23 = eax22;
    if (!eax22) {
        eax25 = reinterpret_cast<void**>(FindResourceA(eax21, edx24, 10));
        ebx23 = eax25;
    }
    if (ebx23) {
        v26 = ebx23;
        v27 = eax21;
        eax28 = reinterpret_cast<void**>(LoadResource());
        v29 = eax28;
        eax30 = reinterpret_cast<void***>(LockResource());
        if (!ebx23) {
            goto 2;
        }
        v31 = ebx23;
        v32 = eax21;
        eax33 = reinterpret_cast<void**>(SizeofResource());
        if (!eax33) 
            goto addr_43b701_7;
        eax34 = fun_442e73(eax33, v32, v31, v29, v27, v26, v20, v18, 2, v16);
        edx35 = eax34;
        ebp36 = eax34;
        if (eax34) 
            goto addr_43b65c_9;
    }
    addr_43b701_7:
    goto v12;
    addr_43b65c_9:
    esi37 = eax30;
    edi38 = eax34;
    ebx39 = v32;
    eax40 = eax33;
    ecx41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax33) >> 2);
    zf42 = ecx41 == 0;
    do {
        if (!ecx41) 
            break;
        --ecx41;
        *reinterpret_cast<void***>(edi38) = *esi37;
        edi38 = edi38 + 4;
        esi37 = esi37 + 4;
    } while (!zf42);
    ecx41 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(&eax40) & 3);
    zf43 = ecx41 == 0;
    do {
        if (!ecx41) 
            break;
        --ecx41;
        *reinterpret_cast<void***>(edi38) = *esi37;
        ++edi38;
        ++esi37;
    } while (!zf43);
    if (!ebx39) 
        goto addr_43b677_17;
    esi44 = *reinterpret_cast<void***>(edx35 + 32);
    if (!esi44) {
        ecx41 = *reinterpret_cast<void***>(edx35 + 14);
        esi44 = reinterpret_cast<void**>(1 << reinterpret_cast<unsigned char>(ecx41));
    }
    eax45 = fun_442e73(ecx41, v32, v31, v29, v27, v26, v20, v18, 2, v16);
    edi46 = eax45;
    if (eax45) {
        *reinterpret_cast<void***>(eax45) = reinterpret_cast<void**>(0x300);
        ebx47 = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax45 + 2) = esi44;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi44) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi44 == 0))) {
            edx48 = ebp36;
            do {
                *reinterpret_cast<void***>(eax45 + 4) = *reinterpret_cast<void***>(edx48 + 42);
                edx48 = edx48 + 4;
                *reinterpret_cast<unsigned char*>(eax45 + 5) = *reinterpret_cast<unsigned char*>(edx48 + 41);
                eax45 = eax45 + 4;
                ecx41 = *reinterpret_cast<void***>(edx48 + 36);
                *reinterpret_cast<unsigned char*>(eax45 + 3) = 4;
                ++ebx47;
                *reinterpret_cast<void***>(eax45 + 2) = ecx41;
            } while (reinterpret_cast<signed char>(ebx47) < reinterpret_cast<signed char>(esi44));
        }
        eax49 = reinterpret_cast<void**>(CreatePalette());
        *reinterpret_cast<void***>(edi46) = eax49;
        fun_4440d1(ecx41, edi46, v32, v31, v29, v27, v26, v20, v18, 2, v16, v14, v12, v10, v9, v8, a2, a3, a4, a5, a6);
        goto addr_43b701_7;
    } else {
        fun_4440d1(ecx41, v32, v31, v29, v27, v26, v20, v18, 2, v16, v14, v12, v10, v9, v8, a2, a3, a4, a5, a6, a7);
        goto v20;
    }
    addr_43b677_17:
    goto v20;
}

void fun_43b709() {
}

void fun_43b8cd() {
}

int32_t fun_43ba46(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    int32_t edx4;

    if (!eax2 || eax2 == -1) {
        eax3 = 0;
    } else {
        eax3 = reinterpret_cast<int32_t>(DeviceIoControl(eax2, 1, 0, 0, edx4, 12, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 + 4, 0));
    }
    return eax3;
}

int32_t fun_43ba80(int32_t ecx) {
    int32_t eax2;
    int32_t eax3;
    int32_t eax4;
    int32_t eax5;

    if (!eax2 || eax3 == -1) {
        eax4 = 0;
    } else {
        DeviceIoControl(eax5);
        eax4 = 2;
    }
    return eax4;
}

void fun_43babd() {
}

void fun_43bad7() {
}

void fun_43bb3c() {
}

void fun_43bd32() {
}

int32_t fun_43c1a5(int32_t ecx) {
    void** esi2;
    void*** edi3;
    void*** eax4;
    uint32_t ecx5;

    esi2 = g5f27b4;
    edi3 = eax4;
    ecx5 = 0xa00;
    do {
        if (!ecx5) 
            break;
        --ecx5;
        *edi3 = *reinterpret_cast<void***>(esi2);
        edi3 = edi3 + 4;
        esi2 = esi2 + 4;
    } while (1);
    *reinterpret_cast<unsigned char*>(&ecx5) = 0;
    do {
        if (!ecx5) 
            break;
        --ecx5;
        *edi3 = *reinterpret_cast<void***>(esi2);
        ++edi3;
        ++esi2;
    } while (0);
    return 0x2800;
}

void fun_437c2d() {
}

void fun_43c564() {
}

void fun_43c6dc() {
}

void fun_43c8f3() {
}

void fun_43cc40(int32_t ecx) {
    void* esp2;
    void** edx3;
    int1_t zf4;
    int1_t zf5;
    void** edi6;
    void** ebp7;
    void* esp8;
    void** eax9;
    void* esp10;
    void** ebx11;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 32);
    edx3 = g60b88c;
    if (edx3) {
        zf4 = g60b110 == 0;
        if (!zf4 || (zf5 = g482a88 == 0, !zf5)) {
        }
        if (0) {
            edi6 = g5f22d0;
            GetClientRect(edi6, esp2);
            ebp7 = g5f22d0;
            MapWindowPoints();
            esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4);
            ClipCursor();
            SetCursorPos(reinterpret_cast<int32_t>(esp8) + 2, ebp7 + 2);
            eax9 = g60b844;
            if (eax9 && eax9 != 0xffffffff) {
                esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4);
                DeviceIoControl(eax9, 1, 1, 1, reinterpret_cast<int32_t>(esp10) - 4 - 4 + 28, 12, reinterpret_cast<int32_t>(esp10) + 32, 1, reinterpret_cast<int32_t>(esp8) + 2, ebp7 + 2);
            }
        } else {
            ClipCursor(0);
        }
        g60b890 = 1;
        g477624 = 1;
    }
    ebx11 = g60b844;
    g60b88c = reinterpret_cast<void**>(0);
    if (ebx11 && ebx11 != 0xffffffff) {
        CloseHandle(ebx11);
    }
    return;
}

void fun_43cd23() {
}

void** fun_43ce10(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27) {
    void** edx28;
    void** eax29;

    g60b888 = 0;
    eax29 = fun_41d410(ecx, edx28, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27);
    if (!eax29) {
        eax29 = fun_441640(ecx, edx28, __return_address(), a2, a3, a4, a5, a6);
    }
    return eax29;
}

void fun_43ce45() {
}

struct s1179 {
    signed char[81] pad81;
    signed char f51;
};

struct s1180 {
    signed char[81] pad81;
    signed char f51;
};

void fun_41b091() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    signed char* eax19;
    signed char* eax20;
    signed char al21;
    struct s1179* ebx22;
    struct s1180* ebx23;
    signed char dl24;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    *eax19 = reinterpret_cast<signed char>(*eax20 + al21);
    ebx22->f51 = reinterpret_cast<signed char>(ebx23->f51 + dl24);
}

void fun_41abc1() {
}

void fun_43d263() {
}

void fun_43d2b2() {
}

void fun_43d64d(int32_t ecx) {
    void* esp2;
    void* v3;
    void* esp4;
    void* v5;
    void** eax6;
    void* esp7;
    void* v8;
    void* esp9;
    void* v10;
    void* esp11;
    void* v12;
    void* esp13;
    uint32_t ebx14;
    void* v15;
    void* esp16;
    void* v17;
    void* esp18;
    void* v19;
    uint32_t eax20;
    void* esp21;
    signed char v22;
    signed char v23;
    uint32_t eax24;
    uint32_t esi25;
    signed char v26;
    signed char v27;
    void* v28;
    void* esp29;
    void* v30;
    void* esp31;
    void* v32;
    void* esp33;
    void* v34;
    uint32_t eax35;
    void* esp36;
    signed char v37;
    signed char v38;
    uint32_t ebx39;
    void* v40;
    void* esp41;
    void* v42;
    void* esp43;
    void* v44;
    void* esp45;
    void* v46;
    uint32_t eax47;
    void* esp48;
    signed char v49;
    signed char v50;
    uint32_t ebx51;
    void** ebx52;
    void** ecx53;
    void* v54;
    void* esp55;
    void* v56;
    void** v57;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 32);
    v3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) + 20);
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4);
    v5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) + 8);
    fun_4440b0(eax6, v5, "%x", v3, eax6, v5, "%x", v3);
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 - 4 + 4 + 12);
    v8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) + 16);
    esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4);
    v10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) + 12);
    fun_4440b0(eax6, v10, "%x", v8, eax6, v10, "%x", v8);
    esp11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 4 - 4 + 4 + 12);
    v12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) + 28);
    esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp11) - 4 - 4);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx14) + 1) = 0;
    v15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) + 16);
    fun_4440b0(eax6, v15, "%x", v12, eax6, v15, "%x", v12);
    esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4 + 4 + 12);
    v17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) + 24);
    esp18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4);
    v19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp18) + 20);
    eax20 = fun_4440b0(eax6, v19, "%x", v17, eax6, v19, "%x", v17);
    esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp18) - 4 - 4 + 4 + 12);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax20) + 1) = 0;
    *reinterpret_cast<signed char*>(&eax20) = v22;
    *reinterpret_cast<signed char*>(&ebx14) = v23;
    eax24 = eax20 << 8 | ebx14;
    esi25 = eax24;
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax24) + 1) = 0;
    *reinterpret_cast<signed char*>(&ebx14) = v26;
    *reinterpret_cast<signed char*>(&eax24) = v27;
    *reinterpret_cast<void***>(eax6) = reinterpret_cast<void**>((eax24 << 8 | ebx14) & 0xffff | (esi25 & 0xffff) << 16);
    v28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) + 20);
    esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4);
    v30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) + 8);
    fun_4440b0(eax6, v30, "%x", v28, eax6, v30, "%x", v28);
    esp31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 - 4 + 4 + 12);
    v32 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp31) + 16);
    esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp31) - 4 - 4);
    v34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) + 12);
    eax35 = fun_4440b0(eax6, v34, "%x", v32, eax6, v34, "%x", v32);
    esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) - 4 - 4 + 4 + 12);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax35) + 1) = 0;
    *reinterpret_cast<signed char*>(&eax35) = v37;
    *reinterpret_cast<signed char*>(&ebx14) = v38;
    ebx39 = ebx14 | eax35 << 8;
    *reinterpret_cast<void***>(eax6 + 4) = *reinterpret_cast<void***>(&ebx39);
    v40 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) + 20);
    esp41 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) - 4 - 4);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx39) + 1) = 0;
    v42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp41) + 8);
    fun_4440b0(eax6, v42, "%x", v40, eax6, v42, "%x", v40);
    esp43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp41) - 4 - 4 + 4 + 12);
    v44 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp43) + 16);
    esp45 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp43) - 4 - 4);
    v46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp45) + 12);
    eax47 = fun_4440b0(eax6, v46, "%x", v44, eax6, v46, "%x", v44);
    esp48 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp45) - 4 - 4 + 4 + 12);
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax47) + 1) = 0;
    *reinterpret_cast<signed char*>(&eax47) = v49;
    *reinterpret_cast<signed char*>(&ebx39) = v50;
    ebx51 = ebx39 | eax47 << 8;
    *reinterpret_cast<void***>(eax6 + 6) = *reinterpret_cast<void***>(&ebx51);
    ebx52 = eax6;
    ecx53 = eax6 + 8;
    do {
        v54 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp48) + 20);
        esp55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp48) - 4 - 4);
        v56 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp55) + 8);
        fun_4440b0(ecx53, v56, "%x", v54, ecx53, v56, "%x", v54);
        esp48 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp55) - 4 - 4 + 4 + 12);
        ++ebx52;
        *reinterpret_cast<void***>(ebx52 + 7) = v57;
    } while (ebx52 != ecx53);
    return;
}

void fun_43dc2b(int32_t ecx) {
}

void** fun_43f569(void** ecx, void** a2, void** a3, void** a4) {
    void** eax5;
    void** edx6;
    void** eax7;

    eax7 = fun_437a90(ecx, "R_VideoErase: %d, %d", eax5, edx6, ecx, __return_address(), a2, a3, a4);
    return eax7;
}

int32_t fun_43f854() {
    return 0;
}

void fun_43fbd1() {
}

void fun_43fdb4() {
}

void fun_43ffac() {
}

void fun_440188() {
}

void fun_440374() {
}

struct s1181 {
    signed char[81] pad81;
    signed char f51;
};

struct s1182 {
    signed char[81] pad81;
    signed char f51;
};

void fun_4406a3() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    signed char* eax16;
    signed char* eax17;
    signed char al18;
    struct s1181* ebx19;
    struct s1182* ebx20;
    signed char dl21;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    *eax16 = reinterpret_cast<signed char>(*eax17 + al18);
    ebx19->f51 = reinterpret_cast<signed char>(ebx20->f51 + dl21);
}

void fun_4407e7() {
}

void fun_44091e() {
}

void fun_440944() {
}

void fun_4409a1() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    int32_t eax4;
    int32_t eax5;
    signed char ah6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *reinterpret_cast<signed char*>(eax4 - 95) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax5 - 95) + ah6);
}

void fun_441084() {
}

void fun_44111e() {
}

void fun_4412d6() {
}

void fun_44132c() {
}

struct s1183 {
    int32_t f0;
    int32_t f4;
    void** f8;
    signed char[3] pad12;
    int32_t fc;
    unsigned char f10;
};

struct s1184 {
    signed char[12] pad12;
    struct s1183* fc;
};

void** fun_44137c(void** a1, void** a2) {
    void** eax3;
    void** eax4;
    struct s1183* edi5;
    struct s1184* v6;
    void** ebp7;
    void** edi8;
    void** esi9;
    void** ebx10;
    int32_t esi11;
    void** v12;
    int32_t esi13;
    int32_t ebx14;
    int32_t v15;
    void** v16;
    void** v17;
    unsigned char bl18;

    eax3 = eax4;
    if (reinterpret_cast<int1_t>(a2 == 0x3c9)) {
        edi5 = v6->fc;
        if (a1 != edi5->f8) {
            eax3 = fun_437a90(a1, "WARNING: MIDI Callback on apparent wrong handle!", ebp7, edi8, esi9, ebx10, __return_address(), a1, a2);
        }
        esi11 = edi5->fc - 1;
        *reinterpret_cast<unsigned char*>(&eax3 + 1) = edi5->f10;
        edi5->fc = esi11;
        if (*reinterpret_cast<unsigned char*>(&eax3 + 1) & 4 && (!(*reinterpret_cast<unsigned char*>(&eax3 + 1) & 2) && (v12 = edi5->f8, edi5->fc = esi11 + 1, eax3 = reinterpret_cast<void**>(midiStreamOut(v12, v6, 64)), !!eax3))) {
            edi5->fc = edi5->fc - 1;
        }
        if (!edi5->fc && !(edi5->f10 & 2)) {
            fun_437a90(a1, "midiCallback: non-reset cleanup", ebp7, edi8, esi9, ebx10, __return_address(), a1, a2);
            esi13 = edi5->f0;
            ebx14 = edi5->f4;
            while (--esi13, esi13 != -1) {
                v15 = ebx14;
                v16 = edi5->f8;
                ebx14 = ebx14 + 64;
                midiOutUnprepareHeader(v16, v15, 64);
            }
            v17 = edi5->f8;
            eax3 = reinterpret_cast<void**>(midiStreamClose(v17));
            bl18 = edi5->f10;
            edi5->f8 = reinterpret_cast<void**>(0);
            edi5->f10 = reinterpret_cast<unsigned char>(bl18 & 0xf8);
        }
    }
    return eax3;
}

struct s1185 {
    signed char[86] pad86;
    signed char f56;
};

void fun_441439(struct s1185* ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char dl11;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
    ecx->f56 = reinterpret_cast<signed char>(ecx->f56 + dl11);
}

void fun_441631() {
}

void fun_441986() {
}

void fun_441e2a() {
}

void fun_442a40(int32_t ecx) {
    uint32_t ecx2;
    uint32_t eax3;
    uint32_t edx4;
    uint32_t eax5;

    ecx2 = eax3;
    edx4 = eax5 ^ ecx2;
    if (edx4 == ecx2) {
        while (1) {
            while (1) {
                addr_442a77_3:
                ++edx4;
                if (reinterpret_cast<int32_t>(edx4) >= reinterpret_cast<int32_t>(4)) 
                    goto 0x442a3c;
                if (edx4 == ecx2) 
                    break;
            }
        }
    } else {
        goto addr_442a77_3;
    }
}

void fun_445169() {
    goto fun_44515b;
}

int32_t fun_44575a() {
    int32_t edx1;
    int32_t edx2;

    if (edx1) {
        if (edx2) 
            goto "???";
    }
    return 0;
}

void fun_442fdb() {
    return;
}

void fun_445e91() {
    unsigned char al1;
    int32_t* edx2;
    int32_t* ebx3;
    int32_t* edx4;
    int32_t* ebx5;
    unsigned char al6;
    unsigned char* ebx7;
    unsigned char* ebx8;
    unsigned char al9;
    unsigned char* ebx10;
    unsigned char* ebx11;

    if (!(al1 & 1)) {
        *edx2 = 0xc0000000;
        *ebx3 = 0x80;
    } else {
        *edx4 = 0x80000000;
        *ebx5 = 1;
    }
    if (al6 & 2) {
        *ebx7 = reinterpret_cast<unsigned char>(*ebx8 | 2);
    }
    if (al9 & 4) {
        *ebx10 = reinterpret_cast<unsigned char>(*ebx11 | 4);
    }
    return;
}

void fun_446005(int32_t ecx) {
    int32_t ecx2;
    int16_t dx3;
    int32_t ebx4;

    ecx2 = 0;
    *reinterpret_cast<int16_t*>(&ecx2) = dx3;
    fun_449d2a();
    fun_449d24(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 8 - 4 - 4 - 4 - 4 + 4 - 4 + 4, ebx4);
    goto ecx2;
}

struct s1186 {
    signed char[8] pad8;
    int32_t f8;
};

struct s1187 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_444085() {
    struct s1186* edx1;
    struct s1187* edx2;

    edx1->f8 = edx2->f8 - 1;
    return;
}

int32_t g618364 = 0;

int32_t g477d88 = 0xe2;

void** g477b48 = reinterpret_cast<void**>(0);

void* g477b4c = reinterpret_cast<void*>(0);

void** fun_4444d8(int32_t ecx) {
    int32_t eax2;
    uint32_t eax3;
    void** esp4;
    void** ecx5;
    void** esp6;
    void** esp7;
    void** edx8;
    unsigned char* edx9;
    void** esp10;
    unsigned char* eax11;
    void** esp12;
    void** eax13;
    void** edx14;
    void** esp15;
    void** esp16;
    void** esp17;
    void** eax18;
    void** esp19;
    uint32_t edx20;
    uint32_t edx21;
    void** esp22;
    void** esp23;
    void** esp24;
    void** esp25;
    void** esp26;
    void** eax27;
    void** esp28;
    void** esp29;
    void** esp30;
    void** eax31;

    g618364 = 0x43a1f0;
    fun_4481d8();
    eax2 = g477d88;
    eax3 = eax2 + 3;
    *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax3) & 0xfc);
    esp4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 8 - 4 + 4 - eax3);
    ecx5 = esp4;
    esp6 = esp4 - 4;
    *reinterpret_cast<void***>(esp6) = reinterpret_cast<void**>(0x4474a7);
    fun_442b80(ecx5, *reinterpret_cast<void***>(esp6 + 4), *reinterpret_cast<void***>(esp6 + 8), *reinterpret_cast<void***>(esp6 + 12), *reinterpret_cast<void***>(esp6 + 16), *reinterpret_cast<void***>(esp6 + 20));
    esp7 = esp6 + 4 - 4;
    *reinterpret_cast<void***>(esp7) = reinterpret_cast<void**>(0x4474b1);
    fun_4453ee(ecx5);
    edx8 = g477b48;
    edx9 = reinterpret_cast<unsigned char*>(edx8 + 3);
    *reinterpret_cast<unsigned char*>(&edx9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx9) & 0xfc);
    esp10 = esp7 + 4 - 4;
    *reinterpret_cast<void***>(esp10) = reinterpret_cast<void**>(0x4474c2);
    eax11 = fun_444203();
    esp12 = esp10 + 4;
    if (reinterpret_cast<uint32_t>(edx9) >= reinterpret_cast<uint32_t>(eax11)) {
        eax13 = reinterpret_cast<void**>(0);
    } else {
        esp12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esp12) - reinterpret_cast<uint32_t>(edx9));
        eax13 = esp12;
    }
    edx14 = g477b48;
    g477b4c = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax13) + reinterpret_cast<unsigned char>(edx14));
    esp15 = esp12 - 4;
    *reinterpret_cast<void***>(esp15) = reinterpret_cast<void**>(0x4474e2);
    fun_44887d();
    esp16 = esp15 + 4 - 4;
    *reinterpret_cast<void***>(esp16) = reinterpret_cast<void**>(0x4474e7);
    fun_449d6c(*reinterpret_cast<void***>(esp16 + 4), *reinterpret_cast<void***>(esp16 + 8), *reinterpret_cast<void***>(esp16 + 12));
    esp17 = esp16 + 4 - 4;
    *reinterpret_cast<void***>(esp17) = reinterpret_cast<void**>(0x4474ec);
    eax18 = fun_444556(ecx5, *reinterpret_cast<void***>(esp17 + 4), *reinterpret_cast<void***>(esp17 + 8), *reinterpret_cast<void***>(esp17 + 12), *reinterpret_cast<void***>(esp17 + 16), *reinterpret_cast<void***>(esp17 + 20), *reinterpret_cast<void***>(esp17 + 24), *reinterpret_cast<void***>(esp17 + 28), *reinterpret_cast<void***>(esp17 + 32), *reinterpret_cast<void***>(esp17 + 36));
    esp19 = esp17 + 4;
    while ((edx14 = *reinterpret_cast<void***>(eax18) + 1, edx20 = reinterpret_cast<unsigned char>(edx14) & 0xff, *reinterpret_cast<unsigned char*>(&edx20) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx20 + 0x459418) & 2), edx14 = reinterpret_cast<void**>(edx20 & 0xff), !edx14) && *reinterpret_cast<void***>(eax18)) {
        ++eax18;
    }
    while (edx14 = *reinterpret_cast<void***>(eax18) + 1, edx21 = reinterpret_cast<unsigned char>(edx14) & 0xff, *reinterpret_cast<unsigned char*>(&edx21) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx21 + 0x459418) & 2), edx14 = reinterpret_cast<void**>(edx21 & 0xff), !!edx14) {
        ++eax18;
    }
    esp22 = esp19 - 4;
    *reinterpret_cast<void***>(esp22) = reinterpret_cast<void**>(10);
    esp23 = esp22 - 4;
    *reinterpret_cast<void***>(esp23) = eax18;
    esp24 = esp23 - 4;
    *reinterpret_cast<void***>(esp24) = edx14;
    esp25 = esp24 - 4;
    *reinterpret_cast<void***>(esp25) = edx14;
    esp26 = esp25 - 4;
    *reinterpret_cast<void***>(esp26) = reinterpret_cast<void**>(0x447537);
    eax27 = fun_449d60();
    esp28 = esp26 + 4 - 4;
    *reinterpret_cast<void***>(esp28) = eax27;
    esp29 = esp28 - 4;
    *reinterpret_cast<void***>(esp29) = reinterpret_cast<void**>(0x44753e);
    g618364();
    esp30 = esp29 + 4 - 4;
    *reinterpret_cast<void***>(esp30) = reinterpret_cast<void**>(0x447543);
    eax31 = fun_442fdc(ecx5, *reinterpret_cast<void***>(esp30 + 4), *reinterpret_cast<void***>(esp30 + 8), *reinterpret_cast<void***>(esp30 + 12), *reinterpret_cast<void***>(esp30 + 16), *reinterpret_cast<void***>(esp30 + 20), *reinterpret_cast<void***>(esp30 + 24), *reinterpret_cast<void***>(esp30 + 28), *reinterpret_cast<void***>(esp30 + 32), *reinterpret_cast<void***>(esp30 + 36), *reinterpret_cast<void***>(esp30 + 40), *reinterpret_cast<void***>(esp30 + 44), *reinterpret_cast<void***>(esp30 + 48), *reinterpret_cast<void***>(esp30 + 52), *reinterpret_cast<void***>(esp30 + 56), *reinterpret_cast<void***>(esp30 + 60), *reinterpret_cast<void***>(esp30 + 64), *reinterpret_cast<void***>(esp30 + 68), *reinterpret_cast<void***>(esp30 + 72), *reinterpret_cast<void***>(esp30 + 76), *reinterpret_cast<void***>(esp30 + 80), *reinterpret_cast<void***>(esp30 + 84), *reinterpret_cast<void***>(esp30 + 88), *reinterpret_cast<void***>(esp30 + 92), *reinterpret_cast<void***>(esp30 + 96), *reinterpret_cast<void***>(esp30 + 100), *reinterpret_cast<void***>(esp30 + 0x68), *reinterpret_cast<void***>(esp30 + 0x6c), *reinterpret_cast<void***>(esp30 + 0x70), *reinterpret_cast<void***>(esp30 + 0x74), *reinterpret_cast<void***>(esp30 + 0x78), *reinterpret_cast<void***>(esp30 + 0x7c), *reinterpret_cast<void***>(esp30 + 0x80), *reinterpret_cast<void***>(esp30 + 0x84), *reinterpret_cast<void***>(esp30 + 0x88), *reinterpret_cast<void***>(esp30 + 0x8c), *reinterpret_cast<void***>(esp30 + 0x90), *reinterpret_cast<void***>(esp30 + 0x94), *reinterpret_cast<void***>(esp30 + 0x98), *reinterpret_cast<void***>(esp30 + 0x9c), *reinterpret_cast<void***>(esp30 + 0xa0), *reinterpret_cast<void***>(esp30 + 0xa4), *reinterpret_cast<void***>(esp30 + 0xa8), *reinterpret_cast<void***>(esp30 + 0xac), *reinterpret_cast<void***>(esp30 + 0xb0), *reinterpret_cast<void***>(esp30 + 0xb4), *reinterpret_cast<void***>(esp30 + 0xb8), *reinterpret_cast<void***>(esp30 + 0xbc), *reinterpret_cast<void***>(esp30 + 0xc0), *reinterpret_cast<void***>(esp30 + 0xc4), *reinterpret_cast<void***>(esp30 + 0xc8), *reinterpret_cast<void***>(esp30 + 0xcc), *reinterpret_cast<void***>(esp30 + 0xd0), *reinterpret_cast<void***>(esp30 + 0xd4), *reinterpret_cast<void***>(esp30 + 0xd8), *reinterpret_cast<void***>(esp30 + 0xdc), *reinterpret_cast<void***>(esp30 + 0xe0), *reinterpret_cast<void***>(esp30 + 0xe4), *reinterpret_cast<void***>(esp30 + 0xe8), *reinterpret_cast<void***>(esp30 + 0xec), *reinterpret_cast<void***>(esp30 + 0xf0), *reinterpret_cast<void***>(esp30 + 0xf4), *reinterpret_cast<void***>(esp30 + 0xf8), *reinterpret_cast<void***>(esp30 + 0xfc), *reinterpret_cast<void***>(esp30 + 0x100), *reinterpret_cast<void***>(esp30 + 0x104), *reinterpret_cast<void***>(esp30 + 0x108), *reinterpret_cast<void***>(esp30 + 0x10c), *reinterpret_cast<void***>(esp30 + 0x110), *reinterpret_cast<void***>(esp30 + 0x114), *reinterpret_cast<void***>(esp30 + 0x118), *reinterpret_cast<void***>(esp30 + 0x11c), *reinterpret_cast<void***>(esp30 + 0x120), *reinterpret_cast<void***>(esp30 + 0x124));
    return eax31;
}

struct s1188 {
    signed char[16] pad16;
    int32_t f10;
};

int32_t fun_4450b4(void** ecx) {
    int32_t eax2;
    struct s1188* eax3;

    eax2 = fun_447750(ecx);
    eax3->f10 = eax3->f10 + 1;
    return eax2;
}

void fun_445156() {
}

int32_t fun_4452ce() {
    int32_t eax1;

    eax1 = reinterpret_cast<int32_t>(image_base_());
    return eax1 + 0xda;
}

void fun_445c40() {
    __asm__("frstor [eax]");
    __asm__("wait ");
    return;
}

uint32_t fun_446180(void** ecx, int32_t a2, void* a3, void** a4) {
    int1_t zf5;
    int32_t eax6;
    int32_t edx7;
    void* ebx8;
    void* eax9;
    int32_t eax10;

    zf5 = g477be4 == 0;
    if (zf5) {
        return eax6 + edx7;
    } else {
        eax9 = fun_44614f(ecx, ebx8, __return_address(), a2, a3, a4);
        return reinterpret_cast<uint32_t>(eax9) + eax10;
    }
}

unsigned char* fun_446199() {
    void* esi1;
    unsigned char* eax2;
    int32_t eax3;
    int32_t edx4;
    int32_t edx5;
    uint32_t ebx6;
    int1_t zf7;
    uint32_t ebx8;

    esi1 = g477be4;
    if (!esi1) {
        eax2 = reinterpret_cast<unsigned char*>(eax3 + edx4);
    } else {
        while (!(reinterpret_cast<uint1_t>(edx5 < 0) | reinterpret_cast<uint1_t>(edx5 == 0))) {
            if (!esi1) {
                ebx6 = 0;
                zf7 = 1;
            } else {
                ebx8 = 0;
                *reinterpret_cast<unsigned char*>(&ebx8) = *eax2;
                *reinterpret_cast<unsigned char*>(&ebx8) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx8 + 0x477be9) & 1);
                ebx6 = ebx8 & 0xff;
                zf7 = ebx6 == 0;
            }
            *reinterpret_cast<unsigned char*>(&ebx6) = reinterpret_cast<uint1_t>(!zf7);
            --edx5;
            eax2 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax2) + ((ebx6 & 0xff) + 1));
        }
    }
    g477be4 = esi1;
    return eax2;
}

void fun_4461de(int32_t ecx) {
    signed char* ebx2;
    signed char* eax3;
    signed char* edi4;
    signed char* edx5;
    int32_t ecx6;
    int32_t ecx7;
    signed char* edi8;
    int32_t ecx9;

    ebx2 = eax3;
    edi4 = edx5;
    ecx6 = ecx - ecx - 1;
    do {
        if (!ecx6) 
            break;
        --ecx6;
        ++edi4;
    } while (*edi4);
    ecx7 = ~ecx6 - 1;
    edi8 = ebx2;
    ecx9 = ecx7 - ecx7 - 1;
    do {
        if (!ecx9) 
            break;
        --ecx9;
        ++edi8;
    } while (*edi8);
}

void fun_44628f(void* ecx) {
    void** v2;
    void* v3;
    int32_t v4;
    int32_t esi5;
    void** v6;
    void** edi7;
    void* v8;
    void* ebp9;
    void* ebp10;
    void* eax11;
    signed char* esi12;
    signed char* edx13;
    int1_t zf14;
    signed char* edi15;
    signed char* eax16;
    uint32_t ecx17;
    void** ecx18;
    signed char* edi19;
    void* eax20;
    void* ebx21;
    signed char* v22;
    void* eax23;
    uint32_t ecx24;
    int1_t zf25;
    int1_t zf26;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = ecx;
    v4 = esi5;
    v6 = edi7;
    v8 = ebp9;
    ebp10 = eax11;
    esi12 = edx13;
    zf14 = g477be4 == 0;
    if (zf14) {
        fun_4487b6(ecx, v8, v6, v4, v3, v2);
    } else {
        edi15 = eax16;
        ecx17 = reinterpret_cast<uint32_t>(ecx) - reinterpret_cast<uint32_t>(ecx) - 1;
        do {
            if (!ecx17) 
                break;
            --ecx17;
            ++edi15;
            ++esi12;
        } while (*edi15);
        ecx18 = reinterpret_cast<void**>(~ecx17 - 1);
        edi19 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx18) + reinterpret_cast<uint32_t>(ebp10));
        eax20 = fun_44614f(ecx18, v8, v6, v4, v3, v2);
        ebx21 = eax20;
        v22 = edi19;
        eax23 = eax20;
        ecx24 = reinterpret_cast<uint32_t>(eax20) >> 2;
        zf25 = ecx24 == 0;
        do {
            if (!ecx24) 
                break;
            --ecx24;
            *edi19 = *esi12;
            edi19 = edi19 + 4;
            esi12 = esi12 + 4;
        } while (!zf25);
        *reinterpret_cast<unsigned char*>(&ecx24) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax23) & 3);
        zf26 = *reinterpret_cast<unsigned char*>(&ecx24) == 0;
        do {
            if (!ecx24) 
                break;
            --ecx24;
            *edi19 = *esi12;
            ++edi19;
            ++esi12;
        } while (!zf26);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v22) + reinterpret_cast<uint32_t>(ebx21)) = 0;
        goto 0x4462e5;
    }
}

unsigned char* fun_4462ec(void* ecx) {
    unsigned char* ebp2;
    unsigned char* eax3;
    void** v4;
    void** edx5;
    void* v6;
    void* ebx7;
    int1_t zf8;
    int32_t ebp9;
    void* edi10;
    void** esi11;
    signed char* eax12;
    unsigned char* edi13;
    void** esi14;
    uint32_t ecx15;
    unsigned char* esi16;
    void*** edi17;
    void*** v18;
    void* eax19;
    uint32_t ecx20;
    int1_t zf21;
    int1_t zf22;
    unsigned char* ebx23;
    unsigned char* eax24;
    void* esi25;
    int1_t zf26;
    uint32_t edx27;
    void* edx28;
    uint32_t edx29;

    ebp2 = eax3;
    v4 = edx5;
    v6 = ebx7;
    zf8 = g477be4 == 0;
    if (zf8) {
        fun_4487b6(ecx, v6, v4, ebp9, edi10, esi11);
    } else {
        if (!*eax12) {
            addr_446390_4:
            edi13 = ebp2;
            esi14 = v4;
            ecx15 = reinterpret_cast<uint32_t>(ecx) - reinterpret_cast<uint32_t>(ecx) - 1;
            goto label_5;
        } else {
            esi16 = ebp2;
            do {
                if (!*esi16) 
                    goto addr_44632e_8;
                if (!*esi16) 
                    goto addr_44632c_10;
                ++esi16;
                if (!*esi16) 
                    goto addr_44632e_8;
                ++esi16;
            } while (*esi16);
            goto addr_44632c_10;
        }
    }
    addr_4463d4_13:
    return ebp2;
    do {
        label_5:
        if (!ecx15) 
            break;
        --ecx15;
        ++edi13;
        ++esi14;
    } while (*edi13);
    edi17 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(~ecx15) - 1 + reinterpret_cast<uint32_t>(ebp2));
    v18 = edi17;
    eax19 = v6;
    ecx20 = reinterpret_cast<uint32_t>(v6) >> 2;
    zf21 = ecx20 == 0;
    do {
        if (!ecx20) 
            break;
        --ecx20;
        *edi17 = *reinterpret_cast<void***>(esi14);
        edi17 = edi17 + 4;
        esi14 = esi14 + 4;
    } while (!zf21);
    *reinterpret_cast<unsigned char*>(&ecx20) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax19) & 3);
    zf22 = *reinterpret_cast<unsigned char*>(&ecx20) == 0;
    do {
        if (!ecx20) 
            break;
        --ecx20;
        *edi17 = *reinterpret_cast<void***>(esi14);
        ++edi17;
        ++esi14;
    } while (!zf22);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(v18) + reinterpret_cast<uint32_t>(v6)) = 0;
    goto addr_4463d4_13;
    addr_44632e_8:
    ecx = g477be4;
    ebx23 = esi16 - 1;
    eax24 = ebp2;
    esi25 = g477be4;
    while (*eax24) {
        if (eax24 == ebx23) {
            if (!ecx) {
                zf26 = 1;
            } else {
                edx27 = 0;
                *reinterpret_cast<unsigned char*>(&edx27) = *ebx23;
                *reinterpret_cast<unsigned char*>(&edx27) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx27 + 0x477be9) & 1);
                zf26 = (edx27 & 0xff) == 0;
            }
            if (!zf26) 
                goto addr_446365_28;
        }
        if (!esi25) {
            edx28 = reinterpret_cast<void*>(0);
        } else {
            edx29 = 0;
            *reinterpret_cast<unsigned char*>(&edx29) = *eax24;
            *reinterpret_cast<unsigned char*>(&edx29) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx29 + 0x477be9) & 1);
            edx28 = reinterpret_cast<void*>(edx29 & 0xff);
        }
        eax24 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax24 + 1) + reinterpret_cast<uint32_t>(edx28));
    }
    addr_446389_33:
    if (ebp2 != ebx23) {
        ebp2 = ebx23 + 1;
        goto addr_446390_4;
    }
    addr_446365_28:
    ebp2 = ebx23;
    goto addr_446389_33;
    addr_44632c_10:
    esi16 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(esi16) - reinterpret_cast<uint32_t>(esi16));
    goto addr_44632e_8;
}

struct s1189 {
    signed char f0;
    signed char f1;
};

void fun_4464ef() {
    uint32_t ebx1;
    uint32_t eax2;
    signed char* edx3;
    struct s1189* edx4;
    uint32_t edx5;

    ebx1 = eax2;
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ebx1) + 1) & 0xff)) {
        *edx3 = *reinterpret_cast<signed char*>(&ebx1);
        return;
    } else {
        edx4->f1 = *reinterpret_cast<signed char*>(&ebx1);
        edx5 = ebx1 >> 8;
        edx4->f0 = *reinterpret_cast<signed char*>(&edx5);
        return;
    }
}

signed char g618360 = 0;

signed char g618361 = 0;

signed char g618362 = 0;

int32_t fun_446509() {
    unsigned char ah1;
    signed char al2;
    uint32_t edx3;
    uint32_t eax4;
    signed char al5;

    if (!(ah1 & 0xff)) {
        g618360 = al2;
        g618361 = 0;
    } else {
        edx3 = eax4 >> 8;
        g618360 = *reinterpret_cast<signed char*>(&edx3);
        g618361 = al5;
        g618362 = 0;
    }
    return 0x618360;
}

void fun_44653d(int32_t ecx) {
    void* v2;
    int32_t eax3;
    int32_t edx4;

    v2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 20);
    eax3 = fun_449d18(1);
    if (eax3 && (*reinterpret_cast<void**>(reinterpret_cast<int32_t>(&v2) + 2) || *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&v2) + 3))) {
        g477be4 = reinterpret_cast<void*>(1);
    }
    goto edx4;
}

struct s1190 {
    signed char[81] pad81;
    signed char f51;
};

struct s1191 {
    signed char[81] pad81;
    signed char f51;
};

void fun_44741b() {
    struct s1190* ebx1;
    struct s1191* ebx2;
    signed char dl3;

    ebx1->f51 = reinterpret_cast<signed char>(ebx2->f51 + dl3);
}

unsigned char g477895 = 0;

int32_t fun_44754a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** v8;
    unsigned char dh9;
    unsigned char dh10;
    unsigned char dh11;
    unsigned char* ebx12;
    int32_t eax13;
    unsigned char al14;
    unsigned char ah15;
    unsigned char ah16;
    void** ecx17;
    unsigned char dl18;
    void** eax19;
    void** ebx20;
    void** eax21;
    void** eax22;

    v8 = reinterpret_cast<void**>(__return_address());
    *reinterpret_cast<void***>(ecx) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx)) ^ dh9);
    dh10 = reinterpret_cast<unsigned char>(dh11 ^ *ebx12);
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(al14 ^ 53);
    __asm__("aaa ");
    __asm__("popad ");
    if (__intrinsic()) {
        goto addr_4475da_3;
    }
    if (__intrinsic()) {
        addr_4475da_3:
        goto addr_4475de_5;
    } else {
        if (__undefined()) {
            addr_4475de_5:
            eax13 = fun_4484ba(ecx);
            goto addr_4475e2_7;
        } else {
            if (__intrinsic() | __undefined()) {
                addr_4475e2_7:
                return eax13;
            } else {
                if (!__undefined()) {
                    if (__undefined()) 
                        goto fun_44756f; else 
                        goto "???";
                }
                *reinterpret_cast<void***>(ecx) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx)) ^ dh10);
                __asm__("aaa ");
                __asm__("popad ");
                if (!__intrinsic()) 
                    goto addr_447601_12;
            }
        }
    }
    ah15 = g477895;
    goto addr_447676_14;
    addr_447601_12:
    if (__intrinsic()) {
        addr_447676_14:
        ah16 = reinterpret_cast<unsigned char>(ah15 & 0xf8);
    } else {
        if (!__undefined()) {
            if (__intrinsic() | __undefined()) {
                addr_44767e_17:
                g477895 = ah16;
            } else {
                if (!__undefined()) {
                    if (__undefined()) 
                        goto fun_44760b; else 
                        goto "???";
                }
            }
            ecx17 = reinterpret_cast<void**>(0x477854);
            g477895 = reinterpret_cast<unsigned char>(dl18 | 4);
            while (*reinterpret_cast<void***>(ecx17 + 12)) {
                eax19 = fun_442e73(ecx17, 0x6a69, 0x6a69, v8, a2, a3, a4, a5, a6, a7);
                ebx20 = eax19;
                if (!eax19 && (eax21 = fun_442e73(ecx17, 0x6a69, 0x6a69, v8, a2, a3, a4, a5, a6, a7), ebx20 = eax21, !eax21)) {
                    fun_4484ba(ecx17);
                }
                eax22 = g618348;
                *reinterpret_cast<void***>(ebx20 + 4) = ecx17;
                g618348 = ebx20;
                ecx17 = ecx17 + 26;
                *reinterpret_cast<void***>(ebx20) = eax22;
            }
            g618340 = *reinterpret_cast<void***>(ecx17 + 12);
            goto a2;
        }
    }
    dl18 = ah16;
    goto addr_44767e_17;
}

void fun_4475d4() {
}

void fun_447670(int32_t ecx) {
}

void fun_4476f3() {
}

void fun_447813() {
}

struct s1192 {
    int32_t f0;
    int32_t f4;
};

struct s1193 {
    int32_t f0;
    int32_t f4;
};

uint32_t fun_447957() {
    int32_t edx1;
    void* eax2;
    struct s1192* edi3;
    struct s1193* esi4;
    uint16_t ds5;

    edx1 = 8;
    do {
        eax2 = reinterpret_cast<void*>(image_base_());
        edi3 = reinterpret_cast<struct s1192*>(reinterpret_cast<int32_t>(eax2) + edx1 + 88);
        esi4 = reinterpret_cast<struct s1193*>(edx1 + 0x477cfc);
        edx1 = edx1 + 8;
        edi3->f0 = esi4->f0;
        edi3->f4 = esi4->f4;
    } while (edx1 != 0x68);
    return static_cast<uint32_t>(ds5);
}

/* (image base) */
int32_t image_base_ = 0x44888e;

int32_t fun_447898(void** ecx, void** a2, void** a3) {
    int32_t eax4;
    int32_t eax5;
    void** ebx6;
    int32_t edx7;
    void* eax8;
    int32_t eax9;
    void* eax10;
    int32_t edx11;
    void* eax12;

    if (eax4 < 1 || eax5 > 12) {
        fun_44515b(ecx, ebx6, __return_address(), a2, a3);
        return 3;
    } else {
        image_base_ = reinterpret_cast<int32_t>(fun_447813);
        if (edx7 != 2 && (edx7 != 3 && ((eax8 = reinterpret_cast<void*>(image_base_()), !!*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax8) + eax9 * 8 + 92)) && eax9 == 2))) {
            fun_4488a0(edx7);
        }
        eax10 = reinterpret_cast<void*>(image_base_());
        edx11 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax10) + eax9 * 8 + 88);
        eax12 = reinterpret_cast<void*>(image_base_());
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax12) + eax9 * 8 + 88) = edx7;
        return edx11;
    }
}

void fun_447de1() {
    goto fun_447ec0;
}

void fun_447ebb() {
}

void fun_447ee5(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** edx10;
    struct s515* eax11;
    void** edx12;

    edx10 = g477a84;
    eax11 = fun_449ce2(edx10);
    if (!eax11) {
        fun_4488f3(ecx, edx10, edx12, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    }
    goto ecx;
}

void fun_44802a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10) {
    fun_447fdd(ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10);
}

void fun_44816d(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14) {
    void** v15;
    void** v16;
    void** ebx17;
    void** v18;
    void** edx19;
    int32_t edx20;

    v15 = reinterpret_cast<void**>(__return_address());
    v16 = ebx17;
    v18 = edx19;
    image_base_();
    edx20 = 0x6183ac;
    image_base_();
    image_base_();
    do {
        edx20 = edx20 + 16;
        image_base_();
    } while (edx20 != 0x6184ac);
    image_base_();
    fun_448a16(ecx, v18, v16, v15, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    image_base_();
    image_base_();
    fun_448034(ecx);
    return;
}

void fun_4483df() {
}

void fun_44845a() {
    return;
}

struct s1194 {
    signed char[1] pad1;
    signed char f1;
};

void* fun_448698() {
    void* edx1;
    unsigned char* eax2;
    unsigned char* eax3;
    void* ebx4;
    signed char* eax5;
    struct s1194* eax6;
    uint32_t ebx7;
    uint32_t edx8;

    edx1 = g477be4;
    if (!edx1) {
        *reinterpret_cast<unsigned char*>(&edx1) = *eax2;
    } else {
        edx1 = reinterpret_cast<void*>(0);
        *reinterpret_cast<unsigned char*>(&edx1) = *eax3;
        if (edx1) {
            ebx4 = g477be4;
            eax5 = &eax6->f1;
            if (ebx4) {
                ebx7 = 0;
                *reinterpret_cast<unsigned char*>(&ebx7) = *reinterpret_cast<unsigned char*>(&edx1);
                *reinterpret_cast<unsigned char*>(&ebx7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ebx7 + 0x477be9) & 1);
                ebx4 = reinterpret_cast<void*>(ebx7 & 0xff);
            }
            if (ebx4 && *eax5) {
                edx8 = 0;
                *reinterpret_cast<signed char*>(&edx8) = *eax5;
                return edx8 | reinterpret_cast<uint32_t>(edx1) << 8;
            }
        }
    }
    return edx1;
}

int32_t fun_4486ea() {
    void* edx1;
    int32_t ebx2;
    int32_t eax3;
    int32_t eax4;
    uint32_t edx5;
    signed char* eax6;
    int1_t zf7;
    int1_t zf8;
    uint32_t edx9;

    edx1 = g477be4;
    ebx2 = eax3 + 1;
    if (!edx1) {
        eax4 = ebx2;
    } else {
        edx5 = 0;
        *reinterpret_cast<signed char*>(&edx5) = *eax6;
        if (edx5) {
            eax4 = ebx2;
            zf7 = g477be4 == 0;
            if (zf7) {
                zf8 = 1;
            } else {
                edx9 = edx5 & 0xff;
                *reinterpret_cast<unsigned char*>(&edx9) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx9 + 0x477be9) & 1);
                zf8 = (edx9 & 0xff) == 0;
            }
            if (!zf8) {
                return eax4 + 1;
            }
        }
    }
    return eax4;
}

unsigned char* fun_448730() {
    void* esi1;
    unsigned char* ebx2;
    unsigned char* eax3;
    void* edi4;
    void* edx5;
    uint32_t eax6;
    uint32_t edx7;
    unsigned char* edx8;
    void* edx9;
    int1_t zf10;
    unsigned char* eax11;
    int1_t zf12;
    uint32_t edx13;
    int1_t zf14;
    uint32_t edx15;

    esi1 = g477be4;
    ebx2 = eax3;
    edi4 = edx5;
    if (eax6 < edx7) {
        edx8 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edx9) - 1);
        zf10 = esi1 == 0;
        if (!zf10) {
            eax11 = edx8;
            if (zf10) {
                zf12 = 1;
            } else {
                *reinterpret_cast<unsigned char*>(&edx8) = *edx8;
                edx13 = reinterpret_cast<uint32_t>(edx8) & 0xff;
                *reinterpret_cast<unsigned char*>(&edx13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx13 + 0x477be9) & 1);
                zf12 = (edx13 & 0xff) == 0;
            }
            if (zf12) {
                do {
                    --eax11;
                    if (reinterpret_cast<uint32_t>(ebx2) > reinterpret_cast<uint32_t>(eax11)) 
                        break;
                    if (!esi1) {
                        zf14 = 1;
                    } else {
                        edx15 = 0;
                        *reinterpret_cast<unsigned char*>(&edx15) = *eax11;
                        *reinterpret_cast<unsigned char*>(&edx15) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx15 + 0x477be9) & 1);
                        zf14 = (edx15 & 0xff) == 0;
                    }
                } while (!zf14);
                edx8 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edi4) - 1 - reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(edi4) - reinterpret_cast<uint32_t>(eax11)) % 2));
            } else {
                edx8 = eax11 + 0xffffffff;
            }
        }
    } else {
        edx8 = reinterpret_cast<unsigned char*>(0);
    }
    g477be4 = esi1;
    return edx8;
}

void fun_4487f5() {
    int32_t ebx1;
    int32_t ebx2;
    signed char dl3;

    *reinterpret_cast<signed char*>(ebx1 - 9) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx2 - 9) + dl3);
}

/* (image base) */
int32_t image_base_ = 0x44983b;

void fun_449659(int32_t ecx) {
    int32_t eax2;
    int32_t esi3;
    int32_t* eax4;
    int32_t* eax5;
    int32_t edx6;
    int32_t ecx7;
    int32_t* edx8;
    int32_t* edx9;
    int32_t ebx10;
    int32_t edx11;
    int32_t* ebx12;
    int32_t* ebx13;

    if (eax2) {
        esi3 = image_base_;
        image_base_ = *eax4;
        *eax5 = esi3;
    }
    if (edx6) {
        ecx7 = image_base_;
        image_base_ = *edx8;
        *edx9 = ecx7;
    }
    if (ebx10) {
        edx11 = image_base_;
        image_base_ = *ebx12;
        *ebx13 = edx11;
    }
    return;
}

int32_t fun_449641() {
    return 0;
}

struct s1195 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
    signed char[3] pad16;
    void** f10;
    signed char[3] pad20;
    void** f14;
};

struct s1196 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
    signed char[3] pad16;
    void** f10;
    signed char[3] pad20;
    void** f14;
    signed char[3] pad24;
    void** f18;
    signed char[3] pad28;
    void** f1c;
    signed char[3] pad32;
    void** f20;
    signed char[3] pad36;
    void** f24;
    signed char[3] pad40;
    void** f28;
    signed char[3] pad44;
    void** f2c;
    signed char[3] pad48;
    void** f30;
    signed char[3] pad52;
    void** f34;
    signed char[3] pad56;
    void** f38;
    signed char[3] pad60;
    void** f3c;
    signed char[3] pad64;
    void** f40;
};

struct s1197 {
    signed char[222] pad222;
    void** fde;
};

struct s1198 {
    int32_t f0;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
    signed char[3] pad16;
    void** f10;
    signed char[3] pad20;
    void** f14;
    signed char[3] pad24;
    void** f18;
    signed char[3] pad28;
    void** f1c;
    signed char[3] pad32;
    void** f20;
    signed char[3] pad36;
    void** f24;
    signed char[3] pad40;
    void** f28;
    signed char[3] pad44;
    void** f2c;
    signed char[3] pad48;
    void** f30;
    signed char[3] pad52;
    void** f34;
};

struct s515* fun_4497a4(void** a1) {
    void*** esp2;
    void** v3;
    int32_t edx4;
    void** v5;
    int32_t eax6;
    uint32_t eax7;
    struct s1195* esp8;
    struct s1196* esp9;
    void** eax10;
    void*** esp11;
    struct s1197* eax12;
    int32_t* esp13;
    void*** eax14;
    void*** esp15;
    int32_t* esp16;
    int32_t* esp17;
    int32_t* esp18;
    int32_t* esp19;
    struct s515* eax20;
    void*** esp21;
    struct s1198* esp22;

    esp2 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 16);
    v3 = *reinterpret_cast<void***>(a1);
    edx4 = g61834c;
    v5 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a1 + 20));
    if (edx4 || (eax6 = g477d88, eax7 = eax6 + 3, *reinterpret_cast<unsigned char*>(&eax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax7) & 0xfc), esp8 = reinterpret_cast<struct s1195*>(reinterpret_cast<uint32_t>(esp2) - eax7 - 4), esp8->f0 = 0x4497e4, fun_442b80(a1, esp8->f4, esp8->f8, esp8->fc, esp8->f10, esp8->f14), esp9 = reinterpret_cast<struct s1196*>(&esp8->f4 - 4), esp9->f0 = 0x4497eb, eax10 = fun_447f90(a1, esp9->f4, esp9->f8, esp9->fc, esp9->f10, esp9->f14, esp9->f18, esp9->f1c, esp9->f20, esp9->f24, esp9->f28, esp9->f2c, esp9->f30, esp9->f34, esp9->f38, esp9->f3c, esp9->f40), esp2 = &esp9->f4, !!eax10)) {
        esp11 = esp2 - 4;
        *esp11 = reinterpret_cast<void**>(0x449803);
        eax12 = reinterpret_cast<struct s1197*>(image_base_());
        eax12->fde = v5;
        esp13 = reinterpret_cast<int32_t*>(esp11 + 4 - 4);
        *esp13 = 0x44980f;
        eax14 = reinterpret_cast<void***>(image_base_());
        *eax14 = *reinterpret_cast<void***>(a1 + 12);
        esp15 = reinterpret_cast<void***>(esp13 + 1 - 1);
        *esp15 = *reinterpret_cast<void***>(a1 + 16);
        esp16 = reinterpret_cast<int32_t*>(esp15 - 4);
        *esp16 = 0x44981d;
        fun_449ca0();
        esp17 = esp16 + 1 - 1;
        *esp17 = 0x449825;
        fun_447d4c();
        esp18 = esp17 + 1 - 1;
        *esp18 = 0x44982b;
        image_base_();
        esp19 = esp18 + 1 - 1;
        *esp19 = 0x449830;
        v3();
        *(esp19 + 1 - 1) = 0x449835;
        eax20 = fun_44964b();
    } else {
        esp21 = esp2 - 4;
        *esp21 = v5;
        esp22 = reinterpret_cast<struct s1198*>(esp21 - 4);
        esp22->f0 = 0x4497f8;
        eax20 = fun_449d48(esp22->f4, esp22->f8, esp22->fc, esp22->f10, esp22->f14, esp22->f18, esp22->f1c, esp22->f20, esp22->f24, esp22->f28, esp22->f2c, esp22->f30, esp22->f34);
    }
    return eax20;
}

void** g4593bc = reinterpret_cast<void**>(95);

void** g4593c0 = reinterpret_cast<void**>(0x6e);

signed char g4593c4 = 0;

void** fun_44983b(void** ecx) {
    void* esp2;
    void** edx3;
    uint32_t eax4;
    void** v5;
    void** v6;
    void** v7;
    void** v8;
    void** v9;
    void** v10;
    void** eax11;
    void** v12;
    void** v13;
    void** v14;
    void** esp15;
    void* esp16;
    void** v17;
    void** v18;
    void** v19;
    int32_t ebx20;
    void** eax21;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 2 - 4 - 64);
    edx3 = g477a84;
    if (!reinterpret_cast<int1_t>(edx3 == 0xffffffff)) {
        addr_449866_2:
        fun_449c9a();
    } else {
        eax4 = fun_447f44(ecx);
        if (eax4) {
            fun_448054(ecx, v5, v6, v7, v8, v9, v10);
            esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 + 4 - 4 + 4);
            goto addr_449866_2;
        } else {
            eax11 = edx3;
            goto addr_449909_6;
        }
    }
    v12 = g4593bc;
    v13 = g4593c0;
    *reinterpret_cast<signed char*>(&v14) = g4593c4;
    fun_449cfa(v12, v13);
    fun_4475b9(ecx, v12, v13);
    esp15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp2) - 4 + 4 - 4 + 4 - 4 + 4);
    fun_449c94(0, 0, 0, esp15, v12, v13);
    esp16 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp15 - 4) - 4 - 4 - 4 - 4 + 4);
    v17 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp16) + 60);
    v18 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp16) - 4 - 4 + 40);
    v19 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx20 + 0xfff) & 0xfffff000);
    eax21 = fun_449c8e(0, v19, fun_4497a4, v18, 0, v17, 0, 0, 0, esp15, v12, v13);
    if (eax21) {
        fun_449cee(v14, 0xff, 0, v19, fun_4497a4, v18, 0, v17, 0, 0, 0, esp15, v12, v13);
    }
    fun_449d48(v14, 0, v19, fun_4497a4, v18, 0, v17, 0, 0, 0, esp15, v12, v13);
    eax11 = eax21;
    addr_449909_6:
    return eax11;
}

/* (image base) */
int32_t image_base_ = 0x447984;

void fun_449911(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    int1_t zf9;
    void** edx10;

    image_base_();
    fun_447d8a();
    zf9 = g61834c == 0;
    if (zf9) {
        fun_447fdd(ecx, edx10, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8);
    }
    fun_449c88();
    goto ecx;
}

void fun_4499f4() {
    goto joyGetPosEx;
}

void fun_410296() {
}

void fun_43c041() {
}

void fun_410169() {
}

void** fun_42fefb(int32_t ecx) {
    struct s419* edx2;
    void** eax3;

    edx2 = g5f12f8;
    if (!reinterpret_cast<int1_t>(edx2 == 0x5f0a68)) {
        edx2 = reinterpret_cast<struct s419*>(reinterpret_cast<uint32_t>(edx2) + 60);
        eax3 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edx2) + 0xffffffc4);
    } else {
        eax3 = reinterpret_cast<void**>(0x5f0f6c);
    }
    g5f12f8 = edx2;
    return eax3;
}

int32_t fun_43ca21() {
    void* edx1;

    edx1 = g60b898;
    g60b898 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx1) + 1);
    return 0;
}

void fun_43754d() {
}

struct s1199 {
    signed char[7] pad7;
    signed char f7;
};

uint32_t fun_4137c1(int32_t ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    signed char* eax8;
    signed char* eax9;
    signed char al10;
    signed char* eax11;
    signed char* eax12;
    signed char al13;
    signed char* eax14;
    signed char* eax15;
    signed char al16;
    signed char* eax17;
    signed char* eax18;
    signed char al19;
    signed char* eax20;
    signed char* eax21;
    signed char al22;
    signed char ah23;
    uint32_t eax24;
    struct s1199* eax25;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    *eax8 = reinterpret_cast<signed char>(*eax9 + al10);
    *eax11 = reinterpret_cast<signed char>(*eax12 + al13);
    *eax14 = reinterpret_cast<signed char>(*eax15 + al16);
    *eax17 = reinterpret_cast<signed char>(*eax18 + al19);
    *eax20 = reinterpret_cast<signed char>(*eax21 + al22);
    *reinterpret_cast<signed char*>(ecx + 0x481610) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ecx + 0x481610) + ah23);
    *reinterpret_cast<signed char*>(&eax24) = eax25->f7;
    return (eax24 & 0xff) * 8 + 8;
}

void fun_4435bf() {
    return;
}

void** fun_414e3b(void** ecx) {
    void** eax2;

    eax2 = fun_414db0(ecx);
    return eax2;
}

void fun_4150dc() {
}

void fun_41660d(signed char cl) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    int32_t ebx5;
    int32_t ebx6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *reinterpret_cast<signed char*>(ebx5 - 0x7f723d00) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(ebx6 - 0x7f723d00) + cl);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

void fun_437897() {
}

void fun_432d63() {
}

void** fun_43cb21(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18) {
    void** v19;
    void** v20;
    void** v21;
    void** v22;
    void** v23;
    void** v24;
    void** ebp25;
    void** esi26;
    void** edx27;
    void** eax28;
    int1_t zf29;
    void** eax30;
    void* esp31;
    void** esi32;
    struct s31* eax33;
    void* esp34;
    void* esp35;
    void** eax36;

    g60b88c = reinterpret_cast<void**>(0);
    eax28 = fun_41d410(ecx, v19, v20, v21, v22, v23, v24, ebp25, esi26, edx27, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
    if (!eax28 && (zf29 = g4835ec == 0, !zf29)) {
        g60b88c = reinterpret_cast<void**>(1);
        GetLastError();
        eax30 = reinterpret_cast<void**>(CreateFileA("\\\\.\\DMOUSE.VXD", 0x80000000, 1, 0, 3, 0x4000080, 0));
        if (reinterpret_cast<int1_t>(eax30 == 0xffffffff)) {
            eax30 = reinterpret_cast<void**>(0);
        }
        g60b844 = eax30;
        GetLastError("\\\\.\\DMOUSE.VXD", 0x80000000, 1, 0, 3, 0x4000080, 0);
        esp31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 24 - 4 + 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
        esi32 = g60b844;
        if (esi32) {
            g60b88c = reinterpret_cast<void**>(1);
            if (!esi32 || reinterpret_cast<int1_t>(esi32 == 0xffffffff)) {
                eax33 = reinterpret_cast<struct s31*>(0);
            } else {
                esp34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp31) - 4 - 4 - 4);
                DeviceIoControl(esi32, 2, 0, 0);
                esp31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp34) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
                eax33 = reinterpret_cast<struct s31*>(reinterpret_cast<int32_t>(esp34) + 28);
            }
            g60b848 = eax33;
            eax28 = g60b844;
            if (eax28 && eax28 != 0xffffffff) {
                esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp31) - 4);
                eax28 = reinterpret_cast<void**>(DeviceIoControl(eax28, 1, 0, 0, reinterpret_cast<int32_t>(esp35) - 4 - 4 + 12, 12, reinterpret_cast<int32_t>(esp35) + 24, 0, "\\\\.\\DMOUSE.VXD", 0x80000000, 1, 0, 0, 0x4000080, 0));
            }
        } else {
            eax36 = reinterpret_cast<void**>(GetLastError("\\\\.\\DMOUSE.VXD", 0x80000000, 1, 0, 3, 0x4000080, 0));
            eax28 = fun_437a90(ecx, "MouseOpen %d", eax36, "\\\\.\\DMOUSE.VXD", 0x80000000, 1, 0, 3, 0x4000080, ecx, "MouseOpen %d", eax36, "\\\\.\\DMOUSE.VXD", 0x80000000, 1, 0, 3, 0x4000080);
            g60b88c = esi32;
        }
    }
    return eax28;
}

void fun_417a7d() {
}

void fun_417b3e() {
}

void fun_41d4b1() {
}

struct s44* fun_418199(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40, void** a41, void** a42, void** a43, void** a44, void** a45, void** a46, void** a47, void** a48, void** a49, void** a50, void** a51, void** a52, void** a53, void** a54, void** a55, void** a56, void** a57, void** a58, void** a59, void** a60, void** a61, void** a62) {
    struct s44* eax63;
    struct s44* eax64;
    void** v65;
    void** ebx66;
    void** ebx67;
    void** ebx68;
    int32_t edx69;
    int32_t edx70;
    void** ebx71;
    void** dl72;
    void** edx73;
    void** ebx74;

    eax63 = eax64;
    v65 = ecx;
    ebx66 = g4829e0;
    ecx = *reinterpret_cast<void***>(ebx66);
    if (!reinterpret_cast<int1_t>(ecx == 0x80)) {
        ebx67 = ebx66 + 1;
        eax63->f0 = ecx;
        ebx68 = ebx67 + 1;
        eax63->f1 = *reinterpret_cast<void***>(ebx67);
        edx69 = 0;
        *reinterpret_cast<void***>(&edx69) = *reinterpret_cast<void***>(ebx68);
        edx70 = edx69 << 8;
        ebx71 = ebx68 + 1 + 1;
        eax63->f2 = *reinterpret_cast<int16_t*>(&edx70);
        dl72 = *reinterpret_cast<void***>(ebx71 + 0xffffffff);
        g4829e0 = ebx71;
        eax63->f7 = dl72;
    } else {
        eax63 = fun_418530(ecx, edx73, v65, ebx74, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61, a62);
    }
    return eax63;
}

void fun_418358() {
}

void fun_41b5ae() {
}

void** fun_41b7fe(void** ecx) {
    void** edx2;
    void** eax3;
    void** ebx4;
    void** eax5;

    g483590 = reinterpret_cast<void**>(1);
    eax3 = fun_434890(ecx, edx2, ecx);
    eax5 = fun_433eb0(eax3, edx2, ecx, ebx4);
    return eax5;
}

void** fun_41b999(void** ecx) {
    void** edx2;
    void** eax3;
    void** ebx4;
    void** eax5;
    void** eax6;

    eax3 = fun_434890(ecx, edx2, ecx);
    fun_433eb0(eax3, edx2, ecx, ebx4);
    eax5 = fun_434890(eax3, edx2, ecx);
    eax6 = fun_433eb0(eax5, edx2, ecx, ebx4);
    return eax6;
}

void fun_41bac9() {
    int32_t eax1;

    if (eax1 == 0x79) {
        fun_417ed0();
        g4835cc = reinterpret_cast<void**>(0);
    }
    return;
}

void fun_417f59() {
}

void** g4644b6 = reinterpret_cast<void**>(0);

void fun_41bd0a() {
    void** ax1;

    ax1 = g4644b6;
    g48357c = reinterpret_cast<void**>(0x4644a4);
    g4835d4 = ax1;
    return;
}

void** g464506 = reinterpret_cast<void**>(0);

void fun_41be7a() {
    void** ax1;

    ax1 = g464506;
    g48357c = reinterpret_cast<void**>(0x4644f4);
    g4835d4 = ax1;
    return;
}

void fun_41c196(int32_t ecx) {
    void** ecx2;
    void** eax3;
    void** edx4;
    void** ebx5;

    ecx2 = g4835cc;
    g4835b0 = eax3;
    g48359c = edx4;
    g48358c = ecx2;
    g483588 = ebx5;
    g4835b8 = reinterpret_cast<void**>(1);
    g4835cc = reinterpret_cast<void**>(1);
    return;
}

struct s1200 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s1201 {
    signed char[20] pad20;
    void** f14;
};

void fun_41e89b(void** ecx) {
    void** eax2;
    struct s1200* edx3;
    struct s1201* edx4;

    eax2 = *reinterpret_cast<void***>(ecx + 4);
    edx3->f1c = -1;
    edx4->f14 = eax2;
    fun_4312d0(ecx, __return_address());
    goto 0x41e7c3;
}

void fun_41eb8b(int32_t ecx) {
}

void** fun_41f97a(void** ecx) {
    void** eax2;
    void** eax3;
    void** esi4;
    void** eax5;

    eax2 = eax3;
    if (*reinterpret_cast<void***>(eax2 + 0x78) && (fun_41f670(ecx), eax2 = fun_41ed30(ecx), !!eax2)) {
        eax5 = fun_41d460(ecx, esi4);
        eax2 = fun_422370(reinterpret_cast<signed char>(eax5) % 10 * 4 + 4);
    }
    return eax2;
}

void fun_41ff5d(void** ecx) {
    void** edx2;

    fun_4312d0(ecx, edx2);
    fun_41ffa0(ecx);
    return;
}

void fun_420158(int32_t ecx) {
    void** eax2;
    void** eax3;
    uint32_t* ebx4;
    uint32_t esi5;

    fun_41f670(eax2);
    *reinterpret_cast<signed char*>(eax2 + 35) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax2 + 35) + 8);
    fun_4258c0(eax2);
    eax3 = fun_4258c0(eax2);
    *reinterpret_cast<signed char*>(eax3 + 35) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax3 + 35) + 8);
    ebx4 = image_base_;
    esi5 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax3 + 32)) >> 19;
    __asm__("shrd eax, edx, 0x10");
    *reinterpret_cast<void***>(eax3 + 72) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax3 + 92) + 60)) * ebx4[esi5]);
    __asm__("shrd eax, edx, 0x10");
    *reinterpret_cast<void***>(eax3 + 76) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax3 + 92) + 60)) * *reinterpret_cast<uint32_t*>(esi5 * 4 + 0x46a9e0));
    return;
}

void** fun_420580(void** ecx) {
    void** edx2;
    void** eax3;

    eax3 = fun_4312d0(ecx, edx2);
    return eax3;
}

void fun_4205d2() {
}

void** fun_420828(void** ecx) {
    void** edx2;
    void** eax3;

    fun_4312d0(ecx, edx2);
    eax3 = fun_41f490(ecx);
    return eax3;
}

void fun_420af8() {
}

struct s1202 {
    signed char[24] pad24;
    int32_t f18;
};

struct s1203 {
    signed char[38] pad38;
    int32_t f26;
};

struct s1204 {
    signed char[20] pad20;
    void** f14;
};

struct s1205 {
    signed char[34] pad34;
    void** f22;
};

struct s1206 {
    signed char[36] pad36;
    int16_t f24;
};

struct s1207 {
    signed char[36] pad36;
    int16_t f24;
};

void fun_42100e(void** ecx) {
    struct s1202* ebx2;
    struct s1203* ebx3;
    struct s1204* ebx4;
    void** eax5;
    struct s1205* ebx6;
    struct s1206* ebx7;
    struct s1207* ebx8;

    ebx2->f18 = -1;
    ebx3->f26 = 0x40000;
    ebx4->f14 = ecx;
    eax5 = fun_427fc0(ecx, __return_address());
    ebx6->f22 = eax5;
    if (eax5 == *reinterpret_cast<void***>(ecx)) 
        goto 0x420f61;
    ebx7->f24 = reinterpret_cast<int16_t>(ebx8->f24 + 8);
    goto 0x420f61;
}

struct s1208 {
    signed char[24] pad24;
    int32_t f18;
};

struct s1209 {
    signed char[20] pad20;
    int32_t f14;
};

struct s1210 {
    signed char[20] pad20;
    int32_t* f14;
};

struct s1211 {
    signed char[38] pad38;
    int32_t f26;
};

struct s1212 {
    signed char[34] pad34;
    int32_t f22;
};

void fun_4210c4(int32_t ecx) {
    struct s1208* ebx2;
    struct s1209* ebx3;
    int32_t* eax4;
    struct s1210* ebx5;
    struct s1211* ebx6;
    struct s1212* ebx7;

    ebx2->f18 = 1;
    ebx3->f14 = ecx;
    eax4 = ebx5->f14;
    ebx6->f26 = 0x10000;
    ebx7->f22 = *eax4 + 0x180000;
    goto 0x420f61;
}

struct s1213 {
    int32_t f0;
    signed char[4] pad8;
    uint32_t f8;
    void** fc;
};

void** fun_426275(int32_t ecx) {
    void** eax2;
    void** edi3;
    void** esi4;
    struct s1213* edx5;
    void** eax6;
    void** eax7;
    uint32_t esi8;
    uint32_t* eax9;
    uint32_t esi10;
    void** eax11;

    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2) + 100) == 0x45b25c || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2) + 100) == 0x45b278)) {
        fun_424ae0(eax2, edi3, esi4);
    }
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax2 + 0x70) == 7) && edx5->f0 == 0x45a8d8) {
        fun_4312d0(eax2, edi3);
    }
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax2 + 0x74) == 10) || !*reinterpret_cast<void***>(eax2 + 32)) {
        eax6 = fun_425fc0(eax2);
        return eax6;
    } else {
        if (!(*reinterpret_cast<unsigned char*>(eax2 + 15) & 1)) {
            *reinterpret_cast<void***>(eax2 + 0xbc) = reinterpret_cast<void**>(0);
        } else {
            if (!*reinterpret_cast<void***>(eax2 + 0xbc) || *reinterpret_cast<void***>(eax2 + 0x70) != 4 && *reinterpret_cast<void***>(eax2 + 0x70) != 6) {
                *reinterpret_cast<void***>(eax2 + 0xbc) = reinterpret_cast<void**>(1);
                eax7 = fun_4263b0(eax2);
                return eax7;
            }
        }
        esi8 = g484d04;
        eax9 = image_base_;
        esi10 = esi8 << 7 & 0x1fff;
        __asm__("shrd eax, edx, 0x10");
        edx5->f8 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 28)) * eax9[esi10] + 0x10000;
        __asm__("shrd eax, edx, 0x10");
        eax11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 28)) * *reinterpret_cast<uint32_t*>((esi10 & 0xfff) * 4 + 0x46a9e0) + 0x200000);
        edx5->fc = eax11;
        return eax11;
    }
}

void fun_423ccc() {
}

void fun_42428d() {
}

void fun_425843() {
}

void fun_425e62() {
}

struct s1214 {
    signed char[16] pad16;
    int32_t f10;
};

struct s1215 {
    signed char[20] pad20;
    void** f14;
};

struct s1216 {
    signed char[20] pad20;
    void** f14;
};

struct s1217 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s1218 {
    signed char[24] pad24;
    void** f18;
};

struct s1219 {
    signed char[36] pad36;
    int32_t f24;
};

void fun_425d72(void** ecx) {
    struct s1214* ebx2;
    void** eax3;
    struct s1215* ebx4;
    struct s1216* ebx5;
    void** eax6;
    struct s1217* esi7;
    struct s1218* esi8;
    struct s1219* esi9;

    ebx2->f10 = 0x40000;
    eax3 = fun_427f70(ecx, __return_address());
    ebx4->f14 = eax3;
    if (reinterpret_cast<signed char>(eax3) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx))) {
        ebx5->f14 = *reinterpret_cast<void***>(ecx);
    }
    eax6 = *reinterpret_cast<void***>(ecx);
    esi7->f1c = 0x69;
    esi8->f18 = eax6;
    esi9->f24 = 1;
    fun_4312d0(ecx, __return_address());
    fun_425f20(ecx, __return_address());
    goto 0x425c3f;
}

void fun_426088() {
}

struct s1220 {
    signed char[12] pad12;
    int32_t fc;
};

struct s1221 {
    signed char[12] pad12;
    int32_t fc;
};

struct s1222 {
    signed char[12] pad12;
    int32_t fc;
};

void** fun_42648c(int32_t ecx) {
    void** eax2;
    void** eax3;
    int32_t ebx4;
    struct s1220* edx5;
    struct s1221* edx6;
    struct s1222* edx7;

    eax2 = eax3;
    ebx4 = edx5->fc - 0x60000;
    edx6->fc = ebx4;
    if (ebx4 <= 0x200000) {
        edx7->fc = 0x200000;
        eax2 = fun_425fc0(eax2);
    }
    return eax2;
}

struct s1223 {
    signed char[112] pad112;
    int32_t f70;
};

void** fun_4266eb(void** ecx) {
    struct s1223* eax2;
    void** eax3;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax2) + *reinterpret_cast<int32_t*>((eax2->f70 * 4 - eax2->f70) * 8 + 0x464cc8) * 4 + 0x9c) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax2) + *reinterpret_cast<int32_t*>((eax2->f70 * 4 - eax2->f70) * 8 + 0x464cc8) * 4 + 0x9c) - 40;
    eax3 = fun_4259b0(ecx);
    return eax3;
}

struct s1224 {
    signed char[232] pad232;
    int32_t fe8;
};

void fun_426b0b(int32_t ecx) {
    struct s1224* eax2;

    eax2->fe8 = 2;
    return;
}

void fun_428a6a() {
}

struct s1225 {
    signed char[16] pad16;
    int32_t f10;
};

struct s1226 {
    signed char[16] pad16;
    int32_t f10;
};

struct s1228 {
    signed char[12] pad12;
    int16_t fc;
};

struct s1227 {
    signed char[12] pad12;
    struct s1228* fc;
};

struct s1229 {
    signed char[20] pad20;
    int32_t f14;
};

struct s1230 {
    signed char[20] pad20;
    int16_t f14;
};

struct s1231 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s1232 {
    signed char[24] pad24;
    int16_t f18;
};

struct s1233 {
    signed char[32] pad32;
    int32_t f20;
};

struct s1234 {
    signed char[16] pad16;
    int32_t f10;
};

void fun_422830(int32_t ecx) {
    int32_t edx2;
    struct s1225* eax3;
    struct s1226* eax4;
    struct s1227* eax5;
    struct s1229* eax6;
    struct s1230* eax7;
    int32_t edx8;
    struct s1231* eax9;
    struct s1232* eax10;
    struct s1233* eax11;
    struct s1234* eax12;

    edx2 = eax3->f10 - 1;
    eax4->f10 = edx2;
    if (!edx2) {
        if (static_cast<int32_t>(eax5->fc->fc) != eax6->f14) {
            eax5->fc->fc = eax7->f14;
            edx8 = eax9->f1c;
        } else {
            eax5->fc->fc = eax10->f18;
            edx8 = eax11->f20;
        }
        eax12->f10 = edx8;
    }
    return;
}

void fun_41ec48() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
}

struct s1235 {
    signed char[16] pad16;
    int32_t f10;
};

struct s1236 {
    signed char[16] pad16;
    int32_t f10;
};

struct s1238 {
    signed char[12] pad12;
    int16_t fc;
};

struct s1237 {
    signed char[12] pad12;
    struct s1238* fc;
};

struct s1239 {
    signed char[16] pad16;
    uint32_t f10;
    int16_t f14;
    signed char[2] pad24;
    int16_t f18;
    signed char[2] pad28;
    uint32_t f1c;
    uint32_t f20;
};

void fun_422780(void** ecx) {
    int32_t ebx2;
    struct s1235* eax3;
    struct s1236* eax4;
    struct s1237* eax5;
    struct s1239* eax6;
    void** esi7;
    void** eax8;
    uint32_t eax9;
    void** eax10;

    ebx2 = eax3->f10 - 1;
    eax4->f10 = ebx2;
    if (!ebx2) {
        if (static_cast<int32_t>(eax5->fc->fc) != eax6->f14) {
            eax5->fc->fc = eax6->f14;
            eax8 = fun_41d460(ecx, esi7);
            eax9 = reinterpret_cast<unsigned char>(eax8) & eax6->f1c;
        } else {
            eax5->fc->fc = eax6->f18;
            eax10 = fun_41d460(ecx, esi7);
            eax9 = reinterpret_cast<unsigned char>(eax10) & eax6->f20;
        }
        eax6->f10 = eax9 + 1;
    }
    return;
}

struct s1240 {
    signed char[87] pad87;
    signed char f57;
};

struct s1241 {
    signed char[87] pad87;
    signed char f57;
};

void fun_42fa95() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;
    signed char* eax7;
    signed char* eax8;
    signed char al9;
    signed char* eax10;
    signed char* eax11;
    signed char al12;
    signed char* eax13;
    signed char* eax14;
    signed char al15;
    struct s1240* esi16;
    struct s1241* esi17;
    signed char dl18;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
    *eax7 = reinterpret_cast<signed char>(*eax8 + al9);
    *eax10 = reinterpret_cast<signed char>(*eax11 + al12);
    *eax13 = reinterpret_cast<signed char>(*eax14 + al15);
    esi16->f57 = reinterpret_cast<signed char>(esi17->f57 + dl18);
}

void fun_41aca5() {
}

void fun_41ac85() {
    goto 0x441100;
}

void fun_41ac75() {
}

void fun_431de3() {
}

void fun_434636() {
}

void fun_4352a3() {
}

void fun_435f35() {
}

void fun_4374f2() {
}

void fun_4377e9(int32_t ecx) {
    void** v2;
    void** edi3;
    void** v4;
    void** ebp5;
    void** ebx6;
    void** eax7;
    void** edx8;
    void** ecx9;
    void** edx10;
    void** edx11;
    void** v12;
    void** eax13;

    v2 = edi3;
    v4 = ebp5;
    ebx6 = eax7;
    edx8 = g60aff8;
    ecx9 = *reinterpret_cast<void***>(edx8);
    fun_442b98(ecx9, eax7, "zone size: %i  location: %p\n", ecx9, edx8);
    edx10 = g60aff8;
    edx11 = *reinterpret_cast<void***>(edx10 + 20);
    while (v12 = *reinterpret_cast<void***>(edx11), fun_442b98(ecx9, ebx6, "block:%p    size:%7i    user:%p    tag:%3i\n", edx11, v12, ecx9, ebx6, "block:%p    size:%7i    user:%p    tag:%3i\n", edx11, v12), eax13 = g60aff8, ecx9 = *reinterpret_cast<void***>(edx11 + 16), eax13 + 4 != ecx9) {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx11)) + reinterpret_cast<unsigned char>(edx11) != ecx9) {
            fun_442b98(ecx9, ebx6, "ERROR: block size does not touch the next block\n", v4, v2, ecx9, ebx6, "ERROR: block size does not touch the next block\n", v4, v2);
        }
        if (edx11 != *reinterpret_cast<void***>(*reinterpret_cast<void***>(edx11 + 16) + 20)) {
            fun_442b98(ecx9, ebx6, "ERROR: next block doesn't have proper back link\n", v4, v2, ecx9, ebx6, "ERROR: next block doesn't have proper back link\n", v4, v2);
        }
        if (!*reinterpret_cast<void***>(edx11 + 4) && !*reinterpret_cast<void***>(*reinterpret_cast<void***>(edx11 + 16) + 4)) {
            fun_442b98(ecx9, ebx6, "ERROR: two consecutive free blocks\n", v4, v2, ecx9, ebx6, "ERROR: two consecutive free blocks\n", v4, v2);
        }
        edx11 = *reinterpret_cast<void***>(edx11 + 16);
    }
}

signed char* fun_4379d6(struct s35* ecx) {
    signed char* eax2;
    signed char* eax3;
    void* esp4;
    signed char* ebx5;
    int1_t zf6;
    int32_t eax7;
    int32_t v8;
    struct s35* eax9;
    int1_t zf10;
    void* v11;
    signed char* edi12;
    int32_t ecx13;
    struct s35* ebx14;

    eax2 = eax3;
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    ebx5 = eax2;
    zf6 = g60affc == 0;
    if (zf6) {
        eax7 = reinterpret_cast<int32_t>(GetLastError());
        v8 = eax7;
        eax9 = reinterpret_cast<struct s35*>(CreateFileA("\\\\.\\mailslot\\debugout", 0x40000000, 3, 0, 3, 0, 0, v8));
        g60b004 = eax9;
        eax2 = reinterpret_cast<signed char*>(GetLastError("\\\\.\\mailslot\\debugout", 0x40000000, 3, 0, 3, 0, 0, v8));
        esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
        ecx = g60b004;
        if (!reinterpret_cast<int1_t>(ecx == -1)) {
            g60b000 = reinterpret_cast<struct s35*>(1);
        } else {
            g60b004 = reinterpret_cast<struct s35*>(0);
            g60b000 = reinterpret_cast<struct s35*>(0);
        }
        g60affc = 1;
    }
    zf10 = g60b000 == 0;
    if (!zf10) {
        v11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp4) - 4 + 4);
        edi12 = ebx5;
        ecx13 = reinterpret_cast<int32_t>(ecx) - reinterpret_cast<int32_t>(ecx) - 1;
        do {
            if (!ecx13) 
                break;
            --ecx13;
            ++edi12;
        } while (*edi12);
        ebx14 = g60b004;
        eax2 = reinterpret_cast<signed char*>(WriteFile(ebx14, ebx5, ~ecx13 - 1, v11, 0, v8));
    }
    return eax2;
}

void fun_438b44() {
}

void fun_44415f(signed char* ecx) {
    *ecx = reinterpret_cast<signed char>(*ecx + *reinterpret_cast<signed char*>(&ecx));
}

void fun_43b9fe(int32_t ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    int32_t eax5;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    eax5 = reinterpret_cast<int32_t>(CreateFileA());
    if (eax5 == -1) {
    }
    goto 1;
}

void fun_43b533() {
}

void fun_4426ba() {
}

void fun_43f582() {
}

void fun_43f863() {
}

struct s1242 {
    signed char[16] pad16;
    int32_t f10;
};

struct s1243 {
    signed char[16] pad16;
    int32_t f10;
};

void fun_442b37(int32_t ecx) {
    signed char* edx2;
    signed char** eax3;
    int32_t* eax4;
    signed char dl5;
    struct s1242* eax6;
    struct s1243* eax7;

    edx2 = *eax3;
    *eax4 = reinterpret_cast<int32_t>(edx2 + 1);
    *edx2 = dl5;
    eax6->f10 = eax7->f10 + 1;
    return;
}

int32_t fun_445170(void** a1, void** a2, void** a3, void** a4) {
    fun_44515b(__return_address(), a1, a2, a3, a4);
    return -1;
}

void** fun_442e0b(void** ecx, void** a2) {
    void** eax3;
    int1_t zf4;
    void** ebp5;
    void** edi6;
    void** esi7;
    void** eax8;
    void** ebx9;
    void** eax10;

    eax3 = fun_442bb9(ecx);
    if (eax3) {
        image_base_();
        zf4 = g477ad4 == 0;
        if (!zf4) {
            g477ad4();
        }
        eax8 = fun_442d91(ecx, ebp5, edi6, esi7, ecx, __return_address(), a2);
        ebx9 = eax8;
        if (eax8) {
            *reinterpret_cast<void***>(eax8 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax8 + 12)) & 0x4000);
            eax10 = fun_442c8a(0, eax8);
            ebx9 = eax10;
        }
        image_base_();
        eax3 = ebx9;
    }
    return eax3;
}

void fun_447daa() {
    return;
}

void fun_445fc4() {
    return;
}

struct s1244 {
    signed char f0;
    signed char[31] pad32;
    void** f20;
};

int32_t fun_44602d(int32_t ecx) {
    void** eax2;
    struct s1244* edx3;
    int32_t eax4;

    fun_445fe3(eax2);
    *reinterpret_cast<signed char*>(eax2 + 21) = edx3->f0;
    *reinterpret_cast<void***>(eax2 + 26) = edx3->f20;
    eax4 = fun_4439f9(eax2);
    *reinterpret_cast<signed char*>(eax2 + 0x11d) = 0;
    return eax4;
}

int16_t g477cec = 0;

void fun_4443e7() {
    int1_t zf1;
    int32_t edx2;

    zf1 = g477cec == 0;
    if (zf1) {
        g477cec = 1;
        fun_44741c(edx2, __return_address());
    }
    return;
}

void** fun_4452da() {
    void** eax1;

    eax1 = g618350;
    return eax1;
}

void fun_4487fb(int32_t a1, int32_t a2) {
    int1_t less_or_equal3;
    int32_t ebx4;
    uint32_t tmp32_5;
    int32_t eax6;
    int32_t eax7;
    uint32_t edx8;
    int32_t edx9;
    int32_t edx10;
    uint32_t eax11;

    if (!less_or_equal3) {
        g477d88 = ebx4;
        goto a2;
    } else {
        __asm__("aas ");
        tmp32_5 = reinterpret_cast<uint32_t>(eax6 + eax7);
        __asm__("rcr ebx, 1");
        edx8 = edx9 + edx10 + reinterpret_cast<uint1_t>(tmp32_5 < eax11) + reinterpret_cast<uint1_t>(tmp32_5 + 0x20000000 < tmp32_5);
        if (!edx8 || edx8 >= 0x8fe00000) {
            goto a1;
        } else {
            if (edx8 < 0x70200000) {
                goto a1;
            } else {
                goto a1;
            }
        }
    }
}

void fun_448888() {
    image_base_(__return_address());
}

void fun_447deb() {
    goto fun_447e5e;
}

int32_t fun_448272() {
    int32_t edx1;
    int32_t eax2;

    image_base_();
    edx1 = g477d70;
    g477d70 = eax2;
    image_base_();
    return edx1;
}

struct s1245 {
    signed char[80] pad80;
    signed char f50;
};

struct s1246 {
    signed char[80] pad80;
    signed char f50;
};

void fun_44845b() {
    struct s1245* esi1;
    struct s1246* esi2;
    signed char ah3;

    esi1->f50 = reinterpret_cast<signed char>(esi2->f50 + ah3);
}

void fun_448868() {
}

struct s576* fun_449178(int32_t ecx) {
    struct s576* eax2;

    image_base_();
    eax2 = fun_44915a(ecx);
    return eax2;
}

void fun_449644() {
    image_base_();
    return;
}

void fun_4499fa() {
    goto joyGetDevCapsA;
}

void fun_43ca51() {
}

void fun_42ceee() {
}

void fun_4137e8() {
}

void fun_414e4a() {
}

void** fun_41b82e(void** ecx) {
    void** edx2;
    void** eax3;
    void** ebx4;
    void** eax5;

    g483590 = reinterpret_cast<void**>(1);
    eax3 = fun_434890(ecx, edx2, ecx);
    eax5 = fun_433eb0(eax3, edx2, ecx, ebx4);
    return eax5;
}

void** g464352 = reinterpret_cast<void**>(0);

void fun_41b9eb(int32_t ecx) {
    int1_t zf2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    void** ax6;
    void** eax7;

    zf2 = g482a84 == 0;
    if (zf2 || (zf3 = g482a64 == 0, !zf3)) {
        zf4 = g481250 == 0;
        if (zf4) {
            zf5 = g481264 == 0;
            if (zf5) {
                ax6 = g464352;
                g48357c = reinterpret_cast<void**>(0x464340);
            } else {
                ax6 = g4643be;
                g48357c = reinterpret_cast<void**>(0x4643ac);
            }
        } else {
            g48357c = reinterpret_cast<void**>(0x464408);
            ax6 = g46441a;
        }
        g4835d4 = ax6;
    } else {
        eax7 = g4835cc;
        g48358c = eax7;
        g4835b8 = reinterpret_cast<void**>(1);
        g4835b0 = reinterpret_cast<void**>("you can't start a new game\nwhile in a network game.\n\npress a key.");
        g48359c = reinterpret_cast<void**>(0);
        g483588 = reinterpret_cast<void**>(0);
        g4835cc = reinterpret_cast<void**>(1);
    }
    return;
}

void fun_41bd2a() {
}

void fun_41be9a() {
    void** ax1;

    ax1 = g4642fa;
    g48357c = reinterpret_cast<void**>(0x4642e8);
    g4835d4 = ax1;
    return;
}

void fun_41c1d1() {
    void** eax1;

    eax1 = g48358c;
    g4835cc = eax1;
    g4835b8 = reinterpret_cast<void**>(0);
    return;
}

struct s1247 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s1248 {
    signed char[24] pad24;
    int32_t f18;
};

struct s1249 {
    signed char[20] pad20;
    void** f14;
};

struct s1250 {
    signed char[20] pad20;
    void** f14;
};

struct s1251 {
    signed char[20] pad20;
    void** f14;
};

void fun_41e8bd(void** ecx) {
    struct s1247* ebx2;
    void** eax3;
    struct s1248* ebx4;
    struct s1249* ebx5;
    struct s1250* ebx6;
    struct s1251* ebx7;

    ebx2->f1c = 1;
    eax3 = fun_4280d0(ecx, __return_address());
    ebx4->f18 = 0x80000;
    ebx5->f14 = eax3;
    ebx6->f14 = eax3 - 0x40000;
    if (ebx7->f14 == *reinterpret_cast<void***>(ecx + 4)) 
        goto 0x41e7c3;
    fun_4312d0(ecx, __return_address());
    goto 0x41e7c3;
}

void fun_41ff78(void** ecx) {
    void** edx2;

    fun_4312d0(ecx, edx2);
    fun_41ffa0(ecx);
    return;
}

void fun_4201d1(int32_t ecx) {
    void** eax2;
    void** eax3;
    void** ebx4;
    uint32_t* ebx5;
    uint32_t esi6;

    fun_41f670(eax2);
    *reinterpret_cast<void***>(eax2 + 32) = *reinterpret_cast<void***>(eax2 + 32) - 0x8000000;
    fun_4258c0(eax2);
    eax3 = fun_4258c0(eax2);
    ebx4 = *reinterpret_cast<void***>(eax3 + 32) - 0x10000000;
    *reinterpret_cast<void***>(eax3 + 32) = ebx4;
    ebx5 = image_base_;
    esi6 = reinterpret_cast<unsigned char>(ebx4) >> 19;
    __asm__("shrd eax, edx, 0x10");
    *reinterpret_cast<void***>(eax3 + 72) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax3 + 92) + 60)) * ebx5[esi6]);
    __asm__("shrd eax, edx, 0x10");
    *reinterpret_cast<void***>(eax3 + 76) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax3 + 92) + 60)) * *reinterpret_cast<uint32_t*>(esi6 * 4 + 0x46a9e0));
    return;
}

void** fun_42058d(void** ecx) {
    void** eax2;
    void** eax3;
    void** edx4;

    eax2 = eax3;
    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2 + 92) + 36)) {
        eax2 = fun_4312d0(ecx, edx4);
    }
    return eax2;
}

void** fun_420848(void** ecx) {
    void** edx2;
    void** eax3;

    fun_4312d0(ecx, edx2);
    eax3 = fun_41f490(ecx);
    return eax3;
}

struct s1252 {
    signed char[24] pad24;
    int32_t f18;
};

struct s1253 {
    signed char[20] pad20;
    int32_t f14;
};

struct s1254 {
    signed char[20] pad20;
    int32_t* f14;
};

struct s1255 {
    signed char[38] pad38;
    int32_t f26;
};

struct s1256 {
    signed char[34] pad34;
    int32_t f22;
};

void fun_4210e7(int32_t ecx) {
    struct s1252* ebx2;
    struct s1253* ebx3;
    int32_t* eax4;
    struct s1254* ebx5;
    struct s1255* ebx6;
    struct s1256* ebx7;

    ebx2->f18 = 1;
    ebx3->f14 = ecx;
    eax4 = ebx5->f14;
    ebx6->f26 = 0x10000;
    ebx7->f22 = *eax4 + 0x2000000;
    goto 0x420f61;
}

void** fun_42671c(void** ecx) {
    void** eax2;
    void** eax3;

    *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2 + *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x70)) * 4 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x70))) * 8 + 0x464cc8) * 4) + 0x9c) = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(eax2 + *reinterpret_cast<int32_t*>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x70)) * 4 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax2 + 0x70))) * 8 + 0x464cc8) * 4) + 0x9c) - 1;
    fun_41d460(eax2, ecx);
    fun_425fc0(eax2);
    eax3 = fun_4259b0(eax2);
    return eax3;
}

void** fun_426b1b(void** ecx) {
    void** ecx2;
    void** v3;
    void** ebp4;
    int32_t esi5;
    void** eax6;
    void** edx7;
    int32_t edx8;
    void** eax9;

    ecx2 = ecx;
    v3 = ebp4;
    esi5 = 0;
    do {
        eax6 = fun_423b30(ecx2);
        edx7 = g4837b0;
        if (edx7) {
            fun_425180(42);
            ecx2 = reinterpret_cast<void**>(0);
            edx8 = 0;
            do {
                eax9 = fun_41d460(ecx2, v3);
                ++edx8;
                ecx2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx2) + ((reinterpret_cast<unsigned char>(eax9) & 7) + 1));
            } while (edx8 < 15);
            eax6 = fun_422370(ecx2);
        }
        esi5 = esi5 + 0x1999999;
    } while (esi5 != 0x3fffffe8);
    return eax6;
}

void fun_41ac95() {
}

int32_t fun_445fc5(int32_t a1) {
    int32_t eax2;

    return eax2;
}

int32_t fun_446068(int32_t ecx) {
    int32_t esi2;
    int32_t eax3;
    unsigned char v4;
    unsigned char edx5;
    unsigned char ah6;
    uint32_t* ebx7;
    int32_t ebx8;
    int32_t eax9;

    esi2 = eax3;
    v4 = edx5;
    ah6 = reinterpret_cast<unsigned char>(v4 | 0xa1);
    v4 = ah6;
    if (ah6 & 8) {
        v4 = reinterpret_cast<unsigned char>(ah6 & 0xf7);
    }
    do {
        if (!*ebx7) 
            break;
        if (v4 & *ebx7) 
            break;
        eax9 = fun_449d1e(esi2, ebx8);
    } while (eax9);
    goto addr_4460a5_6;
    eax9 = 1;
    addr_4460a5_6:
    return eax9;
}

void fun_4452e0() {
    goto fun_445d0b;
}

void fun_447df8() {
    goto fun_447ec0;
}

void fun_44918f(int32_t ecx) {
    uint32_t edx2;
    uint32_t eax3;
    uint32_t eax4;
    unsigned char cl5;
    uint32_t ecx6;
    unsigned char ch7;
    uint32_t edx8;

    edx2 = eax3;
    eax4 = g477e2e;
    cl5 = *reinterpret_cast<unsigned char*>(&g477e2e);
    *reinterpret_cast<unsigned char*>(&g477e2e) = reinterpret_cast<unsigned char>(cl5 & 0xfe);
    ecx6 = g477e2e;
    g477e2e = ecx6 | ~(eax4 & 1) & 1;
    *reinterpret_cast<unsigned char*>(&edx2) = reinterpret_cast<uint1_t>(!!edx2);
    ch7 = *reinterpret_cast<unsigned char*>(&g477e2e);
    edx8 = edx2 & 1;
    *reinterpret_cast<unsigned char*>(&g477e2e) = reinterpret_cast<unsigned char>(ch7 & 0xfd);
    g477e2e = g477e2e | edx8 + edx8;
    return;
}

void fun_449a00() {
    goto joyGetNumDevs;
}

void** fun_41b85e(void** ecx) {
    void** edx2;
    void** eax3;
    void** ebx4;
    void** ecx5;
    void** ecx6;
    void** eax7;

    eax3 = fun_434890(ecx, edx2, ecx);
    fun_433eb0(eax3, edx2, ecx, ebx4);
    ecx5 = g4835a4;
    fun_41c060(ecx5);
    ecx6 = g4835c4;
    eax7 = fun_41c060(ecx6);
    return eax7;
}

void** fun_41beba(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40, void** a41, void** a42, void** a43, void** a44, void** a45, void** a46, void** a47, void** a48, void** a49, void** a50, void** a51, void** a52, void** a53, void** a54, void** a55, void** a56, void** a57, void** a58, void** a59, void** a60, void** a61, void** a62, void** a63, void** a64, void** a65, void** a66, void** a67, void** a68, void** a69) {
    void** eax70;
    void** eax71;
    int1_t zf72;
    void** ebx73;
    void** edx74;
    void** ebx75;

    eax70 = eax71;
    if (reinterpret_cast<int1_t>(eax70 == 0x79)) {
        zf72 = g482a84 == 0;
        if (zf72) {
            ebx73 = g481264;
            if (!ebx73) {
            }
            fun_4312d0(ecx, edx74);
            fun_43c200(ecx);
        }
        eax70 = fun_43d270(ecx, edx74, ebx75, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69);
    }
    return eax70;
}

void fun_41c1f5() {
}

void fun_41ff98() {
}

struct s1257 {
    signed char[4631008] pad4631008;
    uint32_t f46a9e0;
};

struct s1258 {
    signed char[4631008] pad4631008;
    uint32_t f46a9e0;
};

void fun_42025b(int32_t ecx) {
    void** eax2;
    void** eax3;
    void** edx4;
    struct s1257* edi5;
    uint32_t* eax6;
    void** eax7;
    struct s1258* esi8;
    uint32_t* eax9;

    fun_41f670(eax2);
    eax3 = fun_4258c0(eax2);
    edx4 = *reinterpret_cast<void***>(eax3 + 32) - 0x4000000;
    *reinterpret_cast<void***>(eax3 + 32) = edx4;
    edi5 = reinterpret_cast<struct s1257*>((reinterpret_cast<unsigned char>(edx4) >> 19) * 4);
    eax6 = image_base_;
    __asm__("shrd eax, edx, 0x10");
    *reinterpret_cast<void***>(eax3 + 72) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax3 + 92) + 60)) * *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(edi5) + reinterpret_cast<int32_t>(eax6)));
    __asm__("shrd eax, edx, 0x10");
    *reinterpret_cast<void***>(eax3 + 76) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax3 + 92) + 60)) * edi5->f46a9e0);
    eax7 = fun_4258c0(eax2);
    *reinterpret_cast<signed char*>(eax7 + 35) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(eax7 + 35) + 4);
    esi8 = reinterpret_cast<struct s1258*>((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax7 + 32)) >> 19) * 4);
    eax9 = image_base_;
    __asm__("shrd eax, edx, 0x10");
    *reinterpret_cast<void***>(eax7 + 72) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax7 + 92) + 60)) * *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(esi8) + reinterpret_cast<int32_t>(eax9)));
    __asm__("shrd eax, edx, 0x10");
    *reinterpret_cast<void***>(eax7 + 76) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax7 + 92) + 60)) * esi8->f46a9e0);
    return;
}

void fun_420868() {
    goto fun_4312d0;
}

struct s1259 {
    signed char[8] pad8;
    int16_t f8;
    signed char[4] pad14;
    int16_t fe;
};

struct s1260 {
    signed char[24] pad24;
    int32_t f18;
};

struct s1261 {
    signed char[20] pad20;
    struct s1259* f14;
};

struct s1262 {
    signed char[20] pad20;
    int32_t* f14;
};

struct s1263 {
    signed char[38] pad38;
    int32_t f26;
};

struct s1264 {
    signed char[34] pad34;
    int32_t f22;
};

struct s1266 {
    signed char[8] pad8;
    int16_t f8;
};

struct s1265 {
    signed char[46] pad46;
    struct s1266* f2e;
};

struct s1268 {
    signed char[14] pad14;
    int16_t fe;
};

struct s1267 {
    signed char[46] pad46;
    struct s1268* f2e;
};

void fun_42110a(struct s1259* ecx) {
    struct s1260* ebx2;
    struct s1261* ebx3;
    int32_t* eax4;
    struct s1262* ebx5;
    struct s1263* ebx6;
    struct s1264* ebx7;
    struct s1265* v8;
    struct s1267* v9;

    ebx2->f18 = 1;
    ebx3->f14 = ecx;
    eax4 = ebx5->f14;
    ebx6->f26 = 0x10000;
    ebx7->f22 = *eax4 + 0x180000;
    ecx->f8 = v8->f2e->f8;
    ecx->fe = v9->f2e->fe;
    goto 0x420f61;
}

void fun_42677c() {
}

void fun_445fd0() {
    return;
}

void fun_4452e5() {
    goto fun_445e20;
}

void fun_447e08() {
    goto fun_445d0b;
}

void fun_449a06() {
    goto midiStreamPause;
}

void** g46455e = reinterpret_cast<void**>(0);

void fun_41b8cb(int32_t ecx) {
    void** ax2;

    ax2 = g46455e;
    g48357c = reinterpret_cast<void**>(0x46454c);
    g4835d4 = ax2;
    return;
}

void fun_42031a() {
}

void fun_42087c() {
    goto fun_4312d0;
}

struct s1269 {
    signed char[24] pad24;
    int32_t f18;
};

struct s1270 {
    signed char[38] pad38;
    int32_t f26;
};

struct s1271 {
    signed char[20] pad20;
    void** f14;
};

struct s1272 {
    signed char[34] pad34;
    uint32_t f22;
};

struct s1273 {
    signed char[20] pad20;
    int32_t* f14;
};

void fun_42114b(void** ecx) {
    void** v2;
    struct s1269* ebx3;
    struct s1270* ebx4;
    struct s1271* ebx5;
    void** v6;
    void** edi7;
    int32_t eax8;
    struct s251* eax9;
    void** edx10;
    struct s251* eax11;
    void** eax12;
    struct s1272* ebp13;
    struct s1273* ebp14;

    v2 = reinterpret_cast<void**>(__return_address());
    ebx3->f18 = 1;
    ebx4->f26 = 0x10000;
    ebx5->f14 = ecx;
    v6 = reinterpret_cast<void**>(0x7fffffff);
    edi7 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx + 78)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(ecx + 78) == 0))) {
        do {
            eax8 = fun_427f30(v2);
            if (eax8) {
                eax9 = fun_427ed0(ecx, v2);
                if (eax9->fa >= 0 && (edx10 = g487fa0, reinterpret_cast<signed char>(*reinterpret_cast<void***>(edx10 + eax9->fa * 4)) < reinterpret_cast<signed char>(v6))) {
                    v6 = *reinterpret_cast<void***>(edx10 + eax9->fa * 4);
                }
                eax11 = fun_427ed0(ecx, v2);
                if (eax11->fa >= 0 && (eax12 = g487fa0, reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax12 + eax11->fa * 4)) < reinterpret_cast<signed char>(v6))) {
                    v6 = *reinterpret_cast<void***>(eax12 + eax11->fa * 4);
                }
            }
            ++edi7;
        } while (reinterpret_cast<signed char>(edi7) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(ecx + 78)));
    }
    ebp13->f22 = *ebp14->f14 + reinterpret_cast<unsigned char>(v6);
    goto 0x420f61;
}

void fun_447e0d(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void** edx8;

    fun_447dab(ecx, edx8, __return_address(), a2, a3, a4, a5, a6, a7);
    fun_445e20();
    return;
}

void fun_449a0c() {
    goto midiStreamRestart;
}

void** fun_41b8ea(void** ecx) {
    void** edx2;
    void* eax3;
    void** eax4;

    edx2 = g4835a4;
    if (!eax3) {
        if (edx2) {
            --edx2;
        }
    } else {
        if (eax3 == 1) {
            if (reinterpret_cast<signed char>(edx2) < reinterpret_cast<signed char>(15)) {
                edx2 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx2) + reinterpret_cast<uint32_t>(eax3));
            }
        }
    }
    g4835a4 = edx2;
    eax4 = fun_430ec0(ecx);
    return eax4;
}

void** fun_42088c(void** ecx) {
    void** edx2;
    void** eax3;

    fun_4312d0(edx2, ecx);
    eax3 = fun_426380(edx2);
    return eax3;
}

void fun_447e29() {
    goto fun_447e5e;
}

void fun_449a12() {
    goto midiStreamOut;
}

void** fun_4208ae(void** ecx) {
    void** v2;
    void** edx3;
    int32_t ebx4;
    void** eax5;
    int32_t edx6;
    void** eax7;

    v2 = edx3;
    ebx4 = 0;
    eax5 = g484cfc;
    g4836f4 = 0;
    if (eax5 != "H") {
        edx6 = 0;
        do {
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax5 + 8) == 0x4250d0) && reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax5 + 88) == 27)) {
                edx6 = edx6 + 4;
                ++ebx4;
                *reinterpret_cast<void***>(edx6 + 0x483670) = eax5;
            }
            eax5 = *reinterpret_cast<void***>(eax5 + 4);
        } while (!reinterpret_cast<int1_t>(eax5 == "H"));
    }
    g4836f8 = ebx4;
    eax7 = fun_4312d0(ecx, v2);
    return eax7;
}

void fun_447e30() {
    goto fun_447ec0;
}

void fun_449a18() {
    goto midiOutPrepareHeader;
}

void fun_447e3a() {
    goto fun_447e5e;
}

void fun_449a1e() {
    goto midiStreamProperty;
}

void fun_447e41() {
    goto fun_447ec0;
}

void fun_449a24() {
    goto midiStreamOpen;
}

void fun_447e4b() {
    goto fun_447e5e;
}

void fun_449a2a() {
    goto midiStreamClose;
}

void fun_447e52() {
    goto fun_447ec0;
}

void fun_449a30() {
    goto midiOutUnprepareHeader;
}

void fun_447e59() {
}

void fun_449a36() {
    goto midiOutReset;
}

void fun_449a3c() {
    goto LoadStringA;
}

void fun_449a42() {
    goto GetProcAddress;
}

void fun_449a48() {
    goto LoadLibraryA;
}

void fun_449a4e() {
    goto SearchPathA;
}

void fun_449a54() {
    goto GlobalAlloc;
}

void fun_449a5a() {
    goto FreeLibrary;
}

void fun_449a60() {
    goto SetCursorPos;
}

void fun_449a66() {
    goto ClipCursor;
}

void fun_449a6c() {
    goto GetTickCount;
}

void fun_449a72() {
    goto GetSystemPaletteEntries;
}

void fun_449a78() {
    goto timeGetTime;
}

void fun_449a7e() {
    goto GetMessageA;
}

void fun_449a84() {
    goto DeviceIoControl;
}

void fun_449a8a() {
    goto CloseHandle;
}

void fun_449a90() {
    goto CreateFontA;
}

void fun_449a96() {
    goto DeleteDC;
}

void fun_449a9c() {
    goto CreateDIBitmap;
}

void fun_449aa2() {
    goto CreateDCA;
}

void fun_449aa8() {
    goto LocalFree;
}

void fun_449aae() {
    goto LocalAlloc;
}

void fun_449ab4() {
    goto IsWindow;
}

void fun_449aba() {
    goto EndPaint;
}

void fun_449ac0() {
    goto BeginPaint;
}

void fun_449ac6() {
    goto SetBkColor;
}

void fun_449acc() {
    goto GetObjectA;
}

void fun_449ad2() {
    goto SetTextColor;
}

void fun_449ad8() {
    goto InvalidateRect;
}

void fun_449ade() {
    goto SendMessageA;
}

void fun_449ae4() {
    goto SetWindowTextA;
}

void fun_449aea() {
    goto DeleteObject;
}

void fun_449af0() {
    goto StretchDIBits;
}

void fun_449af6() {
    goto CreatePalette;
}

void fun_449afc() {
    goto SizeofResource;
}

void fun_449b02() {
    goto LockResource;
}

void fun_449b08() {
    goto LoadResource;
}

void fun_449b0e() {
    goto FindResourceA;
}

void fun_449b14() {
    goto ReleaseDC;
}

void fun_449b1a() {
    goto GetDeviceCaps;
}

void fun_449b20() {
    goto GetDC;
}

void fun_449b26() {
    goto GetSystemInfo;
}

void fun_449b2c() {
    goto DispatchMessageA;
}

void fun_449b32() {
    goto PeekMessageA;
}

void fun_449b38() {
    goto SystemParametersInfoA;
}

void fun_449b3e() {
    goto AdjustWindowRectEx;
}

void fun_449b44() {
    goto SetRect;
}

void fun_449b4a() {
    goto UpdateWindow;
}

void fun_449b50() {
    goto CreateWindowExA;
}

void fun_449b56() {
    goto AdjustWindowRect;
}

void fun_449b5c() {
    goto RegisterClassA;
}

void fun_449b62() {
    goto GetStockObject;
}

void fun_449b68() {
    goto LoadIconA;
}

void fun_449b6e() {
    goto GetSystemMetrics;
}

void fun_449b74() {
    goto DefWindowProcA;
}

void fun_449b7a() {
    goto PostQuitMessage;
}

void fun_449b80() {
    goto MapWindowPoints;
}

void fun_449b86() {
    goto GetClientRect;
}

void fun_449b8c() {
    goto ValidateRect;
}

void fun_449b92() {
    goto LoadCursorA;
}

void fun_449b98() {
    goto UnhookWindowsHookEx;
}

void fun_449b9e() {
    goto SetWindowsHookExA;
}

void fun_449ba4() {
    goto GetCurrentThreadId;
}

void fun_449baa() {
    goto CallNextHookEx;
}

void fun_449bb0() {
    goto Sleep;
}

void fun_449bb6() {
    goto SetCursor;
}

void fun_449bbc() {
    goto SetWindowPos;
}

void fun_449bc2() {
    goto WriteFile;
}

void fun_449bc8() {
    goto CreateFileA;
}

void fun_449bce() {
    goto RegQueryValueExA;
}

void fun_449bd4() {
    goto RegOpenKeyA;
}

void fun_449bda() {
    goto GetLastError;
}

void fun_449be0() {
    goto RegCloseKey;
}

void fun_449be6() {
    goto RegSetValueExA;
}

void fun_449bec() {
    goto RegCreateKeyA;
}

void fun_449bf2() {
    goto midiOutSetVolume;
}

void fun_449bf8() {
    goto midiOutGetNumDevs;
}

void fun_449bfe() {
    goto SetFocus;
}

void fun_449c04() {
    goto ShowWindow;
}

void fun_449c0a() {
    goto CreateDialogParamA;
}

void fun_449c10() {
    goto IsDialogMessageA;
}

void fun_449c16() {
    goto RealizePalette;
}

void fun_449c1c() {
    goto SelectPalette;
}

void fun_449c22() {
    goto UnrealizeObject;
}

void fun_449c28() {
    goto DestroyWindow;
}

void fun_449c2e() {
    goto GetFocus;
}

void fun_449c34() {
    goto IsDlgButtonChecked;
}

void fun_449c3a() {
    goto SetDlgItemTextA;
}

void fun_449c40() {
    goto SetWindowLongA;
}

void fun_449c46() {
    goto MoveWindow;
}

void fun_449c4c() {
    goto GetWindowRect;
}

void fun_449c52() {
    goto GetDesktopWindow;
}

void fun_449c58() {
    goto EnableWindow;
}

void fun_449c5e() {
    goto GetDlgItem;
}

void fun_449c64() {
    goto CheckDlgButton;
}

void fun_449c6a() {
    goto PostMessageA;
}

void fun_449c70() {
    goto GetWindowLongA;
}

void fun_449c76() {
    goto CallWindowProcA;
}

void fun_449c7c() {
    goto GetAsyncKeyState;
}

void fun_449c82() {
    goto MessageBoxA;
}

void fun_410001() {
    while (1) {
    }
}
