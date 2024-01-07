#include <Pyton.h>

/**
 * print_python_list_info - prints basic info about python lists.
 * @p: A Pyobject list.
 */
void print_python-list-info(Pyobject *p)
{
        int sie, alloc, i;
        Pyobject *obj;

        size = Py_SIZE(p);
        alloc = ((Pylistobject *)p)->allocated;

        printf("[*] size of the Python List = %d\n", size);
        printf("[*] Allocated = %d\n", alloc);

        for (i = 0; i < size; i++)
        {
                printf("Element %d: ", i);

                obj = PyList_GetItem(p, i);
                printf("%s\n", Py_TYPE(obj)->tp_name);
        }
}
~                                       
