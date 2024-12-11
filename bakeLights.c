void bakeLights(int32_t scxData, struct Object* object, struct Light* light, float* arg4) {

	struct Object** otherObjects = object->otherObjects;
	struct Object* otherObject2 = object->otherObject2;
	int32_t var_60 = 0;
	int32_t var_50 = 0;
	int32_t var_40 = 0;
	int32_t var_30 = 0x3f800000;
	
	if (otherObject2) {
		bakeLights(scxData, otherObject2, light, arg4);
	}
	
	if (otherObjects || object->otherObject1) {
		object->scale_x
		long double x87_r6_1 = (long double)object->scale_y;
		long double x87_r5_1 = (long double)object->rot_x;
		long double st0_1;
		bool c2_1;
		st0_1 = __fcos(x87_r5_1);
		float scale_z = object->scale_z;
		float rot_y = object->rot_y;
		int32_t var_88_1 = 0x3f800000;
		int32_t var_98_1 = 0;
		int32_t var_a8_1 = 0;
		int32_t var_b8_1 = 0;
		float var_dc_1 = (float)st0_1;
		long double st0_2;
		bool c2_2;
		st0_2 = __fsin(x87_r5_1);
		float var_e4_1 = (float)st0_2;
		long double x87_r5_4 = (long double)0f - (long double)0f;
		float var_c0_1 = (float)x87_r5_4;
		float var_b0_1 = (float)((long double)var_dc_1 * x87_r6_1 - (long double)0f);
		float var_a0_1 = (float)((long double)0f - (long double)var_e4_1 * (long double)scale_z);
		float var_90_1 = (float)x87_r5_4;
		long double x87_r6_3 = (long double)0f + (long double)0f;
		float var_bc_1 = (float)x87_r6_3;
		float var_ac_1 = (float)((long double)(float)x87_r6_1 * (long double)var_e4_1 + (long double)0f);
		float var_9c_2 = (float)((long double)var_dc_1 * (long double)scale_z + (long double)0f);
		float var_8c_1 = (float)x87_r6_3;
		long double st0_3;
		bool c2_3;
		st0_3 = __fcos((long double)rot_y);
		float var_e8_1 = (float)st0_3;
		long double st0_4;
		bool c2_4;
		st0_4 = __fsin((long double)rot_y);
		float var_ec_1 = (float)st0_4;
		float var_c4 = (float)((long double)var_bc_1 * (long double)var_ec_1 + (long double)var_e8_1 * x87_r6_1);
		long double x87_r7_3 = (long double)0f;
		float var_b4_1 = (float)((long double)var_ac_1 * (long double)var_ec_1 + x87_r7_3);
		float var_a4_1 = (float)((long double)var_ec_1 * (long double)var_9c_2 + x87_r7_3);
		float var_94_1 = (float)((long double)var_8c_1 * (long double)var_ec_1 + x87_r7_3);
		float var_bc_2 = (float)((long double)var_bc_1 * (long double)var_e8_1 - (long double)(float)x87_r6_1 * (long double)var_ec_1);
		long double x87_r7_7 = (long double)0f;
		float scale_z_1 = scale_z;
		float var_ac_2 = (float)((long double)var_ac_1 * (long double)var_e8_1 - x87_r7_7);
		float var_9c_3 = (float)((long double)var_e8_1 * (long double)var_9c_2 - x87_r7_7);
		float var_8c_2 = (float)((long double)var_8c_1 * (long double)var_e8_1 - x87_r7_7);
		sub_412b20(&var_c4, (float)(long double)object->rot_z);
		int32_t var_60_1 = 0;
		float var_94_2 = (float)((long double)object->trans_x + (long double)var_94_1);
		float var_90_2 = (float)((long double)object->trans_y + (long double)var_90_1);
		float var_8c_3 = (float)((long double)object->trans_z + (long double)var_8c_2);
		float var_6c = (float)((long double)var_c0_1 * (long double)arg4[4] + (long double)var_bc_2 * (long double)arg4[8] + (long double)var_c4 * (long double)*(uint32_t*)arg4);
		float var_68_1 = (float)((long double)var_c0_1 * (long double)arg4[5] + (long double)var_bc_2 * (long double)arg4[9] + (long double)var_c4 * (long double)arg4[1]);
		float var_64_1 = (float)((long double)var_c0_1 * (long double)arg4[6] + (long double)var_bc_2 * (long double)arg4[0xa] + (long double)var_c4 * (long double)arg4[2]);
		float var_5c_1 = (float)((long double)var_b4_1 * (long double)*(uint32_t*)arg4 + (long double)var_ac_2 * (long double)arg4[8] + (long double)var_b0_1 * (long double)arg4[4]);
		float var_58_1 = (float)((long double)var_ac_2 * (long double)arg4[9] + (long double)var_b4_1 * (long double)arg4[1] + (long double)var_b0_1 * (long double)arg4[5]);
		struct Object* otherObject1 = object->otherObject1;
		int32_t var_50_1 = 0;
		int32_t var_40_1 = 0;
		int32_t var_30_1 = 0x3f800000;
		float var_54_1 = (float)((long double)var_b0_1 * (long double)arg4[6] + (long double)var_ac_2 * (long double)arg4[0xa] + (long double)var_b4_1 * (long double)arg4[2]);
		float var_4c_1 = (float)((long double)var_a4_1 * (long double)*(uint32_t*)arg4 + (long double)var_a0_1 * (long double)arg4[4] + (long double)var_9c_3 * (long double)arg4[8]);
		float var_48_1 = (float)((long double)var_a0_1 * (long double)arg4[5] + (long double)var_a4_1 * (long double)arg4[1] + (long double)var_9c_3 * (long double)arg4[9]);
		float var_44_1 = (float)((long double)var_9c_3 * (long double)arg4[0xa] + (long double)var_a0_1 * (long double)arg4[6] + (long double)var_a4_1 * (long double)arg4[2]);
		float var_3c_1 = (float)((long double)var_94_2 * (long double)*(uint32_t*)arg4 + (long double)var_90_2 * (long double)arg4[4] + (long double)var_8c_3 * (long double)arg4[8] + (long double)arg4[0xc]);
		float var_38_1 = (float)((long double)var_90_2 * (long double)arg4[5] + (long double)var_8c_3 * (long double)arg4[9] + (long double)var_94_2 * (long double)arg4[1] + (long double)arg4[0xd]);
		float var_34_1 = (float)((long double)var_90_2 * (long double)arg4[6] + (long double)var_8c_3 * (long double)arg4[0xa] + (long double)var_94_2 * (long double)arg4[2] + (long double)arg4[0xe]);
		
		if (otherObject1) {
			bakeLights(scxData, otherObject1, light, &var_6c);
		}
		
		struct Object** otherObjects_1 = otherObjects;
		
		if (otherObjects_1) {
			void* eax_2;
			int32_t ecx_1;
			eax_2 = sub_418b7d(*(uint32_t*)otherObjects_1, 4);
			int32_t eax_3 = otherObjects_1[1];
			
			if (eax_3 - 1 >= 0) {
				int32_t edx_3 = (eax_3 - 1) * 0x18;
				int32_t var_e4_2 = edx_3;
				int32_t var_e0_3 = eax_3;
				
				while (true) {
					float diffuse_color_b = 1f;
					long double x87_r7_66 = (long double)1f;
					long double x87_r6_79 = (long double)1f;
					void* ecx_3 = &otherObjects_1[3]->name[edx_3];
					float ambient_color_r = 1f;
					float ambient_color_g = 1f;
					float ambient_color_b = 1f;
					struct Shader* shader = *(uint32_t*)((char*)ecx_3 + 0x14);
					
					if (shader) {
						long double x87_r5_13 = (long double)shader->luminance*(int32_t*)((char*)shader + 8);
						long double temp2_1 = (long double)0f;
						x87_r5_13 - temp2_1;
						int32_t eax_5;
						eax_5 = (x87_r5_13 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_13, temp2_1) ? 1 : 0) << 0xa | (x87_r5_13 == temp2_1 ? 1 : 0) << 0xe | 0x3000;
						
						if (*(uint8_t*)((char*)eax_5)[1] & 0x40) {
							long double x87_r5_14 = (long double)shader->blendAmount*(int32_t*)((char*)shader + 0xc);
							long double temp3_1 = (long double)1f;
							x87_r5_14 - temp3_1;
							eax_5 = (x87_r5_14 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_14, temp3_1) ? 1 : 0) << 0xa | (x87_r5_14 == temp3_1 ? 1 : 0) << 0xe | 0x3000;
							
							if (*(uint8_t*)((char*)eax_5)[1] & 1) {
								label_41252d:
								x87_r7_66 = (long double)shader->diffuse_color_r;
								x87_r6_79 = (long double)shader->diffuse_color_g;
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
								float var_d4_1 = (float)((long double)var_4c_1 * (long double)vertex[5] + (long double)var_5c_1 * (long double)vertex[4] + (long double)var_6c * (long double)vertex[3]);
								float var_d0_1 = (float)((long double)var_48_1 * (long double)vertex[5] + (long double)var_58_1 * (long double)vertex[4] + (long double)var_68_1 * (long double)vertex[3]);
								float var_cc_1 = (float)((long double)var_44_1 * (long double)vertex[5] + (long double)var_54_1 * (long double)vertex[4] + (long double)var_64_1 * (long double)vertex[3]);
								long double x87_r5_36 = (long double)object->scale_x;
								long double temp6_1 = (long double)0f;
								x87_r5_36 - temp6_1;
								eax_10 = (x87_r5_36 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_36, temp6_1) ? 1 : 0) << 0xa | (x87_r5_36 == temp6_1 ? 1 : 0) << 0xe | 0x3000;
								
								if (!(*(uint8_t*)((char*)eax_10)[1] & 0x40)) {
									var_d4_1 = (float)((long double)var_d4_1 / fabsl((long double)object->scale_x));
								}
								
								long double x87_r5_40 = (long double)object->scale_y;
								long double temp7_1 = (long double)0f;
								x87_r5_40 - temp7_1;
								eax_10 = (x87_r5_40 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_40, temp7_1) ? 1 : 0) << 0xa | (x87_r5_40 == temp7_1 ? 1 : 0) << 0xe | 0x3000;
								
								if (!(*(uint8_t*)((char*)eax_10)[1] & 0x40)) {
									var_d0_1 = (float)((long double)var_d0_1 / fabsl((long double)object->scale_y));
								}
								
								long double x87_r5_44 = (long double)object->scale_z;
								long double temp8_1 = (long double)0f;
								x87_r5_44 - temp8_1;
								eax_10 = (x87_r5_44 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_44, temp8_1) ? 1 : 0) << 0xa | (x87_r5_44 == temp8_1 ? 1 : 0) << 0xe | 0x3000;
								
								if (!(*(uint8_t*)((char*)eax_10)[1] & 0x40)) {
									var_cc_1 = (float)((long double)var_cc_1 / fabsl((long double)object->scale_z));
								}
								
								long double x87_r5_52 = (long double)var_6c * (long double)*(uint32_t*)vertex + (long double)var_4c_1 * (long double)vertex[2] + (long double)var_5c_1 * (long double)vertex[1] + (long double)var_3c_1;
								float var_18_1 = (float)((long double)var_68_1 * (long double)*(uint32_t*)vertex + (long double)var_48_1 * (long double)vertex[2] + (long double)var_58_1 * (long double)vertex[1] + (long double)var_38_1);
								float var_14_1 = (float)((long double)var_64_1 * (long double)*(uint32_t*)vertex + (long double)var_44_1 * (long double)vertex[2] + (long double)var_54_1 * (long double)vertex[1] + (long double)var_34_1);
								long double x87_r2_5;
								long double x87_r5_56;
								
								if (!type) {
									long double x87_r5_84 = (long double)light->pos_x - x87_r5_52;
									long double x87_r4_64 = (long double)light->pos_y - (long double)var_18_1;
									long double x87_r3_19 = (long double)light->pos_z - (long double)var_14_1;
									long double x87_r2_16 = x87_r3_19 * x87_r3_19 + x87_r4_64 * x87_r4_64 + x87_r5_84 * x87_r5_84;
									long double temp10_1 = (long double)0f;
									x87_r2_16 - temp10_1;
									eax_10 = (x87_r2_16 < temp10_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_16, temp10_1) ? 1 : 0) << 0xa | (x87_r2_16 == temp10_1 ? 1 : 0) << 0xe | 0x1000;
									long double x87_r3_20;
									
									if (*(uint8_t*)((char*)eax_10)[1] & 0x40) {
										x87_r3_20 = x87_r2_16;
										x87_r2_5 = (long double)0f;
									} else {
										x87_r2_5 = sqrtl(x87_r2_16);
										long double x87_r1_18 = (long double)1f / x87_r2_5;
										x87_r5_84 = x87_r5_84 * x87_r1_18;
										x87_r4_64 = x87_r4_64 * x87_r1_18;
										x87_r3_20 = x87_r3_19 * x87_r1_18;
									}
									
									long double temp14_1 = (long double)light->attenEnd;
									x87_r2_5 - temp14_1;
									eax_10 = (x87_r2_5 < temp14_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_5, temp14_1) ? 1 : 0) << 0xa | (x87_r2_5 == temp14_1 ? 1 : 0) << 0xe | 0x1000;
									
									if (!(*(uint8_t*)((char*)eax_10)[1] & 1)) {
										label_412ac7:
										x87_r6_79 = x87_r2_5;
									} else {
										long double temp16_1 = (long double)light->attenStart;
										x87_r2_5 - temp16_1;
										eax_10 = (x87_r2_5 < temp16_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_5, temp16_1) ? 1 : 0) << 0xa | (x87_r2_5 == temp16_1 ? 1 : 0) << 0xe | 0x1000;
										
										if (*(uint8_t*)((char*)eax_10)[1] & 0x41) {
											x87_r3_20 = x87_r2_5;
										} else {
											var_ec_2 = (float)((long double)1f - (x87_r2_5 - (long double)light->attenStart) / ((long double)light->attenEnd - (long double)light->attenStart));
										}
										
										x87_r5_56 = x87_r3_20 * (long double)var_cc_1 + x87_r4_64 * (long double)var_d0_1 + x87_r5_84 * (long double)var_d4_1;
										long double temp19_1 = (long double)0f;
										x87_r5_56 - temp19_1;
										eax_10 = (x87_r5_56 < temp19_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_56, temp19_1) ? 1 : 0) << 0xa | (x87_r5_56 == temp19_1 ? 1 : 0) << 0xe | 0x2800;
										
										if (*(uint8_t*)((char*)eax_10)[1] & 0x41) {
											x87_r6_79 = x87_r5_56;
										} else {
											long double x87_r5_87 = x87_r5_56 * (long double)light->intensity * (long double)var_ec_2;
											float var_7c_3 = (float)(x87_r5_87 * (long double)light->color_g * x87_r6_79);
											long double x87_r5_89 = x87_r5_87 * (long double)light->color_b * (long double)diffuse_color_b;
											vertex[6] = (float)((long double)(float)(x87_r5_87 * (long double)light->color_r * x87_r7_66) + (long double)vertex[6]);
											vertex[7] = (float)((long double)var_7c_3 + (long double)vertex[7]);
											vertex[8] = (float)(x87_r5_89 + (long double)vertex[8]);
										}
									}
								} else if (type == 1) {
									long double x87_r5_63 = (long double)light->pos_x - x87_r5_52;
									long double x87_r4_46 = (long double)light->pos_y - (long double)var_18_1;
									long double x87_r3_13 = (long double)light->pos_z - (long double)var_14_1;
									long double x87_r2_4 = x87_r3_13 * x87_r3_13 + x87_r4_46 * x87_r4_46 + x87_r5_63 * x87_r5_63;
									long double temp12_1 = (long double)0f;
									x87_r2_4 - temp12_1;
									eax_10 = (x87_r2_4 < temp12_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_4, temp12_1) ? 1 : 0) << 0xa | (x87_r2_4 == temp12_1 ? 1 : 0) << 0xe | 0x1000;
									long double x87_r3_14;
									
									if (*(uint8_t*)((char*)eax_10)[1] & 0x40) {
										x87_r3_14 = x87_r2_4;
										x87_r2_5 = (long double)0f;
									} else {
										x87_r2_5 = sqrtl(x87_r2_4);
										long double x87_r1_6 = (long double)1f / x87_r2_5;
										x87_r5_63 = x87_r5_63 * x87_r1_6;
										x87_r4_46 = x87_r4_46 * x87_r1_6;
										x87_r3_14 = x87_r3_13 * x87_r1_6;
									}
									
									long double temp17_1 = (long double)light->attenEnd;
									x87_r2_5 - temp17_1;
									eax_10 = (x87_r2_5 < temp17_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_5, temp17_1) ? 1 : 0) << 0xa | (x87_r2_5 == temp17_1 ? 1 : 0) << 0xe | 0x1000;
									
									if (!(*(uint8_t*)((char*)eax_10)[1] & 1)) {
										goto label_412ac7;
									}
									
									long double temp18_1 = (long double)light->attenStart;
									x87_r2_5 - temp18_1;
									eax_10 = (x87_r2_5 < temp18_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_5, temp18_1) ? 1 : 0) << 0xa | (x87_r2_5 == temp18_1 ? 1 : 0) << 0xe | 0x1000;
									
									if (*(uint8_t*)((char*)eax_10)[1] & 0x41) {
										x87_r3_14 = x87_r2_5;
									} else {
										var_ec_2 = (float)((long double)1f - (x87_r2_5 - (long double)light->attenStart) / ((long double)light->attenEnd - (long double)light->attenStart));
									}
									
									long double x87_r2_12 = x87_r3_14 * (long double)var_cc_1 + x87_r4_46 * (long double)var_d0_1 + x87_r5_63 * (long double)var_d4_1;
									float var_70_1 = (float)x87_r2_12;
									long double temp20_1 = (long double)0f;
									x87_r2_12 - temp20_1;
									eax_10 = (x87_r2_12 < temp20_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_12, temp20_1) ? 1 : 0) << 0xa | (x87_r2_12 == temp20_1 ? 1 : 0) << 0xe | 0x1800;
									
									if (*(uint8_t*)((char*)eax_10)[1] & 0x41) {
										x87_r6_79 = x87_r3_14;
									} else {
										long double x87_r5_65 = x87_r3_14 * (long double)light->dir_z + x87_r4_46 * (long double)light->dir_y + x87_r5_63 * (long double)light->dir_x;
										float var_e8_2 = (float)x87_r5_65;
										long double temp21_1 = (long double)0f;
										x87_r5_65 - temp21_1;
										eax_10 = (x87_r5_65 < temp21_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_65, temp21_1) ? 1 : 0) << 0xa | (x87_r5_65 == temp21_1 ? 1 : 0) << 0xe | 0x3000;
										
										if (!(*(uint8_t*)((char*)eax_10)[1] & 0x41)) {
											long double st0_5;
											bool c2_16;
											st0_5 = __fcos((long double)light->penumbra * (long double)0.0174532924f);
											float var_dc_2 = (float)st0_5;
											long double st0_6;
											bool c2_17;
											st0_6 = __fcos((long double)light->umbra * (long double)0.0174532924f);
											float var_d8_2 = (float)st0_6;
											long double x87_r5_72 = (long double)var_e8_2;
											long double temp22_1 = (long double)var_dc_2;
											x87_r5_72 - temp22_1;
											eax_10 = (x87_r5_72 < temp22_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_72, temp22_1) ? 1 : 0) << 0xa | (x87_r5_72 == temp22_1 ? 1 : 0) << 0xe | 0x3000;
											
											if (!(*(uint8_t*)((char*)eax_10)[1] & 0x41)) {
												long double x87_r5_73 = (long double)var_e8_2;
												long double temp23_1 = (long double)var_d8_2;
												x87_r5_73 - temp23_1;
												eax_10 = (x87_r5_73 < temp23_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_73, temp23_1) ? 1 : 0) << 0xa | (x87_r5_73 == temp23_1 ? 1 : 0) << 0xe | 0x3000;
												
												if (*(uint8_t*)((char*)eax_10)[1] & 1) {
													var_ec_2 = (float)(((long double)var_e8_2 - (long double)var_dc_2) / ((long double)var_d8_2 - (long double)var_dc_2) * (long double)var_ec_2);
												}
												
												long double x87_r5_80 = (long double)var_70_1 * (long double)light->intensity * (long double)var_ec_2;
												float var_7c_2 = (float)(x87_r5_80 * (long double)light->color_g * x87_r6_79);
												long double x87_r5_82 = x87_r5_80 * (long double)light->color_b * (long double)diffuse_color_b;
												vertex[6] = (float)((long double)(float)(x87_r5_80 * (long double)light->color_r * x87_r7_66) + (long double)vertex[6]);
												vertex[7] = (float)((long double)var_7c_2 + (long double)vertex[7]);
												vertex[8] = (float)(x87_r5_82 + (long double)vertex[8]);
											}
										}
									}
								} else {
									x87_r6_79 = x87_r5_52;
									
									if (type == 2) {
										x87_r5_56 = (long double)var_cc_1 * (long double)light->dir_z + (long double)var_d0_1 * (long double)light->dir_y + (long double)var_d4_1 * (long double)light->dir_x;
										long double temp15_1 = (long double)0f;
										x87_r5_56 - temp15_1;
										eax_10 = (x87_r5_56 < temp15_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_56, temp15_1) ? 1 : 0) << 0xa | (x87_r5_56 == temp15_1 ? 1 : 0) << 0xe | 0x2800;
										
										if (*(uint8_t*)((char*)eax_10)[1] & 0x41) {
											x87_r6_79 = x87_r5_56;
										} else {
											float var_7c_1 = (float)(x87_r5_56 * (long double)light->color_g * x87_r6_79);
											float var_78_1 = (float)(x87_r5_56 * (long double)light->color_b * (long double)diffuse_color_b);
											vertex[6] = (float)(x87_r5_56 * (long double)light->color_r * x87_r7_66 + (long double)vertex[6]);
											vertex[7] = (float)((long double)var_7c_1 + (long double)vertex[7]);
											vertex[8] = (float)((long double)var_78_1 + (long double)vertex[8]);
										}
									}
								}
							} else {
								vertex[6] = (float)((long double)ambient_color_r * (long double)light->color_r + (long double)vertex[6]);
								vertex[7] = (float)((long double)ambient_color_g * (long double)light->color_g + (long double)vertex[7]);
								vertex[8] = (float)((long double)ambient_color_b * (long double)light->color_b + (long double)vertex[8]);
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
