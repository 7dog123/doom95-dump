
void fun_41e400(void** ecx);

void** fun_428190(void** ecx);

void** g4845e0 = reinterpret_cast<void**>(36);

void** fun_4375e0(void** ecx, void** a2, void** a3, ...);

void fun_42af30();

void** g4835fc = reinterpret_cast<void**>(0);

void** fun_41e220(void** ecx) {
    void** ebp2;
    void** edx3;
    void** ecx4;
    void** v5;
    void** v6;
    void** eax7;
    void** esi8;
    void** esi9;
    void** eax10;
    void** ebx11;
    void** edx12;
    int32_t eax13;

    ebp2 = edx3;
    ecx4 = reinterpret_cast<void**>(0xffffffff);
    v5 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<unsigned char>(ebp2) >= reinterpret_cast<unsigned char>(3) && reinterpret_cast<unsigned char>(ebp2) <= reinterpret_cast<unsigned char>(5)) {
        fun_41e400(0xffffffff);
    }
    v6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp2) * 4);
    while (eax7 = fun_428190(ecx4), ecx4 = eax7, reinterpret_cast<signed char>(eax7) >= reinterpret_cast<signed char>(0)) {
        esi8 = g4845e0;
        esi9 = esi8 + reinterpret_cast<unsigned char>(eax7) * 86;
        if (*reinterpret_cast<void***>(esi9 + 74)) 
            continue;
        v5 = reinterpret_cast<void**>(1);
        eax10 = fun_4375e0(ecx4, 1, v6);
        ebx11 = eax10;
        fun_42af30();
        *reinterpret_cast<void***>(esi9 + 74) = eax10;
        *reinterpret_cast<void***>(eax10 + 8) = reinterpret_cast<void**>(0x41e0c0);
        *reinterpret_cast<void***>(eax10 + 32) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax10 + 16) = esi9;
        if (reinterpret_cast<unsigned char>(ebp2) <= reinterpret_cast<unsigned char>(5)) 
            goto addr_41e2b2_7;
        *reinterpret_cast<void***>(ebx11 + 40) = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(esi9 + 16))));
        *reinterpret_cast<void***>(ebx11 + 12) = ebp2;
        edx12 = g4835fc;
        eax13 = 0;
        if (edx12) {
            while (eax13 = eax13 + 4, eax13 < 0x78) {
                if (!*reinterpret_cast<void***>(eax13 + 0x4835fc)) 
                    goto addr_41e34e_11;
            }
            continue;
        }
        addr_41e34e_11:
        *reinterpret_cast<void***>(eax13 + 0x4835fc) = ebx11;
    }
    return v5;
    addr_41e2b2_7:
    goto *reinterpret_cast<int32_t*>(v6 + 0x41e208);
}

struct s0 {
    signed char[20] pad20;
    int16_t f14;
};

void fun_425e70(void** ecx);

void** fun_425f20(void** ecx, void** a2);

void** fun_425c00(void** ecx) {
    struct s0* edi2;
    struct s0* eax3;
    void** v4;
    void** edx5;
    void** ecx6;
    void** v7;
    void** v8;
    void** eax9;
    void** ecx10;
    void** v11;
    int32_t v12;
    void** eax13;
    void** v14;

    edi2 = eax3;
    v4 = edx5;
    ecx6 = v4;
    v7 = reinterpret_cast<void**>(0);
    if (!ecx6) {
        fun_425e70(ecx6);
    }
    v8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v4) * 4);
    while (eax9 = fun_428190(ecx6), reinterpret_cast<signed char>(eax9) >= reinterpret_cast<signed char>(0)) {
        ecx10 = g4845e0;
        ecx6 = ecx10 + reinterpret_cast<unsigned char>(eax9) * 86;
        if (*reinterpret_cast<void***>(ecx6 + 74)) 
            continue;
        v7 = reinterpret_cast<void**>(1);
        eax13 = fun_4375e0(ecx6, v11, v8, ecx6, v12, v8);
        fun_42af30();
        *reinterpret_cast<void***>(eax13 + 12) = ecx6;
        *reinterpret_cast<void***>(eax13 + 52) = v4;
        *reinterpret_cast<void***>(ecx6 + 74) = eax13;
        *reinterpret_cast<void***>(eax13 + 8) = reinterpret_cast<void**>(0x425ab0);
        *reinterpret_cast<void***>(eax13 + 44) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(eax13 + 48) = reinterpret_cast<void**>(static_cast<int32_t>(edi2->f14));
        if (reinterpret_cast<unsigned char>(v4) <= reinterpret_cast<unsigned char>(4)) 
            goto addr_425cb5_7;
        fun_425f20(ecx6, v14);
    }
    return v7;
    addr_425cb5_7:
    goto *reinterpret_cast<int32_t*>(v8 + 0x425bec);
}

void** g4845d8 = reinterpret_cast<void**>(0xa3);

struct s1 {
    signed char[132] pad132;
    int32_t f84;
};

struct s2 {
    signed char[88] pad88;
    void* f58;
};

void** fun_41e7a0(void** ecx);

void** fun_420f30(void** ecx);

void** fun_4212e0(void** ecx);

void** fun_4229d0(void** ecx);

void** fun_422900(void** ecx);

void** fun_429e30(void** ecx);

void** fun_417720(void** ecx);

void** fun_425ec0(void** ecx);

void** fun_41e450(void** ecx);

void** fun_422950(void** ecx);

void** fun_417740(void** ecx);

void** fun_428460(int32_t ecx) {
    void** eax2;
    void** ebx3;
    void* ecx4;
    uint32_t eax5;
    void* edx6;
    void** ecx7;
    void** ecx8;
    struct s1* ebx9;
    uint32_t edx10;
    struct s2* ebx11;
    int32_t ebx12;
    void** eax13;
    void** eax14;
    void** eax15;
    void** eax16;
    void** eax17;
    void** eax18;
    void** eax19;
    void** eax20;
    void** eax21;
    void** eax22;
    void** eax23;
    void** eax24;
    void** eax25;
    void** eax26;
    void** eax27;
    void** eax28;
    void** eax29;
    void** eax30;
    void** eax31;
    void** eax32;
    void** eax33;
    void** eax34;
    void** eax35;
    void** eax36;
    void** eax37;
    void** eax38;
    void** eax39;
    void** eax40;
    void** eax41;
    void** eax42;
    void** eax43;
    void** eax44;
    void** eax45;
    void** eax46;
    void** eax47;
    void** eax48;
    void** eax49;
    void** eax50;
    void** eax51;
    void** eax52;
    void** eax53;
    void** eax54;
    void** eax55;
    void** eax56;
    void** eax57;
    void** eax58;
    void** eax59;
    void** eax60;
    void** eax61;
    void** eax62;
    void** eax63;
    void** eax64;
    void** eax65;
    void** eax66;
    void** eax67;
    void** eax68;
    void** eax69;
    void** eax70;
    void** eax71;
    void** eax72;
    void** eax73;
    void** eax74;
    void** eax75;
    void** eax76;
    void** eax77;
    void** eax78;
    void** eax79;
    void** eax80;
    void** eax81;

    eax2 = ebx3;
    ecx4 = reinterpret_cast<void*>((eax5 << 5) - eax5);
    edx6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx4) + reinterpret_cast<uint32_t>(ecx4));
    ecx7 = g4845d8;
    ecx8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx7) + reinterpret_cast<uint32_t>(edx6));
    if (ebx9->f84) {
        addr_4284ea_2:
        *reinterpret_cast<void***>(&edx6) = *reinterpret_cast<void***>(ecx8 + 18);
        edx10 = reinterpret_cast<uint32_t>(edx6) - 2;
        if (*reinterpret_cast<uint16_t*>(&edx10) > 0x8b) 
            goto addr_4289e7_3;
    } else {
        edx6 = ebx11->f58;
        if (reinterpret_cast<uint32_t>(edx6) < 16) 
            goto addr_4284a3_5;
        if (reinterpret_cast<uint32_t>(edx6) <= 16) 
            goto addr_4289e7_3;
        if (reinterpret_cast<uint32_t>(edx6) < 31) 
            goto addr_4284a3_5;
        if (reinterpret_cast<uint32_t>(edx6) <= 35) 
            goto addr_4289e7_3;
        addr_4284a3_5:
        ebx12 = 0;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx8 + 18)) < reinterpret_cast<unsigned char>(39)) 
            goto addr_4284cf_9; else 
            goto addr_4284af_10;
    }
    switch (edx10 & 0xffff) {
    case 0:
        eax13 = fun_41e7a0(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax13;
    case 1:
        eax14 = fun_41e7a0(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax14;
    case 2:
        eax15 = fun_41e7a0(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax15;
    case 3:
        eax16 = fun_420f30(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax16;
    case 4:
        eax17 = fun_41e220(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax17;
    case 6:
        eax18 = fun_4212e0(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax18;
    case 8:
        eax19 = fun_425c00(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax19;
    case 10:
        eax20 = fun_4229d0(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax20;
    case 11:
        eax21 = fun_4229d0(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax21;
    case 14:
        eax22 = fun_41e7a0(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax22;
    case 15:
        eax23 = fun_422900(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax23;
    case 17:
        eax24 = fun_420f30(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax24;
    case 20:
        eax25 = fun_425c00(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax25;
    case 23:
        eax26 = fun_41e220(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax26;
    case 28:
        eax27 = fun_420f30(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax27;
    case 33:
        eax28 = fun_4229d0(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax28;
    case 34:
        eax29 = fun_420f30(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax29;
    case 35:
        eax30 = fun_420f30(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax30;
        addr_428697_30:
    case 36:
        eax31 = fun_420f30(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax31;
    case 37:
        eax32 = fun_429e30(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax32;
    case 38:
        fun_41e220(ecx8);
        goto addr_428697_30;
    case 42:
        eax33 = fun_41e220(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax33;
    case 50:
        eax34 = fun_417720(ecx8);
        return eax34;
    case 51:
        eax35 = fun_425c00(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax35;
    case 52:
        eax36 = fun_425ec0(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax36;
    case 54:
        eax37 = fun_420f30(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax37;
    case 55:
        eax38 = fun_41e450(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax38;
    case 56:
        eax39 = fun_420f30(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax39;
    case 57:
        eax40 = fun_420f30(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax40;
    case 70:
        eax41 = fun_41e220(ecx8);
        return eax41;
    case 71:
        eax42 = fun_41e220(ecx8);
        return eax42;
    case 72:
        eax43 = fun_41e450(ecx8);
        return eax43;
    case 73:
        eax44 = fun_41e7a0(ecx8);
        return eax44;
    case 74:
        eax45 = fun_41e7a0(ecx8);
        return eax45;
    case 75:
        eax46 = fun_41e220(ecx8);
        return eax46;
    case 77:
        eax47 = fun_4229d0(ecx8);
        return eax47;
    case 78:
        eax48 = fun_4229d0(ecx8);
        return eax48;
    case 79:
        eax49 = fun_4229d0(ecx8);
        return eax49;
    case 80:
        eax50 = fun_420f30(ecx8);
        return eax50;
    case 81:
        eax51 = fun_420f30(ecx8);
        return eax51;
    case 82:
        eax52 = fun_420f30(ecx8);
        return eax52;
    case 84:
        eax53 = fun_41e7a0(ecx8);
        return eax53;
    case 85:
        eax54 = fun_425c00(ecx8);
        return eax54;
    case 86:
        eax55 = fun_425c00(ecx8);
        return eax55;
    case 87:
        eax56 = fun_425ec0(ecx8);
        return eax56;
    case 88:
        eax57 = fun_41e7a0(ecx8);
        return eax57;
    case 89:
        eax58 = fun_420f30(ecx8);
        return eax58;
    case 90:
        eax59 = fun_420f30(ecx8);
        return eax59;
    case 91:
        eax60 = fun_420f30(ecx8);
        return eax60;
    case 92:
        eax61 = fun_420f30(ecx8);
        return eax61;
    case 93:
        eax62 = fun_425c00(ecx8);
        return eax62;
    case 94:
        eax63 = fun_420f30(ecx8);
        return eax63;
    case 96:
        eax64 = fun_420f30(ecx8);
        return eax64;
    case 98:
        eax65 = fun_4212e0(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax65;
    case 0x66:
        eax66 = fun_422950(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax66;
    case 0x67:
        eax67 = fun_41e7a0(ecx8);
        return eax67;
    case 0x68:
        eax68 = fun_41e7a0(ecx8);
        return eax68;
    case 0x69:
        eax69 = fun_41e7a0(ecx8);
        return eax69;
    case 0x6a:
        eax70 = fun_41e7a0(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax70;
    case 0x6b:
        eax71 = fun_41e7a0(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax71;
    case 0x6c:
        eax72 = fun_41e7a0(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax72;
    case 0x75:
        eax73 = fun_420f30(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax73;
    case 0x76:
        eax74 = fun_425c00(ecx8);
        return eax74;
    case 0x77:
        eax75 = fun_425c00(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax75;
    case 0x7a:
        eax76 = fun_417740(ecx8);
        return eax76;
    case 0x7b:
        if (!*reinterpret_cast<void***>(eax2 + 0x84)) {
            eax77 = fun_429e30(ecx8);
            *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
            return eax77;
        }
    case 0x7c:
        if (*reinterpret_cast<void***>(eax2 + 0x84)) {
            addr_4289e7_3:
        case 5:
        case 7:
        case 9:
        case 12:
        case 13:
        case 16:
        case 18:
        case 19:
        case 21:
        case 22:
        case 24:
        case 25:
        case 26:
        case 27:
        case 29:
        case 30:
        case 31:
        case 32:
        case 39:
        case 40:
        case 41:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 53:
        case 58:
        case 59:
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 76:
        case 83:
        case 97:
        case 99:
        case 100:
        case 0x65:
        case 0x6d:
        case 0x6e:
        case 0x6f:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x78:
        case 0x79:
        case 0x7d:
        case 0x81:
        case 0x82:
        case 0x83:
        case 0x84:
        case 0x85:
        case 0x86:
        case 0x87:
        case 0x88:
        case 0x89:
        case 0x8a:
            return eax2;
        } else {
        case 95:
            eax78 = fun_429e30(ecx8);
            return eax78;
        }
    case 0x7e:
        eax79 = fun_420f30(ecx8);
        return eax79;
    case 0x7f:
        eax2 = fun_420f30(ecx8);
        goto addr_4289e7_3;
    case 0x80:
        eax80 = fun_420f30(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax80;
    case 0x8b:
        eax81 = fun_41e220(ecx8);
        *reinterpret_cast<void***>(ecx8 + 18) = reinterpret_cast<void**>(0);
        return eax81;
    }
    addr_4284cf_9:
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx8 + 18)) < reinterpret_cast<unsigned char>(4) || reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx8 + 18)) > reinterpret_cast<unsigned char>(4) && !reinterpret_cast<int1_t>(*reinterpret_cast<void***>(ecx8 + 18) == 10)) {
        addr_4284e2_85:
        if (!ebx12) 
            goto addr_4289e7_3; else 
            goto addr_4284ea_2;
    } else {
        addr_4284dd_86:
        ebx12 = 1;
        goto addr_4284e2_85;
    }
    addr_4284af_10:
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx8 + 18)) <= reinterpret_cast<unsigned char>(39)) 
        goto addr_4284dd_86;
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx8 + 18)) < reinterpret_cast<unsigned char>(97)) {
        if (*reinterpret_cast<void***>(ecx8 + 18) == 88) 
            goto addr_4284dd_86;
        goto addr_4284e2_85;
    } else {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx8 + 18)) <= reinterpret_cast<unsigned char>(97)) 
            goto addr_4284dd_86;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx8 + 18)) < reinterpret_cast<unsigned char>(0x7d)) 
            goto addr_4284e2_85;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(ecx8 + 18)) <= reinterpret_cast<unsigned char>(0x7e)) 
            goto addr_4284dd_86;
        goto addr_4284e2_85;
    }
}

struct s3 {
    signed char[32] pad32;
    int32_t f20;
    signed char[20] pad56;
    int32_t f38;
    signed char[136] pad196;
    unsigned char fc4;
    signed char[15] pad212;
    int32_t fd4;
};

void** fun_41d460(void** ecx, void** a2);

uint32_t g484d04 = 0x7488803;

void** fun_422370(void** ecx);

void** fun_43bd40(void** ecx, int32_t a2, void** a3, void** a4, ...);

void** fun_428aa0(void** ecx) {
    void** eax2;
    void*** eax3;
    void** ecx4;
    void** edx5;
    void** edx6;
    struct s3* eax7;
    void** esi8;
    int1_t zf9;
    void** eax10;
    int1_t zf11;
    void** eax12;
    void** v13;
    int1_t zf14;
    void** eax15;
    void** dl16;
    void** eax17;

    eax2 = *eax3;
    ecx4 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2 + 52));
    edx5 = *reinterpret_cast<void***>(eax2 + 20);
    if (edx5 == *reinterpret_cast<void***>(ecx4)) {
        edx5 = *reinterpret_cast<void***>(ecx4 + 14);
        edx6 = edx5 - 4;
        if (*reinterpret_cast<uint16_t*>(&edx6) > 12) 
            goto addr_428ba7_3;
        switch (reinterpret_cast<unsigned char>(edx6) & 0xffff) {
        case 0:
        case 12:
            if ((!eax7->f38 || (eax2 = fun_41d460(ecx4, esi8), reinterpret_cast<signed char>(eax2) < reinterpret_cast<signed char>(5))) && (zf9 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&g484d04)) & 31) == 0, zf9)) {
                eax10 = fun_422370(20);
                return eax10;
            }
        case 1:
            if (!eax7->f38 && (zf11 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&g484d04)) & 31) == 0, zf11)) {
                eax12 = fun_422370(10);
                return eax12;
            }
            addr_428ba7_3:
        case 2:
        case 4:
        case 6:
        case 8:
        case 9:
        case 10:
        case 11:
            v13 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(ecx4 + 14))));
            eax2 = fun_43bd40(ecx4, "P_PlayerInSpecialSector: unknown special %i", v13, esi8);
            break;
        case 3:
            if (!eax7->f38 && (zf14 = (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&g484d04)) & 31) == 0, zf14)) {
                eax15 = fun_422370(5);
                return eax15;
            }
        case 5:
            eax7->fd4 = eax7->fd4 + 1;
            *reinterpret_cast<void***>(ecx4 + 14) = reinterpret_cast<void**>(0);
            return eax2;
        case 7:
            *reinterpret_cast<unsigned char*>(&eax2 + 1) = reinterpret_cast<unsigned char>(eax7->fc4 & 0xfd);
            dl16 = *reinterpret_cast<void***>(&g484d04);
            eax7->fc4 = *reinterpret_cast<unsigned char*>(&eax2 + 1);
            if (!(reinterpret_cast<unsigned char>(dl16) & 31)) {
                ecx4 = reinterpret_cast<void**>(20);
                eax2 = fun_422370(20);
            }
            if (eax7->f20 <= 10) {
                eax17 = fun_417720(ecx4);
                return eax17;
            }
        }
    }
    return eax2;
}

void** fun_434640(void** ecx);

void** g484a10 = reinterpret_cast<void**>(0xa1);

void** fun_41d410(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29);

void** g482a6c = reinterpret_cast<void**>(82);

uint32_t g484a14 = 0x40bf0f00;

void** fun_443534(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29);

void** fun_440190(void** ecx);

void** g4845ec = reinterpret_cast<void**>(42);

void fun_4227d0(void** ecx);

void fun_422870(void** ecx);

void fun_422ac0(void** ecx);

int32_t g482a50 = 0x482a8c15;

void fun_41eb90(void** ecx);

void fun_41ebe0(void** ecx);

void fun_422730(void** ecx);

void** g4845c8 = reinterpret_cast<void**>(0x8b);

int16_t g484a1c = 0xb8dd;

struct s4 {
    signed char[18] pad18;
    int16_t f12;
};

struct s5 {
    signed char f0;
    signed char f1;
    signed char f2;
    signed char[1] pad4;
    int32_t f4;
    int32_t f8;
    int32_t fc;
    int32_t f10;
    int32_t f14;
    int32_t f18;
    int32_t f1c;
};

struct s5* fun_444197(void** ecx);

void** fun_442b80(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, ...);

void** fun_428f70(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22) {
    void** v23;
    void** v24;
    void** edx25;
    void** v26;
    void** esi27;
    void** v28;
    void** edi29;
    void** v30;
    void** ebp31;
    void** ebx32;
    void** eax33;
    int1_t zf34;
    void** eax35;
    int1_t zf36;
    void** eax37;
    int1_t zf38;
    void** eax39;
    void** ecx40;
    void** ebx41;
    void** esi42;
    void** eax43;
    void** edi44;
    void** ebp45;
    void* edx46;
    void* eax47;
    void* edx48;
    void** ecx49;
    struct s4* ecx50;
    int32_t esi51;
    void** ecx52;
    void** eax53;

    v23 = ecx;
    v24 = edx25;
    v26 = esi27;
    v28 = edi29;
    v30 = ebp31;
    fun_434640(ecx);
    g484a10 = reinterpret_cast<void**>(0);
    eax33 = fun_41d410(ecx, v30, v28, v26, v24, v23, ebx32, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
    if (eax33 && (zf34 = g482a6c == 0, !zf34)) {
        ecx = reinterpret_cast<void**>(1);
        g484a10 = reinterpret_cast<void**>(1);
        g484a14 = 0xa410;
    }
    eax35 = fun_41d410(ecx, v30, v28, v26, v24, v23, ebx32, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
    if (eax35 && (zf36 = g482a6c == 0, !zf36)) {
        eax37 = fun_443534(eax35, v30, v28, v26, v24, v23, ebx32, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22);
        g484a10 = reinterpret_cast<void**>(1);
        g484a14 = reinterpret_cast<unsigned char>(eax37) * 0x834;
    }
    if (!eax35 && ((zf38 = g482a6c == 0, !zf38) && (eax39 = fun_440190(eax35), !!eax39))) {
        g484a10 = reinterpret_cast<void**>(1);
        g484a14 = reinterpret_cast<unsigned char>(eax39) * 0x834;
    }
    ecx40 = g4845e0;
    ebx41 = g4845ec;
    esi42 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx41) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx41 == 0))) {
        do {
            ebx41 = *reinterpret_cast<void***>(ecx40 + 14);
            if (ebx41 && (eax43 = ebx41 - 1, *reinterpret_cast<uint16_t*>(&eax43) <= 16)) {
                switch (reinterpret_cast<unsigned char>(eax43) & 0xffff) {
                case 0:
                    fun_4227d0(ecx40);
                    break;
                case 1:
                    ebx41 = reinterpret_cast<void**>(0);
                    fun_422870(ecx40);
                    break;
                case 2:
                    ebx41 = reinterpret_cast<void**>(0);
                    fun_422870(ecx40);
                    break;
                case 3:
                    ebx41 = reinterpret_cast<void**>(0);
                    fun_422870(ecx40);
                    *reinterpret_cast<void***>(ecx40 + 14) = reinterpret_cast<void**>(4);
                    break;
                case 7:
                    fun_422ac0(ecx40);
                    break;
                case 8:
                    ++g482a50;
                    break;
                case 9:
                    fun_41eb90(ecx40);
                    break;
                case 11:
                    ebx41 = reinterpret_cast<void**>(1);
                    fun_422870(ecx40);
                    break;
                case 12:
                    ebx41 = reinterpret_cast<void**>(1);
                    fun_422870(ecx40);
                    break;
                case 13:
                    fun_41ebe0(ecx40);
                    break;
                case 16:
                    fun_422730(ecx40);
                case 4:
                case 5:
                case 6:
                case 10:
                case 14:
                case 15:
                    goto 0x4290f7;
                }
            }
            edi44 = g4845ec;
            ++esi42;
            ecx40 = ecx40 + 86;
        } while (reinterpret_cast<signed char>(esi42) < reinterpret_cast<signed char>(edi44));
    }
    ebp45 = g4845c8;
    g484a1c = 0;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebp45) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebp45 == 0))) {
        edx46 = reinterpret_cast<void*>((reinterpret_cast<unsigned char>(ebp45) << 5) - reinterpret_cast<unsigned char>(ebp45));
        eax47 = reinterpret_cast<void*>(0);
        edx48 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx46) + reinterpret_cast<uint32_t>(edx46));
        do {
            ecx49 = g4845d8;
            ecx50 = reinterpret_cast<struct s4*>(reinterpret_cast<unsigned char>(ecx49) + reinterpret_cast<uint32_t>(eax47));
            if (ecx50->f12 == 48) {
                esi51 = g484a1c;
                *reinterpret_cast<struct s4**>(esi51 * 4 + 0x484910) = ecx50;
                g484a1c = reinterpret_cast<int16_t>(g484a1c + 1);
            }
            eax47 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax47) + 62);
        } while (reinterpret_cast<int32_t>(eax47) < reinterpret_cast<int32_t>(edx48));
    }
    fun_444197(30);
    fun_444197(30);
    ecx52 = reinterpret_cast<void**>(0x484bb0);
    do {
        ecx52 = ecx52 + 20;
        eax53 = fun_442b80(ecx52, v30, v28, v26, v24, v23);
    } while (!reinterpret_cast<int1_t>(ecx52 == 0x484cf0));
    return eax53;
}

