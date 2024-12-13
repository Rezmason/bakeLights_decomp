void bakeLights(int scxData, struct Object* object, struct Light* light, float* parentTransform) {

	struct Object** otherObjects = object->otherObjects;
	struct Object* otherObject2 = object->otherObject2;
	
	if (otherObject2) {
		bakeLights(scxData, otherObject2, light, parentTransform);
	}
	
	if (!(otherObjects || object->otherObject1)) {
		return;
	}

	float transform[16];
	concatenateTransform(&transform, &parentTransform, &object);
	
	if (otherObject1) {
		bakeLights(scxData, otherObject1, light, &transform);
	}
	
	struct Object** otherObjects_1 = otherObjects;
		
	if (otherObjects_1 == 0) {
		return;
	}
	
	void* eax_2;
	int ecx_1;
	eax_2 = sub_418b7d(otherObjects_1[0], 4);
	int eax_3 = otherObjects_1[1];
	
	if (eax_3 - 1 < 0) {
		return;
	}

	int edx_3 = (eax_3 - 1) * 0x18;
	int var_e4_2 = edx_3;
	
	for (int i = eax_3; i != 1; i -= 1) {
		void* ecx_3 = &otherObjects_1[3]->name[edx_3];
		struct Shader* shader = *(uint*)((char*)ecx_3 + 0x14);

		float diffuse_color_r = 1f;
		float diffuse_color_g = 1f;
		float diffuse_color_b = 1f;
		
		float ambient_color_r = 1f;
		float ambient_color_g = 1f;
		float ambient_color_b = 1f;
		
		if (shader != 0 && shader->luminance == 0f && (shader->blendAmount < 1f || shader->texture_file_name[0] == 0)) {
			diffuse_color_r = shader->diffuse_color_r;
			diffuse_color_g = shader->diffuse_color_g;
			diffuse_color_b = shader->diffuse_color_b;

			ambient_color_r = shader->ambient_color_r;
			ambient_color_g = shader->ambient_color_g;
			ambient_color_b = shader->ambient_color_b;
		}
		
		void* edi_1 = (char*)ecx_3 + 0xc;
		object->some_count = object->some_count | 1;
		
		for(int j = 3; j != 1; j -= 1) {

			int eax_10 = *(uint16_t*)edi_1;
			
			if (!*(uint*)((char*)eax_2 + (eax_10 << 2))) {
				
				*(uint*)((char*)eax_2 + (eax_10 << 2)) = 1;
				float* vertex = otherObjects[2] + eax_10 * 0x38;
				int type = light->type;
				
				if (type == 3) {
					vertex[6] += ambient_color_r * light->color_r;
					vertex[7] += ambient_color_g * light->color_g;
					vertex[8] += ambient_color_b * light->color_b;
				} else {
					
					float vertexWorldNormal[3];
					transformNormalToWorld(&transform, &vertex[3], &vertexWorldNormal);

					float vertexWorldPosition[3];
					transformPositionToWorld(&transform, &vertex[0], &vertexWorldPosition);

					if (type == 2) {
						float magnitude = vertexWorldNormal[2] * light->dir_z + vertexWorldNormal[1] * light->dir_y + vertexWorldNormal[0] * light->dir_x;
						if (magnitude > 0f) {
							vertex[6] += magnitude * light->color_r * diffuse_color_r;
							vertex[7] += magnitude * light->color_g * diffuse_color_g;
							vertex[8] += magnitude * light->color_b * diffuse_color_b;
						}
					} else {

						float lightX = light->pos_x - vertexWorldPosition[0];
						float lightY = light->pos_y - vertexWorldPosition[1];
						float lightZ = light->pos_z - vertexWorldPosition[2];
						float lightDistSquared = lightZ * lightZ + lightY * lightY + lightX * lightX;
						float lightDistance;
						
						if (lightDistSquared == 0f) {
							lightZ = 0f;
							lightDistance = 0f;
						} else {
							lightDistance = sqrtl(lightDistSquared);
							lightX /= lightDistance;
							lightY /= lightDistance;
							lightZ /= lightDistance;
						}

						if (lightDistance >= light->attenEnd) {
							continue;
						}

						float attenuation = 1f;
						if (lightDistance > light->attenStart) {
							attenuation = (1f - (lightDistance - light->attenStart) / (light->attenEnd - light->attenStart));
						}

						float magnitude = lightZ * vertexWorldNormal[2] + lightY * vertexWorldNormal[1] + lightX * vertexWorldNormal[0];
						
						if (type == 0) {
							magnitude *= light->intensity * attenuation;
							if (magnitude <= 0f) {
								continue;
							}
						} else if (type == 1) {
							if (magnitude <= 0f) {
								continue;
							}

							float angle = lightZ * light->dir_z + lightY * light->dir_y + lightX * light->dir_x;
							if (angle <= 0f) {
								continue;
							}
							
							float penumbra = cos(light->penumbra * PI / 180f);
							float umbra = cos(light->umbra * PI / 180f);
							if (angle <= penumbra) {
								continue;
							}
								
							if (angle < umbra) {
								attenuation *= (angle - penumbra) / (umbra - penumbra);
							}
							
							magnitude *= light->intensity * attenuation;
						}

						vertex[6] += magnitude * light->color_r * diffuse_color_r;
						vertex[7] += magnitude * light->color_g * diffuse_color_g;
						vertex[8] += magnitude * light->color_b * diffuse_color_b;
					}
				}
			}
			
			edi_1 += 2;
		}
		
		ecx_1 = var_e4_2 - 0x18;
		var_e4_2 = ecx_1;

		edx_3 = var_e4_2;
		otherObjects_1 = otherObjects;
	}
			
	void* var_100_4 = eax_2;
	sub_418888(ecx_1);
}
