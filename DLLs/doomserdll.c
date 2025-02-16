
int32_t CreateEventA = 0xc296;

struct s0 {
    signed char f0;
    signed char f1;
    signed char[268478140] pad268478142;
    signed char f1000a6be;
    signed char[536870912] pad268478143;
    signed char f1000a6bf;
};

struct s0* g1000a488;

int32_t g1000a4a0;

int32_t g1000a4a4;

struct s0* g1000a4a8;

int32_t g1000aaec;

struct s0* g1000aaf0;

int32_t g1000aae0;

int32_t g1000aae4;

struct s0* g1000aae8;

int32_t g1000a48c;

int32_t GlobalAlloc = 0xc278;

int32_t g10009084 = -1;

void fun_10001990();

int32_t GetLastError = 0xc286;

void fun_10001430(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, ...);

uint32_t fun_10001470() {
    int32_t esi1;
    struct s0* eax2;
    struct s0* eax3;
    int32_t eax4;
    struct s0* eax5;
    struct s0* eax6;

    esi1 = CreateEventA;
    eax2 = reinterpret_cast<struct s0*>(esi1());
    g1000a488 = eax2;
    if (!reinterpret_cast<int1_t>(eax2 == -1)) {
        g1000a488 = eax2;
        g1000a4a0 = 0;
        g1000a4a4 = 0;
        g1000a4a8 = eax2;
        g1000aaec = 0;
        eax3 = reinterpret_cast<struct s0*>(esi1());
        g1000aaf0 = eax3;
        if (!reinterpret_cast<int1_t>(eax3 == -1)) {
            g1000aaf0 = eax3;
            g1000aae0 = 0;
            g1000aae4 = 0;
            g1000aae8 = eax3;
            g1000a48c = 0;
            eax4 = reinterpret_cast<int32_t>(GlobalAlloc());
            g10009084 = eax4;
            fun_10001990();
            goto 4;
        } else {
            eax5 = reinterpret_cast<struct s0*>(GetLastError());
            fun_10001430("CreateLocalNode: CreateEvent() returned %d\n", eax5, 0, 1, 0, "CreateLocalNode: CreateEvent() returned %d\n", eax5, 0, 1, 0);
            goto 1;
        }
    } else {
        eax6 = reinterpret_cast<struct s0*>(GetLastError());
        fun_10001430("CreateLocalNode: CreateEvent() returned %d\n", eax6, 0, 1, 0, "CreateLocalNode: CreateEvent() returned %d\n", eax6, 0, 1, 0);
        goto 1;
    }
}

struct s1 {
    signed char f0;
    signed char f1;
    signed char f2;
    signed char f3;
    signed char f4;
    signed char f5;
    signed char f6;
};

uint32_t fun_10001f60();

void fun_10001020(struct s1* a1) {
    uint32_t eax2;
    uint32_t eax3;
    signed char al4;
    int32_t edx5;
    int32_t eax6;
    int32_t edi7;
    uint32_t esi8;
    uint32_t eax9;
    signed char al10;
    int32_t edx11;
    int32_t eax12;
    int32_t edi13;
    int32_t edx14;
    uint32_t esi15;
    uint32_t eax16;
    signed char al17;
    int32_t edx18;
    int32_t eax19;
    int32_t edi20;
    uint32_t esi21;
    uint32_t eax22;
    signed char al23;
    int32_t edx24;
    int32_t eax25;
    uint32_t esi26;
    uint32_t eax27;
    signed char al28;
    int32_t edx29;
    uint32_t eax30;

    eax2 = fun_10001f60();
    eax3 = eax2 / 0x186a0;
    al4 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax3) + 48);
    a1->f0 = al4;
    edx5 = 48 - al4;
    eax6 = edx5 + ((edx5 << 5) - edx5) * 4;
    edi7 = eax6 + eax6 * 4;
    esi8 = eax2 + (edi7 + edi7 * 4 << 5);
    eax9 = esi8 / 0x2710;
    al10 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax9) + 48);
    edx11 = 48 - al10;
    a1->f1 = al10;
    eax12 = edx11 + edx11 * 4;
    edi13 = eax12 + eax12 * 4;
    edx14 = edi13 + edi13 * 4;
    esi15 = esi8 + (edx14 + edx14 * 4 << 4);
    eax16 = esi15 / 0x3e8;
    al17 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax16) + 48);
    edx18 = 48 - al17;
    a1->f2 = al17;
    eax19 = edx18 + edx18 * 4;
    edi20 = eax19 + eax19 * 4;
    esi21 = esi15 + (edi20 + edi20 * 4) * 8;
    eax22 = esi21 / 100;
    al23 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax22) + 48);
    a1->f3 = al23;
    edx24 = 48 - al23 << 2;
    eax25 = edx24 + edx24 * 4;
    esi26 = esi21 + (eax25 + eax25 * 4);
    eax27 = esi26 / 10;
    al28 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax27) + 48);
    edx29 = 48 - al28;
    a1->f4 = al28;
    a1->f6 = 0;
    eax30 = esi26 + (edx29 + edx29 * 4) * 2;
    a1->f5 = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&eax30) + 48);
    return;
}

int32_t fun_100015c0(struct s0* a1);

int32_t fun_10001570(struct s0* a1) {
    struct s0* v2;
    struct s0* ebx3;
    int32_t ecx4;
    struct s0* ebx5;
    struct s0* v6;
    struct s0* esi7;
    struct s0* v8;
    struct s0* edi9;
    struct s0* esi10;
    signed char* edi11;
    int1_t zf12;
    int32_t eax13;
    int32_t eax14;
    int32_t eax15;

    v2 = ebx3;
    ecx4 = 2;
    ebx5 = a1;
    v6 = esi7;
    v8 = edi9;
    esi10 = ebx5;
    edi11 = ".";
    do {
        if (!ecx4) 
            break;
        --ecx4;
        zf12 = *reinterpret_cast<signed char*>(esi10) == *edi11;
        ++edi11;
        esi10 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esi10) + 1);
    } while (zf12);
    if (!zf12) {
        eax13 = fun_100015c0(ebx5);
        if (eax13) {
            eax14 = g10009084;
            return eax14;
        } else {
            fun_10001430("Could not open comm port %s\n", ebx5, v8, v6, v2);
            return -1;
        }
    } else {
        eax15 = g10009084;
        return eax15;
    }
}

struct s0* g1000ac64;

int32_t CloseHandle = 0xc2a6;

void fun_10001530() {
    struct s0* eax1;
    int32_t esi2;
    int32_t eax3;

    eax1 = g1000ac64;
    if (eax1 == -1) {
        esi2 = CloseHandle;
    } else {
        esi2 = CloseHandle;
        esi2(eax1);
        g1000ac64 = reinterpret_cast<struct s0*>(-1);
    }
    eax3 = g10009084;
    if (eax3 != -1) {
        esi2(eax3);
        g10009084 = -1;
    }
    return;
}

int32_t fun_10002090(signed char* a1, signed char* a2, int32_t a3) {
    int32_t ecx4;
    int32_t ebx5;
    signed char* edi6;
    signed char* esi7;
    int32_t ecx8;
    signed char* edi9;
    signed char* esi10;

    ecx4 = a3;
    if (ecx4) 
        goto addr_100020c1_2;
    ebx5 = ecx4;
    edi6 = a1;
    esi7 = edi6;
    do {
        if (!ecx4) 
            break;
        --ecx4;
        ++edi6;
        ++esi7;
    } while (*edi6);
    ecx8 = -ecx4 + ebx5;
    edi9 = esi7;
    esi10 = a2;
    do {
        if (!ecx8) 
            break;
        --ecx8;
        ++edi9;
        ++esi10;
    } while (*esi10 == *edi9);
    ecx4 = 0;
    if (*reinterpret_cast<unsigned char*>(esi10 - 1) <= *reinterpret_cast<unsigned char*>(edi9 - 1)) 
        goto addr_100020bb_10;
    addr_100020bf_11:
    ecx4 = ~ecx4;
    goto addr_100020c1_2;
    addr_100020bb_10:
    if (*reinterpret_cast<unsigned char*>(esi10 - 1) == *reinterpret_cast<unsigned char*>(edi9 - 1)) {
        addr_100020c1_2:
        return ecx4;
    } else {
        ecx4 = -2;
        goto addr_100020bf_11;
    }
}

struct s2 {
    void** f0;
    void** f1;
};

signed char* fun_10002060(signed char* a1, struct s2* a2, int32_t a3) {
    signed char* edi4;
    signed char* edx5;
    int32_t ecx6;
    signed char al7;
    signed char al8;

    edi4 = a1;
    edx5 = edi4;
    ecx6 = a3;
    if (!ecx6) {
        do {
            __asm__("lodsb ");
            if (!al7) 
                break;
            *edi4 = al8;
            ++edi4;
            --ecx6;
        } while (ecx6);
        while (ecx6) {
            --ecx6;
            *edi4 = 0;
            ++edi4;
        }
    }
    return edx5;
}

int32_t GetLocalTime = 0xc3b8;

uint32_t fun_10003da0(void* a1, void* a2, int32_t a3, uint32_t a4, int32_t a5, void* a6);

void fun_10002000(void* a1) {
    void* v2;
    int32_t eax3;
    int16_t v4;
    int32_t eax5;
    int16_t v6;
    void* eax7;
    uint32_t v8;
    uint32_t v9;
    uint32_t eax10;
    int32_t v11;

    v2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16);
    GetLocalTime();
    eax3 = 0;
    *reinterpret_cast<int16_t*>(&eax3) = v4;
    eax5 = 0;
    *reinterpret_cast<int16_t*>(&eax5) = v6;
    eax7 = reinterpret_cast<void*>(0);
    *reinterpret_cast<void**>(&eax7) = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(&v2) + 2);
    eax10 = fun_10003da0(reinterpret_cast<uint32_t>(v2) & 0xffff, eax7, eax5, v8 & 0xffff, eax3, v9 & 0xffff);
    if (__return_address()) {
        *reinterpret_cast<uint32_t*>(__return_address()) = eax10;
    }
    goto v11;
}

int32_t fun_100032b0(void** a1, struct s0* a2, void* a3);

uint32_t fun_10003160(void** a1, void** a2);

int32_t fun_10001f90(signed char* a1, struct s0* a2, void* a3, int32_t a4) {
    void* esp5;
    void** esp6;
    int32_t eax7;

    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32);
    esp6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp5) - 4 - 4);
    eax7 = fun_100032b0(esp6 + 2, a2, reinterpret_cast<int32_t>(esp5) + 44);
    if (0) {
        fun_10003160(0, esp6 - 1 - 1 - 1 + 1 + 3 + 1);
        return eax7;
    } else {
        *a1 = 0;
        return eax7;
    }
}

int32_t GetOverlappedResult = 0xc31a;

int32_t ResetEvent = 0xc30c;

struct s0* g1000aac4;

int32_t g10009088 = 0;

struct s3 {
    signed char[268478144] pad268478144;
    signed char f1000a6c0;
};

int32_t WriteFile = 0xc300;

uint32_t fun_100017d0(int32_t a1, signed char* a2, uint32_t a3) {
    int1_t zf4;
    struct s0** esp5;
    signed char* esi6;
    struct s0* v7;
    struct s0* ecx8;
    struct s0* ecx9;
    struct s0* ecx10;
    int32_t tmp32_11;
    uint32_t eax12;
    struct s3* edi13;
    signed char cl14;
    struct s0* edi15;
    struct s0* v16;
    struct s0* ecx17;
    int32_t eax18;
    int32_t tmp32_19;
    struct s0* eax20;
    struct s0* edi21;
    struct s0* esi22;
    struct s0* v23;

    zf4 = g1000aaec == 0;
    esp5 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4);
    esi6 = a2;
    if (!zf4) {
        v7 = reinterpret_cast<struct s0*>(esp5 + 2);
        ecx8 = g1000ac64;
        GetOverlappedResult();
        ecx9 = g1000a488;
        ResetEvent();
        esp5 = esp5 - 1 - 1 - 1 - 1 - 1 + 1 - 1 - 1 + 1;
        g1000aaec = 0;
        ecx10 = g1000aac4;
        if (0x1000a498 == ecx10) {
            tmp32_11 = g10009088 + 0x1000a498;
            g10009088 = tmp32_11;
        } else {
            fun_10001430("SendPacket: not all pending data sent\n", ecx9, ecx8, 0x1000a498, v7, "SendPacket: not all pending data sent\n", ecx9, ecx8, 0x1000a498, v7);
            goto v7;
        }
    }
    eax12 = a3;
    if (eax12 <= 0x200) {
        edi13 = reinterpret_cast<struct s3*>(0);
        if (eax12) {
            do {
                cl14 = *esi6;
                ++esi6;
                *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi13) + 0x1000a6c0) = cl14;
                edi13 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(edi13) + 1);
                if (cl14 == 0x70) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi13) + 0x1000a6c0) = cl14;
                    edi13 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(edi13) + 1);
                }
                --eax12;
            } while (eax12);
        }
        edi15 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(edi13) + 1 + 1);
        v16 = reinterpret_cast<struct s0*>(esp5 - 1 + 3);
        ecx17 = g1000ac64;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi15) + 0x1000a6be) = 0x70;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(edi15) + 0x1000a6bf) = 0;
        eax18 = reinterpret_cast<int32_t>(WriteFile());
        if (eax18) {
            if (edi15 == edi15) {
                tmp32_19 = g10009088 + reinterpret_cast<int32_t>(edi15);
                g10009088 = tmp32_19;
            } else {
                fun_10001430("SendPacket: not all data sent\n", ecx17, 0x1000a6c0, edi15, v16, "SendPacket: not all data sent\n", ecx17, 0x1000a6c0, edi15, v16);
                goto v16;
            }
        } else {
            eax20 = reinterpret_cast<struct s0*>(GetLastError());
            if (!reinterpret_cast<int1_t>(eax20 == 0x3e5)) {
                fun_10001430("SendPacket: WriteFile() returned error %d\n", eax20, ecx17, 0x1000a6c0, edi15);
                goto v16;
            } else {
                g1000aaec = 1;
                g1000aac4 = edi15;
            }
        }
        goto v16;
    } else {
        fun_10001430("SendPacket: too much data to send in one packet\n", edi21, esi22, v23, __return_address());
        return 0;
    }
}

int32_t fun_100019d0(uint32_t* a1);

uint32_t fun_10001920(signed char* a1, uint32_t a2) {
    int32_t eax3;
    uint32_t eax4;
    uint32_t v5;
    signed char* esi6;
    signed char* edi7;
    uint32_t ecx8;
    uint32_t ecx9;
    uint32_t eax10;
    uint32_t v11;
    signed char* esi12;
    signed char* edi13;
    uint32_t ecx14;
    uint32_t ecx15;
    uint32_t v16;

    eax3 = fun_100019d0(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4);
    if (eax3) {
        eax4 = a2;
        if (eax4 <= v5) {
            esi6 = reinterpret_cast<signed char*>(0x1000a280);
            edi7 = a1;
            ecx8 = eax4 >> 2;
            while (ecx8) {
                --ecx8;
                *edi7 = *esi6;
                edi7 = edi7 + 4;
                esi6 = esi6 + 4;
            }
            ecx9 = eax4 & 3;
            while (ecx9) {
                --ecx9;
                *edi7 = *esi6;
                ++edi7;
                ++esi6;
            }
            return eax4;
        } else {
            eax10 = v11;
            esi12 = reinterpret_cast<signed char*>(0x1000a280);
            edi13 = a1;
            ecx14 = eax10 >> 2;
            while (ecx14) {
                --ecx14;
                *edi13 = *esi12;
                edi13 = edi13 + 4;
                esi12 = esi12 + 4;
            }
            ecx15 = eax10 & 3;
            while (ecx15) {
                --ecx15;
                *edi13 = *esi12;
                ++edi13;
                ++esi12;
            }
            return v16;
        }
    } else {
        return 0xffffffff;
    }
}

int32_t fun_100020d0(signed char* a1, struct s0* a2, void* a3);

int32_t MessageBoxA = 0xc358;

void fun_10001430(struct s0* a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5, ...) {
    signed char* esp6;
    int32_t v7;

    esp6 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x400);
    fun_100020d0(esp6, a1, reinterpret_cast<int32_t>(__zero_stack_offset()) + 8);
    MessageBoxA(0, esp6 - 4 - 4 - 4 - 4 + 4 + 12, "Doom Network failure", 0);
    goto v7;
}

uint32_t g1000a278 = 0;

uint32_t g1000aac8;

uint32_t g1000a490;

uint32_t g1000aad0;

uint32_t g1000aacc;

uint32_t g1000a480;

uint32_t g1000a484;

int32_t g1000a5b0;

void fun_10001990() {
    g1000a278 = 0x100;
    g1000aac8 = 0;
    g1000a490 = 0;
    g1000aad0 = 0;
    g1000aacc = 0;
    g1000a480 = 0;
    g1000a484 = 0;
    g1000a5b0 = 1;
    return;
}

void fun_10001be0(uint32_t a1, struct s0* a2, struct s0* a3, struct s0* a4, struct s0* a5) {
    uint32_t edx6;
    uint32_t ebx7;
    uint32_t eax8;
    uint32_t ebp9;
    signed char* esi10;
    signed char* edi11;
    uint32_t ecx12;
    uint32_t edx13;
    uint32_t ecx14;
    uint32_t ecx15;
    uint32_t ecx16;
    signed char* esi17;
    signed char* edi18;
    uint32_t ecx19;
    uint32_t ecx20;
    uint32_t eax21;
    signed char* esi22;
    signed char* edi23;
    uint32_t ecx24;
    uint32_t ebx25;
    uint32_t ecx26;
    uint32_t edx27;

    edx6 = g1000aac8;
    ebx7 = g1000a278;
    if (reinterpret_cast<int32_t>(edx6 + ebx7) > reinterpret_cast<int32_t>(0x100)) {
        eax8 = a1;
        ebp9 = 0x100 - edx6;
        esi10 = reinterpret_cast<signed char*>(0x1000a5b8);
        edi11 = reinterpret_cast<signed char*>(edx6 + 0x1000a4b0);
        if (reinterpret_cast<int32_t>(ebp9) >= reinterpret_cast<int32_t>(eax8)) {
            ecx12 = eax8 >> 2;
            while (ecx12) {
                --ecx12;
                *edi11 = *esi10;
                edi11 = edi11 + 4;
                esi10 = esi10 + 4;
            }
            edx13 = edx6 + eax8;
            ecx14 = eax8 & 3;
            while (ecx14) {
                --ecx14;
                *edi11 = *esi10;
                ++edi11;
                ++esi10;
            }
        } else {
            ecx15 = ebp9 >> 2;
            while (ecx15) {
                --ecx15;
                *edi11 = *esi10;
                edi11 = edi11 + 4;
                esi10 = esi10 + 4;
            }
            ecx16 = ebp9 & 3;
            edx13 = eax8 - ebp9;
            while (ecx16) {
                --ecx16;
                *edi11 = *esi10;
                ++edi11;
                ++esi10;
            }
            esi17 = reinterpret_cast<signed char*>(ebp9 + 0x1000a5b8);
            edi18 = reinterpret_cast<signed char*>(0x1000a4b0);
            ecx19 = edx13 >> 2;
            while (ecx19) {
                --ecx19;
                *edi18 = *esi17;
                edi18 = edi18 + 4;
                esi17 = esi17 + 4;
            }
            ecx20 = edx13 & 3;
            while (ecx20) {
                --ecx20;
                *edi18 = *esi17;
                ++edi18;
                ++esi17;
            }
        }
        g1000aac8 = edx13;
        g1000a278 = ebx7 - eax8;
        g1000aad0 = edx13 + 0xffffffff;
        if (edx13 == 0x100) {
            g1000aac8 = 0;
        }
        g1000aacc = 1;
        return;
    }
    eax21 = a1;
    esi22 = reinterpret_cast<signed char*>(0x1000a5b8);
    edi23 = reinterpret_cast<signed char*>(edx6 + 0x1000a4b0);
    ecx24 = eax21 >> 2;
    while (ecx24) {
        --ecx24;
        *edi23 = *esi22;
        edi23 = edi23 + 4;
        esi22 = esi22 + 4;
    }
    ebx25 = ebx7 - eax21;
    ecx26 = eax21 & 3;
    edx27 = edx6 + eax21;
    while (ecx26) {
        --ecx26;
        *edi23 = *esi22;
        ++edi23;
        ++esi22;
    }
    g1000a278 = ebx25;
    g1000aac8 = edx27;
    g1000aad0 = edx27 + 0xffffffff;
    if (reinterpret_cast<int32_t>(edx27) >= reinterpret_cast<int32_t>(0x100)) 
        goto addr_10001c37_32;
    addr_10001c43_33:
    g1000aacc = 1;
    return;
    addr_10001c37_32:
    g1000aac8 = edx27 - 0x100;
    goto addr_10001c43_33;
}

int32_t g10009354 = 0;

void fun_10002f20(int32_t a1, void** a2, void** a3, void** a4) {
    g10009354 = a1;
    return;
}

int32_t g1000bf80;

int32_t HeapDestroy = 0xc43c;

void fun_100024b0() {
    int32_t eax1;

    eax1 = g1000bf80;
    HeapDestroy();
    goto eax1;
}

void** fun_10004e70(void** a1, void** a2);

void** fun_10001f10(int32_t a1);

void** g1000be80;

void* g1000be70;

int32_t GetStartupInfoA = 0xc47a;

struct s4 {
    void* f0;
    unsigned char f4;
};

struct s5 {
    int32_t f0;
    unsigned char f4;
};

int32_t GetStdHandle = 0xc46a;

int32_t GetFileType = 0xc45c;

int32_t SetHandleCount = 0xc44a;

struct s6 {
    int32_t f0;
    unsigned char f4;
};

void fun_100024c0() {
    void** ebp1;
    void** eax2;
    void* esp3;
    void** esi4;
    void** eax5;
    void** v6;
    int16_t v7;
    int32_t v8;
    void* esi9;
    int32_t edi10;
    void* ebp11;
    struct s4* v12;
    unsigned char* edi13;
    int32_t* ebx14;
    int1_t less15;
    void** ebx16;
    struct s5* ebx17;
    uint32_t eax18;
    int32_t eax19;
    uint32_t eax20;
    uint32_t eax21;
    int32_t v22;
    void* esi23;
    int32_t v24;
    int32_t eax25;
    uint32_t ecx26;
    struct s6* ecx27;
    void*** esi28;
    void** eax29;
    void* tmp32_30;
    int1_t less31;

    eax2 = fun_10004e70(0x480, ebp1);
    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 68 - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 4);
    esi4 = eax2;
    if (!esi4) {
        fun_10001f10(27);
        esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 - 4 + 4 + 4);
    }
    g1000be80 = esi4;
    g1000be70 = reinterpret_cast<void*>(32);
    if (reinterpret_cast<unsigned char>(esi4 + 0x480) > reinterpret_cast<unsigned char>(esi4)) {
        do {
            *reinterpret_cast<void***>(esi4 + 4) = reinterpret_cast<void**>(0);
            esi4 = esi4 + 36;
            *reinterpret_cast<int32_t*>(esi4 + 0xffffffdc) = -1;
            *reinterpret_cast<signed char*>(esi4 + 0xffffffe1) = 10;
            *reinterpret_cast<int32_t*>(esi4 + 0xffffffe4) = 0;
            eax5 = g1000be80;
        } while (reinterpret_cast<unsigned char>(eax5 + 0x480) > reinterpret_cast<unsigned char>(esi4));
    }
    v6 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp3) + 16);
    GetStartupInfoA();
    if (!v7 || !v8) {
        addr_10002612_7:
        esi9 = reinterpret_cast<void*>(0);
        edi10 = 0;
    } else {
        ebp11 = v12->f0;
        edi13 = &v12->f4;
        ebx14 = reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebp11) + reinterpret_cast<uint32_t>(edi13));
        if (reinterpret_cast<int32_t>(ebp11) >= reinterpret_cast<int32_t>(0x800)) {
            ebp11 = reinterpret_cast<void*>(0x800);
        }
        less15 = reinterpret_cast<int32_t>(g1000be70) < reinterpret_cast<int32_t>(ebp11);
        if (!less15) 
            goto addr_100025c8_11; else 
            goto addr_1000256a_12;
    }
    do {
        ebx16 = g1000be80;
        ebx17 = reinterpret_cast<struct s5*>(reinterpret_cast<unsigned char>(ebx16) + reinterpret_cast<uint32_t>(esi9));
        if (ebx17->f0 != -1) {
            ebx17->f4 = reinterpret_cast<unsigned char>(ebx17->f4 | 0x80);
        } else {
            eax18 = 0xfffffff6;
            ebx17->f4 = 0x81;
            if (esi9) {
                eax18 = 12 - reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(edi10 - 1) < 1);
            }
            eax19 = reinterpret_cast<int32_t>(GetStdHandle(eax18));
            if (eax19 == -1 || (eax20 = reinterpret_cast<uint32_t>(GetFileType(eax19, eax18)), eax20 == 0)) {
                ebx17->f4 = reinterpret_cast<unsigned char>(ebx17->f4 | 64);
            } else {
                eax21 = eax20 & 0xff;
                ebx17->f0 = eax19;
                if (eax21 != 2) {
                    if (eax21 == 3) {
                        ebx17->f4 = reinterpret_cast<unsigned char>(ebx17->f4 | 8);
                    }
                } else {
                    ebx17->f4 = reinterpret_cast<unsigned char>(ebx17->f4 | 64);
                }
            }
        }
        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) + 36);
        ++edi10;
    } while (reinterpret_cast<int32_t>(esi9) < reinterpret_cast<int32_t>(0x6c));
    SetHandleCount();
    goto v22;
    addr_100025c8_11:
    esi23 = reinterpret_cast<void*>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebp11) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebp11 == 0))) {
        do {
            if (*ebx14 != -1 && (*edi13 & 1 && (v24 = *ebx14, eax25 = reinterpret_cast<int32_t>(GetFileType(v24)), !!eax25))) {
                ecx26 = (reinterpret_cast<uint32_t>(esi23) & 31) << 2;
                ecx27 = reinterpret_cast<struct s6*>(ecx26 + ecx26 * 8 + reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(esi23) & 0xffffffe7) >> 3) + 0x1000be80)));
                ecx27->f0 = *ebx14;
                ecx27->f4 = *edi13;
            }
            esi23 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi23) + 1);
            ++edi13;
            ++ebx14;
        } while (reinterpret_cast<int32_t>(esi23) < reinterpret_cast<int32_t>(ebp11));
        goto addr_10002612_7;
    }
    addr_1000256a_12:
    esi28 = reinterpret_cast<void***>(0x1000be84);
    do {
        eax29 = fun_10004e70(0x480, v6);
        if (!eax29) 
            break;
        *esi28 = eax29;
        tmp32_30 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(g1000be70) + 32);
        g1000be70 = tmp32_30;
        if (reinterpret_cast<unsigned char>(eax29 + 0x480) > reinterpret_cast<unsigned char>(eax29)) {
            do {
                *reinterpret_cast<void***>(eax29 + 4) = reinterpret_cast<void**>(0);
                eax29 = eax29 + 36;
                *reinterpret_cast<int32_t*>(eax29 + 0xffffffdc) = -1;
                *reinterpret_cast<signed char*>(eax29 + 0xffffffe1) = 10;
                *reinterpret_cast<int32_t*>(eax29 + 0xffffffe4) = 0;
            } while (reinterpret_cast<unsigned char>(*esi28 + 0x480) > reinterpret_cast<unsigned char>(eax29));
        }
        esi28 = esi28 + 4;
        less31 = reinterpret_cast<int32_t>(g1000be70) < reinterpret_cast<int32_t>(ebp11);
    } while (less31);
    goto addr_100025c0_33;
    ebp11 = g1000be70;
    goto addr_100025c8_11;
    addr_100025c0_33:
    goto addr_100025c8_11;
}

int32_t fun_10002a60(void** a1);

int32_t fun_10002d70() {
    int32_t eax1;

    eax1 = fun_10002a60(0xfd);
    return eax1;
}

int32_t GetModuleFileNameA = 0xc262;

void*** g1000bf90;

void*** g100093a0 = reinterpret_cast<void***>(0);

void fun_10002880(void*** a1, void** a2, void** a3, int32_t* a4, int32_t* a5);

struct s7 {
    void** f0;
    signed char[1039] pad1040;
    void** f410;
};

void** g10009388 = reinterpret_cast<void**>(0);

int32_t g10009384 = 0;

void fun_100027e0() {
    void*** esi1;
    void* esp2;
    void*** eax3;
    struct s7* edi4;
    void** eax5;
    void* esp6;
    int32_t esi7;

    esi1 = reinterpret_cast<void***>(0x1000aaf8);
    GetModuleFileNameA();
    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    eax3 = g1000bf90;
    g100093a0 = reinterpret_cast<void***>(0x1000aaf8);
    if (*eax3) {
        esi1 = g1000bf90;
    }
    fun_10002880(esi1, 0, 0, reinterpret_cast<int32_t>(esp2) + 8, reinterpret_cast<int32_t>(esp2) + 12);
    eax5 = fun_10004e70(&edi4->f410, 0);
    esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp2) - 4 - 4 - 4 - 4 - 4 - 4 + 4 + 20 - 4 - 4 + 4 + 4);
    if (!eax5) {
        fun_10001f10(8);
        esp6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp6) - 4 - 4 + 4 + 4);
    }
    fun_10002880(esi1, eax5, eax5 + 0x410, reinterpret_cast<int32_t>(esp6) + 8, reinterpret_cast<int32_t>(esp6) + 12);
    g10009388 = eax5;
    g10009384 = 0x103;
    goto esi7;
}

void** g10009344 = reinterpret_cast<void**>(0);

void** g10009390 = reinterpret_cast<void**>(0);

void** fun_10004e50(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9);

void** fun_10002700(void** a1, void** a2) {
    void** v3;
    void** edx4;
    void** v5;
    void** ebx6;
    void** v7;
    void** esi8;
    void** v9;
    void** edi10;
    void*** esi11;
    void** v12;
    void** ebp13;
    void** edi14;
    int32_t ecx15;
    int32_t eax16;
    void** eax17;
    void** ebx18;
    void** ebp19;
    void** eax20;
    void** edi21;
    int32_t ecx22;
    void** ecx23;
    void** v24;
    void** eax25;
    void** edi26;
    int32_t ecx27;
    void* eax28;
    void** ecx29;
    uint32_t ecx30;
    void** edi31;
    uint32_t ecx32;
    void** eax33;
    void** eax34;

    v3 = reinterpret_cast<void**>(__return_address());
    edx4 = g10009344;
    v5 = ebx6;
    v7 = esi8;
    v9 = edi10;
    esi11 = reinterpret_cast<void***>(0);
    v12 = ebp13;
    if (*reinterpret_cast<void***>(edx4)) {
        do {
            if (*reinterpret_cast<void***>(edx4) != 61) {
                ++esi11;
            }
            edi14 = edx4;
            ecx15 = -1;
            eax16 = eax16 - eax16;
            do {
                if (!ecx15) 
                    break;
                --ecx15;
                ++edi14;
                ++esi11;
            } while (*reinterpret_cast<void***>(edi14) != *reinterpret_cast<void***>(&eax16));
            edx4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx4) + ~ecx15);
        } while (*reinterpret_cast<void***>(edx4));
    }
    eax17 = fun_10004e70(reinterpret_cast<uint32_t>(esi11) * 4 + 4, v12);
    g10009390 = eax17;
    ebx18 = eax17;
    if (!ebx18) {
        fun_10001f10(9);
    }
    ebp19 = g10009344;
    eax20 = ebp19;
    if (*reinterpret_cast<void***>(ebp19)) {
        do {
            edi21 = ebp19;
            ecx22 = -1;
            eax20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax20) - reinterpret_cast<unsigned char>(eax20));
            do {
                if (!ecx22) 
                    break;
                --ecx22;
                ++edi21;
            } while (*reinterpret_cast<void***>(edi21) != eax20);
            ecx23 = reinterpret_cast<void**>(~ecx22);
            v24 = ecx23;
            if (*reinterpret_cast<void***>(ebp19) != 61) {
                eax25 = fun_10004e70(ecx23, v12);
                *reinterpret_cast<void***>(ebx18) = eax25;
                if (!eax25) {
                    eax25 = fun_10001f10(9);
                }
                edi26 = ebp19;
                ecx27 = -1;
                eax28 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax25) - reinterpret_cast<unsigned char>(eax25));
                do {
                    if (!ecx27) 
                        break;
                    --ecx27;
                    ++edi26;
                } while (*reinterpret_cast<void***>(edi26) != *reinterpret_cast<void***>(&eax28));
                ecx29 = reinterpret_cast<void**>(~ecx27);
                eax20 = ecx29;
                ecx30 = reinterpret_cast<unsigned char>(ecx29) >> 2;
                esi11 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi26) - reinterpret_cast<unsigned char>(ecx29));
                edi31 = *reinterpret_cast<void***>(ebx18);
                ebx18 = ebx18 + 4;
                while (ecx30) {
                    --ecx30;
                    *reinterpret_cast<void***>(edi31) = *esi11;
                    edi31 = edi31 + 4;
                    esi11 = esi11 + 4;
                }
                ecx32 = reinterpret_cast<unsigned char>(eax20) & 3;
                while (ecx32) {
                    --ecx32;
                    *reinterpret_cast<void***>(edi31) = *esi11;
                    ++edi31;
                    ++esi11;
                }
            }
            ebp19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp19) + reinterpret_cast<unsigned char>(v24));
        } while (*reinterpret_cast<void***>(ebp19));
    }
    eax33 = g10009344;
    eax34 = fun_10004e50(eax33, v12, v9, v7, v5, v24, v3, a1, a2);
    *reinterpret_cast<void***>(ebx18) = reinterpret_cast<void**>(0);
    return eax34;
}

int32_t g1000bf88;

void fun_100022a0(int32_t* a1, int32_t* a2);

void fun_10002190() {
    int32_t eax1;

    eax1 = g1000bf88;
    if (eax1) {
        eax1();
    }
    fun_100022a0(0x10009008, 0x10009010);
    fun_100022a0(0x10009000, 0x10009004);
    return;
}

signed char* fun_100021f0(int32_t a1, int32_t a2, int32_t a3);

signed char* fun_100021e0() {
    signed char* eax1;

    eax1 = fun_100021f0(0, 0, 1);
    return eax1;
}

int32_t g100093b0 = -1;

int32_t TlsGetValue = 0xc420;

int32_t TlsSetValue = 0xc3ec;

