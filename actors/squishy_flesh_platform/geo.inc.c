#include "src/game/envfx_snow.h"

const GeoLayout squishy_flesh_platform_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(5, squishy_flesh_platform_Mesh_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(1, 0, 42, 0, squishy_flesh_platform_Toad_mesh_layer_1),
		GEO_DISPLAY_LIST(5, squishy_flesh_platform_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, squishy_flesh_platform_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
