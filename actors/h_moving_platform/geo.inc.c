#include "src/game/envfx_snow.h"

const GeoLayout h_moving_platform_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, h_moving_platform_Mesh_mesh_layer_1),
		GEO_DISPLAY_LIST(1, h_moving_platform_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