void fun_100023e0(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int1_t zf7;
    void** esi8;
    int32_t eax9;
    void** eax10;
    void** v11;
    void** esi12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    int32_t eax18;

    zf7 = g100093b0 == -1;
    if (!zf7) {
        esi8 = a1;
        if (esi8 || (eax9 = g100093b0, eax10 = reinterpret_cast<void**>(TlsGetValue(eax9)), esi8 = eax10, !!esi8)) {
            if (*reinterpret_cast<void***>(esi8 + 36)) {
                v11 = *reinterpret_cast<void***>(esi8 + 36);
                fun_10004e50(v11, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            if (*reinterpret_cast<void***>(esi8 + 40)) {
                v13 = *reinterpret_cast<void***>(esi8 + 40);
                fun_10004e50(v13, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            if (*reinterpret_cast<void***>(esi8 + 48)) {
                v14 = *reinterpret_cast<void***>(esi8 + 48);
                fun_10004e50(v14, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            if (*reinterpret_cast<void***>(esi8 + 56)) {
                v15 = *reinterpret_cast<void***>(esi8 + 56);
                fun_10004e50(v15, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            if (*reinterpret_cast<void***>(esi8 + 64)) {
                v16 = *reinterpret_cast<void***>(esi8 + 64);
                fun_10004e50(v16, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            if (*reinterpret_cast<void***>(esi8 + 68)) {
                v17 = *reinterpret_cast<void***>(esi8 + 68);
                fun_10004e50(v17, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
            }
            fun_10004e50(esi8, esi12, __return_address(), a1, a2, a3, a4, a5, a6);
        }
        eax18 = g100093b0;
        TlsSetValue(eax18, 0);
    }
    return;
}

uint32_t g10009340 = 0;

int32_t g100093ac = 0;

void** fun_100026a0(void** a1, void** a2, void** a3);

void fun_10002320(void** a1, void** a2);

int32_t GetVersion = 0xc3aa;

uint32_t g10009374 = 0;

int32_t GetModuleHandleA = 0xc396;

int32_t GetProcAddress = 0xc384;

void fun_10002490();

int32_t g10009380 = 0;

uint32_t g1000937c = 0;

uint32_t g10009378 = 0;

int32_t fun_100022c0();

int32_t GetCommandLineA = 0xc372;

void** fun_10002d80();

void** fun_10001cf0(void** a1, void** a2, void** a3, void** a4) {
    uint32_t eax5;
    int1_t zf6;
    uint32_t eax7;
    int1_t zf8;
    void** eax9;
    int32_t eax10;
    int32_t ecx11;
    uint32_t edx12;
    uint32_t eax13;
    int32_t eax14;
    void*** eax15;
    void** eax16;
    int1_t zf17;

    if (!reinterpret_cast<int1_t>(a2 == 1)) {
        if (a2) {
            if (reinterpret_cast<int1_t>(a2 == 3)) {
                fun_100023e0(0, __return_address(), a1, a2, a3, a4);
            }
            return 1;
        } else {
            eax5 = g10009340;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax5) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax5 == 0)) {
                return 0;
            } else {
                zf6 = g100093ac == 0;
                g10009340 = eax5 - 1;
                if (zf6) {
                    fun_100021e0();
                }
                fun_100026a0(__return_address(), a1, a2);
                fun_10002320(__return_address(), a1);
                fun_100024b0();
                return 1;
            }
        }
    } else {
        eax7 = reinterpret_cast<uint32_t>(GetVersion());
        zf8 = g10009354 == 0;
        g10009374 = eax7;
        if (zf8) {
            if (*reinterpret_cast<signed char*>(&eax7) == 3 && eax7 & 0x80000000) {
                fun_10002f20(2, __return_address(), a1, a2);
            }
            eax9 = reinterpret_cast<void**>(GetModuleHandleA("kernel32.dll"));
            if (eax9 && (eax10 = reinterpret_cast<int32_t>(GetProcAddress(eax9, "IsTNT", "kernel32.dll")), !!eax10)) {
                fun_10002f20(1, eax9, "IsTNT", "kernel32.dll");
            }
        }
        fun_10002490();
        ecx11 = 0;
        edx12 = g10009374;
        *reinterpret_cast<signed char*>(&ecx11) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&edx12) + 1);
        eax13 = edx12 & 0xff;
        ++g10009340;
        g10009380 = ecx11;
        g1000937c = eax13;
        g10009374 = edx12 >> 16;
        g10009378 = (eax13 << 8) + ecx11;
        eax14 = fun_100022c0();
        if (eax14) {
            eax15 = reinterpret_cast<void***>(GetCommandLineA());
            g1000bf90 = eax15;
            eax16 = fun_10002d80();
            zf17 = g1000bf90 == 0;
            g10009344 = eax16;
            if (zf17 || !eax16) {
                fun_100024b0();
                return 0;
            } else {
                fun_100024c0();
                fun_10002d70();
                fun_100027e0();
                fun_10002700(__return_address(), a1);
                fun_10002190();
                return 1;
            }
        } else {
            fun_100024b0();
            return 0;
        }
    }
}

void** g10009030 = reinterpret_cast<void**>(0);

int32_t GetCurrentProcessId = 0xc23c;

int32_t g10009034 = 0;

void** fun_100013e0(void** a1, void** a2, void** a3) {
    int32_t eax4;

    if (!a2) {
        fun_10001530();
        return 1;
    } else {
        if (a2 == 1) {
            g10009030 = a1;
            GetModuleFileNameA();
            eax4 = reinterpret_cast<int32_t>(GetCurrentProcessId());
            g10009034 = eax4;
            goto 0;
        } else {
            return 1;
        }
    }
}

void fun_10004c10(void** a1, void** a2, void** a3);

int32_t TlsFree = 0xc406;

void fun_10002320(void** a1, void** a2) {
    int32_t eax3;

    fun_10004c10(__return_address(), a1, a2);
    eax3 = g100093b0;
    if (eax3 != -1) {
        TlsFree(eax3);
        g100093b0 = -1;
    }
    return;
}

int32_t g10009350 = 0;

void fun_10002f70(int32_t a1);

int32_t g100098f0 = 0;

void fun_10002f30() {
    int32_t eax1;
    int1_t zf2;
    int32_t eax3;

    eax1 = g10009350;
    if (eax1 == 1 || !eax1 && (zf2 = g10009354 == 1, zf2)) {
        fun_10002f70(0xfc);
        eax3 = g100098f0;
        if (eax3) {
            eax3();
        }
        fun_10002f70(0xff);
    }
    return;
}

struct s8 {
    unsigned char f0;
    signed char f1;
};

void* fun_10004b90(void* a1, void** a2, ...);

uint32_t g1000a08c = 1;

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0xe2);

uint32_t fun_100059e0(void* a1, uint32_t a2, ...);

/* (image base) */
int32_t image_base_ = 0x10006260;

void* fun_10004bb0(int32_t* a1, void** a2, void** a3);

uint32_t fun_10005c10(void* a1);

void* fun_10004b60(void** a1, ...);

void fun_10004a80(int32_t ecx);

void fun_10004b00(signed char* ecx);

void* fun_10004b20(void* a1, ...);

void** fun_10005a80(int32_t a1, uint32_t a2, void** a3, void** a4);

uint32_t fun_10005ac0(void** a1, void** a2, uint32_t a3);

void** g1000a090 = reinterpret_cast<void**>(46);

int32_t fun_10003e80(void** a1, struct s8* a2, void* a3) {
    signed char v4;
    void** v5;
    int32_t v6;
    void* ebx7;
    void* v8;
    void*** esp9;
    void** v10;
    void** ebp11;
    void** ebp12;
    void* eax13;
    int32_t esi14;
    int1_t less_or_equal15;
    void** ecx16;
    uint32_t eax17;
    uint32_t eax18;
    int32_t eax19;
    void** v20;
    signed char v21;
    signed char v22;
    void** v23;
    unsigned char al24;
    int1_t less_or_equal25;
    int32_t ecx26;
    void** edx27;
    uint32_t eax28;
    uint32_t eax29;
    void* ecx30;
    void* eax31;
    void* eax32;
    uint32_t eax33;
    struct s8* esi34;
    void* eax35;
    void* eax36;
    int32_t ecx37;
    void** eax38;
    struct s8* esi39;
    void* ecx40;
    void** edi41;
    int32_t esi42;
    void** v43;
    unsigned char v44;
    unsigned char v45;
    signed char v46;
    signed char v47;
    signed char v48;
    signed char v49;
    int32_t v50;
    int32_t eax51;
    int1_t less_or_equal52;
    int32_t v53;
    int32_t ecx54;
    uint32_t eax55;
    uint32_t eax56;
    void* eax57;
    uint32_t ecx58;
    int32_t eax59;
    struct s8* eax60;
    void** v61;
    void** v62;
    void* eax63;
    void* v64;
    signed char v65;
    int32_t ecx66;
    int32_t v67;
    void* eax68;
    uint32_t ecx69;
    int32_t eax70;
    struct s8* v71;
    int1_t less_or_equal72;
    void** ecx73;
    uint32_t eax74;
    uint32_t eax75;
    void* eax76;
    int1_t less_or_equal77;
    void** ecx78;
    uint32_t eax79;
    uint32_t eax80;
    void* eax81;
    int1_t less_or_equal82;
    void** ecx83;
    uint32_t eax84;
    uint32_t eax85;
    int1_t less_or_equal86;
    void** ecx87;
    uint32_t eax88;
    uint32_t eax89;
    void* eax90;
    void** eax91;
    void** tmp32_92;
    uint1_t cf93;
    void* eax94;
    void* ecx95;
    void* eax96;
    void* eax97;
    void* eax98;
    void* eax99;
    int32_t ecx100;
    struct s8* eax101;
    unsigned char cl102;
    unsigned char al103;
    unsigned char v104;
    unsigned char al105;
    void* v106;
    unsigned char cl107;
    void** edi108;
    int32_t eax109;
    void* eax110;
    void** ecx111;
    int32_t eax112;
    void** ecx113;
    uint32_t eax114;
    void** v115;
    void** ecx116;
    void* eax117;
    void* eax118;
    int1_t less_or_equal119;
    void** ecx120;
    uint32_t eax121;
    uint32_t eax122;
    int32_t eax123;
    void* eax124;
    int1_t zf125;
    int32_t eax126;
    void* eax127;
    int1_t less_or_equal128;
    void** ecx129;
    uint32_t eax130;
    uint32_t eax131;
    int32_t eax132;
    void* eax133;
    void* eax134;
    int32_t eax135;
    void* eax136;

    v4 = 0;
    v5 = reinterpret_cast<void**>(0);
    v6 = 0;
    ebx7 = v8;
    esp9 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x1c0 - 4 - 4 - 4 - 4);
    v10 = ebp11;
    ebp12 = a1;
    goto addr_10003eaa_2;
    addr_10004a0a_3:
    fun_10004b90(ebx7, ebp12, ebx7, ebp12);
    addr_10004a18_4:
    if (!reinterpret_cast<int1_t>(ebx7 == 0xffffffff)) {
        return v6;
    } else {
        if (v6 || v4) {
            return v6;
        } else {
            return -1;
        }
    }
    addr_100049fa_9:
    goto addr_10004a18_4;
    addr_100049fc_10:
    fun_10004b90(eax13, ebp12, eax13, ebp12);
    goto addr_10004a0a_3;
    while (1) {
        ++esi14;
        while (1) {
            less_or_equal15 = reinterpret_cast<int32_t>(g1000a08c) <= reinterpret_cast<int32_t>(1);
            if (less_or_equal15) {
                ecx16 = image_base_;
                eax17 = 0;
                *reinterpret_cast<void***>(&eax17) = *reinterpret_cast<void***>(ecx16 + reinterpret_cast<uint32_t>(ebx7) * 2);
                eax18 = eax17 & 4;
            } else {
                eax18 = fun_100059e0(ebx7, 4, ebx7, 4);
                esp9 = esp9 - 4 - 4 - 4 + 4 + 8;
            }
            if (!eax18 || (eax19 = esi14, --esi14, eax19 == 0)) {
                while (1) {
                    --v5;
                    fun_10004b90(ebx7, ebp12);
                    esp9 = esp9 - 4 - 4 - 4 + 4 + 8;
                    if (!v20) 
                        goto addr_10004a18_4;
                    if (!v21) {
                        ++v6;
                        image_base_(v22 - 1, v23, esp9 + 0x70);
                        esp9 = esp9 - 4 - 4 - 4 - 4 + 4 + 12;
                    }
                    while (1) {
                        v4 = reinterpret_cast<signed char>(v4 + 1);
                        a2 = reinterpret_cast<struct s8*>(&a2->f1);
                        while (1) {
                            if (reinterpret_cast<int1_t>(ebx7 == 0xffffffff)) {
                                if (a2->f0 != 37) 
                                    goto addr_10004a18_4;
                                if (a2->f1 != 0x6e) 
                                    goto addr_100049fa_9;
                            }
                            addr_10003eaa_2:
                            al24 = a2->f0;
                            if (!al24) 
                                goto addr_10004a18_4;
                            less_or_equal25 = reinterpret_cast<int32_t>(g1000a08c) <= reinterpret_cast<int32_t>(1);
                            if (less_or_equal25) {
                                ecx26 = 0;
                                edx27 = image_base_;
                                *reinterpret_cast<unsigned char*>(&ecx26) = al24;
                                eax28 = 0;
                                *reinterpret_cast<void***>(&eax28) = *reinterpret_cast<void***>(edx27 + ecx26 * 2);
                                eax29 = eax28 & 8;
                            } else {
                                ecx30 = reinterpret_cast<void*>(0);
                                *reinterpret_cast<unsigned char*>(&ecx30) = al24;
                                eax29 = fun_100059e0(ecx30, 8, ecx30, 8);
                                esp9 = esp9 - 4 - 4 - 4 + 4 + 8;
                            }
                            if (eax29) {
                                --v5;
                                eax31 = fun_10004bb0(esp9 + 28, ebp12, ebp12);
                                fun_10004b90(eax31, ebp12, eax31, ebp12);
                                esp9 = esp9 - 4 - 4 - 4 - 4 + 4 + 8 - 4 - 4 + 4 + 8;
                                do {
                                    eax32 = reinterpret_cast<void*>(0);
                                    a2 = reinterpret_cast<struct s8*>(&a2->f1);
                                    *reinterpret_cast<unsigned char*>(&eax32) = a2->f0;
                                    eax33 = fun_10005c10(eax32);
                                    esp9 = esp9 - 4 - 4 + 4 + 4;
                                } while (eax33);
                            }
                            if (a2->f0 == 37) 
                                break;
                            esi34 = a2;
                            a2 = reinterpret_cast<struct s8*>(&a2->f1);
                            ++v5;
                            eax35 = fun_10004b60(ebp12, ebp12);
                            esp9 = esp9 - 4 - 4 + 4 + 4;
                            ebx7 = eax35;
                            eax36 = reinterpret_cast<void*>(0);
                            *reinterpret_cast<unsigned char*>(&eax36) = esi34->f0;
                            if (eax36 != ebx7) 
                                goto addr_10004a0a_3;
                            ecx37 = 0;
                            eax38 = image_base_;
                            *reinterpret_cast<void***>(&ecx37) = *reinterpret_cast<void***>(&ebx7);
                            if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax38 + ecx37 * 2) + 1) & 0x80)) 
                                continue;
                            esi39 = a2;
                            a2 = reinterpret_cast<struct s8*>(&a2->f1);
                            eax13 = fun_10004b60(ebp12, ebp12);
                            esp9 = esp9 - 4 - 4 + 4 + 4;
                            ecx40 = reinterpret_cast<void*>(0);
                            *reinterpret_cast<unsigned char*>(&ecx40) = esi39->f0;
                            if (ecx40 != eax13) 
                                goto addr_100049fc_10;
                            v5 = v5 + 1 - 1;
                        }
                        edi41 = reinterpret_cast<void**>(0);
                        esi42 = 0;
                        v20 = reinterpret_cast<void**>(0);
                        v43 = reinterpret_cast<void**>(0);
                        v44 = 0;
                        v45 = 0;
                        v46 = 0;
                        v21 = 0;
                        v47 = 0;
                        v48 = 0;
                        v49 = 0;
                        v22 = 1;
                        v50 = 0;
                        do {
                            eax51 = 0;
                            a2 = reinterpret_cast<struct s8*>(&a2->f1);
                            less_or_equal52 = reinterpret_cast<int32_t>(g1000a08c) <= reinterpret_cast<int32_t>(1);
                            *reinterpret_cast<unsigned char*>(&eax51) = a2->f0;
                            v53 = eax51;
                            if (less_or_equal52) {
                                ecx54 = 0;
                                edx27 = image_base_;
                                *reinterpret_cast<signed char*>(&ecx54) = *reinterpret_cast<signed char*>(&v53);
                                eax55 = 0;
                                *reinterpret_cast<void***>(&eax55) = *reinterpret_cast<void***>(edx27 + ecx54 * 2);
                                eax56 = eax55 & 4;
                            } else {
                                eax57 = reinterpret_cast<void*>(0);
                                *reinterpret_cast<signed char*>(&eax57) = *reinterpret_cast<signed char*>(&v53);
                                eax56 = fun_100059e0(eax57, 4);
                                esp9 = esp9 - 4 - 4 - 4 + 4 + 8;
                            }
                            if (!eax56) {
                                ecx58 = v53 - 42;
                                if (ecx58 > 77) 
                                    goto addr_10004038_40;
                                eax59 = 0;
                                *reinterpret_cast<signed char*>(&eax59) = *reinterpret_cast<signed char*>(ecx58 + reinterpret_cast<int32_t>(fun_10004a80));
                                goto *reinterpret_cast<int32_t*>(eax59 * 4 + 0x10004a5c);
                            } else {
                                ++v43;
                                esi42 = v53 + (esi42 + esi42 * 4) * 2 - 48;
                                continue;
                            }
                            v21 = reinterpret_cast<signed char>(v21 + 1);
                            continue;
                            if (a2->f1 != 54 || (eax60 = a2 + 1, eax60->f0 != 52)) {
                                addr_10004038_40:
                                v47 = reinterpret_cast<signed char>(v47 + 1);
                                continue;
                            } else {
                                a2 = eax60;
                                ++v50;
                                v61 = reinterpret_cast<void**>(0);
                                v62 = reinterpret_cast<void**>(0);
                                continue;
                            }
                            v22 = reinterpret_cast<signed char>(v22 + 1);
                            continue;
                            v22 = reinterpret_cast<signed char>(v22 - 1);
                            v49 = reinterpret_cast<signed char>(v49 - 1);
                            continue;
                            v22 = reinterpret_cast<signed char>(v22 + 1);
                            v49 = reinterpret_cast<signed char>(v49 + 1);
                        } while (!v47);
                        if (!v21) {
                            eax63 = a3;
                            a3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(a3) + 4);
                            v64 = eax63;
                            v23 = *reinterpret_cast<void***>(reinterpret_cast<int32_t>(a3) - 4);
                        }
                        v65 = 0;
                        if (!v49) {
                            if (a2->f0 == 83 || a2->f0 == 67) {
                                v49 = reinterpret_cast<signed char>(v49 + 1);
                            } else {
                                v49 = reinterpret_cast<signed char>(v49 - 1);
                            }
                        }
                        ecx66 = 0;
                        *reinterpret_cast<unsigned char*>(&ecx66) = reinterpret_cast<unsigned char>(a2->f0 | 32);
                        v67 = ecx66;
                        if (ecx66 != 0x6e) {
                            if (ecx66 == 99 || ecx66 == 0x7b) {
                                ++v5;
                                eax68 = fun_10004b60(ebp12);
                                esp9 = esp9 - 4 - 4 + 4 + 4;
                            } else {
                                eax68 = fun_10004bb0(esp9 + 28, ebp12, v10);
                                esp9 = esp9 - 4 - 4 - 4 + 4 + 8;
                            }
                            ebx7 = eax68;
                        }
                        if (!v43) 
                            goto addr_100040e6_63;
                        if (!esi42) 
                            goto addr_10004a0a_3;
                        addr_100040e6_63:
                        ecx69 = reinterpret_cast<uint32_t>(v67 - 99);
                        if (ecx69 > 24) 
                            goto addr_10004101_65;
                        eax70 = 0;
                        *reinterpret_cast<signed char*>(&eax70) = *reinterpret_cast<signed char*>(ecx69 + reinterpret_cast<int32_t>(fun_10004b00));
                        switch (eax70) {
                        case 0:
                            if (!v43) {
                                ++esi42;
                                ++v43;
                            }
                            if (v49 > 0) {
                                v48 = 1;
                            }
                            v71 = reinterpret_cast<struct s8*>("]");
                            break;
                            addr_1000435b_72:
                        case 1:
                        case 5:
                        case 8:
                            if (!reinterpret_cast<int1_t>(ebx7 == 45)) {
                                if (!reinterpret_cast<int1_t>(ebx7 == 43)) {
                                    addr_10004679_74:
                                    if (!v50) {
                                        if (!v65) {
                                            do {
                                                if (v67 == 0x78 || v67 == 0x70) {
                                                    less_or_equal72 = reinterpret_cast<int32_t>(g1000a08c) <= reinterpret_cast<int32_t>(1);
                                                    if (less_or_equal72) {
                                                        ecx73 = image_base_;
                                                        eax74 = 0;
                                                        *reinterpret_cast<void***>(&eax74) = *reinterpret_cast<void***>(ecx73 + reinterpret_cast<uint32_t>(ebx7) * 2);
                                                        eax75 = eax74 & 0x80;
                                                    } else {
                                                        eax75 = fun_100059e0(ebx7, 0x80);
                                                        esp9 = esp9 - 4 - 4 - 4 + 4 + 8;
                                                    }
                                                    if (!eax75) 
                                                        goto addr_100048cb_81;
                                                    edi41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi41) << 4);
                                                    eax76 = fun_10004b20(ebx7);
                                                    esp9 = esp9 - 4 - 4 + 4 + 4;
                                                    ebx7 = eax76;
                                                } else {
                                                    less_or_equal77 = reinterpret_cast<int32_t>(g1000a08c) <= reinterpret_cast<int32_t>(1);
                                                    if (less_or_equal77) {
                                                        ecx78 = image_base_;
                                                        eax79 = 0;
                                                        *reinterpret_cast<void***>(&eax79) = *reinterpret_cast<void***>(ecx78 + reinterpret_cast<uint32_t>(ebx7) * 2);
                                                        eax80 = eax79 & 4;
                                                    } else {
                                                        eax80 = fun_100059e0(ebx7, 4);
                                                        esp9 = esp9 - 4 - 4 - 4 + 4 + 8;
                                                    }
                                                    if (!eax80) 
                                                        goto addr_100048cb_81;
                                                    if (v67 != 0x6f) 
                                                        goto addr_10004881_88; else 
                                                        goto addr_10004877_89;
                                                }
                                                addr_100048cf_90:
                                                if (v65) {
                                                    --v5;
                                                    fun_10004b90(ebx7, ebp12);
                                                    esp9 = esp9 - 4 - 4 - 4 + 4 + 8;
                                                    continue;
                                                } else {
                                                    edi41 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebx7) + reinterpret_cast<unsigned char>(edi41) + 0xffffffd0);
                                                    ++v20;
                                                    if (!v43 || (--esi42, !!esi42)) {
                                                        ++v5;
                                                        eax81 = fun_10004b60(ebp12);
                                                        esp9 = esp9 - 4 - 4 + 4 + 4;
                                                        ebx7 = eax81;
                                                        continue;
                                                    } else {
                                                        v65 = reinterpret_cast<signed char>(v65 + 1);
                                                        continue;
                                                    }
                                                }
                                                addr_10004881_88:
                                                edi41 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi41 + reinterpret_cast<unsigned char>(edi41) * 4) * 2);
                                                goto addr_100048cf_90;
                                                addr_10004877_89:
                                                if (reinterpret_cast<int32_t>(ebx7) >= reinterpret_cast<int32_t>(56)) {
                                                    addr_100048cb_81:
                                                    v65 = reinterpret_cast<signed char>(v65 + 1);
                                                    goto addr_100048cf_90;
                                                } else {
                                                    edi41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi41) << 3);
                                                    goto addr_100048cf_90;
                                                }
                                            } while (!v65);
                                        }
                                        if (v46) {
                                            edi41 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(edi41));
                                        }
                                    } else {
                                        if (!v65) {
                                            do {
                                                if (v67 != 0x78) {
                                                    less_or_equal82 = reinterpret_cast<int32_t>(g1000a08c) <= reinterpret_cast<int32_t>(1);
                                                    if (less_or_equal82) {
                                                        ecx83 = image_base_;
                                                        eax84 = 0;
                                                        *reinterpret_cast<void***>(&eax84) = *reinterpret_cast<void***>(ecx83 + reinterpret_cast<uint32_t>(ebx7) * 2);
                                                        eax85 = eax84 & 4;
                                                    } else {
                                                        eax85 = fun_100059e0(ebx7, 4, ebx7, 4);
                                                        esp9 = esp9 - 4 - 4 - 4 + 4 + 8;
                                                    }
                                                    if (!eax85) 
                                                        goto addr_100047b2_105;
                                                    if (v67 == 0x6f) 
                                                        goto addr_10004723_107;
                                                } else {
                                                    less_or_equal86 = reinterpret_cast<int32_t>(g1000a08c) <= reinterpret_cast<int32_t>(1);
                                                    if (less_or_equal86) {
                                                        ecx87 = image_base_;
                                                        eax88 = 0;
                                                        *reinterpret_cast<void***>(&eax88) = *reinterpret_cast<void***>(ecx87 + reinterpret_cast<uint32_t>(ebx7) * 2);
                                                        eax89 = eax88 & 0x80;
                                                    } else {
                                                        eax89 = fun_100059e0(ebx7, 0x80, ebx7, 0x80);
                                                        esp9 = esp9 - 4 - 4 - 4 + 4 + 8;
                                                    }
                                                    if (!eax89) 
                                                        goto addr_100047b2_105;
                                                    __asm__("shld ecx, eax, 0x4");
                                                    v61 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v61) << 4);
                                                    v62 = v62;
                                                    eax90 = fun_10004b20(ebx7, ebx7);
                                                    esp9 = esp9 - 4 - 4 + 4 + 4;
                                                    ebx7 = eax90;
                                                    goto addr_100047b6_113;
                                                }
                                                __asm__("shld eax, ecx, 0x1");
                                                __asm__("shld edx, eax, 0x3");
                                                edx27 = v61;
                                                eax91 = fun_10005a80(10, 0, edx27, v62);
                                                esp9 = esp9 - 4 - 4 - 4 - 4 - 4 + 16 + 4;
                                                v61 = eax91;
                                                v62 = edx27;
                                                addr_100047b6_113:
                                                if (v65) {
                                                    --v5;
                                                    fun_10004b90(ebx7, ebp12, ebx7, ebp12);
                                                    esp9 = esp9 - 4 - 4 - 4 + 4 + 8;
                                                    continue;
                                                } else {
                                                    ++v20;
                                                    __asm__("cdq ");
                                                    tmp32_92 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v61) + (reinterpret_cast<uint32_t>(ebx7) + 0xffffffd0));
                                                    cf93 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(tmp32_92) < reinterpret_cast<unsigned char>(v61));
                                                    v61 = tmp32_92;
                                                    v62 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v62) + reinterpret_cast<unsigned char>(edx27) + cf93);
                                                    if (!v43 || (--esi42, !!esi42)) {
                                                        ++v5;
                                                        eax94 = fun_10004b60(ebp12, ebp12);
                                                        esp9 = esp9 - 4 - 4 + 4 + 4;
                                                        ebx7 = eax94;
                                                        continue;
                                                    } else {
                                                        v65 = reinterpret_cast<signed char>(v65 + 1);
                                                        continue;
                                                    }
                                                }
                                                addr_10004723_107:
                                                if (reinterpret_cast<int32_t>(ebx7) >= reinterpret_cast<int32_t>(56)) {
                                                    addr_100047b2_105:
                                                    v65 = reinterpret_cast<signed char>(v65 + 1);
                                                    goto addr_100047b6_113;
                                                } else {
                                                    __asm__("shld ecx, eax, 0x3");
                                                    v61 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v61) << 3);
                                                    v62 = v62;
                                                    goto addr_100047b6_113;
                                                }
                                            } while (!v65);
                                        }
                                        if (v46) {
                                            ecx95 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v62) + reinterpret_cast<uint1_t>(!!v61));
                                            v61 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v61));
                                            v62 = reinterpret_cast<void**>(-reinterpret_cast<uint32_t>(ecx95));
                                        }
                                    }
                                } else {
                                    addr_100045c9_123:
                                    --esi42;
                                    if (esi42 || !v43) {
                                        ++v5;
                                        eax96 = fun_10004b60(ebp12);
                                        esp9 = esp9 - 4 - 4 + 4 + 4;
                                        ebx7 = eax96;
                                        goto addr_10004679_74;
                                    } else {
                                        v65 = 1;
                                        goto addr_10004679_74;
                                    }
                                }
                                if (!1) {
                                    v20 = reinterpret_cast<void**>(0);
                                }
                                if (!v20) 
                                    goto addr_10004a18_4;
                                if (v21) 
                                    continue;
                                ++v6;
                                goto addr_10004946_131;
                            } else {
                                v46 = 1;
                                goto addr_100045c9_123;
                            }
                        case 3:
                            v67 = 100;
                        case 9:
                            if (!reinterpret_cast<int1_t>(ebx7 == 45)) {
                                if (!reinterpret_cast<int1_t>(ebx7 == 43)) {
                                    addr_10004616_136:
                                    if (reinterpret_cast<int1_t>(ebx7 == 48)) {
                                        ++v5;
                                        eax97 = fun_10004b60(ebp12);
                                        esp9 = esp9 - 4 - 4 + 4 + 4;
                                        ebx7 = eax97;
                                        if (*reinterpret_cast<void***>(&ebx7) == 0x78 || *reinterpret_cast<void***>(&ebx7) == 88) {
                                            ++v5;
                                            eax98 = fun_10004b60(ebp12);
                                            v67 = 0x78;
                                            esp9 = esp9 - 4 - 4 + 4 + 4;
                                            ebx7 = eax98;
                                            goto addr_10004679_74;
                                        } else {
                                            v20 = reinterpret_cast<void**>(1);
                                            if (v67 == 0x78) {
                                                --v5;
                                                fun_10004b90(ebx7, ebp12);
                                                esp9 = esp9 - 4 - 4 - 4 + 4 + 8;
                                                ebx7 = reinterpret_cast<void*>(48);
                                                goto addr_10004679_74;
                                            } else {
                                                v67 = 0x6f;
                                                goto addr_10004679_74;
                                            }
                                        }
                                    }
                                } else {
                                    addr_100045f6_142:
                                    --esi42;
                                    if (esi42 || !v43) {
                                        ++v5;
                                        eax99 = fun_10004b60(ebp12);
                                        esp9 = esp9 - 4 - 4 + 4 + 4;
                                        ebx7 = eax99;
                                        goto addr_10004616_136;
                                    } else {
                                        v65 = 1;
                                        goto addr_10004616_136;
                                    }
                                }
                            } else {
                                v46 = 1;
                                goto addr_100045f6_142;
                            }
                        case 4:
                            edi41 = v5;
                            if (v21) 
                                continue;
                            goto addr_10004946_131;
                        case 6:
                            v22 = 1;
                            goto addr_1000435b_72;
                        case 7:
                            if (v49 > 0) {
                                v48 = 1;
                            }
                            v71 = reinterpret_cast<struct s8*>(" \t-\r]");
                            break;
                        case 10:
                            if (v49 > 0) {
                                v48 = 1;
                            }
                            a2 = reinterpret_cast<struct s8*>(&a2->f1);
                            v71 = a2;
                            if (a2->f0 != 94) {
                                addr_100043b1_155:
                                ecx100 = 8;
                            } else {
                                v71 = reinterpret_cast<struct s8*>(&a2->f1);
                                break;
                            }
                            while (ecx100) {
                                --ecx100;
                                esi42 = esi42 + 4;
                            }
                            if (v67 == 0x7b && v71->f0 == 93) {
                                v44 = 93;
                                v71 = reinterpret_cast<struct s8*>(&v71->f1);
                            }
                            if (v71->f0 != 93) {
                                do {
                                    eax101 = v71;
                                    v71 = reinterpret_cast<struct s8*>(&v71->f1);
                                    cl102 = eax101->f0;
                                    if (cl102 != 45 || (!v44 || (al103 = v71->f0, al103 == 93))) {
                                        edx27 = reinterpret_cast<void**>(0);
                                        v44 = cl102;
                                        *reinterpret_cast<unsigned char*>(&edx27) = reinterpret_cast<unsigned char>(cl102 >> 3);
                                        *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp9) + reinterpret_cast<unsigned char>(edx27) + 80) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp9) + reinterpret_cast<unsigned char>(edx27) + 80) | reinterpret_cast<unsigned char>(1 << reinterpret_cast<unsigned char>(cl102 & 7)));
                                    } else {
                                        v71 = reinterpret_cast<struct s8*>(&v71->f1);
                                        if (v44 >= al103) {
                                            v104 = v44;
                                            v44 = al103;
                                        } else {
                                            v104 = al103;
                                        }
                                        al105 = v44;
                                        if (al105 <= v104) {
                                            do {
                                                v106 = reinterpret_cast<void*>(0);
                                                *reinterpret_cast<unsigned char*>(&v106) = reinterpret_cast<unsigned char>(al105 >> 3);
                                                cl107 = reinterpret_cast<unsigned char>(al105 & 7);
                                                al105 = reinterpret_cast<unsigned char>(al105 + 1);
                                                *reinterpret_cast<unsigned char*>(&edx27) = reinterpret_cast<unsigned char>(1 << cl107);
                                                *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp9) + reinterpret_cast<int32_t>(v106) + 80) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp9) + reinterpret_cast<int32_t>(v106) + 80) | *reinterpret_cast<unsigned char*>(&edx27));
                                            } while (v104 >= al105);
                                        }
                                        v44 = 0;
                                    }
                                } while (v71->f0 != 93);
                            }
                            if (!v71->f0) 
                                goto addr_10004a18_4;
                            if (v67 == 0x7b) {
                                a2 = v71;
                            }
                            edi108 = v23;
                            --v5;
                            fun_10004b90(ebx7, ebp12);
                            esp9 = esp9 - 4 - 4 - 4 + 4 + 8;
                            while (!v43 || (eax109 = esi42, --esi42, !!eax109)) {
                                ++v5;
                                eax110 = fun_10004b60(ebp12);
                                esp9 = esp9 - 4 - 4 + 4 + 4;
                                ebx7 = eax110;
                                if (ebx7 == 0xffffffff) 
                                    goto addr_10004571_177;
                                edx27 = reinterpret_cast<void**>(1 << reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&ebx7)) & 7));
                                if (!(reinterpret_cast<unsigned char>(edx27) & reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp9) + (reinterpret_cast<int32_t>(eax110) >> 3) + 80) ^ v45))))) 
                                    goto addr_10004571_177;
                                if (v21) {
                                    ++edi108;
                                } else {
                                    if (!v48) {
                                        ecx111 = v23;
                                        ++v23;
                                        *reinterpret_cast<void***>(ecx111) = *reinterpret_cast<void***>(&ebx7);
                                    } else {
                                        eax112 = 0;
                                        ecx113 = image_base_;
                                        *reinterpret_cast<void***>(&eax112) = *reinterpret_cast<void***>(&ebx7);
                                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx113 + eax112 * 2) + 1) & 0x80) {
                                            ++v5;
                                            fun_10004b60(ebp12);
                                            esp9 = esp9 - 4 - 4 + 4 + 4;
                                        }
                                        eax114 = g1000a08c;
                                        edx27 = reinterpret_cast<void**>(esp9 + 24);
                                        fun_10005ac0(edx27, esp9 + 26, eax114);
                                        edx27 = v115;
                                        ecx116 = v23;
                                        v23 = v23 + 2;
                                        *reinterpret_cast<void***>(ecx116) = edx27;
                                        esp9 = esp9 - 4 - 4 - 4 - 4 + 4 + 12;
                                    }
                                }
                            }
                            addr_1000457f_186:
                            if (edi108 == v23) 
                                goto addr_10004a18_4;
                            if (v21) 
                                continue;
                            ++v6;
                            if (v67 == 99) 
                                continue;
                            if (!v48) {
                                *reinterpret_cast<void***>(v23) = reinterpret_cast<void**>(0);
                                continue;
                            } else {
                                *reinterpret_cast<void***>(v23) = reinterpret_cast<void**>(0);
                                continue;
                            }
                            addr_10004571_177:
                            --v5;
                            fun_10004b90(ebx7, ebp12);
                            esp9 = esp9 - 4 - 4 - 4 + 4 + 8;
                            goto addr_1000457f_186;
                            addr_10004101_65:
                        case 11:
                            eax117 = reinterpret_cast<void*>(0);
                            *reinterpret_cast<unsigned char*>(&eax117) = a2->f0;
                            if (eax117 != ebx7) 
                                goto addr_10004a0a_3;
                            v4 = reinterpret_cast<signed char>(v4 - 1);
                            if (v21) 
                                continue;
                            a3 = v64;
                            continue;
                        case 2:
                            goto 0x10004158;
                        }
                        v45 = 0xff;
                        goto addr_100043b1_155;
                        addr_10004946_131:
                        if (!v50) {
                            if (!v22) {
                                *reinterpret_cast<void***>(v23) = edi41;
                            } else {
                                *reinterpret_cast<void***>(v23) = edi41;
                            }
                        } else {
                            edx27 = v23;
                            *reinterpret_cast<void***>(edx27) = v61;
                            *reinterpret_cast<void***>(edx27 + 4) = v62;
                        }
                    }
                    if (!reinterpret_cast<int1_t>(ebx7 == 45)) {
                        if (!reinterpret_cast<int1_t>(ebx7 == 43)) {
                            addr_10004181_201:
                            if (!v43 || esi42 > 0x15d) {
                                esi42 = 0x15d;
                            }
                        } else {
                            addr_10004171_203:
                            --esi42;
                            ++v5;
                            eax118 = fun_10004b60(ebp12);
                            esp9 = esp9 - 4 - 4 + 4 + 4;
                            ebx7 = eax118;
                            goto addr_10004181_201;
                        }
                        while (1) {
                            less_or_equal119 = reinterpret_cast<int32_t>(g1000a08c) <= reinterpret_cast<int32_t>(1);
                            if (less_or_equal119) {
                                ecx120 = image_base_;
                                eax121 = 0;
                                *reinterpret_cast<void***>(&eax121) = *reinterpret_cast<void***>(ecx120 + reinterpret_cast<uint32_t>(ebx7) * 2);
                                eax122 = eax121 & 4;
                            } else {
                                eax122 = fun_100059e0(ebx7, 4);
                                esp9 = esp9 - 4 - 4 - 4 + 4 + 8;
                            }
                            if (!eax122) 
                                break;
                            eax123 = esi42;
                            --esi42;
                            if (!eax123) 
                                break;
                            ++v20;
                            ++v5;
                            eax124 = fun_10004b60(ebp12);
                            esp9 = esp9 - 4 - 4 + 4 + 4;
                            ebx7 = eax124;
                        }
                        zf125 = *reinterpret_cast<void***>(&ebx7) == g1000a090;
                        if (zf125 && (eax126 = esi42, --esi42, !!eax126)) {
                            ++v5;
                            eax127 = fun_10004b60(ebp12, ebp12);
                            esp9 = esp9 - 4 - 4 + 4 + 4;
                            ebx7 = eax127;
                            while (1) {
                                less_or_equal128 = reinterpret_cast<int32_t>(g1000a08c) <= reinterpret_cast<int32_t>(1);
                                if (less_or_equal128) {
                                    ecx129 = image_base_;
                                    eax130 = 0;
                                    *reinterpret_cast<void***>(&eax130) = *reinterpret_cast<void***>(ecx129 + reinterpret_cast<uint32_t>(ebx7) * 2);
                                    eax131 = eax130 & 4;
                                } else {
                                    eax131 = fun_100059e0(ebx7, 4, ebx7, 4);
                                    esp9 = esp9 - 4 - 4 - 4 + 4 + 8;
                                }
                                if (!eax131) 
                                    break;
                                eax132 = esi42;
                                --esi42;
                                if (!eax132) 
                                    break;
                                ++v20;
                                ++v5;
                                eax133 = fun_10004b60(ebp12, ebp12);
                                esp9 = esp9 - 4 - 4 + 4 + 4;
                                ebx7 = eax133;
                            }
                        }
                        if (!v20) 
                            continue;
                        if (ebx7 == 0x65) 
                            goto addr_10004261_220;
                        if (!reinterpret_cast<int1_t>(ebx7 == 69)) 
                            continue;
                        addr_10004261_220:
                        esi14 = esi42 - 1;
                        if (esi42) 
                            break;
                    } else {
                        goto addr_10004171_203;
                    }
                }
                ++v5;
                eax134 = fun_10004b60(ebp12, ebp12);
                esp9 = esp9 - 4 - 4 + 4 + 4;
                ebx7 = eax134;
                if (reinterpret_cast<int1_t>(ebx7 == 45)) 
                    goto addr_10004280_224;
            } else {
                ++v20;
                goto addr_10004295_226;
            }
            if (!reinterpret_cast<int1_t>(ebx7 == 43)) 
                continue;
            addr_1000428b_228:
            eax135 = esi14;
            --esi14;
            if (!eax135) 
                break;
            addr_10004295_226:
            ++v5;
            eax136 = fun_10004b60(ebp12, ebp12);
            esp9 = esp9 - 4 - 4 + 4 + 4;
            ebx7 = eax136;
            continue;
            addr_10004280_224:
            goto addr_1000428b_228;
        }
    }
}

