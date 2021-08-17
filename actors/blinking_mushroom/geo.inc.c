#include "src/game/envfx_snow.h"

const GeoLayout blinking_mushroom_000_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 0, 0, 0, blinking_mushroom_Plant_mesh_layer_4_mat_override_lavendar_material_002_0),
		GEO_SHADOW(2, 255, 75),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout blinking_mushroom_000_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 0, 0, 0, blinking_mushroom_Plant_mesh_layer_4_mat_override_blue_material_009_1),
		GEO_SHADOW(2, 255, 75),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout blinking_mushroom_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
		GEO_OPEN_NODE(),
			GEO_NODE_START(),
			GEO_OPEN_NODE(),
				GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 0, 0, 0, blinking_mushroom_Plant_mesh_layer_4),
				GEO_SHADOW(2, 255, 75),
			GEO_CLOSE_NODE(),
			GEO_BRANCH(1, blinking_mushroom_000_switch_opt1),
			GEO_BRANCH(1, blinking_mushroom_000_switch_opt2),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, blinking_mushroom_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
