void scroll_castle_courtyard_dl_Mesh_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 496;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	static int timeY;
	float amplitudeY = 2.0;
	float frequencyY = 2.0;
	float offsetY = 1.5;
	Vtx *vertices = segmented_to_virtual(castle_courtyard_dl_Mesh_mesh_layer_1_vtx_0);

	deltaX = (int)(2.0 * 0x20 * random_float() * random_sign()) % width;
	deltaY = (int)(amplitudeY * frequencyY * coss((frequencyY * timeY + offsetY) * (1024 * 16 - 1) / 6.28318530718) * 0x20);

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;
	currentY += deltaY;
	timeY += 1;

}
void scroll_castle_courtyard() {
	scroll_castle_courtyard_dl_Mesh_mesh_layer_1_vtx_0();
}