void fun_100022a0(int32_t* a1, int32_t* a2) {
    int32_t* edi3;
    int32_t* esi4;
    int32_t eax5;

    edi3 = a2;
    esi4 = a1;
    if (reinterpret_cast<uint32_t>(edi3) > reinterpret_cast<uint32_t>(esi4)) {
        do {
            eax5 = *esi4;
            if (eax5) {
                eax5();
            }
            ++esi4;
        } while (reinterpret_cast<uint32_t>(edi3) > reinterpret_cast<uint32_t>(esi4));
    }
    return;
}

signed char* fun_10004cf0(void*** a1);

signed char* fun_10002290() {
    signed char* eax1;

    eax1 = fun_10004cf0(13);
    return eax1;
}

void fun_10004be0();

int32_t TlsAlloc = 0xc3fa;

void** fun_10004df0(uint32_t a1, int32_t a2);

void fun_10002350(void** a1, int32_t a2, void** a3);

int32_t GetCurrentThreadId = 0xc3d6;

int32_t fun_100022c0() {
    int32_t eax1;
    void** eax2;
    int32_t eax3;
    int32_t eax4;
    void** eax5;

    fun_10004be0();
    eax1 = reinterpret_cast<int32_t>(TlsAlloc());
    g100093b0 = eax1;
    if (eax1 != -1) {
        eax2 = fun_10004df0(1, 0x74);
        if (!eax2 || (eax3 = g100093b0, eax4 = reinterpret_cast<int32_t>(TlsSetValue()), eax4 == 0)) {
            return 0;
        } else {
            fun_10002350(eax2, eax3, eax2);
            eax5 = reinterpret_cast<void**>(GetCurrentThreadId());
            *reinterpret_cast<void***>(eax2) = eax5;
            *reinterpret_cast<void***>(eax2 + 4) = reinterpret_cast<void**>(0xffffffff);
            goto eax2;
        }
    } else {
        return 0;
    }
}

void fun_10002350(void** a1, int32_t a2, void** a3) {
    *reinterpret_cast<int32_t*>(a1 + 80) = 0x10009a48;
    *reinterpret_cast<void***>(a1 + 20) = reinterpret_cast<void**>(1);
    return;
}

int32_t HeapAlloc = 0xc5a4;

int32_t g1000a098 = 0;

int32_t fun_10005dd0(void** a1, void** a2, void** a3);

void** fun_10004df0(uint32_t a1, int32_t a2) {
    int32_t v3;
    void** v4;
    void** esi5;
    void** v6;
    void** edi7;
    void** edi8;
    int32_t esi9;
    int32_t eax10;
    int32_t eax11;
    int1_t zf12;
    int32_t eax13;

    v3 = reinterpret_cast<int32_t>(__return_address());
    v4 = esi5;
    v6 = edi7;
    edi8 = reinterpret_cast<void**>(a2 * a1);
    if (!edi8) {
        edi8 = reinterpret_cast<void**>(1);
    }
    esi9 = HeapAlloc;
    eax10 = g1000bf80;
    do {
        if (reinterpret_cast<unsigned char>(edi8) <= reinterpret_cast<unsigned char>(0xffffffe0)) {
            eax11 = reinterpret_cast<int32_t>(esi9(eax10, 8, edi8));
        } else {
            eax11 = 0;
        }
        if (eax11) 
            break;
        zf12 = g1000a098 == 0;
        if (zf12) 
            break;
        eax13 = fun_10005dd0(edi8, v6, v4);
        eax10 = g1000bf80;
    } while (eax13);
    goto addr_10004e3d_10;
    addr_10004e3f_11:
    goto v3;
    addr_10004e3d_10:
    goto addr_10004e3f_11;
}

int32_t HeapFree = 0xc5b0;

void** fun_10004e50(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** eax10;
    int32_t eax11;

    eax10 = a1;
    if (eax10) {
        eax11 = g1000bf80;
        eax10 = reinterpret_cast<void**>(HeapFree(eax11, 0, eax10));
    }
    return eax10;
}

/* (image base) */
int32_t image_base_ = 0x100021c0;

void** fun_10001f10(int32_t a1) {
    int32_t eax2;
    int1_t zf3;
    void** eax4;

    eax2 = g10009350;
    if (eax2 == 1 || !eax2 && (zf3 = g10009354 == 1, zf3)) {
        fun_10002f30();
    }
    fun_10002f70(a1);
    eax4 = reinterpret_cast<void**>(image_base_(0xff));
    return eax4;
}

void** fun_10004e90(void** a1, int32_t a2);

void** fun_10004e70(void** a1, void** a2) {
    int32_t eax3;
    void** eax4;

    eax3 = g1000a098;
    eax4 = fun_10004e90(a1, eax3);
    return eax4;
}

void fun_10002880(void*** a1, void** a2, void** a3, int32_t* a4, int32_t* a5) {
    int32_t* ecx6;
    void*** esi7;
    void** eax8;
    void** edx9;
    int32_t edx10;
    void** dl11;
    int32_t ebx12;
    uint32_t edi13;
    void** edx14;
    int32_t ebx15;
    uint32_t ebp16;
    void*** edx17;
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
        a2 = a2 + 4;
        *reinterpret_cast<void***>(edx9) = eax8;
    }
    if (*esi7 == 34) {
        ++esi7;
        if (*esi7 != 34) {
            do {
                if (!*esi7) 
                    break;
                edx10 = 0;
                *reinterpret_cast<void***>(&edx10) = *esi7;
                if (*reinterpret_cast<unsigned char*>(edx10 + 0x100093e1) & 4 && (*ecx6 = *ecx6 + 1, !!eax8)) {
                    ++esi7;
                    *reinterpret_cast<void***>(eax8) = *esi7;
                    ++eax8;
                }
                *ecx6 = *ecx6 + 1;
                if (eax8) {
                    *reinterpret_cast<void***>(eax8) = *esi7;
                    ++eax8;
                }
                ++esi7;
            } while (!reinterpret_cast<int1_t>(*esi7 == 34));
        }
        *ecx6 = *ecx6 + 1;
        if (eax8) {
            *reinterpret_cast<void***>(eax8) = reinterpret_cast<void**>(0);
            ++eax8;
        }
        if (reinterpret_cast<int1_t>(*esi7 == 34)) {
            ++esi7;
        }
    } else {
        do {
            *ecx6 = *ecx6 + 1;
            if (eax8) {
                *reinterpret_cast<void***>(eax8) = *esi7;
                ++eax8;
            }
            dl11 = *esi7;
            ++esi7;
            ebx12 = 0;
            *reinterpret_cast<void***>(&ebx12) = dl11;
            if (*reinterpret_cast<unsigned char*>(ebx12 + 0x100093e1) & 4) {
                *ecx6 = *ecx6 + 1;
                if (eax8) {
                    *reinterpret_cast<void***>(eax8) = *esi7;
                    ++eax8;
                }
                ++esi7;
            }
            if (dl11 == 32) 
                break;
            if (!dl11) 
                goto addr_100028f0_23;
        } while (!reinterpret_cast<int1_t>(dl11 == 9));
        if (dl11) {
            if (eax8) {
                *reinterpret_cast<void***>(eax8 + 0xffffffff) = reinterpret_cast<void**>(0);
            }
        } else {
            addr_100028f0_23:
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
            a2 = a2 + 4;
            *reinterpret_cast<void***>(edx14) = eax8;
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
                        *reinterpret_cast<void***>(eax8) = reinterpret_cast<void**>(92);
                        ++eax8;
                    }
                    edx19 = ebp18;
                    *ecx6 = *ecx6 + 1;
                    --ebp18;
                } while (edx19);
            }
            if (!*esi7) 
                break;
            if (edi13) 
                goto addr_100029e6_51;
            if (*esi7 == 32) 
                break;
            if (*esi7 == 9) 
                break;
            addr_100029e6_51:
            if (ebx15) {
                if (!eax8) {
                    ebx20 = 0;
                    *reinterpret_cast<void***>(&ebx20) = *esi7;
                    if (*reinterpret_cast<unsigned char*>(ebx20 + 0x100093e1) & 4) {
                        ++esi7;
                        *ecx6 = *ecx6 + 1;
                    }
                    *ecx6 = *ecx6 + 1;
                } else {
                    ebx21 = 0;
                    *reinterpret_cast<void***>(&ebx21) = *esi7;
                    if (*reinterpret_cast<unsigned char*>(ebx21 + 0x100093e1) & 4) {
                        *reinterpret_cast<void***>(eax8) = *esi7;
                        ++esi7;
                        ++eax8;
                        *ecx6 = *ecx6 + 1;
                    }
                    ++eax8;
                    ++esi7;
                    *reinterpret_cast<void***>(eax8 + 0xffffffff) = *esi7;
                    *ecx6 = *ecx6 + 1;
                    continue;
                }
            }
            ++esi7;
        }
        if (eax8) {
            *reinterpret_cast<void***>(eax8) = reinterpret_cast<void**>(0);
            ++eax8;
        }
        *ecx6 = *ecx6 + 1;
    }
    if (a2) {
        *reinterpret_cast<void***>(a2) = reinterpret_cast<void**>(0);
    }
    *a4 = *a4 + 1;
    return;
}

int32_t LeaveCriticalSection = 0xc58c;

signed char* fun_10004cf0(void*** a1) {
    int32_t ebp2;

    LeaveCriticalSection();
    goto ebp2;
}

void** g100094f0 = reinterpret_cast<void**>(0);

void** g100094e4 = reinterpret_cast<void**>(0);

void** g100094e8 = reinterpret_cast<void**>(0);

void** g100094f4 = reinterpret_cast<void**>(0);

void** g100094f8 = reinterpret_cast<void**>(0);

void fun_10002d40() {
    void*** edi1;
    int32_t ecx2;

    edi1 = reinterpret_cast<void***>(0x100093e0);
    ecx2 = 64;
    while (ecx2) {
        --ecx2;
        *edi1 = reinterpret_cast<void**>(0);
        edi1 = edi1 + 4;
    }
    *edi1 = reinterpret_cast<void**>(0);
    g100094f0 = reinterpret_cast<void**>(0);
    g100094e4 = reinterpret_cast<void**>(0);
    g100094e8 = reinterpret_cast<void**>(0);
    g100094f4 = reinterpret_cast<void**>(0);
    g100094f8 = reinterpret_cast<void**>(0);
    return;
}

void fun_10002d2c();

void** fun_10002ce0(void** a1) {
    uint32_t eax2;
    int32_t ecx3;

    eax2 = reinterpret_cast<uint32_t>(a1 - 0x3a4);
    if (eax2 > 18) 
        goto addr_10002cfd_2;
    ecx3 = 0;
    *reinterpret_cast<signed char*>(&ecx3) = *reinterpret_cast<signed char*>(eax2 + reinterpret_cast<int32_t>(fun_10002d2c));
    switch (ecx3) {
    case 0:
        return 0x411;
    case 1:
        return 0x804;
    case 2:
        return 0x412;
    case 3:
        return 0x404;
        addr_10002cfd_2:
    case 4:
        return 0;
    }
}

void fun_10004ef0(void* a1, int32_t a2, int32_t a3);

void fun_10002f70(int32_t a1) {
    int32_t eax2;
    int32_t* ecx3;
    int32_t edx4;
    void* esp5;
    int32_t ebx6;
    int1_t zf7;
    int1_t zf8;
    int1_t zf9;
    void** eax10;
    int32_t esi11;
    int32_t eax12;
    signed char* edx13;
    void* eax14;
    signed char* edi15;
    void* v16;
    int32_t ecx17;
    int32_t eax18;
    int32_t ebp19;
    void* eax20;
    void* esp21;
    int32_t ecx22;
    signed char* ebp23;
    int32_t ecx24;
    signed char* eax25;
    signed char v26;
    int32_t ecx27;
    void* eax28;
    void* esp29;
    signed char v30;
    int32_t ecx31;
    signed char* edi32;
    int32_t ecx33;
    void* eax34;
    uint32_t edx35;
    int32_t ecx36;
    void* eax37;
    signed char v38;
    uint32_t ecx39;
    uint32_t ecx40;
    signed char* edi41;
    int32_t ecx42;
    void* eax43;
    uint32_t edx44;
    int32_t ecx45;
    void* eax46;
    signed char v47;
    uint32_t ecx48;
    uint32_t ecx49;
    signed char* edi50;
    int32_t ecx51;
    void* eax52;
    uint32_t edx53;
    int32_t ecx54;
    void* eax55;
    signed char v56;
    uint32_t ecx57;
    uint32_t ecx58;
    void* esp59;
    int32_t v60;

    eax2 = 0;
    ecx3 = reinterpret_cast<int32_t*>(0x10009868);
    edx4 = a1;
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x1a8 - 4 - 4 - 4 - 4);
    do {
        if (*ecx3 == edx4) 
            break;
        ecx3 = ecx3 + 2;
        ++eax2;
    } while (reinterpret_cast<uint32_t>(ecx3) < 0x100098f0);
    ebx6 = eax2 * 8;
    if (*reinterpret_cast<int32_t*>(eax2 * 8 + 0x10009868) == edx4) {
        zf7 = g10009350 == 1;
        if (zf7 || (zf8 = g10009350 == 0, zf8) && (zf9 = g10009354 == 1, zf9)) {
            eax10 = g1000be80;
            esi11 = *reinterpret_cast<int32_t*>(eax10 + 72);
            if (esi11 == -1) {
                eax12 = reinterpret_cast<int32_t>(GetStdHandle(0xf4));
                esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4);
                esi11 = eax12;
            }
            edx13 = *reinterpret_cast<signed char**>(ebx6 + 0x1000986c);
            eax14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 + 20);
            edi15 = edx13;
            v16 = eax14;
            ecx17 = -1;
            eax18 = reinterpret_cast<int32_t>(eax14) - reinterpret_cast<int32_t>(eax14);
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
                ebp19 = GetModuleFileNameA;
                eax20 = reinterpret_cast<void*>(ebp19());
                esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 + 4);
                if (!eax20) {
                    ecx22 = 5;
                    while (ecx22) {
                        --ecx22;
                    }
                }
                ebp23 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp21) + 0xb4);
                ecx24 = -1;
                eax25 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax20) - reinterpret_cast<int32_t>(eax20));
                do {
                    if (!ecx24) 
                        break;
                    --ecx24;
                } while (v26 != *reinterpret_cast<signed char*>(&eax25));
                if (reinterpret_cast<uint32_t>(~ecx24) > 60) {
                    ecx27 = -1;
                    eax28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax25) - reinterpret_cast<int32_t>(eax25));
                    esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4);
                    do {
                        if (!ecx27) 
                            break;
                        --ecx27;
                    } while (v30 != *reinterpret_cast<signed char*>(&eax28));
                    ebp23 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp29) + ~ecx27 + 0x7c);
                    eax25 = fun_10002060(ebp23, "...", 3);
                    esp21 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 - 4 - 4 + 4 + 12);
                }
                ecx31 = 6;
                while (ecx31) {
                    --ecx31;
                }
                edi32 = ebp23;
                ecx33 = -1;
                eax34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax25) - reinterpret_cast<int32_t>(eax25));
                do {
                    if (!ecx33) 
                        break;
                    --ecx33;
                    ++edi32;
                } while (*edi32 != *reinterpret_cast<signed char*>(&eax34));
                edx35 = reinterpret_cast<uint32_t>(~ecx33);
                ecx36 = -1;
                eax37 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax34) - reinterpret_cast<int32_t>(eax34));
                do {
                    if (!ecx36) 
                        break;
                    --ecx36;
                } while (v38 != *reinterpret_cast<signed char*>(&eax37));
                ecx39 = edx35 >> 2;
                while (ecx39) {
                    --ecx39;
                }
                ecx40 = edx35 & 3;
                while (ecx40) {
                    --ecx40;
                }
                edi41 = "\n\n";
                ecx42 = -1;
                eax43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax37) - reinterpret_cast<int32_t>(eax37));
                do {
                    if (!ecx42) 
                        break;
                    --ecx42;
                    ++edi41;
                } while (*edi41 != *reinterpret_cast<signed char*>(&eax43));
                edx44 = reinterpret_cast<uint32_t>(~ecx42);
                ecx45 = -1;
                eax46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax43) - reinterpret_cast<int32_t>(eax43));
                do {
                    if (!ecx45) 
                        break;
                    --ecx45;
                } while (v47 != *reinterpret_cast<signed char*>(&eax46));
                ecx48 = edx44 >> 2;
                while (ecx48) {
                    --ecx48;
                }
                ecx49 = edx44 & 3;
                while (ecx49) {
                    --ecx49;
                }
                edi50 = *reinterpret_cast<signed char**>(ebx6 + 0x1000986c);
                ecx51 = -1;
                eax52 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax46) - reinterpret_cast<int32_t>(eax46));
                do {
                    if (!ecx51) 
                        break;
                    --ecx51;
                    ++edi50;
                } while (*edi50 != *reinterpret_cast<signed char*>(&eax52));
                edx53 = reinterpret_cast<uint32_t>(~ecx51);
                ecx54 = -1;
                eax55 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax52) - reinterpret_cast<int32_t>(eax52));
                do {
                    if (!ecx54) 
                        break;
                    --ecx54;
                } while (v56 != *reinterpret_cast<signed char*>(&eax55));
                ecx57 = edx53 >> 2;
                while (ecx57) {
                    --ecx57;
                }
                ecx58 = edx53 & 3;
                esp59 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp21) - 4 - 4);
                while (ecx58) {
                    --ecx58;
                }
                fun_10004ef0(reinterpret_cast<int32_t>(esp59) + 28, "Microsoft Visual C++ Runtime Library", 0x12010);
                goto v60;
            }
        }
    }
    return;
}

int32_t g10009aec = 0;

int32_t LoadLibraryA = 0xc5bc;

int32_t g10009af0 = 0;

int32_t g10009af4 = 0;

void fun_10004ef0(void* a1, int32_t a2, int32_t a3) {
    int32_t esi4;
    int1_t zf5;
    int32_t eax6;
    int32_t ebx7;
    int32_t eax8;
    int32_t ebx9;
    int32_t eax10;
    int32_t eax11;
    int32_t eax12;
    int32_t eax13;
    int1_t zf14;

    esi4 = 0;
    zf5 = g10009aec == 0;
    if (zf5) {
        eax6 = reinterpret_cast<int32_t>(LoadLibraryA());
        if (!eax6 || (ebx7 = GetProcAddress, eax8 = reinterpret_cast<int32_t>(ebx7(eax6, "MessageBoxA")), g10009aec = eax8, eax8 == 0)) {
            goto ebx9;
        } else {
            eax10 = reinterpret_cast<int32_t>(ebx7(eax6, "GetActiveWindow", eax6, "MessageBoxA"));
            g10009af0 = eax10;
            eax11 = reinterpret_cast<int32_t>(ebx7(eax6, "GetLastActivePopup", eax6, "GetActiveWindow", eax6, "MessageBoxA"));
            g10009af4 = eax11;
        }
    }
    eax12 = g10009af0;
    if (eax12) {
        eax13 = reinterpret_cast<int32_t>(eax12());
        esi4 = eax13;
    }
    if (esi4 && (zf14 = g10009af4 == 0, !zf14)) {
        g10009af4(esi4);
    }
    g10009aec();
    goto a3;
}

uint32_t fun_10005370(void* a1) {
    int1_t below_or_equal2;
    uint32_t edx3;
    uint32_t eax4;

    below_or_equal2 = reinterpret_cast<uint32_t>(g1000be70) <= reinterpret_cast<uint32_t>(a1);
    if (!below_or_equal2) {
        edx3 = (reinterpret_cast<uint32_t>(a1) & 31) << 2;
        eax4 = 0;
        *reinterpret_cast<signed char*>(&eax4) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a1) & 0xffffffe7) >> 3) + 0x1000be80)) + (edx3 + edx3 * 8) + 4);
        return eax4 & 64;
    } else {
        return 0;
    }
}

int32_t g10009db8 = 0;

void fun_10005320(void** a1) {
    void** esi2;
    void** eax3;

    ++g10009db8;
    eax3 = fun_10004e70(0x1000, esi2);
    *reinterpret_cast<void***>(a1 + 8) = eax3;
    if (!eax3) {
        *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) | 4);
        *reinterpret_cast<void***>(a1 + 8) = a1 + 20;
        *reinterpret_cast<void**>(a1 + 24) = reinterpret_cast<void*>(2);
    } else {
        *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) | 8);
        *reinterpret_cast<void**>(a1 + 24) = reinterpret_cast<void*>(0x1000);
    }
    *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(a1 + 8);
    *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0);
    return;
}

int32_t* fun_10005e90();

uint32_t* fun_10005ea0(void* a1);

void fun_10005fa0(void* a1);

void* fun_10005010(void* a1, void** a2, void* a3);

void fun_10006010(void* a1);

void* fun_10004f90(void* a1, void** a2, void* a3) {
    int1_t below_or_equal4;
    uint32_t ecx5;
    int32_t* eax6;
    void* edi7;
    uint32_t* eax8;
    void* eax9;

    below_or_equal4 = reinterpret_cast<uint32_t>(g1000be70) <= reinterpret_cast<uint32_t>(a1);
    if (below_or_equal4 || (ecx5 = (reinterpret_cast<uint32_t>(a1) & 31) << 2, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a1) & 0xffffffe7) >> 3) + 0x1000be80)) + (ecx5 + ecx5 * 8) + 4) & 1) == 0)) {
        eax6 = fun_10005e90();
        *eax6 = 9;
        eax8 = fun_10005ea0(edi7);
        *eax8 = 0;
        return 0xffffffff;
    } else {
        fun_10005fa0(a1);
        eax9 = fun_10005010(a1, a2, a3);
        fun_10006010(a1);
        return eax9;
    }
}

int32_t fun_10005290(void* a1, int32_t a2, int32_t a3, void* a4, void* a5, int32_t a6, void* a7);

int32_t fun_10005210(void* a1, int32_t a2, int32_t a3) {
    int1_t below_or_equal4;
    uint32_t ecx5;
    int32_t* eax6;
    void* edi7;
    uint32_t* eax8;
    void* esi9;
    int32_t eax10;

    below_or_equal4 = reinterpret_cast<uint32_t>(g1000be70) <= reinterpret_cast<uint32_t>(a1);
    if (below_or_equal4 || (ecx5 = (reinterpret_cast<uint32_t>(a1) & 31) << 2, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a1) & 0xffffffe7) >> 3) + 0x1000be80)) + (ecx5 + ecx5 * 8) + 4) & 1) == 0)) {
        eax6 = fun_10005e90();
        *eax6 = 9;
        eax8 = fun_10005ea0(edi7);
        *eax8 = 0;
        return -1;
    } else {
        fun_10005fa0(a1);
        eax10 = fun_10005290(a1, a2, a3, edi7, esi9, __return_address(), a1);
        fun_10006010(a1);
        return eax10;
    }
}

void** fun_10003d60(void** a1) {
    void** ecx2;

    ecx2 = *reinterpret_cast<void***>(a1) + 4;
    *reinterpret_cast<void***>(a1) = ecx2;
    return *reinterpret_cast<void***>(ecx2 + 0xfffffffc);
}

void fun_10003c90(void** a1, void** a2, int32_t* a3) {
    void** eax4;
    uint32_t eax5;

    eax4 = *reinterpret_cast<void***>(a2 + 4) - 1;
    *reinterpret_cast<void***>(a2 + 4) = eax4;
    if (reinterpret_cast<signed char>(eax4) < reinterpret_cast<signed char>(0)) {
        eax5 = fun_10003160(a1, a2);
    } else {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2)) = a1;
        eax5 = 0;
        *reinterpret_cast<void***>(&eax5) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2));
        *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(a2) + 1;
    }
    if (eax5 != 0xffffffff) {
        *a3 = *a3 + 1;
        return;
    } else {
        *a3 = -1;
        return;
    }
}

void** fun_10003d90(void** a1) {
    void** eax2;
    void** ecx3;

    eax2 = a1;
    ecx3 = *reinterpret_cast<void***>(eax2) + 4;
    *reinterpret_cast<void***>(eax2) = ecx3;
    eax2 = *reinterpret_cast<void***>(ecx3 + 0xfffffffc);
    return eax2;
}

void fun_10004c80(void** a1, void** a2, void** a3, void** a4, void** a5);

void** fun_100054c0(void** a1, uint16_t a2);

void** fun_10005490(void** a1, void** a2) {
    void** esi3;
    int32_t eax4;
    int32_t v5;
    void** eax6;

    fun_10004c80(21, esi3, __return_address(), a1, a2);
    *reinterpret_cast<int16_t*>(&eax4) = *reinterpret_cast<int16_t*>(&a2);
    v5 = eax4;
    eax6 = fun_100054c0(a1, *reinterpret_cast<uint16_t*>(&v5));
    fun_10004cf0(21);
    return eax6;
}

void** fun_10003d70(int32_t* a1) {
    int32_t ecx2;

    ecx2 = *a1 + 8;
    *a1 = ecx2;
    return *reinterpret_cast<void***>(ecx2 - 8);
}

uint32_t fun_100055d0(void** a1, void** a2, void** a3, void** a4) {
    void** ecx5;
    void** ebx6;
    void** eax7;
    uint32_t eax8;
    void** eax9;
    void** tmp32_10;
    uint32_t eax11;

    if (a4) {
        ecx5 = a4;
        ebx6 = a3;
        eax7 = a1;
        do {
            ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) >> 1);
            __asm__("rcr ebx, 1");
            __asm__("rcr eax, 1");
        } while (ecx5);
        eax8 = reinterpret_cast<unsigned char>(eax7) / reinterpret_cast<unsigned char>(ebx6);
        eax9 = reinterpret_cast<void**>(eax8 * reinterpret_cast<unsigned char>(a3));
        tmp32_10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(__intrinsic()) + eax8 * reinterpret_cast<unsigned char>(a4));
        if (reinterpret_cast<unsigned char>(tmp32_10) < reinterpret_cast<unsigned char>(__intrinsic())) 
            goto addr_1000562a_5;
        if (reinterpret_cast<unsigned char>(tmp32_10) > reinterpret_cast<unsigned char>(a2)) 
            goto addr_1000562a_5;
        if (reinterpret_cast<unsigned char>(tmp32_10) < reinterpret_cast<unsigned char>(a2)) 
            goto addr_10005632_8;
        if (reinterpret_cast<unsigned char>(eax9) <= reinterpret_cast<unsigned char>(a1)) 
            goto addr_10005632_8;
    } else {
        eax11 = reinterpret_cast<unsigned char>(a1) % reinterpret_cast<unsigned char>(a3);
        goto addr_10005641_11;
    }
    addr_1000562a_5:
    eax9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax9) - reinterpret_cast<unsigned char>(a3));
    addr_10005632_8:
    eax11 = -(reinterpret_cast<unsigned char>(eax9) - reinterpret_cast<unsigned char>(a1));
    addr_10005641_11:
    return eax11;
}

void** fun_10005560(void** a1, void** a2, void** a3, void** a4) {
    void** ecx5;
    void** ebx6;
    void** eax7;
    void** eax8;
    void** esi9;
    void** tmp32_10;
    void** eax11;

    if (a4) {
        ecx5 = a4;
        ebx6 = a3;
        eax7 = a1;
        do {
            ecx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx5) >> 1);
            __asm__("rcr ebx, 1");
            __asm__("rcr eax, 1");
        } while (ecx5);
        eax8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax7) / reinterpret_cast<unsigned char>(ebx6));
        esi9 = eax8;
        tmp32_10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(__intrinsic()) + reinterpret_cast<unsigned char>(eax8) * reinterpret_cast<unsigned char>(a4));
        if (reinterpret_cast<unsigned char>(tmp32_10) < reinterpret_cast<unsigned char>(__intrinsic())) 
            goto addr_100055be_5;
        if (reinterpret_cast<unsigned char>(tmp32_10) > reinterpret_cast<unsigned char>(a2)) 
            goto addr_100055be_5;
        if (reinterpret_cast<unsigned char>(tmp32_10) < reinterpret_cast<unsigned char>(a2)) 
            goto addr_100055bf_8;
        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(a3) * reinterpret_cast<unsigned char>(esi9)) <= reinterpret_cast<unsigned char>(a1)) 
            goto addr_100055bf_8;
    } else {
        eax11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(a1) / reinterpret_cast<unsigned char>(a3));
        goto addr_100055c3_11;
    }
    addr_100055be_5:
    --esi9;
    addr_100055bf_8:
    eax11 = esi9;
    addr_100055c3_11:
    return eax11;
}

void fun_10003ce0(void** a1, void** a2, void** a3, int32_t* a4) {
    void** esi5;
    void** edi6;
    void** ebx7;
    int32_t* ebp8;
    void** eax9;

    esi5 = a1;
    edi6 = a2;
    ebx7 = a3;
    ebp8 = a4;
    do {
        eax9 = edi6;
        --edi6;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax9 == 0)) 
            break;
        fun_10003c90(esi5, ebx7, ebp8);
    } while (*ebp8 != -1);
    return;
}

void fun_10003d20(void** a1, void** a2, void** a3, int32_t* a4) {
    void** esi5;
    void** edi6;
    void** ebx7;
    int32_t* ebp8;
    void** eax9;
    void** eax10;
    void** v11;

    esi5 = a1;
    edi6 = a2;
    ebx7 = a3;
    ebp8 = a4;
    do {
        eax9 = edi6;
        --edi6;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax9 == 0)) 
            break;
        eax10 = esi5;
        ++esi5;
        v11 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax10))));
        fun_10003c90(v11, ebx7, ebp8);
    } while (*ebp8 != -1);
    return;
}

struct s9 {
    signed char[8] pad8;
    int32_t f8;
    signed char[4] pad16;
    int32_t f10;
    int32_t f14;
    signed char[4] pad28;
    int32_t f1c;
};

int32_t fun_10005910(struct s9* a1) {
    int32_t eax2;
    int32_t esi3;
    int32_t eax4;
    int32_t esi5;

    eax2 = a1->f14;
    if (eax2 < 67 || (a1->f10 < 3 || a1->f10 > 9)) {
        return 0;
    } else {
        if (a1->f10 <= 3 || a1->f10 >= 9) {
            if (eax2 <= 86 || a1->f10 != 3) {
                esi3 = *reinterpret_cast<int32_t*>(a1->f10 * 4 + 0x1000a05c);
            } else {
                esi3 = *reinterpret_cast<int32_t*>(a1->f10 * 4 + 0x1000a058) + 7;
            }
            if (!(*reinterpret_cast<unsigned char*>(&eax2) & 3)) {
                ++esi3;
            }
            eax4 = eax2 + (eax2 + eax2 * 8) * 8;
            __asm__("cdq ");
            esi5 = esi3 - ((eax2 - 1 >> 2) + (eax4 + eax4 * 4) + esi3 - 0x63db) % 7;
            if (a1->f10 != 3) {
                if (esi5 > a1->f1c || esi5 == a1->f1c && a1->f8 < 1) {
                    return 1;
                } else {
                    return 0;
                }
            } else {
                if (esi5 < a1->f1c || esi5 == a1->f1c && a1->f8 >= 2) {
                    return 1;
                } else {
                    return 0;
                }
            }
        } else {
            return 1;
        }
    }
}

void** fun_100063c0(int32_t a1, void** a2, void** a3, void* a4, void** a5, int32_t a6);

uint32_t fun_100059e0(void* a1, uint32_t a2, ...) {
    void* ecx3;
    void* esp4;
    int32_t ebx5;
    void** eax6;
    void** eax7;
    void** eax8;
    void** edx9;
    uint32_t eax10;

    ecx3 = a1;
    esp4 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 8 - 4);
    if (reinterpret_cast<uint32_t>(ecx3) + 1 > 0x100) {
        ebx5 = 0;
        *reinterpret_cast<signed char*>(&ebx5) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&ecx3) + 1);
        eax6 = image_base_;
        if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax6 + ebx5 * 2) + 1) & 0x80)) {
            eax7 = reinterpret_cast<void**>(1);
        } else {
            eax7 = reinterpret_cast<void**>(2);
        }
        eax8 = fun_100063c0(1, reinterpret_cast<int32_t>(esp4) - 4 - 4 - 4 - 4 + 24, eax7, reinterpret_cast<int32_t>(esp4) + 6, 0, 0);
        if (eax8) {
            return 0;
        } else {
            return 0;
        }
    } else {
        edx9 = image_base_;
        eax10 = 0;
        *reinterpret_cast<void***>(&eax10) = *reinterpret_cast<void***>(edx9 + reinterpret_cast<uint32_t>(ecx3) * 2);
        return eax10 & a2;
    }
}

void* fun_10004bb0(int32_t* a1, void** a2, void** a3) {
    int32_t* esi4;
    void** edi5;
    void* eax6;
    uint32_t eax7;

    esi4 = a1;
    edi5 = a2;
    do {
        *esi4 = *esi4 + 1;
        eax6 = fun_10004b60(edi5);
        eax7 = fun_10005c10(eax6);
    } while (eax7);
    return eax6;
}

void* fun_10005d40(void* a1, void** a2);

void* fun_10004b90(void* a1, void** a2, ...) {
    void* eax3;

    eax3 = a1;
    if (eax3 != 0xffffffff) {
        eax3 = fun_10005d40(eax3, a2);
    }
    return eax3;
}

