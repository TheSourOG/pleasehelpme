const Collision h_moving_platform_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(-171, 94, -320),
	COL_VERTEX(-171, 94, 320),
	COL_VERTEX(171, 94, 320),
	COL_VERTEX(171, 94, -320),
	COL_VERTEX(-171, -94, 320),
	COL_VERTEX(-171, -94, -320),
	COL_VERTEX(171, -94, -320),
	COL_VERTEX(171, -94, 320),
	COL_TRI_INIT(SURFACE_DEFAULT, 12),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(4, 5, 6),
	COL_TRI(4, 6, 7),
	COL_TRI(6, 3, 2),
	COL_TRI(6, 2, 7),
	COL_TRI(5, 0, 3),
	COL_TRI(5, 3, 6),
	COL_TRI(4, 1, 0),
	COL_TRI(4, 0, 5),
	COL_TRI(7, 2, 1),
	COL_TRI(7, 1, 4),
	COL_TRI_STOP(),
	COL_END()
};
