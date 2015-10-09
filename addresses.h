#pragma once

#define Address(armv7, arm64) FLAddress(armv7, 0x00000000, arm64)


#define VT_TILE_SIZE (83 * sizeof(void*))
#define VT_TILE_GETSHAPEWORLD 3
#define VT_TILE_GETSHAPE 4
#define VT_TILE_RENDERFACE 7
#define VT_TILE_TEXTURE 9
#define VT_TILE_TEXTUREWORLD 10
#define VT_TILE_ADDCOLLISION 15
#define VT_TILE_MAYPLACE 26
#define VT_TILE_TICK 28
#define VT_TILE_ANIMATE 29
#define VT_TILE_DESTROY 30
#define VT_TILE_NEIGHBORCH 32
#define VT_TILE_ONPLACE 33
#define VT_TILE_REMOVE 34
#define VT_TILE_RESOURCE 37
#define VT_TILE_USE 45
#define VT_TILE_GETPLACEDATA 48
#define VT_TILE_GETCOLOR 53
#define VT_TILE_ISSOURCE 55
#define VT_TILE_GETSIGNAL 57
#define VT_TILE_GETDIRECT 58
#define VT_TILE_ENTITYINSIDE 59
#define VT_TILE_PLAYERDESTROY 60
#define VT_TILE_SURVIVES 61
#define VT_TILE_EVENT 66
#define VT_TILE_SETEMISSION 76

#define VT_PLATETILE_SIZEADDR (4 * sizeof(void*))
#define VT_PLATETILE_GETPOWER 83
#define VT_PLATETILE_POWERDATA 84
#define VT_PLATETILE_DATAPOWER 85
#define VT_PLATETILE_TICKDELAY 86

#define VT_ITEM_SIZE 47 * sizeof(void*)
#define VT_ITEM_USEON 11

#define VT_ENTITY_MOVE 13


#define TILE_VTABLE Address(0x4962F0, 0x1005B97F0)
#define TILE_INIT Address(0x2EF658, 0x1003B0AA4)
#define TILE_TILES Address(0x5263F0, 0x10062FE10)
#define TILE_SOLID Address(0x525488, 0x10062D720)
#define TILE_LIGHTBLOCK Address(0x525288, 0x10062D518)
#define TILE_SHOULDTICK Address(0x00000000, 0x10062D976)
#define TILE_INITTILES Address(0x2DEDA0, 0x10028F4C4)

#define DOORTILE_NEIGHBORCH Address(0x00000000, 0x100385E14)
#define DOORTILE_SETOPEN Address(0x00000000, 0x100385BA4)

#define ITEM_CREATIVELIST Address(0x51D524, 0x100627AC0)
#define ITEM_INITCREATIVE Address(0x21E40C, 0x100298980)
#define ITEM_ITEMS Address(0x526BF0, 0x10061B950)
#define ITEM_USEON Address(0x22CE4C, 0x1002A7B84)
#define ITEM_INITITEMS Address(0x2160B0, 0x10028F4C4)

#define TILESOURCE_SETTILE Address(0x2610D8, 0x1002E46D0)
#define TILESOURCE_GETTILE Address(0x260444, 0x1002E3410)
#define TILESOURCE_GETDATA Address(0x2604EC, 0x1002E3518)
#define TILESOURCE_UPDATE Address(0x261404, 0x1002E4B08)
#define TILESOURCE_TILEEVENT Address(0x00000000, 0x1002E4FE0)
#define TILESOURCE_GETENTITIES Address(0x00000000, 0x1002E50C8)

#define TICKQUEUE_ADD Address(0x2640BC, 0x1002E8070)

#define TILETESS_TESS Address(0x153230, 0x10019CB40)
#define TILETESS_TESSBLOCK Address(0x14F660, 0x100197E9C)

#define TESS_VERTEX Address(0x1458A8, 0x10018BF94)