uint32_t fun_10005c10(void* a1) {
    int1_t less_or_equal2;
    void** edx3;
    uint32_t eax4;
    uint32_t eax5;

    less_or_equal2 = reinterpret_cast<int32_t>(g1000a08c) <= reinterpret_cast<int32_t>(1);
    if (less_or_equal2) {
        edx3 = image_base_;
        eax4 = 0;
        *reinterpret_cast<void***>(&eax4) = *reinterpret_cast<void***>(edx3 + reinterpret_cast<uint32_t>(a1) * 2);
        return eax4 & 8;
    } else {
        eax5 = fun_100059e0(a1, 8);
        return eax5;
    }
}

void* fun_10005c40(void** a1);

void* fun_10004b60(void** a1, ...) {
    void** eax2;
    void* eax3;
    void** edx4;
    void* eax5;

    eax2 = *reinterpret_cast<void***>(a1 + 4) - 1;
    *reinterpret_cast<void***>(a1 + 4) = eax2;
    if (reinterpret_cast<signed char>(eax2) < reinterpret_cast<signed char>(0)) {
        eax3 = fun_10005c40(a1);
        return eax3;
    } else {
        edx4 = *reinterpret_cast<void***>(a1);
        *reinterpret_cast<void***>(a1) = edx4 + 1;
        eax5 = reinterpret_cast<void*>(0);
        *reinterpret_cast<void***>(&eax5) = *reinterpret_cast<void***>(edx4);
        return eax5;
    }
}

void* fun_10004b20(void* a1, ...) {
    int1_t less_or_equal2;
    void** ecx3;
    uint32_t eax4;
    void* esi5;
    uint32_t eax6;

    less_or_equal2 = reinterpret_cast<int32_t>(g1000a08c) <= reinterpret_cast<int32_t>(1);
    if (less_or_equal2) {
        ecx3 = image_base_;
        eax4 = 0;
        esi5 = a1;
        *reinterpret_cast<void***>(&eax4) = *reinterpret_cast<void***>(ecx3 + reinterpret_cast<uint32_t>(esi5) * 2);
        eax6 = eax4 & 4;
    } else {
        esi5 = a1;
        eax6 = fun_100059e0(esi5, 4);
    }
    if (!eax6) {
        return (reinterpret_cast<uint32_t>(esi5) & 0xffffffdf) + 0xfffffff9;
    } else {
        return esi5;
    }
}

void* fun_10005d40(void* a1, void** a2) {
    void* ebx3;
    void** eax4;
    void** eax5;
    void** eax6;
    void** eax7;

    ebx3 = a1;
    if (ebx3 == 0xffffffff || (eax4 = *reinterpret_cast<void***>(a2 + 12), !(*reinterpret_cast<unsigned char*>(&eax4) & 1)) && (!(*reinterpret_cast<unsigned char*>(&eax4) & 0x80) || *reinterpret_cast<unsigned char*>(&eax4) & 2)) {
        return 0xffffffff;
    } else {
        if (!*reinterpret_cast<void***>(a2 + 8)) {
            fun_10005320(a2);
        }
        if (*reinterpret_cast<void***>(a2 + 8) == *reinterpret_cast<void***>(a2)) {
            if (!*reinterpret_cast<void***>(a2 + 4)) {
                *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(a2) + 1;
            } else {
                return 0xffffffff;
            }
        }
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 64)) {
            eax5 = *reinterpret_cast<void***>(a2) - 1;
            *reinterpret_cast<void***>(a2) = eax5;
            *reinterpret_cast<void***>(eax5) = *reinterpret_cast<void***>(&ebx3);
        } else {
            eax6 = *reinterpret_cast<void***>(a2) - 1;
            *reinterpret_cast<void***>(a2) = eax6;
            if (*reinterpret_cast<void***>(eax6) != *reinterpret_cast<void***>(&ebx3)) {
                *reinterpret_cast<void***>(a2) = eax6 + 1;
                return 0xffffffff;
            }
        }
        *reinterpret_cast<void***>(a2 + 4) = *reinterpret_cast<void***>(a2 + 4) + 1;
        eax7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0xffffffef);
        *reinterpret_cast<void***>(a2 + 12) = eax7;
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax7) | 1);
        return reinterpret_cast<uint32_t>(ebx3) & 0xff;
    }
}

int32_t InitializeCriticalSection = 0xc558;

int32_t EnterCriticalSection = 0xc574;

void fun_10004c80(void** a1, void** a2, void** a3, void** a4, void** a5) {
    void*** edi6;
    void** edi7;
    void** eax8;
    void** esi9;
    void** ebp10;
    int1_t zf11;

    edi6 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(a1) * 4 + 0x10009988);
    if (!*edi6) {
        eax8 = fun_10004e70(24, edi7);
        if (!eax8) {
            fun_10001f10(17);
        }
        fun_10004c80(17, edi7, esi9, ebp10, __return_address());
        zf11 = *edi6 == 0;
        if (!zf11) {
            fun_10004e50(eax8, edi7, esi9, ebp10, __return_address(), a1, a2, a3, a4);
        } else {
            InitializeCriticalSection(eax8);
            *edi6 = eax8;
        }
        fun_10004cf0(17);
    }
    EnterCriticalSection();
    goto ebp10;
}

int32_t g1000ac60;

int32_t fun_10005dd0(void** a1, void** a2, void** a3) {
    int32_t eax4;
    int32_t eax5;

    fun_10004c80(9, __return_address(), a1, a2, a3);
    eax4 = g1000ac60;
    if (!eax4 || (eax5 = reinterpret_cast<int32_t>(eax4(a1)), eax5 == 0)) {
        fun_10004cf0(9);
        return 0;
    } else {
        fun_10004cf0(9);
        return 1;
    }
}

void** fun_10004ed0(void** a1) {
    int32_t ecx2;

    ecx2 = g1000bf80;
    HeapAlloc();
    goto ecx2;
}

struct s10 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_10005fa0(void* a1) {
    uint32_t eax2;
    struct s10* ebx3;
    void** edi4;
    void** esi5;
    void** ebx6;

    eax2 = (reinterpret_cast<uint32_t>(a1) & 31) << 2;
    ebx3 = reinterpret_cast<struct s10*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a1) & 0xffffffe7) >> 3) + 0x1000be80)) + (eax2 + eax2 * 8));
    if (!ebx3->f8) {
        fun_10004c80(17, edi4, esi5, ebx6, __return_address());
        if (!ebx3->f8) {
            InitializeCriticalSection(ebx3 + 1);
            ebx3->f8 = ebx3->f8 + 1;
        }
        fun_10004cf0(17);
    }
    EnterCriticalSection();
    goto ebx6;
}

struct s11 {
    int32_t f0;
    unsigned char f4;
};

void fun_10005e10(uint32_t a1);

void* fun_10005010(void* a1, void** a2, void* a3) {
    void** esp4;
    void* v5;
    void* ebp6;
    void* edi7;
    void* ebp8;
    void** v9;
    uint32_t eax10;
    uint32_t ecx11;
    void* eax12;
    uint32_t v13;
    void* edi14;
    int32_t esi15;
    void* ebx16;
    struct s11* ecx17;
    void* v18;
    void* v19;
    int32_t ecx20;
    void** v21;
    int32_t v22;
    int32_t eax23;
    int32_t* eax24;
    uint32_t* eax25;
    int32_t* eax26;
    uint32_t* eax27;
    void** ebx28;
    void* esi29;
    void* esp30;
    void* esi31;
    int32_t eax32;

    esp4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x418 - 4 - 4 - 4 - 4);
    v5 = ebp6;
    edi7 = reinterpret_cast<void*>(0);
    ebp8 = a3;
    if (!ebp8) {
        return 0;
    }
    v9 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a1) & 0xffffffe7) >> 3) + 0x1000be80);
    eax10 = (reinterpret_cast<uint32_t>(a1) & 31) << 2;
    ecx11 = eax10 + eax10 * 8;
    eax12 = *v9;
    v13 = ecx11;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax12) + ecx11 + 4) & 32) {
        fun_10005290(a1, 0, 2, v5, edi14, esi15, ebx16);
        esp4 = esp4 - 1 - 1 - 1 - 1 + 1 + 3;
    }
    ecx17 = reinterpret_cast<struct s11*>(v13 + reinterpret_cast<int32_t>(*v9));
    if (ecx17->f4 & 0x80) 
        goto addr_1000508d_6;
    v18 = reinterpret_cast<void*>(esp4 + 5);
    v19 = ebp8;
    ecx20 = ecx17->f0;
    v21 = a2;
    v22 = ecx20;
    eax23 = reinterpret_cast<int32_t>(WriteFile(v22, v21, v19, v18, 0));
    if (!eax23) {
        addr_10005144_8:
        GetLastError(v22, v21, v19, v18, 0);
    }
    addr_1000514e_10:
    if (0) {
        return -static_cast<uint32_t>(edi7);
    } else {
        if (1) {
            if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*v9) + v13 + 4) & 64) || !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(a2) == 26)) {
                eax24 = fun_10005e90();
                *eax24 = 28;
                eax25 = fun_10005ea0(v5);
                *eax25 = 0;
                return 0xffffffff;
            } else {
                return 0;
            }
        } else {
            if (1) {
                fun_10005e10(0);
                return 0xffffffff;
            } else {
                eax26 = fun_10005e90();
                *eax26 = 9;
                eax27 = fun_10005ea0(v5);
                *eax27 = 0;
                return 0xffffffff;
            }
        }
    }
    addr_1000508d_6:
    ebx28 = a2;
    do {
        if (reinterpret_cast<unsigned char>(ebx28) - reinterpret_cast<unsigned char>(a2) >= reinterpret_cast<uint32_t>(ebp8)) 
            goto addr_1000514e_10;
        esi29 = reinterpret_cast<void*>(esp4 + 9);
        do {
            if (reinterpret_cast<unsigned char>(ebx28) - reinterpret_cast<unsigned char>(a2) >= reinterpret_cast<uint32_t>(ebp8)) 
                break;
            ++ebx28;
            if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ebx28) == 10)) {
                edi7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi7) + 1);
                esi29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi29) + 1);
            }
            esi29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi29) + 1);
        } while (reinterpret_cast<int32_t>(esi29) - reinterpret_cast<int32_t>(esp4 + 9) < 0x400);
        esp30 = reinterpret_cast<void*>(esp4 - 1);
        esi31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esi29) - reinterpret_cast<uint32_t>(esp4 + 9));
        v18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp30) + 24);
        v19 = esi31;
        v21 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) + 40);
        v22 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*v9) + v13);
        eax32 = reinterpret_cast<int32_t>(WriteFile(v22, v21, v19, v18, 0));
        esp4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp30) - 4 - 4 - 4 - 4 - 4 + 4);
        if (!eax32) 
            goto addr_10005144_8;
    } while (reinterpret_cast<int32_t>(v5) >= reinterpret_cast<int32_t>(esi31));
    goto addr_1000514e_10;
}

void fun_10006010(void* a1) {
    uint32_t ecx2;
    uint32_t v3;

    ecx2 = (reinterpret_cast<uint32_t>(a1) & 31) << 2;
    v3 = *reinterpret_cast<int32_t*>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a1) & 0xffffffe7) >> 3) + 0x1000be80) + (ecx2 + ecx2 * 8) + 12;
    LeaveCriticalSection();
    goto v3;
}

void* fun_10005f50(void* a1);

int32_t SetFilePointer = 0xc5cc;

int32_t fun_10005290(void* a1, int32_t a2, int32_t a3, void* a4, void* a5, int32_t a6, void* a7) {
    void* eax8;
    int32_t eax9;
    uint32_t eax10;
    uint32_t esi11;
    uint32_t eax12;
    int32_t* eax13;

    eax8 = fun_10005f50(a1);
    if (!reinterpret_cast<int1_t>(eax8 == 0xffffffff)) {
        eax9 = reinterpret_cast<int32_t>(SetFilePointer());
        eax10 = 0;
        if (eax9 == -1) {
            eax10 = reinterpret_cast<uint32_t>(GetLastError());
        }
        if (!eax10) {
            esi11 = (reinterpret_cast<uint32_t>(a1) & 31) << 2;
            eax12 = esi11 + esi11 * 8;
            *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a1) & 0xffffffe7) >> 3) + 0x1000be80)) + eax12 + 4) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a1) & 0xffffffe7) >> 3) + 0x1000be80)) + eax12 + 4) & 0xfd);
            goto 0;
        } else {
            fun_10005e10(eax10);
            goto 0;
        }
    } else {
        eax13 = fun_10005e90();
        *eax13 = 9;
        return -1;
    }
}

struct s12 {
    signed char[8] pad8;
    int32_t f8;
    uint32_t fc;
    signed char[4] pad20;
    uint32_t f14;
};

struct s12* fun_10002370();

int32_t* fun_10005e90() {
    struct s12* eax1;

    eax1 = fun_10002370();
    return &eax1->f8;
}

uint32_t* fun_10005ea0(void* a1) {
    struct s12* eax2;

    eax2 = fun_10002370();
    return &eax2->fc;
}

void fun_10005e10(uint32_t a1) {
    void* esi2;
    uint32_t* eax3;
    uint32_t ecx4;
    int32_t esi5;
    uint32_t* eax6;
    int32_t* eax7;
    int32_t* eax8;
    int32_t* eax9;
    int32_t* eax10;

    eax3 = fun_10005ea0(esi2);
    ecx4 = a1;
    esi5 = 0;
    *eax3 = ecx4;
    eax6 = reinterpret_cast<uint32_t*>(0x1000a0a0);
    do {
        if (*eax6 == ecx4) 
            break;
        eax6 = eax6 + 2;
        ++esi5;
    } while (reinterpret_cast<uint32_t>(eax6) < 0x1000a208);
    goto addr_10005e32_4;
    eax7 = fun_10005e90();
    *eax7 = *reinterpret_cast<int32_t*>(esi5 * 8 + 0x1000a0a4);
    return;
    addr_10005e32_4:
    if (ecx4 < 19 || ecx4 > 36) {
        if (ecx4 < 0xbc || ecx4 > 0xca) {
            eax8 = fun_10005e90();
            *eax8 = 22;
            return;
        } else {
            eax9 = fun_10005e90();
            *eax9 = 8;
            return;
        }
    } else {
        eax10 = fun_10005e90();
        *eax10 = 13;
        return;
    }
}

struct s2* fun_10006320(void** a1);

int32_t GetTimeZoneInformation = 0xc5de;

void* g10009ff0 = reinterpret_cast<void*>(0x7080);

int32_t g10009ff4 = 1;

/* (image base) */
signed char* image_base_ = reinterpret_cast<signed char*>(0x10009ff8);

/* (image base) */
signed char* image_base_ = reinterpret_cast<signed char*>(0x1000a008);

void** g10009fe4 = reinterpret_cast<void**>(0);

void* fun_10006270(struct s2* a1);

signed char* fun_10005690() {
    void** v1;
    void** ebx2;
    void** v3;
    void** esi4;
    void** v5;
    void** edi6;
    void** v7;
    void** ebp8;
    struct s2* ebp9;
    struct s2* eax10;
    struct s2* ebx11;
    int32_t eax12;
    void* eax13;
    void* ecx14;
    int16_t v15;
    void* eax16;
    int32_t v17;
    void* ecx18;
    void* tmp32_19;
    int16_t v20;
    int32_t v21;
    signed char* eax22;
    signed char* ecx23;
    int32_t v24;
    int1_t zf25;
    struct s2* eax26;
    void** edx27;
    uint1_t cf28;
    uint1_t cf29;
    uint32_t eax30;
    uint32_t eax31;
    signed char* eax32;
    void** eax33;
    struct s2* edi34;
    void** v35;
    void** v36;
    void** v37;
    void** v38;
    void** eax39;
    int32_t ecx40;
    void* eax41;
    void** eax42;
    signed char* eax43;
    struct s2* edi44;
    int32_t ecx45;
    void* eax46;
    uint32_t ecx47;
    uint32_t eax48;
    uint32_t ecx49;
    void*** esi50;
    void** edi51;
    uint32_t ecx52;
    signed char* ecx53;
    struct s2* ebx54;
    void* eax55;
    void* eax56;
    void* ecx57;
    void* eax58;
    void* eax59;
    void* ecx60;
    void* tmp32_61;
    void* eax62;
    void* tmp32_63;
    void* eax64;
    int32_t eax65;
    signed char* eax66;
    signed char* eax67;
    signed char* eax68;

    v1 = ebx2;
    v3 = esi4;
    v5 = edi6;
    v7 = ebp8;
    ebp9 = reinterpret_cast<struct s2*>(0);
    fun_10004c80(12, v7, v5, v3, v1);
    eax10 = fun_10006320("TZ");
    ebx11 = eax10;
    if (!ebx11) {
        eax12 = reinterpret_cast<int32_t>(GetTimeZoneInformation());
        if (eax12 != -1) {
            eax13 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(v1) << 2);
            ecx14 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax13) + reinterpret_cast<uint32_t>(eax13) * 2);
            g10009ff0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx14) + reinterpret_cast<uint32_t>(ecx14) * 4);
            if (v15) {
                eax16 = reinterpret_cast<void*>(v17 << 2);
                ecx18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax16) + reinterpret_cast<int32_t>(eax16) * 2);
                tmp32_19 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(g10009ff0) + (reinterpret_cast<int32_t>(ecx18) + reinterpret_cast<int32_t>(ecx18) * 4));
                g10009ff0 = tmp32_19;
            }
            if (!v20 || !v21) {
                g10009ff4 = 0;
            } else {
                g10009ff4 = 1;
            }
            eax22 = image_base_;
            *eax22 = 0;
            ecx23 = image_base_;
            *ecx23 = 0;
        }
        fun_10004cf0(12);
        goto v24;
    }
    if (!ebx11->f0) 
        goto addr_100058ed_11;
    zf25 = g10009fe4 == 0;
    if (zf25) 
        goto addr_10005792_13;
    eax26 = ebx11;
    edx27 = g10009fe4;
    do {
        cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax26->f0) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx27)));
        if (eax26->f0 != *reinterpret_cast<void***>(edx27)) 
            break;
        if (!eax26->f0) 
            goto addr_10005781_17;
        cf28 = reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax26->f1) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edx27 + 1)));
        if (eax26->f1 != *reinterpret_cast<void***>(edx27 + 1)) 
            break;
        ++eax26;
        edx27 = edx27 + 2;
    } while (eax26->f1);
    goto addr_10005781_17;
    cf29 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax26) < reinterpret_cast<uint32_t>(eax26) + cf28);
    eax30 = reinterpret_cast<uint32_t>(eax26) - (reinterpret_cast<uint32_t>(eax26) + cf29);
    eax31 = eax30 - (1 - reinterpret_cast<uint1_t>(eax30 < 1 - cf29));
    addr_1000578a_21:
    if (!eax31) {
        addr_100058ed_11:
        eax32 = fun_10004cf0(12);
        return eax32;
    } else {
        addr_10005792_13:
        eax33 = g10009fe4;
        edi34 = ebx11;
        eax39 = fun_10004e50(eax33, v7, v5, v3, v1, v35, v36, v37, v38);
        ecx40 = -1;
        eax41 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax39) - reinterpret_cast<unsigned char>(eax39));
    }
    do {
        if (!ecx40) 
            break;
        --ecx40;
        edi34 = reinterpret_cast<struct s2*>(&edi34->f1);
    } while (edi34->f0 != *reinterpret_cast<void***>(&eax41));
    eax42 = fun_10004e70(~ecx40, v7);
    g10009fe4 = eax42;
    if (!eax42) {
        eax43 = fun_10004cf0(12);
        return eax43;
    }
    edi44 = ebx11;
    ecx45 = -1;
    eax46 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax42) - reinterpret_cast<unsigned char>(eax42));
    do {
        if (!ecx45) 
            break;
        --ecx45;
        edi44 = reinterpret_cast<struct s2*>(&edi44->f1);
    } while (edi44->f0 != *reinterpret_cast<void***>(&eax46));
    ecx47 = reinterpret_cast<uint32_t>(~ecx45);
    eax48 = ecx47;
    ecx49 = ecx47 >> 2;
    esi50 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edi44) - ecx47);
    edi51 = g10009fe4;
    while (ecx49) {
        --ecx49;
        *reinterpret_cast<void***>(edi51) = *esi50;
        edi51 = edi51 + 4;
        esi50 = esi50 + 4;
    }
    ecx52 = eax48 & 3;
    while (ecx52) {
        --ecx52;
        *reinterpret_cast<void***>(edi51) = *esi50;
        ++edi51;
        ++esi50;
    }
    fun_10004cf0(12);
    ecx53 = image_base_;
    ebx54 = reinterpret_cast<struct s2*>(reinterpret_cast<uint32_t>(ebx11) + 3);
    fun_10002060(ecx53, ebx11, 3);
    if (reinterpret_cast<int1_t>(ebx54->f0 == 45)) 
        goto addr_1000581d_36;
    addr_10005824_37:
    eax55 = fun_10006270(ebx54);
    eax56 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax55) + reinterpret_cast<uint32_t>(eax55) * 4);
    ecx57 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax56) + reinterpret_cast<uint32_t>(eax56) * 4);
    g10009ff0 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx57) + reinterpret_cast<uint32_t>(ecx57) * 8 << 4);
    while (ebx54->f0 == 43 || reinterpret_cast<signed char>(ebx54->f0) >= reinterpret_cast<signed char>(48) && reinterpret_cast<signed char>(ebx54->f0) <= reinterpret_cast<signed char>(57)) {
        ebx54 = reinterpret_cast<struct s2*>(&ebx54->f1);
    }
    if (reinterpret_cast<int1_t>(ebx54->f0 == 58)) {
        ebx54 = reinterpret_cast<struct s2*>(&ebx54->f1);
        eax58 = fun_10006270(ebx54);
        eax59 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax58) << 2);
        ecx60 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax59) + reinterpret_cast<uint32_t>(eax59) * 2);
        tmp32_61 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(g10009ff0) + (reinterpret_cast<uint32_t>(ecx60) + reinterpret_cast<uint32_t>(ecx60) * 4));
        g10009ff0 = tmp32_61;
        if (reinterpret_cast<signed char>(ebx54->f0) >= reinterpret_cast<signed char>(48)) {
            do {
                if (reinterpret_cast<signed char>(ebx54->f0) > reinterpret_cast<signed char>(57)) 
                    break;
                ebx54 = reinterpret_cast<struct s2*>(&ebx54->f1);
            } while (reinterpret_cast<signed char>(ebx54->f0) >= reinterpret_cast<signed char>(48));
        }
        if (reinterpret_cast<int1_t>(ebx54->f0 == 58) && (ebx54 = reinterpret_cast<struct s2*>(&ebx54->f1), eax62 = fun_10006270(ebx54), tmp32_63 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(g10009ff0) + reinterpret_cast<uint32_t>(eax62)), g10009ff0 = tmp32_63, reinterpret_cast<signed char>(ebx54->f0) >= reinterpret_cast<signed char>(48))) {
            do {
                if (reinterpret_cast<signed char>(ebx54->f0) > reinterpret_cast<signed char>(57)) 
                    break;
                ebx54 = reinterpret_cast<struct s2*>(&ebx54->f1);
            } while (reinterpret_cast<signed char>(ebx54->f0) >= reinterpret_cast<signed char>(48));
        }
    }
    if (ebp9) {
        eax64 = g10009ff0;
        g10009ff0 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(eax64));
    }
    eax65 = reinterpret_cast<signed char>(ebx54->f0);
    g10009ff4 = eax65;
    if (!eax65) {
        eax66 = image_base_;
        *eax66 = 0;
        return eax66;
    } else {
        eax67 = image_base_;
        eax68 = fun_10002060(eax67, ebx54, 3);
        return eax68;
    }
    addr_1000581d_36:
    ebp9 = reinterpret_cast<struct s2*>(1);
    ebx54 = reinterpret_cast<struct s2*>(&ebx54->f1);
    goto addr_10005824_37;
    addr_10005781_17:
    eax31 = 0;
    goto addr_1000578a_21;
}

void* fun_10006270(struct s2* a1) {
    struct s2* esi2;
    int1_t less_or_equal3;
    int32_t edx4;
    void** ecx5;
    uint32_t eax6;
    uint32_t eax7;
    void* eax8;
    void* ebx9;
    void*** esi10;
    void* edi11;
    void* ebp12;
    int1_t less_or_equal13;
    void** ecx14;
    uint32_t eax15;
    uint32_t eax16;

    esi2 = a1;
    while (1) {
        less_or_equal3 = reinterpret_cast<int32_t>(g1000a08c) <= reinterpret_cast<int32_t>(1);
        if (less_or_equal3) {
            edx4 = 0;
            ecx5 = image_base_;
            *reinterpret_cast<void***>(&edx4) = esi2->f0;
            eax6 = 0;
            *reinterpret_cast<void***>(&eax6) = *reinterpret_cast<void***>(ecx5 + edx4 * 2);
            eax7 = eax6 & 8;
        } else {
            eax8 = reinterpret_cast<void*>(0);
            *reinterpret_cast<void***>(&eax8) = esi2->f0;
            eax7 = fun_100059e0(eax8, 8);
        }
        if (!eax7) 
            break;
        esi2 = reinterpret_cast<struct s2*>(&esi2->f1);
    }
    ebx9 = reinterpret_cast<void*>(0);
    *reinterpret_cast<void***>(&ebx9) = esi2->f0;
    esi10 = &esi2->f1;
    edi11 = ebx9;
    if (ebx9 == 45 || reinterpret_cast<int1_t>(ebx9 == 43)) {
        ebx9 = reinterpret_cast<void*>(0);
        *reinterpret_cast<void***>(&ebx9) = *esi10;
        ++esi10;
    }
    ebp12 = reinterpret_cast<void*>(0);
    while (1) {
        less_or_equal13 = reinterpret_cast<int32_t>(g1000a08c) <= reinterpret_cast<int32_t>(1);
        if (less_or_equal13) {
            ecx14 = image_base_;
            eax15 = 0;
            *reinterpret_cast<void***>(&eax15) = *reinterpret_cast<void***>(ecx14 + reinterpret_cast<uint32_t>(ebx9) * 2);
            eax16 = eax15 & 4;
        } else {
            eax16 = fun_100059e0(ebx9, 4);
        }
        if (!eax16) 
            break;
        ++esi10;
        ebp12 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx9) + (reinterpret_cast<uint32_t>(ebp12) + reinterpret_cast<uint32_t>(ebp12) * 4) * 2 + 0xffffffd0);
        ebx9 = reinterpret_cast<void*>(0);
        *reinterpret_cast<void***>(&ebx9) = *(esi10 - 1);
    }
    if (!reinterpret_cast<int1_t>(edi11 == 45)) {
        return ebp12;
    } else {
        return -reinterpret_cast<uint32_t>(ebp12);
    }
}

void fun_10004d10(void** a1, void** a2);

int32_t fun_100067e0(void** a1, void** a2, void** a3, void** a4, void** a5);

signed char* fun_10004d80(void** a1);

int32_t fun_100067a0(void** a1) {
    void** edi2;
    void** esi3;
    int32_t eax4;

    if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 64)) {
        fun_10004d10(a1, edi2);
        eax4 = fun_100067e0(a1, edi2, esi3, __return_address(), a1);
        fun_10004d80(a1);
        return eax4;
    } else {
        *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(0);
        return -1;
    }
}

int32_t FlushFileBuffers = 0xc62c;

uint32_t fun_10006840(void* a1) {
    int1_t below_or_equal2;
    void** ebx3;
    uint32_t eax4;
    uint32_t edi5;
    int32_t* eax6;
    uint32_t edi7;
    int32_t* eax8;
    void* eax9;
    int32_t eax10;
    uint32_t eax11;
    uint32_t* eax12;

    below_or_equal2 = reinterpret_cast<uint32_t>(g1000be70) <= reinterpret_cast<uint32_t>(a1);
    if (below_or_equal2 || (ebx3 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a1) & 0xffffffe7) >> 3) + 0x1000be80), eax4 = (reinterpret_cast<uint32_t>(a1) & 31) << 2, edi5 = eax4 + eax4 * 8, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*ebx3) + edi5 + 4) & 1) == 0)) {
        eax6 = fun_10005e90();
        *eax6 = 9;
        return 0xffffffff;
    }
    fun_10005fa0(a1);
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*ebx3) + edi5 + 4) & 1)) {
        addr_100068af_4:
        edi7 = 0xffffffff;
        eax8 = fun_10005e90();
        *eax8 = 9;
    } else {
        edi7 = 0;
        eax9 = fun_10005f50(a1);
        eax10 = reinterpret_cast<int32_t>(FlushFileBuffers(eax9));
        if (!eax10) {
            eax11 = reinterpret_cast<uint32_t>(GetLastError(eax9));
            edi7 = eax11;
        }
        if (edi7) 
            goto addr_100068a8_8;
    }
    fun_10006010(a1);
    return edi7;
    addr_100068a8_8:
    eax12 = fun_10005ea0(eax9);
    *eax12 = edi7;
    goto addr_100068af_4;
}

void fun_10004d50(void** a1, void** a2) {
    void** ebp3;

    if (reinterpret_cast<signed char>(a1) >= reinterpret_cast<signed char>(20)) {
        EnterCriticalSection();
        goto ebp3;
    } else {
        fun_10004c80(a1 + 28, ebp3, __return_address(), a1, a2);
        return;
    }
}

int32_t fun_10006120(void** a1);

uint32_t fun_100060e0(void** a1) {
    int32_t eax2;
    void* v3;
    uint32_t eax4;

    eax2 = fun_10006120(a1);
    if (!eax2) {
        if (!(*reinterpret_cast<unsigned char*>(a1 + 13) & 64)) {
            return 0;
        } else {
            v3 = *reinterpret_cast<void**>(a1 + 16);
            eax4 = fun_10006840(v3);
            return 1 - reinterpret_cast<uint1_t>(eax4 < 1);
        }
    } else {
        return 0xffffffff;
    }
}

void** g10009398 = reinterpret_cast<void**>(0);

int32_t WideCharToMultiByte = 0xc542;

int32_t fun_10006fb0(void** a1, void** a2);

void* fun_10006930() {
    void** esi1;
    int32_t edi2;
    void** eax3;
    void** eax4;
    int32_t eax5;

    esi1 = g10009398;
    if (!*reinterpret_cast<void***>(esi1)) {
        addr_10006995_2:
        return 0;
    } else {
        edi2 = WideCharToMultiByte;
        do {
            eax3 = reinterpret_cast<void**>(edi2());
            if (!eax3) 
                break;
            eax4 = fun_10004e70(eax3, 1);
            if (!eax4) 
                goto addr_100069a6_6;
            eax5 = reinterpret_cast<int32_t>(edi2());
            if (!eax5) 
                goto addr_100069b0_8;
            esi1 = esi1 + 4;
            fun_10006fb0(eax4, 0);
        } while (*reinterpret_cast<void***>(esi1));
        goto addr_10006995_2;
    }
    goto 0;
    addr_100069a6_6:
    goto 0;
    addr_100069b0_8:
    goto eax4;
}

void** fun_10006c90(void** a1, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7);

void** fun_100068f0(void** a1, void** a2, void** a3) {
    void** eax4;
    void** eax5;
    void** eax6;

    if (a3) {
        eax4 = g100094e4;
        eax5 = g100094e8;
        eax6 = fun_10006c90(eax5, 1, a1, a3, a2, a3, eax4);
        if (eax6) {
            return eax6 - 2;
        } else {
            return 0x7fffffff;
        }
    } else {
        return 0;
    }
}

struct s13 {
    signed char[4] pad4;
    unsigned char f4;
    void** f5;
};

int32_t ReadFile = 0xc33e;

void** fun_10006570(void* a1, void** a2, void* a3) {
    void** edx4;
    int32_t v5;
    int32_t ebx6;
    signed char* v7;
    void** ebp8;
    uint32_t eax9;
    uint32_t esi10;
    struct s13* edi11;
    void* eax12;
    void** v13;
    void* v14;
    int32_t eax15;
    void* esp16;
    uint32_t eax17;
    int32_t* eax18;
    uint32_t* eax19;
    void* edx20;
    unsigned char* ecx21;
    int32_t edi22;
    unsigned char al23;
    signed char* ebx24;
    signed char* edi25;
    signed char* eax26;
    int32_t ebp27;
    signed char* v28;
    int32_t* esp29;
    int32_t v30;
    void* v31;
    void* edx32;
    void* eax33;
    void* v34;
    int32_t eax35;
    void* eax36;
    signed char* ecx37;
    unsigned char* eax38;

    edx4 = a2;
    v5 = ebx6;
    v7 = reinterpret_cast<signed char*>(0);
    if (!a3 || (ebp8 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a1) & 0xffffffe7) >> 3) + 0x1000be80), eax9 = (reinterpret_cast<uint32_t>(a1) & 31) << 2, esi10 = eax9 + eax9 * 8, edi11 = reinterpret_cast<struct s13*>(reinterpret_cast<int32_t>(*ebp8) + esi10), !!(edi11->f4 & 2))) {
        return 0;
    }
    if (edi11->f4 & 72 && edi11->f5 != 10) {
        *reinterpret_cast<void***>(edx4) = edi11->f5;
        ++edx4;
        eax12 = *ebp8;
        v7 = reinterpret_cast<signed char*>(1);
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax12) + esi10 + 5) = 10;
    }
    v13 = edx4;
    v14 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(*ebp8) + esi10);
    eax15 = reinterpret_cast<int32_t>(ReadFile());
    esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 16 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
    if (!eax15) {
        eax17 = reinterpret_cast<uint32_t>(GetLastError());
        if (eax17 != 5) {
            if (eax17 != 0x6d) {
                fun_10005e10(eax17);
                goto v5;
            } else {
                goto v5;
            }
        } else {
            eax18 = fun_10005e90();
            *eax18 = 9;
            eax19 = fun_10005ea0(v14);
            *eax19 = eax17;
            goto v5;
        }
    }
    edx20 = *ebp8;
    ecx21 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(edx20) + esi10 + 4);
    if (*ecx21 & 0x80) 
        goto addr_1000665f_12;
    addr_10006786_13:
    goto v5;
    addr_1000665f_12:
    if (!edi22 || *v7 != 10) {
        al23 = reinterpret_cast<unsigned char>(*ecx21 & 0xfb);
    } else {
        al23 = reinterpret_cast<unsigned char>(*ecx21 | 4);
    }
    ebx24 = v7;
    *ecx21 = al23;
    edi25 = ebx24;
    eax26 = reinterpret_cast<signed char*>(ebp27 + edi22 + reinterpret_cast<uint32_t>(ebx24));
    v28 = eax26;
    if (reinterpret_cast<uint32_t>(eax26) > reinterpret_cast<uint32_t>(ebx24)) 
        goto addr_1000668f_17;
    addr_1000677e_18:
    goto addr_10006786_13;
    addr_1000668f_17:
    while (*edi25 != 26) {
        if (*edi25 == 13) {
            if (reinterpret_cast<uint32_t>(v28 - 1) <= reinterpret_cast<uint32_t>(edi25)) {
                ++edi25;
                esp29 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp16) - 4);
                v30 = 0;
                v31 = reinterpret_cast<void*>(esp29 + 7);
                edx32 = *ebp8;
                eax33 = *reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx32) + esi10);
                v34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) + 23);
                eax35 = reinterpret_cast<int32_t>(ReadFile(eax33, v34, 1, v31));
                esp16 = reinterpret_cast<void*>(esp29 - 1 - 1 - 1 - 1 - 1 + 1);
                if (!eax35) {
                    eax36 = reinterpret_cast<void*>(GetLastError(eax33, v34, 1, v31));
                    esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 + 4);
                    v14 = eax36;
                }
                if (v14) 
                    goto addr_1000675b_24;
                if (!v13) 
                    goto addr_1000675b_24;
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*ebp8) + esi10 + 4) & 72) 
                    goto addr_10006714_27;
            } else {
                ecx37 = edi25 + 1;
                if (*ecx37 != 10) {
                    edi25 = ecx37;
                    *ebx24 = *edi25;
                    goto addr_1000675e_30;
                } else {
                    edi25 = edi25 + 2;
                    *ebx24 = 10;
                    goto addr_1000675e_30;
                }
            }
        } else {
            ++edi25;
            *ebx24 = *edi25;
            goto addr_1000675e_30;
        }
        if (ebx24 || *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v30) + 3) != 10) {
            fun_10005290(0, 0xff, 1, eax33, v34, 1, v31);
            esp16 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp16) - 4 - 4 - 4 - 4 + 4 + 12);
            if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v30) + 3) == 10) {
                addr_1000675f_35:
                if (reinterpret_cast<uint32_t>(edi25) < reinterpret_cast<uint32_t>(v28)) 
                    continue; else 
                    goto addr_10006769_36;
            } else {
                addr_1000675b_24:
                *ebx24 = 13;
            }
        } else {
            *ebx24 = 10;
        }
        addr_1000675e_30:
        ++ebx24;
        goto addr_1000675f_35;
        addr_10006714_27:
        if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v30) + 3) != 10) {
            *ebx24 = 13;
            ++ebx24;
            *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*ebp8) + esi10 + 5) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v30) + 3);
            goto addr_1000675f_35;
        } else {
            *ebx24 = 10;
            goto addr_1000675e_30;
        }
    }
    eax38 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*ebp8) + esi10 + 4);
    if (!(*eax38 & 64)) {
        *eax38 = reinterpret_cast<unsigned char>(*eax38 | 2);
        goto addr_1000677e_18;
    }
    addr_10006769_36:
    goto addr_1000677e_18;
}

