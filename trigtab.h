/*
 * sin/cos tab (DON'T CHANGE!!)
 */

long trigtab[] = {
0x00000000,0x00064855,0x000c8fb2,0x0012d520,
0x001917a6,0x001f564e,0x00259020,0x002bc428,
0x0031f170,0x00381704,0x003e33f2,0x00444749,
0x004a5018,0x00504d72,0x00563e69,0x005c2214,
0x0061f78a,0x0067bde5,0x006d7440,0x007319ba,
0x0078ad74,0x007e2e93,0x00839c3c,0x0088f59a,
0x008e39d9,0x0093682a,0x00987fbf,0x009d7fd1,
0x00a26799,0x00a73655,0x00abeb49,0x00b085ba,
0x00b504f3,0x00b96841,0x00bdaef9,0x00c1d870,
0x00c5e403,0x00c9d112,0x00cd9f02,0x00d14d3d,
0x00d4db31,0x00d84852,0x00db941a,0x00debe05,
0x00e1c597,0x00e4aa59,0x00e76bd7,0x00ea09a6,
0x00ec835e,0x00eed89d,0x00f10908,0x00f31447,
0x00f4fa0a,0x00f6ba07,0x00f853f7,0x00f9c79d,
0x00fb14be,0x00fc3b27,0x00fd3aab,0x00fe1323,
0x00fec46d,0x00ff4e6d,0x00ffb10f,0x00ffec43,
0x01000000,0x00ffec43,0x00ffb10f,0x00ff4e6d,
0x00fec46d,0x00fe1323,0x00fd3aab,0x00fc3b27,
0x00fb14be,0x00f9c79d,0x00f853f7,0x00f6ba07,
0x00f4fa0a,0x00f31447,0x00f10908,0x00eed89d,
0x00ec835e,0x00ea09a6,0x00e76bd7,0x00e4aa59,
0x00e1c597,0x00debe05,0x00db941a,0x00d84852,
0x00d4db31,0x00d14d3d,0x00cd9f02,0x00c9d112,
0x00c5e403,0x00c1d870,0x00bdaef9,0x00b96841,
0x00b504f3,0x00b085ba,0x00abeb49,0x00a73655,
0x00a26799,0x009d7fd1,0x00987fbf,0x0093682a,
0x008e39d9,0x0088f59a,0x00839c3c,0x007e2e93,
0x0078ad74,0x007319ba,0x006d7440,0x0067bde5,
0x0061f78a,0x005c2214,0x00563e69,0x00504d72,
0x004a5018,0x00444749,0x003e33f2,0x00381704,
0x0031f170,0x002bc428,0x00259020,0x001f564e,
0x001917a6,0x0012d520,0x000c8fb2,0x00064855,
0x00000000,0xfff9b7ab,0xfff3704e,0xffed2ae0,
0xffe6e85a,0xffe0a9b2,0xffda6fe0,0xffd43bd8,
0xffce0e90,0xffc7e8fc,0xffc1cc0e,0xffbbb8b7,
0xffb5afe8,0xffafb28e,0xffa9c197,0xffa3ddec,
0xff9e0876,0xff98421b,0xff928bc0,0xff8ce646,
0xff87528c,0xff81d16d,0xff7c63c4,0xff770a66,
0xff71c627,0xff6c97d6,0xff678041,0xff62802f,
0xff5d9867,0xff58c9ab,0xff5414b7,0xff4f7a46,
0xff4afb0d,0xff4697bf,0xff425107,0xff3e2790,
0xff3a1bfd,0xff362eee,0xff3260fe,0xff2eb2c3,
0xff2b24cf,0xff27b7ae,0xff246be6,0xff2141fb,
0xff1e3a69,0xff1b55a7,0xff189429,0xff15f65a,
0xff137ca2,0xff112763,0xff0ef6f8,0xff0cebb9,
0xff0b05f6,0xff0945f9,0xff07ac09,0xff063863,
0xff04eb42,0xff03c4d9,0xff02c555,0xff01ecdd,
0xff013b93,0xff00b193,0xff004ef1,0xff0013bd,
0xff000000,0xff0013bd,0xff004ef1,0xff00b193,
0xff013b93,0xff01ecdd,0xff02c555,0xff03c4d9,
0xff04eb42,0xff063863,0xff07ac09,0xff0945f9,
0xff0b05f6,0xff0cebb9,0xff0ef6f8,0xff112763,
0xff137ca2,0xff15f65a,0xff189429,0xff1b55a7,
0xff1e3a69,0xff2141fb,0xff246be6,0xff27b7ae,
0xff2b24cf,0xff2eb2c3,0xff3260fe,0xff362eee,
0xff3a1bfd,0xff3e2790,0xff425107,0xff4697bf,
0xff4afb0d,0xff4f7a46,0xff5414b7,0xff58c9ab,
0xff5d9867,0xff62802f,0xff678041,0xff6c97d6,
0xff71c627,0xff770a66,0xff7c63c4,0xff81d16d,
0xff87528c,0xff8ce646,0xff928bc0,0xff98421b,
0xff9e0876,0xffa3ddec,0xffa9c197,0xffafb28e,
0xffb5afe8,0xffbbb8b7,0xffc1cc0e,0xffc7e8fc,
0xffce0e90,0xffd43bd8,0xffda6fe0,0xffe0a9b2,
0xffe6e85a,0xffed2ae0,0xfff3704e,0xfff9b7ab,
0x00000000,0x00064855,0x000c8fb2,0x0012d520,
0x001917a6,0x001f564e,0x00259020,0x002bc428,
0x0031f170,0x00381704,0x003e33f2,0x00444749,
0x004a5018,0x00504d72,0x00563e69,0x005c2214,
0x0061f78a,0x0067bde5,0x006d7440,0x007319ba,
0x0078ad74,0x007e2e93,0x00839c3c,0x0088f59a,
0x008e39d9,0x0093682a,0x00987fbf,0x009d7fd1,
0x00a26799,0x00a73655,0x00abeb49,0x00b085ba,
0x00b504f3,0x00b96841,0x00bdaef9,0x00c1d870,
0x00c5e403,0x00c9d112,0x00cd9f02,0x00d14d3d,
0x00d4db31,0x00d84852,0x00db941a,0x00debe05,
0x00e1c597,0x00e4aa59,0x00e76bd7,0x00ea09a6,
0x00ec835e,0x00eed89d,0x00f10908,0x00f31447,
0x00f4fa0a,0x00f6ba07,0x00f853f7,0x00f9c79d,
0x00fb14be,0x00fc3b27,0x00fd3aab,0x00fe1323,
0x00fec46d,0x00ff4e6d,0x00ffb10f,0x00ffec43
};
