
struct s0 {
    struct s0* f0;
    struct s0* f1;
    signed char f2;
    signed char[1] pad4;
    signed char f4;
    signed char[3] pad8;
    struct s0* f8;
    signed char[3] pad12;
    uint32_t fc;
    unsigned char fd;
    uint32_t f10;
    signed char[7] pad28;
    struct s0* f1c;
};

int32_t fun_100051a0(int32_t a1, int32_t a2);

int32_t g1000918c = 0x6d6f6f64;

int32_t g1000b3c0;

int32_t g10009190 = 0x706c682e;

signed char g10009194 = 0;

int32_t g1000b3c4;

int16_t g1000b3c8;

struct s0* g1000b4c0;

struct s1 {
    int32_t f0;
    int32_t f4;
    int16_t f8;
};

/* _DllMain@12 */
struct s0* _DllMain_12(struct s0* a1, struct s0* a2, struct s0* a3) {
    int32_t eax4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    signed char cl8;
    int32_t eax9;
    struct s1* ecx10;
    int16_t cx11;

    eax4 = fun_100051a0("final.hlp", 0);
    if (eax4) {
        eax5 = fun_100051a0("doom.hlp", 0);
        if (!eax5) {
            eax6 = g1000918c;
            g1000b3c0 = eax6;
            eax7 = g10009190;
            cl8 = g10009194;
            g1000b3c4 = eax7;
            *reinterpret_cast<signed char*>(&g1000b3c8) = cl8;
            goto addr_1000107e_4;
        }
        eax9 = fun_100051a0("doom2.hlp", 0);
        if (eax9) {
            addr_1000107e_4:
            if (reinterpret_cast<int1_t>(a2 == 1)) {
                g1000b4c0 = a1;
            }
        } else {
            ecx10 = reinterpret_cast<struct s1*>("doom2.hlp");
            goto addr_10001067_8;
        }
    } else {
        ecx10 = reinterpret_cast<struct s1*>("final.hlp");
        goto addr_10001067_8;
    }
    return 1;
    addr_10001067_8:
    g1000b3c0 = ecx10->f0;
    cx11 = ecx10->f8;
    g1000b3c4 = ecx10->f4;
    g1000b3c8 = cx11;
    goto addr_1000107e_4;
}

struct s3 {
    signed char[203] pad203;
    struct s2* fcb;
};

struct s2 {
    struct s2* f0;
    signed char[4] pad8;
    struct s3* f8;
    int32_t fc;
    struct s2* f10;
};

int32_t g1000a49c = 1;

/* (image base) */
int16_t* image_base_ = reinterpret_cast<int16_t*>(0x1000a29a);

uint32_t fun_100055b0(struct s2* a1, uint32_t a2);

struct s2* fun_100054c0(struct s2* a1, struct s2* a2, int32_t a3, struct s2* a4, uint32_t a5, struct s2* a6, int32_t a7, struct s2* a8, struct s2* a9, struct s2* a10, struct s2* a11, struct s2* a12, struct s2* a13);

void fun_1000447c(void* ecx);

struct s2* fun_10004110(struct s2* a1, uint32_t a2, struct s2* a3, int32_t a4, struct s2* a5, struct s2* a6, struct s2* a7, struct s2* a8, struct s2* a9, struct s2* a10) {
    int1_t less_or_equal11;
    int16_t* ecx12;
    uint32_t eax13;
    struct s2* esi14;
    uint32_t eax15;
    struct s2* esi16;
    struct s2* eax17;
    int1_t less_or_equal18;
    int16_t* ecx19;
    uint32_t eax20;
    uint32_t eax21;
    uint32_t esi22;
    int32_t eax23;

    less_or_equal11 = g1000a49c <= 1;
    if (less_or_equal11) {
        ecx12 = image_base_;
        eax13 = 0;
        esi14 = a1;
        *reinterpret_cast<int16_t*>(&eax13) = ecx12[static_cast<uint32_t>(esi14)];
        eax15 = eax13 & 1;
    } else {
        esi14 = a1;
        eax15 = fun_100055b0(esi14, 1);
    }
    if (eax15) {
        eax17 = fun_100054c0(esi14, esi16, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
        return eax17;
    }
    less_or_equal18 = g1000a49c <= 1;
    if (less_or_equal18) {
        ecx19 = image_base_;
        eax20 = 0;
        *reinterpret_cast<int16_t*>(&eax20) = ecx19[static_cast<uint32_t>(esi14)];
        eax21 = eax20 & 4;
    } else {
        eax21 = fun_100055b0(esi14, 4);
    }
    if (eax21) {
        return esi14;
    }
    esi22 = reinterpret_cast<uint32_t>(esi14) - 1;
    if (esi22 > 0xfd) 
        goto addr_10004192_12;
    eax23 = 0;
    *reinterpret_cast<signed char*>(&eax23) = *reinterpret_cast<signed char*>(esi22 + reinterpret_cast<int32_t>(fun_1000447c));
    switch (eax23) {
    case 0:
    case 9:
    case 20:
    case 23:
    case 24:
    case 37:
    case 53:
    case 54:
    case 72:
        return 0xffffffff;
    case 1:
        return 0x7f;
    case 2:
        return 9;
    case 3:
    case 30:
        return 0xcc;
    case 4:
        return 13;
    case 5:
        return 0xb6;
    case 6:
        return 0x9d;
    case 7:
        return 0xb8;
    case 8:
        return 0xff;
    case 10:
        return 27;
    case 11:
        return 32;
    case 12:
        return 0xc9;
    case 13:
        return 0xd1;
    case 14:
        return 0xcf;
    case 15:
        return 0xc7;
    case 16:
        return 0xac;
    case 17:
        return 0xad;
    case 18:
        return 0xae;
    case 19:
        return 0xaf;
    case 21:
        return 0xd2;
    case 22:
    case 39:
        return 0xd3;
    case 25:
        return 0xd2;
    case 26:
        return 0xcf;
    case 27:
        return 0xaf;
    case 28:
        return 0xd1;
    case 29:
        return 0xac;
    case 31:
        return 0xae;
    case 32:
        return 0xc7;
    case 33:
        return 0xad;
    case 34:
        return 0xc9;
    case 35:
        return 42;
    case 36:
        return 43;
    case 38:
        return 45;
    case 40:
        return 47;
    case 41:
        return 0xbb;
    case 42:
        return 0xbc;
    case 43:
        return 0xbd;
    case 44:
        return 0xbe;
    case 45:
        return 0xbf;
    case 46:
        return 0xc0;
    case 47:
        return 0xc1;
    case 48:
        return 0xc2;
    case 49:
        return 0xc3;
    case 50:
        return 0xc4;
    case 51:
        return 0xd7;
    case 52:
        return 0xd8;
    case 55:
        return 0xfe;
    case 56:
        return 0xb6;
    case 57:
        return 29;
    case 58:
        return 0x9d;
    case 59:
        return 0xb8;
    case 60:
        return 0xb8;
    case 61:
        return 59;
    case 62:
        return 61;
    case 63:
        return 44;
    case 64:
        return 45;
    case 65:
        return 46;
    case 66:
        return 47;
    case 67:
        return 96;
    case 68:
        return 91;
    case 69:
        return 92;
    case 70:
        return 93;
    case 71:
        return 39;
        addr_10004192_12:
    case 73:
        return 0xffffffff;
    }
}

int32_t GetFileAttributesA = 0xd680;

int32_t g1000a4d8 = 0;

uint32_t g1000a4dc = 0;

int32_t GetLastError = 0xd30c;

void fun_10005a70(uint32_t a1);

int32_t fun_100051a0(int32_t a1, int32_t a2) {
    int32_t eax3;
    uint32_t eax4;

    eax3 = reinterpret_cast<int32_t>(GetFileAttributesA());
    if (eax3 != -1) {
        if (!(*reinterpret_cast<unsigned char*>(&eax3) & 1) || !(*reinterpret_cast<unsigned char*>(&a1) & 2)) {
            goto a1;
        } else {
            g1000a4d8 = 13;
            g1000a4dc = 5;
            goto a1;
        }
    } else {
        eax4 = reinterpret_cast<uint32_t>(GetLastError());
        fun_10005a70(eax4);
        goto a1;
    }
}

int32_t GetWindowLongA = 0xd442;

struct s4 {
    signed char[4] pad4;
    int32_t f4;
    int32_t f8;
};

int32_t SendMessageA = 0xd3ca;

int32_t DestroyWindow = 0xd48c;

int32_t ShowWindow = 0xd460;

struct s5 {
    struct s2* f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

int32_t fun_10003d50(struct s2* a1, uint32_t a2, int32_t a3, struct s5* a4);

int32_t fun_10003170(struct s2* a1, struct s2* a2, struct s2* a3, struct s2* a4, struct s2* a5, struct s2* a6, struct s2* a7, struct s2* a8, struct s2* a9, struct s2* a10, struct s2* a11);

int32_t fun_10001c10(struct s2* a1, struct s2* a2, struct s2* a3, struct s2* a4);

int32_t fun_100036a0(struct s2* a1, struct s2* a2, struct s2* a3, struct s2* a4, struct s2* a5);

int32_t CreateDialogIndirectParamA = 0xd46e;

void fun_100012c0(struct s0* a1) {
    int32_t ebp2;
    int32_t edi3;
    int32_t esi4;
    int32_t ebx5;
    struct s4* eax6;
    int32_t edi7;
    int32_t v8;
    int32_t eax9;
    void* esp10;
    int32_t ecx11;
    void* v12;
    int32_t edx13;
    void* v14;
    int32_t v15;
    int32_t v16;
    int32_t v17;
    struct s0* ecx18;
    int32_t eax19;

    eax6 = reinterpret_cast<struct s4*>(GetWindowLongA(a1, 0xeb, ebp2, edi3, esi4, ebx5));
    edi7 = SendMessageA;
    v8 = eax6->f4;
    eax9 = reinterpret_cast<int32_t>(edi7(v8));
    esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4);
    if (eax6->f8) {
        ecx11 = eax6->f8;
        v12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) + 16);
        edi7(ecx11, 78, 0, v12, v8);
        edx13 = eax6->f8;
        v14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp10) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
        edi7(edx13, 78, 0, v14, ecx11, 78, 0, v12, v8);
        v15 = eax6->f8;
        DestroyWindow(v15, edx13, 78, 0, v14, ecx11, 78, 0, v12, v8);
    }
    switch (eax9) {
        addr_10001384_5:
    default:
        edi7();
        ShowWindow();
        goto 0x130b;
    case 0:
        v16 = reinterpret_cast<int32_t>(fun_10003d50);
        break;
    case 1:
        v16 = reinterpret_cast<int32_t>(fun_10003170);
        break;
    case 2:
        v16 = 0x10002710;
        break;
    case 3:
        v16 = reinterpret_cast<int32_t>(fun_10001c10);
        break;
    case 4:
        v16 = reinterpret_cast<int32_t>(fun_100036a0);
    }
    v17 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(eax6) + eax9 * 4 + 28);
    ecx18 = g1000b4c0;
    eax19 = reinterpret_cast<int32_t>(CreateDialogIndirectParamA(ecx18, v17, a1, v16, 0, v8));
    eax6->f8 = eax19;
    goto addr_10001384_5;
}

int32_t GetWindowTextA = 0xd4d6;

void fun_10001700(int32_t a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15, struct s0* a16, struct s0* a17, struct s0* a18, struct s0* a19, struct s0* a20);

void fun_100017f0(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15, struct s0* a16, struct s0* a17, struct s0* a18, struct s0* a19, struct s0* a20, struct s0* a21) {
    GetWindowTextA();
    fun_10001700(0x1000b2b0, a1, 0x1000b2b0, 0x104, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    goto a1;
}

int32_t g1000a68c = 0;

struct s0* fun_10005230(struct s0* a1, int32_t a2);

struct s0* fun_10005210(struct s0* a1) {
    int32_t eax2;
    struct s0* eax3;

    eax2 = g1000a68c;
    eax3 = fun_10005230(a1, eax2);
    return eax3;
}

int32_t g1000c5e0;

int32_t HeapFree = 0xd696;

void fun_100051f0(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10, struct s0* a11) {
    int32_t eax12;

    if (a1) {
        eax12 = g1000c5e0;
        HeapFree(eax12, 0, a1);
    }
    return;
}

int32_t wsprintfA = 0xd4e8;

int32_t RegOpenKeyA = 0xd5f6;

int32_t RegQueryValueExA = 0xd604;

int32_t RegCloseKey = 0xd5c6;

struct s0* fun_10005290(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6);

struct s2* fun_10001a00(int32_t a1, struct s3* a2, signed char* a3, int32_t a4, struct s2* a5, struct s2* a6, struct s2* a7, struct s2* a8) {
    void* esp9;
    int32_t edi10;
    int32_t eax11;
    void* esp12;
    struct s0* v13;
    int32_t ebx14;
    int32_t eax15;
    struct s0* eax16;
    void* esp17;
    int32_t v18;
    struct s0* v19;
    struct s0* v20;
    struct s0* v21;
    int32_t eax22;
    int32_t v23;
    struct s0** v24;
    int32_t v25;
    struct s0* v26;
    struct s0* v27;
    struct s0* edx28;
    struct s0* esi29;

    esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x110);
    wsprintfA(reinterpret_cast<int32_t>(esp9) + 12, "SOFTWARE\\ID\\Doom95\\Config\\%s", 0x1000b2b0, edi10);
    eax11 = reinterpret_cast<int32_t>(RegOpenKeyA());
    esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp9) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 - 4 + 4);
    if (!eax11) {
        v13 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp12) + 20);
        ebx14 = RegQueryValueExA;
        eax15 = reinterpret_cast<int32_t>(ebx14());
        if (eax15 || reinterpret_cast<signed char>(v13) <= reinterpret_cast<signed char>(0)) {
            addr_10001b2a_4:
            goto addr_10001b2f_5;
        } else {
            eax16 = fun_10005210(v13);
            esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 + 4);
            if (!eax16) {
                RegCloseKey();
                goto v18;
            }
            v19 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp17) + 12);
            v20 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp17) + 20);
            eax22 = reinterpret_cast<int32_t>(ebx14(0, v21, 0));
            if (eax22) 
                goto addr_10001b2a_4; else 
                goto addr_10001ac2_9;
        }
    }
    addr_10001b41_10:
    goto v23;
    addr_10001b2f_5:
    RegCloseKey(0);
    goto addr_10001b41_10;
    addr_10001ac2_9:
    if (!reinterpret_cast<int1_t>(v19 == 1)) {
        if (reinterpret_cast<int1_t>(v19 == 4)) {
            if (v24 && v25 == 4) {
                *v24 = *reinterpret_cast<struct s0**>(&eax16->f0);
            }
        }
    } else {
        if (v26 && !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(v27) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(v27 == 0))) {
            edx28 = v20;
            if (reinterpret_cast<signed char>(v20) >= reinterpret_cast<signed char>(v27)) {
                edx28 = v27;
            }
            fun_10005290(v26, eax16, edx28, 0, v21, 0);
        }
    }
    fun_100051f0(eax16, 0, v21, 0, v20, eax16, v19, esi29, v21, 0, v13);
    goto addr_10001b2f_5;
}

int32_t RegCreateKeyA = 0xd5e6;

int32_t RegSetValueExA = 0xd5d4;

void fun_10001b50(int32_t a1, struct s2* a2, struct s2* a3, struct s2* a4, struct s2* a5, struct s2* a6, struct s2* a7, struct s2* a8, struct s2* a9, struct s2* a10, struct s2* a11, struct s2* a12, struct s2* a13, struct s2* a14, struct s2* a15, struct s2* a16, struct s2* a17, struct s2* a18, struct s2* a19, struct s2* a20, struct s2* a21) {
    int32_t edi22;
    int32_t esi23;
    int32_t eax24;
    int32_t v25;
    int32_t ecx26;
    signed char* edi27;
    int32_t eax28;
    int32_t v29;

    wsprintfA(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x108 + 4, "SOFTWARE\\ID\\Doom95\\Config\\%s", 0x1000b2b0, edi22, esi23);
    eax24 = reinterpret_cast<int32_t>(RegCreateKeyA());
    if (eax24) {
        GetLastError();
        goto v25;
    } else {
        if (a1 < 0 || a1 > 2) {
            ecx26 = -1;
            edi27 = reinterpret_cast<signed char*>(__return_address());
            eax28 = a1 - a1;
            do {
                if (!ecx26) 
                    break;
                --ecx26;
                ++edi27;
            } while (*edi27 != *reinterpret_cast<signed char*>(&eax28));
        }
        RegSetValueExA();
        RegCloseKey();
        goto v29;
    }
}

struct s0* fun_10005ba0(struct s0* a1, struct s0* a2, struct s0* a3);

struct s0* fun_10005360(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    struct s0* esi6;
    struct s0* v7;
    struct s0* eax8;
    struct s0* ebx9;
    struct s0* edi10;
    int32_t ecx11;
    struct s0* ebp12;
    struct s0* edi13;
    struct s0* ebp14;
    struct s0* edi15;
    struct s0* eax16;

    esi6 = a1;
    v7 = reinterpret_cast<struct s0*>(0);
    if (!reinterpret_cast<int1_t>(esi6->f1 == 58)) {
        if (a2) {
            *reinterpret_cast<struct s0**>(&a2->f0) = reinterpret_cast<struct s0*>(0);
        }
    } else {
        if (a2) {
            eax8 = fun_10005ba0(a2, esi6, 2);
            a2->f2 = 0;
        }
        esi6 = reinterpret_cast<struct s0*>(&esi6->f2);
    }
    ebx9 = reinterpret_cast<struct s0*>(0);
    edi10 = esi6;
    if (*reinterpret_cast<struct s0**>(&esi6->f0)) {
        do {
            eax8 = *reinterpret_cast<struct s0**>(&edi10->f0);
            ecx11 = 0;
            *reinterpret_cast<struct s0**>(&ecx11) = eax8;
            if (!(*reinterpret_cast<unsigned char*>(ecx11 + 0x1000a691) & 4)) {
                if (eax8 == 47 || eax8 == 92) {
                    ebx9 = reinterpret_cast<struct s0*>(&edi10->f1);
                } else {
                    if (reinterpret_cast<int1_t>(eax8 == 46)) {
                        v7 = edi10;
                    }
                }
            } else {
                edi10 = reinterpret_cast<struct s0*>(&edi10->f1);
            }
            edi10 = reinterpret_cast<struct s0*>(&edi10->f1);
        } while (*reinterpret_cast<struct s0**>(&edi10->f0));
    }
    if (!ebx9) {
        if (a3) {
            eax8 = a3;
            *reinterpret_cast<struct s0**>(&eax8->f0) = reinterpret_cast<struct s0*>(0);
        }
    } else {
        if (a3) {
            ebp12 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebx9) - reinterpret_cast<unsigned char>(esi6));
            if (reinterpret_cast<unsigned char>(ebp12) >= reinterpret_cast<unsigned char>(0xff)) {
                ebp12 = reinterpret_cast<struct s0*>(0xff);
            }
            fun_10005ba0(a3, esi6, ebp12);
            eax8 = a3;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax8) + reinterpret_cast<unsigned char>(ebp12)) = 0;
        }
        esi6 = ebx9;
    }
    if (!v7 || reinterpret_cast<unsigned char>(v7) < reinterpret_cast<unsigned char>(esi6)) {
        if (a4) {
            edi13 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(edi10) - reinterpret_cast<unsigned char>(esi6));
            if (reinterpret_cast<unsigned char>(edi13) >= reinterpret_cast<unsigned char>(0xff)) {
                edi13 = reinterpret_cast<struct s0*>(0xff);
            }
            eax8 = fun_10005ba0(a4, esi6, edi13);
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(edi13)) = 0;
        }
        if (a5) {
            *reinterpret_cast<struct s0**>(&a5->f0) = reinterpret_cast<struct s0*>(0);
        }
    } else {
        if (a4) {
            ebp14 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(v7) - reinterpret_cast<unsigned char>(esi6));
            if (reinterpret_cast<unsigned char>(ebp14) >= reinterpret_cast<unsigned char>(0xff)) {
                ebp14 = reinterpret_cast<struct s0*>(0xff);
            }
            eax8 = fun_10005ba0(a4, esi6, ebp14);
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a4) + reinterpret_cast<unsigned char>(ebp14)) = 0;
        }
        if (a5) {
            edi15 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(edi10) - reinterpret_cast<unsigned char>(v7));
            if (reinterpret_cast<unsigned char>(edi15) >= reinterpret_cast<unsigned char>(0xff)) {
                edi15 = reinterpret_cast<struct s0*>(0xff);
            }
            eax16 = fun_10005ba0(a5, v7, edi15);
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a5) + reinterpret_cast<unsigned char>(edi15)) = 0;
            return eax16;
        }
    }
    return eax8;
}

struct s6 {
    signed char f0;
    signed char f1;
};

struct s7 {
    signed char f0;
    signed char f1;
};

struct s8 {
    signed char f0;
    signed char f1;
};

signed char* fun_10005b40(signed char* a1, signed char* a2);

void fun_100052c0(struct s6* a1, signed char* a2, signed char* a3, signed char* a4, struct s7* a5) {
    struct s6* esi6;
    struct s8* esi7;
    signed char* eax8;
    signed char* ecx9;
    signed char* eax10;
    signed char* eax11;
    signed char cl12;
    struct s8* esi13;
    signed char* edx14;
    signed char cl15;
    struct s8* eax16;

    if (!a2) {
        esi6 = a1;
    } else {
        esi6 = a1;
        if (*a2) {
            esi6->f0 = *a2;
            esi7 = reinterpret_cast<struct s8*>(&esi6->f1);
            esi7->f0 = 58;
            esi6 = reinterpret_cast<struct s6*>(&esi7->f1);
        }
    }
    eax8 = a3;
    ecx9 = eax8;
    if (!eax8 || !*eax8) {
        addr_10005312_6:
        eax10 = a4;
        if (eax10 && *eax10) {
            do {
                ++eax10;
                esi6->f0 = *eax10;
                esi6 = reinterpret_cast<struct s6*>(&esi6->f1);
            } while (*eax10);
        }
    } else {
        do {
            ++ecx9;
            esi6->f0 = *ecx9;
            esi6 = reinterpret_cast<struct s6*>(&esi6->f1);
        } while (*ecx9);
        eax11 = fun_10005b40(eax8, ecx9);
        if (*eax11 == 47) 
            goto addr_10005312_6;
        if (*eax11 == 92) 
            goto addr_10005312_6; else 
            goto addr_1000530e_11;
    }
    if (!a5) {
        esi6->f0 = 0;
    } else {
        if (a5->f0 && a5->f0 != 46) {
            esi6->f0 = 46;
            esi6 = reinterpret_cast<struct s6*>(&esi6->f1);
        }
        cl12 = a5->f0;
        esi13 = reinterpret_cast<struct s8*>(&esi6->f1);
        edx14 = &a5->f1;
        esi6->f0 = cl12;
        if (cl12) {
            do {
                cl15 = *edx14;
                eax16 = esi13;
                esi13 = reinterpret_cast<struct s8*>(&esi13->f1);
                ++edx14;
                eax16->f0 = cl15;
            } while (cl15);
            return;
        }
    }
    return;
    addr_1000530e_11:
    esi6->f0 = 92;
    esi6 = reinterpret_cast<struct s6*>(&esi6->f1);
    goto addr_10005312_6;
}

int32_t g10009ac8 = 0x656e6547;

int32_t g10009acc = 0x20636972;

int32_t g10009ad0 = 0x73796f4a;

int32_t g10009ad4 = 0x6b636974;

signed char g10009ad8 = 0;

int32_t fun_10001f60(struct s2* a1, void* a2, void* a3, int32_t a4, struct s2* a5, void* a6, int32_t a7, struct s2* a8, void* a9, struct s2* a10, struct s2* a11, int32_t a12, struct s2* a13, struct s2* a14, struct s2* a15, struct s2* a16, int32_t a17, int32_t a18, int32_t a19, struct s2* a20, struct s2* a21, int32_t a22, int32_t a23, int32_t a24, struct s2* a25, struct s2* a26, struct s2* a27, struct s2* a28) {
    void* esp29;
    int32_t esi30;
    int32_t edi31;
    int32_t esi32;
    void* esp33;
    int32_t eax34;
    void* esp35;
    int32_t v36;
    void* v37;
    int32_t eax38;
    uint32_t v39;
    int32_t eax40;
    int32_t edx41;
    int32_t edi42;
    int32_t eax43;
    signed char cl44;
    int32_t v45;

    esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x20c);
    esi30 = wsprintfA;
    esi30(reinterpret_cast<int32_t>(esp29) + 4, "System\\CurrentControlSet\\Control\\MediaResources\\Joystick\\%s\\CurrentJoystickSettings", a2, edi31, esi32);
    esp33 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    eax34 = reinterpret_cast<int32_t>(RegOpenKeyA());
    esp35 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp33) + 12 - 4 - 4 - 4 - 4 + 4);
    if (!eax34) {
        esi30(reinterpret_cast<int32_t>(esp35) + 0x110, "Joystick%dOEMName", v36 + 1);
        v37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp35) - 4 - 4 - 4 - 4 + 4 + 0x11c);
        eax38 = reinterpret_cast<int32_t>(RegQueryValueExA(reinterpret_cast<int32_t>(esp33) + 20, v37));
        if (eax38 && (__return_address() && v39 > 16)) {
            eax40 = g10009ac8;
            *reinterpret_cast<int32_t*>(__return_address()) = eax40;
            edx41 = g10009acc;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 4) = edx41;
            edi42 = g10009ad0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 8) = edi42;
            eax43 = g10009ad4;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__return_address()) + 12) = eax43;
            cl44 = g10009ad8;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__return_address()) + 16) = cl44;
        }
        RegCloseKey(0, reinterpret_cast<int32_t>(esp33) + 20, v37);
    }
    goto v45;
}

struct s0* g1000a8c0 = reinterpret_cast<struct s0*>(0);

int32_t fun_10005f00(struct s0* a1, int32_t a2, struct s0* a3, struct s0* a4, void* a5, int32_t a6, struct s0* a7);

struct s2* fun_100054c0(struct s2* a1, struct s2* a2, int32_t a3, struct s2* a4, uint32_t a5, struct s2* a6, int32_t a7, struct s2* a8, struct s2* a9, struct s2* a10, struct s2* a11, struct s2* a12, struct s2* a13) {
    int1_t zf14;
    void* esp15;
    struct s2* ebx16;
    int1_t less_or_equal17;
    int16_t* ecx18;
    uint32_t eax19;
    uint32_t eax20;
    int32_t edx21;
    int16_t* eax22;
    struct s0* eax23;
    struct s0* edx24;
    int32_t eax25;
    uint32_t eax26;
    uint32_t ecx27;
    signed char v28;
    signed char v29;
    struct s2* eax30;
    signed char v31;

    zf14 = g1000a8c0 == 0;
    esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 4);
    ebx16 = a1;
    if (!zf14) {
        if (reinterpret_cast<int32_t>(ebx16) < reinterpret_cast<int32_t>(0x100)) {
            less_or_equal17 = g1000a49c <= 1;
            if (less_or_equal17) {
                ecx18 = image_base_;
                eax19 = 0;
                *reinterpret_cast<int16_t*>(&eax19) = ecx18[static_cast<uint32_t>(ebx16)];
                eax20 = eax19 & 1;
            } else {
                eax20 = fun_100055b0(ebx16, 1);
                esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) - 4 - 4 - 4 + 4 + 8);
            }
            if (!eax20) {
                return ebx16;
            }
        }
        edx21 = 0;
        *reinterpret_cast<signed char*>(&edx21) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx16) + 1);
        eax22 = image_base_;
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax22 + edx21) + 1) & 0x80)) {
            eax23 = reinterpret_cast<struct s0*>(1);
        } else {
            eax23 = reinterpret_cast<struct s0*>(2);
        }
        edx24 = g1000a8c0;
        eax25 = fun_10005f00(edx24, 0x100, reinterpret_cast<int32_t>(esp15) - 4 - 4 - 4 - 4 + 24, eax23, reinterpret_cast<int32_t>(esp15) + 4, 3, 0);
        if (eax25) {
            if (eax25 != 1) {
                eax26 = 0;
                ecx27 = 0;
                *reinterpret_cast<signed char*>(&eax26) = v28;
                *reinterpret_cast<signed char*>(&ecx27) = v29;
                return eax26 << 8 | ecx27;
            } else {
                eax30 = reinterpret_cast<struct s2*>(0);
                *reinterpret_cast<signed char*>(&eax30) = v31;
                return eax30;
            }
        } else {
            return ebx16;
        }
    } else {
        if (reinterpret_cast<int32_t>(ebx16) >= reinterpret_cast<int32_t>(65) && reinterpret_cast<int32_t>(ebx16) <= reinterpret_cast<int32_t>(90)) {
            ebx16 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(ebx16) + 32);
        }
        return ebx16;
    }
}

struct s9 {
    signed char[16] pad16;
    int32_t f10;
};

int32_t PostMessageA = 0xd540;

void fun_10004e20(struct s2* a1, struct s9* a2, struct s2* a3, struct s2* a4) {
    struct s2* ebx5;
    struct s2* esi6;
    int32_t* ebp7;
    int32_t edi8;
    int32_t ecx9;
    int32_t v10;

    ebx5 = a3;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx5) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebx5 == 0))) {
        esi6 = a1;
        ebp7 = &a2->f10;
        edi8 = PostMessageA;
        do {
            ecx9 = *(ebp7 - 4);
            v10 = *ebp7;
            ebp7 = ebp7 + 5;
            edi8(esi6, 0x40d, ecx9, v10);
            ebx5 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(ebx5) - 1);
        } while (ebx5);
    }
    return;
}

struct s2* fun_10005650(struct s2* a1);

void fun_10004814(int16_t cx);

struct s2* fun_10004580(struct s2* a1, struct s2* a2, struct s2* a3, struct s2* a4, struct s2* a5, struct s2* a6) {
    int1_t less_or_equal7;
    int16_t* ecx8;
    uint32_t eax9;
    struct s2* esi10;
    uint32_t eax11;
    struct s2* eax12;
    int1_t less_or_equal13;
    int16_t* ecx14;
    uint32_t eax15;
    uint32_t eax16;
    uint32_t esi17;
    int32_t eax18;

    less_or_equal7 = g1000a49c <= 1;
    if (less_or_equal7) {
        ecx8 = image_base_;
        eax9 = 0;
        esi10 = a1;
        *reinterpret_cast<int16_t*>(&eax9) = ecx8[static_cast<uint32_t>(esi10)];
        eax11 = eax9 & 2;
    } else {
        esi10 = a1;
        eax11 = fun_100055b0(esi10, 2);
    }
    if (eax11) {
        eax12 = fun_10005650(esi10);
        return eax12;
    }
    less_or_equal13 = g1000a49c <= 1;
    if (less_or_equal13) {
        ecx14 = image_base_;
        eax15 = 0;
        *reinterpret_cast<int16_t*>(&eax15) = ecx14[static_cast<uint32_t>(esi10)];
        eax16 = eax15 & 4;
    } else {
        eax16 = fun_100055b0(esi10, 4);
    }
    if (eax16) {
        return esi10;
    }
    esi17 = reinterpret_cast<uint32_t>(esi10) - 9;
    if (esi17 > 0xf6) 
        goto addr_10004604_12;
    eax18 = 0;
    *reinterpret_cast<signed char*>(&eax18) = *reinterpret_cast<signed char*>(esi17 + reinterpret_cast<int32_t>(fun_10004814));
    switch (eax18) {
    case 0:
        return 9;
    case 1:
        return 13;
    case 2:
        return 27;
    case 3:
        return 0xa2;
    case 4:
        return 32;
    case 5:
        return 0xde;
    case 6:
        return 0x6a;
    case 7:
        return 0x6b;
    case 8:
        return 0xbc;
    case 9:
        return 0x6d;
    case 10:
        return 0xbe;
    case 11:
        return 0xbf;
    case 12:
        return 0xba;
    case 13:
        return 0xbb;
    case 14:
        return 0xdb;
    case 15:
        return 0xdc;
    case 16:
        return 0xdd;
    case 17:
        return 0xc0;
    case 18:
        return 8;
    case 19:
        return 17;
    case 20:
        return 37;
    case 21:
        return 38;
    case 22:
        return 39;
    case 23:
        return 40;
    case 24:
        return 16;
    case 25:
        return 18;
    case 26:
        return 0x70;
    case 27:
        return 0x71;
    case 28:
        return 0x72;
    case 29:
        return 0x73;
    case 30:
        return 0x74;
    case 31:
        return 0x75;
    case 32:
        return 0x76;
    case 33:
        return 0x77;
    case 34:
        return 0x78;
    case 35:
        return 0x79;
    case 36:
        return 36;
    case 37:
        return 33;
    case 38:
        return 0x65;
    case 39:
        return 35;
    case 40:
        return 34;
    case 41:
        return 45;
    case 42:
        return 46;
    case 43:
        return 0x7a;
    case 44:
        return 0x7b;
    case 45:
        return 0xa0;
    case 46:
        return 19;
        addr_10004604_12:
    case 47:
        return 0xffffffff;
    }
}

struct s0* fun_10006160(int32_t a1, struct s0* a2, struct s0* a3, void* a4, struct s0* a5, int32_t a6);

uint32_t fun_100055b0(struct s2* a1, uint32_t a2) {
    struct s2* ecx3;
    void* esp4;
    int32_t ebx5;
    int16_t* eax6;
    struct s0* eax7;
    struct s0* eax8;
    int16_t* edx9;
    uint32_t eax10;

    ecx3 = a1;
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 4);
    if (reinterpret_cast<uint32_t>(ecx3) + 1 > 0x100) {
        ebx5 = 0;
        *reinterpret_cast<signed char*>(&ebx5) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1);
        eax6 = image_base_;
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax6 + ebx5) + 1) & 0x80)) {
            eax7 = reinterpret_cast<struct s0*>(1);
        } else {
            eax7 = reinterpret_cast<struct s0*>(2);
        }
        eax8 = fun_10006160(1, reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4 - 4 + 24, eax7, reinterpret_cast<int32_t>(esp4) + 6, 0, 0);
        if (eax8) {
            return 0;
        } else {
            return 0;
        }
    } else {
        edx9 = image_base_;
        eax10 = 0;
        *reinterpret_cast<int16_t*>(&eax10) = edx9[static_cast<uint32_t>(ecx3)];
        return eax10 & a2;
    }
}

struct s2* fun_10005650(struct s2* a1) {
    int1_t zf2;
    void* esp3;
    struct s2* ebx4;
    int1_t less_or_equal5;
    int16_t* ecx6;
    uint32_t eax7;
    uint32_t eax8;
    int32_t edx9;
    int16_t* eax10;
    struct s0* eax11;
    struct s0* edx12;
    int32_t eax13;
    uint32_t eax14;
    uint32_t ecx15;
    signed char v16;
    signed char v17;
    struct s2* eax18;
    signed char v19;

    zf2 = g1000a8c0 == 0;
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 4);
    ebx4 = a1;
    if (!zf2) {
        if (reinterpret_cast<int32_t>(ebx4) < reinterpret_cast<int32_t>(0x100)) {
            less_or_equal5 = g1000a49c <= 1;
            if (less_or_equal5) {
                ecx6 = image_base_;
                eax7 = 0;
                *reinterpret_cast<int16_t*>(&eax7) = ecx6[static_cast<uint32_t>(ebx4)];
                eax8 = eax7 & 2;
            } else {
                eax8 = fun_100055b0(ebx4, 2);
                esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 - 4 - 4 + 4 + 8);
            }
            if (!eax8) {
                return ebx4;
            }
        }
        edx9 = 0;
        *reinterpret_cast<signed char*>(&edx9) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ebx4) + 1);
        eax10 = image_base_;
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax10 + edx9) + 1) & 0x80)) {
            eax11 = reinterpret_cast<struct s0*>(1);
        } else {
            eax11 = reinterpret_cast<struct s0*>(2);
        }
        edx12 = g1000a8c0;
        eax13 = fun_10005f00(edx12, 0x200, reinterpret_cast<int32_t>(esp3) - 4 - 4 - 4 - 4 + 24, eax11, reinterpret_cast<int32_t>(esp3) + 4, 3, 0);
        if (eax13) {
            if (eax13 != 1) {
                eax14 = 0;
                ecx15 = 0;
                *reinterpret_cast<signed char*>(&eax14) = v16;
                *reinterpret_cast<signed char*>(&ecx15) = v17;
                return eax14 << 8 | ecx15;
            } else {
                eax18 = reinterpret_cast<struct s2*>(0);
                *reinterpret_cast<signed char*>(&eax18) = v19;
                return eax18;
            }
        } else {
            return ebx4;
        }
    } else {
        if (reinterpret_cast<int32_t>(ebx4) >= reinterpret_cast<int32_t>(97) && reinterpret_cast<int32_t>(ebx4) <= reinterpret_cast<int32_t>(0x7a)) {
            ebx4 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(ebx4) - 32);
        }
        return ebx4;
    }
}