int32_t fun_10006120(void** a1) {
    int32_t edi2;
    void** ecx3;
    void** eax4;
    void* ebx5;
    void* v6;
    void* eax7;
    void** eax8;

    edi2 = 0;
    ecx3 = *reinterpret_cast<void***>(a1 + 12);
    if ((*reinterpret_cast<unsigned char*>(&ecx3) & 3) == 2 && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 0x108 && (eax4 = *reinterpret_cast<void***>(a1 + 8), ebx5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1)) - reinterpret_cast<unsigned char>(eax4)), !(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx5) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebx5 == 0))))) {
        v6 = *reinterpret_cast<void**>(a1 + 16);
        eax7 = fun_10004f90(v6, eax4, ebx5);
        if (eax7 != ebx5) {
            *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) | 32);
            edi2 = -1;
        } else {
            eax8 = *reinterpret_cast<void***>(a1 + 12);
            if (*reinterpret_cast<unsigned char*>(&eax8) & 0x80) {
                *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8) & 0xfffffffd);
            }
        }
    }
    *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(a1 + 8);
    *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0);
    return edi2;
}

void** fun_10006c50(void** a1, void** a2, void** a3, void** a4, void** a5, void** a6) {
    void** eax7;
    void** v8;
    void** esi9;

    eax7 = *reinterpret_cast<void***>(a1 + 12);
    if (*reinterpret_cast<unsigned char*>(&eax7) & 0x83 && *reinterpret_cast<unsigned char*>(&eax7) & 8) {
        v8 = *reinterpret_cast<void***>(a1 + 8);
        eax7 = fun_10004e50(v8, esi9, __return_address(), a1, a2, a3, a4, a5, a6);
        *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 0xfffffbf7);
        *reinterpret_cast<void***>(a1 + 8) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0);
    }
    return eax7;
}

int32_t fun_10006bc0(void* a1);

int32_t fun_10006b50(void* a1) {
    int1_t below_or_equal2;
    uint32_t ecx3;
    int32_t* eax4;
    void* edi5;
    uint32_t* eax6;
    int32_t eax7;

    below_or_equal2 = reinterpret_cast<uint32_t>(g1000be70) <= reinterpret_cast<uint32_t>(a1);
    if (below_or_equal2 || (ecx3 = (reinterpret_cast<uint32_t>(a1) & 31) << 2, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a1) & 0xffffffe7) >> 3) + 0x1000be80)) + (ecx3 + ecx3 * 8) + 4) & 1) == 0)) {
        eax4 = fun_10005e90();
        *eax4 = 9;
        eax6 = fun_10005ea0(edi5);
        *eax6 = 0;
        return -1;
    } else {
        fun_10005fa0(a1);
        eax7 = fun_10006bc0(a1);
        fun_10006010(a1);
        return eax7;
    }
}

struct s14 {
    void* f0;
    unsigned char f4;
};

void* fun_10005f50(void* a1) {
    int1_t below_or_equal2;
    uint32_t ecx3;
    struct s14* eax4;
    int32_t* eax5;
    uint32_t* eax6;

    below_or_equal2 = reinterpret_cast<uint32_t>(g1000be70) <= reinterpret_cast<uint32_t>(a1);
    if (below_or_equal2 || (ecx3 = (reinterpret_cast<uint32_t>(a1) & 31) << 2, eax4 = reinterpret_cast<struct s14*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a1) & 0xffffffe7) >> 3) + 0x1000be80)) + (ecx3 + ecx3 * 8)), (eax4->f4 & 1) == 0)) {
        eax5 = fun_10005e90();
        *eax5 = 9;
        eax6 = fun_10005ea0(__return_address());
        *eax6 = 0;
        return 0xffffffff;
    } else {
        return eax4->f0;
    }
}

void** fun_10007340(void** a1, uint32_t a2);

void** g10009394 = reinterpret_cast<void**>(0);

void** fun_10007260(void** a1);

void** fun_10007200(void** a1, void** a2);

void** fun_100072d0(void** a1, void** a2, void** a3, void** a4);

struct s15 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

int32_t SetEnvironmentVariableA = 0xc664;

struct s16 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

int32_t fun_10006fb0(void** a1, void** a2) {
    void** v3;
    void** v4;
    void** ebx5;
    void** v6;
    void** esi7;
    void** v8;
    void** edi9;
    void** v10;
    void** ebp11;
    void** eax12;
    void** ecx13;
    void** v14;
    int1_t zf15;
    void** eax16;
    int1_t zf17;
    int1_t zf18;
    int1_t zf19;
    void** eax20;
    void** eax21;
    int1_t zf22;
    void** eax23;
    void** eax24;
    void* eax25;
    void** esi26;
    void** ebp27;
    void** eax28;
    void** edi29;
    struct s15* ecx30;
    void** edi31;
    int32_t ecx32;
    void* eax33;
    void** eax34;
    void** ebx35;
    void** edi36;
    int32_t ecx37;
    void* eax38;
    uint32_t ecx39;
    uint32_t eax40;
    uint32_t ecx41;
    void*** esi42;
    void** edi43;
    uint32_t ecx44;
    signed char* ecx45;
    void** v46;
    struct s16* ebx47;
    void** v48;

    v3 = reinterpret_cast<void**>(__return_address());
    v4 = ebx5;
    v6 = esi7;
    v8 = edi9;
    v10 = ebp11;
    if (!a1 || ((eax12 = fun_10007340(a1, 61), eax12 == 0) || eax12 == a1)) {
        return -1;
    }
    ecx13 = g10009390;
    v14 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(eax12) - (reinterpret_cast<unsigned char>(eax12) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax12) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax12) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax12 + 1)) < 1))))));
    zf15 = g10009394 == ecx13;
    if (zf15) {
        eax16 = fun_10007260(ecx13);
        g10009390 = eax16;
    }
    zf17 = g10009390 == 0;
    if (zf17) {
        if (!a2 || (zf18 = g10009398 == 0, zf18)) {
            if (!v14) {
                zf19 = g10009390 == 0;
                if (zf19) {
                    eax20 = fun_10004e70(4, v10);
                    g10009390 = eax20;
                    if (eax20) {
                        eax21 = g10009390;
                        *reinterpret_cast<void***>(eax21) = reinterpret_cast<void**>(0);
                    } else {
                        return -1;
                    }
                }
                zf22 = g10009398 == 0;
                if (zf22) {
                    eax23 = fun_10004e70(4, v10);
                    g10009398 = eax23;
                    if (eax23) {
                        eax24 = g10009398;
                        *reinterpret_cast<void***>(eax24) = reinterpret_cast<void**>(0);
                    } else {
                        return -1;
                    }
                }
            } else {
                return 0;
            }
        } else {
            eax25 = fun_10006930();
            if (eax25) {
                return -1;
            }
        }
    }
    esi26 = g10009390;
    ebp27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax12) - reinterpret_cast<unsigned char>(a1));
    eax28 = fun_10007200(a1, ebp27);
    edi29 = eax28;
    if (reinterpret_cast<signed char>(edi29) < reinterpret_cast<signed char>(0)) 
        goto addr_10007125_20;
    if (*reinterpret_cast<void***>(esi26)) 
        goto addr_100070e0_22;
    addr_10007125_20:
    if (v14) {
        return 0;
    } else {
        if (reinterpret_cast<signed char>(edi29) < reinterpret_cast<signed char>(0)) {
            edi29 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(edi29));
        }
        eax28 = fun_100072d0(esi26, reinterpret_cast<unsigned char>(edi29) * 4 + 8, v10, v8);
        if (eax28) {
            ecx30 = reinterpret_cast<struct s15*>(eax28 + reinterpret_cast<unsigned char>(edi29) * 4);
            ecx30->f0 = a1;
            ecx30->f4 = 0;
        } else {
            return -1;
        }
    }
    addr_10007168_29:
    g10009390 = eax28;
    addr_1000716d_30:
    if (!a2) {
        addr_100071da_31:
        return 0;
    } else {
        edi31 = a1;
        ecx32 = -1;
        eax33 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax28) - reinterpret_cast<unsigned char>(eax28));
        do {
            if (!ecx32) 
                break;
            --ecx32;
            ++edi31;
        } while (*reinterpret_cast<void***>(edi31) != *reinterpret_cast<void***>(&eax33));
        eax34 = fun_10004e70(~ecx32 + 1, v10);
        ebx35 = eax34;
        if (!ebx35) 
            goto addr_100071da_31;
    }
    edi36 = a1;
    ecx37 = -1;
    eax38 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax34) - reinterpret_cast<unsigned char>(eax34));
    do {
        if (!ecx37) 
            break;
        --ecx37;
        ++edi36;
    } while (*reinterpret_cast<void***>(edi36) != *reinterpret_cast<void***>(&eax38));
    ecx39 = reinterpret_cast<uint32_t>(~ecx37);
    eax40 = ecx39;
    ecx41 = ecx39 >> 2;
    esi42 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edi36) - ecx39);
    edi43 = ebx35;
    while (ecx41) {
        --ecx41;
        *reinterpret_cast<void***>(edi43) = *esi42;
        edi43 = edi43 + 4;
        esi42 = esi42 + 4;
    }
    ecx44 = eax40 & 3;
    while (ecx44) {
        --ecx44;
        *reinterpret_cast<void***>(edi43) = *esi42;
        ++edi43;
        ++esi42;
    }
    ecx45 = reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebp27) + reinterpret_cast<unsigned char>(ebx35));
    *ecx45 = 0;
    v46 = reinterpret_cast<void**>(eax40 - (eax40 + reinterpret_cast<uint1_t>(eax40 < eax40 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(v14) < reinterpret_cast<unsigned char>(1)))) & reinterpret_cast<uint32_t>(ecx45 + 1));
    SetEnvironmentVariableA(ebx35, v46);
    fun_10004e50(ebx35, ebx35, v46, v10, v8, v6, v4, v14, v3);
    goto addr_100071da_31;
    addr_100070e0_22:
    if (!v14) {
        *reinterpret_cast<void***>(esi26 + reinterpret_cast<unsigned char>(edi29) * 4) = a1;
        goto addr_1000716d_30;
    } else {
        ebx47 = reinterpret_cast<struct s16*>(esi26 + reinterpret_cast<unsigned char>(edi29) * 4);
        v48 = ebx47->f0;
        fun_10004e50(v48, v10, v8, v6, v4, v14, v3, a1, a2);
        if (ebx47->f0) {
            do {
                ebx47 = reinterpret_cast<struct s16*>(&ebx47->f4);
                ++edi29;
                *reinterpret_cast<int32_t*>(reinterpret_cast<uint32_t>(ebx47) - 4) = ebx47->f4;
            } while (ebx47->f0);
        }
        eax28 = fun_100072d0(esi26, reinterpret_cast<unsigned char>(edi29) << 2, v10, v8);
        if (!eax28) 
            goto addr_1000716d_30;
    }
    goto addr_10007168_29;
}

int32_t fun_10005eb0(void* a1);

int32_t fun_10006bc0(void* a1) {
    void* eax2;
    void* eax3;
    void* eax4;
    int32_t eax5;
    uint32_t edi6;
    uint32_t eax7;
    uint32_t esi8;

    if ((a1 == 1 || reinterpret_cast<int1_t>(a1 == 2)) && (eax2 = fun_10005f50(2), eax3 = fun_10005f50(1), eax2 == eax3) || (eax4 = fun_10005f50(a1), eax5 = reinterpret_cast<int32_t>(CloseHandle(eax4)), !!eax5)) {
        edi6 = 0;
    } else {
        eax7 = reinterpret_cast<uint32_t>(GetLastError(eax4));
        edi6 = eax7;
    }
    fun_10005eb0(a1);
    if (!edi6) {
        esi8 = (reinterpret_cast<uint32_t>(a1) & 31) << 2;
        *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a1) & 0xffffffe7) >> 3) + 0x1000be80)) + (esi8 + esi8 * 8) + 4) = 0;
        return 0;
    } else {
        fun_10005e10(edi6);
        return -1;
    }
}

void** fun_10006f80(void** a1, void** a2) {
    void** ecx3;
    void** eax4;
    void** edi5;
    void** esi6;
    void** edx7;

    ecx3 = a1;
    eax4 = a2;
    edi5 = ecx3;
    esi6 = eax4 + 0xffffffff;
    if (eax4) {
        do {
            if (!*reinterpret_cast<void***>(edi5)) 
                goto addr_10006fa5_3;
            ++edi5;
            edx7 = esi6;
            --esi6;
        } while (edx7);
    }
    if (*reinterpret_cast<void***>(edi5)) {
        addr_10006fa9_6:
        return eax4;
    } else {
        addr_10006fa5_3:
        eax4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi5) - reinterpret_cast<unsigned char>(ecx3));
        goto addr_10006fa9_6;
    }
}

void** fun_10007430(void** a1, void** a2);

void** fun_10007340(void** a1, uint32_t a2) {
    int1_t zf3;
    uint32_t v4;
    void** eax5;
    void** edi6;
    void** esi7;
    void** ebx8;
    void** esi9;
    uint32_t edi10;
    uint16_t bx11;
    uint32_t eax12;
    int32_t eax13;
    uint32_t ecx14;

    zf3 = g100094e4 == 0;
    if (zf3) {
        v4 = a2;
        eax5 = fun_10007430(a1, *reinterpret_cast<void***>(&v4));
        return eax5;
    }
    fun_10004c80(25, edi6, esi7, ebx8, __return_address());
    esi9 = a1;
    edi10 = a2;
    bx11 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi9));
    if (!bx11) {
        addr_100073db_4:
        fun_10004cf0(25);
        eax12 = bx11 - edi10;
        return eax12 - (eax12 + reinterpret_cast<uint1_t>(eax12 < eax12 + reinterpret_cast<uint1_t>(eax12 < 1))) & reinterpret_cast<unsigned char>(esi9);
    } else {
        do {
            eax13 = 0;
            *reinterpret_cast<signed char*>(&eax13) = *reinterpret_cast<signed char*>(&bx11);
            if (!(*reinterpret_cast<unsigned char*>(eax13 + 0x100093e1) & 4)) {
                if (static_cast<uint32_t>(bx11) == edi10) 
                    goto addr_100073db_4;
            } else {
                ++esi9;
                if (!*reinterpret_cast<void***>(esi9 + 1)) 
                    goto addr_100073cb_9;
                ecx14 = 0;
                *reinterpret_cast<void***>(&ecx14) = *reinterpret_cast<void***>(esi9 + 1);
                if ((static_cast<uint32_t>(bx11) << 8 | ecx14) == edi10) 
                    goto addr_100073a6_11;
            }
            bx11 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(esi9 + 1));
            ++esi9;
        } while (bx11);
    }
    goto addr_100073db_4;
    addr_100073cb_9:
    fun_10004cf0(25);
    return 0;
    addr_100073a6_11:
    fun_10004cf0(25);
    return esi9 + 0xffffffff;
}

void** fun_10007400(void** a1);

void** fun_10007260(void** a1) {
    void** eax2;
    void** v3;
    void** edi4;
    void** esi5;
    void** ecx6;
    void** edx7;
    void** eax8;
    void** edi9;
    void** ebx10;
    void** v11;
    void** eax12;

    eax2 = reinterpret_cast<void**>(0);
    v3 = edi4;
    esi5 = a1;
    if (esi5) {
        ecx6 = esi5 + 4;
        if (*reinterpret_cast<void***>(esi5)) {
            do {
                ++eax2;
                edx7 = ecx6;
                ecx6 = ecx6 + 4;
            } while (*reinterpret_cast<void***>(edx7));
        }
        eax8 = fun_10004e70(reinterpret_cast<unsigned char>(eax2) * 4 + 4, v3);
        edi9 = eax8;
        ebx10 = eax8;
        if (!ebx10) {
            fun_10001f10(9);
        }
        if (*reinterpret_cast<void***>(esi5)) {
            do {
                esi5 = esi5 + 4;
                v11 = *reinterpret_cast<void***>(esi5);
                ebx10 = ebx10 + 4;
                eax12 = fun_10007400(v11);
                *reinterpret_cast<void***>(ebx10 + 0xfffffffc) = eax12;
            } while (*reinterpret_cast<void***>(esi5));
        }
        eax2 = edi9;
        *reinterpret_cast<void***>(ebx10) = reinterpret_cast<void**>(0);
    }
    return eax2;
}

int32_t HeapReAlloc = 0xc67e;

void** fun_100072d0(void** a1, void** a2, void** a3, void** a4) {
    void** v5;
    void** v6;
    void** esi7;
    void** esi8;
    void** v9;
    void** edi10;
    void** edi11;
    void** eax12;
    void** ebx13;
    int32_t ebx14;
    int32_t eax15;
    int32_t eax16;
    int1_t zf17;
    int32_t eax18;

    v5 = reinterpret_cast<void**>(__return_address());
    v6 = esi7;
    esi8 = a1;
    v9 = edi10;
    edi11 = a2;
    if (!esi8) {
        eax12 = fun_10004e70(edi11, v9);
        return eax12;
    }
    if (!edi11) {
        fun_10004e50(esi8, v9, v6, ebx13, v5, a1, a2, a3, a4);
        return 0;
    }
    ebx14 = HeapReAlloc;
    eax15 = g1000bf80;
    do {
        if (reinterpret_cast<unsigned char>(edi11) <= reinterpret_cast<unsigned char>(0xffffffe0)) {
            eax16 = reinterpret_cast<int32_t>(ebx14(eax15, 0, esi8, edi11));
        } else {
            eax16 = 0;
        }
        if (eax16) 
            break;
        zf17 = g1000a098 == 0;
        if (zf17) 
            break;
        eax18 = fun_10005dd0(edi11, v9, v6);
        eax15 = g1000bf80;
    } while (eax18);
    goto addr_10007339_12;
    addr_1000733b_13:
    goto v5;
    addr_10007339_12:
    goto addr_1000733b_13;
}

struct s17 {
    signed char[1] pad1;
    void** f1;
};

struct s17* fun_10007450(void** a1);

void** fun_100074d0(void** a1, void** a2);

void** fun_10007400(void** a1) {
    struct s17* eax2;
    void** edi3;
    void** eax4;

    eax2 = fun_10007450(a1);
    eax4 = fun_10004e70(&eax2->f1, edi3);
    if (eax4) {
        eax4 = fun_100074d0(eax4, a1);
    }
    return eax4;
}

void** fun_10007430(void** a1, void** a2) {
    void** eax3;
    void** cl4;

    eax3 = a1;
    cl4 = a2;
    while (cl4 != *reinterpret_cast<void***>(eax3)) {
        if (!*reinterpret_cast<void***>(eax3)) 
            goto addr_10007445_4;
        ++eax3;
    }
    addr_10007447_6:
    return eax3;
    addr_10007445_4:
    eax3 = reinterpret_cast<void**>(0);
    goto addr_10007447_6;
}

void** fun_100074d0(void** a1, void** a2) {
    void** edi3;
    void** ecx4;
    void** edx5;

    edi3 = a1;
    ecx4 = a2;
    if (!(reinterpret_cast<unsigned char>(ecx4) & 3)) {
        while (1) {
            addr_1000755e_3:
            edx5 = *reinterpret_cast<void***>(ecx4);
            ecx4 = ecx4 + 4;
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx4)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx4) + 0x7efefeff)) & 0x81010100) {
                if (!edx5) 
                    break;
                if (!*reinterpret_cast<signed char*>(&edx5 + 1)) 
                    goto addr_100075a7_6;
                if (!(reinterpret_cast<unsigned char>(edx5) & 0xff0000)) 
                    goto addr_1000759a_8;
                if (!(reinterpret_cast<unsigned char>(edx5) & 0xff000000)) 
                    goto addr_10007592_10;
            }
            *reinterpret_cast<void***>(edi3) = edx5;
            edi3 = edi3 + 4;
        }
    } else {
        do {
            edx5 = *reinterpret_cast<void***>(ecx4);
            ++ecx4;
            if (!edx5) 
                break;
            *reinterpret_cast<void***>(edi3) = edx5;
            ++edi3;
        } while (reinterpret_cast<unsigned char>(ecx4) & 3);
        goto addr_10007557_15;
    }
    *reinterpret_cast<void***>(edi3) = edx5;
    return a1;
    addr_100075a7_6:
    *reinterpret_cast<void***>(edi3) = edx5;
    return a1;
    addr_1000759a_8:
    *reinterpret_cast<void***>(edi3) = edx5;
    *reinterpret_cast<signed char*>(edi3 + 2) = 0;
    return a1;
    addr_10007592_10:
    *reinterpret_cast<void***>(edi3) = edx5;
    return a1;
    addr_10007557_15:
    goto addr_1000755e_3;
}

uint32_t fun_10001f60() {
    struct s12* eax1;
    uint32_t ecx2;
    uint32_t ecx3;

    eax1 = fun_10002370();
    ecx2 = eax1->f14 + eax1->f14 * 4;
    ecx3 = eax1->f14 + ((eax1->f14 + (ecx2 + ecx2 * 4 + eax1->f14) * 8 << 8) - eax1->f14) * 4 + 0x269ec3;
    eax1->f14 = ecx3;
    return (ecx3 & 0x7fff0000) >> 16;
}

void fun_10001f50(uint32_t a1) {
    struct s12* eax2;

    eax2 = fun_10002370();
    eax2->f14 = a1;
    return;
}

int32_t fun_100017c0(int32_t a1) {
    return 1;
}

signed char* fun_10005650(void** a1, void** a2, void** a3);

uint32_t fun_10003da0(void* a1, void* a2, int32_t a3, uint32_t a4, int32_t a5, void* a6) {
    uint32_t esi7;
    int32_t ebp8;
    void** ebp9;
    void** edi10;
    void** esi11;
    uint32_t eax12;
    uint32_t edx13;
    uint32_t edx14;
    uint32_t edi15;
    void* edx16;
    void* edi17;
    void* tmp32_18;
    int1_t zf19;
    uint32_t edi20;
    int32_t eax21;

    esi7 = reinterpret_cast<uint32_t>(a1) - 0x76c;
    if (reinterpret_cast<int32_t>(esi7) < reinterpret_cast<int32_t>(70) || reinterpret_cast<int32_t>(esi7) > reinterpret_cast<int32_t>(0x8a)) {
        return 0xffffffff;
    } else {
        ebp8 = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(a2) * 4 + 0x1000a054) + a3;
        if (!(esi7 & 3) && reinterpret_cast<int32_t>(a2) > 2) {
            ++ebp8;
        }
        fun_10005650(ebp9, edi10, esi11);
        eax12 = esi7 + (esi7 + esi7 * 8) * 8;
        edx13 = (esi7 + 0xffffffff & 0xfffffffc) + (eax12 + eax12 * 4 + ebp8) * 4;
        edx14 = a4 + (edx13 + edx13 * 2) * 2 << 2;
        edi15 = edx14 + edx14 * 2;
        edx16 = reinterpret_cast<void*>(edi15 + edi15 * 4 + a5 << 2);
        edi17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx16) + reinterpret_cast<uint32_t>(edx16) * 2);
        tmp32_18 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi17) + reinterpret_cast<uint32_t>(edi17) * 4 + reinterpret_cast<uint32_t>(g10009ff0));
        zf19 = g10009ff4 == 0;
        edi20 = reinterpret_cast<uint32_t>(tmp32_18) + reinterpret_cast<uint32_t>(a6) + 0x7c558180;
        if (!zf19 && (eax21 = fun_10005910(reinterpret_cast<int32_t>(__zero_stack_offset()) - 36 - 4 - 4 - 4 - 4 - 4 + 4 + 16), !!eax21)) {
            edi20 = edi20 - 0xe10;
        }
        return edi20;
    }
}

struct s18 {
    signed char f0;
    signed char f1;
};

void fun_10003bb8(int32_t ecx);

void fun_10003be0();

void fun_10003c54(uint32_t ecx);

/* (image base) */
int32_t image_base_ = 0x10006260;

/* (image base) */
int32_t image_base_ = 0x10006260;

/* (image base) */
int32_t image_base_ = 0x10006260;

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(0x68);

/* (image base) */
void** image_base_ = reinterpret_cast<void**>(88);

int32_t fun_100032b0(void** a1, struct s0* a2, void* a3) {
    int32_t v4;
    struct s18* v5;
    signed char bl6;
    void* esp7;
    int32_t v8;
    void* esi9;
    void* v10;
    void** edi11;
    void** v12;
    uint32_t eax13;
    uint32_t eax14;
    int32_t ecx15;
    int32_t eax16;
    void** ecx17;
    void* v18;
    void** edx19;
    int32_t v20;
    int32_t v21;
    void** v22;
    void** v23;
    void** v24;
    uint32_t eax25;
    int32_t ecx26;
    void** eax27;
    void** eax28;
    uint32_t ecx29;
    struct s18* eax30;
    int32_t eax31;
    uint32_t ecx32;
    int32_t eax33;
    void*** esp34;
    void** v35;
    void** eax36;
    signed char v37;
    void** eax38;
    void*** esp39;
    void** eax40;
    void** v41;
    int32_t* esp42;
    void*** esp43;
    void** eax44;
    uint32_t edi45;
    int32_t ecx46;
    void* eax47;
    signed char v48;
    void** ebx49;
    void** eax50;
    void** eax51;
    void** edi52;
    void** ebx53;
    void** eax54;
    void** ebp55;
    void*** esp56;
    void** eax57;
    void** ecx58;
    void** eax59;
    int32_t ecx60;
    void** edi61;
    void* eax62;
    void** edi63;
    void** eax64;
    void** v65;
    int32_t** esp66;
    void** ebx67;
    void** ebp68;
    void** eax69;
    void** eax70;
    void*** esp71;
    void** ecx72;
    void*** esp73;
    void** v74;
    void** eax75;
    void** eax76;
    void** v77;
    void** v78;
    void*** esp79;
    void** v80;
    void** eax81;
    void** eax82;
    void** eax83;
    void** v84;
    void** v85;
    void* v86;
    void** eax87;
    void** v88;
    uint32_t eax89;
    void** eax90;

    v4 = reinterpret_cast<int32_t>(__return_address());
    v5 = reinterpret_cast<struct s18*>(reinterpret_cast<int32_t>(a2) + 1);
    bl6 = *reinterpret_cast<signed char*>(a2);
    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0x248 - 4 - 4 - 4 - 4);
    v8 = 0;
    if (bl6) {
        esi9 = v10;
        edi11 = v12;
        while (!0) {
            if (bl6 < 32 || bl6 > 0x78) {
                eax13 = 0;
            } else {
                eax14 = 0;
                *reinterpret_cast<signed char*>(&eax14) = *reinterpret_cast<signed char*>(bl6 + 0x10007fe0);
                eax13 = eax14 & 15;
            }
            ecx15 = *reinterpret_cast<signed char*>(v8 + eax13 * 8 + 0x10008000) >> 4;
            v8 = ecx15;
            switch (ecx15) {
                addr_10003494_9:
            case 0:
                eax16 = 0;
                ecx17 = image_base_;
                *reinterpret_cast<signed char*>(&eax16) = bl6;
                v18 = reinterpret_cast<void*>(0);
                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(ecx17 + eax16 * 2) + 1) & 0x80) {
                    fun_10003c90(static_cast<int32_t>(bl6), a1, reinterpret_cast<int32_t>(esp7) + 40);
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 + 4 + 12);
                    bl6 = v5->f0;
                    v5 = reinterpret_cast<struct s18*>(&v5->f1);
                }
                edx19 = reinterpret_cast<void**>(static_cast<int32_t>(bl6));
                fun_10003c90(edx19, a1, reinterpret_cast<int32_t>(esp7) + 40);
                esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 + 4 + 12);
                goto addr_100034ef_12;
            case 1:
                v20 = 0;
                v21 = 0;
                v22 = reinterpret_cast<void**>(0);
                v23 = reinterpret_cast<void**>(0);
                v24 = reinterpret_cast<void**>(0xffffffff);
                esi9 = reinterpret_cast<void*>(0);
                v18 = reinterpret_cast<void*>(0);
                goto addr_100034ef_12;
            case 2:
                eax25 = bl6 - 32;
                if (eax25 <= 16) {
                    ecx26 = 0;
                    *reinterpret_cast<signed char*>(&ecx26) = *reinterpret_cast<signed char*>(eax25 + reinterpret_cast<int32_t>(fun_10003bb8));
                    switch (ecx26) {
                    case 0:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 2);
                        break;
                    case 1:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 0x80);
                        break;
                    case 2:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 1);
                        break;
                    case 3:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 4);
                        break;
                    case 4:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 8);
                    case 5:
                        goto 0x100034ef;
                    }
                    goto addr_100034ef_12;
                }
            case 3:
                if (bl6 != 42) {
                    edx19 = v22 + reinterpret_cast<unsigned char>(v22) * 4;
                    v22 = reinterpret_cast<void**>(bl6 + reinterpret_cast<unsigned char>(edx19) * 2 + 0xffffffd0);
                    goto addr_100034ef_12;
                } else {
                    eax27 = fun_10003d60(reinterpret_cast<int32_t>(esp7) + 0x264);
                    v22 = eax27;
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4);
                    if (reinterpret_cast<signed char>(eax27) < reinterpret_cast<signed char>(0)) {
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 4);
                        v22 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(eax27));
                        goto addr_100034ef_12;
                    }
                }
            case 4:
                v24 = reinterpret_cast<void**>(0);
                goto addr_100034ef_12;
            case 5:
                if (bl6 != 42) {
                    edx19 = v24 + reinterpret_cast<unsigned char>(v24) * 4;
                    v24 = reinterpret_cast<void**>(bl6 + reinterpret_cast<unsigned char>(edx19) * 2 + 0xffffffd0);
                    goto addr_100034ef_12;
                } else {
                    eax28 = fun_10003d60(reinterpret_cast<int32_t>(esp7) + 0x264);
                    v24 = eax28;
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4);
                    if (reinterpret_cast<signed char>(eax28) < reinterpret_cast<signed char>(0)) {
                        v24 = reinterpret_cast<void**>(0xffffffff);
                        goto addr_100034ef_12;
                    }
                }
            case 6:
                ecx29 = bl6 - 73;
                if (ecx29 > 46) {
                    addr_100034ef_12:
                    eax30 = v5;
                    v5 = reinterpret_cast<struct s18*>(&v5->f1);
                    bl6 = eax30->f0;
                    if (bl6) 
                        break; else 
                        goto addr_10003507_31;
                } else {
                    eax31 = 0;
                    *reinterpret_cast<signed char*>(&eax31) = *reinterpret_cast<signed char*>(ecx29 + reinterpret_cast<int32_t>(fun_10003be0));
                    switch (eax31) {
                    case 0:
                        if (v5->f0 != 54 || v5->f1 != 52) {
                            v8 = 0;
                            goto addr_10003494_9;
                        } else {
                            ++v5;
                            esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 0x8000);
                            break;
                        }
                    case 1:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 32);
                        break;
                    case 2:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 16);
                        break;
                    case 3:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 0x800);
                    case 4:
                        goto 0x100034ef;
                    }
                    goto addr_100034ef_12;
                }
            case 7:
                ecx32 = bl6 - 67;
                if (ecx32 > 53) {
                    addr_10003a24_40:
                    if (v21) 
                        goto addr_100034ef_12;
                } else {
                    eax33 = 0;
                    *reinterpret_cast<signed char*>(&eax33) = *reinterpret_cast<signed char*>(ecx32 + reinterpret_cast<int32_t>(fun_10003c54));
                    switch (eax33) {
                    case 0:
                        if (!(reinterpret_cast<uint32_t>(esi9) & 0x830)) {
                            esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 0x800);
                        }
                    case 6:
                        esp34 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp7) - 4);
                        v35 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 0x264);
                        if (!(reinterpret_cast<uint32_t>(esi9) & 0x810)) {
                            edi11 = reinterpret_cast<void**>(1);
                            eax36 = fun_10003d60(v35);
                            v37 = *reinterpret_cast<signed char*>(&eax36);
                            esp7 = reinterpret_cast<void*>(esp34 - 4 + 4 + 4);
                        } else {
                            eax38 = fun_10003d90(v35);
                            esp39 = esp34 - 4 + 4 + 4 - 4;
                            eax40 = fun_10005490(esp39 + 92, eax38);
                            esp7 = reinterpret_cast<void*>(esp39 - 4 - 4 + 4 + 8);
                            edi11 = eax40;
                            if (reinterpret_cast<signed char>(edi11) < reinterpret_cast<signed char>(0)) {
                                v21 = 1;
                            }
                        }
                        v41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 88);
                        break;
                    case 1:
                    case 2:
                        v20 = 1;
                        bl6 = reinterpret_cast<signed char>(bl6 + 32);
                    case 8:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 64);
                        v41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 88);
                        if (reinterpret_cast<signed char>(v24) >= reinterpret_cast<signed char>(0)) {
                            if (!v24 && bl6 == 0x67) {
                                v24 = reinterpret_cast<void**>(1);
                            }
                        } else {
                            v24 = reinterpret_cast<void**>(6);
                        }
                        esp42 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp7) - 4);
                        esp43 = reinterpret_cast<void***>(esp42 - 1);
                        edx19 = reinterpret_cast<void**>(static_cast<int32_t>(bl6));
                        eax44 = reinterpret_cast<void**>(image_base_(esp43 + 88, esp42 + 23, edx19, v24, v20));
                        esp7 = reinterpret_cast<void*>(esp43 - 4 - 4 - 4 - 4 + 4 + 20);
                        edi45 = reinterpret_cast<uint32_t>(esi9) & 0x80;
                        if (edi45 && !v24) {
                            eax44 = reinterpret_cast<void**>(image_base_(reinterpret_cast<int32_t>(esp7) + 88));
                            esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4);
                        }
                        if (bl6 == 0x67 && !edi45) {
                            eax44 = reinterpret_cast<void**>(image_base_(reinterpret_cast<int32_t>(esp7) + 88));
                            esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4);
                        }
                        if (v37 == 45) {
                            esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 0x100);
                            eax44 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 89);
                            v41 = eax44;
                        }
                        ecx46 = -1;
                        eax47 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax44) - reinterpret_cast<unsigned char>(eax44));
                        do {
                            if (!ecx46) 
                                break;
                            --ecx46;
                            esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) + 1);
                        } while (v48 != *reinterpret_cast<signed char*>(&eax47));
                        edi11 = reinterpret_cast<void**>(~ecx46 + 0xffffffff);
                        break;
                    case 3:
                        if (!(reinterpret_cast<uint32_t>(esi9) & 0x830)) {
                            esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 0x800);
                        }
                    case 13:
                        ebx49 = reinterpret_cast<void**>(0x7fffffff);
                        if (v24 != 0xffffffff) {
                            ebx49 = v24;
                        }
                        eax50 = fun_10003d60(reinterpret_cast<int32_t>(esp7) + 0x264);
                        v41 = eax50;
                        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4);
                        if (!(reinterpret_cast<uint32_t>(esi9) & 0x810)) {
                            if (!v41) {
                                eax51 = image_base_;
                                v41 = eax51;
                            }
                            edi52 = v41;
                            ebx53 = ebx49 - 1;
                            if (ebx49) {
                                do {
                                    if (!*reinterpret_cast<void***>(edi52)) 
                                        break;
                                    ++edi52;
                                    eax54 = ebx53;
                                    --ebx53;
                                } while (eax54);
                            }
                            edi11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi52) - reinterpret_cast<unsigned char>(v41));
                            break;
                        } else {
                            if (!eax50) {
                                eax50 = image_base_;
                                v41 = eax50;
                            }
                            ebp55 = v41;
                            edi11 = reinterpret_cast<void**>(0);
                            v18 = reinterpret_cast<void*>(1);
                            if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx49) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx49 == 0)) 
                                break;
                        }
                        do {
                            eax50 = *reinterpret_cast<void***>(ebp55);
                            if (!eax50) 
                                goto addr_10003a24_40;
                            esp56 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp7) - 4);
                            eax50 = fun_10005490(esp56 + 20, eax50);
                            esp7 = reinterpret_cast<void*>(esp56 - 4 - 4 + 4 + 8);
                            if (!eax50) 
                                goto addr_10003a24_40;
                            edi11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi11) + reinterpret_cast<unsigned char>(eax50));
                            ebp55 = ebp55 + 2;
                        } while (reinterpret_cast<signed char>(edi11) < reinterpret_cast<signed char>(ebx49));
                        break;
                        addr_10003718_82:
                    case 4:
                        goto addr_10003720_83;
                    case 5:
                        eax57 = fun_10003d60(reinterpret_cast<int32_t>(esp7) + 0x264);
                        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4);
                        if (!eax57 || (ecx58 = *reinterpret_cast<void***>(eax57 + 4), ecx58 == 0)) {
                            eax59 = image_base_;
                            ecx60 = -1;
                            edi61 = eax59;
                            v41 = eax59;
                            eax62 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax59) - reinterpret_cast<unsigned char>(eax59));
                            do {
                                if (!ecx60) 
                                    break;
                                --ecx60;
                                ++edi61;
                                esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) + 1);
                            } while (*reinterpret_cast<void***>(edi61) != *reinterpret_cast<void***>(&eax62));
                            edi11 = reinterpret_cast<void**>(~ecx60 + 0xffffffff);
                            break;
                        } else {
                            if (!(reinterpret_cast<uint32_t>(esi9) & 0x800)) {
                                v18 = reinterpret_cast<void*>(0);
                                edi11 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax57))));
                                v41 = ecx58;
                                break;
                            } else {
                                v18 = reinterpret_cast<void*>(1);
                                edi11 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(eax57)))) >> 1);
                                v41 = ecx58;
                                break;
                            }
                        }
                    case 7:
                    case 9:
                        esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 64);
                        edi63 = reinterpret_cast<void**>(10);
                        goto addr_10003744_93;
                    case 10:
                        eax64 = fun_10003d60(reinterpret_cast<int32_t>(esp7) + 0x264);
                        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4);
                        if (!(reinterpret_cast<uint32_t>(esi9) & 32)) {
                            *reinterpret_cast<void***>(eax64) = reinterpret_cast<void**>(0);
                        } else {
                            *reinterpret_cast<void***>(eax64) = reinterpret_cast<void**>(0);
                        }
                        v21 = 1;
                        break;
                    case 11:
                        edi63 = reinterpret_cast<void**>(8);
                        if (reinterpret_cast<uint32_t>(esi9) & 0x80) {
                            esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 0x200);
                            goto addr_10003744_93;
                        }
                    case 12:
                        v24 = reinterpret_cast<void**>(8);
                        goto addr_10003718_82;
                    case 14:
                        edi63 = reinterpret_cast<void**>(10);
                        goto addr_10003744_93;
                    case 15:
                        goto addr_10003720_83;
                    case 16:
                        goto 0x10003a24;
                    }
                    goto addr_10003a24_40;
                }
                if (!(reinterpret_cast<uint32_t>(esi9) & 64)) 
                    goto addr_10003a6a_104;
                if (!(reinterpret_cast<uint32_t>(esi9) & 0x100)) {
                    if (!(reinterpret_cast<uint32_t>(esi9) & 1)) {
                        if (!(reinterpret_cast<uint32_t>(esi9) & 2)) {
                            addr_10003a6a_104:
                            v65 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v22) - reinterpret_cast<unsigned char>(v23) - reinterpret_cast<unsigned char>(edi11));
                            if (!(reinterpret_cast<uint32_t>(esi9) & 12)) {
                                fun_10003ce0(32, v65, a1, reinterpret_cast<int32_t>(esp7) + 40);
                                esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
                            }
                        } else {
                            goto addr_10003a62_110;
                        }
                    } else {
                        goto addr_10003a62_110;
                    }
                } else {
                    goto addr_10003a62_110;
                }
                edx19 = v23;
                esp66 = reinterpret_cast<int32_t**>(reinterpret_cast<int32_t>(esp7) - 4);
                fun_10003d20(reinterpret_cast<int32_t>(esp66) + 22, edx19, a1, reinterpret_cast<int32_t>(esp7) + 40);
                esp7 = reinterpret_cast<void*>(esp66 - 1 - 1 - 1 - 1 + 1 + 4);
                if (reinterpret_cast<uint32_t>(esi9) & 8 && !(reinterpret_cast<uint32_t>(esi9) & 4)) {
                    edx19 = v65;
                    fun_10003ce0(48, edx19, a1, reinterpret_cast<int32_t>(esp7) + 40);
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
                }
                if (!v18 || reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi11) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi11 == 0)) {
                    edx19 = v41;
                    fun_10003d20(edx19, edi11, a1, reinterpret_cast<int32_t>(esp7) + 40);
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
                } else {
                    ebx67 = v41;
                    ebp68 = edi11 + 0xffffffff;
                    do {
                        eax69 = ebx67;
                        eax69 = *reinterpret_cast<void***>(eax69);
                        ebx67 = ebx67 + 2;
                        eax70 = fun_10005490(reinterpret_cast<int32_t>(esp7) + 20, eax69);
                        esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 + 4 + 8);
                        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax70) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax70 == 0)) 
                            break;
                        edx19 = a1;
                        esp71 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4);
                        fun_10003d20(esp71 + 32, eax70, edx19, reinterpret_cast<int32_t>(esp7) + 40);
                        esp7 = reinterpret_cast<void*>(esp71 - 4 - 4 + 4 + 16);
                        ecx72 = ebp68;
                        --ebp68;
                    } while (ecx72);
                    goto addr_10003b35_120;
                }
                addr_10003b52_121:
                if (reinterpret_cast<uint32_t>(esi9) & 4) {
                    edx19 = v65;
                    fun_10003ce0(32, edx19, a1, reinterpret_cast<int32_t>(esp7) + 40);
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
                    goto addr_100034ef_12;
                }
                addr_10003b35_120:
                goto addr_10003b52_121;
                addr_10003a62_110:
                v23 = reinterpret_cast<void**>(1);
                goto addr_10003a6a_104;
                addr_10003744_93:
                if (!(reinterpret_cast<uint32_t>(esi9) & 0x8000)) {
                    if (!(reinterpret_cast<uint32_t>(esi9) & 32)) {
                        esp73 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp7) - 4);
                        v74 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 0x264);
                        if (!(reinterpret_cast<uint32_t>(esi9) & 64)) {
                            eax75 = fun_10003d60(v74);
                            esp7 = reinterpret_cast<void*>(esp73 - 4 + 4 + 4);
                        } else {
                            eax76 = fun_10003d60(v74);
                            v77 = eax76;
                            esp7 = reinterpret_cast<void*>(esp73 - 4 + 4 + 4);
                            __asm__("cdq ");
                            v78 = edx19;
                            goto addr_100037ec_127;
                        }
                    } else {
                        esp79 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp7) - 4);
                        v80 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 0x264);
                        if (!(reinterpret_cast<uint32_t>(esi9) & 64)) {
                            eax81 = fun_10003d60(v80);
                            eax75 = reinterpret_cast<void**>(static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax81)));
                            esp7 = reinterpret_cast<void*>(esp79 - 4 + 4 + 4);
                        } else {
                            eax82 = fun_10003d60(v80);
                            v77 = reinterpret_cast<void**>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&eax82)));
                            esp7 = reinterpret_cast<void*>(esp79 - 4 + 4 + 4);
                            __asm__("cdq ");
                            v78 = edx19;
                            goto addr_100037ec_127;
                        }
                    }
                } else {
                    eax83 = fun_10003d70(reinterpret_cast<int32_t>(esp7) + 0x264);
                    v77 = eax83;
                    v78 = edx19;
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 + 4 + 4);
                    goto addr_100037ec_127;
                }
                v77 = eax75;
                v78 = reinterpret_cast<void**>(0);
                addr_100037ec_127:
                if (!(reinterpret_cast<uint32_t>(esi9) & 64) || (reinterpret_cast<signed char>(v78) > reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(v78) >= reinterpret_cast<signed char>(0) && reinterpret_cast<unsigned char>(v77) >= reinterpret_cast<unsigned char>(0))) {
                    v84 = v77;
                    v85 = v78;
                } else {
                    v84 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(v77));
                    esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) | 0x100);
                    v85 = reinterpret_cast<void**>(-(reinterpret_cast<unsigned char>(v78) + reinterpret_cast<uint1_t>(!!v77)));
                }
                if (!(reinterpret_cast<uint32_t>(esi9) & 0x8000)) {
                    v84 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v84) & 0xffffffff);
                    v85 = reinterpret_cast<void**>(0);
                }
                if (reinterpret_cast<signed char>(v24) >= reinterpret_cast<signed char>(0)) {
                    esi9 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi9) & 0xfffffff7);
                } else {
                    v24 = reinterpret_cast<void**>(1);
                }
                if (!v85 && !v84) {
                    v23 = reinterpret_cast<void**>(0);
                }
                v86 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) + 0x257);
                while ((eax87 = v24, --v24, !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax87) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax87 == 0))) || (v85 || v84)) {
                    __asm__("cdq ");
                    v88 = edx19;
                    eax89 = fun_100055d0(v84, v85, edi63, v88);
                    edx19 = edi63;
                    eax90 = fun_10005560(v84, v85, edx19, v88);
                    esp7 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp7) - 4 - 4 - 4 - 4 - 4 + 16 + 4 - 4 - 4 - 4 - 4 - 4 + 16 + 4);
                    v84 = eax90;
                    v85 = edx19;
                    if (reinterpret_cast<int32_t>(eax89 + 48) > reinterpret_cast<int32_t>(57)) {
                    }
                    v86 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(v86) - 1);
                }
                edi11 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp7) + 0x257 - reinterpret_cast<uint32_t>(v86));
                v41 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v86) + 1);
                if (reinterpret_cast<uint32_t>(esi9) & 0x200 && (*reinterpret_cast<signed char*>(&v4) != 48 || !edi11)) {
                    ++edi11;
                    --v41;
                    goto addr_10003a24_40;
                }
                addr_10003720_83:
                edi63 = reinterpret_cast<void**>(16);
                if (reinterpret_cast<uint32_t>(esi9) & 0x80) {
                    v23 = reinterpret_cast<void**>(2);
                    goto addr_10003744_93;
                }
            }
        }
    }
    addr_10003507_31:
    return 0;
}