void fun_445180();

void fun_44515b(void** a1, void** a2, void** a3, void** a4, void** a5);

void** fun_445765(void** a1, void** a2, void** a3, void** a4) {
    uint32_t eax5;
    void** edx6;

    fun_445180();
    if (eax5 != 0x7b) {
        if (eax5 != 0xce) {
            if (eax5 != 0xb7) {
                if (eax5 > 19) {
                }
            }
        }
    }
    fun_44515b(edx6, __return_address(), a1, a2, a3);
    return 0xffffffff;
}

int32_t fun_44754a(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7);

int32_t fun_44756f(int32_t ecx) {
    int32_t ebp2;
    int32_t edx3;
    uint32_t edi4;
    uint32_t ebx5;
    signed char* esi6;
    signed char* edx7;
    signed char v8;
    uint32_t eax9;

    ebp2 = edx3;
    edi4 = ebx5;
    esi6 = edx7;
    do {
        v8 = *reinterpret_cast<signed char*>(eax9 % edi4 + reinterpret_cast<int32_t>(fun_44754a));
        eax9 = eax9 / edi4;
    } while (eax9);
    do {
        *esi6 = v8;
        ++esi6;
    } while (v8);
    return ebp2;
}

int32_t fun_44760b(void** ecx) {
    int32_t ebp2;
    int32_t edx3;
    uint32_t edi4;
    uint32_t ebx5;
    signed char* esi6;
    signed char* edx7;
    uint32_t edx8;
    uint32_t eax9;
    signed char v10;

    ebp2 = edx3;
    edi4 = ebx5;
    esi6 = edx7;
    do {
        edx8 = eax9 % edi4;
        eax9 = eax9 / edi4;
        v10 = *reinterpret_cast<signed char*>(edx8 + reinterpret_cast<int32_t>("0123456789abcdefghijklmnopqrstuvwxyz"));
    } while (eax9);
    do {
        *esi6 = v10;
        ++esi6;
    } while (v10);
    return ebp2;
}

void** fun_411d60(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    uint32_t eax6;
    uint32_t edx7;
    uint32_t edx8;
    uint32_t edx9;
    uint32_t eax10;
    uint32_t edx11;
    uint32_t edx12;
    uint32_t eax13;

    __asm__("cdq ");
    __asm__("cdq ");
    eax6 = (edx7 ^ edx8) - edx9;
    if (reinterpret_cast<int32_t>((eax10 ^ edx11) - edx12) >> 14 < reinterpret_cast<int32_t>(eax6)) {
        __asm__("cdq ");
        __asm__("shld edx, eax, 0x10");
        return reinterpret_cast<int32_t>(eax13 << 16) / reinterpret_cast<int32_t>(edx7);
    } else {
        *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx7 ^ eax13) < reinterpret_cast<int32_t>(0));
        return (eax6 & 0xff) + 0x7fffffff;
    }
}

void** g480108 = reinterpret_cast<void**>(0);

void** g48010c = reinterpret_cast<void**>(0);

void** g480104 = reinterpret_cast<void**>(98);

void* g480100 = reinterpret_cast<void*>(0x220000);

void** g480090 = reinterpret_cast<void**>(0);

void** g480094 = reinterpret_cast<void**>(0xe0);

void** g459750 = reinterpret_cast<void**>(1);

void** g480010 = reinterpret_cast<void**>(0xb8);

void** g4800f4 = reinterpret_cast<void**>(16);

void** g4800d4 = reinterpret_cast<void**>(0);

void** g4800f0 = reinterpret_cast<void**>(0);

void** g4800d0 = reinterpret_cast<void**>(0);

void** g4800fc = reinterpret_cast<void**>(0);

void** g4800ec = reinterpret_cast<void**>(0);

void fun_4103d0(void** ecx) {
    void** ebx2;
    void** ecx3;
    void** esi4;
    void* edi5;
    int1_t zf6;
    int1_t zf7;
    void** eax8;
    void** ecx9;
    void** eax10;
    void** ebx11;
    void* eax12;
    void** ebp13;
    void** edx14;
    void* eax15;
    void** ebp16;
    void** edx17;

    ebx2 = g480108;
    ecx3 = g48010c;
    esi4 = g480104;
    edi5 = g480100;
    zf6 = g480090 == 0;
    if (!zf6 || (zf7 = g480094 == 0, !zf7)) {
        g459750 = reinterpret_cast<void**>(0);
        g480010 = reinterpret_cast<void**>(0x7fffffff);
    }
    eax8 = g480090;
    ecx9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx3) + reinterpret_cast<unsigned char>(eax8));
    eax10 = g480094;
    ebx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx2) + reinterpret_cast<unsigned char>(eax10));
    eax12 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(esi4) - (reinterpret_cast<signed char>(esi4) >> 31)) >> 1);
    ebp13 = g4800f4;
    edx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx9) + reinterpret_cast<uint32_t>(eax12));
    if (reinterpret_cast<signed char>(edx14) > reinterpret_cast<signed char>(ebp13) || (ebp13 = g4800d4, reinterpret_cast<signed char>(edx14) < reinterpret_cast<signed char>(ebp13))) {
        ecx9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp13) - reinterpret_cast<uint32_t>(eax12));
    }
    eax15 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(edi5) - (reinterpret_cast<int32_t>(edi5) >> 31)) >> 1);
    ebp16 = g4800f0;
    edx17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx11) + reinterpret_cast<uint32_t>(eax15));
    if (reinterpret_cast<signed char>(edx17) > reinterpret_cast<signed char>(ebp16) || (ebp16 = g4800d0, reinterpret_cast<signed char>(edx17) < reinterpret_cast<signed char>(ebp16))) {
        ebx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebp16) - reinterpret_cast<uint32_t>(eax15));
    }
    g4800fc = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx9) + reinterpret_cast<unsigned char>(esi4));
    g4800ec = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx11) + reinterpret_cast<uint32_t>(edi5));
    g480100 = edi5;
    g480104 = esi4;
    g48010c = ecx9;
    g480108 = ebx11;
    return;
}

struct s6 {
    signed char[4] pad4;
    int32_t f4;
};

struct s7 {
    int32_t f0;
    uint32_t f4;
};

void** g482a84 = reinterpret_cast<void**>(0xc4);

void** g482a58 = reinterpret_cast<void**>(18);

int32_t fun_414e50(void** ecx);

void** g481264 = reinterpret_cast<void**>(0);

void** g5f274c = reinterpret_cast<void**>(0);

void fun_414f30(void** ecx);

void** fun_430c80(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21);

void** fun_420c50(void** ecx);

int32_t g4668b0 = 0;

struct s8 {
    signed char[44] pad44;
    int32_t f2c;
};

void** fun_4217d0(void** ecx);

void** g482a7c = reinterpret_cast<void**>(4);

struct s9 {
    signed char[12] pad12;
    void** fc;
    signed char[3] pad16;
    void** f10;
    signed char[15] pad32;
    void** f20;
};

void fun_442b4a(void** ecx, void* a2, int32_t a3, void** a4, void** a5, void** a6, ...);

void fun_417ed0();

void** g5f2754 = reinterpret_cast<void**>(0);

void** g5f2720 = reinterpret_cast<void**>(0);

