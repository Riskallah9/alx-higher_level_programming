#include <stdio.h>
#include <Python.h>

void print_python_list_info(PyObject *p) {
    if (!PyList_Check(p)) {
        printf("Object is not a Python List.\n");
        return;
    }

    printf("[*] Size of the Python List = %ld\n", PyList_Size(p));
    printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

    for (Py_ssize_t i = 0; i < PyList_Size(p); i++) {
        PyObject *o = PyList_GetItem(p, i);

        if (PyUnicode_Check(o)) {
            printf("Element %ld: str\n", i);
        } else if (PyLong_Check(o)) {
            printf("Element %ld: int\n", i);
        } else if (PyFloat_Check(o)) {
            printf("Element %ld: float\n", i);
        } else if (PyTuple_Check(o)) {
            printf("Element %ld: tuple\n", i);
        } else if (PyList_Check(o)) {
            printf("Element %ld: list\n", i);
        } else {
            printf("Element %ld: unknown\n", i);
        }
    }
}
