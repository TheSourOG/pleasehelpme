Lights1 goomba_Body_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 goomba_Face_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 goomba_Crazy_Face_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 goomba_Feet_lights = gdSPDefLights1(
	0x3F, 0x12, 0x7F,
	0x7E, 0x25, 0xFE, 0x28, 0x28, 0x28);

Gfx goomba_goomba_body_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 goomba_goomba_body_rgba16_rgba16[] = {
	#include "actors/goomba/goomba_body_rgba16.rgba16.inc.c"
};

Gfx goomba_goomba_face_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 goomba_goomba_face_rgba16_rgba16[] = {
	#include "actors/goomba/goomba_face_rgba16.rgba16.inc.c"
};

Gfx goomba_goomba_face_blink_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 goomba_goomba_face_blink_rgba16_rgba16[] = {
	#include "actors/goomba/goomba_face_blink_rgba16.rgba16.inc.c"
};

Vtx goomba_000_displaylist_mesh_layer_4_vtx_0[4] = {
	{{{18, 18, 0},0, {974, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-18, 18, 0},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-18, -18, 0},0, {-16, 974},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{18, -18, 0},0, {974, 974},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx goomba_000_displaylist_mesh_layer_4_tri_0[] = {
	gsSPVertex(goomba_000_displaylist_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx goomba_000_offset_002_mesh_layer_1_vtx_0[57] = {
	{{{80, 58, 105},0, {1108, 306},{0x20, 0x3D, 0x6B, 0xFF}}},
	{{{-23, 109, 59},0, {826, 986},{0xC1, 0x63, 0x31, 0xFF}}},
	{{{-23, 55, 118},0, {1182, 962},{0xC2, 0x35, 0x61, 0xFF}}},
	{{{80, 98, 62},0, {842, 322},{0x20, 0x6D, 0x39, 0xFF}}},
	{{{143, 65, 69},0, {890, -94},{0x57, 0x43, 0x40, 0xFF}}},
	{{{82, 110, 0},0, {466, 314},{0x2A, 0x78, 0xFE, 0xFF}}},
	{{{156, 68, 0},0, {468, -172},{0x66, 0x4C, 0x0, 0xFF}}},
	{{{143, 65, -68},0, {46, -86},{0x57, 0x44, 0xC1, 0xFF}}},
	{{{80, 98, -61},0, {92, 330},{0x1D, 0x6F, 0xC9, 0xFF}}},
	{{{80, 58, -104},0, {-172, 320},{0x1F, 0x3E, 0x95, 0xFF}}},
	{{{-23, 55, -117},0, {-248, 974},{0xC2, 0x35, 0x9F, 0xFF}}},
	{{{-23, 109, -58},0, {106, 992},{0xC3, 0x64, 0xD0, 0xFF}}},
	{{{-1, 130, 0},0, {466, 856},{0xEA, 0x7D, 0xFC, 0xFF}}},
	{{{-23, 55, 118},0, {-914, 1210},{0xC2, 0x35, 0x61, 0xFF}}},
	{{{-23, 109, 59},0, {-1498, 1214},{0xC1, 0x63, 0x31, 0xFF}}},
	{{{-51, 49, 53},0, {-1560, 1494},{0x86, 0x19, 0x17, 0xFF}}},
	{{{-23, 109, -58},0, {-2682, 1214},{0xC3, 0x64, 0xD0, 0xFF}}},
	{{{-51, 49, -52},0, {-2620, 1494},{0x86, 0x19, 0xE9, 0xFF}}},
	{{{-23, 55, -117},0, {-3266, 1210},{0xC2, 0x35, 0x9F, 0xFF}}},
	{{{-23, -54, -117},0, {-3266, 1210},{0xC0, 0xD2, 0x9C, 0xFF}}},
	{{{-1, 0, -140},0, {-3494, 988},{0xED, 0x0, 0x82, 0xFF}}},
	{{{82, 0, -119},0, {-3284, 152},{0x2B, 0xFF, 0x88, 0xFF}}},
	{{{80, 58, -104},0, {-3142, 180},{0x1F, 0x3E, 0x95, 0xFF}}},
	{{{143, 65, -68},0, {-2784, -456},{0x57, 0x44, 0xC1, 0xFF}}},
	{{{156, 0, -73},0, {-2824, -588},{0x67, 0xFF, 0xB6, 0xFF}}},
	{{{156, 68, 0},0, {-2090, -588},{0x66, 0x4C, 0x0, 0xFF}}},
	{{{177, 0, 0},0, {-2090, -790},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{156, 0, 74},0, {-1356, -588},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{143, 65, 69},0, {-1396, -456},{0x57, 0x43, 0x40, 0xFF}}},
	{{{80, 58, 105},0, {-1038, 180},{0x20, 0x3D, 0x6B, 0xFF}}},
	{{{82, 0, 120},0, {-896, 152},{0x2D, 0x3, 0x77, 0xFF}}},
	{{{-1, 0, 141},0, {-686, 988},{0xEA, 0x3, 0x7D, 0xFF}}},
	{{{-23, -54, 118},0, {-914, 1210},{0xC1, 0xCD, 0x62, 0xFF}}},
	{{{-1, 0, 141},0, {-686, 988},{0xEA, 0x3, 0x7D, 0xFF}}},
	{{{-23, 55, 118},0, {-914, 1210},{0xC2, 0x35, 0x61, 0xFF}}},
	{{{-51, -48, 53},0, {-1560, 1494},{0x85, 0xE9, 0x16, 0xFF}}},
	{{{-51, 49, 53},0, {-1560, 1494},{0x86, 0x19, 0x17, 0xFF}}},
	{{{-51, -48, -52},0, {-2620, 1494},{0x85, 0xE9, 0xEA, 0xFF}}},
	{{{-51, 49, -52},0, {-2620, 1494},{0x86, 0x19, 0xE9, 0xFF}}},
	{{{-23, -54, -117},0, {-3266, 1210},{0xC0, 0xD2, 0x9C, 0xFF}}},
	{{{-23, -108, -74},0, {-2842, 1214},{0xC6, 0x9E, 0xC7, 0xFF}}},
	{{{80, -57, -104},0, {-3142, 180},{0x23, 0xC1, 0x97, 0xFF}}},
	{{{82, 0, -119},0, {-3284, 152},{0x2B, 0xFF, 0x88, 0xFF}}},
	{{{-1, 0, -140},0, {-3494, 988},{0xED, 0x0, 0x82, 0xFF}}},
	{{{156, 0, -73},0, {-2824, -588},{0x67, 0xFF, 0xB6, 0xFF}}},
	{{{143, -64, -68},0, {-2784, -456},{0x55, 0xBB, 0xBF, 0xFF}}},
	{{{156, -67, 0},0, {-2090, -588},{0x66, 0xB4, 0x0, 0xFF}}},
	{{{177, 0, 0},0, {-2090, -790},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{156, 0, 74},0, {-1356, -588},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{143, -64, 69},0, {-1396, -456},{0x55, 0xBB, 0x40, 0xFF}}},
	{{{82, 0, 120},0, {-896, 152},{0x2D, 0x3, 0x77, 0xFF}}},
	{{{80, -57, 105},0, {-1038, 180},{0x20, 0xBB, 0x66, 0xFF}}},
	{{{80, -97, 52},0, {-1576, 180},{0x1F, 0x90, 0x33, 0xFF}}},
	{{{-23, -108, 75},0, {-1338, 1214},{0xCA, 0x9E, 0x3C, 0xFF}}},
	{{{-1, -129, 0},0, {-2090, 988},{0xEA, 0x83, 0x1, 0xFF}}},
	{{{80, -97, -51},0, {-2604, 180},{0x23, 0x90, 0xCE, 0xFF}}},
	{{{82, -109, 0},0, {-2090, 152},{0x2A, 0x88, 0x1, 0xFF}}},
};

Gfx goomba_000_offset_002_mesh_layer_1_tri_0[] = {
	gsSPVertex(goomba_000_offset_002_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 5, 3, 4, 0),
	gsSP2Triangles(5, 4, 6, 0, 7, 5, 6, 0),
	gsSP2Triangles(7, 8, 5, 0, 9, 8, 7, 0),
	gsSP2Triangles(10, 8, 9, 0, 10, 11, 8, 0),
	gsSP2Triangles(11, 5, 8, 0, 11, 12, 5, 0),
	gsSP2Triangles(1, 12, 11, 0, 12, 1, 3, 0),
	gsSP2Triangles(12, 3, 5, 0, 13, 14, 15, 0),
	gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
	gsSP2Triangles(16, 18, 17, 0, 19, 17, 18, 0),
	gsSP2Triangles(18, 20, 19, 0, 21, 20, 18, 0),
	gsSP2Triangles(21, 18, 22, 0, 21, 22, 23, 0),
	gsSP2Triangles(21, 23, 24, 0, 25, 24, 23, 0),
	gsSP2Triangles(25, 26, 24, 0, 27, 26, 25, 0),
	gsSP2Triangles(27, 25, 28, 0, 27, 28, 29, 0),
	gsSP2Triangles(27, 29, 30, 0, 13, 30, 29, 0),
	gsSP1Triangle(13, 31, 30, 0),
	gsSPVertex(goomba_000_offset_002_mesh_layer_1_vtx_0 + 32, 25, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(2, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(4, 6, 5, 0, 7, 5, 6, 0),
	gsSP2Triangles(7, 8, 5, 0, 9, 8, 7, 0),
	gsSP2Triangles(7, 10, 9, 0, 7, 11, 10, 0),
	gsSP2Triangles(12, 9, 10, 0, 12, 13, 9, 0),
	gsSP2Triangles(12, 14, 13, 0, 12, 15, 14, 0),
	gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
	gsSP2Triangles(18, 17, 16, 0, 18, 19, 17, 0),
	gsSP2Triangles(1, 19, 18, 0, 1, 0, 19, 0),
	gsSP2Triangles(0, 20, 19, 0, 0, 21, 20, 0),
	gsSP2Triangles(21, 0, 3, 0, 5, 21, 3, 0),
	gsSP2Triangles(5, 8, 21, 0, 8, 22, 21, 0),
	gsSP2Triangles(22, 8, 23, 0, 9, 23, 8, 0),
	gsSP2Triangles(13, 23, 9, 0, 24, 23, 13, 0),
	gsSP2Triangles(24, 13, 14, 0, 17, 24, 14, 0),
	gsSP2Triangles(17, 20, 24, 0, 19, 20, 17, 0),
	gsSP2Triangles(21, 24, 20, 0, 21, 22, 24, 0),
	gsSP1Triangle(22, 23, 24, 0),
	gsSPEndDisplayList(),
};

Vtx goomba_000_offset_003_mesh_layer_1_vtx_0[20] = {
	{{{60, 14, 51},0, {-16, -16},{0x18, 0x45, 0x68, 0xFF}}},
	{{{0, 11, 45},0, {-16, -16},{0xD6, 0x3E, 0x67, 0xFF}}},
	{{{2, -6, 39},0, {-16, -16},{0xD7, 0xAE, 0x58, 0xFF}}},
	{{{60, 14, -37},0, {-16, -16},{0x18, 0x45, 0x98, 0xFF}}},
	{{{90, 14, -14},0, {-16, -16},{0x62, 0x43, 0xD3, 0xFF}}},
	{{{90, 14, 29},0, {-16, -16},{0x62, 0x42, 0x2F, 0xFF}}},
	{{{60, -12, 44},0, {-16, -16},{0x17, 0xAD, 0x5D, 0xFF}}},
	{{{66, -17, 29},0, {-16, -16},{0x22, 0x88, 0x19, 0xFF}}},
	{{{4, -12, 26},0, {-16, -16},{0xE2, 0x87, 0x19, 0xFF}}},
	{{{-25, 0, 19},0, {-16, -16},{0xA5, 0xB0, 0x26, 0xFF}}},
	{{{-30, 14, 21},0, {-16, -16},{0x9F, 0x42, 0x30, 0xFF}}},
	{{{-30, 14, -7},0, {-16, -16},{0x9F, 0x41, 0xCF, 0xFF}}},
	{{{0, 11, -30},0, {-16, -16},{0xD6, 0x41, 0x9B, 0xFF}}},
	{{{60, -12, -30},0, {-16, -16},{0x19, 0xAD, 0xA3, 0xFF}}},
	{{{85, -4, -14},0, {-16, -16},{0x63, 0xC0, 0xD1, 0xFF}}},
	{{{85, -4, 29},0, {-16, -16},{0x62, 0xC1, 0x32, 0xFF}}},
	{{{66, -17, -14},0, {-16, -16},{0x22, 0x88, 0xE8, 0xFF}}},
	{{{4, -12, -11},0, {-16, -16},{0xE1, 0x87, 0xEA, 0xFF}}},
	{{{-25, 0, -4},0, {-16, -16},{0xA5, 0xAE, 0xDD, 0xFF}}},
	{{{2, -6, -25},0, {-16, -16},{0xD5, 0xB0, 0xA7, 0xFF}}},
};

Gfx goomba_000_offset_003_mesh_layer_1_tri_0[] = {
	gsSPVertex(goomba_000_offset_003_mesh_layer_1_vtx_0 + 0, 20, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(6, 5, 0, 0, 0, 2, 6, 0),
	gsSP2Triangles(2, 7, 6, 0, 2, 8, 7, 0),
	gsSP2Triangles(2, 9, 8, 0, 1, 9, 2, 0),
	gsSP2Triangles(1, 10, 9, 0, 11, 10, 1, 0),
	gsSP2Triangles(11, 1, 12, 0, 1, 3, 12, 0),
	gsSP2Triangles(12, 3, 13, 0, 3, 14, 13, 0),
	gsSP2Triangles(3, 4, 14, 0, 4, 15, 14, 0),
	gsSP2Triangles(4, 5, 15, 0, 6, 15, 5, 0),
	gsSP2Triangles(7, 15, 6, 0, 16, 15, 7, 0),
	gsSP2Triangles(16, 7, 8, 0, 16, 8, 17, 0),
	gsSP2Triangles(8, 18, 17, 0, 8, 9, 18, 0),
	gsSP2Triangles(10, 18, 9, 0, 10, 11, 18, 0),
	gsSP2Triangles(19, 18, 11, 0, 19, 11, 12, 0),
	gsSP2Triangles(12, 13, 19, 0, 13, 17, 19, 0),
	gsSP2Triangles(13, 16, 17, 0, 13, 14, 16, 0),
	gsSP2Triangles(16, 14, 15, 0, 17, 18, 19, 0),
	gsSPEndDisplayList(),
};

Vtx goomba_000_offset_004_mesh_layer_1_vtx_0[20] = {
	{{{60, 14, 37},0, {-16, -16},{0x19, 0x45, 0x68, 0xFF}}},
	{{{90, 14, 14},0, {-16, -16},{0x62, 0x42, 0x2E, 0xFF}}},
	{{{90, 14, -29},0, {-16, -16},{0x62, 0x43, 0xD2, 0xFF}}},
	{{{60, -12, 30},0, {-16, -16},{0x18, 0xAC, 0x5D, 0xFF}}},
	{{{2, -6, 25},0, {-16, -16},{0xD5, 0xB0, 0x59, 0xFF}}},
	{{{0, 11, 30},0, {-16, -16},{0xD5, 0x41, 0x65, 0xFF}}},
	{{{60, 14, -51},0, {-16, -16},{0x18, 0x46, 0x99, 0xFF}}},
	{{{85, -4, -29},0, {-16, -16},{0x63, 0xC0, 0xD0, 0xFF}}},
	{{{85, -4, 14},0, {-16, -16},{0x63, 0xC1, 0x31, 0xFF}}},
	{{{66, -17, 14},0, {-16, -16},{0x22, 0x88, 0x18, 0xFF}}},
	{{{4, -12, 11},0, {-16, -16},{0xE2, 0x87, 0x17, 0xFF}}},
	{{{-25, 0, 4},0, {-16, -16},{0xA5, 0xAF, 0x25, 0xFF}}},
	{{{-30, 14, 7},0, {-16, -16},{0x9F, 0x41, 0x32, 0xFF}}},
	{{{-30, 14, -21},0, {-16, -16},{0x9F, 0x42, 0xD0, 0xFF}}},
	{{{0, 11, -45},0, {-16, -16},{0xD5, 0x3F, 0x9A, 0xFF}}},
	{{{60, -12, -44},0, {-16, -16},{0x18, 0xAD, 0xA3, 0xFF}}},
	{{{66, -17, -29},0, {-16, -16},{0x22, 0x88, 0xE7, 0xFF}}},
	{{{4, -12, -26},0, {-16, -16},{0xE1, 0x87, 0xE8, 0xFF}}},
	{{{-25, 0, -19},0, {-16, -16},{0xA5, 0xB0, 0xDA, 0xFF}}},
	{{{2, -6, -39},0, {-16, -16},{0xD5, 0xAE, 0xA9, 0xFF}}},
};

Gfx goomba_000_offset_004_mesh_layer_1_tri_0[] = {
	gsSPVertex(goomba_000_offset_004_mesh_layer_1_vtx_0 + 0, 20, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 0, 5, 0),
	gsSP2Triangles(5, 0, 6, 0, 0, 2, 6, 0),
	gsSP2Triangles(6, 2, 7, 0, 8, 7, 2, 0),
	gsSP2Triangles(8, 2, 1, 0, 3, 8, 1, 0),
	gsSP2Triangles(9, 8, 3, 0, 4, 9, 3, 0),
	gsSP2Triangles(4, 10, 9, 0, 4, 11, 10, 0),
	gsSP2Triangles(5, 11, 4, 0, 5, 12, 11, 0),
	gsSP2Triangles(5, 13, 12, 0, 5, 14, 13, 0),
	gsSP2Triangles(5, 6, 14, 0, 15, 14, 6, 0),
	gsSP2Triangles(6, 7, 15, 0, 15, 7, 16, 0),
	gsSP2Triangles(16, 7, 8, 0, 16, 8, 9, 0),
	gsSP2Triangles(10, 16, 9, 0, 10, 17, 16, 0),
	gsSP2Triangles(10, 18, 17, 0, 10, 11, 18, 0),
	gsSP2Triangles(18, 11, 12, 0, 18, 12, 13, 0),
	gsSP2Triangles(19, 18, 13, 0, 19, 13, 14, 0),
	gsSP2Triangles(15, 19, 14, 0, 15, 17, 19, 0),
	gsSP2Triangles(15, 16, 17, 0, 17, 18, 19, 0),
	gsSPEndDisplayList(),
};


Gfx mat_goomba_Body[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, goomba_goomba_body_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(goomba_Body_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_goomba_Body[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx mat_goomba_Face[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, goomba_goomba_face_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(goomba_Face_lights),
	gsSPEndDisplayList(),
};

Gfx mat_goomba_Crazy_Face[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, goomba_goomba_face_blink_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(goomba_Crazy_Face_lights),
	gsSPEndDisplayList(),
};

Gfx mat_goomba_Feet[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(goomba_Feet_lights),
	gsSPEndDisplayList(),
};

Gfx goomba_000_displaylist_mesh_layer_4[] = {
	gsSPDisplayList(mat_goomba_Body),
	gsSPDisplayList(goomba_000_displaylist_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_goomba_Body),
	gsSPEndDisplayList(),
};

Gfx goomba_000_offset_002_mesh_layer_1[] = {
	gsSPDisplayList(mat_goomba_Face),
	gsSPDisplayList(goomba_000_offset_002_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx goomba_000_offset_002_mesh_layer_1_mat_override_Crazy_Face_0[] = {
	gsSPDisplayList(mat_goomba_Crazy_Face),
	gsSPDisplayList(goomba_000_offset_002_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx goomba_000_offset_003_mesh_layer_1[] = {
	gsSPDisplayList(mat_goomba_Feet),
	gsSPDisplayList(goomba_000_offset_003_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx goomba_000_offset_004_mesh_layer_1[] = {
	gsSPDisplayList(mat_goomba_Feet),
	gsSPDisplayList(goomba_000_offset_004_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx goomba_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