int32_t fun_432320(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12) {
    void*** eax13;
    int32_t eax14;
    struct s6* eax15;
    struct s7* eax16;
    int1_t zf17;
    int1_t zf18;
    int32_t eax19;
    int32_t eax20;
    int32_t eax21;
    int32_t eax22;
    int32_t eax23;
    int32_t eax24;
    int1_t zf25;
    int32_t eax26;
    int1_t zf27;
    int32_t eax28;
    void** eax29;
    void** dl30;
    void** bl31;
    void** eax32;
    int1_t zf33;
    void* edx34;
    signed char v35;
    void* eax36;
    signed char v37;
    void** v38;
    void** v39;
    void** ebp40;
    void** edi41;
    void** esi42;
    void** edx43;
    void** ebx44;
    void** eax45;
    int32_t edx46;
    signed char v47;
    int32_t edx48;
    signed char v49;
    void** v50;
    void** v51;
    void** eax52;
    void** eax53;
    int1_t zf54;
    void** eax55;
    void** eax56;
    void** eax57;
    void*** eax58;
    void* eax59;
    void** edx60;
    void** eax61;
    void** eax62;
    void*** eax63;
    void* eax64;
    void** edx65;
    void** eax66;
    void** cl67;
    void** eax68;
    int32_t ebx69;
    void* edi70;
    int32_t eax71;
    void** esi72;
    struct s8* eax73;
    void** eax74;
    int32_t eax75;
    int32_t eax76;
    int32_t eax77;
    void** edx78;
    struct s9* eax79;
    void** v80;
    void** v81;
    void** eax82;
    void** eax83;
    void** eax84;
    int32_t eax85;
    int1_t zf86;
    int32_t eax87;
    signed char v88;
    int32_t edx89;
    signed char v90;
    int32_t ebx91;
    signed char v92;
    int32_t eax93;
    signed char v94;
    int32_t eax95;
    int1_t zf96;
    int1_t zf97;
    void** ebx98;

    if (!reinterpret_cast<int1_t>(*eax13 == 1) || (eax14 = eax15->f4, *reinterpret_cast<int16_t*>(&eax14) = 0, eax14 != 0x616d0000)) {
        if (!eax16->f0 && (zf17 = g482a84 == 0, zf17)) {
            zf18 = reinterpret_cast<int1_t>(g482a58 == 4);
            if (!zf18) {
                eax19 = fun_414e50(ecx);
                if (!eax19) {
                    eax20 = fun_414e50(ecx);
                    if (!eax20) {
                        eax21 = fun_414e50(ecx);
                        if (!eax21) {
                            eax22 = fun_414e50(ecx);
                            if (!eax22) {
                                eax23 = fun_414e50(ecx);
                                if (!eax23) {
                                    eax24 = fun_414e50(ecx);
                                    if (!eax24) {
                                        zf25 = g481264 == 0;
                                        if (!zf25 || (eax26 = fun_414e50(ecx), eax26 == 0)) {
                                            zf27 = g481264 == 0;
                                            if (!zf27 && (eax28 = fun_414e50(ecx), !!eax28)) {
                                                eax29 = g5f274c;
                                                dl30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax29 + 0xc4)) ^ 1);
                                                *reinterpret_cast<void***>(eax29 + 0xc4) = dl30;
                                                if (!(reinterpret_cast<unsigned char>(dl30) & 1)) {
                                                    addr_4326b0_13:
                                                    *reinterpret_cast<void***>(eax29 + 0xd8) = reinterpret_cast<void**>("No Clipping Mode OFF");
                                                } else {
                                                    *reinterpret_cast<void***>(eax29 + 0xd8) = reinterpret_cast<void**>("No Clipping Mode ON");
                                                }
                                            }
                                        } else {
                                            eax29 = g5f274c;
                                            bl31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax29 + 0xc4)) ^ 1);
                                            *reinterpret_cast<void***>(eax29 + 0xc4) = bl31;
                                            if (!(reinterpret_cast<unsigned char>(bl31) & 1)) 
                                                goto addr_4326b0_13;
                                            *reinterpret_cast<void***>(eax29 + 0xd8) = reinterpret_cast<void**>("No Clipping Mode ON");
                                        }
                                    } else {
                                        eax32 = g5f274c;
                                        *reinterpret_cast<void***>(eax32 + 0xd8) = reinterpret_cast<void**>("Music Change");
                                        fun_414f30(ecx);
                                        zf33 = g481264 == 0;
                                        if (zf33) {
                                            edx34 = reinterpret_cast<void*>(v35 - 49);
                                            eax36 = reinterpret_cast<void*>(static_cast<int32_t>(v37));
                                            if (reinterpret_cast<int32_t>(eax36) + (reinterpret_cast<int32_t>(edx34) + reinterpret_cast<int32_t>(edx34) * 8) - 49 <= 31) {
                                                fun_430c80(reinterpret_cast<int32_t>(eax36) + 0xffffffcf, v38, v39, ebp40, edi41, esi42, edx43, ecx, ebx44, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
                                            } else {
                                                eax45 = g5f274c;
                                                *reinterpret_cast<void***>(eax45 + 0xd8) = reinterpret_cast<void**>("IMPOSSIBLE SELECTION");
                                            }
                                        } else {
                                            edx46 = v47 - 48;
                                            edx48 = edx46 + edx46 * 4;
                                            if (edx48 + edx48 + v49 - 48 <= 35) {
                                                fun_430c80(ecx, v50, v51, ebp40, edi41, esi42, edx43, ecx, ebx44, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
                                            } else {
                                                eax52 = g5f274c;
                                                *reinterpret_cast<void***>(eax52 + 0xd8) = reinterpret_cast<void**>("IMPOSSIBLE SELECTION");
                                            }
                                        }
                                    }
                                } else {
                                    eax53 = g5f274c;
                                    *reinterpret_cast<void***>(eax53 + 0xd8) = reinterpret_cast<void**>("By request...");
                                    fun_420c50(ecx);
                                }
                            } else {
                                zf54 = g4668b0 == 0;
                                if (zf54) {
                                    eax55 = g5f274c;
                                    g4668b0 = 1;
                                    *reinterpret_cast<void***>(eax55 + 0xd8) = reinterpret_cast<void**>("Be Vewy Vewy Quiet...");
                                } else {
                                    eax56 = g5f274c;
                                    g4668b0 = 0;
                                    *reinterpret_cast<void***>(eax56 + 0xd8) = reinterpret_cast<void**>("Achoo!");
                                }
                            }
                        } else {
                            eax57 = g5f274c;
                            eax58 = reinterpret_cast<void***>(eax57 + 0x78);
                            *reinterpret_cast<int32_t*>(eax58 + 0xffffffac) = 0xc8;
                            *reinterpret_cast<int32_t*>(eax58 + 0xffffffb0) = 2;
                            fun_444197(9);
                            eax59 = reinterpret_cast<void*>(0);
                            do {
                                edx60 = g5f274c;
                                eax59 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax59) + 4);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx60) + reinterpret_cast<uint32_t>(eax59) + 0x98) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx60) + reinterpret_cast<uint32_t>(eax59) + 0xa8);
                            } while (!reinterpret_cast<int1_t>(eax59 == 16));
                            fun_444197(6);
                            eax61 = g5f274c;
                            *reinterpret_cast<void***>(eax61 + 0xd8) = reinterpret_cast<void**>("Very Happy Ammo Added");
                        }
                    } else {
                        eax62 = g5f274c;
                        eax63 = reinterpret_cast<void***>(eax62 + 0x78);
                        *reinterpret_cast<int32_t*>(eax63 + 0xffffffac) = 0xc8;
                        *reinterpret_cast<int32_t*>(eax63 + 0xffffffb0) = 2;
                        fun_444197(9);
                        eax64 = reinterpret_cast<void*>(0);
                        do {
                            edx65 = g5f274c;
                            eax64 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(eax64) + 4);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx65) + reinterpret_cast<uint32_t>(eax64) + 0x98) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(edx65) + reinterpret_cast<uint32_t>(eax64) + 0xa8);
                        } while (!reinterpret_cast<int1_t>(eax64 == 16));
                        *reinterpret_cast<void***>(edx65 + 0xd8) = reinterpret_cast<void**>("Ammo (no keys) Added");
                    }
                } else {
                    eax66 = g5f274c;
                    cl67 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax66 + 0xc4)) ^ 2);
                    *reinterpret_cast<void***>(eax66 + 0xc4) = cl67;
                    if (!(reinterpret_cast<unsigned char>(cl67) & 2)) {
                        *reinterpret_cast<void***>(eax66 + 0xd8) = reinterpret_cast<void**>("Degreelessness Mode Off");
                    } else {
                        if (*reinterpret_cast<void***>(eax66)) {
                            *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax66) + 0x6c) = reinterpret_cast<void**>(100);
                        }
                        eax68 = g5f274c;
                        *reinterpret_cast<void***>(eax68 + 32) = reinterpret_cast<void**>(100);
                        *reinterpret_cast<void***>(eax68 + 0xd8) = reinterpret_cast<void**>("Degreelessness Mode On");
                    }
                }
                ecx = reinterpret_cast<void**>(0x466974);
                ebx69 = 0;
                edi70 = reinterpret_cast<void*>(0);
                do {
                    eax71 = fun_414e50(ecx);
                    if (eax71) {
                        esi72 = g5f274c;
                        eax73 = reinterpret_cast<struct s8*>(reinterpret_cast<unsigned char>(esi72) + reinterpret_cast<uint32_t>(edi70));
                        if (eax73->f2c) {
                            if (ebx69 == 1) {
                                eax73->f2c = 0;
                            } else {
                                eax73->f2c = 1;
                            }
                        } else {
                            fun_4217d0(ecx);
                        }
                        eax74 = g5f274c;
                        *reinterpret_cast<void***>(eax74 + 0xd8) = reinterpret_cast<void**>("Power-up Toggled");
                    }
                    ecx = ecx + 8;
                    ++ebx69;
                    edi70 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi70) + 4);
                } while (ebx69 < 6);
                eax75 = fun_414e50(ecx);
                if (!eax75) {
                    eax76 = fun_414e50(ecx);
                    if (!eax76) {
                        eax77 = fun_414e50(ecx);
                        if (eax77) {
                            edx78 = g482a7c;
                            eax79 = *reinterpret_cast<struct s9**>((reinterpret_cast<uint32_t>(edx78 + reinterpret_cast<unsigned char>(edx78) * 8) * 4 - reinterpret_cast<unsigned char>(edx78)) * 8 + 0x482518);
                            v80 = eax79->f10;
                            ecx = eax79->fc;
                            v81 = eax79->f20;
                            fun_442b4a(ecx, 0x5f2758, "ang=0x%x;x,y=(0x%x,0x%x)", v81, ecx, v80);
                            eax82 = g5f274c;
                            *reinterpret_cast<void***>(eax82 + 0xd8) = reinterpret_cast<void**>(0x5f2758);
                        }
                    } else {
                        eax83 = g5f274c;
                        *reinterpret_cast<void***>(eax83 + 0x94) = reinterpret_cast<void**>(1);
                        *reinterpret_cast<void***>(eax83 + 44) = reinterpret_cast<void**>(1);
                        *reinterpret_cast<void***>(eax83 + 0xd8) = reinterpret_cast<void**>("... doesn't suck - GM");
                    }
                } else {
                    eax84 = g5f274c;
                    *reinterpret_cast<void***>(eax84 + 0xd8) = reinterpret_cast<void**>("inVuln, Str, Inviso, Rad, Allmap, or Lite-amp");
                }
            }
            eax85 = fun_414e50(ecx);
            if (eax85) {
                fun_414f30(ecx);
                zf86 = g481264 == 0;
                if (zf86) {
                    eax87 = v88;
                    edx89 = v90 - 48;
                } else {
                    ebx91 = v92 - 48;
                    eax93 = ebx91 * 4 + ebx91;
                    eax87 = eax93 + eax93 + v94;
                    edx89 = 0;
                }
                eax95 = eax87 - 48;
                zf96 = g481264 == 0;
                if (zf96 && (!(reinterpret_cast<uint1_t>(edx89 < 0) | reinterpret_cast<uint1_t>(edx89 == 0)) && (edx89 < 5 && (!(reinterpret_cast<uint1_t>(eax95 < 0) | reinterpret_cast<uint1_t>(eax95 == 0)) && eax95 < 10))) || (zf97 = g481264 == 0, !zf97) && (!(reinterpret_cast<uint1_t>(eax95 < 0) | reinterpret_cast<uint1_t>(eax95 == 0)) && eax95 <= 40)) {
                    ebx98 = g5f274c;
                    *reinterpret_cast<void***>(ebx98 + 0xd8) = reinterpret_cast<void**>("Changing Level...");
                    fun_417ed0();
                }
            }
        }
    } else {
        if (eax16->f4 >= 0x616d6500) {
            if (eax16->f4 <= 0x616d6500) {
                g5f2754 = *eax13;
                g5f2720 = reinterpret_cast<void**>(0);
            } else {
                if (eax16->f4 == 0x616d7800) {
                    g5f2720 = *eax13;
                }
            }
        }
    }
    return 0;
}

uint32_t g60b9d8 = 0;

void** g60b9d4 = reinterpret_cast<void**>(0);

void** g60b270 = reinterpret_cast<void**>(0);

void** g60b3a0 = reinterpret_cast<void**>(0);

void** fun_437a90(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, ...);

void** fun_414590(void** ecx);

void fun_43cfd0(void** ecx);

void** g60b264 = reinterpret_cast<void**>(0);

int32_t g4597d8 = 1;

int32_t g60b450 = 0;

void** g4775e0 = reinterpret_cast<void**>(1);

int32_t PeekMessageA = 0x220c8c;

int32_t DispatchMessageA = 0x220b20;

void fun_438e40(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6);

void** fun_44441f(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11);

void** g5f22d0 = reinterpret_cast<void**>(0);

int32_t GetWindowLongA = 0x220bcc;

int32_t SetWindowLongA = 0x220d30;

void** g4775d4 = reinterpret_cast<void**>(0xc8);

void** g4775d0 = reinterpret_cast<void**>(64);

int32_t SetRect = 0x220d26;

int32_t AdjustWindowRectEx = 0x220a6e;

int32_t SetWindowPos = 0x220d42;

int32_t SystemParametersInfoA = 0x220d86;

int32_t GetWindowRect = 0x220bde;

int32_t InvalidateRect = 0x220bee;

int32_t UpdateWindow = 0x220db4;

int32_t MessageBoxA = 0x220c70;

void** fun_442fdc(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40, void** a41, void** a42, void** a43, void** a44, void** a45, void** a46, void** a47, void** a48, void** a49, void** a50, void** a51, void** a52, void** a53, void** a54, void** a55, void** a56, void** a57, void** a58, void** a59, void** a60, void** a61, void** a62, void** a63, void** a64, void** a65, void** a66, void** a67, void** a68, void** a69, void** a70, void** a71, void** a72, void** a73, void** a74);

void** fun_43bd40(void** ecx, int32_t a2, void** a3, void** a4, ...) {
    void* esp5;
    int1_t zf6;
    void** ebx7;
    int1_t zf8;
    void** eax9;
    void** ebx10;
    void** eax11;
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
    void* esp23;
    void** eax24;
    int1_t zf25;
    void** ebx26;
    int32_t eax27;
    void* esp28;
    void* esp29;
    int32_t eax30;
    void* esp31;
    void** ecx32;
    void** v33;
    uint32_t eax34;
    void** v35;
    void** esi36;
    void** v37;
    void** edi38;
    void** v39;
    void** ebp40;
    void** v41;
    void* esp42;
    void** v43;
    void** eax44;
    void** v45;
    void** eax46;
    void** v47;
    void** edx48;
    void** v49;
    void** eax50;
    void*** esp51;
    void** v52;
    void** v53;
    void** v54;
    void* v55;
    uint32_t v56;
    void** v57;
    void* v58;
    uint32_t v59;
    void** esi60;
    void** v61;
    void** edi62;
    void** v63;
    void* esp64;
    void** eax65;
    void* esp66;
    void*** esp67;
    void** v68;
    void** v69;
    void* esp70;
    void** v71;
    void** ebp72;
    void** v73;
    void** v74;
    void** v75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** ecx80;
    void** v81;
    void** v82;
    void** edi83;
    void** v84;
    void** ebp85;
    void** v86;
    void** eax87;
    void** v88;
    void* esp89;
    void** eax90;
    void* esp91;
    void* esp92;
    void** v93;
    void** eax94;

    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 0x224);
    zf6 = g60b9d8 == 1;
    if (!zf6) {
        ebx7 = g60b9d4;
        zf8 = ebx7 == 0;
        if (!zf8) {
            if (!zf8) {
                eax9 = g60b270;
                ebx10 = *reinterpret_cast<void***>(eax9);
                g60b9d4 = reinterpret_cast<void**>(0);
                eax11 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx10 + 0x80)(eax9, 0));
                esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 + 4);
                g60b3a0 = eax11;
                if (eax11) {
                    fun_437a90(ecx, "MegaUnlock: Unlock = %d", reinterpret_cast<unsigned char>(eax11) & 0xfff, eax9, 0, v12, v13, v14, v15);
                    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 - 4 + 4 + 8);
                }
            } else {
                fun_437a90(ecx, "MegaUnlock: Not Locked!", v16, v17, v18, v19, v20, v21, v22);
                esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 - 4 + 4 + 4);
            }
        }
        fun_414590(ecx);
        fun_43cfd0(ecx);
        esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp5) - 4 + 4 - 4 + 4);
        eax24 = g60b264;
        g4597d8 = 0;
        g60b450 = 0;
        if (eax24 && (zf25 = g4775e0 == 0, zf25)) {
            ebx26 = *reinterpret_cast<void***>(eax24);
            *reinterpret_cast<void***>(ebx26 + 40)(eax24);
            esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 + 4);
        }
        while (eax27 = reinterpret_cast<int32_t>(PeekMessageA(0x60b410, 0, 0, 0, 1)), esp28 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp23) - 4 - 4 - 4 - 4 - 4 - 4 + 4), !!eax27) {
            DispatchMessageA(0x60b410, 0x60b410, 0, 0, 0, 1);
            esp23 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) - 4 - 4 + 4);
        }
        fun_438e40(ecx, 0x60b410, 0, 0, 0, 1);
        esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp28) - 4 + 4);
        while (eax30 = reinterpret_cast<int32_t>(PeekMessageA(0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1)), esp31 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp29) - 4 - 4 - 4 - 4 - 4 - 4 + 4), !!eax30) {
            DispatchMessageA(0x60b410, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1);
            esp29 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp31) - 4 - 4 + 4);
        }
        fun_44441f(ecx, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1);
        ecx32 = g5f22d0;
        v33 = ecx32;
        eax34 = reinterpret_cast<uint32_t>(GetWindowLongA(v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1));
        v35 = reinterpret_cast<void**>(eax34 & 0x7f39ffff | 0xc60000);
        esi36 = g5f22d0;
        v37 = esi36;
        SetWindowLongA(v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1);
        edi38 = g4775d4;
        v39 = edi38;
        ebp40 = g4775d0;
        v41 = ebp40;
        esp42 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp31) - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4);
        v43 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp42) + 0x220);
        SetRect(v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1);
        eax44 = g5f22d0;
        v45 = eax44;
        eax46 = reinterpret_cast<void**>(GetWindowLongA(v45, 0xec, v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1));
        v47 = eax46;
        edx48 = g5f22d0;
        v49 = edx48;
        eax50 = reinterpret_cast<void**>(GetWindowLongA(v49, 0xf0, 0, v47, v45, 0xec, v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1));
        esp51 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp42) - 4 - 4 + 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4);
        v52 = eax50;
        v53 = reinterpret_cast<void**>(esp51 + 0x21c);
        AdjustWindowRectEx(v53, v52, v49, 0xf0, 0, v47, v45, 0xec, v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1);
        v54 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v55) - v56);
        v57 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v58) - v59);
        esi60 = g5f22d0;
        v61 = esi60;
        SetWindowPos(v61, 0, 0, 0, v57, v54, 22, v53, v52, v49, 0xf0, 0, v47, v45, 0xec, v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1);
        edi62 = g5f22d0;
        v63 = edi62;
        SetWindowPos(v63, 0xfe, 0, 0, 0, 0, 19, v61, 0, 0, 0, v57, v54, 22, v53, v52, v49, 0xf0, 0, v47, v45, 0xec, v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1);
        esp64 = reinterpret_cast<void*>(esp51 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4);
        while (eax65 = reinterpret_cast<void**>(PeekMessageA(0x60b410, 0, 0, 0, 1, v63, 0xfe, 0, 0, 0, 0, 19, v61, 0, 0, 0, v57, v54, 22, v53, v52, v49, 0xf0, 0, v47, v45, 0xec, v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1)), esp66 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp64) - 4 - 4 - 4 - 4 - 4 - 4 + 4), !!eax65) {
            DispatchMessageA(0x60b410, 0x60b410, 0, 0, 0, 1, v63, 0xfe, 0, 0, 0, 0, 19, v61, 0, 0, 0, v57, v54, 22, v53, v52, v49, 0xf0, 0, v47, v45, 0xec, v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1);
            esp64 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp66) - 4 - 4 + 4);
        }
        esp67 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp66) - 4);
        v68 = eax65;
        v69 = reinterpret_cast<void**>(esp67 + 0x204);
        SystemParametersInfoA(48, 0, v69, v68, 0x60b410, 0, 0, 0, 1, v63, 0xfe, 0, 0, 0, 0, 19, v61, 0, 0, 0, v57, v54, 22, v53, v52, v49, 0xf0, 0, v47, v45, 0xec, v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1);
        esp70 = reinterpret_cast<void*>(esp67 - 4 - 4 - 4 - 4 + 4);
        v71 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp70) + 0x210);
        ebp72 = g5f22d0;
        v73 = ebp72;
        GetWindowRect(v73, v71, 48, 0, v69, v68, 0x60b410, 0, 0, 0, 1, v63, 0xfe, 0, 0, 0, 0, 19, v61, 0, 0, 0, v57, v54, 22, v53, v52, v49, 0xf0, 0, v47, v45, 0xec, v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1);
        if (reinterpret_cast<signed char>(v74) < reinterpret_cast<signed char>(v75)) {
            v76 = v75;
        }
        if (reinterpret_cast<signed char>(v77) < reinterpret_cast<signed char>(v78)) {
            v79 = v78;
        }
        ecx80 = v79;
        v81 = ecx80;
        v82 = v76;
        edi83 = g5f22d0;
        v84 = edi83;
        SetWindowPos(v84, 0, v82, v81, 0, 0, 21, v73, v71, 48, 0, v69, v68, 0x60b410, 0, 0, 0, 1, v63, 0xfe, 0, 0, 0, 0, 19, v61, 0, 0, 0, v57, v54, 22, v53, v52, v49, 0xf0, 0, v47, v45, 0xec, v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1);
        ebp85 = g5f22d0;
        v86 = ebp85;
        InvalidateRect(v86, 0, 1, v84, 0, v82, v81, 0, 0, 21, v73, v71, 48, 0, v69, v68, 0x60b410, 0, 0, 0, 1, v63, 0xfe, 0, 0, 0, 0, 19, v61, 0, 0, 0, v57, v54, 22, v53, v52, v49, 0xf0, 0, v47, v45, 0xec, v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1);
        eax87 = g5f22d0;
        v88 = eax87;
        UpdateWindow(v88, v86, 0, 1, v84, 0, v82, v81, 0, 0, 21, v73, v71, 48, 0, v69, v68, 0x60b410, 0, 0, 0, 1, v63, 0xfe, 0, 0, 0, 0, 19, v61, 0, 0, 0, v57, v54, 22, v53, v52, v49, 0xf0, 0, v47, v45, 0xec, v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1);
        esp89 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp70) - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 - 4 + 4 - 4 - 4 + 4);
        while (eax90 = reinterpret_cast<void**>(PeekMessageA(0x60b410, 0, 0, 0, 1, v88, v86, 0, 1, v84, 0, v82, v81, 0, 0, 21, v73, v71, 48, 0, v69, v68, 0x60b410, 0, 0, 0, 1, v63, 0xfe, 0, 0, 0, 0, 19, v61, 0, 0, 0, v57, v54, 22, v53, v52, v49, 0xf0, 0, v47, v45, 0xec, v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1)), esp91 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp89) - 4 - 4 - 4 - 4 - 4 - 4 + 4), !!eax90) {
            DispatchMessageA(0x60b410, 0x60b410, 0, 0, 0, 1, v88, v86, 0, 1, v84, 0, v82, v81, 0, 0, 21, v73, v71, 48, 0, v69, v68, 0x60b410, 0, 0, 0, 1, v63, 0xfe, 0, 0, 0, 0, 19, v61, 0, 0, 0, v57, v54, 22, v53, v52, v49, 0xf0, 0, v47, v45, 0xec, v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1);
            esp89 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp91) - 4 - 4 + 4);
        }
        esp92 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(esp91) - 4 - 4);
        v93 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(esp92) + 8);
        MessageBoxA(0, v93, "I_Error says:", eax90, 0x60b410, 0, 0, 0, 1, v88, v86, 0, 1, v84, 0, v82, v81, 0, 0, 21, v73, v71, 48, 0, v69, v68, 0x60b410, 0, 0, 0, 1, v63, 0xfe, 0, 0, 0, 0, 19, v61, 0, 0, 0, v57, v54, 22, v53, v52, v49, 0xf0, 0, v47, v45, 0xec, v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1);
        fun_437a90(ecx80, "\r\n\r\nI_Error: %s\r\n\r\n", reinterpret_cast<int32_t>(esp92) - 4 - 4 - 4 + 4, 0, v93, "I_Error says:", eax90, 0x60b410, 0, ecx80, "\r\n\r\nI_Error: %s\r\n\r\n", reinterpret_cast<int32_t>(esp92) - 4 - 4 - 4 + 4, 0, v93, "I_Error says:", eax90, 0x60b410, 0);
        eax94 = fun_442fdc(ecx80, 0, v93, "I_Error says:", eax90, 0x60b410, 0, 0, 0, 1, v88, v86, 0, 1, v84, 0, v82, v81, 0, 0, 21, v73, v71, 48, 0, v69, v68, 0x60b410, 0, 0, 0, 1, v63, 0xfe, 0, 0, 0, 0, 19, v61, 0, 0, 0, v57, v54, 22, v53, v52, v49, 0xf0, 0, v47, v45, 0xec, v43, 0, 0, v41, v39, v37, 0xf0, v35, v33, 0xf0, 0x60b410, 0, 0, 0, 1, 0x60b410, 0, 0, 0, 1);
    }
    return eax94;
}

