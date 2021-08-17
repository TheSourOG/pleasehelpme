// blinking_mushroom.c.inc

void bhv_blinking_mushroom_loop(void) {
    bhv_mushroom_sparkles_init();
    o->oAnimState++;
}