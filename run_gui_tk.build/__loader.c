
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/prelude.h"

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/tracing.h"
#include "nuitka/unfreezing.h"

/* Type bool, spell-checker: ignore stdbool */
#ifndef __cplusplus
#include <stdbool.h>
#endif

#if 417 > 0
static unsigned char *bytecode_data[417];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_config(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_models(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_models$command(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_models$firmware_info(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_models$lsr_info(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_services(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_services$bkr_connector(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_services$firmware_updater(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_services$udp_service(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tkinter$$45$preLoad(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ui(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_ui$main_window(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_utils(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_utils$logger(PyThreadState *tstate, PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_asyncio", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_bz2", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_ctypes", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_decimal", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_hashlib", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_lzma", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_multiprocessing", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_overlapped", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_queue", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_socket", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_ssl", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_tkinter", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_wmi", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"config", modulecode_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"models", modulecode_models, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"models.command", modulecode_models$command, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"models.firmware_info", modulecode_models$firmware_info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"models.lsr_info", modulecode_models$lsr_info, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyexpat", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"select", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"services", modulecode_services, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"services.bkr_connector", modulecode_services$bkr_connector, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"services.firmware_updater", modulecode_services$firmware_updater, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"services.udp_service", modulecode_services$udp_service, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter-preLoad", modulecode_tkinter$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ui", modulecode_ui, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ui.main_window", modulecode_ui$main_window, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"unicodedata", NULL, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_EXTENSION_MODULE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"utils", modulecode_utils, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"utils.logger", modulecode_utils$logger, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__future__", NULL, 0, 4686, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__hello__", NULL, 1, 930, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__phello__", NULL, 2, 326, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__phello__.ham", NULL, 3, 98, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__phello__.ham.eggs", NULL, 4, 103, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"__phello__.spam", NULL, 5, 331, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_aix_support", NULL, 6, 4681, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_android_support", NULL, 7, 7680, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_apple_support", NULL, 8, 3446, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_collections_abc", NULL, 9, 46990, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_colorize", NULL, 10, 4066, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_compat_pickle", NULL, 11, 7156, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_compression", NULL, 12, 7769, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_markupbase", NULL, 13, 12397, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_opcode_metadata", NULL, 14, 10642, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_osx_support", NULL, 15, 18091, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_py_abc", NULL, 16, 7156, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pydatetime", NULL, 17, 94539, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pydecimal", NULL, 18, 217187, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyio", NULL, 19, 111936, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pylong", NULL, 20, 11122, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl", NULL, 21, 91, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl._threading_handler", NULL, 22, 4826, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.base_eventqueue", NULL, 23, 4474, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.commands", NULL, 24, 25784, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.completing_reader", NULL, 25, 10571, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.console", NULL, 26, 9648, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.historical_reader", NULL, 27, 21596, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.input", NULL, 28, 3946, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.keymap", NULL, 29, 6591, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.main", NULL, 30, 2776, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.pager", NULL, 31, 9812, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.reader", NULL, 32, 33628, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.readline", NULL, 33, 26255, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.simple_interact", NULL, 34, 7167, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.trace", NULL, 35, 854, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.types", NULL, 36, 1425, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.utils", NULL, 37, 3940, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.windows_console", NULL, 38, 27040, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_pyrepl.windows_eventqueue", NULL, 39, 1552, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_sitebuiltins", NULL, 40, 4866, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_strptime", NULL, 41, 34449, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_threading_local", NULL, 42, 5487, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"_weakrefset", NULL, 43, 12013, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"abc", NULL, 44, 7877, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"argparse", NULL, 45, 104083, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ast", NULL, 46, 103035, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio", NULL, 47, 1414, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.base_events", NULL, 48, 89712, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.base_futures", NULL, 49, 3088, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.base_subprocess", NULL, 50, 17610, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.base_tasks", NULL, 51, 4126, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.constants", NULL, 52, 971, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.coroutines", NULL, 53, 3982, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.events", NULL, 54, 36896, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.exceptions", NULL, 55, 3176, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.format_helpers", NULL, 56, 4180, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.futures", NULL, 57, 17340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.locks", NULL, 58, 28090, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.log", NULL, 59, 243, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.mixins", NULL, 60, 1062, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.proactor_events", NULL, 61, 46122, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.protocols", NULL, 62, 8368, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.queues", NULL, 63, 14715, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.runners", NULL, 64, 10090, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.selector_events", NULL, 65, 64815, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.sslproto", NULL, 66, 41776, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.staggered", NULL, 67, 6498, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.streams", NULL, 68, 34217, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.subprocess", NULL, 69, 12258, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.taskgroups", NULL, 70, 9175, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.tasks", NULL, 71, 43432, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.threads", NULL, 72, 1203, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.timeouts", NULL, 73, 8699, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.transports", NULL, 74, 13679, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.trsock", NULL, 75, 5116, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.windows_events", NULL, 76, 42161, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"asyncio.windows_utils", NULL, 77, 7418, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"base64", NULL, 78, 26080, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bisect", NULL, 79, 3461, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"bz2", NULL, 80, 15129, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"calendar", NULL, 81, 39657, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"cmd", NULL, 82, 18926, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"code", NULL, 83, 15748, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"codecs", NULL, 84, 40521, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"codeop", NULL, 85, 6604, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"collections", NULL, 86, 73313, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"colorsys", NULL, 87, 4468, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent", NULL, 88, 94, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures", NULL, 89, 1218, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures._base", NULL, 90, 31892, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures.process", NULL, 91, 35603, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"concurrent.futures.thread", NULL, 92, 10498, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"configparser", NULL, 93, 68915, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"contextlib", NULL, 94, 30458, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"contextvars", NULL, 95, 225, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"copy", NULL, 96, 10594, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"copyreg", NULL, 97, 7500, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"csv", NULL, 98, 20664, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes", NULL, 99, 25435, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ctypes._endian", NULL, 100, 3541, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dataclasses", NULL, 101, 47788, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"datetime", NULL, 102, 375, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"decimal", NULL, 103, 2966, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"difflib", NULL, 104, 72004, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"dis", NULL, 105, 47481, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email", NULL, 106, 1842, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._encoded_words", NULL, 107, 8251, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._header_value_parser", NULL, 108, 136741, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._parseaddr", NULL, 109, 23526, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email._policybase", NULL, 110, 17934, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.base64mime", NULL, 111, 3938, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.charset", NULL, 112, 14863, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.contentmanager", NULL, 113, 12195, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.encoders", NULL, 114, 2017, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.errors", NULL, 115, 7544, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.feedparser", NULL, 116, 20531, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.generator", NULL, 117, 20600, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.header", NULL, 118, 24920, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.headerregistry", NULL, 119, 31365, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.iterators", NULL, 120, 2780, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.message", NULL, 121, 51762, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.parser", NULL, 122, 6478, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.policy", NULL, 123, 11369, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.quoprimime", NULL, 124, 9873, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"email.utils", NULL, 125, 16767, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings", NULL, 126, 5972, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.aliases", NULL, 127, 12349, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.ascii", NULL, 128, 2664, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.base64_codec", NULL, 129, 3125, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.big5", NULL, 130, 2088, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.big5hkscs", NULL, 131, 2098, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.bz2_codec", NULL, 132, 4501, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.charmap", NULL, 133, 3954, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp037", NULL, 134, 3228, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1006", NULL, 135, 3304, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1026", NULL, 136, 3232, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1125", NULL, 137, 13768, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1140", NULL, 138, 3218, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1250", NULL, 139, 3255, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1251", NULL, 140, 3252, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1252", NULL, 141, 3255, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1253", NULL, 142, 3268, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1254", NULL, 143, 3257, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1255", NULL, 144, 3276, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1256", NULL, 145, 3254, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1257", NULL, 146, 3262, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp1258", NULL, 147, 3260, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp273", NULL, 148, 3214, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp424", NULL, 149, 3258, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp437", NULL, 150, 13401, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp500", NULL, 151, 3228, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp720", NULL, 152, 3326, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp737", NULL, 153, 13803, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp775", NULL, 154, 13441, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp850", NULL, 155, 12982, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp852", NULL, 156, 13457, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp855", NULL, 157, 13770, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp856", NULL, 158, 3290, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp857", NULL, 159, 12783, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp858", NULL, 160, 12952, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp860", NULL, 161, 13372, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp861", NULL, 162, 13397, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp862", NULL, 163, 13630, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp863", NULL, 164, 13393, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp864", NULL, 165, 13438, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp865", NULL, 166, 13397, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp866", NULL, 167, 13810, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp869", NULL, 168, 13340, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp874", NULL, 169, 3356, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp875", NULL, 170, 3225, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp932", NULL, 171, 2090, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp949", NULL, 172, 2090, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.cp950", NULL, 173, 2090, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_jis_2004", NULL, 174, 2104, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_jisx0213", NULL, 175, 2104, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_jp", NULL, 176, 2092, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.euc_kr", NULL, 177, 2092, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.gb18030", NULL, 178, 2094, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.gb2312", NULL, 179, 2092, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.gbk", NULL, 180, 2086, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.hex_codec", NULL, 181, 3112, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.hp_roman8", NULL, 182, 3413, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.hz", NULL, 183, 2084, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.idna", NULL, 184, 14451, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp", NULL, 185, 2105, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_1", NULL, 186, 2109, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_2", NULL, 187, 2109, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_2004", NULL, 188, 2116, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_3", NULL, 189, 2109, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_jp_ext", NULL, 190, 2114, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso2022_kr", NULL, 191, 2105, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_1", NULL, 192, 3227, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_10", NULL, 193, 3232, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_11", NULL, 194, 3326, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_13", NULL, 195, 3235, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_14", NULL, 196, 3253, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_15", NULL, 197, 3232, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_16", NULL, 198, 3234, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_2", NULL, 199, 3227, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_3", NULL, 200, 3234, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_4", NULL, 201, 3227, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_5", NULL, 202, 3228, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_6", NULL, 203, 3272, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_7", NULL, 204, 3235, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_8", NULL, 205, 3266, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.iso8859_9", NULL, 206, 3227, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.johab", NULL, 207, 2090, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.koi8_r", NULL, 208, 3279, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.koi8_t", NULL, 209, 3190, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.koi8_u", NULL, 210, 3265, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.kz1048", NULL, 211, 3242, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.latin_1", NULL, 212, 2676, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_arabic", NULL, 213, 13287, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_croatian", NULL, 214, 3274, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_cyrillic", NULL, 215, 3264, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_farsi", NULL, 216, 3208, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_greek", NULL, 217, 3248, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_iceland", NULL, 218, 3267, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_latin2", NULL, 219, 3408, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_roman", NULL, 220, 3265, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_romanian", NULL, 221, 3275, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mac_turkish", NULL, 222, 3268, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.mbcs", NULL, 223, 2188, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.oem", NULL, 224, 2001, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.palmos", NULL, 225, 3256, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.ptcp154", NULL, 226, 3349, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.punycode", NULL, 227, 10066, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.quopri_codec", NULL, 228, 3269, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.raw_unicode_escape", NULL, 229, 2711, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.rot_13", NULL, 230, 4531, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.shift_jis", NULL, 231, 2098, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.shift_jis_2004", NULL, 232, 2109, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.shift_jisx0213", NULL, 233, 2109, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.tis_620", NULL, 234, 3317, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.undefined", NULL, 235, 2651, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.unicode_escape", NULL, 236, 2691, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_16", NULL, 237, 7884, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_16_be", NULL, 238, 2268, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_16_le", NULL, 239, 2268, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_32", NULL, 240, 7778, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_32_be", NULL, 241, 2162, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_32_le", NULL, 242, 2162, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_7", NULL, 243, 2189, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_8", NULL, 244, 2248, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.utf_8_sig", NULL, 245, 6877, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.uu_codec", NULL, 246, 4815, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"encodings.zlib_codec", NULL, 247, 4421, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"enum", NULL, 248, 85815, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"filecmp", NULL, 249, 14991, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fileinput", NULL, 250, 20597, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fnmatch", NULL, 251, 6768, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"fractions", NULL, 252, 38333, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ftplib", NULL, 253, 42295, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"functools", NULL, 254, 42178, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"genericpath", NULL, 255, 7775, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"getopt", NULL, 256, 8428, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gettext", NULL, 257, 22525, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"glob", NULL, 258, 23806, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"graphlib", NULL, 259, 10161, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"gzip", NULL, 260, 31942, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"hashlib", NULL, 261, 8240, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"heapq", NULL, 262, 17734, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"hmac", NULL, 263, 10624, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"html", NULL, 264, 4334, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"html.entities", NULL, 265, 97633, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"html.parser", NULL, 266, 22251, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http", NULL, 267, 9574, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"http.client", NULL, 268, 58031, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"imaplib", NULL, 269, 62901, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib", NULL, 270, 4499, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._abc", NULL, 271, 1582, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._bootstrap", NULL, 272, 56898, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib._bootstrap_external", NULL, 273, 64920, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.abc", NULL, 274, 10285, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.machinery", NULL, 275, 1063, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata", NULL, 276, 52787, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._adapters", NULL, 277, 3849, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._collections", NULL, 278, 1888, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._functools", NULL, 279, 3203, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._itertools", NULL, 280, 2238, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._meta", NULL, 281, 3619, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata._text", NULL, 282, 3721, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.metadata.diagnose", NULL, 283, 1117, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.readers", NULL, 284, 426, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources", NULL, 285, 771, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources._adapters", NULL, 286, 9695, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources._common", NULL, 287, 8724, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources._functional", NULL, 288, 3406, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources._itertools", NULL, 289, 1429, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources.abc", NULL, 290, 8744, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources.readers", NULL, 291, 12151, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.resources.simple", NULL, 292, 5480, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.simple", NULL, 293, 433, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"importlib.util", NULL, 294, 11834, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"inspect", NULL, 295, 136576, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"io", NULL, 296, 4239, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ipaddress", NULL, 297, 91981, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json", NULL, 298, 13502, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json.decoder", NULL, 299, 13787, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json.encoder", NULL, 300, 15163, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"json.scanner", NULL, 301, 3327, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"keyword", NULL, 302, 1005, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"linecache", NULL, 303, 8516, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"locale", NULL, 304, 58963, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"logging", NULL, 305, 94314, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"lzma", NULL, 306, 15682, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"mimetypes", NULL, 307, 24862, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"modulefinder", NULL, 308, 28356, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing", NULL, 309, 935, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.connection", NULL, 310, 49361, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.context", NULL, 311, 17142, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.dummy", NULL, 312, 5734, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.dummy.connection", NULL, 313, 3553, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.forkserver", NULL, 314, 15738, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.heap", NULL, 315, 13970, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.managers", NULL, 316, 69229, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.pool", NULL, 317, 44796, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.popen_spawn_win32", NULL, 318, 6347, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.process", NULL, 319, 17738, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.queues", NULL, 320, 18936, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.reduction", NULL, 321, 14107, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.resource_sharer", NULL, 322, 9052, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.resource_tracker", NULL, 323, 15984, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.shared_memory", NULL, 324, 24217, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.sharedctypes", NULL, 325, 10887, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.spawn", NULL, 326, 11167, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.synchronize", NULL, 327, 21431, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"multiprocessing.util", NULL, 328, 20275, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"netrc", NULL, 329, 9290, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ntpath", NULL, 330, 27168, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"nturl2path", NULL, 331, 2701, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"numbers", NULL, 332, 13996, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"opcode", NULL, 333, 4026, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"operator", NULL, 334, 17329, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"os", NULL, 335, 45813, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pathlib", NULL, 336, 432, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pathlib._abc", NULL, 337, 39962, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pathlib._local", NULL, 338, 40833, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pickle", NULL, 339, 78368, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pickletools", NULL, 340, 80391, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pkgutil", NULL, 341, 19923, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"platform", NULL, 342, 44237, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"poplib", NULL, 343, 18389, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"posixpath", NULL, 344, 18084, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pprint", NULL, 345, 29662, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pstats", NULL, 346, 37821, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"py_compile", NULL, 347, 10033, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"pyclbr", NULL, 348, 15108, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"queue", NULL, 349, 17297, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"quopri", NULL, 350, 9524, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"random", NULL, 351, 35220, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"re", NULL, 352, 19515, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"re._casefix", NULL, 353, 1780, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"re._compiler", NULL, 354, 26830, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"re._constants", NULL, 355, 5343, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"re._parser", NULL, 356, 43528, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"reprlib", NULL, 357, 11124, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"rlcompleter", NULL, 358, 8536, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"runpy", NULL, 359, 14355, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sched", NULL, 360, 7561, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"secrets", NULL, 361, 2468, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"selectors", NULL, 362, 26319, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"shlex", NULL, 363, 14816, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"shutil", NULL, 364, 67416, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"signal", NULL, 365, 4508, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"socket", NULL, 366, 42183, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"socketserver", NULL, 367, 34616, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sre_compile", NULL, 368, 591, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sre_constants", NULL, 369, 594, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sre_parse", NULL, 370, 587, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"ssl", NULL, 371, 65168, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"stat", NULL, 372, 5487, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"statistics", NULL, 373, 71277, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"string", NULL, 374, 11615, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"stringprep", NULL, 375, 25224, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"struct", NULL, 376, 289, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"subprocess", NULL, 377, 83011, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"symtable", NULL, 378, 23160, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"sysconfig", NULL, 379, 25110, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tarfile", NULL, 380, 125941, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tempfile", NULL, 381, 40957, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"textwrap", NULL, 382, 17916, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"threading", NULL, 383, 63296, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"timeit", NULL, 384, 14602, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter", NULL, 385, 256318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.commondialog", NULL, 386, 1906, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.constants", NULL, 387, 1896, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.dialog", NULL, 388, 2139, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.filedialog", NULL, 389, 22882, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.messagebox", NULL, 390, 4167, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.simpledialog", NULL, 391, 17417, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tkinter.ttk", NULL, 392, 71584, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"token", NULL, 393, 3537, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tokenize", NULL, 394, 25398, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tomllib", NULL, 395, 258, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tomllib._parser", NULL, 396, 27021, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tomllib._re", NULL, 397, 3813, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tomllib._types", NULL, 398, 278, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"trace", NULL, 399, 33927, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"traceback", NULL, 400, 72187, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"tracemalloc", NULL, 401, 27377, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"types", NULL, 402, 15509, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"typing", NULL, 403, 155051, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib", NULL, 404, 90, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"urllib.parse", NULL, 405, 50829, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"warnings", NULL, 406, 29634, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"weakref", NULL, 407, 31778, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"webbrowser", NULL, 408, 26850, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml", NULL, 409, 662, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.parsers", NULL, 410, 272, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xml.parsers.expat", NULL, 411, 380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xmlrpc", NULL, 412, 90, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"xmlrpc.client", NULL, 413, 51938, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zipfile", NULL, 414, 104648, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zipfile._path", NULL, 415, 20160, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {"zipfile._path.glob", NULL, 416, 5329, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, NULL
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(PyThreadState *tstate) {
    static bool init_done = false;

    if (init_done == false) {
        // Note needed for mere data.
        loadConstantsBlob(tstate, (PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(PyThreadState *tstate) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob(tstate);
        registerMetaPathBasedLoader(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {
    {"_collections_abc", 9, 46990},
    {"_opcode_metadata", 14, 10642},
    {"_weakrefset", 43, 12013},
    {"abc", 44, 7877},
    {"ast", 46, 103035},
    {"codecs", 84, 40521},
    {"collections", 86, -73313},
    {"contextlib", 94, 30458},
    {"copyreg", 97, 7500},
    {"dis", 105, 47481},
    {"encodings", 126, -5972},
    {"encodings.aliases", 127, 12349},
    {"encodings.ascii", 128, 2664},
    {"encodings.big5", 130, 2088},
    {"encodings.big5hkscs", 131, 2098},
    {"encodings.charmap", 133, 3954},
    {"encodings.cp037", 134, 3228},
    {"encodings.cp1006", 135, 3304},
    {"encodings.cp1026", 136, 3232},
    {"encodings.cp1125", 137, 13768},
    {"encodings.cp1140", 138, 3218},
    {"encodings.cp1250", 139, 3255},
    {"encodings.cp1251", 140, 3252},
    {"encodings.cp1252", 141, 3255},
    {"encodings.cp1253", 142, 3268},
    {"encodings.cp1254", 143, 3257},
    {"encodings.cp1255", 144, 3276},
    {"encodings.cp1256", 145, 3254},
    {"encodings.cp1257", 146, 3262},
    {"encodings.cp1258", 147, 3260},
    {"encodings.cp273", 148, 3214},
    {"encodings.cp424", 149, 3258},
    {"encodings.cp437", 150, 13401},
    {"encodings.cp500", 151, 3228},
    {"encodings.cp720", 152, 3326},
    {"encodings.cp737", 153, 13803},
    {"encodings.cp775", 154, 13441},
    {"encodings.cp850", 155, 12982},
    {"encodings.cp852", 156, 13457},
    {"encodings.cp855", 157, 13770},
    {"encodings.cp856", 158, 3290},
    {"encodings.cp857", 159, 12783},
    {"encodings.cp858", 160, 12952},
    {"encodings.cp860", 161, 13372},
    {"encodings.cp861", 162, 13397},
    {"encodings.cp862", 163, 13630},
    {"encodings.cp863", 164, 13393},
    {"encodings.cp864", 165, 13438},
    {"encodings.cp865", 166, 13397},
    {"encodings.cp866", 167, 13810},
    {"encodings.cp869", 168, 13340},
    {"encodings.cp874", 169, 3356},
    {"encodings.cp875", 170, 3225},
    {"encodings.cp932", 171, 2090},
    {"encodings.cp949", 172, 2090},
    {"encodings.cp950", 173, 2090},
    {"encodings.euc_jis_2004", 174, 2104},
    {"encodings.euc_jisx0213", 175, 2104},
    {"encodings.euc_jp", 176, 2092},
    {"encodings.euc_kr", 177, 2092},
    {"encodings.gb18030", 178, 2094},
    {"encodings.gb2312", 179, 2092},
    {"encodings.gbk", 180, 2086},
    {"encodings.hp_roman8", 182, 3413},
    {"encodings.hz", 183, 2084},
    {"encodings.iso2022_jp", 185, 2105},
    {"encodings.iso2022_jp_1", 186, 2109},
    {"encodings.iso2022_jp_2", 187, 2109},
    {"encodings.iso2022_jp_2004", 188, 2116},
    {"encodings.iso2022_jp_3", 189, 2109},
    {"encodings.iso2022_jp_ext", 190, 2114},
    {"encodings.iso2022_kr", 191, 2105},
    {"encodings.iso8859_1", 192, 3227},
    {"encodings.iso8859_10", 193, 3232},
    {"encodings.iso8859_11", 194, 3326},
    {"encodings.iso8859_13", 195, 3235},
    {"encodings.iso8859_14", 196, 3253},
    {"encodings.iso8859_15", 197, 3232},
    {"encodings.iso8859_16", 198, 3234},
    {"encodings.iso8859_2", 199, 3227},
    {"encodings.iso8859_3", 200, 3234},
    {"encodings.iso8859_4", 201, 3227},
    {"encodings.iso8859_5", 202, 3228},
    {"encodings.iso8859_6", 203, 3272},
    {"encodings.iso8859_7", 204, 3235},
    {"encodings.iso8859_8", 205, 3266},
    {"encodings.iso8859_9", 206, 3227},
    {"encodings.johab", 207, 2090},
    {"encodings.koi8_r", 208, 3279},
    {"encodings.koi8_t", 209, 3190},
    {"encodings.koi8_u", 210, 3265},
    {"encodings.kz1048", 211, 3242},
    {"encodings.latin_1", 212, 2676},
    {"encodings.mac_arabic", 213, 13287},
    {"encodings.mac_croatian", 214, 3274},
    {"encodings.mac_cyrillic", 215, 3264},
    {"encodings.mac_farsi", 216, 3208},
    {"encodings.mac_greek", 217, 3248},
    {"encodings.mac_iceland", 218, 3267},
    {"encodings.mac_latin2", 219, 3408},
    {"encodings.mac_roman", 220, 3265},
    {"encodings.mac_romanian", 221, 3275},
    {"encodings.mac_turkish", 222, 3268},
    {"encodings.mbcs", 223, 2188},
    {"encodings.oem", 224, 2001},
    {"encodings.palmos", 225, 3256},
    {"encodings.ptcp154", 226, 3349},
    {"encodings.quopri_codec", 228, 3269},
    {"encodings.raw_unicode_escape", 229, 2711},
    {"encodings.shift_jis", 231, 2098},
    {"encodings.shift_jis_2004", 232, 2109},
    {"encodings.shift_jisx0213", 233, 2109},
    {"encodings.tis_620", 234, 3317},
    {"encodings.undefined", 235, 2651},
    {"encodings.unicode_escape", 236, 2691},
    {"encodings.utf_16", 237, 7884},
    {"encodings.utf_16_be", 238, 2268},
    {"encodings.utf_16_le", 239, 2268},
    {"encodings.utf_32", 240, 7778},
    {"encodings.utf_32_be", 241, 2162},
    {"encodings.utf_32_le", 242, 2162},
    {"encodings.utf_7", 243, 2189},
    {"encodings.utf_8", 244, 2248},
    {"encodings.utf_8_sig", 245, 6877},
    {"encodings.uu_codec", 246, 4815},
    {"encodings.zlib_codec", 247, 4421},
    {"enum", 248, 85815},
    {"functools", 254, 42178},
    {"genericpath", 255, 7775},
    {"importlib", 270, -4499},
    {"importlib._bootstrap", 272, 56898},
    {"importlib._bootstrap_external", 273, 64920},
    {"importlib.machinery", 275, 1063},
    {"inspect", 295, 136576},
    {"io", 296, 4239},
    {"keyword", 302, 1005},
    {"linecache", 303, 8516},
    {"locale", 304, 58963},
    {"ntpath", 330, 27168},
    {"opcode", 333, 4026},
    {"operator", 334, 17329},
    {"os", 335, 45813},
    {"quopri", 350, 9524},
    {"re", 352, -19515},
    {"re._casefix", 353, 1780},
    {"re._compiler", 354, 26830},
    {"re._constants", 355, 5343},
    {"re._parser", 356, 43528},
    {"reprlib", 357, 11124},
    {"stat", 372, 5487},
    {"token", 393, 3537},
    {"tokenize", 394, 25398},
    {"types", 402, 15509},
    {"weakref", 407, 31778},
    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Calling _loadBytesCodesBlob.");
    _loadBytesCodesBlob(NULL);

    NUITKA_PRINT_TIMING("copyFrozenModulesTo(): Updating frozen module table sizes.");

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;
#if PYTHON_VERSION >= 0x3b0
        destination->is_package = current->size < 0;
        destination->size = Py_ABS(destination->size);
#if PYTHON_VERSION < 0x3d0
        destination->get_code = NULL;
#endif
#endif
        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

#if _NUITKA_MODULE_MODE

struct Nuitka_MetaPathBasedLoaderEntry const *getLoaderEntry(char const *name) {
    struct Nuitka_MetaPathBasedLoaderEntry *current = meta_path_loader_entries;

    while (current->name != NULL) {
        if ((current->flags & NUITKA_TRANSLATED_FLAG) != 0) {
            current->name = UN_TRANSLATE(current->name);
            current->flags -= NUITKA_TRANSLATED_FLAG;
        }

        if (strcmp(name, current->name) == 0) {
            return current;
        }

        current++;
    }

    assert(false);
    return NULL;
}
#endif