void fun_10001700(int32_t a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8, struct s0* a9, struct s0* a10, struct s0* a11, struct s0* a12, struct s0* a13, struct s0* a14, struct s0* a15, struct s0* a16, struct s0* a17, struct s0* a18, struct s0* a19, struct s0* a20) {
    int32_t eax21;
    void* v22;
    int32_t eax23;
    signed char* esi24;
    int32_t ecx25;
    signed char* edi26;
    int32_t eax27;
    signed char* edi28;
    int32_t eax29;
    int32_t ecx30;
    int32_t eax31;
    uint32_t ecx32;
    uint32_t edx33;
    uint32_t ecx34;
    signed char* esi35;
    signed char* edi36;
    uint32_t ecx37;
    signed char* esi38;
    signed char* esi39;
    int32_t ecx40;
    signed char* edi41;
    int32_t eax42;
    signed char* edi43;
    int32_t eax44;
    int32_t ecx45;
    int32_t eax46;
    uint32_t ecx47;
    uint32_t edx48;
    uint32_t ecx49;
    signed char* esi50;
    signed char* edi51;
    uint32_t ecx52;

    eax21 = reinterpret_cast<int32_t>(RegOpenKeyA());
    if (eax21) {
        v22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 8);
        eax23 = reinterpret_cast<int32_t>(RegCreateKeyA());
        if (!eax23) {
            esi24 = "SOFTWARE\\ID\\Doom95\\Config";
            ecx25 = -1;
            edi26 = "SOFTWARE\\ID\\Doom95\\Config";
            eax27 = eax23 - eax23;
            do {
                if (!ecx25) 
                    break;
                --ecx25;
                ++edi26;
                ++esi24;
            } while (*edi26 != *reinterpret_cast<signed char*>(&eax27));
            edi28 = esi24;
            RegSetValueExA(v22, "current");
            eax29 = reinterpret_cast<int32_t>(RegCloseKey(0, v22, "current"));
            ecx30 = -1;
            eax31 = eax29 - eax29;
            do {
                if (!ecx30) 
                    break;
                --ecx30;
                ++edi28;
            } while (*edi28 != *reinterpret_cast<signed char*>(&eax31));
            ecx32 = reinterpret_cast<uint32_t>(~ecx30);
            edx33 = ecx32;
            ecx34 = ecx32 >> 2;
            esi35 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi28) - ecx32);
            edi36 = reinterpret_cast<signed char*>(0x1000b2b0);
            while (ecx34) {
                --ecx34;
                *edi36 = *esi35;
                edi36 = edi36 + 4;
                esi35 = esi35 + 4;
            }
            ecx37 = edx33 & 3;
            while (ecx37) {
                --ecx37;
                *edi36 = *esi35;
                ++edi36;
                ++esi35;
            }
        }
        goto 0x80000001;
    } else {
        esi38 = esi39;
        ecx40 = -1;
        edi41 = esi38;
        eax42 = eax21 - eax21;
        do {
            if (!ecx40) 
                break;
            --ecx40;
            ++edi41;
            ++esi38;
        } while (*edi41 != *reinterpret_cast<signed char*>(&eax42));
        edi43 = esi38;
        RegSetValueExA();
        eax44 = reinterpret_cast<int32_t>(RegCloseKey());
        ecx45 = -1;
        eax46 = eax44 - eax44;
        do {
            if (!ecx45) 
                break;
            --ecx45;
            ++edi43;
        } while (*edi43 != *reinterpret_cast<signed char*>(&eax46));
        ecx47 = reinterpret_cast<uint32_t>(~ecx45);
        edx48 = ecx47;
        ecx49 = ecx47 >> 2;
        esi50 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi43) - ecx47);
        edi51 = reinterpret_cast<signed char*>(0x1000b2b0);
        while (ecx49) {
            --ecx49;
            *edi51 = *esi50;
            edi51 = edi51 + 4;
            esi50 = esi50 + 4;
        }
        ecx52 = edx48 & 3;
        while (ecx52) {
            --ecx52;
            *edi51 = *esi50;
            ++edi51;
            ++esi50;
        }
        goto 0;
    }
}

void fun_10005a70(uint32_t a1) {
    uint32_t eax2;
    int32_t ecx3;
    uint32_t* edx4;

    eax2 = a1;
    ecx3 = 0;
    edx4 = reinterpret_cast<uint32_t*>(0x1000a520);
    g1000a4dc = eax2;
    do {
        if (*edx4 == eax2) 
            break;
        edx4 = edx4 + 2;
        ++ecx3;
    } while (reinterpret_cast<uint32_t>(edx4) < 0x1000a688);
    goto addr_10005a90_4;
    g1000a4d8 = *reinterpret_cast<int32_t*>(ecx3 * 8 + 0x1000a524);
    return;
    addr_10005a90_4:
    if (eax2 < 19 || eax2 > 36) {
        if (eax2 < 0xbc || eax2 > 0xca) {
            g1000a4d8 = 22;
            return;
        } else {
            g1000a4d8 = 8;
            return;
        }
    } else {
        g1000a4d8 = 13;
        return;
    }
}

int32_t HeapAlloc = 0xd6a2;

struct s0* fun_10005270(struct s0* a1) {
    int32_t ecx2;

    ecx2 = g1000c5e0;
    HeapAlloc();
    goto ecx2;
}

int32_t g1000b188 = 0;

int32_t fun_10005b10(struct s0* a1) {
    int32_t ecx2;
    int32_t eax3;

    ecx2 = g1000b188;
    if (!ecx2 || (eax3 = reinterpret_cast<int32_t>(ecx2(a1)), eax3 == 0)) {
        return 0;
    } else {
        return 1;
    }
}

struct s0* g1000a794 = reinterpret_cast<struct s0*>(0);

signed char* fun_10005b40(signed char* a1, signed char* a2) {
    signed char* ecx3;
    signed char* eax4;
    int1_t zf5;
    signed char* esi6;
    int32_t edx7;
    int32_t ebx8;

    ecx3 = a1;
    eax4 = a2;
    if (reinterpret_cast<uint32_t>(ecx3) < reinterpret_cast<uint32_t>(eax4)) {
        zf5 = g1000a794 == 0;
        if (!zf5) {
            esi6 = eax4 - 1;
            edx7 = 0;
            *reinterpret_cast<signed char*>(&edx7) = *esi6;
            if (!(*reinterpret_cast<unsigned char*>(edx7 + 0x1000a691) & 4)) {
                do {
                    --esi6;
                    if (reinterpret_cast<uint32_t>(ecx3) > reinterpret_cast<uint32_t>(esi6)) 
                        break;
                    ebx8 = 0;
                    *reinterpret_cast<signed char*>(&ebx8) = *esi6;
                } while (*reinterpret_cast<unsigned char*>(ebx8 + 0x1000a691) & 4);
                return reinterpret_cast<uint32_t>(eax4) - (reinterpret_cast<uint32_t>(eax4) - reinterpret_cast<uint32_t>(esi6) & 1) - 1;
            } else {
                return esi6 - 1;
            }
        } else {
            return eax4 - 1;
        }
    } else {
        return 0;
    }
}

struct s10 {
    struct s0* f0;
    struct s0* f1;
};

struct s0* fun_10005ba0(struct s0* a1, struct s0* a2, struct s0* a3) {
    struct s0* edx4;
    struct s0* eax5;
    int1_t zf6;
    struct s0* edi7;
    struct s0* esi8;
    struct s0* ebx9;
    struct s0* eax10;
    struct s0* edi11;
    struct s0* esi12;
    struct s0* cl13;
    int32_t ebx14;
    struct s10* edi15;
    struct s0* cl16;
    struct s0** esi17;
    struct s0** ecx18;

    edx4 = a1;
    eax5 = edx4;
    zf6 = g1000a794 == 0;
    if (zf6) {
        eax10 = fun_10005290(edx4, a2, a3, edi7, esi8, ebx9);
        return eax10;
    }
    edi11 = a2;
    esi12 = a3;
    while (esi12) {
        esi12 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esi12) - 1);
        cl13 = *reinterpret_cast<struct s0**>(&edi11->f0);
        ebx14 = 0;
        *reinterpret_cast<struct s0**>(&ebx14) = cl13;
        if (!(*reinterpret_cast<unsigned char*>(ebx14 + 0x1000a691) & 4)) {
            *reinterpret_cast<struct s0**>(&edx4->f0) = cl13;
            edx4 = reinterpret_cast<struct s0*>(&edx4->f1);
            edi11 = reinterpret_cast<struct s0*>(&edi11->f1);
            if (!cl13) 
                goto addr_10005c1e_7;
        } else {
            *reinterpret_cast<struct s0**>(&edx4->f0) = cl13;
            edi15 = reinterpret_cast<struct s10*>(&edi11->f1);
            edx4 = reinterpret_cast<struct s0*>(&edx4->f1);
            if (!esi12) 
                goto addr_10005c20_9;
            cl16 = edi15->f0;
            esi12 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(esi12) - 1);
            *reinterpret_cast<struct s0**>(&edx4->f0) = cl16;
            edx4 = reinterpret_cast<struct s0*>(&edx4->f1);
            edi11 = reinterpret_cast<struct s0*>(&edi15->f1);
            if (!cl16) 
                goto addr_10005bfa_11;
        }
    }
    addr_10005bfe_12:
    esi17 = reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(esi12) - 1);
    if (esi12) {
        do {
            *reinterpret_cast<struct s0**>(&edx4->f0) = reinterpret_cast<struct s0*>(0);
            edx4 = reinterpret_cast<struct s0*>(&edx4->f1);
            ecx18 = esi17;
            --esi17;
        } while (ecx18);
    }
    return eax5;
    addr_10005c1e_7:
    goto addr_10005bfe_12;
    addr_10005c20_9:
    *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(edx4) + 0xffffffff) = reinterpret_cast<struct s0*>(0);
    goto addr_10005bfe_12;
    addr_10005bfa_11:
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(edx4) + 0xfffffffe) = 0;
    goto addr_10005bfe_12;
}

int32_t g1000a4bc = 0;

void fun_100069a0(int32_t a1, struct s0* a2, struct s0* a3, struct s0* a4) {
    g1000a4bc = a1;
    return;
}

struct s0* fun_10005930(int32_t a1);

struct s0* g1000c4e0;

uint32_t g1000c4d0;

int32_t GetStartupInfoA = 0xd7ba;

int32_t GetStdHandle = 0xd7aa;

struct s11 {
    uint32_t f0;
    unsigned char f4;
};

struct s12 {
    struct s0* f0;
    signed char[3] pad4;
    unsigned char f4;
};

int32_t GetFileType = 0xd79c;

int32_t SetHandleCount = 0xd78a;

struct s13 {
    int32_t f0;
    unsigned char f4;
};

void fun_10006290() {
    struct s0* eax1;
    struct s0* esi2;
    struct s0* eax3;
    int16_t v4;
    int32_t v5;
    int32_t esi6;
    int32_t edi7;
    uint32_t edi8;
    struct s11* v9;
    unsigned char* ebx10;
    int32_t* esi11;
    int1_t less_or_equal12;
    struct s12* tmp32_13;
    uint32_t eax14;
    struct s0* eax15;
    uint32_t eax16;
    uint32_t eax17;
    int32_t v18;
    uint32_t ebp19;
    int32_t v20;
    int32_t eax21;
    struct s13* ecx22;
    struct s0** ebp23;
    struct s0* eax24;
    uint32_t tmp32_25;
    int1_t less_or_equal26;

    eax1 = fun_10005210(0x100);
    esi2 = eax1;
    if (!esi2) {
        fun_10005930(27);
    }
    g1000c4e0 = esi2;
    g1000c4d0 = 32;
    if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(esi2) + 0x100) > reinterpret_cast<unsigned char>(esi2)) {
        do {
            esi2->f4 = 0;
            esi2 = reinterpret_cast<struct s0*>(&esi2->f8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(esi2) + 0xfffffff8) = -1;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(esi2) + 0xfffffffd) = 10;
            eax3 = g1000c4e0;
        } while (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax3) + 0x100) > reinterpret_cast<unsigned char>(esi2));
    }
    GetStartupInfoA();
    if (!v4 || !v5) {
        addr_100063d8_7:
        esi6 = 0;
        edi7 = GetStdHandle;
    } else {
        edi8 = v9->f0;
        ebx10 = &v9->f4;
        esi11 = reinterpret_cast<int32_t*>(edi8 + reinterpret_cast<uint32_t>(ebx10));
        if (reinterpret_cast<int32_t>(edi8) >= reinterpret_cast<int32_t>(0x800)) {
            edi8 = 0x800;
        }
        less_or_equal12 = reinterpret_cast<int32_t>(edi8) <= reinterpret_cast<int32_t>(g1000c4d0);
        if (less_or_equal12) 
            goto addr_10006393_11; else 
            goto addr_10006336_12;
    }
    do {
        tmp32_13 = reinterpret_cast<struct s12*>(esi6 * 8 + reinterpret_cast<unsigned char>(g1000c4e0));
        if (!reinterpret_cast<int1_t>(tmp32_13->f0 == 0xffffffff)) {
            tmp32_13->f4 = reinterpret_cast<unsigned char>(tmp32_13->f4 | 0x80);
        } else {
            eax14 = 0xfffffff6;
            tmp32_13->f4 = 0x81;
            if (esi6) {
                eax14 = 12 - reinterpret_cast<uint1_t>(esi6 + 0xffffffff < 1);
            }
            eax15 = reinterpret_cast<struct s0*>(edi7(eax14));
            if (eax15 == 0xffffffff || (eax16 = reinterpret_cast<uint32_t>(GetFileType(eax15, eax14)), eax16 == 0)) {
                tmp32_13->f4 = reinterpret_cast<unsigned char>(tmp32_13->f4 | 64);
            } else {
                eax17 = eax16 & 0xff;
                tmp32_13->f0 = eax15;
                if (eax17 != 2) {
                    if (eax17 == 3) {
                        tmp32_13->f4 = reinterpret_cast<unsigned char>(tmp32_13->f4 | 8);
                    }
                } else {
                    tmp32_13->f4 = reinterpret_cast<unsigned char>(tmp32_13->f4 | 64);
                }
            }
        }
        ++esi6;
    } while (esi6 < 3);
    SetHandleCount();
    goto v18;
    addr_10006393_11:
    ebp19 = 0;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edi8) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edi8 == 0))) {
        do {
            if (*esi11 != -1 && (*ebx10 & 1 && (v20 = *esi11, eax21 = reinterpret_cast<int32_t>(GetFileType(v20)), !!eax21))) {
                ecx22 = reinterpret_cast<struct s13*>(*reinterpret_cast<int32_t**>((reinterpret_cast<int32_t>(ebp19 & 0xffffffe7) >> 3) + 0x1000c4e0) + (ebp19 & 31) * 2);
                ecx22->f0 = *esi11;
                ecx22->f4 = *ebx10;
            }
            ++ebp19;
            ++ebx10;
            ++esi11;
        } while (reinterpret_cast<int32_t>(ebp19) < reinterpret_cast<int32_t>(edi8));
        goto addr_100063d8_7;
    }
    addr_10006336_12:
    ebp23 = reinterpret_cast<struct s0**>(0x1000c4e4);
    do {
        eax24 = fun_10005210(0x100);
        if (!eax24) 
            break;
        *ebp23 = eax24;
        tmp32_25 = g1000c4d0 + 32;
        g1000c4d0 = tmp32_25;
        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax24) + 0x100) > reinterpret_cast<unsigned char>(eax24)) {
            do {
                eax24->f4 = 0;
                eax24 = reinterpret_cast<struct s0*>(&eax24->f8);
                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax24) + 0xfffffff8) = -1;
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax24) + 0xfffffffd) = 10;
            } while (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*ebp23) + 0x100) > reinterpret_cast<unsigned char>(eax24));
        }
        ebp23 = ebp23 + 4;
        less_or_equal26 = reinterpret_cast<int32_t>(edi8) <= reinterpret_cast<int32_t>(g1000c4d0);
    } while (!less_or_equal26);
    goto addr_1000638b_33;
    edi8 = g1000c4d0;
    goto addr_10006393_11;
    addr_1000638b_33:
    goto addr_10006393_11;
}

int32_t fun_10005c30(struct s0* a1);

int32_t fun_10005ef0() {
    int32_t eax1;

    eax1 = fun_10005c30(0xfd);
    return eax1;
}

int32_t GetModuleFileNameA = 0xd7cc;

struct s0** g1000c5f0;

struct s0** g1000a510 = reinterpret_cast<struct s0**>(0);

void fun_10006620(struct s0** a1, struct s0* a2, struct s0* a3, int32_t* a4, int32_t* a5);

struct s14 {
    struct s0* f0;
    signed char[1039] pad1040;
    struct s0* f410;
};

struct s0* g1000a4f8 = reinterpret_cast<struct s0*>(0);

int32_t g1000a4f4 = 0;

void fun_10006580() {
    struct s0** esi1;
    void* esp2;
    struct s0** eax3;
    struct s14* edi4;
    struct s0* eax5;
    void* esp6;
    int32_t esi7;

    esi1 = reinterpret_cast<struct s0**>(0x1000b190);
    GetModuleFileNameA();
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    eax3 = g1000c5f0;
    g1000a510 = reinterpret_cast<struct s0**>(0x1000b190);
    if (*eax3) {
        esi1 = g1000c5f0;
    }
    fun_10006620(esi1, 0, 0, reinterpret_cast<int32_t>(esp2) + 8, reinterpret_cast<int32_t>(esp2) + 12);
    eax5 = fun_10005210(&edi4->f410);
    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 20 - 4 - 4 + 4 + 4);
    if (!eax5) {
        fun_10005930(8);
        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 + 4 + 4);
    }
    fun_10006620(esi1, eax5, reinterpret_cast<unsigned char>(eax5) + 0x410, reinterpret_cast<int32_t>(esp6) + 8, reinterpret_cast<int32_t>(esp6) + 12);
    g1000a4f8 = eax5;
    g1000a4f4 = 0x103;
    goto esi7;
}

struct s0* g1000a4ac = reinterpret_cast<struct s0*>(0);

struct s0* g1000a500 = reinterpret_cast<struct s0*>(0);

void fun_100064a0(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4) {
    struct s0* v5;
    struct s0* edx6;
    struct s0* v7;
    struct s0* ebx8;
    struct s0* v9;
    struct s0* esi10;
    struct s0* v11;
    struct s0* edi12;
    struct s0** esi13;
    struct s0* v14;
    struct s0* ebp15;
    struct s0* edi16;
    int32_t ecx17;
    int32_t eax18;
    struct s0* eax19;
    struct s0* ebx20;
    struct s0* ebp21;
    struct s0* eax22;
    struct s0* edi23;
    int32_t ecx24;
    struct s0* ecx25;
    struct s0* v26;
    struct s0* eax27;
    struct s0* edi28;
    int32_t ecx29;
    void* eax30;
    struct s0* ecx31;
    uint32_t ecx32;
    struct s0* edi33;
    uint32_t ecx34;
    struct s0* eax35;

    v5 = reinterpret_cast<struct s0*>(__return_address());
    edx6 = g1000a4ac;
    v7 = ebx8;
    v9 = esi10;
    v11 = edi12;
    esi13 = reinterpret_cast<struct s0**>(0);
    v14 = ebp15;
    if (*reinterpret_cast<struct s0**>(&edx6->f0)) {
        do {
            if (*reinterpret_cast<struct s0**>(&edx6->f0) != 61) {
                ++esi13;
            }
            edi16 = edx6;
            ecx17 = -1;
            eax18 = eax18 - eax18;
            do {
                if (!ecx17) 
                    break;
                --ecx17;
                edi16 = reinterpret_cast<struct s0*>(&edi16->f1);
                ++esi13;
            } while (*reinterpret_cast<struct s0**>(&edi16->f0) != *reinterpret_cast<struct s0**>(&eax18));
            edx6 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(edx6) + ~ecx17);
        } while (*reinterpret_cast<struct s0**>(&edx6->f0));
    }
    eax19 = fun_10005210(reinterpret_cast<uint32_t>(esi13) * 4 + 4);
    g1000a500 = eax19;
    ebx20 = eax19;
    if (!ebx20) {
        fun_10005930(9);
    }
    ebp21 = g1000a4ac;
    eax22 = ebp21;
    if (*reinterpret_cast<struct s0**>(&ebp21->f0)) {
        do {
            edi23 = ebp21;
            ecx24 = -1;
            eax22 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(eax22) - reinterpret_cast<unsigned char>(eax22));
            do {
                if (!ecx24) 
                    break;
                --ecx24;
                edi23 = reinterpret_cast<struct s0*>(&edi23->f1);
            } while (*reinterpret_cast<struct s0**>(&edi23->f0) != eax22);
            ecx25 = reinterpret_cast<struct s0*>(~ecx24);
            v26 = ecx25;
            if (*reinterpret_cast<struct s0**>(&ebp21->f0) != 61) {
                eax27 = fun_10005210(ecx25);
                *reinterpret_cast<struct s0**>(&ebx20->f0) = eax27;
                if (!eax27) {
                    eax27 = fun_10005930(9);
                }
                edi28 = ebp21;
                ecx29 = -1;
                eax30 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax27) - reinterpret_cast<unsigned char>(eax27));
                do {
                    if (!ecx29) 
                        break;
                    --ecx29;
                    edi28 = reinterpret_cast<struct s0*>(&edi28->f1);
                } while (*reinterpret_cast<struct s0**>(&edi28->f0) != *reinterpret_cast<struct s0**>(&eax30));
                ecx31 = reinterpret_cast<struct s0*>(~ecx29);
                eax22 = ecx31;
                ecx32 = reinterpret_cast<unsigned char>(ecx31) >> 2;
                esi13 = reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(edi28) - reinterpret_cast<unsigned char>(ecx31));
                edi33 = *reinterpret_cast<struct s0**>(&ebx20->f0);
                ebx20 = reinterpret_cast<struct s0*>(&ebx20->f4);
                while (ecx32) {
                    --ecx32;
                    *reinterpret_cast<struct s0**>(&edi33->f0) = *esi13;
                    edi33 = reinterpret_cast<struct s0*>(&edi33->f4);
                    esi13 = esi13 + 4;
                }
                ecx34 = reinterpret_cast<unsigned char>(eax22) & 3;
                while (ecx34) {
                    --ecx34;
                    *reinterpret_cast<struct s0**>(&edi33->f0) = *esi13;
                    edi33 = reinterpret_cast<struct s0*>(&edi33->f1);
                    ++esi13;
                }
            }
            ebp21 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ebp21) + reinterpret_cast<unsigned char>(v26));
        } while (*reinterpret_cast<struct s0**>(&ebp21->f0));
    }
    eax35 = g1000a4ac;
    fun_100051f0(eax35, v14, v11, v9, v7, v26, v5, a1, a2, a3, a4);
    *reinterpret_cast<struct s0**>(&ebx20->f0) = reinterpret_cast<struct s0*>(0);
    return;
}

int32_t g1000c5e8;

void fun_10005a50(int32_t* a1, int32_t* a2);

void fun_10005970() {
    int32_t eax1;

    eax1 = g1000c5e8;
    if (eax1) {
        eax1();
    }
    fun_10005a50(0x10009008, 0x10009010);
    fun_10005a50(0x10009000, 0x10009004);
    return;
}

void fun_100059d0(int32_t a1, int32_t a2, int32_t a3);

void fun_100059c0() {
    fun_100059d0(0, 0, 1);
    return;
}

uint32_t g1000a4a8 = 0;

int32_t g1000a51c = 0;

void fun_10006470(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8);

void fun_10005b00();

int32_t GetVersion = 0xd6c0;

uint32_t g1000a4e4 = 0;

int32_t GetModuleHandleA = 0xd31c;

int32_t GetProcAddress = 0xd36e;

void fun_10005ae0();

int32_t g1000a4f0 = 0;

uint32_t g1000a4ec = 0;

uint32_t g1000a4e8 = 0;

int32_t GetCommandLineA = 0xd6ae;

struct s0* fun_10006800();

struct s0* fun_10005740(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7) {
    uint32_t eax8;
    int1_t zf9;
    uint32_t eax10;
    int1_t zf11;
    struct s0* eax12;
    int32_t eax13;
    int32_t ecx14;
    uint32_t edx15;
    uint32_t eax16;
    struct s0** eax17;
    struct s0* eax18;
    int1_t zf19;

    if (!reinterpret_cast<int1_t>(a2 == 1)) {
        if (!a2) {
            eax8 = g1000a4a8;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax8) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax8 == 0)) {
                return 0;
            } else {
                zf9 = g1000a51c == 0;
                g1000a4a8 = eax8 - 1;
                if (zf9) {
                    fun_100059c0();
                }
                fun_10006470(__return_address(), a1, a2, a3, a4, a5, a6, a7);
                fun_10005b00();
                return 1;
            }
        }
    } else {
        eax10 = reinterpret_cast<uint32_t>(GetVersion());
        zf11 = g1000a4bc == 0;
        g1000a4e4 = eax10;
        if (zf11) {
            if (*reinterpret_cast<signed char*>(&eax10) == 3 && eax10 & 0x80000000) {
                fun_100069a0(2, __return_address(), a1, a2);
            }
            eax12 = reinterpret_cast<struct s0*>(GetModuleHandleA("kernel32.dll"));
            if (eax12 && (eax13 = reinterpret_cast<int32_t>(GetProcAddress(eax12, "IsTNT", "kernel32.dll")), !!eax13)) {
                fun_100069a0(1, eax12, "IsTNT", "kernel32.dll");
            }
        }
        fun_10005ae0();
        ecx14 = 0;
        edx15 = g1000a4e4;
        *reinterpret_cast<signed char*>(&ecx14) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx15) + 1);
        eax16 = edx15 & 0xff;
        ++g1000a4a8;
        g1000a4f0 = ecx14;
        g1000a4ec = eax16;
        g1000a4e4 = edx15 >> 16;
        g1000a4e8 = (eax16 << 8) + ecx14;
        eax17 = reinterpret_cast<struct s0**>(GetCommandLineA());
        g1000c5f0 = eax17;
        eax18 = fun_10006800();
        zf19 = g1000c5f0 == 0;
        g1000a4ac = eax18;
        if (zf19 || !eax18) {
            fun_10005b00();
            return 0;
        } else {
            fun_10006290();
            fun_10005ef0();
            fun_10006580();
            fun_100064a0(__return_address(), a1, a2, a3);
            fun_10005970();
        }
    }
    return 1;
}

int32_t HeapDestroy = 0xd6ea;

void fun_10005b00() {
    int32_t eax1;

    eax1 = g1000c5e0;
    HeapDestroy();
    goto eax1;
}

int32_t g1000a4b8 = 0;

void fun_100069f0(int32_t a1);

int32_t g1000abe0 = 0;

void fun_100069b0() {
    int32_t eax1;
    int1_t zf2;
    int32_t eax3;

    eax1 = g1000a4b8;
    if (eax1 == 1 || !eax1 && (zf2 = g1000a4bc == 1, zf2)) {
        fun_100069f0(0xfc);
        eax3 = g1000abe0;
        if (eax3) {
            eax3();
        }
        fun_100069f0(0xff);
    }
    return;
}

void fun_10005a50(int32_t* a1, int32_t* a2) {
    int32_t* esi3;
    int32_t* edi4;
    int32_t eax5;

    esi3 = a2;
    edi4 = a1;
    if (reinterpret_cast<uint32_t>(esi3) > reinterpret_cast<uint32_t>(edi4)) {
        do {
            eax5 = *edi4;
            if (eax5) {
                eax5();
            }
            ++edi4;
        } while (reinterpret_cast<uint32_t>(esi3) > reinterpret_cast<uint32_t>(edi4));
    }
    return;
}

struct s0* fun_10005290(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6) {
    struct s0* edi7;
    struct s0* edx8;
    struct s0* ecx9;
    signed char al10;
    struct s0* al11;

    edi7 = a1;
    edx8 = edi7;
    ecx9 = a3;
    if (!ecx9) {
        do {
            __asm__("lodsb ");
            if (!al10) 
                break;
            *reinterpret_cast<struct s0**>(&edi7->f0) = al11;
            edi7 = reinterpret_cast<struct s0*>(&edi7->f1);
            ecx9 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ecx9) - 1);
        } while (ecx9);
        while (ecx9) {
            ecx9 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(ecx9) - 1);
            *reinterpret_cast<struct s0**>(&edi7->f0) = reinterpret_cast<struct s0*>(0);
            edi7 = reinterpret_cast<struct s0*>(&edi7->f1);
        }
    }
    return edx8;
}

struct s0* g1000a7a0 = reinterpret_cast<struct s0*>(0);

struct s0* g1000a798 = reinterpret_cast<struct s0*>(0);

struct s0* g1000a7a4 = reinterpret_cast<struct s0*>(0);

struct s0* g1000a7a8 = reinterpret_cast<struct s0*>(0);

void fun_10005ec0() {
    struct s0** edi1;
    int32_t ecx2;

    edi1 = reinterpret_cast<struct s0**>(0x1000a690);
    ecx2 = 64;
    while (ecx2) {
        --ecx2;
        *edi1 = reinterpret_cast<struct s0*>(0);
        edi1 = edi1 + 4;
    }
    *edi1 = reinterpret_cast<struct s0*>(0);
    g1000a7a0 = reinterpret_cast<struct s0*>(0);
    g1000a794 = reinterpret_cast<struct s0*>(0);
    g1000a798 = reinterpret_cast<struct s0*>(0);
    g1000a7a4 = reinterpret_cast<struct s0*>(0);
    g1000a7a8 = reinterpret_cast<struct s0*>(0);
    return;
}

void fun_10005eac();

struct s0* fun_10005e60(struct s0* a1) {
    uint32_t eax2;
    int32_t ecx3;

    eax2 = reinterpret_cast<unsigned char>(a1) - 0x3a4;
    if (eax2 > 18) 
        goto addr_10005e7d_2;
    ecx3 = 0;
    *reinterpret_cast<signed char*>(&ecx3) = *reinterpret_cast<signed char*>(eax2 + reinterpret_cast<int32_t>(fun_10005eac));
    switch (ecx3) {
    case 0:
        return 0x411;
    case 1:
        return 0x804;
    case 2:
        return 0x412;
    case 3:
        return 0x404;
        addr_10005e7d_2:
    case 4:
        return 0;
    }
}

struct s0* fun_10006130(struct s0* a1, struct s0* a2) {
    struct s0* eax3;
    struct s0* edi4;
    struct s0** ecx5;
    struct s0* edx6;
    struct s0** esi7;

    eax3 = a2;
    edi4 = a1;
    ecx5 = reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax3) + 0xffffffff);
    edx6 = edi4;
    if (eax3) {
        do {
            if (!*reinterpret_cast<struct s0**>(&edx6->f0)) 
                goto addr_10006155_3;
            edx6 = reinterpret_cast<struct s0*>(&edx6->f1);
            esi7 = ecx5;
            --ecx5;
        } while (esi7);
    }
    if (*reinterpret_cast<struct s0**>(&edx6->f0)) {
        addr_10006159_6:
        return eax3;
    } else {
        addr_10006155_3:
        eax3 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(edx6) - reinterpret_cast<unsigned char>(edi4));
        goto addr_10006159_6;
    }
}

struct s0* fun_10006d30(int32_t a1, uint32_t a2) {
    int32_t v3;
    struct s0* edi4;
    int32_t esi5;
    int32_t eax6;
    int32_t eax7;
    int1_t zf8;
    int32_t eax9;

    v3 = reinterpret_cast<int32_t>(__return_address());
    edi4 = reinterpret_cast<struct s0*>(a1 * a2);
    if (!edi4) {
        edi4 = reinterpret_cast<struct s0*>(1);
    }
    esi5 = HeapAlloc;
    eax6 = g1000c5e0;
    do {
        if (reinterpret_cast<unsigned char>(edi4) <= reinterpret_cast<unsigned char>(0xffffffe0)) {
            eax7 = reinterpret_cast<int32_t>(esi5(eax6, 8, edi4));
        } else {
            eax7 = 0;
        }
        if (eax7) 
            break;
        zf8 = g1000a68c == 0;
        if (zf8) 
            break;
        eax9 = fun_10005b10(edi4);
        eax6 = g1000c5e0;
    } while (eax9);
    goto addr_10006d7d_10;
    addr_10006d7f_11:
    goto v3;
    addr_10006d7d_10:
    goto addr_10006d7f_11;
}

/* (image base) */
int32_t image_base_ = 0x100059a0;

struct s0* fun_10005930(int32_t a1) {
    int32_t eax2;
    int1_t zf3;
    struct s0* eax4;

    eax2 = g1000a4b8;
    if (eax2 == 1 || !eax2 && (zf3 = g1000a4bc == 1, zf3)) {
        fun_100069b0();
    }
    fun_100069f0(a1);
    eax4 = reinterpret_cast<struct s0*>(image_base_(0xff));
    return eax4;
}

void fun_10006620(struct s0** a1, struct s0* a2, struct s0* a3, int32_t* a4, int32_t* a5) {
    int32_t* ecx6;
    struct s0** esi7;
    struct s0* eax8;
    struct s0* edx9;
    int32_t edx10;
    struct s0* dl11;
    int32_t ebx12;
    uint32_t edi13;
    struct s0* edx14;
    int32_t ebx15;
    uint32_t ebp16;
    struct s0** edx17;
    uint32_t ebp18;
    uint32_t edx19;
    int32_t ebx20;
    int32_t ebx21;

    ecx6 = a5;
    esi7 = a1;
    eax8 = a3;
    *ecx6 = 0;
    *a4 = 1;
    if (a2) {
        edx9 = a2;
        a2 = reinterpret_cast<struct s0*>(&a2->f4);
        *reinterpret_cast<struct s0**>(&edx9->f0) = eax8;
    }
    if (*esi7 == 34) {
        ++esi7;
        if (*esi7 != 34) {
            do {
                if (!*esi7) 
                    break;
                edx10 = 0;
                *reinterpret_cast<struct s0**>(&edx10) = *esi7;
                if (*reinterpret_cast<unsigned char*>(edx10 + 0x1000a691) & 4 && (*ecx6 = *ecx6 + 1, !!eax8)) {
                    ++esi7;
                    *reinterpret_cast<struct s0**>(&eax8->f0) = *esi7;
                    eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
                }
                *ecx6 = *ecx6 + 1;
                if (eax8) {
                    *reinterpret_cast<struct s0**>(&eax8->f0) = *esi7;
                    eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
                }
                ++esi7;
            } while (!reinterpret_cast<int1_t>(*esi7 == 34));
        }
        *ecx6 = *ecx6 + 1;
        if (eax8) {
            *reinterpret_cast<struct s0**>(&eax8->f0) = reinterpret_cast<struct s0*>(0);
            eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
        }
        if (reinterpret_cast<int1_t>(*esi7 == 34)) {
            ++esi7;
        }
    } else {
        do {
            *ecx6 = *ecx6 + 1;
            if (eax8) {
                *reinterpret_cast<struct s0**>(&eax8->f0) = *esi7;
                eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
            }
            dl11 = *esi7;
            ++esi7;
            ebx12 = 0;
            *reinterpret_cast<struct s0**>(&ebx12) = dl11;
            if (*reinterpret_cast<unsigned char*>(ebx12 + 0x1000a691) & 4) {
                *ecx6 = *ecx6 + 1;
                if (eax8) {
                    *reinterpret_cast<struct s0**>(&eax8->f0) = *esi7;
                    eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
                }
                ++esi7;
            }
            if (dl11 == 32) 
                break;
            if (!dl11) 
                goto addr_10006690_23;
        } while (!reinterpret_cast<int1_t>(dl11 == 9));
        if (dl11) {
            if (eax8) {
                *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax8) + 0xffffffff) = reinterpret_cast<struct s0*>(0);
            }
        } else {
            addr_10006690_23:
            --esi7;
        }
    }
    edi13 = 0;
    while (*esi7) {
        while (*esi7 == 32 || reinterpret_cast<int1_t>(*esi7 == 9)) {
            ++esi7;
        }
        if (!*esi7) 
            break;
        if (a2) {
            edx14 = a2;
            a2 = reinterpret_cast<struct s0*>(&a2->f4);
            *reinterpret_cast<struct s0**>(&edx14->f0) = eax8;
        }
        *a4 = *a4 + 1;
        while (1) {
            ebx15 = 1;
            ebp16 = 0;
            if (reinterpret_cast<int1_t>(*esi7 == 92)) {
                do {
                    ++esi7;
                    ++ebp16;
                } while (*esi7 == 92);
            }
            if (reinterpret_cast<int1_t>(*esi7 == 34)) {
                if (!(ebp16 & 1)) {
                    if (!edi13 || (edx17 = esi7 + 1, !reinterpret_cast<int1_t>(*edx17 == 34))) {
                        ebx15 = 0;
                    } else {
                        esi7 = edx17;
                    }
                    edi13 = -(edi13 - (edi13 + reinterpret_cast<uint1_t>(edi13 < edi13 + reinterpret_cast<uint1_t>(edi13 < 1))));
                }
                ebp16 = ebp16 >> 1;
            }
            ebp18 = ebp16 - 1;
            if (ebp16) {
                do {
                    if (eax8) {
                        *reinterpret_cast<struct s0**>(&eax8->f0) = reinterpret_cast<struct s0*>(92);
                        eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
                    }
                    edx19 = ebp18;
                    *ecx6 = *ecx6 + 1;
                    --ebp18;
                } while (edx19);
            }
            if (!*esi7) 
                break;
            if (edi13) 
                goto addr_10006786_51;
            if (*esi7 == 32) 
                break;
            if (*esi7 == 9) 
                break;
            addr_10006786_51:
            if (ebx15) {
                if (!eax8) {
                    ebx20 = 0;
                    *reinterpret_cast<struct s0**>(&ebx20) = *esi7;
                    if (*reinterpret_cast<unsigned char*>(ebx20 + 0x1000a691) & 4) {
                        ++esi7;
                        *ecx6 = *ecx6 + 1;
                    }
                    *ecx6 = *ecx6 + 1;
                } else {
                    ebx21 = 0;
                    *reinterpret_cast<struct s0**>(&ebx21) = *esi7;
                    if (*reinterpret_cast<unsigned char*>(ebx21 + 0x1000a691) & 4) {
                        *reinterpret_cast<struct s0**>(&eax8->f0) = *esi7;
                        ++esi7;
                        eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
                        *ecx6 = *ecx6 + 1;
                    }
                    eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
                    ++esi7;
                    *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax8) + 0xffffffff) = *esi7;
                    *ecx6 = *ecx6 + 1;
                    continue;
                }
            }
            ++esi7;
        }
        if (eax8) {
            *reinterpret_cast<struct s0**>(&eax8->f0) = reinterpret_cast<struct s0*>(0);
            eax8 = reinterpret_cast<struct s0*>(&eax8->f1);
        }
        *ecx6 = *ecx6 + 1;
    }
    if (a2) {
        *reinterpret_cast<struct s0**>(&a2->f0) = reinterpret_cast<struct s0*>(0);
    }
    *a4 = *a4 + 1;
    return;
}

