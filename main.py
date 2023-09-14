from ctypes import cdll,c_float 

lib=cdll.LoadLibrary("./lib.so")

lib.lib_add.argtypes=[c_float,c_float]
lib.lib_add.restype=c_float

lib.lib_sub.argtypes=[c_float,c_float]
lib.lib_sub.restype=c_float

print(lib.lib_add(1.5,2.6))
print(lib.lib_sub(1.5,2.6))

