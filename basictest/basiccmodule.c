#include <Python.h>

int myfunc(int a, int b) {return a+b;}

static PyObject * addemup(PyObject* self, PyObject* args)
{

    int a, b;

    if (!PyArg_ParseTuple(args, "ii", &a, &b))
        return NULL;

    return Py_BuildValue("i", myfunc(a,b));
}

static PyMethodDef basicMethods[] = {
    {"addemup", addemup, METH_VARARGS, "Do whatever I say. In this case, add two numbers."},
    {NULL, NULL, 0, NULL}
};
 
PyMODINIT_FUNC
initbasicc(void)
{
    (void) Py_InitModule("basicc", basicMethods);
}