int32_t DebugBreak = 0xc330;

int32_t g1000908c = 0;

int32_t fun_100019d0(uint32_t* a1) {
    int32_t esi2;
    int32_t* esp3;
    int1_t zf4;
    int32_t edi5;
    struct s0* v6;
    struct s0* ecx7;
    int32_t eax8;
    struct s0* eax9;
    int32_t tmp32_10;
    int32_t ebp11;
    int1_t zf12;
    int1_t zf13;
    int1_t less_or_equal14;
    int32_t ebx15;
    int1_t zf16;
    struct s0* v17;
    struct s0* ecx18;
    int32_t eax19;
    struct s0* eax20;
    int32_t tmp32_21;
    int1_t less_or_equal22;
    int1_t zf23;
    uint32_t* eax24;
    uint32_t edx25;
    uint32_t ebp26;
    int1_t zf27;
    signed char dl28;
    int1_t less29;
    uint32_t tmp32_30;
    uint32_t ebp31;
    uint32_t ebp32;
    uint32_t edx33;
    uint32_t ebp34;
    int1_t zf35;
    struct s0* eax36;

    esi2 = 0;
    esp3 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4);
    zf4 = g1000a48c == 0;
    if (zf4) {
        edi5 = GetLastError;
    } else {
        v6 = reinterpret_cast<struct s0*>(esp3 + 4);
        ecx7 = g1000ac64;
        eax8 = reinterpret_cast<int32_t>(GetOverlappedResult(ecx7, 0x1000aad8, v6));
        esp3 = esp3 - 1 - 1 - 1 - 1 - 1 + 1;
        if (!eax8) {
            edi5 = GetLastError;
            eax9 = reinterpret_cast<struct s0*>(edi5(ecx7, 0x1000aad8, v6));
            esp3 = esp3 - 1 + 1;
            if (eax9 != 0x3e4) {
                fun_10001430("GetOverlappedResult: returned error %d\n", eax9, ecx7, 0x1000aad8, v6);
                DebugBreak(ecx7, 0x1000aad8, v6);
                esp3 = esp3 - 1 - 1 - 1 + 1 + 2 - 1 + 1;
            }
        } else {
            edi5 = GetLastError;
            g1000a48c = 0;
            tmp32_10 = g1000908c + ebp11;
            g1000908c = tmp32_10;
        }
        zf12 = g1000a48c == 0;
        if (!zf12) 
            goto addr_10001b00_8; else 
            goto addr_10001a49_9;
    }
    addr_10001a6e_10:
    zf13 = g1000a48c == 0;
    if (zf13 && (less_or_equal14 = reinterpret_cast<int32_t>(g1000a278) <= reinterpret_cast<int32_t>(20), !less_or_equal14)) {
        ebx15 = ReadFile;
        do {
            zf16 = g1000a48c == 0;
            if (!zf16) 
                break;
            v17 = reinterpret_cast<struct s0*>(esp3 + 4);
            ecx18 = g1000ac64;
            eax19 = reinterpret_cast<int32_t>(ebx15(ecx18, 0x1000a5b8, 20, v17));
            esp3 = esp3 - 1 - 1 - 1 - 1 - 1 - 1 + 1;
            if (!eax19) {
                eax20 = reinterpret_cast<struct s0*>(edi5(ecx18, 0x1000a5b8, 20, v17));
                esp3 = esp3 - 1 + 1;
                if (!reinterpret_cast<int1_t>(eax20 == 0x3e5)) {
                    fun_10001430("ReadFile: returned error %d\n", eax20, ecx18, 0x1000a5b8, 20, "ReadFile: returned error %d\n", eax20, ecx18, 0x1000a5b8, 20);
                    DebugBreak(ecx18, 0x1000a5b8, 20, v17);
                    esp3 = esp3 - 1 - 1 - 1 + 1 + 2 - 1 + 1;
                } else {
                    g1000a48c = 1;
                }
            } else {
                if (!0) {
                    fun_10001be0(0x1000aad8, ecx18, 0x1000a5b8, 20, v17);
                    esp3 = esp3 - 1 - 1 + 1 + 1;
                    tmp32_21 = g1000908c + 0x1000aad8;
                    g1000908c = tmp32_21;
                }
            }
            less_or_equal22 = reinterpret_cast<int32_t>(g1000a278) <= reinterpret_cast<int32_t>(20);
        } while (!less_or_equal22);
    }
    addr_10001b00_8:
    zf23 = g1000aacc == 0;
    if (!zf23) {
        eax24 = a1;
        do {
            edx25 = g1000a490;
            ebp26 = g1000a490;
            zf27 = g1000aad0 == ebp26;
            dl28 = *reinterpret_cast<signed char*>(edx25 + 0x1000a4b0);
            if (zf27) {
                g1000aacc = 0;
            }
            ++g1000a490;
            less29 = reinterpret_cast<int32_t>(g1000a490) < reinterpret_cast<int32_t>(0x100);
            if (!less29) {
                tmp32_30 = g1000a490 + 0xffffff00;
                g1000a490 = tmp32_30;
            }
            ebp31 = g1000a480;
            ++g1000a278;
            if (!ebp31) {
                if (dl28 != 0x70) {
                    ebp32 = g1000a484;
                    ++g1000a484;
                    *reinterpret_cast<signed char*>(ebp32 + 0x1000a280) = dl28;
                } else {
                    g1000a480 = 1;
                }
            } else {
                if (ebp31 == 1) {
                    if (dl28 != 0x70) {
                        esi2 = 1;
                        edx33 = g1000a484;
                        *eax24 = edx33;
                        g1000a484 = 0;
                    } else {
                        ebp34 = g1000a484;
                        ++g1000a484;
                        *reinterpret_cast<signed char*>(ebp34 + 0x1000a280) = dl28;
                    }
                    g1000a480 = 0;
                }
            }
        } while (!esi2 && (zf35 = g1000aacc == 0, !zf35));
    }
    return esi2;
    addr_10001a49_9:
    eax36 = g1000aaf0;
    ResetEvent(eax36, ecx7, 0x1000aad8, v6);
    esp3 = esp3 - 1 - 1 + 1;
    if (!1) {
        fun_10001be0(0, eax36, ecx7, 0x1000aad8, v6);
        esp3 = esp3 - 1 - 1 + 1 + 1;
        goto addr_10001a6e_10;
    }
}

int32_t fun_100020d0(signed char* a1, struct s0* a2, void* a3) {
    struct s0** esp4;
    int32_t eax5;

    esp4 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 4 - 4 - 4);
    eax5 = fun_100032b0(esp4 + 3, a2, a3);
    if (0) {
        fun_10003160(0, esp4 - 1 - 1 + 1 + 3 + 1);
        return eax5;
    } else {
        *a1 = 0;
        return eax5;
    }
}

int32_t fun_10002140(struct s0* a1, struct s8* a2, void* a3, void* a4);

/* (image base) */
void* image_base_ = reinterpret_cast<void*>(0x1000907c);

int32_t CreateFileA = 0xc2f2;

int32_t SetupComm = 0xc2e6;

int32_t GetCommState = 0xc2d6;

int32_t SetCommState = 0xc2c6;

int32_t SetCommTimeouts = 0xc2b4;

int32_t fun_100015c0(struct s0* a1) {
    void* esp2;
    struct s0** esp3;
    int32_t eax4;
    void* esp5;
    void* ecx6;
    int32_t v7;
    void* esp8;
    struct s0* v9;
    struct s0* eax10;
    struct s0* v11;
    struct s0* v12;
    int32_t eax13;
    void* esp14;
    struct s0* ecx15;
    struct s0* v16;
    struct s0* v17;
    int32_t eax18;
    void* v19;
    struct s0* edx20;
    int32_t eax21;
    int32_t eax22;
    int32_t v23;
    struct s0* eax24;
    int32_t v25;
    struct s0* eax26;
    int32_t v27;
    struct s0* esi28;
    struct s0* v29;
    struct s0* v30;

    esp2 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 68);
    esp3 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(esp2) - 4);
    eax4 = fun_10002140(a1, "%d %d", esp3 + 8, reinterpret_cast<int32_t>(esp2) + 32);
    esp5 = reinterpret_cast<void*>(esp3 - 1 - 1 - 1 - 1 - 1 + 1 + 4);
    if (eax4 == 2) {
        ecx6 = image_base_;
        fun_10001f90(reinterpret_cast<int32_t>(esp5) + 60, "%s%d", ecx6, v7);
        esp8 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 - 4 - 4 + 4 + 16);
        v9 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp8) + 60);
        eax10 = reinterpret_cast<struct s0*>(CreateFileA());
        g1000ac64 = eax10;
        if (!reinterpret_cast<int1_t>(eax10 == -1)) {
            g1000ac64 = eax10;
            v11 = reinterpret_cast<struct s0*>(0x400);
            v12 = eax10;
            eax13 = reinterpret_cast<int32_t>(SetupComm(v12, 0x400, 0x200));
            esp14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp8) - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4);
            if (eax13) {
                ecx15 = g1000ac64;
                v11 = reinterpret_cast<struct s0*>(28);
                v16 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(esp14) + 4);
                v17 = ecx15;
                eax18 = reinterpret_cast<int32_t>(GetCommState(v17, v16, v12));
                if (eax18) {
                    v12 = reinterpret_cast<struct s0*>(3);
                    v19 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp14) - 4 - 4 - 4 + 4 + 4);
                    edx20 = g1000ac64;
                    v11 = reinterpret_cast<struct s0*>(0x2015);
                    eax21 = reinterpret_cast<int32_t>(SetCommState(edx20, v19, v17, v16, 3, 0x2015, 0x200));
                    if (eax21) {
                        eax22 = reinterpret_cast<int32_t>(SetCommTimeouts());
                        if (eax22) {
                            goto v23;
                        } else {
                            GetLastError();
                        }
                    } else {
                        GetLastError(edx20, v19, v17, v16, 3, 0x2015, 0x200);
                    }
                } else {
                    GetLastError(v17, v16, v12);
                }
            } else {
                eax24 = reinterpret_cast<struct s0*>(GetLastError(v12, 0x400, 0x200));
                v16 = eax24;
                v17 = reinterpret_cast<struct s0*>("InitCommPort: SetupComm() returned %d trying to set buffer sizes\n");
            }
            fun_10001430(v17, v16, v12, v11, 0x200);
            CloseHandle();
            g1000ac64 = reinterpret_cast<struct s0*>(-1);
            goto v25;
        } else {
            eax26 = reinterpret_cast<struct s0*>(GetLastError());
            fun_10001430("InitCommPort: CreateFile() returned %d trying to access comm port\n", eax26, v9, 0xc0000000, 0, "InitCommPort: CreateFile() returned %d trying to access comm port\n", eax26, v9, 0xc0000000, 0);
            goto v27;
        }
    } else {
        fun_10001430("Please enter a decimal number for the comm port number and baud, not %s\n", a1, esi28, v29, v30);
        return 0;
    }
}

int32_t HeapCreate = 0xc42e;

void fun_10002490() {
    int32_t eax1;

    eax1 = reinterpret_cast<int32_t>(HeapCreate());
    g1000bf80 = eax1;
    goto 0;
}

int32_t g100095fc = 0;

int32_t GetEnvironmentStringsW = 0xc528;

int32_t GetEnvironmentStrings = 0xc4f6;

int32_t FreeEnvironmentStringsA = 0xc4c6;

int32_t FreeEnvironmentStringsW = 0xc50e;

void** fun_10002d80() {
    int1_t zf1;
    void** v2;
    void** ebp3;
    void** edi4;
    void** v5;
    void*** ebx6;
    void*** v7;
    int32_t esi8;
    void** eax9;
    void*** eax10;
    void*** v11;
    int1_t zf12;
    int1_t zf13;
    void*** eax14;
    void*** ebp15;
    void** ebp16;
    void** eax17;
    void** v18;
    void** edi19;
    void*** esi20;
    uint32_t ecx21;
    uint32_t ecx22;
    void** eax23;
    void** esi24;
    void** eax25;
    void** eax26;
    int32_t eax27;

    zf1 = g100095fc == 0;
    v2 = ebp3;
    if (!zf1) {
        edi4 = v5;
        ebx6 = v7;
        esi8 = GetEnvironmentStringsW;
    } else {
        esi8 = GetEnvironmentStringsW;
        eax9 = reinterpret_cast<void**>(esi8());
        edi4 = eax9;
        if (!edi4) {
            eax10 = reinterpret_cast<void***>(GetEnvironmentStrings());
            ebx6 = eax10;
            if (!ebx6) {
                return 0;
            } else {
                g100095fc = 2;
            }
        } else {
            g100095fc = 1;
            ebx6 = v11;
        }
    }
    zf12 = g100095fc == 1;
    if (!zf12) {
        zf13 = g100095fc == 2;
        if (!zf13) {
            return 0;
        } else {
            if (ebx6 || (eax14 = reinterpret_cast<void***>(GetEnvironmentStrings()), ebx6 = eax14, !!ebx6)) {
                ebp15 = ebx6;
                if (*ebx6) {
                    addr_10002eb7_13:
                    ++ebp15;
                    if (*ebp15) 
                        goto addr_10002eb7_13;
                    ++ebp15;
                    if (*ebp15) 
                        goto addr_10002eb7_13;
                }
                ebp16 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(ebp15) - reinterpret_cast<uint32_t>(ebx6) + 1);
                eax17 = fun_10004e70(ebp16, v2);
                v18 = eax17;
                if (eax17) {
                    edi19 = v18;
                    esi20 = ebx6;
                    ecx21 = reinterpret_cast<unsigned char>(ebp16) >> 2;
                    while (ecx21) {
                        --ecx21;
                        *reinterpret_cast<void***>(edi19) = *esi20;
                        edi19 = edi19 + 4;
                        esi20 = esi20 + 4;
                    }
                    ecx22 = reinterpret_cast<unsigned char>(ebp16) & 3;
                    while (ecx22) {
                        --ecx22;
                        *reinterpret_cast<void***>(edi19) = *esi20;
                        ++edi19;
                        ++esi20;
                    }
                    FreeEnvironmentStringsA();
                    goto v18;
                } else {
                    FreeEnvironmentStringsA();
                    goto v18;
                }
            } else {
                return 0;
            }
        }
    } else {
        if (edi4 || (eax23 = reinterpret_cast<void**>(esi8()), edi4 = eax23, !!edi4)) {
            esi24 = edi4;
            if (*reinterpret_cast<void***>(edi4)) {
                addr_10002e09_27:
                esi24 = esi24 + 2;
                if (*reinterpret_cast<void***>(esi24)) 
                    goto addr_10002e09_27;
                esi24 = esi24 + 2;
                if (*reinterpret_cast<void***>(esi24)) 
                    goto addr_10002e09_27;
            }
            eax25 = reinterpret_cast<void**>(WideCharToMultiByte());
            if (!eax25 || (eax26 = fun_10004e70(eax25, 0), eax26 == 0)) {
                FreeEnvironmentStringsW();
                goto 0;
            } else {
                eax27 = reinterpret_cast<int32_t>(WideCharToMultiByte());
                if (!eax27) {
                    fun_10004e50(eax26, 0, 0, edi4, (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(esi24) - reinterpret_cast<unsigned char>(edi4)) >> 1) + 1, eax26, eax25, 0, 0);
                }
                FreeEnvironmentStringsW();
                goto eax26;
            }
        } else {
            return 0;
        }
    }
}

void** fun_10002c90(void** a1);

struct s19 {
    signed char f0;
    signed char f1;
};

struct s20 {
    void** f0;
    signed char[7] pad8;
    void** f8;
};

int32_t GetCPInfo = 0xc4a4;

int32_t g100094fc = 0;

int32_t fun_10002a60(void** a1) {
    void** v2;
    void** ebx3;
    void** ebp4;
    void** edi5;
    void** esi6;
    void** eax7;
    void** ebp8;
    int1_t zf9;
    int32_t v10;
    void*** eax11;
    unsigned char* edi12;
    unsigned char eax13;
    int32_t ecx14;
    int32_t edi15;
    struct s19* esi16;
    uint32_t edx17;
    uint32_t ebx18;
    unsigned char cl19;
    uint32_t ebx20;
    void** eax21;
    int32_t eax22;
    void** ebx23;
    struct s20* ecx24;
    void** ecx25;
    int32_t eax26;
    int1_t zf27;
    int32_t v28;
    int32_t v29;
    signed char* edi30;
    int32_t ecx31;
    void** eax32;
    int32_t v33;
    signed char v34;
    uint32_t ecx35;
    uint32_t edx36;
    signed char v37;
    uint32_t eax38;
    signed char v39;
    signed char v40;
    uint32_t eax41;

    v2 = ebx3;
    fun_10004c80(25, ebp4, edi5, esi6, v2);
    eax7 = fun_10002c90(a1);
    ebp8 = eax7;
    zf9 = ebp8 == g100094e4;
    if (zf9) {
        fun_10004cf0(25);
        return 0;
    }
    if (!ebp8) {
        fun_10002d40();
        fun_10004cf0(25);
        return 0;
    }
    v10 = 0;
    eax11 = reinterpret_cast<void***>(0x10009508);
    do {
        if (*eax11 == ebp8) 
            break;
        eax11 = eax11 + 48;
        ++v10;
    } while (reinterpret_cast<uint32_t>(eax11) < 0x100095f8);
    goto addr_10002adc_8;
    edi12 = reinterpret_cast<unsigned char*>(0x100093e0);
    eax13 = reinterpret_cast<unsigned char>(0);
    ecx14 = 64;
    while (ecx14) {
        --ecx14;
        *edi12 = reinterpret_cast<unsigned char>(0);
        edi12 = edi12 + 4;
    }
    *edi12 = 0;
    edi15 = (v10 + v10 * 2) * 2;
    do {
        esi16 = reinterpret_cast<struct s19*>((edi15 + eax13) * 8 + 0x10009518);
        if (esi16->f0) {
            do {
                if (!esi16->f1) 
                    break;
                edx17 = 0;
                ebx18 = 0;
                *reinterpret_cast<signed char*>(&edx17) = esi16->f0;
                *reinterpret_cast<signed char*>(&ebx18) = esi16->f1;
                if (ebx18 >= edx17) {
                    cl19 = *reinterpret_cast<unsigned char*>(eax13 + 0x10009500);
                    do {
                        *reinterpret_cast<unsigned char*>(edx17 + 0x100093e1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(edx17 + 0x100093e1) | cl19);
                        ++edx17;
                        ebx20 = 0;
                        *reinterpret_cast<signed char*>(&ebx20) = esi16->f1;
                    } while (ebx20 >= edx17);
                }
                ++esi16;
            } while (esi16->f0);
        }
        eax13 = reinterpret_cast<unsigned char>(eax13 + 1);
    } while (eax13 < reinterpret_cast<unsigned char>(4));
    g100094e4 = ebp8;
    eax21 = fun_10002ce0(ebp8);
    g100094e8 = eax21;
    eax22 = v10 << 4;
    ebx23 = *reinterpret_cast<void***>(eax22 + eax22 * 2 + reinterpret_cast<int32_t>("!"));
    ecx24 = reinterpret_cast<struct s20*>(eax22 + eax22 * 2 + 0x1000950c);
    ecx25 = ecx24->f8;
    g100094f0 = ecx24->f0;
    g100094f4 = ebx23;
    g100094f8 = ecx25;
    fun_10004cf0(25);
    return 0;
    addr_10002adc_8:
    eax26 = reinterpret_cast<int32_t>(GetCPInfo());
    if (eax26 != 1) {
        zf27 = g100094fc == 0;
        if (zf27) {
            fun_10004cf0(25);
            goto v28;
        } else {
            fun_10002d40();
            fun_10004cf0(25);
            goto v29;
        }
    }
    edi30 = reinterpret_cast<signed char*>(0x100093e0);
    ecx31 = 64;
    while (ecx31) {
        --ecx31;
        *edi30 = reinterpret_cast<signed char>(0);
        edi30 = edi30 + 4;
    }
    *edi30 = 0;
    if (reinterpret_cast<unsigned char>(v2) > reinterpret_cast<unsigned char>(1)) 
        goto addr_10002b0b_34;
    eax32 = reinterpret_cast<void**>(0);
    g100094e4 = reinterpret_cast<void**>(0);
    addr_10002c22_36:
    g100094e8 = eax32;
    g100094f0 = reinterpret_cast<void**>(0);
    g100094f4 = reinterpret_cast<void**>(0);
    g100094f8 = reinterpret_cast<void**>(0);
    fun_10004cf0(25);
    goto v33;
    addr_10002b0b_34:
    if (*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&v10) + 2)) {
        do {
            if (!v34) 
                break;
            ecx35 = 0;
            edx36 = 0;
            *reinterpret_cast<signed char*>(&ecx35) = v37;
            *reinterpret_cast<signed char*>(&edx36) = v34;
            if (edx36 >= ecx35) {
                do {
                    *reinterpret_cast<unsigned char*>(ecx35 + 0x100093e1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(ecx35 + 0x100093e1) | 4);
                    ++ecx35;
                    eax38 = 0;
                    *reinterpret_cast<signed char*>(&eax38) = v39;
                } while (eax38 >= ecx35);
            }
        } while (v40);
    }
    eax41 = 1;
    do {
        *reinterpret_cast<unsigned char*>(eax41 + 0x100093e1) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(eax41 + 0x100093e1) | 8);
        ++eax41;
    } while (eax41 < 0xff);
    g100094e4 = ebp8;
    eax32 = fun_10002ce0(ebp8);
    goto addr_10002c22_36;
}

int32_t DeleteCriticalSection = 0xc48c;

void** fun_100026a0(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** ebx6;
    void** v7;
    void** esi8;
    void** v9;
    void** edi10;
    void*** esi11;
    void** v12;
    void** ebp13;
    int32_t edi14;
    void** ebx15;
    void** v16;
    void** eax17;

    v4 = reinterpret_cast<void**>(__return_address());
    v5 = ebx6;
    v7 = esi8;
    v9 = edi10;
    esi11 = reinterpret_cast<void***>(0x1000be80);
    v12 = ebp13;
    edi14 = DeleteCriticalSection;
    do {
        ebx15 = *esi11;
        if (ebx15) {
            if (reinterpret_cast<unsigned char>(ebx15 + 0x480) > reinterpret_cast<unsigned char>(ebx15)) {
                do {
                    if (*reinterpret_cast<void***>(ebx15 + 8)) {
                        edi14(ebx15 + 12);
                    }
                    ebx15 = ebx15 + 36;
                } while (reinterpret_cast<unsigned char>(*esi11 + 0x480) > reinterpret_cast<unsigned char>(ebx15));
            }
            v16 = *esi11;
            eax17 = fun_10004e50(v16, v12, v9, v7, v5, v4, a1, a2, a3);
        }
        esi11 = esi11 + 4;
    } while (reinterpret_cast<uint32_t>(esi11) < 0x1000bf80);
    return eax17;
}

void fun_10002280(void** a1, void** a2, void** a3);

signed char g100093a8 = 0;

int32_t* g1000bf8c;

void* g1000bf84;

int32_t ExitProcess = 0xc3c8;

signed char* fun_100021f0(int32_t a1, int32_t a2, int32_t a3) {
    void** v4;
    void** ebx5;
    void** esi6;
    int32_t ebx7;
    int1_t zf8;
    void* esi9;
    int32_t* esi10;
    int1_t cf11;
    int32_t eax12;
    int1_t cf13;
    signed char* eax14;

    v4 = ebx5;
    fun_10002280(esi6, v4, __return_address());
    g100093ac = 1;
    ebx7 = a3;
    g100093a8 = *reinterpret_cast<signed char*>(&ebx7);
    if (!a2) {
        zf8 = g1000bf8c == 0;
        if (!zf8 && (esi9 = g1000bf84, esi10 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esi9) - 4), cf11 = reinterpret_cast<uint32_t>(esi10) < reinterpret_cast<uint32_t>(g1000bf8c), !cf11)) {
            do {
                eax12 = *esi10;
                if (eax12) {
                    eax12();
                }
                --esi10;
                cf13 = reinterpret_cast<uint32_t>(esi10) < reinterpret_cast<uint32_t>(g1000bf8c);
            } while (!cf13);
        }
        fun_100022a0(0x10009014, 0x1000901c);
    }
    fun_100022a0(0x10009020, 0x10009024);
    if (!ebx7) {
        ExitProcess();
        goto v4;
    } else {
        eax14 = fun_10002290();
        return eax14;
    }
}

/* (image base) */
int32_t image_base_ = 0x1000ac00;

void fun_10004c10(void** a1, void** a2, void** a3) {
    void** v4;
    void** v5;
    void** ebx6;
    void** v7;
    void** esi8;
    void** v9;
    void** edi10;
    int32_t esi11;
    int32_t edi12;
    void*** ebx13;
    void** v14;
    void** v15;
    int32_t eax16;

    v4 = reinterpret_cast<void**>(__return_address());
    v5 = ebx6;
    v7 = esi8;
    v9 = edi10;
    esi11 = DeleteCriticalSection;
    edi12 = 0;
    do {
        ebx13 = reinterpret_cast<void***>(edi12 * 4 + 0x10009988);
        if (*ebx13 && (edi12 != 17 && (edi12 != 13 && (edi12 != 9 && edi12 != 1)))) {
            v14 = *ebx13;
            esi11(v14, v9, v7, v5, v4);
            v15 = *ebx13;
            fun_10004e50(v15, v14, v9, v7, v5, v4, a1, a2, a3);
        }
        ++edi12;
    } while (edi12 < 48);
    eax16 = image_base_;
    esi11();
    esi11();
    esi11();
    esi11();
    goto eax16;
}

struct s21 {
    signed char[4] pad4;
    unsigned char f4;
};