int32_t WriteFile = 0xd848;

void fun_10006d90(void* a1, int32_t a2, int32_t a3);

void fun_100069f0(int32_t a1) {
    int32_t eax2;
    int32_t* ecx3;
    int32_t edx4;
    void* esp5;
    int32_t ebx6;
    int1_t zf7;
    int1_t zf8;
    int1_t zf9;
    struct s0* eax10;
    uint32_t esi11;
    uint32_t eax12;
    signed char* edx13;
    void* eax14;
    signed char* edi15;
    void* v16;
    int32_t ecx17;
    void* eax18;
    struct s0* v19;
    int32_t ebp20;
    void* eax21;
    void* esp22;
    int32_t ecx23;
    struct s0* ebp24;
    int32_t ecx25;
    struct s0* eax26;
    signed char v27;
    int32_t ecx28;
    void* eax29;
    void* esp30;
    signed char v31;
    int32_t ecx32;
    struct s0* edi33;
    int32_t ecx34;
    void* eax35;
    uint32_t edx36;
    int32_t ecx37;
    void* eax38;
    signed char v39;
    uint32_t ecx40;
    uint32_t ecx41;
    signed char* edi42;
    int32_t ecx43;
    void* eax44;
    uint32_t edx45;
    int32_t ecx46;
    void* eax47;
    signed char v48;
    uint32_t ecx49;
    uint32_t ecx50;
    signed char* edi51;
    int32_t ecx52;
    void* eax53;
    uint32_t edx54;
    int32_t ecx55;
    void* eax56;
    signed char v57;
    uint32_t ecx58;
    uint32_t ecx59;
    void* esp60;
    int32_t v61;

    eax2 = 0;
    ecx3 = reinterpret_cast<int32_t*>(0x1000ab58);
    edx4 = a1;
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x1a8 - 4 - 4 - 4 - 4);
    do {
        if (*ecx3 == edx4) 
            break;
        ecx3 = ecx3 + 2;
        ++eax2;
    } while (reinterpret_cast<uint32_t>(ecx3) < 0x1000abe0);
    ebx6 = eax2 * 8;
    if (*reinterpret_cast<int32_t*>(eax2 * 8 + 0x1000ab58) == edx4) {
        zf7 = g1000a4b8 == 1;
        if (zf7 || (zf8 = g1000a4b8 == 0, zf8) && (zf9 = g1000a4bc == 1, zf9)) {
            eax10 = g1000c4e0;
            esi11 = *reinterpret_cast<uint32_t*>(&eax10->fd);
            if (esi11 == 0xffffffff) {
                eax12 = reinterpret_cast<uint32_t>(GetStdHandle(0xf4));
                esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4);
                esi11 = eax12;
            }
            edx13 = *reinterpret_cast<signed char**>(ebx6 + 0x1000ab5c);
            eax14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 + 20);
            edi15 = edx13;
            v16 = eax14;
            ecx17 = -1;
            eax18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax14) - reinterpret_cast<int32_t>(eax14));
            do {
                if (!ecx17) 
                    break;
                --ecx17;
                ++edi15;
                ++esi11;
            } while (*edi15 != *reinterpret_cast<signed char*>(&eax18));
            WriteFile(esi11, edx13, ~ecx17 - 1, v16, 0);
        } else {
            if (edx4 != 0xfc) {
                v19 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp5) + 0xb4);
                ebp20 = GetModuleFileNameA;
                eax21 = reinterpret_cast<void*>(ebp20());
                esp22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 + 4);
                if (!eax21) {
                    ecx23 = 5;
                    while (ecx23) {
                        --ecx23;
                    }
                }
                ebp24 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp22) + 0xb4);
                ecx25 = -1;
                eax26 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(eax21) - reinterpret_cast<uint32_t>(eax21));
                do {
                    if (!ecx25) 
                        break;
                    --ecx25;
                } while (v27 != *reinterpret_cast<signed char*>(&eax26));
                if (reinterpret_cast<uint32_t>(~ecx25) > 60) {
                    ecx28 = -1;
                    eax29 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26) - reinterpret_cast<unsigned char>(eax26));
                    esp30 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) - 4);
                    do {
                        if (!ecx28) 
                            break;
                        --ecx28;
                    } while (v31 != *reinterpret_cast<signed char*>(&eax29));
                    ebp24 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp30) + ~ecx28 + 0x7c);
                    eax26 = fun_10005290(ebp24, "...", 3, 0, v19, 0x104);
                    esp22 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 + 4 + 12);
                }
                ecx32 = 6;
                while (ecx32) {
                    --ecx32;
                }
                edi33 = ebp24;
                ecx34 = -1;
                eax35 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax26) - reinterpret_cast<unsigned char>(eax26));
                do {
                    if (!ecx34) 
                        break;
                    --ecx34;
                    edi33 = reinterpret_cast<struct s0*>(&edi33->f1);
                } while (*reinterpret_cast<struct s0**>(&edi33->f0) != *reinterpret_cast<struct s0**>(&eax35));
                edx36 = reinterpret_cast<uint32_t>(~ecx34);
                ecx37 = -1;
                eax38 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax35) - reinterpret_cast<uint32_t>(eax35));
                do {
                    if (!ecx37) 
                        break;
                    --ecx37;
                } while (v39 != *reinterpret_cast<signed char*>(&eax38));
                ecx40 = edx36 >> 2;
                while (ecx40) {
                    --ecx40;
                }
                ecx41 = edx36 & 3;
                while (ecx41) {
                    --ecx41;
                }
                edi42 = "\n\n";
                ecx43 = -1;
                eax44 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax38) - reinterpret_cast<uint32_t>(eax38));
                do {
                    if (!ecx43) 
                        break;
                    --ecx43;
                    ++edi42;
                } while (*edi42 != *reinterpret_cast<signed char*>(&eax44));
                edx45 = reinterpret_cast<uint32_t>(~ecx43);
                ecx46 = -1;
                eax47 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax44) - reinterpret_cast<uint32_t>(eax44));
                do {
                    if (!ecx46) 
                        break;
                    --ecx46;
                } while (v48 != *reinterpret_cast<signed char*>(&eax47));
                ecx49 = edx45 >> 2;
                while (ecx49) {
                    --ecx49;
                }
                ecx50 = edx45 & 3;
                while (ecx50) {
                    --ecx50;
                }
                edi51 = *reinterpret_cast<signed char**>(ebx6 + 0x1000ab5c);
                ecx52 = -1;
                eax53 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax47) - reinterpret_cast<uint32_t>(eax47));
                do {
                    if (!ecx52) 
                        break;
                    --ecx52;
                    ++edi51;
                } while (*edi51 != *reinterpret_cast<signed char*>(&eax53));
                edx54 = reinterpret_cast<uint32_t>(~ecx52);
                ecx55 = -1;
                eax56 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax53) - reinterpret_cast<uint32_t>(eax53));
                do {
                    if (!ecx55) 
                        break;
                    --ecx55;
                } while (v57 != *reinterpret_cast<signed char*>(&eax56));
                ecx58 = edx54 >> 2;
                while (ecx58) {
                    --ecx58;
                }
                ecx59 = edx54 & 3;
                esp60 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp22) - 4 - 4);
                while (ecx59) {
                    --ecx59;
                }
                fun_10006d90(reinterpret_cast<int32_t>(esp60) + 28, "Microsoft Visual C++ Runtime Library", 0x12010);
                goto v61;
            }
        }
    }
    return;
}

int32_t g1000ac84 = 0;

int32_t LoadLibraryA = 0xd380;

int32_t g1000ac88 = 0;

int32_t g1000ac8c = 0;

void fun_10006d90(void* a1, int32_t a2, int32_t a3) {
    int32_t esi4;
    int1_t zf5;
    int32_t eax6;
    int32_t edi7;
    int32_t eax8;
    int32_t ebx9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    int1_t zf14;

    esi4 = 0;
    zf5 = g1000ac84 == 0;
    if (zf5) {
        eax6 = reinterpret_cast<int32_t>(LoadLibraryA());
        if (!eax6 || (edi7 = GetProcAddress, eax8 = reinterpret_cast<int32_t>(edi7(eax6, "MessageBoxA")), g1000ac84 = eax8, eax8 == 0)) {
            goto ebx9;
        } else {
            eax10 = reinterpret_cast<int32_t>(edi7(eax6, "GetActiveWindow", eax6, "MessageBoxA"));
            g1000ac88 = eax10;
            eax11 = reinterpret_cast<int32_t>(edi7(eax6, "GetLastActivePopup", eax6, "GetActiveWindow", eax6, "MessageBoxA"));
            g1000ac8c = eax11;
        }
    }
    eax12 = g1000ac88;
    if (eax12) {
        eax13 = reinterpret_cast<int32_t>(eax12());
        esi4 = eax13;
    }
    if (esi4 && (zf14 = g1000ac8c == 0, !zf14)) {
        g1000ac8c(esi4);
    }
    g1000ac84();
    goto a3;
}

struct s0* g1000b4c8;

uint32_t fun_10006e30(struct s0* a1);

uint32_t fun_10006f00(int32_t a1) {
    uint32_t ebx2;
    void* esi3;
    uint32_t ebp4;
    int32_t edi5;
    struct s0* eax6;
    uint32_t eax7;
    struct s0* v8;
    uint32_t eax9;
    struct s0* v10;
    uint32_t eax11;
    uint32_t eax12;

    ebx2 = 0;
    esi3 = reinterpret_cast<void*>(0);
    ebp4 = 0;
    edi5 = a1;
    do {
        eax6 = g1000b4c8;
        if (*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax6) + reinterpret_cast<uint32_t>(esi3)) && (eax7 = (*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax6) + reinterpret_cast<uint32_t>(esi3)))->fc, !!(*reinterpret_cast<unsigned char*>(&eax7) & 0x83))) {
            if (edi5 != 1) {
                if (!edi5 && (*reinterpret_cast<unsigned char*>(&eax7) & 2 && (v8 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax6) + reinterpret_cast<uint32_t>(esi3)), eax9 = fun_10006e30(v8), eax9 == 0xffffffff))) {
                    ebp4 = 0xffffffff;
                }
            } else {
                v10 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax6) + reinterpret_cast<uint32_t>(esi3));
                eax11 = fun_10006e30(v10);
                if (eax11 != 0xffffffff) {
                    ++ebx2;
                }
            }
        }
        esi3 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi3) + 4);
    } while (reinterpret_cast<int32_t>(esi3) < reinterpret_cast<int32_t>(0x800));
    eax12 = ebx2;
    if (edi5 != 1) {
        eax12 = ebp4;
    }
    return eax12;
}

int32_t fun_10007490(uint32_t a1);

int32_t FlushFileBuffers = 0xd854;

uint32_t fun_100070a0(uint32_t a1) {
    int1_t cf2;
    uint32_t eax3;
    int32_t eax4;
    int32_t eax5;

    cf2 = a1 < g1000c4d0;
    if (!cf2 || !(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000c4e0)) + (a1 & 31) * 8 + 4) & 1)) {
        g1000a4d8 = 9;
        eax3 = 0xffffffff;
    } else {
        eax4 = fun_10007490(a1);
        eax5 = reinterpret_cast<int32_t>(FlushFileBuffers());
        eax3 = 0;
        if (!eax5) {
            eax3 = reinterpret_cast<uint32_t>(GetLastError());
        }
        if (eax3) {
            g1000a4d8 = 9;
            g1000a4dc = eax3;
            goto eax4;
        }
    }
    return eax3;
}

int32_t fun_100074e0(uint32_t a1, int32_t a2, int32_t a3);

struct s15 {
    int32_t f0;
    unsigned char f4;
};

void* fun_10007110(uint32_t a1, struct s0* a2, void* a3) {
    int1_t below_or_equal4;
    void** esp5;
    void* v6;
    void* ebp7;
    int32_t** v8;
    uint32_t eax9;
    int32_t* ebx10;
    uint32_t v11;
    unsigned char al12;
    void* esi13;
    void* ebp14;
    struct s15* ecx15;
    void* v16;
    void* v17;
    int32_t ecx18;
    struct s0* v19;
    int32_t v20;
    int32_t eax21;
    struct s0* edi22;
    void* ebx23;
    void* esp24;
    void* ebx25;
    int32_t eax26;

    below_or_equal4 = g1000c4d0 <= a1;
    esp5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x418 - 4 - 4 - 4 - 4);
    v6 = ebp7;
    if (below_or_equal4 || (v8 = reinterpret_cast<int32_t**>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000c4e0), eax9 = (a1 & 31) << 3, ebx10 = *v8, v11 = eax9, al12 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(ebx10) + eax9 + 4), (al12 & 1) == 0)) {
        g1000a4d8 = 9;
        g1000a4dc = 0;
        return 0xffffffff;
    }
    esi13 = reinterpret_cast<void*>(0);
    ebp14 = a3;
    if (!ebp14) {
        return 0;
    }
    if (al12 & 32) {
        fun_100074e0(a1, 0, 2);
        esp5 = esp5 - 1 - 1 - 1 - 1 + 1 + 3;
    }
    ecx15 = reinterpret_cast<struct s15*>(v11 + reinterpret_cast<int32_t>(*v8));
    if (ecx15->f4 & 0x80) 
        goto addr_1000719e_8;
    v16 = reinterpret_cast<void*>(esp5 + 5);
    v17 = ebp14;
    ecx18 = ecx15->f0;
    v19 = a2;
    v20 = ecx18;
    eax21 = reinterpret_cast<int32_t>(WriteFile(v20, v19, v17, v16, 0));
    if (!eax21) {
        addr_10007255_10:
        GetLastError(v20, v19, v17, v16, 0);
    }
    addr_1000725f_12:
    if (0) {
        return -static_cast<uint32_t>(esi13);
    } else {
        if (1) {
            if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*v8) + v11 + 4) & 64) || !reinterpret_cast<int1_t>(*reinterpret_cast<struct s0**>(&a2->f0) == 26)) {
                g1000a4d8 = 28;
                g1000a4dc = 0;
                return 0xffffffff;
            } else {
                return 0;
            }
        } else {
            if (1) {
                fun_10005a70(0);
                return 0xffffffff;
            } else {
                g1000a4d8 = 9;
                g1000a4dc = 0;
                return 0xffffffff;
            }
        }
    }
    addr_1000719e_8:
    edi22 = a2;
    do {
        if (reinterpret_cast<unsigned char>(edi22) - reinterpret_cast<unsigned char>(a2) >= reinterpret_cast<uint32_t>(ebp14)) 
            goto addr_1000725f_12;
        ebx23 = reinterpret_cast<void*>(esp5 + 9);
        do {
            if (reinterpret_cast<unsigned char>(edi22) - reinterpret_cast<unsigned char>(a2) >= reinterpret_cast<uint32_t>(ebp14)) 
                break;
            edi22 = reinterpret_cast<struct s0*>(&edi22->f1);
            if (reinterpret_cast<int1_t>(*reinterpret_cast<struct s0**>(&edi22->f0) == 10)) {
                esi13 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi13) + 1);
                ebx23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx23) + 1);
            }
            ebx23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx23) + 1);
        } while (reinterpret_cast<int32_t>(ebx23) - reinterpret_cast<int32_t>(esp5 + 9) < 0x400);
        esp24 = reinterpret_cast<void*>(esp5 - 1);
        ebx25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx23) - reinterpret_cast<uint32_t>(esp5 + 9));
        v16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) + 24);
        v17 = ebx25;
        v19 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp24) + 40);
        v20 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*v8) + v11);
        eax26 = reinterpret_cast<int32_t>(WriteFile(v20, v19, v17, v16, 0));
        esp5 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp24) - 4 - 4 - 4 - 4 - 4 + 4);
        if (!eax26) 
            goto addr_10007255_10;
    } while (reinterpret_cast<int32_t>(v6) >= reinterpret_cast<int32_t>(ebx25));
    goto addr_1000725f_12;
}

int32_t fun_10006e80(struct s0* a1);

uint32_t fun_10006e30(struct s0* a1) {
    int32_t eax2;
    uint32_t v3;
    uint32_t eax4;
    uint32_t eax5;

    if (a1) {
        eax2 = fun_10006e80(a1);
        if (!eax2) {
            if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(a1) + 13) & 64)) {
                return 0;
            } else {
                v3 = *reinterpret_cast<uint32_t*>(&a1->fd);
                eax4 = fun_100070a0(v3);
                return 1 - reinterpret_cast<uint1_t>(eax4 < 1);
            }
        } else {
            return 0xffffffff;
        }
    } else {
        eax5 = fun_10006f00(0);
        return eax5;
    }
}

struct s16 {
    int32_t f0;
    unsigned char f4;
};

int32_t fun_10007490(uint32_t a1) {
    int1_t below_or_equal2;
    struct s16* eax3;

    below_or_equal2 = g1000c4d0 <= a1;
    if (below_or_equal2 || (eax3 = reinterpret_cast<struct s16*>(*reinterpret_cast<int32_t**>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000c4e0) + (a1 & 31) * 2), (eax3->f4 & 1) == 0)) {
        g1000a4d8 = 9;
        g1000a4dc = 0;
        return -1;
    } else {
        return eax3->f0;
    }
}

int32_t SetFilePointer = 0xd878;

int32_t fun_100074e0(uint32_t a1, int32_t a2, int32_t a3) {
    int1_t cf4;
    void** edi5;
    uint32_t esi6;
    int32_t eax7;
    int32_t eax8;
    uint32_t eax9;

    cf4 = a1 < g1000c4d0;
    if (!cf4 || (edi5 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000c4e0), esi6 = (a1 & 31) * 8, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*edi5) + esi6 + 4) & 1) == 0)) {
        g1000a4d8 = 9;
        g1000a4dc = 0;
        return -1;
    } else {
        eax7 = fun_10007490(a1);
        if (eax7 != -1) {
            eax8 = reinterpret_cast<int32_t>(SetFilePointer());
            eax9 = 0;
            if (eax8 == -1) {
                eax9 = reinterpret_cast<uint32_t>(GetLastError());
            }
            if (!eax9) {
                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*edi5) + esi6 + 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*edi5) + esi6 + 4) & 0xfd);
                goto a3;
            } else {
                fun_10005a70(eax9);
                goto a3;
            }
        } else {
            g1000a4d8 = 9;
            return -1;
        }
    }
}

void fun_100073c0(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8);

int32_t fun_10007700(uint32_t a1);

int32_t fun_100075a0(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7) {
    int32_t edi8;
    uint32_t eax9;
    int32_t eax10;
    struct s0* edi11;
    struct s0* esi12;
    uint32_t v13;
    int32_t eax14;
    struct s0* v15;

    edi8 = -1;
    eax9 = a1->fc;
    if (!(*reinterpret_cast<unsigned char*>(&eax9) & 64)) {
        if (*reinterpret_cast<unsigned char*>(&eax9) & 0x83) {
            eax10 = fun_10006e80(a1);
            edi8 = eax10;
            fun_100073c0(a1, edi11, esi12, __return_address(), a1, a2, a3, a4);
            v13 = *reinterpret_cast<uint32_t*>(&a1->fd);
            eax14 = fun_10007700(v13);
            if (eax14 >= 0) {
                if (a1->f1c) {
                    v15 = a1->f1c;
                    fun_100051f0(v15, edi11, esi12, __return_address(), a1, a2, a3, a4, a5, a6, a7);
                    a1->f1c = reinterpret_cast<struct s0*>(0);
                }
            } else {
                edi8 = -1;
            }
        }
        a1->fc = 0;
        return edi8;
    } else {
        a1->fc = 0;
        return -1;
    }
}

int32_t fun_10006e80(struct s0* a1) {
    int32_t edi2;
    uint32_t ecx3;
    struct s0* eax4;
    void* ebx5;
    uint32_t v6;
    void* eax7;
    uint32_t eax8;

    edi2 = 0;
    ecx3 = a1->fc;
    if ((*reinterpret_cast<unsigned char*>(&ecx3) & 3) == 2 && (a1->fc & 0x108 && (eax4 = a1->f8, ebx5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<struct s0**>(&a1->f0)) - reinterpret_cast<unsigned char>(eax4)), !(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx5) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebx5 == 0))))) {
        v6 = *reinterpret_cast<uint32_t*>(&a1->fd);
        eax7 = fun_10007110(v6, eax4, ebx5);
        if (eax7 != ebx5) {
            a1->fc = a1->fc | 32;
            edi2 = -1;
        } else {
            eax8 = a1->fc;
            if (*reinterpret_cast<unsigned char*>(&eax8) & 0x80) {
                a1->fc = eax8 & 0xfffffffd;
            }
        }
    }
    *reinterpret_cast<struct s0**>(&a1->f0) = a1->f8;
    a1->f4 = reinterpret_cast<signed char>(0);
    return edi2;
}

void fun_100073c0(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8) {
    uint32_t eax9;
    struct s0* v10;
    struct s0* esi11;

    eax9 = a1->fc;
    if (*reinterpret_cast<unsigned char*>(&eax9) & 0x83 && *reinterpret_cast<unsigned char*>(&eax9) & 8) {
        v10 = a1->f8;
        fun_100051f0(v10, esi11, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8);
        *reinterpret_cast<struct s0**>(&a1->f0) = reinterpret_cast<struct s0*>(0);
        a1->fc = a1->fc & 0xfffffbf7;
        a1->f8 = reinterpret_cast<struct s0*>(0);
        a1->f4 = reinterpret_cast<signed char>(0);
    }
    return;
}

int32_t CloseHandle = 0xd88a;

int32_t fun_10007400(uint32_t a1);

int32_t fun_10007700(uint32_t a1) {
    int1_t below_or_equal2;
    void** ebx3;
    uint32_t esi4;
    int32_t eax5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    uint32_t ebp9;
    uint32_t eax10;

    below_or_equal2 = g1000c4d0 <= a1;
    if (below_or_equal2 || (ebx3 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000c4e0), esi4 = (a1 & 31) * 8, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*ebx3) + esi4 + 4) & 1) == 0)) {
        g1000a4d8 = 9;
        g1000a4dc = 0;
        return -1;
    } else {
        if ((a1 == 1 || a1 == 2) && (eax5 = fun_10007490(1), eax6 = fun_10007490(2), eax5 == eax6) || (eax7 = fun_10007490(a1), eax8 = reinterpret_cast<int32_t>(CloseHandle(eax7)), !!eax8)) {
            ebp9 = 0;
        } else {
            eax10 = reinterpret_cast<uint32_t>(GetLastError(eax7));
            ebp9 = eax10;
        }
        fun_10007400(a1);
        if (!ebp9) {
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*ebx3) + esi4 + 4) = 0;
            return 0;
        } else {
            fun_10005a70(ebp9);
            return -1;
        }
    }
}

int32_t RegEnumKeyExA = 0xd618;

void fun_10001820(struct s0* a1, struct s0* a2, int32_t a3) {
    struct s0* esi4;
    int32_t edi5;
    struct s0* v6;
    void* esp7;
    struct s0* v8;
    int32_t eax9;
    void* esp10;
    struct s0* ebp11;
    struct s0* edi12;
    struct s0* esi13;
    struct s0* ebx14;
    struct s0* v15;
    int32_t v16;
    int32_t ebx17;
    struct s0** esp18;
    struct s0* v19;
    struct s0* v20;
    struct s0* v21;
    int32_t eax22;
    void* esp23;
    void* v24;
    void* esp25;
    void* v26;
    void* v27;
    void* v28;
    int32_t eax29;
    struct s0* v30;
    int32_t ebx31;
    struct s0* v32;
    int32_t eax33;
    int32_t v34;
    struct s0* eax35;
    void* esp36;
    struct s0* v37;
    struct s0* v38;
    int32_t eax39;
    int32_t v40;

    esi4 = a1;
    edi5 = SendMessageA;
    v6 = esi4;
    edi5(v6);
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x11c - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    v8 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp7) + 16);
    eax9 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, "SOFTWARE\\ID\\Doom95\\Config", v8, v6));
    esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 + 4);
    if (eax9) {
        edi5(esi4, 0x143, 0, "default", 0x80000001, "SOFTWARE\\ID\\Doom95\\Config", v8, v6);
        edi5();
        fun_100017f0(esi4, esi4, 0x14d, 0xff, "default", esi4, 0x143, 0, "default", 0x80000001, "SOFTWARE\\ID\\Doom95\\Config", v8, v6, 0x14b, 0, 0, ebp11, edi12, esi13, ebx14, v15);
        fun_10001700("default", esi4, 0x14d, 0xff, "default", esi4, 0x143, 0, "default", 0x80000001, "SOFTWARE\\ID\\Doom95\\Config", v8, v6, 0x14b, 0, 0, ebp11, edi12, esi13, ebx14);
        goto v16;
    }
    ebx17 = 0;
    esp18 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(esp10) - 4);
    v19 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp10) + 32);
    v20 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp10) + 24);
    v21 = reinterpret_cast<struct s0*>(esp18 + 44);
    eax22 = reinterpret_cast<int32_t>(RegEnumKeyExA());
    GetLastError();
    esp23 = reinterpret_cast<void*>(esp18 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
    if (eax22 != 0x103) {
        do {
            ++ebx17;
            v24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) + 40);
            edi5(esi4, 0x143, 0, v24);
            esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 - 4 - 4 + 4);
            v26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) + 32);
            v21 = reinterpret_cast<struct s0*>(0x104);
            v27 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) + 24);
            v28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) + 40);
            eax29 = reinterpret_cast<int32_t>(RegEnumKeyExA(0x14b, ebx17, v28, v27, 0, 0, 0, v26, esi4, 0x143, 0, v24));
            GetLastError(0x14b, ebx17, v28, v27, 0, 0, 0, v26, esi4, 0x143, 0, v24);
            esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4);
        } while (eax29 != 0x103);
    }
    if (!ebx17) 
        goto addr_100018e5_6;
    v30 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp23) + 20);
    ebx31 = RegQueryValueExA;
    v32 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp23) + 28);
    eax33 = reinterpret_cast<int32_t>(ebx31());
    if (eax33 || reinterpret_cast<signed char>(v30) <= reinterpret_cast<signed char>(0)) {
        addr_100019a4_8:
        RegCloseKey();
        goto v34;
    } else {
        eax35 = fun_10005210(v30);
        esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 + 4);
        if (eax35) {
            v37 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp36) + 20);
            v38 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp36) + 28);
            eax39 = reinterpret_cast<int32_t>(ebx31(0, "current", 0, v38, eax35, v37));
            if (!eax39) {
                edi5(esi4, 0x14d, 0xff, eax35, 0, "current", 0, v38, eax35, v37);
                fun_100017f0(esi4, esi4, 0x14d, 0xff, eax35, 0, "current", 0, v38, eax35, v37, 0, "current", 0, v32, 0, v30, 0x14b, 0, v21, v20);
            }
            fun_100051f0(eax35, 0, "current", 0, v38, eax35, v37, 0, "current", 0, v32);
        } else {
            RegCloseKey();
            goto v40;
        }
    }
    addr_100019a1_14:
    goto addr_100019a4_8;
    addr_100018e5_6:
    edi5();
    edi5(esi4, 0x14d);
    fun_100017f0(esi4, esi4, 0x14d, 0xff, "default", esi4, 0x143, 0, "default", 0x14b, 0, v21, v20, 0, 0, 0, v19, 0x80000001, "SOFTWARE\\ID\\Doom95\\Config", v8, v6);
    goto addr_100019a1_14;
}

int32_t LocalAlloc = 0xd330;

struct s17 {
    int32_t f0;
    int32_t f4;
    signed char[20] pad28;
    int32_t f1c;
    int32_t f20;
    int32_t f24;
    int32_t f28;
    int32_t f2c;
};

int32_t GetDialogBaseUnits = 0xd41c;

int32_t SetWindowLongA = 0xd40a;

int32_t GetDlgItem = 0xd3fc;

int32_t GetWindowRect = 0xd3ec;

int32_t MapWindowPoints = 0xd3da;

int32_t fun_10001270(int32_t a1, struct s17* a2, int32_t a3, int32_t a4, int32_t a5, void* a6, int32_t a7, int32_t a8, int32_t a9, void* a10, int32_t a11);

int32_t CopyRect = 0xd3be;

void fun_100010d0(struct s0* a1, struct s0* a2, int32_t a3) {
    int32_t ebp4;
    int32_t edi5;
    int32_t esi6;
    int32_t ebx7;
    struct s17* eax8;
    struct s0* v9;
    int32_t eax10;
    int32_t eax11;
    void* esp12;
    void* v13;
    int32_t v14;
    void* esp15;
    void* v16;
    void* esp17;
    void* ebp18;
    int32_t ecx19;
    int32_t ebx20;
    int32_t ecx21;
    int32_t eax22;
    int32_t v23;
    int32_t eax24;
    int32_t eax25;
    int32_t eax26;
    int32_t eax27;
    int32_t eax28;
    int32_t eax29;

    eax8 = reinterpret_cast<struct s17*>(LocalAlloc(64, 48, ebp4, edi5, esi6, ebx7));
    GetDialogBaseUnits(64, 48, ebp4, edi5, esi6, ebx7);
    SetWindowLongA(v9, 0xeb, eax8, 64, 48, ebp4, edi5, esi6, ebx7);
    eax10 = reinterpret_cast<int32_t>(GetModuleHandleA("DOOMCFG.DLL", v9, 0xeb, eax8, 64, 48, ebp4, edi5, esi6, ebx7));
    eax8->f0 = eax10;
    eax11 = reinterpret_cast<int32_t>(GetDlgItem(v9, 0x42e, "DOOMCFG.DLL", v9, 0xeb, eax8, 64, 48, ebp4, edi5, esi6, ebx7));
    esp12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 44 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4);
    eax8->f4 = eax11;
    v13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) + 44);
    v14 = eax8->f4;
    GetWindowRect(v14, v13, v9, 0x42e, "DOOMCFG.DLL", v9, 0xeb, eax8, 64, 48, ebp4, edi5, esi6, ebx7);
    esp15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp12) - 4 - 4 - 4 + 4);
    v16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) + 44);
    MapWindowPoints(0, v9, v16, 2, v14, v13, v9, 0x42e, "DOOMCFG.DLL", v9, 0xeb, eax8, 64, 48, ebp4, edi5, esi6, ebx7);
    esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp15) - 4 - 4 - 4 - 4 - 4 + 4);
    ebp18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) + 16);
    ecx19 = eax8->f4;
    ebx20 = SendMessageA;
    ebx20(ecx19, 0x1307, 0, ebp18, 0, v9, v16, 2, 3, v13, v9, "Keyboard", "DOOMCFG.DLL", -1, 0xeb, eax8, 64, 48, ebp4, edi5, esi6, ebx7);
    ecx21 = eax8->f4;
    ebx20(ecx21, 0x1307, 1, ebp18, ecx19, 0x1307, 0, ebp18, 0, v9, v16, "Mouse", 3, v13, v9, "Keyboard", "DOOMCFG.DLL", -1, 0xeb, eax8, 64, 48, ebp4, edi5, esi6, ebx7);
    eax22 = eax8->f4;
    ebx20(eax22);
    v23 = eax8->f4;
    ebx20(v23, 0x1307, 3, ebp18, eax22);
    eax24 = eax8->f4;
    ebx20(eax24, 0x1307, 4, ebp18, v23, 0x1307, 3, ebp18, eax22);
    eax25 = fun_10001270("KEYBOARD", eax8, eax24, 0x1307, 4, ebp18, v23, 0x1307, 3, ebp18, eax22);
    eax8->f1c = eax25;
    eax26 = fun_10001270("MOUSE", eax8, eax24, 0x1307, 4, ebp18, v23, 0x1307, 3, ebp18, eax22);
    eax8->f20 = eax26;
    eax27 = fun_10001270("JOYSTICK", eax8, eax24, 0x1307, 4, ebp18, v23, 0x1307, 3, ebp18, eax22);
    eax8->f24 = eax27;
    eax28 = fun_10001270("CHAT", eax8, eax24, 0x1307, 4, ebp18, v23, 0x1307, 3, ebp18, eax22);
    eax8->f28 = eax28;
    eax29 = fun_10001270("AUDIO", eax8, eax24, 0x1307, 4, ebp18, v23, 0x1307, 3, ebp18, eax22);
    eax8->f2c = eax29;
    CopyRect(reinterpret_cast<int32_t>(eax8) + 12, reinterpret_cast<int32_t>(esp17) - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 8 + 4 - 4 - 4 - 4 + 8 + 4 - 4 - 4 - 4 + 8 + 4 - 4 - 4 - 4 + 8 + 4 - 4 - 4 - 4 + 8 + 4 + 44, eax24, 0x1307, 4, ebp18, v23, 0x1307, 3, ebp18, eax22);
    ebx20();
    fun_100012c0(v9);
    goto 0x1307;
}

int32_t MessageBoxA = 0xd5ac;

int32_t RegDeleteKeyA = 0xd628;

void fun_10005100(struct s0* a1) {
    void* esp2;
    int1_t zf3;
    int32_t ecx4;
    struct s0* v5;
    struct s0* esi6;
    struct s0** esp7;
    struct s0* v8;
    struct s0* edi9;
    signed char* esi10;
    signed char* edi11;
    int32_t eax12;
    void* esp13;
    struct s0* v14;
    struct s0* v15;
    struct s0* v16;
    struct s0* v17;
    struct s0* v18;
    struct s0* v19;
    struct s0* v20;
    struct s0* v21;
    struct s0* v22;
    struct s0* v23;
    struct s0* v24;
    struct s0* v25;
    struct s0* v26;
    int32_t v27;
    int32_t v28;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x104);
    zf3 = esp2 == 0;
    ecx4 = 8;
    v5 = esi6;
    esp7 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(esp2) - 4 - 4);
    v8 = edi9;
    esi10 = reinterpret_cast<signed char*>(0x1000b2b0);
    edi11 = "default";
    do {
        if (!ecx4) 
            break;
        --ecx4;
        zf3 = *esi10 == *edi11;
        ++edi11;
        ++esi10;
    } while (zf3);
    if (!zf3) {
        eax12 = reinterpret_cast<int32_t>(MessageBoxA());
        esp13 = reinterpret_cast<void*>(esp7 - 4 - 4 - 4 - 4 - 4 + 4);
        if (eax12 == 6) {
            wsprintfA(reinterpret_cast<int32_t>(esp13) + 8, "SOFTWARE\\ID\\Doom95\\Config\\%s", 0x1000b2b0);
            RegDeleteKeyA(0x80000001, reinterpret_cast<int32_t>(esp13) - 4 - 4 - 4 - 4 + 4 + 20);
        }
        fun_10001700("default", a1, "Are you sure you want to permanently delete this configuration?", "Please confirm", 36, v8, v5, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26);
        goto v27;
    } else {
        MessageBoxA();
        goto v28;
    }
}

