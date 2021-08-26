#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "geo_commands.h"

#include "make_const_nonconst.h"

// Note: This bin does not use bin IDs, unlike the other segmented bins.
#include "mario/model.inc.c"

#include "bubble/model.inc.c"

#include "walk_smoke/model.inc.c"

#include "burn_smoke/model.inc.c"

#include "stomp_smoke/model.inc.c"

#include "water_wave/model.inc.c"

#include "sparkle/model.inc.c"

#include "water_splash/model.inc.c"

#include "white_particle_small/model.inc.c"

#include "sparkle_animation/model.inc.c"

#include "blinking_mushroom/model.inc.c"

#include "z_moving_platform/model.inc.c"
#include "z_moving_platform/collision.inc.c"
#ifdef S2DEX_TEXT_ENGINE
#include "src/s2d_engine/config.h"
#include FONT_C_FILE
#endif

#include "h_moving_platform/model.inc.c"
#include "h_moving_platform/collision.inc.c"
#include "squishy_flesh_platform/model.inc.c"
#include "squishy_flesh_platform/collision.inc.c"

#include "goomba/model.inc.c"
#include "goomba/anims/data.inc.c"
#include "goomba/anims/table.inc.c"
UNUSED static const u64 binid_17 = 17;
#include "spiked_goomba/model.inc.c"