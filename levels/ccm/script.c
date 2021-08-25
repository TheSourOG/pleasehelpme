#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/ccm/header.h"

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group7_yay0SegmentRomStart, _group7_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group16_yay0SegmentRomStart, _group16_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group16_geoSegmentRomStart, _group16_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_17), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR, cabin_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE, snow_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT, ccm_geo_0003D0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE, ccm_geo_0003F0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD, ccm_geo_00040C), 

	AREA(1, ccm_area_1),
		WARP_NODE(0x0A, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_H_MOVING_PLATFORM, -2364, 2036, 9268, 0, 0, 0, 0x01000000, bhvHMovingPlatform),
		OBJECT(MODEL_H_MOVING_PLATFORM, 2365, 2036, 9268, 0, 0, 0, 0x01000000, bhvHMovingPlatform),
		OBJECT(MODEL_H_MOVING_PLATFORM, -1202, 2281, 10117, 0, 0, 0, 0x00000000, bhvHMovingPlatform),
		OBJECT(MODEL_H_MOVING_PLATFORM, 1234, 2281, 10117, 0, 0, 0, 0x00000000, bhvHMovingPlatform),
		OBJECT(MODEL_H_MOVING_PLATFORM, 49, 2542, 9268, 0, 0, 0, 0x01000000, bhvHMovingPlatform),
		OBJECT(MODEL_SPIKED_GOOMBA, -1202, 1950, 11505, 0, 0, 0, 0xFB, bhvSpikedGoomba),
		OBJECT(MODEL_SPIKED_GOOMBA, 1234, 1950, 11505, 0, 0, 0, 0xFB, bhvSpikedGoomba),
		OBJECT(MODEL_GOOMBA, -1202, 1950, 12774, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1234, 1950, 12774, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_SQUISHY_FLESH_PLATFORM, 42, 3089, 9435, 0, 0, 0, 0xFC, bhvSquishyPlatform),
		OBJECT(MODEL_NONE, 0, 3100, -148, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 0, 3100, -148),
		OBJECT(MODEL_Z_MOVING_PLATFORM, 0, -120, 0, 0, 0, 0, 0xFE, bhvZMovingPlatform),
		OBJECT(MODEL_Z_MOVING_PLATFORM, -1500, -120, 0, 0, 0, 0, 0xFE, bhvZMovingPlatform),
		OBJECT(MODEL_Z_MOVING_PLATFORM, 1500, -120, 0, 0, 0, 0, 0xFE, bhvZMovingPlatform),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 3100, -148),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
