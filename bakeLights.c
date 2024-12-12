void bakeLights(int32_t scxData, struct Object* object, struct Light* light, float* parentTransform) {

	struct Object** otherObjects = object->otherObjects;
	struct Object* otherObject2 = object->otherObject2;
	
	if (otherObject2) {
		bakeLights(scxData, otherObject2, light, parentTransform);
	}
	
	if (otherObjects || object->otherObject1) {

		float transform[16];
		concatenateTransform(&transform, &parentTransform, &object);
		
		if (otherObject1) {
			bakeLights(scxData, otherObject1, light, &transform);
		}
		
		struct Object** otherObjects_1 = otherObjects;
		
		if (otherObjects_1) {
			void* eax_2;
			int32_t ecx_1;
			eax_2 = sub_418b7d(otherObjects_1[0], 4);
			int32_t eax_3 = otherObjects_1[1];
			
			if (eax_3 - 1 >= 0) {
				int32_t edx_3 = (eax_3 - 1) * 0x18;
				int32_t var_e4_2 = edx_3;
				int32_t var_e0_3 = eax_3;
				
				while (true) {
					float diffuse_color_r = 1f;
					float diffuse_color_g = 1f;
					float diffuse_color_b = 1f;
					void* ecx_3 = &otherObjects_1[3]->name[edx_3];
					float ambient_color_r = 1f;
					float ambient_color_g = 1f;
					float ambient_color_b = 1f;
					struct Shader* shader = *(uint32_t*)((char*)ecx_3 + 0x14);
					// float x87_r6_79 = 1f;
					
					if (shader) {
						if (shader->luminance == 0f) {
							if (shader->blendAmount < 1f) { // •
								label_41252d:
								diffuse_color_r = shader->diffuse_color_r;
								diffuse_color_g = shader->diffuse_color_g;
								diffuse_color_b = shader->diffuse_color_b;
								ambient_color_r = shader->ambient_color_r;
								ambient_color_g = shader->ambient_color_g;
								ambient_color_b = shader->ambient_color_b;
							} else {
								eax_5 = shader->texture_file_name[0];
								
								if (!eax_5) {
									goto label_41252d;
								}
							}
						}
					}
					
					void* edi_1 = (char*)ecx_3 + 0xc;
					int32_t eax_9;
					eax_9 = object->some_count | 1;
					int32_t var_84_1 = 3;
					object->some_count = eax_9;
					bool cond_2_1;
					
					do {
						int32_t eax_10;
						eax_10 = *(uint16_t*)edi_1;
						
						if (!*(uint32_t*)((char*)eax_2 + (eax_10 << 2))) {
							float var_ec_2 = 1f;
							int32_t edx_6 = otherObjects[2];
							*(uint32_t*)((char*)eax_2 + (eax_10 << 2)) = 1;
							float* vertex = edx_6 + eax_10 * 0x38;
							int32_t type = light->type;
							
							if (type == 3) {
								vertex[6] = (ambient_color_r * light->color_r + vertex[6]);
								vertex[7] = (ambient_color_g * light->color_g + vertex[7]);
								vertex[8] = (ambient_color_b * light->color_b + vertex[8]);
							} else {
								
								float vertexWorldNormal[3];
								transformNormalToWorld(&transform, &vertex[3], &vertexWorldNormal);

								if (object->scale_x != 0f) {
									vertexWorldNormal[0] = (vertexWorldNormal[0] / fabsl(object->scale_x));
								}
								
								if (object->scale_y != 0f) {
									vertexWorldNormal[1] = (vertexWorldNormal[1] / fabsl(object->scale_y));
								}
								
								if (object->scale_z != 0f) {
									vertexWorldNormal[2] = (vertexWorldNormal[2] / fabsl(object->scale_z));
								}
								
								float vertexWorldPosition[3];
								transformPositionToWorld(&transform, &vertex[0], &vertexWorldPosition);

								float x87_r2_5;
								float x87_r5_56;
								
								if (type == 0) {
									float x87_r5_84 = light->pos_x - vertexWorldPosition[0];
									float x87_r4_64 = light->pos_y - vertexWorldPosition[1];
									float x87_r3_19 = light->pos_z - vertexWorldPosition[2];
									float x87_r2_16 = x87_r3_19 * x87_r3_19 + x87_r4_64 * x87_r4_64 + x87_r5_84 * x87_r5_84;
									float x87_r3_20;
									
									if (x87_r2_16 == 0f) {
										x87_r3_20 = x87_r2_16;
										x87_r2_5 = 0f;
									} else {
										x87_r2_5 = sqrtl(x87_r2_16);
										float x87_r1_18 = 1f / x87_r2_5;
										x87_r5_84 = x87_r5_84 * x87_r1_18;
										x87_r4_64 = x87_r4_64 * x87_r1_18;
										x87_r3_20 = x87_r3_19 * x87_r1_18;
									}
									
									if (!(x87_r2_5 < light->attenEnd)) { // •
										label_412ac7:
										// x87_r6_79 = x87_r2_5;
									} else {
										if (x87_r2_5 <= light->attenStart) { // •
											x87_r3_20 = x87_r2_5;
										} else {
											var_ec_2 = (1f - (x87_r2_5 - light->attenStart) / (light->attenEnd - light->attenStart));
										}
										
										x87_r5_56 = x87_r3_20 * vertexWorldNormal[2] + x87_r4_64 * vertexWorldNormal[1] + x87_r5_84 * vertexWorldNormal[0];
										if (x87_r5_56 <= 0f) { // •
											// x87_r6_79 = x87_r5_56;
										} else {
											float x87_r5_87 = x87_r5_56 * light->intensity * var_ec_2;
											float var_7c_3 = (x87_r5_87 * light->color_g * diffuse_color_g);
											float x87_r5_89 = x87_r5_87 * light->color_b * diffuse_color_b;
											vertex[6] = ((x87_r5_87 * light->color_r * diffuse_color_r) + vertex[6]);
											vertex[7] = (var_7c_3 + vertex[7]);
											vertex[8] = (x87_r5_89 + vertex[8]);
										}
									}
								} else if (type == 1) {
									float x87_r5_63 = light->pos_x - vertexWorldPosition[0];
									float x87_r4_46 = light->pos_y - vertexWorldPosition[1];
									float x87_r3_13 = light->pos_z - vertexWorldPosition[2];
									float x87_r2_4 = x87_r3_13 * x87_r3_13 + x87_r4_46 * x87_r4_46 + x87_r5_63 * x87_r5_63;
									float x87_r3_14;
									
									if (x87_r2_4 == 0f) {
										x87_r3_14 = x87_r2_4;
										x87_r2_5 = 0f;
									} else {
										x87_r2_5 = sqrtl(x87_r2_4);
										float x87_r1_6 = 1f / x87_r2_5;
										x87_r5_63 = x87_r5_63 * x87_r1_6;
										x87_r4_46 = x87_r4_46 * x87_r1_6;
										x87_r3_14 = x87_r3_13 * x87_r1_6;
									}
									
									if (!(x87_r2_5 < light->attenEnd)) { // •
										goto label_412ac7;
									}
									
									if (x87_r2_5 <= light->attenStart) { // •
										x87_r3_14 = x87_r2_5;
									} else {
										var_ec_2 = (1f - (x87_r2_5 - light->attenStart) / (light->attenEnd - light->attenStart));
									}
									
									float x87_r2_12 = x87_r3_14 * vertexWorldNormal[2] + x87_r4_46 * vertexWorldNormal[1] + x87_r5_63 * vertexWorldNormal[0];
									float var_70_1 = x87_r2_12;
									if (x87_r2_12 <= 0f) { // •
										// x87_r6_79 = x87_r3_14;
									} else {
										float x87_r5_65 = x87_r3_14 * light->dir_z + x87_r4_46 * light->dir_y + x87_r5_63 * light->dir_x;
										float var_e8_2 = x87_r5_65;
										if (!(x87_r5_65 <= 0f)) { // •
											float st0_5;
											bool c2_16;
											st0_5 = __fcos(light->penumbra * 0.0174532924f);
											float var_dc_2 = st0_5;
											float st0_6;
											bool c2_17;
											st0_6 = __fcos(light->umbra * 0.0174532924f);
											float var_d8_2 = st0_6;
											if (!(var_e8_2 <= var_dc_2)) { // •
												if (var_e8_2 < var_d8_2) { // •
													var_ec_2 = ((var_e8_2 - var_dc_2) / (var_d8_2 - var_dc_2) * var_ec_2);
												}
												
												float x87_r5_80 = var_70_1 * light->intensity * var_ec_2;
												float var_7c_2 = (x87_r5_80 * light->color_g * diffuse_color_g);
												float x87_r5_82 = x87_r5_80 * light->color_b * diffuse_color_b;
												vertex[6] = ((x87_r5_80 * light->color_r * diffuse_color_r) + vertex[6]);
												vertex[7] = (var_7c_2 + vertex[7]);
												vertex[8] = (x87_r5_82 + vertex[8]);
											}
										}
									}
								} else if (type == 2) {
									x87_r5_56 = vertexWorldNormal[2] * light->dir_z + vertexWorldNormal[1] * light->dir_y + vertexWorldNormal[0] * light->dir_x;
									if (x87_r5_56 <= 0f) { // •
										// x87_r6_79 = x87_r5_56;
									} else {
										float var_7c_1 = (x87_r5_56 * light->color_g * diffuse_color_g);
										float var_78_1 = (x87_r5_56 * light->color_b * diffuse_color_b);
										vertex[6] = (x87_r5_56 * light->color_r * diffuse_color_r + vertex[6]);
										vertex[7] = (var_7c_1 + vertex[7]);
										vertex[8] = (var_78_1 + vertex[8]);
									}
								}
							}
						}
						
						edi_1 += 2;
						cond_2_1 = var_84_1 != 1;
						var_84_1 -= 1;
					} while (cond_2_1);
					ecx_1 = var_e4_2 - 0x18;
					bool cond_3_1 = var_e0_3 != 1;
					var_e4_2 = ecx_1;
					var_e0_3 -= 1;
					
					if (!cond_3_1) {
						break;
					}
					
					edx_3 = var_e4_2;
					otherObjects_1 = otherObjects;
				}
			}
			
			void* var_100_4 = eax_2;
			sub_418888(ecx_1);
		}
	}
}