struct s0* fun_10005230(struct s0* a1, int32_t a2) {
    struct s0* esi3;
    int32_t edi4;
    struct s0* eax5;
    int32_t eax6;

    esi3 = a1;
    if (reinterpret_cast<unsigned char>(esi3) > reinterpret_cast<unsigned char>(0xffffffe0)) {
        return 0;
    }
    if (!esi3) {
        esi3 = reinterpret_cast<struct s0*>(1);
    }
    edi4 = a2;
    do {
        eax5 = fun_10005270(esi3);
        if (eax5) 
            break;
        if (!edi4) 
            break;
        eax6 = fun_10005b10(esi3);
    } while (eax6);
    goto addr_1000526b_9;
    addr_1000526d_10:
    return eax5;
    addr_1000526b_9:
    eax5 = reinterpret_cast<struct s0*>(0);
    goto addr_1000526d_10;
}

int32_t GetParent = 0xd454;

struct s18 {
    signed char[12] pad12;
    int32_t fc;
    int32_t f10;
};

int32_t SetWindowPos = 0xd432;

void fun_10001230(struct s2* a1) {
    int32_t esi2;
    struct s18* eax3;
    int32_t ecx4;
    int32_t eax5;

    GetParent(a1, esi2, __return_address());
    eax3 = reinterpret_cast<struct s18*>(GetWindowLongA());
    if (eax3) {
        ecx4 = eax3->f10;
        eax5 = eax3->fc;
        SetWindowPos(a1, 0, eax5, ecx4, 0, 0, 1);
    }
    goto 0xeb;
}

int32_t g10009b90 = 0x7a797820;

int32_t g10009b94 = 0x767572;

int32_t joyGetDevCapsA = 0xd646;

int32_t EnableWindow = 0xd4ae;

void fun_100022e0(struct s2* a1, int32_t a2, int32_t a3, struct s2* a4, struct s2* a5, struct s2* a6, struct s2* a7, struct s2* a8, struct s2* a9, struct s2* a10, struct s2* a11, struct s2* a12, struct s2* a13) {
    uint32_t eax14;
    int32_t edx15;
    int32_t ecx16;
    int32_t ebp17;
    int32_t edi18;
    int32_t esi19;
    int32_t ebx20;
    int32_t edi21;
    int32_t ebp22;
    int32_t ebp23;
    int32_t ebp24;
    uint32_t ebp25;
    int32_t ebp26;
    int32_t eax27;
    int32_t esi28;
    int32_t eax29;
    int32_t eax30;
    int32_t eax31;
    int32_t eax32;
    int32_t eax33;
    int32_t eax34;
    int32_t v35;

    eax14 = 0xffffffff;
    edx15 = g10009b90;
    ecx16 = g10009b94;
    if (a2 >= 0) {
        eax14 = reinterpret_cast<uint32_t>(joyGetDevCapsA(a2, reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x19c - 4 - 4 - 4 - 4 + 24, 0x194, ebp17, edi18, esi19, ebx20, edx15, ecx16));
    }
    edi21 = GetDlgItem;
    ebp22 = reinterpret_cast<int32_t>(-(ebp23 - (ebp24 + reinterpret_cast<uint1_t>(ebp25 < ebp26 + reinterpret_cast<uint1_t>(eax14 < 1)))));
    eax27 = reinterpret_cast<int32_t>(edi21(a1, 0x41d, ebp22, ebp17, edi18, esi19, ebx20, edx15, ecx16));
    esi28 = EnableWindow;
    esi28(eax27, a1, 0x41d, ebp22, ebp17, edi18, esi19, ebx20, edx15, ecx16);
    eax29 = reinterpret_cast<int32_t>(edi21(a1, 0x428, ebp22, eax27, a1, 0x41d, ebp22, ebp17, edi18, esi19, ebx20, edx15, ecx16));
    esi28(eax29, a1, 0x428, ebp22, eax27, a1, 0x41d, ebp22, ebp17, edi18, esi19, ebx20, edx15, ecx16);
    eax30 = reinterpret_cast<int32_t>(edi21(a1, 0x426, ebp22, eax29, a1, 0x428, ebp22, eax27, a1, 0x41d, ebp22, ebp17, edi18, esi19, ebx20, edx15, ecx16));
    esi28(eax30, a1, 0x426, ebp22, eax29, a1, 0x428, ebp22, eax27, a1, 0x41d, ebp22, ebp17, edi18, esi19, ebx20, edx15, ecx16);
    eax31 = reinterpret_cast<int32_t>(edi21(a1, 0x42a, ebp22, eax30, a1, 0x426, ebp22, eax29, a1, 0x428, ebp22, eax27, a1, 0x41d, ebp22, ebp17, edi18, esi19, ebx20, edx15, ecx16));
    esi28(eax31, a1, 0x42a, ebp22, eax30, a1, 0x426, ebp22, eax29, a1, 0x428, ebp22, eax27, a1, 0x41d, ebp22, ebp17, edi18, esi19, ebx20, edx15, ecx16);
    eax32 = reinterpret_cast<int32_t>(edi21(a1, 0x3ff, ebp22, eax31, a1, 0x42a, ebp22, eax30, a1, 0x426, ebp22, eax29, a1, 0x428, ebp22, eax27, a1, 0x41d, ebp22, ebp17, edi18, esi19, ebx20, edx15, ecx16));
    esi28(eax32, a1, 0x3ff, ebp22, eax31, a1, 0x42a, ebp22, eax30, a1, 0x426, ebp22, eax29, a1, 0x428, ebp22, eax27, a1, 0x41d, ebp22, ebp17, edi18, esi19, ebx20, edx15, ecx16);
    eax33 = reinterpret_cast<int32_t>(edi21(a1, 0x410, ebp22, eax32, a1, 0x3ff, ebp22, eax31, a1, 0x42a, ebp22, eax30, a1, 0x426, ebp22, eax29, a1, 0x428, ebp22, eax27, a1, 0x41d, ebp22, ebp17, edi18, esi19, ebx20, edx15, ecx16));
    esi28(eax33, a1, 0x410, ebp22, eax32, a1, 0x3ff, ebp22, eax31, a1, 0x42a, ebp22, eax30, a1, 0x426, ebp22, eax29, a1, 0x428, ebp22, eax27, a1, 0x41d, ebp22, ebp17, edi18, esi19, ebx20, edx15, ecx16);
    eax34 = reinterpret_cast<int32_t>(edi21(a1, 0x40b, ebp22, eax33, a1, 0x410, ebp22, eax32, a1, 0x3ff, ebp22, eax31, a1, 0x42a, ebp22, eax30, a1, 0x426, ebp22, eax29, a1, 0x428, ebp22, eax27, a1, 0x41d, ebp22, ebp17, edi18, esi19, ebx20, edx15, ecx16));
    esi28(eax34, a1, 0x40b, ebp22, eax33, a1, 0x410, ebp22, eax32, a1, 0x3ff, ebp22, eax31, a1, 0x42a, ebp22, eax30, a1, 0x426, ebp22, eax29, a1, 0x428, ebp22, eax27, a1, 0x41d, ebp22, ebp17, edi18, esi19, ebx20, edx15, ecx16);
    edi21();
    esi28();
    goto v35;
}

int32_t fun_10002040(int32_t a1, void* a2, int32_t a3);

int32_t g10009a5c = 0;

int32_t FreeLibrary = 0xd390;

int32_t g1000b294;

int32_t g1000b2ac;

int32_t g1000b2a8;

int32_t g1000b2a4;

int32_t g1000b2a0;

int32_t fun_10002130(struct s2* a1, int32_t a2, int32_t a3, struct s2* a4, struct s2* a5, struct s2* a6, struct s2* a7, struct s2* a8, struct s2* a9, struct s2* a10, struct s2* a11, struct s2* a12, struct s2* a13, struct s2* a14, struct s2* a15, struct s2* a16) {
    void* esp17;
    int32_t eax18;
    void* esp19;
    struct s0** esp20;
    struct s0** esp21;
    void* esp22;
    signed char** esp23;
    void* esp24;
    int32_t eax25;
    int32_t eax26;
    int32_t esi27;
    int32_t eax28;
    int32_t eax29;
    int32_t ecx30;
    int32_t edx31;
    int32_t esi32;
    int32_t ecx33;
    int32_t v34;
    int32_t v35;
    void* esp36;
    void* v37;
    int32_t eax38;
    int32_t eax39;
    int32_t ecx40;
    int32_t edx41;
    int32_t eax42;
    int32_t v43;
    int32_t v44;

    esp17 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x510);
    eax18 = fun_10002040(a2, reinterpret_cast<int32_t>(esp17) + 8, 0x104);
    esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp17) - 4 - 4 - 4 - 4 - 4 + 4 + 12);
    if (!eax18) {
        esp20 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(esp19) - 4);
        esp21 = esp20 - 4;
        fun_10005360(esp21 + 20, esp20 + 8, reinterpret_cast<int32_t>(esp19) + 0x314, reinterpret_cast<int32_t>(esp19) + 0x214, reinterpret_cast<int32_t>(esp19) + 0x414);
        esp22 = reinterpret_cast<void*>(esp21 - 4 - 4 - 4 - 4 + 4);
        esp23 = reinterpret_cast<signed char**>(reinterpret_cast<int32_t>(esp22) + 20 - 4 - 4);
        fun_100052c0(esp23 + 5, reinterpret_cast<int32_t>(esp22) + 24, reinterpret_cast<int32_t>(esp22) + 0x328, reinterpret_cast<int32_t>(esp22) + 0x228, "DLL");
        esp24 = reinterpret_cast<void*>(esp23 - 1 - 1 - 1 - 1 + 1 + 5);
        eax25 = g10009a5c;
        if (eax25) {
            FreeLibrary(eax25);
            esp24 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 + 4);
        }
        eax26 = reinterpret_cast<int32_t>(LoadLibraryA(reinterpret_cast<int32_t>(esp24) + 12));
        g10009a5c = eax26;
        if (eax26) {
            esi27 = GetProcAddress;
            eax28 = reinterpret_cast<int32_t>(esi27());
            esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp24) - 4 - 4 + 4 - 4 - 4 - 4 + 4);
            g1000b294 = eax28;
            if (!eax28) {
                eax29 = g10009a5c;
                eax28 = reinterpret_cast<int32_t>(esi27(eax29, "JoyConfig"));
                esp19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 - 4 + 4);
            }
            g1000b294 = eax28;
            if (eax28) {
                if (0) {
                    ecx30 = g1000b2ac;
                    edx31 = g1000b2a8;
                    esi32 = g1000b2a4;
                    ecx33 = g1000b2a0;
                    g1000b294 = eax28;
                    eax28(v34, 0, ecx33, esi32, edx31, ecx30, 0);
                    goto v35;
                } else {
                    wsprintfA(reinterpret_cast<int32_t>(esp19) + 0x110, "SOFTWARE\\ID\\Doom95\\Config\\%s", 0x1000b2b0);
                    esp36 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp19) - 4 - 4 - 4 - 4 + 4);
                    v37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp36) + 0x11c);
                    eax38 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, v37));
                    if (!eax38) {
                        eax39 = g1000b2ac;
                        ecx40 = g1000b2a8;
                        edx41 = g1000b2a4;
                        eax42 = g1000b2a0;
                        g1000b294(v43, reinterpret_cast<int32_t>(esp36) + 20, eax42, edx41, ecx40, eax39, 0, 0x80000001, v37);
                        RegCloseKey();
                        goto v44;
                    }
                }
            }
        }
    }
    return 0;
}

struct s2* g1000b040 = reinterpret_cast<struct s2*>(0);

struct s2* g100099f0 = reinterpret_cast<struct s2*>(0);

int32_t joyGetNumDevs = 0xd666;

struct s19 {
    struct s2* f0;
    signed char[4] pad8;
    struct s3* f8;
    signed char[4] pad16;
    struct s2* f10;
};

struct s20 {
    signed char[268445396] pad268445396;
    signed char f100026d4;
    signed char[536873267] pad268447752;
    signed char f10003008;
    signed char[536870991] pad268447832;
    signed char f10003058;
};

struct s21 {
    struct s2* f0;
    signed char[4] pad8;
    int32_t f8;
    int32_t fc;
};

void fun_100026d4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, struct s2* a14, int32_t a15, int32_t a16, int32_t a17, struct s2* a18, uint32_t a19, uint32_t a20, struct s21* a21);

int32_t CheckDlgButton = 0xd52e;

struct s22 {
    struct s2* f0;
    signed char[12] pad16;
    struct s2* f10;
};

struct s22* SendDlgItemMessageA = reinterpret_cast<struct s22*>(0xd518);

int32_t joyGetPosEx = 0xd658;

int32_t SetDlgItemTextA = 0xd4f4;

int32_t g100099f4 = 0;

void fun_100023b0(struct s2* a1, struct s2* a2, struct s2* a3, struct s2* a4, struct s2* a5, struct s2* a6, struct s2* a7, struct s2* a8, struct s2* a9, struct s2* a10, struct s2* a11) {
    struct s2* v12;
    struct s2* ebx13;
    struct s2* v14;
    struct s2* esi15;
    struct s2* esi16;
    struct s2* v17;
    struct s2* edi18;
    struct s2* v19;
    struct s2* ebp20;
    struct s2* eax21;
    struct s2* v22;
    struct s2* eax23;
    struct s2* v24;
    struct s2* v25;
    void* esp26;
    int1_t less_or_equal27;
    struct s19* edi28;
    struct s3* eax29;
    struct s2* eax30;
    struct s2* edx31;
    struct s20* eax32;
    int32_t ecx33;
    struct s2* v34;
    struct s2* eax35;
    struct s2* edx36;
    struct s2* v37;
    struct s2* v38;
    struct s2* eax39;
    struct s2* v40;
    struct s2* v41;
    struct s2* eax42;
    struct s2* v43;
    struct s2* v44;
    struct s2* ebx45;
    struct s2* v46;
    void* v47;
    int32_t eax48;
    void* v49;
    int32_t eax50;
    void* esp51;
    int32_t eax52;
    struct s2* ecx53;
    int32_t eax54;
    struct s2* ecx55;
    struct s2* eax56;
    struct s2* v57;
    int1_t less_or_equal58;
    int32_t edi59;
    int32_t ebx60;
    int32_t eax61;
    int32_t eax62;
    int32_t eax63;
    int32_t eax64;
    int32_t eax65;
    int32_t eax66;
    int32_t eax67;
    int32_t eax68;
    int32_t eax69;
    int32_t eax70;
    struct s2* v71;
    struct s2* v72;
    struct s2* v73;
    struct s2* v74;
    int32_t eax75;
    int32_t v76;

    g1000b040 = reinterpret_cast<struct s2*>(5);
    v12 = ebx13;
    v14 = esi15;
    esi16 = a1;
    v17 = edi18;
    v19 = ebp20;
    g100099f0 = esi16;
    eax21 = reinterpret_cast<struct s2*>(joyGetNumDevs(v19, v17, v14, v12));
    v22 = eax21;
    eax23 = fun_10001a00("default", "use_joystick", 0, 0, v19, v17, v14, v12);
    v24 = eax23;
    v25 = reinterpret_cast<struct s2*>(0);
    esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x2e0 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 + 16);
    less_or_equal27 = reinterpret_cast<int32_t>(g1000b040) <= reinterpret_cast<int32_t>(0);
    if (!less_or_equal27) {
        edi28 = reinterpret_cast<struct s19*>(0x100099f8);
        do {
            eax29 = edi28->f8;
            eax30 = fun_10001a00("default", eax29, 0, 0, v19, v17, v14, v12);
            esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
            edi28->f10 = eax30;
            edx31 = edi28->f0;
            eax32 = reinterpret_cast<struct s20*>(edx31 + 0xffffffcd);
            if (reinterpret_cast<uint32_t>(eax32) <= 46) {
                ecx33 = 0;
                *reinterpret_cast<signed char*>(&ecx33) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax32) + reinterpret_cast<int32_t>(fun_100026d4));
                switch (ecx33) {
                case 0:
                    v34 = edi28->f10;
                    CheckDlgButton(esi16, edx31, v34, v19, v17, v14, v12);
                    esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 - 4 - 4 + 4);
                    break;
                case 1:
                case 4:
                case 5:
                case 6:
                    SendDlgItemMessageA(esi16, edx31, 0x465, 0, 0x10020, v19, v17, v14, v12);
                    eax35 = edi28->f10;
                    edx36 = edi28->f0;
                    SendDlgItemMessageA(esi16, edx36, 0x467, 0, static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&eax35) + 1)), esi16, edx31, 0x465, 0, 0x10020, v19, v17, v14, v12);
                    esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
                    break;
                case 2:
                    v37 = edx31;
                    v38 = esi16;
                    SendDlgItemMessageA(v38, v37, 0x14b, 0, 0, v19, v17, v14, v12);
                    eax39 = edi28->f0;
                    v40 = eax39;
                    v41 = esi16;
                    eax42 = reinterpret_cast<struct s2*>(SendDlgItemMessageA());
                    v43 = eax42;
                    v44 = edi28->f0;
                    ebx45 = reinterpret_cast<struct s2*>(0);
                    v46 = esi16;
                    SendDlgItemMessageA(v46, v44, 0x151);
                    esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
                    if (reinterpret_cast<int32_t>(v41) > reinterpret_cast<int32_t>(0)) {
                        do {
                            v47 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) + 36);
                            eax48 = reinterpret_cast<int32_t>(joyGetPosEx(ebx45, v47, v46, v44, 0x151));
                            esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 - 4 + 4);
                            if (eax48 != 0xa7 && ((v49 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) + 0x15c), eax50 = reinterpret_cast<int32_t>(joyGetDevCapsA(ebx45, v49, 0x194, ebx45, v47, v46, v44, 0x151)), esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 - 4 - 4 + 4), !eax50) && ((esp51 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4), eax52 = fun_10001f60(ebx45, reinterpret_cast<int32_t>(esp51) + 0x1d0, reinterpret_cast<int32_t>(esp26) + 88, 0x104, ebx45, v49, 0x194, ebx45, v47, v46, v44, 0x151, v43, 0xff, v41, v40, 0x143, 0, 52, v38, v37, 0x14b, 0, 0, v19, v17, v14, v12), esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp51) - 4 - 4 - 4 - 4 + 4 + 16), !eax52) && (ecx53 = edi28->f0, eax54 = reinterpret_cast<int32_t>(SendDlgItemMessageA(esi16, ecx53)), ecx55 = edi28->f0, SendDlgItemMessageA(esi16, ecx55, 0x151, eax54, ebx45, esi16, ecx53), esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4), edi28->f10 == ebx45)))) {
                                eax56 = edi28->f0;
                                SendDlgItemMessageA(esi16, eax56, 0x14e, eax54, 0, esi16, ecx55, 0x151, eax54, ebx45, esi16, ecx53);
                                esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 - 4 - 4 - 4 - 4 + 4);
                            }
                            ebx45 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(ebx45) + 1);
                        } while (reinterpret_cast<int32_t>(ebx45) < reinterpret_cast<int32_t>(v43));
                        break;
                    }
                case 3:
                    fun_100022e0(esi16, -1, 0x1000b048, v19, v17, v14, v12, 0xffffffff, v22, v25, 0, v24, v57);
                    SetDlgItemTextA(esi16, 0x42b, 0x1000b048, v19, v17, v14, v12);
                    esp26 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp26) - 4 - 4 - 4 - 4 + 4 + 12 - 4 - 4 - 4 - 4 + 4);
                case 7:
                    goto 0x100025a2;
                }
            }
            ++edi28;
            v25 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(v25) + 1);
            less_or_equal58 = reinterpret_cast<int32_t>(g1000b040) <= reinterpret_cast<int32_t>(v25);
        } while (!less_or_equal58);
    }
    if (!v24) {
        SendDlgItemMessageA(esi16, 0x420, 0x14e, 0, 0, v19, v17, v14, v12);
    }
    if (0) {
        edi59 = EnableWindow;
        ebx60 = GetDlgItem;
    } else {
        ebx60 = GetDlgItem;
        eax61 = reinterpret_cast<int32_t>(ebx60(esi16, 0x3fc, 0, v19, v17, v14, v12));
        edi59 = EnableWindow;
        edi59(eax61, esi16, 0x3fc, 0, v19, v17, v14, v12);
        eax62 = reinterpret_cast<int32_t>(ebx60(esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12));
        edi59(eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12);
        eax63 = reinterpret_cast<int32_t>(ebx60(esi16, 0x41d, 0, eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12));
        edi59(eax63, esi16, 0x41d, 0, eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12);
        eax64 = reinterpret_cast<int32_t>(ebx60(esi16, 0x428, 0, eax63, esi16, 0x41d, 0, eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12));
        edi59(eax64, esi16, 0x428, 0, eax63, esi16, 0x41d, 0, eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12);
        eax65 = reinterpret_cast<int32_t>(ebx60(esi16, 0x426, 0, eax64, esi16, 0x428, 0, eax63, esi16, 0x41d, 0, eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12));
        edi59(eax65, esi16, 0x426, 0, eax64, esi16, 0x428, 0, eax63, esi16, 0x41d, 0, eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12);
        eax66 = reinterpret_cast<int32_t>(ebx60(esi16, 0x42a, 0, eax65, esi16, 0x426, 0, eax64, esi16, 0x428, 0, eax63, esi16, 0x41d, 0, eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12));
        edi59(eax66, esi16, 0x42a, 0, eax65, esi16, 0x426, 0, eax64, esi16, 0x428, 0, eax63, esi16, 0x41d, 0, eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12);
        eax67 = reinterpret_cast<int32_t>(ebx60(esi16, 0x3ff, 0, eax66, esi16, 0x42a, 0, eax65, esi16, 0x426, 0, eax64, esi16, 0x428, 0, eax63, esi16, 0x41d, 0, eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12));
        edi59(eax67, esi16, 0x3ff, 0, eax66, esi16, 0x42a, 0, eax65, esi16, 0x426, 0, eax64, esi16, 0x428, 0, eax63, esi16, 0x41d, 0, eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12);
        eax68 = reinterpret_cast<int32_t>(ebx60(esi16, 0x410, 0, eax67, esi16, 0x3ff, 0, eax66, esi16, 0x42a, 0, eax65, esi16, 0x426, 0, eax64, esi16, 0x428, 0, eax63, esi16, 0x41d, 0, eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12));
        edi59(eax68, esi16, 0x410, 0, eax67, esi16, 0x3ff, 0, eax66, esi16, 0x42a, 0, eax65, esi16, 0x426, 0, eax64, esi16, 0x428, 0, eax63, esi16, 0x41d, 0, eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12);
        eax69 = reinterpret_cast<int32_t>(ebx60(esi16, 0x40b, 0, eax68, esi16, 0x410, 0, eax67, esi16, 0x3ff, 0, eax66, esi16, 0x42a, 0, eax65, esi16, 0x426, 0, eax64, esi16, 0x428, 0, eax63, esi16, 0x41d, 0, eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12));
        edi59(eax69, esi16, 0x40b, 0, eax68, esi16, 0x410, 0, eax67, esi16, 0x3ff, 0, eax66, esi16, 0x42a, 0, eax65, esi16, 0x426, 0, eax64, esi16, 0x428, 0, eax63, esi16, 0x41d, 0, eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12);
        eax70 = reinterpret_cast<int32_t>(ebx60(esi16, 0x415, 0, eax69, esi16, 0x40b, 0, eax68, esi16, 0x410, 0, eax67, esi16, 0x3ff, 0, eax66, esi16, 0x42a, 0, eax65, esi16, 0x426, 0, eax64, esi16, 0x428, 0, eax63, esi16, 0x41d, 0, eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12));
        edi59(eax70, esi16, 0x415, 0, eax69, esi16, 0x40b, 0, eax68, esi16, 0x410, 0, eax67, esi16, 0x3ff, 0, eax66, esi16, 0x42a, 0, eax65, esi16, 0x426, 0, eax64, esi16, 0x428, 0, eax63, esi16, 0x41d, 0, eax62, esi16, 0x420, 0, eax61, esi16, 0x3fc, 0, v19, v17, v14, v12);
    }
    eax75 = fun_10002130(0, -1, "default", v19, v17, v14, v12, 0xffffffff, v22, v25, 0, v24, v71, v72, v73, v74);
    g100099f4 = eax75;
    ebx60();
    edi59();
    goto v76;
}

void fun_10002100(struct s2* a1) {
    int32_t eax2;
    int32_t eax3;

    eax2 = reinterpret_cast<int32_t>(LoadLibraryA());
    if (!eax2 || (eax3 = reinterpret_cast<int32_t>(GetProcAddress(eax2)), eax3 == 0)) {
        goto "JOY.CPL";
    } else {
        eax3();
        goto "ShowJoyCPL";
    }
}

struct s23 {
    struct s23* f0;
    signed char f1;
    struct s23* f2;
    signed char[1] pad4;
    struct s23* f4;
    signed char[1] pad6;
    signed char f6;
    signed char[1] pad8;
    signed char f8;
    signed char[268455195] pad268455204;
    signed char f10004d24;
};

void fun_10004d24(unsigned char* ecx);

struct s23* g1000a16c = reinterpret_cast<struct s23*>(84);

struct s23* g1000a15c = reinterpret_cast<struct s23*>(69);

struct s23* g1000a160 = reinterpret_cast<struct s23*>(0x70);

signed char g1000a162 = 0;

struct s23* g1000a0b4 = reinterpret_cast<struct s23*>(83);

struct s23* g1000a0b8 = reinterpret_cast<struct s23*>(0x65);

struct s23* g1000a0f4 = reinterpret_cast<struct s23*>(69);

struct s23* g1000a0f8 = reinterpret_cast<struct s23*>(0x6c);

signed char g1000a0fa = 0;

struct s23* g1000a150 = reinterpret_cast<struct s23*>(66);

struct s23* g1000a154 = reinterpret_cast<struct s23*>(83);

signed char g1000a158 = 0x65;

struct s23* g1000a178 = reinterpret_cast<struct s23*>(67);

struct s23* g1000a17c = reinterpret_cast<struct s23*>(0);

struct s23* g1000a148 = reinterpret_cast<struct s23*>(76);

struct s23* g1000a14c = reinterpret_cast<struct s23*>(0);

struct s23* g1000a144 = reinterpret_cast<struct s23*>(85);

struct s23* g1000a146 = reinterpret_cast<struct s23*>(0);

struct s23* g1000a134 = reinterpret_cast<struct s23*>(68);

struct s23* g1000a138 = reinterpret_cast<struct s23*>(0);

struct s23* g1000a180 = reinterpret_cast<struct s23*>(65);

struct s23* g1000a130 = reinterpret_cast<struct s23*>(70);

struct s23* g1000a132 = reinterpret_cast<struct s23*>(0);

struct s23* g1000a12c = reinterpret_cast<struct s23*>(70);

struct s23* g1000a12e = reinterpret_cast<struct s23*>(0);

struct s23* g1000a128 = reinterpret_cast<struct s23*>(70);

struct s23* g1000a12a = reinterpret_cast<struct s23*>(0);

struct s23* g1000a124 = reinterpret_cast<struct s23*>(70);

struct s23* g1000a126 = reinterpret_cast<struct s23*>(0);

struct s23* g1000a120 = reinterpret_cast<struct s23*>(70);

struct s23* g1000a122 = reinterpret_cast<struct s23*>(0);

struct s23* g1000a11c = reinterpret_cast<struct s23*>(70);

struct s23* g1000a11e = reinterpret_cast<struct s23*>(0);

struct s23* g1000a118 = reinterpret_cast<struct s23*>(70);

struct s23* g1000a11a = reinterpret_cast<struct s23*>(0);

struct s23* g1000a114 = reinterpret_cast<struct s23*>(70);

struct s23* g1000a116 = reinterpret_cast<struct s23*>(0);

struct s23* g1000a110 = reinterpret_cast<struct s23*>(70);

struct s23* g1000a112 = reinterpret_cast<struct s23*>(0);

struct s23* g1000a10c = reinterpret_cast<struct s23*>(70);

struct s23* g1000a0d0 = reinterpret_cast<struct s23*>(72);

struct s23* g1000a0d4 = reinterpret_cast<struct s23*>(0);

struct s23* g1000a0e4 = reinterpret_cast<struct s23*>(80);

struct s23* g1000a0e8 = reinterpret_cast<struct s23*>(85);

signed char g1000a0ea = 0;

struct s23* g1000a0bc = reinterpret_cast<struct s23*>(78);

struct s23* g1000a0c0 = reinterpret_cast<struct s23*>(97);

signed char g1000a0c4 = 0;

struct s23* g1000a0d8 = reinterpret_cast<struct s23*>(69);

struct s23* g1000a0dc = reinterpret_cast<struct s23*>(80);

struct s23* g1000a0e0 = reinterpret_cast<struct s23*>(68);

struct s23* g1000a0cc = reinterpret_cast<struct s23*>(73);

struct s23* g1000a0c8 = reinterpret_cast<struct s23*>(68);

struct s23* g1000a108 = reinterpret_cast<struct s23*>(70);

struct s23* g1000a104 = reinterpret_cast<struct s23*>(70);

int32_t fun_10004910(struct s5* a1, struct s23* a2, int32_t a3) {
    struct s5* edx4;
    struct s23* eax5;
    int32_t ecx6;
    signed char cl7;
    struct s23* cx8;
    signed char cl9;
    struct s23* eax10;
    signed char cx11;
    struct s23* edx12;
    struct s23* edx13;
    struct s23* dx14;
    struct s23* edx15;
    struct s23* dx16;
    struct s23* dx17;
    struct s23* dx18;
    struct s23* dx19;
    struct s23* dx20;
    struct s23* cx21;
    struct s23* dl22;
    struct s23* dx23;
    struct s23* dx24;
    struct s23* dx25;
    struct s23* edx26;
    signed char cl27;
    struct s23* eax28;
    signed char cl29;
    struct s23* ecx30;
    struct s23* edi31;
    int32_t ecx32;
    void* eax33;

    if (a3 < 10) {
        return 0;
    }
    edx4 = a1;
    if (reinterpret_cast<int1_t>(edx4 == -1)) {
        *reinterpret_cast<struct s23**>(a2) = reinterpret_cast<struct s23*>(0);
        return 0;
    }
    eax5 = reinterpret_cast<struct s23*>(reinterpret_cast<int32_t>(edx4) - 9);
    if (reinterpret_cast<unsigned char>(eax5) > reinterpret_cast<unsigned char>(0xf6)) 
        goto addr_10004949_6;
    ecx6 = 0;
    *reinterpret_cast<signed char*>(&ecx6) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax5) + reinterpret_cast<int32_t>(fun_10004d24));
    switch (ecx6) {
    case 0:
        eax5 = g1000a16c;
        *reinterpret_cast<struct s23**>(a2) = eax5;
        goto addr_10004c82_9;
    case 1:
        eax5 = reinterpret_cast<struct s23*>("Enter");
        break;
    case 2:
        eax5 = g1000a15c;
        *reinterpret_cast<struct s23**>(a2) = eax5;
        eax5 = g1000a160;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 4) = eax5;
        cl7 = g1000a162;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a2) + 6) = cl7;
        goto addr_10004c82_9;
    case 3:
        eax5 = g1000a0b4;
        *reinterpret_cast<struct s23**>(a2) = eax5;
        cx8 = g1000a0b8;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 4) = cx8;
        goto addr_10004c82_9;
    case 4:
        eax5 = reinterpret_cast<struct s23*>("Minus");
        break;
    case 5:
        eax5 = g1000a0f4;
        *reinterpret_cast<struct s23**>(a2) = eax5;
        eax5 = g1000a0f8;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 4) = eax5;
        cl9 = g1000a0fa;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a2) + 6) = cl9;
        goto addr_10004c82_9;
    case 6:
        eax10 = g1000a150;
        *reinterpret_cast<struct s23**>(a2) = eax10;
        eax5 = g1000a154;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 4) = eax5;
        cx11 = g1000a158;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a2) + 8) = cx11;
        goto addr_10004c82_9;
    case 7:
        edx12 = g1000a178;
        eax5 = reinterpret_cast<struct s23*>("Ctrl");
        *reinterpret_cast<struct s23**>(a2) = edx12;
        eax5 = g1000a17c;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 4) = eax5;
        goto addr_10004c82_9;
    case 8:
        edx13 = g1000a148;
        eax5 = reinterpret_cast<struct s23*>("Left");
        *reinterpret_cast<struct s23**>(a2) = edx13;
        eax5 = g1000a14c;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 4) = eax5;
        goto addr_10004c82_9;
    case 9:
        dx14 = g1000a144;
        eax5 = reinterpret_cast<struct s23*>("Up");
        *reinterpret_cast<struct s23**>(a2) = dx14;
        eax5 = g1000a146;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 2) = eax5;
        goto addr_10004c82_9;
    case 10:
        eax5 = reinterpret_cast<struct s23*>("Right");
        break;
    case 11:
        edx15 = g1000a134;
        eax5 = reinterpret_cast<struct s23*>("Down");
        *reinterpret_cast<struct s23**>(a2) = edx15;
        eax5 = g1000a138;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 4) = eax5;
        goto addr_10004c82_9;
    case 12:
        eax5 = reinterpret_cast<struct s23*>("Shift");
        break;
    case 13:
        eax5 = g1000a180;
        *reinterpret_cast<struct s23**>(a2) = eax5;
        goto addr_10004c82_9;
    case 14:
        dx16 = g1000a130;
        eax5 = reinterpret_cast<struct s23*>("F1");
        *reinterpret_cast<struct s23**>(a2) = dx16;
        eax5 = g1000a132;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 2) = eax5;
        goto addr_10004c82_9;
    case 15:
        dx17 = g1000a12c;
        eax5 = reinterpret_cast<struct s23*>("F2");
        *reinterpret_cast<struct s23**>(a2) = dx17;
        eax5 = g1000a12e;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 2) = eax5;
        goto addr_10004c82_9;
    case 16:
        dx18 = g1000a128;
        eax5 = reinterpret_cast<struct s23*>("F3");
        *reinterpret_cast<struct s23**>(a2) = dx18;
        eax5 = g1000a12a;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 2) = eax5;
        goto addr_10004c82_9;
    case 17:
        dx19 = g1000a124;
        eax5 = reinterpret_cast<struct s23*>("F4");
        *reinterpret_cast<struct s23**>(a2) = dx19;
        eax5 = g1000a126;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 2) = eax5;
        goto addr_10004c82_9;
    case 18:
        dx20 = g1000a120;
        eax5 = reinterpret_cast<struct s23*>("F5");
        *reinterpret_cast<struct s23**>(a2) = dx20;
        eax5 = g1000a122;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 2) = eax5;
        goto addr_10004c82_9;
    case 19:
        cx21 = g1000a11c;
        eax5 = a2;
        *reinterpret_cast<struct s23**>(eax5) = cx21;
        dl22 = g1000a11e;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(eax5) + 2) = dl22;
        goto addr_10004c82_9;
    case 20:
        dx23 = g1000a118;
        eax5 = reinterpret_cast<struct s23*>("F7");
        *reinterpret_cast<struct s23**>(a2) = dx23;
        eax5 = g1000a11a;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 2) = eax5;
        goto addr_10004c82_9;
    case 21:
        dx24 = g1000a114;
        eax5 = reinterpret_cast<struct s23*>("F8");
        *reinterpret_cast<struct s23**>(a2) = dx24;
        eax5 = g1000a116;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 2) = eax5;
        goto addr_10004c82_9;
    case 22:
        dx25 = g1000a110;
        eax5 = reinterpret_cast<struct s23*>("F9");
        *reinterpret_cast<struct s23**>(a2) = dx25;
        eax5 = g1000a112;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 2) = eax5;
        goto addr_10004c82_9;
    case 23:
        eax5 = g1000a10c;
        *reinterpret_cast<struct s23**>(a2) = eax5;
        goto addr_10004c82_9;
    case 24:
        edx26 = g1000a0d0;
        eax5 = reinterpret_cast<struct s23*>("Home");
        *reinterpret_cast<struct s23**>(a2) = edx26;
        eax5 = g1000a0d4;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 4) = eax5;
        goto addr_10004c82_9;
    case 25:
        eax5 = g1000a0e4;
        *reinterpret_cast<struct s23**>(a2) = eax5;
        eax5 = g1000a0e8;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 4) = eax5;
        cl27 = g1000a0ea;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a2) + 6) = cl27;
        goto addr_10004c82_9;
    case 26:
        eax28 = g1000a0bc;
        *reinterpret_cast<struct s23**>(a2) = eax28;
        eax5 = g1000a0c0;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 4) = eax5;
        cl29 = g1000a0c4;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a2) + 8) = cl29;
        goto addr_10004c82_9;
    case 27:
        eax5 = g1000a0d8;
        *reinterpret_cast<struct s23**>(a2) = eax5;
        goto addr_10004c82_9;
    case 28:
        ecx30 = g1000a0dc;
        *reinterpret_cast<struct s23**>(a2) = ecx30;
        eax5 = g1000a0e0;
        *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 4) = eax5;
        goto addr_10004c82_9;
    case 29:
        eax5 = g1000a0cc;
        *reinterpret_cast<struct s23**>(a2) = eax5;
        goto addr_10004c82_9;
    case 30:
        eax5 = g1000a0c8;
        *reinterpret_cast<struct s23**>(a2) = eax5;
        goto addr_10004c82_9;
    case 31:
        eax5 = g1000a108;
        *reinterpret_cast<struct s23**>(a2) = eax5;
        goto addr_10004c82_9;
    case 32:
        eax5 = g1000a104;
        *reinterpret_cast<struct s23**>(a2) = eax5;
        goto addr_10004c82_9;
    case 33:
        eax5 = reinterpret_cast<struct s23*>("Pause");
        break;
        addr_10004949_6:
    case 34:
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(a2) + 1) = 0;
        *reinterpret_cast<struct s23**>(a2) = *reinterpret_cast<struct s23**>(&edx4);
        goto addr_10004c82_9;
    }
    *reinterpret_cast<struct s23**>(a2) = *reinterpret_cast<struct s23**>(eax5);
    eax5 = *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(eax5) + 4);
    *reinterpret_cast<struct s23**>(reinterpret_cast<unsigned char>(a2) + 4) = eax5;
    addr_10004c82_9:
    edi31 = a2;
    ecx32 = -1;
    eax33 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax5) - reinterpret_cast<unsigned char>(eax5));
    do {
        if (!ecx32) 
            break;
        --ecx32;
        edi31 = reinterpret_cast<struct s23*>(reinterpret_cast<unsigned char>(edi31) + 1);
    } while (*reinterpret_cast<struct s23**>(edi31) != *reinterpret_cast<struct s23**>(&eax33));
    return ~ecx32 - 1;
}