uint32_t fun_10003160(void** a1, void** a2) {
    void* esp3;
    void* edi4;
    void** eax5;
    void** eax6;
    void* ebp7;
    void** eax8;
    uint32_t eax9;
    void* ebx10;
    void* eax11;
    struct s21* eax12;
    uint32_t ecx13;
    void** v14;
    void* eax15;

    esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4);
    edi4 = *reinterpret_cast<void**>(a2 + 16);
    eax5 = *reinterpret_cast<void***>(a2 + 12);
    if (!(*reinterpret_cast<unsigned char*>(&eax5) & 0x82) || *reinterpret_cast<unsigned char*>(&eax5) & 64) {
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax5) | 32);
        return 0xffffffff;
    } else {
        if (*reinterpret_cast<unsigned char*>(&eax5) & 1) {
            *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
            eax6 = *reinterpret_cast<void***>(a2 + 12);
            if (!(*reinterpret_cast<unsigned char*>(&eax6) & 16)) {
                *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax6) | 32);
                return 0xffffffff;
            } else {
                *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(a2 + 8);
                *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0xfffffffe);
            }
        }
        ebp7 = reinterpret_cast<void*>(0);
        eax8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | 2);
        *reinterpret_cast<void***>(a2 + 12) = eax8;
        *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8) & 0xffffffef);
        *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(0);
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0x10c) && (a2 != 0x10009b58 && !reinterpret_cast<int1_t>(a2 == 0x10009b78) || (eax9 = fun_10005370(edi4), esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 - 4 + 4 + 4), !eax9))) {
            fun_10005320(a2);
            esp3 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp3) - 4 - 4 + 4 + 4);
        }
        if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) & 0x108)) {
            ebx10 = reinterpret_cast<void*>(1);
            eax11 = fun_10004f90(edi4, reinterpret_cast<int32_t>(esp3) + 20, 1);
            ebp7 = eax11;
        } else {
            ebx10 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 8)));
            *reinterpret_cast<void***>(a2) = *reinterpret_cast<void***>(a2 + 8) + 1;
            *reinterpret_cast<void***>(a2 + 4) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(a2 + 24)) - 1);
            if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(ebx10) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(ebx10 == 0)) {
                eax12 = reinterpret_cast<struct s21*>(0x100093b8);
                if (edi4 != 0xffffffff) {
                    ecx13 = (reinterpret_cast<uint32_t>(edi4) & 31) << 2;
                    eax12 = reinterpret_cast<struct s21*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(edi4) & 0xffffffe7) >> 3) + 0x1000be80)) + (ecx13 + ecx13 * 8));
                }
                if (eax12->f4 & 32) {
                    fun_10005210(edi4, 0, 2);
                }
            } else {
                v14 = *reinterpret_cast<void***>(a2 + 8);
                eax15 = fun_10004f90(edi4, v14, ebx10);
                ebp7 = eax15;
            }
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(a2 + 8)) = a1;
        }
        if (ebp7 == ebx10) {
            return reinterpret_cast<unsigned char>(a1) & 0xff;
        } else {
            *reinterpret_cast<void***>(a2 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2 + 12)) | 32);
            return 0xffffffff;
        }
    }
}

/* (image base) */
int32_t image_base_ = 0x1000ac48;

/* (image base) */
int32_t image_base_ = 0x1000ac30;

void fun_10004be0() {
    int32_t eax1;
    int32_t esi2;
    int32_t esi3;
    int32_t ecx4;
    int32_t eax5;

    eax1 = image_base_;
    esi2 = InitializeCriticalSection;
    esi2(eax1, esi3, __return_address());
    ecx4 = image_base_;
    esi2(ecx4, eax1, esi3, __return_address());
    eax5 = image_base_;
    esi2();
    esi2();
    goto eax5;
}

void** fun_10004e90(void** a1, int32_t a2) {
    void** v3;
    void** esi4;
    void** v5;
    void** edi6;
    void** edi7;
    int32_t esi8;
    void** eax9;
    int32_t eax10;

    v3 = esi4;
    v5 = edi6;
    edi7 = a1;
    if (reinterpret_cast<unsigned char>(edi7) > reinterpret_cast<unsigned char>(0xffffffe0)) {
        return 0;
    }
    if (!edi7) {
        edi7 = reinterpret_cast<void**>(1);
    }
    esi8 = a2;
    do {
        eax9 = fun_10004ed0(edi7);
        if (eax9) 
            break;
        if (!esi8) 
            break;
        eax10 = fun_10005dd0(edi7, v5, v3);
    } while (eax10);
    goto addr_10004ecb_9;
    addr_10004ecd_10:
    return eax9;
    addr_10004ecb_9:
    eax9 = reinterpret_cast<void**>(0);
    goto addr_10004ecd_10;
}

int32_t g10009ad8 = 0;

void** g10009ae8 = reinterpret_cast<void**>(0);

void** fun_100054c0(void** a1, uint16_t a2) {
    int1_t zf3;
    void** eax4;
    int32_t eax5;
    int32_t* eax6;
    int32_t* eax7;

    if (a1) {
        zf3 = g10009ad8 == 0;
        if (!zf3) {
            eax4 = g10009ae8;
            eax5 = reinterpret_cast<int32_t>(WideCharToMultiByte());
            if (!eax5 || eax4) {
                eax6 = fun_10005e90();
                *eax6 = 42;
            }
            goto 0x220;
        } else {
            if (a2 <= 0xff) {
                *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(&a2);
                return 1;
            } else {
                eax7 = fun_10005e90();
                *eax7 = 42;
                return 0xffffffff;
            }
        }
    } else {
        return 0;
    }
}

int32_t g10009fe8 = 0;

signed char* fun_10005650(void** a1, void** a2, void** a3) {
    int1_t zf4;
    int1_t zf5;
    signed char* eax6;

    zf4 = g10009fe8 == 0;
    if (zf4) {
        fun_10004c80(11, __return_address(), a1, a2, a3);
        zf5 = g10009fe8 == 0;
        if (zf5) {
            fun_10005690();
            ++g10009fe8;
        }
        eax6 = fun_10004cf0(11);
    }
    return eax6;
}

uint32_t fun_10005b00(void** a1, void** a2, uint32_t a3);

uint32_t fun_10005ac0(void** a1, void** a2, uint32_t a3) {
    void** esi4;
    uint32_t eax5;

    fun_10004c80(21, esi4, __return_address(), a1, a2);
    eax5 = fun_10005b00(a1, a2, a3);
    fun_10004cf0(21);
    return eax5;
}

void** fun_10005a80(int32_t a1, uint32_t a2, void** a3, void** a4) {
    if (reinterpret_cast<unsigned char>(a4) | a2) {
        return a1 * reinterpret_cast<unsigned char>(a3);
    } else {
        return a1 * reinterpret_cast<unsigned char>(a3);
    }
}

void** fun_100064f0(void* a1, void** a2, void* a3);

struct s22 {
    signed char[4] pad4;
    unsigned char f4;
};

void* fun_10005c40(void** a1) {
    void** eax2;
    void** eax3;
    void** ecx4;
    void* v5;
    void* edx6;
    void** eax7;
    void** edx8;
    struct s22* eax9;
    uint32_t ecx10;
    void** eax11;
    void** ecx12;
    void* eax13;

    eax2 = *reinterpret_cast<void***>(a1 + 12);
    if (!(*reinterpret_cast<unsigned char*>(&eax2) & 0x83) || *reinterpret_cast<unsigned char*>(&eax2) & 64) {
        return 0xffffffff;
    } else {
        if (!(*reinterpret_cast<unsigned char*>(&eax2) & 2)) {
            eax3 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax2) | 1);
            *reinterpret_cast<void***>(a1 + 12) = eax3;
            if (reinterpret_cast<unsigned char>(eax3) & 0x10c) {
                *reinterpret_cast<void***>(a1) = *reinterpret_cast<void***>(a1 + 8);
            } else {
                fun_10005320(a1);
            }
            ecx4 = *reinterpret_cast<void***>(a1 + 8);
            v5 = *reinterpret_cast<void**>(a1 + 24);
            edx6 = *reinterpret_cast<void**>(a1 + 16);
            eax7 = fun_100064f0(edx6, ecx4, v5);
            *reinterpret_cast<void***>(a1 + 4) = eax7;
            if (!eax7 || eax7 == 0xffffffff) {
                *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) | (reinterpret_cast<unsigned char>(eax7) - (reinterpret_cast<unsigned char>(eax7) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax7) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax7) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax7) < reinterpret_cast<unsigned char>(1))))) & 0xfffffff0) + 32);
                *reinterpret_cast<void***>(a1 + 4) = reinterpret_cast<void**>(0);
                return 0xffffffff;
            } else {
                edx8 = *reinterpret_cast<void***>(a1 + 12);
                if (!(*reinterpret_cast<unsigned char*>(&edx8) & 0x82)) {
                    eax9 = reinterpret_cast<struct s22*>(0x100093b8);
                    if (*reinterpret_cast<void**>(a1 + 16) != 0xffffffff) {
                        ecx10 = (reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(a1 + 16)) & 31) << 2;
                        eax9 = reinterpret_cast<struct s22*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(a1 + 16)) & 0xffffffe7) >> 3) + 0x1000be80)) + (ecx10 + ecx10 * 8));
                    }
                    if ((eax9->f4 & 0x82) == 0x82) {
                        *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx8) | 0x2000);
                    }
                }
                if (reinterpret_cast<int1_t>(*reinterpret_cast<void**>(a1 + 24) == 0x200) && ((eax11 = *reinterpret_cast<void***>(a1 + 12), !!(*reinterpret_cast<unsigned char*>(&eax11) & 8)) && !(*reinterpret_cast<unsigned char*>(&eax11 + 1) & 4))) {
                    *reinterpret_cast<void**>(a1 + 24) = reinterpret_cast<void*>(0x1000);
                }
                *reinterpret_cast<void***>(a1 + 4) = *reinterpret_cast<void***>(a1 + 4) - 1;
                ecx12 = *reinterpret_cast<void***>(a1);
                *reinterpret_cast<void***>(a1) = ecx12 + 1;
                eax13 = reinterpret_cast<void*>(0);
                *reinterpret_cast<void***>(&eax13) = *reinterpret_cast<void***>(ecx12);
                return eax13;
            }
        } else {
            *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax2) | 32);
            return 0xffffffff;
        }
    }
}

int32_t SetLastError = 0xc410;

struct s12* fun_10002370() {
    void** eax1;
    void** eax2;
    int32_t eax3;
    int32_t eax4;
    void** eax5;
    int32_t edi6;

    GetLastError();
    eax1 = reinterpret_cast<void**>(TlsGetValue());
    if (!eax1) {
        eax2 = fun_10004df0(1, 0x74);
        if (!eax2 || (eax3 = g100093b0, eax4 = reinterpret_cast<int32_t>(TlsSetValue(eax3, eax2)), eax4 == 0)) {
            fun_10001f10(16);
        } else {
            fun_10002350(eax2, eax3, eax2);
            eax5 = reinterpret_cast<void**>(GetCurrentThreadId(eax3, eax2));
            *reinterpret_cast<void***>(eax2) = eax5;
            *reinterpret_cast<void***>(eax2 + 4) = reinterpret_cast<void**>(0xffffffff);
        }
    }
    SetLastError();
    goto edi6;
}

int32_t fun_100061a0(int32_t a1);

int32_t fun_10006190() {
    int32_t eax1;

    eax1 = fun_100061a0(1);
    return eax1;
}

struct s2* fun_10006320(void** a1) {
    void** ebp2;
    int1_t zf3;
    void* eax4;
    void** esi5;
    void** edi6;
    int32_t ecx7;
    void** eax8;
    void** ebx9;
    void** edi10;
    int32_t ecx11;

    ebp2 = g10009390;
    if (!ebp2) {
        zf3 = g10009398 == 0;
        if (!zf3) {
            eax4 = fun_10006930();
            if (!eax4) {
                ebp2 = g10009390;
            } else {
                return 0;
            }
        }
        if (!ebp2) 
            goto addr_100063a3_7;
    }
    esi5 = a1;
    if (!esi5) {
        addr_100063a3_7:
        return 0;
    } else {
        edi6 = esi5;
        ecx7 = -1;
        eax8 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax4) - reinterpret_cast<uint32_t>(eax4));
        do {
            if (!ecx7) 
                break;
            --ecx7;
            ++edi6;
            ++esi5;
        } while (*reinterpret_cast<void***>(edi6) != eax8);
        ebx9 = reinterpret_cast<void**>(~ecx7 + 0xffffffff);
        if (!*reinterpret_cast<void***>(ebp2)) 
            goto addr_100063a3_7;
    }
    do {
        edi10 = *reinterpret_cast<void***>(ebp2);
        ecx11 = -1;
        eax8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax8) - reinterpret_cast<unsigned char>(eax8));
        do {
            if (!ecx11) 
                break;
            --ecx11;
            ++edi10;
            ++esi5;
        } while (*reinterpret_cast<void***>(edi10) != eax8);
        if (reinterpret_cast<unsigned char>(~ecx11 - 1) <= reinterpret_cast<unsigned char>(ebx9)) 
            continue;
        eax8 = *reinterpret_cast<void***>(ebp2);
        if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(eax8) + reinterpret_cast<unsigned char>(ebx9)) != 61) 
            continue;
        eax8 = fun_100068f0(eax8, esi5, ebx9);
        if (!eax8) 
            break;
        ebp2 = ebp2 + 4;
    } while (*reinterpret_cast<void***>(ebp2));
    goto addr_100063a3_7;
    return reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebp2)) + reinterpret_cast<unsigned char>(ebx9) + 1;
}

void** g1000a20c = reinterpret_cast<void**>(0);

int32_t GetStringTypeA = 0xc608;

int32_t GetStringTypeW = 0xc61a;

int32_t MultiByteToWideChar = 0xc4e0;

void** fun_100063c0(int32_t a1, void** a2, void** a3, void* a4, void** a5, int32_t a6) {
    void** eax7;
    int32_t esi8;
    int32_t eax9;
    int32_t eax10;
    void** ebx11;
    void** esi12;
    void** edi13;
    int32_t eax14;
    void** eax15;
    void** edi16;
    int32_t esi17;
    int32_t eax18;
    void** eax19;
    void** ebp20;

    eax7 = g1000a20c;
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
                eax7 = reinterpret_cast<void**>(1);
            }
        } else {
            eax7 = reinterpret_cast<void**>(2);
        }
    }
    g1000a20c = eax7;
    if (!reinterpret_cast<int1_t>(eax7 == 2)) {
        g1000a20c = eax7;
        if (reinterpret_cast<int1_t>(eax7 == 1)) {
            ebx11 = reinterpret_cast<void**>(0);
            esi12 = reinterpret_cast<void**>(0);
            edi13 = a5;
            if (!edi13) {
                edi13 = g10009ae8;
            }
            eax14 = reinterpret_cast<int32_t>(MultiByteToWideChar());
            if (eax14 && ((eax15 = fun_10004df0(2, eax14), esi12 = eax15, !!esi12) && (eax18 = reinterpret_cast<int32_t>(MultiByteToWideChar(edi13, 1, edi16, esi17, esi12, eax14)), !!eax18))) {
                eax19 = reinterpret_cast<void**>(GetStringTypeW(edi13, esi12, eax18, a3, edi13, 1, edi16, esi17, esi12, eax14));
                ebx11 = eax19;
            }
            fun_10004e50(esi12, edi13, 9, a2, a3, 0, 0, ebp20, edi16);
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

void** fun_100064f0(void* a1, void** a2, void* a3) {
    int1_t below_or_equal4;
    uint32_t ecx5;
    int32_t* eax6;
    void* edi7;
    uint32_t* eax8;
    void** eax9;

    below_or_equal4 = reinterpret_cast<uint32_t>(g1000be70) <= reinterpret_cast<uint32_t>(a1);
    if (below_or_equal4 || (ecx5 = (reinterpret_cast<uint32_t>(a1) & 31) << 2, (*reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a1) & 0xffffffe7) >> 3) + 0x1000be80)) + (ecx5 + ecx5 * 8) + 4) & 1) == 0)) {
        eax6 = fun_10005e90();
        *eax6 = 9;
        eax8 = fun_10005ea0(edi7);
        *eax8 = 0;
        return 0xffffffff;
    } else {
        fun_10005fa0(a1);
        eax9 = fun_10006570(a1, a2, a3);
        fun_10006010(a1);
        return eax9;
    }
}

signed char* fun_10004dc0(void** a1, int32_t a2) {
    int32_t ebp3;
    signed char* eax4;

    if (reinterpret_cast<signed char>(a1) >= reinterpret_cast<signed char>(20)) {
        LeaveCriticalSection();
        goto ebp3;
    } else {
        eax4 = fun_10004cf0(a1 + 28);
        return eax4;
    }
}

void fun_10004d10(void** a1, void** a2) {
    void** ebp3;

    if (reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(0x10009b38) || reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(0x10009d98)) {
        EnterCriticalSection();
        goto ebp3;
    } else {
        fun_10004c80((reinterpret_cast<int32_t>(a1 - 0x10009b38) >> 5) + 28, ebp3, __return_address(), a1, a2);
        return;
    }
}

int32_t fun_100067e0(void** a1, void** a2, void** a3, void** a4, void** a5) {
    int32_t edi6;
    int32_t eax7;
    void** edi8;
    void** esi9;
    void* v10;
    int32_t eax11;
    void** v12;

    edi6 = -1;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a1 + 12)) & 0x83) {
        eax7 = fun_10006120(a1);
        edi6 = eax7;
        fun_10006c50(a1, edi8, esi9, __return_address(), a1, a2);
        v10 = *reinterpret_cast<void**>(a1 + 16);
        eax11 = fun_10006b50(v10);
        if (eax11 >= 0) {
            if (*reinterpret_cast<void***>(a1 + 28)) {
                v12 = *reinterpret_cast<void***>(a1 + 28);
                fun_10004e50(v12, edi8, esi9, __return_address(), a1, a2, a3, a4, a5);
                *reinterpret_cast<void***>(a1 + 28) = reinterpret_cast<void**>(0);
            }
        } else {
            edi6 = -1;
        }
    }
    *reinterpret_cast<void***>(a1 + 12) = reinterpret_cast<void**>(0);
    return edi6;
}

signed char* fun_10004d80(void** a1) {
    int32_t ebp2;
    signed char* eax3;

    if (reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(0x10009b38) || reinterpret_cast<unsigned char>(a1) > reinterpret_cast<unsigned char>(0x10009d98)) {
        LeaveCriticalSection();
        goto ebp2;
    } else {
        eax3 = fun_10004cf0((reinterpret_cast<int32_t>(a1 - 0x10009b38) >> 5) + 28);
        return eax3;
    }
}

int32_t g1000a26c = 0;

int32_t CompareStringA = 0xc640;

int32_t CompareStringW = 0xc652;

void** fun_10006c90(void** a1, int32_t a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    int1_t zf8;
    void** eax9;
    int32_t ebp10;
    void** ebp11;
    void** ebx12;
    void** esi13;
    void** edi14;
    int1_t zf15;
    int32_t v16;
    int1_t zf17;
    void** v18;
    void** eax19;
    int32_t eax20;
    int32_t v21;
    void** eax22;
    void** eax23;
    int32_t eax24;
    void** v25;
    int32_t eax26;
    void** eax27;
    int32_t eax28;
    uint32_t v29;
    int32_t v30;
    int32_t v31;
    void** v32;
    void** v33;
    void** v34;
    int32_t v35;
    uint32_t v36;
    int32_t v37;
    int32_t v38;
    void** v39;
    void** v40;
    void** v41;
    int32_t v42;

    zf8 = g1000a26c == 0;
    if (zf8) {
        eax9 = reinterpret_cast<void**>(CompareStringA(0, 0, 0x1000a210, 1, 0x1000a210, 1));
        if (!eax9) {
            eax9 = reinterpret_cast<void**>(CompareStringW());
            if (!eax9) {
                goto ebp10;
            } else {
                g1000a26c = 1;
            }
        } else {
            g1000a26c = 2;
        }
    }
    ebp11 = a4;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebp11) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebp11 == 0)) {
        ebx12 = a3;
    } else {
        ebx12 = a3;
        eax9 = fun_10006f80(ebx12, ebp11);
        ebp11 = eax9;
    }
    esi13 = a6;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi13) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi13 == 0)) {
        edi14 = a5;
    } else {
        edi14 = a5;
        eax9 = fun_10006f80(edi14, esi13);
        esi13 = eax9;
    }
    zf15 = g1000a26c == 2;
    if (zf15) {
        CompareStringA();
        goto v16;
    }
    zf17 = g1000a26c == 1;
    if (!zf17) {
        addr_10006f75_16:
        return eax9;
    } else {
        v18 = reinterpret_cast<void**>(0);
        if (!a7) {
            eax19 = g10009ae8;
            a7 = eax19;
        }
        if (!ebp11) 
            goto addr_10006d8b_20;
        if (esi13) 
            goto addr_10006e8a_22;
        addr_10006d8b_20:
        if (ebp11 == esi13) {
            return 2;
        }
        if (reinterpret_cast<signed char>(esi13) > reinterpret_cast<signed char>(1)) {
            return 1;
        }
        if (reinterpret_cast<signed char>(ebp11) > reinterpret_cast<signed char>(1)) {
            return 3;
        }
        eax20 = reinterpret_cast<int32_t>(GetCPInfo());
        if (!eax20) {
            goto v21;
        }
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebp11) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebp11 == 0))) 
            goto addr_10006de2_31;
    }
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi13) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi13 == 0)) {
        addr_10006e8a_22:
        eax22 = reinterpret_cast<void**>(MultiByteToWideChar());
        if (eax22) {
            eax23 = fun_10004e70(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<unsigned char>(eax22), a7);
            if (eax23) {
                eax24 = reinterpret_cast<int32_t>(MultiByteToWideChar(a1));
                if (eax24 && ((eax26 = reinterpret_cast<int32_t>(MultiByteToWideChar(v25)), !!eax26) && ((eax27 = fun_10004e70(eax26 * 2, v25), !!eax27) && (eax28 = reinterpret_cast<int32_t>(MultiByteToWideChar(eax22, 1, edi14, esi13)), !!eax28)))) {
                    CompareStringW(1, ebx12, eax26, 9, eax27, eax26, eax22, 1, edi14, esi13);
                }
                fun_10004e50(eax22, a1, 1, ebx12, ebp11, eax23, eax22, a7, 9);
                fun_10004e50(eax23, a1, 1, ebx12, ebp11, eax23, eax22, a7, 9);
                eax9 = a7;
                goto addr_10006f75_16;
            } else {
                goto 0;
            }
        } else {
            goto 0;
        }
    } else {
        if (v29 < 2) {
            goto v30;
        }
        if (*reinterpret_cast<signed char*>(&v18 + 2)) 
            goto addr_10006e57_42;
    }
    addr_10006e70_43:
    goto v31;
    do {
        addr_10006e57_42:
        if (!v32) 
            goto addr_10006e70_43;
        if (reinterpret_cast<unsigned char>(v33) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14))) 
            continue;
        if (reinterpret_cast<unsigned char>(v32) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi14))) 
            break;
    } while (v34);
    goto addr_10006e70_43;
    goto v35;
    addr_10006de2_31:
    if (v36 < 2) {
        goto v37;
    }
    if (*reinterpret_cast<signed char*>(&v18 + 2)) 
        goto addr_10006e01_50;
    addr_10006e1a_51:
    goto v38;
    do {
        addr_10006e01_50:
        if (!v39) 
            goto addr_10006e1a_51;
        if (reinterpret_cast<unsigned char>(v40) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx12))) 
            continue;
        if (reinterpret_cast<unsigned char>(v39) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ebx12))) 
            break;
    } while (v41);
    goto addr_10006e1a_51;
    goto v42;
}

struct s23 {
    int32_t f0;
    unsigned char f4;
};

int32_t SetStdHandle = 0xc5f8;

int32_t fun_10005eb0(void* a1) {
    int1_t below_or_equal2;
    void** edi3;
    uint32_t eax4;
    uint32_t esi5;
    struct s23* eax6;
    int32_t* eax7;
    void* edi8;
    uint32_t* eax9;
    int1_t zf10;
    int32_t v11;

    below_or_equal2 = reinterpret_cast<uint32_t>(g1000be70) <= reinterpret_cast<uint32_t>(a1);
    if (below_or_equal2 || ((edi3 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(a1) & 0xffffffe7) >> 3) + 0x1000be80), eax4 = (reinterpret_cast<uint32_t>(a1) & 31) << 2, esi5 = eax4 + eax4 * 8, eax6 = reinterpret_cast<struct s23*>(reinterpret_cast<int32_t>(*edi3) + esi5), (eax6->f4 & 1) == 0) || eax6->f0 == -1)) {
        eax7 = fun_10005e90();
        *eax7 = 9;
        eax9 = fun_10005ea0(edi8);
        *eax9 = 0;
        return -1;
    }
    zf10 = g10009354 == 1;
    if (!zf10) {
        addr_10005f15_4:
        *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*edi3) + esi5) = -1;
        return 0;
    } else {
        if (!a1) {
            v11 = 0xf6;
        } else {
            if (a1 == 1) {
                v11 = 0xf5;
            } else {
                if (a1 == 2) {
                    v11 = 0xf4;
                } else {
                    goto addr_10005f15_4;
                }
            }
        }
    }
    SetStdHandle(v11, 0);
    goto addr_10005f15_4;
}

void** fun_10007200(void** a1, void** a2) {
    void** edi3;
    void* eax4;
    void** ebx5;
    void** esi6;
    void** v7;
    void** eax8;
    void* edi9;

    edi3 = g10009390;
    if (!*reinterpret_cast<void***>(edi3)) {
        addr_1000723c_2:
        eax4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi3) - reinterpret_cast<unsigned char>(g10009390));
        return -(reinterpret_cast<int32_t>(eax4) >> 2);
    } else {
        ebx5 = a2;
        esi6 = a1;
        do {
            v7 = *reinterpret_cast<void***>(edi3);
            eax8 = fun_100068f0(esi6, v7, ebx5);
            if (eax8) 
                continue;
            if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi3)) + reinterpret_cast<unsigned char>(ebx5)) == 61) 
                break;
            if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(edi3)) + reinterpret_cast<unsigned char>(ebx5))) 
                break;
            edi3 = edi3 + 4;
        } while (*reinterpret_cast<void***>(edi3));
        goto addr_1000723c_2;
    }
    edi9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(edi3) - reinterpret_cast<unsigned char>(g10009390));
    return reinterpret_cast<int32_t>(edi9) >> 2;
}

struct s17* fun_10007450(void** a1) {
    void** ecx2;
    void** eax3;
    int1_t zf4;

    ecx2 = a1;
    if (!(reinterpret_cast<unsigned char>(ecx2) & 3)) {
        do {
            addr_1000746c_2:
            ecx2 = ecx2 + 4;
            if (!((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx2)) ^ 0xffffffff ^ reinterpret_cast<uint32_t>(*reinterpret_cast<void***>(ecx2) + 0x7efefeff)) & 0x81010100)) 
                goto addr_1000746c_2;
            eax3 = *reinterpret_cast<void***>(ecx2 + 0xfffffffc);
            if (!*reinterpret_cast<signed char*>(&eax3)) 
                break;
            if (!*reinterpret_cast<signed char*>(&eax3 + 1)) 
                goto addr_100074b3_5;
            if (!(reinterpret_cast<unsigned char>(eax3) & 0xff0000)) 
                goto addr_100074a9_7;
            zf4 = (reinterpret_cast<unsigned char>(eax3) & 0xff000000) == 0;
        } while (!zf4 && !zf4);
        goto addr_1000749f_9;
    } else {
        do {
            ++ecx2;
            if (!*reinterpret_cast<void***>(ecx2)) 
                goto addr_1000749f_9;
        } while (reinterpret_cast<unsigned char>(ecx2) & 3);
        goto addr_1000746b_12;
    }
    return reinterpret_cast<uint32_t>(ecx2 + 0xfffffffc) - reinterpret_cast<unsigned char>(a1);
    addr_100074b3_5:
    return reinterpret_cast<uint32_t>(ecx2 + 0xfffffffd) - reinterpret_cast<unsigned char>(a1);
    addr_100074a9_7:
    return reinterpret_cast<uint32_t>(ecx2 + 0xfffffffe) - reinterpret_cast<unsigned char>(a1);
    addr_1000749f_9:
    return reinterpret_cast<unsigned char>(ecx2 + 0xffffffff) - reinterpret_cast<unsigned char>(a1);
    addr_1000746b_12:
    goto addr_1000746c_2;
}

int32_t fun_10002140(struct s0* a1, struct s8* a2, void* a3, void* a4) {
    int32_t ecx5;
    int32_t eax6;
    int32_t eax7;
    int32_t eax8;
    void* esp9;
    struct s0* edi10;
    int32_t eax11;

    ecx5 = -1;
    eax6 = eax7 - eax8;
    esp9 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 32 - 4);
    edi10 = a1;
    do {
        if (!ecx5) 
            break;
        --ecx5;
        edi10 = reinterpret_cast<struct s0*>(reinterpret_cast<int32_t>(edi10) + 1);
    } while (*reinterpret_cast<signed char*>(edi10) != *reinterpret_cast<signed char*>(&eax6));
    eax11 = fun_10003e80(reinterpret_cast<int32_t>(esp9) - 4 + 8, a2, reinterpret_cast<int32_t>(esp9) + 48);
    return eax11;
}

int32_t GetACP = 0xc4b0;

int32_t GetOEMCP = 0xc4ba;

void** fun_10002c90(void** a1) {
    void** eax2;

    g100094fc = 0;
    eax2 = a1;
    if (!reinterpret_cast<int1_t>(eax2 == 0xfffffffe)) {
        if (!reinterpret_cast<int1_t>(eax2 == 0xfffffffd)) {
            if (reinterpret_cast<int1_t>(eax2 == 0xfffffffc)) {
                g100094fc = 1;
                eax2 = g10009ae8;
            }
            return eax2;
        } else {
            g100094fc = 1;
            goto GetACP;
        }
    } else {
        g100094fc = 1;
        goto GetOEMCP;
    }
}

void fun_10002280(void** a1, void** a2, void** a3) {
    fun_10004c80(13, __return_address(), a1, a2, a3);
    return;
}

uint32_t fun_10005b00(void** a1, void** a2, uint32_t a3) {
    int1_t zf4;
    int32_t ecx5;
    void** eax6;
    int32_t eax7;
    int32_t* eax8;
    int1_t less_or_equal9;
    int1_t cf10;
    int1_t less11;
    void** edx12;
    uint32_t ecx13;
    int32_t eax14;
    uint32_t eax15;
    int32_t* eax16;

    if (!a2 || !a3) {
        return 0;
    }
    if (!*reinterpret_cast<void***>(a2)) {
        if (a1) {
            *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(0);
        }
        return 0;
    }
    zf4 = g10009ad8 == 0;
    if (zf4) {
        if (a1) {
            *reinterpret_cast<void***>(a1) = reinterpret_cast<void**>(static_cast<uint16_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(a2))));
        }
        return 1;
    }
    ecx5 = 0;
    *reinterpret_cast<void***>(&ecx5) = *reinterpret_cast<void***>(a2);
    eax6 = image_base_;
    if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(eax6 + ecx5 * 2) + 1) & 0x80)) {
        eax7 = reinterpret_cast<int32_t>(MultiByteToWideChar());
        if (eax7) {
            goto a2;
        } else {
            eax8 = fun_10005e90();
            *eax8 = 42;
            goto a2;
        }
    }
    less_or_equal9 = reinterpret_cast<int32_t>(g1000a08c) <= reinterpret_cast<int32_t>(1);
    if (less_or_equal9) 
        goto addr_10005b9a_16;
    cf10 = a3 < g1000a08c;
    less11 = reinterpret_cast<int32_t>(a3) < reinterpret_cast<int32_t>(g1000a08c);
    if (!less11) {
        edx12 = g10009ae8;
        ecx13 = g1000a08c;
        eax14 = reinterpret_cast<int32_t>(MultiByteToWideChar(edx12, 9, a2, ecx13, a1, reinterpret_cast<unsigned char>(eax6) - (reinterpret_cast<unsigned char>(eax6) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax6) < reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(eax6) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(a1) < reinterpret_cast<unsigned char>(1))))) + 1));
        if (eax14) {
            eax15 = g1000a08c;
            return eax15;
        } else {
            addr_10005b9a_16:
            cf10 = a3 < g1000a08c;
        }
    }
    if (cf10 || !*reinterpret_cast<void***>(a2 + 1)) {
        eax16 = fun_10005e90();
        *eax16 = 42;
        return 0xffffffff;
    }
}

void** g1000ae64;

int32_t fun_100061a0(int32_t a1) {
    int32_t edi2;
    void** esi3;
    void* ebx4;
    int32_t v5;
    void** ebp6;
    void** edi7;
    void** esi8;
    void** ebx9;
    int32_t ebp10;
    void** eax11;
    void** v12;
    void** eax13;
    void** eax14;
    void** v15;
    uint32_t eax16;
    void** v17;
    uint32_t eax18;
    void** eax19;
    int32_t v20;
    int32_t eax21;

    edi2 = 0;
    esi3 = reinterpret_cast<void**>(0);
    ebx4 = reinterpret_cast<void*>(0);
    v5 = 0;
    fun_10004c80(2, ebp6, edi7, esi8, ebx9);
    ebp10 = a1;
    do {
        eax11 = g1000ae64;
        if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax11) + reinterpret_cast<uint32_t>(ebx4)) && reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax11) + reinterpret_cast<uint32_t>(ebx4)) + 12)) & 0x83) {
            v12 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax11) + reinterpret_cast<uint32_t>(ebx4));
            fun_10004d50(esi3, v12);
            eax13 = g1000ae64;
            eax14 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax13) + reinterpret_cast<uint32_t>(ebx4)) + 12);
            if (*reinterpret_cast<unsigned char*>(&eax14) & 0x83) {
                if (ebp10 != 1) {
                    if (!ebp10 && (*reinterpret_cast<unsigned char*>(&eax14) & 2 && (v15 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax13) + reinterpret_cast<uint32_t>(ebx4)), eax16 = fun_100060e0(v15), eax16 == 0xffffffff))) {
                        v5 = -1;
                    }
                } else {
                    v17 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax13) + reinterpret_cast<uint32_t>(ebx4));
                    eax18 = fun_100060e0(v17);
                    if (eax18 != 0xffffffff) {
                        ++edi2;
                    }
                }
            }
            eax19 = g1000ae64;
            v20 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<uint32_t>(ebx4));
            fun_10004dc0(esi3, v20);
        }
        ebx4 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx4) + 4);
        ++esi3;
    } while (reinterpret_cast<int32_t>(ebx4) < reinterpret_cast<int32_t>(0x800));
    fun_10004cf0(2);
    eax21 = edi2;
    if (ebp10 != 1) {
        eax21 = v5;
    }
    return eax21;
}

int32_t g1000ac94;

/* _InitializeNetwork@0 */
uint32_t _InitializeNetwork_0() {
    uint32_t eax1;

    g1000ac94 = -1;
    eax1 = fun_10001470();
    return 1 - reinterpret_cast<uint1_t>(eax1 < 1) & 0x1000aca0;
}

void fun_10002d2c() {
    int32_t eax1;
    int32_t eax2;
    signed char al3;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax2) + al3);
}

signed char g5050105;

void fun_10003bb8(int32_t ecx) {
    signed char tmp8_2;
    signed char al3;

    tmp8_2 = reinterpret_cast<signed char>(g5050105 + al3);
    g5050105 = tmp8_2;
}

void fun_10003be0() {
    int32_t eax1;
    int32_t eax2;
    signed char al3;
    int32_t eax4;
    signed char al5;

    *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax2) + al3);
    *reinterpret_cast<signed char*>(&eax4) = reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(reinterpret_cast<signed char>(al5 + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4) + 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + eax4) + eax4;
}

struct s24 {
    signed char[269488144] pad269488144;
    unsigned char f10101010;
};

unsigned char g10100e10;