struct s10 {
    signed char[4] pad4;
    uint32_t f4;
    int32_t f8;
    int32_t fc;
};

void** fun_437910(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8) {
    struct s10* esi9;
    int32_t eax10;
    void** esi11;
    void** eax12;
    int32_t edx13;

    esi9 = reinterpret_cast<struct s10*>(eax10 - 24);
    if (esi9->fc != 0x1d4a11) {
        eax12 = fun_43bd40(ecx, "Z_ChangeTag: freed a pointer without ZONEID", esi11, ecx);
    }
    if (edx13 >= 100 && esi9->f4 < 0x100) {
        eax12 = fun_43bd40(ecx, "Z_ChangeTag: an owner is required for purgable blocks", esi11, ecx);
    }
    esi9->f8 = edx13;
    return eax12;
}

void** g459738 = reinterpret_cast<void**>(1);

void** g4800e0 = reinterpret_cast<void**>(0);

void** g4800dc = reinterpret_cast<void**>(2);

void** g4800cc = reinterpret_cast<void**>(0);

void** g4800c8 = reinterpret_cast<void**>(3);

void** g45974c = reinterpret_cast<void**>(0);

void fun_4102a0(void** ecx);

void** g4800bc = reinterpret_cast<void**>(0);

void** g459748 = reinterpret_cast<void**>(51);

void** g4800b8 = reinterpret_cast<void**>(0);

void** g4800b0 = reinterpret_cast<void**>(0);

void fun_410740(void** ecx) {
    void** v2;
    void** v3;
    void** edx4;
    void** v5;
    void** edi6;
    void** v7;
    void** ebp8;
    void** eax9;
    uint32_t eax10;
    void** edx11;
    void** edx12;
    uint32_t eax13;
    void** ecx14;
    void** eax15;
    void** edx16;
    void** eax17;
    void** eax18;

    v2 = reinterpret_cast<void**>(__return_address());
    v3 = edx4;
    v5 = edi6;
    v7 = ebp8;
    eax9 = g4775d0;
    g459738 = reinterpret_cast<void**>(0);
    g4800e0 = reinterpret_cast<void**>(0);
    g4800dc = reinterpret_cast<void**>(0);
    g4800cc = eax9;
    if (!reinterpret_cast<int1_t>(eax9 == 0x140)) {
        eax10 = 64;
    } else {
        eax10 = 32;
    }
    edx11 = g4775d4;
    edx12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx11) - eax10);
    g4800c8 = edx12;
    eax13 = reinterpret_cast<unsigned char>(edx12) ^ reinterpret_cast<unsigned char>(edx12);
    ecx14 = ecx;
    do {
        eax13 = eax13 + 8;
        *reinterpret_cast<int32_t*>(eax13 + 0x480010) = -1;
    } while (eax13 != 80);
    g45974c = reinterpret_cast<void**>(0);
    fun_4102a0(ecx14);
    eax15 = fun_411d60(ecx14, v7, v5, v3, v2);
    edx16 = g4800bc;
    g459748 = eax15;
    if (reinterpret_cast<signed char>(eax15) > reinterpret_cast<signed char>(edx16)) {
        eax17 = g4800b8;
        g459748 = eax17;
    }
    eax18 = fun_411d60(ecx14, v7, v5, v3, v2);
    g4800b0 = eax18;
    return;
}

uint32_t g4845e4 = 0xc1000000;

void** g4845f4 = reinterpret_cast<void**>(0x84);

void* g4800f8 = reinterpret_cast<void*>(0);

void* g4800e4 = reinterpret_cast<void*>(0x10000);

int32_t g4800ac = 0x10000;

int32_t g48009c = 0x39e00;

void fun_4102a0(void** ecx) {
    void** v2;
    void** esi3;
    void** v4;
    void** edi5;
    void** v6;
    void** ebp7;
    void** edi8;
    void** esi9;
    uint32_t edx10;
    void** ebp11;
    void** ecx12;
    void** eax13;
    void** v14;
    void** edx15;
    void** edx16;
    void** eax17;
    void** ebx18;
    void** eax19;
    void** ebp20;
    void** edi21;
    void** esi22;
    void** ecx23;
    void** eax24;

    v2 = esi3;
    v4 = edi5;
    v6 = ebp7;
    edi8 = reinterpret_cast<void**>(0x7fffffff);
    esi9 = reinterpret_cast<void**>(0x80000001);
    edx10 = g4845e4;
    ebp11 = reinterpret_cast<void**>(0x7fffffff);
    ecx12 = reinterpret_cast<void**>(0x80000001);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx10) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx10 == 0))) {
        eax13 = reinterpret_cast<void**>(0);
        v14 = reinterpret_cast<void**>(edx10 * 8);
        do {
            edx15 = g4845f4;
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx15) + reinterpret_cast<unsigned char>(eax13))) >= reinterpret_cast<signed char>(ebp11)) {
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx15) + reinterpret_cast<unsigned char>(eax13))) > reinterpret_cast<signed char>(ecx12)) {
                    ecx12 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx15) + reinterpret_cast<unsigned char>(eax13));
                }
            } else {
                ebp11 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx15) + reinterpret_cast<unsigned char>(eax13));
            }
            edx16 = g4845f4;
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx16) + reinterpret_cast<unsigned char>(eax13) + 4)) >= reinterpret_cast<signed char>(edi8)) {
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx16) + reinterpret_cast<unsigned char>(eax13) + 4)) > reinterpret_cast<signed char>(esi9)) {
                    esi9 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx16) + reinterpret_cast<unsigned char>(eax13) + 4);
                }
            } else {
                edi8 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(edx16) + reinterpret_cast<unsigned char>(eax13) + 4);
            }
            eax13 = eax13 + 8;
        } while (reinterpret_cast<signed char>(eax13) < reinterpret_cast<signed char>(v14));
    }
    g4800f8 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ecx12) - reinterpret_cast<unsigned char>(ebp11));
    g4800f4 = ecx12;
    g4800f0 = esi9;
    g4800e4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(esi9) - reinterpret_cast<unsigned char>(edi8));
    g4800d0 = edi8;
    g4800ac = 0x200000;
    g48009c = 0x200000;
    g4800d4 = ebp11;
    eax17 = fun_411d60(ecx12, v14, v6, v4, v2);
    ebx18 = eax17;
    eax19 = fun_411d60(ecx12, v14, v6, v4, v2);
    ebp20 = g4800d4;
    edi21 = g4800d0;
    esi22 = g4800f0;
    ecx23 = g4800f4;
    if (reinterpret_cast<signed char>(ebx18) >= reinterpret_cast<signed char>(eax19)) {
        ebx18 = eax19;
    }
    g4800b8 = ebx18;
    g4800f4 = ecx23;
    g4800f0 = esi22;
    g4800d0 = edi21;
    g4800d4 = ebp20;
    eax24 = fun_411d60(ecx23, v14, v6, v4, v2);
    g4800bc = eax24;
    return;
}

void** fun_410640(void** ecx, void** a2, void** a3, void** a4);

void** g45973c = reinterpret_cast<void**>(0);

int32_t g459774 = 1;

int32_t fun_4107f0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9) {
    void** edx10;
    void** ebx11;
    int32_t eax12;

    fun_410640(ecx, edx10, ebx11, __return_address());
    g45973c = reinterpret_cast<void**>(0);
    eax12 = fun_432320(ecx, edx10, ebx11, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9);
    g459774 = 1;
    return eax12;
}

void** g459788 = reinterpret_cast<void**>(0xff);

void** g482a5c = reinterpret_cast<void**>(13);

void** g45978c = reinterpret_cast<void**>(0xff);

void** g482a80 = reinterpret_cast<void**>(84);

int32_t fun_4104a0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

void fun_4105f0(void** ecx);

void fun_410820(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6) {
    int1_t zf7;
    void** ebx8;
    void** eax9;
    void** ecx10;
    void** eax11;
    int1_t zf12;
    void** eax13;
    void** eax14;

    zf7 = g459774 == 0;
    if (zf7) {
        fun_4107f0(ecx, ecx, ebx8, __return_address(), a2, a3, a4, a5, a6);
    }
    eax9 = g459788;
    ecx10 = g482a5c;
    g459774 = 0;
    if (eax9 != ecx10 || (eax11 = g45978c, zf12 = eax11 == g482a80, !zf12)) {
        fun_410740(ecx10);
        eax13 = g482a5c;
        g459788 = eax13;
        eax14 = g482a80;
        g45978c = eax14;
    }
    fun_4104a0(ecx10, ecx, ebx8, __return_address(), a2, a3, a4, a5);
    fun_4105f0(ecx10);
    return;
}

void fun_410070(void** ecx) {
    void** ecx2;
    void** edx3;
    void* eax4;
    void** ebx5;
    void** eax6;
    void** ebx7;
    void** eax8;
    void** ebx9;
    void* eax10;
    void** ecx11;
    void** esi12;
    void** esi13;
    void** edi14;
    void** edi15;

    ecx2 = g480104;
    edx3 = g48010c;
    eax4 = g480100;
    g48010c = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx3) + (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(ecx2) - (reinterpret_cast<signed char>(ecx2) >> 31)) >> 1));
    ebx5 = g480108;
    eax6 = g4800cc;
    g480108 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx5) + (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax4) - (reinterpret_cast<int32_t>(eax4) >> 31)) >> 1));
    ebx7 = g4800b0;
    __asm__("shrd eax, edx, 0x10");
    g480104 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(eax6) << 16) * reinterpret_cast<unsigned char>(ebx7));
    eax8 = g4800c8;
    ebx9 = g4800b0;
    eax10 = reinterpret_cast<void*>((reinterpret_cast<unsigned char>(eax8) << 16) * reinterpret_cast<unsigned char>(ebx9));
    __asm__("shrd eax, edx, 0x10");
    ecx11 = g480104;
    g480100 = eax10;
    esi12 = g48010c;
    esi13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi12) - (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(ecx11) - (reinterpret_cast<signed char>(ecx11) >> 31)) >> 1));
    edi14 = g480108;
    edi15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) - (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax10) - (reinterpret_cast<int32_t>(eax10) >> 31)) >> 1));
    g48010c = esi13;
    g480108 = edi15;
    g4800fc = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi13) + reinterpret_cast<unsigned char>(ecx11));
    g4800ec = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(eax10) + reinterpret_cast<unsigned char>(edi15));
    return;
}

struct s11 {
    signed char* f0;
    signed char* f4;
};

int32_t g459878 = 1;

int32_t fun_414e50(void** ecx) {
    struct s11* ecx2;
    struct s11* eax3;
    signed char v4;
    signed char dl5;
    int32_t edx6;
    int32_t esi7;
    uint32_t eax8;
    uint32_t edx9;
    uint32_t ebx10;
    int32_t edx11;
    uint32_t edx12;
    signed char* eax13;
    int32_t edx14;
    signed char* eax15;
    signed char* eax16;

    ecx2 = eax3;
    v4 = dl5;
    edx6 = g459878;
    esi7 = 0;
    if (edx6) {
        g459878 = 0;
        eax8 = 0;
        do {
            edx9 = eax8 & 8;
            ebx10 = (reinterpret_cast<int32_t>(eax8 & 64) >> 5) + ((eax8 & 32) + ((eax8 & 4) + (((eax8 & 2) << 5) + ((eax8 & 1) << 7)) + (edx9 + edx9) + (reinterpret_cast<int32_t>(eax8 & 16) >> 1)));
            edx11 = reinterpret_cast<int32_t>(eax8 & 0x80) >> 7;
            ++eax8;
            edx12 = edx11 + ebx10;
            *reinterpret_cast<signed char*>(eax8 + 0x481cdb) = *reinterpret_cast<signed char*>(&edx12);
        } while (reinterpret_cast<int32_t>(eax8) < reinterpret_cast<int32_t>(0x100));
    }
    if (!ecx2->f4) {
        ecx2->f4 = ecx2->f0;
    }
    eax13 = ecx2->f4;
    if (*eax13) {
        edx14 = 0;
        *reinterpret_cast<signed char*>(&edx14) = v4;
        if (*reinterpret_cast<signed char*>(edx14 + 0x481cdc) != *eax13) {
            eax15 = ecx2->f0;
        } else {
            eax15 = eax13 + 1;
        }
        ecx2->f4 = eax15;
    } else {
        ecx2->f4 = eax13 + 1;
        *eax13 = v4;
    }
    if (*ecx2->f4 != 1) {
        if (*ecx2->f4 != -1) {
            addr_414f1a_14:
            return esi7;
        } else {
            eax16 = ecx2->f0;
            esi7 = 1;
        }
    } else {
        eax16 = ecx2->f4 + 1;
    }
    ecx2->f4 = eax16;
    goto addr_414f1a_14;
}

void** g4800b4 = reinterpret_cast<void**>(0);

void** g480014 = reinterpret_cast<void**>(0);

void fun_410df0(void** ecx) {
    void** eax2;
    void** ebx3;
    void** ebx4;
    void** eax5;
    void** ebx6;
    void** ecx7;
    void** eax8;
    void** eax9;
    void** eax10;
    void** ebx11;
    void** ecx12;
    void* eax13;
    void** esi14;
    void** ebx15;
    void** eax16;
    void* edi17;
    void** eax18;
    void** eax19;

    eax2 = g4800b4;
    ebx3 = g480010;
    if (ebx3 != *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2) + 12) || (ebx4 = g480014, ebx4 != *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax2) + 16))) {
        eax5 = g4800b4;
        ebx6 = g459748;
        ecx7 = g4800b0;
        __asm__("shrd eax, edx, 0x10");
        __asm__("shrd eax, edx, 0x10");
        eax8 = g480104;
        eax9 = g4800b4;
        eax10 = *reinterpret_cast<void***>(eax9);
        g48010c = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(eax5) + 12)) * reinterpret_cast<unsigned char>(ebx6)) >> 16 << 16) * reinterpret_cast<unsigned char>(ecx7) - (reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax8) - (reinterpret_cast<signed char>(eax8) >> 31)) >> 1));
        ebx11 = g459748;
        ecx12 = g4800b0;
        __asm__("shrd eax, edx, 0x10");
        __asm__("shrd eax, edx, 0x10");
        eax13 = g480100;
        esi14 = g480104;
        ebx15 = reinterpret_cast<void**>((reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax10 + 16)) * reinterpret_cast<unsigned char>(ebx11)) >> 16 << 16) * reinterpret_cast<unsigned char>(ecx12) - (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(eax13) - (reinterpret_cast<int32_t>(eax13) >> 31)) >> 1));
        eax16 = g48010c;
        edi17 = g480100;
        g480108 = ebx15;
        g4800fc = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax16) + reinterpret_cast<unsigned char>(esi14));
        g4800ec = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx15) + reinterpret_cast<uint32_t>(edi17));
        eax18 = g4800b4;
        eax19 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax18) + 16);
        g480010 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(eax18) + 12);
        g480014 = eax19;
    }
    return;
}

