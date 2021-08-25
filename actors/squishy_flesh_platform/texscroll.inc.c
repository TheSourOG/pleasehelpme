void scroll_squishy_flesh_platform_Mesh_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 60;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int timeX;
	float amplitudeX = -0.5;
	float frequencyX = 0.5;
	float offsetX = -0.25;
	static int currentY = 0;
	int deltaY;
	static int timeY;
	float amplitudeY = 0.5;
	float frequencyY = -0.5;
	float offsetY = 0.25;
	Vtx *vertices = segmented_to_virtual(squishy_flesh_platform_Mesh_mesh_layer_5_vtx_0);

	deltaX = (int)(amplitudeX * frequencyX * coss((frequencyX * timeX + offsetX) * (1024 * 16 - 1) / 6.28318530718) * 0x20);
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
	timeX += 1;
	currentY += deltaY;
	timeY += 1;

}
void scroll_actor_geo_squishy_flesh_platform() {
	scroll_squishy_flesh_platform_Mesh_mesh_layer_5_vtx_0();
}
