#coding=utf-8

import shutil
import os

current_dir = os.path.dirname(os.path.realpath(__file__))

src_path = (current_dir + "/../x64/Debug/SLAA_C_lib.dll").replace("\\","/")
dst_path = (current_dir + "/DLL/SLAA_C_lib.dll").replace("\\","/")
shutil.copy(src_path, dst_path)

src_path = (current_dir + "/../FBXSDK/debug/libfbxsdk.dll").replace("\\","/")
dst_path = (current_dir + "/DLL/libfbxsdk.dll").replace("\\","/")
shutil.copy(src_path, dst_path)