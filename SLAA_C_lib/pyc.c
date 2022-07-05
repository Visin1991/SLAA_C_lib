#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "pyc.h"

vertex_buffer_array* pyc_create_vba(int num) {
	vertex_buffer_array* vba;
	vba = (vertex_buffer_array*)malloc(sizeof(vertex_buffer_array));
	assert(vba != NULL);
	vba->pos_buffer = (vertex_pos*)malloc(sizeof(vertex_pos) * num);
	vba->uv_buffer = (vertex_uv*)malloc(sizeof(vertex_uv) * num);
	vba->nor_buffer = (vertex_nor*)malloc(sizeof(vertex_nor) * num);

	for (int i = 0; i < num; i++)
	{
		vba->pos_buffer[i].x = i;
		vba->pos_buffer[i].y = i + 1;
		vba->pos_buffer[i].y = i + 2;

		vba->uv_buffer[i].u = i;
		vba->uv_buffer[i].v = i + 1;

		vba->nor_buffer[i].x = i;
		vba->nor_buffer[i].y = i + 1;
		vba->nor_buffer[i].y = i + 2;
	}
	vba->num = num;
	return vba;
}

void pyc_free_vba(vertex_buffer_array* _vba)
{
	assert(_vba != NULL);
	printf("Free all vba data and vba object!\n");
	printf("WTF !\n");
	printf("Number of vertex data is %d \n", _vba->num);
	printf("Crash !\n");

	for (int i = 0; i < _vba->num; i++)
	{
		printf("Index of %d : x is %f \n", i, _vba->pos_buffer[i].x);
	}

	//free(_vba->pos_buffer);
	//free(_vba->uv_buffer);
	//free(_vba->nor_buffer);
	free(_vba);
}

void pyc_export_fbx()
{
	_Cpp_ExportFBX();
}