void fun_410880(void** ecx, void** a2, void** a3) {
    void** eax4;
    void** edx5;
    void** eax6;

    eax4 = g4800b8;
    g459748 = eax4;
    eax6 = fun_411d60(ecx, edx5, __return_address(), a2, a3);
    g4800b0 = eax6;
    fun_410070(ecx);
    return;
}

void fun_4108b0(void** ecx, void** a2, void** a3) {
    void** eax4;
    void** edx5;
    void** eax6;

    eax4 = g4800bc;
    g459748 = eax4;
    eax6 = fun_411d60(ecx, edx5, __return_address(), a2, a3);
    g4800b0 = eax6;
    fun_410070(ecx);
    return;
}

void** fun_4450c5(void** ecx, void** a2);

void** fun_442b98(void** ecx, void** a2, int32_t a3, void** a4, void** a5, ...) {
    void** eax6;

    eax6 = fun_4450c5(ecx, reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 + 24);
    return eax6;
}

struct s12 {
    void* f0;
    void* f4;
    void* f8;
    void* fc;
};

struct s13 {
    signed char[4] pad4;
    void** f4;
};

struct s14 {
    signed char[8] pad8;
    void** f8;
};

struct s15 {
    signed char[12] pad12;
    void** fc;
};

void** g4597c0 = reinterpret_cast<void**>(0);

void*** g4800d8 = reinterpret_cast<void***>(0);

void** fun_4113b0(void** ecx) {
    struct s12* esi2;
    struct s12* eax3;
    int32_t v4;
    int32_t edx5;
    void*** eax6;
    void** ebx7;
    struct s13* eax8;
    void** edi9;
    struct s14* eax10;
    struct s15* eax11;
    void** eax12;
    void** v13;
    void** eax14;
    void* eax15;
    void* ebx16;
    void* v17;
    void* eax18;
    void* v19;
    void* eax20;
    void* edi21;
    void* edi22;
    void* eax23;
    void* v24;
    void* ebx25;
    void* ecx26;
    void** ebp27;
    void*** ebp28;
    void** ebp29;
    void*** ebp30;

    esi2 = eax3;
    v4 = edx5;
    if (reinterpret_cast<signed char>(*eax6) < reinterpret_cast<signed char>(0) || ((ebx7 = g4800cc, reinterpret_cast<signed char>(*eax6) >= reinterpret_cast<signed char>(ebx7)) || ((ecx = eax8->f4, reinterpret_cast<signed char>(ecx) < reinterpret_cast<signed char>(0)) || ((edi9 = g4800c8, reinterpret_cast<signed char>(ecx) >= reinterpret_cast<signed char>(edi9)) || (reinterpret_cast<signed char>(eax10->f8) < reinterpret_cast<signed char>(0) || (reinterpret_cast<signed char>(eax10->f8) >= reinterpret_cast<signed char>(ebx7) || (reinterpret_cast<signed char>(eax11->fc) < reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(eax11->fc) >= reinterpret_cast<signed char>(edi9)))))))) {
        eax12 = g4597c0;
        g4597c0 = eax12 + 1;
        eax14 = fun_442b98(ecx, 0x477888, "fuck %d \r", eax12, v13);
    } else {
        eax15 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(eax10->f8) - reinterpret_cast<uint32_t>(esi2->f0));
        if (reinterpret_cast<int32_t>(eax15) >= reinterpret_cast<int32_t>(0)) {
            ebx16 = eax15;
        } else {
            ebx16 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(eax15));
        }
        v17 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx16) + reinterpret_cast<uint32_t>(ebx16));
        if (reinterpret_cast<int32_t>(eax15) >= reinterpret_cast<int32_t>(0)) {
            eax18 = reinterpret_cast<void*>(1);
        } else {
            eax18 = reinterpret_cast<void*>(0xffffffff);
        }
        v19 = eax18;
        eax20 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esi2->fc) - reinterpret_cast<uint32_t>(esi2->f4));
        if (reinterpret_cast<int32_t>(eax20) >= reinterpret_cast<int32_t>(0)) {
            edi21 = eax20;
        } else {
            edi21 = reinterpret_cast<void*>(-reinterpret_cast<uint32_t>(eax20));
        }
        edi22 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edi21) + reinterpret_cast<uint32_t>(edi21));
        if (reinterpret_cast<int32_t>(eax20) >= reinterpret_cast<int32_t>(0)) {
            eax23 = reinterpret_cast<void*>(1);
        } else {
            eax23 = reinterpret_cast<void*>(0xffffffff);
        }
        v24 = eax23;
        ebx25 = esi2->f0;
        ecx26 = esi2->f4;
        if (reinterpret_cast<int32_t>(edi22) >= reinterpret_cast<int32_t>(v17)) {
            eax14 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(v17) - (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(edi22) - (reinterpret_cast<int32_t>(edi22) >> 31)) >> 1));
            while (ebp27 = g4800cc, ebp28 = g4800d8, *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp28) + (reinterpret_cast<unsigned char>(ebp27) * reinterpret_cast<uint32_t>(ecx26) + reinterpret_cast<uint32_t>(ebx25))) = *reinterpret_cast<signed char*>(&v4), ecx26 != esi2->fc) {
                if (reinterpret_cast<signed char>(eax14) >= reinterpret_cast<signed char>(0)) {
                    eax14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax14) - reinterpret_cast<uint32_t>(edi22));
                    ebx25 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx25) + reinterpret_cast<uint32_t>(v19));
                }
                ecx26 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx26) + reinterpret_cast<uint32_t>(v24));
                eax14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax14) + reinterpret_cast<uint32_t>(v17));
            }
        } else {
            eax14 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(edi22) - (reinterpret_cast<int32_t>(reinterpret_cast<uint32_t>(v17) - (reinterpret_cast<int32_t>(v17) >> 31)) >> 1));
            while (ebp29 = g4800cc, ebp30 = g4800d8, *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(ebp30) + (reinterpret_cast<unsigned char>(ebp29) * reinterpret_cast<uint32_t>(ecx26) + reinterpret_cast<uint32_t>(ebx25))) = *reinterpret_cast<signed char*>(&v4), ebx25 != esi2->f8) {
                if (reinterpret_cast<signed char>(eax14) >= reinterpret_cast<signed char>(0)) {
                    ecx26 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ecx26) + reinterpret_cast<uint32_t>(v24));
                    eax14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax14) - reinterpret_cast<uint32_t>(v17));
                }
                eax14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax14) + reinterpret_cast<uint32_t>(edi22));
                ebx25 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebx25) + reinterpret_cast<uint32_t>(v19));
            }
        }
    }
    return eax14;
}

void** fun_411010(void** ecx);

void** fun_411530(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** eax6;

    eax6 = fun_411010(ecx);
    if (eax6) {
        eax6 = fun_4113b0(ecx);
    }
    return eax6;
}

/* (image base) */
uint32_t* image_base_ = reinterpret_cast<uint32_t*>(0x46c9e0);

struct s16 {
    signed char[4631008] pad4631008;
    int32_t f46a9e0;
};

void fun_411780(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    uint32_t* eax6;
    struct s16* ecx7;
    uint32_t ebx8;
    uint32_t eax9;
    uint32_t* eax10;
    uint32_t* ebx11;
    uint32_t v12;
    uint32_t* edx13;

    eax6 = image_base_;
    ecx7 = reinterpret_cast<struct s16*>((ebx8 >> 19) * 4);
    __asm__("shrd eax, edx, 0x10");
    __asm__("shrd eax, edx, 0x10");
    eax9 = *eax10 * ecx7->f46a9e0;
    __asm__("shrd eax, edx, 0x10");
    ebx11 = image_base_;
    v12 = *eax10 * *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ecx7) + reinterpret_cast<int32_t>(eax6)) - *edx13 * ecx7->f46a9e0;
    __asm__("shrd eax, edx, 0x10");
    *edx13 = eax9 + *edx13 * *reinterpret_cast<uint32_t*>(reinterpret_cast<uint32_t>(ecx7) + reinterpret_cast<int32_t>(ebx11));
    *eax10 = v12;
    return;
}

struct s17 {
    void** f0;
    signed char[3] pad4;
    void** f4;
    signed char[3] pad8;
    void** f8;
    signed char[3] pad12;
    void** fc;
};

void** fun_4117f0(void** ecx, uint32_t a2, void** a3, void** a4) {
    int32_t v5;
    int32_t edx6;
    int32_t esi7;
    int32_t ebx8;
    int32_t ebp9;
    int32_t edx10;
    int32_t edx11;
    struct s17* edi12;
    struct s17* eax13;
    void** v14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    void** v19;
    void** eax20;

    v5 = edx6;
    esi7 = ebx8;
    ebp9 = 0;
    if (!(reinterpret_cast<uint1_t>(edx10 < 0) | reinterpret_cast<uint1_t>(edx11 == 0))) {
        edi12 = eax13;
        do {
            v14 = edi12->f0;
            v15 = edi12->f4;
            if (esi7) {
                __asm__("shrd eax, edx, 0x10");
                v14 = reinterpret_cast<void**>(esi7 * reinterpret_cast<unsigned char>(v14));
                __asm__("shrd eax, edx, 0x10");
                v15 = reinterpret_cast<void**>(esi7 * reinterpret_cast<unsigned char>(v15));
            }
            if (ecx) {
                fun_411780(ecx, v14, v15, v16, v17);
            }
            v18 = edi12->f8;
            v19 = edi12->fc;
            if (esi7) {
                __asm__("shrd eax, edx, 0x10");
                v18 = reinterpret_cast<void**>(esi7 * reinterpret_cast<unsigned char>(v18));
                __asm__("shrd eax, edx, 0x10");
                v19 = reinterpret_cast<void**>(esi7 * reinterpret_cast<unsigned char>(v19));
            }
            if (ecx) {
                fun_411780(ecx, reinterpret_cast<unsigned char>(v14) + reinterpret_cast<unsigned char>(a3), reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(a4), v18, v19);
            }
            edi12 = reinterpret_cast<struct s17*>(reinterpret_cast<int32_t>(edi12) + 16);
            ++ebp9;
            v16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v18) + reinterpret_cast<unsigned char>(a3));
            v17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v19) + reinterpret_cast<unsigned char>(a4));
            eax20 = fun_411530(ecx, reinterpret_cast<unsigned char>(v14) + reinterpret_cast<unsigned char>(a3), reinterpret_cast<unsigned char>(v15) + reinterpret_cast<unsigned char>(a4), v16, v17);
        } while (ebp9 < v5);
    }
    return eax20;
}

void** g482a68 = reinterpret_cast<void**>(0);

int32_t g4669d8 = 0;

void fun_41d4e0();

struct s18 {
    signed char f0;
    signed char f1;
};

void** g487fb4 = reinterpret_cast<void**>(49);

struct s19 {
    signed char f0;
    signed char f1;
};

struct s20 {
    signed char f0;
    signed char f1;
    signed char[1] pad3;
    unsigned char f3;
};

struct s21 {
    signed char[4] pad4;
    signed char f4;
};

void** fun_433a50(void** ecx, void** a2, void** a3, signed char a4) {
    int32_t esi5;
    int32_t edx6;
    void** v7;
    void** edx8;
    void** ebp9;
    int1_t zf10;
    int32_t ecx11;
    int32_t edx12;
    int32_t eax13;
    void* ebx14;
    void* eax15;
    int32_t esi16;
    int32_t esi17;
    void* v18;
    int32_t ebx19;
    void* esi20;
    void* eax21;
    void** v22;
    void** eax23;
    void** v24;
    void** v25;
    void** v26;
    void** edx27;
    void** v28;
    int32_t eax29;
    void** esi30;
    signed char* eax31;
    void** edi32;
    unsigned char* edx33;
    signed char* eax34;
    uint32_t esi35;
    struct s18* eax36;
    void** ebx37;
    void* ecx38;
    signed char* eax39;
    void** edi40;
    struct s19* eax41;
    void* eax42;
    void** dh43;
    void** edi44;
    int32_t esi45;
    void* v46;
    void* esi47;
    void** v48;
    signed char* v49;
    void** v50;
    void** v51;
    struct s20* ebp52;
    int32_t eax53;
    void** edi54;
    signed char* eax55;
    int32_t edx56;
    unsigned char* ebx57;
    void** esi58;
    void** ecx59;
    void* eax60;
    struct s21* ebp61;
    void** edx62;

    esi5 = edx6;
    v7 = ecx;
    edx8 = g482a68;
    if ((edx8 == 1 || (edx8 == 2 || reinterpret_cast<int1_t>(edx8 == 3))) && ((ebp9 = g4775d4, ebp9 == 0xf0) || reinterpret_cast<int1_t>(ebp9 == 0x1e0))) {
        esi5 = esi5 + 20;
    }
    zf10 = reinterpret_cast<int1_t>(g4775d0 == 0x140);
    if (!zf10) {
        ecx11 = g4669d8;
        edx12 = reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v7 + 4));
        eax13 = reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v7 + 6));
        ebx14 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax15) - edx12);
        esi16 = esi5 - eax13;
        if (!ecx11) {
            esi17 = esi16 + esi16;
            v18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx14) + reinterpret_cast<int32_t>(ebx14));
        } else {
            esi17 = esi16 - eax13;
            v18 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(ebx14) - edx12);
        }
        if (!ebx19) {
            fun_41d4e0();
            fun_41d4e0();
        }
        esi20 = reinterpret_cast<void*>(esi17 * reinterpret_cast<unsigned char>(g4775d0));
        eax21 = *reinterpret_cast<void**>(ebx19 * 4 + 0x5f27a0);
        v22 = reinterpret_cast<void**>(0);
        eax23 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v7))));
        v24 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(v18) + (reinterpret_cast<int32_t>(eax21) + reinterpret_cast<uint32_t>(esi20)));
        v25 = eax23;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax23) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax23 == 0))) {
            v26 = v7;
            do {
                eax23 = v26;
                edx27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v7) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax23 + 8)));
                v28 = edx27;
                if (*reinterpret_cast<void***>(edx27) != 0xff) {
                    do {
                        eax29 = 0;
                        esi30 = g4775d0;
                        *reinterpret_cast<void***>(&eax29) = *reinterpret_cast<void***>(v28);
                        eax31 = reinterpret_cast<signed char*>(eax29 * reinterpret_cast<unsigned char>(esi30));
                        edi32 = v24;
                        edx33 = reinterpret_cast<unsigned char*>(v28 + 3);
                        eax34 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax31) + reinterpret_cast<uint32_t>(eax31));
                        esi35 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v28 + 1));
                        while (eax36 = reinterpret_cast<struct s18*>(reinterpret_cast<uint32_t>(eax34) + reinterpret_cast<unsigned char>(edi32)), --esi35, esi35 != 0xffffffff) {
                            ebx37 = g487fb4;
                            eax36->f0 = *reinterpret_cast<signed char*>(*edx33 + reinterpret_cast<unsigned char>(ebx37));
                            ecx38 = reinterpret_cast<void*>(0);
                            *reinterpret_cast<unsigned char*>(&ecx38) = *edx33;
                            eax39 = &eax36->f1;
                            edi40 = g4775d0;
                            *eax39 = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx38) + reinterpret_cast<unsigned char>(ebx37));
                            edi32 = edi40 - 1;
                            eax41 = reinterpret_cast<struct s19*>(reinterpret_cast<uint32_t>(eax39) + reinterpret_cast<unsigned char>(edi32));
                            eax41->f0 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx37) + *edx33);
                            eax34 = &eax41->f1;
                            ++edx33;
                            *eax34 = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ebx37) + *edx33);
                        }
                        eax42 = reinterpret_cast<void*>(0);
                        *reinterpret_cast<void***>(&eax42) = *reinterpret_cast<void***>(v28 + 1);
                        eax23 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(eax42) + reinterpret_cast<unsigned char>(v28) + 4);
                        dh43 = *reinterpret_cast<void***>(eax23);
                        v28 = eax23;
                    } while (!reinterpret_cast<int1_t>(dh43 == 0xff));
                }
                edi44 = v22 + 1;
                v24 = v24 + 2;
                v26 = v26 + 4;
                v22 = edi44;
            } while (reinterpret_cast<signed char>(edi44) < reinterpret_cast<signed char>(v25));
        }
    } else {
        esi45 = esi5 - reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v7 + 6));
        v46 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax15) - reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v7 + 4)));
        if (!ebx19) {
            fun_41d4e0();
            fun_41d4e0();
        }
        esi47 = reinterpret_cast<void*>(esi45 * reinterpret_cast<unsigned char>(g4775d0));
        v48 = reinterpret_cast<void**>(0);
        eax23 = reinterpret_cast<void**>(static_cast<int32_t>(reinterpret_cast<int16_t>(*reinterpret_cast<void***>(v7))));
        v49 = reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(v46) + (reinterpret_cast<int32_t>(*reinterpret_cast<void**>(ebx19 * 4 + 0x5f27a0)) + reinterpret_cast<uint32_t>(esi47)));
        v50 = eax23;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax23) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax23 == 0))) {
            v51 = v7;
            while (1) {
                ebp52 = reinterpret_cast<struct s20*>(reinterpret_cast<unsigned char>(v7) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v51 + 8)));
                if (ebp52->f0 != -1) {
                    do {
                        eax53 = 0;
                        edi54 = g4775d0;
                        *reinterpret_cast<signed char*>(&eax53) = ebp52->f0;
                        eax55 = reinterpret_cast<signed char*>(eax53 * reinterpret_cast<unsigned char>(edi54) + reinterpret_cast<uint32_t>(v49));
                        edx56 = 0;
                        ebx57 = &ebp52->f3;
                        *reinterpret_cast<signed char*>(&edx56) = ebp52->f1;
                        while (--edx56, edx56 != -1) {
                            esi58 = g487fb4;
                            *eax55 = *reinterpret_cast<signed char*>(*ebx57 + reinterpret_cast<unsigned char>(esi58));
                            ecx59 = g4775d0;
                            ++ebx57;
                            eax55 = reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(eax55) + reinterpret_cast<unsigned char>(ecx59));
                        }
                        eax60 = reinterpret_cast<void*>(0);
                        *reinterpret_cast<signed char*>(&eax60) = ebp52->f1;
                        ebp61 = reinterpret_cast<struct s21*>(reinterpret_cast<uint32_t>(ebp52) + reinterpret_cast<uint32_t>(eax60));
                        ebp52 = reinterpret_cast<struct s20*>(&ebp61->f4);
                    } while (ebp61->f4 != -1);
                }
                eax23 = v51 + 4;
                edx62 = v48 + 1;
                v51 = eax23;
                v48 = edx62;
                ++v49;
                if (reinterpret_cast<signed char>(edx62) >= reinterpret_cast<signed char>(v50)) 
                    break;
            }
        }
    }
    return eax23;
}

