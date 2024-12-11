void bakeLights(int32_t scxData, struct Object* object, struct Light* light, float* arg4) {

	struct Object** otherObjects = object->otherObjects;
	struct Object* otherObject2 = object->otherObject2;
	
	if (otherObject2) {
		bakeLights(scxData, otherObject2, light, arg4);
	}
	
	if (otherObjects || object->otherObject1) {
		object->scale_x;
		float x87_r6_1 = object->scale_y;
		float x87_r5_1 = object->rot_x;
		float st0_1;
		bool c2_1;
		st0_1 = __fcos(x87_r5_1);
		float scale_z = object->scale_z;
		float rot_y = object->rot_y;
		float var_dc_1 = st0_1;
		float st0_2;
		bool c2_2;
		st0_2 = __fsin(x87_r5_1);
		float var_e4_1 = st0_2;
		float x87_r5_4 = 0f - 0f;
		float var_c0_1 = x87_r5_4;
		float var_b0_1 = (var_dc_1 * x87_r6_1 - 0f);
		float var_a0_1 = (0f - var_e4_1 * scale_z);
		float var_90_1 = x87_r5_4;
		float x87_r6_3 = 0f + 0f;
		float var_bc_1 = x87_r6_3;
		float var_ac_1 = (x87_r6_1 * var_e4_1 + 0f);
		float var_9c_2 = (var_dc_1 * scale_z + 0f);
		float var_8c_1 = x87_r6_3;
		float st0_3;
		bool c2_3;
		st0_3 = __fcos(rot_y);
		float var_e8_1 = st0_3;
		float st0_4;
		bool c2_4;
		st0_4 = __fsin(rot_y);
		float var_ec_1 = st0_4;
		float var_c4 = (var_bc_1 * var_ec_1 + var_e8_1 * x87_r6_1);
		float x87_r7_3 = 0f;
		float var_b4_1 = (var_ac_1 * var_ec_1 + x87_r7_3);
		float var_a4_1 = (var_ec_1 * var_9c_2 + x87_r7_3);
		float var_94_1 = (var_8c_1 * var_ec_1 + x87_r7_3);
		float var_bc_2 = (var_bc_1 * var_e8_1 - x87_r6_1 * var_ec_1);
		float x87_r7_7 = 0f;
		float scale_z_1 = scale_z;
		float var_ac_2 = (var_ac_1 * var_e8_1 - x87_r7_7);
		float var_9c_3 = (var_e8_1 * var_9c_2 - x87_r7_7);
		float var_8c_2 = (var_8c_1 * var_e8_1 - x87_r7_7);
		sub_412b20(&var_c4, object->rot_z);
		float var_94_2 = (object->trans_x + var_94_1);
		float var_90_2 = (object->trans_y + var_90_1);
		float var_8c_3 = (object->trans_z + var_8c_2);
		float var_6c = (var_c0_1 * arg4[4] + var_bc_2 * arg4[8] + var_c4 * arg4[0]);
		float var_68_1 = (var_c0_1 * arg4[5] + var_bc_2 * arg4[9] + var_c4 * arg4[1]);
		float var_64_1 = (var_c0_1 * arg4[6] + var_bc_2 * arg4[0xa] + var_c4 * arg4[2]);
		float var_5c_1 = (var_b4_1 * arg4[0] + var_ac_2 * arg4[8] + var_b0_1 * arg4[4]);
		float var_58_1 = (var_ac_2 * arg4[9] + var_b4_1 * arg4[1] + var_b0_1 * arg4[5]);
		struct Object* otherObject1 = object->otherObject1;
		float var_54_1 = (var_b0_1 * arg4[6] + var_ac_2 * arg4[0xa] + var_b4_1 * arg4[2]);
		float var_4c_1 = (var_a4_1 * arg4[0] + var_a0_1 * arg4[4] + var_9c_3 * arg4[8]);
		float var_48_1 = (var_a0_1 * arg4[5] + var_a4_1 * arg4[1] + var_9c_3 * arg4[9]);
		float var_44_1 = (var_9c_3 * arg4[0xa] + var_a0_1 * arg4[6] + var_a4_1 * arg4[2]);
		float var_3c_1 = (var_94_2 * arg4[0] + var_90_2 * arg4[4] + var_8c_3 * arg4[8] + arg4[0xc]);
		float var_38_1 = (var_90_2 * arg4[5] + var_8c_3 * arg4[9] + var_94_2 * arg4[1] + arg4[0xd]);
		float var_34_1 = (var_90_2 * arg4[6] + var_8c_3 * arg4[0xa] + var_94_2 * arg4[2] + arg4[0xe]);
		
		if (otherObject1) {
			bakeLights(scxData, otherObject1, light, &var_6c);
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
						float x87_r5_13 = shader->luminance;
						float temp2_1 = 0f;
						x87_r5_13 - temp2_1;
						int32_t eax_5;
						eax_5 = (x87_r5_13 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_13, temp2_1) ? 1 : 0) << 0xa | (x87_r5_13 == temp2_1 ? 1 : 0) << 0xe | 0x3000;
						
						if (*(uint8_t*)((char*)eax_5)[1] & 0x40) {
							float x87_r5_14 = shader->blendAmount;
							float temp3_1 = 1f;
							x87_r5_14 - temp3_1;
							eax_5 = (x87_r5_14 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_14, temp3_1) ? 1 : 0) << 0xa | (x87_r5_14 == temp3_1 ? 1 : 0) << 0xe | 0x3000;
							
							if (*(uint8_t*)((char*)eax_5)[1] & 1) {
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
							
							if (type != 3) {
								float var_d4_1 = (var_4c_1 * vertex[5] + var_5c_1 * vertex[4] + var_6c * vertex[3]);
								float var_d0_1 = (var_48_1 * vertex[5] + var_58_1 * vertex[4] + var_68_1 * vertex[3]);
								float var_cc_1 = (var_44_1 * vertex[5] + var_54_1 * vertex[4] + var_64_1 * vertex[3]);
								float x87_r5_36 = object->scale_x;
								float temp6_1 = 0f;
								x87_r5_36 - temp6_1;
								eax_10 = (x87_r5_36 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_36, temp6_1) ? 1 : 0) << 0xa | (x87_r5_36 == temp6_1 ? 1 : 0) << 0xe | 0x3000;
								
								if (!(*(uint8_t*)((char*)eax_10)[1] & 0x40)) {
									var_d4_1 = (var_d4_1 / fabsl(object->scale_x));
								}
								
								float x87_r5_40 = object->scale_y;
								float temp7_1 = 0f;
								x87_r5_40 - temp7_1;
								eax_10 = (x87_r5_40 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_40, temp7_1) ? 1 : 0) << 0xa | (x87_r5_40 == temp7_1 ? 1 : 0) << 0xe | 0x3000;
								
								if (!(*(uint8_t*)((char*)eax_10)[1] & 0x40)) {
									var_d0_1 = (var_d0_1 / fabsl(object->scale_y));
								}
								
								float x87_r5_44 = object->scale_z;
								float temp8_1 = 0f;
								x87_r5_44 - temp8_1;
								eax_10 = (x87_r5_44 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_44, temp8_1) ? 1 : 0) << 0xa | (x87_r5_44 == temp8_1 ? 1 : 0) << 0xe | 0x3000;
								
								if (!(*(uint8_t*)((char*)eax_10)[1] & 0x40)) {
									var_cc_1 = (var_cc_1 / fabsl(object->scale_z));
								}
								
								float x87_r5_52 = var_6c * vertex[0] + var_4c_1 * vertex[2] + var_5c_1 * vertex[1] + var_3c_1;
								float var_18_1 = (var_68_1 * vertex[0] + var_48_1 * vertex[2] + var_58_1 * vertex[1] + var_38_1);
								float var_14_1 = (var_64_1 * vertex[0] + var_44_1 * vertex[2] + var_54_1 * vertex[1] + var_34_1);
								float x87_r2_5;
								float x87_r5_56;
								
								if (!type) {
									float x87_r5_84 = light->pos_x - x87_r5_52;
									float x87_r4_64 = light->pos_y - var_18_1;
									float x87_r3_19 = light->pos_z - var_14_1;
									float x87_r2_16 = x87_r3_19 * x87_r3_19 + x87_r4_64 * x87_r4_64 + x87_r5_84 * x87_r5_84;
									float temp10_1 = 0f;
									x87_r2_16 - temp10_1;
									eax_10 = (x87_r2_16 < temp10_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_16, temp10_1) ? 1 : 0) << 0xa | (x87_r2_16 == temp10_1 ? 1 : 0) << 0xe | 0x1000;
									float x87_r3_20;
									
									if (*(uint8_t*)((char*)eax_10)[1] & 0x40) {
										x87_r3_20 = x87_r2_16;
										x87_r2_5 = 0f;
									} else {
										x87_r2_5 = sqrtl(x87_r2_16);
										float x87_r1_18 = 1f / x87_r2_5;
										x87_r5_84 = x87_r5_84 * x87_r1_18;
										x87_r4_64 = x87_r4_64 * x87_r1_18;
										x87_r3_20 = x87_r3_19 * x87_r1_18;
									}
									
									float temp14_1 = light->attenEnd;
									x87_r2_5 - temp14_1;
									eax_10 = (x87_r2_5 < temp14_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_5, temp14_1) ? 1 : 0) << 0xa | (x87_r2_5 == temp14_1 ? 1 : 0) << 0xe | 0x1000;
									
									if (!(*(uint8_t*)((char*)eax_10)[1] & 1)) {
										label_412ac7:
										// x87_r6_79 = x87_r2_5;
									} else {
										float temp16_1 = light->attenStart;
										x87_r2_5 - temp16_1;
										eax_10 = (x87_r2_5 < temp16_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_5, temp16_1) ? 1 : 0) << 0xa | (x87_r2_5 == temp16_1 ? 1 : 0) << 0xe | 0x1000;
										
										if (*(uint8_t*)((char*)eax_10)[1] & 0x41) {
											x87_r3_20 = x87_r2_5;
										} else {
											var_ec_2 = (1f - (x87_r2_5 - light->attenStart) / (light->attenEnd - light->attenStart));
										}
										
										x87_r5_56 = x87_r3_20 * var_cc_1 + x87_r4_64 * var_d0_1 + x87_r5_84 * var_d4_1;
										float temp19_1 = 0f;
										x87_r5_56 - temp19_1;
										eax_10 = (x87_r5_56 < temp19_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_56, temp19_1) ? 1 : 0) << 0xa | (x87_r5_56 == temp19_1 ? 1 : 0) << 0xe | 0x2800;
										
										if (*(uint8_t*)((char*)eax_10)[1] & 0x41) {
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
									float x87_r5_63 = light->pos_x - x87_r5_52;
									float x87_r4_46 = light->pos_y - var_18_1;
									float x87_r3_13 = light->pos_z - var_14_1;
									float x87_r2_4 = x87_r3_13 * x87_r3_13 + x87_r4_46 * x87_r4_46 + x87_r5_63 * x87_r5_63;
									float temp12_1 = 0f;
									x87_r2_4 - temp12_1;
									eax_10 = (x87_r2_4 < temp12_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_4, temp12_1) ? 1 : 0) << 0xa | (x87_r2_4 == temp12_1 ? 1 : 0) << 0xe | 0x1000;
									float x87_r3_14;
									
									if (*(uint8_t*)((char*)eax_10)[1] & 0x40) {
										x87_r3_14 = x87_r2_4;
										x87_r2_5 = 0f;
									} else {
										x87_r2_5 = sqrtl(x87_r2_4);
										float x87_r1_6 = 1f / x87_r2_5;
										x87_r5_63 = x87_r5_63 * x87_r1_6;
										x87_r4_46 = x87_r4_46 * x87_r1_6;
										x87_r3_14 = x87_r3_13 * x87_r1_6;
									}
									
									float temp17_1 = light->attenEnd;
									x87_r2_5 - temp17_1;
									eax_10 = (x87_r2_5 < temp17_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_5, temp17_1) ? 1 : 0) << 0xa | (x87_r2_5 == temp17_1 ? 1 : 0) << 0xe | 0x1000;
									
									if (!(*(uint8_t*)((char*)eax_10)[1] & 1)) {
										goto label_412ac7;
									}
									
									float temp18_1 = light->attenStart;
									x87_r2_5 - temp18_1;
									eax_10 = (x87_r2_5 < temp18_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_5, temp18_1) ? 1 : 0) << 0xa | (x87_r2_5 == temp18_1 ? 1 : 0) << 0xe | 0x1000;
									
									if (*(uint8_t*)((char*)eax_10)[1] & 0x41) {
										x87_r3_14 = x87_r2_5;
									} else {
										var_ec_2 = (1f - (x87_r2_5 - light->attenStart) / (light->attenEnd - light->attenStart));
									}
									
									float x87_r2_12 = x87_r3_14 * var_cc_1 + x87_r4_46 * var_d0_1 + x87_r5_63 * var_d4_1;
									float var_70_1 = x87_r2_12;
									float temp20_1 = 0f;
									x87_r2_12 - temp20_1;
									eax_10 = (x87_r2_12 < temp20_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_12, temp20_1) ? 1 : 0) << 0xa | (x87_r2_12 == temp20_1 ? 1 : 0) << 0xe | 0x1800;
									
									if (*(uint8_t*)((char*)eax_10)[1] & 0x41) {
										// x87_r6_79 = x87_r3_14;
									} else {
										float x87_r5_65 = x87_r3_14 * light->dir_z + x87_r4_46 * light->dir_y + x87_r5_63 * light->dir_x;
										float var_e8_2 = x87_r5_65;
										float temp21_1 = 0f;
										x87_r5_65 - temp21_1;
										eax_10 = (x87_r5_65 < temp21_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_65, temp21_1) ? 1 : 0) << 0xa | (x87_r5_65 == temp21_1 ? 1 : 0) << 0xe | 0x3000;
										
										if (!(*(uint8_t*)((char*)eax_10)[1] & 0x41)) {
											float st0_5;
											bool c2_16;
											st0_5 = __fcos(light->penumbra * 0.0174532924f);
											float var_dc_2 = st0_5;
											float st0_6;
											bool c2_17;
											st0_6 = __fcos(light->umbra * 0.0174532924f);
											float var_d8_2 = st0_6;
											float x87_r5_72 = var_e8_2;
											float temp22_1 = var_dc_2;
											x87_r5_72 - temp22_1;
											eax_10 = (x87_r5_72 < temp22_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_72, temp22_1) ? 1 : 0) << 0xa | (x87_r5_72 == temp22_1 ? 1 : 0) << 0xe | 0x3000;
											
											if (!(*(uint8_t*)((char*)eax_10)[1] & 0x41)) {
												float x87_r5_73 = var_e8_2;
												float temp23_1 = var_d8_2;
												x87_r5_73 - temp23_1;
												eax_10 = (x87_r5_73 < temp23_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_73, temp23_1) ? 1 : 0) << 0xa | (x87_r5_73 == temp23_1 ? 1 : 0) << 0xe | 0x3000;
												
												if (*(uint8_t*)((char*)eax_10)[1] & 1) {
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
								} else {
									// x87_r6_79 = x87_r5_52;
									
									if (type == 2) {
										x87_r5_56 = var_cc_1 * light->dir_z + var_d0_1 * light->dir_y + var_d4_1 * light->dir_x;
										float temp15_1 = 0f;
										x87_r5_56 - temp15_1;
										eax_10 = (x87_r5_56 < temp15_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_56, temp15_1) ? 1 : 0) << 0xa | (x87_r5_56 == temp15_1 ? 1 : 0) << 0xe | 0x2800;
										
										if (*(uint8_t*)((char*)eax_10)[1] & 0x41) {
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
							} else {
								vertex[6] = (ambient_color_r * light->color_r + vertex[6]);
								vertex[7] = (ambient_color_g * light->color_g + vertex[7]);
								vertex[8] = (ambient_color_b * light->color_b + vertex[8]);
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
