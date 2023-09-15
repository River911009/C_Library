from ctypes import cdll,POINTER,c_int,c_float
import numpy as np

# load dll
lib=cdll.LoadLibrary("./lib.so")

# define parameter data types for each function
lib.lib_add.argtypes=[c_float,c_float]
lib.lib_add.restype=c_float

lib.lib_sub.argtypes=[c_float,c_float]
lib.lib_sub.restype=c_float

lib.lib_array.argtypes=[POINTER(c_int),c_int,c_int]
lib.lib_array.restype=POINTER(c_int)

# create int32 ndarray
mat=np.random.rand(3,4)*10
mat=mat.astype(np.int32)

# convert ndarray into ctypes array
cmat=mat.ctypes.data_as(POINTER(c_int))

# call lib function
lib.lib_array(cmat,4,3)

# convert from ctypes array back to ndarray
ret_mat=np.ctypeslib.as_array(cmat,(3,4))

print(lib.lib_add(1.5,2.6))
print(lib.lib_sub(1.5,2.6))

print(mat)
print(cmat)
print(ret_mat)