void fun_444160(uint32_t ecx);

void** fun_442b80(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, ...) {
    uint32_t ebx7;
    void** eax8;

    fun_444160(ebx7);
    return eax8;
}

uint32_t g4845ac = 0xf6004816;

void** g4845b0 = reinterpret_cast<void**>(64);

void** fun_411550(void** ecx) {
    void** ecx2;
    void** eax3;
    void** edi4;
    uint32_t ebx5;
    uint32_t edx6;
    void** esi7;
    void** ebp8;
    void** eax9;
    void* edx10;
    void** ebx11;
    void** v12;
    void** esi13;
    void** v14;
    void** v15;
    void** v16;
    void** edi17;
    void** ebx18;
    uint32_t edx19;
    void** esi20;
    void* ebp21;
    void** eax22;
    void** edx23;
    void** ebx24;
    void** v25;
    void** eax26;
    void** esi27;
    void** v28;
    void** v29;
    void** v30;

    ecx2 = eax3;
    edi4 = g48010c;
    ebx5 = g4845ac;
    edx6 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edi4) - ebx5) % 0x800000);
    if (edx6) {
        edi4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi4) + (0x800000 - edx6));
    }
    esi7 = g48010c;
    ebp8 = g480104;
    eax9 = g480108;
    edx10 = g480100;
    ebx11 = edi4;
    v12 = eax9;
    esi13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi7) + reinterpret_cast<unsigned char>(ebp8));
    v14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax9) + reinterpret_cast<uint32_t>(edx10));
    if (reinterpret_cast<signed char>(edi4) < reinterpret_cast<signed char>(esi13)) {
        do {
            v15 = ebx11;
            v16 = ebx11;
            ebx11 = ebx11 + 0x800000;
            fun_411530(ecx2, v15, v12, v16, v14);
        } while (reinterpret_cast<signed char>(ebx11) < reinterpret_cast<signed char>(esi13));
    }
    edi17 = g480108;
    ebx18 = g4845b0;
    edx19 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edi17) - reinterpret_cast<unsigned char>(ebx18)) % 0x800000);
    if (edx19) {
        edi17 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi17) + (0x800000 - edx19));
    }
    esi20 = g480108;
    ebp21 = g480100;
    eax22 = g48010c;
    edx23 = g480104;
    ebx24 = edi17;
    v25 = eax22;
    eax26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<unsigned char>(edx23));
    esi27 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi20) + reinterpret_cast<uint32_t>(ebp21));
    v28 = eax26;
    if (reinterpret_cast<signed char>(edi17) < reinterpret_cast<signed char>(esi27)) {
        do {
            v29 = ebx24;
            v30 = ebx24;
            ebx24 = ebx24 + 0x800000;
            eax26 = fun_411530(ecx2, v25, v29, v28, v30);
        } while (reinterpret_cast<signed char>(ebx24) < reinterpret_cast<signed char>(esi27));
    }
    return eax26;
}

struct s22 {
    signed char[12] pad12;
    void** fc;
    signed char[3] pad16;
    void** f10;
    signed char[7] pad24;
    struct s22* f18;
    signed char[4] pad32;
    void** f20;
};

void** g4800c0 = reinterpret_cast<void**>(1);

void** fun_4119e0(void** ecx) {
    uint32_t edi2;
    uint32_t eax3;
    void** ebx4;
    void** v5;
    void* ebp6;
    void** ecx7;
    struct s22* esi8;
    void** v9;
    void** ecx10;
    void** v11;
    void** ecx12;
    void** eax13;
    void** esi14;
    void** ecx15;

    edi2 = eax3;
    ebx4 = g4845ec;
    v5 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx4) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx4 == 0))) {
        ebp6 = reinterpret_cast<void*>(0);
        do {
            ecx7 = g4845e0;
            esi8 = *reinterpret_cast<struct s22**>(reinterpret_cast<unsigned char>(ecx7) + reinterpret_cast<uint32_t>(ebp6) + 70);
            if (esi8) {
                do {
                    v9 = esi8->f10;
                    ecx10 = g4800c0;
                    v11 = esi8->fc;
                    ecx12 = esi8->f20;
                    eax13 = fun_4117f0(ecx12, reinterpret_cast<unsigned char>(ecx10) + edi2, v11, v9);
                    esi8 = esi8->f18;
                } while (esi8);
            }
            esi14 = g4845ec;
            ecx15 = v5 + 1;
            ebp6 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(ebp6) + 86);
            v5 = ecx15;
        } while (reinterpret_cast<signed char>(ecx15) < reinterpret_cast<signed char>(esi14));
    }
    return eax13;
}

void** fun_411a60(void** ecx) {
    int32_t v2;
    int32_t esi3;
    void** v4;
    void** edi5;
    void** v6;
    void** ebp7;
    int32_t esi8;
    int32_t ebp9;
    void** eax10;
    void** eax11;
    void** ecx12;
    void** ebx13;
    void** edi14;
    void** edi15;
    uint32_t edx16;
    void** ebx17;
    void** edx18;
    void** ebx19;
    void** ecx20;
    void** edx21;
    void** eax22;
    void** eax23;
    void** ecx24;

    v2 = esi3;
    v4 = edi5;
    v6 = ebp7;
    esi8 = 0;
    ebp9 = 0;
    eax10 = eax11;
    do {
        if (*reinterpret_cast<int32_t*>(esi8 + reinterpret_cast<int32_t>("@")) != -1 && ((ecx12 = g48010c, ebx13 = g459748, edi14 = g4800dc, edi15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi14) + (reinterpret_cast<int32_t>((*reinterpret_cast<int32_t*>(esi8 + reinterpret_cast<int32_t>("@")) - reinterpret_cast<unsigned char>(ecx12)) * reinterpret_cast<unsigned char>(ebx13)) >> 16)), edx16 = *reinterpret_cast<int32_t*>(esi8 + 0x48001c) - reinterpret_cast<unsigned char>(g480108), ebx17 = g459748, edx18 = g4800c8, eax10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx16 * reinterpret_cast<unsigned char>(ebx17)) >> 16), ebx19 = g4800e0, ecx20 = g4800dc, edx21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx18) - reinterpret_cast<unsigned char>(eax10) + reinterpret_cast<unsigned char>(ebx19)), reinterpret_cast<signed char>(edi15) >= reinterpret_cast<signed char>(ecx20)) && ((eax22 = g4800cc, eax10 = eax22 - 5, reinterpret_cast<signed char>(edi15) <= reinterpret_cast<signed char>(eax10)) && (reinterpret_cast<signed char>(edx21) >= reinterpret_cast<signed char>(ebx19) && (eax23 = g4800c8, eax10 = eax23 - 6, reinterpret_cast<signed char>(edx21) <= reinterpret_cast<signed char>(eax10)))))) {
            ecx24 = *reinterpret_cast<void***>(ebp9 + reinterpret_cast<int32_t>("wed executable\r\n$"));
            eax10 = fun_433a50(ecx24, v6, v4, *reinterpret_cast<signed char*>(&v2));
        }
        ebp9 = ebp9 + 4;
        esi8 = esi8 + 8;
    } while (ebp9 != 40);
    return eax10;
}

void fun_433970(void** ecx) {
    fun_41d4e0();
    fun_41d4e0();
    return;
}

int32_t fun_4439f9(void** ecx);

int32_t fun_4443c2(void** ecx);

void** g60ae74 = reinterpret_cast<void**>(0);

void** g60ae70 = reinterpret_cast<void**>(0);

void** fun_434640(void** ecx) {
    void** edx2;
    void** ebx3;
    void** v4;
    void** esi5;
    void** ecx6;
    void** v7;
    void** eax8;
    void** edx9;
    void** eax10;

    fun_4439f9(ecx);
    fun_4443c2(ecx);
    edx2 = g60ae74;
    ebx3 = v4;
    esi5 = g60ae70;
    ecx6 = v7;
    eax8 = esi5 + reinterpret_cast<uint32_t>(edx2 + reinterpret_cast<unsigned char>(edx2) * 4) * 4;
    do {
        edx9 = eax8;
        eax8 = eax8 - 20;
        if (edx9 == esi5) 
            break;
    } while (ebx3 != *reinterpret_cast<void***>(eax8) || ecx6 != *reinterpret_cast<void***>(eax8 + 4));
    goto addr_4346a0_4;
    eax10 = reinterpret_cast<void**>(0xffffffff);
    addr_4346b7_6:
    g60ae70 = esi5;
    return eax10;
    addr_4346a0_4:
    eax10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax8) - reinterpret_cast<unsigned char>(esi5)) / 20);
    goto addr_4346b7_6;
}

void** g482a78 = reinterpret_cast<void**>(2);

struct s23 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t g482a3c = 0xc35b595a;

void** g482a8c = reinterpret_cast<void**>(0);

void** g482a64 = reinterpret_cast<void**>(0xc3);

void** fun_419290(void** ecx);

void** fun_4108e0(void** ecx, void** a2);

int32_t fun_4159c0(void** ecx);

void fun_41cfb0(void** ecx);

void** g482a28 = reinterpret_cast<void**>(93);

struct s24 {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
};

/* (image base) */
struct s24* image_base_ = reinterpret_cast<struct s24*>(0x481f24);

void** g4835c8 = reinterpret_cast<void**>(0xe8);

void** g4829b8 = reinterpret_cast<void**>(69);

void** g4829b4 = reinterpret_cast<void**>(0xc3);

int32_t fun_416b70(void** ecx, void** a2, void** a3, void** a4, void** a5) {
    void** ebx6;
    void** esi7;
    int1_t zf8;
    int32_t* eax9;
    struct s23* eax10;
    int1_t zf11;
    int1_t zf12;
    int1_t zf13;
    int1_t zf14;
    int1_t zf15;
    int1_t zf16;
    void** edi17;
    void** eax18;
    void** eax19;
    void** ebp20;
    void** edi21;
    void** esi22;
    void** edx23;
    void** ebx24;
    int32_t eax25;
    void** eax26;
    int1_t zf27;
    int32_t eax28;
    void** esi29;
    void** ebx30;
    void** edi31;
    int32_t eax32;
    struct s24* eax33;
    void** edi34;
    unsigned char* edi35;
    uint32_t edx36;

    ebx6 = g482a78;
    esi7 = g482a7c;
    zf8 = g482a68 == 0;
    if (!zf8 || (*eax9 || (eax10->f4 != 0xd8 || (zf11 = g482a3c == 0, zf11) && (zf12 = g482a6c == 0, !zf12)))) {
        zf13 = g482a8c == 0;
        if (!zf13 || ((zf14 = g482a3c == 0, !zf14) || (zf15 = g482a64 == 0, zf15) && (zf16 = reinterpret_cast<int1_t>(g482a68 == 3), !zf16))) {
            edi17 = g482a68;
            g482a78 = ebx6;
            g482a7c = esi7;
            if (!edi17) {
                eax19 = fun_419290(eax18);
                if (!eax19) {
                    eax25 = fun_432320(eax18, ebp20, edi21, esi22, edx23, ecx, ebx24, __return_address(), a2, a3, a4, a5);
                    if (!eax25) {
                        eax26 = fun_4108e0(eax18, ebp20);
                        if (eax26) {
                            return 1;
                        }
                    } else {
                        return 1;
                    }
                } else {
                    return 1;
                }
            }
            zf27 = reinterpret_cast<int1_t>(g482a68 == 2);
            if (zf27 && (eax28 = fun_4159c0(eax18), !!eax28)) {
                return 1;
            }
            esi29 = g482a7c;
            ebx30 = g482a78;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax18)) <= reinterpret_cast<unsigned char>(3)) 
                goto addr_416cef_13;
        } else {
            g482a78 = ebx6;
            edi31 = *reinterpret_cast<void***>(eax18);
            g482a7c = esi7;
            if (!edi31 || (reinterpret_cast<int1_t>(edi31 == 2) && *reinterpret_cast<void***>(eax18 + 4) || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax18) == 3) && *reinterpret_cast<void***>(eax18 + 4))) {
                fun_41cfb0(eax18);
                return 1;
            }
        }
    } else {
        do {
            ++ebx6;
            if (reinterpret_cast<int1_t>(ebx6 == 4)) {
                ebx6 = reinterpret_cast<void**>(0);
            }
        } while (!*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ebx6) * 4 + 0x482978) && ebx6 != esi7);
        eax32 = 1;
        g482a78 = ebx6;
        g482a7c = esi7;
        goto addr_416d6e_21;
    }
    addr_416d60_22:
    g482a78 = ebx30;
    g482a7c = esi29;
    eax32 = 0;
    addr_416d6e_21:
    return eax32;
    addr_416cef_13:
    switch (*reinterpret_cast<void***>(eax18)) {
    case 0:
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(eax18 + 4) == 0xff)) {
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax18 + 4)) < reinterpret_cast<signed char>(0x100)) {
                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax18 + 4)) * 4 + 0x481f30) = 1;
            }
            g482a78 = ebx30;
            g482a7c = esi29;
            return 1;
        } else {
            g482a28 = reinterpret_cast<void**>(1);
            return 1;
        }
    case 1:
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(eax18 + 4)) < reinterpret_cast<signed char>(0x100)) {
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax18 + 4)) * 4 + 0x481f30) = 0;
            goto addr_416d60_22;
        }
    case 2:
        eax33 = image_base_;
        eax33->f0 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax18 + 4)) & 1;
        eax33->f4 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax18 + 4)) & 2;
        edi34 = g4835c8;
        eax33->f8 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax18 + 4)) & 4;
        edi35 = reinterpret_cast<unsigned char*>(edi34 + 5);
        edx36 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax18 + 12)) * reinterpret_cast<uint32_t>(edi35);
        g4829b8 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(eax18 + 8)) * reinterpret_cast<uint32_t>(edi35)) / 10);
        g4829b4 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(edx36) / 10);
    case 3:
        return 1;
    }
}

int32_t g60b260 = 0;

void** g4775d8 = reinterpret_cast<void**>(64);

void** g4775dc = reinterpret_cast<void**>(0xc8);

void** g4775e4 = reinterpret_cast<void**>(1);

int32_t fun_438b50(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29);

int32_t wsprintfA = 0x220de6;

void* g491b78 = reinterpret_cast<void*>(0x92);

void** g48ae94 = reinterpret_cast<void**>(0xbf);

void** g48ae98 = reinterpret_cast<void**>(89);

int32_t g491b74 = 0x8d000000;

int32_t g491b94 = 1;

void** g48aea4 = reinterpret_cast<void**>(0xc1);

uint32_t g4925c0 = 0x48d0048;

uint32_t g4925bc = 0x2a7c158b;

void* g4925b8 = reinterpret_cast<void*>(0x4a740000);

uint32_t g4925b0 = 0x835374ff;

void* g4925ac = reinterpret_cast<void*>(0x85608274);

int32_t g491b70 = 0x808dc3;

void** g491b8c = reinterpret_cast<void**>(0xc3);

void fun_42d3c0(int32_t ecx);

int32_t g491b88 = 0x5bc03104;

void fun_440a16();

void** g491b90 = reinterpret_cast<void**>(0x89);

void** g491b84 = reinterpret_cast<void**>(59);

int32_t g491b7c = 0x408d00;

void fun_42d640(void** ecx);

void fun_42dc40(void** ecx);

uint32_t g5f12e0 = 0;

void** g5f12e8 = reinterpret_cast<void**>(0);

void** fun_444285();