int32_t g1000a8ac = 0;

int32_t LCMapStringA = 0xd730;

int32_t LCMapStringW = 0xd756;

struct s0* g1000a8d0 = reinterpret_cast<struct s0*>(0);

int32_t MultiByteToWideChar = 0xd71a;

int32_t WideCharToMultiByte = 0xd740;

int32_t fun_10005f00(struct s0* a1, int32_t a2, struct s0* a3, struct s0* a4, void* a5, int32_t a6, struct s0* a7) {
    int32_t eax8;
    int32_t esi9;
    int32_t eax10;
    int32_t eax11;
    struct s0* edi12;
    struct s0* eax13;
    struct s0* esi14;
    struct s0* eax15;
    struct s0* eax16;
    struct s0* eax17;
    struct s0* v18;
    int32_t eax19;
    struct s0* eax20;
    struct s0* eax21;
    int32_t eax22;
    int32_t ebp23;
    struct s0* eax24;
    struct s0* edi25;
    int32_t ebp26;
    struct s0* eax27;
    int32_t eax28;

    eax8 = g1000a8ac;
    if (eax8) {
        esi9 = LCMapStringA;
    } else {
        esi9 = LCMapStringA;
        eax10 = reinterpret_cast<int32_t>(esi9(0, 0x100, 0x1000a8b0, 1, 0, 0));
        if (!eax10) {
            eax11 = reinterpret_cast<int32_t>(LCMapStringW());
            if (!eax11) {
                goto 0;
            } else {
                eax8 = 1;
            }
        } else {
            eax8 = 2;
        }
    }
    edi12 = a4;
    g1000a8ac = eax8;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi12) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi12 == 0))) {
        eax13 = fun_10006130(a3, edi12);
        edi12 = eax13;
        eax8 = g1000a8ac;
    }
    g1000a8ac = eax8;
    if (eax8 == 2) {
        esi9();
        goto a5;
    }
    g1000a8ac = eax8;
    if (eax8 != 1) {
        addr_1000608f_13:
        return eax8;
    } else {
        esi14 = reinterpret_cast<struct s0*>(0);
        if (!a7) {
            eax15 = g1000a8d0;
            a7 = eax15;
        }
        eax16 = reinterpret_cast<struct s0*>(MultiByteToWideChar());
        if (!eax16) {
            goto 0;
        }
        eax17 = fun_10005210(reinterpret_cast<unsigned char>(eax16) * 2);
        if (!eax17) {
            goto 0;
        }
        v18 = a1;
        eax19 = reinterpret_cast<int32_t>(MultiByteToWideChar());
        if (!eax19) 
            goto addr_1000607b_21;
        eax20 = reinterpret_cast<struct s0*>(LCMapStringW());
        if (!eax20) 
            goto addr_1000607b_21;
        if (*reinterpret_cast<unsigned char*>(&v18 + 1) & 4) 
            goto addr_1000604b_24;
    }
    eax21 = fun_10005210(reinterpret_cast<unsigned char>(eax20) * 2);
    esi14 = eax21;
    if (!esi14) 
        goto addr_1000607b_21;
    eax22 = reinterpret_cast<int32_t>(LCMapStringW(0, v18, eax17, eax16, esi14, eax20));
    if (!eax22) 
        goto addr_1000607b_21;
    if (!0) 
        goto addr_100060ce_28;
    ebp23 = WideCharToMultiByte;
    eax24 = reinterpret_cast<struct s0*>(ebp23(0, 0x220, esi14, eax20, eax16, 0, 0, 0, 0, v18, eax17, eax16, esi14, eax20));
    if (!eax24) {
        addr_1000607b_21:
        fun_100051f0(eax17, v18, 1, edi25, edi12, eax17, eax16, a7, 9, a3, edi12);
        fun_100051f0(esi14, v18, 1, edi25, edi12, eax17, eax16, a7, 9, a3, edi12);
        eax8 = 0;
        goto addr_1000608f_13;
    } else {
        addr_10006112_30:
        fun_100051f0(eax17, eax16, a7, eax17, eax16, 0, 0, v18, 1, edi25, edi12);
        fun_100051f0(esi14, eax16, a7, eax17, eax16, 0, 0, v18, 1, edi25, edi12);
        goto 0;
    }
    addr_100060ce_28:
    ebp26 = WideCharToMultiByte;
    eax27 = reinterpret_cast<struct s0*>(ebp26(0, 0x220, esi14, eax20, 0, 0, 0, 0, 0, v18, eax17, eax16, esi14, eax20));
    if (eax27) 
        goto addr_10006112_30;
    goto addr_1000607b_21;
    addr_1000604b_24:
    if (!eax17) 
        goto addr_10006112_30;
    if (reinterpret_cast<signed char>(eax20) > reinterpret_cast<signed char>(eax17)) 
        goto addr_1000607b_21;
    eax28 = reinterpret_cast<int32_t>(LCMapStringW(0, v18, eax17, eax16, edi12, eax17));
    if (eax28) 
        goto addr_10006112_30; else 
        goto addr_1000607b_21;
}

struct s0* g1000a8d8 = reinterpret_cast<struct s0*>(0);

int32_t GetStringTypeA = 0xd766;

int32_t GetStringTypeW = 0xd778;

struct s0* fun_10006160(int32_t a1, struct s0* a2, struct s0* a3, void* a4, struct s0* a5, int32_t a6) {
    struct s0* eax7;
    int32_t esi8;
    int32_t eax9;
    int32_t eax10;
    struct s0* ebx11;
    struct s0* esi12;
    struct s0* edi13;
    uint32_t eax14;
    struct s0* eax15;
    struct s0* edi16;
    struct s0* esi17;
    int32_t eax18;
    struct s0* eax19;
    struct s0* ebp20;
    struct s0* ebx21;

    eax7 = g1000a8d8;
    if (eax7) {
        esi8 = GetStringTypeA;
    } else {
        esi8 = GetStringTypeA;
        eax9 = reinterpret_cast<int32_t>(esi8(0));
        if (!eax9) {
            eax10 = reinterpret_cast<int32_t>(GetStringTypeW());
            if (!eax10) {
                goto 1;
            } else {
                eax7 = reinterpret_cast<struct s0*>(1);
            }
        } else {
            eax7 = reinterpret_cast<struct s0*>(2);
        }
    }
    g1000a8d8 = eax7;
    if (!reinterpret_cast<int1_t>(eax7 == 2)) {
        g1000a8d8 = eax7;
        if (reinterpret_cast<int1_t>(eax7 == 1)) {
            ebx11 = reinterpret_cast<struct s0*>(0);
            esi12 = reinterpret_cast<struct s0*>(0);
            edi13 = a5;
            if (!edi13) {
                edi13 = g1000a8d0;
            }
            eax14 = reinterpret_cast<uint32_t>(MultiByteToWideChar());
            if (eax14 && ((eax15 = fun_10006d30(2, eax14), esi12 = eax15, !!esi12) && (eax18 = reinterpret_cast<int32_t>(MultiByteToWideChar(edi13, 1, edi16, esi17, esi12, eax14)), !!eax18))) {
                eax19 = reinterpret_cast<struct s0*>(GetStringTypeW(edi13, esi12, eax18, a3, edi13, 1, edi16, esi17, esi12, eax14));
                ebx11 = eax19;
            }
            fun_100051f0(esi12, edi13, 9, a2, a3, 0, 0, ebp20, edi16, esi17, ebx21);
            eax7 = ebx11;
        }
        return eax7;
    } else {
        if (!a6) {
        }
        esi8();
        goto ebp20;
    }
}

int32_t HeapCreate = 0xd6dc;

void fun_10005ae0() {
    int32_t eax1;

    eax1 = reinterpret_cast<int32_t>(HeapCreate());
    g1000c5e0 = eax1;
    goto 1;
}

int32_t g1000a8ec = 0;

int32_t GetEnvironmentStringsW = 0xd82e;

int32_t GetEnvironmentStrings = 0xd7fc;

int32_t FreeEnvironmentStringsA = 0xd7e2;

int32_t FreeEnvironmentStringsW = 0xd814;

struct s0* fun_10006800() {
    int1_t zf1;
    struct s0* edi2;
    struct s0* v3;
    struct s0** ebx4;
    struct s0** v5;
    int32_t esi6;
    struct s0* eax7;
    struct s0** eax8;
    struct s0** v9;
    int1_t zf10;
    int1_t zf11;
    struct s0** eax12;
    struct s0** ebp13;
    struct s0* ebp14;
    struct s0* eax15;
    struct s0* v16;
    struct s0* edi17;
    struct s0** esi18;
    uint32_t ecx19;
    uint32_t ecx20;
    struct s0* eax21;
    struct s0* esi22;
    struct s0* eax23;
    struct s0* eax24;
    int32_t eax25;

    zf1 = g1000a8ec == 0;
    if (!zf1) {
        edi2 = v3;
        ebx4 = v5;
        esi6 = GetEnvironmentStringsW;
    } else {
        esi6 = GetEnvironmentStringsW;
        eax7 = reinterpret_cast<struct s0*>(esi6());
        edi2 = eax7;
        if (!edi2) {
            eax8 = reinterpret_cast<struct s0**>(GetEnvironmentStrings());
            ebx4 = eax8;
            if (!ebx4) {
                return 0;
            } else {
                g1000a8ec = 2;
            }
        } else {
            g1000a8ec = 1;
            ebx4 = v9;
        }
    }
    zf10 = g1000a8ec == 1;
    if (!zf10) {
        zf11 = g1000a8ec == 2;
        if (!zf11) {
            return 0;
        } else {
            if (ebx4 || (eax12 = reinterpret_cast<struct s0**>(GetEnvironmentStrings()), ebx4 = eax12, !!ebx4)) {
                ebp13 = ebx4;
                if (*ebx4) {
                    addr_10006937_13:
                    ++ebp13;
                    if (*ebp13) 
                        goto addr_10006937_13;
                    ++ebp13;
                    if (*ebp13) 
                        goto addr_10006937_13;
                }
                ebp14 = reinterpret_cast<struct s0*>(reinterpret_cast<uint32_t>(ebp13) - reinterpret_cast<uint32_t>(ebx4) + 1);
                eax15 = fun_10005210(ebp14);
                v16 = eax15;
                if (eax15) {
                    edi17 = v16;
                    esi18 = ebx4;
                    ecx19 = reinterpret_cast<unsigned char>(ebp14) >> 2;
                    while (ecx19) {
                        --ecx19;
                        *reinterpret_cast<struct s0**>(&edi17->f0) = *esi18;
                        edi17 = reinterpret_cast<struct s0*>(&edi17->f4);
                        esi18 = esi18 + 4;
                    }
                    ecx20 = reinterpret_cast<unsigned char>(ebp14) & 3;
                    while (ecx20) {
                        --ecx20;
                        *reinterpret_cast<struct s0**>(&edi17->f0) = *esi18;
                        edi17 = reinterpret_cast<struct s0*>(&edi17->f1);
                        ++esi18;
                    }
                    FreeEnvironmentStringsA();
                    goto v16;
                } else {
                    FreeEnvironmentStringsA();
                    goto v16;
                }
            } else {
                return 0;
            }
        }
    } else {
        if (edi2 || (eax21 = reinterpret_cast<struct s0*>(esi6()), edi2 = eax21, !!edi2)) {
            esi22 = edi2;
            if (*reinterpret_cast<struct s0**>(&edi2->f0)) {
                addr_10006889_27:
                esi22 = reinterpret_cast<struct s0*>(&esi22->f2);
                if (*reinterpret_cast<struct s0**>(&esi22->f0)) 
                    goto addr_10006889_27;
                esi22 = reinterpret_cast<struct s0*>(&esi22->f2);
                if (*reinterpret_cast<struct s0**>(&esi22->f0)) 
                    goto addr_10006889_27;
            }
            eax23 = reinterpret_cast<struct s0*>(WideCharToMultiByte());
            if (!eax23 || (eax24 = fun_10005210(eax23), eax24 == 0)) {
                FreeEnvironmentStringsW();
                goto 0;
            } else {
                eax25 = reinterpret_cast<int32_t>(WideCharToMultiByte());
                if (!eax25) {
                    fun_100051f0(eax24, 0, 0, edi2, (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(esi22) - reinterpret_cast<unsigned char>(edi2)) >> 1) + 1, eax24, eax23, 0, 0, 0, 0);
                }
                FreeEnvironmentStringsW();
                goto eax24;
            }
        } else {
            return 0;
        }
    }
}

struct s0* fun_10005e10(struct s0* a1);

struct s24 {
    signed char f0;
    signed char f1;
};

struct s25 {
    struct s0* f0;
    signed char[7] pad8;
    struct s0* f8;
};

int32_t GetCPInfo = 0xd6f8;

int32_t g1000a7ac = 0;

int32_t fun_10005c30(struct s0* a1) {
    uint32_t v2;
    uint32_t ebx3;
    struct s0* eax4;
    struct s0* ebp5;
    int1_t zf6;
    int32_t v7;
    struct s0** eax8;
    unsigned char* edi9;
    unsigned char eax10;
    int32_t ecx11;
    int32_t edi12;
    struct s24* esi13;
    uint32_t edx14;
    uint32_t ebx15;
    unsigned char cl16;
    uint32_t ebx17;
    struct s0* eax18;
    int32_t eax19;
    struct s0* ebx20;
    struct s25* ecx21;
    struct s0* ecx22;
    int32_t eax23;
    int1_t zf24;
    int32_t v25;
    int32_t v26;
    signed char* edi27;
    int32_t ecx28;
    struct s0* eax29;
    int32_t v30;
    signed char v31;
    uint32_t eax32;
    uint32_t edx33;
    signed char v34;
    uint32_t ecx35;
    signed char v36;
    signed char v37;
    uint32_t eax38;

    v2 = ebx3;
    eax4 = fun_10005e10(a1);
    ebp5 = eax4;
    zf6 = g1000a794 == ebp5;
    if (zf6) {
        return 0;
    }
    if (!ebp5) {
        fun_10005ec0();
        return 0;
    }
    v7 = 0;
    eax8 = reinterpret_cast<struct s0**>(0x1000a7b8);
    do {
        if (*eax8 == ebp5) 
            break;
        eax8 = eax8 + 48;
        ++v7;
    } while (reinterpret_cast<uint32_t>(eax8) < 0x1000a8a8);
    goto addr_10005c8e_8;
    edi9 = reinterpret_cast<unsigned char*>(0x1000a690);
    eax10 = reinterpret_cast<unsigned char>(0);
    ecx11 = 64;
    while (ecx11) {
        --ecx11;
        *edi9 = reinterpret_cast<unsigned char>(0);
        edi9 = edi9 + 4;
    }
    *edi9 = 0;
    edi12 = (v7 + v7 * 2) * 2;
    do {
        esi13 = reinterpret_cast<struct s24*>((eax10 + edi12) * 8 + 0x1000a7c8);
        if (esi13->f0) {
            do {
                if (!esi13->f1) 
                    break;
                edx14 = 0;
                ebx15 = 0;
                *reinterpret_cast<signed char*>(&edx14) = esi13->f0;
                *reinterpret_cast<signed char*>(&ebx15) = esi13->f1;
                if (ebx15 >= edx14) {
                    cl16 = *reinterpret_cast<unsigned char*>(eax10 + 0x1000a7b0);
                    do {
                        *reinterpret_cast<unsigned char*>(edx14 + 0x1000a691) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx14 + 0x1000a691) | cl16);
                        ++edx14;
                        ebx17 = 0;
                        *reinterpret_cast<signed char*>(&ebx17) = esi13->f1;
                    } while (ebx17 >= edx14);
                }
                ++esi13;
            } while (esi13->f0);
        }
        eax10 = reinterpret_cast<unsigned char>(eax10 + 1);
    } while (eax10 < reinterpret_cast<unsigned char>(4));
    g1000a794 = ebp5;
    eax18 = fun_10005e60(ebp5);
    g1000a798 = eax18;
    eax19 = v7 << 4;
    ebx20 = *reinterpret_cast<struct s0**>(eax19 + eax19 * 2 + reinterpret_cast<int32_t>("!"));
    ecx21 = reinterpret_cast<struct s25*>(eax19 + eax19 * 2 + 0x1000a7bc);
    ecx22 = ecx21->f8;
    g1000a7a0 = ecx21->f0;
    g1000a7a4 = ebx20;
    g1000a7a8 = ecx22;
    return 0;
    addr_10005c8e_8:
    eax23 = reinterpret_cast<int32_t>(GetCPInfo());
    if (eax23 != 1) {
        zf24 = g1000a7ac == 0;
        if (zf24) {
            goto v25;
        } else {
            fun_10005ec0();
            goto v26;
        }
    }
    edi27 = reinterpret_cast<signed char*>(0x1000a690);
    ecx28 = 64;
    while (ecx28) {
        --ecx28;
        *edi27 = reinterpret_cast<signed char>(0);
        edi27 = edi27 + 4;
    }
    *edi27 = 0;
    if (v2 > 1) 
        goto addr_10005cbd_34;
    eax29 = reinterpret_cast<struct s0*>(0);
    g1000a794 = reinterpret_cast<struct s0*>(0);
    addr_10005dca_36:
    g1000a798 = eax29;
    g1000a7a0 = reinterpret_cast<struct s0*>(0);
    g1000a7a4 = reinterpret_cast<struct s0*>(0);
    g1000a7a8 = reinterpret_cast<struct s0*>(0);
    goto v30;
    addr_10005cbd_34:
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v7) + 2)) {
        do {
            if (!v31) 
                break;
            eax32 = 0;
            edx33 = 0;
            *reinterpret_cast<signed char*>(&eax32) = v34;
            *reinterpret_cast<signed char*>(&edx33) = v31;
            if (edx33 >= eax32) {
                do {
                    *reinterpret_cast<unsigned char*>(eax32 + 0x1000a691) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax32 + 0x1000a691) | 4);
                    ++eax32;
                    ecx35 = 0;
                    *reinterpret_cast<signed char*>(&ecx35) = v36;
                } while (ecx35 >= eax32);
            }
        } while (v37);
    }
    eax38 = 1;
    do {
        *reinterpret_cast<unsigned char*>(eax38 + 0x1000a691) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax38 + 0x1000a691) | 8);
        ++eax38;
    } while (eax38 < 0xff);
    g1000a794 = ebp5;
    eax29 = fun_10005e60(ebp5);
    goto addr_10005dca_36;
}

void fun_10006470(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8) {
    struct s0* v9;
    struct s0* v10;
    struct s0* esi11;
    struct s0** esi12;
    struct s0* v13;

    v9 = reinterpret_cast<struct s0*>(__return_address());
    v10 = esi11;
    esi12 = reinterpret_cast<struct s0**>(0x1000c4e0);
    do {
        if (*esi12) {
            v13 = *esi12;
            fun_100051f0(v13, v10, v9, a1, a2, a3, a4, a5, a6, a7, a8);
        }
        esi12 = esi12 + 4;
    } while (reinterpret_cast<uint32_t>(esi12) < 0x1000c5e0);
    return;
}

signed char g1000a518 = 0;

int32_t* g1000c5ec;

void* g1000c5e4;

int32_t ExitProcess = 0xd6ce;

void fun_100059d0(int32_t a1, int32_t a2, int32_t a3) {
    int32_t ebx4;
    int1_t zf5;
    void* esi6;
    int32_t* esi7;
    int1_t cf8;
    int32_t eax9;
    int1_t cf10;

    g1000a51c = 1;
    ebx4 = a3;
    g1000a518 = *reinterpret_cast<signed char*>(&ebx4);
    if (!a2) {
        zf5 = g1000c5ec == 0;
        if (!zf5 && (esi6 = g1000c5e4, esi7 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi6) - 4), cf8 = reinterpret_cast<uint32_t>(esi7) < reinterpret_cast<uint32_t>(g1000c5ec), !cf8)) {
            do {
                eax9 = *esi7;
                if (eax9) {
                    eax9();
                }
                --esi7;
                cf10 = reinterpret_cast<uint32_t>(esi7) < reinterpret_cast<uint32_t>(g1000c5ec);
            } while (!cf10);
        }
        fun_10005a50(0x10009014, 0x1000901c);
    }
    fun_10005a50(0x10009020, 0x10009024);
    if (!ebx4) {
        ExitProcess(a1);
    }
    return;
}

uint32_t fun_10006ef0() {
    uint32_t eax1;

    eax1 = fun_10006f00(1);
    return eax1;
}

struct s26 {
    int32_t f0;
    unsigned char f4;
};

int32_t SetStdHandle = 0xd868;

int32_t fun_10007400(uint32_t a1) {
    int1_t below_or_equal2;
    int32_t** edi3;
    uint32_t esi4;
    struct s26* eax5;
    int1_t zf6;
    int32_t v7;

    below_or_equal2 = g1000c4d0 <= a1;
    if (below_or_equal2 || ((edi3 = reinterpret_cast<int32_t**>((reinterpret_cast<int32_t>(a1 & 0xffffffe7) >> 3) + 0x1000c4e0), esi4 = (a1 & 31) * 8, eax5 = reinterpret_cast<struct s26*>(reinterpret_cast<int32_t>(*edi3) + esi4), (eax5->f4 & 1) == 0) || eax5->f0 == -1)) {
        g1000a4d8 = 9;
        g1000a4dc = 0;
        return -1;
    }
    zf6 = g1000a4bc == 1;
    if (!zf6) {
        addr_10007466_4:
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*edi3) + esi4) = -1;
        return 0;
    } else {
        if (!a1) {
            v7 = 0xf6;
        } else {
            if (a1 == 1) {
                v7 = 0xf5;
            } else {
                if (a1 == 2) {
                    v7 = 0xf4;
                } else {
                    goto addr_10007466_4;
                }
            }
        }
    }
    SetStdHandle(v7, 0);
    goto addr_10007466_4;
}

int32_t FindResourceA = 0xd35e;

int32_t LoadResource = 0xd34e;

int32_t LockResource = 0xd33e;

int32_t fun_10001270(int32_t a1, struct s17* a2, int32_t a3, int32_t a4, int32_t a5, void* a6, int32_t a7, int32_t a8, int32_t a9, void* a10, int32_t a11) {
    int32_t esi12;
    int32_t edi13;
    int32_t esi14;
    int32_t v15;
    int32_t eax16;

    esi12 = GetLastError;
    esi12(edi13, esi14, __return_address());
    v15 = a2->f0;
    eax16 = reinterpret_cast<int32_t>(FindResourceA(v15, a1, 5, edi13, esi14, __return_address()));
    esi12(v15, a1, 5, edi13, esi14, __return_address());
    LoadResource();
    esi12();
    LockResource();
    esi12();
    goto eax16;
}

int32_t g1000b078 = 0;

int32_t g1000b184 = 0;

int32_t DialogBoxParamA = 0xd3ac;

signed char g1000b080 = 0;

/* (image base) */
int32_t image_base_ = 0x10009db0;

int32_t fun_10004e60(int32_t a1, int32_t a2, uint32_t a3);

void fun_10004f30(struct s0* a1) {
    struct s0* v2;
    struct s0* ebx3;
    struct s0* v4;
    struct s0* esi5;
    struct s0* v6;
    struct s0* edi7;
    struct s0* v8;
    struct s0* ebp9;
    struct s0* ecx10;
    struct s0* v11;
    struct s0* v12;
    void* esp13;
    int1_t zf14;
    int32_t esi15;
    void* esp16;
    struct s0* v17;
    struct s0* v18;
    int32_t eax19;
    int32_t v20;
    void* esp21;
    struct s0* v22;
    struct s0* v23;
    int32_t eax24;
    void* esp25;
    int32_t v26;
    int1_t zf27;
    int32_t esi28;
    struct s0* v29;
    struct s0* v30;
    struct s0** esi31;
    int32_t edi32;
    struct s0* v33;
    struct s0* edx34;
    struct s0* v35;
    int32_t eax36;
    struct s0* eax37;
    void* esp38;
    struct s0* edx39;
    struct s0* v40;
    int32_t eax41;
    void* esp42;
    struct s0* edx43;
    int32_t esi44;
    int32_t v45;

    g1000b078 = reinterpret_cast<int32_t>("Copy Configuration");
    g1000b184 = reinterpret_cast<int32_t>("Enter the name for the new configuration:");
    v2 = ebx3;
    v4 = esi5;
    v6 = edi7;
    v8 = ebp9;
    ecx10 = g1000b4c0;
    v11 = a1;
    v12 = ecx10;
    DialogBoxParamA();
    esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x114 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    zf14 = g1000b080 == 0;
    if (zf14 || (esi15 = wsprintfA, esi15(reinterpret_cast<int32_t>(esp13) + 32, "SOFTWARE\\ID\\Doom95\\Config\\%s", 0x1000b2b0), esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4 - 4 - 4 + 4), v17 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp16) + 32), v18 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp16) + 44), eax19 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000001, v18)), esp13 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) + 12 - 4 - 4 - 4 - 4 + 4), !!eax19)) {
        addr_100050bb_2:
        goto v20;
    } else {
        esi15(reinterpret_cast<int32_t>(esp13) + 32, "SOFTWARE\\ID\\Doom95\\Config\\%s", 0x1000b080, 0x80000001, v18);
        esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp13) - 4 - 4 - 4 - 4 + 4);
        v22 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp21) + 36);
        v23 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp21) + 44);
        eax24 = reinterpret_cast<int32_t>(RegCreateKeyA(0x80000001, v23, v22, 0x80000001, v18));
        esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) + 12 - 4 - 4 - 4 - 4 + 4);
        if (eax24) {
            MessageBoxA();
            goto v26;
        }
        zf27 = image_base_ == 0;
        if (!zf27) 
            goto addr_10005012_6;
    }
    addr_1000509a_7:
    esi28 = RegCloseKey;
    esi28(v17, 0x80000001, v23, v22, 0x80000001, v18);
    esi28(v17, v17, 0x80000001, v23, v22, 0x80000001, v18);
    fun_10001700(0x1000b080, v17, v17, 0x80000001, v23, v22, 0x80000001, v18, v17, v12, "GETSTRING", v11, fun_10004e60, 0, v8, v6, v4, v2, v29, v30);
    goto addr_100050bb_2;
    addr_10005012_6:
    esi31 = reinterpret_cast<struct s0**>(0x10009fd0);
    edi32 = RegQueryValueExA;
    while (1) {
        v33 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp25) + 16);
        edx34 = *esi31;
        v18 = reinterpret_cast<struct s0*>(0);
        v35 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp25) + 28);
        eax36 = reinterpret_cast<int32_t>(edi32());
        esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        if (eax36 || 1) {
            addr_10005093_9:
            esi31 = esi31 + 4;
            if (*esi31) 
                continue; else 
                goto addr_1000509a_7;
        } else {
            eax37 = fun_10005210(0);
            esp38 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp25) - 4 - 4 + 4 + 4);
            if (!eax37) 
                break;
            edx39 = *esi31;
            v40 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp38) + 28);
            eax41 = reinterpret_cast<int32_t>(edi32(v33, edx39, 0, v40));
            esp42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp38) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
            if (!eax41) 
                goto addr_10005070_12;
        }
        addr_1000508a_13:
        fun_100051f0(eax37, v33, edx39, 0, v40, eax37, reinterpret_cast<int32_t>(esp38) + 16, v17, edx34, 0, v35);
        esp25 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp42) - 4 - 4 + 4 + 4);
        goto addr_10005093_9;
        addr_10005070_12:
        edx43 = *esi31;
        RegSetValueExA(v17, edx43, 0, edx34, eax37, eax37, v33, edx39, 0, v40);
        esp42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp42) - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        goto addr_1000508a_13;
    }
    esi44 = RegCloseKey;
    esi44(v33);
    esi44(v33, v33);
    MessageBoxA();
    goto v45;
}

int32_t fun_10002040(int32_t a1, void* a2, int32_t a3) {
    int32_t eax4;
    void* esp5;
    int32_t ebx6;
    void* esp7;
    void* v8;
    void* v9;
    int32_t eax10;
    void* v11;
    int32_t v12;

    eax4 = reinterpret_cast<int32_t>(joyGetDevCapsA());
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x3a0 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    if (!eax4 && (ebx6 = wsprintfA, ebx6(reinterpret_cast<int32_t>(esp5) + 16, "System\\CurrentControlSet\\Control\\MediaResources\\Joystick\\%s\\CurrentJoystickSettings", reinterpret_cast<int32_t>(esp5) + 0x288), esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 + 4), v8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) + 24), v9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) + 28), eax10 = reinterpret_cast<int32_t>(RegOpenKeyA(0x80000002, v9, v8)), esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) + 12 - 4 - 4 - 4 - 4 + 4), !eax10)) {
        ebx6(reinterpret_cast<int32_t>(esp5) + 0x114, "Joystick%dOEMCallout", a1 + 1, 0x80000002, v9, v8);
        v11 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 + 4 + 0x120);
        RegQueryValueExA(a1, v11, 0);
        RegCloseKey(0, a1, v11, 0);
    }
    goto v12;
}

int32_t GetACP = 0xd704;

int32_t GetOEMCP = 0xd70e;

struct s0* fun_10005e10(struct s0* a1) {
    struct s0* eax2;

    g1000a7ac = 0;
    eax2 = a1;
    if (!reinterpret_cast<int1_t>(eax2 == 0xfffffffe)) {
        if (!reinterpret_cast<int1_t>(eax2 == 0xfffffffd)) {
            if (reinterpret_cast<int1_t>(eax2 == 0xfffffffc)) {
                g1000a7ac = 1;
                eax2 = g1000a8d0;
            }
            return eax2;
        } else {
            g1000a7ac = 1;
            goto GetACP;
        }
    } else {
        g1000a7ac = 1;
        goto GetOEMCP;
    }
}

struct s27 {
    signed char[8] pad8;
    int32_t f8;
};

int32_t EndDialog = 0xd4be;

int32_t SetWindowTextA = 0xd49c;

int32_t WinHelpA = 0xd4ca;

void fun_100013d0(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, struct s0* a6, struct s0* a7, struct s0* a8) {
    struct s27* eax9;
    void* esp10;
    struct s0* eax11;
    uint32_t ecx12;
    struct s0* eax13;
    struct s0* eax14;
    int32_t ecx15;
    int32_t ebp16;
    int32_t v17;
    uint32_t eax18;
    int32_t v19;
    int32_t ebx20;
    struct s0* eax21;
    struct s0* ebp22;
    struct s0* edi23;
    struct s0* v24;
    struct s0* v25;
    struct s0* v26;
    int32_t ebp27;
    int32_t ecx28;
    int32_t ecx29;
    int32_t ebp30;
    int32_t v31;
    int32_t ebp32;
    int32_t ebx33;
    struct s0* eax34;
    uint32_t v35;
    int32_t eax36;
    int32_t v37;
    int32_t v38;

    eax9 = reinterpret_cast<struct s27*>(GetWindowLongA());
    esp10 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    if (reinterpret_cast<unsigned char>(__return_address()) > reinterpret_cast<unsigned char>(83)) {
        if (reinterpret_cast<unsigned char>(__return_address()) > reinterpret_cast<unsigned char>(0x110)) {
            if (__return_address() == 0x111) {
                eax11 = a1;
                ecx12 = *reinterpret_cast<uint16_t*>(&eax11);
                if (reinterpret_cast<int32_t>(ecx12) > reinterpret_cast<int32_t>(0x42f)) {
                    if (ecx12 == 0x431) {
                        fun_10004f30(a1);
                        eax13 = reinterpret_cast<struct s0*>(GetDlgItem());
                        fun_10001820(eax13, a1, 0x42f);
                        goto 0;
                    } else {
                        if (ecx12 == 0x432) {
                            fun_10005100(a1);
                            eax14 = reinterpret_cast<struct s0*>(GetDlgItem());
                            fun_10001820(eax14, a1, 0x42f);
                            goto 0;
                        } else {
                            if (ecx12 == 0x434) {
                                ecx15 = eax9->f8;
                                ebp16 = SendMessageA;
                                ebp16(ecx15, 78, 0);
                                GetDlgItem();
                                EnableWindow();
                                goto reinterpret_cast<int32_t>(esp10) + 16;
                            } else {
                                goto v17;
                            }
                        }
                    }
                } else {
                    if (ecx12 == 0x42f) {
                        eax18 = reinterpret_cast<unsigned char>(eax11) >> 16;
                        if (*reinterpret_cast<int16_t*>(&eax18) != 1) {
                            goto v19;
                        } else {
                            ebx20 = GetDlgItem;
                            eax21 = reinterpret_cast<struct s0*>(ebx20(a1, 0x42f));
                            fun_100017f0(eax21, a1, 0x42f, a1, 0xeb, ebp22, edi23, a1, 0, v24, v25, v26, __return_address(), a1, a2, a3, a4, a5, a6, a7, a8);
                            ebp27 = SendMessageA;
                            ecx28 = eax9->f8;
                            ebp27(ecx28, 78, 0);
                            ebx20();
                            EnableWindow();
                            goto reinterpret_cast<int32_t>(esp10) - 4 - 4 - 4 + 4 - 4 - 4 + 4 + 20;
                        }
                    } else {
                        if (ecx12 == 1) {
                            ecx29 = eax9->f8;
                            ebp30 = SendMessageA;
                            ebp30(ecx29, 78, 0, reinterpret_cast<int32_t>(esp10) + 16);
                        } else {
                            if (ecx12 == 2) {
                                ebp30 = SendMessageA;
                            } else {
                                goto v31;
                            }
                        }
                        ebp30();
                        DestroyWindow();
                        ebp32 = EndDialog;
                        ebp32();
                        goto a1;
                    }
                }
            } else {
                if (__return_address() == 0x468) {
                    GetDlgItem();
                    EnableWindow();
                    goto edi23;
                } else {
                    if (__return_address() == 0x46b) {
                        GetDlgItem();
                        SetWindowTextA();
                        goto edi23;
                    }
                }
            }
        } else {
            if (__return_address() == 0x110) {
                ebx33 = GetDlgItem;
                eax34 = reinterpret_cast<struct s0*>(ebx33(a1, 0x42f));
                fun_10001820(eax34, a1, 0x42f);
                fun_100010d0(a1, a1, 0x42f);
                ebx33();
                EnableWindow();
                goto 0xeb;
            } else {
                if (__return_address() == 0x7b) {
                    WinHelpA(a1, 0x1000b3c0, 10, 0x10009030);
                }
            }
        }
    } else {
        if (__return_address() == 83) {
            v35 = a2->fc;
            WinHelpA(v35, 0x1000b3c0, 12, 0x10009030);
        } else {
            if (__return_address() == 78) {
                if (reinterpret_cast<int1_t>(a2->f8 == 0xfffffdd9)) {
                    fun_100012c0(a1);
                    eax36 = reinterpret_cast<int32_t>(GetDlgItem(a1, 0x434, 0));
                    EnableWindow(eax36, a1, 0x434, 0);
                }
                goto v37;
            }
        }
    }
    goto v38;
}