void fun_10003c54(uint32_t ecx) {
    signed char* eax2;
    signed char* eax3;
    signed char dl4;
    int32_t* eax5;
    int32_t* eax6;
    int32_t edx7;
    unsigned char tmp8_8;
    signed char dl9;
    signed char* eax10;
    unsigned char* edx11;
    unsigned char tmp8_12;
    signed char* eax13;
    unsigned char dl14;
    uint1_t cf15;
    unsigned char* eax16;
    unsigned char* eax17;
    unsigned char tmp8_18;
    signed char* eax19;
    uint1_t cf20;
    unsigned char* eax21;
    unsigned char* eax22;
    unsigned char tmp8_23;
    signed char* eax24;
    uint1_t cf25;
    unsigned char* eax26;
    unsigned char* eax27;
    unsigned char tmp8_28;
    signed char* eax29;
    uint1_t cf30;
    unsigned char* eax31;
    unsigned char* eax32;
    unsigned char* eax33;
    signed char* eax34;
    unsigned char* tmp32_35;
    void** eax36;
    unsigned char* edx37;
    unsigned char tmp8_38;
    signed char* eax39;
    uint1_t cf40;
    unsigned char* eax41;
    unsigned char* eax42;
    void* eax43;
    void* eax44;
    signed char al45;
    unsigned char* tmp32_46;
    struct s24* eax47;
    unsigned char tmp8_48;
    unsigned char* eax49;
    uint1_t cf50;
    unsigned char tmp8_51;
    uint1_t cf52;
    uint32_t ecx53;
    unsigned char tmp8_54;

    *eax2 = reinterpret_cast<signed char>(*eax3 + dl4);
    *eax5 = *eax6 + edx7;
    tmp8_8 = reinterpret_cast<unsigned char>(dl9 + *eax10);
    *reinterpret_cast<unsigned char*>(&edx11) = tmp8_8;
    tmp8_12 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax13 + *reinterpret_cast<unsigned char*>(&edx11)) + reinterpret_cast<uint1_t>(tmp8_8 < dl14));
    cf15 = reinterpret_cast<uint1_t>(tmp8_12 < *eax16);
    *eax17 = tmp8_12;
    tmp8_18 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax19 + *reinterpret_cast<unsigned char*>(&edx11)) + cf15);
    cf20 = reinterpret_cast<uint1_t>(tmp8_18 < *eax21);
    *eax22 = tmp8_18;
    tmp8_23 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax24 + *reinterpret_cast<unsigned char*>(&edx11)) + cf20);
    cf25 = reinterpret_cast<uint1_t>(tmp8_23 < *eax26);
    *eax27 = tmp8_23;
    tmp8_28 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax29 + *reinterpret_cast<unsigned char*>(&edx11)) + cf25);
    cf30 = reinterpret_cast<uint1_t>(tmp8_28 < *eax31);
    *eax32 = tmp8_28;
    *eax33 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax34 + *reinterpret_cast<unsigned char*>(&edx11)) + cf30);
    tmp32_35 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint32_t>(edx11) + reinterpret_cast<int32_t>(*eax36));
    edx37 = tmp32_35;
    tmp8_38 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*eax39 + *reinterpret_cast<unsigned char*>(&edx37)) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_35) < reinterpret_cast<uint32_t>(edx11)));
    cf40 = reinterpret_cast<uint1_t>(tmp8_38 < *eax41);
    *eax42 = tmp8_38;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax43) + reinterpret_cast<uint32_t>(edx37)) = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(eax44) + reinterpret_cast<uint32_t>(edx37)) + al45) + cf40);
    tmp32_46 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(eax47) + 0x10101010);
    tmp8_48 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*tmp32_46 + *reinterpret_cast<unsigned char*>(&edx37)) + reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(tmp32_46) < reinterpret_cast<uint32_t>(eax49)));
    cf50 = reinterpret_cast<uint1_t>(tmp8_48 < *tmp32_46);
    *tmp32_46 = tmp8_48;
    *tmp32_46 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*tmp32_46 + *reinterpret_cast<unsigned char*>(&edx37)) + cf50);
    *tmp32_46 = reinterpret_cast<unsigned char>(*tmp32_46 | *reinterpret_cast<unsigned char*>(&ecx));
    *tmp32_46 = reinterpret_cast<unsigned char>(*tmp32_46 | *reinterpret_cast<unsigned char*>(&edx37));
    *tmp32_46 = reinterpret_cast<unsigned char>(*tmp32_46 | reinterpret_cast<uint32_t>(edx37));
    tmp8_51 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(*tmp32_46 + *reinterpret_cast<unsigned char*>(&edx37))));
    cf52 = reinterpret_cast<uint1_t>(tmp8_51 < *tmp32_46);
    *tmp32_46 = tmp8_51;
    *edx37 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*edx37 + *reinterpret_cast<unsigned char*>(&ecx)) + cf52);
    ecx53 = ecx | *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(tmp32_46) + reinterpret_cast<uint32_t>(edx37));
    tmp8_54 = reinterpret_cast<unsigned char>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(g10100e10 + *reinterpret_cast<signed char*>(&ecx53))));
    g10100e10 = tmp8_54;
}

struct s25 {
    unsigned char f0;
    signed char[101189639] pad101189640;
    unsigned char f6080808;
};

void fun_10004a80(int32_t ecx) {
    unsigned char* eax2;
    signed char* eax3;
    unsigned char* eax4;
    unsigned char* eax5;
    unsigned char* eax6;
    unsigned char* eax7;
    unsigned char* eax8;
    unsigned char* eax9;
    unsigned char* eax10;
    unsigned char* eax11;
    unsigned char* eax12;
    unsigned char* eax13;
    unsigned char* eax14;
    unsigned char* eax15;
    unsigned char* eax16;
    unsigned char* eax17;
    unsigned char* eax18;
    unsigned char* eax19;
    unsigned char* eax20;
    unsigned char* eax21;
    unsigned char* eax22;
    unsigned char* eax23;
    unsigned char* eax24;
    unsigned char* eax25;
    unsigned char* eax26;
    unsigned char* eax27;
    unsigned char* eax28;
    unsigned char* eax29;
    int32_t* eax30;
    int32_t* eax31;
    unsigned char* edx32;
    unsigned char* edx33;
    unsigned char al34;
    unsigned char* eax35;
    unsigned char* eax36;
    int32_t ecx37;
    int32_t* eax38;
    struct s25* eax39;
    signed char al40;
    unsigned char* eax41;

    *eax2 = reinterpret_cast<unsigned char>(*eax3 + *reinterpret_cast<unsigned char*>(&ecx));
    *eax4 = reinterpret_cast<unsigned char>(*eax5 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax6 = reinterpret_cast<unsigned char>(*eax7 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax8 = reinterpret_cast<unsigned char>(*eax9 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax10 = reinterpret_cast<unsigned char>(*eax11 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax12 = reinterpret_cast<unsigned char>(*eax13 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax14 = reinterpret_cast<unsigned char>(*eax15 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax16 = reinterpret_cast<unsigned char>(*eax17 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax18 = reinterpret_cast<unsigned char>(*eax19 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax20 = reinterpret_cast<unsigned char>(*eax21 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax22 = reinterpret_cast<unsigned char>(*eax23 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax24 = reinterpret_cast<unsigned char>(*eax25 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax26 = reinterpret_cast<unsigned char>(*eax27 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax28 = reinterpret_cast<unsigned char>(*eax29 | *reinterpret_cast<unsigned char*>(&ecx));
    *eax30 = *eax31 + ecx;
    *edx32 = reinterpret_cast<unsigned char>(*edx33 | al34);
    *eax35 = reinterpret_cast<unsigned char>(*eax36 | *reinterpret_cast<unsigned char*>(&ecx));
    ecx37 = ecx + *eax38;
    *reinterpret_cast<signed char*>(&eax39) = reinterpret_cast<signed char>(al40 + 8);
    eax39->f0 = reinterpret_cast<unsigned char>(eax39->f0 | *reinterpret_cast<unsigned char*>(&ecx37));
    eax39->f0 = reinterpret_cast<unsigned char>(eax39->f0 | *reinterpret_cast<unsigned char*>(&ecx37));
    eax39->f0 = reinterpret_cast<unsigned char>(eax39->f0 | *reinterpret_cast<unsigned char*>(&ecx37));
    eax39->f0 = reinterpret_cast<unsigned char>(eax39->f0 | *reinterpret_cast<unsigned char*>(&ecx37));
    eax39->f0 = reinterpret_cast<unsigned char>(eax39->f0 | *reinterpret_cast<unsigned char*>(&ecx37));
    eax39->f0 = reinterpret_cast<unsigned char>(eax39->f0 | *reinterpret_cast<unsigned char*>(&ecx37));
    eax39->f0 = reinterpret_cast<unsigned char>(eax39->f0 | *reinterpret_cast<unsigned char*>(&ecx37));
    eax39->f0 = reinterpret_cast<unsigned char>(eax39->f0 | *reinterpret_cast<unsigned char*>(&ecx37));
    eax39->f0 = reinterpret_cast<unsigned char>(eax39->f0 | *reinterpret_cast<unsigned char*>(&ecx37));
    eax39->f0 = reinterpret_cast<unsigned char>(eax39->f0 | *reinterpret_cast<unsigned char*>(&ecx37));
    eax39->f0 = reinterpret_cast<unsigned char>(eax39->f0 | *reinterpret_cast<unsigned char*>(&ecx37));
    eax39->f0 = reinterpret_cast<unsigned char>(eax39->f0 | *reinterpret_cast<unsigned char*>(&ecx37));
    eax41 = &eax39->f6080808;
    *eax41 = reinterpret_cast<unsigned char>(*eax41 | *reinterpret_cast<unsigned char*>(&ecx37));
    *eax41 = reinterpret_cast<unsigned char>(*eax41 | *reinterpret_cast<unsigned char*>(&ecx37));
    *eax41 = reinterpret_cast<unsigned char>(*eax41 | *reinterpret_cast<unsigned char*>(&ecx37));
    *eax41 = reinterpret_cast<unsigned char>(*eax41 | *reinterpret_cast<unsigned char*>(&ecx37));
    *eax41 = reinterpret_cast<unsigned char>(*eax41 | *reinterpret_cast<unsigned char*>(&ecx37));
}

void fun_10004b00(signed char* ecx) {
    signed char al2;
    uint32_t eax3;
    signed char al4;
    signed char* edx5;
    signed char* ebx6;
    uint32_t* ebx7;
    uint32_t* ebx8;
    void** ebx9;
    uint32_t* ebx10;
    uint32_t* ebx11;

    *ecx = reinterpret_cast<signed char>(*ecx + al2);
    *reinterpret_cast<signed char*>(&eax3) = reinterpret_cast<signed char>(al4 + *edx5);
    *reinterpret_cast<signed char*>(&ecx) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&ecx) + *ebx6);
    *ebx7 = *ebx8 | (reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(ecx) + reinterpret_cast<int32_t>(*ebx9)) | *ebx10 | *reinterpret_cast<uint32_t*>(eax3 | *reinterpret_cast<uint32_t*>(eax3 + 0x70b0b06)) | *ebx11);
}

int32_t g1000bf94;

void** fun_10001e40(void** a1, void** a2, void** a3) {
    void** ebx4;
    uint32_t eax5;
    uint32_t tmp32_6;
    int32_t eax7;
    void** esi8;
    void** ebp9;
    void** eax10;
    void** ebp11;
    void** eax12;
    int32_t eax13;
    void** eax14;
    void** edi15;
    void** eax16;
    void** eax17;

    ebx4 = reinterpret_cast<void**>(1);
    if (!reinterpret_cast<int1_t>(a2 == 1)) {
        if (!a2) {
            eax5 = g10009340;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax5) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax5 == 0)) {
                return 0;
            } else {
                g10009340 = eax5 - 1;
            }
        }
    } else {
        tmp32_6 = g10009340 + reinterpret_cast<unsigned char>(1);
        g10009340 = tmp32_6;
    }
    if (a2 == 1 || reinterpret_cast<int1_t>(a2 == 2)) {
        eax7 = g1000bf94;
        if (!eax7) {
            esi8 = a1;
            ebp9 = a3;
        } else {
            ebp9 = a3;
            esi8 = a1;
            eax10 = reinterpret_cast<void**>(eax7(esi8, a2, ebp9));
            ebx4 = eax10;
        }
        if (ebx4) 
            goto addr_10001ea5_12;
    } else {
        esi8 = a1;
        ebp9 = a3;
        goto addr_10001eb9_14;
    }
    addr_10001ec7_15:
    if (ebx4) {
        addr_10001eda_16:
        if (!a2 || reinterpret_cast<int1_t>(a2 == 3)) {
            eax12 = fun_10001cf0(esi8, a2, ebp9, ebp11);
            if (!eax12) {
                ebx4 = reinterpret_cast<void**>(0);
            }
            if (ebx4 && (eax13 = g1000bf94, !!eax13)) {
                eax14 = reinterpret_cast<void**>(eax13(esi8, a2, ebp9));
                ebx4 = eax14;
            }
        }
    } else {
        addr_10001ecb_21:
        if (reinterpret_cast<int1_t>(a2 == 1)) {
            fun_10002320(ebp11, edi15);
            fun_100024b0();
            goto addr_10001eda_16;
        }
    }
    return ebx4;
    addr_10001ea5_12:
    eax16 = fun_10001cf0(esi8, a2, ebp9, ebp11);
    ebx4 = eax16;
    addr_10001eb9_14:
    if (!ebx4) 
        goto addr_10001ecb_21;
    eax17 = fun_100013e0(esi8, a2, ebp9);
    ebx4 = eax17;
    goto addr_10001ec7_15;
}

signed char* fun_100021c0(int32_t a1) {
    signed char* eax2;

    eax2 = fun_100021f0(a1, 1, 0);
    return eax2;
}

uint32_t g1000ae60;

struct s26 {
    signed char[32] pad32;
    void** f20;
};

int32_t fun_10005470(void** a1, void** a2) {
    void** v3;
    int32_t eax4;
    int1_t zf5;
    void** v6;
    void** ebx7;
    void** v8;
    void** esi9;
    void** v10;
    void** edi11;
    int32_t esi12;
    void** v13;
    void** ebp14;
    uint32_t edi15;
    int1_t less_or_equal16;
    void* ebp17;
    int32_t ebx18;
    void** eax19;
    void** v20;
    int32_t eax21;
    void** eax22;
    void** v23;
    void** ecx24;
    void** v25;
    void** ecx26;
    int1_t less27;

    v3 = reinterpret_cast<void**>(__return_address());
    eax4 = fun_10006190();
    zf5 = g100093a8 == 0;
    if (zf5) {
        return eax4;
    }
    v6 = ebx7;
    v8 = esi9;
    v10 = edi11;
    esi12 = 0;
    v13 = ebp14;
    edi15 = 3;
    fun_10004c80(2, v13, v10, v8, v6);
    less_or_equal16 = reinterpret_cast<int32_t>(g1000ae60) <= reinterpret_cast<int32_t>(3);
    if (!less_or_equal16) 
        goto addr_1000605d_5;
    addr_100060c7_6:
    fun_10004cf0(2);
    return esi12;
    addr_1000605d_5:
    ebp17 = reinterpret_cast<void*>(12);
    ebx18 = DeleteCriticalSection;
    do {
        eax19 = g1000ae64;
        if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<uint32_t>(ebp17))) {
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<uint32_t>(ebp17)) + 12)) & 0x83 && (v20 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(eax19) + reinterpret_cast<uint32_t>(ebp17)), eax21 = fun_100067a0(v20), eax21 != -1)) {
                ++esi12;
            }
            if (reinterpret_cast<int32_t>(ebp17) >= reinterpret_cast<int32_t>(80)) {
                eax22 = g1000ae64;
                v23 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s26**>(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<uint32_t>(ebp17)))->f20);
                ebx18(v23);
                ecx24 = g1000ae64;
                v25 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx24) + reinterpret_cast<uint32_t>(ebp17));
                fun_10004e50(v25, v23, v13, v10, v8, v6, v3, a1, a2);
                ecx26 = g1000ae64;
                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(ecx26) + reinterpret_cast<uint32_t>(ebp17)) = 0;
            }
        }
        ebp17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp17) + 4);
        ++edi15;
        less27 = reinterpret_cast<int32_t>(edi15) < reinterpret_cast<int32_t>(g1000ae60);
    } while (less27);
    goto addr_100060c7_6;
}

struct s27 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_10006a1b(int32_t a1) {
    int16_t* edi2;
    int16_t* esi3;
    struct s27* ebp4;

    *edi2 = *esi3;
    goto ebp4->f4;
}

struct s28 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_10006a5d(int32_t a1) {
    int32_t ecx2;
    signed char* edi3;
    signed char* esi4;
    struct s28* ebp5;

    while (ecx2) {
        --ecx2;
        *edi3 = *esi4;
        ++edi3;
        ++esi4;
    }
    goto ebp5->f4;
}

struct s29 {
    signed char[4] pad4;
    int32_t f4;
};

struct s30 {
    int32_t f0;
    signed char f1;
    int16_t f2;
    signed char f3;
};

struct s31 {
    int32_t f0;
    signed char f1;
    int16_t f2;
    signed char f3;
};

struct s32 {
    signed char[4] pad4;
    int32_t f4;
};

struct s33 {
    signed char[4] pad4;
    int32_t f4;
};

struct s34 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_10006a69(void* ecx, int32_t a2) {
    void* esi3;
    void* esi4;
    void* edi5;
    void* edi6;
    signed char* esi7;
    signed char* edi8;
    struct s29* ebp9;
    uint32_t edx10;
    int32_t edx11;
    void* eax12;
    uint32_t ecx13;
    uint32_t eax14;
    struct s30* esi15;
    struct s31* edi16;
    uint32_t ecx17;
    uint32_t edx18;
    uint32_t ecx19;
    struct s32* ebp20;
    struct s33* ebp21;
    struct s34* ebp22;

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
        esi15 = reinterpret_cast<struct s30*>(esi7 - 3);
        edi16 = reinterpret_cast<struct s31*>(edi8 - 3);
        ecx17 = reinterpret_cast<uint32_t>(eax12) >> 2;
        while (ecx17) {
            --ecx17;
            edi16->f0 = esi15->f0;
            edi16 = reinterpret_cast<struct s31*>(reinterpret_cast<uint32_t>(edi16) - 4);
            esi15 = reinterpret_cast<struct s30*>(reinterpret_cast<uint32_t>(esi15) - 4);
        }
        goto *reinterpret_cast<int32_t*>(eax14 * 4 + 0x10006a90);
    } else {
        edx18 = reinterpret_cast<uint32_t>(ecx) & 3;
        esi15 = reinterpret_cast<struct s30*>(reinterpret_cast<uint32_t>(esi3) - 4);
        edi16 = reinterpret_cast<struct s31*>(reinterpret_cast<uint32_t>(edi5) - 4);
        ecx19 = reinterpret_cast<uint32_t>(ecx) >> 2;
        while (ecx19) {
            --ecx19;
            edi16->f0 = esi15->f0;
            edi16 = reinterpret_cast<struct s31*>(reinterpret_cast<uint32_t>(edi16) - 4);
            esi15 = reinterpret_cast<struct s30*>(reinterpret_cast<uint32_t>(esi15) - 4);
        }
        goto *reinterpret_cast<int32_t*>(edx18 * 4 + 0x10006a90);
    }
    addr_10006ace_19:
    goto ebp20->f4;
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi16) + 3) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi15) + 3);
    goto addr_10006ace_19;
    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edi16) + 2) = *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(esi15) + 2);
    goto ebp21->f4;
    *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(edi16) + 2) = *reinterpret_cast<int16_t*>(reinterpret_cast<uint32_t>(esi15) + 2);
    *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edi16) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esi15) + 1);
    goto ebp22->f4;
}

void fun_10006ab6() {
}

signed char* fun_10006b10(uint32_t ecx, signed char* a2, signed char* a3, int32_t a4) {
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

int32_t g1000ac90;

struct s35 {
    signed char* f0;
    signed char* f4;
};

int32_t g1000ac74;

int32_t GetTickCount = 0xc252;

int16_t g1000acbc;

int16_t g1000acac;

/* _Connect@8 */
int32_t _Connect_8() {
    int32_t ecx1;
    int32_t eax2;
    int32_t eax3;
    int32_t eax4;
    struct s0* v5;
    struct s0* ebx6;
    struct s35* ebx7;
    struct s35* v8;
    struct s0* v9;
    struct s0* esi10;
    struct s0** esp11;
    struct s0* v12;
    struct s0* edi13;
    signed char* edi14;
    uint32_t ecx15;
    uint32_t eax16;
    uint32_t ecx17;
    uint32_t ecx18;
    signed char* edi19;
    int32_t ecx20;
    uint32_t eax21;
    uint32_t edx22;
    int32_t ecx23;
    uint32_t eax24;
    signed char v25;
    uint32_t ecx26;
    uint32_t ecx27;
    signed char* edi28;
    int32_t ecx29;
    uint32_t eax30;
    uint32_t edx31;
    int32_t ecx32;
    uint32_t eax33;
    signed char v34;
    uint32_t ecx35;
    uint32_t ecx36;
    int32_t eax37;
    uint32_t eax38;
    uint32_t eax39;
    void* esp40;
    int32_t esi41;
    int32_t ebx42;
    void* esp43;
    uint32_t eax44;
    int32_t eax45;
    void* esp46;
    int32_t eax47;
    void* esp48;
    void* esp49;
    signed char v50;
    int32_t v51;
    int32_t v52;
    int32_t* esp53;
    int32_t eax54;
    void* esp55;
    signed char* edx56;
    void* esp57;
    int32_t ecx58;
    int32_t eax59;
    signed char v60;
    int32_t eax61;
    int32_t eax62;
    unsigned char* eax63;
    uint1_t cf64;
    unsigned char v65;
    unsigned char v66;
    unsigned char v67;
    unsigned char v68;
    unsigned char v69;
    unsigned char v70;
    uint1_t cf71;
    uint32_t eax72;
    uint32_t eax73;
    uint32_t eax74;
    int32_t eax75;
    int32_t eax76;
    int32_t eax77;
    struct s0* v78;
    int32_t eax79;

    g1000ac90 = 2;
    ecx1 = -1;
    eax2 = eax3 - eax4;
    v5 = ebx6;
    ebx7 = v8;
    v9 = esi10;
    esp11 = reinterpret_cast<struct s0**>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 0xc8 - 4 - 4 - 4);
    v12 = edi13;
    edi14 = ebx7->f0;
    do {
        if (!ecx1) 
            break;
        --ecx1;
        ++edi14;
    } while (*edi14 != *reinterpret_cast<signed char*>(&eax2));
    ecx15 = reinterpret_cast<uint32_t>(~ecx1);
    eax16 = ecx15;
    ecx17 = ecx15 >> 2;
    while (ecx17) {
        --ecx17;
    }
    ecx18 = eax16 & 3;
    while (ecx18) {
        --ecx18;
    }
    edi19 = " ";
    ecx20 = -1;
    eax21 = eax16 - eax16;
    do {
        if (!ecx20) 
            break;
        --ecx20;
        ++edi19;
    } while (*edi19 != *reinterpret_cast<signed char*>(&eax21));
    edx22 = reinterpret_cast<uint32_t>(~ecx20);
    ecx23 = -1;
    eax24 = eax21 - eax21;
    do {
        if (!ecx23) 
            break;
        --ecx23;
    } while (v25 != *reinterpret_cast<signed char*>(&eax24));
    ecx26 = edx22 >> 2;
    while (ecx26) {
        --ecx26;
    }
    ecx27 = edx22 & 3;
    while (ecx27) {
        --ecx27;
    }
    edi28 = ebx7->f4;
    ecx29 = -1;
    eax30 = eax24 - eax24;
    do {
        if (!ecx29) 
            break;
        --ecx29;
        ++edi28;
    } while (*edi28 != *reinterpret_cast<signed char*>(&eax30));
    edx31 = reinterpret_cast<uint32_t>(~ecx29);
    ecx32 = -1;
    eax33 = eax30 - eax30;
    do {
        if (!ecx32) 
            break;
        --ecx32;
    } while (v34 != *reinterpret_cast<signed char*>(&eax33));
    ecx35 = edx31 >> 2;
    while (ecx35) {
        --ecx35;
    }
    ecx36 = edx31 & 3;
    while (ecx36) {
        --ecx36;
    }
    eax37 = fun_10001570(esp11 + 21);
    g1000ac74 = eax37;
    if (eax37 != -1) {
        eax38 = reinterpret_cast<uint32_t>(GetTickCount());
        eax39 = reinterpret_cast<uint32_t>(GetCurrentProcessId());
        fun_10001f50(eax38 ^ eax39);
        esp40 = reinterpret_cast<void*>(esp11 - 1 - 1 + 1 + 1 - 1 + 1 - 1 + 1 - 1 - 1 + 1);
        esi41 = -1;
        ebx42 = 0;
        fun_10001020(reinterpret_cast<int32_t>(esp40) + 20);
        esp43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp40) + 4 - 4 - 4 + 4 + 4);
        while (1) {
            eax44 = fun_10001920(reinterpret_cast<int32_t>(esp43) + 32, 30);
            esp43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp43) - 4 - 4 - 4 + 8 + 4);
            if (eax44 != 0xffffffff) {
                if (eax44 != 10 || (eax45 = fun_10002090(reinterpret_cast<int32_t>(esp43) + 32, "ID", 2), esp43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp43) - 4 - 4 - 4 - 4 + 4 + 12), !!eax45)) {
                    addr_100012ac_38:
                    if (ebx42 < 2) 
                        continue; else 
                        break;
                } else {
                    esp46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp43) - 4);
                    eax47 = fun_10002090(reinterpret_cast<int32_t>(esp46) + 38, reinterpret_cast<int32_t>(esp43) + 16, 6);
                    esp48 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp46) - 4 - 4 - 4 + 4 + 12);
                    if (!eax47) 
                        goto addr_100012dd_40;
                    esp49 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp48) - 4);
                    esi41 = -1;
                    fun_10002060(reinterpret_cast<int32_t>(esp49) + 28, reinterpret_cast<int32_t>(esp48) + 34, 6);
                    esp43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp49) - 4 - 4 - 4 + 4 + 12);
                    ebx42 = v50 - 47;
                }
            }
            fun_10002000(reinterpret_cast<int32_t>(esp43) + 12);
            esp43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp43) - 4 - 4 + 4 + 4);
            if (esi41 != v51) {
                esi41 = v52;
                esp53 = reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(esp43) - 4);
                eax54 = fun_10001f90(esp53 + 17, "ID%s_%i", esp53 + 5, ebx42);
                esp55 = reinterpret_cast<void*>(esp53 - 1 - 1 - 1 - 1 + 1);
                edx56 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(esp55) + 80);
                esp57 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp55) + 16);
                ecx58 = -1;
                eax59 = eax54 - eax54;
                do {
                    if (!ecx58) 
                        break;
                    --ecx58;
                    ++esi41;
                } while (v60 != *reinterpret_cast<signed char*>(&eax59));
                eax61 = g1000ac74;
                fun_100017d0(eax61, edx56, ~ecx58 - 1);
                esp43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp57) - 4 - 4 - 4 - 4 + 12 + 4);
                goto addr_100012ac_38;
            }
        }
    } else {
        fun_10001530();
        eax62 = 0;
        goto addr_1000135b_48;
    }
    eax63 = reinterpret_cast<unsigned char*>(reinterpret_cast<int32_t>(esp43) + 24);
    do {
        cf64 = reinterpret_cast<uint1_t>(v65 < v66);
        if (v65 != v67) 
            break;
        if (!v65) 
            goto addr_100012d9_52;
        cf64 = reinterpret_cast<uint1_t>(v68 < v69);
        if (v68 != v70) 
            break;
        eax63 = eax63 + 2;
    } while (v68);
    goto addr_100012d9_52;
    cf71 = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(eax63) < reinterpret_cast<uint32_t>(eax63) + cf64);
    eax72 = reinterpret_cast<uint32_t>(eax63) - (reinterpret_cast<uint32_t>(eax63) + cf71);
    eax73 = eax72 - (1 - reinterpret_cast<uint1_t>(eax72 < 1 - cf71));
    addr_10001303_56:
    g1000acbc = 0;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax73) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax73 == 0))) {
        g1000acbc = 1;
    }
    do {
        eax74 = fun_10001920(reinterpret_cast<int32_t>(esp43) + 32, 30);
        esp43 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp43) - 4 - 4 - 4 + 8 + 4);
    } while (eax74 != 0xffffffff);
    eax75 = g1000acbc;
    eax76 = eax75 << 2;
    *reinterpret_cast<int32_t*>(eax76 + 0x1000ae40) = 0;
    eax77 = g1000ac90;
    *reinterpret_cast<int32_t*>(0x1000ae44 - eax76) = 1;
    g1000acac = *reinterpret_cast<int16_t*>(&eax77);
    eax62 = 1;
    addr_1000135b_48:
    return eax62;
    addr_100012d9_52:
    eax73 = 0;
    goto addr_10001303_56;
    addr_100012dd_40:
    fun_10001430("Random IDs are the same!\n", v12, v9, v5, v78);
    eax79 = g1000ac74;
    fun_100017c0(eax79);
    fun_10001530();
    eax62 = 0;
    goto addr_1000135b_48;
}

int16_t g1000aca6;

int16_t g1000acaa;

int16_t g1000aca8;

signed char g1000acca;

/* _Process@0 */
uint32_t _Process_0() {
    int1_t zf1;
    int1_t zf2;
    uint32_t eax3;
    uint32_t eax4;
    int32_t ecx5;
    uint32_t eax6;
    int32_t ecx7;
    int32_t v8;
    uint32_t eax9;

    zf1 = g1000aca6 == 1;
    if (!zf1) {
        zf2 = g1000aca6 == 2;
        if (zf2) {
            eax3 = fun_10001920(0x1000acc4, 0x68);
            g1000acaa = *reinterpret_cast<int16_t*>(&eax3);
            if (*reinterpret_cast<int16_t*>(&eax3) == -1) {
                g1000aca8 = -1;
            } else {
                eax4 = 0;
                *reinterpret_cast<signed char*>(&eax4) = g1000acca;
                ecx5 = *reinterpret_cast<int32_t*>(eax4 * 4 + 0x1000ae40);
                g1000aca8 = *reinterpret_cast<int16_t*>(&ecx5);
                return eax4;
            }
        }
        return eax3;
    } else {
        eax6 = reinterpret_cast<uint32_t>(static_cast<int32_t>(g1000acaa));
        ecx7 = g1000aca8;
        v8 = *reinterpret_cast<int32_t*>(ecx7 * 4 + 0x1000ac70);
        eax9 = fun_100017d0(v8, 0x1000acc4, eax6);
        return eax9;
    }
}

void fun_100053a0() {
    int1_t zf1;
    int1_t less2;
    uint32_t eax3;
    void** eax4;
    void** eax5;
    int32_t ecx6;
    void* eax7;
    void** edx8;
    uint32_t edx9;
    int32_t* esi10;
    uint32_t ecx11;

    zf1 = g1000ae60 == 0;
    if (!zf1) {
        less2 = reinterpret_cast<int32_t>(g1000ae60) < reinterpret_cast<int32_t>(20);
        if (less2) {
            g1000ae60 = 20;
        }
    } else {
        g1000ae60 = 0x200;
    }
    eax3 = g1000ae60;
    eax4 = fun_10004df0(eax3, 4);
    g1000ae64 = eax4;
    if (!eax4 && (g1000ae60 = 20, eax5 = fun_10004df0(20, 4), g1000ae64 = eax5, !eax5)) {
        fun_10001f10(26);
    }
    ecx6 = 0x10009b38;
    eax7 = reinterpret_cast<void*>(0);
    do {
        edx8 = g1000ae64;
        eax7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax7) + 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx8) + reinterpret_cast<uint32_t>(eax7) + 0xfffffffc) = ecx6;
        ecx6 = ecx6 + 32;
    } while (reinterpret_cast<int32_t>(eax7) < reinterpret_cast<int32_t>(80));
    edx9 = 0;
    esi10 = reinterpret_cast<int32_t*>(0x10009b48);
    do {
        ecx11 = (edx9 & 31) << 2;
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(edx9 & 0xffffffe7) >> 3) + 0x1000be80)) + (ecx11 + ecx11 * 8)) == -1 || !*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>((reinterpret_cast<int32_t>(edx9 & 0xffffffe7) >> 3) + 0x1000be80)) + (ecx11 + ecx11 * 8))) {
            *esi10 = -1;
        }
        esi10 = esi10 + 8;
        ++edx9;
    } while (reinterpret_cast<uint32_t>(esi10) < 0x10009ba8);
    return;
}

void** fun_10006260() {
    void** eax1;

    eax1 = fun_10001f10(2);
    return eax1;
}

struct s36 {
    signed char f0;
    signed char[1] pad2;
    signed char f2;
};

struct s36* fun_100069c0(struct s36* a1, struct s36* a2, void* a3) {
    struct s36* esi4;
    struct s36* edi5;
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
            goto 0x10006a6c;
    }
    if (reinterpret_cast<uint32_t>(edi5) & 3) {
        if (reinterpret_cast<uint32_t>(a3) <= 12) 
            goto 0x10006a60;
        edx6 = -reinterpret_cast<uint32_t>(edi5) & 3;
        eax7 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(a3) - edx6);
        ecx8 = edx6;
        while (ecx8) {
            --ecx8;
            edi5->f0 = esi4->f0;
            edi5 = reinterpret_cast<struct s36*>(&edi5->pad2);
            esi4 = reinterpret_cast<struct s36*>(&esi4->pad2);
        }
        eax9 = reinterpret_cast<uint32_t>(eax7) & 3;
        ecx10 = reinterpret_cast<uint32_t>(eax7) >> 2;
        while (ecx10) {
            --ecx10;
            edi5->f0 = esi4->f0;
            edi5 = reinterpret_cast<struct s36*>(reinterpret_cast<uint32_t>(edi5) + 4);
            esi4 = reinterpret_cast<struct s36*>(reinterpret_cast<uint32_t>(esi4) + 4);
        }
        goto *reinterpret_cast<int32_t*>("0j" + eax9 * 4);
    } else {
        edx11 = reinterpret_cast<uint32_t>(a3) & 3;
        ecx12 = reinterpret_cast<uint32_t>(a3) >> 2;
        while (ecx12) {
            --ecx12;
            edi5->f0 = esi4->f0;
            edi5 = reinterpret_cast<struct s36*>(reinterpret_cast<uint32_t>(edi5) + 4);
            esi4 = reinterpret_cast<struct s36*>(reinterpret_cast<uint32_t>(esi4) + 4);
        }
        goto *reinterpret_cast<int32_t*>("0j" + edx11 * 4);
    }
    addr_10006a30_16:
    return a1;
    edi5->f0 = esi4->f0;
    goto addr_10006a30_16;
    edi5->f0 = esi4->f0;
    edi5->f2 = esi4->f2;
    return a1;
}

void fun_10006a29() {
}

void fun_10006ad6() {
}

void fun_100074d8(unsigned char* a1) {
    unsigned char* ecx2;
    uint32_t eax3;

    ecx2 = a1;
    if (!(reinterpret_cast<uint32_t>(ecx2) & 3)) {
        while (1) {
            addr_100074f4_2:
            ecx2 = ecx2 + 4;
            if (!((*ecx2 ^ 0xffffffff ^ 0x7efefeff + *ecx2) & 0x81010100)) 
                continue;
            eax3 = *reinterpret_cast<uint32_t*>(ecx2 - 4);
            if (!*reinterpret_cast<signed char*>(&eax3)) 
                break;
            if (!*reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(&eax3) + 1)) 
                goto addr_10007531_5;
            if (!(eax3 & 0xff0000)) 
                goto addr_1000752c_7;
            if (!(eax3 & 0xff000000)) 
                goto addr_10007527_9;
        }
    } else {
        do {
            ++ecx2;
            if (!*ecx2) 
                goto addr_10007527_9;
        } while (reinterpret_cast<uint32_t>(ecx2) & 3);
        goto addr_100074f4_2;
    }
    addr_10007531_5:
    goto 0x10007539;
    addr_1000752c_7:
    goto 0x10007539;
    addr_10007527_9:
    goto 0x10007539;
}

void fun_100075b8() {
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
    signed char* eax79;
    signed char* eax80;
    signed char al81;
    signed char* eax82;
    signed char* eax83;
    signed char al84;
    signed char* eax85;
    signed char* eax86;
    signed char al87;
    signed char* eax88;
    signed char* eax89;
    signed char al90;
    signed char* eax91;
    signed char* eax92;
    signed char al93;
    signed char* eax94;
    signed char* eax95;
    signed char al96;
    signed char* eax97;
    signed char* eax98;
    signed char al99;
    signed char* eax100;
    signed char* eax101;
    signed char al102;
    signed char* eax103;
    signed char* eax104;
    signed char al105;
    signed char* eax106;
    signed char* eax107;
    signed char al108;

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
    *eax79 = reinterpret_cast<signed char>(*eax80 + al81);
    *eax82 = reinterpret_cast<signed char>(*eax83 + al84);
    *eax85 = reinterpret_cast<signed char>(*eax86 + al87);
    *eax88 = reinterpret_cast<signed char>(*eax89 + al90);
    *eax91 = reinterpret_cast<signed char>(*eax92 + al93);
    *eax94 = reinterpret_cast<signed char>(*eax95 + al96);
    *eax97 = reinterpret_cast<signed char>(*eax98 + al99);
    *eax100 = reinterpret_cast<signed char>(*eax101 + al102);
    *eax103 = reinterpret_cast<signed char>(*eax104 + al105);
    *eax106 = reinterpret_cast<signed char>(*eax107 + al108);
}

void fun_10004a59(int32_t ecx) {
}