void** fun_42de80(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16) {
    void** v17;
    void** ebp18;
    int1_t zf19;
    void** eax20;
    void** eax21;
    void** eax22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    void** v28;
    void** edi29;
    void** esi30;
    void** edx31;
    void** ebx32;
    void** ecx33;
    void** esi34;
    void** edx35;
    void* ebp36;
    void** edx37;
    void** eax38;
    void** edx39;
    void** edx40;
    void** eax41;
    void** eax42;
    void** ecx43;
    void** esi44;
    void** v45;
    void** v46;
    void** v47;
    void** v48;
    void** v49;
    int32_t eax50;
    void** eax51;
    void** edx52;
    void** edx53;
    uint32_t eax54;
    uint32_t eax55;
    void** ebp56;
    void* eax57;
    void** eax58;
    void** eax59;
    void** ebx60;
    void** v61;
    void** v62;
    void** v63;
    void** v64;
    void** v65;
    void** v66;
    void** edx67;
    void** ebx68;
    void** edx69;
    int16_t ax70;
    void** ebx71;
    void** edx72;
    void** esi73;
    void** ebx74;
    int32_t edi75;
    void** v76;
    void** v77;
    void** v78;
    void** v79;
    void** eax80;
    void** ebp81;
    void** eax82;
    void** edi83;
    void** ecx84;
    void** v85;
    void** v86;
    void** v87;
    void** v88;
    void** eax89;
    void** eax90;
    unsigned char cl91;
    void** v92;
    void** eax93;
    void** v94;
    void** v95;
    void** v96;
    void** v97;
    void* edx98;
    void** ebx99;
    int32_t esi100;
    void** edi101;
    void** ecx102;
    int32_t eax103;
    int32_t edx104;
    void** edx105;
    void** ecx106;
    void** esi107;
    void** eax108;

    v17 = ebp18;
    zf19 = g60b260 == 0;
    if (!zf19) {
        eax20 = g4775d8;
        g4775d0 = eax20;
        eax21 = g4775dc;
        g4775d4 = eax21;
        eax22 = g4775e4;
        g60b260 = 0;
        g4775e0 = eax22;
        fun_438b50(ecx, v23, v24, v25, v26, v27, v28, v17, edi29, esi30, edx31, ecx, ebx32, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
        ecx33 = g4775d4;
        esi34 = g4775d0;
        wsprintfA(0x4925e8, "Switching to %3d X %3d", esi34, ecx33);
        edx35 = g482a7c;
        *reinterpret_cast<int32_t*>((reinterpret_cast<uint32_t>(edx35 + reinterpret_cast<unsigned char>(edx35) * 8) * 4 - reinterpret_cast<unsigned char>(edx35)) * 8 + 0x4825f0) = 0x4925e8;
    }
    ebp36 = g491b78;
    if (!reinterpret_cast<int1_t>(ebp36 == 11)) {
        edx37 = g4775d0;
        eax38 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edx37) * reinterpret_cast<uint32_t>(ebp36)) / 10);
        edx39 = g4775d0;
        g48ae94 = eax38;
        *reinterpret_cast<unsigned char*>(&eax38) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edx39 == 0x140));
        edx40 = g4775d4;
        eax41 = reinterpret_cast<void**>(reinterpret_cast<int32_t>((reinterpret_cast<unsigned char>(edx40) - ((reinterpret_cast<unsigned char>(eax38) & 0xff) + 1 << 5)) * reinterpret_cast<uint32_t>(ebp36)) / 10);
        *reinterpret_cast<unsigned char*>(&eax41) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax41) & 0xf8);
    } else {
        eax42 = g4775d0;
        g48ae94 = eax42;
        eax41 = g4775d4;
    }
    g48ae98 = eax41;
    ecx43 = g48ae98;
    esi44 = g48ae94;
    fun_437a90(ecx43, "R_ExecuteSetViewSize: Switching to %3d X %3d", esi44, ecx43, v45, v46, v47, v48, v49);
    eax50 = g491b74;
    g491b94 = eax50;
    eax51 = g48ae94;
    *reinterpret_cast<unsigned char*>(&ecx43) = *reinterpret_cast<unsigned char*>(&g491b94);
    edx52 = g48ae98;
    g48aea4 = reinterpret_cast<void**>(reinterpret_cast<signed char>(eax51) >> *reinterpret_cast<unsigned char*>(&ecx43));
    edx53 = g48aea4;
    g4925c0 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edx52) - (reinterpret_cast<signed char>(edx52) >> 31)) >> 1);
    eax54 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edx53) - (reinterpret_cast<signed char>(edx53) >> 31)) >> 1);
    g4925bc = eax54;
    g4925b8 = reinterpret_cast<void*>(eax54 << 16);
    eax55 = g4925c0;
    ebp56 = g4775d0;
    g4925b0 = eax55 << 16;
    eax57 = g4925b8;
    g4925ac = eax57;
    eax58 = g48aea4;
    g491b70 = 0;
    if (reinterpret_cast<signed char>(eax58) > reinterpret_cast<signed char>(ebp56)) {
        fun_43bd40(ecx43, "viewwidth %d SCREENWIDTH %d BAD!", eax58, ebp56);
    }
    eax59 = g48ae98;
    ebx60 = g4775d4;
    if (reinterpret_cast<signed char>(eax59) > reinterpret_cast<signed char>(ebx60)) {
        fun_43bd40(ecx43, "viewheight %d SCREENHEIGHT %d BAD!", eax59, ebx60);
    }
    g491b8c = reinterpret_cast<void**>(fun_42d3c0);
    g491b88 = reinterpret_cast<int32_t>(fun_440a16);
    g491b90 = reinterpret_cast<void**>(0x4409a4);
    g491b84 = reinterpret_cast<void**>(0x4409a4);
    g491b7c = 0x42d490;
    fun_42d640(ecx43);
    fun_42dc40(ecx43);
    fun_437a90(ecx43, "R_ExecuteSetViewSize: called inits", v61, v62, v63, v64, v65, v66, v17);
    edx67 = g48aea4;
    g5f12e0 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(edx67) << 16) / 0x104);
    ebx68 = g48aea4;
    g5f12e8 = reinterpret_cast<void**>(0x1040000 / reinterpret_cast<signed char>(ebx68));
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx68) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx68 == 0))) {
        edx69 = g48aea4;
        ax70 = *reinterpret_cast<int16_t*>(&g48ae98);
        ebx71 = reinterpret_cast<void**>(0);
        edx72 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edx69) + reinterpret_cast<unsigned char>(edx69));
        do {
            ebx71 = ebx71 + 2;
            *reinterpret_cast<int16_t*>(ebx71 + 0x5f0a66) = ax70;
        } while (reinterpret_cast<signed char>(ebx71) < reinterpret_cast<signed char>(edx72));
    }
    esi73 = g48ae98;
    ebx74 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi73) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi73 == 0))) {
        edi75 = 0;
        do {
            fun_444285();
            *reinterpret_cast<unsigned char*>(&ecx43) = *reinterpret_cast<unsigned char*>(&g491b94);
            edi75 = edi75 + 4;
            ++ebx74;
            eax80 = fun_411d60(ecx43, v76, v77, v78, v79);
            ebp81 = g48ae98;
            *reinterpret_cast<void***>(edi75 + 0x5d9f2c) = eax80;
        } while (reinterpret_cast<signed char>(ebx74) < reinterpret_cast<signed char>(ebp81));
    }
    eax82 = g48aea4;
    edi83 = reinterpret_cast<void**>(0);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax82) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax82 == 0))) {
        ecx84 = reinterpret_cast<void**>(0);
        do {
            ecx84 = ecx84 + 4;
            fun_444285();
            ++edi83;
            eax89 = fun_411d60(ecx84, v85, v86, v87, v88);
            edx72 = g48aea4;
            *reinterpret_cast<void***>(ecx84 + 0x5d8b2c) = eax89;
        } while (reinterpret_cast<signed char>(edi83) < reinterpret_cast<signed char>(edx72));
    }
    eax90 = g48aea4;
    cl91 = *reinterpret_cast<unsigned char*>(&g491b94);
    v92 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax90) << cl91);
    eax93 = g4775d0;
    v94 = eax93;
    v95 = reinterpret_cast<void**>(0);
    v96 = reinterpret_cast<void**>(0x3c0);
    v97 = reinterpret_cast<void**>(0xc0);
    do {
        edx98 = reinterpret_cast<void*>(reinterpret_cast<signed char>(v96) >> 31 << 4);
        ebx99 = reinterpret_cast<void**>(0);
        esi100 = reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(v96) - (reinterpret_cast<int32_t>(edx98) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(v96) < reinterpret_cast<unsigned char>(reinterpret_cast<int32_t>(edx98) + __intrinsic())))) >> 4;
        edi101 = v97;
        ecx102 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(v95) * 0xc0);
        do {
            eax103 = reinterpret_cast<signed char>(ebx99) / reinterpret_cast<signed char>(v92);
            edx104 = esi100 - (eax103 - (eax103 >> 31) >> 1);
            if (edx104 < 0) {
                edx104 = 0;
            }
            if (edx104 >= 32) {
                edx104 = 31;
            }
            edx105 = g487fb4;
            ecx102 = ecx102 + 4;
            *reinterpret_cast<void****>(ecx102 + 0x48aeac) = reinterpret_cast<void***>((edx104 << 8) + reinterpret_cast<unsigned char>(edx105));
            ebx99 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ebx99) + reinterpret_cast<unsigned char>(v94));
        } while (ecx102 != edi101);
        ecx106 = v96 - 64;
        esi107 = v95 + 1;
        v97 = v97 + 0xc0;
        v96 = ecx106;
        v95 = esi107;
    } while (reinterpret_cast<signed char>(esi107) < reinterpret_cast<signed char>(16));
    eax108 = fun_437a90(ecx106, "R_ExecuteSetViewSize: bye", 0, v97, v96, v95, v92, v94, v17);
    return eax108;
}

void*** g5f27a8 = reinterpret_cast<void***>(0);

void*** g481de0 = reinterpret_cast<void***>(0x57565153);

void** fun_43c950(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8);

int32_t fun_4153a0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7) {
    void*** eax8;

    eax8 = g5f27a8;
    g481de0 = eax8;
    fun_43c950(ecx, __return_address(), a2, a3, a4, a5, a6, a7);
    return 0;
}

void fun_418a40(void** ecx);

void fun_418c20(void** ecx);

struct s25 {
    signed char[4754624] pad4754624;
    struct s25* f488cc0;
};

struct s25* g48ae9c = reinterpret_cast<struct s25*>(0xc0);

int32_t g4830e5 = 0x7cc839fc;

struct s26 {
    signed char[101] pad101;
    int32_t f65;
};

void** fun_43f590(struct s26* ecx);

void** g459ac8 = reinterpret_cast<void**>(1);

void** fun_418ff0(void** ecx) {
    void** eax2;
    int1_t zf3;
    int1_t zf4;
    int1_t zf5;
    void** edx6;
    int32_t edi7;

    fun_418a40(ecx);
    fun_418c20(ecx);
    eax2 = reinterpret_cast<void**>(0x483080);
    zf3 = g45973c == 0;
    if (zf3 && ((zf4 = g48ae9c == 0, !zf4) && (zf5 = g4830e5 == 0, !zf5))) {
        eax2 = fun_43f590(0x483080);
    }
    edx6 = g45973c;
    edi7 = g4830e5;
    g459ac8 = edx6;
    if (edi7) {
        g4830e5 = edi7 - 1;
    }
    return eax2;
}

uint32_t g459734 = 0;

void** fun_411640(void** ecx);

void** fun_4118f0(void** ecx);

int32_t g459730 = 0;

void fun_411b50(void** ecx, void** a2) {
    int1_t zf3;
    void** edx4;
    void** ebx5;
    int1_t zf6;
    int1_t zf7;
    void** eax8;
    void** edx9;
    uint32_t edx10;
    void*** edx11;
    void** ecx12;

    zf3 = g45973c == 0;
    if (!zf3) {
        fun_442b80(ecx, edx4, ecx, ebx5, __return_address(), a2);
        zf6 = g459734 == 0;
        if (!zf6) {
            fun_411550(ecx);
        }
        fun_411640(ecx);
        fun_4118f0(ecx);
        zf7 = g459730 == 2;
        if (zf7) {
            fun_4119e0(ecx);
        }
        eax8 = g4800c8;
        edx9 = g4800cc;
        edx10 = reinterpret_cast<unsigned char>(edx9) * reinterpret_cast<unsigned char>(eax8 + 1);
        edx11 = g4800d8;
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(edx11) + (reinterpret_cast<int32_t>(edx10 - (reinterpret_cast<int32_t>(edx10) >> 31)) >> 1)) = 96;
        fun_411a60(ecx);
        ecx12 = g4800c8;
        fun_433970(ecx12);
    }
    return;
}

void fun_42e350(void** ecx);

void fun_42b790(void** ecx);

void fun_42b640();

void fun_42e690(void** ecx);

void fun_42fef0();

void** fun_413f10(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40, void** a41, void** a42, void** a43, void** a44, void** a45, void** a46, void** a47);

void** fun_43c050(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16);

void fun_42bb50(void** ecx);

void** fun_43bb40(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16);

void** fun_42e980(void** ecx);

void** fun_4309f0(void** ecx);

void** fun_42e450(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20, void** a21, void** a22, void** a23, void** a24, void** a25, void** a26, void** a27, void** a28, void** a29, void** a30, void** a31, void** a32, void** a33, void** a34, void** a35, void** a36, void** a37, void** a38, void** a39, void** a40, void** a41, void** a42, void** a43, void** a44) {
    void** edx45;
    void** eax46;
    void** eax47;
    void** eax48;
    void** eax49;
    void** eax50;
    void** eax51;
    void** eax52;

    fun_42e350(ecx);
    fun_42b790(ecx);
    fun_42b640();
    fun_42e690(ecx);
    fun_42fef0();
    fun_413f10(ecx, edx45, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44);
    eax46 = fun_43c050(ecx, edx45, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    if (eax46) {
        fun_42bb50(ecx);
        fun_43bb40(ecx, edx45, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        fun_413f10(ecx, edx45, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44);
        eax47 = fun_43c050(ecx, edx45, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        if (eax47) {
            fun_42e980(ecx);
            fun_43bb40(ecx, edx45, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
            fun_413f10(ecx, edx45, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44);
            eax48 = fun_43c050(ecx, edx45, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
            if (eax48) {
                fun_4309f0(ecx);
                fun_43bb40(ecx, edx45, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
                eax49 = fun_413f10(ecx, edx45, ecx, __return_address(), a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44);
                return eax49;
            } else {
                eax50 = fun_437a90(ecx, "R_RenderPlayerView3: megalock failed", edx45, ecx, __return_address(), a2, a3, a4, a5);
                return eax50;
            }
        } else {
            eax51 = fun_437a90(ecx, "R_RenderPlayerView2: megalock failed", edx45, ecx, __return_address(), a2, a3, a4, a5);
            return eax51;
        }
    } else {
        eax52 = fun_437a90(ecx, "R_RenderPlayerView1: megalock failed", edx45, ecx, __return_address(), a2, a3, a4, a5);
        return eax52;
    }
}

void** fun_4189f0(void** ecx);

void** fun_418c00(void** ecx);

struct s27 {
    signed char[2] pad2;
    int16_t f2;
};

struct s27* g482f08 = reinterpret_cast<struct s27*>(0x4ba);

void** g483084 = reinterpret_cast<void**>(0x89);

void** fun_418730(void** ecx);

void** fun_418f70(void** ecx) {
    void** edx2;
    struct s27* eax3;
    void** eax4;
    struct s27* eax5;
    int1_t zf6;

    fun_4189f0(ecx);
    fun_418c00(ecx);
    edx2 = g4775d4;
    if (edx2 == 0xf0 || reinterpret_cast<int1_t>(edx2 == 0x1e0)) {
        eax3 = g482f08;
        eax4 = reinterpret_cast<void**>(0xa7 - eax3->f2 + 40);
        g483084 = eax4;
    } else {
        eax5 = g482f08;
        eax4 = reinterpret_cast<void**>(static_cast<int32_t>(eax5->f2));
        g483084 = reinterpret_cast<void**>(0xa7 - reinterpret_cast<unsigned char>(eax4));
    }
    zf6 = g45973c == 0;
    if (!zf6) {
        eax4 = fun_418730(ecx);
    }
    return eax4;
}

void** fun_4346d0(void** ecx, void** a2, void** a3);

void** fun_42cf20(void** ecx, void** a2);

void** fun_4348a0(void** ecx, void** a2, void** a3);

void** fun_42ce70(void** ecx, void** a2) {
    int32_t v3;
    int32_t ebx4;
    int32_t eax5;
    void** edx6;
    int1_t zf7;
    void** eax8;

    v3 = ebx4;
    if (!eax5) {
        fun_4346d0(ecx, edx6, *reinterpret_cast<void***>(&v3));
    }
    zf7 = reinterpret_cast<int1_t>(g4775e0 == 1);
    if (zf7) {
        fun_42cf20(ecx, edx6);
    }
    eax8 = fun_4348a0(ecx, edx6, *reinterpret_cast<void***>(&v3));
    return eax8;
}

void** g5f27b8 = reinterpret_cast<void**>(0);

struct s28 {
    signed char f0;
    signed char f1;
    signed char f2;
};

int32_t GetDC = 0x220b74;

int32_t GetSystemPaletteEntries = 0x2209de;

int32_t ReleaseDC = 0x220cd0;

void** g60b27c = reinterpret_cast<void**>(0);

void** fun_437be0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20);

void** g60b268 = reinterpret_cast<void**>(0);

void** fun_43c290(void** ecx, void** a2) {
    int32_t v3;
    int32_t edi4;
    void* esp5;
    void** ebx6;
    void* ebx7;
    struct s28* eax8;
    struct s28* eax9;
    void* edx10;
    void* ecx11;
    void* ecx12;
    void** ecx13;
    int1_t zf14;
    int32_t ebx15;
    void** ecx16;
    int32_t eax17;
    void* esp18;
    void** esp19;
    int32_t eax20;
    void** esi21;
    void** edi22;
    void* esp23;
    void** v24;
    void** eax25;
    void** edx26;
    void** eax27;
    void* esp28;
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
    void** ebp43;
    void** eax44;
    void** edx45;
    void** eax46;
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
    int1_t zf59;
    void** eax60;
    void* v61;
    void** edx62;
    void** v63;
    void** eax64;
    int32_t v65;
    void** eax66;
    void** ebx67;
    void** eax68;
    int32_t v69;
    void** eax70;
    void** edx71;
    void** eax72;

    v3 = edi4;
    esp5 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x404);
    ebx6 = g5f27b8;
    ebx7 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(ebx6) << 8);
    eax8 = eax9;
    edx10 = reinterpret_cast<void*>(0);
    do {
        ecx11 = reinterpret_cast<void*>(0);
        *reinterpret_cast<signed char*>(&ecx11) = eax8->f0;
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esp5) + reinterpret_cast<uint32_t>(edx10)) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx11) + reinterpret_cast<uint32_t>(ebx7) + 0x4769e4);
        ecx12 = reinterpret_cast<void*>(0);
        *reinterpret_cast<signed char*>(&ecx12) = eax8->f1;
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esp5) + reinterpret_cast<uint32_t>(edx10) + 1) = *reinterpret_cast<signed char*>(reinterpret_cast<int32_t>(ecx12) + reinterpret_cast<uint32_t>(ebx7) + 0x4769e4);
        ecx13 = reinterpret_cast<void**>(0);
        *reinterpret_cast<signed char*>(&ecx13) = eax8->f2;
        edx10 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(edx10) + 4);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esp5) + reinterpret_cast<uint32_t>(edx10) - 2) = *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(ecx13) + reinterpret_cast<uint32_t>(ebx7) + 0x4769e4);
        *reinterpret_cast<signed char*>(&ecx13) = 1;
        eax8 = reinterpret_cast<struct s28*>(&eax8->f1 + 1 + 1);
        *reinterpret_cast<signed char*>(reinterpret_cast<uint32_t>(esp5) + reinterpret_cast<uint32_t>(edx10) - 1) = 1;
    } while (!reinterpret_cast<int1_t>(edx10 == 0x400));
    zf14 = g4775e0 == 0;
    if (!zf14) {
        ebx15 = 10;
    } else {
        ebx15 = 0;
    }
    if (ebx15) {
        ecx16 = g5f22d0;
        eax17 = reinterpret_cast<int32_t>(GetDC(ecx16));
        esp18 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp5) - 4 - 4 + 4);
        GetSystemPaletteEntries(eax17, 0, ebx15, esp18, ecx16);
        esp19 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp18) - 4 - 4 - 4 - 4 - 4 + 4);
        eax20 = 0x100 - ebx15;
        ecx13 = esp19;
        GetSystemPaletteEntries(eax17, eax20, ebx15, ecx13 + eax20 * 4, eax17, 0, ebx15, esp18, ecx16);
        esi21 = g5f22d0;
        ReleaseDC(esi21, eax17, eax17, eax20, ebx15, ecx13 + eax20 * 4, eax17, 0, ebx15, esp18, ecx16);
        esp5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp19 - 4) - 4 - 4 - 4 - 4 + 4 - 4 - 4 - 4 + 4);
    }
    edi22 = g60b27c;
    if (!edi22) {
        esp23 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp5) - 4 - 4);
        v24 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(esp23) + 8);
        eax25 = g60b264;
        edx26 = *reinterpret_cast<void***>(eax25);
        eax27 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx26 + 20)(eax25, 68, v24, 0x60b27c, edi22));
        esp28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp23) - 4 - 4 - 4 - 4 + 4);
        g60b3a0 = eax27;
        if (eax27) {
            fun_437be0(ecx13, eax25, 68, v24, 0x60b27c, edi22, v29, v30, v31, v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42);
            esp28 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp28) - 4 + 4);
        }
        ebp43 = g60b27c;
        eax44 = g60b268;
        edx45 = *reinterpret_cast<void***>(eax44);
        eax46 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx45 + 0x7c)(eax44, ebp43, eax25, 68, v24, 0x60b27c, edi22));
        esp5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp28) - 4 - 4 - 4 + 4);
        g60b3a0 = eax46;
        if (eax46) {
            fun_437be0(ecx13, eax44, ebp43, eax25, 68, v24, 0x60b27c, edi22, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58);
            esp5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp5) - 4 + 4);
        }
    }
    zf59 = g60b264 == 0;
    if (!zf59) {
        do {
            eax60 = g60b264;
            v61 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp5) + 0x400);
            edx62 = *reinterpret_cast<void***>(eax60);
            v63 = eax60;
            eax64 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx62 + 68)(v63, v61));
            esp5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp5) - 4 - 4 - 4 + 4);
            g60b3a0 = eax64;
            if (v65) 
                break;
        } while (!eax64);
        do {
            eax66 = g60b264;
            ebx67 = *reinterpret_cast<void***>(eax66);
            eax68 = reinterpret_cast<void**>(*reinterpret_cast<void***>(ebx67 + 68)(eax66, reinterpret_cast<uint32_t>(esp5) + 0x400, v63, v61));
            esp5 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(esp5) - 4 - 4 - 4 + 4);
            g60b3a0 = eax68;
            if (!v69) 
                break;
        } while (!eax68);
    }
    eax70 = g60b27c;
    edx71 = *reinterpret_cast<void***>(eax70);
    eax72 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx71 + 24)(eax70, 0, 0, 0x100, esp5));
    g60b3a0 = eax72;
    goto v3;
}

