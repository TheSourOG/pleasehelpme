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
#include "levels/bob/header.h"

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xb, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
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
		OBJECT(MODEL_NONE, 0, 3100, -148, 0, 0, 0, 0x000B0000, bhvDeathWarp),
		OBJECT(MODEL_NONE, 0, 3100, -148, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 0, 3100, -148),
		OBJECT(MODEL_Z_MOVING_PLATFORM, 0, -120, 0, 0, 0, 0, 0xFE, bhvZMovingPlatform),
		OBJECT(MODEL_Z_MOVING_PLATFORM, -1500, -120, 0, 0, 0, 0, 0xFE, bhvZMovingPlatform),
		OBJECT(MODEL_Z_MOVING_PLATFORM, 1500, -120, 0, 0, 0, 0, 0xFE, bhvZMovingPlatform),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
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