signed char g1050505;

void fun_10001e80() {
    signed char tmp8_1;
    signed char al2;

    tmp8_1 = reinterpret_cast<signed char>(g1050505 + al2);
    g1050505 = tmp8_1;
}

struct s2* g10009ac4 = reinterpret_cast<struct s2*>(0);

struct s2* g10009ac0 = reinterpret_cast<struct s2*>(0);

int32_t IsDlgButtonChecked = 0xd550;

signed char g1000b049 = 0;

signed char g1000b048 = 0;

signed char g1000b04a = 0;

signed char g10009bb0 = 0;

struct s28 {
    struct s2* f0;
    signed char[4] pad8;
    struct s3* f8;
    signed char[4] pad16;
    struct s2* f10;
};

void fun_10003008(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16);

int32_t IsWindowEnabled = 0xd566;

void fun_10003058(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16);

void fun_100026d4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, struct s2* a14, int32_t a15, int32_t a16, int32_t a17, struct s2* a18, uint32_t a19, uint32_t a20, struct s21* a21) {
    signed char* edi22;
    signed char* edi23;
    signed char al24;
    int32_t* edi25;
    int32_t* edi26;
    int32_t eax27;
    struct s2* v28;
    struct s2* ebx29;
    struct s2* v30;
    struct s2* esi31;
    struct s2* v32;
    struct s2* edi33;
    struct s2** esp34;
    struct s2* v35;
    struct s2* ebp36;
    int1_t less_or_equal37;
    uint32_t esi38;
    struct s2* eax39;
    int32_t eax40;
    struct s2* eax41;
    int32_t ebp42;
    uint32_t esi43;
    uint32_t eax44;
    uint32_t eax45;
    uint32_t eax46;
    struct s2* ebx47;
    struct s2* eax48;
    int32_t eax49;
    struct s2* esi50;
    struct s2* eax51;
    int32_t eax52;
    int32_t eax53;
    int32_t eax54;
    int32_t eax55;
    signed char al56;
    int32_t ebp57;
    int32_t eax58;
    struct s2* eax59;
    struct s2* eax60;
    int32_t eax61;
    signed char al62;
    int32_t ebp63;
    int32_t eax64;
    struct s2* eax65;
    struct s2* eax66;
    int32_t eax67;
    signed char al68;
    int32_t ebp69;
    int32_t eax70;
    struct s2* eax71;
    struct s2* eax72;
    int1_t zf73;
    struct s2* eax74;
    struct s2* v75;
    struct s2* v76;
    struct s2* v77;
    struct s2* v78;
    struct s2* v79;
    int32_t v80;
    struct s2* eax81;
    void* esp82;
    int1_t zf83;
    struct s2* v84;
    struct s2* eax85;
    signed char al86;
    struct s2* eax87;
    struct s2* v88;
    int1_t less_or_equal89;
    struct s2* v90;
    struct s2* ebx91;
    struct s28* esi92;
    struct s3* eax93;
    struct s2* eax94;
    struct s2* edx95;
    struct s20* eax96;
    int32_t ecx97;
    struct s2* v98;
    struct s2* eax99;
    struct s2* edx100;
    struct s2* v101;
    struct s2* eax102;
    struct s2* v103;
    struct s2* v104;
    struct s2* eax105;
    struct s2* v106;
    struct s2* v107;
    struct s2* edi108;
    struct s2* v109;
    void* v110;
    int32_t eax111;
    void* v112;
    int32_t eax113;
    void* esp114;
    int32_t eax115;
    struct s2* ecx116;
    int32_t eax117;
    struct s2* ecx118;
    struct s2* eax119;
    struct s2* v120;
    int1_t less_or_equal121;
    int32_t esi122;
    int32_t edi123;
    int32_t eax124;
    int32_t eax125;
    int32_t eax126;
    int32_t eax127;
    int32_t eax128;
    int32_t eax129;
    int32_t eax130;
    int32_t eax131;
    int32_t eax132;
    int32_t eax133;
    struct s2* v134;
    struct s2* v135;
    struct s2* v136;
    struct s2* v137;
    int32_t eax138;
    int32_t eax139;
    struct s2* esi140;
    struct s2* eax141;
    struct s2* v142;
    struct s2* ebx143;
    struct s2* v144;
    struct s2* eax145;
    struct s2* v146;
    struct s2* eax147;
    void* esp148;
    struct s2* v149;
    struct s2* v150;
    struct s2* v151;
    struct s2* v152;
    struct s2* v153;
    int1_t less_or_equal154;
    struct s2** edi155;
    int32_t ebp156;
    struct s2* ecx157;
    struct s20* edx158;
    int32_t eax159;
    struct s2* eax160;
    int1_t less_or_equal161;
    struct s2* v162;
    struct s2* v163;
    struct s2* v164;
    void* eax165;
    struct s2** esp166;
    struct s2* eax167;
    struct s2* ecx168;
    struct s2* eax169;
    void* esp170;
    void* eax171;
    struct s2* ecx172;
    struct s2* v173;
    struct s2* v174;
    struct s2* v175;
    struct s2* v176;

    *edi22 = reinterpret_cast<signed char>(*edi23 + al24);
    *edi25 = *edi26 + eax27;
    v28 = ebx29;
    v30 = esi31;
    v32 = edi33;
    esp34 = reinterpret_cast<struct s2**>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 + 2 - 0x2e4 - 4 - 4 - 4 - 4);
    v35 = ebp36;
    if (a19 > 83) {
        if (a19 > 0x110) {
            if (a19 > 0x115) {
                if (a19 == 0x40d) {
                    less_or_equal37 = reinterpret_cast<int32_t>(g1000b040) <= reinterpret_cast<int32_t>(0);
                    esi38 = a20;
                    if (!less_or_equal37) {
                        eax39 = g1000b040;
                        do {
                            eax39 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(eax39) - 1);
                        } while (eax39);
                    }
                    eax40 = reinterpret_cast<int32_t>(GetDlgItem(a18, esi38, 0xb1, 0, 0xff));
                    PostMessageA(eax40, a18, esi38, 0xb1, 0, 0xff);
                }
            } else {
                if (a19 >= 0x114) {
                    eax41 = g10009ac4;
                    ebp42 = SendMessageA;
                    g10009ac0 = reinterpret_cast<struct s2*>(1);
                    ebp42(eax41, 0x468, a18, 0);
                } else {
                    if (a19 == 0x111) {
                        esi43 = a20;
                        eax44 = esi43 >> 16;
                        eax45 = *reinterpret_cast<uint16_t*>(&eax44);
                        if (!eax45) {
                            eax46 = *reinterpret_cast<uint16_t*>(&esi43);
                            if (eax46 == 0x42c) {
                                ebx47 = a18;
                                fun_10002100(ebx47);
                            } else {
                                if (eax46 == 0x42d) {
                                    ebx47 = a18;
                                    eax48 = reinterpret_cast<struct s2*>(SendDlgItemMessageA(ebx47, 0x420, 0x147, 0, 0));
                                    eax49 = reinterpret_cast<int32_t>(SendDlgItemMessageA(ebx47, 0x420, 0x150, eax48, 0, ebx47, 0x420, 0x147, 0, 0));
                                    fun_10002130(ebx47, eax49, "default", ebx47, 0x420, 0x150, eax48, 0, ebx47, 0x420, 0x147, 0, 0, v35, v32, v30);
                                    fun_100023b0(ebx47, ebx47, 0x420, 0x150, eax48, 0, ebx47, 0x420, 0x147, 0, 0);
                                } else {
                                    goto addr_10002cbc_19;
                                }
                            }
                        } else {
                            if (eax45 == 9) {
                                esi50 = reinterpret_cast<struct s2*>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&esi43)));
                                switch (reinterpret_cast<uint32_t>(esi50) + 0xfffffbe0) {
                                default:
                                    ebx47 = a18;
                                    break;
                                case 0:
                                    ebx47 = a18;
                                    g10009ac0 = reinterpret_cast<struct s2*>(1);
                                    eax51 = reinterpret_cast<struct s2*>(SendDlgItemMessageA(ebx47, esi50, 0x147, 0, 0));
                                    eax52 = reinterpret_cast<int32_t>(SendDlgItemMessageA(ebx47, esi50, 0x150, eax51, 0, ebx47, esi50, 0x147, 0, 0));
                                    fun_100022e0(ebx47, eax52, 0x1000b048, ebx47, esi50, 0x150, eax51, 0, ebx47, esi50, 0x147, 0, 0);
                                    SetDlgItemTextA(ebx47, 0x42b, 0x1000b048, ebx47, esi50, 0x150, eax51, 0, ebx47, esi50, 0x147, 0, 0);
                                    eax53 = fun_10002130(0, eax52, "default", ebx47, 0x42b, 0x1000b048, ebx47, esi50, 0x150, eax51, 0, ebx47, esi50, 0x147, 0, 0);
                                    g100099f4 = eax53;
                                    eax54 = reinterpret_cast<int32_t>(GetDlgItem(ebx47, 0x42d, eax53, ebx47, 0x42b, 0x1000b048, ebx47, esi50, 0x150, eax51, 0, ebx47, esi50, 0x147, 0, 0));
                                    EnableWindow(eax54, ebx47, 0x42d, eax53, ebx47, 0x42b, 0x1000b048, ebx47, esi50, 0x150, eax51, 0, ebx47, esi50, 0x147, 0, 0);
                                    break;
                                case 2:
                                    ebx47 = a18;
                                    g10009ac0 = reinterpret_cast<struct s2*>(1);
                                    eax55 = reinterpret_cast<int32_t>(SendDlgItemMessageA(ebx47, 0x422, 0x147, 0, 0));
                                    al56 = reinterpret_cast<signed char>(SendDlgItemMessageA(ebx47, 0x422, 0x150, eax55, 0, ebx47, 0x422, 0x147, 0, 0));
                                    ebp57 = IsDlgButtonChecked;
                                    g1000b049 = al56;
                                    eax58 = reinterpret_cast<int32_t>(ebp57(ebx47, 0x425, ebx47, 0x422, 0x150, eax55, 0, ebx47, 0x422, 0x147, 0, 0));
                                    if (eax58) {
                                        eax59 = reinterpret_cast<struct s2*>(static_cast<int32_t>(g1000b049));
                                        eax60 = fun_100054c0(eax59, ebx47, 0x425, ebx47, 0x422, 0x150, eax55, 0, ebx47, 0x422, 0x147, 0, 0);
                                        g1000b049 = *reinterpret_cast<signed char*>(&eax60);
                                        break;
                                    }
                                case 3:
                                    ebx47 = a18;
                                    g10009ac0 = reinterpret_cast<struct s2*>(1);
                                    eax61 = reinterpret_cast<int32_t>(SendDlgItemMessageA(ebx47, 0x423, 0x147, 0, 0));
                                    al62 = reinterpret_cast<signed char>(SendDlgItemMessageA(ebx47, 0x423, 0x150, eax61, 0, ebx47, 0x423, 0x147, 0, 0));
                                    ebp63 = IsDlgButtonChecked;
                                    g1000b048 = al62;
                                    eax64 = reinterpret_cast<int32_t>(ebp63(ebx47, 0x427, ebx47, 0x423, 0x150, eax61, 0, ebx47, 0x423, 0x147, 0, 0));
                                    if (eax64) {
                                        eax65 = reinterpret_cast<struct s2*>(static_cast<int32_t>(g1000b048));
                                        eax66 = fun_100054c0(eax65, ebx47, 0x427, ebx47, 0x423, 0x150, eax61, 0, ebx47, 0x423, 0x147, 0, 0);
                                        g1000b048 = *reinterpret_cast<signed char*>(&eax66);
                                        break;
                                    }
                                case 4:
                                    ebx47 = a18;
                                    g10009ac0 = reinterpret_cast<struct s2*>(1);
                                    eax67 = reinterpret_cast<int32_t>(SendDlgItemMessageA(ebx47, 0x424, 0x147, 0, 0));
                                    al68 = reinterpret_cast<signed char>(SendDlgItemMessageA(ebx47, 0x424, 0x150, eax67, 0, ebx47, 0x424, 0x147, 0, 0));
                                    ebp69 = IsDlgButtonChecked;
                                    g1000b04a = al68;
                                    eax70 = reinterpret_cast<int32_t>(ebp69(ebx47, 0x429, ebx47, 0x424, 0x150, eax67, 0, ebx47, 0x424, 0x147, 0, 0));
                                    if (eax70) {
                                        eax71 = reinterpret_cast<struct s2*>(static_cast<int32_t>(g1000b04a));
                                        eax72 = fun_100054c0(eax71, ebx47, 0x429, ebx47, 0x424, 0x150, eax67, 0, ebx47, 0x424, 0x147, 0, 0);
                                        g1000b04a = *reinterpret_cast<signed char*>(&eax72);
                                    }
                                }
                                SetDlgItemTextA(ebx47, 0x42b, 0x1000b048);
                            } else {
                                addr_10002cbc_19:
                                ebx47 = a18;
                            }
                        }
                        zf73 = g10009ac0 == 0;
                        if (!zf73) {
                            eax74 = g10009ac4;
                            SendMessageA(eax74, 0x468, ebx47, 0);
                        }
                    }
                }
            }
        } else {
            if (a19 == 0x110) {
                fun_10001230(a18);
                fun_100023b0(a18, v35, v32, v30, v28, 0xffffffff, v75, v76, v77, v78, v79);
                goto addr_10002fc2_37;
            } else {
                if (a19 == 0x7b) {
                    WinHelpA(a20, 0x1000b3c0, 10, 0x10009030);
                }
            }
        }
    } else {
        if (a19 == 83) {
            v80 = a21->fc;
            WinHelpA(v80, 0x1000b3c0, 12, 0x10009030);
        } else {
            if (a19 == 78) {
                switch (a21->f8 + 0xcd) {
                case 0:
                    WinHelpA(a18, 0x1000b3c0, 1, 0x13f1);
                    break;
                case 2:
                    eax81 = reinterpret_cast<struct s2*>(joyGetNumDevs());
                    esp82 = reinterpret_cast<void*>(esp34 - 1 + 1);
                    zf83 = g100099f4 == 0;
                    v84 = eax81;
                    if (zf83 && (eax85 = fun_10001a00("default", "joy_axis_map", 0x1000b048, 10, v35, v32, v30, v28), esp82 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp82) - 4 - 4 - 4 - 4 - 4 + 4 + 16), reinterpret_cast<int1_t>(eax85 == 0xffffffff))) {
                        al86 = g10009bb0;
                        g1000b048 = al86;
                    }
                    eax87 = fun_10001a00("default", "use_joystick", 0, 0, v35, v32, v30, v28);
                    v88 = eax87;
                    esp34 = reinterpret_cast<struct s2**>(reinterpret_cast<int32_t>(esp82) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
                    less_or_equal89 = reinterpret_cast<int32_t>(g1000b040) <= reinterpret_cast<int32_t>(0);
                    v90 = reinterpret_cast<struct s2*>(0);
                    if (less_or_equal89) {
                        ebx91 = a18;
                    } else {
                        esi92 = reinterpret_cast<struct s28*>(0x100099f8);
                        ebx91 = a18;
                        do {
                            eax93 = esi92->f8;
                            eax94 = fun_10001a00("default", eax93, 0, 0, v35, v32, v30, v28);
                            esp34 = esp34 - 1 - 1 - 1 - 1 - 1 + 1 + 4;
                            esi92->f10 = eax94;
                            edx95 = esi92->f0;
                            eax96 = reinterpret_cast<struct s20*>(edx95 + 0xffffffcd);
                            if (reinterpret_cast<uint32_t>(eax96) <= 46) {
                                ecx97 = 0;
                                *reinterpret_cast<signed char*>(&ecx97) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax96) + reinterpret_cast<int32_t>(fun_10003008));
                                switch (ecx97) {
                                case 0:
                                    v98 = esi92->f10;
                                    CheckDlgButton(ebx91, edx95, v98);
                                    esp34 = esp34 - 1 - 1 - 1 - 1 + 1;
                                    break;
                                case 1:
                                case 4:
                                case 5:
                                case 6:
                                    SendDlgItemMessageA(ebx91, edx95, 0x465, 0, 0x10020);
                                    eax99 = esi92->f10;
                                    edx100 = esi92->f0;
                                    SendDlgItemMessageA(ebx91, edx100, 0x467, 0, static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<int16_t*>(&eax99) + 1)), ebx91, edx95, 0x465, 0, 0x10020);
                                    esp34 = esp34 - 1 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 - 1 - 1 - 1 - 1 + 1;
                                    break;
                                case 2:
                                    v101 = edx95;
                                    SendDlgItemMessageA(ebx91, v101, 0x14b, 0, 0);
                                    eax102 = esi92->f0;
                                    v103 = eax102;
                                    v104 = ebx91;
                                    eax105 = reinterpret_cast<struct s2*>(SendDlgItemMessageA(v104));
                                    v106 = eax105;
                                    v107 = esi92->f0;
                                    edi108 = reinterpret_cast<struct s2*>(0);
                                    v109 = ebx91;
                                    SendDlgItemMessageA(v109, v107, 0x151, v106);
                                    esp34 = esp34 - 1 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 - 1 - 1 - 1 - 1 + 1;
                                    if (reinterpret_cast<int32_t>(v103) > reinterpret_cast<int32_t>(0)) {
                                        do {
                                            v110 = reinterpret_cast<void*>(esp34 + 10);
                                            eax111 = reinterpret_cast<int32_t>(joyGetPosEx(edi108, v110, v109, v107, 0x151, v106));
                                            esp34 = esp34 - 1 - 1 - 1 + 1;
                                            if (eax111 != 0xa7 && ((v112 = reinterpret_cast<void*>(esp34 + 88), eax113 = reinterpret_cast<int32_t>(joyGetDevCapsA(edi108, v112, 0x194, edi108, v110, v109, v107, 0x151, v106)), esp34 = esp34 - 1 - 1 - 1 - 1 + 1, !eax113) && ((esp114 = reinterpret_cast<void*>(esp34 - 1), eax115 = fun_10001f60(edi108, reinterpret_cast<int32_t>(esp114) + 0x1d4, esp34 + 23, 0x104, edi108, v112, 0x194, edi108, v110, v109, v107, 0x151, v106, 0xff, v104, v103, 0x143, 0, "-none-", 52, v101, 0x14b, 0, 0, v35, v32, v30, v28), esp34 = reinterpret_cast<struct s2**>(reinterpret_cast<int32_t>(esp114) - 4 - 4 - 4 - 4 + 4 + 16), !eax115) && (ecx116 = esi92->f0, eax117 = reinterpret_cast<int32_t>(SendDlgItemMessageA(ebx91, ecx116, 0x143)), ecx118 = esi92->f0, SendDlgItemMessageA(ebx91, ecx118, 0x151, eax117, edi108, ebx91, ecx116, 0x143), esp34 = esp34 - 1 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 - 1 - 1 - 1 - 1 + 1, esi92->f10 == edi108)))) {
                                                eax119 = esi92->f0;
                                                SendDlgItemMessageA(ebx91, eax119, 0x14e, eax117, 0, ebx91, ecx118, 0x151, eax117, edi108, ebx91, ecx116, 0x143);
                                                esp34 = esp34 - 1 - 1 - 1 - 1 - 1 - 1 + 1;
                                            }
                                            edi108 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(edi108) + 1);
                                        } while (reinterpret_cast<int32_t>(0xff) > reinterpret_cast<int32_t>(edi108));
                                        break;
                                    }
                                case 3:
                                    fun_100022e0(ebx91, -1, 0x1000b048, v35, v32, v30, v28, 0xffffffff, v88, v84, v90, 0, v120);
                                    SetDlgItemTextA(ebx91, 0x42b, 0x1000b048);
                                    esp34 = esp34 - 1 - 1 - 1 - 1 + 1 + 3 - 1 - 1 - 1 - 1 + 1;
                                case 7:
                                    goto 0x100029d1;
                                }
                            }
                            ++esi92;
                            v90 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(v90) + 1);
                            less_or_equal121 = reinterpret_cast<int32_t>(g1000b040) <= reinterpret_cast<int32_t>(v90);
                        } while (!less_or_equal121);
                    }
                    if (!v88) {
                        SendDlgItemMessageA(ebx91, 0x420, 0x14e, 0, 0);
                    }
                    if (0) {
                        esi122 = EnableWindow;
                        edi123 = GetDlgItem;
                    } else {
                        edi123 = GetDlgItem;
                        eax124 = reinterpret_cast<int32_t>(edi123(ebx91, 0x3fc, 0));
                        esi122 = EnableWindow;
                        esi122(eax124, ebx91, 0x3fc, 0);
                        eax125 = reinterpret_cast<int32_t>(edi123(ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0));
                        esi122(eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0);
                        eax126 = reinterpret_cast<int32_t>(edi123(ebx91, 0x41d, 0, eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0));
                        esi122(eax126, ebx91, 0x41d, 0, eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0);
                        eax127 = reinterpret_cast<int32_t>(edi123(ebx91, 0x428, 0, eax126, ebx91, 0x41d, 0, eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0));
                        esi122(eax127, ebx91, 0x428, 0, eax126, ebx91, 0x41d, 0, eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0);
                        eax128 = reinterpret_cast<int32_t>(edi123(ebx91, 0x426, 0, eax127, ebx91, 0x428, 0, eax126, ebx91, 0x41d, 0, eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0));
                        esi122(eax128, ebx91, 0x426, 0, eax127, ebx91, 0x428, 0, eax126, ebx91, 0x41d, 0, eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0);
                        eax129 = reinterpret_cast<int32_t>(edi123(ebx91, 0x42a, 0, eax128, ebx91, 0x426, 0, eax127, ebx91, 0x428, 0, eax126, ebx91, 0x41d, 0, eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0));
                        esi122(eax129, ebx91, 0x42a, 0, eax128, ebx91, 0x426, 0, eax127, ebx91, 0x428, 0, eax126, ebx91, 0x41d, 0, eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0);
                        eax130 = reinterpret_cast<int32_t>(edi123(ebx91, 0x3ff, 0, eax129, ebx91, 0x42a, 0, eax128, ebx91, 0x426, 0, eax127, ebx91, 0x428, 0, eax126, ebx91, 0x41d, 0, eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0));
                        esi122(eax130, ebx91, 0x3ff, 0, eax129, ebx91, 0x42a, 0, eax128, ebx91, 0x426, 0, eax127, ebx91, 0x428, 0, eax126, ebx91, 0x41d, 0, eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0);
                        eax131 = reinterpret_cast<int32_t>(edi123(ebx91, 0x410, 0, eax130, ebx91, 0x3ff, 0, eax129, ebx91, 0x42a, 0, eax128, ebx91, 0x426, 0, eax127, ebx91, 0x428, 0, eax126, ebx91, 0x41d, 0, eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0));
                        esi122(eax131, ebx91, 0x410, 0, eax130, ebx91, 0x3ff, 0, eax129, ebx91, 0x42a, 0, eax128, ebx91, 0x426, 0, eax127, ebx91, 0x428, 0, eax126, ebx91, 0x41d, 0, eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0);
                        eax132 = reinterpret_cast<int32_t>(edi123(ebx91, 0x40b, 0, eax131, ebx91, 0x410, 0, eax130, ebx91, 0x3ff, 0, eax129, ebx91, 0x42a, 0, eax128, ebx91, 0x426, 0, eax127, ebx91, 0x428, 0, eax126, ebx91, 0x41d, 0, eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0));
                        esi122(eax132, ebx91, 0x40b, 0, eax131, ebx91, 0x410, 0, eax130, ebx91, 0x3ff, 0, eax129, ebx91, 0x42a, 0, eax128, ebx91, 0x426, 0, eax127, ebx91, 0x428, 0, eax126, ebx91, 0x41d, 0, eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0);
                        eax133 = reinterpret_cast<int32_t>(edi123(ebx91, 0x415, 0, eax132, ebx91, 0x40b, 0, eax131, ebx91, 0x410, 0, eax130, ebx91, 0x3ff, 0, eax129, ebx91, 0x42a, 0, eax128, ebx91, 0x426, 0, eax127, ebx91, 0x428, 0, eax126, ebx91, 0x41d, 0, eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0));
                        esi122(eax133, ebx91, 0x415, 0, eax132, ebx91, 0x40b, 0, eax131, ebx91, 0x410, 0, eax130, ebx91, 0x3ff, 0, eax129, ebx91, 0x42a, 0, eax128, ebx91, 0x426, 0, eax127, ebx91, 0x428, 0, eax126, ebx91, 0x41d, 0, eax125, ebx91, 0x420, 0, eax124, ebx91, 0x3fc, 0);
                    }
                    eax138 = fun_10002130(0, -1, "default", v35, v32, v30, v28, 0xffffffff, v88, v84, v90, 0, v134, v135, v136, v137);
                    g100099f4 = eax138;
                    eax139 = reinterpret_cast<int32_t>(edi123(ebx91, 0x42d, eax138));
                    esi122(eax139, ebx91, 0x42d, eax138);
                    goto addr_10002fc2_37;
                case 3:
                    esi140 = reinterpret_cast<struct s2*>(0);
                    eax141 = g10009ac4;
                    g10009ac0 = reinterpret_cast<struct s2*>(0);
                    v142 = eax141;
                    SendMessageA(v142, 0x46b, 0, 0);
                    ebx143 = a14;
                    v144 = ebx143;
                    eax145 = reinterpret_cast<struct s2*>(GetDlgItem(v144, 0x42d, v142, 0x46b, 0, 0));
                    v146 = eax145;
                    eax147 = reinterpret_cast<struct s2*>(IsWindowEnabled(v146, v144, 0x42d, v142, 0x46b, 0, 0));
                    v30 = eax147;
                    esp148 = reinterpret_cast<void*>(esp34 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 - 1 + 1 - 1 - 1 + 1 - 1);
                    fun_10001b50("default", "joy_advanced", reinterpret_cast<int32_t>(esp148) + 40, 0, v146, v144, 0x42d, v142, 0x46b, 0, 0, v35, v32, v30, v28, 0xffffffff, v149, v150, v151, v152, v153);
                    esp34 = reinterpret_cast<struct s2**>(reinterpret_cast<int32_t>(esp148) - 4 - 4 - 4 - 4 + 4 + 16);
                    less_or_equal154 = reinterpret_cast<int32_t>(g1000b040) <= reinterpret_cast<int32_t>(0);
                    if (!less_or_equal154) {
                        edi155 = reinterpret_cast<struct s2**>(0x10009a08);
                        ebp156 = IsDlgButtonChecked;
                        while (1) {
                            ecx157 = *(edi155 - 4);
                            edx158 = reinterpret_cast<struct s20*>(ecx157 + 0xffffffcd);
                            if (reinterpret_cast<uint32_t>(edx158) > 46) 
                                goto addr_10002c07_73;
                            eax159 = 0;
                            *reinterpret_cast<signed char*>(&eax159) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx158) + reinterpret_cast<int32_t>(fun_10003058));
                            switch (eax159) {
                            case 0:
                                eax160 = reinterpret_cast<struct s2*>(ebp156(ebx143, ecx157, v146, v144, 0x42d, v142, 0x46b, 0, 0));
                                esp34 = esp34 - 1 - 1 - 1 + 1;
                                *edi155 = eax160;
                                addr_10002c07_73:
                            case 7:
                                edi155 = edi155 + 5;
                                esi140 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esi140) + 1);
                                less_or_equal161 = reinterpret_cast<int32_t>(g1000b040) <= reinterpret_cast<int32_t>(esi140);
                                if (!less_or_equal161) 
                                    continue; else 
                                    goto addr_10002c17_76;
                            case 1:
                            case 4:
                            case 5:
                            case 6:
                                v162 = reinterpret_cast<struct s2*>(0);
                                v163 = reinterpret_cast<struct s2*>(0);
                                v164 = reinterpret_cast<struct s2*>(0x468);
                                eax165 = reinterpret_cast<void*>(SendDlgItemMessageA(ebx143, ecx157, 0x468, 0, 0, v146, v144, 0x42d, v142, 0x46b, 0, 0));
                                *edi155 = reinterpret_cast<struct s2*>(reinterpret_cast<int32_t>(eax165) - 1);
                                esp166 = esp34 - 1 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 - 1;
                                break;
                            case 2:
                                v162 = reinterpret_cast<struct s2*>(0);
                                v163 = reinterpret_cast<struct s2*>(0);
                                v164 = reinterpret_cast<struct s2*>(0x147);
                                eax167 = reinterpret_cast<struct s2*>(SendDlgItemMessageA(ebx143, ecx157, 0x147, 0, 0, v146, v144, 0x42d, v142, 0x46b, 0, 0));
                                *edi155 = eax167;
                                ecx168 = *(edi155 - 4);
                                eax169 = reinterpret_cast<struct s2*>(SendDlgItemMessageA(ebx143, ecx168, 0x150, eax167, 0, ebx143, ecx157, 0x147, 0, 0, v146, v144, 0x42d, v142, 0x46b, 0, 0));
                                esp170 = reinterpret_cast<void*>(esp34 - 1 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 - 1 - 1 - 1 - 1 + 1 - 1);
                                *edi155 = eax169;
                                eax171 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax169) + 1);
                                fun_10001b50("default", "use_joystick", reinterpret_cast<int32_t>(esp170) + 24, 0, ebx143, ecx168, 0x150, eax167, 0, reinterpret_cast<uint32_t>(eax171) - (reinterpret_cast<uint32_t>(eax171) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax171) < reinterpret_cast<uint32_t>(eax171) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax171) < 1))) + 1, ecx157, 0x147, 0, 0, v146, v144, 0x42d, v142, 0x46b, 0, 0);
                                esp166 = reinterpret_cast<struct s2**>(reinterpret_cast<int32_t>(esp170) - 4 - 4 - 4 - 4 + 4 + 16 - 4 - 4 - 4);
                                break;
                            case 3:
                                ecx172 = *(edi155 - 2);
                                v162 = *(edi155 - 3);
                                v163 = reinterpret_cast<struct s2*>(0x1000b048);
                                esp166 = esp34 - 1 - 1 - 1;
                                v164 = ecx172;
                            }
                            fun_10001b50("default", v164, v163, v162, v146, v144, 0x42d, v142, 0x46b, 0, 0, v35, v32, v30, v28, 0xffffffff, v173, v174, v175, v176, 0xffffffff);
                            esp34 = esp166 - 1 - 1 + 1 + 4;
                            goto addr_10002c07_73;
                        }
                        addr_10002c17_76:
                        break;
                    }
                case 4:
                    SetWindowLongA(a18, 0, 0);
                    goto addr_10002fc2_37;
                case 5:
                    g10009ac4 = a21->f0;
                case 1:
                    goto 0x10002fc0;
                }
            }
        }
    }
    addr_10002fc2_37:
    goto a17;
}

struct s29 {
    signed char[1821378055] pad1821378055;
    void** f6c900607;
};

struct s30 {
    signed char[43] pad43;
    unsigned char f2b;
};

struct s31 {
    signed char[43] pad43;
    signed char f2b;
};

void fun_10003008(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16) {
    signed char* edi17;
    signed char* edi18;
    signed char al19;
    int32_t* edi20;
    int32_t* edi21;
    int32_t eax22;
    void* eax23;
    signed char al24;
    signed char* edi25;
    struct s29* eax26;
    void** edi27;
    void** eax28;
    signed char* eax29;
    struct s30* edi30;
    struct s31* edi31;
    signed char dh32;
    signed char dl33;

    *edi17 = reinterpret_cast<signed char>(*edi18 + al19);
    *edi20 = *edi21 + eax22;
    *reinterpret_cast<signed char*>(&eax23) = reinterpret_cast<signed char>(al24 + *edi25);
    eax26 = reinterpret_cast<struct s29*>(reinterpret_cast<int32_t>(eax23) + reinterpret_cast<int32_t>(*edi27));
    *reinterpret_cast<signed char*>(&eax26) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax26) + 7);
    eax28 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax26) + 0x6c900607);
    eax29 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax28) - reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(eax28)));
    edi30->f2b = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(edi31->f2b + dh32) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax28) < reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(eax28))));
    *eax29 = reinterpret_cast<signed char>(*eax29 + dl33);
}

void fun_10003058(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14, int32_t a15, int32_t a16) {
    signed char* edi17;
    signed char* edi18;
    signed char al19;
    int32_t* edi20;
    int32_t* edi21;
    int32_t eax22;
    int32_t eax23;
    signed char al24;
    signed char* edi25;
    int32_t eax26;
    int32_t* edi27;
    signed char* eax28;
    signed char dl29;

    *edi17 = reinterpret_cast<signed char>(*edi18 + al19);
    *edi20 = *edi21 + eax22;
    *reinterpret_cast<signed char*>(&eax23) = reinterpret_cast<signed char>(al24 + *edi25);
    eax26 = eax23 + *edi27;
    *reinterpret_cast<signed char*>(&eax26) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax26) + 7);
    eax28 = reinterpret_cast<signed char*>(eax26 + 0x74900607 - 0x2f391000);
    *eax28 = reinterpret_cast<signed char>(*eax28 + dl29);
}

int32_t g1000b05c = 0;

int32_t CallWindowProcA = 0xd578;

struct s2* g10009c40 = reinterpret_cast<struct s2*>(0);

int32_t fun_100030a0(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t eax5;
    struct s2* ecx6;
    struct s2* ecx7;
    struct s2* ecx8;

    switch (a2 - 0x201) {
    default:
        eax5 = g1000b05c;
        CallWindowProcA();
        goto eax5;
    case 0:
        GetWindowLongA(a1, 0xf4, 0);
        ecx6 = g10009c40;
        PostMessageA();
        goto ecx6;
    case 3:
        GetWindowLongA(a1, 0xf4, 1);
        ecx7 = g10009c40;
        PostMessageA();
        goto ecx7;
    case 4:
        return 1;
    case 6:
        GetWindowLongA(a1, 0xf4, 2);
        ecx8 = g10009c40;
        PostMessageA();
        goto ecx8;
    }
}

struct s2* g1000b054 = reinterpret_cast<struct s2*>(0);

/* (image base) */
int32_t image_base_ = 0x10009bb0;

int32_t g10009cac = 0;

struct s2* g1000b058 = reinterpret_cast<struct s2*>(0);

int32_t g10009cc0 = 1;

int32_t GetDlgCtrlID = 0xd58a;

