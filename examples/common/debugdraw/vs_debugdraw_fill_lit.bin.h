static const uint8_t vs_debugdraw_fill_lit_glsl[473] =
{
	0x56, 0x53, 0x48, 0x09, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc8, 0x56, 0x5f, 0x03, 0x00, 0x06, 0x75, // VSH.......V_...u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x75, 0x5f, // _view.........u_
	0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // viewProj........
	0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // .u_model. .. ...
	0x94, 0x01, 0x00, 0x00, 0x69, 0x6e, 0x20, 0x75, 0x76, 0x65, 0x63, 0x34, 0x20, 0x61, 0x5f, 0x69, // ....in uvec4 a_i
	0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x3b, 0x0a, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, // ndices;.in vec3 
	0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x6f, 0x75, 0x74, 0x20, // a_position;.out 
	0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x3b, 0x0a, 0x6f, 0x75, 0x74, // vec3 v_view;.out
	0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x3b, 0x0a, 0x75, //  vec3 v_world;.u
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, // niform mat4 u_vi
	0x65, 0x77, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, // ew;.uniform mat4
	0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, 0x6e, 0x69, //  u_viewProj;.uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, // form mat4 u_mode
	0x6c, 0x5b, 0x33, 0x32, 0x5d, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, // l[32];.void main
	0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, //  ().{.  vec4 tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_1;.  tmpvar_
	0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // 1.w = 1.0;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, // var_1.xyz = a_po
	0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, // sition;.  vec4 t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // mpvar_2;.  tmpva
	0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x69, // r_2 = (u_model[i
	0x6e, 0x74, 0x28, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x78, 0x29, 0x5d, // nt(a_indices.x)]
	0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, //  * tmpvar_1);.  
	0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, // gl_Position = (u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, // _viewProj * tmpv
	0x61, 0x72, 0x5f, 0x32, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x20, // ar_2);.  v_view 
	0x3d, 0x20, 0x28, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, // = (u_view * tmpv
	0x61, 0x72, 0x5f, 0x32, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x77, // ar_2).xyz;.  v_w
	0x6f, 0x72, 0x6c, 0x64, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, // orld = tmpvar_2.
	0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                           // xyz;.}...
};
static const uint8_t vs_debugdraw_fill_lit_spv[1668] =
{
	0x56, 0x53, 0x48, 0x09, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc8, 0x56, 0x5f, 0x03, 0x00, 0x07, 0x75, // VSH.......V_...u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 0x0a, 0x75, // _model. .......u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x40, 0x00, 0x04, 0x00, 0x00, // _viewProj..@....
	0x00, 0x06, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // ..u_view........
	0x38, 0x06, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x00, 0x08, 0x00, // 8.....#.........
	0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, // ........GLSL.std
	0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // .450............
	0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // ................
	0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, // main....G...K...
	0x54, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, // T...X...[.......
	0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, // ................
	0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x27, 0x00, 0x00, 0x00, // main........'...
	0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x42, 0x6c, 0x6f, 0x63, 0x6b, 0x00, 0x00, 0x00, 0x00, // UniformBlock....
	0x06, 0x00, 0x05, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, // ....'.......u_vi
	0x65, 0x77, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x27, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ew......'.......
	0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x06, 0x00, 0x05, 0x00, // u_viewProj......
	0x27, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, // '.......u_model.
	0x05, 0x00, 0x03, 0x00, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, // ....)...........
	0x47, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x00, 0x00, 0x00, // G...a_indices...
	0x05, 0x00, 0x05, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, // ....K...a_positi
	0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x0a, 0x00, 0x54, 0x00, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, // on......T...@ent
	0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x67, 0x6c, // ryPointOutput.gl
	0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x05, 0x00, 0x09, 0x00, // _Position.......
	0x58, 0x00, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, // X...@entryPointO
	0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x76, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, 0x00, 0x00, // utput.v_view....
	0x05, 0x00, 0x09, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, // ....[...@entryPo
	0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, // intOutput.v_worl
	0x64, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x26, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, // d...G...&.......
	0x40, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // @...H...'.......
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ....H...'.......
	0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x27, 0x00, 0x00, 0x00, // #.......H...'...
	0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, // ............H...
	0x27, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // '...........H...
	0x27, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, // '.......#...@...
	0x48, 0x00, 0x05, 0x00, 0x27, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // H...'...........
	0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ....H...'.......
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x27, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ....H...'.......
	0x23, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x27, 0x00, 0x00, 0x00, // #.......H...'...
	0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, // ............G...
	0x27, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x29, 0x00, 0x00, 0x00, // '.......G...)...
	0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x29, 0x00, 0x00, 0x00, // ".......G...)...
	0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x47, 0x00, 0x00, 0x00, // !.......G...G...
	0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4b, 0x00, 0x00, 0x00, // ........G...K...
	0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x54, 0x00, 0x00, 0x00, // ........G...T...
	0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x58, 0x00, 0x00, 0x00, // ........G...X...
	0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x5b, 0x00, 0x00, 0x00, // ........G...[...
	0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, // ................
	0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, // !...............
	0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, // .... ...........
	0x07, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, // ................
	0x09, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, // .... ...........
	0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, // ................
	0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x15, 0x00, 0x00, 0x00, // ................
	0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x15, 0x00, 0x00, 0x00, //  .......+.......
	0x16, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x15, 0x00, 0x00, 0x00, // ........+.......
	0x1a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00, // ........+.......
	0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x18, 0x00, 0x04, 0x00, 0x24, 0x00, 0x00, 0x00, // .......?....$...
	0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, // ........+.......
	0x25, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x04, 0x00, 0x26, 0x00, 0x00, 0x00, // %... .......&...
	0x24, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x05, 0x00, 0x27, 0x00, 0x00, 0x00, // $...%.......'...
	0x24, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // $...$...&... ...
	0x28, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // (.......'...;...
	0x28, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // (...)....... ...
	0x2f, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, // /.......$...+...
	0x15, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // ....3....... ...
	0x46, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // F...........;...
	0x46, 0x00, 0x00, 0x00, 0x47, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // F...G....... ...
	0x4a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // J...........;...
	0x4a, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // J...K....... ...
	0x53, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // S...........;...
	0x53, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // S...T....... ...
	0x57, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // W...........;...
	0x57, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // W...X.......;...
	0x57, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, // W...[.......6...
	0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ................
	0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, // ........=.......
	0x48, 0x00, 0x00, 0x00, 0x47, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, // H...G...=.......
	0x4c, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, 0x00, // L...K...Q.......
	0x70, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, // p...L.......Q...
	0x09, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ....q...L.......
	0x51, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, // Q.......r...L...
	0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00, // ....P.......s...
	0x70, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, // p...q...r.......
	0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, // Q.......u...H...
	0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x04, 0x00, 0x15, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, // ....|.......v...
	0x75, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x00, // u...A.../...w...
	0x29, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, // ).......v...=...
	0x24, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, // $...x...w.......
	0x0c, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, // ....y...s...x...
	0x41, 0x00, 0x05, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, // A.../...{...)...
	0x16, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x24, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, // ....=...$...|...
	0x7b, 0x00, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, // {...........}...
	0x79, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x2f, 0x00, 0x00, 0x00, // y...|...A.../...
	0x80, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, // ....)...3...=...
	0x24, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, // $...............
	0x0c, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, // ........y.......
	0x4f, 0x00, 0x08, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, // O...............
	0x82, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ................
	0x4f, 0x00, 0x08, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, // O...........y...
	0x79, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // y...............
	0x3e, 0x00, 0x03, 0x00, 0x54, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, // >...T...}...>...
	0x58, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x5b, 0x00, 0x00, 0x00, // X.......>...[...
	0x86, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x02, 0x0e, 0x00, // ........8.......
	0x01, 0x00, 0x80, 0x08,                                                                         // ....
};
static const uint8_t vs_debugdraw_fill_lit_dx9[645] =
{
	0x56, 0x53, 0x48, 0x09, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc8, 0x56, 0x5f, 0x03, 0x00, 0x07, 0x75, // VSH.......V_...u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x06, 0x75, // _model. .......u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x04, 0x01, 0x80, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0a, 0x75, 0x5f, // _view.........u_
	0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x84, 0x00, 0x04, 0x00, 0x00, 0x00, // viewProj........
	0x40, 0x02, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0xfe, 0xff, 0x32, 0x00, 0x43, 0x54, 0x41, 0x42, // @.........2.CTAB
	0x1c, 0x00, 0x00, 0x00, 0x9a, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x03, 0x00, 0x00, 0x00, // ................
	0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x93, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, // ............X...
	0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........`.......
	0x70, 0x00, 0x00, 0x00, 0x02, 0x00, 0x80, 0x00, 0x04, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, // p...........x...
	0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x02, 0x00, 0x84, 0x00, 0x04, 0x00, 0x00, 0x00, // ................
	0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x00, // x.......u_model.
	0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........ .......
	0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0xab, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, // u_view..........
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, // ........u_viewPr
	0x6f, 0x6a, 0x00, 0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, // oj.vs_3_0.Micros
	0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, // oft (R) HLSL Sha
	0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, // der Compiler 10.
	0x31, 0x00, 0xab, 0xab, 0x51, 0x00, 0x00, 0x05, 0x88, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x80, 0x40, // 1...Q..........@
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, // ................
	0x02, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, // ................
	0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, // ................
	0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x01, 0x00, 0x07, 0xe0, 0x1f, 0x00, 0x00, 0x02, // ................
	0x05, 0x00, 0x01, 0x80, 0x02, 0x00, 0x07, 0xe0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, // ................
	0x88, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x90, 0x2e, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0xb0, // ................
	0x00, 0x00, 0x00, 0x80, 0x05, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0x55, 0x90, // ..............U.
	0x01, 0x20, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0xb0, 0x04, 0x00, 0x00, 0x05, 0x00, 0x00, 0x0f, 0x80, // . ..............
	0x00, 0x20, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0xb0, 0x01, 0x00, 0x00, 0x90, 0x00, 0x00, 0xe4, 0x80, // . ..............
	0x04, 0x00, 0x00, 0x05, 0x00, 0x00, 0x0f, 0x80, 0x02, 0x20, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0xb0, // ......... ......
	0x01, 0x00, 0xaa, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, // ................
	0x00, 0x00, 0xe4, 0x80, 0x03, 0x20, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0xb0, 0x05, 0x00, 0x00, 0x03, // ..... ..........
	0x01, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x55, 0x80, 0x85, 0x00, 0xe4, 0xa0, 0x04, 0x00, 0x00, 0x04, // ......U.........
	0x01, 0x00, 0x0f, 0x80, 0x84, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xe4, 0x80, // ................
	0x04, 0x00, 0x00, 0x04, 0x01, 0x00, 0x0f, 0x80, 0x86, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xaa, 0x80, // ................
	0x01, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0xe0, 0x87, 0x00, 0xe4, 0xa0, // ................
	0x00, 0x00, 0xff, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x05, 0x00, 0x00, 0x03, 0x01, 0x00, 0x07, 0x80, // ................
	0x00, 0x00, 0x55, 0x80, 0x81, 0x00, 0xe4, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x01, 0x00, 0x07, 0x80, // ..U.............
	0x80, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, // ................
	0x01, 0x00, 0x07, 0x80, 0x82, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xaa, 0x80, 0x01, 0x00, 0xe4, 0x80, // ................
	0x04, 0x00, 0x00, 0x04, 0x01, 0x00, 0x07, 0xe0, 0x83, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xff, 0x80, // ................
	0x01, 0x00, 0xe4, 0x80, 0x01, 0x00, 0x00, 0x02, 0x02, 0x00, 0x07, 0xe0, 0x00, 0x00, 0xe4, 0x80, // ................
	0xff, 0xff, 0x00, 0x00, 0x00,                                                                   // .....
};
static const uint8_t vs_debugdraw_fill_lit_dx11[956] =
{
	0x56, 0x53, 0x48, 0x09, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc8, 0x56, 0x5f, 0x03, 0x00, 0x06, 0x75, // VSH.......V_...u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0a, 0x75, 0x5f, // _view.........u_
	0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x40, 0x00, 0x04, 0x00, 0x00, 0x00, // viewProj..@.....
	0x07, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, // .u_model. ......
	0x70, 0x03, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x7c, 0x27, 0x35, 0x24, 0x2d, 0xe2, 0xb8, 0x12, // p...DXBC|'5$-...
	0x5c, 0xed, 0xf0, 0xe1, 0x5d, 0x10, 0xd9, 0xf9, 0x01, 0x00, 0x00, 0x00, 0x70, 0x03, 0x00, 0x00, // ....].......p...
	0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x00, // ....,...........
	0x49, 0x53, 0x47, 0x4e, 0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, // ISGNP...........
	0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // 8...............
	0x00, 0x00, 0x00, 0x00, 0x0f, 0x01, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........E.......
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, // ................
	0x42, 0x4c, 0x45, 0x4e, 0x44, 0x49, 0x4e, 0x44, 0x49, 0x43, 0x45, 0x53, 0x00, 0x50, 0x4f, 0x53, // BLENDINDICES.POS
	0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x68, 0x00, 0x00, 0x00, // ITION...OSGNh...
	0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........P.......
	0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, // ................
	0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ................
	0x01, 0x00, 0x00, 0x00, 0x07, 0x08, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x08, 0x00, 0x00, // ................
	0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, // SV_POSITION.TEXC
	0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0x74, 0x02, 0x00, 0x00, // OORD....SHDRt...
	0x40, 0x00, 0x01, 0x00, 0x9d, 0x00, 0x00, 0x00, 0x59, 0x08, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, // @.......Y...F. .
	0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x12, 0x10, 0x10, 0x00, // ........_.......
	0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ...._...r.......
	0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // g.... ..........
	0x65, 0x00, 0x00, 0x03, 0x72, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, // e...r ......e...
	0x72, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, // r ......h.......
	0x29, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x10, 0x10, 0x00, // )...............
	0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0a, // .....@......8...
	0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ........V.......
	0x46, 0x8e, 0x20, 0x06, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, // F. .............
	0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ....2...........
	0x46, 0x8e, 0x20, 0x06, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, // F. .............
	0x00, 0x00, 0x00, 0x00, 0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, // ............F...
	0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ....2...........
	0x46, 0x8e, 0x20, 0x06, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, // F. .............
	0x00, 0x00, 0x00, 0x00, 0xa6, 0x1a, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, // ............F...
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x06, 0x00, 0x00, 0x00, 0x00, // F.......F. .....
	0x0b, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, // ............8...
	0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x56, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ........V.......
	0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, // F. .........2...
	0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // ........F. .....
	0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, // ............F...
	0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ....2...........
	0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xa6, 0x0a, 0x10, 0x00, // F. .............
	0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, // ....F.......2...
	0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // . ......F. .....
	0x07, 0x00, 0x00, 0x00, 0xf6, 0x0f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, // ............F...
	0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ....8...r.......
	0x56, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // V.......F. .....
	0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ....2...r.......
	0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00, // F. .............
	0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, // ....F.......2...
	0x72, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // r.......F. .....
	0x02, 0x00, 0x00, 0x00, 0xa6, 0x0a, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, // ............F...
	0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ....2...r ......
	0x46, 0x82, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf6, 0x0f, 0x10, 0x00, // F. .............
	0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, // ....F.......6...
	0x72, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // r ......F.......
	0x3e, 0x00, 0x00, 0x01, 0x00, 0x02, 0x0e, 0x00, 0x01, 0x00, 0x80, 0x08,                         // >...........
};
static const uint8_t vs_debugdraw_fill_lit_mtl[919] =
{
	0x56, 0x53, 0x48, 0x09, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc8, 0x56, 0x5f, 0x03, 0x00, 0x07, 0x75, // VSH.......V_...u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x04, 0x20, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 0x0a, 0x75, // _model. .......u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x40, 0x00, 0x04, 0x00, 0x00, // _viewProj..@....
	0x00, 0x06, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // ..u_view........
	0x4b, 0x03, 0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x6d, 0x65, // K...#include <me
	0x74, 0x61, 0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, 0x0a, 0x23, 0x69, 0x6e, 0x63, // tal_stdlib>.#inc
	0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, 0x73, 0x69, 0x6d, 0x64, 0x2e, // lude <simd/simd.
	0x68, 0x3e, 0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, // h>..using namesp
	0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, // ace metal;..stru
	0x63, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, // ct _Global.{.   
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, //  float4x4 u_view
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, // ;.    float4x4 u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, // _viewProj;.    f
	0x6c, 0x6f, 0x61, 0x74, 0x34, 0x78, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, // loat4x4 u_model[
	0x33, 0x32, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, // 32];.};..struct 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x0a, // xlatMtlMain_out.
	0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x5f, 0x65, 0x6e, // {.    float3 _en
	0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, // tryPointOutput_v
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, // _view [[user(loc
	0x6e, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // n0)]];.    float
	0x33, 0x20, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, // 3 _entryPointOut
	0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x20, 0x5b, 0x5b, 0x75, 0x73, // put_v_world [[us
	0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, // er(locn1)]];.   
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, //  float4 gl_Posit
	0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x5d, 0x5d, // ion [[position]]
	0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, // ;.};..struct xla
	0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x0a, 0x7b, 0x0a, 0x20, 0x20, // tMtlMain_in.{.  
	0x20, 0x20, 0x75, 0x69, 0x6e, 0x74, 0x34, 0x20, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, //   uint4 a_indice
	0x73, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x30, 0x29, // s [[attribute(0)
	0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x61, // ]];.    float3 a
	0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x5b, 0x5b, 0x61, 0x74, 0x74, 0x72, // _position [[attr
	0x69, 0x62, 0x75, 0x74, 0x65, 0x28, 0x31, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, // ibute(1)]];.};..
	0x76, 0x65, 0x72, 0x74, 0x65, 0x78, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, // vertex xlatMtlMa
	0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, // in_out xlatMtlMa
	0x69, 0x6e, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, // in(xlatMtlMain_i
	0x6e, 0x20, 0x69, 0x6e, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, // n in [[stage_in]
	0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, // ], constant _Glo
	0x62, 0x61, 0x6c, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, // bal& _mtl_u [[bu
	0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, // ffer(0)]]).{.   
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, //  xlatMtlMain_out
	0x20, 0x6f, 0x75, 0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, //  out = {};.    f
	0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x31, 0x32, 0x31, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, // loat4 _121 = _mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x5b, 0x69, 0x6e, 0x74, 0x28, // l_u.u_model[int(
	0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x69, 0x6e, 0x64, 0x69, 0x63, 0x65, 0x73, 0x2e, 0x78, 0x29, 0x5d, // in.a_indices.x)]
	0x20, 0x2a, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x69, 0x6e, 0x2e, 0x61, 0x5f, 0x70, //  * float4(in.a_p
	0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, // osition, 1.0);. 
	0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, //    out.gl_Positi
	0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x76, 0x69, // on = _mtl_u.u_vi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x5f, 0x31, 0x32, 0x31, 0x3b, 0x0a, 0x20, // ewProj * _121;. 
	0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, //    out._entryPoi
	0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x20, // ntOutput_v_view 
	0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, // = (_mtl_u.u_view
	0x20, 0x2a, 0x20, 0x5f, 0x31, 0x32, 0x31, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, //  * _121).xyz;.  
	0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x5f, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, //   out._entryPoin
	0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x5f, 0x76, 0x5f, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x20, // tOutput_v_world 
	0x3d, 0x20, 0x5f, 0x31, 0x32, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // = _121.xyz;.    
	0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, // return out;.}...
	0x02, 0x0e, 0x00, 0x01, 0x00, 0x80, 0x08,                                                       // .......
};
extern const uint8_t* vs_debugdraw_fill_lit_pssl;
extern const uint32_t vs_debugdraw_fill_lit_pssl_size;
