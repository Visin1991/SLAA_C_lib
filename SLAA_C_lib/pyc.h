#pragma once

typedef struct {
	float x;
	float y;
	float z;
}vertex_pos;

typedef struct {
	float u;
	float v;
}vertex_uv;

typedef struct {
	float x;
	float y;
	float z;
}vertex_nor;

typedef struct {
	int num;
	vertex_pos* pos_buffer;
	vertex_uv* uv_buffer;
	vertex_nor* nor_buffer;
}vertex_buffer_array;


//-----------------------------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif
//-----------------------------------------------------------------------------------------------
// Cpp functions called by C; Becuase c source cann't include c++ header files. so just declare a extern c function
void _Cpp_ExportFBX();


//-----------------------------------------------------------------------------------------------
// C Functions for c++ to test
__declspec(dllexport) vertex_buffer_array* pyc_create_vba(int num);
void __declspec(dllexport) pyc_free_vba(vertex_buffer_array* _vba);
void __declspec(dllexport) pyc_export_fbx();

#ifdef __cplusplus
}
#endif