int32_t fun_10003170(struct s2* a1, struct s2* a2, struct s2* a3, struct s2* a4, struct s2* a5, struct s2* a6, struct s2* a7, struct s2* a8, struct s2* a9, struct s2* a10, struct s2* a11) {
    struct s2* v12;
    struct s2* v13;
    struct s2* ebx14;
    struct s2* v15;
    struct s2* esi16;
    struct s2* v17;
    struct s2* edi18;
    struct s2* v19;
    struct s2* ebp20;
    struct s2* v21;
    struct s2* ebp22;
    int1_t less_or_equal23;
    struct s2* esi24;
    struct s22* edi25;
    struct s2* ebx26;
    struct s2* ecx27;
    int1_t less28;
    int32_t eax29;
    struct s2* ecx30;
    int32_t eax31;
    int32_t v32;
    int1_t zf33;
    struct s2* eax34;
    int32_t eax35;
    int16_t ax36;
    struct s2* eax37;
    struct s2* eax38;
    struct s2* v39;
    struct s2* v40;
    struct s2* v41;
    int32_t eax42;
    int32_t eax43;
    struct s3* eax44;
    struct s2* eax45;
    struct s2* v46;
    struct s2* eax47;
    uint32_t edx48;
    struct s2* ecx49;
    struct s2* v50;
    int1_t less51;
    struct s2* eax52;
    int32_t ebp53;
    int32_t v54;
    int1_t less_or_equal55;
    struct s3* eax56;
    struct s2* eax57;
    struct s2* v58;
    uint32_t edx59;
    struct s2* v60;
    struct s2* ecx61;
    struct s2* v62;
    int1_t less63;
    struct s2* eax64;
    struct s2* ebx65;
    int1_t less_or_equal66;
    struct s2* ebp67;
    struct s22* edi68;
    struct s2* esi69;
    int32_t eax70;
    struct s2* eax71;
    struct s2* ecx72;
    struct s2* v73;
    struct s2* v74;
    struct s2* v75;
    int1_t less76;

    v12 = reinterpret_cast<struct s2*>(__return_address());
    v13 = ebx14;
    v15 = esi16;
    v17 = edi18;
    v19 = ebp20;
    if (reinterpret_cast<uint32_t>(a2) > 83) {
        if (reinterpret_cast<uint32_t>(a2) > 0x110) {
            if (reinterpret_cast<uint32_t>(a2) > 0x115) {
                if (a2 == 0x40d) {
                    v21 = a3;
                    if (a3 == 0x3f9 || a3 == 0x3fa) {
                        return 0;
                    } else {
                        ebp22 = reinterpret_cast<struct s2*>(0);
                        less_or_equal23 = reinterpret_cast<int32_t>(g1000b054) <= reinterpret_cast<int32_t>(0);
                        if (less_or_equal23) {
                            esi24 = a1;
                        } else {
                            edi25 = reinterpret_cast<struct s22*>(0x10009c48);
                            ebx26 = a4;
                            esi24 = a1;
                            while (1) {
                                ecx27 = edi25->f0;
                                switch (reinterpret_cast<uint32_t>(ecx27) + 0xfffffc09) {
                                    addr_1000360f_12:
                                default:
                                    ++edi25;
                                    ebp22 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(ebp22) + 1);
                                    less28 = reinterpret_cast<int32_t>(ebp22) < reinterpret_cast<int32_t>(g1000b054);
                                    if (less28) 
                                        break; else 
                                        goto addr_1000361f_13;
                                case 0:
                                case 1:
                                case 4:
                                    if (v21 != ecx27) {
                                        if (edi25->f10 == ebx26) {
                                            edi25->f10 = reinterpret_cast<struct s2*>(0xffffffff);
                                            eax29 = image_base_;
                                            ecx30 = edi25->f0;
                                            SetDlgItemTextA(esi24, ecx30, eax29);
                                        }
                                    } else {
                                        if (reinterpret_cast<int32_t>(ebx26) < reinterpret_cast<int32_t>(0) || reinterpret_cast<int32_t>(ebx26) > reinterpret_cast<int32_t>(2)) {
                                            eax31 = image_base_;
                                            SetDlgItemTextA(esi24, ecx27, eax31);
                                            edi25->f10 = ebx26;
                                        } else {
                                            v32 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx26) * 4 + 0x10009cb0);
                                            SetDlgItemTextA(esi24, ecx27, v32);
                                            edi25->f10 = ebx26;
                                        }
                                    }
                                    zf33 = g10009cac == 0;
                                    if (zf33) {
                                        eax34 = g1000b058;
                                        g10009cc0 = 1;
                                        SendMessageA(eax34, 0x468, esi24, 0);
                                        goto addr_1000360f_12;
                                    }
                                }
                            }
                            addr_1000361f_13:
                        }
                        eax35 = reinterpret_cast<int32_t>(GetDlgItem(esi24, v21, 0xb1, 0, 0xff));
                        PostMessageA(eax35, esi24, v21, 0xb1, 0, 0xff);
                    }
                }
            } else {
                if (reinterpret_cast<uint32_t>(a2) >= 0x114) {
                    ax36 = reinterpret_cast<int16_t>(GetDlgCtrlID(a4));
                    if (ax36 == 0x3fa) {
                        eax37 = g1000b058;
                        g10009cc0 = 1;
                        SendMessageA(eax37, 0x468, v12, 0, a4);
                    }
                } else {
                    if (a2 == 0x111) {
                        if (*reinterpret_cast<int16_t*>(&a3) == 0x3f9 || *reinterpret_cast<int16_t*>(&a3) == 0x3fa) {
                            eax38 = g1000b058;
                            g10009cc0 = 1;
                            SendMessageA(eax38, 0x468, a1, 0);
                        }
                    }
                }
            }
        } else {
            if (a2 == 0x110) {
                g10009cac = 1;
                esi24 = a1;
                fun_10001230(esi24);
                v39 = reinterpret_cast<struct s2*>(0xfc);
                v40 = reinterpret_cast<struct s2*>(0x3fb);
                v41 = esi24;
                eax42 = reinterpret_cast<int32_t>(GetDlgItem(v41));
                ebp22 = reinterpret_cast<struct s2*>(0);
                ebx26 = reinterpret_cast<struct s2*>(0x10009c48);
                eax43 = reinterpret_cast<int32_t>(GetWindowLongA(eax42, v41));
                edi25 = SendDlgItemMessageA;
                g1000b05c = eax43;
                g1000b054 = reinterpret_cast<struct s2*>(5);
                g10009c40 = esi24;
                do {
                    eax44 = ebx26->f8;
                    eax45 = fun_10001a00("default", eax44, 0, 0, v41, v40, v39, v19);
                    ebx26->f10 = eax45;
                    v46 = ebx26->f0;
                    eax47 = reinterpret_cast<struct s2*>(GetDlgItem(esi24, v46, v41));
                    if (eax47 && (ecx27 = ebx26->f0, edx48 = reinterpret_cast<uint32_t>(ecx27) + 0xfffffc09, edx48 <= 4)) {
                        switch (edx48) {
                        case 0:
                        case 1:
                        case 4:
                            v39 = reinterpret_cast<struct s2*>(fun_100030a0);
                            v40 = reinterpret_cast<struct s2*>(0xfc);
                            v41 = eax47;
                            SetWindowLongA(v41);
                            break;
                        case 2:
                            v39 = ebx26->f10;
                            v40 = ecx27;
                            v41 = esi24;
                            CheckDlgButton(v41);
                            break;
                        case 3:
                            v39 = reinterpret_cast<struct s2*>(0xf0000);
                            v40 = reinterpret_cast<struct s2*>(1);
                            v41 = reinterpret_cast<struct s2*>(0x406);
                            edi25(esi24, ecx27, 0x406);
                            ecx49 = ebx26->f0;
                            v50 = ebx26->f10;
                            edi25(esi24, ecx49, 0x405, 1, v50, esi24, ecx27, 0x406);
                        case 7:
                        case 8:
                            goto 0x1000360f;
                        case 5:
                        case 6:
                        case 9:
                            goto 0x10003595;
                        }
                    }
                    ++ebx26;
                    ebp22 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(ebp22) + 1);
                    less51 = reinterpret_cast<int32_t>(ebp22) < reinterpret_cast<int32_t>(g1000b054);
                } while (less51);
                eax52 = g1000b054;
                fun_10004e20(esi24, 0x10009c48, eax52, v41);
                g10009cc0 = 0;
                SendMessageA();
                g10009cac = 0;
                goto v40;
            } else {
                if (a2 == 0x7b) {
                    WinHelpA(a3, 0x1000b3c0, 10, 0x10009030);
                }
            }
        }
    } else {
        if (a2 == 83) {
            ebp53 = WinHelpA;
            v54 = a4->fc;
            ebp53(v54, 0x1000b3c0, 12, 0x10009030);
        } else {
            if (a2 == 78 && (ebx26 = a4, eax47 = reinterpret_cast<struct s2*>(&ebx26->f8->fcb), reinterpret_cast<uint32_t>(eax47) <= 3)) {
                switch (eax47) {
                case 0:
                    g10009cac = 1;
                    ebp22 = reinterpret_cast<struct s2*>(0);
                    less_or_equal55 = reinterpret_cast<int32_t>(g1000b054) <= reinterpret_cast<int32_t>(0);
                    if (less_or_equal55) {
                        esi24 = a1;
                    } else {
                        ebx26 = reinterpret_cast<struct s2*>(0x10009c48);
                        edi25 = SendDlgItemMessageA;
                        esi24 = a1;
                        do {
                            eax56 = ebx26->f8;
                            eax57 = fun_10001a00("default", eax56, 0, 0, v19, v17, v15, v13);
                            ebx26->f10 = eax57;
                            v58 = ebx26->f0;
                            eax47 = reinterpret_cast<struct s2*>(GetDlgItem(esi24, v58));
                            if (eax47 && (ecx27 = ebx26->f0, edx59 = reinterpret_cast<uint32_t>(ecx27) + 0xfffffc09, edx59 <= 4)) {
                                switch (edx59) {
                                case 0:
                                case 1:
                                case 4:
                                    SetWindowLongA(eax47, 0xfc, fun_100030a0);
                                    break;
                                case 2:
                                    v60 = ebx26->f10;
                                    CheckDlgButton(esi24, ecx27, v60);
                                    break;
                                case 3:
                                    edi25(esi24, ecx27, 0x406, 1, 0xf0000);
                                    ecx61 = ebx26->f0;
                                    v62 = ebx26->f10;
                                    edi25(esi24, ecx61, 0x405, 1, v62, esi24, ecx27, 0x406, 1, 0xf0000);
                                case 12:
                                case 13:
                                    goto 0x1000360f;
                                case 8:
                                    goto 0x10003457;
                                case 7:
                                    goto 0x10003449;
                                case 5:
                                case 6:
                                case 9:
                                    goto 0x10003439;
                                case 10:
                                case 11:
                                case 14:
                                    goto 0x10003595;
                                }
                            }
                            ++ebx26;
                            ebp22 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(ebp22) + 1);
                            less63 = reinterpret_cast<int32_t>(ebp22) < reinterpret_cast<int32_t>(g1000b054);
                        } while (less63);
                    }
                    eax64 = g1000b054;
                    fun_10004e20(esi24, 0x10009c48, eax64, v19);
                    g10009cc0 = 0;
                    g10009cac = 0;
                    return 1;
                case 1:
                    ebx65 = reinterpret_cast<struct s2*>(0);
                    less_or_equal66 = reinterpret_cast<int32_t>(g1000b054) <= reinterpret_cast<int32_t>(0);
                    if (!less_or_equal66) {
                        ebp67 = reinterpret_cast<struct s2*>(0x10009c58);
                        edi68 = SendDlgItemMessageA;
                        esi69 = a1;
                        do {
                            eax70 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp67) + 0xfffffff0);
                            if (eax70 == 0x3f9) {
                                eax71 = reinterpret_cast<struct s2*>(IsDlgButtonChecked(esi69, 0x3f9));
                            } else {
                                if (eax70 == 0x3fa) {
                                    eax71 = reinterpret_cast<struct s2*>(edi68(esi69, eax70, 0x400, 0, 0));
                                } else {
                                    continue;
                                }
                            }
                            ebp67->f0 = eax71;
                            ecx72 = *reinterpret_cast<struct s2**>(reinterpret_cast<uint32_t>(ebp67) + 0xfffffff8);
                            v73 = *reinterpret_cast<struct s2**>(reinterpret_cast<uint32_t>(ebp67) + 0xfffffff4);
                            ebx65 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(ebx65) + 1);
                            v74 = ebp67;
                            ++ebp67;
                            fun_10001b50("default", ecx72, v74, v73, v19, v17, v15, v13, v75, v12, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
                            less76 = reinterpret_cast<int32_t>(ebx65) < reinterpret_cast<int32_t>(g1000b054);
                        } while (less76);
                        break;
                    }
                case 2:
                    SetWindowLongA();
                    goto v15;
                case 3:
                    g1000b058 = ebx26->f0;
                case 16:
                case 17:
                    goto 0x1000360f;
                case 11:
                    goto 0x10003449;
                case 9:
                case 10:
                case 13:
                    goto 0x10003439;
                case 6:
                    goto 0x10003264;
                case 14:
                case 15:
                case 18:
                    goto 0x10003595;
                case 4:
                case 5:
                case 8:
                    goto 0x10003254;
                case 7:
                    goto 0x10003272;
                case 12:
                    goto 0x10003457;
                }
            }
        }
    }
    goto v12;
}

void fun_10003a94();

int32_t g1000b060 = 0;

struct s2* g10009d38 = reinterpret_cast<struct s2*>(0);

int32_t g10009d34 = 0;

struct s32 {
    int32_t f0;
    struct s2* f4;
    struct s2* f8;
    signed char[4] pad16;
    struct s2* f10;
};

struct s2* g10009cf0 = reinterpret_cast<struct s2*>(0);

int32_t fun_100036a0(struct s2* a1, struct s2* a2, struct s2* a3, struct s2* a4, struct s2* a5) {
    struct s2* v6;
    uint32_t eax7;
    struct s2* v8;
    struct s2* ebx9;
    struct s2* v10;
    struct s2* esi11;
    struct s2* v12;
    struct s2* edi13;
    struct s2** esp14;
    struct s2* v15;
    struct s2* ebp16;
    int32_t ecx17;
    int32_t esi18;
    int1_t less_or_equal19;
    struct s2** ebx20;
    struct s22* ebp21;
    struct s2* edi22;
    struct s3* eax23;
    struct s2* eax24;
    int32_t eax25;
    int32_t v26;
    int1_t less27;
    int32_t ecx28;
    struct s2* v29;
    int32_t ebx30;
    struct s2* eax31;
    struct s2* v32;
    int1_t less_or_equal33;
    struct s32* esi34;
    struct s22* ebp35;
    int32_t edi36;
    int32_t v37;
    int32_t eax38;
    struct s2* eax39;
    struct s2* edx40;
    struct s2* v41;
    struct s2* v42;
    struct s2* v43;
    struct s2* v44;
    int1_t less45;
    int32_t v46;
    int32_t v47;
    struct s2* edi48;
    int32_t esi49;
    struct s2** ebx50;
    void* esp51;
    struct s22* ebp52;
    struct s3* eax53;
    struct s2* eax54;
    void* esp55;
    struct s2* v56;
    int32_t eax57;
    int32_t v58;
    int32_t v59;
    struct s2* v60;
    int32_t ecx61;
    struct s2* v62;
    int32_t v63;
    struct s2* v64;
    void* esp65;
    void* v66;
    int32_t* esp67;
    int32_t v68;
    int32_t ecx69;
    void* esp70;
    int32_t ecx71;
    void* esp72;
    int1_t less73;
    uint32_t edi74;
    int32_t eax75;
    void* esp76;
    int32_t esi77;
    uint16_t ax78;
    struct s2* edi79;
    int1_t zf80;
    struct s2* eax81;

    v6 = reinterpret_cast<struct s2*>(__return_address());
    eax7 = reinterpret_cast<uint32_t>(a2) - 78;
    v8 = ebx9;
    v10 = esi11;
    v12 = edi13;
    esp14 = reinterpret_cast<struct s2**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 12 - 4 - 4 - 4 - 4);
    v15 = ebp16;
    if (eax7 <= 0xc6) {
        ecx17 = 0;
        *reinterpret_cast<signed char*>(&ecx17) = *reinterpret_cast<signed char*>(eax7 + reinterpret_cast<int32_t>(fun_10003a94));
        switch (ecx17) {
        case 0:
            switch (&a4->f8->fcb) {
            case 0:
                esi18 = 0;
                less_or_equal19 = g1000b060 <= 0;
                if (!less_or_equal19) {
                    ebx20 = reinterpret_cast<struct s2**>(0x10009d08);
                    ebp21 = SendDlgItemMessageA;
                    edi22 = a1;
                    while (1) {
                        eax23 = *reinterpret_cast<struct s3**>(ebx20 - 2);
                        eax24 = fun_10001a00("default", eax23, 0, 0, v15, v12, v10, v8);
                        *ebx20 = eax24;
                        if (reinterpret_cast<int1_t>(eax24 == 0xffffffff)) {
                            *ebx20 = *(ebx20 - 1);
                        }
                        eax25 = *reinterpret_cast<int32_t*>(ebx20 - 4);
                        if (eax25 == 0x40f) 
                            goto addr_1000373a_10;
                        if (eax25 == 0x414) {
                            v26 = 0x200000;
                        } else {
                            if (eax25 != 0x419) {
                                addr_10003762_14:
                                ebx20 = ebx20 + 5;
                                ++esi18;
                                less27 = esi18 < g1000b060;
                                if (less27) 
                                    continue; else 
                                    break;
                            } else {
                                addr_1000373a_10:
                                v26 = 0xf0000;
                            }
                        }
                        ebp21(edi22, eax25, 0x406, 1, v26);
                        ecx28 = *reinterpret_cast<int32_t*>(ebx20 - 4);
                        v29 = *ebx20;
                        ebp21(edi22, ecx28, 0x405, 1, v29, edi22, eax25, 0x406, 1, v26);
                        goto addr_10003762_14;
                    }
                    break;
                }
            case 1:
                ebx30 = 0;
                eax31 = g10009d38;
                g10009d34 = 0;
                v32 = eax31;
                SendMessageA(v32, 0x46b, 0, 0);
                less_or_equal33 = g1000b060 <= 0;
                if (!less_or_equal33) {
                    esi34 = reinterpret_cast<struct s32*>(0x10009cf8);
                    ebp35 = SendDlgItemMessageA;
                    edi36 = v37;
                    do {
                        eax38 = esi34->f0;
                        if (eax38 == 0x40f || (eax38 == 0x414 || eax38 == 0x419)) {
                            eax39 = reinterpret_cast<struct s2*>(ebp35(edi36, eax38, 0x400, 0, 0, v32, 0x46b, 0, 0));
                            esi34->f10 = eax39;
                        }
                        edx40 = esi34->f8;
                        v41 = esi34->f4;
                        v42 = reinterpret_cast<struct s2*>(&esi34->f10);
                        ++esi34;
                        ++ebx30;
                        fun_10001b50("default", edx40, v42, v41, v32, 0x46b, 0, 0, v15, v12, v10, v8, 0, v43, v44, v6, a1, a2, a3, a4, a5);
                        less45 = ebx30 < g1000b060;
                    } while (less45);
                    break;
                }
            case 2:
                SetWindowLongA();
                goto v46;
            case 3:
                g10009d38 = a4->f0;
            }
            break;
        case 1:
            v47 = a4->fc;
            WinHelpA(v47, 0x1000b3c0, 12, 0x10009030);
            break;
        case 2:
            WinHelpA(a3, 0x1000b3c0, 10, 0x10009030);
            break;
        case 3:
            edi48 = a1;
            esi49 = 0;
            ebx50 = reinterpret_cast<struct s2**>(0x10009d08);
            fun_10001230(edi48);
            esp51 = reinterpret_cast<void*>(esp14 - 1 - 1 + 1 + 1);
            ebp52 = SendDlgItemMessageA;
            g10009cf0 = edi48;
            g1000b060 = 3;
            do {
                eax53 = *reinterpret_cast<struct s3**>(ebx50 - 2);
                eax54 = fun_10001a00("default", eax53, 0, 0, v15, v12, v10, v8);
                esp55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp51) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
                *ebx50 = eax54;
                if (reinterpret_cast<int1_t>(eax54 == 0xffffffff)) {
                    *ebx50 = *(ebx50 - 1);
                }
                v56 = *ebx50;
                wsprintfA(reinterpret_cast<int32_t>(esp55) + 16, "%d", v56);
                esp51 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp55) - 4 - 4 - 4 - 4 + 4 + 12);
                eax57 = *reinterpret_cast<int32_t*>(ebx50 - 4);
                if (eax57 == 0x40f) {
                    v58 = 0xf0000;
                    v59 = eax57;
                    v60 = edi48;
                    ebp52(v60, v59, 0x406, 1, 0xf0000);
                    ecx61 = *reinterpret_cast<int32_t*>(ebx50 - 4);
                    v62 = *ebx50;
                    v63 = ecx61;
                    v64 = edi48;
                    ebp52(v64, v63, 0x405, 1, v62, v60, v59, 0x406, 1, 0xf0000);
                    esp65 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp51) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
                    v66 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp65) + 16);
                    esp67 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp65) - 4 - 4);
                    v68 = 0x421;
                } else {
                    if (eax57 == 0x414) {
                        v58 = 0x200001;
                        v59 = eax57;
                        v60 = edi48;
                        ebp52(v60, v59, 0x406, 1, 0x200001);
                        ecx69 = *reinterpret_cast<int32_t*>(ebx50 - 4);
                        v62 = *ebx50;
                        v63 = ecx69;
                        v64 = edi48;
                        ebp52(v64, v63, 0x405, 1, v62, v60, v59, 0x406, 1, 0x200001);
                        esp70 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp51) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
                        v66 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp70) + 16);
                        esp67 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp70) - 4 - 4);
                        v68 = 0x41f;
                    } else {
                        if (eax57 == 0x419) {
                            v58 = 0xf0000;
                            v59 = eax57;
                            v60 = edi48;
                            ebp52(v60, v59, 0x406, 1, 0xf0000);
                            ecx71 = *reinterpret_cast<int32_t*>(ebx50 - 4);
                            v62 = *ebx50;
                            v63 = ecx71;
                            v64 = edi48;
                            ebp52(v64, v63, 0x405, 1, v62, v60, v59, 0x406, 1, 0xf0000);
                            esp72 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp51) - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
                            v66 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp72) + 16);
                            esp67 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp72) - 4 - 4);
                            v68 = 0x41e;
                        } else {
                            continue;
                        }
                    }
                }
                SetDlgItemTextA(edi48, v68, v66, v64, v63, 0x405, 1, v62, v60, v59, 0x406, 1, v58);
                esp51 = reinterpret_cast<void*>(esp67 - 1 - 1 + 1);
                ebx50 = ebx50 + 5;
                ++esi49;
                less73 = esi49 < g1000b060;
            } while (less73);
            return 1;
        case 4:
            edi74 = reinterpret_cast<uint32_t>(a3) >> 16;
            eax75 = reinterpret_cast<int32_t>(GetDlgCtrlID(a4));
            esp76 = reinterpret_cast<void*>(esp14 - 1 - 1 + 1);
            if (*reinterpret_cast<uint16_t*>(&edi74)) {
                esi77 = SendMessageA;
            } else {
                esi77 = SendMessageA;
                ax78 = reinterpret_cast<uint16_t>(esi77(a4, 0x400, 0, 0, a4));
                esp76 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp76) - 4 - 4 - 4 - 4 - 4 + 4);
                *reinterpret_cast<uint16_t*>(&edi74) = ax78;
            }
            wsprintfA(reinterpret_cast<int32_t>(esp76) + 16, "%d", static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&edi74)), a4);
            esp14 = reinterpret_cast<struct s2**>(reinterpret_cast<int32_t>(esp76) - 4 - 4 - 4 - 4 + 4 + 12);
            if (eax75 == 0x40f) {
                edi79 = v6;
                g10009d34 = 1;
                SetDlgItemTextA(edi79, 0x421, esp14 + 4, a4);
            } else {
                if (eax75 == 0x414) {
                    edi79 = v6;
                    g10009d34 = 1;
                    SetDlgItemTextA(edi79, 0x41f, esp14 + 4, a4);
                } else {
                    if (eax75 == 0x419) {
                        edi79 = v6;
                        g10009d34 = 1;
                        SetDlgItemTextA(edi79, 0x41e, esp14 + 4, a4);
                    } else {
                        edi79 = v6;
                    }
                }
            }
            zf80 = g10009d34 == 0;
            if (!zf80) {
                eax81 = g10009d38;
                esi77(eax81, 0x468, edi79, 0, a4);
            }
        case 5:
            goto 0x10003a07;
        }
    }
    return 0;
}

void fun_10003a94() {
    signed char tmp8_1;
    signed char al2;
    signed char* eax3;
    int32_t eax4;
    signed char dl5;

    tmp8_1 = reinterpret_cast<signed char>(g1050505 + al2);
    g1050505 = tmp8_1;
    eax3 = reinterpret_cast<signed char*>(eax4 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x2050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5050505 + 0x5030505 - 0x1b6ffbfb);
    *eax3 = reinterpret_cast<signed char>(*eax3 + dl5);
}

int32_t g1000b070 = 0;

signed char g10009e8c = 0;

struct s2* g10009e88 = reinterpret_cast<struct s2*>(0);

struct s2* g10009db8 = reinterpret_cast<struct s2*>(0);

int32_t fun_10003b70(struct s2* a1, struct s2* a2, struct s2* a3, uint32_t a4) {
    int32_t eax5;
    int32_t ebp6;
    uint32_t eax7;
    struct s2* ebp8;
    int32_t edi9;
    struct s2* esi10;
    struct s2* ebx11;
    int1_t zf12;
    uint32_t ebp13;
    struct s2* eax14;
    int32_t eax15;
    struct s2* eax16;

    if (reinterpret_cast<uint32_t>(a2) > 0x112) {
        if (a2 == 0x202) {
            eax5 = g1000b070;
            CallWindowProcA();
            ebp6 = PostMessageA;
            ebp6();
            goto eax5;
        }
    } else {
        if (a2 == 0x112) {
            g10009e8c = 0;
            return 0;
        }
        eax7 = reinterpret_cast<uint32_t>(a2) - 0x100;
        if (eax7 > 5) 
            goto addr_10003ba4_7;
        switch (eax7) {
        case 0:
            if (!reinterpret_cast<int1_t>(a3 == 16)) {
                g10009e88 = reinterpret_cast<struct s2*>(1);
                g10009e8c = 0;
                fun_10004110(a3, a4, ebp8, edi9, esi10, ebx11, __return_address(), a1, a2, a3);
                GetWindowLongA();
                PostMessageA();
                goto 0xf4;
            } else {
                g10009e8c = 1;
                return 0;
            }
        case 1:
        case 5:
            if (a3 == 16) {
                zf12 = g10009e8c == 0;
                if (zf12) {
                    addr_10003c7d_14:
                    ebp13 = a4;
                } else {
                    g10009e88 = reinterpret_cast<struct s2*>(1);
                    ebp13 = a4;
                    eax14 = fun_10004110(a3, ebp13, ebp8, edi9, esi10, ebx11, __return_address(), a1, a2, a3);
                    eax15 = reinterpret_cast<int32_t>(GetWindowLongA(a1, 0xf4, eax14));
                    eax16 = g10009db8;
                    PostMessageA(eax16, 0x40d, eax15, a1, 0xf4, eax14);
                }
                CallWindowProcA();
                goto ebp13;
            } else {
                g10009e8c = 0;
                goto addr_10003c7d_14;
            }
            addr_10003ba4_7:
        case 2:
        case 3:
            CallWindowProcA();
            goto a4;
        case 4:
            g10009e88 = reinterpret_cast<struct s2*>(1);
            if (a3 != 16) {
                g10009e8c = 0;
            }
            fun_10004110(a3, a4, ebp8, edi9, esi10, ebx11, __return_address(), a1, a2, a3);
            GetWindowLongA();
            PostMessageA();
            goto 0xf4;
        }
    }
}

struct s2* g1000b068 = reinterpret_cast<struct s2*>(0);

struct s2* g1000b06c = reinterpret_cast<struct s2*>(0);

struct s33 {
    int32_t f0;
    signed char[12] pad16;
    struct s2* f10;
};

int32_t MapVirtualKeyA = 0xd59a;

int32_t fun_10003d50(struct s2* a1, uint32_t a2, int32_t a3, struct s5* a4) {
    struct s2* v5;
    struct s2* ebx6;
    struct s2* v7;
    struct s2* esi8;
    struct s2* v9;
    struct s2* edi10;
    struct s2** esp11;
    struct s2* v12;
    struct s2* ebp13;
    int1_t zf14;
    struct s2* esi15;
    struct s2* eax16;
    int32_t ebx17;
    void* esp18;
    int32_t eax19;
    void* esp20;
    struct s2* edi21;
    int1_t less_or_equal22;
    struct s33* ebp23;
    int32_t eax24;
    int1_t less25;
    int32_t eax26;
    struct s2* esi27;
    struct s2* ebx28;
    struct s2* v29;
    struct s2* eax30;
    struct s2* v31;
    int32_t eax32;
    int1_t less_or_equal33;
    struct s2** edi34;
    struct s3* eax35;
    struct s2* eax36;
    struct s2* eax37;
    struct s2* v38;
    uint32_t v39;
    struct s2* eax40;
    int32_t v41;
    int32_t eax42;
    uint32_t eax43;
    int1_t less44;
    struct s2* eax45;
    int32_t v46;
    int32_t v47;
    struct s2* ebx48;
    int1_t less_or_equal49;
    struct s2* esi50;
    struct s2** edi51;
    struct s3* eax52;
    struct s2* eax53;
    struct s2* eax54;
    struct s2* v55;
    struct s2* v56;
    struct s2* v57;
    struct s2* eax58;
    int32_t v59;
    int32_t eax60;
    uint32_t eax61;
    int1_t less62;
    struct s2* eax63;
    struct s2* esi64;
    struct s2* eax65;
    struct s2* v66;
    struct s2* v67;
    int1_t less_or_equal68;
    struct s2** edi69;
    struct s2* eax70;
    struct s2* eax71;
    struct s2* eax72;
    struct s2* ecx73;
    struct s2* edx74;
    struct s2** esp75;
    struct s2* v76;
    struct s2* v77;
    struct s2* v78;
    struct s2* v79;
    struct s2* v80;
    struct s2* v81;
    struct s2* v82;
    int1_t less83;
    int32_t v84;

    v5 = ebx6;
    v7 = esi8;
    v9 = edi10;
    esp11 = reinterpret_cast<struct s2**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 84 - 4 - 4 - 4 - 4);
    v12 = ebp13;
    if (a2 > 83) {
        if (a2 > 0x110) {
            if (a2 != 0x111) {
                if (a2 == 0x40d) {
                    zf14 = g10009e88 == 0;
                    if (zf14) {
                        esi15 = a1;
                    } else {
                        esi15 = a1;
                        eax16 = g1000b068;
                        SendMessageA(eax16, 0x468, esi15, 0);
                        esp11 = esp11 - 1 - 1 - 1 - 1 - 1 + 1;
                    }
                    ebx17 = a3;
                    esp18 = reinterpret_cast<void*>(esp11 - 1);
                    eax19 = fun_10004910(a4, reinterpret_cast<int32_t>(esp18) + 24, 80);
                    esp20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp18) - 4 - 4 - 4 + 4 + 12);
                    if (eax19 && (edi21 = reinterpret_cast<struct s2*>(0), less_or_equal22 = reinterpret_cast<int32_t>(g1000b06c) <= reinterpret_cast<int32_t>(0), !less_or_equal22)) {
                        ebp23 = reinterpret_cast<struct s33*>(0x10009dc0);
                        do {
                            eax24 = ebp23->f0;
                            if (ebx17 == eax24) {
                                SetDlgItemTextA(esi15, eax24, reinterpret_cast<int32_t>(esp20) + 20);
                                esp20 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp20) - 4 - 4 - 4 - 4 + 4);
                                ebp23->f10 = a1;
                            }
                            ++ebp23;
                            edi21 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(edi21) + 1);
                            less25 = reinterpret_cast<int32_t>(edi21) < reinterpret_cast<int32_t>(g1000b06c);
                        } while (less25);
                    }
                    eax26 = reinterpret_cast<int32_t>(GetDlgItem(esi15, ebx17, 0xb1, 0, 0xff));
                    PostMessageA(eax26, esi15, ebx17, 0xb1, 0, 0xff);
                }
            }
        } else {
            if (a2 == 0x110) {
                esi27 = a1;
                fun_10001230(esi27);
                g10009db8 = esi27;
                g1000b06c = reinterpret_cast<struct s2*>(10);
                ebx28 = reinterpret_cast<struct s2*>(0);
                v29 = esi27;
                eax30 = reinterpret_cast<struct s2*>(GetDlgItem());
                v31 = eax30;
                eax32 = reinterpret_cast<int32_t>(GetWindowLongA());
                g1000b070 = eax32;
                less_or_equal33 = reinterpret_cast<int32_t>(g1000b06c) <= reinterpret_cast<int32_t>(0);
                if (!less_or_equal33) {
                    edi34 = reinterpret_cast<struct s2**>(0x10009dd0);
                    do {
                        eax35 = *reinterpret_cast<struct s3**>(edi34 - 2);
                        eax36 = fun_10001a00("default", eax35, 0, 0, v31, v29, 0x3f6, 0xfc);
                        *edi34 = eax36;
                        if (!reinterpret_cast<int1_t>(eax36 == 0xffffffff)) {
                            eax37 = reinterpret_cast<struct s2*>(MapVirtualKeyA(eax36, 1));
                            *edi34 = eax37;
                            v38 = *edi34;
                            eax40 = fun_10004110(v38, v39, eax36, 1, v31, v29, 0x3f6, 0xfc, v12, v9);
                        } else {
                            eax40 = *(edi34 - 1);
                        }
                        *edi34 = eax40;
                        v41 = *reinterpret_cast<int32_t*>(edi34 - 4);
                        eax42 = reinterpret_cast<int32_t>(GetDlgItem(esi27, v41));
                        if (eax42) {
                            if (*reinterpret_cast<int32_t*>(edi34 - 3) == 1) {
                                SetWindowLongA(eax42, 0xfc, fun_10003b70, esi27, v41);
                            }
                            eax43 = reinterpret_cast<uint32_t>(GetWindowLongA(eax42, 0xf0, esi27, v41));
                            SetWindowLongA(eax42, 0xf0, eax43 | 0x1080, eax42, 0xf0, esi27, v41);
                        }
                        edi34 = edi34 + 5;
                        ebx28 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(ebx28) + 1);
                        less44 = reinterpret_cast<int32_t>(ebx28) < reinterpret_cast<int32_t>(g1000b06c);
                    } while (less44);
                }
                eax45 = g1000b06c;
                fun_10004e20(esi27, 0x10009dc0, eax45, v31);
                goto v46;
            } else {
                if (a2 == 0x7b) {
                    WinHelpA(a3, 0x1000b3c0, 10, 0x10009030);
                }
            }
        }
    } else {
        if (a2 == 83) {
            v47 = a4->fc;
            WinHelpA(v47, 0x1000b3c0, 12, 0x10009030);
        } else {
            if (a2 == 78) {
                switch (a4->f8 + 0xcb) {
                case 0:
                    ebx48 = reinterpret_cast<struct s2*>(0);
                    less_or_equal49 = reinterpret_cast<int32_t>(g1000b06c) <= reinterpret_cast<int32_t>(0);
                    if (less_or_equal49) {
                        esi50 = a1;
                    } else {
                        edi51 = reinterpret_cast<struct s2**>(0x10009dd0);
                        esi50 = a1;
                        do {
                            eax52 = *reinterpret_cast<struct s3**>(edi51 - 2);
                            eax53 = fun_10001a00("default", eax52, 0, 0, v12, v9, v7, v5);
                            *edi51 = eax53;
                            if (!reinterpret_cast<int1_t>(eax53 == 0xffffffff)) {
                                eax54 = reinterpret_cast<struct s2*>(MapVirtualKeyA(eax53, 1));
                                *edi51 = eax54;
                                v55 = *edi51;
                                eax58 = fun_10004110(v55, a2, eax53, 1, v12, v9, v7, v5, v56, v57);
                            } else {
                                eax58 = *(edi51 - 1);
                            }
                            *edi51 = eax58;
                            v59 = *reinterpret_cast<int32_t*>(edi51 - 4);
                            eax60 = reinterpret_cast<int32_t>(GetDlgItem(esi50, v59));
                            if (eax60) {
                                if (*reinterpret_cast<int32_t*>(edi51 - 3) == 1) {
                                    SetWindowLongA(eax60, 0xfc, fun_10003b70, esi50, v59);
                                }
                                eax61 = reinterpret_cast<uint32_t>(GetWindowLongA(eax60, 0xf0, esi50, v59));
                                SetWindowLongA(eax60, 0xf0, eax61 | 0x1080, eax60, 0xf0, esi50, v59);
                            }
                            edi51 = edi51 + 5;
                            ebx48 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(ebx48) + 1);
                            less62 = reinterpret_cast<int32_t>(ebx48) < reinterpret_cast<int32_t>(g1000b06c);
                        } while (less62);
                    }
                    eax63 = g1000b06c;
                    fun_10004e20(esi50, 0x10009dc0, eax63, v12);
                    return 1;
                case 1:
                    esi64 = reinterpret_cast<struct s2*>(0);
                    eax65 = g1000b068;
                    g10009e88 = reinterpret_cast<struct s2*>(0);
                    v66 = reinterpret_cast<struct s2*>(0);
                    v67 = eax65;
                    SendMessageA(v67, 0x46b, 0, 0);
                    esp11 = esp11 - 1 - 1 - 1 - 1 - 1 + 1;
                    less_or_equal68 = reinterpret_cast<int32_t>(g1000b06c) <= reinterpret_cast<int32_t>(0);
                    if (!less_or_equal68) {
                        edi69 = reinterpret_cast<struct s2**>(0x10009dd0);
                        do {
                            eax70 = *edi69;
                            edi69 = edi69 + 5;
                            esi64 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esi64) + 1);
                            eax71 = fun_10004580(eax70, v67, 0x46b, v66, 0, eax70);
                            eax72 = reinterpret_cast<struct s2*>(MapVirtualKeyA(eax71, 0, v67, 0x46b, v66, 0));
                            ecx73 = *(edi69 - 8);
                            edx74 = *(edi69 - 7);
                            v66 = eax72;
                            esp75 = esp11 - 1 - 1 + 1 + 1 - 1 - 1 - 1 + 1 - 1;
                            fun_10001b50("default", edx74, esp75 + 5, ecx73, eax71, 0, v67, 0x46b, v66, 0, eax71, v9, v7, v5, v76, v77, v78, v79, v80, v81, v82);
                            esp11 = esp75 - 1 - 1 - 1 - 1 + 1 + 4;
                            less83 = reinterpret_cast<int32_t>(esi64) < reinterpret_cast<int32_t>(g1000b06c);
                        } while (less83);
                        break;
                    }
                case 2:
                    SetWindowLongA();
                    goto v84;
                case 3:
                    g1000b068 = a4->f0;
                }
            }
        }
    }
    return 0;
}

