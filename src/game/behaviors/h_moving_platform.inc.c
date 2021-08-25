// h_moving_platform.c.inc

u16 modifier;
void bhv_h_moving_platform_init(void) {
    modifier = (o->oBehParams >> 24) & 0xFF;
    bhv_h_moving_platform_loop();
}

void bhv_h_moving_platform_loop(void) {
    if (modifier) {
        o->oPosZ +=
            sins(o->oBitfsPlatformTimer)
            * 15.00; //! f32 double conversion error accumulates on Wii VC causing the platform to rise up
    }
    else {
        o->oPosZ -=
            sins(o->oBitfsPlatformTimer)
            * 15.00; //! f32 double conversion error accumulates on Wii VC causing the platform to rise up
    }
    o->oBitfsPlatformTimer += 0x175;
}