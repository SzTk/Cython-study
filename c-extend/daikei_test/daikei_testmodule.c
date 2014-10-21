#include <Python.h>

extern int main();

static PyObject *
daikei_test(PyObject *self, PyObject *args)
{
    int sts;
    if (!PyArg_ParseTuple(args, ""))
        return NULL;
    sts = main();
    return Py_BuildValue("i", sts);
}

static PyMethodDef DaikeiMethods[] = {
    {"run",  main, METH_VARARGS,
     "Execute daikei_test."},
};

PyMODINIT_FUNC
initdaikei_test(void)
{
    (void) Py_InitModule("daikei_test", DaikeiMethods);
}