struct s34 {
    signed char[73] pad73;
    unsigned char f49;
};

struct s35 {
    unsigned char f0;
    signed char[72] pad73;
    unsigned char f49;
};

void fun_1000447c(void* ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char al4;
    signed char* eax5;
    signed char* eax6;
    signed char al7;
    int32_t* edx8;
    int32_t* edx9;
    int32_t eax10;
    int32_t* ecx11;
    unsigned char* eax12;
    int32_t eax13;
    struct s34* ecx14;
    uint32_t ecx15;
    unsigned char tmp8_16;
    signed char dl17;
    signed char* ebx18;
    uint32_t* edx19;
    unsigned char tmp8_20;
    unsigned char dl21;
    unsigned char tmp8_22;
    unsigned char* tmp32_23;
    struct s35* ecx24;
    uint1_t cf25;
    signed char bl26;
    signed char bl27;
    uint1_t cf28;
    uint1_t cf29;
    int32_t ebx30;
    int32_t ebx31;
    signed char* ebx32;
    void* ebx33;
    int32_t ebx34;
    uint32_t ebx35;
    int32_t ebx36;
    unsigned char dh37;

    *eax2 = reinterpret_cast<signed char>(*eax3 + al4);
    *eax5 = reinterpret_cast<signed char>(*eax6 + al7);
    *edx8 = *edx9 + eax10;
    ecx11 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx) - 1 - 1 - 1 - 1 - 1);
    eax12 = reinterpret_cast<unsigned char*>(eax13 + *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ecx11) + reinterpret_cast<int32_t>(ecx11) * 2) + 0x9080706);
    ecx14 = reinterpret_cast<struct s34*>(reinterpret_cast<int32_t>(ecx11) - 1 - 1 - 1 - 1 - 1 - 1 - 1);
    *reinterpret_cast<unsigned char*>(&ecx14) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx14) | ecx14->f49);
    ecx15 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx14) - 1 - 1);
    tmp8_16 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(dl17 + *ebx18)));
    *reinterpret_cast<unsigned char*>(&edx19) = tmp8_16;
    tmp8_20 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax12) + 20) + reinterpret_cast<uint1_t>(tmp8_16 < dl21));
    tmp8_22 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(tmp8_20 + 20) + reinterpret_cast<uint1_t>(tmp8_20 < *reinterpret_cast<unsigned char*>(&eax12)));
    *reinterpret_cast<unsigned char*>(&eax12) = tmp8_22;
    tmp32_23 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax12 + 0x49491716) + reinterpret_cast<uint1_t>(tmp8_22 < tmp8_20));
    ecx24 = reinterpret_cast<struct s35*>((ecx15 | *reinterpret_cast<uint32_t*>(ecx15 + 0x11100f0e)) - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1);
    cf25 = reinterpret_cast<uint1_t>(*tmp32_23 < reinterpret_cast<unsigned char>(bl26 + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_23) < reinterpret_cast<uint32_t>(eax12))));
    *tmp32_23 = reinterpret_cast<unsigned char>(*tmp32_23 - reinterpret_cast<unsigned char>(bl27 + cf25));
    cf28 = reinterpret_cast<uint1_t>(ecx24->f49 < reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&ecx24) + cf25));
    ecx24->f49 = reinterpret_cast<unsigned char>(ecx24->f49 - reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&ecx24) + cf28));
    cf29 = reinterpret_cast<uint1_t>(*edx19 < ebx30 + cf28);
    *edx19 = *edx19 - (ebx31 + cf29);
    ebx32 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ebx33) - (*reinterpret_cast<int32_t*>(ebx34 + 0x21201f1e) + reinterpret_cast<uint1_t>(ebx35 < *reinterpret_cast<int32_t*>(ebx36 + 0x21201f1e) + cf29)));
    __asm__("daa ");
    ecx24->f0 = reinterpret_cast<unsigned char>(ecx24->f0 - *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx24) + 1));
    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx24) + 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx24) + 1) - *ebx32);
    __asm__("das ");
    ecx24->f0 = reinterpret_cast<unsigned char>(ecx24->f0 ^ dh37);
    __asm__("aaa ");
}

void fun_10004814(int16_t cx) {
    unsigned char* ecx1;
    unsigned char* edi2;
    signed char* edi3;
    int32_t* edi4;
    int32_t* edi5;
    int32_t ebp6;
    signed char* edi7;
    uint32_t ebp8;
    int32_t ebp9;
    int32_t* edi10;
    int32_t eax11;
    signed char al12;
    uint32_t eax13;
    unsigned char* ecx14;
    unsigned char* ebx15;
    uint32_t eax16;
    uint32_t tmp32_17;
    int32_t* edi18;
    uint1_t cf19;
    uint32_t* edi20;
    uint32_t* edi21;
    unsigned char tmp8_22;
    signed char* edi23;
    uint32_t tmp32_24;
    int32_t* edi25;
    uint1_t cf26;
    unsigned char* edi27;
    unsigned char* edi28;
    signed char* edi29;
    uint32_t* edi30;
    int32_t* edi31;
    uint32_t* edi32;

    *reinterpret_cast<int16_t*>(&ecx1) = cx;
    *edi2 = reinterpret_cast<unsigned char>(*edi3 + *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1));
    __asm__("das ");
    __asm__("das ");
    *edi4 = *edi5 + ebp6;
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) + *edi7);
    ebp8 = reinterpret_cast<uint32_t>(ebp9 + *edi10);
    __asm__("das ");
    *reinterpret_cast<signed char*>(&eax11) = reinterpret_cast<signed char>(al12 + 47);
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    eax13 = reinterpret_cast<uint32_t>(eax11 + 0x7062f2f);
    *ecx1 = reinterpret_cast<unsigned char>(*ecx1 | *reinterpret_cast<unsigned char*>(&ecx1));
    *reinterpret_cast<unsigned char*>(&ecx14) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx1) | *ebx15);
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    *reinterpret_cast<unsigned char*>(&eax13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax13) | 47);
    eax16 = eax13 | 0x2f2f2f2f;
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("movups xmm5, [edi]");
    __asm__("das ");
    tmp32_17 = *edi18 + ebp8;
    cf19 = reinterpret_cast<uint1_t>(tmp32_17 < *edi20);
    *edi21 = tmp32_17;
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    tmp8_22 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1) + *edi23) + cf19);
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx14) + 1) = tmp8_22;
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    tmp32_24 = ebp8 + *edi25 + reinterpret_cast<uint1_t>(tmp8_22 < *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx1) + 1));
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    cf26 = reinterpret_cast<uint1_t>(*edi27 < reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx14) + 1) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax16) + 21) + reinterpret_cast<uint1_t>(tmp32_24 < ebp8)) < *reinterpret_cast<unsigned char*>(&eax16))));
    *edi28 = reinterpret_cast<unsigned char>(*edi29 - reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx14) + 1) + cf26));
    *edi30 = *edi31 - (tmp32_24 + reinterpret_cast<uint1_t>(*edi32 < tmp32_24 + cf26));
    __asm__("das ");
    *ecx14 = 0;
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("daa ");
    __asm__("das ");
    *ecx14 = reinterpret_cast<unsigned char>(*ecx14 - *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(&ecx14) + 1));
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
    __asm__("das ");
}

void fun_10004d24(unsigned char* ecx) {
    signed char* edx2;
    signed char* edx3;
    signed char ah4;
    int32_t* edx5;
    int32_t* edx6;
    unsigned char* ebx7;
    unsigned char tmp8_8;
    signed char dl9;
    uint1_t cf10;
    void** edx11;
    signed char dl12;
    signed char* ebx13;
    void* esp14;
    uint1_t cf15;
    int16_t ds16;

    *edx2 = reinterpret_cast<signed char>(*edx3 + ah4);
    *edx5 = *edx6 + reinterpret_cast<int32_t>(__zero_stack_offset());
    *ecx = reinterpret_cast<unsigned char>(*ecx | *reinterpret_cast<unsigned char*>(&ecx));
    *reinterpret_cast<unsigned char*>(&ecx) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx) | *ebx7);
    tmp8_8 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*ecx + dl9)));
    cf10 = reinterpret_cast<uint1_t>(tmp8_8 < *ecx);
    *ecx = tmp8_8;
    *reinterpret_cast<unsigned char*>(&edx11) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(dl12 + *ebx13) + cf10);
    esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 2 + 2);
    cf15 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*edx11) < 0);
    *edx11 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*edx11) - reinterpret_cast<unsigned char>(static_cast<uint32_t>(cf15)));
    *edx11 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*edx11) - (reinterpret_cast<unsigned char>(esp14) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*edx11) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(esp14) + cf15))));
    *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(esp14) - (reinterpret_cast<unsigned char>(*edx11) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(esp14) < reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*edx11))))) - 2) = ds16;
    *edx11 = reinterpret_cast<void*>(0);
}

void fun_10005eac() {
    int32_t eax1;
    int32_t eax2;
    signed char al3;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax2) + al3);
}

void DoomCfgEditor(int32_t a1) {
    DialogBoxParamA();
    GetLastError();
    goto "DOOMCFG";
}

void fun_10004c96() {
}

int32_t fun_10004e60(int32_t a1, int32_t a2, uint32_t a3) {
    int32_t eax4;
    int32_t eax5;
    uint32_t eax6;
    int32_t eax7;

    if (a2 == 0x110) {
        GetDlgItem();
        SendMessageA();
        g1000b080 = 0;
        eax4 = g1000b078;
        if (eax4) {
            SetWindowTextA(a1, eax4);
        }
        eax5 = g1000b184;
        if (eax5) {
            SetDlgItemTextA(a1, 0x436, eax5);
        }
        goto a1;
    } else {
        if (a2 == 0x111) {
            eax6 = a3 & 0xffff;
            if (eax6 == 1) {
                eax7 = reinterpret_cast<int32_t>(GetDlgItem(a1, 0x435, 0x1000b080, 0x104));
                GetWindowTextA(eax7, a1, 0x435, 0x1000b080, 0x104);
            } else {
                if (eax6 != 2) {
                    return 0;
                }
            }
            EndDialog();
            goto 0;
        } else {
            return 0;
        }
    }
}

void fun_100059a0(int32_t a1) {
    fun_100059d0(a1, 1, 0);
    return;
}

struct s36 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_10006c3b(int32_t a1) {
    int16_t* edi2;
    int16_t* esi3;
    struct s36* ebp4;

    *edi2 = *esi3;
    goto ebp4->f4;
}

struct s37 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_10006c7d(int32_t a1) {
    int32_t ecx2;
    signed char* edi3;
    signed char* esi4;
    struct s37* ebp5;

    while (ecx2) {
        --ecx2;
        *edi3 = *esi4;
        ++edi3;
        ++esi4;
    }
    goto ebp5->f4;
}

struct s38 {
    signed char[4] pad4;
    int32_t f4;
};

struct s39 {
    int32_t f0;
    signed char f1;
    int16_t f2;
    signed char f3;
};

struct s40 {
    int32_t f0;
    signed char f1;
    int16_t f2;
    signed char f3;
};

struct s41 {
    signed char[4] pad4;
    int32_t f4;
};

struct s42 {
    signed char[4] pad4;
    int32_t f4;
};

struct s43 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_10006c89(void* ecx, int32_t a2) {
    void* esi3;
    void* esi4;
    void* edi5;
    void* edi6;
    signed char* esi7;
    signed char* edi8;
    struct s38* ebp9;
    uint32_t edx10;
    int32_t edx11;
    void* eax12;
    uint32_t ecx13;
    uint32_t eax14;
    struct s39* esi15;
    struct s40* edi16;
    uint32_t ecx17;
    uint32_t edx18;
    uint32_t ecx19;
    struct s41* ebp20;
    struct s42* ebp21;
    struct s43* ebp22;

    esi3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi4) + reinterpret_cast<uint32_t>(ecx));
    edi5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edi6) + reinterpret_cast<uint32_t>(ecx));
    if (reinterpret_cast<uint32_t>(edi5) & 3) {
        esi7 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi3) - 1);
        edi8 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi5) - 1);
        if (reinterpret_cast<uint32_t>(ecx) <= 12) {
            while (ecx) {
                ecx = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx) - 1);
                *edi8 = *esi7;
                --edi8;
                --esi7;
            }
            goto ebp9->f4;
        }
        edx10 = reinterpret_cast<uint32_t>(-edx11) & 3;
        eax12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx) - edx10);
        ecx13 = edx10;
        while (ecx13) {
            --ecx13;
            *edi8 = *esi7;
            --edi8;
            --esi7;
        }
        eax14 = reinterpret_cast<uint32_t>(eax12) & 3;
        esi15 = reinterpret_cast<struct s39*>(esi7 - 3);
        edi16 = reinterpret_cast<struct s40*>(edi8 - 3);
        ecx17 = reinterpret_cast<uint32_t>(eax12) >> 2;
        while (ecx17) {
            --ecx17;
            edi16->f0 = esi15->f0;
            edi16 = reinterpret_cast<struct s40*>(reinterpret_cast<uint32_t>(edi16) - 4);
            esi15 = reinterpret_cast<struct s39*>(reinterpret_cast<uint32_t>(esi15) - 4);
        }
        goto *reinterpret_cast<int32_t*>(eax14 * 4 + 0x10006cb0);
    } else {
        edx18 = reinterpret_cast<uint32_t>(ecx) & 3;
        esi15 = reinterpret_cast<struct s39*>(reinterpret_cast<uint32_t>(esi3) - 4);
        edi16 = reinterpret_cast<struct s40*>(reinterpret_cast<uint32_t>(edi5) - 4);
        ecx19 = reinterpret_cast<uint32_t>(ecx) >> 2;
        while (ecx19) {
            --ecx19;
            edi16->f0 = esi15->f0;
            edi16 = reinterpret_cast<struct s40*>(reinterpret_cast<uint32_t>(edi16) - 4);
            esi15 = reinterpret_cast<struct s39*>(reinterpret_cast<uint32_t>(esi15) - 4);
        }
        goto *reinterpret_cast<int32_t*>(edx18 * 4 + 0x10006cb0);
    }
    addr_10006cee_19:
    goto ebp20->f4;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi16) + 3) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi15) + 3);
    goto addr_10006cee_19;
    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edi16) + 2) = *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(esi15) + 2);
    goto ebp21->f4;
    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edi16) + 2) = *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(esi15) + 2);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi16) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi15) + 1);
    goto ebp22->f4;
}

void fun_10006cd6() {
}

int32_t g1000b4c4;

uint32_t fun_10007040(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    struct s0* v6;
    uint32_t eax7;
    int1_t zf8;
    struct s0* v9;
    struct s0* ebx10;
    struct s0* v11;
    struct s0* esi12;
    struct s0* v13;
    struct s0* edi14;
    uint32_t esi15;
    struct s0* v16;
    struct s0* ebp17;
    int32_t edi18;
    int1_t less_or_equal19;
    void* ebx20;
    struct s0* eax21;
    struct s0* v22;
    int32_t eax23;
    struct s0* eax24;
    struct s0* v25;
    struct s0* ecx26;
    int1_t less_or_equal27;

    v6 = reinterpret_cast<struct s0*>(__return_address());
    eax7 = fun_10006ef0();
    zf8 = g1000a518 == 0;
    if (zf8) {
        return eax7;
    }
    v9 = ebx10;
    v11 = esi12;
    v13 = edi14;
    esi15 = 0;
    v16 = ebp17;
    edi18 = 3;
    less_or_equal19 = g1000b4c4 <= 3;
    if (!less_or_equal19) 
        goto addr_10007353_5;
    addr_100073ac_6:
    return esi15;
    addr_10007353_5:
    ebx20 = reinterpret_cast<void*>(12);
    do {
        eax21 = g1000b4c8;
        if (*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<uint32_t>(ebx20))) {
            if ((*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<uint32_t>(ebx20)))->fc & 0x83 && (v22 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax21) + reinterpret_cast<uint32_t>(ebx20)), eax23 = fun_100075a0(v22, v16, v13, v11, v9, v6, a1), eax23 != -1)) {
                ++esi15;
            }
            if (reinterpret_cast<int32_t>(ebx20) >= reinterpret_cast<int32_t>(80)) {
                eax24 = g1000b4c8;
                v25 = *reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(eax24) + reinterpret_cast<uint32_t>(ebx20));
                fun_100051f0(v25, v16, v13, v11, v9, v6, a1, a2, a3, a4, a5);
                ecx26 = g1000b4c8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx26) + reinterpret_cast<uint32_t>(ebx20)) = 0;
            }
        }
        ebx20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx20) + 4);
        ++edi18;
        less_or_equal27 = g1000b4c4 <= edi18;
    } while (!less_or_equal27);
    goto addr_100073ac_6;
}

void fun_100013b1(int32_t ecx) {
}

void fun_10001e66() {
}

void fun_100026b1(int32_t ecx) {
}

void fun_10003152() {
}

void fun_10003652() {
}

void fun_10003a79(int32_t ecx) {
}

void fun_10004352() {
}

int32_t g1000c5f4;

struct s0* fun_10005860(struct s0* a1, struct s0* a2, struct s0* a3) {
    struct s0* ebx4;
    uint32_t eax5;
    uint32_t tmp32_6;
    int32_t eax7;
    struct s0* esi8;
    struct s0* ebp9;
    struct s0* eax10;
    struct s0* ebp11;
    struct s0* edi12;
    struct s0* esi13;
    struct s0* ebx14;
    struct s0* eax15;
    int32_t eax16;
    struct s0* eax17;
    struct s0* eax18;
    struct s0* eax19;

    ebx4 = reinterpret_cast<struct s0*>(1);
    if (!reinterpret_cast<int1_t>(a2 == 1)) {
        if (!a2) {
            eax5 = g1000a4a8;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax5) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax5 == 0)) {
                return 0;
            } else {
                g1000a4a8 = eax5 - 1;
            }
        }
    } else {
        tmp32_6 = g1000a4a8 + reinterpret_cast<unsigned char>(1);
        g1000a4a8 = tmp32_6;
    }
    if (a2 == 1 || reinterpret_cast<int1_t>(a2 == 2)) {
        eax7 = g1000c5f4;
        if (!eax7) {
            esi8 = a1;
            ebp9 = a3;
        } else {
            ebp9 = a3;
            esi8 = a1;
            eax10 = reinterpret_cast<struct s0*>(eax7(esi8, a2, ebp9));
            ebx4 = eax10;
        }
        if (ebx4) 
            goto addr_100058c5_12;
    } else {
        esi8 = a1;
        ebp9 = a3;
        goto addr_100058d9_14;
    }
    addr_100058e7_15:
    if (ebx4) {
        addr_100058f5_16:
        if (!a2 || reinterpret_cast<int1_t>(a2 == 3)) {
            eax15 = fun_10005740(esi8, a2, ebp9, ebp11, edi12, esi13, ebx14);
            if (!eax15) {
                ebx4 = reinterpret_cast<struct s0*>(0);
            }
            if (ebx4 && (eax16 = g1000c5f4, !!eax16)) {
                eax17 = reinterpret_cast<struct s0*>(eax16(esi8, a2, ebp9));
                ebx4 = eax17;
            }
        }
    } else {
        addr_100058eb_21:
        if (reinterpret_cast<int1_t>(a2 == 1)) {
            fun_10005b00();
            goto addr_100058f5_16;
        }
    }
    return ebx4;
    addr_100058c5_12:
    eax18 = fun_10005740(esi8, a2, ebp9, ebp11, edi12, esi13, ebx14);
    ebx4 = eax18;
    addr_100058d9_14:
    if (!ebx4) 
        goto addr_100058eb_21;
    eax19 = _DllMain_12(esi8, a2, ebp9);
    ebx4 = eax19;
    goto addr_100058e7_15;
}

struct s44 {
    signed char f0;
    signed char[1] pad2;
    signed char f2;
};

struct s44* fun_10006be0(struct s44* a1, struct s44* a2, void* a3) {
    struct s44* esi4;
    struct s44* edi5;
    uint32_t edx6;
    void* eax7;
    uint32_t ecx8;
    uint32_t eax9;
    uint32_t ecx10;
    uint32_t edx11;
    uint32_t ecx12;

    esi4 = a2;
    edi5 = a1;
    if (reinterpret_cast<uint32_t>(edi5) > reinterpret_cast<uint32_t>(esi4)) {
        if (reinterpret_cast<uint32_t>(edi5) < reinterpret_cast<uint32_t>(esi4) + reinterpret_cast<uint32_t>(a3)) 
            goto 0x10006c8c;
    }
    if (reinterpret_cast<uint32_t>(edi5) & 3) {
        if (reinterpret_cast<uint32_t>(a3) <= 12) 
            goto 0x10006c80;
        edx6 = -reinterpret_cast<uint32_t>(edi5) & 3;
        eax7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a3) - edx6);
        ecx8 = edx6;
        while (ecx8) {
            --ecx8;
            edi5->f0 = esi4->f0;
            edi5 = reinterpret_cast<struct s44*>(&edi5->pad2);
            esi4 = reinterpret_cast<struct s44*>(&esi4->pad2);
        }
        eax9 = reinterpret_cast<uint32_t>(eax7) & 3;
        ecx10 = reinterpret_cast<uint32_t>(eax7) >> 2;
        while (ecx10) {
            --ecx10;
            edi5->f0 = esi4->f0;
            edi5 = reinterpret_cast<struct s44*>(reinterpret_cast<uint32_t>(edi5) + 4);
            esi4 = reinterpret_cast<struct s44*>(reinterpret_cast<uint32_t>(esi4) + 4);
        }
        goto *reinterpret_cast<int32_t*>("Pl" + eax9 * 4);
    } else {
        edx11 = reinterpret_cast<uint32_t>(a3) & 3;
        ecx12 = reinterpret_cast<uint32_t>(a3) >> 2;
        while (ecx12) {
            --ecx12;
            edi5->f0 = esi4->f0;
            edi5 = reinterpret_cast<struct s44*>(reinterpret_cast<uint32_t>(edi5) + 4);
            esi4 = reinterpret_cast<struct s44*>(reinterpret_cast<uint32_t>(esi4) + 4);
        }
        goto *reinterpret_cast<int32_t*>("Pl" + edx11 * 4);
    }
    addr_10006c50_16:
    return a1;
    edi5->f0 = esi4->f0;
    goto addr_10006c50_16;
    edi5->f0 = esi4->f0;
    edi5->f2 = esi4->f2;
    return a1;
}

void fun_10006c49() {
}

void fun_10006cf6() {
}

void fun_10006f70() {
    int1_t zf1;
    int1_t less2;
    int32_t eax3;
    struct s0* eax4;
    struct s0* eax5;
    int32_t ecx6;
    void* eax7;
    struct s0* edx8;
    uint32_t esi9;
    int32_t* edx10;

    zf1 = g1000b4c4 == 0;
    if (!zf1) {
        less2 = g1000b4c4 < 20;
        if (less2) {
            g1000b4c4 = 20;
        }
    } else {
        g1000b4c4 = 0x200;
    }
    eax3 = g1000b4c4;
    eax4 = fun_10006d30(eax3, 4);
    g1000b4c8 = eax4;
    if (!eax4 && (g1000b4c4 = 20, eax5 = fun_10006d30(20, 4), g1000b4c8 = eax5, !eax5)) {
        fun_10005930(26);
    }
    ecx6 = 0x1000acd0;
    eax7 = reinterpret_cast<void*>(0);
    do {
        edx8 = g1000b4c8;
        eax7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax7) + 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx8) + reinterpret_cast<uint32_t>(eax7) + 0xfffffffc) = ecx6;
        ecx6 = ecx6 + 32;
    } while (reinterpret_cast<int32_t>(eax7) < reinterpret_cast<int32_t>(80));
    esi9 = 0;
    edx10 = reinterpret_cast<int32_t*>(0x1000ace0);
    do {
        if ((*reinterpret_cast<int32_t**>((reinterpret_cast<int32_t>(esi9 & 0xffffffe7) >> 3) + 0x1000c4e0))[(esi9 & 31) * 2] == -1 || !(*reinterpret_cast<int32_t**>((reinterpret_cast<int32_t>(esi9 & 0xffffffe7) >> 3) + 0x1000c4e0))[(esi9 & 31) * 2]) {
            *edx10 = -1;
        }
        edx10 = edx10 + 8;
        ++esi9;
    } while (reinterpret_cast<uint32_t>(edx10) < 0x1000ad40);
    return;
}

signed char* fun_10007060(uint32_t ecx, signed char* a2, signed char* a3, int32_t a4) {
    signed char* edi5;
    signed char* edx6;
    uint32_t ecx7;
    signed char* edi8;
    int1_t zf9;
    signed char* esi10;
    signed char* edi11;
    signed char* v12;
    int32_t ecx13;
    int32_t ecx14;
    signed char* edi15;
    signed char* esi16;

    edi5 = a2;
    edx6 = edi5;
    ecx7 = 0xffffffff;
    do {
        if (!ecx7) 
            break;
        --ecx7;
        ++edi5;
    } while (*edi5);
    edi8 = edi5 - 1;
    zf9 = edi8 == 0;
    esi10 = edi8;
    edi11 = a3;
    v12 = edi11;
    ecx13 = a4;
    do {
        if (!ecx13) 
            break;
        --ecx13;
        zf9 = *edi11 == 0;
        ++edi11;
        ++esi10;
    } while (!zf9);
    if (zf9) {
        ++ecx13;
    }
    ecx14 = -(ecx13 - a4);
    edi15 = esi10;
    esi16 = v12;
    while (ecx14) {
        --ecx14;
        *edi15 = *esi16;
        ++edi15;
        ++esi16;
    }
    *edi15 = 0;
    return edx6;
}

uint32_t fun_10007610(uint32_t a1, uint32_t a2, int32_t a3, uint32_t a4) {
    uint32_t ecx5;
    int32_t ebx6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t esi9;
    uint32_t tmp32_10;
    uint32_t eax11;

    if (a4) {
        ecx5 = a4;
        ebx6 = a3;
        eax7 = a1;
        do {
            ecx5 = ecx5 >> 1;
            __asm__("rcr ebx, 1");
            __asm__("rcr eax, 1");
        } while (ecx5);
        eax8 = eax7 / ebx6;
        esi9 = eax8;
        tmp32_10 = __intrinsic() + eax8 * a4;
        if (tmp32_10 < __intrinsic()) 
            goto addr_1000766e_5;
        if (tmp32_10 > a2) 
            goto addr_1000766e_5;
        if (tmp32_10 < a2) 
            goto addr_1000766f_8;
        if (a3 * esi9 <= a1) 
            goto addr_1000766f_8;
    } else {
        eax11 = a1 / a3;
        goto addr_10007673_11;
    }
    addr_1000766e_5:
    --esi9;
    addr_1000766f_8:
    eax11 = esi9;
    addr_10007673_11:
    return eax11;
}

uint32_t fun_10007680(uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) {
    uint32_t ecx5;
    uint32_t ebx6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t tmp32_10;
    uint32_t eax11;

    if (a4) {
        ecx5 = a4;
        ebx6 = a3;
        eax7 = a1;
        do {
            ecx5 = ecx5 >> 1;
            __asm__("rcr ebx, 1");
            __asm__("rcr eax, 1");
        } while (ecx5);
        eax8 = eax7 / ebx6;
        eax9 = eax8 * a3;
        tmp32_10 = __intrinsic() + eax8 * a4;
        if (tmp32_10 < __intrinsic()) 
            goto addr_100076da_5;
        if (tmp32_10 > a2) 
            goto addr_100076da_5;
        if (tmp32_10 < a2) 
            goto addr_100076e2_8;
        if (eax9 <= a1) 
            goto addr_100076e2_8;
    } else {
        eax11 = a1 % a3;
        goto addr_100076f1_11;
    }
    addr_100076da_5:
    eax9 = eax9 - a3;
    addr_100076e2_8:
    eax11 = -(eax9 - a1);
    addr_100076f1_11:
    return eax11;
}

struct s0* fun_100077d0() {
    struct s0* eax1;

    eax1 = fun_10005930(2);
    return eax1;
}

int32_t g1000b038 = 0;

struct s2* g1000b03c = reinterpret_cast<struct s2*>(0);

int32_t g100099b0 = 0;

int32_t GetDlgItemTextA = 0xd506;

struct s2* g100092f0 = reinterpret_cast<struct s2*>(0);

int32_t fun_10001c10(struct s2* a1, struct s2* a2, struct s2* a3, struct s2* a4) {
    struct s2* v5;
    struct s2* v6;
    struct s2* ebx7;
    struct s2* v8;
    struct s2* esi9;
    uint32_t eax10;
    struct s2* v11;
    struct s2* edi12;
    struct s2* v13;
    struct s2* ebp14;
    int32_t ecx15;
    int32_t ebp16;
    int1_t less_or_equal17;
    signed char* ebx18;
    struct s3* eax19;
    struct s2* eax20;
    signed char* edi21;
    int32_t ecx22;
    void* eax23;
    uint32_t ecx24;
    uint32_t eax25;
    uint32_t ecx26;
    signed char* esi27;
    signed char* edi28;
    uint32_t ecx29;
    signed char* v30;
    int32_t v31;
    int1_t less_or_equal32;
    int32_t edi33;
    struct s2* eax34;
    struct s2* v35;
    int1_t less_or_equal36;
    struct s2* esi37;
    int32_t ebx38;
    struct s2* eax39;
    struct s2* v40;
    struct s2* edx41;
    struct s2* v42;
    struct s2* v43;
    int1_t less_or_equal44;
    int32_t ebp45;
    signed char* ebx46;
    struct s3* eax47;
    struct s2* eax48;
    signed char* edi49;
    int32_t ecx50;
    void* eax51;
    uint32_t ecx52;
    uint32_t eax53;
    uint32_t ecx54;
    signed char* esi55;
    signed char* edi56;
    uint32_t ecx57;
    int1_t less_or_equal58;
    uint32_t eax59;
    struct s2* ecx60;

    v5 = reinterpret_cast<struct s2*>(__return_address());
    v6 = ebx7;
    v8 = esi9;
    eax10 = reinterpret_cast<uint32_t>(a2) - 78;
    v11 = edi12;
    v13 = ebp14;
    if (eax10 > 0xc3) 
        goto addr_10001e5d_2;
    ecx15 = 0;
    *reinterpret_cast<signed char*>(&ecx15) = *reinterpret_cast<signed char*>(eax10 + reinterpret_cast<int32_t>(fun_10001e80));
    switch (ecx15) {
    case 0:
        switch (&a4->f8->fcb) {
            addr_10001e5d_2:
        default:
            return 0;
        case 0:
            ebp16 = 0;
            less_or_equal17 = g1000b038 <= 0;
            if (!less_or_equal17) {
                ebx18 = reinterpret_cast<signed char*>(0x10009354);
                do {
                    eax19 = *reinterpret_cast<struct s3**>(ebx18 - 84);
                    eax20 = fun_10001a00("default", eax19, ebx18, 79, v13, v11, v8, v6);
                    if (reinterpret_cast<int1_t>(eax20 == 0xffffffff)) {
                        edi21 = ebx18 - 80;
                        ecx22 = -1;
                        eax23 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax20) - reinterpret_cast<uint32_t>(eax20));
                        do {
                            if (!ecx22) 
                                break;
                            --ecx22;
                            ++edi21;
                        } while (*edi21 != *reinterpret_cast<signed char*>(&eax23));
                        ecx24 = reinterpret_cast<uint32_t>(~ecx22);
                        eax25 = ecx24;
                        ecx26 = ecx24 >> 2;
                        esi27 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi21) - ecx24);
                        edi28 = ebx18;
                        while (ecx26) {
                            --ecx26;
                            *edi28 = *esi27;
                            edi28 = edi28 + 4;
                            esi27 = esi27 + 4;
                        }
                        ecx29 = eax25 & 3;
                        while (ecx29) {
                            --ecx29;
                            *edi28 = *esi27;
                            ++edi28;
                            ++esi27;
                        }
                    }
                    v30 = ebx18;
                    v31 = *reinterpret_cast<int32_t*>(ebx18 - 92);
                    ebx18 = ebx18 + 0xac;
                    ++ebp16;
                    SetDlgItemTextA(a1, v31, v30);
                    less_or_equal32 = g1000b038 <= ebp16;
                } while (!less_or_equal32);
            }
            return 1;
        case 1:
            edi33 = 0;
            eax34 = g1000b03c;
            g100099b0 = 0;
            v35 = eax34;
            SendMessageA();
            less_or_equal36 = g1000b038 <= 0;
            if (!less_or_equal36) {
                esi37 = reinterpret_cast<struct s2*>(0x10009354);
                ebx38 = GetDlgItemTextA;
                do {
                    eax39 = *reinterpret_cast<struct s2**>(reinterpret_cast<uint32_t>(esi37) + 0xffffffa4);
                    v40 = esi37;
                    ++edi33;
                    ebx38();
                    edx41 = *reinterpret_cast<struct s2**>(reinterpret_cast<uint32_t>(esi37) + 0xffffffac);
                    v42 = *reinterpret_cast<struct s2**>(reinterpret_cast<uint32_t>(esi37) + 0xffffffa8);
                    v43 = esi37;
                    esi37 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(esi37) + 0xac);
                    fun_10001b50("default", edx41, v43, v42, v11, eax39, v40, 79, v35, 0x46b, 0, 0, v13, v11, v8, v6, v5, a1, a2, a3, a4);
                    less_or_equal44 = g1000b038 <= edi33;
                } while (!less_or_equal44);
                goto v35;
            }
        case 2:
            SetWindowLongA();
            goto v11;
        case 3:
            g1000b03c = a4->f0;
            return 0;
        }
    case 1:
        WinHelpA();
        goto v13;
    case 2:
        WinHelpA();
        goto v13;
    case 3:
        ebp45 = 0;
        ebx46 = reinterpret_cast<signed char*>(0x10009354);
        fun_10001230(a1);
        g1000b038 = 10;
        g100092f0 = a1;
        do {
            eax47 = *reinterpret_cast<struct s3**>(ebx46 - 84);
            eax48 = fun_10001a00("default", eax47, ebx46, 79, v13, v11, v8, v6);
            if (reinterpret_cast<int1_t>(eax48 == 0xffffffff)) {
                edi49 = ebx46 - 80;
                ecx50 = -1;
                eax51 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax48) - reinterpret_cast<uint32_t>(eax48));
                do {
                    if (!ecx50) 
                        break;
                    --ecx50;
                    ++edi49;
                } while (*edi49 != *reinterpret_cast<signed char*>(&eax51));
                ecx52 = reinterpret_cast<uint32_t>(~ecx50);
                eax53 = ecx52;
                ecx54 = ecx52 >> 2;
                esi55 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi49) - ecx52);
                edi56 = ebx46;
                while (ecx54) {
                    --ecx54;
                    *edi56 = *esi55;
                    edi56 = edi56 + 4;
                    esi55 = esi55 + 4;
                }
                ecx57 = eax53 & 3;
                while (ecx57) {
                    --ecx57;
                    *edi56 = *esi55;
                    ++edi56;
                    ++esi55;
                }
            }
            ebx46 = ebx46 + 0xac;
            ++ebp45;
            SetDlgItemTextA();
            less_or_equal58 = g1000b038 <= ebp45;
        } while (!less_or_equal58);
        goto v11;
    case 4:
        eax59 = reinterpret_cast<uint32_t>(a3) >> 16;
        if (*reinterpret_cast<int16_t*>(&eax59) == 0x300) {
            ecx60 = g1000b03c;
            g100099b0 = 1;
            SendMessageA(ecx60, 0x468, a1, 0);
            goto addr_10001e5d_2;
        }
    case 5:
        goto 0x10001e5d;
    }
}

void fun_100077db() {
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
}
