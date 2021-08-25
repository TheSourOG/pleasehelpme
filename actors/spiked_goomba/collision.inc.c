const Collision spiked_goomba_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(5),
	COL_VERTEX(248, 0, -37),
	COL_VERTEX(343, 0, 0),
	COL_VERTEX(248, -36, 0),
	COL_VERTEX(248, 37, 0),
	COL_VERTEX(248, 0, 38),
	COL_TRI_INIT(SURFACE_BURNING, 4),
	COL_TRI(0, 1, 2),
	COL_TRI(3, 1, 0),
	COL_TRI(4, 1, 3),
	COL_TRI(2, 1, 4),
	COL_TRI_STOP(),
	COL_END()
};