void** fun_434890(void** ecx, void** a2, void** a3, ...);

struct s29 {
    void** f0;
    signed char[16383] pad16384;
    void** f4000;
};

struct s29* g5f27a4 = reinterpret_cast<struct s29*>(0);

void** g60b278 = reinterpret_cast<void**>(0);

int32_t g60b7c4 = 0;

void*** g60b7e8 = reinterpret_cast<void***>(0);

void* g60b7d4 = reinterpret_cast<void*>(0);

void** fun_43eed0(void** ecx, void** a2, void** a3, void** a4, void** a5, void** a6, void** a7, void** a8, void** a9, void** a10, void** a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18, void** a19, void** a20) {
    int32_t v21;
    int32_t edi22;
    void** eax23;
    void** edx24;
    int1_t zf25;
    int1_t zf26;
    void** v27;
    void** v28;
    void** eax29;
    void*** esp30;
    struct s29* ebx31;
    void** esi32;
    void** edx33;
    void* eax34;
    void** ecx35;
    void*** v36;
    void** v37;
    void** eax38;
    int32_t ebp39;
    uint32_t v40;
    void** eax41;
    void* edx42;
    void*** esi43;
    struct s29* edi44;
    int1_t zf45;
    void** ecx46;
    struct s29* edi47;
    uint32_t ecx48;
    uint32_t eax49;
    int1_t zf50;
    int1_t zf51;
    void** eax52;
    int1_t zf53;
    void** v54;
    void** v55;
    void** eax56;
    int32_t esi57;
    void** edi58;
    void** eax59;
    void** v60;
    void** v61;
    signed char v62;
    void** v63;
    void** v64;
    void** eax65;
    int32_t esi66;
    void** edi67;
    void** eax68;
    void** v69;
    void** v70;
    signed char v71;
    void** v72;
    void** v73;
    void** eax74;
    int32_t esi75;
    void** edi76;
    void** eax77;
    void** v78;
    void** v79;
    signed char v80;
    void** v81;
    void** v82;
    void** eax83;
    int32_t esi84;
    void** edi85;
    void** eax86;
    void** v87;
    void** v88;
    signed char v89;
    void** v90;
    void** v91;
    void** eax92;
    void** v93;
    void** v94;
    signed char v95;
    void** v96;
    void** v97;
    void** eax98;
    void** v99;
    void** v100;
    signed char v101;
    void** v102;
    void** v103;
    void** eax104;
    void** v105;
    void** v106;
    signed char v107;
    void** v108;
    void** v109;
    void** eax110;
    void** ecx111;
    void** v112;
    void** v113;
    void** eax114;
    void** ebp115;
    void** eax116;
    void** esi117;
    void** v118;
    void** v119;
    signed char v120;
    void** eax121;
    void** v122;
    void** v123;
    void** eax124;
    void** esi125;
    void** edx126;
    void** edi127;
    void** v128;
    void** v129;
    signed char v130;
    int1_t less131;
    void** v132;
    void** v133;
    void** eax134;
    void** esi135;
    void** ebp136;
    void** edi137;
    void** v138;
    void** v139;
    signed char v140;
    void** eax141;
    void** v142;
    void** v143;
    void** eax144;
    void** esi145;
    void** edx146;
    void** edi147;
    void** v148;
    void** v149;
    signed char v150;
    int1_t less151;
    void** v152;
    void** v153;
    void** eax154;
    void** v155;
    void** v156;
    signed char v157;
    void** v158;
    void** v159;
    void** eax160;
    void** v161;
    void** v162;
    signed char v163;
    void** v164;
    void** v165;
    void** eax166;
    void** v167;
    void** v168;
    signed char v169;
    void** v170;
    void** v171;
    void** eax172;
    void** v173;
    void** v174;
    signed char v175;
    void** ecx176;
    void** edx177;
    void** v178;
    void** eax179;
    void*** edx180;
    struct s29* ebx181;
    void** edi182;
    void** ebp183;
    void** ecx184;
    struct s29* esi185;
    void*** edi186;
    void** eax187;
    uint32_t ecx188;
    int1_t zf189;
    int1_t zf190;
    void* eax191;
    void** ecx192;
    void** esi193;
    void** eax194;
    void** edx195;
    void** v196;
    void** v197;
    void** v198;
    void** v199;
    void** v200;
    void** v201;
    void** v202;
    void** v203;

    v21 = edi22;
    eax23 = g48ae94;
    edx24 = g4775d0;
    if (eax23 != edx24 && (zf25 = g482a68 == 0, zf25)) {
        zf26 = g481264 == 0;
        if (zf26) {
        }
        eax29 = fun_434890(ecx, v27, v28);
        esp30 = reinterpret_cast<void***>(reinterpret_cast<int32_t>(__zero_stack_offset()) - 4 - 4 - 4 - 4 - 4 - 4 - 0x1020 - 4 + 4);
        ebx31 = g5f27a4;
        esi32 = g487fb4;
        edx33 = eax29;
        eax34 = reinterpret_cast<void*>(0);
        do {
            ecx35 = reinterpret_cast<void**>(0);
            ecx35 = *reinterpret_cast<void***>(edx33);
            eax34 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(eax34) + 1);
            ecx35 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(ecx35) + reinterpret_cast<unsigned char>(esi32));
            ++edx33;
            *reinterpret_cast<void***>(reinterpret_cast<int32_t>(esp30) + reinterpret_cast<int32_t>(eax34) - 1) = ecx35;
        } while (reinterpret_cast<int32_t>(eax34) < 0x1000);
        v36 = esp30;
        v37 = reinterpret_cast<void**>(0);
        while (eax38 = g4775d4, reinterpret_cast<signed char>(eax38 - 32) > reinterpret_cast<signed char>(v37)) {
            ebp39 = 0;
            v40 = reinterpret_cast<unsigned char>(v37) & 63;
            while (eax41 = g4775d0, edx42 = reinterpret_cast<void*>(reinterpret_cast<signed char>(eax41) >> 31 << 6), esi43 = reinterpret_cast<void***>((v40 << 6) + reinterpret_cast<int32_t>(v36)), ebp39 < reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax41) - (reinterpret_cast<int32_t>(edx42) + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(eax41) < reinterpret_cast<unsigned char>(reinterpret_cast<int32_t>(edx42) + __intrinsic())))) >> 6) {
                edi44 = ebx31;
                ecx35 = reinterpret_cast<void**>(16);
                do {
                    if (!ecx35) 
                        break;
                    --ecx35;
                    edi44->f0 = *esi43;
                    edi44 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(edi44) + 4);
                    esi43 = esi43 + 4;
                } while (1);
                ecx35 = reinterpret_cast<void**>(0);
                do {
                    if (!ecx35) 
                        break;
                    --ecx35;
                    edi44->f0 = *esi43;
                    edi44 = reinterpret_cast<struct s29*>(&edi44->pad16384);
                    ++esi43;
                } while (0);
                ++ebp39;
                ebx31 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(ebx31) + 64);
            }
            zf45 = (*reinterpret_cast<unsigned char*>(&g4775d0) & 63) == 0;
            if (!zf45) {
                ecx46 = g4775d0;
                edi47 = ebx31;
                ecx48 = reinterpret_cast<unsigned char>(ecx46) & 63;
                eax49 = ecx48;
                ecx35 = reinterpret_cast<void**>(ecx48 >> 2);
                zf50 = ecx35 == 0;
                do {
                    if (!ecx35) 
                        break;
                    --ecx35;
                    edi47->f0 = *esi43;
                    edi47 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(edi47) + 4);
                    esi43 = esi43 + 4;
                } while (!zf50);
                ecx35 = reinterpret_cast<void**>(*reinterpret_cast<unsigned char*>(&eax49) & 3);
                zf51 = ecx35 == 0;
                do {
                    if (!ecx35) 
                        break;
                    --ecx35;
                    edi47->f0 = *esi43;
                    edi47 = reinterpret_cast<struct s29*>(&edi47->pad16384);
                    ++esi43;
                } while (!zf51);
                eax52 = g4775d0;
                ebx31 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(ebx31) + (reinterpret_cast<unsigned char>(eax52) & 63));
            }
            ++v37;
        }
        zf53 = reinterpret_cast<int1_t>(g4775d0 == 0x140);
        if (!zf53) {
            eax56 = fun_434890(ecx35, v54, v55);
            esi57 = 0;
            edi58 = eax56;
            while (eax59 = g48ae94, esi57 < reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax59) - (reinterpret_cast<signed char>(eax59) >> 31)) >> 1) {
                ecx35 = edi58;
                fun_433a50(ecx35, v60, v61, v62);
                esi57 = esi57 + 8;
            }
            eax65 = fun_434890(ecx35, v63, v64);
            esi66 = 0;
            edi67 = eax65;
            while (eax68 = g48ae94, esi66 < reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax68) - (reinterpret_cast<signed char>(eax68) >> 31)) >> 1) {
                ecx35 = edi67;
                fun_433a50(ecx35, v69, v70, v71);
                esi66 = esi66 + 8;
            }
            eax74 = fun_434890(ecx35, v72, v73);
            esi75 = 0;
            edi76 = eax74;
            while (eax77 = g48ae98, esi75 < reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax77) - (reinterpret_cast<signed char>(eax77) >> 31)) >> 1) {
                ecx35 = edi76;
                esi75 = esi75 + 8;
                fun_433a50(ecx35, v78, v79, v80);
            }
            eax83 = fun_434890(ecx35, v81, v82);
            esi84 = 0;
            edi85 = eax83;
            while (eax86 = g48ae98, esi84 < reinterpret_cast<int32_t>(reinterpret_cast<unsigned char>(eax86) - (reinterpret_cast<signed char>(eax86) >> 31)) >> 1) {
                ecx35 = edi85;
                esi84 = esi84 + 8;
                fun_433a50(ecx35, v87, v88, v89);
            }
            eax92 = fun_434890(ecx35, v90, v91);
            fun_433a50(eax92, v93, v94, v95);
            eax98 = fun_434890(eax92, v96, v97);
            fun_433a50(eax98, v99, v100, v101);
            eax104 = fun_434890(eax98, v102, v103);
            fun_433a50(eax104, v105, v106, v107);
            eax110 = fun_434890(eax104, v108, v109);
            ecx111 = eax110;
        } else {
            eax114 = fun_434890(ecx35, v112, v113);
            ebp115 = eax114;
            eax116 = g48ae94;
            esi117 = reinterpret_cast<void**>(0);
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax116) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax116 == 0))) {
                do {
                    ecx35 = ebp115;
                    fun_433a50(ecx35, v118, v119, v120);
                    eax121 = g48ae94;
                    esi117 = esi117 + 8;
                } while (reinterpret_cast<signed char>(esi117) < reinterpret_cast<signed char>(eax121));
            }
            eax124 = fun_434890(ecx35, v122, v123);
            esi125 = reinterpret_cast<void**>(0);
            edx126 = g48ae94;
            edi127 = eax124;
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx126) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx126 == 0))) {
                do {
                    ecx35 = edi127;
                    fun_433a50(ecx35, v128, v129, v130);
                    esi125 = esi125 + 8;
                    less131 = reinterpret_cast<signed char>(esi125) < reinterpret_cast<signed char>(g48ae94);
                } while (less131);
            }
            eax134 = fun_434890(ecx35, v132, v133);
            esi135 = reinterpret_cast<void**>(0);
            ebp136 = g48ae98;
            edi137 = eax134;
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebp136) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebp136 == 0))) {
                do {
                    ecx35 = edi137;
                    fun_433a50(ecx35, v138, v139, v140);
                    eax141 = g48ae98;
                    esi135 = esi135 + 8;
                } while (reinterpret_cast<signed char>(esi135) < reinterpret_cast<signed char>(eax141));
            }
            eax144 = fun_434890(ecx35, v142, v143);
            esi145 = reinterpret_cast<void**>(0);
            edx146 = g48ae98;
            edi147 = eax144;
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx146) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx146 == 0))) {
                do {
                    ecx35 = edi147;
                    fun_433a50(ecx35, v148, v149, v150);
                    esi145 = esi145 + 8;
                    less151 = reinterpret_cast<signed char>(esi145) < reinterpret_cast<signed char>(g48ae98);
                } while (less151);
            }
            eax154 = fun_434890(ecx35, v152, v153);
            fun_433a50(eax154, v155, v156, v157);
            eax160 = fun_434890(eax154, v158, v159);
            fun_433a50(eax160, v161, v162, v163);
            eax166 = fun_434890(eax160, v164, v165);
            fun_433a50(eax166, v167, v168, v169);
            eax172 = fun_434890(eax166, v170, v171);
            ecx111 = eax172;
        }
        fun_433a50(ecx111, v173, v174, v175);
        ecx176 = g60b278;
        if (ecx176) {
            edx177 = *reinterpret_cast<void***>(ecx176);
            v178 = ecx176;
            g60b7c4 = 0x6c;
            eax179 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx177 + 100)(v178, 0, 0x60b7c4, 1, 0));
            g60b3a0 = eax179;
            if (!eax179) {
                edx180 = g60b7e8;
                ebx181 = g5f27a4;
                edi182 = g4775d4;
                ebp183 = reinterpret_cast<void**>(0);
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi182) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi182 == 0))) {
                    do {
                        ecx184 = g4775d0;
                        esi185 = ebx181;
                        edi186 = edx180;
                        eax187 = ecx184;
                        ecx188 = reinterpret_cast<unsigned char>(ecx184) >> 2;
                        zf189 = ecx188 == 0;
                        do {
                            if (!ecx188) 
                                break;
                            --ecx188;
                            *edi186 = esi185->f0;
                            edi186 = edi186 + 4;
                            esi185 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(esi185) + 4);
                        } while (!zf189);
                        *reinterpret_cast<unsigned char*>(&ecx188) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax187) & 3);
                        zf190 = *reinterpret_cast<unsigned char*>(&ecx188) == 0;
                        do {
                            if (!ecx188) 
                                break;
                            --ecx188;
                            *edi186 = esi185->f0;
                            ++edi186;
                            esi185 = reinterpret_cast<struct s29*>(&esi185->pad16384);
                        } while (!zf190);
                        ++ebp183;
                        eax191 = g60b7d4;
                        ecx192 = g4775d0;
                        esi193 = g4775d4;
                        edx180 = reinterpret_cast<void***>(reinterpret_cast<uint32_t>(edx180) + reinterpret_cast<int32_t>(eax191));
                        ebx181 = reinterpret_cast<struct s29*>(reinterpret_cast<uint32_t>(ebx181) + reinterpret_cast<unsigned char>(ecx192));
                    } while (reinterpret_cast<signed char>(ebp183) < reinterpret_cast<signed char>(esi193));
                }
                eax194 = g60b278;
                edx195 = *reinterpret_cast<void***>(eax194);
                eax23 = reinterpret_cast<void**>(*reinterpret_cast<void***>(edx195 + 0x80)(eax194, 0, v178, 0, 0x60b7c4, 1, 0));
            } else {
                fun_437a90(ecx176, "R_FillBackScreen: lpDDSPage4->Lock = %d", reinterpret_cast<unsigned char>(eax179) & 0xfff, v178, 0, 0x60b7c4, 1, 0, v196);
                goto v21;
            }
        } else {
            eax23 = fun_437a90(ecx176, "R_FillBackScreen: No page 4!", v197, v198, v199, v200, v201, v202, v203);
        }
    }
    return eax23;
}