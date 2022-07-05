#coding=utf-8

from ctypes import *

#------------------------------------------------------------------
# python & c interface setup
class vertex_pos(Structure):
    _fields_=[("x",c_float),("y",c_float),("z",c_float)]

class vertex_uv(Structure):
    _fields_=[("u",c_float),("v",c_float)]

class vertex_nor(Structure):
    _fields_=[("x",c_float),("y",c_float),("z",c_float)]

class vertex_buffer_array(Structure):
    _fields_=[("num",c_int),("pos_buffer",POINTER(vertex_pos)),("uv_buffer",POINTER(vertex_uv)),("nor_buffer",POINTER(vertex_nor))]

SLAA_C_lib=CDLL("./DLL/SLAA_C_lib.dll")
slaa_vba_pointer=POINTER(vertex_buffer_array) # Define a pointer type
slaa_create_vba = SLAA_C_lib.pyc_create_vba         
slaa_create_vba.restype=slaa_vba_pointer      # Define a return type for function in c
slaa_free_vba = SLAA_C_lib.pyc_free_vba
#------------------------------------------------------------------

vba_p = slaa_vba_pointer()  # declare type
vba_p = slaa_create_vba(c_int(10))
slaa_free_vba(vba_p)

SLAA_C_lib.pyc_export_fbx()